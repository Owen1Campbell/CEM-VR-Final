#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct List_1_tE020B120302E34B781278C33685F2DA255337446;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteStatement>
struct List_1_t7D17A1BF1130ACFFA0E9137E8A4A09FD5DCA26C3;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<SQLiteDatabase.SQLiteDB/DB_DataPair>
struct List_1_tB771D4A1A06199773AE1BA75A8AE0DE6762AAB88;
// System.Collections.Generic.List`1<SQLiteDatabase.SQLiteDB/DB_Field>
struct List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>[]
struct Dictionary_2U5BU5D_tF3731166E97A9D9E091E8FEDF8384CEAC68CF4D3;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Mono.Data.Sqlite.SQLiteType[]
struct SQLiteTypeU5BU5D_t9577E5DC506B1996F06A2CFA7094F5F7BD8A4EE2;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// SQLiteDatabase.SQLiteDB/DB_DataPair[]
struct DB_DataPairU5BU5D_tA35494F0E79D99265CF05861B14C58760DC72486;
// SQLiteDatabase.SQLiteDB/DB_Field[]
struct DB_FieldU5BU5D_t3C7348AFA5895778A08744E869968044BE120489;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.ComponentModel.Component
struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083;
// SQLiteDatabase.DBReader
struct DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF;
// SQLiteDatabase.DBSchema
struct DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8;
// System.Exception
struct Exception_t;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.ComponentModel.ISite
struct ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Mono.Data.Sqlite.SQLiteBase
struct SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE;
// Mono.Data.Sqlite.SQLiteCommitCallback
struct SQLiteCommitCallback_tC40586DD8AA664D8BC2E2B5C34F3406DBC953FFD;
// Mono.Data.Sqlite.SQLiteCommitHandler
struct SQLiteCommitHandler_t19C02860BAD4E8E4FC7FD15BBDFC290D5E56EFF2;
// SQLiteDatabase.SQLiteDB
struct SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF;
// Mono.Data.Sqlite.SQLiteEnlistment
struct SQLiteEnlistment_tD69C41BBAEDD2F8ED9EDD2F9B8690BC4BB4BDAF5;
// SQLiteDatabase.SQLiteEventListener
struct SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A;
// Mono.Data.Sqlite.SQLiteRollbackCallback
struct SQLiteRollbackCallback_t98CA336F8643C59817C9BAF0805D000A3136045F;
// Mono.Data.Sqlite.SQLiteUpdateCallback
struct SQLiteUpdateCallback_t70BBEEEA989EF27B8FB86F7194729ABDCC2BDFB2;
// Mono.Data.Sqlite.SQLiteUpdateEventHandler
struct SQLiteUpdateEventHandler_t8B66CFE2899681DA8EE4EA7D3166A7D0E3C7F750;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// Mono.Data.Sqlite.SqliteCommand
struct SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25;
// Mono.Data.Sqlite.SqliteConnection
struct SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64;
// Mono.Data.Sqlite.SqliteDataReader
struct SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835;
// Mono.Data.Sqlite.SqliteKeyReader
struct SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF;
// Mono.Data.Sqlite.SqliteParameterCollection
struct SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334;
// Mono.Data.Sqlite.SqliteStatement
struct SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7;
// Mono.Data.Sqlite.SqliteTransaction
struct SqliteTransaction_t5CFD0E46CAF0C4FB991C2AD83395F245F6648542;
// System.Data.StateChangeEventHandler
struct StateChangeEventHandler_t0C16938B27C80342B5A7D6645F3DA8F5E4AA71E1;
// System.String
struct String_t;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WWW
struct WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB;
// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;
// SQLiteDatabase.SQLiteEventListener/OnError
struct OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE020B120302E34B781278C33685F2DA255337446_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral069B4B30890E9F5A795AE805C0312AE1B9B69845;
IL2CPP_EXTERN_C String_t* _stringLiteral0AAA5F20B4D33A3BE0CC8A1E10CEA2459CDC61C0;
IL2CPP_EXTERN_C String_t* _stringLiteral14021205275CEEA4D32B09CB2239421C8BA3BF75;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E;
IL2CPP_EXTERN_C String_t* _stringLiteral2351BAFB34D9C5F1C3FDBEF359636ABB23018957;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral26FBFEE106233905F80DE6B30A8922886088B952;
IL2CPP_EXTERN_C String_t* _stringLiteral2746B283A9377664FAC642B633C6E630FD0DA207;
IL2CPP_EXTERN_C String_t* _stringLiteral28D8253BC9B2535C67B29B312DB089DEC5F15D01;
IL2CPP_EXTERN_C String_t* _stringLiteral2C22DA453C536A0C582C283F29CE62CE5250FBF9;
IL2CPP_EXTERN_C String_t* _stringLiteral315B6C12262BF11C219578648A1B087EA48ADB91;
IL2CPP_EXTERN_C String_t* _stringLiteral31C41112B7DD380345C2F6555DB2A970209CCB01;
IL2CPP_EXTERN_C String_t* _stringLiteral3A5341BD21CD624BBF4D079EE7155152E17ACE09;
IL2CPP_EXTERN_C String_t* _stringLiteral3A9E52FBAE9917F91F5FFD048386DE1A2121C92B;
IL2CPP_EXTERN_C String_t* _stringLiteral3BF4F65E6C6B41449B8DBED5A74A32F2319A9FBD;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral4520D0729098C64C74179A6FD8C55CDF197172F1;
IL2CPP_EXTERN_C String_t* _stringLiteral45DC883871F1AAB49889B84527A442DB88D8A93D;
IL2CPP_EXTERN_C String_t* _stringLiteral509C865754F7A2422F25CEF7769CBD96A1C21C93;
IL2CPP_EXTERN_C String_t* _stringLiteral51C317C58A113528FA1D3CF28D0FACAD09C31D9E;
IL2CPP_EXTERN_C String_t* _stringLiteral5322D3E4BC6A80BF937D7B4B6584BD3E16E4AE51;
IL2CPP_EXTERN_C String_t* _stringLiteral5521F119A9546AC293A71CE4DC89A30740FA9FC7;
IL2CPP_EXTERN_C String_t* _stringLiteral5857551470FA48B3F71F992583A93239D3BFAF12;
IL2CPP_EXTERN_C String_t* _stringLiteral676FF875112FEC6644D2BE46FE714B179AEF2621;
IL2CPP_EXTERN_C String_t* _stringLiteral6955B13A4C5FF7336FF5297BF9C12A8D6BD75455;
IL2CPP_EXTERN_C String_t* _stringLiteral6A7E0B1E8DC0EA9E1D0E1369F5AFBB5DB1AF20A2;
IL2CPP_EXTERN_C String_t* _stringLiteral6D5A0A71D5C9C05AD6766B952219E3C055677C00;
IL2CPP_EXTERN_C String_t* _stringLiteral70F8B153ADDD50FBCC5EF9A0F9FA30B670AF0728;
IL2CPP_EXTERN_C String_t* _stringLiteral7245750688F8ABD9E50DA82005D421F8461EC1E6;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral75EE8733258B2DB77C4BB8B9E091F4D37134AC5D;
IL2CPP_EXTERN_C String_t* _stringLiteral774EC1C89B5B0276F261B36CAC370D7CE3C66893;
IL2CPP_EXTERN_C String_t* _stringLiteral786610ECE537123B5B868EF7D68E5957D270BA8C;
IL2CPP_EXTERN_C String_t* _stringLiteral7CF56E636E289DC7B21A0516AC90C9B3E9B7224A;
IL2CPP_EXTERN_C String_t* _stringLiteral969293C4EBCD2637A59D4F7676AF011FC83A7950;
IL2CPP_EXTERN_C String_t* _stringLiteral991EBC7D738316C24C3082806AC7B86E69581D7B;
IL2CPP_EXTERN_C String_t* _stringLiteral9AA220E0FCE5E917D823E177B898237A503A6AF9;
IL2CPP_EXTERN_C String_t* _stringLiteralA18E784C84762DFFFFA0DCFDA6BBAABEF55A100A;
IL2CPP_EXTERN_C String_t* _stringLiteralA31DB08646EB05C1C8A3E453556E25CF60B0F736;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralA3ECBB469774B57CCC7019C104E3DF55A41DFBE0;
IL2CPP_EXTERN_C String_t* _stringLiteralB087F64AD515D0B7E4AC564EE597539328CF438C;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB77D32D46DD32C6DEE17A344ECF5FC9EB0D063D8;
IL2CPP_EXTERN_C String_t* _stringLiteralBCC2B3732F0D680763BA8799D812C45D4BC4DB68;
IL2CPP_EXTERN_C String_t* _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC5D9D56F534D3D95C55393032686CA5D9252AC4F;
IL2CPP_EXTERN_C String_t* _stringLiteralC617B71DF6839C0E667D60222D194FD69EB2A345;
IL2CPP_EXTERN_C String_t* _stringLiteralCE397DAE59EDAD9F58B22EF99DACB2BDA2F99284;
IL2CPP_EXTERN_C String_t* _stringLiteralDA972D1E77B4E56B74D5C63144C426DD57598177;
IL2CPP_EXTERN_C String_t* _stringLiteralDD8FA2335D5D09C3C4B884B5AD26AFAAB00B0DC1;
IL2CPP_EXTERN_C String_t* _stringLiteralE056B56AEA145308B7C937EF8AAAC8C6DD887B69;
IL2CPP_EXTERN_C String_t* _stringLiteralE622D1F8DD391D6878C952018EB48CC8CAA260D3;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralF1FCB5C8B2C10D7875109E85FBEE789FAC8804E7;
IL2CPP_EXTERN_C String_t* _stringLiteralF652530F436891F11688FEBD3FF6C4B433BAAC82;
IL2CPP_EXTERN_C String_t* _stringLiteralF7C85A436DB537D03DC7554B046DFB3EB53C07A6;
IL2CPP_EXTERN_C String_t* _stringLiteralF8757EC8662AB8F8DAF6E397AAA78671AFF776B8;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2373D97BDFD1E87499B88D67294029BE8B08F418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA293F10765359D70384794AA7DA94A25FA0AC15E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE5C15DF832BF5479B60449351B1837B5E89A578A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_TrimExcess_m3E00C910C1441898A6F95B6CC634BC45B9C9F95A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB0CFC5E35B840AE25C5F2B640B98E5D9CE401B08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC135AA4DC7629479FB15660CEC8727D048878A7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7E97A1C21BC9C1F1CD486F87F21FC8A4C4523748_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9C4E5C345C08B7CA77C03DE67A079031EAA53207_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3D545CD6B59359FFE862706E5BAB5E7DFFA704E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct DB_FieldU5BU5D_t3C7348AFA5895778A08744E869968044BE120489;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t53E093E4A66B9E30F0CB4C274A492DC43C7289D6 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct List_1_tE020B120302E34B781278C33685F2DA255337446  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Dictionary_2U5BU5D_tF3731166E97A9D9E091E8FEDF8384CEAC68CF4D3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE020B120302E34B781278C33685F2DA255337446_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Dictionary_2U5BU5D_tF3731166E97A9D9E091E8FEDF8384CEAC68CF4D3* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<SQLiteDatabase.SQLiteDB/DB_DataPair>
struct List_1_tB771D4A1A06199773AE1BA75A8AE0DE6762AAB88  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DB_DataPairU5BU5D_tA35494F0E79D99265CF05861B14C58760DC72486* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB771D4A1A06199773AE1BA75A8AE0DE6762AAB88_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DB_DataPairU5BU5D_tA35494F0E79D99265CF05861B14C58760DC72486* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<SQLiteDatabase.SQLiteDB/DB_Field>
struct List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DB_FieldU5BU5D_t3C7348AFA5895778A08744E869968044BE120489* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DB_FieldU5BU5D_t3C7348AFA5895778A08744E869968044BE120489* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// SQLiteDatabase.DBReader
struct DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>> SQLiteDatabase.DBReader::dataTable
	List_1_tE020B120302E34B781278C33685F2DA255337446* ___dataTable_0;
	// System.Int16 SQLiteDatabase.DBReader::rowCounter
	int16_t ___rowCounter_1;
};

// SQLiteDatabase.DBSchema
struct DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C  : public RuntimeObject
{
	// System.String SQLiteDatabase.DBSchema::_name
	String_t* ____name_0;
	// System.Collections.Generic.List`1<SQLiteDatabase.SQLiteDB/DB_Field> SQLiteDatabase.DBSchema::fieldList
	List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* ___fieldList_1;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// SQLiteDatabase.SQLiteDB
struct SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF  : public RuntimeObject
{
	// System.String SQLiteDatabase.SQLiteDB::_dbName
	String_t* ____dbName_1;
	// System.String SQLiteDatabase.SQLiteDB::_dbPath
	String_t* ____dbPath_2;
	// System.Boolean SQLiteDatabase.SQLiteDB::_isOverWrite
	bool ____isOverWrite_3;
	// Mono.Data.Sqlite.SqliteConnection SQLiteDatabase.SQLiteDB::connection
	SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* ___connection_4;
	// Mono.Data.Sqlite.SqliteDataReader SQLiteDatabase.SQLiteDB::reader
	SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* ___reader_5;
	// Mono.Data.Sqlite.SqliteCommand SQLiteDatabase.SQLiteDB::command
	SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* ___command_6;
};

struct SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF_StaticFields
{
	// SQLiteDatabase.SQLiteDB SQLiteDatabase.SQLiteDB::_instance
	SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* ____instance_0;
};

// SQLiteDatabase.SQLiteEventListener
struct SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A  : public RuntimeObject
{
};

struct SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields
{
	// SQLiteDatabase.SQLiteEventListener/OnError SQLiteDatabase.SQLiteEventListener::onErrorInvoker
	OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* ___onErrorInvoker_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.ComponentModel.Component
struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* ___events_3;
};

struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_StaticFields
{
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject* ___EventDisposed_1;
};

// System.Data.Common.DbDataReader
struct DbDataReader_tA1A9729B3ED5125A693F4442984CCE7D721F452F  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WWW
struct WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ____uwr_0;
};

// SQLiteDatabase.SQLiteDB/DB_ConditionPair
struct DB_ConditionPair_tC1E8B0E10DA9A16ADCFFBD910B24BBA753E83D06 
{
	// System.String SQLiteDatabase.SQLiteDB/DB_ConditionPair::fieldName
	String_t* ___fieldName_0;
	// System.String SQLiteDatabase.SQLiteDB/DB_ConditionPair::value
	String_t* ___value_1;
	// SQLiteDatabase.SQLiteDB/DB_Condition SQLiteDatabase.SQLiteDB/DB_ConditionPair::condition
	int32_t ___condition_2;
};
// Native definition for P/Invoke marshalling of SQLiteDatabase.SQLiteDB/DB_ConditionPair
struct DB_ConditionPair_tC1E8B0E10DA9A16ADCFFBD910B24BBA753E83D06_marshaled_pinvoke
{
	char* ___fieldName_0;
	char* ___value_1;
	int32_t ___condition_2;
};
// Native definition for COM marshalling of SQLiteDatabase.SQLiteDB/DB_ConditionPair
struct DB_ConditionPair_tC1E8B0E10DA9A16ADCFFBD910B24BBA753E83D06_marshaled_com
{
	Il2CppChar* ___fieldName_0;
	Il2CppChar* ___value_1;
	int32_t ___condition_2;
};

// SQLiteDatabase.SQLiteDB/DB_DataPair
struct DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B 
{
	// System.String SQLiteDatabase.SQLiteDB/DB_DataPair::fieldName
	String_t* ___fieldName_0;
	// System.String SQLiteDatabase.SQLiteDB/DB_DataPair::value
	String_t* ___value_1;
};
// Native definition for P/Invoke marshalling of SQLiteDatabase.SQLiteDB/DB_DataPair
struct DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B_marshaled_pinvoke
{
	char* ___fieldName_0;
	char* ___value_1;
};
// Native definition for COM marshalling of SQLiteDatabase.SQLiteDB/DB_DataPair
struct DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B_marshaled_com
{
	Il2CppChar* ___fieldName_0;
	Il2CppChar* ___value_1;
};

// SQLiteDatabase.SQLiteDB/DB_Field
struct DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 
{
	// System.String SQLiteDatabase.SQLiteDB/DB_Field::name
	String_t* ___name_0;
	// SQLiteDatabase.SQLiteDB/DB_DataType SQLiteDatabase.SQLiteDB/DB_Field::type
	int32_t ___type_1;
	// System.Int32 SQLiteDatabase.SQLiteDB/DB_Field::size
	int32_t ___size_2;
	// System.Boolean SQLiteDatabase.SQLiteDB/DB_Field::isPrimaryKey
	bool ___isPrimaryKey_3;
	// System.Boolean SQLiteDatabase.SQLiteDB/DB_Field::isNotNull
	bool ___isNotNull_4;
	// System.Boolean SQLiteDatabase.SQLiteDB/DB_Field::isUnique
	bool ___isUnique_5;
};
// Native definition for P/Invoke marshalling of SQLiteDatabase.SQLiteDB/DB_Field
struct DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77_marshaled_pinvoke
{
	char* ___name_0;
	int32_t ___type_1;
	int32_t ___size_2;
	int32_t ___isPrimaryKey_3;
	int32_t ___isNotNull_4;
	int32_t ___isUnique_5;
};
// Native definition for COM marshalling of SQLiteDatabase.SQLiteDB/DB_Field
struct DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77_marshaled_com
{
	Il2CppChar* ___name_0;
	int32_t ___type_1;
	int32_t ___size_2;
	int32_t ___isPrimaryKey_3;
	int32_t ___isNotNull_4;
	int32_t ___isUnique_5;
};

// System.Data.Common.DbCommand
struct DbCommand_tEEC6C32CDC10CB77D2AFFE4565AACDC0C82F516F  : public Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083
{
};

// System.Data.Common.DbConnection
struct DbConnection_tC49F5E2144AE2E053E71F1AE2EF1022916AE4662  : public Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083
{
	// System.Boolean System.Data.Common.DbConnection::_suppressStateChangeForReconnection
	bool ____suppressStateChangeForReconnection_4;
	// System.Data.StateChangeEventHandler System.Data.Common.DbConnection::StateChange
	StateChangeEventHandler_t0C16938B27C80342B5A7D6645F3DA8F5E4AA71E1* ___StateChange_5;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
};

// Mono.Data.Sqlite.SqliteDataReader
struct SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835  : public DbDataReader_tA1A9729B3ED5125A693F4442984CCE7D721F452F
{
	// Mono.Data.Sqlite.SqliteCommand Mono.Data.Sqlite.SqliteDataReader::_command
	SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* ____command_1;
	// System.Int32 Mono.Data.Sqlite.SqliteDataReader::_activeStatementIndex
	int32_t ____activeStatementIndex_2;
	// Mono.Data.Sqlite.SqliteStatement Mono.Data.Sqlite.SqliteDataReader::_activeStatement
	SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* ____activeStatement_3;
	// System.Int32 Mono.Data.Sqlite.SqliteDataReader::_readingState
	int32_t ____readingState_4;
	// System.Int32 Mono.Data.Sqlite.SqliteDataReader::_rowsAffected
	int32_t ____rowsAffected_5;
	// System.Int32 Mono.Data.Sqlite.SqliteDataReader::_fieldCount
	int32_t ____fieldCount_6;
	// Mono.Data.Sqlite.SQLiteType[] Mono.Data.Sqlite.SqliteDataReader::_fieldTypeArray
	SQLiteTypeU5BU5D_t9577E5DC506B1996F06A2CFA7094F5F7BD8A4EE2* ____fieldTypeArray_7;
	// System.Data.CommandBehavior Mono.Data.Sqlite.SqliteDataReader::_commandBehavior
	int32_t ____commandBehavior_8;
	// System.Boolean Mono.Data.Sqlite.SqliteDataReader::_disposeCommand
	bool ____disposeCommand_9;
	// Mono.Data.Sqlite.SqliteKeyReader Mono.Data.Sqlite.SqliteDataReader::_keyInfo
	SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* ____keyInfo_10;
	// System.Int64 Mono.Data.Sqlite.SqliteDataReader::_version
	int64_t ____version_11;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Mono.Data.Sqlite.SqliteCommand
struct SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25  : public DbCommand_tEEC6C32CDC10CB77D2AFFE4565AACDC0C82F516F
{
	// System.String Mono.Data.Sqlite.SqliteCommand::_commandText
	String_t* ____commandText_4;
	// Mono.Data.Sqlite.SqliteConnection Mono.Data.Sqlite.SqliteCommand::_cnn
	SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* ____cnn_5;
	// System.Int64 Mono.Data.Sqlite.SqliteCommand::_version
	int64_t ____version_6;
	// System.WeakReference Mono.Data.Sqlite.SqliteCommand::_activeReader
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ____activeReader_7;
	// System.Int32 Mono.Data.Sqlite.SqliteCommand::_commandTimeout
	int32_t ____commandTimeout_8;
	// System.Boolean Mono.Data.Sqlite.SqliteCommand::_designTimeVisible
	bool ____designTimeVisible_9;
	// System.Data.UpdateRowSource Mono.Data.Sqlite.SqliteCommand::_updateRowSource
	int32_t ____updateRowSource_10;
	// Mono.Data.Sqlite.SqliteParameterCollection Mono.Data.Sqlite.SqliteCommand::_parameterCollection
	SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* ____parameterCollection_11;
	// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteStatement> Mono.Data.Sqlite.SqliteCommand::_statementList
	List_1_t7D17A1BF1130ACFFA0E9137E8A4A09FD5DCA26C3* ____statementList_12;
	// System.String Mono.Data.Sqlite.SqliteCommand::_remainingText
	String_t* ____remainingText_13;
	// Mono.Data.Sqlite.SqliteTransaction Mono.Data.Sqlite.SqliteCommand::_transaction
	SqliteTransaction_t5CFD0E46CAF0C4FB991C2AD83395F245F6648542* ____transaction_14;
};

// Mono.Data.Sqlite.SqliteConnection
struct SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64  : public DbConnection_tC49F5E2144AE2E053E71F1AE2EF1022916AE4662
{
	// System.Data.ConnectionState Mono.Data.Sqlite.SqliteConnection::_connectionState
	int32_t ____connectionState_9;
	// System.String Mono.Data.Sqlite.SqliteConnection::_connectionString
	String_t* ____connectionString_10;
	// System.Int32 Mono.Data.Sqlite.SqliteConnection::_transactionLevel
	int32_t ____transactionLevel_11;
	// System.Data.IsolationLevel Mono.Data.Sqlite.SqliteConnection::_defaultIsolation
	int32_t ____defaultIsolation_12;
	// Mono.Data.Sqlite.SQLiteEnlistment Mono.Data.Sqlite.SqliteConnection::_enlistment
	SQLiteEnlistment_tD69C41BBAEDD2F8ED9EDD2F9B8690BC4BB4BDAF5* ____enlistment_13;
	// Mono.Data.Sqlite.SQLiteBase Mono.Data.Sqlite.SqliteConnection::_sql
	SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* ____sql_14;
	// System.String Mono.Data.Sqlite.SqliteConnection::_dataSource
	String_t* ____dataSource_15;
	// System.Byte[] Mono.Data.Sqlite.SqliteConnection::_password
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____password_16;
	// System.Int32 Mono.Data.Sqlite.SqliteConnection::_defaultTimeout
	int32_t ____defaultTimeout_17;
	// System.Boolean Mono.Data.Sqlite.SqliteConnection::_binaryGuid
	bool ____binaryGuid_18;
	// System.Int64 Mono.Data.Sqlite.SqliteConnection::_version
	int64_t ____version_19;
	// Mono.Data.Sqlite.SQLiteUpdateCallback Mono.Data.Sqlite.SqliteConnection::_updateCallback
	SQLiteUpdateCallback_t70BBEEEA989EF27B8FB86F7194729ABDCC2BDFB2* ____updateCallback_20;
	// Mono.Data.Sqlite.SQLiteCommitCallback Mono.Data.Sqlite.SqliteConnection::_commitCallback
	SQLiteCommitCallback_tC40586DD8AA664D8BC2E2B5C34F3406DBC953FFD* ____commitCallback_21;
	// Mono.Data.Sqlite.SQLiteRollbackCallback Mono.Data.Sqlite.SqliteConnection::_rollbackCallback
	SQLiteRollbackCallback_t98CA336F8643C59817C9BAF0805D000A3136045F* ____rollbackCallback_22;
	// Mono.Data.Sqlite.SQLiteUpdateEventHandler Mono.Data.Sqlite.SqliteConnection::_updateHandler
	SQLiteUpdateEventHandler_t8B66CFE2899681DA8EE4EA7D3166A7D0E3C7F750* ____updateHandler_23;
	// Mono.Data.Sqlite.SQLiteCommitHandler Mono.Data.Sqlite.SqliteConnection::_commitHandler
	SQLiteCommitHandler_t19C02860BAD4E8E4FC7FD15BBDFC290D5E56EFF2* ____commitHandler_24;
	// System.EventHandler Mono.Data.Sqlite.SqliteConnection::_rollbackHandler
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ____rollbackHandler_25;
	// System.Data.StateChangeEventHandler Mono.Data.Sqlite.SqliteConnection::StateChange
	StateChangeEventHandler_t0C16938B27C80342B5A7D6645F3DA8F5E4AA71E1* ___StateChange_26;
};

struct SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Data.Sqlite.SqliteConnection::<>f__switch$map1
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___U3CU3Ef__switchU24map1_27;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Data.Sqlite.SqliteConnection::<>f__switch$map2
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___U3CU3Ef__switchU24map2_28;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// SQLiteDatabase.SQLiteEventListener/OnError
struct OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// SQLiteDatabase.SQLiteDB/DB_Field[]
struct DB_FieldU5BU5D_t3C7348AFA5895778A08744E869968044BE120489  : public RuntimeArray
{
	ALIGN_FIELD (8) DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 m_Items[1];

	inline DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
	}
	inline DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_TrimExcess_mCE60BB9032C2BB07A9AC08FE1C61A79CBE88140F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<SQLiteDatabase.SQLiteDB/DB_Field>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC135AA4DC7629479FB15660CEC8727D048878A7C_gshared (List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<SQLiteDatabase.SQLiteDB/DB_Field>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2373D97BDFD1E87499B88D67294029BE8B08F418_gshared_inline (List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* __this, DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<SQLiteDatabase.SQLiteDB/DB_Field>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9C4E5C345C08B7CA77C03DE67A079031EAA53207_gshared_inline (List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<SQLiteDatabase.SQLiteDB/DB_Field>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A_gshared (List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<SQLiteDatabase.SQLiteDB/DB_DataPair>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B List_1_get_Item_m3D545CD6B59359FFE862706E5BAB5E7DFFA704E8_gshared (List_1_tB771D4A1A06199773AE1BA75A8AE0DE6762AAB88* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<SQLiteDatabase.SQLiteDB/DB_DataPair>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7E97A1C21BC9C1F1CD486F87F21FC8A4C4523748_gshared_inline (List_1_tB771D4A1A06199773AE1BA75A8AE0DE6762AAB88* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>::.ctor()
inline void List_1__ctor_mB0CFC5E35B840AE25C5F2B640B98E5D9CE401B08 (List_1_tE020B120302E34B781278C33685F2DA255337446* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE020B120302E34B781278C33685F2DA255337446*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>::Add(T)
inline void List_1_Add_mA293F10765359D70384794AA7DA94A25FA0AC15E_inline (List_1_tE020B120302E34B781278C33685F2DA255337446* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE020B120302E34B781278C33685F2DA255337446*, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>::get_Count()
inline int32_t List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_inline (List_1_tE020B120302E34B781278C33685F2DA255337446* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE020B120302E34B781278C33685F2DA255337446*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void SQLiteDatabase.DBReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DBReader_Dispose_m7079DF8BC17D5B19E5EA7772223ECFAF4549CCD1 (DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>::get_Item(System.Int32)
inline Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752 (List_1_tE020B120302E34B781278C33685F2DA255337446* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* (*) (List_1_tE020B120302E34B781278C33685F2DA255337446*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(TKey)
inline RuntimeObject* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void SQLiteDatabase.SQLiteEventListener/OnError::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline (OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* __this, String_t* ___err0, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method) ;
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m3FC0128C89CC2331239FC2A0A749BF33455F03D2 (String_t* ___s0, int64_t* ___result1, const RuntimeMethod* method) ;
// System.Boolean System.Int16::TryParse(System.String,System.Int16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int16_TryParse_m7190AF18437CE1B43990B99E5D992E31485E77AE (String_t* ___s0, int16_t* ___result1, const RuntimeMethod* method) ;
// System.Boolean System.Double::TryParse(System.String,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018 (String_t* ___s0, double* ___result1, const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mC39FC2D8F1F33DE64685F3A8CE6BDD2164FB9423 (String_t* ___s0, float* ___result1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>::Clear()
inline void List_1_Clear_mE5C15DF832BF5479B60449351B1837B5E89A578A_inline (List_1_tE020B120302E34B781278C33685F2DA255337446* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE020B120302E34B781278C33685F2DA255337446*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>::TrimExcess()
inline void List_1_TrimExcess_m3E00C910C1441898A6F95B6CC634BC45B9C9F95A (List_1_tE020B120302E34B781278C33685F2DA255337446* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE020B120302E34B781278C33685F2DA255337446*, const RuntimeMethod*))List_1_TrimExcess_mCE60BB9032C2BB07A9AC08FE1C61A79CBE88140F_gshared)(__this, method);
}
// System.Void System.GC::Collect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_Collect_m43D435501E4B72E382DB08A0431DE01D550F76A7 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<SQLiteDatabase.SQLiteDB/DB_Field>::.ctor()
inline void List_1__ctor_mC135AA4DC7629479FB15660CEC8727D048878A7C (List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8*, const RuntimeMethod*))List_1__ctor_mC135AA4DC7629479FB15660CEC8727D048878A7C_gshared)(__this, method);
}
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<SQLiteDatabase.SQLiteDB/DB_Field>::Add(T)
inline void List_1_Add_m2373D97BDFD1E87499B88D67294029BE8B08F418_inline (List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* __this, DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8*, DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77, const RuntimeMethod*))List_1_Add_m2373D97BDFD1E87499B88D67294029BE8B08F418_gshared_inline)(__this, ___item0, method);
}
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void SQLiteDatabase.SQLiteDB::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteDB__ctor_m046FD89A92D1F0A2EF7995F94CF6ACFFA1BC2618 (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5 (const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_dataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_dataPath_m4C8412CBEE4EAAAB6711CC9BEFFA73CEE5BDBEF7 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void UnityEngine.WWW::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW__ctor_m5D29D83E9EE0925ED8252347CE24EC236401503D (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, String_t* ___url0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.WWW::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWW_get_isDone_m7E88B666AD0E3903757043813B2811BBFCCCA52E (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) ;
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.WWW::get_bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWW_get_bytes_m83F5C24FC5AC80C5F3B9AF1E290E08F8B96C0642 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077 (String_t* ___path0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, const RuntimeMethod* method) ;
// System.Void System.IO.File::Copy(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Copy_mC698F2F0FF8BBF3339527CD00E57A6D5B26DE4AA (String_t* ___sourceFileName0, String_t* ___destFileName1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean SQLiteDatabase.SQLiteDB::CreateDatabase(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SQLiteDB_CreateDatabase_mAFF7D35DB50FE858ECD621A50390B14AC17F6044 (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, String_t* ___dbName0, bool ___isOverWrite1, const RuntimeMethod* method) ;
// System.IO.FileStream System.IO.File::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_Create_m7A88AE26DE05E6D790E3C5B1140EE5DC91DCC519 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteConnection::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteConnection__ctor_mBA0776F60057686C3DF109947113F5697EB7C58E (SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* __this, String_t* ___connectionString0, const RuntimeMethod* method) ;
// System.Exception System.Exception::get_InnerException()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
// System.Boolean SQLiteDatabase.SQLiteDB::get_Exists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SQLiteDB_get_Exists_m7FD2BF7220A610A78280C3C0395D5C668142D195 (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, const RuntimeMethod* method) ;
// System.String SQLiteDatabase.DBSchema::get_TableName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DBSchema_get_TableName_m68F7B5461DCDCEBAA2F7524D595ED6AFECA8C049_inline (DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* __this, const RuntimeMethod* method) ;
// System.Boolean SQLiteDatabase.SQLiteDB::IsTableExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SQLiteDB_IsTableExists_m8BAF42AADD616552CE817B42849DF5F408BAC5EC (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, String_t* ___tableName0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<SQLiteDatabase.SQLiteDB/DB_Field> SQLiteDatabase.DBSchema::GetTableFields()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* DBSchema_GetTableFields_mA5D6F5AB415B366C64C8CB65A3BA69FD99DB9D4B_inline (DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<SQLiteDatabase.SQLiteDB/DB_Field>::get_Count()
inline int32_t List_1_get_Count_m9C4E5C345C08B7CA77C03DE67A079031EAA53207_inline (List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8*, const RuntimeMethod*))List_1_get_Count_m9C4E5C345C08B7CA77C03DE67A079031EAA53207_gshared_inline)(__this, method);
}
// System.Void System.ComponentModel.Component::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_Dispose_m7D0C063EA18E1FFA59CB369232131150372DC7B2 (Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<SQLiteDatabase.SQLiteDB/DB_Field>::get_Item(System.Int32)
inline DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A (List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 (*) (List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8*, int32_t, const RuntimeMethod*))List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A_gshared)(__this, ___index0, method);
}
// System.String SQLiteDatabase.SQLiteDB::GetDataType(SQLiteDatabase.SQLiteDB/DB_DataType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SQLiteDB_GetDataType_mFC87E7BB8FABC086C7F69AD08E01DCB42C519F7E (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, int32_t ___id0, const RuntimeMethod* method) ;
// Mono.Data.Sqlite.SqliteCommand Mono.Data.Sqlite.SqliteConnection::CreateCommand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* SqliteConnection_CreateCommand_m3BED520F980F2E040D090CD4B06D14731D0E044F (SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* __this, const RuntimeMethod* method) ;
// System.Void SQLiteDatabase.SQLiteDB::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteDB_Dispose_m442AB879D1AC74A9F04603C8128657A2EC154F4F (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<SQLiteDatabase.SQLiteDB/DB_DataPair>::get_Item(System.Int32)
inline DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B List_1_get_Item_m3D545CD6B59359FFE862706E5BAB5E7DFFA704E8 (List_1_tB771D4A1A06199773AE1BA75A8AE0DE6762AAB88* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B (*) (List_1_tB771D4A1A06199773AE1BA75A8AE0DE6762AAB88*, int32_t, const RuntimeMethod*))List_1_get_Item_m3D545CD6B59359FFE862706E5BAB5E7DFFA704E8_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<SQLiteDatabase.SQLiteDB/DB_DataPair>::get_Count()
inline int32_t List_1_get_Count_m7E97A1C21BC9C1F1CD486F87F21FC8A4C4523748_inline (List_1_tB771D4A1A06199773AE1BA75A8AE0DE6762AAB88* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB771D4A1A06199773AE1BA75A8AE0DE6762AAB88*, const RuntimeMethod*))List_1_get_Count_m7E97A1C21BC9C1F1CD486F87F21FC8A4C4523748_gshared_inline)(__this, method);
}
// System.String SQLiteDatabase.SQLiteDB::GetConditionSymbol(SQLiteDatabase.SQLiteDB/DB_Condition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SQLiteDB_GetConditionSymbol_mEA6C2011A8DCCD3730A0E158C64A59DFC7BC6809 (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, int32_t ___id0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// SQLiteDatabase.DBReader SQLiteDatabase.SQLiteDB::Select(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF* SQLiteDB_Select_m8AB92D6AC04CEF2C875C1C8F2BF93FFEA652987A (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, String_t* ___query0, const RuntimeMethod* method) ;
// Mono.Data.Sqlite.SqliteDataReader Mono.Data.Sqlite.SqliteCommand::ExecuteReader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* SqliteCommand_ExecuteReader_m2A6B8B48CE439B09687348450D40506868EB28AB (SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* __this, const RuntimeMethod* method) ;
// System.Void SQLiteDatabase.DBReader::.ctor(Mono.Data.Sqlite.SqliteDataReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DBReader__ctor_m5AFCBF09D29A8E2421C1A91F1A0DC1C223BCC3BB (DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF* __this, SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* ___reader0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void SQLiteDatabase.SQLiteEventListener::AddHandler_onError(SQLiteDatabase.SQLiteEventListener/OnError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteEventListener_AddHandler_onError_mFBC9F3455D7C6CF3908D8B77044A5DDF683118E1 (OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* ___value0, const RuntimeMethod* method) ;
// System.Void SQLiteDatabase.SQLiteEventListener::RemoveHandler_onError(SQLiteDatabase.SQLiteEventListener/OnError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteEventListener_RemoveHandler_onError_m1C619CAD16DF40CF7EFCC7E6B121F261439D6A2F (OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* ___value0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SQLiteDatabase.DBReader::.ctor(Mono.Data.Sqlite.SqliteDataReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DBReader__ctor_m5AFCBF09D29A8E2421C1A91F1A0DC1C223BCC3BB (DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF* __this, SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA293F10765359D70384794AA7DA94A25FA0AC15E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB0CFC5E35B840AE25C5F2B640B98E5D9CE401B08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE020B120302E34B781278C33685F2DA255337446_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	int32_t V_1 = 0;
	{
		__this->___rowCounter_1 = (int16_t)(-1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_0 = (List_1_tE020B120302E34B781278C33685F2DA255337446*)il2cpp_codegen_object_new(List_1_tE020B120302E34B781278C33685F2DA255337446_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mB0CFC5E35B840AE25C5F2B640B98E5D9CE401B08(L_0, List_1__ctor_mB0CFC5E35B840AE25C5F2B640B98E5D9CE401B08_RuntimeMethod_var);
		__this->___dataTable_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataTable_0), (void*)L_0);
		goto IL_005a;
	}

IL_001d:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_1, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0042;
	}

IL_002a:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = V_0;
		SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* L_3 = ___reader0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker1< String_t*, int32_t >::Invoke(27 /* System.String System.Data.Common.DbDataReader::GetName(System.Int32) */, L_3, L_4);
		SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* L_6 = ___reader0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(33 /* System.Object System.Data.Common.DbDataReader::GetValue(System.Int32) */, L_6, L_7);
		NullCheck(L_2);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_2, L_5, L_8, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0042:
	{
		int32_t L_10 = V_1;
		SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* L_11 = ___reader0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Data.Common.DbDataReader::get_FieldCount() */, L_11);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_002a;
		}
	}
	{
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_13 = __this->___dataTable_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_14 = V_0;
		NullCheck(L_13);
		List_1_Add_mA293F10765359D70384794AA7DA94A25FA0AC15E_inline(L_13, L_14, List_1_Add_mA293F10765359D70384794AA7DA94A25FA0AC15E_RuntimeMethod_var);
	}

IL_005a:
	{
		SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* L_15 = ___reader0;
		NullCheck(L_15);
		bool L_16;
		L_16 = VirtualFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Data.Common.DbDataReader::Read() */, L_15);
		if (L_16)
		{
			goto IL_001d;
		}
	}
	{
		SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* L_17 = ___reader0;
		if (!L_17)
		{
			goto IL_0071;
		}
	}
	{
		SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* L_18 = ___reader0;
		NullCheck(L_18);
		VirtualActionInvoker0::Invoke(22 /* System.Void System.Data.Common.DbDataReader::Close() */, L_18);
	}

IL_0071:
	{
		return;
	}
}
// System.Boolean SQLiteDatabase.DBReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DBReader_Read_m17DA212159BBAFE6688580F9BB1F296703D8160B (DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int16_t L_0 = __this->___rowCounter_1;
		__this->___rowCounter_1 = ((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)));
		int16_t L_1 = __this->___rowCounter_1;
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_2 = __this->___dataTable_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_inline(L_2, List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_RuntimeMethod_var);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0027;
		}
	}
	{
		return (bool)1;
	}

IL_0027:
	{
		DBReader_Dispose_m7079DF8BC17D5B19E5EA7772223ECFAF4549CCD1(__this, NULL);
		return (bool)0;
	}
}
// System.String SQLiteDatabase.DBReader::GetStringValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DBReader_GetStringValue_mEFA96585AF381183FDB37DD8E175BE426350B9CD (DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5322D3E4BC6A80BF937D7B4B6584BD3E16E4AE51);
		s_Il2CppMethodInitialized = true;
	}
	{
		int16_t L_0 = __this->___rowCounter_1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_1 = __this->___dataTable_0;
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_2 = __this->___dataTable_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_inline(L_2, List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_4 = __this->___dataTable_0;
		int16_t L_5 = __this->___rowCounter_1;
		NullCheck(L_4);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6;
		L_6 = List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752(L_4, L_5, List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752_RuntimeMethod_var);
		String_t* L_7 = ___fieldName0;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_6, L_7, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}

IL_0045:
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_10 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_11 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_11);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_11, _stringLiteral5322D3E4BC6A80BF937D7B4B6584BD3E16E4AE51, NULL);
	}

IL_005e:
	{
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_12;
	}
}
// System.Int32 SQLiteDatabase.DBReader::GetIntValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DBReader_GetIntValue_mCB3E5F3A6F54C8166ACA21E1EE85F2AD06CA1A38 (DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5322D3E4BC6A80BF937D7B4B6584BD3E16E4AE51);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int16_t L_0 = __this->___rowCounter_1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_1 = __this->___dataTable_0;
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_2 = __this->___dataTable_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_inline(L_2, List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		V_0 = 0;
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_4 = __this->___dataTable_0;
		int16_t L_5 = __this->___rowCounter_1;
		NullCheck(L_4);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6;
		L_6 = List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752(L_4, L_5, List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752_RuntimeMethod_var);
		String_t* L_7 = ___fieldName0;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_6, L_7, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		bool L_10;
		L_10 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_9, (&V_0), NULL);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_11 = V_0;
		return L_11;
	}

IL_0054:
	{
		goto IL_0072;
	}

IL_0059:
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_12 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_12)
		{
			goto IL_0072;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_13 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_13);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_13, _stringLiteral5322D3E4BC6A80BF937D7B4B6584BD3E16E4AE51, NULL);
	}

IL_0072:
	{
		return 0;
	}
}
// System.Int64 SQLiteDatabase.DBReader::GetLongValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DBReader_GetLongValue_m8D3F22D8D9EBE94F4288D5EB10927E0BE7B749CE (DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5322D3E4BC6A80BF937D7B4B6584BD3E16E4AE51);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		int16_t L_0 = __this->___rowCounter_1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_1 = __this->___dataTable_0;
		if (!L_1)
		{
			goto IL_005a;
		}
	}
	{
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_2 = __this->___dataTable_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_inline(L_2, List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		V_0 = ((int64_t)0);
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_4 = __this->___dataTable_0;
		int16_t L_5 = __this->___rowCounter_1;
		NullCheck(L_4);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6;
		L_6 = List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752(L_4, L_5, List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752_RuntimeMethod_var);
		String_t* L_7 = ___fieldName0;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_6, L_7, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		bool L_10;
		L_10 = Int64_TryParse_m3FC0128C89CC2331239FC2A0A749BF33455F03D2(L_9, (&V_0), NULL);
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		int64_t L_11 = V_0;
		return L_11;
	}

IL_0055:
	{
		goto IL_0073;
	}

IL_005a:
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_12 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_12)
		{
			goto IL_0073;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_13 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_13);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_13, _stringLiteral5322D3E4BC6A80BF937D7B4B6584BD3E16E4AE51, NULL);
	}

IL_0073:
	{
		return ((int64_t)0);
	}
}
// System.Int16 SQLiteDatabase.DBReader::GetShortValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t DBReader_GetShortValue_m57B6FD20E0C3211AEDE481EBD5FE2E36F1FD4B84 (DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5322D3E4BC6A80BF937D7B4B6584BD3E16E4AE51);
		s_Il2CppMethodInitialized = true;
	}
	int16_t V_0 = 0;
	{
		int16_t L_0 = __this->___rowCounter_1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_1 = __this->___dataTable_0;
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_2 = __this->___dataTable_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_inline(L_2, List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		V_0 = (int16_t)0;
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_4 = __this->___dataTable_0;
		int16_t L_5 = __this->___rowCounter_1;
		NullCheck(L_4);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6;
		L_6 = List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752(L_4, L_5, List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752_RuntimeMethod_var);
		String_t* L_7 = ___fieldName0;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_6, L_7, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		bool L_10;
		L_10 = Int16_TryParse_m7190AF18437CE1B43990B99E5D992E31485E77AE(L_9, (&V_0), NULL);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		int16_t L_11 = V_0;
		return L_11;
	}

IL_0054:
	{
		goto IL_0072;
	}

IL_0059:
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_12 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_12)
		{
			goto IL_0072;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_13 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_13);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_13, _stringLiteral5322D3E4BC6A80BF937D7B4B6584BD3E16E4AE51, NULL);
	}

IL_0072:
	{
		return (int16_t)0;
	}
}
// System.Double SQLiteDatabase.DBReader::GetDoubleValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DBReader_GetDoubleValue_m5DF53893F701775C4296DA5B6BBC8FB426B13634 (DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5322D3E4BC6A80BF937D7B4B6584BD3E16E4AE51);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		int16_t L_0 = __this->___rowCounter_1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_1 = __this->___dataTable_0;
		if (!L_1)
		{
			goto IL_0061;
		}
	}
	{
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_2 = __this->___dataTable_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_inline(L_2, List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		V_0 = (0.0);
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_4 = __this->___dataTable_0;
		int16_t L_5 = __this->___rowCounter_1;
		NullCheck(L_4);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6;
		L_6 = List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752(L_4, L_5, List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752_RuntimeMethod_var);
		String_t* L_7 = ___fieldName0;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_6, L_7, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		bool L_10;
		L_10 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_9, (&V_0), NULL);
		if (!L_10)
		{
			goto IL_005c;
		}
	}
	{
		double L_11 = V_0;
		return L_11;
	}

IL_005c:
	{
		goto IL_007a;
	}

IL_0061:
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_12 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_13 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_13);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_13, _stringLiteral5322D3E4BC6A80BF937D7B4B6584BD3E16E4AE51, NULL);
	}

IL_007a:
	{
		return (0.0);
	}
}
// System.Single SQLiteDatabase.DBReader::GetFloatValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DBReader_GetFloatValue_mD23319FD7D949C11E3B1B79F7A4326997708CE87 (DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5322D3E4BC6A80BF937D7B4B6584BD3E16E4AE51);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		int16_t L_0 = __this->___rowCounter_1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_1 = __this->___dataTable_0;
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_2 = __this->___dataTable_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_inline(L_2, List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		V_0 = (0.0f);
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_4 = __this->___dataTable_0;
		int16_t L_5 = __this->___rowCounter_1;
		NullCheck(L_4);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6;
		L_6 = List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752(L_4, L_5, List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752_RuntimeMethod_var);
		String_t* L_7 = ___fieldName0;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_6, L_7, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		bool L_10;
		L_10 = Single_TryParse_mC39FC2D8F1F33DE64685F3A8CE6BDD2164FB9423(L_9, (&V_0), NULL);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		float L_11 = V_0;
		return L_11;
	}

IL_0058:
	{
		goto IL_0076;
	}

IL_005d:
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_12 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_12)
		{
			goto IL_0076;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_13 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_13);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_13, _stringLiteral5322D3E4BC6A80BF937D7B4B6584BD3E16E4AE51, NULL);
	}

IL_0076:
	{
		return (0.0f);
	}
}
// System.Object SQLiteDatabase.DBReader::GetValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DBReader_GetValue_m7CD86C5DB121A63E4FAA9DAD728EB209B5B526B0 (DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5322D3E4BC6A80BF937D7B4B6584BD3E16E4AE51);
		s_Il2CppMethodInitialized = true;
	}
	{
		int16_t L_0 = __this->___rowCounter_1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_1 = __this->___dataTable_0;
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_2 = __this->___dataTable_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_inline(L_2, List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_4 = __this->___dataTable_0;
		int16_t L_5 = __this->___rowCounter_1;
		NullCheck(L_4);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6;
		L_6 = List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752(L_4, L_5, List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752_RuntimeMethod_var);
		String_t* L_7 = ___fieldName0;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_6, L_7, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		return L_8;
	}

IL_0040:
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_9 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_10 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_10);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_10, _stringLiteral5322D3E4BC6A80BF937D7B4B6584BD3E16E4AE51, NULL);
	}

IL_0059:
	{
		return NULL;
	}
}
// System.Void SQLiteDatabase.DBReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DBReader_Dispose_m7079DF8BC17D5B19E5EA7772223ECFAF4549CCD1 (DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE5C15DF832BF5479B60449351B1837B5E89A578A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_TrimExcess_m3E00C910C1441898A6F95B6CC634BC45B9C9F95A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_0 = __this->___dataTable_0;
		NullCheck(L_0);
		List_1_Clear_mE5C15DF832BF5479B60449351B1837B5E89A578A_inline(L_0, List_1_Clear_mE5C15DF832BF5479B60449351B1837B5E89A578A_RuntimeMethod_var);
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_1 = __this->___dataTable_0;
		NullCheck(L_1);
		List_1_TrimExcess_m3E00C910C1441898A6F95B6CC634BC45B9C9F95A(L_1, List_1_TrimExcess_m3E00C910C1441898A6F95B6CC634BC45B9C9F95A_RuntimeMethod_var);
		__this->___dataTable_0 = (List_1_tE020B120302E34B781278C33685F2DA255337446*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataTable_0), (void*)(List_1_tE020B120302E34B781278C33685F2DA255337446*)NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_Collect_m43D435501E4B72E382DB08A0431DE01D550F76A7(NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SQLiteDatabase.DBSchema::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DBSchema__ctor_m7545343293E41291A5E7DD34D24AE51ED505B270 (DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* __this, String_t* ___tableName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC135AA4DC7629479FB15660CEC8727D048878A7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->____name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____name_0), (void*)L_0);
		List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* L_1 = (List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8*)il2cpp_codegen_object_new(List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mC135AA4DC7629479FB15660CEC8727D048878A7C(L_1, List_1__ctor_mC135AA4DC7629479FB15660CEC8727D048878A7C_RuntimeMethod_var);
		__this->___fieldList_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fieldList_1), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_2 = ___tableName0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_2, NULL);
		__this->____name_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____name_0), (void*)L_3);
		return;
	}
}
// System.String SQLiteDatabase.DBSchema::get_TableName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DBSchema_get_TableName_m68F7B5461DCDCEBAA2F7524D595ED6AFECA8C049 (DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____name_0;
		return L_0;
	}
}
// System.Void SQLiteDatabase.DBSchema::AddField(System.String,SQLiteDatabase.SQLiteDB/DB_DataType,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DBSchema_AddField_mF3D140C5EFE4DCD3F0009DC57082C99BBFCBECD5 (DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* __this, String_t* ___fieldName0, int32_t ___fieldType1, int32_t ___size2, bool ___isNotNull3, bool ___isPrimaryKey4, bool ___isUnique5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2373D97BDFD1E87499B88D67294029BE8B08F418_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77));
		String_t* L_0 = ___fieldName0;
		(&V_0)->___name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_0), (void*)L_0);
		int32_t L_1 = ___fieldType1;
		(&V_0)->___type_1 = L_1;
		bool L_2 = ___isNotNull3;
		(&V_0)->___isNotNull_4 = L_2;
		bool L_3 = ___isPrimaryKey4;
		(&V_0)->___isPrimaryKey_3 = L_3;
		bool L_4 = ___isUnique5;
		(&V_0)->___isUnique_5 = L_4;
		int32_t L_5 = ___size2;
		(&V_0)->___size_2 = L_5;
		List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* L_6 = __this->___fieldList_1;
		DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_m2373D97BDFD1E87499B88D67294029BE8B08F418_inline(L_6, L_7, List_1_Add_m2373D97BDFD1E87499B88D67294029BE8B08F418_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.List`1<SQLiteDatabase.SQLiteDB/DB_Field> SQLiteDatabase.DBSchema::GetTableFields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* DBSchema_GetTableFields_mA5D6F5AB415B366C64C8CB65A3BA69FD99DB9D4B (DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* __this, const RuntimeMethod* method) 
{
	{
		List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* L_0 = __this->___fieldList_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SQLiteDatabase.SQLiteDB::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteDB__ctor_m046FD89A92D1F0A2EF7995F94CF6ACFFA1BC2618 (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->____dbName_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dbName_1), (void*)L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->____dbPath_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dbPath_2), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean SQLiteDatabase.SQLiteDB::get_Exists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SQLiteDB_get_Exists_m7FD2BF7220A610A78280C3C0395D5C668142D195 (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->____dbPath_2;
		String_t* L_1 = __this->____dbName_1;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_0, L_1, NULL);
		bool L_3;
		L_3 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_2, NULL);
		return L_3;
	}
}
// SQLiteDatabase.SQLiteDB SQLiteDatabase.SQLiteDB::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* SQLiteDB_get_Instance_m9772F75DF4B153A87D0D1CA965D2FB4459466CD4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* L_0 = ((SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF_il2cpp_TypeInfo_var))->____instance_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* L_1 = (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF*)il2cpp_codegen_object_new(SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SQLiteDB__ctor_m046FD89A92D1F0A2EF7995F94CF6ACFFA1BC2618(L_1, NULL);
		((SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF_il2cpp_TypeInfo_var))->____instance_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF_il2cpp_TypeInfo_var))->____instance_0), (void*)L_1);
	}

IL_0014:
	{
		SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* L_2 = ((SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF_il2cpp_TypeInfo_var))->____instance_0;
		return L_2;
	}
}
// System.String SQLiteDatabase.SQLiteDB::get_DBName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SQLiteDB_get_DBName_m0B1585C5D0781015F63BA9DE5408E2EB09B5620F (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____dbName_1;
		return L_0;
	}
}
// System.Void SQLiteDatabase.SQLiteDB::set_DBName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteDB_set_DBName_m96B51A58B1BF6C8398699128714662EC598A1E2A (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____dbName_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dbName_1), (void*)L_0);
		return;
	}
}
// System.String SQLiteDatabase.SQLiteDB::get_DBLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SQLiteDB_get_DBLocation_m0C19CB87F2B4A3E13229F63931DCF93AB9ADF617 (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____dbPath_2;
		return L_0;
	}
}
// System.Void SQLiteDatabase.SQLiteDB::set_DBLocation(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteDB_set_DBLocation_m5CD708BB746B6EF68AA6FC83CF91938B778A5963 (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____dbPath_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dbPath_2), (void*)L_0);
		return;
	}
}
// System.Boolean SQLiteDatabase.SQLiteDB::ConnectToDefaultDatabase(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SQLiteDB_ConnectToDefaultDatabase_m0ECE045DF083953650B0301C654A3E24F0639F24 (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, String_t* ___dbName0, bool ___loadFresh1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2746B283A9377664FAC642B633C6E630FD0DA207);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5521F119A9546AC293A71CE4DC89A30740FA9FC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8757EC8662AB8F8DAF6E397AAA78671AFF776B8);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* V_2 = NULL;
	bool V_3 = false;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0 = __this->____dbPath_2;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_0, NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_3;
		L_3 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		__this->____dbPath_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dbPath_2), (void*)L_3);
	}

IL_0020:
	{
		bool L_4 = ___loadFresh1;
		if (!L_4)
		{
			goto IL_0115;
		}
	}
	try
	{// begin try (depth: 1)
		{
			String_t* L_5;
			L_5 = Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5(NULL);
			String_t* L_6 = ___dbName0;
			il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
			String_t* L_7;
			L_7 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_5, L_6, NULL);
			V_0 = L_7;
			String_t* L_8 = __this->____dbPath_2;
			String_t* L_9 = ___dbName0;
			String_t* L_10;
			L_10 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_8, L_9, NULL);
			V_1 = L_10;
			int32_t L_11;
			L_11 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
			if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)11)))))
			{
				goto IL_00c5_1;
			}
		}
		{
			String_t* L_12;
			L_12 = Application_get_dataPath_m4C8412CBEE4EAAAB6711CC9BEFFA73CEE5BDBEF7(NULL);
			String_t* L_13 = ___dbName0;
			String_t* L_14;
			L_14 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral2746B283A9377664FAC642B633C6E630FD0DA207, L_12, _stringLiteral5521F119A9546AC293A71CE4DC89A30740FA9FC7, L_13, NULL);
			V_0 = L_14;
			String_t* L_15 = V_0;
			WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_16 = (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB*)il2cpp_codegen_object_new(WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
			NullCheck(L_16);
			WWW__ctor_m5D29D83E9EE0925ED8252347CE24EC236401503D(L_16, L_15, NULL);
			V_2 = L_16;
			goto IL_006d_1;
		}

IL_006d_1:
		{
			WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_17 = V_2;
			NullCheck(L_17);
			bool L_18;
			L_18 = WWW_get_isDone_m7E88B666AD0E3903757043813B2811BBFCCCA52E(L_17, NULL);
			if (!L_18)
			{
				goto IL_006d_1;
			}
		}
		{
			WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_19 = V_2;
			NullCheck(L_19);
			bool L_20;
			L_20 = WWW_get_isDone_m7E88B666AD0E3903757043813B2811BBFCCCA52E(L_19, NULL);
			if (L_20)
			{
				goto IL_00a3_1;
			}
		}
		{
			OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_21 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
			if (!L_21)
			{
				goto IL_009c_1;
			}
		}
		{
			OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_22 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
			NullCheck(L_22);
			OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_22, _stringLiteralF8757EC8662AB8F8DAF6E397AAA78671AFF776B8, NULL);
		}

IL_009c_1:
		{
			V_3 = (bool)0;
			goto IL_011e;
		}

IL_00a3_1:
		{
			String_t* L_23 = V_1;
			bool L_24;
			L_24 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_23, NULL);
			if (!L_24)
			{
				goto IL_00b4_1;
			}
		}
		{
			String_t* L_25 = V_1;
			File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_25, NULL);
		}

IL_00b4_1:
		{
			String_t* L_26 = V_1;
			WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_27 = V_2;
			NullCheck(L_27);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28;
			L_28 = WWW_get_bytes_m83F5C24FC5AC80C5F3B9AF1E290E08F8B96C0642(L_27, NULL);
			File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077(L_26, L_28, NULL);
			goto IL_00dd_1;
		}

IL_00c5_1:
		{
			String_t* L_29 = V_1;
			bool L_30;
			L_30 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_29, NULL);
			if (!L_30)
			{
				goto IL_00d6_1;
			}
		}
		{
			String_t* L_31 = V_1;
			File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_31, NULL);
		}

IL_00d6_1:
		{
			String_t* L_32 = V_0;
			String_t* L_33 = V_1;
			File_Copy_mC698F2F0FF8BBF3339527CD00E57A6D5B26DE4AA(L_32, L_33, NULL);
		}

IL_00dd_1:
		{
			goto IL_0115;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e2;
		}
		throw e;
	}

CATCH_00e2:
	{// begin catch(System.Exception)
		{
			V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_34 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
			if (!L_34)
			{
				goto IL_0109;
			}
		}
		{
			OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_35 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
			Exception_t* L_36 = V_4;
			NullCheck(L_36);
			String_t* L_37;
			L_37 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_36);
			String_t* L_38;
			L_38 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral676FF875112FEC6644D2BE46FE714B179AEF2621)), L_37, NULL);
			NullCheck(L_35);
			OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_35, L_38, NULL);
		}

IL_0109:
		{
			V_3 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_011e;
		}
		{
			;// IL_0110: leave IL_0115

		}
	}// end catch (depth: 1)

IL_0115:
	{
		String_t* L_39 = ___dbName0;
		bool L_40;
		L_40 = SQLiteDB_CreateDatabase_mAFF7D35DB50FE858ECD621A50390B14AC17F6044(__this, L_39, (bool)0, NULL);
		return L_40;
	}

IL_011e:
	{
		bool L_41 = V_3;
		return L_41;
	}
}
// System.Boolean SQLiteDatabase.SQLiteDB::CreateDatabase(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SQLiteDB_CreateDatabase_mAFF7D35DB50FE858ECD621A50390B14AC17F6044 (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, String_t* ___dbName0, bool ___isOverWrite1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C22DA453C536A0C582C283F29CE62CE5250FBF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC617B71DF6839C0E667D60222D194FD69EB2A345);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0 = ___dbName0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_0, NULL);
		__this->____dbName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dbName_1), (void*)L_1);
		bool L_2 = ___isOverWrite1;
		__this->____isOverWrite_3 = L_2;
		V_0 = (bool)0;
		String_t* L_3 = __this->____dbName_1;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_5 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_6 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_6);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_6, _stringLiteralC617B71DF6839C0E667D60222D194FD69EB2A345, NULL);
	}

IL_003e:
	{
		return (bool)0;
	}

IL_0040:
	{
		String_t* L_7 = __this->____dbPath_2;
		String_t* L_8 = __this->____dbName_1;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_7, L_8, NULL);
		V_1 = L_9;
	}
	try
	{// begin try (depth: 1)
		{
			bool L_10 = __this->____isOverWrite_3;
			if (!L_10)
			{
				goto IL_006e_1;
			}
		}
		{
			String_t* L_11 = V_1;
			bool L_12;
			L_12 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_11, NULL);
			if (!L_12)
			{
				goto IL_006e_1;
			}
		}
		{
			String_t* L_13 = V_1;
			File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_13, NULL);
		}

IL_006e_1:
		{
			String_t* L_14 = V_1;
			bool L_15;
			L_15 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_14, NULL);
			if (L_15)
			{
				goto IL_0086_1;
			}
		}
		{
			String_t* L_16 = V_1;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_17;
			L_17 = File_Create_m7A88AE26DE05E6D790E3C5B1140EE5DC91DCC519(L_16, NULL);
			V_2 = L_17;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_18 = V_2;
			NullCheck(L_18);
			VirtualActionInvoker0::Invoke(18 /* System.Void System.IO.Stream::Close() */, L_18);
		}

IL_0086_1:
		{
			String_t* L_19 = V_1;
			String_t* L_20;
			L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2C22DA453C536A0C582C283F29CE62CE5250FBF9, L_19, NULL);
			SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_21 = (SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64*)il2cpp_codegen_object_new(SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64_il2cpp_TypeInfo_var);
			NullCheck(L_21);
			SqliteConnection__ctor_mBA0776F60057686C3DF109947113F5697EB7C58E(L_21, L_20, NULL);
			__this->___connection_4 = L_21;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___connection_4), (void*)L_21);
			V_0 = (bool)1;
			goto IL_00fd;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a3;
		}
		throw e;
	}

CATCH_00a3:
	{// begin catch(System.Exception)
		{
			V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_22 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
			if (!L_22)
			{
				goto IL_00f6;
			}
		}
		{
			OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_23 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)6);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_24;
			NullCheck(L_25);
			ArrayElementTypeCheck (L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA31DB08646EB05C1C8A3E453556E25CF60B0F736)));
			(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA31DB08646EB05C1C8A3E453556E25CF60B0F736)));
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_25;
			Exception_t* L_27 = V_3;
			NullCheck(L_27);
			String_t* L_28;
			L_28 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_27);
			NullCheck(L_26);
			ArrayElementTypeCheck (L_26, L_28);
			(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_28);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_26;
			NullCheck(L_29);
			ArrayElementTypeCheck (L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD)));
			(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD)));
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_29;
			Exception_t* L_31 = V_3;
			NullCheck(L_31);
			Exception_t* L_32;
			L_32 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(L_31, NULL);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_32);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_32);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = L_30;
			NullCheck(L_33);
			ArrayElementTypeCheck (L_33, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD)));
			(L_33)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD)));
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = L_33;
			Exception_t* L_35 = V_3;
			NullCheck(L_35);
			String_t* L_36;
			L_36 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_35);
			NullCheck(L_34);
			ArrayElementTypeCheck (L_34, L_36);
			(L_34)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_36);
			String_t* L_37;
			L_37 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_34, NULL);
			NullCheck(L_23);
			OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_23, L_37, NULL);
		}

IL_00f6:
		{
			V_0 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00fd;
		}
	}// end catch (depth: 1)

IL_00fd:
	{
		bool L_38 = V_0;
		return L_38;
	}
}
// System.Boolean SQLiteDatabase.SQLiteDB::CreateTable(SQLiteDatabase.DBSchema)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SQLiteDB_CreateTable_m6BDF0DEC80C904821869F8B2899CEA368C5CB6AC (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* ___schema0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9C4E5C345C08B7CA77C03DE67A079031EAA53207_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral069B4B30890E9F5A795AE805C0312AE1B9B69845);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26FBFEE106233905F80DE6B30A8922886088B952);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45DC883871F1AAB49889B84527A442DB88D8A93D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7245750688F8ABD9E50DA82005D421F8461EC1E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75EE8733258B2DB77C4BB8B9E091F4D37134AC5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral786610ECE537123B5B868EF7D68E5957D270BA8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral969293C4EBCD2637A59D4F7676AF011FC83A7950);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5D9D56F534D3D95C55393032686CA5D9252AC4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD8FA2335D5D09C3C4B884B5AD26AFAAB00B0DC1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 V_5;
	memset((&V_5), 0, sizeof(V_5));
	DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 V_6;
	memset((&V_6), 0, sizeof(V_6));
	DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 V_7;
	memset((&V_7), 0, sizeof(V_7));
	DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 V_8;
	memset((&V_8), 0, sizeof(V_8));
	DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 V_9;
	memset((&V_9), 0, sizeof(V_9));
	DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 V_10;
	memset((&V_10), 0, sizeof(V_10));
	DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 V_11;
	memset((&V_11), 0, sizeof(V_11));
	DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 V_12;
	memset((&V_12), 0, sizeof(V_12));
	DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 V_13;
	memset((&V_13), 0, sizeof(V_13));
	DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 V_14;
	memset((&V_14), 0, sizeof(V_14));
	DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 V_15;
	memset((&V_15), 0, sizeof(V_15));
	DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 V_16;
	memset((&V_16), 0, sizeof(V_16));
	DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 V_17;
	memset((&V_17), 0, sizeof(V_17));
	DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 V_18;
	memset((&V_18), 0, sizeof(V_18));
	DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 V_19;
	memset((&V_19), 0, sizeof(V_19));
	Exception_t* V_20 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		bool L_0;
		L_0 = SQLiteDB_get_Exists_m7FD2BF7220A610A78280C3C0395D5C668142D195(__this, NULL);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_1 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_2 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_2);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_2, _stringLiteral969293C4EBCD2637A59D4F7676AF011FC83A7950, NULL);
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* L_3 = ___schema0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = DBSchema_get_TableName_m68F7B5461DCDCEBAA2F7524D595ED6AFECA8C049_inline(L_3, NULL);
		bool L_5;
		L_5 = SQLiteDB_IsTableExists_m8BAF42AADD616552CE817B42849DF5F408BAC5EC(__this, L_4, NULL);
		if (!L_5)
		{
			goto IL_0062;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_6 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_7 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* L_8 = ___schema0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = DBSchema_get_TableName_m68F7B5461DCDCEBAA2F7524D595ED6AFECA8C049_inline(L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC5D9D56F534D3D95C55393032686CA5D9252AC4F, L_9, _stringLiteral26FBFEE106233905F80DE6B30A8922886088B952, NULL);
		NullCheck(L_7);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_7, L_10, NULL);
	}

IL_0060:
	{
		return (bool)0;
	}

IL_0062:
	{
		DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* L_11 = ___schema0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = DBSchema_get_TableName_m68F7B5461DCDCEBAA2F7524D595ED6AFECA8C049_inline(L_11, NULL);
		bool L_13;
		L_13 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_12, NULL);
		if (!L_13)
		{
			goto IL_008d;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_14 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_14)
		{
			goto IL_008b;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_15 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_15);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_15, _stringLiteralDD8FA2335D5D09C3C4B884B5AD26AFAAB00B0DC1, NULL);
	}

IL_008b:
	{
		return (bool)0;
	}

IL_008d:
	{
		DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* L_16 = ___schema0;
		if (!L_16)
		{
			goto IL_00a3;
		}
	}
	{
		DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* L_17 = ___schema0;
		NullCheck(L_17);
		List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* L_18;
		L_18 = DBSchema_GetTableFields_mA5D6F5AB415B366C64C8CB65A3BA69FD99DB9D4B_inline(L_17, NULL);
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_m9C4E5C345C08B7CA77C03DE67A079031EAA53207_inline(L_18, List_1_get_Count_m9C4E5C345C08B7CA77C03DE67A079031EAA53207_RuntimeMethod_var);
		if (L_19)
		{
			goto IL_00be;
		}
	}

IL_00a3:
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_20 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_20)
		{
			goto IL_00bc;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_21 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_21);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_21, _stringLiteral786610ECE537123B5B868EF7D68E5957D270BA8C, NULL);
	}

IL_00bc:
	{
		return (bool)0;
	}

IL_00be:
	{
		V_0 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03c2:
			{// begin finally (depth: 1)
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_22 = __this->___command_6;
				NullCheck(L_22);
				Component_Dispose_m7D0C063EA18E1FFA59CB369232131150372DC7B2(L_22, NULL);
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_23 = __this->___connection_4;
				NullCheck(L_23);
				VirtualActionInvoker0::Invoke(15 /* System.Void System.Data.Common.DbConnection::Close() */, L_23);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					V_1 = 0;
					DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* L_24 = ___schema0;
					NullCheck(L_24);
					String_t* L_25;
					L_25 = DBSchema_get_TableName_m68F7B5461DCDCEBAA2F7524D595ED6AFECA8C049_inline(L_24, NULL);
					String_t* L_26;
					L_26 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral75EE8733258B2DB77C4BB8B9E091F4D37134AC5D, L_25, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, NULL);
					V_2 = L_26;
					V_3 = 0;
					goto IL_0348_2;
				}

IL_00df_2:
				{
					int32_t L_27 = V_3;
					DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* L_28 = ___schema0;
					NullCheck(L_28);
					List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* L_29;
					L_29 = DBSchema_GetTableFields_mA5D6F5AB415B366C64C8CB65A3BA69FD99DB9D4B_inline(L_28, NULL);
					NullCheck(L_29);
					int32_t L_30;
					L_30 = List_1_get_Count_m9C4E5C345C08B7CA77C03DE67A079031EAA53207_inline(L_29, List_1_get_Count_m9C4E5C345C08B7CA77C03DE67A079031EAA53207_RuntimeMethod_var);
					if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_30, 1))))))
					{
						goto IL_0235_2;
					}
				}
				{
					String_t* L_31 = V_2;
					V_4 = L_31;
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = L_32;
					String_t* L_34 = V_4;
					NullCheck(L_33);
					ArrayElementTypeCheck (L_33, L_34);
					(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_34);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_33;
					DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* L_36 = ___schema0;
					NullCheck(L_36);
					List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* L_37;
					L_37 = DBSchema_GetTableFields_mA5D6F5AB415B366C64C8CB65A3BA69FD99DB9D4B_inline(L_36, NULL);
					int32_t L_38 = V_3;
					NullCheck(L_37);
					DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 L_39;
					L_39 = List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A(L_37, L_38, List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A_RuntimeMethod_var);
					V_5 = L_39;
					String_t* L_40 = (&V_5)->___name_0;
					NullCheck(L_35);
					ArrayElementTypeCheck (L_35, L_40);
					(L_35)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_40);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = L_35;
					NullCheck(L_41);
					ArrayElementTypeCheck (L_41, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
					(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = L_41;
					DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* L_43 = ___schema0;
					NullCheck(L_43);
					List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* L_44;
					L_44 = DBSchema_GetTableFields_mA5D6F5AB415B366C64C8CB65A3BA69FD99DB9D4B_inline(L_43, NULL);
					int32_t L_45 = V_3;
					NullCheck(L_44);
					DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 L_46;
					L_46 = List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A(L_44, L_45, List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A_RuntimeMethod_var);
					V_6 = L_46;
					int32_t L_47 = (&V_6)->___type_1;
					String_t* L_48;
					L_48 = SQLiteDB_GetDataType_mFC87E7BB8FABC086C7F69AD08E01DCB42C519F7E(__this, L_47, NULL);
					NullCheck(L_42);
					ArrayElementTypeCheck (L_42, L_48);
					(L_42)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_48);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_49 = L_42;
					NullCheck(L_49);
					ArrayElementTypeCheck (L_49, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
					(L_49)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = L_49;
					DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* L_51 = ___schema0;
					NullCheck(L_51);
					List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* L_52;
					L_52 = DBSchema_GetTableFields_mA5D6F5AB415B366C64C8CB65A3BA69FD99DB9D4B_inline(L_51, NULL);
					int32_t L_53 = V_3;
					NullCheck(L_52);
					DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 L_54;
					L_54 = List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A(L_52, L_53, List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A_RuntimeMethod_var);
					V_7 = L_54;
					int32_t L_55 = (&V_7)->___size_2;
					int32_t L_56 = L_55;
					RuntimeObject* L_57 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_56);
					NullCheck(L_50);
					ArrayElementTypeCheck (L_50, L_57);
					(L_50)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_57);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_58 = L_50;
					NullCheck(L_58);
					ArrayElementTypeCheck (L_58, _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924);
					(L_58)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)_stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924);
					String_t* L_59;
					L_59 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_58, NULL);
					V_2 = L_59;
					DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* L_60 = ___schema0;
					NullCheck(L_60);
					List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* L_61;
					L_61 = DBSchema_GetTableFields_mA5D6F5AB415B366C64C8CB65A3BA69FD99DB9D4B_inline(L_60, NULL);
					int32_t L_62 = V_3;
					NullCheck(L_61);
					DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 L_63;
					L_63 = List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A(L_61, L_62, List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A_RuntimeMethod_var);
					V_8 = L_63;
					bool L_64 = (&V_8)->___isNotNull_4;
					if (!L_64)
					{
						goto IL_0197_2;
					}
				}
				{
					String_t* L_65 = V_2;
					String_t* L_66;
					L_66 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_65, _stringLiteral45DC883871F1AAB49889B84527A442DB88D8A93D, NULL);
					V_2 = L_66;
				}

IL_0197_2:
				{
					DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* L_67 = ___schema0;
					NullCheck(L_67);
					List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* L_68;
					L_68 = DBSchema_GetTableFields_mA5D6F5AB415B366C64C8CB65A3BA69FD99DB9D4B_inline(L_67, NULL);
					int32_t L_69 = V_3;
					NullCheck(L_68);
					DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 L_70;
					L_70 = List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A(L_68, L_69, List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A_RuntimeMethod_var);
					V_9 = L_70;
					bool L_71 = (&V_9)->___isUnique_5;
					if (L_71)
					{
						goto IL_01cb_2;
					}
				}
				{
					DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* L_72 = ___schema0;
					NullCheck(L_72);
					List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* L_73;
					L_73 = DBSchema_GetTableFields_mA5D6F5AB415B366C64C8CB65A3BA69FD99DB9D4B_inline(L_72, NULL);
					int32_t L_74 = V_3;
					NullCheck(L_73);
					DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 L_75;
					L_75 = List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A(L_73, L_74, List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A_RuntimeMethod_var);
					V_10 = L_75;
					bool L_76 = (&V_10)->___isPrimaryKey_3;
					if (!L_76)
					{
						goto IL_01d7_2;
					}
				}

IL_01cb_2:
				{
					String_t* L_77 = V_2;
					String_t* L_78;
					L_78 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_77, _stringLiteral7245750688F8ABD9E50DA82005D421F8461EC1E6, NULL);
					V_2 = L_78;
				}

IL_01d7_2:
				{
					DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* L_79 = ___schema0;
					NullCheck(L_79);
					List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* L_80;
					L_80 = DBSchema_GetTableFields_mA5D6F5AB415B366C64C8CB65A3BA69FD99DB9D4B_inline(L_79, NULL);
					int32_t L_81 = V_3;
					NullCheck(L_80);
					DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 L_82;
					L_82 = List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A(L_80, L_81, List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A_RuntimeMethod_var);
					V_11 = L_82;
					bool L_83 = (&V_11)->___isPrimaryKey_3;
					if (!L_83)
					{
						goto IL_01f5_2;
					}
				}
				{
					int32_t L_84 = V_3;
					V_1 = ((int32_t)il2cpp_codegen_add(L_84, 1));
				}

IL_01f5_2:
				{
					int32_t L_85 = V_1;
					if ((((int32_t)L_85) <= ((int32_t)0)))
					{
						goto IL_0224_2;
					}
				}
				{
					String_t* L_86 = V_2;
					DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* L_87 = ___schema0;
					NullCheck(L_87);
					List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* L_88;
					L_88 = DBSchema_GetTableFields_mA5D6F5AB415B366C64C8CB65A3BA69FD99DB9D4B_inline(L_87, NULL);
					int32_t L_89 = V_1;
					NullCheck(L_88);
					DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 L_90;
					L_90 = List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A(L_88, ((int32_t)il2cpp_codegen_subtract(L_89, 1)), List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A_RuntimeMethod_var);
					V_12 = L_90;
					String_t* L_91 = (&V_12)->___name_0;
					String_t* L_92;
					L_92 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_86, _stringLiteral069B4B30890E9F5A795AE805C0312AE1B9B69845, L_91, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
					V_2 = L_92;
				}

IL_0224_2:
				{
					String_t* L_93 = V_2;
					String_t* L_94;
					L_94 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_93, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
					V_2 = L_94;
					goto IL_0344_2;
				}

IL_0235_2:
				{
					String_t* L_95 = V_2;
					V_4 = L_95;
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_96 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_97 = L_96;
					String_t* L_98 = V_4;
					NullCheck(L_97);
					ArrayElementTypeCheck (L_97, L_98);
					(L_97)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_98);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_99 = L_97;
					DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* L_100 = ___schema0;
					NullCheck(L_100);
					List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* L_101;
					L_101 = DBSchema_GetTableFields_mA5D6F5AB415B366C64C8CB65A3BA69FD99DB9D4B_inline(L_100, NULL);
					int32_t L_102 = V_3;
					NullCheck(L_101);
					DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 L_103;
					L_103 = List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A(L_101, L_102, List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A_RuntimeMethod_var);
					V_13 = L_103;
					String_t* L_104 = (&V_13)->___name_0;
					NullCheck(L_99);
					ArrayElementTypeCheck (L_99, L_104);
					(L_99)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_104);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_105 = L_99;
					NullCheck(L_105);
					ArrayElementTypeCheck (L_105, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
					(L_105)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_106 = L_105;
					DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* L_107 = ___schema0;
					NullCheck(L_107);
					List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* L_108;
					L_108 = DBSchema_GetTableFields_mA5D6F5AB415B366C64C8CB65A3BA69FD99DB9D4B_inline(L_107, NULL);
					int32_t L_109 = V_3;
					NullCheck(L_108);
					DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 L_110;
					L_110 = List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A(L_108, L_109, List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A_RuntimeMethod_var);
					V_14 = L_110;
					int32_t L_111 = (&V_14)->___type_1;
					String_t* L_112;
					L_112 = SQLiteDB_GetDataType_mFC87E7BB8FABC086C7F69AD08E01DCB42C519F7E(__this, L_111, NULL);
					NullCheck(L_106);
					ArrayElementTypeCheck (L_106, L_112);
					(L_106)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_112);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_113 = L_106;
					NullCheck(L_113);
					ArrayElementTypeCheck (L_113, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
					(L_113)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_114 = L_113;
					DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* L_115 = ___schema0;
					NullCheck(L_115);
					List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* L_116;
					L_116 = DBSchema_GetTableFields_mA5D6F5AB415B366C64C8CB65A3BA69FD99DB9D4B_inline(L_115, NULL);
					int32_t L_117 = V_3;
					NullCheck(L_116);
					DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 L_118;
					L_118 = List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A(L_116, L_117, List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A_RuntimeMethod_var);
					V_15 = L_118;
					int32_t L_119 = (&V_15)->___size_2;
					int32_t L_120 = L_119;
					RuntimeObject* L_121 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_120);
					NullCheck(L_114);
					ArrayElementTypeCheck (L_114, L_121);
					(L_114)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_121);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_122 = L_114;
					NullCheck(L_122);
					ArrayElementTypeCheck (L_122, _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924);
					(L_122)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)_stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924);
					String_t* L_123;
					L_123 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_122, NULL);
					V_2 = L_123;
					DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* L_124 = ___schema0;
					NullCheck(L_124);
					List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* L_125;
					L_125 = DBSchema_GetTableFields_mA5D6F5AB415B366C64C8CB65A3BA69FD99DB9D4B_inline(L_124, NULL);
					int32_t L_126 = V_3;
					NullCheck(L_125);
					DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 L_127;
					L_127 = List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A(L_125, L_126, List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A_RuntimeMethod_var);
					V_16 = L_127;
					bool L_128 = (&V_16)->___isNotNull_4;
					if (!L_128)
					{
						goto IL_02da_2;
					}
				}
				{
					String_t* L_129 = V_2;
					String_t* L_130;
					L_130 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_129, _stringLiteral45DC883871F1AAB49889B84527A442DB88D8A93D, NULL);
					V_2 = L_130;
				}

IL_02da_2:
				{
					DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* L_131 = ___schema0;
					NullCheck(L_131);
					List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* L_132;
					L_132 = DBSchema_GetTableFields_mA5D6F5AB415B366C64C8CB65A3BA69FD99DB9D4B_inline(L_131, NULL);
					int32_t L_133 = V_3;
					NullCheck(L_132);
					DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 L_134;
					L_134 = List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A(L_132, L_133, List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A_RuntimeMethod_var);
					V_17 = L_134;
					bool L_135 = (&V_17)->___isUnique_5;
					if (L_135)
					{
						goto IL_030e_2;
					}
				}
				{
					DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* L_136 = ___schema0;
					NullCheck(L_136);
					List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* L_137;
					L_137 = DBSchema_GetTableFields_mA5D6F5AB415B366C64C8CB65A3BA69FD99DB9D4B_inline(L_136, NULL);
					int32_t L_138 = V_3;
					NullCheck(L_137);
					DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 L_139;
					L_139 = List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A(L_137, L_138, List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A_RuntimeMethod_var);
					V_18 = L_139;
					bool L_140 = (&V_18)->___isPrimaryKey_3;
					if (!L_140)
					{
						goto IL_031a_2;
					}
				}

IL_030e_2:
				{
					String_t* L_141 = V_2;
					String_t* L_142;
					L_142 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_141, _stringLiteral7245750688F8ABD9E50DA82005D421F8461EC1E6, NULL);
					V_2 = L_142;
				}

IL_031a_2:
				{
					DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* L_143 = ___schema0;
					NullCheck(L_143);
					List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* L_144;
					L_144 = DBSchema_GetTableFields_mA5D6F5AB415B366C64C8CB65A3BA69FD99DB9D4B_inline(L_143, NULL);
					int32_t L_145 = V_3;
					NullCheck(L_144);
					DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 L_146;
					L_146 = List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A(L_144, L_145, List_1_get_Item_mFD2521246CD85D855E8531C97BFA865F3C5CA11A_RuntimeMethod_var);
					V_19 = L_146;
					bool L_147 = (&V_19)->___isPrimaryKey_3;
					if (!L_147)
					{
						goto IL_0338_2;
					}
				}
				{
					int32_t L_148 = V_3;
					V_1 = ((int32_t)il2cpp_codegen_add(L_148, 1));
				}

IL_0338_2:
				{
					String_t* L_149 = V_2;
					String_t* L_150;
					L_150 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_149, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
					V_2 = L_150;
				}

IL_0344_2:
				{
					int32_t L_151 = V_3;
					V_3 = ((int32_t)il2cpp_codegen_add(L_151, 1));
				}

IL_0348_2:
				{
					int32_t L_152 = V_3;
					DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* L_153 = ___schema0;
					NullCheck(L_153);
					List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* L_154;
					L_154 = DBSchema_GetTableFields_mA5D6F5AB415B366C64C8CB65A3BA69FD99DB9D4B_inline(L_153, NULL);
					NullCheck(L_154);
					int32_t L_155;
					L_155 = List_1_get_Count_m9C4E5C345C08B7CA77C03DE67A079031EAA53207_inline(L_154, List_1_get_Count_m9C4E5C345C08B7CA77C03DE67A079031EAA53207_RuntimeMethod_var);
					if ((((int32_t)L_152) < ((int32_t)L_155)))
					{
						goto IL_00df_2;
					}
				}
				{
					SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_156 = __this->___connection_4;
					NullCheck(L_156);
					VirtualActionInvoker0::Invoke(20 /* System.Void System.Data.Common.DbConnection::Open() */, L_156);
					SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_157 = __this->___connection_4;
					NullCheck(L_157);
					SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_158;
					L_158 = SqliteConnection_CreateCommand_m3BED520F980F2E040D090CD4B06D14731D0E044F(L_157, NULL);
					__this->___command_6 = L_158;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___command_6), (void*)L_158);
					SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_159 = __this->___command_6;
					String_t* L_160 = V_2;
					NullCheck(L_159);
					VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_159, L_160);
					SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_161 = __this->___command_6;
					NullCheck(L_161);
					int32_t L_162;
					L_162 = VirtualFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 System.Data.Common.DbCommand::ExecuteNonQuery() */, L_161);
					V_0 = (bool)1;
					goto IL_03d9;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0394_1;
				}
				throw e;
			}

CATCH_0394_1:
			{// begin catch(System.Exception)
				{
					V_20 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_163 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
					if (!L_163)
					{
						goto IL_03bb_1;
					}
				}
				{
					OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_164 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
					Exception_t* L_165 = V_20;
					NullCheck(L_165);
					String_t* L_166;
					L_166 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_165);
					String_t* L_167;
					L_167 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE622D1F8DD391D6878C952018EB48CC8CAA260D3)), L_166, NULL);
					NullCheck(L_164);
					OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_164, L_167, NULL);
				}

IL_03bb_1:
				{
					V_0 = (bool)0;
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_03d9;
				}
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03d9:
	{
		bool L_168 = V_0;
		return L_168;
	}
}
// System.Boolean SQLiteDatabase.SQLiteDB::DeleteTable(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SQLiteDB_DeleteTable_mB6089F43102984ED191ADCF1B76C76CD4F3B6D8C (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, String_t* ___tableName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral315B6C12262BF11C219578648A1B087EA48ADB91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral969293C4EBCD2637A59D4F7676AF011FC83A7950);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7C85A436DB537D03DC7554B046DFB3EB53C07A6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		bool L_0;
		L_0 = SQLiteDB_get_Exists_m7FD2BF7220A610A78280C3C0395D5C668142D195(__this, NULL);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_1 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_2 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_2);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_2, _stringLiteral969293C4EBCD2637A59D4F7676AF011FC83A7950, NULL);
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		String_t* L_3 = ___tableName0;
		bool L_4;
		L_4 = SQLiteDB_IsTableExists_m8BAF42AADD616552CE817B42849DF5F408BAC5EC(__this, L_3, NULL);
		if (L_4)
		{
			goto IL_004d;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_5 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_6 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_6);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_6, _stringLiteral315B6C12262BF11C219578648A1B087EA48ADB91, NULL);
	}

IL_004b:
	{
		return (bool)0;
	}

IL_004d:
	{
		V_0 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c2:
			{// begin finally (depth: 1)
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_7 = __this->___command_6;
				NullCheck(L_7);
				Component_Dispose_m7D0C063EA18E1FFA59CB369232131150372DC7B2(L_7, NULL);
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_8 = __this->___connection_4;
				NullCheck(L_8);
				VirtualActionInvoker0::Invoke(15 /* System.Void System.Data.Common.DbConnection::Close() */, L_8);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				String_t* L_9 = ___tableName0;
				String_t* L_10;
				L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF7C85A436DB537D03DC7554B046DFB3EB53C07A6, L_9, NULL);
				V_1 = L_10;
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_11 = __this->___connection_4;
				NullCheck(L_11);
				VirtualActionInvoker0::Invoke(20 /* System.Void System.Data.Common.DbConnection::Open() */, L_11);
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_12 = __this->___connection_4;
				NullCheck(L_12);
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_13;
				L_13 = SqliteConnection_CreateCommand_m3BED520F980F2E040D090CD4B06D14731D0E044F(L_12, NULL);
				__this->___command_6 = L_13;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___command_6), (void*)L_13);
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_14 = __this->___command_6;
				String_t* L_15 = V_1;
				NullCheck(L_14);
				VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_14, L_15);
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_16 = __this->___command_6;
				NullCheck(L_16);
				int32_t L_17;
				L_17 = VirtualFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 System.Data.Common.DbCommand::ExecuteNonQuery() */, L_16);
				V_0 = (bool)1;
				goto IL_00d9;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0096_1;
				}
				throw e;
			}

CATCH_0096_1:
			{// begin catch(System.Exception)
				{
					V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_18 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
					if (!L_18)
					{
						goto IL_00bb_1;
					}
				}
				{
					OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_19 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
					Exception_t* L_20 = V_2;
					NullCheck(L_20);
					String_t* L_21;
					L_21 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_20);
					String_t* L_22;
					L_22 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB087F64AD515D0B7E4AC564EE597539328CF438C)), L_21, NULL);
					NullCheck(L_19);
					OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_19, L_22, NULL);
				}

IL_00bb_1:
				{
					V_0 = (bool)0;
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_00d9;
				}
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d9:
	{
		bool L_23 = V_0;
		return L_23;
	}
}
// System.Int32 SQLiteDatabase.SQLiteDB::ClearTable(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLiteDB_ClearTable_m484CBB57C05AF0D92FCF1BEDFAF3FCF15E1AA5FF (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, String_t* ___tableName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral315B6C12262BF11C219578648A1B087EA48ADB91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BF4F65E6C6B41449B8DBED5A74A32F2319A9FBD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral969293C4EBCD2637A59D4F7676AF011FC83A7950);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (-1);
		bool L_0;
		L_0 = SQLiteDB_get_Exists_m7FD2BF7220A610A78280C3C0395D5C668142D195(__this, NULL);
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_1 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_2 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_2);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_2, _stringLiteral969293C4EBCD2637A59D4F7676AF011FC83A7950, NULL);
	}

IL_0026:
	{
		return (-1);
	}

IL_0028:
	{
		String_t* L_3 = ___tableName0;
		bool L_4;
		L_4 = SQLiteDB_IsTableExists_m8BAF42AADD616552CE817B42849DF5F408BAC5EC(__this, L_3, NULL);
		if (L_4)
		{
			goto IL_004f;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_5 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_5)
		{
			goto IL_004d;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_6 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_6);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_6, _stringLiteral315B6C12262BF11C219578648A1B087EA48ADB91, NULL);
	}

IL_004d:
	{
		return (-1);
	}

IL_004f:
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00be:
			{// begin finally (depth: 1)
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_7 = __this->___command_6;
				NullCheck(L_7);
				Component_Dispose_m7D0C063EA18E1FFA59CB369232131150372DC7B2(L_7, NULL);
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_8 = __this->___connection_4;
				NullCheck(L_8);
				VirtualActionInvoker0::Invoke(15 /* System.Void System.Data.Common.DbConnection::Close() */, L_8);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)

IL_004f_1:
			try
			{// begin try (depth: 2)

IL_004f_2:
				String_t* L_9 = ___tableName0;
				String_t* L_10;
				L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3BF4F65E6C6B41449B8DBED5A74A32F2319A9FBD, L_9, NULL);
				V_1 = L_10;
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_11 = __this->___connection_4;
				NullCheck(L_11);
				VirtualActionInvoker0::Invoke(20 /* System.Void System.Data.Common.DbConnection::Open() */, L_11);
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_12 = __this->___connection_4;
				NullCheck(L_12);
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_13;
				L_13 = SqliteConnection_CreateCommand_m3BED520F980F2E040D090CD4B06D14731D0E044F(L_12, NULL);
				__this->___command_6 = L_13;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___command_6), (void*)L_13);
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_14 = __this->___command_6;
				String_t* L_15 = V_1;
				NullCheck(L_14);
				VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_14, L_15);
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_16 = __this->___command_6;
				NullCheck(L_16);
				int32_t L_17;
				L_17 = VirtualFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 System.Data.Common.DbCommand::ExecuteNonQuery() */, L_16);
				V_0 = L_17;
				goto IL_00d5;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0094_1;
				}
				throw e;
			}

CATCH_0094_1:
			{// begin catch(System.Exception)
				{
					V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_18 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
					if (!L_18)
					{
						goto IL_00b9_1;
					}
				}
				{
					OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_19 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
					Exception_t* L_20 = V_2;
					NullCheck(L_20);
					String_t* L_21;
					L_21 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_20);
					String_t* L_22;
					L_22 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral774EC1C89B5B0276F261B36CAC370D7CE3C66893)), L_21, NULL);
					NullCheck(L_19);
					OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_19, L_22, NULL);
				}

IL_00b9_1:
				{
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_00d5;
				}
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d5:
	{
		int32_t L_23 = V_0;
		return L_23;
	}
}
// System.Boolean SQLiteDatabase.SQLiteDB::DeleteDatabase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SQLiteDB_DeleteDatabase_m8B74810DFEDCB29FE6CC6381B557A67E47731694 (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral969293C4EBCD2637A59D4F7676AF011FC83A7950);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		bool L_0;
		L_0 = SQLiteDB_get_Exists_m7FD2BF7220A610A78280C3C0395D5C668142D195(__this, NULL);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_1 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_2 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_2);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_2, _stringLiteral969293C4EBCD2637A59D4F7676AF011FC83A7950, NULL);
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		V_0 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a4:
			{// begin finally (depth: 1)
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					String_t* L_3 = __this->____dbPath_2;
					String_t* L_4 = __this->____dbName_1;
					il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
					String_t* L_5;
					L_5 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_3, L_4, NULL);
					V_1 = L_5;
					String_t* L_6 = V_1;
					bool L_7;
					L_7 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_6, NULL);
					if (!L_7)
					{
						goto IL_0058_2;
					}
				}
				{
					SQLiteDB_Dispose_m442AB879D1AC74A9F04603C8128657A2EC154F4F(__this, NULL);
					String_t* L_8 = V_1;
					File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_8, NULL);
					V_0 = (bool)1;
					goto IL_0073_2;
				}

IL_0058_2:
				{
					OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_9 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
					if (!L_9)
					{
						goto IL_0071_2;
					}
				}
				{
					OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_10 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
					NullCheck(L_10);
					OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_10, _stringLiteral969293C4EBCD2637A59D4F7676AF011FC83A7950, NULL);
				}

IL_0071_2:
				{
					V_0 = (bool)0;
				}

IL_0073_2:
				{
					goto IL_00a5;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0078_1;
				}
				throw e;
			}

CATCH_0078_1:
			{// begin catch(System.Exception)
				{
					V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_11 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
					if (!L_11)
					{
						goto IL_009d_1;
					}
				}
				{
					OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_12 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
					Exception_t* L_13 = V_2;
					NullCheck(L_13);
					String_t* L_14;
					L_14 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
					String_t* L_15;
					L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral509C865754F7A2422F25CEF7769CBD96A1C21C93)), L_14, NULL);
					NullCheck(L_12);
					OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_12, L_15, NULL);
				}

IL_009d_1:
				{
					V_0 = (bool)0;
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_00a5;
				}
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a5:
	{
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Int32 SQLiteDatabase.SQLiteDB::Insert(System.String,System.Collections.Generic.List`1<SQLiteDatabase.SQLiteDB/DB_DataPair>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLiteDB_Insert_mB684452FD7F2F726002278EBB88D136604E696D3 (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, String_t* ___tableName0, List_1_tB771D4A1A06199773AE1BA75A8AE0DE6762AAB88* ___dataList1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7E97A1C21BC9C1F1CD486F87F21FC8A4C4523748_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3D545CD6B59359FFE862706E5BAB5E7DFFA704E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28D8253BC9B2535C67B29B312DB089DEC5F15D01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31C41112B7DD380345C2F6555DB2A970209CCB01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5857551470FA48B3F71F992583A93239D3BFAF12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70F8B153ADDD50FBCC5EF9A0F9FA30B670AF0728);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral969293C4EBCD2637A59D4F7676AF011FC83A7950);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3ECBB469774B57CCC7019C104E3DF55A41DFBE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B V_4;
	memset((&V_4), 0, sizeof(V_4));
	String_t* V_5 = NULL;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		bool L_0;
		L_0 = SQLiteDB_get_Exists_m7FD2BF7220A610A78280C3C0395D5C668142D195(__this, NULL);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_1 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_2 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_2);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_2, _stringLiteral969293C4EBCD2637A59D4F7676AF011FC83A7950, NULL);
	}

IL_0024:
	{
		return (-1);
	}

IL_0026:
	{
		String_t* L_3 = ___tableName0;
		bool L_4;
		L_4 = SQLiteDB_IsTableExists_m8BAF42AADD616552CE817B42849DF5F408BAC5EC(__this, L_3, NULL);
		if (L_4)
		{
			goto IL_004d;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_5 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_6 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_6);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_6, _stringLiteralA3ECBB469774B57CCC7019C104E3DF55A41DFBE0, NULL);
	}

IL_004b:
	{
		return (-1);
	}

IL_004d:
	{
		V_0 = (-1);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0154:
			{// begin finally (depth: 1)
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_7 = __this->___command_6;
				NullCheck(L_7);
				Component_Dispose_m7D0C063EA18E1FFA59CB369232131150372DC7B2(L_7, NULL);
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_8 = __this->___connection_4;
				NullCheck(L_8);
				VirtualActionInvoker0::Invoke(15 /* System.Void System.Data.Common.DbConnection::Close() */, L_8);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					String_t* L_9 = ___tableName0;
					String_t* L_10;
					L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral28D8253BC9B2535C67B29B312DB089DEC5F15D01, L_9, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, NULL);
					V_1 = L_10;
					V_2 = _stringLiteral70F8B153ADDD50FBCC5EF9A0F9FA30B670AF0728;
					V_3 = 0;
					goto IL_00d9_2;
				}

IL_006d_2:
				{
					List_1_tB771D4A1A06199773AE1BA75A8AE0DE6762AAB88* L_11 = ___dataList1;
					int32_t L_12 = V_3;
					NullCheck(L_11);
					DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B L_13;
					L_13 = List_1_get_Item_m3D545CD6B59359FFE862706E5BAB5E7DFFA704E8(L_11, L_12, List_1_get_Item_m3D545CD6B59359FFE862706E5BAB5E7DFFA704E8_RuntimeMethod_var);
					V_4 = L_13;
					int32_t L_14 = V_3;
					List_1_tB771D4A1A06199773AE1BA75A8AE0DE6762AAB88* L_15 = ___dataList1;
					NullCheck(L_15);
					int32_t L_16;
					L_16 = List_1_get_Count_m7E97A1C21BC9C1F1CD486F87F21FC8A4C4523748_inline(L_15, List_1_get_Count_m7E97A1C21BC9C1F1CD486F87F21FC8A4C4523748_RuntimeMethod_var);
					if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_16, 1))))))
					{
						goto IL_00af_2;
					}
				}
				{
					String_t* L_17 = V_1;
					String_t* L_18 = (&V_4)->___fieldName_0;
					String_t* L_19;
					L_19 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_17, L_18, _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924, NULL);
					V_1 = L_19;
					String_t* L_20 = V_2;
					String_t* L_21 = (&V_4)->___value_1;
					String_t* L_22;
					L_22 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_20, L_21, _stringLiteral5857551470FA48B3F71F992583A93239D3BFAF12, NULL);
					V_2 = L_22;
					goto IL_00d5_2;
				}

IL_00af_2:
				{
					String_t* L_23 = V_1;
					String_t* L_24 = (&V_4)->___fieldName_0;
					String_t* L_25;
					L_25 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_23, L_24, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
					V_1 = L_25;
					String_t* L_26 = V_2;
					String_t* L_27 = (&V_4)->___value_1;
					String_t* L_28;
					L_28 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_26, L_27, _stringLiteral31C41112B7DD380345C2F6555DB2A970209CCB01, NULL);
					V_2 = L_28;
				}

IL_00d5_2:
				{
					int32_t L_29 = V_3;
					V_3 = ((int32_t)il2cpp_codegen_add(L_29, 1));
				}

IL_00d9_2:
				{
					int32_t L_30 = V_3;
					List_1_tB771D4A1A06199773AE1BA75A8AE0DE6762AAB88* L_31 = ___dataList1;
					NullCheck(L_31);
					int32_t L_32;
					L_32 = List_1_get_Count_m7E97A1C21BC9C1F1CD486F87F21FC8A4C4523748_inline(L_31, List_1_get_Count_m7E97A1C21BC9C1F1CD486F87F21FC8A4C4523748_RuntimeMethod_var);
					if ((((int32_t)L_30) < ((int32_t)L_32)))
					{
						goto IL_006d_2;
					}
				}
				{
					String_t* L_33 = V_1;
					String_t* L_34 = V_2;
					String_t* L_35;
					L_35 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_33, L_34, NULL);
					V_5 = L_35;
					SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_36 = __this->___connection_4;
					NullCheck(L_36);
					VirtualActionInvoker0::Invoke(20 /* System.Void System.Data.Common.DbConnection::Open() */, L_36);
					SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_37 = __this->___connection_4;
					NullCheck(L_37);
					SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_38;
					L_38 = SqliteConnection_CreateCommand_m3BED520F980F2E040D090CD4B06D14731D0E044F(L_37, NULL);
					__this->___command_6 = L_38;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___command_6), (void*)L_38);
					SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_39 = __this->___command_6;
					String_t* L_40 = V_5;
					NullCheck(L_39);
					VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_39, L_40);
					SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_41 = __this->___command_6;
					NullCheck(L_41);
					int32_t L_42;
					L_42 = VirtualFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 System.Data.Common.DbCommand::ExecuteNonQuery() */, L_41);
					V_0 = L_42;
					goto IL_016b;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0128_1;
				}
				throw e;
			}

CATCH_0128_1:
			{// begin catch(System.Exception)
				{
					V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_43 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
					if (!L_43)
					{
						goto IL_014f_1;
					}
				}
				{
					OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_44 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
					Exception_t* L_45 = V_6;
					NullCheck(L_45);
					String_t* L_46;
					L_46 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_45);
					String_t* L_47;
					L_47 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A5341BD21CD624BBF4D079EE7155152E17ACE09)), L_46, NULL);
					NullCheck(L_44);
					OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_44, L_47, NULL);
				}

IL_014f_1:
				{
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_016b;
				}
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_016b:
	{
		int32_t L_48 = V_0;
		return L_48;
	}
}
// System.Int32 SQLiteDatabase.SQLiteDB::Insert(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLiteDB_Insert_m3AE2AC59BC74F6F7051AFC669B2C3BEACD688923 (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, String_t* ___query0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral969293C4EBCD2637A59D4F7676AF011FC83A7950);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		bool L_0;
		L_0 = SQLiteDB_get_Exists_m7FD2BF7220A610A78280C3C0395D5C668142D195(__this, NULL);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_1 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_2 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_2);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_2, _stringLiteral969293C4EBCD2637A59D4F7676AF011FC83A7950, NULL);
	}

IL_0024:
	{
		return (-1);
	}

IL_0026:
	{
		V_0 = (-1);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008b:
			{// begin finally (depth: 1)
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_3 = __this->___command_6;
				NullCheck(L_3);
				Component_Dispose_m7D0C063EA18E1FFA59CB369232131150372DC7B2(L_3, NULL);
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_4 = __this->___connection_4;
				NullCheck(L_4);
				VirtualActionInvoker0::Invoke(15 /* System.Void System.Data.Common.DbConnection::Close() */, L_4);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_5 = __this->___connection_4;
				NullCheck(L_5);
				VirtualActionInvoker0::Invoke(20 /* System.Void System.Data.Common.DbConnection::Open() */, L_5);
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_6 = __this->___connection_4;
				NullCheck(L_6);
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_7;
				L_7 = SqliteConnection_CreateCommand_m3BED520F980F2E040D090CD4B06D14731D0E044F(L_6, NULL);
				__this->___command_6 = L_7;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___command_6), (void*)L_7);
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_8 = __this->___command_6;
				String_t* L_9 = ___query0;
				NullCheck(L_8);
				VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_8, L_9);
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_10 = __this->___command_6;
				NullCheck(L_10);
				int32_t L_11;
				L_11 = VirtualFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 System.Data.Common.DbCommand::ExecuteNonQuery() */, L_10);
				V_0 = L_11;
				goto IL_00a2;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0061_1;
				}
				throw e;
			}

CATCH_0061_1:
			{// begin catch(System.Exception)
				{
					V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_12 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
					if (!L_12)
					{
						goto IL_0086_1;
					}
				}
				{
					OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_13 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
					Exception_t* L_14 = V_1;
					NullCheck(L_14);
					String_t* L_15;
					L_15 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_14);
					String_t* L_16;
					L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A5341BD21CD624BBF4D079EE7155152E17ACE09)), L_15, NULL);
					NullCheck(L_13);
					OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_13, L_16, NULL);
				}

IL_0086_1:
				{
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_00a2;
				}
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a2:
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
// System.Int32 SQLiteDatabase.SQLiteDB::ExecuteNonQuery(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLiteDB_ExecuteNonQuery_mAB0D9D0C80D8AD57C8A3D898E68D4313481E723C (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, String_t* ___query0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral969293C4EBCD2637A59D4F7676AF011FC83A7950);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		bool L_0;
		L_0 = SQLiteDB_get_Exists_m7FD2BF7220A610A78280C3C0395D5C668142D195(__this, NULL);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_1 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_2 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_2);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_2, _stringLiteral969293C4EBCD2637A59D4F7676AF011FC83A7950, NULL);
	}

IL_0024:
	{
		return (-1);
	}

IL_0026:
	{
		V_0 = (-1);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008b:
			{// begin finally (depth: 1)
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_3 = __this->___command_6;
				NullCheck(L_3);
				Component_Dispose_m7D0C063EA18E1FFA59CB369232131150372DC7B2(L_3, NULL);
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_4 = __this->___connection_4;
				NullCheck(L_4);
				VirtualActionInvoker0::Invoke(15 /* System.Void System.Data.Common.DbConnection::Close() */, L_4);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_5 = __this->___connection_4;
				NullCheck(L_5);
				VirtualActionInvoker0::Invoke(20 /* System.Void System.Data.Common.DbConnection::Open() */, L_5);
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_6 = __this->___connection_4;
				NullCheck(L_6);
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_7;
				L_7 = SqliteConnection_CreateCommand_m3BED520F980F2E040D090CD4B06D14731D0E044F(L_6, NULL);
				__this->___command_6 = L_7;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___command_6), (void*)L_7);
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_8 = __this->___command_6;
				String_t* L_9 = ___query0;
				NullCheck(L_8);
				VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_8, L_9);
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_10 = __this->___command_6;
				NullCheck(L_10);
				int32_t L_11;
				L_11 = VirtualFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 System.Data.Common.DbCommand::ExecuteNonQuery() */, L_10);
				V_0 = L_11;
				goto IL_00a2;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0061_1;
				}
				throw e;
			}

CATCH_0061_1:
			{// begin catch(System.Exception)
				{
					V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_12 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
					if (!L_12)
					{
						goto IL_0086_1;
					}
				}
				{
					OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_13 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
					Exception_t* L_14 = V_1;
					NullCheck(L_14);
					String_t* L_15;
					L_15 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_14);
					String_t* L_16;
					L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2351BAFB34D9C5F1C3FDBEF359636ABB23018957)), L_15, NULL);
					NullCheck(L_13);
					OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_13, L_16, NULL);
				}

IL_0086_1:
				{
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_00a2;
				}
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a2:
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
// System.Int32 SQLiteDatabase.SQLiteDB::Update(System.String,System.Collections.Generic.List`1<SQLiteDatabase.SQLiteDB/DB_DataPair>,SQLiteDatabase.SQLiteDB/DB_ConditionPair)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLiteDB_Update_m6943134CF97CF460F7397D1E1309C3559BD57F6C (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, String_t* ___tableName0, List_1_tB771D4A1A06199773AE1BA75A8AE0DE6762AAB88* ___dataList1, DB_ConditionPair_tC1E8B0E10DA9A16ADCFFBD910B24BBA753E83D06 ___condition2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7E97A1C21BC9C1F1CD486F87F21FC8A4C4523748_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3D545CD6B59359FFE862706E5BAB5E7DFFA704E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AAA5F20B4D33A3BE0CC8A1E10CEA2459CDC61C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6955B13A4C5FF7336FF5297BF9C12A8D6BD75455);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D5A0A71D5C9C05AD6766B952219E3C055677C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral969293C4EBCD2637A59D4F7676AF011FC83A7950);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AA220E0FCE5E917D823E177B898237A503A6AF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3ECBB469774B57CCC7019C104E3DF55A41DFBE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB77D32D46DD32C6DEE17A344ECF5FC9EB0D063D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE397DAE59EDAD9F58B22EF99DACB2BDA2F99284);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B V_4;
	memset((&V_4), 0, sizeof(V_4));
	DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B V_5;
	memset((&V_5), 0, sizeof(V_5));
	DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B V_6;
	memset((&V_6), 0, sizeof(V_6));
	DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		bool L_0;
		L_0 = SQLiteDB_get_Exists_m7FD2BF7220A610A78280C3C0395D5C668142D195(__this, NULL);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_1 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_2 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_2);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_2, _stringLiteral969293C4EBCD2637A59D4F7676AF011FC83A7950, NULL);
	}

IL_0024:
	{
		return (-1);
	}

IL_0026:
	{
		String_t* L_3 = ___tableName0;
		bool L_4;
		L_4 = SQLiteDB_IsTableExists_m8BAF42AADD616552CE817B42849DF5F408BAC5EC(__this, L_3, NULL);
		if (L_4)
		{
			goto IL_004d;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_5 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_6 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_6);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_6, _stringLiteralA3ECBB469774B57CCC7019C104E3DF55A41DFBE0, NULL);
	}

IL_004b:
	{
		return (-1);
	}

IL_004d:
	{
		String_t* L_7 = (&___condition2)->___fieldName_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_7, NULL);
		bool L_9;
		L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_8, NULL);
		if (L_9)
		{
			goto IL_0079;
		}
	}
	{
		String_t* L_10 = (&___condition2)->___value_1;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_10, NULL);
		bool L_12;
		L_12 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_11, NULL);
		if (!L_12)
		{
			goto IL_0094;
		}
	}

IL_0079:
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_13 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_13)
		{
			goto IL_0092;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_14 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_14);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_14, _stringLiteral6955B13A4C5FF7336FF5297BF9C12A8D6BD75455, NULL);
	}

IL_0092:
	{
		return (-1);
	}

IL_0094:
	{
		V_0 = (-1);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01fc:
			{// begin finally (depth: 1)
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_15 = __this->___command_6;
				NullCheck(L_15);
				Component_Dispose_m7D0C063EA18E1FFA59CB369232131150372DC7B2(L_15, NULL);
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_16 = __this->___connection_4;
				NullCheck(L_16);
				VirtualActionInvoker0::Invoke(15 /* System.Void System.Data.Common.DbConnection::Close() */, L_16);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					String_t* L_17 = ___tableName0;
					String_t* L_18;
					L_18 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralB77D32D46DD32C6DEE17A344ECF5FC9EB0D063D8, L_17, _stringLiteral0AAA5F20B4D33A3BE0CC8A1E10CEA2459CDC61C0, NULL);
					V_1 = L_18;
					V_2 = 0;
					goto IL_018b_2;
				}

IL_00ae_2:
				{
					int32_t L_19 = V_2;
					List_1_tB771D4A1A06199773AE1BA75A8AE0DE6762AAB88* L_20 = ___dataList1;
					NullCheck(L_20);
					int32_t L_21;
					L_21 = List_1_get_Count_m7E97A1C21BC9C1F1CD486F87F21FC8A4C4523748_inline(L_20, List_1_get_Count_m7E97A1C21BC9C1F1CD486F87F21FC8A4C4523748_RuntimeMethod_var);
					if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1))))))
					{
						goto IL_013f_2;
					}
				}
				{
					String_t* L_22 = V_1;
					V_3 = L_22;
					StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
					StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
					String_t* L_25 = V_3;
					NullCheck(L_24);
					ArrayElementTypeCheck (L_24, L_25);
					(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_25);
					StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_24;
					List_1_tB771D4A1A06199773AE1BA75A8AE0DE6762AAB88* L_27 = ___dataList1;
					int32_t L_28 = V_2;
					NullCheck(L_27);
					DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B L_29;
					L_29 = List_1_get_Item_m3D545CD6B59359FFE862706E5BAB5E7DFFA704E8(L_27, L_28, List_1_get_Item_m3D545CD6B59359FFE862706E5BAB5E7DFFA704E8_RuntimeMethod_var);
					V_4 = L_29;
					String_t* L_30 = (&V_4)->___fieldName_0;
					NullCheck(L_26);
					ArrayElementTypeCheck (L_26, L_30);
					(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_30);
					StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_26;
					NullCheck(L_31);
					ArrayElementTypeCheck (L_31, _stringLiteralCE397DAE59EDAD9F58B22EF99DACB2BDA2F99284);
					(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralCE397DAE59EDAD9F58B22EF99DACB2BDA2F99284);
					StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_31;
					List_1_tB771D4A1A06199773AE1BA75A8AE0DE6762AAB88* L_33 = ___dataList1;
					int32_t L_34 = V_2;
					NullCheck(L_33);
					DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B L_35;
					L_35 = List_1_get_Item_m3D545CD6B59359FFE862706E5BAB5E7DFFA704E8(L_33, L_34, List_1_get_Item_m3D545CD6B59359FFE862706E5BAB5E7DFFA704E8_RuntimeMethod_var);
					V_5 = L_35;
					String_t* L_36 = (&V_5)->___value_1;
					NullCheck(L_32);
					ArrayElementTypeCheck (L_32, L_36);
					(L_32)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_36);
					StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_32;
					NullCheck(L_37);
					ArrayElementTypeCheck (L_37, _stringLiteral6D5A0A71D5C9C05AD6766B952219E3C055677C00);
					(L_37)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral6D5A0A71D5C9C05AD6766B952219E3C055677C00);
					StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_37;
					String_t* L_39 = (&___condition2)->___fieldName_0;
					NullCheck(L_38);
					ArrayElementTypeCheck (L_38, L_39);
					(L_38)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_39);
					StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_38;
					int32_t L_41 = (&___condition2)->___condition_2;
					String_t* L_42;
					L_42 = SQLiteDB_GetConditionSymbol_mEA6C2011A8DCCD3730A0E158C64A59DFC7BC6809(__this, L_41, NULL);
					NullCheck(L_40);
					ArrayElementTypeCheck (L_40, L_42);
					(L_40)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_42);
					StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_40;
					NullCheck(L_43);
					ArrayElementTypeCheck (L_43, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
					(L_43)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
					StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = L_43;
					String_t* L_45 = (&___condition2)->___value_1;
					NullCheck(L_44);
					ArrayElementTypeCheck (L_44, L_45);
					(L_44)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_45);
					StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_44;
					NullCheck(L_46);
					ArrayElementTypeCheck (L_46, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
					(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
					String_t* L_47;
					L_47 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_46, NULL);
					V_1 = L_47;
					goto IL_0187_2;
				}

IL_013f_2:
				{
					String_t* L_48 = V_1;
					V_3 = L_48;
					StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
					StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = L_49;
					String_t* L_51 = V_3;
					NullCheck(L_50);
					ArrayElementTypeCheck (L_50, L_51);
					(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_51);
					StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = L_50;
					List_1_tB771D4A1A06199773AE1BA75A8AE0DE6762AAB88* L_53 = ___dataList1;
					int32_t L_54 = V_2;
					NullCheck(L_53);
					DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B L_55;
					L_55 = List_1_get_Item_m3D545CD6B59359FFE862706E5BAB5E7DFFA704E8(L_53, L_54, List_1_get_Item_m3D545CD6B59359FFE862706E5BAB5E7DFFA704E8_RuntimeMethod_var);
					V_6 = L_55;
					String_t* L_56 = (&V_6)->___fieldName_0;
					NullCheck(L_52);
					ArrayElementTypeCheck (L_52, L_56);
					(L_52)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_56);
					StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57 = L_52;
					NullCheck(L_57);
					ArrayElementTypeCheck (L_57, _stringLiteralCE397DAE59EDAD9F58B22EF99DACB2BDA2F99284);
					(L_57)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralCE397DAE59EDAD9F58B22EF99DACB2BDA2F99284);
					StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = L_57;
					List_1_tB771D4A1A06199773AE1BA75A8AE0DE6762AAB88* L_59 = ___dataList1;
					int32_t L_60 = V_2;
					NullCheck(L_59);
					DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B L_61;
					L_61 = List_1_get_Item_m3D545CD6B59359FFE862706E5BAB5E7DFFA704E8(L_59, L_60, List_1_get_Item_m3D545CD6B59359FFE862706E5BAB5E7DFFA704E8_RuntimeMethod_var);
					V_7 = L_61;
					String_t* L_62 = (&V_7)->___value_1;
					NullCheck(L_58);
					ArrayElementTypeCheck (L_58, L_62);
					(L_58)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_62);
					StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = L_58;
					NullCheck(L_63);
					ArrayElementTypeCheck (L_63, _stringLiteral9AA220E0FCE5E917D823E177B898237A503A6AF9);
					(L_63)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral9AA220E0FCE5E917D823E177B898237A503A6AF9);
					String_t* L_64;
					L_64 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_63, NULL);
					V_1 = L_64;
				}

IL_0187_2:
				{
					int32_t L_65 = V_2;
					V_2 = ((int32_t)il2cpp_codegen_add(L_65, 1));
				}

IL_018b_2:
				{
					int32_t L_66 = V_2;
					List_1_tB771D4A1A06199773AE1BA75A8AE0DE6762AAB88* L_67 = ___dataList1;
					NullCheck(L_67);
					int32_t L_68;
					L_68 = List_1_get_Count_m7E97A1C21BC9C1F1CD486F87F21FC8A4C4523748_inline(L_67, List_1_get_Count_m7E97A1C21BC9C1F1CD486F87F21FC8A4C4523748_RuntimeMethod_var);
					if ((((int32_t)L_66) < ((int32_t)L_68)))
					{
						goto IL_00ae_2;
					}
				}
				{
					SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_69 = __this->___connection_4;
					NullCheck(L_69);
					VirtualActionInvoker0::Invoke(20 /* System.Void System.Data.Common.DbConnection::Open() */, L_69);
					SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_70 = __this->___connection_4;
					NullCheck(L_70);
					SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_71;
					L_71 = SqliteConnection_CreateCommand_m3BED520F980F2E040D090CD4B06D14731D0E044F(L_70, NULL);
					__this->___command_6 = L_71;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___command_6), (void*)L_71);
					SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_72 = __this->___command_6;
					String_t* L_73 = V_1;
					NullCheck(L_72);
					VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_72, L_73);
					SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_74 = __this->___command_6;
					NullCheck(L_74);
					int32_t L_75;
					L_75 = VirtualFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 System.Data.Common.DbCommand::ExecuteNonQuery() */, L_74);
					V_0 = L_75;
					goto IL_0213;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_01d0_1;
				}
				throw e;
			}

CATCH_01d0_1:
			{// begin catch(System.Exception)
				{
					V_8 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_76 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
					if (!L_76)
					{
						goto IL_01f7_1;
					}
				}
				{
					OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_77 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
					Exception_t* L_78 = V_8;
					NullCheck(L_78);
					String_t* L_79;
					L_79 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_78);
					String_t* L_80;
					L_80 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA972D1E77B4E56B74D5C63144C426DD57598177)), L_79, NULL);
					NullCheck(L_77);
					OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_77, L_80, NULL);
				}

IL_01f7_1:
				{
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0213;
				}
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0213:
	{
		int32_t L_81 = V_0;
		return L_81;
	}
}
// System.Int32 SQLiteDatabase.SQLiteDB::Update(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLiteDB_Update_mB09534A1F0BAA23CE896B9C758D6401D4EB02CD0 (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, String_t* ___query0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral969293C4EBCD2637A59D4F7676AF011FC83A7950);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		bool L_0;
		L_0 = SQLiteDB_get_Exists_m7FD2BF7220A610A78280C3C0395D5C668142D195(__this, NULL);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_1 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_2 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_2);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_2, _stringLiteral969293C4EBCD2637A59D4F7676AF011FC83A7950, NULL);
	}

IL_0024:
	{
		return (-1);
	}

IL_0026:
	{
		V_0 = (-1);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008b:
			{// begin finally (depth: 1)
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_3 = __this->___command_6;
				NullCheck(L_3);
				Component_Dispose_m7D0C063EA18E1FFA59CB369232131150372DC7B2(L_3, NULL);
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_4 = __this->___connection_4;
				NullCheck(L_4);
				VirtualActionInvoker0::Invoke(15 /* System.Void System.Data.Common.DbConnection::Close() */, L_4);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_5 = __this->___connection_4;
				NullCheck(L_5);
				VirtualActionInvoker0::Invoke(20 /* System.Void System.Data.Common.DbConnection::Open() */, L_5);
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_6 = __this->___connection_4;
				NullCheck(L_6);
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_7;
				L_7 = SqliteConnection_CreateCommand_m3BED520F980F2E040D090CD4B06D14731D0E044F(L_6, NULL);
				__this->___command_6 = L_7;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___command_6), (void*)L_7);
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_8 = __this->___command_6;
				String_t* L_9 = ___query0;
				NullCheck(L_8);
				VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_8, L_9);
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_10 = __this->___command_6;
				NullCheck(L_10);
				int32_t L_11;
				L_11 = VirtualFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 System.Data.Common.DbCommand::ExecuteNonQuery() */, L_10);
				V_0 = L_11;
				goto IL_00a2;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0061_1;
				}
				throw e;
			}

CATCH_0061_1:
			{// begin catch(System.Exception)
				{
					V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_12 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
					if (!L_12)
					{
						goto IL_0086_1;
					}
				}
				{
					OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_13 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
					Exception_t* L_14 = V_1;
					NullCheck(L_14);
					String_t* L_15;
					L_15 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_14);
					String_t* L_16;
					L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA972D1E77B4E56B74D5C63144C426DD57598177)), L_15, NULL);
					NullCheck(L_13);
					OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_13, L_16, NULL);
				}

IL_0086_1:
				{
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_00a2;
				}
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a2:
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
// System.Int32 SQLiteDatabase.SQLiteDB::DeleteRow(System.String,SQLiteDatabase.SQLiteDB/DB_ConditionPair)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLiteDB_DeleteRow_m68B8C5DC4089C02EBB8614A4A5D11B3624509106 (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, String_t* ___tableName0, DB_ConditionPair_tC1E8B0E10DA9A16ADCFFBD910B24BBA753E83D06 ___condition1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BF4F65E6C6B41449B8DBED5A74A32F2319A9FBD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51C317C58A113528FA1D3CF28D0FACAD09C31D9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6955B13A4C5FF7336FF5297BF9C12A8D6BD75455);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral969293C4EBCD2637A59D4F7676AF011FC83A7950);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3ECBB469774B57CCC7019C104E3DF55A41DFBE0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		bool L_0;
		L_0 = SQLiteDB_get_Exists_m7FD2BF7220A610A78280C3C0395D5C668142D195(__this, NULL);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_1 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_2 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_2);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_2, _stringLiteral969293C4EBCD2637A59D4F7676AF011FC83A7950, NULL);
	}

IL_0024:
	{
		return (-1);
	}

IL_0026:
	{
		String_t* L_3 = ___tableName0;
		bool L_4;
		L_4 = SQLiteDB_IsTableExists_m8BAF42AADD616552CE817B42849DF5F408BAC5EC(__this, L_3, NULL);
		if (L_4)
		{
			goto IL_004d;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_5 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_6 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_6);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_6, _stringLiteralA3ECBB469774B57CCC7019C104E3DF55A41DFBE0, NULL);
	}

IL_004b:
	{
		return (-1);
	}

IL_004d:
	{
		String_t* L_7 = (&___condition1)->___fieldName_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_7, NULL);
		bool L_9;
		L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_8, NULL);
		if (L_9)
		{
			goto IL_0079;
		}
	}
	{
		String_t* L_10 = (&___condition1)->___value_1;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_10, NULL);
		bool L_12;
		L_12 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_11, NULL);
		if (!L_12)
		{
			goto IL_0094;
		}
	}

IL_0079:
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_13 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_13)
		{
			goto IL_0092;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_14 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_14);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_14, _stringLiteral6955B13A4C5FF7336FF5297BF9C12A8D6BD75455, NULL);
	}

IL_0092:
	{
		return (-1);
	}

IL_0094:
	{
		V_0 = (-1);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_014d:
			{// begin finally (depth: 1)
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_15 = __this->___command_6;
				NullCheck(L_15);
				Component_Dispose_m7D0C063EA18E1FFA59CB369232131150372DC7B2(L_15, NULL);
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_16 = __this->___connection_4;
				NullCheck(L_16);
				VirtualActionInvoker0::Invoke(15 /* System.Void System.Data.Common.DbConnection::Close() */, L_16);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)8);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
				NullCheck(L_18);
				ArrayElementTypeCheck (L_18, _stringLiteral3BF4F65E6C6B41449B8DBED5A74A32F2319A9FBD);
				(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3BF4F65E6C6B41449B8DBED5A74A32F2319A9FBD);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
				String_t* L_20 = ___tableName0;
				NullCheck(L_19);
				ArrayElementTypeCheck (L_19, L_20);
				(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_20);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_19;
				NullCheck(L_21);
				ArrayElementTypeCheck (L_21, _stringLiteral51C317C58A113528FA1D3CF28D0FACAD09C31D9E);
				(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral51C317C58A113528FA1D3CF28D0FACAD09C31D9E);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
				String_t* L_23 = (&___condition1)->___fieldName_0;
				NullCheck(L_22);
				ArrayElementTypeCheck (L_22, L_23);
				(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_23);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_22;
				int32_t L_25 = (&___condition1)->___condition_2;
				String_t* L_26;
				L_26 = SQLiteDB_GetConditionSymbol_mEA6C2011A8DCCD3730A0E158C64A59DFC7BC6809(__this, L_25, NULL);
				NullCheck(L_24);
				ArrayElementTypeCheck (L_24, L_26);
				(L_24)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_26);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_24;
				NullCheck(L_27);
				ArrayElementTypeCheck (L_27, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
				(L_27)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_27;
				String_t* L_29 = (&___condition1)->___value_1;
				NullCheck(L_28);
				ArrayElementTypeCheck (L_28, L_29);
				(L_28)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_29);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_28;
				NullCheck(L_30);
				ArrayElementTypeCheck (L_30, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
				(L_30)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
				String_t* L_31;
				L_31 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_30, NULL);
				V_1 = L_31;
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_32 = __this->___connection_4;
				NullCheck(L_32);
				VirtualActionInvoker0::Invoke(20 /* System.Void System.Data.Common.DbConnection::Open() */, L_32);
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_33 = __this->___connection_4;
				NullCheck(L_33);
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_34;
				L_34 = SqliteConnection_CreateCommand_m3BED520F980F2E040D090CD4B06D14731D0E044F(L_33, NULL);
				__this->___command_6 = L_34;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___command_6), (void*)L_34);
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_35 = __this->___command_6;
				String_t* L_36 = V_1;
				NullCheck(L_35);
				VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_35, L_36);
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_37 = __this->___command_6;
				NullCheck(L_37);
				int32_t L_38;
				L_38 = VirtualFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 System.Data.Common.DbCommand::ExecuteNonQuery() */, L_37);
				V_0 = L_38;
				goto IL_0164;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0123_1;
				}
				throw e;
			}

CATCH_0123_1:
			{// begin catch(System.Exception)
				{
					V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_39 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
					if (!L_39)
					{
						goto IL_0148_1;
					}
				}
				{
					OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_40 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
					Exception_t* L_41 = V_2;
					NullCheck(L_41);
					String_t* L_42;
					L_42 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_41);
					String_t* L_43;
					L_43 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF1FCB5C8B2C10D7875109E85FBEE789FAC8804E7)), L_42, NULL);
					NullCheck(L_40);
					OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_40, L_43, NULL);
				}

IL_0148_1:
				{
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0164;
				}
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0164:
	{
		int32_t L_44 = V_0;
		return L_44;
	}
}
// System.String SQLiteDatabase.SQLiteDB::GetConditionSymbol(SQLiteDatabase.SQLiteDB/DB_Condition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SQLiteDB_GetConditionSymbol_mEA6C2011A8DCCD3730A0E158C64A59DFC7BC6809 (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		int32_t L_1 = ___id0;
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_0037;
			}
		}
	}
	{
		goto IL_0042;
	}

IL_0021:
	{
		V_0 = _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
		goto IL_0042;
	}

IL_002c:
	{
		V_0 = _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
		goto IL_0042;
	}

IL_0037:
	{
		V_0 = _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E;
		goto IL_0042;
	}

IL_0042:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String SQLiteDatabase.SQLiteDB::GetDataType(SQLiteDatabase.SQLiteDB/DB_DataType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SQLiteDB_GetDataType_mFC87E7BB8FABC086C7F69AD08E01DCB42C519F7E (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14021205275CEEA4D32B09CB2239421C8BA3BF75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral991EBC7D738316C24C3082806AC7B86E69581D7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA18E784C84762DFFFFA0DCFDA6BBAABEF55A100A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCC2B3732F0D680763BA8799D812C45D4BC4DB68);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		int32_t L_1 = ___id0;
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_0030;
			}
			case 2:
			{
				goto IL_003b;
			}
			case 3:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_0051;
	}

IL_0025:
	{
		V_0 = _stringLiteral14021205275CEEA4D32B09CB2239421C8BA3BF75;
		goto IL_0051;
	}

IL_0030:
	{
		V_0 = _stringLiteralA18E784C84762DFFFFA0DCFDA6BBAABEF55A100A;
		goto IL_0051;
	}

IL_003b:
	{
		V_0 = _stringLiteralBCC2B3732F0D680763BA8799D812C45D4BC4DB68;
		goto IL_0051;
	}

IL_0046:
	{
		V_0 = _stringLiteral991EBC7D738316C24C3082806AC7B86E69581D7B;
		goto IL_0051;
	}

IL_0051:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// SQLiteDatabase.DBReader SQLiteDatabase.SQLiteDB::ExecuteReader(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF* SQLiteDB_ExecuteReader_m178A8E2271E04635A369A1B65936931160358813 (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, String_t* ___query0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___query0;
		DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF* L_1;
		L_1 = SQLiteDB_Select_m8AB92D6AC04CEF2C875C1C8F2BF93FFEA652987A(__this, L_0, NULL);
		return L_1;
	}
}
// SQLiteDatabase.DBReader SQLiteDatabase.SQLiteDB::Select(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF* SQLiteDB_Select_m8AB92D6AC04CEF2C875C1C8F2BF93FFEA652987A (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, String_t* ___query0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral969293C4EBCD2637A59D4F7676AF011FC83A7950);
		s_Il2CppMethodInitialized = true;
	}
	DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		bool L_0;
		L_0 = SQLiteDB_get_Exists_m7FD2BF7220A610A78280C3C0395D5C668142D195(__this, NULL);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_1 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_2 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_2);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_2, _stringLiteral969293C4EBCD2637A59D4F7676AF011FC83A7950, NULL);
	}

IL_0024:
	{
		return (DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF*)NULL;
	}

IL_0026:
	{
		V_0 = (DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF*)NULL;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009c:
			{// begin finally (depth: 1)
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_3 = __this->___command_6;
				NullCheck(L_3);
				Component_Dispose_m7D0C063EA18E1FFA59CB369232131150372DC7B2(L_3, NULL);
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_4 = __this->___connection_4;
				NullCheck(L_4);
				VirtualActionInvoker0::Invoke(15 /* System.Void System.Data.Common.DbConnection::Close() */, L_4);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_5 = __this->___connection_4;
				NullCheck(L_5);
				VirtualActionInvoker0::Invoke(20 /* System.Void System.Data.Common.DbConnection::Open() */, L_5);
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_6 = __this->___connection_4;
				NullCheck(L_6);
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_7;
				L_7 = SqliteConnection_CreateCommand_m3BED520F980F2E040D090CD4B06D14731D0E044F(L_6, NULL);
				__this->___command_6 = L_7;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___command_6), (void*)L_7);
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_8 = __this->___command_6;
				String_t* L_9 = ___query0;
				NullCheck(L_8);
				VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_8, L_9);
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_10 = __this->___command_6;
				NullCheck(L_10);
				SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* L_11;
				L_11 = SqliteCommand_ExecuteReader_m2A6B8B48CE439B09687348450D40506868EB28AB(L_10, NULL);
				__this->___reader_5 = L_11;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___reader_5), (void*)L_11);
				SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* L_12 = __this->___reader_5;
				DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF* L_13 = (DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF*)il2cpp_codegen_object_new(DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF_il2cpp_TypeInfo_var);
				NullCheck(L_13);
				DBReader__ctor_m5AFCBF09D29A8E2421C1A91F1A0DC1C223BCC3BB(L_13, L_12, NULL);
				V_0 = L_13;
				goto IL_00b3;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0072_1;
				}
				throw e;
			}

CATCH_0072_1:
			{// begin catch(System.Exception)
				{
					V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_14 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
					if (!L_14)
					{
						goto IL_0097_1;
					}
				}
				{
					OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_15 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
					Exception_t* L_16 = V_1;
					NullCheck(L_16);
					String_t* L_17;
					L_17 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_16);
					String_t* L_18;
					L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6A7E0B1E8DC0EA9E1D0E1369F5AFBB5DB1AF20A2)), L_17, NULL);
					NullCheck(L_15);
					OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_15, L_18, NULL);
				}

IL_0097_1:
				{
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_00b3;
				}
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF* L_19 = V_0;
		return L_19;
	}
}
// SQLiteDatabase.DBReader SQLiteDatabase.SQLiteDB::Select(System.String,System.Collections.Generic.List`1<System.String>,SQLiteDatabase.SQLiteDB/DB_ConditionPair)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF* SQLiteDB_Select_m89D526CAC1935F4FE93D3FF82A9D32B12B0FAB4F (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, String_t* ___tableName0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___fields1, DB_ConditionPair_tC1E8B0E10DA9A16ADCFFBD910B24BBA753E83D06 ___condition2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51C317C58A113528FA1D3CF28D0FACAD09C31D9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6955B13A4C5FF7336FF5297BF9C12A8D6BD75455);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral969293C4EBCD2637A59D4F7676AF011FC83A7950);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3ECBB469774B57CCC7019C104E3DF55A41DFBE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE056B56AEA145308B7C937EF8AAAC8C6DD887B69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF652530F436891F11688FEBD3FF6C4B433BAAC82);
		s_Il2CppMethodInitialized = true;
	}
	DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		bool L_0;
		L_0 = SQLiteDB_get_Exists_m7FD2BF7220A610A78280C3C0395D5C668142D195(__this, NULL);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_1 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_2 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_2);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_2, _stringLiteral969293C4EBCD2637A59D4F7676AF011FC83A7950, NULL);
	}

IL_0024:
	{
		return (DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF*)NULL;
	}

IL_0026:
	{
		String_t* L_3 = ___tableName0;
		bool L_4;
		L_4 = SQLiteDB_IsTableExists_m8BAF42AADD616552CE817B42849DF5F408BAC5EC(__this, L_3, NULL);
		if (L_4)
		{
			goto IL_004d;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_5 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_6 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_6);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_6, _stringLiteralA3ECBB469774B57CCC7019C104E3DF55A41DFBE0, NULL);
	}

IL_004b:
	{
		return (DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF*)NULL;
	}

IL_004d:
	{
		String_t* L_7 = (&___condition2)->___fieldName_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_7, NULL);
		bool L_9;
		L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_8, NULL);
		if (L_9)
		{
			goto IL_0079;
		}
	}
	{
		String_t* L_10 = (&___condition2)->___value_1;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_10, NULL);
		bool L_12;
		L_12 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_11, NULL);
		if (!L_12)
		{
			goto IL_0094;
		}
	}

IL_0079:
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_13 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_13)
		{
			goto IL_0092;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_14 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_14);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_14, _stringLiteral6955B13A4C5FF7336FF5297BF9C12A8D6BD75455, NULL);
	}

IL_0092:
	{
		return (DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF*)NULL;
	}

IL_0094:
	{
		V_0 = (DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF*)NULL;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01b8:
			{// begin finally (depth: 1)
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_15 = __this->___command_6;
				NullCheck(L_15);
				Component_Dispose_m7D0C063EA18E1FFA59CB369232131150372DC7B2(L_15, NULL);
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_16 = __this->___connection_4;
				NullCheck(L_16);
				VirtualActionInvoker0::Invoke(15 /* System.Void System.Data.Common.DbConnection::Close() */, L_16);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					V_1 = _stringLiteralE056B56AEA145308B7C937EF8AAAC8C6DD887B69;
					V_2 = 0;
					goto IL_00db_2;
				}

IL_00a3_2:
				{
					int32_t L_17 = V_2;
					List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18 = ___fields1;
					NullCheck(L_18);
					int32_t L_19;
					L_19 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_18, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
					if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_19, 1))))))
					{
						goto IL_00c4_2;
					}
				}
				{
					String_t* L_20 = V_1;
					List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_21 = ___fields1;
					int32_t L_22 = V_2;
					NullCheck(L_21);
					String_t* L_23;
					L_23 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_21, L_22, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
					String_t* L_24;
					L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_20, L_23, NULL);
					V_1 = L_24;
					goto IL_00d7_2;
				}

IL_00c4_2:
				{
					String_t* L_25 = V_1;
					List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_26 = ___fields1;
					int32_t L_27 = V_2;
					NullCheck(L_26);
					String_t* L_28;
					L_28 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_26, L_27, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
					String_t* L_29;
					L_29 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_25, L_28, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
					V_1 = L_29;
				}

IL_00d7_2:
				{
					int32_t L_30 = V_2;
					V_2 = ((int32_t)il2cpp_codegen_add(L_30, 1));
				}

IL_00db_2:
				{
					int32_t L_31 = V_2;
					List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_32 = ___fields1;
					NullCheck(L_32);
					int32_t L_33;
					L_33 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_32, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
					if ((((int32_t)L_31) < ((int32_t)L_33)))
					{
						goto IL_00a3_2;
					}
				}
				{
					String_t* L_34 = V_1;
					String_t* L_35 = ___tableName0;
					String_t* L_36;
					L_36 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_34, _stringLiteralF652530F436891F11688FEBD3FF6C4B433BAAC82, L_35, NULL);
					V_1 = L_36;
					String_t* L_37 = V_1;
					V_3 = L_37;
					StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
					StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_38;
					String_t* L_40 = V_3;
					NullCheck(L_39);
					ArrayElementTypeCheck (L_39, L_40);
					(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_40);
					StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_39;
					NullCheck(L_41);
					ArrayElementTypeCheck (L_41, _stringLiteral51C317C58A113528FA1D3CF28D0FACAD09C31D9E);
					(L_41)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral51C317C58A113528FA1D3CF28D0FACAD09C31D9E);
					StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_41;
					String_t* L_43 = (&___condition2)->___fieldName_0;
					NullCheck(L_42);
					ArrayElementTypeCheck (L_42, L_43);
					(L_42)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_43);
					StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = L_42;
					int32_t L_45 = (&___condition2)->___condition_2;
					String_t* L_46;
					L_46 = SQLiteDB_GetConditionSymbol_mEA6C2011A8DCCD3730A0E158C64A59DFC7BC6809(__this, L_45, NULL);
					NullCheck(L_44);
					ArrayElementTypeCheck (L_44, L_46);
					(L_44)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_46);
					StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = L_44;
					NullCheck(L_47);
					ArrayElementTypeCheck (L_47, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
					(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
					StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = L_47;
					String_t* L_49 = (&___condition2)->___value_1;
					NullCheck(L_48);
					ArrayElementTypeCheck (L_48, L_49);
					(L_48)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_49);
					StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = L_48;
					NullCheck(L_50);
					ArrayElementTypeCheck (L_50, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
					(L_50)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
					String_t* L_51;
					L_51 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_50, NULL);
					V_1 = L_51;
					SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_52 = __this->___connection_4;
					NullCheck(L_52);
					VirtualActionInvoker0::Invoke(20 /* System.Void System.Data.Common.DbConnection::Open() */, L_52);
					SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_53 = __this->___connection_4;
					NullCheck(L_53);
					SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_54;
					L_54 = SqliteConnection_CreateCommand_m3BED520F980F2E040D090CD4B06D14731D0E044F(L_53, NULL);
					__this->___command_6 = L_54;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___command_6), (void*)L_54);
					SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_55 = __this->___command_6;
					String_t* L_56 = V_1;
					NullCheck(L_55);
					VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_55, L_56);
					SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_57 = __this->___command_6;
					NullCheck(L_57);
					SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* L_58;
					L_58 = SqliteCommand_ExecuteReader_m2A6B8B48CE439B09687348450D40506868EB28AB(L_57, NULL);
					__this->___reader_5 = L_58;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___reader_5), (void*)L_58);
					SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* L_59 = __this->___reader_5;
					DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF* L_60 = (DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF*)il2cpp_codegen_object_new(DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF_il2cpp_TypeInfo_var);
					NullCheck(L_60);
					DBReader__ctor_m5AFCBF09D29A8E2421C1A91F1A0DC1C223BCC3BB(L_60, L_59, NULL);
					V_0 = L_60;
					goto IL_01cf;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_018c_1;
				}
				throw e;
			}

CATCH_018c_1:
			{// begin catch(System.Exception)
				{
					V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_61 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
					if (!L_61)
					{
						goto IL_01b3_1;
					}
				}
				{
					OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_62 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
					Exception_t* L_63 = V_4;
					NullCheck(L_63);
					String_t* L_64;
					L_64 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_63);
					String_t* L_65;
					L_65 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7CF56E636E289DC7B21A0516AC90C9B3E9B7224A)), L_64, NULL);
					NullCheck(L_62);
					OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_62, L_65, NULL);
				}

IL_01b3_1:
				{
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_01cf;
				}
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01cf:
	{
		DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF* L_66 = V_0;
		return L_66;
	}
}
// SQLiteDatabase.DBReader SQLiteDatabase.SQLiteDB::GetAllData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF* SQLiteDB_GetAllData_m1F5B097C283AD1C75C28D226B3AF436B31D45B56 (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, String_t* ___tableName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A9E52FBAE9917F91F5FFD048386DE1A2121C92B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3ECBB469774B57CCC7019C104E3DF55A41DFBE0);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___tableName0;
		bool L_1;
		L_1 = SQLiteDB_IsTableExists_m8BAF42AADD616552CE817B42849DF5F408BAC5EC(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_2 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_3 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_3);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_3, _stringLiteralA3ECBB469774B57CCC7019C104E3DF55A41DFBE0, NULL);
	}

IL_0025:
	{
		return (DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF*)NULL;
	}

IL_0027:
	{
		String_t* L_4 = ___tableName0;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3A9E52FBAE9917F91F5FFD048386DE1A2121C92B, L_4, NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		DBReader_t6EE7BD9DAE12008D5271476E0A9B9FF14D97EBCF* L_7;
		L_7 = SQLiteDB_Select_m8AB92D6AC04CEF2C875C1C8F2BF93FFEA652987A(__this, L_6, NULL);
		return L_7;
	}
}
// System.Boolean SQLiteDatabase.SQLiteDB::IsTableExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SQLiteDB_IsTableExists_m8BAF42AADD616552CE817B42849DF5F408BAC5EC (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, String_t* ___tableName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4520D0729098C64C74179A6FD8C55CDF197172F1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (bool)0;
		String_t* L_0 = ___tableName0;
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral4520D0729098C64C74179A6FD8C55CDF197172F1, L_0, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, NULL);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0070:
			{// begin finally (depth: 1)
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_2 = __this->___command_6;
				NullCheck(L_2);
				Component_Dispose_m7D0C063EA18E1FFA59CB369232131150372DC7B2(L_2, NULL);
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_3 = __this->___connection_4;
				NullCheck(L_3);
				VirtualActionInvoker0::Invoke(15 /* System.Void System.Data.Common.DbConnection::Close() */, L_3);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_4 = __this->___connection_4;
				NullCheck(L_4);
				VirtualActionInvoker0::Invoke(20 /* System.Void System.Data.Common.DbConnection::Open() */, L_4);
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_5 = __this->___connection_4;
				NullCheck(L_5);
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_6;
				L_6 = SqliteConnection_CreateCommand_m3BED520F980F2E040D090CD4B06D14731D0E044F(L_5, NULL);
				__this->___command_6 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___command_6), (void*)L_6);
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_7 = __this->___command_6;
				String_t* L_8 = V_1;
				NullCheck(L_7);
				VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_7, L_8);
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_9 = __this->___command_6;
				NullCheck(L_9);
				SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* L_10;
				L_10 = SqliteCommand_ExecuteReader_m2A6B8B48CE439B09687348450D40506868EB28AB(L_9, NULL);
				__this->___reader_5 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___reader_5), (void*)L_10);
				SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* L_11 = __this->___reader_5;
				NullCheck(L_11);
				bool L_12;
				L_12 = VirtualFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Data.Common.DbDataReader::get_HasRows() */, L_11);
				V_0 = L_12;
				SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* L_13 = __this->___reader_5;
				NullCheck(L_13);
				VirtualActionInvoker0::Invoke(22 /* System.Void System.Data.Common.DbDataReader::Close() */, L_13);
				goto IL_0087;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0068_1;
				}
				throw e;
			}

CATCH_0068_1:
			{// begin catch(System.Object)
				V_0 = (bool)0;
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0087;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		bool L_14 = V_0;
		return L_14;
	}
}
// System.Object SQLiteDatabase.SQLiteDB::ExecuteScalar(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SQLiteDB_ExecuteScalar_m480B29D673F82AB3826B236D3A81536C6006CE08 (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, String_t* ___query0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral969293C4EBCD2637A59D4F7676AF011FC83A7950);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		bool L_0;
		L_0 = SQLiteDB_get_Exists_m7FD2BF7220A610A78280C3C0395D5C668142D195(__this, NULL);
		if (L_0)
		{
			goto IL_002b;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_1 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_2 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		NullCheck(L_2);
		OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_2, _stringLiteral969293C4EBCD2637A59D4F7676AF011FC83A7950, NULL);
	}

IL_0024:
	{
		int32_t L_3 = (-1);
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}

IL_002b:
	{
		V_0 = NULL;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0090:
			{// begin finally (depth: 1)
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_5 = __this->___command_6;
				NullCheck(L_5);
				Component_Dispose_m7D0C063EA18E1FFA59CB369232131150372DC7B2(L_5, NULL);
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_6 = __this->___connection_4;
				NullCheck(L_6);
				VirtualActionInvoker0::Invoke(15 /* System.Void System.Data.Common.DbConnection::Close() */, L_6);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_7 = __this->___connection_4;
				NullCheck(L_7);
				VirtualActionInvoker0::Invoke(20 /* System.Void System.Data.Common.DbConnection::Open() */, L_7);
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_8 = __this->___connection_4;
				NullCheck(L_8);
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_9;
				L_9 = SqliteConnection_CreateCommand_m3BED520F980F2E040D090CD4B06D14731D0E044F(L_8, NULL);
				__this->___command_6 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___command_6), (void*)L_9);
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_10 = __this->___command_6;
				String_t* L_11 = ___query0;
				NullCheck(L_10);
				VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_10, L_11);
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_12 = __this->___command_6;
				NullCheck(L_12);
				RuntimeObject* L_13;
				L_13 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(28 /* System.Object System.Data.Common.DbCommand::ExecuteScalar() */, L_12);
				V_0 = L_13;
				goto IL_00a7;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0066_1;
				}
				throw e;
			}

CATCH_0066_1:
			{// begin catch(System.Exception)
				{
					V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_14 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
					if (!L_14)
					{
						goto IL_008b_1;
					}
				}
				{
					OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_15 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))))->___onErrorInvoker_0;
					Exception_t* L_16 = V_1;
					NullCheck(L_16);
					String_t* L_17;
					L_17 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_16);
					String_t* L_18;
					L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2351BAFB34D9C5F1C3FDBEF359636ABB23018957)), L_17, NULL);
					NullCheck(L_15);
					OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline(L_15, L_18, NULL);
				}

IL_008b_1:
				{
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_00a7;
				}
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a7:
	{
		RuntimeObject* L_19 = V_0;
		return L_19;
	}
}
// System.Void SQLiteDatabase.SQLiteDB::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteDB_Dispose_m442AB879D1AC74A9F04603C8128657A2EC154F4F (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_0 = __this->___connection_4;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_1 = __this->___connection_4;
		NullCheck(L_1);
		Component_Dispose_m7D0C063EA18E1FFA59CB369232131150372DC7B2(L_1, NULL);
	}

IL_0016:
	{
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_2 = __this->___command_6;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_3 = __this->___command_6;
		NullCheck(L_3);
		Component_Dispose_m7D0C063EA18E1FFA59CB369232131150372DC7B2(L_3, NULL);
	}

IL_002c:
	{
		__this->___connection_4 = (SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___connection_4), (void*)(SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64*)NULL);
		__this->___reader_5 = (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader_5), (void*)(SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835*)NULL);
		__this->___command_6 = (SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___command_6), (void*)(SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25*)NULL);
		((SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF_il2cpp_TypeInfo_var))->____instance_0 = (SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF_il2cpp_TypeInfo_var))->____instance_0), (void*)(SQLiteDB_t3E92D0EABDAD0C0965D4EA3B6AB487A1E1E35ECF*)NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_Collect_m43D435501E4B72E382DB08A0431DE01D550F76A7(NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: SQLiteDatabase.SQLiteDB/DB_Field
IL2CPP_EXTERN_C void DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77_marshal_pinvoke(const DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77& unmarshaled, DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___type_1 = unmarshaled.___type_1;
	marshaled.___size_2 = unmarshaled.___size_2;
	marshaled.___isPrimaryKey_3 = static_cast<int32_t>(unmarshaled.___isPrimaryKey_3);
	marshaled.___isNotNull_4 = static_cast<int32_t>(unmarshaled.___isNotNull_4);
	marshaled.___isUnique_5 = static_cast<int32_t>(unmarshaled.___isUnique_5);
}
IL2CPP_EXTERN_C void DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77_marshal_pinvoke_back(const DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77_marshaled_pinvoke& marshaled, DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___name_0));
	int32_t unmarshaledtype_temp_1 = 0;
	unmarshaledtype_temp_1 = marshaled.___type_1;
	unmarshaled.___type_1 = unmarshaledtype_temp_1;
	int32_t unmarshaledsize_temp_2 = 0;
	unmarshaledsize_temp_2 = marshaled.___size_2;
	unmarshaled.___size_2 = unmarshaledsize_temp_2;
	bool unmarshaledisPrimaryKey_temp_3 = false;
	unmarshaledisPrimaryKey_temp_3 = static_cast<bool>(marshaled.___isPrimaryKey_3);
	unmarshaled.___isPrimaryKey_3 = unmarshaledisPrimaryKey_temp_3;
	bool unmarshaledisNotNull_temp_4 = false;
	unmarshaledisNotNull_temp_4 = static_cast<bool>(marshaled.___isNotNull_4);
	unmarshaled.___isNotNull_4 = unmarshaledisNotNull_temp_4;
	bool unmarshaledisUnique_temp_5 = false;
	unmarshaledisUnique_temp_5 = static_cast<bool>(marshaled.___isUnique_5);
	unmarshaled.___isUnique_5 = unmarshaledisUnique_temp_5;
}
// Conversion method for clean up from marshalling of: SQLiteDatabase.SQLiteDB/DB_Field
IL2CPP_EXTERN_C void DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77_marshal_pinvoke_cleanup(DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// Conversion methods for marshalling of: SQLiteDatabase.SQLiteDB/DB_Field
IL2CPP_EXTERN_C void DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77_marshal_com(const DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77& unmarshaled, DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77_marshaled_com& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___name_0);
	marshaled.___type_1 = unmarshaled.___type_1;
	marshaled.___size_2 = unmarshaled.___size_2;
	marshaled.___isPrimaryKey_3 = static_cast<int32_t>(unmarshaled.___isPrimaryKey_3);
	marshaled.___isNotNull_4 = static_cast<int32_t>(unmarshaled.___isNotNull_4);
	marshaled.___isUnique_5 = static_cast<int32_t>(unmarshaled.___isUnique_5);
}
IL2CPP_EXTERN_C void DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77_marshal_com_back(const DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77_marshaled_com& marshaled, DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___name_0));
	int32_t unmarshaledtype_temp_1 = 0;
	unmarshaledtype_temp_1 = marshaled.___type_1;
	unmarshaled.___type_1 = unmarshaledtype_temp_1;
	int32_t unmarshaledsize_temp_2 = 0;
	unmarshaledsize_temp_2 = marshaled.___size_2;
	unmarshaled.___size_2 = unmarshaledsize_temp_2;
	bool unmarshaledisPrimaryKey_temp_3 = false;
	unmarshaledisPrimaryKey_temp_3 = static_cast<bool>(marshaled.___isPrimaryKey_3);
	unmarshaled.___isPrimaryKey_3 = unmarshaledisPrimaryKey_temp_3;
	bool unmarshaledisNotNull_temp_4 = false;
	unmarshaledisNotNull_temp_4 = static_cast<bool>(marshaled.___isNotNull_4);
	unmarshaled.___isNotNull_4 = unmarshaledisNotNull_temp_4;
	bool unmarshaledisUnique_temp_5 = false;
	unmarshaledisUnique_temp_5 = static_cast<bool>(marshaled.___isUnique_5);
	unmarshaled.___isUnique_5 = unmarshaledisUnique_temp_5;
}
// Conversion method for clean up from marshalling of: SQLiteDatabase.SQLiteDB/DB_Field
IL2CPP_EXTERN_C void DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77_marshal_com_cleanup(DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: SQLiteDatabase.SQLiteDB/DB_DataPair
IL2CPP_EXTERN_C void DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B_marshal_pinvoke(const DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B& unmarshaled, DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B_marshaled_pinvoke& marshaled)
{
	marshaled.___fieldName_0 = il2cpp_codegen_marshal_string(unmarshaled.___fieldName_0);
	marshaled.___value_1 = il2cpp_codegen_marshal_string(unmarshaled.___value_1);
}
IL2CPP_EXTERN_C void DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B_marshal_pinvoke_back(const DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B_marshaled_pinvoke& marshaled, DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B& unmarshaled)
{
	unmarshaled.___fieldName_0 = il2cpp_codegen_marshal_string_result(marshaled.___fieldName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___fieldName_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___fieldName_0));
	unmarshaled.___value_1 = il2cpp_codegen_marshal_string_result(marshaled.___value_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___value_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___value_1));
}
// Conversion method for clean up from marshalling of: SQLiteDatabase.SQLiteDB/DB_DataPair
IL2CPP_EXTERN_C void DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B_marshal_pinvoke_cleanup(DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___fieldName_0);
	marshaled.___fieldName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___value_1);
	marshaled.___value_1 = NULL;
}
// Conversion methods for marshalling of: SQLiteDatabase.SQLiteDB/DB_DataPair
IL2CPP_EXTERN_C void DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B_marshal_com(const DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B& unmarshaled, DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B_marshaled_com& marshaled)
{
	marshaled.___fieldName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___fieldName_0);
	marshaled.___value_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___value_1);
}
IL2CPP_EXTERN_C void DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B_marshal_com_back(const DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B_marshaled_com& marshaled, DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B& unmarshaled)
{
	unmarshaled.___fieldName_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___fieldName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___fieldName_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___fieldName_0));
	unmarshaled.___value_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___value_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___value_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___value_1));
}
// Conversion method for clean up from marshalling of: SQLiteDatabase.SQLiteDB/DB_DataPair
IL2CPP_EXTERN_C void DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B_marshal_com_cleanup(DB_DataPair_t69680AA689A973C8C754EBF15C10DA4649EF439B_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___fieldName_0);
	marshaled.___fieldName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___value_1);
	marshaled.___value_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: SQLiteDatabase.SQLiteDB/DB_ConditionPair
IL2CPP_EXTERN_C void DB_ConditionPair_tC1E8B0E10DA9A16ADCFFBD910B24BBA753E83D06_marshal_pinvoke(const DB_ConditionPair_tC1E8B0E10DA9A16ADCFFBD910B24BBA753E83D06& unmarshaled, DB_ConditionPair_tC1E8B0E10DA9A16ADCFFBD910B24BBA753E83D06_marshaled_pinvoke& marshaled)
{
	marshaled.___fieldName_0 = il2cpp_codegen_marshal_string(unmarshaled.___fieldName_0);
	marshaled.___value_1 = il2cpp_codegen_marshal_string(unmarshaled.___value_1);
	marshaled.___condition_2 = unmarshaled.___condition_2;
}
IL2CPP_EXTERN_C void DB_ConditionPair_tC1E8B0E10DA9A16ADCFFBD910B24BBA753E83D06_marshal_pinvoke_back(const DB_ConditionPair_tC1E8B0E10DA9A16ADCFFBD910B24BBA753E83D06_marshaled_pinvoke& marshaled, DB_ConditionPair_tC1E8B0E10DA9A16ADCFFBD910B24BBA753E83D06& unmarshaled)
{
	unmarshaled.___fieldName_0 = il2cpp_codegen_marshal_string_result(marshaled.___fieldName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___fieldName_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___fieldName_0));
	unmarshaled.___value_1 = il2cpp_codegen_marshal_string_result(marshaled.___value_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___value_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___value_1));
	int32_t unmarshaledcondition_temp_2 = 0;
	unmarshaledcondition_temp_2 = marshaled.___condition_2;
	unmarshaled.___condition_2 = unmarshaledcondition_temp_2;
}
// Conversion method for clean up from marshalling of: SQLiteDatabase.SQLiteDB/DB_ConditionPair
IL2CPP_EXTERN_C void DB_ConditionPair_tC1E8B0E10DA9A16ADCFFBD910B24BBA753E83D06_marshal_pinvoke_cleanup(DB_ConditionPair_tC1E8B0E10DA9A16ADCFFBD910B24BBA753E83D06_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___fieldName_0);
	marshaled.___fieldName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___value_1);
	marshaled.___value_1 = NULL;
}
// Conversion methods for marshalling of: SQLiteDatabase.SQLiteDB/DB_ConditionPair
IL2CPP_EXTERN_C void DB_ConditionPair_tC1E8B0E10DA9A16ADCFFBD910B24BBA753E83D06_marshal_com(const DB_ConditionPair_tC1E8B0E10DA9A16ADCFFBD910B24BBA753E83D06& unmarshaled, DB_ConditionPair_tC1E8B0E10DA9A16ADCFFBD910B24BBA753E83D06_marshaled_com& marshaled)
{
	marshaled.___fieldName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___fieldName_0);
	marshaled.___value_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___value_1);
	marshaled.___condition_2 = unmarshaled.___condition_2;
}
IL2CPP_EXTERN_C void DB_ConditionPair_tC1E8B0E10DA9A16ADCFFBD910B24BBA753E83D06_marshal_com_back(const DB_ConditionPair_tC1E8B0E10DA9A16ADCFFBD910B24BBA753E83D06_marshaled_com& marshaled, DB_ConditionPair_tC1E8B0E10DA9A16ADCFFBD910B24BBA753E83D06& unmarshaled)
{
	unmarshaled.___fieldName_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___fieldName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___fieldName_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___fieldName_0));
	unmarshaled.___value_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___value_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___value_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___value_1));
	int32_t unmarshaledcondition_temp_2 = 0;
	unmarshaledcondition_temp_2 = marshaled.___condition_2;
	unmarshaled.___condition_2 = unmarshaledcondition_temp_2;
}
// Conversion method for clean up from marshalling of: SQLiteDatabase.SQLiteDB/DB_ConditionPair
IL2CPP_EXTERN_C void DB_ConditionPair_tC1E8B0E10DA9A16ADCFFBD910B24BBA753E83D06_marshal_com_cleanup(DB_ConditionPair_tC1E8B0E10DA9A16ADCFFBD910B24BBA753E83D06_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___fieldName_0);
	marshaled.___fieldName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___value_1);
	marshaled.___value_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SQLiteDatabase.SQLiteEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteEventListener__ctor_mAD57C014D210B8FA3E90AAC5841F0E68042123EC (SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void SQLiteDatabase.SQLiteEventListener::add_onError(SQLiteDatabase.SQLiteEventListener/OnError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteEventListener_add_onError_m57330EE97587595385E1F3821427643B1C0695BE (OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* ___value0, const RuntimeMethod* method) 
{
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_0 = ___value0;
		SQLiteEventListener_AddHandler_onError_mFBC9F3455D7C6CF3908D8B77044A5DDF683118E1(L_0, NULL);
		return;
	}
}
// System.Void SQLiteDatabase.SQLiteEventListener::remove_onError(SQLiteDatabase.SQLiteEventListener/OnError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteEventListener_remove_onError_mC3692B0987E778550E9DB380E28494917E0CB136 (OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* ___value0, const RuntimeMethod* method) 
{
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_0 = ___value0;
		SQLiteEventListener_RemoveHandler_onError_m1C619CAD16DF40CF7EFCC7E6B121F261439D6A2F(L_0, NULL);
		return;
	}
}
// System.Void SQLiteDatabase.SQLiteEventListener::AddHandler_onError(SQLiteDatabase.SQLiteEventListener/OnError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteEventListener_AddHandler_onError_mFBC9F3455D7C6CF3908D8B77044A5DDF683118E1 (OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_0 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_0, L_1, NULL);
		((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0 = ((OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A*)CastclassSealed((RuntimeObject*)L_2, OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0), (void*)((OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A*)CastclassSealed((RuntimeObject*)L_2, OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void SQLiteDatabase.SQLiteEventListener::RemoveHandler_onError(SQLiteDatabase.SQLiteEventListener/OnError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteEventListener_RemoveHandler_onError_m1C619CAD16DF40CF7EFCC7E6B121F261439D6A2F (OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_0 = ((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0;
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_0, L_1, NULL);
		((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0 = ((OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A*)CastclassSealed((RuntimeObject*)L_2, OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_StaticFields*)il2cpp_codegen_static_fields_for(SQLiteEventListener_t56E53CA76F45F84951C0C592299D197D3366886A_il2cpp_TypeInfo_var))->___onErrorInvoker_0), (void*)((OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A*)CastclassSealed((RuntimeObject*)L_2, OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A_il2cpp_TypeInfo_var)));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_Multicast(OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* __this, String_t* ___err0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* currentDelegate = reinterpret_cast<OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___err0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_OpenInst(OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* __this, String_t* ___err0, const RuntimeMethod* method)
{
	NullCheck(___err0);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___err0, method);
}
void OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_OpenStatic(OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* __this, String_t* ___err0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___err0, method);
}
void OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_OpenStaticInvoker(OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* __this, String_t* ___err0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___err0);
}
void OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_ClosedStaticInvoker(OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* __this, String_t* ___err0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___err0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A (OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* __this, String_t* ___err0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___err0' to native representation
	char* ____err0_marshaled = NULL;
	____err0_marshaled = il2cpp_codegen_marshal_string(___err0);

	// Native function invocation
	il2cppPInvokeFunc(____err0_marshaled);

	// Marshaling cleanup of parameter '___err0' native representation
	il2cpp_codegen_marshal_free(____err0_marshaled);
	____err0_marshaled = NULL;

}
// System.Void SQLiteDatabase.SQLiteEventListener/OnError::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnError__ctor_m09712C7FEE6939CAAD1638978B3647DE7CAF167A (OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_Multicast;
}
// System.Void SQLiteDatabase.SQLiteEventListener/OnError::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6 (OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* __this, String_t* ___err0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___err0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLiteDatabase.SQLiteEventListener/OnError::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnError_BeginInvoke_m44D8CAC196F7F94E4508B737DB5A76AE52E7A4D2 (OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* __this, String_t* ___err0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___err0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void SQLiteDatabase.SQLiteEventListener/OnError::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnError_EndInvoke_m70D6E705F5A31D1C4A59427D64F9E1FCE2D534F4 (OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnError_Invoke_m785ABF5647D407F358BA0AE403F2002A84CE73D6_inline (OnError_t467DFAA7B6D8E3D2E56B40502FF2BE829E937C8A* __this, String_t* ___err0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___err0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = __this->____innerException_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DBSchema_get_TableName_m68F7B5461DCDCEBAA2F7524D595ED6AFECA8C049_inline (DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____name_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* DBSchema_GetTableFields_mA5D6F5AB415B366C64C8CB65A3BA69FD99DB9D4B_inline (DBSchema_t6604623AF721D8E7BA69808BB9D665EC8B87C70C* __this, const RuntimeMethod* method) 
{
	{
		List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* L_0 = __this->___fieldList_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2373D97BDFD1E87499B88D67294029BE8B08F418_gshared_inline (List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* __this, DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 ___item0, const RuntimeMethod* method) 
{
	DB_FieldU5BU5D_t3C7348AFA5895778A08744E869968044BE120489* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		DB_FieldU5BU5D_t3C7348AFA5895778A08744E869968044BE120489* L_1 = (DB_FieldU5BU5D_t3C7348AFA5895778A08744E869968044BE120489*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		DB_FieldU5BU5D_t3C7348AFA5895778A08744E869968044BE120489* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		DB_FieldU5BU5D_t3C7348AFA5895778A08744E869968044BE120489* L_6 = V_0;
		int32_t L_7 = V_1;
		DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77)L_8);
		return;
	}

IL_0034:
	{
		DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77 L_9 = ___item0;
		((  void (*) (List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8*, DB_Field_tBE6207A2B63A54973D95F7DBE494AACF69ECEC77, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9C4E5C345C08B7CA77C03DE67A079031EAA53207_gshared_inline (List_1_t65DF4A1EB01AD9C58761FDEE7B5B928B1C4FA7A8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7E97A1C21BC9C1F1CD486F87F21FC8A4C4523748_gshared_inline (List_1_tB771D4A1A06199773AE1BA75A8AE0DE6762AAB88* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
