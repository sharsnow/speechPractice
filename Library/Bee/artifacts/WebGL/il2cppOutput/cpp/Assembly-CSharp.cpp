#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED;
// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket>
struct TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// DialogScript.Answer[]
struct AnswerU5BU5D_t2700C12A364EC7179FB478766A5C671D09EE8CB2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// DialogScript.Root[]
struct RootU5BU5D_t74998B10C69A1F8114B52D97241E88CB8DCCDFE3;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// DialogScript.Answer
struct Answer_t9E1ABEB9022A77B0D6B0C3416687CEF160D5A095;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// DialogScript.Bank
struct Bank_t0766ABB80BC48BEB38B0623283107EB383D99B4A;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Click
struct Click_tFCF989D896ED3DAAC090F422DA55BE73214DEF38;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Dialog
struct Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564;
// System.Exception
struct Exception_t;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IOAsyncCallback
struct IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB;
// DialogScript.ImportDB
struct ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microphone
struct Microphone_t77CC5DE152FF0D741D4A1CD62D6365472D0BAF3D;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PermissionsRationaleDialog
struct PermissionsRationaleDialog_t186CC93974A44DF49B0769C368BDAF48161B36DE;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// DialogScript.Root
struct Root_t0F848F4BAD7C37BA2438126547B6D234FD22D8E2;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// System.Net.Sockets.Socket/CachedEventArgs
struct CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C;
// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs
struct Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonMapper_tA76BEEAC5B69E3B93FD3902FB90C2E8E996F6071_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral017C645FE39911C872E1CE175C07C72E9BBCF596;
IL2CPP_EXTERN_C String_t* _stringLiteral114BCE5E07B2B89600E7B0C1E7991AC7281CDDA6;
IL2CPP_EXTERN_C String_t* _stringLiteral1370D986C229BBB526647A3302D381C77FAB77BC;
IL2CPP_EXTERN_C String_t* _stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305;
IL2CPP_EXTERN_C String_t* _stringLiteral2D1A62D3CE1CBE6BFE41CBBD23E7C45114FF2ED0;
IL2CPP_EXTERN_C String_t* _stringLiteral306582DEEE0E8D1D29AC557C2953EB74F9B68ED8;
IL2CPP_EXTERN_C String_t* _stringLiteral3159CB23C4C02FB27E5A63309F5017CB5677BF2F;
IL2CPP_EXTERN_C String_t* _stringLiteral316B1828EF8F0B1D8D0F7BEA83FD98327F592FA7;
IL2CPP_EXTERN_C String_t* _stringLiteral413E5AAB3595F715F96569108C80366D5A7A29C0;
IL2CPP_EXTERN_C String_t* _stringLiteral4D5A903E9358CC109EF0ECFDDF26248521114E62;
IL2CPP_EXTERN_C String_t* _stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4;
IL2CPP_EXTERN_C String_t* _stringLiteral704D758D06C19538B12BE10D6DE2F4DD47AFDC43;
IL2CPP_EXTERN_C String_t* _stringLiteral894DC2F11D897A2059A9D196CC3FE428EFD2B6C6;
IL2CPP_EXTERN_C String_t* _stringLiteral9B19C1B6BD1A7C3B2D9EF611DFABA9698B45A9D3;
IL2CPP_EXTERN_C String_t* _stringLiteral9C63FBCD8275B4D5EC4E82979C770CBE25B7A99C;
IL2CPP_EXTERN_C String_t* _stringLiteralCCEAA7D594ED83121125192D6C632560AB0BBA2C;
IL2CPP_EXTERN_C String_t* _stringLiteralD001008EDBD56D19221AC92F659E54C8B8036E92;
IL2CPP_EXTERN_C String_t* _stringLiteralD61A403A62E3B406C2482F9CD3ABA7CF782E649C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CUpdateU3Ed__14_t3983632F2292B74DFA2AF0ECDCA649150254216A_m1B6AAD28F5B159062336FB43D1C6255B02E23D30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E_m0CB37ADBD16243D3944DE771B1F13DDCD292BCD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_ToObject_TisBank_t0766ABB80BC48BEB38B0623283107EB383D99B4A_m442E3A8C843DB634F08361E2E3ED4307D36FED40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PermissionsRationaleDialog_DoMyWindow_mB873C2E12DBADA3EC5218711D6897C427E211BFB_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AnswerU5BU5D_t2700C12A364EC7179FB478766A5C671D09EE8CB2;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct RootU5BU5D_t74998B10C69A1F8114B52D97241E88CB8DCCDFE3;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// DialogScript.Answer
struct Answer_t9E1ABEB9022A77B0D6B0C3416687CEF160D5A095  : public RuntimeObject
{
	// System.String DialogScript.Answer::<answer>k__BackingField
	String_t* ___U3CanswerU3Ek__BackingField_0;
	// System.String DialogScript.Answer::<dir_qus>k__BackingField
	String_t* ___U3Cdir_qusU3Ek__BackingField_1;
};
struct Il2CppArrayBounds;

// DialogScript.Bank
struct Bank_t0766ABB80BC48BEB38B0623283107EB383D99B4A  : public RuntimeObject
{
	// System.String DialogScript.Bank::dict
	String_t* ___dict_0;
	// DialogScript.Root[] DialogScript.Bank::root
	RootU5BU5D_t74998B10C69A1F8114B52D97241E88CB8DCCDFE3* ___root_1;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564  : public RuntimeObject
{
};

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484  : public RuntimeObject
{
	// System.UInt32 System.Net.IPAddress::_addressOrScopeId
	uint32_t ____addressOrScopeId_8;
	// System.UInt16[] System.Net.IPAddress::_numbers
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____numbers_9;
	// System.String System.Net.IPAddress::_toString
	String_t* ____toString_10;
	// System.Int32 System.Net.IPAddress::_hashCode
	int32_t ____hashCode_11;
};

struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields
{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Any_5;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6None_7;
};

// DialogScript.Root
struct Root_t0F848F4BAD7C37BA2438126547B6D234FD22D8E2  : public RuntimeObject
{
	// System.String DialogScript.Root::<qus_no>k__BackingField
	String_t* ___U3Cqus_noU3Ek__BackingField_0;
	// System.String DialogScript.Root::<question>k__BackingField
	String_t* ___U3CquestionU3Ek__BackingField_1;
	// DialogScript.Answer[] DialogScript.Root::ans
	AnswerU5BU5D_t2700C12A364EC7179FB478766A5C671D09EE8CB2* ___ans_2;
};

// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E  : public RuntimeObject
{
	// System.Net.Sockets.Socket/CachedEventArgs System.Net.Sockets.Socket::_cachedTaskEventArgs
	CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C* ____cachedTaskEventArgs_6;
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_17;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_18;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_19;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_20;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_21;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_22;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_23;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE* ___m_Handle_24;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___seed_endpoint_25;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___ReadSem_26;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___WriteSem_27;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_28;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_29;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_30;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_31;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_32;
	// System.Int32 System.Net.Sockets.Socket::ID
	int32_t ___ID_33;
};

struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_StaticFields
{
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::AcceptCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___AcceptCompletedHandler_0;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::ReceiveCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___ReceiveCompletedHandler_1;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::SendCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___SendCompletedHandler_2;
	// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket> System.Net.Sockets.Socket::s_rentedSocketSentinel
	TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401* ___s_rentedSocketSentinel_3;
	// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs System.Net.Sockets.Socket::s_rentedInt32Sentinel
	Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9* ___s_rentedInt32Sentinel_4;
	// System.Threading.Tasks.Task`1<System.Int32> System.Net.Sockets.Socket::s_zeroTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_zeroTask_5;
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_10;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_11;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_PerfCountersEnabled
	bool ___s_PerfCountersEnabled_13;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___AcceptAsyncCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptCallback_35;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptReceiveCallback_36;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ConnectAsyncCallback_37;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginConnectCallback_38;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___DisconnectAsyncCallback_39;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginDisconnectCallback_40;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveAsyncCallback_41;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveCallback_42;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveGenericCallback_43;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveFromAsyncCallback_44;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveFromCallback_45;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendAsyncCallback_46;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginSendGenericCallback_47;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendToAsyncCallback_48;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB  : public EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564
{
	// System.Net.IPAddress System.Net.IPEndPoint::_address
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ____address_0;
	// System.Int32 System.Net.IPEndPoint::_port
	int32_t ____port_1;
};

struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_StaticFields
{
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___Any_2;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___IPv6Any_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// Dialog/<Update>d__14
struct U3CUpdateU3Ed__14_t3983632F2292B74DFA2AF0ECDCA649150254216A 
{
	// System.Int32 Dialog/<Update>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Dialog/<Update>d__14::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// Dialog Dialog/<Update>d__14::<>4__this
	Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* ___U3CU3E4__this_2;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.GUI/WindowFunction
struct WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Click
struct Click_tFCF989D896ED3DAAC090F422DA55BE73214DEF38  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent Click::upEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___upEvent_4;
	// UnityEngine.Events.UnityEvent Click::downEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___downEvent_5;
};

// Dialog
struct Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Dialog::qus
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___qus_6;
	// UnityEngine.UI.Text Dialog::ans1
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___ans1_7;
	// UnityEngine.UI.Text Dialog::ans2
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___ans2_8;
	// UnityEngine.UI.Text Dialog::ans3
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___ans3_9;
	// DialogScript.ImportDB Dialog::importDB
	ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* ___importDB_10;
	// UnityEngine.UI.Text Dialog::uiText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___uiText_12;
	// UnityEngine.GameObject Dialog::uiMicrophone
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___uiMicrophone_13;
	// System.Boolean Dialog::commit
	bool ___commit_14;
	// UnityEngine.UI.Text Dialog::test
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___test_15;
};

struct Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972_StaticFields
{
	// System.String Dialog::speechKey
	String_t* ___speechKey_4;
	// System.String Dialog::speechRegion
	String_t* ___speechRegion_5;
};

// DialogScript.ImportDB
struct ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// DialogScript.Bank DialogScript.ImportDB::bank
	Bank_t0766ABB80BC48BEB38B0623283107EB383D99B4A* ___bank_5;
	// DialogScript.Root DialogScript.ImportDB::root
	Root_t0F848F4BAD7C37BA2438126547B6D234FD22D8E2* ___root_6;
	// DialogScript.Answer DialogScript.ImportDB::answer
	Answer_t9E1ABEB9022A77B0D6B0C3416687CEF160D5A095* ___answer_7;
	// System.Int32 DialogScript.ImportDB::next
	int32_t ___next_8;
	// System.Net.Sockets.Socket DialogScript.ImportDB::clientSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___clientSocket_9;
	// System.String DialogScript.ImportDB::ServerIP
	String_t* ___ServerIP_10;
	// System.Int32 DialogScript.ImportDB::ServerPort
	int32_t ___ServerPort_11;
	// System.String DialogScript.ImportDB::question
	String_t* ___question_12;
	// System.String[] DialogScript.ImportDB::ans
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___ans_13;
	// System.String DialogScript.ImportDB::test
	String_t* ___test_14;
};

struct ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E_StaticFields
{
	// DialogScript.ImportDB DialogScript.ImportDB::_instance
	ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* ____instance_4;
};

// Microphone
struct Microphone_t77CC5DE152FF0D741D4A1CD62D6365472D0BAF3D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Microphone::dialog
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___dialog_4;
};

// PermissionsRationaleDialog
struct PermissionsRationaleDialog_t186CC93974A44DF49B0769C368BDAF48161B36DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean PermissionsRationaleDialog::windowOpen
	bool ___windowOpen_6;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// DialogScript.Root[]
struct RootU5BU5D_t74998B10C69A1F8114B52D97241E88CB8DCCDFE3  : public RuntimeArray
{
	ALIGN_FIELD (8) Root_t0F848F4BAD7C37BA2438126547B6D234FD22D8E2* m_Items[1];

	inline Root_t0F848F4BAD7C37BA2438126547B6D234FD22D8E2* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Root_t0F848F4BAD7C37BA2438126547B6D234FD22D8E2** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Root_t0F848F4BAD7C37BA2438126547B6D234FD22D8E2* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Root_t0F848F4BAD7C37BA2438126547B6D234FD22D8E2* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Root_t0F848F4BAD7C37BA2438126547B6D234FD22D8E2** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Root_t0F848F4BAD7C37BA2438126547B6D234FD22D8E2* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// DialogScript.Answer[]
struct AnswerU5BU5D_t2700C12A364EC7179FB478766A5C671D09EE8CB2  : public RuntimeArray
{
	ALIGN_FIELD (8) Answer_t9E1ABEB9022A77B0D6B0C3416687CEF160D5A095* m_Items[1];

	inline Answer_t9E1ABEB9022A77B0D6B0C3416687CEF160D5A095* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Answer_t9E1ABEB9022A77B0D6B0C3416687CEF160D5A095** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Answer_t9E1ABEB9022A77B0D6B0C3416687CEF160D5A095* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Answer_t9E1ABEB9022A77B0D6B0C3416687CEF160D5A095* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Answer_t9E1ABEB9022A77B0D6B0C3416687CEF160D5A095** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Answer_t9E1ABEB9022A77B0D6B0C3416687CEF160D5A095* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Dialog/<Update>d__14>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CUpdateU3Ed__14_t3983632F2292B74DFA2AF0ECDCA649150254216A_m1B6AAD28F5B159062336FB43D1C6255B02E23D30_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CUpdateU3Ed__14_t3983632F2292B74DFA2AF0ECDCA649150254216A* ___stateMachine0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T LitJson.JsonMapper::ToObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ToObject_TisRuntimeObject_m74DEEF047DC5A4F537D882BED0864AED1BB15FBA_gshared (String_t* ___json0, const RuntimeMethod* method) ;

// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// DialogScript.ImportDB DialogScript.ImportDB::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* ImportDB_get_Instance_mBFFC853A88DCC5E8CCBBB35BB5D958086E86064B (const RuntimeMethod* method) ;
// System.Boolean DialogScript.ImportDB::connectServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImportDB_connectServer_m195199671E7B7C6452C277CF13A2242A26AE3A02 (ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* __this, const RuntimeMethod* method) ;
// System.Void DialogScript.ImportDB::ConnectToPhp01()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImportDB_ConnectToPhp01_m4248BE7D38011DD31A700987122EA83DA5E5EB87 (ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Dialog/<Update>d__14>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CUpdateU3Ed__14_t3983632F2292B74DFA2AF0ECDCA649150254216A_m1B6AAD28F5B159062336FB43D1C6255B02E23D30 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CUpdateU3Ed__14_t3983632F2292B74DFA2AF0ECDCA649150254216A* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CUpdateU3Ed__14_t3983632F2292B74DFA2AF0ECDCA649150254216A*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CUpdateU3Ed__14_t3983632F2292B74DFA2AF0ECDCA649150254216A_m1B6AAD28F5B159062336FB43D1C6255B02E23D30_gshared)(__this, ___stateMachine0, method);
}
// System.Boolean DialogScript.ImportDB::checkAnswer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImportDB_checkAnswer_m67922BB23F261427C9CF08C62393E4C06FADDD3D (ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* __this, String_t* ___text0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void Dialog::getPresentDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dialog_getPresentDialog_m582D5578F780860DECBB82B24DFAD2235FEBC97A (Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549 (int32_t ___millisecondsTimeout0, const RuntimeMethod* method) ;
// System.Void Dialog::changeDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dialog_changeDialog_m4DDA60127BD5CB04A80D6384D8531F9EEF93051F (Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void Dialog/<Update>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateU3Ed__14_MoveNext_m861BFF81789C56364B6AAE98732F2BDFB7AFB8F6 (U3CUpdateU3Ed__14_t3983632F2292B74DFA2AF0ECDCA649150254216A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Dialog/<Update>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateU3Ed__14_SetStateMachine_mD2ED63ABD33BEDB884D788ADA5DBB12E47821A71 (U3CUpdateU3Ed__14_t3983632F2292B74DFA2AF0ECDCA649150254216A* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_m4A951E57C7DCCF95A0306240144CA2713F546526 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m26D18B144D3116398B9E9BECB0C4014F57DBE44B (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowFunction__ctor_m31D7B6C221D9A078AE5C8BA7C3BC0FA406EA7B71 (WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.GUI::ModalWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GUI_ModalWindow_m3D73EE4FC023C2BB2A555346BDC68A5C1599B61E (int32_t ___id0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___clientRect1, WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* ___func2, String_t* ___text3, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<DialogScript.ImportDB>()
inline ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* GameObject_AddComponent_TisImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E_m0CB37ADBD16243D3944DE771B1F13DDCD292BCD5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.String DialogScript.ImportDB::submitMsgToServer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ImportDB_submitMsgToServer_m40D7A504C8BEA21B36C87F1BC53811CDA5E31996 (ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* __this, String_t* ___msg0, const RuntimeMethod* method) ;
// T LitJson.JsonMapper::ToObject<DialogScript.Bank>(System.String)
inline Bank_t0766ABB80BC48BEB38B0623283107EB383D99B4A* JsonMapper_ToObject_TisBank_t0766ABB80BC48BEB38B0623283107EB383D99B4A_m442E3A8C843DB634F08361E2E3ED4307D36FED40 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  Bank_t0766ABB80BC48BEB38B0623283107EB383D99B4A* (*) (String_t*, const RuntimeMethod*))JsonMapper_ToObject_TisRuntimeObject_m74DEEF047DC5A4F537D882BED0864AED1BB15FBA_gshared)(___json0, method);
}
// System.String DialogScript.Root::get_qus_no()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Root_get_qus_no_m7CFDA33F5B9ABF94A39409F27A4EBD5BAE06B111_inline (Root_t0F848F4BAD7C37BA2438126547B6D234FD22D8E2* __this, const RuntimeMethod* method) ;
// System.Void DialogScript.ImportDB::setDialog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImportDB_setDialog_mF5A1E9A301D9E018612ADA748757C03520F5243F (ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* __this, String_t* ___tmp0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, int32_t ___addressFamily0, int32_t ___socketType1, int32_t ___protocolType2, const RuntimeMethod* method) ;
// System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPAddress_Parse_mF946F1810061D91C5A1A96FF9968F07138F3CE23 (String_t* ___ipString0, const RuntimeMethod* method) ;
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address0, int32_t ___port1, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Connect_m874A510F986F4D91446B2F53688D0BCFFE0A6BE1 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___remoteEP0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_Receive_m1D506714778D53C3EB7BBCB9155B8AEEF06FA91C (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Console::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Net.Sockets.Socket::get_Connected()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Socket_get_Connected_m6E61ADEB0124FB8D46AC1EDFDC268D3C9F7869C5_inline (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Encoding_GetBytes_mB83E04B37AFF32CAF180D0EE8FDA259E3338B018 (Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* __this, String_t* ___s0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_Send_m49D0DDE0AB4B18D76A014C6C190D2D0D8489619B (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.String DialogScript.ImportDB::acceptMsgs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ImportDB_acceptMsgs_m336AB822AA2CA486CE50D1C5B6FE61C10CB83B17 (ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String DialogScript.Answer::get_dir_qus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Answer_get_dir_qus_m56963FD7D12CA9738F228F5C3469F58A8607468B_inline (Answer_t9E1ABEB9022A77B0D6B0C3416687CEF160D5A095* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String DialogScript.Root::get_question()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Root_get_question_mFDF14DD164E50C7A44189D7A2B992632EE07E3D9_inline (Root_t0F848F4BAD7C37BA2438126547B6D234FD22D8E2* __this, const RuntimeMethod* method) ;
// System.String DialogScript.Answer::get_answer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Answer_get_answer_m6D51FA9BC42352248F5A97BE7FB1308728D523AA_inline (Answer_t9E1ABEB9022A77B0D6B0C3416687CEF160D5A095* __this, const RuntimeMethod* method) ;
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
// System.Void Click::OnMouseUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Click_OnMouseUp_mD5AEB2A7CF689F4B6A28F71224E6DFF63E356AA7 (Click_tFCF989D896ED3DAAC090F422DA55BE73214DEF38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B2_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B1_0 = NULL;
	{
		// Debug.Log("up");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305, NULL);
		// upEvent?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___upEvent_4;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Click::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Click_OnMouseDown_m877CCCA257D62EB8617B58DE93A478BCCBB52BAF (Click_tFCF989D896ED3DAAC090F422DA55BE73214DEF38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B2_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B1_0 = NULL;
	{
		// Debug.Log("down");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4, NULL);
		// downEvent?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___downEvent_5;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Click::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Click__ctor_m395B5FD36F7BDEB48737455EB2A8A53C06C132E1 (Click_tFCF989D896ED3DAAC090F422DA55BE73214DEF38* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Dialog::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dialog_Awake_mED0553D441C2AA284AFD51698D9E44E173586C4D (Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* __this, const RuntimeMethod* method) 
{
	{
		// importDB = ImportDB.Instance;
		ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* L_0;
		L_0 = ImportDB_get_Instance_mBFFC853A88DCC5E8CCBBB35BB5D958086E86064B(NULL);
		__this->___importDB_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___importDB_10), (void*)L_0);
		// importDB.connectServer();
		ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* L_1 = __this->___importDB_10;
		bool L_2;
		L_2 = ImportDB_connectServer_m195199671E7B7C6452C277CF13A2242A26AE3A02(L_1, NULL);
		// }
		return;
	}
}
// System.Void Dialog::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dialog_Start_m2DA0977934BE7B81B6007F29279B9E547771103C (Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* __this, const RuntimeMethod* method) 
{
	{
		// importDB.ConnectToPhp01();
		ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* L_0 = __this->___importDB_10;
		ImportDB_ConnectToPhp01_m4248BE7D38011DD31A700987122EA83DA5E5EB87(L_0, NULL);
		// uiMicrophone.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___uiMicrophone_13;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Dialog::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dialog_Update_m1FDCD2A85589BAD3731B49B2284B2EC192EBC385 (Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CUpdateU3Ed__14_t3983632F2292B74DFA2AF0ECDCA649150254216A_m1B6AAD28F5B159062336FB43D1C6255B02E23D30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CUpdateU3Ed__14_t3983632F2292B74DFA2AF0ECDCA649150254216A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CUpdateU3Ed__14_t3983632F2292B74DFA2AF0ECDCA649150254216A_m1B6AAD28F5B159062336FB43D1C6255B02E23D30(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CUpdateU3Ed__14_t3983632F2292B74DFA2AF0ECDCA649150254216A_m1B6AAD28F5B159062336FB43D1C6255B02E23D30_RuntimeMethod_var);
		return;
	}
}
// System.Void Dialog::changeDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dialog_changeDialog_m4DDA60127BD5CB04A80D6384D8531F9EEF93051F (Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B19C1B6BD1A7C3B2D9EF611DFABA9698B45A9D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// uiMicrophone.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___uiMicrophone_13;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// if(importDB.checkAnswer(uiText.text)) {
		ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* L_1 = __this->___importDB_10;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___uiText_12;
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_2);
		bool L_4;
		L_4 = ImportDB_checkAnswer_m67922BB23F261427C9CF08C62393E4C06FADDD3D(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// uiText.text = "please say again";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___uiText_12;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral9B19C1B6BD1A7C3B2D9EF611DFABA9698B45A9D3);
		goto IL_0046;
	}

IL_0036:
	{
		// } else uiText.text = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___uiText_12;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
	}

IL_0046:
	{
		// commit = true;
		__this->___commit_14 = (bool)1;
		// }
		return;
	}
}
// System.Void Dialog::getPresentDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dialog_getPresentDialog_m582D5578F780860DECBB82B24DFAD2235FEBC97A (Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral894DC2F11D897A2059A9D196CC3FE428EFD2B6C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Debug.Log("getDialog");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral894DC2F11D897A2059A9D196CC3FE428EFD2B6C6, NULL);
		// qus.text = importDB.question;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___qus_6;
		ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* L_1 = __this->___importDB_10;
		String_t* L_2 = L_1->___question_12;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// ans1.text = importDB.ans[0];
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___ans1_7;
		ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* L_4 = __this->___importDB_10;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4->___ans_13;
		int32_t L_6 = 0;
		String_t* L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_7);
		// ans2.text = importDB.ans[1];
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___ans2_8;
		ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* L_9 = __this->___importDB_10;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9->___ans_13;
		int32_t L_11 = 1;
		String_t* L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_12);
		// ans3.text = importDB.ans[2];
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___ans3_9;
		ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* L_14 = __this->___importDB_10;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14->___ans_13;
		int32_t L_16 = 2;
		String_t* L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_17);
		// uiText.text = "1";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = __this->___uiText_12;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		// test.text = importDB.test.Length.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19 = __this->___test_15;
		ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* L_20 = __this->___importDB_10;
		String_t* L_21 = L_20->___test_14;
		int32_t L_22;
		L_22 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_21, NULL);
		V_0 = L_22;
		String_t* L_23;
		L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, L_23);
		// }
		return;
	}
}
// System.Void Dialog::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dialog__ctor_mC38681E1CD023219DD6704B0C1A74B8F9778E821 (Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* __this, const RuntimeMethod* method) 
{
	{
		// private bool commit = true;
		__this->___commit_14 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Dialog::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dialog__cctor_mA3046FE093F1B4859D61C4E1CEEF0ABE29D180CD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1370D986C229BBB526647A3302D381C77FAB77BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D1A62D3CE1CBE6BFE41CBBD23E7C45114FF2ED0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static string speechKey = "2a06d66352e34a2485c3a04865379c18";
		((Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972_StaticFields*)il2cpp_codegen_static_fields_for(Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972_il2cpp_TypeInfo_var))->___speechKey_4 = _stringLiteral2D1A62D3CE1CBE6BFE41CBBD23E7C45114FF2ED0;
		Il2CppCodeGenWriteBarrier((void**)(&((Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972_StaticFields*)il2cpp_codegen_static_fields_for(Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972_il2cpp_TypeInfo_var))->___speechKey_4), (void*)_stringLiteral2D1A62D3CE1CBE6BFE41CBBD23E7C45114FF2ED0);
		// static string speechRegion = "eastus";
		((Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972_StaticFields*)il2cpp_codegen_static_fields_for(Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972_il2cpp_TypeInfo_var))->___speechRegion_5 = _stringLiteral1370D986C229BBB526647A3302D381C77FAB77BC;
		Il2CppCodeGenWriteBarrier((void**)(&((Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972_StaticFields*)il2cpp_codegen_static_fields_for(Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972_il2cpp_TypeInfo_var))->___speechRegion_5), (void*)_stringLiteral1370D986C229BBB526647A3302D381C77FAB77BC);
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
// System.Void Dialog/<Update>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateU3Ed__14_MoveNext_m861BFF81789C56364B6AAE98732F2BDFB7AFB8F6 (U3CUpdateU3Ed__14_t3983632F2292B74DFA2AF0ECDCA649150254216A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral316B1828EF8F0B1D8D0F7BEA83FD98327F592FA7);
		s_Il2CppMethodInitialized = true;
	}
	Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* L_0 = __this->___U3CU3E4__this_2;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			// if(commit ) {
			Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* L_1 = V_0;
			bool L_2 = L_1->___commit_14;
			if (!L_2)
			{
				goto IL_0036_1;
			}
		}
		{
			// commit = false;
			Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* L_3 = V_0;
			L_3->___commit_14 = (bool)0;
			// getPresentDialog();
			Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* L_4 = V_0;
			Dialog_getPresentDialog_m582D5578F780860DECBB82B24DFAD2235FEBC97A(L_4, NULL);
			// Thread.Sleep(2000);
			Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549(((int32_t)2000), NULL);
			// changeDialog();
			Dialog_t1A3474C8E604C61E022BDF82747C68A6C1E11972* L_5 = V_0;
			Dialog_changeDialog_m4DDA60127BD5CB04A80D6384D8531F9EEF93051F(L_5, NULL);
			// Debug.Log("end!");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral316B1828EF8F0B1D8D0F7BEA83FD98327F592FA7, NULL);
		}

IL_0036_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0038;
		}
		throw e;
	}

CATCH_0038:
	{// begin catch(System.Exception)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_6 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_7 = V_1;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_6, L_7, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0062;
	}// end catch (depth: 1)

IL_004f:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_8 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_8, NULL);
	}

IL_0062:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUpdateU3Ed__14_MoveNext_m861BFF81789C56364B6AAE98732F2BDFB7AFB8F6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CUpdateU3Ed__14_t3983632F2292B74DFA2AF0ECDCA649150254216A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CUpdateU3Ed__14_t3983632F2292B74DFA2AF0ECDCA649150254216A*>(__this + _offset);
	U3CUpdateU3Ed__14_MoveNext_m861BFF81789C56364B6AAE98732F2BDFB7AFB8F6(_thisAdjusted, method);
}
// System.Void Dialog/<Update>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateU3Ed__14_SetStateMachine_mD2ED63ABD33BEDB884D788ADA5DBB12E47821A71 (U3CUpdateU3Ed__14_t3983632F2292B74DFA2AF0ECDCA649150254216A* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUpdateU3Ed__14_SetStateMachine_mD2ED63ABD33BEDB884D788ADA5DBB12E47821A71_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CUpdateU3Ed__14_t3983632F2292B74DFA2AF0ECDCA649150254216A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CUpdateU3Ed__14_t3983632F2292B74DFA2AF0ECDCA649150254216A*>(__this + _offset);
	U3CUpdateU3Ed__14_SetStateMachine_mD2ED63ABD33BEDB884D788ADA5DBB12E47821A71(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microphone::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_Start_m13AF8B0D9D8C37E962C33505ED3EF008474A3434 (Microphone_t77CC5DE152FF0D741D4A1CD62D6365472D0BAF3D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microphone::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_OnGUI_mD1C1F1C264F63EF689410FEB09E48518D6FE2E61 (Microphone_t77CC5DE152FF0D741D4A1CD62D6365472D0BAF3D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microphone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone__ctor_m64DDFAF1B3C670B7AB89101303076DBC80B79B09 (Microphone_t77CC5DE152FF0D741D4A1CD62D6365472D0BAF3D* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void PermissionsRationaleDialog::DoMyWindow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionsRationaleDialog_DoMyWindow_mB873C2E12DBADA3EC5218711D6897C427E211BFB (PermissionsRationaleDialog_t186CC93974A44DF49B0769C368BDAF48161B36DE* __this, int32_t ___windowID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCEAA7D594ED83121125192D6C632560AB0BBA2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD61A403A62E3B406C2482F9CD3ABA7CF782E649C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GUI.Label(new Rect(10, 20, kDialogWidth - 20, kDialogHeight - 50), "Please let me use the microphone.");
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_0), (10.0f), (20.0f), (280.0f), (50.0f), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Label_m4A951E57C7DCCF95A0306240144CA2713F546526(L_0, _stringLiteralCCEAA7D594ED83121125192D6C632560AB0BBA2C, NULL);
		// GUI.Button(new Rect(10, kDialogHeight - 30, 100, 20),"No");
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		memset((&L_1), 0, sizeof(L_1));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_1), (10.0f), (70.0f), (100.0f), (20.0f), /*hidden argument*/NULL);
		bool L_2;
		L_2 = GUI_Button_m26D18B144D3116398B9E9BECB0C4014F57DBE44B(L_1, _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66, NULL);
		// if (GUI.Button(new Rect(kDialogWidth - 110, kDialogHeight - 30, 100, 20), "Yes"))
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_3), (190.0f), (70.0f), (100.0f), (20.0f), /*hidden argument*/NULL);
		bool L_4;
		L_4 = GUI_Button_m26D18B144D3116398B9E9BECB0C4014F57DBE44B(L_3, _stringLiteralD61A403A62E3B406C2482F9CD3ABA7CF782E649C, NULL);
		if (!L_4)
		{
			goto IL_0073;
		}
	}
	{
		// windowOpen = false;
		__this->___windowOpen_6 = (bool)0;
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void PermissionsRationaleDialog::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionsRationaleDialog_OnGUI_m5EAB25B477CF229D8425B2332E9B7862F84E7CC7 (PermissionsRationaleDialog_t186CC93974A44DF49B0769C368BDAF48161B36DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PermissionsRationaleDialog_DoMyWindow_mB873C2E12DBADA3EC5218711D6897C427E211BFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral704D758D06C19538B12BE10D6DE2F4DD47AFDC43);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (windowOpen)
		bool L_0 = __this->___windowOpen_6;
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		// Rect rect = new Rect((Screen.width / 2) - (kDialogWidth / 2), (Screen.height / 2) - (kDialogHeight / 2), kDialogWidth, kDialogHeight);
		int32_t L_1;
		L_1 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_2;
		L_2 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_0), ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)(L_1/2)), ((int32_t)150)))), ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)(L_2/2)), ((int32_t)50)))), (300.0f), (100.0f), NULL);
		// GUI.ModalWindow(0, rect, DoMyWindow, "Permissions Request Dialog");
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3 = V_0;
		WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* L_4 = (WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550*)il2cpp_codegen_object_new(WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550_il2cpp_TypeInfo_var);
		WindowFunction__ctor_m31D7B6C221D9A078AE5C8BA7C3BC0FA406EA7B71(L_4, __this, (intptr_t)((void*)PermissionsRationaleDialog_DoMyWindow_mB873C2E12DBADA3EC5218711D6897C427E211BFB_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5;
		L_5 = GUI_ModalWindow_m3D73EE4FC023C2BB2A555346BDC68A5C1599B61E(0, L_3, L_4, _stringLiteral704D758D06C19538B12BE10D6DE2F4DD47AFDC43, NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void PermissionsRationaleDialog::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionsRationaleDialog__ctor_mE43C4C4A130FD5D32E0BF25B2327218A42CA11EC (PermissionsRationaleDialog_t186CC93974A44DF49B0769C368BDAF48161B36DE* __this, const RuntimeMethod* method) 
{
	{
		// private bool windowOpen = true;
		__this->___windowOpen_6 = (bool)1;
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
// System.Void DialogScript.Bank::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bank__ctor_mDF98FBF27565E42E14E695339C9D6B3EB8729A3B (Bank_t0766ABB80BC48BEB38B0623283107EB383D99B4A* __this, const RuntimeMethod* method) 
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
// System.String DialogScript.Answer::get_answer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Answer_get_answer_m6D51FA9BC42352248F5A97BE7FB1308728D523AA (Answer_t9E1ABEB9022A77B0D6B0C3416687CEF160D5A095* __this, const RuntimeMethod* method) 
{
	{
		// public string answer {get;set;}
		String_t* L_0 = __this->___U3CanswerU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void DialogScript.Answer::set_answer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Answer_set_answer_m357BADB7F11A8C0EC0DC5139A3A318EA97153032 (Answer_t9E1ABEB9022A77B0D6B0C3416687CEF160D5A095* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string answer {get;set;}
		String_t* L_0 = ___value0;
		__this->___U3CanswerU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CanswerU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String DialogScript.Answer::get_dir_qus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Answer_get_dir_qus_m56963FD7D12CA9738F228F5C3469F58A8607468B (Answer_t9E1ABEB9022A77B0D6B0C3416687CEF160D5A095* __this, const RuntimeMethod* method) 
{
	{
		// public string dir_qus {get;set;}
		String_t* L_0 = __this->___U3Cdir_qusU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void DialogScript.Answer::set_dir_qus(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Answer_set_dir_qus_m042F2E388844B57B36E9844FD1255958A9D5E51D (Answer_t9E1ABEB9022A77B0D6B0C3416687CEF160D5A095* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string dir_qus {get;set;}
		String_t* L_0 = ___value0;
		__this->___U3Cdir_qusU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cdir_qusU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void DialogScript.Answer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Answer__ctor_m1D37F7704731F467B167DFC998D128A7FB572F87 (Answer_t9E1ABEB9022A77B0D6B0C3416687CEF160D5A095* __this, const RuntimeMethod* method) 
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
// System.String DialogScript.Root::get_qus_no()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Root_get_qus_no_m7CFDA33F5B9ABF94A39409F27A4EBD5BAE06B111 (Root_t0F848F4BAD7C37BA2438126547B6D234FD22D8E2* __this, const RuntimeMethod* method) 
{
	{
		// public string qus_no {get;set;}
		String_t* L_0 = __this->___U3Cqus_noU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void DialogScript.Root::set_qus_no(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Root_set_qus_no_mE363521DC49FE3212CC6DC2BC6FD9325EF05D575 (Root_t0F848F4BAD7C37BA2438126547B6D234FD22D8E2* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string qus_no {get;set;}
		String_t* L_0 = ___value0;
		__this->___U3Cqus_noU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cqus_noU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String DialogScript.Root::get_question()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Root_get_question_mFDF14DD164E50C7A44189D7A2B992632EE07E3D9 (Root_t0F848F4BAD7C37BA2438126547B6D234FD22D8E2* __this, const RuntimeMethod* method) 
{
	{
		// public string question {get;set;}
		String_t* L_0 = __this->___U3CquestionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void DialogScript.Root::set_question(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Root_set_question_mB0EDB06BE5D60634F9A5635236963E8FF8481643 (Root_t0F848F4BAD7C37BA2438126547B6D234FD22D8E2* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string question {get;set;}
		String_t* L_0 = ___value0;
		__this->___U3CquestionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CquestionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void DialogScript.Root::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Root__ctor_m13543C0E8736DACA5E82348D61B3BEA63FC4BD10 (Root_t0F848F4BAD7C37BA2438126547B6D234FD22D8E2* __this, const RuntimeMethod* method) 
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
// DialogScript.ImportDB DialogScript.ImportDB::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* ImportDB_get_Instance_mBFFC853A88DCC5E8CCBBB35BB5D958086E86064B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E_m0CB37ADBD16243D3944DE771B1F13DDCD292BCD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral413E5AAB3595F715F96569108C80366D5A7A29C0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance == null)
		ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* L_0 = ((ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E_StaticFields*)il2cpp_codegen_static_fields_for(ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// GameObject go = new GameObject("ImportDB");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteral413E5AAB3595F715F96569108C80366D5A7A29C0, NULL);
		// _instance = go.AddComponent<ImportDB>();
		ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* L_3;
		L_3 = GameObject_AddComponent_TisImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E_m0CB37ADBD16243D3944DE771B1F13DDCD292BCD5(L_2, GameObject_AddComponent_TisImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E_m0CB37ADBD16243D3944DE771B1F13DDCD292BCD5_RuntimeMethod_var);
		((ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E_StaticFields*)il2cpp_codegen_static_fields_for(ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E_il2cpp_TypeInfo_var))->____instance_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E_StaticFields*)il2cpp_codegen_static_fields_for(ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E_il2cpp_TypeInfo_var))->____instance_4), (void*)L_3);
	}

IL_0021:
	{
		// return _instance;
		ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* L_4 = ((ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E_StaticFields*)il2cpp_codegen_static_fields_for(ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E_il2cpp_TypeInfo_var))->____instance_4;
		return L_4;
	}
}
// System.Void DialogScript.ImportDB::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImportDB_Awake_m0C780B3F748FB8A5488F0C66D76C5470476D5553 (ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _instance = this;
		((ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E_StaticFields*)il2cpp_codegen_static_fields_for(ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E_il2cpp_TypeInfo_var))->____instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E_StaticFields*)il2cpp_codegen_static_fields_for(ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E_il2cpp_TypeInfo_var))->____instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void DialogScript.ImportDB::ConnectToPhp01()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImportDB_ConnectToPhp01_m4248BE7D38011DD31A700987122EA83DA5E5EB87 (ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_ToObject_TisBank_t0766ABB80BC48BEB38B0623283107EB383D99B4A_m442E3A8C843DB634F08361E2E3ED4307D36FED40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_tA76BEEAC5B69E3B93FD3902FB90C2E8E996F6071_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral306582DEEE0E8D1D29AC557C2953EB74F9B68ED8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// test = submitMsgToServer(" {\"dict\": \"question\",\"place\": \"??\",\"topic\": \"b\" }");
		String_t* L_0;
		L_0 = ImportDB_submitMsgToServer_m40D7A504C8BEA21B36C87F1BC53811CDA5E31996(__this, _stringLiteral306582DEEE0E8D1D29AC557C2953EB74F9B68ED8, NULL);
		__this->___test_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___test_14), (void*)L_0);
		// bank = JsonMapper.ToObject<Bank>(test);//?????????
		String_t* L_1 = __this->___test_14;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_tA76BEEAC5B69E3B93FD3902FB90C2E8E996F6071_il2cpp_TypeInfo_var);
		Bank_t0766ABB80BC48BEB38B0623283107EB383D99B4A* L_2;
		L_2 = JsonMapper_ToObject_TisBank_t0766ABB80BC48BEB38B0623283107EB383D99B4A_m442E3A8C843DB634F08361E2E3ED4307D36FED40(L_1, JsonMapper_ToObject_TisBank_t0766ABB80BC48BEB38B0623283107EB383D99B4A_m442E3A8C843DB634F08361E2E3ED4307D36FED40_RuntimeMethod_var);
		__this->___bank_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bank_5), (void*)L_2);
		// setDialog(bank.root[0].qus_no);
		Bank_t0766ABB80BC48BEB38B0623283107EB383D99B4A* L_3 = __this->___bank_5;
		RootU5BU5D_t74998B10C69A1F8114B52D97241E88CB8DCCDFE3* L_4 = L_3->___root_1;
		int32_t L_5 = 0;
		Root_t0F848F4BAD7C37BA2438126547B6D234FD22D8E2* L_6 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		String_t* L_7;
		L_7 = Root_get_qus_no_m7CFDA33F5B9ABF94A39409F27A4EBD5BAE06B111_inline(L_6, NULL);
		ImportDB_setDialog_mF5A1E9A301D9E018612ADA748757C03520F5243F(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Boolean DialogScript.ImportDB::connectServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImportDB_connectServer_m195199671E7B7C6452C277CF13A2242A26AE3A02 (ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral114BCE5E07B2B89600E7B0C1E7991AC7281CDDA6);
		s_Il2CppMethodInitialized = true;
	}
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if(ServerIP == null || ServerPort == 0 ) {
		String_t* L_0 = __this->___ServerIP_10;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = __this->___ServerPort_11;
		if (L_1)
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		// return false;
		return (bool)0;
	}

IL_0012:
	{
	}
	try
	{// begin try (depth: 1)
		// clientSocket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_2 = (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)il2cpp_codegen_object_new(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595(L_2, 2, 1, 6, NULL);
		__this->___clientSocket_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clientSocket_9), (void*)L_2);
		// IPAddress serverIP = IPAddress.Parse(ServerIP);
		String_t* L_3 = __this->___ServerIP_10;
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_4;
		L_4 = IPAddress_Parse_mF946F1810061D91C5A1A96FF9968F07138F3CE23(L_3, NULL);
		// IPEndPoint endPoint = new IPEndPoint(serverIP, ServerPort);
		int32_t L_5 = __this->___ServerPort_11;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_6 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_6, L_4, L_5, NULL);
		V_0 = L_6;
		// clientSocket.Connect(endPoint);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_7 = __this->___clientSocket_9;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_8 = V_0;
		Socket_Connect_m874A510F986F4D91446B2F53688D0BCFFE0A6BE1(L_7, L_8, NULL);
		// submitMsgToServer("unity");
		String_t* L_9;
		L_9 = ImportDB_submitMsgToServer_m40D7A504C8BEA21B36C87F1BC53811CDA5E31996(__this, _stringLiteral114BCE5E07B2B89600E7B0C1E7991AC7281CDDA6, NULL);
		// return true;
		V_1 = (bool)1;
		goto IL_0059;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0054;
		}
		throw e;
	}

CATCH_0054:
	{// begin catch(System.Object)
		// } catch {
		// return false;
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0059;
	}// end catch (depth: 1)

IL_0059:
	{
		// }
		bool L_10 = V_1;
		return L_10;
	}
}
// System.String DialogScript.ImportDB::acceptMsgs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ImportDB_acceptMsgs_m336AB822AA2CA486CE50D1C5B6FE61C10CB83B17 (ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C63FBCD8275B4D5EC4E82979C770CBE25B7A99C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	StringBuilder_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// int receiveBufferSize = 1024;
		V_0 = ((int32_t)1024);
		// byte[] receiveBuffer = new byte[receiveBufferSize];
		int32_t L_0 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_1 = L_1;
		// int receiveCount = 0;
		V_2 = 0;
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t* L_2 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_2, NULL);
		V_3 = L_2;
	}

IL_0015:
	try
	{// begin try (depth: 1)

IL_0015_1:
		{
			// receiveCount = clientSocket.Receive(receiveBuffer);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_3 = __this->___clientSocket_9;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
			int32_t L_5;
			L_5 = Socket_Receive_m1D506714778D53C3EB7BBCB9155B8AEEF06FA91C(L_3, L_4, NULL);
			V_2 = L_5;
			// sb.Append(Encoding.UTF8.GetString(receiveBuffer, 0, receiveCount));
			StringBuilder_t* L_6 = V_3;
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7;
			L_7 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
			int32_t L_9 = V_2;
			String_t* L_10;
			L_10 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, L_9);
			StringBuilder_t* L_11;
			L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, L_10, NULL);
			// } while (receiveCount == receiveBufferSize && receiveCount != 0);
			int32_t L_12 = V_2;
			int32_t L_13 = V_0;
			if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
			{
				goto IL_003d_1;
			}
		}
		{
			int32_t L_14 = V_2;
			if (L_14)
			{
				goto IL_0015_1;
			}
		}

IL_003d_1:
		{
			// string receiveMessage = sb.ToString();
			StringBuilder_t* L_15 = V_3;
			String_t* L_16;
			L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
			V_4 = L_16;
			// Console.WriteLine("Received message from server: " + receiveMessage);
			String_t* L_17 = V_4;
			String_t* L_18;
			L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9C63FBCD8275B4D5EC4E82979C770CBE25B7A99C, L_17, NULL);
			il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
			Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA(L_18, NULL);
			// return receiveMessage;
			String_t* L_19 = V_4;
			V_5 = L_19;
			goto IL_007f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005c;
		}
		throw e;
	}

CATCH_005c:
	{// begin catch(System.Exception)
		// catch (System.Exception e)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Debug.Log("client Error!" + e.Message);
		Exception_t* L_20 = V_6;
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_20);
		String_t* L_22;
		L_22 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3159CB23C4C02FB27E5A63309F5017CB5677BF2F)), L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_22, NULL);
		// return e.Message;
		Exception_t* L_23 = V_6;
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_23);
		V_5 = L_24;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_007f;
	}// end catch (depth: 1)

IL_007f:
	{
		// }
		String_t* L_25 = V_5;
		return L_25;
	}
}
// System.String DialogScript.ImportDB::submitMsgToServer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ImportDB_submitMsgToServer_m40D7A504C8BEA21B36C87F1BC53811CDA5E31996 (ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* __this, String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D5A903E9358CC109EF0ECFDDF26248521114E62);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	String_t* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if(clientSocket == null || !clientSocket.Connected) {
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___clientSocket_9;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_1 = __this->___clientSocket_9;
		bool L_2;
		L_2 = Socket_get_Connected_m6E61ADEB0124FB8D46AC1EDFDC268D3C9F7869C5_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}

IL_0015:
	{
		// return "client connection fault!";
		return _stringLiteral4D5A903E9358CC109EF0ECFDDF26248521114E62;
	}

IL_001b:
	{
	}
	try
	{// begin try (depth: 1)
		// byte[] buffer = Encoding.UTF8.GetBytes(msg, 0, msg.Length);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
		L_3 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_4 = ___msg0;
		String_t* L_5 = ___msg0;
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = Encoding_GetBytes_mB83E04B37AFF32CAF180D0EE8FDA259E3338B018(L_3, L_4, 0, L_6, NULL);
		V_0 = L_7;
		// clientSocket.Send(buffer);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_8 = __this->___clientSocket_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		int32_t L_10;
		L_10 = Socket_Send_m49D0DDE0AB4B18D76A014C6C190D2D0D8489619B(L_8, L_9, NULL);
		// string text = acceptMsgs();
		String_t* L_11;
		L_11 = ImportDB_acceptMsgs_m336AB822AA2CA486CE50D1C5B6FE61C10CB83B17(__this, NULL);
		// return text;
		V_1 = L_11;
		goto IL_0064;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0045;
		}
		throw e;
	}

CATCH_0045:
	{// begin catch(System.Exception)
		// } catch(Exception e) {
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Debug.Log("client Error!!!!" + e.Message);
		Exception_t* L_12 = V_2;
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral017C645FE39911C872E1CE175C07C72E9BBCF596)), L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_14, NULL);
		// return e.Message;
		Exception_t* L_15 = V_2;
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_15);
		V_1 = L_16;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0064;
	}// end catch (depth: 1)

IL_0064:
	{
		// }
		String_t* L_17 = V_1;
		return L_17;
	}
}
// System.Boolean DialogScript.ImportDB::checkAnswer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImportDB_checkAnswer_m67922BB23F261427C9CF08C62393E4C06FADDD3D (ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int tmp = this.next;
		int32_t L_0 = __this->___next_8;
		V_0 = L_0;
		// Debug.Log(text);
		String_t* L_1 = ___text0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// if(text.Equals(ans[0])) {
		String_t* L_2 = ___text0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = __this->___ans_13;
		int32_t L_4 = 0;
		String_t* L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, L_5, NULL);
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		// setDialog(bank.root[tmp].ans[0].dir_qus);
		Bank_t0766ABB80BC48BEB38B0623283107EB383D99B4A* L_7 = __this->___bank_5;
		RootU5BU5D_t74998B10C69A1F8114B52D97241E88CB8DCCDFE3* L_8 = L_7->___root_1;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		Root_t0F848F4BAD7C37BA2438126547B6D234FD22D8E2* L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		AnswerU5BU5D_t2700C12A364EC7179FB478766A5C671D09EE8CB2* L_12 = L_11->___ans_2;
		int32_t L_13 = 0;
		Answer_t9E1ABEB9022A77B0D6B0C3416687CEF160D5A095* L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		String_t* L_15;
		L_15 = Answer_get_dir_qus_m56963FD7D12CA9738F228F5C3469F58A8607468B_inline(L_14, NULL);
		ImportDB_setDialog_mF5A1E9A301D9E018612ADA748757C03520F5243F(__this, L_15, NULL);
		goto IL_00a2;
	}

IL_003e:
	{
		// else if(text.Equals(ans[1])) {
		String_t* L_16 = ___text0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = __this->___ans_13;
		int32_t L_18 = 1;
		String_t* L_19 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		bool L_20;
		L_20 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_16, L_19, NULL);
		if (!L_20)
		{
			goto IL_006f;
		}
	}
	{
		// setDialog(bank.root[tmp].ans[1].dir_qus);
		Bank_t0766ABB80BC48BEB38B0623283107EB383D99B4A* L_21 = __this->___bank_5;
		RootU5BU5D_t74998B10C69A1F8114B52D97241E88CB8DCCDFE3* L_22 = L_21->___root_1;
		int32_t L_23 = V_0;
		int32_t L_24 = L_23;
		Root_t0F848F4BAD7C37BA2438126547B6D234FD22D8E2* L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		AnswerU5BU5D_t2700C12A364EC7179FB478766A5C671D09EE8CB2* L_26 = L_25->___ans_2;
		int32_t L_27 = 1;
		Answer_t9E1ABEB9022A77B0D6B0C3416687CEF160D5A095* L_28 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		String_t* L_29;
		L_29 = Answer_get_dir_qus_m56963FD7D12CA9738F228F5C3469F58A8607468B_inline(L_28, NULL);
		ImportDB_setDialog_mF5A1E9A301D9E018612ADA748757C03520F5243F(__this, L_29, NULL);
		goto IL_00a2;
	}

IL_006f:
	{
		// else if(text.Equals(ans[2])) {
		String_t* L_30 = ___text0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = __this->___ans_13;
		int32_t L_32 = 2;
		String_t* L_33 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		bool L_34;
		L_34 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_30, L_33, NULL);
		if (!L_34)
		{
			goto IL_00a0;
		}
	}
	{
		// setDialog(bank.root[tmp].ans[2].dir_qus);
		Bank_t0766ABB80BC48BEB38B0623283107EB383D99B4A* L_35 = __this->___bank_5;
		RootU5BU5D_t74998B10C69A1F8114B52D97241E88CB8DCCDFE3* L_36 = L_35->___root_1;
		int32_t L_37 = V_0;
		int32_t L_38 = L_37;
		Root_t0F848F4BAD7C37BA2438126547B6D234FD22D8E2* L_39 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		AnswerU5BU5D_t2700C12A364EC7179FB478766A5C671D09EE8CB2* L_40 = L_39->___ans_2;
		int32_t L_41 = 2;
		Answer_t9E1ABEB9022A77B0D6B0C3416687CEF160D5A095* L_42 = (L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		String_t* L_43;
		L_43 = Answer_get_dir_qus_m56963FD7D12CA9738F228F5C3469F58A8607468B_inline(L_42, NULL);
		ImportDB_setDialog_mF5A1E9A301D9E018612ADA748757C03520F5243F(__this, L_43, NULL);
		goto IL_00a2;
	}

IL_00a0:
	{
		// return true;
		return (bool)1;
	}

IL_00a2:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void DialogScript.ImportDB::setDialog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImportDB_setDialog_mF5A1E9A301D9E018612ADA748757C03520F5243F (ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* __this, String_t* ___tmp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RootU5BU5D_t74998B10C69A1F8114B52D97241E88CB8DCCDFE3* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// Debug.Log(tmp);
		String_t* L_0 = ___tmp0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		// int i = 0;
		V_0 = 0;
		// foreach(Root item in bank.root) {
		Bank_t0766ABB80BC48BEB38B0623283107EB383D99B4A* L_1 = __this->___bank_5;
		RootU5BU5D_t74998B10C69A1F8114B52D97241E88CB8DCCDFE3* L_2 = L_1->___root_1;
		V_1 = L_2;
		V_2 = 0;
		goto IL_00af;
	}

IL_001b:
	{
		// foreach(Root item in bank.root) {
		RootU5BU5D_t74998B10C69A1F8114B52D97241E88CB8DCCDFE3* L_3 = V_1;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		Root_t0F848F4BAD7C37BA2438126547B6D234FD22D8E2* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		// if(item.qus_no == tmp) {
		String_t* L_7;
		L_7 = Root_get_qus_no_m7CFDA33F5B9ABF94A39409F27A4EBD5BAE06B111_inline(L_6, NULL);
		String_t* L_8 = ___tmp0;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_00a7;
		}
	}
	{
		// question = bank.root[i].question;
		Bank_t0766ABB80BC48BEB38B0623283107EB383D99B4A* L_10 = __this->___bank_5;
		RootU5BU5D_t74998B10C69A1F8114B52D97241E88CB8DCCDFE3* L_11 = L_10->___root_1;
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		Root_t0F848F4BAD7C37BA2438126547B6D234FD22D8E2* L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		String_t* L_15;
		L_15 = Root_get_question_mFDF14DD164E50C7A44189D7A2B992632EE07E3D9_inline(L_14, NULL);
		__this->___question_12 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___question_12), (void*)L_15);
		// ans[0] = bank.root[i].ans[0].answer;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = __this->___ans_13;
		Bank_t0766ABB80BC48BEB38B0623283107EB383D99B4A* L_17 = __this->___bank_5;
		RootU5BU5D_t74998B10C69A1F8114B52D97241E88CB8DCCDFE3* L_18 = L_17->___root_1;
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		Root_t0F848F4BAD7C37BA2438126547B6D234FD22D8E2* L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		AnswerU5BU5D_t2700C12A364EC7179FB478766A5C671D09EE8CB2* L_22 = L_21->___ans_2;
		int32_t L_23 = 0;
		Answer_t9E1ABEB9022A77B0D6B0C3416687CEF160D5A095* L_24 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		String_t* L_25;
		L_25 = Answer_get_answer_m6D51FA9BC42352248F5A97BE7FB1308728D523AA_inline(L_24, NULL);
		ArrayElementTypeCheck (L_16, L_25);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_25);
		// ans[1] = bank.root[i].ans[1].answer;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = __this->___ans_13;
		Bank_t0766ABB80BC48BEB38B0623283107EB383D99B4A* L_27 = __this->___bank_5;
		RootU5BU5D_t74998B10C69A1F8114B52D97241E88CB8DCCDFE3* L_28 = L_27->___root_1;
		int32_t L_29 = V_0;
		int32_t L_30 = L_29;
		Root_t0F848F4BAD7C37BA2438126547B6D234FD22D8E2* L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		AnswerU5BU5D_t2700C12A364EC7179FB478766A5C671D09EE8CB2* L_32 = L_31->___ans_2;
		int32_t L_33 = 1;
		Answer_t9E1ABEB9022A77B0D6B0C3416687CEF160D5A095* L_34 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		String_t* L_35;
		L_35 = Answer_get_answer_m6D51FA9BC42352248F5A97BE7FB1308728D523AA_inline(L_34, NULL);
		ArrayElementTypeCheck (L_26, L_35);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_35);
		// ans[2] = bank.root[i].ans[2].answer;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = __this->___ans_13;
		Bank_t0766ABB80BC48BEB38B0623283107EB383D99B4A* L_37 = __this->___bank_5;
		RootU5BU5D_t74998B10C69A1F8114B52D97241E88CB8DCCDFE3* L_38 = L_37->___root_1;
		int32_t L_39 = V_0;
		int32_t L_40 = L_39;
		Root_t0F848F4BAD7C37BA2438126547B6D234FD22D8E2* L_41 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		AnswerU5BU5D_t2700C12A364EC7179FB478766A5C671D09EE8CB2* L_42 = L_41->___ans_2;
		int32_t L_43 = 2;
		Answer_t9E1ABEB9022A77B0D6B0C3416687CEF160D5A095* L_44 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		String_t* L_45;
		L_45 = Answer_get_answer_m6D51FA9BC42352248F5A97BE7FB1308728D523AA_inline(L_44, NULL);
		ArrayElementTypeCheck (L_36, L_45);
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_45);
		// break;
		return;
	}

IL_00a7:
	{
		// i++;
		int32_t L_46 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00af:
	{
		// foreach(Root item in bank.root) {
		int32_t L_48 = V_2;
		RootU5BU5D_t74998B10C69A1F8114B52D97241E88CB8DCCDFE3* L_49 = V_1;
		if ((((int32_t)L_48) < ((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DialogScript.ImportDB::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImportDB__ctor_m501B027309042ED58F916B0FBEC761E166BE55CA (ImportDB_t8F6E779F31CFA88424B8AD8AE17CFE14DA6C4D4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD001008EDBD56D19221AC92F659E54C8B8036E92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string ServerIP = "192.168.16.33";
		__this->___ServerIP_10 = _stringLiteralD001008EDBD56D19221AC92F659E54C8B8036E92;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ServerIP_10), (void*)_stringLiteralD001008EDBD56D19221AC92F659E54C8B8036E92);
		// public int ServerPort = 8888;
		__this->___ServerPort_11 = ((int32_t)8888);
		// public string question = "";
		__this->___question_12 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___question_12), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string[] ans = new string[3];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___ans_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ans_13), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Root_get_qus_no_m7CFDA33F5B9ABF94A39409F27A4EBD5BAE06B111_inline (Root_t0F848F4BAD7C37BA2438126547B6D234FD22D8E2* __this, const RuntimeMethod* method) 
{
	{
		// public string qus_no {get;set;}
		String_t* L_0 = __this->___U3Cqus_noU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Socket_get_Connected_m6E61ADEB0124FB8D46AC1EDFDC268D3C9F7869C5_inline (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___is_connected_30;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Answer_get_dir_qus_m56963FD7D12CA9738F228F5C3469F58A8607468B_inline (Answer_t9E1ABEB9022A77B0D6B0C3416687CEF160D5A095* __this, const RuntimeMethod* method) 
{
	{
		// public string dir_qus {get;set;}
		String_t* L_0 = __this->___U3Cdir_qusU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Root_get_question_mFDF14DD164E50C7A44189D7A2B992632EE07E3D9_inline (Root_t0F848F4BAD7C37BA2438126547B6D234FD22D8E2* __this, const RuntimeMethod* method) 
{
	{
		// public string question {get;set;}
		String_t* L_0 = __this->___U3CquestionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Answer_get_answer_m6D51FA9BC42352248F5A97BE7FB1308728D523AA_inline (Answer_t9E1ABEB9022A77B0D6B0C3416687CEF160D5A095* __this, const RuntimeMethod* method) 
{
	{
		// public string answer {get;set;}
		String_t* L_0 = __this->___U3CanswerU3Ek__BackingField_0;
		return L_0;
	}
}
