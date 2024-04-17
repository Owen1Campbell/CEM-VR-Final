import cv2
import numpy as np
import sys
import math

def find_lines(con):
  orig_img = con
  #orig_img = cv2.imread('contour1.jpg',1)
  grayscale_img = cv2.cvtColor(orig_img, cv2.COLOR_BGR2GRAY)
  grayscale_img = cv2.GaussianBlur(grayscale_img, (11,11), 0)
  dst = grayscale_img
  #cv2.imwrite('dst.jpg', dst)

  #Hough Line Transform
  t=300;j=0
  while(j<8 and t>0):     
      try:linesP=cv2.HoughLines(dst,1,np.pi/180,t);j=linesP.shape[0]
      except:j=0
      t=t-10

  lines=linesP.reshape(linesP.shape[0],2)
  t=0;c=0;lu=[]
  for l in lines:
      c=c+1;rho,theta=l
      for lt in lines[c:]:
          t=0
          if(lt[0]!=l[0]):
              rhot,thetat=lt
              k=abs(lt-l)<[50,0.5] 
              if(k[0] and k[1]):
                  t=-1;break                
      lu.append(l)
      
  lr=np.asarray(lu[:10]);j=np.reshape(lr,[lr.shape[0],1,2])

  for rho, theta in lr:
      a = np.cos(theta)
      b = np.sin(theta)
      x0 = a*rho
      y0 = b*rho
      #print(x0," ",y0)

  #removes similar lines
  count0 = 0
  result = []
  for rho0,theta0 in lr:
      #if(np.pi/4 < theta0) and (theta0 < np.pi*3/4):
        catch = 0
        a = np.cos(theta0)
        b = np.sin(theta0)
        x0 = a*rho0
        y0 = b*rho0
        for rho1, theta1 in result:
            a = np.cos(theta1)
            b = np.sin(theta1)
            x1 = a*rho1
            y1 = b*rho1
            if(abs(x0-x1)<50 or abs(y0-y1)<50):
                catch=1
        if catch == 0:
            result.append([rho0, theta0])
        count0=count0+1

  #Sort lines left to right.
  result.sort()

  #Records line info for setting corners correctly.
  count=0
  return_line_info = []
  return_list = []
  theta_list = []
  for rho,theta in result:
      theta_list.append(theta)
      count = count+1
      #print(count)
      a = np.cos(theta)
      b = np.sin(theta)
      return_line_info.append(a)
      return_line_info.append(b)
      x0 = a*rho
      y0 = b*rho
      return_line_info.append(x0)
      return_line_info.append(y0)
      thingy = -(y0/a)
      x1 = int(x0 + 5000*(-b))
      y1 = int(y0 + 5000*(a))
      x2 = int(x0 - 5000*(-b))
      y2 = int(y0 - 5000*(a))
      x8 = int(x0 + thingy*(-b))
      y8 = int(y0 - thingy*(a))
      #print(x0)
      #print(y0)
      #print("Top Intersection", x8)
      return_list.append(x8)

      #Slope
      slope = (x2 - x1)/(y2 - y1)

      cv2.line(orig_img,(x1,y1),(x2,y2),(0,0,255),2)

  cv2.imwrite('houghlines3.jpg', orig_img)
  return return_list, return_line_info, theta_list

def m_close(img):
    # Removes text and blurs background to prepare for edge detection.
    img_arr = np.ones((5,5),np.uint8)
    img = cv2.morphologyEx(img, cv2.MORPH_CLOSE, img_arr, iterations=3)
    return img

def cut(img, rectangle):
  #Setup for GrabCut - Always constant
  mask = np.zeros(img.shape[:2], dtype = np.uint8)
  background_model = np.zeros((1,65), np.float64)
  foreground_model = np.zeros((1,65), np.float64)
  #Make the mask
  #print("Rectangle")
  #print(rectangle[0])
  #print(rectangle[1])
  #print(rectangle[2])
  #print(rectangle[3])
  (mask, background_model, foreground_model) = cv2.grabCut(img, mask, rectangle, background_model, foreground_model, 15, cv2.GC_INIT_WITH_RECT)
  #Set all background objects to zero and all other objects to one
  outputMask = np.where((mask == cv2.GC_BGD) | (mask == cv2.GC_PR_BGD), 0, 1)
  #Scale the mask
  outputMask = (outputMask * 255).astype("uint8")
  #Apply the mask
  img = cv2.bitwise_and(img, img, mask=outputMask)

  #output the masks for examples
  valueMask = (mask == 1).astype("uint8") * 255
  #cv2.imwrite('mask1.jpg', valueMask)
  valueMask = (mask == 2).astype("uint8") * 255
  #cv2.imwrite('mask2.jpg', valueMask)
  valueMask = (mask == 3).astype("uint8") * 255
  #cv2.imwrite('mask3.jpg', valueMask)
  valueMask = (mask == 4).astype("uint8") * 255
  #cv2.imwrite('mask4.jpg', valueMask)

  return img

def edge(img):
  #Make the image grayscale so edge detection can be performed
  grayscale_img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
  grayscale_img = cv2.GaussianBlur(grayscale_img, (11,11), 0)
  #Edge detection
  canny = cv2.Canny(grayscale_img, 0, 200)
  canny = cv2.dilate(canny, cv2.getStructuringElement(cv2.MORPH_ELLIPSE, (5,5)))
  return canny

def contour(img, canny, num, num_contours):
  #Make blank image
  blank_img = np.zeros_like(img)
  #Finding contours for the detected edges.
  contours, hierarchy = cv2.findContours(canny, cv2.RETR_LIST, cv2.CHAIN_APPROX_NONE)
  #Keeping only the largest detected contour.
  page = sorted(contours, key=cv2.contourArea, reverse=True)[:num_contours]
  #---
  con = cv2.drawContours(blank_img, page, -1, (0, 255, 255), 3) 
  # find the biggest countour (c) by the area
  #c = max(contours, key = cv2.contourArea)
  #con = cv2.drawContours(blank_img, c, -1, (0, 255, 255), 3) 

  # draw the biggest contour (c) in green
  #x,y,w,h = cv2.boundingRect(c)
  #cv2.rectangle(output,(x,y),(x+w,y+h),(0,255,0),2)
  #---
  #cv2.imwrite('contour'+str(num)+'.jpg', con)
  return con, page

def corners(img, page, num):
   # Blank canvas.
  con = np.zeros_like(img)
  # Loop over the contours.
  for c in page:
    # Approximate the contour.
    epsilon = 0.02 * cv2.arcLength(c, True)
    corners = cv2.approxPolyDP(c, epsilon, True)
    # If our approximated contour has four points
    if len(corners) == 4:
        break
  cv2.drawContours(con, c, -1, (0, 255, 255), 3)
  cv2.drawContours(con, corners, -1, (0, 255, 0), 10)
  # Sorting the corners and converting them to desired shape.
  corners = sorted(np.concatenate(corners).tolist())

  corners = order_points(corners)
  
  # Displaying the corners.
  for index, c in enumerate(corners):
    character = chr(65 + index)
    #print("Corner"+str(chr)+":", end="")
    #print(tuple(c))
    cv2.putText(con, character, tuple(c), cv2.FONT_HERSHEY_SIMPLEX, 1, (255, 0, 0), 1, cv2.LINE_AA)

  output = 'corners'+str(num)+'.jpg'
  cv2.imwrite(output, con)
  return con, corners

def order_points(pts):
  '''Rearrange coordinates to order:
    top-left, top-right, bottom-right, bottom-left'''
  rect = np.zeros((4, 2), dtype='float32')
  pts = np.array(pts)
  s = pts.sum(axis=1)
  # Top-left point will have the smallest sum.
  rect[0] = pts[np.argmin(s)]
  # Bottom-right point will have the largest sum.
  rect[2] = pts[np.argmax(s)]
 
  diff = np.diff(pts, axis=1)
  # Top-right point will have the smallest difference.
  rect[1] = pts[np.argmin(diff)]
  # Bottom-left will have the largest difference.
  rect[3] = pts[np.argmax(diff)]

  #print('Ordered Points:')
  #print(rect[0])
  #print(rect[1])
  #print(rect[2])
  #print(rect[3])
  # Return the ordered coordinates.
  return rect.astype('int').tolist()

def get_coords(corners):
  (tl, tr, br, bl) = corners
  # Finding the maximum width.
  widthA = np.sqrt(((br[0] - bl[0]) ** 2) + ((br[1] - bl[1]) ** 2))
  widthB = np.sqrt(((tr[0] - tl[0]) ** 2) + ((tr[1] - tl[1]) ** 2))
  maxWidth = max(int(widthA), int(widthB))
  # Finding the maximum height.
  heightA = np.sqrt(((tr[0] - br[0]) ** 2) + ((tr[1] - br[1]) ** 2))
  heightB = np.sqrt(((tl[0] - bl[0]) ** 2) + ((tl[1] - bl[1]) ** 2))
  maxHeight = max(int(heightA), int(heightB))
  # Final destination co-ordinates.
  destination_corners = [[0, 0], [maxWidth, 0], [maxWidth, maxHeight], [0, maxHeight]]
  #print('Get_Coordinates')
  return destination_corners

def perspective(img, obj_corners, dest_corners):
  M = cv2.getPerspectiveTransform(np.float32(obj_corners), np.float32(dest_corners))
  # Perspective transform using homography.
  final = cv2.warpPerspective(orig_img, M, (dest_corners[2][0], dest_corners[2][1]), flags=cv2.INTER_LINEAR)
  return final


#TO-DO: 
#       Top and bottom cut???
#       - If one corner is up really high perform a top cut a bit higher than the lowest top corner. Test which lengths work best
#       - Better bottom corner alignment. Get it to straighten out images better. Find angle between top corners and make that the angle between bottom corners.
#       - If realigning corner to line dont move it all the way. Move a few pixels up and in (Test whcih numbers work best)
#       - Perform one last cut and see what happens? Does that fix images with remaining corners? Bc at that point we lowered the top by enough to avoid artifacts.



#---------------------MAIN---------------------
#---SET STARTING VARIABLES---
#Get the image from the input directory.
input_path = str(sys.argv[1])
input_file = str(sys.argv[2])
input_path = input_path + "\\" + input_file
orig_img = cv2.imread(input_path,1)

#Set output folder
output_path = sys.argv[3]

#Set corner detection type
dest_corner_type = "Other"
if len(sys.argv) > 4:
   dest_corner_type = sys.argv[4]
   print(sys.argv[4])
   print(dest_corner_type)

#If using bounding box retrieve it and if not set which type of operation to perform.
bounding_rec = 0
if(len(sys.argv) > 5):
  bounding_rec = tuple(map(int, sys.argv[5].split(',')))

#---FIRST BACKGROUND CUT---
#Close and dilate image
close_img = m_close(orig_img)
#cv2.imwrite('close.jpg',close_img)

#Perform GrabCut: Create rectangle bounding box and pass into GrabCut.
if bounding_rec == 0:
  rectangle = (50, 50, close_img.shape[1]-100, close_img.shape[0]-100) #Left side offset, Top offset, Right side offset, Bottom offset (x,y,w,h)
else:
  rectangle = bounding_rec
img = cut(close_img, rectangle)
#cv2.imwrite('cut.jpg',img)

#Perform edge/contour detectiong then corner detection.
canny = edge(img)
con, page = contour(img, canny, 1, 1)
img, img_corners = corners(con, page, 1)
dest_corners = get_coords(img_corners)

#---LINE DETECTION---
#Perform line detection and record information.

#Skip if dynamic corner detection
line_list = []
if dest_corner_type != "Dynamic":
  line_list, line_info, theta_list = find_lines(con) #line_info a, b, x0, y0

#Skip if line detection failed
if len(line_list) == 2:
  #print("Top Left Intersection", end="")
  #print(line_list[0])
  #print("Top Right Intersection", end="")
  #print(line_list[1]-line_list[0])
  #If not using masking model perform another cut based on the top intersections to get a more accurate background cut.
  if bounding_rec == 0:
    #Set bounding box and pass into GrabCut.
    rectangle = (line_list[0], 50, line_list[1]-line_list[0], close_img.shape[0]-100) #Left side offset, Top offset, width, height (x,y,w,h)
    the_cut = cut(close_img, rectangle)  
    output = 'cut'+str(200)+input_file+'.jpg'
    #cv2.imwrite(output, the_cut)

    #Perform edge and contour detection
    canny = edge(the_cut)
    img, page = contour(the_cut, canny, 200, 1)
    img, img_corners = corners(img, page, 200)

  #If corners really high then perform one last cut above the other top corner
  if(abs(img_corners[0][1]-img_corners[1][1]) > 200):
    #print("Too High!")
    if(img_corners[0][1]<100):
      #print(img_corners[0][1])
      rectangle = (line_list[0], img_corners[1][1]-250, line_list[1]-line_list[0], close_img.shape[0]-100) #Left side offset, Top offset, width, height (x,y,w,h)
      the_cut = cut(close_img, rectangle)  
      output = 'cut'+str(300)+'.jpg'
      #cv2.imwrite(output, the_cut)
    
    if(img_corners[1][1]<100):
      #print(img_corners[1][1])
      rectangle = (line_list[0], img_corners[0][1]-250, line_list[1]-line_list[0], close_img.shape[0]-100) #Left side offset, Top offset, width, height (x,y,w,h)
      the_cut = cut(close_img, rectangle)  
      output = 'cut'+str(300)+'.jpg'
      #cv2.imwrite(output, the_cut)


  #Perform edge and contour detection
  canny = edge(img)
  img, page = contour(img, canny, 300, 1)
  img, img_corners = corners(img, page, 300)

  #Set corners to lines

  ''' DEBUG: Shows how values are received.
  print('a1', end="")
  print(line_info[0])
  print('b1', end="")
  print(line_info[1])
  print('x01', end="")
  print(line_info[2])
  print('y01', end="")
  print(line_info[3])
  print('a2', end="")
  print(line_info[4])
  print('b2', end="")
  print(line_info[5])
  print('x02', end="")
  print(line_info[6])
  print('y02', end="")
  print(line_info[7])
  '''

  #Set corners to detected lines and correct top corners.
  #Top left
  thingy = (img_corners[0][1] - line_info[3])/line_info[0]  # = (y-TopIntersection)/a1
  new_x = line_info[2]-(thingy*line_info[1])    # x = b - ( *b1)
  #Record amount of offset and offset vertically based on natural log.
  horizontal_offset = img_corners[0][0] - new_x
  img_corners[0][0] = new_x
  #print("HORIZONTAL OFFSET:", end="")
  #print(horizontal_offset)
  if horizontal_offset > 50:
    vertical_offset = (math.log(horizontal_offset) * 20)
    #print("VERTICAL OFFSET:", end="")
    #print(vertical_offset)
    #print("Before:", end="")
    #print(img_corners[0][1])

    img_corners[0][1] = img_corners[0][1] + vertical_offset
    #print("After:", end="")
    #print(img_corners[0][1])
  #Top right
  thingy = (img_corners[1][1] - line_info[7])/line_info[4]
  new_x = line_info[6]-(thingy*line_info[5])
  #Record amount of offset and offset vertically based on natural log.
  horizontal_offset = img_corners[1][0] - new_x
  img_corners[1][0] = new_x
  #print("HORIZONTAL OFFSET:", end="")
  #print(horizontal_offset)
  if horizontal_offset < -50:
    horizontal_offset = horizontal_offset*-1
    vertical_offset = (math.log(horizontal_offset) * 20)
    #print("VERTICAL OFFSET:", end="")
    #print(vertical_offset)
    #print("Before:", end="")
    #print(img_corners[1][1])

    img_corners[1][1] = img_corners[1][1] + vertical_offset
    #print("After:", end="")
    #print(img_corners[1][1])
  #Bottom right
  thingy = (img_corners[2][1] - line_info[7])/line_info[4]
  img_corners[2][0] = line_info[6]-(thingy*line_info[5])
  #Bottom left
  thingy = (img_corners[3][1] - line_info[3])/line_info[0]
  img_corners[3][0] = line_info[2]-(thingy*line_info[1])

#Correct bottom corners
#Move the correct corner enough to create the line with same angle as top.
#Find line between top corners and angle of that line (From Right Hand side 0 degrees)
#Find line between bottom corners and angle of that line.
#If angle positive and bottom line inverse angle is greater, move bottom corner up, else move top corner up.
#If angle negative and bottom line inverse angle is greater, move bottom corner up, else move top corner up.

  '''
top_theta    = math.atan((img_corners[0][1]-img_corners[1][1])/(img_corners[0][0]-img_corners[1][0]))
bottom_theta = math.atan((img_corners[3][1]-img_corners[2][1])/(img_corners[3][0]-img_corners[2][0]))
left_theta = theta_list[0]
right_theta = theta_list[1]
print("ANGLES:")
print(top_theta)
print(bottom_theta)

top_slope = (img_corners[1][1]-img_corners[0][1])/(img_corners[1][0]-img_corners[0][0]) #y2-y1/x2-x1
left_slope = (line_info[3]-0)/(line_list[2]-line_info[0])  #Point 
right_slope = (0-line_info[7])/(line_list[1]-line_info[6])  #Point 
#bottom line (highest bottom corner and (2448, y1))
if abs(bottom_theta)>abs(top_theta): #Bottom angle is bigger, raise bottommest corner up.
   print("RAISING BOTTOM CORNER")
   if(img_corners[3][1]>img_corners[2][1]): # If the left side needs to be raised.
      print("RAISING LEFT CORNER")
      x0 = img_corners[2][0]
      y0 = img_corners[2][1]
      m0 = -top_slope
      x1 = line_info[2]
      y1 = line_info[3]
      m1 = left_slope

      #Intersection - Find X
      x = (m0*x0-m1-x1+y1-y0)/(m0-m1)
      y = m0*(x-x0)+y0

      img_corners[3][0] = x
      img_corners[3][1] = y
   if(img_corners[3][1]<img_corners[2][1]): # If the right side needs to be raised.
      print("RAISING RIGHT CORNER")
      x0 = img_corners[3][0]
      y0 = img_corners[3][1]
      m0 = -top_slope
      x1 = line_info[6]
      y1 = line_info[7]
      m1 = right_slope

      print(x0)
      print(y0)
      print(m0)
      print(x1)
      print(y1)
      print(m1)

      #Intersection - Find X
      x = (m0*x0-m1-x1+y1-y0)/(m0-m1)
      y = m0*(x-x0)+y0

      img_corners[2][0] = x
      img_corners[2][1] = y


  #bottom line (highest bottom corner and (2448, y1))
  #See where the line based on top theta intersects (based on highest bottom corner) and set the other bottom corner there.
#if (-bottom_theta)<top_theta:
  #bottom line (lowest bottom corner and (2448, y1))
  #See where the line based on top theta intersects (based on lowest bottom corner) and set the other bottom corner there.
'''
#Skip if dynamic corner detection enabled
if dest_corner_type == "Standard":
  #Cut in corners by a little bit to account for any lines going slightly beyond border of headstone.
  img_corners[0][0] = img_corners[0][0] + 15
  img_corners[1][0] = img_corners[1][0] - 15
  img_corners[2][0] = img_corners[2][0] - 15
  img_corners[3][0] = img_corners[3][0] + 15
img_corners = order_points(img_corners)


#---PERSPECTIVE CHANGE---
#Sets up the corners to have a good perspective.
if dest_corner_type != "Standard":
  dest_corners = get_coords(img_corners)

#Overwrites that good perspective to instead fit the required lenght by width.
#Front headstone dimensions: 1005 x 1590
#Back headstone dimensions: 1043 x 1590
if dest_corner_type == "Standard":
  dest_corners = [[0,0],[1005,0],[1005,1590],[0,1590]]

#Perform image perspective changes
img = perspective(orig_img, img_corners, dest_corners)
#cv2.imwrite(input_file,img)

#---OUTPUT---
#Output the image to the current directory.
cv2.imwrite(output_path+'/'+input_file, img)
#print("Image written to dir")
