#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>
struct Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>
struct Func_2_t8A99FF3F64B7CF9CFC4EE2DF270BD1703B76DC50;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t60509816D8966320E2A9660FC756B6C440ADFC50;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>
struct IEnumerable_1_tFCF77471BC357F1DA198C04336E8CB5C4ACFEF8A;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>
struct IEnumerable_1_tBB6E2A615DFE00A6FE5AE919A482CC24C97ABB04;
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode>
struct IEnumerator_1_t49DDBC5AAD0D2D43999136BA0A280005097DCDFD;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,SimpleJSON.JSONNode>
struct KeyCollection_tDE3ABC0784C3B1BCD31D575082F7C20EC70286B2;
// System.Collections.Generic.List`1<SimpleJSON.JSONNode>
struct List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>
struct Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,SimpleJSON.JSONNode>
struct ValueCollection_t76434FB4E445EE3387D3FC6DEAA1DB600E4B39B5;
// System.Collections.Generic.Dictionary`2/Entry<System.String,SimpleJSON.JSONNode>[]
struct EntryU5BU5D_t86D52525E21109390C2D6C0572544D4268F95576;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// SimpleJSON.JSONNode[]
struct JSONNodeU5BU5D_t2C7B030008A25DEF9AC8F1A737F9D2DD4EA01B40;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// ActivateTrigger
struct ActivateTrigger_t28F79B8197B7F6A1FF2AEA9831AB260889BEBF99;
// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// SimpleJSON.JSONArray
struct JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25;
// SimpleJSON.JSONClass
struct JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA;
// SimpleJSON.JSONData
struct JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957;
// SimpleJSON.JSONLazyCreator
struct JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00;
// SimpleJSON.JSONNode
struct JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// SimpleJSON.JSONArray/<GetEnumerator>d__14
struct U3CGetEnumeratorU3Ed__14_t22EB1EFD5755C028CBDE228791C05AB3F0BAEF32;
// SimpleJSON.JSONArray/<get_Childs>d__13
struct U3Cget_ChildsU3Ed__13_tCFC4F94F0C9F7E1A6153EF4DBE6E1FC112644FC1;
// SimpleJSON.JSONClass/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t0CD4D234D5CCC8C58416C234C9B2E2B4C790027C;
// SimpleJSON.JSONClass/<GetEnumerator>d__15
struct U3CGetEnumeratorU3Ed__15_t482A99DA90CF8B7AB4C624F718C52B0BAC0BE1C9;
// SimpleJSON.JSONClass/<get_Childs>d__14
struct U3Cget_ChildsU3Ed__14_tA6C295FF7B8237948C446E56B9615B8A50CD1666;
// SimpleJSON.JSONNode/<get_Childs>d__17
struct U3Cget_ChildsU3Ed__17_tBC3468A03F0A639143BC1817CAEE502D6669EC53;
// SimpleJSON.JSONNode/<get_DeepChilds>d__19
struct U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t8A99FF3F64B7CF9CFC4EE2DF270BD1703B76DC50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tBB6E2A615DFE00A6FE5AE919A482CC24C97ABB04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t49DDBC5AAD0D2D43999136BA0A280005097DCDFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONBinaryTag_t0E728ABAFD32DD036B3E5EB7063C592D58826316_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__14_t22EB1EFD5755C028CBDE228791C05AB3F0BAEF32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__15_t482A99DA90CF8B7AB4C624F718C52B0BAC0BE1C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_t0CD4D234D5CCC8C58416C234C9B2E2B4C790027C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ChildsU3Ed__13_tCFC4F94F0C9F7E1A6153EF4DBE6E1FC112644FC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ChildsU3Ed__14_tA6C295FF7B8237948C446E56B9615B8A50CD1666_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ChildsU3Ed__17_tBC3468A03F0A639143BC1817CAEE502D6669EC53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral053D8D6CEEBA9453C97D0EE5374DB863E6F77AD4;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral17F69BD9415AEEFF5AF120DF2D45F20433804764;
IL2CPP_EXTERN_C String_t* _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3;
IL2CPP_EXTERN_C String_t* _stringLiteral267728DB976DC54468CED5DA57858FCD9E58B05A;
IL2CPP_EXTERN_C String_t* _stringLiteral2A8DE11BF487AE085C5F155A0C110A4133136BAB;
IL2CPP_EXTERN_C String_t* _stringLiteral37D21BB37C237B2168B65E84848CD02A9744D8C8;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral5703E0056B9B4C239F9C1589A2955D3F601A9DC0;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral870C43A28360ADF668EFBACF63A4553351C7FA4C;
IL2CPP_EXTERN_C String_t* _stringLiteral8765EAD9CEAC2E7567BD19108F56080A7AD8C252;
IL2CPP_EXTERN_C String_t* _stringLiteralA1F27E109A350AB8D0134DF8C6D4A31841F7528B;
IL2CPP_EXTERN_C String_t* _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralABCEE7D26D32F1BD7A4AA729EDF28DEB5437540D;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralBF00FC1AEA59DE3445148D940526441AD4E1FFA7;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C;
IL2CPP_EXTERN_C String_t* _stringLiteralDE28F98354F48E7C0878BBA93033C6BDC68B27E2;
IL2CPP_EXTERN_C String_t* _stringLiteralE1602CD594F39B601B0A34667ED3E03283DFB92E;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m647A845263DF322FB4262AE7C9D120FAC128C8B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mF7EC8BBAB3CD7EE5642E71681FBDB4A884B05780_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m76681FCFCB5A12781F4025FC31BE3FF70F1C6470_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3039782D3F8D2BBEBABB511BC6FA48187E22008A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mFFD3A96BCF327EA058B849F1973D14E1BB173C8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mC34C37FB4F2B2BF31B1A2272DD359B9583906548_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m6D37E9D9CD14A99AC08894824FE5F3D82B9CD62A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ElementAt_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_mBC7A395153DA1692C8CA60F1654B81489EC04DF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_m255485ADF36092873EEDC8ADF3E189101BAC11B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_m96A5D28115800EB612CD61C6729DCB2A2B6EAD0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m45C7997DE0CBCFB8DADD49F9F386E64D0FC2A9BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m844831FF3F93A9E3EEDFFF0186465A21BA38BE18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE0AEC0BF430B01595C081CE7115C6CBE413D16D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m33C5058BDA9C45AE39B34D794C8ECCAECBC63378_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5BE8E9A6A9A88CC3FF48EA3466675ED35B0CC160_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB1C31B2A291986F6CD5A79C9F75196088363BF2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m44F4D4F7899D0688C1E68E1457EBDBC2D26F91CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m588061B1765C95AD6BDEC8EA8FBE37BDA51EAC5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9EDC4585E7F0533CF1F399288AF36568460E03D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_m591D73ED9A69915B8F581B355EDCC927D30BDD54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONNode_Deserialize_mF8594740482949F17BD8EC3E8C7993BF38C99A2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONNode_LoadFromCompressedBase64_mBB460DB037D35B906746D672019FF3972DF2C3B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONNode_LoadFromCompressedFile_m011BBDA5C7F3011FADE5579D90F068CB753F1EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONNode_LoadFromCompressedStream_m43FA3587B7D74E692C1D27766E4C928A46A40B3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONNode_Parse_m3AC8E590DF695A3A545103AAE07B329CF673B67F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONNode_SaveToCompressedBase64_m4E9A1A7C9E086F74290A884545D2EE77F6C7B867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONNode_SaveToCompressedFile_mA9B6A2FDC58500476D1C892FA0096B33B5166EA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONNode_SaveToCompressedStream_mAC0EF180E303090E00488E547433FFEAB80CC8B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m2CDD38F5A524B531A536DF8F2485A39769287FC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAED0B3BF4DD4391B86D3FAECFD32599267E7588B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m2ABBF46AA2F1090503EFFF7B8ECCD8FB679D0168_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mCF3139E1292366D334488D1F33EEDD213F87B66A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m0448185622BC57438A12CA8BE28F0AB3505C1651_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m38909E0CD0BF81B3E450AF123312D588B61C29D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m39B501262E2772265E587E27634C346A3B31C74B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mBE1F797497EC203914E95B1F5DE445D9DB8BCD09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m68E783CC815DA7056E83DBD8DEC3C550CD932DFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m4C5E04D7BA9297399CBD489C611AAD4840626FE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m732686422E4C72ACBAD8662B06F74B702B1498D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m37B27F2261D562BBD092A5424B43E4F857CD561F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_mEDE7E4924B40F9B6A73564C268F0305731C32AE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__15_System_Collections_IEnumerator_Reset_m26A0F43003966C9A2D3F1EFD4C8D90141CD8A14A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CRemoveU3Eb__0_mEDB1940B888C59CD109F08DF93FF6DA4937BCC93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ChildsU3Ed__13_System_Collections_IEnumerator_Reset_mA4D581BAD2C15FB837A5B9793F018C36A7BB5DE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ChildsU3Ed__14_System_Collections_IEnumerator_Reset_m520AFD46463B615E9C855A72A9BA683F013A4A69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_Reset_m12C9C9BC88E677993FE7FDD389A692852C1DFDF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerator_Reset_m396D9A09960676FE6DC4B8753CE0243AECADCDC7_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF062866229C4952B8051AD32AB6E9D931142CC95 
{
};

// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>
struct Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t86D52525E21109390C2D6C0572544D4268F95576* ____entries_1;
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
	KeyCollection_tDE3ABC0784C3B1BCD31D575082F7C20EC70286B2* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t76434FB4E445EE3387D3FC6DEAA1DB600E4B39B5* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,SimpleJSON.JSONNode>
struct KeyCollection_tDE3ABC0784C3B1BCD31D575082F7C20EC70286B2  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* ____dictionary_0;
};

// System.Collections.Generic.List`1<SimpleJSON.JSONNode>
struct List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	JSONNodeU5BU5D_t2C7B030008A25DEF9AC8F1A737F9D2DD4EA01B40* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>
struct Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	JSONNodeU5BU5D_t2C7B030008A25DEF9AC8F1A737F9D2DD4EA01B40* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;
};

// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;
};

// SimpleJSON.JSON
struct JSON_tE3B5FF47112F2BB30DF81C8CA516B06E9112E591  : public RuntimeObject
{
};

// SimpleJSON.JSONNode
struct JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B  : public RuntimeObject
{
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

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// SimpleJSON.JSONClass/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t0CD4D234D5CCC8C58416C234C9B2E2B4C790027C  : public RuntimeObject
{
	// SimpleJSON.JSONNode SimpleJSON.JSONClass/<>c__DisplayClass12_0::aNode
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___aNode_0;
};

// SimpleJSON.JSONNode/<get_Childs>d__17
struct U3Cget_ChildsU3Ed__17_tBC3468A03F0A639143BC1817CAEE502D6669EC53  : public RuntimeObject
{
	// System.Int32 SimpleJSON.JSONNode/<get_Childs>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// SimpleJSON.JSONNode SimpleJSON.JSONNode/<get_Childs>d__17::<>2__current
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___U3CU3E2__current_1;
	// System.Int32 SimpleJSON.JSONNode/<get_Childs>d__17::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
};

// SimpleJSON.JSONNode/<get_DeepChilds>d__19
struct U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721  : public RuntimeObject
{
	// System.Int32 SimpleJSON.JSONNode/<get_DeepChilds>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// SimpleJSON.JSONNode SimpleJSON.JSONNode/<get_DeepChilds>d__19::<>2__current
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___U3CU3E2__current_1;
	// System.Int32 SimpleJSON.JSONNode/<get_DeepChilds>d__19::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// SimpleJSON.JSONNode SimpleJSON.JSONNode/<get_DeepChilds>d__19::<>4__this
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___U3CU3E4__this_3;
	// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<get_DeepChilds>d__19::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_4;
	// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<get_DeepChilds>d__19::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_5;
};

// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>
struct Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	RuntimeObject* ____currentKey_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,SimpleJSON.JSONNode>
struct Enumerator_tD7467DC28A694D6149FDE71CDC7A8A00DEC0B71D 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	String_t* ____currentKey_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>
struct KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
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

// SimpleJSON.JSONArray
struct JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25  : public JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B
{
	// System.Collections.Generic.List`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray::m_List
	List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* ___m_List_0;
};

// SimpleJSON.JSONClass
struct JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA  : public JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B
{
	// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONClass::m_Dict
	Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* ___m_Dict_0;
};

// SimpleJSON.JSONData
struct JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957  : public JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B
{
	// System.String SimpleJSON.JSONData::m_Data
	String_t* ___m_Data_0;
};

// SimpleJSON.JSONLazyCreator
struct JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00  : public JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B
{
	// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::m_Node
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___m_Node_0;
	// System.String SimpleJSON.JSONLazyCreator::m_Key
	String_t* ___m_Key_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
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

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
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

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>
struct Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
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

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
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

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// SimpleJSON.JSONArray/<GetEnumerator>d__14
struct U3CGetEnumeratorU3Ed__14_t22EB1EFD5755C028CBDE228791C05AB3F0BAEF32  : public RuntimeObject
{
	// System.Int32 SimpleJSON.JSONArray/<GetEnumerator>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SimpleJSON.JSONArray/<GetEnumerator>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SimpleJSON.JSONArray SimpleJSON.JSONArray/<GetEnumerator>d__14::<>4__this
	JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* ___U3CU3E4__this_2;
	// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode> SimpleJSON.JSONArray/<GetEnumerator>d__14::<>7__wrap1
	Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA ___U3CU3E7__wrap1_3;
};

// SimpleJSON.JSONArray/<get_Childs>d__13
struct U3Cget_ChildsU3Ed__13_tCFC4F94F0C9F7E1A6153EF4DBE6E1FC112644FC1  : public RuntimeObject
{
	// System.Int32 SimpleJSON.JSONArray/<get_Childs>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// SimpleJSON.JSONNode SimpleJSON.JSONArray/<get_Childs>d__13::<>2__current
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___U3CU3E2__current_1;
	// System.Int32 SimpleJSON.JSONArray/<get_Childs>d__13::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// SimpleJSON.JSONArray SimpleJSON.JSONArray/<get_Childs>d__13::<>4__this
	JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* ___U3CU3E4__this_3;
	// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode> SimpleJSON.JSONArray/<get_Childs>d__13::<>7__wrap1
	Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA ___U3CU3E7__wrap1_4;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// SimpleJSON.JSONClass/<GetEnumerator>d__15
struct U3CGetEnumeratorU3Ed__15_t482A99DA90CF8B7AB4C624F718C52B0BAC0BE1C9  : public RuntimeObject
{
	// System.Int32 SimpleJSON.JSONClass/<GetEnumerator>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SimpleJSON.JSONClass/<GetEnumerator>d__15::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SimpleJSON.JSONClass SimpleJSON.JSONClass/<GetEnumerator>d__15::<>4__this
	JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* ___U3CU3E4__this_2;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONClass/<GetEnumerator>d__15::<>7__wrap1
	Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F ___U3CU3E7__wrap1_3;
};

// SimpleJSON.JSONClass/<get_Childs>d__14
struct U3Cget_ChildsU3Ed__14_tA6C295FF7B8237948C446E56B9615B8A50CD1666  : public RuntimeObject
{
	// System.Int32 SimpleJSON.JSONClass/<get_Childs>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// SimpleJSON.JSONNode SimpleJSON.JSONClass/<get_Childs>d__14::<>2__current
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___U3CU3E2__current_1;
	// System.Int32 SimpleJSON.JSONClass/<get_Childs>d__14::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// SimpleJSON.JSONClass SimpleJSON.JSONClass/<get_Childs>d__14::<>4__this
	JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* ___U3CU3E4__this_3;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONClass/<get_Childs>d__14::<>7__wrap1
	Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F ___U3CU3E7__wrap1_4;
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>
struct Func_2_t8A99FF3F64B7CF9CFC4EE2DF270BD1703B76DC50  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// ActivateTrigger
struct ActivateTrigger_t28F79B8197B7F6A1FF2AEA9831AB260889BEBF99  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ActivateTrigger/Mode ActivateTrigger::action
	int32_t ___action_4;
	// UnityEngine.Object ActivateTrigger::target
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target_5;
	// UnityEngine.GameObject ActivateTrigger::source
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___source_6;
	// System.Int32 ActivateTrigger::triggerCount
	int32_t ___triggerCount_7;
	// System.Boolean ActivateTrigger::repeatTrigger
	bool ___repeatTrigger_8;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>

// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,SimpleJSON.JSONNode>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,SimpleJSON.JSONNode>

// System.Collections.Generic.List`1<SimpleJSON.JSONNode>
struct List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	JSONNodeU5BU5D_t2C7B030008A25DEF9AC8F1A737F9D2DD4EA01B40* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<SimpleJSON.JSONNode>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>

// System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>

// System.Collections.Generic.Stack`1<System.Object>

// System.Collections.Generic.Stack`1<System.Object>

// System.IO.BinaryReader

// System.IO.BinaryReader

// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_StaticFields
{
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___Null_0;
};

// System.IO.BinaryWriter

// SimpleJSON.JSON

// SimpleJSON.JSON

// SimpleJSON.JSONNode

// SimpleJSON.JSONNode

// System.MarshalByRefObject

// System.MarshalByRefObject

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// SimpleJSON.JSONClass/<>c__DisplayClass12_0

// SimpleJSON.JSONClass/<>c__DisplayClass12_0

// SimpleJSON.JSONNode/<get_Childs>d__17

// SimpleJSON.JSONNode/<get_Childs>d__17

// SimpleJSON.JSONNode/<get_DeepChilds>d__19

// SimpleJSON.JSONNode/<get_DeepChilds>d__19

// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>

// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,SimpleJSON.JSONNode>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,SimpleJSON.JSONNode>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>

// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// SimpleJSON.JSONArray

// SimpleJSON.JSONArray

// SimpleJSON.JSONClass

// SimpleJSON.JSONClass

// SimpleJSON.JSONData

// SimpleJSON.JSONData

// SimpleJSON.JSONLazyCreator

// SimpleJSON.JSONLazyCreator

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// Interop/Sys/FileStatus

// Interop/Sys/FileStatus

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.IO.FileStatus

// System.IO.FileStatus

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
};

// System.IO.FileStream

// System.IO.MemoryStream

// System.IO.MemoryStream

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// SimpleJSON.JSONArray/<GetEnumerator>d__14

// SimpleJSON.JSONArray/<GetEnumerator>d__14

// SimpleJSON.JSONArray/<get_Childs>d__13

// SimpleJSON.JSONArray/<get_Childs>d__13

// UnityEngine.Component

// UnityEngine.Component

// System.IO.FileSystemInfo

// System.IO.FileSystemInfo

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.MulticastDelegate

// System.MulticastDelegate

// System.SystemException

// System.SystemException

// SimpleJSON.JSONClass/<GetEnumerator>d__15

// SimpleJSON.JSONClass/<GetEnumerator>d__15

// SimpleJSON.JSONClass/<get_Childs>d__14

// SimpleJSON.JSONClass/<get_Childs>d__14

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// System.IO.DirectoryInfo

// System.IO.DirectoryInfo

// System.IO.FileInfo

// System.IO.FileInfo

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Animation

// UnityEngine.Animation

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// ActivateTrigger

// ActivateTrigger
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


// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::ElementAt<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerable_ElementAt_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_mC8ABDA345F7C58BD3955F75BB8ED7F3FA1028970_gshared (RuntimeObject* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m999A10C26DDF74143AD155662D58037B37AB83F7_gshared (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m04F511EE83DC4DFCD2F669E1C86C444367FD332B_gshared (RuntimeObject* ___0_source, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___1_predicate, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerable_First_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m93CBB954FCCA2D8CD18552A18B58326CDD9F1DBD_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::BroadcastMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_BroadcastMessage_mB51BBADA9206219343B0E7C4199F75BAFEF19A78 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_methodName, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyObject_mB80649EAF088380DE91981988FF03EC2F1A07A71 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animation>()
inline Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* GameObject_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_m591D73ED9A69915B8F581B355EDCC927D30BDD54 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Animation::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m717560D2F561D9E12583AB3B435E6BC996448C3E (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) ;
// System.Void ActivateTrigger::DoActivateTrigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivateTrigger_DoActivateTrigger_m48B53310A49A391EA7FF5D9719DB02E04327214E (ActivateTrigger_t28F79B8197B7F6A1FF2AEA9831AB260889BEBF99* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/<get_Childs>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__17__ctor_mD33471C79FF4EAE1CED3A7CCB27ED8BA558E1426 (U3Cget_ChildsU3Ed__17_tBC3468A03F0A639143BC1817CAEE502D6669EC53* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/<get_DeepChilds>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildsU3Ed__19__ctor_m0D0E1D0BF2A15A39EB3E3323D4C89CAF8219C1B9 (U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___0_s, int32_t* ___1_result, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mC39FC2D8F1F33DE64685F3A8CE6BDD2164FB9423 (String_t* ___0_s, float* ___1_result, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Boolean System.Double::TryParse(System.String,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018 (String_t* ___0_s, double* ___1_result, const RuntimeMethod* method) ;
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339 (double* __this, const RuntimeMethod* method) ;
// System.Boolean System.Boolean::TryParse(System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_TryParse_m417053B6E8D3724D0EED9E87C90D143622158352 (String_t* ___0_value, bool* ___1_result, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONData__ctor_m7714426689BE0641F4646578D150977CC7CAD250 (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* __this, String_t* ___0_aData, const RuntimeMethod* method) ;
// System.Boolean SimpleJSON.JSONNode::op_Equality(SimpleJSON.JSONNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_op_Equality_mA31C6AFF092A3758367FBB48E41900AF89D3EBFF (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) ;
// System.Int32 System.Object::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::.ctor()
inline void Stack_1__ctor_m732686422E4C72ACBAD8662B06F74B702B1498D2 (Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8*, const RuntimeMethod*))Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared)(__this, method);
}
// System.Void SimpleJSON.JSONClass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONClass__ctor_mC9311C3F888BDCAE8DB1A0485AD84A040A46AB99 (JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::Push(T)
inline void Stack_1_Push_m4C5E04D7BA9297399CBD489C611AAD4840626FE9 (Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* __this, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___0_item, method);
}
// System.Boolean SimpleJSON.JSONNode::op_Inequality(SimpleJSON.JSONNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_op_Inequality_mE2D1056C4462DF84287BE45D18A6B3FF137C2AD4 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::Peek()
inline JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D (Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* __this, const RuntimeMethod* method)
{
	return ((  JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* (*) (Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8*, const RuntimeMethod*))Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared)(__this, method);
}
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray__ctor_m19BBACE404D8C75AC41AC9CB4702C0943401D071 (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::get_Count()
inline int32_t Stack_1_get_Count_m37B27F2261D562BBD092A5424B43E4F857CD561F_inline (Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8*, const RuntimeMethod*))Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline)(__this, method);
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::Pop()
inline JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* Stack_1_Pop_m68E783CC815DA7056E83DBD8DEC3C550CD932DFB (Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* __this, const RuntimeMethod* method)
{
	return ((  JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* (*) (Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_op_Implicit_m52DF2A0612C8EA630E888C0E971225AE6F63D05A (String_t* ___0_s, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String,System.Globalization.NumberStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mF336325913DF125A6F8F05F2909E3AFB0D73830E (String_t* ___0_s, int32_t ___1_style, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_output, const RuntimeMethod* method) ;
// System.Void System.IO.FileInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* __this, String_t* ___0_fileName, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.FileInfo::get_Directory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* FileInfo_get_Directory_m17FDB04561FFB59BF0EAF22E92A6A8BAD3572EE6 (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* __this, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F (String_t* ___0_path, const RuntimeMethod* method) ;
// System.IO.FileStream System.IO.File::OpenWrite(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_OpenWrite_m5DD7E6EDB15631A97328297A58E9395B47CFB6AB (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode::SaveToStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_SaveToStream_m42ADB7E3EB56DD76AAF9C9DAFD420A5B63BE2207 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_aData, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.String System.Convert::ToBase64String(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inArray, const RuntimeMethod* method) ;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Deserialize(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_Deserialize_mF8594740482949F17BD8EC3E8C7993BF38C99A2D (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_aReader, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONData::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONData__ctor_m44327F17DDF60BF59C22174562BC90DB599877C5 (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* __this, int32_t ___0_aData, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONData::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONData__ctor_m576E0B5A3F123F672181AF9DDB2080781BBEC036 (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* __this, double ___0_aData, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONData::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONData__ctor_mD7041328B2C97B646B552708140A508112876AD3 (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* __this, bool ___0_aData, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONData::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONData__ctor_m60C3CC6E9D3EF6EC7085B2227CA19FD672326E25 (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* __this, float ___0_aData, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, const RuntimeMethod* method) ;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_OpenRead_m6181B052EB0E98D2E18FAC79E7744D766BA4244C (String_t* ___0_path, const RuntimeMethod* method) ;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_LoadFromStream_m3B0C0E6ED367B25369B5FB14B3C8D44C9E8D396C (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_aData, const RuntimeMethod* method) ;
// System.Byte[] System.Convert::FromBase64String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<get_Childs>d__17::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m897CB770D646C0177FDAEA9D83A052532209F00C (U3Cget_ChildsU3Ed__17_tBC3468A03F0A639143BC1817CAEE502D6669EC53* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/<get_DeepChilds>d__19::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally1_m4A639ADC9B059DB833C938474A3CB6A2AE84B01C (U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/<get_DeepChilds>d__19::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally2_mA7253DEECA6AD21028D9F2EB1A3ACD3E70D99C1C (U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/<get_DeepChilds>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildsU3Ed__19_System_IDisposable_Dispose_m355A9C330B204411A37F00CC399125DF7A055333 (U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_DeepChilds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONNode_get_DeepChilds_mC1C34218E07B0EDC1912D31C6D39125A1DC6CC58 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<get_DeepChilds>d__19::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_DeepChildsU3Ed__19_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_mB76D3B243F13565D96DC840636D230A39922585A (U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Count()
inline int32_t List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_inline (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator__ctor_mF05058E0DB09E0C896205345A7E6C44B6DE814D1 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___0_aNode, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Item(System.Int32)
inline JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* List_1_get_Item_m39B501262E2772265E587E27634C346A3B31C74B (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* (*) (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Add(T)
inline void List_1_Add_mAED0B3BF4DD4391B86D3FAECFD32599267E7588B_inline (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* __this, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::set_Item(System.Int32,T)
inline void List_1_set_Item_mBE1F797497EC203914E95B1F5DE445D9DB8BCD09 (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* __this, int32_t ___0_index, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4*, int32_t, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___0_index, ___1_value, method);
}
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mCF3139E1292366D334488D1F33EEDD213F87B66A (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
// System.Boolean System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Remove(T)
inline bool List_1_Remove_m0448185622BC57438A12CA8BE28F0AB3505C1651 (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* __this, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Void SimpleJSON.JSONArray/<get_Childs>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__13__ctor_m1EC021F6F6403864DB18455982372EAEAB13C7CF (U3Cget_ChildsU3Ed__13_tCFC4F94F0C9F7E1A6153EF4DBE6E1FC112644FC1* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONArray/<GetEnumerator>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14__ctor_m631F609D7C792A35F873F1F940E8B2A03A549781 (U3CGetEnumeratorU3Ed__14_t22EB1EFD5755C028CBDE228791C05AB3F0BAEF32* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<SimpleJSON.JSONNode>::GetEnumerator()
inline Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA List_1_GetEnumerator_m2ABBF46AA2F1090503EFFF7B8ECCD8FB679D0168 (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA (*) (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>::Dispose()
inline void Enumerator_Dispose_mE0AEC0BF430B01595C081CE7115C6CBE413D16D0 (Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>::get_Current()
inline JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* Enumerator_get_Current_m44F4D4F7899D0688C1E68E1457EBDBC2D26F91CC_inline (Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA* __this, const RuntimeMethod* method)
{
	return ((  JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* (*) (Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>::MoveNext()
inline bool Enumerator_MoveNext_mB1C31B2A291986F6CD5A79C9F75196088363BF2D (Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::.ctor()
inline void List_1__ctor_m38909E0CD0BF81B3E450AF123312D588B61C29D3 (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void SimpleJSON.JSONNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode__ctor_m4019E01BCFB43E3848591C3E8C97534BA8BC6C49 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONArray/<get_Childs>d__13::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__13_U3CU3Em__Finally1_m1B90ECC61CC045B2DCB7949BBD1AC42A26C1CFAB (U3Cget_ChildsU3Ed__13_tCFC4F94F0C9F7E1A6153EF4DBE6E1FC112644FC1* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONArray/<get_Childs>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__13_System_IDisposable_Dispose_m8B13D46B136C0296BDD180F76740A3F06989023E (U3Cget_ChildsU3Ed__13_tCFC4F94F0C9F7E1A6153EF4DBE6E1FC112644FC1* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray/<get_Childs>d__13::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__13_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m75187C9C3C6E21A78E2D048FF9C672863073B126 (U3Cget_ChildsU3Ed__13_tCFC4F94F0C9F7E1A6153EF4DBE6E1FC112644FC1* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONArray/<GetEnumerator>d__14::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally1_mD023C52E80D93CC663C4631B7DA7622F90245F2F (U3CGetEnumeratorU3Ed__14_t22EB1EFD5755C028CBDE228791C05AB3F0BAEF32* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONArray/<GetEnumerator>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_mAA4705B1AC76B61F874E5BBF6FBEE53060A31581 (U3CGetEnumeratorU3Ed__14_t22EB1EFD5755C028CBDE228791C05AB3F0BAEF32* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693 (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Item(TKey)
inline JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* Dictionary_2_get_Item_mFFD3A96BCF327EA058B849F1973D14E1BB173C8B (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* (*) (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator__ctor_mF29014985A3ABE849B34039EAA68BF363508438A (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___0_aNode, String_t* ___1_aKey, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m6D37E9D9CD14A99AC08894824FE5F3D82B9CD62A (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* __this, String_t* ___0_key, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33*, String_t*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Add(TKey,TValue)
inline void Dictionary_2_Add_m647A845263DF322FB4262AE7C9D120FAC128C8B6 (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* __this, String_t* ___0_key, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33*, String_t*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Count()
inline int32_t Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17 (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// TSource System.Linq.Enumerable::ElementAt<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C Enumerable_ElementAt_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_mBC7A395153DA1692C8CA60F1654B81489EC04DF3 (RuntimeObject* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_ElementAt_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_mC8ABDA345F7C58BD3955F75BB8ED7F3FA1028970_gshared)(___0_source, ___1_index, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>::get_Value()
inline JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_inline (KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C* __this, const RuntimeMethod* method)
{
	return ((  JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* (*) (KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_inline (KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Remove(TKey)
inline bool Dictionary_2_Remove_m76681FCFCB5A12781F4025FC31BE3FF70F1C6470 (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
// System.Void SimpleJSON.JSONClass/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mC8CA8CA8A503DEB31D4C3F8A3497980621FD9AB0 (U3CU3Ec__DisplayClass12_0_t0CD4D234D5CCC8C58416C234C9B2E2B4C790027C* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6FE32D0006D2D3129CDC46B55635C4D205C3FDBF (Func_2_t8A99FF3F64B7CF9CFC4EE2DF270BD1703B76DC50* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t8A99FF3F64B7CF9CFC4EE2DF270BD1703B76DC50*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m999A10C26DDF74143AD155662D58037B37AB83F7_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_m96A5D28115800EB612CD61C6729DCB2A2B6EAD0D (RuntimeObject* ___0_source, Func_2_t8A99FF3F64B7CF9CFC4EE2DF270BD1703B76DC50* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t8A99FF3F64B7CF9CFC4EE2DF270BD1703B76DC50*, const RuntimeMethod*))Enumerable_Where_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m04F511EE83DC4DFCD2F669E1C86C444367FD332B_gshared)(___0_source, ___1_predicate, method);
}
// TSource System.Linq.Enumerable::First<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<TSource>)
inline KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C Enumerable_First_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_m255485ADF36092873EEDC8ADF3E189101BAC11B9 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m93CBB954FCCA2D8CD18552A18B58326CDD9F1DBD_gshared)(___0_source, method);
}
// System.Void SimpleJSON.JSONClass/<get_Childs>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__14__ctor_m5AFF8B720D6B524F1036832E571E38EC7B62B012 (U3Cget_ChildsU3Ed__14_tA6C295FF7B8237948C446E56B9615B8A50CD1666* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONClass/<GetEnumerator>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__15__ctor_mEAE901E5EB04173D5343CCD03085D6E4F607BDFE (U3CGetEnumeratorU3Ed__15_t482A99DA90CF8B7AB4C624F718C52B0BAC0BE1C9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::GetEnumerator()
inline Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F Dictionary_2_GetEnumerator_mF7EC8BBAB3CD7EE5642E71681FBDB4A884B05780 (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F (*) (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>::Dispose()
inline void Enumerator_Dispose_m844831FF3F93A9E3EEDFFF0186465A21BA38BE18 (Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>::get_Current()
inline KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C Enumerator_get_Current_m588061B1765C95AD6BDEC8EA8FBE37BDA51EAC5E_inline (Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C (*) (Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// System.String SimpleJSON.JSONNode::Escape(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_Escape_mB0171A2D48BF3B4D2841657153CFAE5DDB0781EB (String_t* ___0_aText, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>::MoveNext()
inline bool Enumerator_MoveNext_m5BE8E9A6A9A88CC3FF48EA3466675ED35B0CC160 (Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Keys()
inline KeyCollection_tDE3ABC0784C3B1BCD31D575082F7C20EC70286B2* Dictionary_2_get_Keys_mC34C37FB4F2B2BF31B1A2272DD359B9583906548 (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tDE3ABC0784C3B1BCD31D575082F7C20EC70286B2* (*) (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,SimpleJSON.JSONNode>::GetEnumerator()
inline Enumerator_tD7467DC28A694D6149FDE71CDC7A8A00DEC0B71D KeyCollection_GetEnumerator_m2CDD38F5A524B531A536DF8F2485A39769287FC4 (KeyCollection_tDE3ABC0784C3B1BCD31D575082F7C20EC70286B2* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD7467DC28A694D6149FDE71CDC7A8A00DEC0B71D (*) (KeyCollection_tDE3ABC0784C3B1BCD31D575082F7C20EC70286B2*, const RuntimeMethod*))KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,SimpleJSON.JSONNode>::Dispose()
inline void Enumerator_Dispose_m45C7997DE0CBCFB8DADD49F9F386E64D0FC2A9BD (Enumerator_tD7467DC28A694D6149FDE71CDC7A8A00DEC0B71D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD7467DC28A694D6149FDE71CDC7A8A00DEC0B71D*, const RuntimeMethod*))Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared)(__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,SimpleJSON.JSONNode>::get_Current()
inline String_t* Enumerator_get_Current_m9EDC4585E7F0533CF1F399288AF36568460E03D9_inline (Enumerator_tD7467DC28A694D6149FDE71CDC7A8A00DEC0B71D* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tD7467DC28A694D6149FDE71CDC7A8A00DEC0B71D*, const RuntimeMethod*))Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,SimpleJSON.JSONNode>::MoveNext()
inline bool Enumerator_MoveNext_m33C5058BDA9C45AE39B34D794C8ECCAECBC63378 (Enumerator_tD7467DC28A694D6149FDE71CDC7A8A00DEC0B71D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD7467DC28A694D6149FDE71CDC7A8A00DEC0B71D*, const RuntimeMethod*))Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::.ctor()
inline void Dictionary_2__ctor_m3039782D3F8D2BBEBABB511BC6FA48187E22008A (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void SimpleJSON.JSONClass/<get_Childs>d__14::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__14_U3CU3Em__Finally1_mA2865122D8C9E08C9537C6F78C90A41FC732492E (U3Cget_ChildsU3Ed__14_tA6C295FF7B8237948C446E56B9615B8A50CD1666* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONClass/<get_Childs>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__14_System_IDisposable_Dispose_m1E55D47D798BD834A007991D7348B6C63FE94CD5 (U3Cget_ChildsU3Ed__14_tA6C295FF7B8237948C446E56B9615B8A50CD1666* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONClass/<get_Childs>d__14::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__14_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m055F6990A500755A0484BF70D0FE9BE7CF46B3BE (U3Cget_ChildsU3Ed__14_tA6C295FF7B8237948C446E56B9615B8A50CD1666* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONClass/<GetEnumerator>d__15::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__15_U3CU3Em__Finally1_mCDDAED82011A170B981B24D18E40ED86FE0286E9 (U3CGetEnumeratorU3Ed__15_t482A99DA90CF8B7AB4C624F718C52B0BAC0BE1C9* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONClass/<GetEnumerator>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__15_System_IDisposable_Dispose_m5684CB6D8E62DED5E22824F701E22E1B31A6C8C9 (U3CGetEnumeratorU3Ed__15_t482A99DA90CF8B7AB4C624F718C52B0BAC0BE1C9* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONLazyCreator::Set(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_Set_m24AA532BD687BB2EF874506C2AE2B5E3DAC5D2FC (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___0_aVal, const RuntimeMethod* method) ;
// System.Boolean SimpleJSON.JSONLazyCreator::op_Equality(SimpleJSON.JSONLazyCreator,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_op_Equality_m97C12616353E1845F92B2623B8E9B57D655F2D03 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) ;
// System.Int32 SimpleJSON.JSONNode::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNode_GetHashCode_m8928888D0A9512FCD23F887704F5189BC27DD94E (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) ;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_Parse_m3AC8E590DF695A3A545103AAE07B329CF673B67F (String_t* ___0_aJSON, const RuntimeMethod* method) ;
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
// System.Void ActivateTrigger::DoActivateTrigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivateTrigger_DoActivateTrigger_m48B53310A49A391EA7FF5D9719DB02E04327214E (ActivateTrigger_t28F79B8197B7F6A1FF2AEA9831AB260889BEBF99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_m591D73ED9A69915B8F581B355EDCC927D30BDD54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8765EAD9CEAC2E7567BD19108F56080A7AD8C252);
		s_Il2CppMethodInitialized = true;
	}
	Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B5_0 = NULL;
	{
		// triggerCount--;
		int32_t L_0 = __this->___triggerCount_7;
		__this->___triggerCount_7 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// if (triggerCount == 0 || repeatTrigger) {
		int32_t L_1 = __this->___triggerCount_7;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		bool L_2 = __this->___repeatTrigger_8;
		if (!L_2)
		{
			goto IL_00f0;
		}
	}

IL_0021:
	{
		// Object currentTarget = target != null ? target : gameObject;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3 = __this->___target_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		G_B5_0 = L_5;
		goto IL_003d;
	}

IL_0037:
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_6 = __this->___target_5;
		G_B5_0 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)(L_6));
	}

IL_003d:
	{
		// Behaviour targetBehaviour = currentTarget as Behaviour;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = G_B5_0;
		V_0 = ((Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA*)IsInstClass((RuntimeObject*)L_7, Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA_il2cpp_TypeInfo_var));
		// GameObject targetGameObject = currentTarget as GameObject;
		V_1 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_7, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var));
		// if (targetBehaviour != null)
		Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_005a;
		}
	}
	{
		// targetGameObject = targetBehaviour.gameObject;
		Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* L_10 = V_0;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		V_1 = L_11;
	}

IL_005a:
	{
		// switch (action) {
		int32_t L_12 = __this->___action_4;
		V_2 = L_12;
		int32_t L_13 = V_2;
		switch (L_13)
		{
			case 0:
			{
				goto IL_0080;
			}
			case 1:
			{
				goto IL_008c;
			}
			case 2:
			{
				goto IL_00c3;
			}
			case 3:
			{
				goto IL_00cb;
			}
			case 4:
			{
				goto IL_00dc;
			}
			case 5:
			{
				goto IL_00e9;
			}
		}
	}
	{
		return;
	}

IL_0080:
	{
		// targetGameObject.BroadcastMessage ("DoActivateTrigger");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_1;
		NullCheck(L_14);
		GameObject_BroadcastMessage_mB51BBADA9206219343B0E7C4199F75BAFEF19A78(L_14, _stringLiteral8765EAD9CEAC2E7567BD19108F56080A7AD8C252, NULL);
		// break;
		return;
	}

IL_008c:
	{
		// if (source != null) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___source_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_00f0;
		}
	}
	{
		// Object.Instantiate (source, targetGameObject.transform.position, targetGameObject.transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___source_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_1;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_1;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		NullCheck(L_22);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_22, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_17, L_20, L_23, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// DestroyObject (targetGameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_1;
		Object_DestroyObject_mB80649EAF088380DE91981988FF03EC2F1A07A71(L_25, NULL);
		// break;
		return;
	}

IL_00c3:
	{
		// targetGameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_1;
		NullCheck(L_26);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, (bool)1, NULL);
		// break;
		return;
	}

IL_00cb:
	{
		// if (targetBehaviour != null)
		Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* L_27 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_27, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_28)
		{
			goto IL_00f0;
		}
	}
	{
		// targetBehaviour.enabled = true;
		Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* L_29 = V_0;
		NullCheck(L_29);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_29, (bool)1, NULL);
		// break;
		return;
	}

IL_00dc:
	{
		// targetGameObject.GetComponent<Animation>().Play ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = V_1;
		NullCheck(L_30);
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_31;
		L_31 = GameObject_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_m591D73ED9A69915B8F581B355EDCC927D30BDD54(L_30, GameObject_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_m591D73ED9A69915B8F581B355EDCC927D30BDD54_RuntimeMethod_var);
		NullCheck(L_31);
		bool L_32;
		L_32 = Animation_Play_m717560D2F561D9E12583AB3B435E6BC996448C3E(L_31, NULL);
		// break;
		return;
	}

IL_00e9:
	{
		// targetGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = V_1;
		NullCheck(L_33);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)0, NULL);
	}

IL_00f0:
	{
		// }
		return;
	}
}
// System.Void ActivateTrigger::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivateTrigger_OnTriggerEnter_mDAAED08AC64D04DC7DF9C9B860D350B85DAC5470 (ActivateTrigger_t28F79B8197B7F6A1FF2AEA9831AB260889BEBF99* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	{
		// DoActivateTrigger ();
		ActivateTrigger_DoActivateTrigger_m48B53310A49A391EA7FF5D9719DB02E04327214E(__this, NULL);
		// }
		return;
	}
}
// System.Void ActivateTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivateTrigger__ctor_m862690D5E6E5ED3D2775091A9900EC09AE4F07AC (ActivateTrigger_t28F79B8197B7F6A1FF2AEA9831AB260889BEBF99* __this, const RuntimeMethod* method) 
{
	{
		// public Mode action = Mode.Activate;
		__this->___action_4 = 2;
		// public int triggerCount = 1;
		__this->___triggerCount_7 = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_Add_mCDED462C02B740D60B3B5CED37897C6C9FE62000 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, String_t* ___0_aKey, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___1_aItem, const RuntimeMethod* method) 
{
	{
		// public virtual void Add(string aKey, JSONNode aItem){ }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_get_Item_m7C387567D3EB881EF7B8F63BAA55EB6F8D3FD585 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, int32_t ___0_aIndex, const RuntimeMethod* method) 
{
	{
		// public virtual JSONNode this[int aIndex]   { get { return null; } set { } }
		return (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)NULL;
	}
}
// System.Void SimpleJSON.JSONNode::set_Item(System.Int32,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_Item_m4A6549C822E571FBAFE56CA09FFA9CC70153C89E (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, int32_t ___0_aIndex, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___1_value, const RuntimeMethod* method) 
{
	{
		// public virtual JSONNode this[int aIndex]   { get { return null; } set { } }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_get_Item_m767225424FD48588B83B1C72FE76C2718A3C0417 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, String_t* ___0_aKey, const RuntimeMethod* method) 
{
	{
		// public virtual JSONNode this[string aKey]  { get { return null; } set { } }
		return (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)NULL;
	}
}
// System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_Item_mF5D2BEFB370402701AE98F5034B69F139D289809 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, String_t* ___0_aKey, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___1_value, const RuntimeMethod* method) 
{
	{
		// public virtual JSONNode this[string aKey]  { get { return null; } set { } }
		return;
	}
}
// System.String SimpleJSON.JSONNode::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_get_Value_mC3C078F44CF3F52EE2A2EB2DFF93F4BFB3E010BF (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public virtual string Value                { get { return "";   } set { } }
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Void SimpleJSON.JSONNode::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_Value_m195029E6C361420D07109F31545A418DEE7948AB (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public virtual string Value                { get { return "";   } set { } }
		return;
	}
}
// System.Int32 SimpleJSON.JSONNode::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNode_get_Count_mBCEFCB9EDB2A08B59AA096A4741BF701D5D6E542 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	{
		// public virtual int Count                   { get { return 0;    } }
		return 0;
	}
}
// System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_Add_mE451AD072D206FDE5BD2E48477273A074B142F08 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___0_aItem, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Add("", aItem);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = ___0_aItem;
		VirtualActionInvoker2< String_t*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, __this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_0);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_Remove_m4074456D5E376FF293D91109B3C13692BE518DFF (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, String_t* ___0_aKey, const RuntimeMethod* method) 
{
	{
		// public virtual JSONNode Remove(string aKey) { return null; }
		return (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)NULL;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_Remove_m358D47B33FA872F41D4D3DB502A1D03EF2BDB1D1 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, int32_t ___0_aIndex, const RuntimeMethod* method) 
{
	{
		// public virtual JSONNode Remove(int aIndex) { return null; }
		return (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)NULL;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_Remove_mB8E8B67B5B4F7EC526909B009308C7E67A6E8CEE (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___0_aNode, const RuntimeMethod* method) 
{
	{
		// public virtual JSONNode Remove(JSONNode aNode) { return aNode; }
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = ___0_aNode;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_Childs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONNode_get_Childs_mA1E9790AD79AD7C10E32B52C500ECBF8D4F009D8 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildsU3Ed__17_tBC3468A03F0A639143BC1817CAEE502D6669EC53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cget_ChildsU3Ed__17_tBC3468A03F0A639143BC1817CAEE502D6669EC53* L_0 = (U3Cget_ChildsU3Ed__17_tBC3468A03F0A639143BC1817CAEE502D6669EC53*)il2cpp_codegen_object_new(U3Cget_ChildsU3Ed__17_tBC3468A03F0A639143BC1817CAEE502D6669EC53_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3Cget_ChildsU3Ed__17__ctor_mD33471C79FF4EAE1CED3A7CCB27ED8BA558E1426(L_0, ((int32_t)-2), NULL);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_DeepChilds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONNode_get_DeepChilds_mC1C34218E07B0EDC1912D31C6D39125A1DC6CC58 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721* L_0 = (U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721*)il2cpp_codegen_object_new(U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3Cget_DeepChildsU3Ed__19__ctor_m0D0E1D0BF2A15A39EB3E3323D4C89CAF8219C1B9(L_0, ((int32_t)-2), NULL);
		U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		return L_1;
	}
}
// System.String SimpleJSON.JSONNode::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_ToString_m4915C34B9F78A766FA1B6F9035C6BF5A8949A5DC (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A8DE11BF487AE085C5F155A0C110A4133136BAB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "JSONNode";
		return _stringLiteral2A8DE11BF487AE085C5F155A0C110A4133136BAB;
	}
}
// System.String SimpleJSON.JSONNode::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_ToString_mE91468F94F644908D084366508101364C721412A (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, String_t* ___0_aPrefix, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A8DE11BF487AE085C5F155A0C110A4133136BAB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "JSONNode";
		return _stringLiteral2A8DE11BF487AE085C5F155A0C110A4133136BAB;
	}
}
// System.Int32 SimpleJSON.JSONNode::get_AsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNode_get_AsInt_m44B362541D34F3B77BC68D139F040AA5EF520439 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int v = 0;
		V_0 = 0;
		// if (int.TryParse(Value,out v))
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		bool L_1;
		L_1 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return v;
		int32_t L_2 = V_0;
		return L_2;
	}

IL_0013:
	{
		// return 0;
		return 0;
	}
}
// System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_AsInt_m5D1961A65EF6CD9938FFDA3236D3ABA96E04B918 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// Value = value.ToString();
		String_t* L_0;
		L_0 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___0_value), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_0);
		// }
		return;
	}
}
// System.Single SimpleJSON.JSONNode::get_AsFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JSONNode_get_AsFloat_mA0DE40E688ECA0838EB53DEB33CD1967C7255281 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float v = 0.0f;
		V_0 = (0.0f);
		// if (float.TryParse(Value,out v))
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		bool L_1;
		L_1 = Single_TryParse_mC39FC2D8F1F33DE64685F3A8CE6BDD2164FB9423(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// return v;
		float L_2 = V_0;
		return L_2;
	}

IL_0017:
	{
		// return 0.0f;
		return (0.0f);
	}
}
// System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_AsFloat_m0ECEF5DD09F539D3AF37D87B5097FCAE2D30A785 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// Value = value.ToString();
		String_t* L_0;
		L_0 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___0_value), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_0);
		// }
		return;
	}
}
// System.Double SimpleJSON.JSONNode::get_AsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JSONNode_get_AsDouble_mA1913DCCCF58AFCEADE867045FAE7ED390A47F8C (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		// double v = 0.0;
		V_0 = (0.0);
		// if (double.TryParse(Value,out v))
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		bool L_1;
		L_1 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// return v;
		double L_2 = V_0;
		return L_2;
	}

IL_001b:
	{
		// return 0.0;
		return (0.0);
	}
}
// System.Void SimpleJSON.JSONNode::set_AsDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_AsDouble_m28362D60F98B5882166C1361DC1C9B7EFF59B595 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// Value = value.ToString();
		String_t* L_0;
		L_0 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&___0_value), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_0);
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_AsBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_get_AsBool_mFCD3668B13EAAB86D137EF1D1459703E6269CE4E (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// bool v = false;
		V_0 = (bool)0;
		// if (bool.TryParse(Value,out v))
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Boolean_TryParse_m417053B6E8D3724D0EED9E87C90D143622158352(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return v;
		bool L_2 = V_0;
		return L_2;
	}

IL_0013:
	{
		// return !string.IsNullOrEmpty(Value);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void SimpleJSON.JSONNode::set_AsBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_AsBool_mC1FE39521B8A4A0E65030A459536E426FD393FA5 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* G_B2_0 = NULL;
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* G_B3_1 = NULL;
	{
		// Value = (value)?"true":"false";
		bool L_0 = ___0_value;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_000b;
		}
	}
	{
		G_B3_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000b:
	{
		G_B3_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// SimpleJSON.JSONArray SimpleJSON.JSONNode::get_AsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* JSONNode_get_AsArray_m57C5E7664B0D4EE1D983EE736A152BCAC6CE986E (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this as JSONArray;
		return ((JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25*)IsInstClass((RuntimeObject*)__this, JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var));
	}
}
// SimpleJSON.JSONClass SimpleJSON.JSONNode::get_AsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* JSONNode_get_AsObject_m3C625032EFC90603BD2CC52B9240D6C91B0F3D6E (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this as JSONClass;
		return ((JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA*)IsInstClass((RuntimeObject*)__this, JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA_il2cpp_TypeInfo_var));
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_op_Implicit_m52DF2A0612C8EA630E888C0E971225AE6F63D05A (String_t* ___0_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JSONData(s);
		String_t* L_0 = ___0_s;
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_1 = (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957*)il2cpp_codegen_object_new(JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONData__ctor_m7714426689BE0641F4646578D150977CC7CAD250(L_1, L_0, NULL);
		return L_1;
	}
}
// System.String SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_op_Implicit_m9A9F4F56BED6A1172D99D3CC0993FB537DB1D7C3 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___0_d, const RuntimeMethod* method) 
{
	{
		// return (d == null)?null:d.Value;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = ___0_d;
		bool L_1;
		L_1 = JSONNode_op_Equality_mA31C6AFF092A3758367FBB48E41900AF89D3EBFF(L_0, NULL, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_2 = ___0_d;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, L_2);
		return L_3;
	}

IL_0010:
	{
		return (String_t*)NULL;
	}
}
// System.Boolean SimpleJSON.JSONNode::op_Equality(SimpleJSON.JSONNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_op_Equality_mA31C6AFF092A3758367FBB48E41900AF89D3EBFF (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (b == null && a is JSONLazyCreator)
		RuntimeObject* L_0 = ___1_b;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_1 = ___0_a;
		if (!((JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00*)IsInstClass((RuntimeObject*)L_1, JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000d:
	{
		// return System.Object.ReferenceEquals(a,b);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_2 = ___0_a;
		RuntimeObject* L_3 = ___1_b;
		return (bool)((((RuntimeObject*)(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)L_2) == ((RuntimeObject*)(RuntimeObject*)L_3))? 1 : 0);
	}
}
// System.Boolean SimpleJSON.JSONNode::op_Inequality(SimpleJSON.JSONNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_op_Inequality_mE2D1056C4462DF84287BE45D18A6B3FF137C2AD4 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) 
{
	{
		// return !(a == b);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = ___0_a;
		RuntimeObject* L_1 = ___1_b;
		bool L_2;
		L_2 = JSONNode_op_Equality_mA31C6AFF092A3758367FBB48E41900AF89D3EBFF(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean SimpleJSON.JSONNode::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_Equals_m514369EEC7080C896FA83D32F67980881C4B4823 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		// return System.Object.ReferenceEquals(this, obj);
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((((RuntimeObject*)(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))? 1 : 0);
	}
}
// System.Int32 SimpleJSON.JSONNode::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNode_GetHashCode_m8928888D0A9512FCD23F887704F5189BC27DD94E (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	{
		// return base.GetHashCode();
		int32_t L_0;
		L_0 = Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C(__this, NULL);
		return L_0;
	}
}
// System.String SimpleJSON.JSONNode::Escape(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_Escape_mB0171A2D48BF3B4D2841657153CFAE5DDB0781EB (String_t* ___0_aText, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		// string result = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// foreach(char c in aText)
		String_t* L_0 = ___0_aText;
		V_1 = L_0;
		V_2 = 0;
		goto IL_00b5;
	}

IL_000f:
	{
		// foreach(char c in aText)
		String_t* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		V_3 = L_3;
		Il2CppChar L_4 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 8)))
		{
			case 0:
			{
				goto IL_0087;
			}
			case 1:
			{
				goto IL_0079;
			}
			case 2:
			{
				goto IL_005d;
			}
			case 3:
			{
				goto IL_00a3;
			}
			case 4:
			{
				goto IL_0095;
			}
			case 5:
			{
				goto IL_006b;
			}
		}
	}
	{
		Il2CppChar L_5 = V_3;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)34))))
		{
			goto IL_004f;
		}
	}
	{
		Il2CppChar L_6 = V_3;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00a3;
		}
	}
	{
		// case '\\' : result += "\\\\"; break;
		String_t* L_7 = V_0;
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_7, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, NULL);
		V_0 = L_8;
		// case '\\' : result += "\\\\"; break;
		goto IL_00b1;
	}

IL_004f:
	{
		// case '\"' : result += "\\\""; break;
		String_t* L_9 = V_0;
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_9, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, NULL);
		V_0 = L_10;
		// case '\"' : result += "\\\""; break;
		goto IL_00b1;
	}

IL_005d:
	{
		// case '\n' : result += "\\n" ; break;
		String_t* L_11 = V_0;
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_11, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, NULL);
		V_0 = L_12;
		// case '\n' : result += "\\n" ; break;
		goto IL_00b1;
	}

IL_006b:
	{
		// case '\r' : result += "\\r" ; break;
		String_t* L_13 = V_0;
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_13, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, NULL);
		V_0 = L_14;
		// case '\r' : result += "\\r" ; break;
		goto IL_00b1;
	}

IL_0079:
	{
		// case '\t' : result += "\\t" ; break;
		String_t* L_15 = V_0;
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_15, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, NULL);
		V_0 = L_16;
		// case '\t' : result += "\\t" ; break;
		goto IL_00b1;
	}

IL_0087:
	{
		// case '\b' : result += "\\b" ; break;
		String_t* L_17 = V_0;
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_17, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, NULL);
		V_0 = L_18;
		// case '\b' : result += "\\b" ; break;
		goto IL_00b1;
	}

IL_0095:
	{
		// case '\f' : result += "\\f" ; break;
		String_t* L_19 = V_0;
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_19, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, NULL);
		V_0 = L_20;
		// case '\f' : result += "\\f" ; break;
		goto IL_00b1;
	}

IL_00a3:
	{
		// default   : result += c     ; break;
		String_t* L_21 = V_0;
		String_t* L_22;
		L_22 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_3), NULL);
		String_t* L_23;
		L_23 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_21, L_22, NULL);
		V_0 = L_23;
	}

IL_00b1:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_00b5:
	{
		// foreach(char c in aText)
		int32_t L_25 = V_2;
		String_t* L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_26, NULL);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_000f;
		}
	}
	{
		// return result;
		String_t* L_28 = V_0;
		return L_28;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_Parse_m3AC8E590DF695A3A545103AAE07B329CF673B67F (String_t* ___0_aJSON, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m68E783CC815DA7056E83DBD8DEC3C550CD932DFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m4C5E04D7BA9297399CBD489C611AAD4840626FE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m732686422E4C72ACBAD8662B06F74B702B1498D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m37B27F2261D562BBD092A5424B43E4F857CD561F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053D8D6CEEBA9453C97D0EE5374DB863E6F77AD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE28F98354F48E7C0878BBA93033C6BDC68B27E2);
		s_Il2CppMethodInitialized = true;
	}
	Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* V_0 = NULL;
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	bool V_5 = false;
	Il2CppChar V_6 = 0x0;
	Il2CppChar V_7 = 0x0;
	Il2CppChar V_8 = 0x0;
	String_t* V_9 = NULL;
	{
		// Stack<JSONNode> stack = new Stack<JSONNode>();
		Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* L_0 = (Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8*)il2cpp_codegen_object_new(Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Stack_1__ctor_m732686422E4C72ACBAD8662B06F74B702B1498D2(L_0, Stack_1__ctor_m732686422E4C72ACBAD8662B06F74B702B1498D2_RuntimeMethod_var);
		V_0 = L_0;
		// JSONNode ctx = null;
		V_1 = (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)NULL;
		// int i = 0;
		V_2 = 0;
		// string Token = "";
		V_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// string TokenName = "";
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// bool QuoteMode = false;
		V_5 = (bool)0;
		goto IL_042d;
	}

IL_001f:
	{
		// switch (aJSON[i])
		String_t* L_1 = ___0_aJSON;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		V_6 = L_3;
		Il2CppChar L_4 = V_6;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)44)))))
		{
			goto IL_0077;
		}
	}
	{
		Il2CppChar L_5 = V_6;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)32)))))
		{
			goto IL_0060;
		}
	}
	{
		Il2CppChar L_6 = V_6;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, ((int32_t)9))))
		{
			case 0:
			{
				goto IL_0317;
			}
			case 1:
			{
				goto IL_0429;
			}
			case 2:
			{
				goto IL_0412;
			}
			case 3:
			{
				goto IL_0412;
			}
			case 4:
			{
				goto IL_0429;
			}
		}
	}
	{
		Il2CppChar L_7 = V_6;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)32))))
		{
			goto IL_0317;
		}
	}
	{
		goto IL_0412;
	}

IL_0060:
	{
		Il2CppChar L_8 = V_6;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)34))))
		{
			goto IL_029a;
		}
	}
	{
		Il2CppChar L_9 = V_6;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)44))))
		{
			goto IL_02a6;
		}
	}
	{
		goto IL_0412;
	}

IL_0077:
	{
		Il2CppChar L_10 = V_6;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)93)))))
		{
			goto IL_00a1;
		}
	}
	{
		Il2CppChar L_11 = V_6;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)58))))
		{
			goto IL_026c;
		}
	}
	{
		Il2CppChar L_12 = V_6;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_12, ((int32_t)91))))
		{
			case 0:
			{
				goto IL_013d;
			}
			case 1:
			{
				goto IL_033a;
			}
			case 2:
			{
				goto IL_01c5;
			}
		}
	}
	{
		goto IL_0412;
	}

IL_00a1:
	{
		Il2CppChar L_13 = V_6;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)123))))
		{
			goto IL_00b5;
		}
	}
	{
		Il2CppChar L_14 = V_6;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)125))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0412;
	}

IL_00b5:
	{
		// if (QuoteMode)
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_00d5;
		}
	}
	{
		// Token += aJSON[i];
		String_t* L_16 = V_3;
		String_t* L_17 = ___0_aJSON;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Il2CppChar L_19;
		L_19 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_17, L_18, NULL);
		V_7 = L_19;
		String_t* L_20;
		L_20 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_7), NULL);
		String_t* L_21;
		L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_16, L_20, NULL);
		V_3 = L_21;
		// break;
		goto IL_0429;
	}

IL_00d5:
	{
		// stack.Push(new JSONClass());
		Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* L_22 = V_0;
		JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* L_23 = (JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA*)il2cpp_codegen_object_new(JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		JSONClass__ctor_mC9311C3F888BDCAE8DB1A0485AD84A040A46AB99(L_23, NULL);
		NullCheck(L_22);
		Stack_1_Push_m4C5E04D7BA9297399CBD489C611AAD4840626FE9(L_22, L_23, Stack_1_Push_m4C5E04D7BA9297399CBD489C611AAD4840626FE9_RuntimeMethod_var);
		// if (ctx != null)
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_24 = V_1;
		bool L_25;
		L_25 = JSONNode_op_Inequality_mE2D1056C4462DF84287BE45D18A6B3FF137C2AD4(L_24, NULL, NULL);
		if (!L_25)
		{
			goto IL_0124;
		}
	}
	{
		// TokenName = TokenName.Trim();
		String_t* L_26 = V_4;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_26, NULL);
		V_4 = L_27;
		// if (ctx is JSONArray)
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_28 = V_1;
		if (!((JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25*)IsInstClass((RuntimeObject*)L_28, JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var)))
		{
			goto IL_0108;
		}
	}
	{
		// ctx.Add(stack.Peek());
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_29 = V_1;
		Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* L_30 = V_0;
		NullCheck(L_30);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_31;
		L_31 = Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D(L_30, Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D_RuntimeMethod_var);
		NullCheck(L_29);
		VirtualActionInvoker1< JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_29, L_31);
		goto IL_0124;
	}

IL_0108:
	{
		// else if (TokenName != "")
		String_t* L_32 = V_4;
		bool L_33;
		L_33 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_32, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_33)
		{
			goto IL_0124;
		}
	}
	{
		// ctx.Add(TokenName,stack.Peek());
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_34 = V_1;
		String_t* L_35 = V_4;
		Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* L_36 = V_0;
		NullCheck(L_36);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_37;
		L_37 = Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D(L_36, Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D_RuntimeMethod_var);
		NullCheck(L_34);
		VirtualActionInvoker2< String_t*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_34, L_35, L_37);
	}

IL_0124:
	{
		// TokenName = "";
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// Token = "";
		V_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// ctx = stack.Peek();
		Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* L_38 = V_0;
		NullCheck(L_38);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_39;
		L_39 = Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D(L_38, Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D_RuntimeMethod_var);
		V_1 = L_39;
		// break;
		goto IL_0429;
	}

IL_013d:
	{
		// if (QuoteMode)
		bool L_40 = V_5;
		if (!L_40)
		{
			goto IL_015d;
		}
	}
	{
		// Token += aJSON[i];
		String_t* L_41 = V_3;
		String_t* L_42 = ___0_aJSON;
		int32_t L_43 = V_2;
		NullCheck(L_42);
		Il2CppChar L_44;
		L_44 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_42, L_43, NULL);
		V_7 = L_44;
		String_t* L_45;
		L_45 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_7), NULL);
		String_t* L_46;
		L_46 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_41, L_45, NULL);
		V_3 = L_46;
		// break;
		goto IL_0429;
	}

IL_015d:
	{
		// stack.Push(new JSONArray());
		Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* L_47 = V_0;
		JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_48 = (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25*)il2cpp_codegen_object_new(JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		JSONArray__ctor_m19BBACE404D8C75AC41AC9CB4702C0943401D071(L_48, NULL);
		NullCheck(L_47);
		Stack_1_Push_m4C5E04D7BA9297399CBD489C611AAD4840626FE9(L_47, L_48, Stack_1_Push_m4C5E04D7BA9297399CBD489C611AAD4840626FE9_RuntimeMethod_var);
		// if (ctx != null)
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_49 = V_1;
		bool L_50;
		L_50 = JSONNode_op_Inequality_mE2D1056C4462DF84287BE45D18A6B3FF137C2AD4(L_49, NULL, NULL);
		if (!L_50)
		{
			goto IL_01ac;
		}
	}
	{
		// TokenName = TokenName.Trim();
		String_t* L_51 = V_4;
		NullCheck(L_51);
		String_t* L_52;
		L_52 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_51, NULL);
		V_4 = L_52;
		// if (ctx is JSONArray)
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_53 = V_1;
		if (!((JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25*)IsInstClass((RuntimeObject*)L_53, JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var)))
		{
			goto IL_0190;
		}
	}
	{
		// ctx.Add(stack.Peek());
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_54 = V_1;
		Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* L_55 = V_0;
		NullCheck(L_55);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_56;
		L_56 = Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D(L_55, Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D_RuntimeMethod_var);
		NullCheck(L_54);
		VirtualActionInvoker1< JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_54, L_56);
		goto IL_01ac;
	}

IL_0190:
	{
		// else if (TokenName != "")
		String_t* L_57 = V_4;
		bool L_58;
		L_58 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_57, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_58)
		{
			goto IL_01ac;
		}
	}
	{
		// ctx.Add(TokenName,stack.Peek());
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_59 = V_1;
		String_t* L_60 = V_4;
		Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* L_61 = V_0;
		NullCheck(L_61);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_62;
		L_62 = Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D(L_61, Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D_RuntimeMethod_var);
		NullCheck(L_59);
		VirtualActionInvoker2< String_t*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_59, L_60, L_62);
	}

IL_01ac:
	{
		// TokenName = "";
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// Token = "";
		V_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// ctx = stack.Peek();
		Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* L_63 = V_0;
		NullCheck(L_63);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_64;
		L_64 = Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D(L_63, Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D_RuntimeMethod_var);
		V_1 = L_64;
		// break;
		goto IL_0429;
	}

IL_01c5:
	{
		// if (QuoteMode)
		bool L_65 = V_5;
		if (!L_65)
		{
			goto IL_01e5;
		}
	}
	{
		// Token += aJSON[i];
		String_t* L_66 = V_3;
		String_t* L_67 = ___0_aJSON;
		int32_t L_68 = V_2;
		NullCheck(L_67);
		Il2CppChar L_69;
		L_69 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_67, L_68, NULL);
		V_7 = L_69;
		String_t* L_70;
		L_70 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_7), NULL);
		String_t* L_71;
		L_71 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_66, L_70, NULL);
		V_3 = L_71;
		// break;
		goto IL_0429;
	}

IL_01e5:
	{
		// if (stack.Count == 0)
		Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* L_72 = V_0;
		NullCheck(L_72);
		int32_t L_73;
		L_73 = Stack_1_get_Count_m37B27F2261D562BBD092A5424B43E4F857CD561F_inline(L_72, Stack_1_get_Count_m37B27F2261D562BBD092A5424B43E4F857CD561F_RuntimeMethod_var);
		if (L_73)
		{
			goto IL_01f8;
		}
	}
	{
		// throw new Exception("JSON Parse: Too many closing brackets");
		Exception_t* L_74 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_74);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_74, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral870C43A28360ADF668EFBACF63A4553351C7FA4C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_74, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONNode_Parse_m3AC8E590DF695A3A545103AAE07B329CF673B67F_RuntimeMethod_var)));
	}

IL_01f8:
	{
		// stack.Pop();
		Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* L_75 = V_0;
		NullCheck(L_75);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_76;
		L_76 = Stack_1_Pop_m68E783CC815DA7056E83DBD8DEC3C550CD932DFB(L_75, Stack_1_Pop_m68E783CC815DA7056E83DBD8DEC3C550CD932DFB_RuntimeMethod_var);
		// if (Token != "")
		String_t* L_77 = V_3;
		bool L_78;
		L_78 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_77, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_78)
		{
			goto IL_0247;
		}
	}
	{
		// TokenName = TokenName.Trim();
		String_t* L_79 = V_4;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_79, NULL);
		V_4 = L_80;
		// if (ctx is JSONArray)
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_81 = V_1;
		if (!((JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25*)IsInstClass((RuntimeObject*)L_81, JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var)))
		{
			goto IL_022b;
		}
	}
	{
		// ctx.Add(Token);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_82 = V_1;
		String_t* L_83 = V_3;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_84;
		L_84 = JSONNode_op_Implicit_m52DF2A0612C8EA630E888C0E971225AE6F63D05A(L_83, NULL);
		NullCheck(L_82);
		VirtualActionInvoker1< JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_82, L_84);
		goto IL_0247;
	}

IL_022b:
	{
		// else if (TokenName != "")
		String_t* L_85 = V_4;
		bool L_86;
		L_86 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_85, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_86)
		{
			goto IL_0247;
		}
	}
	{
		// ctx.Add(TokenName,Token);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_87 = V_1;
		String_t* L_88 = V_4;
		String_t* L_89 = V_3;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_90;
		L_90 = JSONNode_op_Implicit_m52DF2A0612C8EA630E888C0E971225AE6F63D05A(L_89, NULL);
		NullCheck(L_87);
		VirtualActionInvoker2< String_t*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_87, L_88, L_90);
	}

IL_0247:
	{
		// TokenName = "";
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// Token = "";
		V_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if (stack.Count>0)
		Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* L_91 = V_0;
		NullCheck(L_91);
		int32_t L_92;
		L_92 = Stack_1_get_Count_m37B27F2261D562BBD092A5424B43E4F857CD561F_inline(L_91, Stack_1_get_Count_m37B27F2261D562BBD092A5424B43E4F857CD561F_RuntimeMethod_var);
		if ((((int32_t)L_92) <= ((int32_t)0)))
		{
			goto IL_0429;
		}
	}
	{
		// ctx = stack.Peek();
		Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* L_93 = V_0;
		NullCheck(L_93);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_94;
		L_94 = Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D(L_93, Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D_RuntimeMethod_var);
		V_1 = L_94;
		// break;
		goto IL_0429;
	}

IL_026c:
	{
		// if (QuoteMode)
		bool L_95 = V_5;
		if (!L_95)
		{
			goto IL_028c;
		}
	}
	{
		// Token += aJSON[i];
		String_t* L_96 = V_3;
		String_t* L_97 = ___0_aJSON;
		int32_t L_98 = V_2;
		NullCheck(L_97);
		Il2CppChar L_99;
		L_99 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_97, L_98, NULL);
		V_7 = L_99;
		String_t* L_100;
		L_100 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_7), NULL);
		String_t* L_101;
		L_101 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_96, L_100, NULL);
		V_3 = L_101;
		// break;
		goto IL_0429;
	}

IL_028c:
	{
		// TokenName = Token;
		String_t* L_102 = V_3;
		V_4 = L_102;
		// Token = "";
		V_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// break;
		goto IL_0429;
	}

IL_029a:
	{
		// QuoteMode ^= true;
		bool L_103 = V_5;
		V_5 = (bool)((((int32_t)L_103) == ((int32_t)0))? 1 : 0);
		// break;
		goto IL_0429;
	}

IL_02a6:
	{
		// if (QuoteMode)
		bool L_104 = V_5;
		if (!L_104)
		{
			goto IL_02c6;
		}
	}
	{
		// Token += aJSON[i];
		String_t* L_105 = V_3;
		String_t* L_106 = ___0_aJSON;
		int32_t L_107 = V_2;
		NullCheck(L_106);
		Il2CppChar L_108;
		L_108 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_106, L_107, NULL);
		V_7 = L_108;
		String_t* L_109;
		L_109 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_7), NULL);
		String_t* L_110;
		L_110 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_105, L_109, NULL);
		V_3 = L_110;
		// break;
		goto IL_0429;
	}

IL_02c6:
	{
		// if (Token != "")
		String_t* L_111 = V_3;
		bool L_112;
		L_112 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_111, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_112)
		{
			goto IL_0305;
		}
	}
	{
		// if (ctx is JSONArray)
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_113 = V_1;
		if (!((JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25*)IsInstClass((RuntimeObject*)L_113, JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var)))
		{
			goto IL_02e9;
		}
	}
	{
		// ctx.Add(Token);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_114 = V_1;
		String_t* L_115 = V_3;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_116;
		L_116 = JSONNode_op_Implicit_m52DF2A0612C8EA630E888C0E971225AE6F63D05A(L_115, NULL);
		NullCheck(L_114);
		VirtualActionInvoker1< JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_114, L_116);
		goto IL_0305;
	}

IL_02e9:
	{
		// else if (TokenName != "")
		String_t* L_117 = V_4;
		bool L_118;
		L_118 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_117, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_118)
		{
			goto IL_0305;
		}
	}
	{
		// ctx.Add(TokenName, Token);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_119 = V_1;
		String_t* L_120 = V_4;
		String_t* L_121 = V_3;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_122;
		L_122 = JSONNode_op_Implicit_m52DF2A0612C8EA630E888C0E971225AE6F63D05A(L_121, NULL);
		NullCheck(L_119);
		VirtualActionInvoker2< String_t*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_119, L_120, L_122);
	}

IL_0305:
	{
		// TokenName = "";
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// Token = "";
		V_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// break;
		goto IL_0429;
	}

IL_0317:
	{
		// if (QuoteMode)
		bool L_123 = V_5;
		if (!L_123)
		{
			goto IL_0429;
		}
	}
	{
		// Token += aJSON[i];
		String_t* L_124 = V_3;
		String_t* L_125 = ___0_aJSON;
		int32_t L_126 = V_2;
		NullCheck(L_125);
		Il2CppChar L_127;
		L_127 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_125, L_126, NULL);
		V_7 = L_127;
		String_t* L_128;
		L_128 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_7), NULL);
		String_t* L_129;
		L_129 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_124, L_128, NULL);
		V_3 = L_129;
		// break;
		goto IL_0429;
	}

IL_033a:
	{
		// ++i;
		int32_t L_130 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_130, 1));
		// if (QuoteMode)
		bool L_131 = V_5;
		if (!L_131)
		{
			goto IL_0429;
		}
	}
	{
		// char C = aJSON[i];
		String_t* L_132 = ___0_aJSON;
		int32_t L_133 = V_2;
		NullCheck(L_132);
		Il2CppChar L_134;
		L_134 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_132, L_133, NULL);
		V_8 = L_134;
		Il2CppChar L_135 = V_8;
		if ((!(((uint32_t)L_135) <= ((uint32_t)((int32_t)102)))))
		{
			goto IL_0365;
		}
	}
	{
		Il2CppChar L_136 = V_8;
		if ((((int32_t)L_136) == ((int32_t)((int32_t)98))))
		{
			goto IL_03b7;
		}
	}
	{
		Il2CppChar L_137 = V_8;
		if ((((int32_t)L_137) == ((int32_t)((int32_t)102))))
		{
			goto IL_03c5;
		}
	}
	{
		goto IL_0402;
	}

IL_0365:
	{
		Il2CppChar L_138 = V_8;
		if ((((int32_t)L_138) == ((int32_t)((int32_t)110))))
		{
			goto IL_03a9;
		}
	}
	{
		Il2CppChar L_139 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_139, ((int32_t)114))))
		{
			case 0:
			{
				goto IL_0398;
			}
			case 1:
			{
				goto IL_0402;
			}
			case 2:
			{
				goto IL_0387;
			}
			case 3:
			{
				goto IL_03d3;
			}
		}
	}
	{
		goto IL_0402;
	}

IL_0387:
	{
		// case 't' : Token += '\t'; break;
		String_t* L_140 = V_3;
		String_t* L_141;
		L_141 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_140, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, NULL);
		V_3 = L_141;
		// case 't' : Token += '\t'; break;
		goto IL_0429;
	}

IL_0398:
	{
		// case 'r' : Token += '\r'; break;
		String_t* L_142 = V_3;
		String_t* L_143;
		L_143 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_142, _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C, NULL);
		V_3 = L_143;
		// case 'r' : Token += '\r'; break;
		goto IL_0429;
	}

IL_03a9:
	{
		// case 'n' : Token += '\n'; break;
		String_t* L_144 = V_3;
		String_t* L_145;
		L_145 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_144, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		V_3 = L_145;
		// case 'n' : Token += '\n'; break;
		goto IL_0429;
	}

IL_03b7:
	{
		// case 'b' : Token += '\b'; break;
		String_t* L_146 = V_3;
		String_t* L_147;
		L_147 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_146, _stringLiteral053D8D6CEEBA9453C97D0EE5374DB863E6F77AD4, NULL);
		V_3 = L_147;
		// case 'b' : Token += '\b'; break;
		goto IL_0429;
	}

IL_03c5:
	{
		// case 'f' : Token += '\f'; break;
		String_t* L_148 = V_3;
		String_t* L_149;
		L_149 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_148, _stringLiteralDE28F98354F48E7C0878BBA93033C6BDC68B27E2, NULL);
		V_3 = L_149;
		// case 'f' : Token += '\f'; break;
		goto IL_0429;
	}

IL_03d3:
	{
		// string s = aJSON.Substring(i+1,4);
		String_t* L_150 = ___0_aJSON;
		int32_t L_151 = V_2;
		NullCheck(L_150);
		String_t* L_152;
		L_152 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_150, ((int32_t)il2cpp_codegen_add(L_151, 1)), 4, NULL);
		V_9 = L_152;
		// Token += (char)int.Parse(s, System.Globalization.NumberStyles.AllowHexSpecifier);
		String_t* L_153 = V_3;
		String_t* L_154 = V_9;
		int32_t L_155;
		L_155 = Int32_Parse_mF336325913DF125A6F8F05F2909E3AFB0D73830E(L_154, ((int32_t)512), NULL);
		V_7 = ((int32_t)(uint16_t)L_155);
		String_t* L_156;
		L_156 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_7), NULL);
		String_t* L_157;
		L_157 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_153, L_156, NULL);
		V_3 = L_157;
		// i += 4;
		int32_t L_158 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_158, 4));
		// break;
		goto IL_0429;
	}

IL_0402:
	{
		// default  : Token += C; break;
		String_t* L_159 = V_3;
		String_t* L_160;
		L_160 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_8), NULL);
		String_t* L_161;
		L_161 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_159, L_160, NULL);
		V_3 = L_161;
		// default  : Token += C; break;
		goto IL_0429;
	}

IL_0412:
	{
		// Token += aJSON[i];
		String_t* L_162 = V_3;
		String_t* L_163 = ___0_aJSON;
		int32_t L_164 = V_2;
		NullCheck(L_163);
		Il2CppChar L_165;
		L_165 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_163, L_164, NULL);
		V_7 = L_165;
		String_t* L_166;
		L_166 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_7), NULL);
		String_t* L_167;
		L_167 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_162, L_166, NULL);
		V_3 = L_167;
	}

IL_0429:
	{
		// ++i;
		int32_t L_168 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_168, 1));
	}

IL_042d:
	{
		// while (i < aJSON.Length)
		int32_t L_169 = V_2;
		String_t* L_170 = ___0_aJSON;
		NullCheck(L_170);
		int32_t L_171;
		L_171 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_170, NULL);
		if ((((int32_t)L_169) < ((int32_t)L_171)))
		{
			goto IL_001f;
		}
	}
	{
		// if (QuoteMode)
		bool L_172 = V_5;
		if (!L_172)
		{
			goto IL_0448;
		}
	}
	{
		// throw new Exception("JSON Parse: Quotation marks seems to be messed up.");
		Exception_t* L_173 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_173);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_173, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF00FC1AEA59DE3445148D940526441AD4E1FFA7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_173, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONNode_Parse_m3AC8E590DF695A3A545103AAE07B329CF673B67F_RuntimeMethod_var)));
	}

IL_0448:
	{
		// return ctx;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_174 = V_1;
		return L_174;
	}
}
// System.Void SimpleJSON.JSONNode::Serialize(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_Serialize_m51DC546AB05E7BDFB8FD5928AC98679A756913D2 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_aWriter, const RuntimeMethod* method) 
{
	{
		// public virtual void Serialize(System.IO.BinaryWriter aWriter) {}
		return;
	}
}
// System.Void SimpleJSON.JSONNode::SaveToStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_SaveToStream_m42ADB7E3EB56DD76AAF9C9DAFD420A5B63BE2207 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_aData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* V_0 = NULL;
	{
		// var W = new System.IO.BinaryWriter(aData);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_aData;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)il2cpp_codegen_object_new(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0(L_1, L_0, NULL);
		V_0 = L_1;
		// Serialize(W);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = V_0;
		VirtualActionInvoker1< BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* >::Invoke(28 /* System.Void SimpleJSON.JSONNode::Serialize(System.IO.BinaryWriter) */, __this, L_2);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONNode::SaveToCompressedStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_SaveToCompressedStream_mAC0EF180E303090E00488E547433FFEAB80CC8B5 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_aData, const RuntimeMethod* method) 
{
	{
		// throw new Exception("Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral267728DB976DC54468CED5DA57858FCD9E58B05A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONNode_SaveToCompressedStream_mAC0EF180E303090E00488E547433FFEAB80CC8B5_RuntimeMethod_var)));
	}
}
// System.Void SimpleJSON.JSONNode::SaveToCompressedFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_SaveToCompressedFile_mA9B6A2FDC58500476D1C892FA0096B33B5166EA7 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, String_t* ___0_aFileName, const RuntimeMethod* method) 
{
	{
		// throw new Exception("Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral267728DB976DC54468CED5DA57858FCD9E58B05A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONNode_SaveToCompressedFile_mA9B6A2FDC58500476D1C892FA0096B33B5166EA7_RuntimeMethod_var)));
	}
}
// System.String SimpleJSON.JSONNode::SaveToCompressedBase64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_SaveToCompressedBase64_m4E9A1A7C9E086F74290A884545D2EE77F6C7B867 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	{
		// throw new Exception("Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral267728DB976DC54468CED5DA57858FCD9E58B05A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONNode_SaveToCompressedBase64_m4E9A1A7C9E086F74290A884545D2EE77F6C7B867_RuntimeMethod_var)));
	}
}
// System.Void SimpleJSON.JSONNode::SaveToFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_SaveToFile_m0A940E984AB9F93A88BDDBF3C90791325A38DC7A (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, String_t* ___0_aFileName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_0 = NULL;
	{
		// System.IO.Directory.CreateDirectory((new System.IO.FileInfo(aFileName)).Directory.FullName);
		String_t* L_0 = ___0_aFileName;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_1 = (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)il2cpp_codegen_object_new(FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F(L_1, L_0, NULL);
		NullCheck(L_1);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_2;
		L_2 = FileInfo_get_Directory_m17FDB04561FFB59BF0EAF22E92A6A8BAD3572EE6(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_2);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_4;
		L_4 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_3, NULL);
		// using(var F = System.IO.File.OpenWrite(aFileName))
		String_t* L_5 = ___0_aFileName;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_6;
		L_6 = File_OpenWrite_m5DD7E6EDB15631A97328297A58E9395B47CFB6AB(L_5, NULL);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_7 = V_0;
					if (!L_7)
					{
						goto IL_002f;
					}
				}
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_8 = V_0;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_002f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// SaveToStream(F);
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_9 = V_0;
			JSONNode_SaveToStream_m42ADB7E3EB56DD76AAF9C9DAFD420A5B63BE2207(__this, L_9, NULL);
			// }
			goto IL_0030;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.String SimpleJSON.JSONNode::SaveToBase64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_SaveToBase64_mBB8C28817B94EF46B543C4FDCF9F2397A5225DDE (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// using (var stream = new System.IO.MemoryStream())
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = V_0;
					if (!L_1)
					{
						goto IL_002c;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_002c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// SaveToStream(stream);
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
			JSONNode_SaveToStream_m42ADB7E3EB56DD76AAF9C9DAFD420A5B63BE2207(__this, L_3, NULL);
			// stream.Position = 0;
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = V_0;
			NullCheck(L_4);
			VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_4, ((int64_t)0));
			// return System.Convert.ToBase64String(stream.ToArray());
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = V_0;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
			L_6 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(39 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_5);
			il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
			String_t* L_7;
			L_7 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_6, NULL);
			V_1 = L_7;
			goto IL_002d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
		// }
		String_t* L_8 = V_1;
		return L_8;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Deserialize(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_Deserialize_mF8594740482949F17BD8EC3E8C7993BF38C99A2D (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_aReader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* V_8 = NULL;
	{
		// JSONBinaryTag type = (JSONBinaryTag)aReader.ReadByte();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___0_aReader;
		NullCheck(L_0);
		uint8_t L_1;
		L_1 = VirtualFuncInvoker0< uint8_t >::Invoke(10 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_0030;
			}
			case 1:
			{
				goto IL_0057;
			}
			case 2:
			{
				goto IL_0095;
			}
			case 3:
			{
				goto IL_00a1;
			}
			case 4:
			{
				goto IL_00ad;
			}
			case 5:
			{
				goto IL_00b9;
			}
			case 6:
			{
				goto IL_00c5;
			}
		}
	}
	{
		goto IL_00d1;
	}

IL_0030:
	{
		// int count = aReader.ReadInt32();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_3 = ___0_aReader;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_3);
		V_1 = L_4;
		// JSONArray tmp = new JSONArray();
		JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_5 = (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25*)il2cpp_codegen_object_new(JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		JSONArray__ctor_m19BBACE404D8C75AC41AC9CB4702C0943401D071(L_5, NULL);
		V_2 = L_5;
		// for(int i = 0; i < count; i++)
		V_3 = 0;
		goto IL_0051;
	}

IL_0041:
	{
		// tmp.Add(Deserialize(aReader));
		JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_6 = V_2;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = ___0_aReader;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_8;
		L_8 = JSONNode_Deserialize_mF8594740482949F17BD8EC3E8C7993BF38C99A2D(L_7, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_6, L_8);
		// for(int i = 0; i < count; i++)
		int32_t L_9 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0051:
	{
		// for(int i = 0; i < count; i++)
		int32_t L_10 = V_3;
		int32_t L_11 = V_1;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0041;
		}
	}
	{
		// return tmp;
		JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_12 = V_2;
		return L_12;
	}

IL_0057:
	{
		// int count = aReader.ReadInt32();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_13 = ___0_aReader;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_13);
		V_4 = L_14;
		// JSONClass tmp = new JSONClass();
		JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* L_15 = (JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA*)il2cpp_codegen_object_new(JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		JSONClass__ctor_mC9311C3F888BDCAE8DB1A0485AD84A040A46AB99(L_15, NULL);
		V_5 = L_15;
		// for(int i = 0; i < count; i++)
		V_6 = 0;
		goto IL_008c;
	}

IL_006b:
	{
		// string key = aReader.ReadString();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_16 = ___0_aReader;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(22 /* System.String System.IO.BinaryReader::ReadString() */, L_16);
		V_7 = L_17;
		// var val = Deserialize(aReader);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_18 = ___0_aReader;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_19;
		L_19 = JSONNode_Deserialize_mF8594740482949F17BD8EC3E8C7993BF38C99A2D(L_18, NULL);
		V_8 = L_19;
		// tmp.Add(key, val);
		JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* L_20 = V_5;
		String_t* L_21 = V_7;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_22 = V_8;
		NullCheck(L_20);
		VirtualActionInvoker2< String_t*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_20, L_21, L_22);
		// for(int i = 0; i < count; i++)
		int32_t L_23 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_008c:
	{
		// for(int i = 0; i < count; i++)
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_006b;
		}
	}
	{
		// return tmp;
		JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* L_26 = V_5;
		return L_26;
	}

IL_0095:
	{
		// return new JSONData(aReader.ReadString());
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_27 = ___0_aReader;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = VirtualFuncInvoker0< String_t* >::Invoke(22 /* System.String System.IO.BinaryReader::ReadString() */, L_27);
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_29 = (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957*)il2cpp_codegen_object_new(JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		JSONData__ctor_m7714426689BE0641F4646578D150977CC7CAD250(L_29, L_28, NULL);
		return L_29;
	}

IL_00a1:
	{
		// return new JSONData(aReader.ReadInt32());
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_30 = ___0_aReader;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_30);
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_32 = (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957*)il2cpp_codegen_object_new(JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		JSONData__ctor_m44327F17DDF60BF59C22174562BC90DB599877C5(L_32, L_31, NULL);
		return L_32;
	}

IL_00ad:
	{
		// return new JSONData(aReader.ReadDouble());
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_33 = ___0_aReader;
		NullCheck(L_33);
		double L_34;
		L_34 = VirtualFuncInvoker0< double >::Invoke(20 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_33);
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_35 = (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957*)il2cpp_codegen_object_new(JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		JSONData__ctor_m576E0B5A3F123F672181AF9DDB2080781BBEC036(L_35, L_34, NULL);
		return L_35;
	}

IL_00b9:
	{
		// return new JSONData(aReader.ReadBoolean());
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_36 = ___0_aReader;
		NullCheck(L_36);
		bool L_37;
		L_37 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.BinaryReader::ReadBoolean() */, L_36);
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_38 = (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957*)il2cpp_codegen_object_new(JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		JSONData__ctor_mD7041328B2C97B646B552708140A508112876AD3(L_38, L_37, NULL);
		return L_38;
	}

IL_00c5:
	{
		// return new JSONData(aReader.ReadSingle());
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_39 = ___0_aReader;
		NullCheck(L_39);
		float L_40;
		L_40 = VirtualFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_39);
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_41 = (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957*)il2cpp_codegen_object_new(JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		JSONData__ctor_m60C3CC6E9D3EF6EC7085B2227CA19FD672326E25(L_41, L_40, NULL);
		return L_41;
	}

IL_00d1:
	{
		// throw new Exception("Error deserializing JSON. Unknown tag: " + type);
		Il2CppFakeBox<int32_t> L_42(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONBinaryTag_t0E728ABAFD32DD036B3E5EB7063C592D58826316_il2cpp_TypeInfo_var)), (&V_0));
		String_t* L_43;
		L_43 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_42), NULL);
		String_t* L_44;
		L_44 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5703E0056B9B4C239F9C1589A2955D3F601A9DC0)), L_43, NULL);
		Exception_t* L_45 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_45);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_45, L_44, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONNode_Deserialize_mF8594740482949F17BD8EC3E8C7993BF38C99A2D_RuntimeMethod_var)));
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_LoadFromCompressedFile_m011BBDA5C7F3011FADE5579D90F068CB753F1EA8 (String_t* ___0_aFileName, const RuntimeMethod* method) 
{
	{
		// throw new Exception("Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral267728DB976DC54468CED5DA57858FCD9E58B05A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONNode_LoadFromCompressedFile_m011BBDA5C7F3011FADE5579D90F068CB753F1EA8_RuntimeMethod_var)));
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_LoadFromCompressedStream_m43FA3587B7D74E692C1D27766E4C928A46A40B3B (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_aData, const RuntimeMethod* method) 
{
	{
		// throw new Exception("Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral267728DB976DC54468CED5DA57858FCD9E58B05A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONNode_LoadFromCompressedStream_m43FA3587B7D74E692C1D27766E4C928A46A40B3B_RuntimeMethod_var)));
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedBase64(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_LoadFromCompressedBase64_mBB460DB037D35B906746D672019FF3972DF2C3B3 (String_t* ___0_aBase64, const RuntimeMethod* method) 
{
	{
		// throw new Exception("Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral267728DB976DC54468CED5DA57858FCD9E58B05A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONNode_LoadFromCompressedBase64_mBB460DB037D35B906746D672019FF3972DF2C3B3_RuntimeMethod_var)));
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_LoadFromStream_m3B0C0E6ED367B25369B5FB14B3C8D44C9E8D396C (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_aData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* V_0 = NULL;
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* V_1 = NULL;
	{
		// using(var R = new System.IO.BinaryReader(aData))
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_aData;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_1, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				{
					BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0019;
					}
				}
				{
					BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0019:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return Deserialize(R);
			BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = V_0;
			JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_5;
			L_5 = JSONNode_Deserialize_mF8594740482949F17BD8EC3E8C7993BF38C99A2D(L_4, NULL);
			V_1 = L_5;
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		// }
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_6 = V_1;
		return L_6;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_LoadFromFile_m7049BE6C36CF38F0AC07BDC827900DE1BA98FD88 (String_t* ___0_aFileName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_0 = NULL;
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* V_1 = NULL;
	{
		// using(var F = System.IO.File.OpenRead(aFileName))
		String_t* L_0 = ___0_aFileName;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1;
		L_1 = File_OpenRead_m6181B052EB0E98D2E18FAC79E7744D766BA4244C(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0019;
					}
				}
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0019:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return LoadFromStream(F);
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_4 = V_0;
			JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_5;
			L_5 = JSONNode_LoadFromStream_m3B0C0E6ED367B25369B5FB14B3C8D44C9E8D396C(L_4, NULL);
			V_1 = L_5;
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		// }
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_6 = V_1;
		return L_6;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromBase64(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_LoadFromBase64_mEB686D4EC9192FD8829D8750E75B63844ADA8495 (String_t* ___0_aBase64, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var tmp = System.Convert.FromBase64String(aBase64);
		String_t* L_0 = ___0_aBase64;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_0, NULL);
		// var stream = new System.IO.MemoryStream(tmp);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_2, L_1, NULL);
		// stream.Position = 0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = L_2;
		NullCheck(L_3);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_3, ((int64_t)0));
		// return LoadFromStream(stream);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_4;
		L_4 = JSONNode_LoadFromStream_m3B0C0E6ED367B25369B5FB14B3C8D44C9E8D396C(L_3, NULL);
		return L_4;
	}
}
// System.Void SimpleJSON.JSONNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode__ctor_m4019E01BCFB43E3848591C3E8C97534BA8BC6C49 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void SimpleJSON.JSONNode/<get_Childs>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__17__ctor_mD33471C79FF4EAE1CED3A7CCB27ED8BA558E1426 (U3Cget_ChildsU3Ed__17_tBC3468A03F0A639143BC1817CAEE502D6669EC53* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void SimpleJSON.JSONNode/<get_Childs>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__17_System_IDisposable_Dispose_mC7E4A4CC7F1EEDC80EFB33EC34EC263F8936E621 (U3Cget_ChildsU3Ed__17_tBC3468A03F0A639143BC1817CAEE502D6669EC53* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SimpleJSON.JSONNode/<get_Childs>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ChildsU3Ed__17_MoveNext_m5CEA03A498A19331637404501F29EA039695DC51 (U3Cget_ChildsU3Ed__17_tBC3468A03F0A639143BC1817CAEE502D6669EC53* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// public virtual IEnumerable<JSONNode> Childs { get { yield break;} }
		return (bool)0;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode/<get_Childs>d__17::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_m2D9B9846F9DC1A3ADE159AD767D05BA147AADC5E (U3Cget_ChildsU3Ed__17_tBC3468A03F0A639143BC1817CAEE502D6669EC53* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNode/<get_Childs>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_Reset_m12C9C9BC88E677993FE7FDD389A692852C1DFDF0 (U3Cget_ChildsU3Ed__17_tBC3468A03F0A639143BC1817CAEE502D6669EC53* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_Reset_m12C9C9BC88E677993FE7FDD389A692852C1DFDF0_RuntimeMethod_var)));
	}
}
// System.Object SimpleJSON.JSONNode/<get_Childs>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_get_Current_m46FC1B9F05270D5FD3627D525C81712AC78522AB (U3Cget_ChildsU3Ed__17_tBC3468A03F0A639143BC1817CAEE502D6669EC53* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<get_Childs>d__17::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m897CB770D646C0177FDAEA9D83A052532209F00C (U3Cget_ChildsU3Ed__17_tBC3468A03F0A639143BC1817CAEE502D6669EC53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildsU3Ed__17_tBC3468A03F0A639143BC1817CAEE502D6669EC53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ChildsU3Ed__17_tBC3468A03F0A639143BC1817CAEE502D6669EC53* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3Cget_ChildsU3Ed__17_tBC3468A03F0A639143BC1817CAEE502D6669EC53* L_3 = (U3Cget_ChildsU3Ed__17_tBC3468A03F0A639143BC1817CAEE502D6669EC53*)il2cpp_codegen_object_new(U3Cget_ChildsU3Ed__17_tBC3468A03F0A639143BC1817CAEE502D6669EC53_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3Cget_ChildsU3Ed__17__ctor_mD33471C79FF4EAE1CED3A7CCB27ED8BA558E1426(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3Cget_ChildsU3Ed__17_tBC3468A03F0A639143BC1817CAEE502D6669EC53* L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONNode/<get_Childs>d__17::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__17_System_Collections_IEnumerable_GetEnumerator_m13148B9F68DE4986D21D82CBBE07CAB0F649C643 (U3Cget_ChildsU3Ed__17_tBC3468A03F0A639143BC1817CAEE502D6669EC53* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m897CB770D646C0177FDAEA9D83A052532209F00C(__this, NULL);
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
// System.Void SimpleJSON.JSONNode/<get_DeepChilds>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildsU3Ed__19__ctor_m0D0E1D0BF2A15A39EB3E3323D4C89CAF8219C1B9 (U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void SimpleJSON.JSONNode/<get_DeepChilds>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildsU3Ed__19_System_IDisposable_Dispose_m355A9C330B204411A37F00CC399125DF7A055333 (U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}

IL_0012:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0028:
			{// begin finally (depth: 1)
				U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally1_m4A639ADC9B059DB833C938474A3CB6A2AE84B01C(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_3 = V_0;
				if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
				{
					goto IL_001e_1;
				}
			}
			{
				int32_t L_4 = V_0;
				if ((((int32_t)L_4) == ((int32_t)1)))
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_002f;
			}

IL_001e_1:
			{
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0021_1:
					{// begin finally (depth: 2)
						U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally2_mA7253DEECA6AD21028D9F2EB1A3ACD3E70D99C1C(__this, NULL);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					goto IL_002f;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean SimpleJSON.JSONNode/<get_DeepChilds>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_DeepChildsU3Ed__19_MoveNext_m44C3FF86132F38302BE8B03E745FDEE383C6A163 (U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tBB6E2A615DFE00A6FE5AE919A482CC24C97ABB04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t49DDBC5AAD0D2D43999136BA0A280005097DCDFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* V_2 = NULL;
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* V_3 = NULL;
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* V_4 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00c5:
			{// begin fault (depth: 1)
				U3Cget_DeepChildsU3Ed__19_System_IDisposable_Dispose_m355A9C330B204411A37F00CC399125DF7A055333(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_1 = __this->___U3CU3E4__this_3;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_001c_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_0085_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00cc;
			}

IL_001c_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// foreach (var C in Childs)
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_4 = V_2;
				NullCheck(L_4);
				RuntimeObject* L_5;
				L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(16 /* System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_Childs() */, L_4);
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>::GetEnumerator() */, IEnumerable_1_tBB6E2A615DFE00A6FE5AE919A482CC24C97ABB04_il2cpp_TypeInfo_var, L_5);
				__this->___U3CU3E7__wrap1_4 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_4), (void*)L_6);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_00a7_1;
			}

IL_003e_1:
			{
				// foreach (var C in Childs)
				RuntimeObject* L_7 = __this->___U3CU3E7__wrap1_4;
				NullCheck(L_7);
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_8;
				L_8 = InterfaceFuncInvoker0< JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode>::get_Current() */, IEnumerator_1_t49DDBC5AAD0D2D43999136BA0A280005097DCDFD_il2cpp_TypeInfo_var, L_7);
				V_3 = L_8;
				// foreach (var D in C.DeepChilds)
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_9 = V_3;
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = JSONNode_get_DeepChilds_mC1C34218E07B0EDC1912D31C6D39125A1DC6CC58(L_9, NULL);
				NullCheck(L_10);
				RuntimeObject* L_11;
				L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>::GetEnumerator() */, IEnumerable_1_tBB6E2A615DFE00A6FE5AE919A482CC24C97ABB04_il2cpp_TypeInfo_var, L_10);
				__this->___U3CU3E7__wrap2_5 = L_11;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_5), (void*)L_11);
				__this->___U3CU3E1__state_0 = ((int32_t)-4);
				goto IL_008d_1;
			}

IL_0065_1:
			{
				// foreach (var D in C.DeepChilds)
				RuntimeObject* L_12 = __this->___U3CU3E7__wrap2_5;
				NullCheck(L_12);
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_13;
				L_13 = InterfaceFuncInvoker0< JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode>::get_Current() */, IEnumerator_1_t49DDBC5AAD0D2D43999136BA0A280005097DCDFD_il2cpp_TypeInfo_var, L_12);
				V_4 = L_13;
				// yield return D;
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_14 = V_4;
				__this->___U3CU3E2__current_1 = L_14;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_14);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_00cc;
			}

IL_0085_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-4);
			}

IL_008d_1:
			{
				// foreach (var D in C.DeepChilds)
				RuntimeObject* L_15 = __this->___U3CU3E7__wrap2_5;
				NullCheck(L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0065_1;
				}
			}
			{
				U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally2_mA7253DEECA6AD21028D9F2EB1A3ACD3E70D99C1C(__this, NULL);
				__this->___U3CU3E7__wrap2_5 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_5), (void*)(RuntimeObject*)NULL);
			}

IL_00a7_1:
			{
				// foreach (var C in Childs)
				RuntimeObject* L_17 = __this->___U3CU3E7__wrap1_4;
				NullCheck(L_17);
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_003e_1;
				}
			}
			{
				U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally1_m4A639ADC9B059DB833C938474A3CB6A2AE84B01C(__this, NULL);
				__this->___U3CU3E7__wrap1_4 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_4), (void*)(RuntimeObject*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_00cc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00cc:
	{
		bool L_19 = V_0;
		return L_19;
	}
}
// System.Void SimpleJSON.JSONNode/<get_DeepChilds>d__19::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally1_m4A639ADC9B059DB833C938474A3CB6A2AE84B01C (U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap1_4;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap1_4;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void SimpleJSON.JSONNode/<get_DeepChilds>d__19::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally2_mA7253DEECA6AD21028D9F2EB1A3ACD3E70D99C1C (U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-3);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap2_5;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap2_5;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode/<get_DeepChilds>d__19::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* U3Cget_DeepChildsU3Ed__19_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_mE46F944764931105D6FE1D1733761AD36BF8ECAD (U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNode/<get_DeepChilds>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerator_Reset_m396D9A09960676FE6DC4B8753CE0243AECADCDC7 (U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerator_Reset_m396D9A09960676FE6DC4B8753CE0243AECADCDC7_RuntimeMethod_var)));
	}
}
// System.Object SimpleJSON.JSONNode/<get_DeepChilds>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerator_get_Current_mC75758C73A2DDE4F4C06D2E3FAC2E491F9B1EFF7 (U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<get_DeepChilds>d__19::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_DeepChildsU3Ed__19_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_mB76D3B243F13565D96DC840636D230A39922585A (U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721* L_3 = (U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721*)il2cpp_codegen_object_new(U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3Cget_DeepChildsU3Ed__19__ctor_m0D0E1D0BF2A15A39EB3E3323D4C89CAF8219C1B9(L_3, 0, NULL);
		V_0 = L_3;
		U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721* L_4 = V_0;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_5 = __this->___U3CU3E4__this_3;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_3), (void*)L_5);
	}

IL_0035:
	{
		U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONNode/<get_DeepChilds>d__19::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerable_GetEnumerator_m5C083C218714C1C930A636421D3BEEC00D906C82 (U3Cget_DeepChildsU3Ed__19_tFD74E4D23B8F62745AF85B4B6EF7F6BDC7FFB721* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_DeepChildsU3Ed__19_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_mB76D3B243F13565D96DC840636D230A39922585A(__this, NULL);
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
// SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONArray_get_Item_m4EA9D4267C22189BC82BFE789BB0F96495A456E2 (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, int32_t ___0_aIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m39B501262E2772265E587E27634C346A3B31C74B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (aIndex<0 || aIndex >= m_List.Count)
		int32_t L_0 = ___0_aIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___0_aIndex;
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_2 = __this->___m_List_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_inline(L_2, List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}

IL_0012:
	{
		// return new JSONLazyCreator(this);
		JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* L_4 = (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00*)il2cpp_codegen_object_new(JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		JSONLazyCreator__ctor_mF05058E0DB09E0C896205345A7E6C44B6DE814D1(L_4, __this, NULL);
		return L_4;
	}

IL_0019:
	{
		// return m_List[aIndex];
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_5 = __this->___m_List_0;
		int32_t L_6 = ___0_aIndex;
		NullCheck(L_5);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_7;
		L_7 = List_1_get_Item_m39B501262E2772265E587E27634C346A3B31C74B(L_5, L_6, List_1_get_Item_m39B501262E2772265E587E27634C346A3B31C74B_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void SimpleJSON.JSONArray::set_Item(System.Int32,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray_set_Item_m3CC4C20D5B6DE55CA4E23CECB6020020F42EAEB8 (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, int32_t ___0_aIndex, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAED0B3BF4DD4391B86D3FAECFD32599267E7588B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mBE1F797497EC203914E95B1F5DE445D9DB8BCD09_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (aIndex<0 || aIndex >= m_List.Count)
		int32_t L_0 = ___0_aIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___0_aIndex;
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_2 = __this->___m_List_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_inline(L_2, List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_001f;
		}
	}

IL_0012:
	{
		// m_List.Add(value);
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_4 = __this->___m_List_0;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_5 = ___1_value;
		NullCheck(L_4);
		List_1_Add_mAED0B3BF4DD4391B86D3FAECFD32599267E7588B_inline(L_4, L_5, List_1_Add_mAED0B3BF4DD4391B86D3FAECFD32599267E7588B_RuntimeMethod_var);
		return;
	}

IL_001f:
	{
		// m_List[aIndex] = value;
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_6 = __this->___m_List_0;
		int32_t L_7 = ___0_aIndex;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_8 = ___1_value;
		NullCheck(L_6);
		List_1_set_Item_mBE1F797497EC203914E95B1F5DE445D9DB8BCD09(L_6, L_7, L_8, List_1_set_Item_mBE1F797497EC203914E95B1F5DE445D9DB8BCD09_RuntimeMethod_var);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONArray_get_Item_m793F58AB036EF0E96A60D36603F8861C0B3F184F (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, String_t* ___0_aKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get{ return new JSONLazyCreator(this);}
		JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* L_0 = (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00*)il2cpp_codegen_object_new(JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONLazyCreator__ctor_mF05058E0DB09E0C896205345A7E6C44B6DE814D1(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void SimpleJSON.JSONArray::set_Item(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray_set_Item_mB2D7640A550EC61047D6E65190D4195156BAC4B3 (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, String_t* ___0_aKey, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAED0B3BF4DD4391B86D3FAECFD32599267E7588B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set{ m_List.Add(value); }
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_0 = __this->___m_List_0;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_1 = ___1_value;
		NullCheck(L_0);
		List_1_Add_mAED0B3BF4DD4391B86D3FAECFD32599267E7588B_inline(L_0, L_1, List_1_Add_mAED0B3BF4DD4391B86D3FAECFD32599267E7588B_RuntimeMethod_var);
		// set{ m_List.Add(value); }
		return;
	}
}
// System.Int32 SimpleJSON.JSONArray::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONArray_get_Count_m39B875EC2649E904B6CDFF1F26A95718F74F7CA3 (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return m_List.Count; }
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_0 = __this->___m_List_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_inline(L_0, List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONArray::Add(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray_Add_m57A37D45AB14CFB46C07AFEE2C100F57E178E6C4 (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, String_t* ___0_aKey, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___1_aItem, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAED0B3BF4DD4391B86D3FAECFD32599267E7588B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_List.Add(aItem);
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_0 = __this->___m_List_0;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_1 = ___1_aItem;
		NullCheck(L_0);
		List_1_Add_mAED0B3BF4DD4391B86D3FAECFD32599267E7588B_inline(L_0, L_1, List_1_Add_mAED0B3BF4DD4391B86D3FAECFD32599267E7588B_RuntimeMethod_var);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::Remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONArray_Remove_m715F3350121DA4EAC5AC7A13DC8538375996E839 (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, int32_t ___0_aIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mCF3139E1292366D334488D1F33EEDD213F87B66A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m39B501262E2772265E587E27634C346A3B31C74B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (aIndex < 0 || aIndex >= m_List.Count)
		int32_t L_0 = ___0_aIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___0_aIndex;
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_2 = __this->___m_List_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_inline(L_2, List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		// return null;
		return (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)NULL;
	}

IL_0014:
	{
		// JSONNode tmp = m_List[aIndex];
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_4 = __this->___m_List_0;
		int32_t L_5 = ___0_aIndex;
		NullCheck(L_4);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_6;
		L_6 = List_1_get_Item_m39B501262E2772265E587E27634C346A3B31C74B(L_4, L_5, List_1_get_Item_m39B501262E2772265E587E27634C346A3B31C74B_RuntimeMethod_var);
		// m_List.RemoveAt(aIndex);
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_7 = __this->___m_List_0;
		int32_t L_8 = ___0_aIndex;
		NullCheck(L_7);
		List_1_RemoveAt_mCF3139E1292366D334488D1F33EEDD213F87B66A(L_7, L_8, List_1_RemoveAt_mCF3139E1292366D334488D1F33EEDD213F87B66A_RuntimeMethod_var);
		// return tmp;
		return L_6;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::Remove(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONArray_Remove_m933D0F80E46C7F307F7C399711B342636FE63855 (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___0_aNode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m0448185622BC57438A12CA8BE28F0AB3505C1651_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_List.Remove(aNode);
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_0 = __this->___m_List_0;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_1 = ___0_aNode;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m0448185622BC57438A12CA8BE28F0AB3505C1651(L_0, L_1, List_1_Remove_m0448185622BC57438A12CA8BE28F0AB3505C1651_RuntimeMethod_var);
		// return aNode;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_3 = ___0_aNode;
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray::get_Childs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONArray_get_Childs_m5F56E7F4698CD7F848F0FA22B5850062447DB3CE (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildsU3Ed__13_tCFC4F94F0C9F7E1A6153EF4DBE6E1FC112644FC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cget_ChildsU3Ed__13_tCFC4F94F0C9F7E1A6153EF4DBE6E1FC112644FC1* L_0 = (U3Cget_ChildsU3Ed__13_tCFC4F94F0C9F7E1A6153EF4DBE6E1FC112644FC1*)il2cpp_codegen_object_new(U3Cget_ChildsU3Ed__13_tCFC4F94F0C9F7E1A6153EF4DBE6E1FC112644FC1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3Cget_ChildsU3Ed__13__ctor_m1EC021F6F6403864DB18455982372EAEAB13C7CF(L_0, ((int32_t)-2), NULL);
		U3Cget_ChildsU3Ed__13_tCFC4F94F0C9F7E1A6153EF4DBE6E1FC112644FC1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONArray::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONArray_GetEnumerator_mF2B55CDC2DA94D864403FA7324F348781C3BC8AE (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__14_t22EB1EFD5755C028CBDE228791C05AB3F0BAEF32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumeratorU3Ed__14_t22EB1EFD5755C028CBDE228791C05AB3F0BAEF32* L_0 = (U3CGetEnumeratorU3Ed__14_t22EB1EFD5755C028CBDE228791C05AB3F0BAEF32*)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__14_t22EB1EFD5755C028CBDE228791C05AB3F0BAEF32_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetEnumeratorU3Ed__14__ctor_m631F609D7C792A35F873F1F940E8B2A03A549781(L_0, 0, NULL);
		U3CGetEnumeratorU3Ed__14_t22EB1EFD5755C028CBDE228791C05AB3F0BAEF32* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.String SimpleJSON.JSONArray::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONArray_ToString_m9FD4F107655D79CED626D8E11D4DE0C26B176517 (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE0AEC0BF430B01595C081CE7115C6CBE413D16D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB1C31B2A291986F6CD5A79C9F75196088363BF2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m44F4D4F7899D0688C1E68E1457EBDBC2D26F91CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2ABBF46AA2F1090503EFFF7B8ECCD8FB679D0168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37D21BB37C237B2168B65E84848CD02A9744D8C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1602CD594F39B601B0A34667ED3E03283DFB92E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA V_1;
	memset((&V_1), 0, sizeof(V_1));
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* V_2 = NULL;
	{
		// string result = "[ ";
		V_0 = _stringLiteral37D21BB37C237B2168B65E84848CD02A9744D8C8;
		// foreach (JSONNode N in m_List)
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_0 = __this->___m_List_0;
		NullCheck(L_0);
		Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA L_1;
		L_1 = List_1_GetEnumerator_m2ABBF46AA2F1090503EFFF7B8ECCD8FB679D0168(L_0, List_1_GetEnumerator_m2ABBF46AA2F1090503EFFF7B8ECCD8FB679D0168_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0049:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE0AEC0BF430B01595C081CE7115C6CBE413D16D0((&V_1), Enumerator_Dispose_mE0AEC0BF430B01595C081CE7115C6CBE413D16D0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003e_1;
			}

IL_0014_1:
			{
				// foreach (JSONNode N in m_List)
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_2;
				L_2 = Enumerator_get_Current_m44F4D4F7899D0688C1E68E1457EBDBC2D26F91CC_inline((&V_1), Enumerator_get_Current_m44F4D4F7899D0688C1E68E1457EBDBC2D26F91CC_RuntimeMethod_var);
				V_2 = L_2;
				// if (result.Length > 2)
				String_t* L_3 = V_0;
				NullCheck(L_3);
				int32_t L_4;
				L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
				if ((((int32_t)L_4) <= ((int32_t)2)))
				{
					goto IL_0031_1;
				}
			}
			{
				// result += ", ";
				String_t* L_5 = V_0;
				String_t* L_6;
				L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_5, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
				V_0 = L_6;
			}

IL_0031_1:
			{
				// result += N.ToString();
				String_t* L_7 = V_0;
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_8 = V_2;
				NullCheck(L_8);
				String_t* L_9;
				L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
				String_t* L_10;
				L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_7, L_9, NULL);
				V_0 = L_10;
			}

IL_003e_1:
			{
				// foreach (JSONNode N in m_List)
				bool L_11;
				L_11 = Enumerator_MoveNext_mB1C31B2A291986F6CD5A79C9F75196088363BF2D((&V_1), Enumerator_MoveNext_mB1C31B2A291986F6CD5A79C9F75196088363BF2D_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0057;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0057:
	{
		// result += " ]";
		String_t* L_12 = V_0;
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_12, _stringLiteralE1602CD594F39B601B0A34667ED3E03283DFB92E, NULL);
		V_0 = L_13;
		// return result;
		String_t* L_14 = V_0;
		return L_14;
	}
}
// System.String SimpleJSON.JSONArray::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONArray_ToString_m8B986865F0912F22BFA6D139FAD09B485195D01C (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, String_t* ___0_aPrefix, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE0AEC0BF430B01595C081CE7115C6CBE413D16D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB1C31B2A291986F6CD5A79C9F75196088363BF2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m44F4D4F7899D0688C1E68E1457EBDBC2D26F91CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2ABBF46AA2F1090503EFFF7B8ECCD8FB679D0168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17F69BD9415AEEFF5AF120DF2D45F20433804764);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37D21BB37C237B2168B65E84848CD02A9744D8C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA V_1;
	memset((&V_1), 0, sizeof(V_1));
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* V_2 = NULL;
	{
		// string result = "[ ";
		V_0 = _stringLiteral37D21BB37C237B2168B65E84848CD02A9744D8C8;
		// foreach (JSONNode N in m_List)
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_0 = __this->___m_List_0;
		NullCheck(L_0);
		Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA L_1;
		L_1 = List_1_GetEnumerator_m2ABBF46AA2F1090503EFFF7B8ECCD8FB679D0168(L_0, List_1_GetEnumerator_m2ABBF46AA2F1090503EFFF7B8ECCD8FB679D0168_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE0AEC0BF430B01595C081CE7115C6CBE413D16D0((&V_1), Enumerator_Dispose_mE0AEC0BF430B01595C081CE7115C6CBE413D16D0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005b_1;
			}

IL_0014_1:
			{
				// foreach (JSONNode N in m_List)
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_2;
				L_2 = Enumerator_get_Current_m44F4D4F7899D0688C1E68E1457EBDBC2D26F91CC_inline((&V_1), Enumerator_get_Current_m44F4D4F7899D0688C1E68E1457EBDBC2D26F91CC_RuntimeMethod_var);
				V_2 = L_2;
				// if (result.Length > 3)
				String_t* L_3 = V_0;
				NullCheck(L_3);
				int32_t L_4;
				L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
				if ((((int32_t)L_4) <= ((int32_t)3)))
				{
					goto IL_0031_1;
				}
			}
			{
				// result += ", ";
				String_t* L_5 = V_0;
				String_t* L_6;
				L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_5, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
				V_0 = L_6;
			}

IL_0031_1:
			{
				// result += "\n" + aPrefix + "   ";
				String_t* L_7 = V_0;
				String_t* L_8 = ___0_aPrefix;
				String_t* L_9;
				L_9 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_7, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_8, _stringLiteral17F69BD9415AEEFF5AF120DF2D45F20433804764, NULL);
				V_0 = L_9;
				// result += N.ToString(aPrefix+"   ");
				String_t* L_10 = V_0;
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_11 = V_2;
				String_t* L_12 = ___0_aPrefix;
				String_t* L_13;
				L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_12, _stringLiteral17F69BD9415AEEFF5AF120DF2D45F20433804764, NULL);
				NullCheck(L_11);
				String_t* L_14;
				L_14 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String SimpleJSON.JSONNode::ToString(System.String) */, L_11, L_13);
				String_t* L_15;
				L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_10, L_14, NULL);
				V_0 = L_15;
			}

IL_005b_1:
			{
				// foreach (JSONNode N in m_List)
				bool L_16;
				L_16 = Enumerator_MoveNext_mB1C31B2A291986F6CD5A79C9F75196088363BF2D((&V_1), Enumerator_MoveNext_mB1C31B2A291986F6CD5A79C9F75196088363BF2D_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0074;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0074:
	{
		// result += "\n" + aPrefix + "]";
		String_t* L_17 = V_0;
		String_t* L_18 = ___0_aPrefix;
		String_t* L_19;
		L_19 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_17, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_18, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		V_0 = L_19;
		// return result;
		String_t* L_20 = V_0;
		return L_20;
	}
}
// System.Void SimpleJSON.JSONArray::Serialize(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray_Serialize_m3C26F0181703A3F40D0F9FB5A53A807E8443C8E7 (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_aWriter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m39B501262E2772265E587E27634C346A3B31C74B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// aWriter.Write((byte)JSONBinaryTag.Array);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___0_aWriter;
		NullCheck(L_0);
		VirtualActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_0, (uint8_t)1);
		// aWriter.Write(m_List.Count);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___0_aWriter;
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_2 = __this->___m_List_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_inline(L_2, List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_RuntimeMethod_var);
		NullCheck(L_1);
		VirtualActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_1, L_3);
		// for(int i = 0; i < m_List.Count; i++)
		V_0 = 0;
		goto IL_0032;
	}

IL_001c:
	{
		// m_List[i].Serialize(aWriter);
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_4 = __this->___m_List_0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_6;
		L_6 = List_1_get_Item_m39B501262E2772265E587E27634C346A3B31C74B(L_4, L_5, List_1_get_Item_m39B501262E2772265E587E27634C346A3B31C74B_RuntimeMethod_var);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_7 = ___0_aWriter;
		NullCheck(L_6);
		VirtualActionInvoker1< BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* >::Invoke(28 /* System.Void SimpleJSON.JSONNode::Serialize(System.IO.BinaryWriter) */, L_6, L_7);
		// for(int i = 0; i < m_List.Count; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0032:
	{
		// for(int i = 0; i < m_List.Count; i++)
		int32_t L_9 = V_0;
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_10 = __this->___m_List_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_inline(L_10, List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_001c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray__ctor_m19BBACE404D8C75AC41AC9CB4702C0943401D071 (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m38909E0CD0BF81B3E450AF123312D588B61C29D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<JSONNode> m_List = new List<JSONNode>();
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_0 = (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4*)il2cpp_codegen_object_new(List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m38909E0CD0BF81B3E450AF123312D588B61C29D3(L_0, List_1__ctor_m38909E0CD0BF81B3E450AF123312D588B61C29D3_RuntimeMethod_var);
		__this->___m_List_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_List_0), (void*)L_0);
		JSONNode__ctor_m4019E01BCFB43E3848591C3E8C97534BA8BC6C49(__this, NULL);
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
// System.Void SimpleJSON.JSONArray/<get_Childs>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__13__ctor_m1EC021F6F6403864DB18455982372EAEAB13C7CF (U3Cget_ChildsU3Ed__13_tCFC4F94F0C9F7E1A6153EF4DBE6E1FC112644FC1* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void SimpleJSON.JSONArray/<get_Childs>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__13_System_IDisposable_Dispose_m8B13D46B136C0296BDD180F76740A3F06989023E (U3Cget_ChildsU3Ed__13_tCFC4F94F0C9F7E1A6153EF4DBE6E1FC112644FC1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3Cget_ChildsU3Ed__13_U3CU3Em__Finally1_m1B90ECC61CC045B2DCB7949BBD1AC42A26C1CFAB(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean SimpleJSON.JSONArray/<get_Childs>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ChildsU3Ed__13_MoveNext_mF343F147A070B0913E9F502FD50BF165B0BF6ECC (U3Cget_ChildsU3Ed__13_tCFC4F94F0C9F7E1A6153EF4DBE6E1FC112644FC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB1C31B2A291986F6CD5A79C9F75196088363BF2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m44F4D4F7899D0688C1E68E1457EBDBC2D26F91CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2ABBF46AA2F1090503EFFF7B8ECCD8FB679D0168_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* V_2 = NULL;
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* V_3 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0084:
			{// begin fault (depth: 1)
				U3Cget_ChildsU3Ed__13_System_IDisposable_Dispose_m8B13D46B136C0296BDD180F76740A3F06989023E(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_1 = __this->___U3CU3E4__this_3;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_0019_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_0059_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_008b;
			}

IL_0019_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// foreach(JSONNode N in m_List)
				JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_4 = V_2;
				NullCheck(L_4);
				List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_5 = L_4->___m_List_0;
				NullCheck(L_5);
				Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA L_6;
				L_6 = List_1_GetEnumerator_m2ABBF46AA2F1090503EFFF7B8ECCD8FB679D0168(L_5, List_1_GetEnumerator_m2ABBF46AA2F1090503EFFF7B8ECCD8FB679D0168_RuntimeMethod_var);
				__this->___U3CU3E7__wrap1_4 = L_6;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1_4))->____list_0), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1_4))->____current_3), (void*)NULL);
				#endif
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_0061_1;
			}

IL_003b_1:
			{
				// foreach(JSONNode N in m_List)
				Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA* L_7 = (&__this->___U3CU3E7__wrap1_4);
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_8;
				L_8 = Enumerator_get_Current_m44F4D4F7899D0688C1E68E1457EBDBC2D26F91CC_inline(L_7, Enumerator_get_Current_m44F4D4F7899D0688C1E68E1457EBDBC2D26F91CC_RuntimeMethod_var);
				V_3 = L_8;
				// yield return N;
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_9 = V_3;
				__this->___U3CU3E2__current_1 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_008b;
			}

IL_0059_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_0061_1:
			{
				// foreach(JSONNode N in m_List)
				Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA* L_10 = (&__this->___U3CU3E7__wrap1_4);
				bool L_11;
				L_11 = Enumerator_MoveNext_mB1C31B2A291986F6CD5A79C9F75196088363BF2D(L_10, Enumerator_MoveNext_mB1C31B2A291986F6CD5A79C9F75196088363BF2D_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				U3Cget_ChildsU3Ed__13_U3CU3Em__Finally1_m1B90ECC61CC045B2DCB7949BBD1AC42A26C1CFAB(__this, NULL);
				Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA* L_12 = (&__this->___U3CU3E7__wrap1_4);
				il2cpp_codegen_initobj(L_12, sizeof(Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA));
				// }
				V_0 = (bool)0;
				goto IL_008b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008b:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Void SimpleJSON.JSONArray/<get_Childs>d__13::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__13_U3CU3Em__Finally1_m1B90ECC61CC045B2DCB7949BBD1AC42A26C1CFAB (U3Cget_ChildsU3Ed__13_tCFC4F94F0C9F7E1A6153EF4DBE6E1FC112644FC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE0AEC0BF430B01595C081CE7115C6CBE413D16D0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA* L_0 = (&__this->___U3CU3E7__wrap1_4);
		Enumerator_Dispose_mE0AEC0BF430B01595C081CE7115C6CBE413D16D0(L_0, Enumerator_Dispose_mE0AEC0BF430B01595C081CE7115C6CBE413D16D0_RuntimeMethod_var);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray/<get_Childs>d__13::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* U3Cget_ChildsU3Ed__13_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_mEFEF5BA2780A8B6AAF320228E39C75FE46620C11 (U3Cget_ChildsU3Ed__13_tCFC4F94F0C9F7E1A6153EF4DBE6E1FC112644FC1* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONArray/<get_Childs>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__13_System_Collections_IEnumerator_Reset_mA4D581BAD2C15FB837A5B9793F018C36A7BB5DE5 (U3Cget_ChildsU3Ed__13_tCFC4F94F0C9F7E1A6153EF4DBE6E1FC112644FC1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_ChildsU3Ed__13_System_Collections_IEnumerator_Reset_mA4D581BAD2C15FB837A5B9793F018C36A7BB5DE5_RuntimeMethod_var)));
	}
}
// System.Object SimpleJSON.JSONArray/<get_Childs>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__13_System_Collections_IEnumerator_get_Current_mD2E9B740FE6C7F391087F79A4E6D65427D929341 (U3Cget_ChildsU3Ed__13_tCFC4F94F0C9F7E1A6153EF4DBE6E1FC112644FC1* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray/<get_Childs>d__13::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__13_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m75187C9C3C6E21A78E2D048FF9C672863073B126 (U3Cget_ChildsU3Ed__13_tCFC4F94F0C9F7E1A6153EF4DBE6E1FC112644FC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildsU3Ed__13_tCFC4F94F0C9F7E1A6153EF4DBE6E1FC112644FC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ChildsU3Ed__13_tCFC4F94F0C9F7E1A6153EF4DBE6E1FC112644FC1* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_ChildsU3Ed__13_tCFC4F94F0C9F7E1A6153EF4DBE6E1FC112644FC1* L_3 = (U3Cget_ChildsU3Ed__13_tCFC4F94F0C9F7E1A6153EF4DBE6E1FC112644FC1*)il2cpp_codegen_object_new(U3Cget_ChildsU3Ed__13_tCFC4F94F0C9F7E1A6153EF4DBE6E1FC112644FC1_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3Cget_ChildsU3Ed__13__ctor_m1EC021F6F6403864DB18455982372EAEAB13C7CF(L_3, 0, NULL);
		V_0 = L_3;
		U3Cget_ChildsU3Ed__13_tCFC4F94F0C9F7E1A6153EF4DBE6E1FC112644FC1* L_4 = V_0;
		JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_5 = __this->___U3CU3E4__this_3;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_3), (void*)L_5);
	}

IL_0035:
	{
		U3Cget_ChildsU3Ed__13_tCFC4F94F0C9F7E1A6153EF4DBE6E1FC112644FC1* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONArray/<get_Childs>d__13::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__13_System_Collections_IEnumerable_GetEnumerator_mC1B57D9CF5568901DDB48C949F6329F3E6C3D7DF (U3Cget_ChildsU3Ed__13_tCFC4F94F0C9F7E1A6153EF4DBE6E1FC112644FC1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_ChildsU3Ed__13_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m75187C9C3C6E21A78E2D048FF9C672863073B126(__this, NULL);
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
// System.Void SimpleJSON.JSONArray/<GetEnumerator>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14__ctor_m631F609D7C792A35F873F1F940E8B2A03A549781 (U3CGetEnumeratorU3Ed__14_t22EB1EFD5755C028CBDE228791C05AB3F0BAEF32* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SimpleJSON.JSONArray/<GetEnumerator>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_mAA4705B1AC76B61F874E5BBF6FBEE53060A31581 (U3CGetEnumeratorU3Ed__14_t22EB1EFD5755C028CBDE228791C05AB3F0BAEF32* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally1_mD023C52E80D93CC663C4631B7DA7622F90245F2F(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean SimpleJSON.JSONArray/<GetEnumerator>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__14_MoveNext_m947B58D05735AFF7C723222F67101AB1C2906285 (U3CGetEnumeratorU3Ed__14_t22EB1EFD5755C028CBDE228791C05AB3F0BAEF32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB1C31B2A291986F6CD5A79C9F75196088363BF2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m44F4D4F7899D0688C1E68E1457EBDBC2D26F91CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2ABBF46AA2F1090503EFFF7B8ECCD8FB679D0168_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* V_2 = NULL;
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* V_3 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0084:
			{// begin fault (depth: 1)
				U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_mAA4705B1AC76B61F874E5BBF6FBEE53060A31581(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_1 = __this->___U3CU3E4__this_2;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_0019_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_0059_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_008b;
			}

IL_0019_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// foreach(JSONNode N in m_List)
				JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_4 = V_2;
				NullCheck(L_4);
				List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_5 = L_4->___m_List_0;
				NullCheck(L_5);
				Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA L_6;
				L_6 = List_1_GetEnumerator_m2ABBF46AA2F1090503EFFF7B8ECCD8FB679D0168(L_5, List_1_GetEnumerator_m2ABBF46AA2F1090503EFFF7B8ECCD8FB679D0168_RuntimeMethod_var);
				__this->___U3CU3E7__wrap1_3 = L_6;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1_3))->____list_0), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1_3))->____current_3), (void*)NULL);
				#endif
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_0061_1;
			}

IL_003b_1:
			{
				// foreach(JSONNode N in m_List)
				Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA* L_7 = (&__this->___U3CU3E7__wrap1_3);
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_8;
				L_8 = Enumerator_get_Current_m44F4D4F7899D0688C1E68E1457EBDBC2D26F91CC_inline(L_7, Enumerator_get_Current_m44F4D4F7899D0688C1E68E1457EBDBC2D26F91CC_RuntimeMethod_var);
				V_3 = L_8;
				// yield return N;
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_9 = V_3;
				__this->___U3CU3E2__current_1 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_008b;
			}

IL_0059_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_0061_1:
			{
				// foreach(JSONNode N in m_List)
				Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA* L_10 = (&__this->___U3CU3E7__wrap1_3);
				bool L_11;
				L_11 = Enumerator_MoveNext_mB1C31B2A291986F6CD5A79C9F75196088363BF2D(L_10, Enumerator_MoveNext_mB1C31B2A291986F6CD5A79C9F75196088363BF2D_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally1_mD023C52E80D93CC663C4631B7DA7622F90245F2F(__this, NULL);
				Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA* L_12 = (&__this->___U3CU3E7__wrap1_3);
				il2cpp_codegen_initobj(L_12, sizeof(Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA));
				// }
				V_0 = (bool)0;
				goto IL_008b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008b:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Void SimpleJSON.JSONArray/<GetEnumerator>d__14::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally1_mD023C52E80D93CC663C4631B7DA7622F90245F2F (U3CGetEnumeratorU3Ed__14_t22EB1EFD5755C028CBDE228791C05AB3F0BAEF32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE0AEC0BF430B01595C081CE7115C6CBE413D16D0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA* L_0 = (&__this->___U3CU3E7__wrap1_3);
		Enumerator_Dispose_mE0AEC0BF430B01595C081CE7115C6CBE413D16D0(L_0, Enumerator_Dispose_mE0AEC0BF430B01595C081CE7115C6CBE413D16D0_RuntimeMethod_var);
		return;
	}
}
// System.Object SimpleJSON.JSONArray/<GetEnumerator>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA54A3F4214EEBBE54A66061A71AFDAA1AF59BF36 (U3CGetEnumeratorU3Ed__14_t22EB1EFD5755C028CBDE228791C05AB3F0BAEF32* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONArray/<GetEnumerator>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_mEDE7E4924B40F9B6A73564C268F0305731C32AE2 (U3CGetEnumeratorU3Ed__14_t22EB1EFD5755C028CBDE228791C05AB3F0BAEF32* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_mEDE7E4924B40F9B6A73564C268F0305731C32AE2_RuntimeMethod_var)));
	}
}
// System.Object SimpleJSON.JSONArray/<GetEnumerator>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_get_Current_mFA5F60F8C32094F883A0ED6C8ED055078CB5F5B3 (U3CGetEnumeratorU3Ed__14_t22EB1EFD5755C028CBDE228791C05AB3F0BAEF32* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONClass_get_Item_m67CF5E8F0633C18745B79DD767D4D3539DCEB84B (JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* __this, String_t* ___0_aKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mFFD3A96BCF327EA058B849F1973D14E1BB173C8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Dict.ContainsKey(aKey))
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_0 = __this->___m_Dict_0;
		String_t* L_1 = ___0_aKey;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693(L_0, L_1, Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return m_Dict[aKey];
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_3 = __this->___m_Dict_0;
		String_t* L_4 = ___0_aKey;
		NullCheck(L_3);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_5;
		L_5 = Dictionary_2_get_Item_mFFD3A96BCF327EA058B849F1973D14E1BB173C8B(L_3, L_4, Dictionary_2_get_Item_mFFD3A96BCF327EA058B849F1973D14E1BB173C8B_RuntimeMethod_var);
		return L_5;
	}

IL_001b:
	{
		// return new JSONLazyCreator(this, aKey);
		String_t* L_6 = ___0_aKey;
		JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* L_7 = (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00*)il2cpp_codegen_object_new(JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		JSONLazyCreator__ctor_mF29014985A3ABE849B34039EAA68BF363508438A(L_7, __this, L_6, NULL);
		return L_7;
	}
}
// System.Void SimpleJSON.JSONClass::set_Item(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONClass_set_Item_m94179A22A86087189BAF1933FB411357377DB13F (JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* __this, String_t* ___0_aKey, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m647A845263DF322FB4262AE7C9D120FAC128C8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m6D37E9D9CD14A99AC08894824FE5F3D82B9CD62A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Dict.ContainsKey(aKey))
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_0 = __this->___m_Dict_0;
		String_t* L_1 = ___0_aKey;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693(L_0, L_1, Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// m_Dict[aKey] = value;
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_3 = __this->___m_Dict_0;
		String_t* L_4 = ___0_aKey;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_5 = ___1_value;
		NullCheck(L_3);
		Dictionary_2_set_Item_m6D37E9D9CD14A99AC08894824FE5F3D82B9CD62A(L_3, L_4, L_5, Dictionary_2_set_Item_m6D37E9D9CD14A99AC08894824FE5F3D82B9CD62A_RuntimeMethod_var);
		return;
	}

IL_001c:
	{
		// m_Dict.Add(aKey,value);
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_6 = __this->___m_Dict_0;
		String_t* L_7 = ___0_aKey;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_8 = ___1_value;
		NullCheck(L_6);
		Dictionary_2_Add_m647A845263DF322FB4262AE7C9D120FAC128C8B6(L_6, L_7, L_8, Dictionary_2_Add_m647A845263DF322FB4262AE7C9D120FAC128C8B6_RuntimeMethod_var);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONClass_get_Item_m616F449EEC8ACE2EFD3CC9CCB84BC83B1C87B93A (JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* __this, int32_t ___0_aIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_mBC7A395153DA1692C8CA60F1654B81489EC04DF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (aIndex < 0 || aIndex >= m_Dict.Count)
		int32_t L_0 = ___0_aIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___0_aIndex;
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_2 = __this->___m_Dict_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17(L_2, Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		// return null;
		return (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)NULL;
	}

IL_0014:
	{
		// return m_Dict.ElementAt(aIndex).Value;
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_4 = __this->___m_Dict_0;
		int32_t L_5 = ___0_aIndex;
		KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C L_6;
		L_6 = Enumerable_ElementAt_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_mBC7A395153DA1692C8CA60F1654B81489EC04DF3(L_4, L_5, Enumerable_ElementAt_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_mBC7A395153DA1692C8CA60F1654B81489EC04DF3_RuntimeMethod_var);
		V_0 = L_6;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_7;
		L_7 = KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_inline((&V_0), KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void SimpleJSON.JSONClass::set_Item(System.Int32,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONClass_set_Item_m0CCC48E81582CE33703963C3D213B9C2D0F65C13 (JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* __this, int32_t ___0_aIndex, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m6D37E9D9CD14A99AC08894824FE5F3D82B9CD62A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_mBC7A395153DA1692C8CA60F1654B81489EC04DF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (aIndex < 0 || aIndex >= m_Dict.Count)
		int32_t L_0 = ___0_aIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___0_aIndex;
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_2 = __this->___m_Dict_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17(L_2, Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0013;
		}
	}

IL_0012:
	{
		// return;
		return;
	}

IL_0013:
	{
		// string key = m_Dict.ElementAt(aIndex).Key;
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_4 = __this->___m_Dict_0;
		int32_t L_5 = ___0_aIndex;
		KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C L_6;
		L_6 = Enumerable_ElementAt_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_mBC7A395153DA1692C8CA60F1654B81489EC04DF3(L_4, L_5, Enumerable_ElementAt_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_mBC7A395153DA1692C8CA60F1654B81489EC04DF3_RuntimeMethod_var);
		V_1 = L_6;
		String_t* L_7;
		L_7 = KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_inline((&V_1), KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_RuntimeMethod_var);
		V_0 = L_7;
		// m_Dict[key] = value;
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_8 = __this->___m_Dict_0;
		String_t* L_9 = V_0;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_10 = ___1_value;
		NullCheck(L_8);
		Dictionary_2_set_Item_m6D37E9D9CD14A99AC08894824FE5F3D82B9CD62A(L_8, L_9, L_10, Dictionary_2_set_Item_m6D37E9D9CD14A99AC08894824FE5F3D82B9CD62A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 SimpleJSON.JSONClass::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONClass_get_Count_mE798709087A472F72D8F0DBE2A8221FAA0997D5E (JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return m_Dict.Count; }
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_0 = __this->___m_Dict_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17(L_0, Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONClass::Add(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONClass_Add_m0879DB8D75DDEA53A4716453637C1523C3C0EC89 (JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* __this, String_t* ___0_aKey, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___1_aItem, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m647A845263DF322FB4262AE7C9D120FAC128C8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m6D37E9D9CD14A99AC08894824FE5F3D82B9CD62A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!string.IsNullOrEmpty(aKey))
		String_t* L_0 = ___0_aKey;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0032;
		}
	}
	{
		// if (m_Dict.ContainsKey(aKey))
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_2 = __this->___m_Dict_0;
		String_t* L_3 = ___0_aKey;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693(L_2, L_3, Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// m_Dict[aKey] = aItem;
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_5 = __this->___m_Dict_0;
		String_t* L_6 = ___0_aKey;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_7 = ___1_aItem;
		NullCheck(L_5);
		Dictionary_2_set_Item_m6D37E9D9CD14A99AC08894824FE5F3D82B9CD62A(L_5, L_6, L_7, Dictionary_2_set_Item_m6D37E9D9CD14A99AC08894824FE5F3D82B9CD62A_RuntimeMethod_var);
		return;
	}

IL_0024:
	{
		// m_Dict.Add(aKey, aItem);
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_8 = __this->___m_Dict_0;
		String_t* L_9 = ___0_aKey;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_10 = ___1_aItem;
		NullCheck(L_8);
		Dictionary_2_Add_m647A845263DF322FB4262AE7C9D120FAC128C8B6(L_8, L_9, L_10, Dictionary_2_Add_m647A845263DF322FB4262AE7C9D120FAC128C8B6_RuntimeMethod_var);
		return;
	}

IL_0032:
	{
		// m_Dict.Add(Guid.NewGuid().ToString(), aItem);
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_11 = __this->___m_Dict_0;
		Guid_t L_12;
		L_12 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_12;
		String_t* L_13;
		L_13 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_14 = ___1_aItem;
		NullCheck(L_11);
		Dictionary_2_Add_m647A845263DF322FB4262AE7C9D120FAC128C8B6(L_11, L_13, L_14, Dictionary_2_Add_m647A845263DF322FB4262AE7C9D120FAC128C8B6_RuntimeMethod_var);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONClass::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONClass_Remove_mB6F75BF4442DA177178EB3DE6A5F1744AAAED4FF (JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* __this, String_t* ___0_aKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m76681FCFCB5A12781F4025FC31BE3FF70F1C6470_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mFFD3A96BCF327EA058B849F1973D14E1BB173C8B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_Dict.ContainsKey(aKey))
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_0 = __this->___m_Dict_0;
		String_t* L_1 = ___0_aKey;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693(L_0, L_1, Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return null;
		return (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)NULL;
	}

IL_0010:
	{
		// JSONNode tmp = m_Dict[aKey];
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_3 = __this->___m_Dict_0;
		String_t* L_4 = ___0_aKey;
		NullCheck(L_3);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_5;
		L_5 = Dictionary_2_get_Item_mFFD3A96BCF327EA058B849F1973D14E1BB173C8B(L_3, L_4, Dictionary_2_get_Item_mFFD3A96BCF327EA058B849F1973D14E1BB173C8B_RuntimeMethod_var);
		// m_Dict.Remove(aKey);
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_6 = __this->___m_Dict_0;
		String_t* L_7 = ___0_aKey;
		NullCheck(L_6);
		bool L_8;
		L_8 = Dictionary_2_Remove_m76681FCFCB5A12781F4025FC31BE3FF70F1C6470(L_6, L_7, Dictionary_2_Remove_m76681FCFCB5A12781F4025FC31BE3FF70F1C6470_RuntimeMethod_var);
		// return tmp;
		return L_5;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONClass::Remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONClass_Remove_mBB678D2AE8BAF7AF2DAA1A3CE096B2BAAD1A4A94 (JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* __this, int32_t ___0_aIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m76681FCFCB5A12781F4025FC31BE3FF70F1C6470_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_mBC7A395153DA1692C8CA60F1654B81489EC04DF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (aIndex < 0 || aIndex >= m_Dict.Count)
		int32_t L_0 = ___0_aIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___0_aIndex;
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_2 = __this->___m_Dict_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17(L_2, Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		// return null;
		return (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)NULL;
	}

IL_0014:
	{
		// var item = m_Dict.ElementAt(aIndex);
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_4 = __this->___m_Dict_0;
		int32_t L_5 = ___0_aIndex;
		KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C L_6;
		L_6 = Enumerable_ElementAt_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_mBC7A395153DA1692C8CA60F1654B81489EC04DF3(L_4, L_5, Enumerable_ElementAt_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_mBC7A395153DA1692C8CA60F1654B81489EC04DF3_RuntimeMethod_var);
		V_0 = L_6;
		// m_Dict.Remove(item.Key);
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_7 = __this->___m_Dict_0;
		String_t* L_8;
		L_8 = KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_inline((&V_0), KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_RuntimeMethod_var);
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_Remove_m76681FCFCB5A12781F4025FC31BE3FF70F1C6470(L_7, L_8, Dictionary_2_Remove_m76681FCFCB5A12781F4025FC31BE3FF70F1C6470_RuntimeMethod_var);
		// return item.Value;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_10;
		L_10 = KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_inline((&V_0), KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var);
		return L_10;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONClass::Remove(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONClass_Remove_mFC97B4A39EBF8103DD15D83BBBDFF1B94E69F25B (JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* __this, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___0_aNode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m76681FCFCB5A12781F4025FC31BE3FF70F1C6470_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_m255485ADF36092873EEDC8ADF3E189101BAC11B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_m96A5D28115800EB612CD61C6729DCB2A2B6EAD0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t8A99FF3F64B7CF9CFC4EE2DF270BD1703B76DC50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CRemoveU3Eb__0_mEDB1940B888C59CD109F08DF93FF6DA4937BCC93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_t0CD4D234D5CCC8C58416C234C9B2E2B4C790027C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass12_0_t0CD4D234D5CCC8C58416C234C9B2E2B4C790027C* V_0 = NULL;
	KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C V_1;
	memset((&V_1), 0, sizeof(V_1));
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		U3CU3Ec__DisplayClass12_0_t0CD4D234D5CCC8C58416C234C9B2E2B4C790027C* L_0 = (U3CU3Ec__DisplayClass12_0_t0CD4D234D5CCC8C58416C234C9B2E2B4C790027C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_t0CD4D234D5CCC8C58416C234C9B2E2B4C790027C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass12_0__ctor_mC8CA8CA8A503DEB31D4C3F8A3497980621FD9AB0(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass12_0_t0CD4D234D5CCC8C58416C234C9B2E2B4C790027C* L_1 = V_0;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_2 = ___0_aNode;
		NullCheck(L_1);
		L_1->___aNode_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___aNode_0), (void*)L_2);
	}
	try
	{// begin try (depth: 1)
		// var item = m_Dict.Where(k => k.Value == aNode).First();
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_3 = __this->___m_Dict_0;
		U3CU3Ec__DisplayClass12_0_t0CD4D234D5CCC8C58416C234C9B2E2B4C790027C* L_4 = V_0;
		Func_2_t8A99FF3F64B7CF9CFC4EE2DF270BD1703B76DC50* L_5 = (Func_2_t8A99FF3F64B7CF9CFC4EE2DF270BD1703B76DC50*)il2cpp_codegen_object_new(Func_2_t8A99FF3F64B7CF9CFC4EE2DF270BD1703B76DC50_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m6FE32D0006D2D3129CDC46B55635C4D205C3FDBF(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass12_0_U3CRemoveU3Eb__0_mEDB1940B888C59CD109F08DF93FF6DA4937BCC93_RuntimeMethod_var), NULL);
		RuntimeObject* L_6;
		L_6 = Enumerable_Where_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_m96A5D28115800EB612CD61C6729DCB2A2B6EAD0D(L_3, L_5, Enumerable_Where_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_m96A5D28115800EB612CD61C6729DCB2A2B6EAD0D_RuntimeMethod_var);
		KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C L_7;
		L_7 = Enumerable_First_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_m255485ADF36092873EEDC8ADF3E189101BAC11B9(L_6, Enumerable_First_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_m255485ADF36092873EEDC8ADF3E189101BAC11B9_RuntimeMethod_var);
		V_1 = L_7;
		// m_Dict.Remove(item.Key);
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_8 = __this->___m_Dict_0;
		String_t* L_9;
		L_9 = KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_inline((&V_1), KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_RuntimeMethod_var);
		NullCheck(L_8);
		bool L_10;
		L_10 = Dictionary_2_Remove_m76681FCFCB5A12781F4025FC31BE3FF70F1C6470(L_8, L_9, Dictionary_2_Remove_m76681FCFCB5A12781F4025FC31BE3FF70F1C6470_RuntimeMethod_var);
		// return aNode;
		U3CU3Ec__DisplayClass12_0_t0CD4D234D5CCC8C58416C234C9B2E2B4C790027C* L_11 = V_0;
		NullCheck(L_11);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_12 = L_11->___aNode_0;
		V_2 = L_12;
		goto IL_004b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0046;
		}
		throw e;
	}

CATCH_0046:
	{// begin catch(System.Object)
		// catch
		// return null;
		V_2 = (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004b;
	}// end catch (depth: 1)

IL_004b:
	{
		// }
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_13 = V_2;
		return L_13;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONClass::get_Childs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONClass_get_Childs_m5D14EC05F75F0EB233FA7B1341A8529761324AD7 (JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildsU3Ed__14_tA6C295FF7B8237948C446E56B9615B8A50CD1666_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cget_ChildsU3Ed__14_tA6C295FF7B8237948C446E56B9615B8A50CD1666* L_0 = (U3Cget_ChildsU3Ed__14_tA6C295FF7B8237948C446E56B9615B8A50CD1666*)il2cpp_codegen_object_new(U3Cget_ChildsU3Ed__14_tA6C295FF7B8237948C446E56B9615B8A50CD1666_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3Cget_ChildsU3Ed__14__ctor_m5AFF8B720D6B524F1036832E571E38EC7B62B012(L_0, ((int32_t)-2), NULL);
		U3Cget_ChildsU3Ed__14_tA6C295FF7B8237948C446E56B9615B8A50CD1666* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONClass::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONClass_GetEnumerator_m3BDEBD3F8780EE60FF24150679BC988549D2C077 (JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__15_t482A99DA90CF8B7AB4C624F718C52B0BAC0BE1C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumeratorU3Ed__15_t482A99DA90CF8B7AB4C624F718C52B0BAC0BE1C9* L_0 = (U3CGetEnumeratorU3Ed__15_t482A99DA90CF8B7AB4C624F718C52B0BAC0BE1C9*)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__15_t482A99DA90CF8B7AB4C624F718C52B0BAC0BE1C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetEnumeratorU3Ed__15__ctor_mEAE901E5EB04173D5343CCD03085D6E4F607BDFE(L_0, 0, NULL);
		U3CGetEnumeratorU3Ed__15_t482A99DA90CF8B7AB4C624F718C52B0BAC0BE1C9* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.String SimpleJSON.JSONClass::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONClass_ToString_m42BA66F2037F8A9429328003A9BA4DA507FA25A0 (JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mF7EC8BBAB3CD7EE5642E71681FBDB4A884B05780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m844831FF3F93A9E3EEDFFF0186465A21BA38BE18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5BE8E9A6A9A88CC3FF48EA3466675ED35B0CC160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m588061B1765C95AD6BDEC8EA8FBE37BDA51EAC5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// string result = "{";
		V_0 = _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
		// foreach (KeyValuePair<string, JSONNode> N in m_Dict)
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_0 = __this->___m_Dict_0;
		NullCheck(L_0);
		Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F L_1;
		L_1 = Dictionary_2_GetEnumerator_mF7EC8BBAB3CD7EE5642E71681FBDB4A884B05780(L_0, Dictionary_2_GetEnumerator_mF7EC8BBAB3CD7EE5642E71681FBDB4A884B05780_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m844831FF3F93A9E3EEDFFF0186465A21BA38BE18((&V_1), Enumerator_Dispose_m844831FF3F93A9E3EEDFFF0186465A21BA38BE18_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006f_1;
			}

IL_0014_1:
			{
				// foreach (KeyValuePair<string, JSONNode> N in m_Dict)
				KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C L_2;
				L_2 = Enumerator_get_Current_m588061B1765C95AD6BDEC8EA8FBE37BDA51EAC5E_inline((&V_1), Enumerator_get_Current_m588061B1765C95AD6BDEC8EA8FBE37BDA51EAC5E_RuntimeMethod_var);
				V_2 = L_2;
				// if (result.Length > 2)
				String_t* L_3 = V_0;
				NullCheck(L_3);
				int32_t L_4;
				L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
				if ((((int32_t)L_4) <= ((int32_t)2)))
				{
					goto IL_0031_1;
				}
			}
			{
				// result += ", ";
				String_t* L_5 = V_0;
				String_t* L_6;
				L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_5, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
				V_0 = L_6;
			}

IL_0031_1:
			{
				// result += "\"" + Escape(N.Key) + "\":" + N.Value.ToString();
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
				String_t* L_9 = V_0;
				NullCheck(L_8);
				ArrayElementTypeCheck (L_8, L_9);
				(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_9);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_8;
				NullCheck(L_10);
				ArrayElementTypeCheck (L_10, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
				String_t* L_12;
				L_12 = KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_inline((&V_2), KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_RuntimeMethod_var);
				String_t* L_13;
				L_13 = JSONNode_Escape_mB0171A2D48BF3B4D2841657153CFAE5DDB0781EB(L_12, NULL);
				NullCheck(L_11);
				ArrayElementTypeCheck (L_11, L_13);
				(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_13);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_11;
				NullCheck(L_14);
				ArrayElementTypeCheck (L_14, _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0);
				(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_16;
				L_16 = KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_inline((&V_2), KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var);
				NullCheck(L_16);
				String_t* L_17;
				L_17 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
				NullCheck(L_15);
				ArrayElementTypeCheck (L_15, L_17);
				(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_17);
				String_t* L_18;
				L_18 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_15, NULL);
				V_0 = L_18;
			}

IL_006f_1:
			{
				// foreach (KeyValuePair<string, JSONNode> N in m_Dict)
				bool L_19;
				L_19 = Enumerator_MoveNext_m5BE8E9A6A9A88CC3FF48EA3466675ED35B0CC160((&V_1), Enumerator_MoveNext_m5BE8E9A6A9A88CC3FF48EA3466675ED35B0CC160_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0088;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0088:
	{
		// result += "}";
		String_t* L_20 = V_0;
		String_t* L_21;
		L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_20, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		V_0 = L_21;
		// return result;
		String_t* L_22 = V_0;
		return L_22;
	}
}
// System.String SimpleJSON.JSONClass::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONClass_ToString_m8DDFA6DE700E3B832F4375F93095FE1475567CA4 (JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* __this, String_t* ___0_aPrefix, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mF7EC8BBAB3CD7EE5642E71681FBDB4A884B05780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m844831FF3F93A9E3EEDFFF0186465A21BA38BE18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5BE8E9A6A9A88CC3FF48EA3466675ED35B0CC160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m588061B1765C95AD6BDEC8EA8FBE37BDA51EAC5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17F69BD9415AEEFF5AF120DF2D45F20433804764);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1F27E109A350AB8D0134DF8C6D4A31841F7528B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABCEE7D26D32F1BD7A4AA729EDF28DEB5437540D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// string result = "{ ";
		V_0 = _stringLiteralABCEE7D26D32F1BD7A4AA729EDF28DEB5437540D;
		// foreach (KeyValuePair<string, JSONNode> N in m_Dict)
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_0 = __this->___m_Dict_0;
		NullCheck(L_0);
		Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F L_1;
		L_1 = Dictionary_2_GetEnumerator_mF7EC8BBAB3CD7EE5642E71681FBDB4A884B05780(L_0, Dictionary_2_GetEnumerator_mF7EC8BBAB3CD7EE5642E71681FBDB4A884B05780_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m844831FF3F93A9E3EEDFFF0186465A21BA38BE18((&V_1), Enumerator_Dispose_m844831FF3F93A9E3EEDFFF0186465A21BA38BE18_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008c_1;
			}

IL_0014_1:
			{
				// foreach (KeyValuePair<string, JSONNode> N in m_Dict)
				KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C L_2;
				L_2 = Enumerator_get_Current_m588061B1765C95AD6BDEC8EA8FBE37BDA51EAC5E_inline((&V_1), Enumerator_get_Current_m588061B1765C95AD6BDEC8EA8FBE37BDA51EAC5E_RuntimeMethod_var);
				V_2 = L_2;
				// if (result.Length > 3)
				String_t* L_3 = V_0;
				NullCheck(L_3);
				int32_t L_4;
				L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
				if ((((int32_t)L_4) <= ((int32_t)3)))
				{
					goto IL_0031_1;
				}
			}
			{
				// result += ", ";
				String_t* L_5 = V_0;
				String_t* L_6;
				L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_5, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
				V_0 = L_6;
			}

IL_0031_1:
			{
				// result += "\n" + aPrefix + "   ";
				String_t* L_7 = V_0;
				String_t* L_8 = ___0_aPrefix;
				String_t* L_9;
				L_9 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_7, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_8, _stringLiteral17F69BD9415AEEFF5AF120DF2D45F20433804764, NULL);
				V_0 = L_9;
				// result += "\"" + Escape(N.Key) + "\" : " + N.Value.ToString(aPrefix+"   ");
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
				String_t* L_12 = V_0;
				NullCheck(L_11);
				ArrayElementTypeCheck (L_11, L_12);
				(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_12);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_11;
				NullCheck(L_13);
				ArrayElementTypeCheck (L_13, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
				String_t* L_15;
				L_15 = KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_inline((&V_2), KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_RuntimeMethod_var);
				String_t* L_16;
				L_16 = JSONNode_Escape_mB0171A2D48BF3B4D2841657153CFAE5DDB0781EB(L_15, NULL);
				NullCheck(L_14);
				ArrayElementTypeCheck (L_14, L_16);
				(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_16);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_14;
				NullCheck(L_17);
				ArrayElementTypeCheck (L_17, _stringLiteralA1F27E109A350AB8D0134DF8C6D4A31841F7528B);
				(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralA1F27E109A350AB8D0134DF8C6D4A31841F7528B);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_19;
				L_19 = KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_inline((&V_2), KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var);
				String_t* L_20 = ___0_aPrefix;
				String_t* L_21;
				L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_20, _stringLiteral17F69BD9415AEEFF5AF120DF2D45F20433804764, NULL);
				NullCheck(L_19);
				String_t* L_22;
				L_22 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String SimpleJSON.JSONNode::ToString(System.String) */, L_19, L_21);
				NullCheck(L_18);
				ArrayElementTypeCheck (L_18, L_22);
				(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_22);
				String_t* L_23;
				L_23 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_18, NULL);
				V_0 = L_23;
			}

IL_008c_1:
			{
				// foreach (KeyValuePair<string, JSONNode> N in m_Dict)
				bool L_24;
				L_24 = Enumerator_MoveNext_m5BE8E9A6A9A88CC3FF48EA3466675ED35B0CC160((&V_1), Enumerator_MoveNext_m5BE8E9A6A9A88CC3FF48EA3466675ED35B0CC160_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_00a8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		// result += "\n" + aPrefix + "}";
		String_t* L_25 = V_0;
		String_t* L_26 = ___0_aPrefix;
		String_t* L_27;
		L_27 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_25, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_26, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		V_0 = L_27;
		// return result;
		String_t* L_28 = V_0;
		return L_28;
	}
}
// System.Void SimpleJSON.JSONClass::Serialize(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONClass_Serialize_mFAD8CDF0D5B6DA9DFF1F124A70900DAAE8EBED99 (JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_aWriter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mFFD3A96BCF327EA058B849F1973D14E1BB173C8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mC34C37FB4F2B2BF31B1A2272DD359B9583906548_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m45C7997DE0CBCFB8DADD49F9F386E64D0FC2A9BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m33C5058BDA9C45AE39B34D794C8ECCAECBC63378_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9EDC4585E7F0533CF1F399288AF36568460E03D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m2CDD38F5A524B531A536DF8F2485A39769287FC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD7467DC28A694D6149FDE71CDC7A8A00DEC0B71D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// aWriter.Write((byte)JSONBinaryTag.Class);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___0_aWriter;
		NullCheck(L_0);
		VirtualActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_0, (uint8_t)2);
		// aWriter.Write(m_Dict.Count);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___0_aWriter;
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_2 = __this->___m_Dict_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17(L_2, Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17_RuntimeMethod_var);
		NullCheck(L_1);
		VirtualActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_1, L_3);
		// foreach(string K in m_Dict.Keys)
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_4 = __this->___m_Dict_0;
		NullCheck(L_4);
		KeyCollection_tDE3ABC0784C3B1BCD31D575082F7C20EC70286B2* L_5;
		L_5 = Dictionary_2_get_Keys_mC34C37FB4F2B2BF31B1A2272DD359B9583906548(L_4, Dictionary_2_get_Keys_mC34C37FB4F2B2BF31B1A2272DD359B9583906548_RuntimeMethod_var);
		NullCheck(L_5);
		Enumerator_tD7467DC28A694D6149FDE71CDC7A8A00DEC0B71D L_6;
		L_6 = KeyCollection_GetEnumerator_m2CDD38F5A524B531A536DF8F2485A39769287FC4(L_5, KeyCollection_GetEnumerator_m2CDD38F5A524B531A536DF8F2485A39769287FC4_RuntimeMethod_var);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0057:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m45C7997DE0CBCFB8DADD49F9F386E64D0FC2A9BD((&V_0), Enumerator_Dispose_m45C7997DE0CBCFB8DADD49F9F386E64D0FC2A9BD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004c_1;
			}

IL_002b_1:
			{
				// foreach(string K in m_Dict.Keys)
				String_t* L_7;
				L_7 = Enumerator_get_Current_m9EDC4585E7F0533CF1F399288AF36568460E03D9_inline((&V_0), Enumerator_get_Current_m9EDC4585E7F0533CF1F399288AF36568460E03D9_RuntimeMethod_var);
				V_1 = L_7;
				// aWriter.Write(K);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_8 = ___0_aWriter;
				String_t* L_9 = V_1;
				NullCheck(L_8);
				VirtualActionInvoker1< String_t* >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_8, L_9);
				// m_Dict[K].Serialize(aWriter);
				Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_10 = __this->___m_Dict_0;
				String_t* L_11 = V_1;
				NullCheck(L_10);
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_12;
				L_12 = Dictionary_2_get_Item_mFFD3A96BCF327EA058B849F1973D14E1BB173C8B(L_10, L_11, Dictionary_2_get_Item_mFFD3A96BCF327EA058B849F1973D14E1BB173C8B_RuntimeMethod_var);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_13 = ___0_aWriter;
				NullCheck(L_12);
				VirtualActionInvoker1< BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* >::Invoke(28 /* System.Void SimpleJSON.JSONNode::Serialize(System.IO.BinaryWriter) */, L_12, L_13);
			}

IL_004c_1:
			{
				// foreach(string K in m_Dict.Keys)
				bool L_14;
				L_14 = Enumerator_MoveNext_m33C5058BDA9C45AE39B34D794C8ECCAECBC63378((&V_0), Enumerator_MoveNext_m33C5058BDA9C45AE39B34D794C8ECCAECBC63378_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_0065;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONClass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONClass__ctor_mC9311C3F888BDCAE8DB1A0485AD84A040A46AB99 (JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3039782D3F8D2BBEBABB511BC6FA48187E22008A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<string,JSONNode> m_Dict = new Dictionary<string,JSONNode>();
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_0 = (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33*)il2cpp_codegen_object_new(Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3039782D3F8D2BBEBABB511BC6FA48187E22008A(L_0, Dictionary_2__ctor_m3039782D3F8D2BBEBABB511BC6FA48187E22008A_RuntimeMethod_var);
		__this->___m_Dict_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Dict_0), (void*)L_0);
		JSONNode__ctor_m4019E01BCFB43E3848591C3E8C97534BA8BC6C49(__this, NULL);
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
// System.Void SimpleJSON.JSONClass/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mC8CA8CA8A503DEB31D4C3F8A3497980621FD9AB0 (U3CU3Ec__DisplayClass12_0_t0CD4D234D5CCC8C58416C234C9B2E2B4C790027C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean SimpleJSON.JSONClass/<>c__DisplayClass12_0::<Remove>b__0(System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass12_0_U3CRemoveU3Eb__0_mEDB1940B888C59CD109F08DF93FF6DA4937BCC93 (U3CU3Ec__DisplayClass12_0_t0CD4D234D5CCC8C58416C234C9B2E2B4C790027C* __this, KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C ___0_k, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var item = m_Dict.Where(k => k.Value == aNode).First();
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0;
		L_0 = KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_inline((&___0_k), KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_1 = __this->___aNode_0;
		bool L_2;
		L_2 = JSONNode_op_Equality_mA31C6AFF092A3758367FBB48E41900AF89D3EBFF(L_0, L_1, NULL);
		return L_2;
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
// System.Void SimpleJSON.JSONClass/<get_Childs>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__14__ctor_m5AFF8B720D6B524F1036832E571E38EC7B62B012 (U3Cget_ChildsU3Ed__14_tA6C295FF7B8237948C446E56B9615B8A50CD1666* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void SimpleJSON.JSONClass/<get_Childs>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__14_System_IDisposable_Dispose_m1E55D47D798BD834A007991D7348B6C63FE94CD5 (U3Cget_ChildsU3Ed__14_tA6C295FF7B8237948C446E56B9615B8A50CD1666* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3Cget_ChildsU3Ed__14_U3CU3Em__Finally1_mA2865122D8C9E08C9537C6F78C90A41FC732492E(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean SimpleJSON.JSONClass/<get_Childs>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ChildsU3Ed__14_MoveNext_m5E82F96C30091F192373DC42586448A897C03809 (U3Cget_ChildsU3Ed__14_tA6C295FF7B8237948C446E56B9615B8A50CD1666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mF7EC8BBAB3CD7EE5642E71681FBDB4A884B05780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5BE8E9A6A9A88CC3FF48EA3466675ED35B0CC160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m588061B1765C95AD6BDEC8EA8FBE37BDA51EAC5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* V_2 = NULL;
	KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_008a:
			{// begin fault (depth: 1)
				U3Cget_ChildsU3Ed__14_System_IDisposable_Dispose_m1E55D47D798BD834A007991D7348B6C63FE94CD5(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* L_1 = __this->___U3CU3E4__this_3;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_0019_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_005f_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0091;
			}

IL_0019_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// foreach(KeyValuePair<string,JSONNode> N in m_Dict)
				JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* L_4 = V_2;
				NullCheck(L_4);
				Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_5 = L_4->___m_Dict_0;
				NullCheck(L_5);
				Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F L_6;
				L_6 = Dictionary_2_GetEnumerator_mF7EC8BBAB3CD7EE5642E71681FBDB4A884B05780(L_5, Dictionary_2_GetEnumerator_mF7EC8BBAB3CD7EE5642E71681FBDB4A884B05780_RuntimeMethod_var);
				__this->___U3CU3E7__wrap1_4 = L_6;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1_4))->____dictionary_0), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3E7__wrap1_4))->____current_3))->___key_0), (void*)NULL);
				#endif
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3E7__wrap1_4))->____current_3))->___value_1), (void*)NULL);
				#endif
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_0067_1;
			}

IL_003b_1:
			{
				// foreach(KeyValuePair<string,JSONNode> N in m_Dict)
				Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F* L_7 = (&__this->___U3CU3E7__wrap1_4);
				KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C L_8;
				L_8 = Enumerator_get_Current_m588061B1765C95AD6BDEC8EA8FBE37BDA51EAC5E_inline(L_7, Enumerator_get_Current_m588061B1765C95AD6BDEC8EA8FBE37BDA51EAC5E_RuntimeMethod_var);
				V_3 = L_8;
				// yield return N.Value;
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_9;
				L_9 = KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_inline((&V_3), KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var);
				__this->___U3CU3E2__current_1 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_0091;
			}

IL_005f_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_0067_1:
			{
				// foreach(KeyValuePair<string,JSONNode> N in m_Dict)
				Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F* L_10 = (&__this->___U3CU3E7__wrap1_4);
				bool L_11;
				L_11 = Enumerator_MoveNext_m5BE8E9A6A9A88CC3FF48EA3466675ED35B0CC160(L_10, Enumerator_MoveNext_m5BE8E9A6A9A88CC3FF48EA3466675ED35B0CC160_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				U3Cget_ChildsU3Ed__14_U3CU3Em__Finally1_mA2865122D8C9E08C9537C6F78C90A41FC732492E(__this, NULL);
				Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F* L_12 = (&__this->___U3CU3E7__wrap1_4);
				il2cpp_codegen_initobj(L_12, sizeof(Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F));
				// }
				V_0 = (bool)0;
				goto IL_0091;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0091:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Void SimpleJSON.JSONClass/<get_Childs>d__14::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__14_U3CU3Em__Finally1_mA2865122D8C9E08C9537C6F78C90A41FC732492E (U3Cget_ChildsU3Ed__14_tA6C295FF7B8237948C446E56B9615B8A50CD1666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m844831FF3F93A9E3EEDFFF0186465A21BA38BE18_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F* L_0 = (&__this->___U3CU3E7__wrap1_4);
		Enumerator_Dispose_m844831FF3F93A9E3EEDFFF0186465A21BA38BE18(L_0, Enumerator_Dispose_m844831FF3F93A9E3EEDFFF0186465A21BA38BE18_RuntimeMethod_var);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONClass/<get_Childs>d__14::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* U3Cget_ChildsU3Ed__14_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_m17B03633869CDD27D13CD783F71640FA89DC40C4 (U3Cget_ChildsU3Ed__14_tA6C295FF7B8237948C446E56B9615B8A50CD1666* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONClass/<get_Childs>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__14_System_Collections_IEnumerator_Reset_m520AFD46463B615E9C855A72A9BA683F013A4A69 (U3Cget_ChildsU3Ed__14_tA6C295FF7B8237948C446E56B9615B8A50CD1666* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_ChildsU3Ed__14_System_Collections_IEnumerator_Reset_m520AFD46463B615E9C855A72A9BA683F013A4A69_RuntimeMethod_var)));
	}
}
// System.Object SimpleJSON.JSONClass/<get_Childs>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__14_System_Collections_IEnumerator_get_Current_m13D5120612666460C3933ADFAE0F127FACC1EAB0 (U3Cget_ChildsU3Ed__14_tA6C295FF7B8237948C446E56B9615B8A50CD1666* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONClass/<get_Childs>d__14::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__14_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m055F6990A500755A0484BF70D0FE9BE7CF46B3BE (U3Cget_ChildsU3Ed__14_tA6C295FF7B8237948C446E56B9615B8A50CD1666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildsU3Ed__14_tA6C295FF7B8237948C446E56B9615B8A50CD1666_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ChildsU3Ed__14_tA6C295FF7B8237948C446E56B9615B8A50CD1666* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_ChildsU3Ed__14_tA6C295FF7B8237948C446E56B9615B8A50CD1666* L_3 = (U3Cget_ChildsU3Ed__14_tA6C295FF7B8237948C446E56B9615B8A50CD1666*)il2cpp_codegen_object_new(U3Cget_ChildsU3Ed__14_tA6C295FF7B8237948C446E56B9615B8A50CD1666_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3Cget_ChildsU3Ed__14__ctor_m5AFF8B720D6B524F1036832E571E38EC7B62B012(L_3, 0, NULL);
		V_0 = L_3;
		U3Cget_ChildsU3Ed__14_tA6C295FF7B8237948C446E56B9615B8A50CD1666* L_4 = V_0;
		JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* L_5 = __this->___U3CU3E4__this_3;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_3), (void*)L_5);
	}

IL_0035:
	{
		U3Cget_ChildsU3Ed__14_tA6C295FF7B8237948C446E56B9615B8A50CD1666* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONClass/<get_Childs>d__14::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__14_System_Collections_IEnumerable_GetEnumerator_m6345121DA3E5AA1C73A361B8DF16D729B8443541 (U3Cget_ChildsU3Ed__14_tA6C295FF7B8237948C446E56B9615B8A50CD1666* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_ChildsU3Ed__14_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m055F6990A500755A0484BF70D0FE9BE7CF46B3BE(__this, NULL);
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
// System.Void SimpleJSON.JSONClass/<GetEnumerator>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__15__ctor_mEAE901E5EB04173D5343CCD03085D6E4F607BDFE (U3CGetEnumeratorU3Ed__15_t482A99DA90CF8B7AB4C624F718C52B0BAC0BE1C9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SimpleJSON.JSONClass/<GetEnumerator>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__15_System_IDisposable_Dispose_m5684CB6D8E62DED5E22824F701E22E1B31A6C8C9 (U3CGetEnumeratorU3Ed__15_t482A99DA90CF8B7AB4C624F718C52B0BAC0BE1C9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CGetEnumeratorU3Ed__15_U3CU3Em__Finally1_mCDDAED82011A170B981B24D18E40ED86FE0286E9(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean SimpleJSON.JSONClass/<GetEnumerator>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__15_MoveNext_m14652854BD0449466F926666349014C12860C971 (U3CGetEnumeratorU3Ed__15_t482A99DA90CF8B7AB4C624F718C52B0BAC0BE1C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mF7EC8BBAB3CD7EE5642E71681FBDB4A884B05780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5BE8E9A6A9A88CC3FF48EA3466675ED35B0CC160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m588061B1765C95AD6BDEC8EA8FBE37BDA51EAC5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* V_2 = NULL;
	KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0089:
			{// begin fault (depth: 1)
				U3CGetEnumeratorU3Ed__15_System_IDisposable_Dispose_m5684CB6D8E62DED5E22824F701E22E1B31A6C8C9(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* L_1 = __this->___U3CU3E4__this_2;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_0019_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_005e_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0090;
			}

IL_0019_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// foreach(KeyValuePair<string, JSONNode> N in m_Dict)
				JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* L_4 = V_2;
				NullCheck(L_4);
				Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_5 = L_4->___m_Dict_0;
				NullCheck(L_5);
				Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F L_6;
				L_6 = Dictionary_2_GetEnumerator_mF7EC8BBAB3CD7EE5642E71681FBDB4A884B05780(L_5, Dictionary_2_GetEnumerator_mF7EC8BBAB3CD7EE5642E71681FBDB4A884B05780_RuntimeMethod_var);
				__this->___U3CU3E7__wrap1_3 = L_6;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1_3))->____dictionary_0), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3E7__wrap1_3))->____current_3))->___key_0), (void*)NULL);
				#endif
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3E7__wrap1_3))->____current_3))->___value_1), (void*)NULL);
				#endif
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_0066_1;
			}

IL_003b_1:
			{
				// foreach(KeyValuePair<string, JSONNode> N in m_Dict)
				Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F* L_7 = (&__this->___U3CU3E7__wrap1_3);
				KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C L_8;
				L_8 = Enumerator_get_Current_m588061B1765C95AD6BDEC8EA8FBE37BDA51EAC5E_inline(L_7, Enumerator_get_Current_m588061B1765C95AD6BDEC8EA8FBE37BDA51EAC5E_RuntimeMethod_var);
				V_3 = L_8;
				// yield return N;
				KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C L_9 = V_3;
				KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C L_10 = L_9;
				RuntimeObject* L_11 = Box(KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_il2cpp_TypeInfo_var, &L_10);
				__this->___U3CU3E2__current_1 = L_11;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_0090;
			}

IL_005e_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_0066_1:
			{
				// foreach(KeyValuePair<string, JSONNode> N in m_Dict)
				Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F* L_12 = (&__this->___U3CU3E7__wrap1_3);
				bool L_13;
				L_13 = Enumerator_MoveNext_m5BE8E9A6A9A88CC3FF48EA3466675ED35B0CC160(L_12, Enumerator_MoveNext_m5BE8E9A6A9A88CC3FF48EA3466675ED35B0CC160_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_003b_1;
				}
			}
			{
				U3CGetEnumeratorU3Ed__15_U3CU3Em__Finally1_mCDDAED82011A170B981B24D18E40ED86FE0286E9(__this, NULL);
				Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F* L_14 = (&__this->___U3CU3E7__wrap1_3);
				il2cpp_codegen_initobj(L_14, sizeof(Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F));
				// }
				V_0 = (bool)0;
				goto IL_0090;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0090:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
// System.Void SimpleJSON.JSONClass/<GetEnumerator>d__15::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__15_U3CU3Em__Finally1_mCDDAED82011A170B981B24D18E40ED86FE0286E9 (U3CGetEnumeratorU3Ed__15_t482A99DA90CF8B7AB4C624F718C52B0BAC0BE1C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m844831FF3F93A9E3EEDFFF0186465A21BA38BE18_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F* L_0 = (&__this->___U3CU3E7__wrap1_3);
		Enumerator_Dispose_m844831FF3F93A9E3EEDFFF0186465A21BA38BE18(L_0, Enumerator_Dispose_m844831FF3F93A9E3EEDFFF0186465A21BA38BE18_RuntimeMethod_var);
		return;
	}
}
// System.Object SimpleJSON.JSONClass/<GetEnumerator>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDD2025C2F0D10902B2EB2379C29C259E646381E6 (U3CGetEnumeratorU3Ed__15_t482A99DA90CF8B7AB4C624F718C52B0BAC0BE1C9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONClass/<GetEnumerator>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__15_System_Collections_IEnumerator_Reset_m26A0F43003966C9A2D3F1EFD4C8D90141CD8A14A (U3CGetEnumeratorU3Ed__15_t482A99DA90CF8B7AB4C624F718C52B0BAC0BE1C9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__15_System_Collections_IEnumerator_Reset_m26A0F43003966C9A2D3F1EFD4C8D90141CD8A14A_RuntimeMethod_var)));
	}
}
// System.Object SimpleJSON.JSONClass/<GetEnumerator>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__15_System_Collections_IEnumerator_get_Current_m03B4F0C27B7FD5FA1BDD5BA9565BD702283A9D56 (U3CGetEnumeratorU3Ed__15_t482A99DA90CF8B7AB4C624F718C52B0BAC0BE1C9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.String SimpleJSON.JSONData::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONData_get_Value_m60C5B34FAABD9EFFE45EF4638ED1707BB938FAC9 (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Data; }
		String_t* L_0 = __this->___m_Data_0;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONData::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONData_set_Value_m1D83BB3CEAF2E0C0CD264AB6F2E966CB1786C3BA (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_Data = value; }
		String_t* L_0 = ___0_value;
		__this->___m_Data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_0), (void*)L_0);
		// set { m_Data = value; }
		return;
	}
}
// System.Void SimpleJSON.JSONData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONData__ctor_m7714426689BE0641F4646578D150977CC7CAD250 (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* __this, String_t* ___0_aData, const RuntimeMethod* method) 
{
	{
		// public JSONData(string aData)
		JSONNode__ctor_m4019E01BCFB43E3848591C3E8C97534BA8BC6C49(__this, NULL);
		// m_Data = aData;
		String_t* L_0 = ___0_aData;
		__this->___m_Data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONData::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONData__ctor_m60C3CC6E9D3EF6EC7085B2227CA19FD672326E25 (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* __this, float ___0_aData, const RuntimeMethod* method) 
{
	{
		// public JSONData(float aData)
		JSONNode__ctor_m4019E01BCFB43E3848591C3E8C97534BA8BC6C49(__this, NULL);
		// AsFloat = aData;
		float L_0 = ___0_aData;
		VirtualActionInvoker1< float >::Invoke(21 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, __this, L_0);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONData::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONData__ctor_m576E0B5A3F123F672181AF9DDB2080781BBEC036 (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* __this, double ___0_aData, const RuntimeMethod* method) 
{
	{
		// public JSONData(double aData)
		JSONNode__ctor_m4019E01BCFB43E3848591C3E8C97534BA8BC6C49(__this, NULL);
		// AsDouble = aData;
		double L_0 = ___0_aData;
		VirtualActionInvoker1< double >::Invoke(23 /* System.Void SimpleJSON.JSONNode::set_AsDouble(System.Double) */, __this, L_0);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONData::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONData__ctor_mD7041328B2C97B646B552708140A508112876AD3 (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* __this, bool ___0_aData, const RuntimeMethod* method) 
{
	{
		// public JSONData(bool aData)
		JSONNode__ctor_m4019E01BCFB43E3848591C3E8C97534BA8BC6C49(__this, NULL);
		// AsBool = aData;
		bool L_0 = ___0_aData;
		VirtualActionInvoker1< bool >::Invoke(25 /* System.Void SimpleJSON.JSONNode::set_AsBool(System.Boolean) */, __this, L_0);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONData::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONData__ctor_m44327F17DDF60BF59C22174562BC90DB599877C5 (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* __this, int32_t ___0_aData, const RuntimeMethod* method) 
{
	{
		// public JSONData(int aData)
		JSONNode__ctor_m4019E01BCFB43E3848591C3E8C97534BA8BC6C49(__this, NULL);
		// AsInt = aData;
		int32_t L_0 = ___0_aData;
		VirtualActionInvoker1< int32_t >::Invoke(19 /* System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32) */, __this, L_0);
		// }
		return;
	}
}
// System.String SimpleJSON.JSONData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONData_ToString_mFC28C659D055990080A40C18360208AAF3BD0EC3 (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "\"" + Escape(m_Data) + "\"";
		String_t* L_0 = __this->___m_Data_0;
		String_t* L_1;
		L_1 = JSONNode_Escape_mB0171A2D48BF3B4D2841657153CFAE5DDB0781EB(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, L_1, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		return L_2;
	}
}
// System.String SimpleJSON.JSONData::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONData_ToString_mE03125C5740EB7E5B9857C8FD7733B385FF32A38 (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* __this, String_t* ___0_aPrefix, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "\"" + Escape(m_Data) + "\"";
		String_t* L_0 = __this->___m_Data_0;
		String_t* L_1;
		L_1 = JSONNode_Escape_mB0171A2D48BF3B4D2841657153CFAE5DDB0781EB(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, L_1, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		return L_2;
	}
}
// System.Void SimpleJSON.JSONData::Serialize(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONData_Serialize_m85F5D48FC38DAF8D85FE0DD68C5ED4D2E17B043E (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_aWriter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* V_0 = NULL;
	{
		// var tmp = new JSONData("");
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_0 = (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957*)il2cpp_codegen_object_new(JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONData__ctor_m7714426689BE0641F4646578D150977CC7CAD250(L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_0 = L_0;
		// tmp.AsInt = AsInt;
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_1 = V_0;
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 SimpleJSON.JSONNode::get_AsInt() */, __this);
		NullCheck(L_1);
		VirtualActionInvoker1< int32_t >::Invoke(19 /* System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32) */, L_1, L_2);
		// if (tmp.m_Data == this.m_Data)
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->___m_Data_0;
		String_t* L_5 = __this->___m_Data_0;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		// aWriter.Write((byte)JSONBinaryTag.IntValue);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_7 = ___0_aWriter;
		NullCheck(L_7);
		VirtualActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_7, (uint8_t)4);
		// aWriter.Write(AsInt);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_8 = ___0_aWriter;
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 SimpleJSON.JSONNode::get_AsInt() */, __this);
		NullCheck(L_8);
		VirtualActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_8, L_9);
		// return;
		return;
	}

IL_003e:
	{
		// tmp.AsFloat = AsFloat;
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_10 = V_0;
		float L_11;
		L_11 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, __this);
		NullCheck(L_10);
		VirtualActionInvoker1< float >::Invoke(21 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_10, L_11);
		// if (tmp.m_Data == this.m_Data)
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = L_12->___m_Data_0;
		String_t* L_14 = __this->___m_Data_0;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, L_14, NULL);
		if (!L_15)
		{
			goto IL_0071;
		}
	}
	{
		// aWriter.Write((byte)JSONBinaryTag.FloatValue);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_16 = ___0_aWriter;
		NullCheck(L_16);
		VirtualActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_16, (uint8_t)7);
		// aWriter.Write(AsFloat);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_17 = ___0_aWriter;
		float L_18;
		L_18 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, __this);
		NullCheck(L_17);
		VirtualActionInvoker1< float >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_17, L_18);
		// return;
		return;
	}

IL_0071:
	{
		// tmp.AsDouble = AsDouble;
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_19 = V_0;
		double L_20;
		L_20 = VirtualFuncInvoker0< double >::Invoke(22 /* System.Double SimpleJSON.JSONNode::get_AsDouble() */, __this);
		NullCheck(L_19);
		VirtualActionInvoker1< double >::Invoke(23 /* System.Void SimpleJSON.JSONNode::set_AsDouble(System.Double) */, L_19, L_20);
		// if (tmp.m_Data == this.m_Data)
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22 = L_21->___m_Data_0;
		String_t* L_23 = __this->___m_Data_0;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, L_23, NULL);
		if (!L_24)
		{
			goto IL_00a4;
		}
	}
	{
		// aWriter.Write((byte)JSONBinaryTag.DoubleValue);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_25 = ___0_aWriter;
		NullCheck(L_25);
		VirtualActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_25, (uint8_t)5);
		// aWriter.Write(AsDouble);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_26 = ___0_aWriter;
		double L_27;
		L_27 = VirtualFuncInvoker0< double >::Invoke(22 /* System.Double SimpleJSON.JSONNode::get_AsDouble() */, __this);
		NullCheck(L_26);
		VirtualActionInvoker1< double >::Invoke(13 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_26, L_27);
		// return;
		return;
	}

IL_00a4:
	{
		// tmp.AsBool = AsBool;
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_28 = V_0;
		bool L_29;
		L_29 = VirtualFuncInvoker0< bool >::Invoke(24 /* System.Boolean SimpleJSON.JSONNode::get_AsBool() */, __this);
		NullCheck(L_28);
		VirtualActionInvoker1< bool >::Invoke(25 /* System.Void SimpleJSON.JSONNode::set_AsBool(System.Boolean) */, L_28, L_29);
		// if (tmp.m_Data == this.m_Data)
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_30 = V_0;
		NullCheck(L_30);
		String_t* L_31 = L_30->___m_Data_0;
		String_t* L_32 = __this->___m_Data_0;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, L_32, NULL);
		if (!L_33)
		{
			goto IL_00d7;
		}
	}
	{
		// aWriter.Write((byte)JSONBinaryTag.BoolValue);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_34 = ___0_aWriter;
		NullCheck(L_34);
		VirtualActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_34, (uint8_t)6);
		// aWriter.Write(AsBool);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_35 = ___0_aWriter;
		bool L_36;
		L_36 = VirtualFuncInvoker0< bool >::Invoke(24 /* System.Boolean SimpleJSON.JSONNode::get_AsBool() */, __this);
		NullCheck(L_35);
		VirtualActionInvoker1< bool >::Invoke(7 /* System.Void System.IO.BinaryWriter::Write(System.Boolean) */, L_35, L_36);
		// return;
		return;
	}

IL_00d7:
	{
		// aWriter.Write((byte)JSONBinaryTag.Value);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_37 = ___0_aWriter;
		NullCheck(L_37);
		VirtualActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_37, (uint8_t)3);
		// aWriter.Write(m_Data);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_38 = ___0_aWriter;
		String_t* L_39 = __this->___m_Data_0;
		NullCheck(L_38);
		VirtualActionInvoker1< String_t* >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_38, L_39);
		// }
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
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator__ctor_mF05058E0DB09E0C896205345A7E6C44B6DE814D1 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___0_aNode, const RuntimeMethod* method) 
{
	{
		// public JSONLazyCreator(JSONNode aNode)
		JSONNode__ctor_m4019E01BCFB43E3848591C3E8C97534BA8BC6C49(__this, NULL);
		// m_Node = aNode;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = ___0_aNode;
		__this->___m_Node_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Node_0), (void*)L_0);
		// m_Key  = null;
		__this->___m_Key_1 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Key_1), (void*)(String_t*)NULL);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator__ctor_mF29014985A3ABE849B34039EAA68BF363508438A (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___0_aNode, String_t* ___1_aKey, const RuntimeMethod* method) 
{
	{
		// public JSONLazyCreator(JSONNode aNode, string aKey)
		JSONNode__ctor_m4019E01BCFB43E3848591C3E8C97534BA8BC6C49(__this, NULL);
		// m_Node = aNode;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = ___0_aNode;
		__this->___m_Node_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Node_0), (void*)L_0);
		// m_Key = aKey;
		String_t* L_1 = ___1_aKey;
		__this->___m_Key_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Key_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::Set(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_Set_m24AA532BD687BB2EF874506C2AE2B5E3DAC5D2FC (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___0_aVal, const RuntimeMethod* method) 
{
	{
		// if (m_Key == null)
		String_t* L_0 = __this->___m_Key_1;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// m_Node.Add(aVal);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_1 = __this->___m_Node_0;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_2 = ___0_aVal;
		NullCheck(L_1);
		VirtualActionInvoker1< JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_1, L_2);
		goto IL_0028;
	}

IL_0016:
	{
		// m_Node.Add(m_Key, aVal);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_3 = __this->___m_Node_0;
		String_t* L_4 = __this->___m_Key_1;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_5 = ___0_aVal;
		NullCheck(L_3);
		VirtualActionInvoker2< String_t*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_3, L_4, L_5);
	}

IL_0028:
	{
		// m_Node = null; // Be GC friendly.
		__this->___m_Node_0 = (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Node_0), (void*)(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)NULL);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONLazyCreator_get_Item_m7A1B287A320FA0562C0B3699CEED790506764A69 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, int32_t ___0_aIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JSONLazyCreator(this);
		JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* L_0 = (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00*)il2cpp_codegen_object_new(JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONLazyCreator__ctor_mF05058E0DB09E0C896205345A7E6C44B6DE814D1(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_Item(System.Int32,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_Item_mF630015DF5DBB739C9A4ACFDF5056281C8BDF6FB (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, int32_t ___0_aIndex, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* V_0 = NULL;
	{
		// var tmp = new JSONArray();
		JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_0 = (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25*)il2cpp_codegen_object_new(JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONArray__ctor_m19BBACE404D8C75AC41AC9CB4702C0943401D071(L_0, NULL);
		V_0 = L_0;
		// tmp.Add(value);
		JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_1 = V_0;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_2 = ___1_value;
		NullCheck(L_1);
		VirtualActionInvoker1< JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_1, L_2);
		// Set(tmp);
		JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_3 = V_0;
		JSONLazyCreator_Set_m24AA532BD687BB2EF874506C2AE2B5E3DAC5D2FC(__this, L_3, NULL);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONLazyCreator_get_Item_mD35D1D308100EDAECB6D3201DB71516B7372A59D (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, String_t* ___0_aKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JSONLazyCreator(this, aKey);
		String_t* L_0 = ___0_aKey;
		JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* L_1 = (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00*)il2cpp_codegen_object_new(JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONLazyCreator__ctor_mF29014985A3ABE849B34039EAA68BF363508438A(L_1, __this, L_0, NULL);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_Item(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_Item_m98BF666FD1B494F1D6B7F8B9BF9E91B23EB5A13A (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, String_t* ___0_aKey, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* V_0 = NULL;
	{
		// var tmp = new JSONClass();
		JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* L_0 = (JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA*)il2cpp_codegen_object_new(JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONClass__ctor_mC9311C3F888BDCAE8DB1A0485AD84A040A46AB99(L_0, NULL);
		V_0 = L_0;
		// tmp.Add(aKey, value);
		JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* L_1 = V_0;
		String_t* L_2 = ___0_aKey;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_3 = ___1_value;
		NullCheck(L_1);
		VirtualActionInvoker2< String_t*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_1, L_2, L_3);
		// Set(tmp);
		JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* L_4 = V_0;
		JSONLazyCreator_Set_m24AA532BD687BB2EF874506C2AE2B5E3DAC5D2FC(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::Add(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_Add_mA63214F55B284EDA904AD00727100FB09CB871F5 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___0_aItem, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* V_0 = NULL;
	{
		// var tmp = new JSONArray();
		JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_0 = (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25*)il2cpp_codegen_object_new(JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONArray__ctor_m19BBACE404D8C75AC41AC9CB4702C0943401D071(L_0, NULL);
		V_0 = L_0;
		// tmp.Add(aItem);
		JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_1 = V_0;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_2 = ___0_aItem;
		NullCheck(L_1);
		VirtualActionInvoker1< JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_1, L_2);
		// Set(tmp);
		JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_3 = V_0;
		JSONLazyCreator_Set_m24AA532BD687BB2EF874506C2AE2B5E3DAC5D2FC(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::Add(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_Add_m67D257C5A289AE055195B9C43A14462D663D07C9 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, String_t* ___0_aKey, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___1_aItem, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* V_0 = NULL;
	{
		// var tmp = new JSONClass();
		JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* L_0 = (JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA*)il2cpp_codegen_object_new(JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONClass__ctor_mC9311C3F888BDCAE8DB1A0485AD84A040A46AB99(L_0, NULL);
		V_0 = L_0;
		// tmp.Add(aKey, aItem);
		JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* L_1 = V_0;
		String_t* L_2 = ___0_aKey;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_3 = ___1_aItem;
		NullCheck(L_1);
		VirtualActionInvoker2< String_t*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_1, L_2, L_3);
		// Set(tmp);
		JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* L_4 = V_0;
		JSONLazyCreator_Set_m24AA532BD687BB2EF874506C2AE2B5E3DAC5D2FC(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::op_Equality(SimpleJSON.JSONLazyCreator,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_op_Equality_m97C12616353E1845F92B2623B8E9B57D655F2D03 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) 
{
	{
		// if (b == null)
		RuntimeObject* L_0 = ___1_b;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0005:
	{
		// return System.Object.ReferenceEquals(a,b);
		JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* L_1 = ___0_a;
		RuntimeObject* L_2 = ___1_b;
		return (bool)((((RuntimeObject*)(JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00*)L_1) == ((RuntimeObject*)(RuntimeObject*)L_2))? 1 : 0);
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::op_Inequality(SimpleJSON.JSONLazyCreator,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_op_Inequality_m6C2D418E8233FC92CF9076DAB502F1752A715330 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) 
{
	{
		// return !(a == b);
		JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* L_0 = ___0_a;
		RuntimeObject* L_1 = ___1_b;
		bool L_2;
		L_2 = JSONLazyCreator_op_Equality_m97C12616353E1845F92B2623B8E9B57D655F2D03(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_Equals_mF181668BE402D7D482CE599232F97DE92FDF2179 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		// if (obj == null)
		RuntimeObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0005:
	{
		// return System.Object.ReferenceEquals(this, obj);
		RuntimeObject* L_1 = ___0_obj;
		return (bool)((((RuntimeObject*)(JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00*)__this) == ((RuntimeObject*)(RuntimeObject*)L_1))? 1 : 0);
	}
}
// System.Int32 SimpleJSON.JSONLazyCreator::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONLazyCreator_GetHashCode_mC7D0B2DBC0106B27335742F52D53DD9E38816745 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, const RuntimeMethod* method) 
{
	{
		// return base.GetHashCode();
		int32_t L_0;
		L_0 = JSONNode_GetHashCode_m8928888D0A9512FCD23F887704F5189BC27DD94E(__this, NULL);
		return L_0;
	}
}
// System.String SimpleJSON.JSONLazyCreator::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONLazyCreator_ToString_mB87CB876B69A9512346C9A1FD6020151C7302541 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.String SimpleJSON.JSONLazyCreator::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONLazyCreator_ToString_m44A12277D4BC419F025345DCB91F3BA1BE34FCBE (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, String_t* ___0_aPrefix, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Int32 SimpleJSON.JSONLazyCreator::get_AsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONLazyCreator_get_AsInt_mB1EA50F2A634380AE559768D3249B11F077CD6CD (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* V_0 = NULL;
	{
		// JSONData tmp = new JSONData(0);
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_0 = (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957*)il2cpp_codegen_object_new(JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONData__ctor_m44327F17DDF60BF59C22174562BC90DB599877C5(L_0, 0, NULL);
		V_0 = L_0;
		// Set(tmp);
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_1 = V_0;
		JSONLazyCreator_Set_m24AA532BD687BB2EF874506C2AE2B5E3DAC5D2FC(__this, L_1, NULL);
		// return 0;
		return 0;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsInt_m72A5C1CCE4EAE8A8C6ED3F8DE486976C01205AA5 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* V_0 = NULL;
	{
		// JSONData tmp = new JSONData(value);
		int32_t L_0 = ___0_value;
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_1 = (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957*)il2cpp_codegen_object_new(JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONData__ctor_m44327F17DDF60BF59C22174562BC90DB599877C5(L_1, L_0, NULL);
		V_0 = L_1;
		// Set(tmp);
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_2 = V_0;
		JSONLazyCreator_Set_m24AA532BD687BB2EF874506C2AE2B5E3DAC5D2FC(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Single SimpleJSON.JSONLazyCreator::get_AsFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JSONLazyCreator_get_AsFloat_m326D1FE9201655FB0502951060345C42160383AF (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* V_0 = NULL;
	{
		// JSONData tmp = new JSONData(0.0f);
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_0 = (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957*)il2cpp_codegen_object_new(JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONData__ctor_m60C3CC6E9D3EF6EC7085B2227CA19FD672326E25(L_0, (0.0f), NULL);
		V_0 = L_0;
		// Set(tmp);
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_1 = V_0;
		JSONLazyCreator_Set_m24AA532BD687BB2EF874506C2AE2B5E3DAC5D2FC(__this, L_1, NULL);
		// return 0.0f;
		return (0.0f);
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsFloat(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsFloat_m6A44D8508B1BBCD0FB25787F74986323F46F7752 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* V_0 = NULL;
	{
		// JSONData tmp = new JSONData(value);
		float L_0 = ___0_value;
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_1 = (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957*)il2cpp_codegen_object_new(JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONData__ctor_m60C3CC6E9D3EF6EC7085B2227CA19FD672326E25(L_1, L_0, NULL);
		V_0 = L_1;
		// Set(tmp);
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_2 = V_0;
		JSONLazyCreator_Set_m24AA532BD687BB2EF874506C2AE2B5E3DAC5D2FC(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Double SimpleJSON.JSONLazyCreator::get_AsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JSONLazyCreator_get_AsDouble_m82DE3D757C820E25F0A37F16079D62D371051029 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* V_0 = NULL;
	{
		// JSONData tmp = new JSONData(0.0);
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_0 = (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957*)il2cpp_codegen_object_new(JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONData__ctor_m576E0B5A3F123F672181AF9DDB2080781BBEC036(L_0, (0.0), NULL);
		V_0 = L_0;
		// Set(tmp);
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_1 = V_0;
		JSONLazyCreator_Set_m24AA532BD687BB2EF874506C2AE2B5E3DAC5D2FC(__this, L_1, NULL);
		// return 0.0;
		return (0.0);
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsDouble_mAE2BCDE313E2AA00E07A6285E4F42ED03F3632A1 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, double ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* V_0 = NULL;
	{
		// JSONData tmp = new JSONData(value);
		double L_0 = ___0_value;
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_1 = (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957*)il2cpp_codegen_object_new(JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONData__ctor_m576E0B5A3F123F672181AF9DDB2080781BBEC036(L_1, L_0, NULL);
		V_0 = L_1;
		// Set(tmp);
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_2 = V_0;
		JSONLazyCreator_Set_m24AA532BD687BB2EF874506C2AE2B5E3DAC5D2FC(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::get_AsBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_get_AsBool_m1233E08208F064E3B1B0F049B67CE4A333F3C2AD (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* V_0 = NULL;
	{
		// JSONData tmp = new JSONData(false);
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_0 = (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957*)il2cpp_codegen_object_new(JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONData__ctor_mD7041328B2C97B646B552708140A508112876AD3(L_0, (bool)0, NULL);
		V_0 = L_0;
		// Set(tmp);
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_1 = V_0;
		JSONLazyCreator_Set_m24AA532BD687BB2EF874506C2AE2B5E3DAC5D2FC(__this, L_1, NULL);
		// return false;
		return (bool)0;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsBool_m249F537AB12381B70D79E7EE7699B3B8E9CF37B1 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* V_0 = NULL;
	{
		// JSONData tmp = new JSONData(value);
		bool L_0 = ___0_value;
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_1 = (JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957*)il2cpp_codegen_object_new(JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONData__ctor_mD7041328B2C97B646B552708140A508112876AD3(L_1, L_0, NULL);
		V_0 = L_1;
		// Set(tmp);
		JSONData_t01EBD01618C0EE17318E114AA458126AEFE22957* L_2 = V_0;
		JSONLazyCreator_Set_m24AA532BD687BB2EF874506C2AE2B5E3DAC5D2FC(__this, L_2, NULL);
		// }
		return;
	}
}
// SimpleJSON.JSONArray SimpleJSON.JSONLazyCreator::get_AsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* JSONLazyCreator_get_AsArray_m3F02A776AAC711B545C0FDCC49AAD92E0436667A (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* V_0 = NULL;
	{
		// JSONArray tmp = new JSONArray();
		JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_0 = (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25*)il2cpp_codegen_object_new(JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONArray__ctor_m19BBACE404D8C75AC41AC9CB4702C0943401D071(L_0, NULL);
		V_0 = L_0;
		// Set(tmp);
		JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_1 = V_0;
		JSONLazyCreator_Set_m24AA532BD687BB2EF874506C2AE2B5E3DAC5D2FC(__this, L_1, NULL);
		// return tmp;
		JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_2 = V_0;
		return L_2;
	}
}
// SimpleJSON.JSONClass SimpleJSON.JSONLazyCreator::get_AsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* JSONLazyCreator_get_AsObject_mAFE2008063C943EBDF8578F11BE9B7E8C6FD8844 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* V_0 = NULL;
	{
		// JSONClass tmp = new JSONClass();
		JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* L_0 = (JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA*)il2cpp_codegen_object_new(JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONClass__ctor_mC9311C3F888BDCAE8DB1A0485AD84A040A46AB99(L_0, NULL);
		V_0 = L_0;
		// Set(tmp);
		JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* L_1 = V_0;
		JSONLazyCreator_Set_m24AA532BD687BB2EF874506C2AE2B5E3DAC5D2FC(__this, L_1, NULL);
		// return tmp;
		JSONClass_tB5D190F028FB4BE46F71D21B47BD518481763EDA* L_2 = V_0;
		return L_2;
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
// SimpleJSON.JSONNode SimpleJSON.JSON::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSON_Parse_m17A641D2C20333467ED738EFBA32C76C117B2511 (String_t* ___0_aJSON, const RuntimeMethod* method) 
{
	{
		// return JSONNode.Parse(aJSON);
		String_t* L_0 = ___0_aJSON;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_1;
		L_1 = JSONNode_Parse_m3AC8E590DF695A3A545103AAE07B329CF673B67F(L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentKey_3;
		return L_0;
	}
}
