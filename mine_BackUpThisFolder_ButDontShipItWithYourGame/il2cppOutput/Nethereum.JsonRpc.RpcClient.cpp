#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HeaderInfo>
struct Dictionary_2_t5CD3F4D4D92A89783AE1C95F1528A7B08E8A54E0;
// System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HttpHeaders/HeaderBucket>
struct Dictionary_2_t1B3325E856D6A0623AE0B139B6A7E8B27C590A41;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380;
// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver>
struct Func_1_t78E8B13F3C7D6CC3EB821B4F5D26999D062417E2;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// Newtonsoft.Json.IArrayPool`1<System.Char>
struct IArrayPool_1_t5EA5B0C4FD1E47DB5E30F9B7802F3D7E181E10F6;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>
struct IList_1_t106D4C1340745E38431865BBEA6AE170A4713431;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>
struct List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]>
struct TaskFactory_1_tD4A761D0FD661A130A29F8D71C85052A363FD0FE;
// System.Threading.Tasks.TaskFactory`1<System.Net.Http.HttpResponseMessage>
struct TaskFactory_1_t7BDD01363BBCFF64B4A6BDDBBE222716A0B2E2BA;
// System.Threading.Tasks.TaskFactory`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>
struct TaskFactory_1_t5B1C9960EF346DE5239570D805CD196794863B85;
// System.Threading.Tasks.TaskFactory`1<System.IO.Stream>
struct TaskFactory_1_tA522288A50DBBA4F2B2C1B7903E790568AC5E651;
// System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]>
struct Task_1_t521684A4C10415312B22F2EEE1222131B8703BF6;
// System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage>
struct Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>
struct Task_1_tC0061418037436F03DCF6A1FA753A1D429C67C60;
// System.Threading.Tasks.Task`1<System.IO.Stream>
struct Task_1_t06484715029D51A4420723456D165BAC63798F8D;
// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[]
struct SparselyPopulatedArray_1U5BU5D_t8E75A036E16E53CF08AAAF37EB6621DE3B26307E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage[]
struct RpcRequestMessageU5BU5D_t751C41D82385D4F97A408969DB7033B16596FE0E;
// Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]
struct RpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Net.Http.Headers.AuthenticationHeaderValue
struct AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A;
// Nethereum.JsonRpc.Client.BasicAuthenticationHeaderHelper
struct BasicAuthenticationHeaderHelper_t89AE82ED5CB91BE77035651CB27D11F72AAA0F8A;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// Nethereum.JsonRpc.Client.ClientBase
struct ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// System.Net.Http.HttpClient
struct HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42;
// System.Net.Http.HttpClientHandler
struct HttpClientHandler_t7D9EE7EA0696F7843BD008E618C49F95D99D5FAD;
// System.Net.Http.HttpContent
struct HttpContent_tD09737BB27CB151BC9688882F785208620211E1C;
// System.Net.Http.Headers.HttpContentHeaders
struct HttpContentHeaders_t4E2506F081BD682D0538A5CB38ED1D836C2E8C4F;
// System.Net.Http.HttpMessageHandler
struct HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17;
// System.Net.Http.Headers.HttpRequestHeaders
struct HttpRequestHeaders_tAC1E0B2246D915164C80B7A7925DE31283788DF7;
// System.Net.Http.HttpRequestMessage
struct HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2;
// System.Net.Http.Headers.HttpResponseHeaders
struct HttpResponseHeaders_tAD02F8CC2960BC561FEFD63E0121701743EAA7A8;
// System.Net.Http.HttpResponseMessage
struct HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t7EC502F5FCA86DD95579A92A1E0116BE32D6340B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// Microsoft.Extensions.Logging.ILogger
struct ILogger_t1C0C2CD1CDFA86541C20F898F7581FB2CB04BFB4;
// System.Net.Http.IMonoHttpClientHandler
struct IMonoHttpClientHandler_t721CE15E0E80995BFB141B935E5CF97249F183CD;
// Newtonsoft.Json.Serialization.IReferenceResolver
struct IReferenceResolver_t29B0AEAFB8A7BF2EE446320DE590343B21EA69A3;
// Newtonsoft.Json.Serialization.ISerializationBinder
struct ISerializationBinder_t3C8B850335FB40001C9201981439AE77B430031F;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_t44C99CB7D5AB59A077F569914E56DAD66B5A41EF;
// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3;
// Newtonsoft.Json.JsonConverterCollection
struct JsonConverterCollection_t6EEC84565C08B14107276B5023CE9E978DFCDF89;
// Newtonsoft.Json.JsonNameTable
struct JsonNameTable_t0B2C7BA303E82F2C1E3C1176620FA86FA3BB611F;
// Newtonsoft.Json.JsonReader
struct JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59;
// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF;
// Newtonsoft.Json.JsonTextReader
struct JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// Nethereum.JsonRpc.Client.RequestInterceptor
struct RequestInterceptor_t0B0D2629DBFF7C5098B4B4C21BCA63444BD502F0;
// Nethereum.JsonRpc.Client.RpcClient
struct RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9;
// Nethereum.JsonRpc.Client.RpcClientTimeoutException
struct RpcClientTimeoutException_t6705F8007F759185D010A0E822189E2554BB20AF;
// Nethereum.JsonRpc.Client.RpcClientUnknownException
struct RpcClientUnknownException_tFF48990C365A31D6AFB630B612733B30AE3DA2C1;
// Nethereum.JsonRpc.Client.RpcMessages.RpcError
struct RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C;
// Nethereum.JsonRpc.Client.RpcLogger
struct RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272;
// Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage
struct RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D;
// Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage
struct RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// Nethereum.JsonRpc.Client.SimpleRpcClient
struct SimpleRpcClient_t3A3EEC4E97A2B3CC93D6F6C0E8A021C281C8EE15;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.String
struct String_t;
// System.Net.Http.StringContent
struct StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7;
// System.Threading.Timer
struct Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00;
// System.Threading.TimerCallback
struct TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Net.Http.HttpContent/FixedMemoryStream
struct FixedMemoryStream_tDCEF941500AF29277C42DDF40970FB21B4A66188;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;
// Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo
struct BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B;

IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpClientHandler_t7D9EE7EA0696F7843BD008E618C49F95D99D5FAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RpcClientTimeoutException_t6705F8007F759185D010A0E822189E2554BB20AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RpcClientUnknownException_tFF48990C365A31D6AFB630B612733B30AE3DA2C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCanceledException_tDF877A81B2CD292CC0FBC2332962A8C07DE2A08E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteralA01C4F4897E2641F90F7C00FF6187381E937B194;
IL2CPP_EXTERN_C String_t* _stringLiteralDAC8226B79869EA87017AB5229861615BC0660A6;
IL2CPP_EXTERN_C String_t* _stringLiteralED4E1D5375F8F5CA6973E2EF018BF102D8C7CFB5;
IL2CPP_EXTERN_C String_t* _stringLiteralFD6819A0DAFBD6B8C298C8CEF5CD5E29F47816F0;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2_TisU3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9_m1B85AC7A83F0F6D31567F1E28F81E9FB165E1DD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2_TisU3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C_m9835AD493A7517BCBC29E3FAB5DA7B1DA15CD126_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2_TisU3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0_mA69CB5A1E5E563D855A5572199C4A74100919E65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2_TisU3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0_mF9B9AFF41D7891FE5CF0CA69BD9F11368107910F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9_mF9A247083992319FB9C537642724392142DD5D0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C_mA800B83D368FF954B7F384DA6D1A866775D426C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0_m098C6682B993F254487C2ED84C9C50DDB9573548_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0_m86DB1BFF84134D9503C5F14EB66601AE961944E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m01F336A9A5C8AD522F3562B75C6EB452E5B09F5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m52090EDC7750E3D8B5DEFB22F05CA4796CD5FCA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m681F5CAA0A000471C03F97CFB40AA690DDBDFC0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m9D70C765E9688DB85026E548C2A79251CC93EA7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m1E2CD33CFDC79FD034B354BA338B1DF65CF21C6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mADF00E9133B0A0E8944ECF7DC9E504E057464527_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m3A57F8DB8C304C3CAA196D98B5F150687FB30B6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m4AA37E67E5C26A021760A9D90C566A8CC9E07AFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9_m13069CBE242957617C6A16CAAA9947B62CDBC017_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C_m656083FC2145DB6D8856C7E4EDB5C9DEE26A8A97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0_m6C7EE436C40BEA620E8B111844E76931426F2CCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0_m7C548A36CC3F940DE44643D7F13228C481EF6ED0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m370E645F9EEB260C09C268797E72BF24D81F8DB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mEBA213E036CC4EA76DE7DDFB3083EAF5220A8E38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m73EC0AA35D69C7BD9CB8CF0401218F54D50A3F5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m82E11E4D5A7D93F6C6535712CB0D9A19E0B3F1A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_mA6D771EE9708FACC33CA8BFDF2356EB65C51550A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_mC3B711F8D7B7CFCA514C0A3FD4F6B2EC77BAD2DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_m02D8819042F353E9808D8FD683CE7A85E070B46E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_mAE5B09203993E840EC9B1093F11D767B90D0F249_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSerializer_Deserialize_TisRpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E_m4917091376BC659AFB6B04287B5EC9BED17F49E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSerializer_Deserialize_TisRpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1_m5F582FE23CBF1F23D18D3294FB08197DF5B16970_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m25EFF82BDCE95D202B2F11CEAE4BF1645FD47504_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m623E0E89F5E23F844E733FB75503B8AD97120277_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSendAsyncU3Ed__19_MoveNext_m9F87DC02C68C7439558DE19E1FB1F1362AF18030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSendAsyncU3Ed__20_MoveNext_m86C0036EBD8DD00717652F39013C482A222F99F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSendAsyncU3Ed__3_MoveNext_m9802850B4B8D63F92434BB81AD60BCFDFF0C7BF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSendAsyncU3Ed__4_MoveNext_m150F410881E73971F44161CB8D494E80E84DA73C_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct RpcRequestMessageU5BU5D_t751C41D82385D4F97A408969DB7033B16596FE0E;
struct RpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tA99A3E1E987353B1E562F3E8A50922A157BE0B0D 
{
};
struct Il2CppArrayBounds;

// System.Net.Http.Headers.AuthenticationHeaderValue
struct AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A  : public RuntimeObject
{
	// System.String System.Net.Http.Headers.AuthenticationHeaderValue::<Parameter>k__BackingField
	String_t* ___U3CParameterU3Ek__BackingField_0;
	// System.String System.Net.Http.Headers.AuthenticationHeaderValue::<Scheme>k__BackingField
	String_t* ___U3CSchemeU3Ek__BackingField_1;
};

// Nethereum.JsonRpc.Client.BasicAuthenticationHeaderHelper
struct BasicAuthenticationHeaderHelper_t89AE82ED5CB91BE77035651CB27D11F72AAA0F8A  : public RuntimeObject
{
};

// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B  : public RuntimeObject
{
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_kernelEvent
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ____kernelEvent_3;
	// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_registeredCallbacksLists
	SparselyPopulatedArray_1U5BU5D_t8E75A036E16E53CF08AAAF37EB6621DE3B26307E* ____registeredCallbacksLists_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_state
	int32_t ____state_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_threadIDExecutingCallbacks
	int32_t ____threadIDExecutingCallbacks_6;
	// System.Boolean System.Threading.CancellationTokenSource::_disposed
	bool ____disposed_7;
	// System.Threading.CancellationCallbackInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_executingCallback
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ____executingCallback_8;
	// System.Threading.Timer modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_timer
	Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* ____timer_9;
};

struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_StaticFields
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::s_canceledSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___s_canceledSource_0;
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::s_neverCanceledSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___s_neverCanceledSource_1;
	// System.Int32 System.Threading.CancellationTokenSource::s_nLists
	int32_t ___s_nLists_2;
	// System.Threading.TimerCallback System.Threading.CancellationTokenSource::s_timerCallback
	TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD* ___s_timerCallback_10;
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

// System.Net.Http.HttpContent
struct HttpContent_tD09737BB27CB151BC9688882F785208620211E1C  : public RuntimeObject
{
	// System.Net.Http.HttpContent/FixedMemoryStream System.Net.Http.HttpContent::buffer
	FixedMemoryStream_tDCEF941500AF29277C42DDF40970FB21B4A66188* ___buffer_0;
	// System.IO.Stream System.Net.Http.HttpContent::stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream_1;
	// System.Boolean System.Net.Http.HttpContent::disposed
	bool ___disposed_2;
	// System.Net.Http.Headers.HttpContentHeaders System.Net.Http.HttpContent::headers
	HttpContentHeaders_t4E2506F081BD682D0538A5CB38ED1D836C2E8C4F* ___headers_3;
};

// System.Net.Http.HttpMessageHandler
struct HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17  : public RuntimeObject
{
};

// System.Net.Http.HttpMessageInvoker
struct HttpMessageInvoker_t00698E3A7D5068564C401C7D3F90798056A04800  : public RuntimeObject
{
	// System.Net.Http.HttpMessageHandler System.Net.Http.HttpMessageInvoker::handler
	HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17* ___handler_0;
	// System.Boolean System.Net.Http.HttpMessageInvoker::disposeHandler
	bool ___disposeHandler_1;
};

// System.Net.Http.HttpResponseMessage
struct HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970  : public RuntimeObject
{
	// System.Net.Http.Headers.HttpResponseHeaders System.Net.Http.HttpResponseMessage::headers
	HttpResponseHeaders_tAD02F8CC2960BC561FEFD63E0121701743EAA7A8* ___headers_0;
	// System.String System.Net.Http.HttpResponseMessage::reasonPhrase
	String_t* ___reasonPhrase_1;
	// System.Net.HttpStatusCode System.Net.Http.HttpResponseMessage::statusCode
	int32_t ___statusCode_2;
	// System.Version System.Net.Http.HttpResponseMessage::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_3;
	// System.Boolean System.Net.Http.HttpResponseMessage::disposed
	bool ___disposed_4;
	// System.Net.Http.HttpContent System.Net.Http.HttpResponseMessage::<Content>k__BackingField
	HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* ___U3CContentU3Ek__BackingField_5;
	// System.Net.Http.HttpRequestMessage System.Net.Http.HttpResponseMessage::<RequestMessage>k__BackingField
	HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* ___U3CRequestMessageU3Ek__BackingField_6;
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

// Nethereum.JsonRpc.Client.RpcLogger
struct RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272  : public RuntimeObject
{
	// Microsoft.Extensions.Logging.ILogger Nethereum.JsonRpc.Client.RpcLogger::<Log>k__BackingField
	RuntimeObject* ___U3CLogU3Ek__BackingField_0;
	// System.String Nethereum.JsonRpc.Client.RpcLogger::<RequestJsonMessage>k__BackingField
	String_t* ___U3CRequestJsonMessageU3Ek__BackingField_1;
	// Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage Nethereum.JsonRpc.Client.RpcLogger::<ResponseMessage>k__BackingField
	RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* ___U3CResponseMessageU3Ek__BackingField_2;
};

// Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage
struct RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D  : public RuntimeObject
{
	// System.Object Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::<Id>k__BackingField
	RuntimeObject* ___U3CIdU3Ek__BackingField_0;
	// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::<JsonRpcVersion>k__BackingField
	String_t* ___U3CJsonRpcVersionU3Ek__BackingField_1;
	// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::<Method>k__BackingField
	String_t* ___U3CMethodU3Ek__BackingField_2;
	// System.Object Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::<RawParameters>k__BackingField
	RuntimeObject* ___U3CRawParametersU3Ek__BackingField_3;
};

// Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage
struct RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1  : public RuntimeObject
{
	// System.Object Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::<Id>k__BackingField
	RuntimeObject* ___U3CIdU3Ek__BackingField_0;
	// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::<JsonRpcVersion>k__BackingField
	String_t* ___U3CJsonRpcVersionU3Ek__BackingField_1;
	// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::<Result>k__BackingField
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___U3CResultU3Ek__BackingField_2;
	// Nethereum.JsonRpc.Client.RpcMessages.RpcError Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::<Error>k__BackingField
	RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* ___U3CErrorU3Ek__BackingField_3;
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
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

// Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo
struct BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B  : public RuntimeObject
{
	// System.String Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo::<UserName>k__BackingField
	String_t* ___U3CUserNameU3Ek__BackingField_0;
	// System.String Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo::<Password>k__BackingField
	String_t* ___U3CPasswordU3Ek__BackingField_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Net.Http.HttpResponseMessage>
struct ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>
struct ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.IO.Stream>
struct ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t06484715029D51A4420723456D165BAC63798F8D* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.ConstructorHandling>
struct Nullable_1_tE866C25CB8A73A44077AAC48B1D406CF034E1496 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateFormatHandling>
struct Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateParseHandling>
struct Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling>
struct Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling>
struct Nullable_1_t4DEE77C12DDAF72BAE2A1FA8A8736FC478D721E8 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling>
struct Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.FloatParseHandling>
struct Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.Formatting>
struct Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling>
struct Nullable_1_t0E2AF35997B80CE423EBCAFDC0C58FB7182CA6FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling>
struct Nullable_1_t776B72BEFF6E3E2D489C4C6D855C89139D6B4CA4 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.NullValueHandling>
struct Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling>
struct Nullable_1_t5ECEC9E2B3F1C050A3E9EC928487DD5C9AB0996D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling>
struct Nullable_1_t599FF2F862BEFE0F4B6BDA65B36841F4740B0D12 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling>
struct Nullable_1_t599F8D9D40143BFCB12D7085DFEA8AC7171F5E77 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling>
struct Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.TypeNameAssemblyFormatHandling>
struct Nullable_1_t762E380C63D6C0CB1E8ADBCADE57240FB061367F 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.TypeNameHandling>
struct Nullable_1_tB85AB604017196E6A3D3B920121E8C3A255827F0 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]>
struct Task_1_t521684A4C10415312B22F2EEE1222131B8703BF6  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E* ___m_result_22;
};

struct Task_1_t521684A4C10415312B22F2EEE1222131B8703BF6_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tD4A761D0FD661A130A29F8D71C85052A363FD0FE* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage>
struct Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* ___m_result_22;
};

struct Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7BDD01363BBCFF64B4A6BDDBBE222716A0B2E2BA* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>
struct Task_1_tC0061418037436F03DCF6A1FA753A1D429C67C60  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* ___m_result_22;
};

struct Task_1_tC0061418037436F03DCF6A1FA753A1D429C67C60_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t5B1C9960EF346DE5239570D805CD196794863B85* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.IO.Stream>
struct Task_1_t06484715029D51A4420723456D165BAC63798F8D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_result_22;
};

struct Task_1_t06484715029D51A4420723456D165BAC63798F8D_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tA522288A50DBBA4F2B2C1B7903E790568AC5E651* ___s_defaultFactory_23;
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

// System.Net.Http.ByteArrayContent
struct ByteArrayContent_tBF2970AB753D27DAEF2C2235A1A090944A8F386E  : public HttpContent_tD09737BB27CB151BC9688882F785208620211E1C
{
	// System.Byte[] System.Net.Http.ByteArrayContent::content
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___content_4;
	// System.Int32 System.Net.Http.ByteArrayContent::offset
	int32_t ___offset_5;
	// System.Int32 System.Net.Http.ByteArrayContent::count
	int32_t ___count_6;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Net.Http.HttpClientHandler
struct HttpClientHandler_t7D9EE7EA0696F7843BD008E618C49F95D99D5FAD  : public HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17
{
	// System.Net.Http.IMonoHttpClientHandler System.Net.Http.HttpClientHandler::_delegatingHandler
	RuntimeObject* ____delegatingHandler_0;
	// System.Net.Http.ClientCertificateOption System.Net.Http.HttpClientHandler::_clientCertificateOptions
	int32_t ____clientCertificateOptions_1;
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

// Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E 
{
	// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonPosition::Type
	int32_t ___Type_1;
	// System.Int32 Newtonsoft.Json.JsonPosition::Position
	int32_t ___Position_2;
	// System.String Newtonsoft.Json.JsonPosition::PropertyName
	String_t* ___PropertyName_3;
	// System.Boolean Newtonsoft.Json.JsonPosition::HasIndex
	bool ___HasIndex_4;
};

struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_StaticFields
{
	// System.Char[] Newtonsoft.Json.JsonPosition::SpecialCharacters
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___SpecialCharacters_0;
};
// Native definition for P/Invoke marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_pinvoke
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	char* ___PropertyName_3;
	int32_t ___HasIndex_4;
};
// Native definition for COM marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_com
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	Il2CppChar* ___PropertyName_3;
	int32_t ___HasIndex_4;
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

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// Newtonsoft.Json.Utilities.StringBuffer
struct StringBuffer_tCDD0DF688243FC93296397311678087BDC2FDEEB 
{
	// System.Char[] Newtonsoft.Json.Utilities.StringBuffer::_buffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____buffer_0;
	// System.Int32 Newtonsoft.Json.Utilities.StringBuffer::_position
	int32_t ____position_1;
};
// Native definition for P/Invoke marshalling of Newtonsoft.Json.Utilities.StringBuffer
struct StringBuffer_tCDD0DF688243FC93296397311678087BDC2FDEEB_marshaled_pinvoke
{
	uint8_t* ____buffer_0;
	int32_t ____position_1;
};
// Native definition for COM marshalling of Newtonsoft.Json.Utilities.StringBuffer
struct StringBuffer_tCDD0DF688243FC93296397311678087BDC2FDEEB_marshaled_com
{
	uint8_t* ____buffer_0;
	int32_t ____position_1;
};

// Newtonsoft.Json.Utilities.StringReference
struct StringReference_t699448489ADA552CAB49087CA0E213D0554EFE3C 
{
	// System.Char[] Newtonsoft.Json.Utilities.StringReference::_chars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____chars_0;
	// System.Int32 Newtonsoft.Json.Utilities.StringReference::_startIndex
	int32_t ____startIndex_1;
	// System.Int32 Newtonsoft.Json.Utilities.StringReference::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of Newtonsoft.Json.Utilities.StringReference
struct StringReference_t699448489ADA552CAB49087CA0E213D0554EFE3C_marshaled_pinvoke
{
	uint8_t* ____chars_0;
	int32_t ____startIndex_1;
	int32_t ____length_2;
};
// Native definition for COM marshalling of Newtonsoft.Json.Utilities.StringReference
struct StringReference_t699448489ADA552CAB49087CA0E213D0554EFE3C_marshaled_com
{
	uint8_t* ____chars_0;
	int32_t ____startIndex_1;
	int32_t ____length_2;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]>
struct AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t521684A4C10415312B22F2EEE1222131B8703BF6* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t521684A4C10415312B22F2EEE1222131B8703BF6* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>
struct AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tC0061418037436F03DCF6A1FA753A1D429C67C60* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tC0061418037436F03DCF6A1FA753A1D429C67C60* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Net.Http.HttpResponseMessage>
struct ConfiguredTaskAwaitable_1_t8CDF4BD8A651B04E9B68A1D1FBA52D4D98B9E9AD 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA ___m_configuredTaskAwaiter_0;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>
struct ConfiguredTaskAwaitable_1_t97C129EA63015240E6F9E767F4A120CC9122FEF8 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 ___m_configuredTaskAwaiter_0;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.IO.Stream>
struct ConfiguredTaskAwaitable_1_t8AF0FEBCC05402B6B9416E0286B45E21D42056AA 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2 ___m_configuredTaskAwaiter_0;
};

// System.Nullable`1<System.Runtime.Serialization.StreamingContext>
struct Nullable_1_tC3E8E254B9DCF808C08AFA1FC2151C2BC0040F3A 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___value_1;
};

// Nethereum.JsonRpc.Client.ClientBase
struct ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B  : public RuntimeObject
{
	// Nethereum.JsonRpc.Client.RequestInterceptor Nethereum.JsonRpc.Client.ClientBase::<OverridingRequestInterceptor>k__BackingField
	RequestInterceptor_t0B0D2629DBFF7C5098B4B4C21BCA63444BD502F0* ___U3COverridingRequestInterceptorU3Ek__BackingField_1;
};

struct ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_StaticFields
{
	// System.TimeSpan Nethereum.JsonRpc.Client.ClientBase::<ConnectionTimeout>k__BackingField
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___U3CConnectionTimeoutU3Ek__BackingField_0;
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

// System.Net.Http.HttpClient
struct HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42  : public HttpMessageInvoker_t00698E3A7D5068564C401C7D3F90798056A04800
{
	// System.Uri System.Net.Http.HttpClient::base_address
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___base_address_3;
	// System.Threading.CancellationTokenSource System.Net.Http.HttpClient::cts
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___cts_4;
	// System.Boolean System.Net.Http.HttpClient::disposed
	bool ___disposed_5;
	// System.Net.Http.Headers.HttpRequestHeaders System.Net.Http.HttpClient::headers
	HttpRequestHeaders_tAC1E0B2246D915164C80B7A7925DE31283788DF7* ___headers_6;
	// System.Int64 System.Net.Http.HttpClient::buffer_size
	int64_t ___buffer_size_7;
	// System.TimeSpan System.Net.Http.HttpClient::timeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeout_8;
};

struct HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42_StaticFields
{
	// System.TimeSpan System.Net.Http.HttpClient::TimeoutDefault
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___TimeoutDefault_2;
};

// System.Net.Http.Headers.HttpHeaders
struct HttpHeaders_t2AF7326A86CE4E4F524137C7A7FF8F3597C12449  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HttpHeaders/HeaderBucket> System.Net.Http.Headers.HttpHeaders::headers
	Dictionary_2_t1B3325E856D6A0623AE0B139B6A7E8B27C590A41* ___headers_1;
	// System.Net.Http.Headers.HttpHeaderKind System.Net.Http.Headers.HttpHeaders::HeaderKind
	int32_t ___HeaderKind_2;
	// System.Nullable`1<System.Boolean> System.Net.Http.Headers.HttpHeaders::connectionclose
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___connectionclose_3;
	// System.Nullable`1<System.Boolean> System.Net.Http.Headers.HttpHeaders::transferEncodingChunked
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___transferEncodingChunked_4;
};

struct HttpHeaders_t2AF7326A86CE4E4F524137C7A7FF8F3597C12449_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HeaderInfo> System.Net.Http.Headers.HttpHeaders::known_headers
	Dictionary_2_t5CD3F4D4D92A89783AE1C95F1528A7B08E8A54E0* ___known_headers_0;
};

// Newtonsoft.Json.JsonReader
struct JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765  : public RuntimeObject
{
	// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::_tokenType
	int32_t ____tokenType_0;
	// System.Object Newtonsoft.Json.JsonReader::_value
	RuntimeObject* ____value_1;
	// System.Char Newtonsoft.Json.JsonReader::_quoteChar
	Il2CppChar ____quoteChar_2;
	// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::_currentState
	int32_t ____currentState_3;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonReader::_currentPosition
	JsonPosition_t7788656A280615072710710E8C15D23285850E8E ____currentPosition_4;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonReader::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_5;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonReader::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_6;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_7;
	// System.Boolean Newtonsoft.Json.JsonReader::_hasExceededMaxDepth
	bool ____hasExceededMaxDepth_8;
	// Newtonsoft.Json.DateParseHandling Newtonsoft.Json.JsonReader::_dateParseHandling
	int32_t ____dateParseHandling_9;
	// Newtonsoft.Json.FloatParseHandling Newtonsoft.Json.JsonReader::_floatParseHandling
	int32_t ____floatParseHandling_10;
	// System.String Newtonsoft.Json.JsonReader::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonReader::_stack
	List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB* ____stack_12;
	// System.Boolean Newtonsoft.Json.JsonReader::<CloseInput>k__BackingField
	bool ___U3CCloseInputU3Ek__BackingField_13;
	// System.Boolean Newtonsoft.Json.JsonReader::<SupportMultipleContent>k__BackingField
	bool ___U3CSupportMultipleContentU3Ek__BackingField_14;
};

// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59  : public RuntimeObject
{
	// Newtonsoft.Json.TypeNameHandling Newtonsoft.Json.JsonSerializer::_typeNameHandling
	int32_t ____typeNameHandling_0;
	// Newtonsoft.Json.TypeNameAssemblyFormatHandling Newtonsoft.Json.JsonSerializer::_typeNameAssemblyFormatHandling
	int32_t ____typeNameAssemblyFormatHandling_1;
	// Newtonsoft.Json.PreserveReferencesHandling Newtonsoft.Json.JsonSerializer::_preserveReferencesHandling
	int32_t ____preserveReferencesHandling_2;
	// Newtonsoft.Json.ReferenceLoopHandling Newtonsoft.Json.JsonSerializer::_referenceLoopHandling
	int32_t ____referenceLoopHandling_3;
	// Newtonsoft.Json.MissingMemberHandling Newtonsoft.Json.JsonSerializer::_missingMemberHandling
	int32_t ____missingMemberHandling_4;
	// Newtonsoft.Json.ObjectCreationHandling Newtonsoft.Json.JsonSerializer::_objectCreationHandling
	int32_t ____objectCreationHandling_5;
	// Newtonsoft.Json.NullValueHandling Newtonsoft.Json.JsonSerializer::_nullValueHandling
	int32_t ____nullValueHandling_6;
	// Newtonsoft.Json.DefaultValueHandling Newtonsoft.Json.JsonSerializer::_defaultValueHandling
	int32_t ____defaultValueHandling_7;
	// Newtonsoft.Json.ConstructorHandling Newtonsoft.Json.JsonSerializer::_constructorHandling
	int32_t ____constructorHandling_8;
	// Newtonsoft.Json.MetadataPropertyHandling Newtonsoft.Json.JsonSerializer::_metadataPropertyHandling
	int32_t ____metadataPropertyHandling_9;
	// Newtonsoft.Json.JsonConverterCollection Newtonsoft.Json.JsonSerializer::_converters
	JsonConverterCollection_t6EEC84565C08B14107276B5023CE9E978DFCDF89* ____converters_10;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializer::_contractResolver
	RuntimeObject* ____contractResolver_11;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializer::_traceWriter
	RuntimeObject* ____traceWriter_12;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializer::_equalityComparer
	RuntimeObject* ____equalityComparer_13;
	// Newtonsoft.Json.Serialization.ISerializationBinder Newtonsoft.Json.JsonSerializer::_serializationBinder
	RuntimeObject* ____serializationBinder_14;
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializer::_context
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ____context_15;
	// Newtonsoft.Json.Serialization.IReferenceResolver Newtonsoft.Json.JsonSerializer::_referenceResolver
	RuntimeObject* ____referenceResolver_16;
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializer::_formatting
	Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E ____formatting_17;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializer::_dateFormatHandling
	Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 ____dateFormatHandling_18;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializer::_dateTimeZoneHandling
	Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 ____dateTimeZoneHandling_19;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializer::_dateParseHandling
	Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 ____dateParseHandling_20;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializer::_floatFormatHandling
	Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 ____floatFormatHandling_21;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializer::_floatParseHandling
	Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B ____floatParseHandling_22;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializer::_stringEscapeHandling
	Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 ____stringEscapeHandling_23;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializer::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_24;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializer::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_25;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_maxDepthSet
	bool ____maxDepthSet_26;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializer::_checkAdditionalContent
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____checkAdditionalContent_27;
	// System.String Newtonsoft.Json.JsonSerializer::_dateFormatString
	String_t* ____dateFormatString_28;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_dateFormatStringSet
	bool ____dateFormatStringSet_29;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializer::Error
	EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380* ___Error_30;
};

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_3;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_4;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_5;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_6;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_7;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_8;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_9;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_10;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_11;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_12;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_13;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_14;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_15;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_17;
};

struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
};

// System.Net.Http.StringContent
struct StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9  : public ByteArrayContent_tBF2970AB753D27DAEF2C2235A1A090944A8F386E
{
};

// System.Net.Http.Headers.HttpRequestHeaders
struct HttpRequestHeaders_tAC1E0B2246D915164C80B7A7925DE31283788DF7  : public HttpHeaders_t2AF7326A86CE4E4F524137C7A7FF8F3597C12449
{
	// System.Nullable`1<System.Boolean> System.Net.Http.Headers.HttpRequestHeaders::expectContinue
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___expectContinue_5;
};

// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF  : public RuntimeObject
{
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializerSettings::_formatting
	Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E ____formatting_22;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_dateFormatHandling
	Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 ____dateFormatHandling_23;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializerSettings::_dateTimeZoneHandling
	Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 ____dateTimeZoneHandling_24;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializerSettings::_dateParseHandling
	Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 ____dateParseHandling_25;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_floatFormatHandling
	Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 ____floatFormatHandling_26;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializerSettings::_floatParseHandling
	Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B ____floatParseHandling_27;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializerSettings::_stringEscapeHandling
	Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 ____stringEscapeHandling_28;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_29;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializerSettings::_checkAdditionalContent
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____checkAdditionalContent_30;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializerSettings::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_31;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_maxDepthSet
	bool ____maxDepthSet_32;
	// System.String Newtonsoft.Json.JsonSerializerSettings::_dateFormatString
	String_t* ____dateFormatString_33;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_dateFormatStringSet
	bool ____dateFormatStringSet_34;
	// System.Nullable`1<Newtonsoft.Json.TypeNameAssemblyFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameAssemblyFormatHandling
	Nullable_1_t762E380C63D6C0CB1E8ADBCADE57240FB061367F ____typeNameAssemblyFormatHandling_35;
	// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling> Newtonsoft.Json.JsonSerializerSettings::_defaultValueHandling
	Nullable_1_t4DEE77C12DDAF72BAE2A1FA8A8736FC478D721E8 ____defaultValueHandling_36;
	// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling> Newtonsoft.Json.JsonSerializerSettings::_preserveReferencesHandling
	Nullable_1_t599FF2F862BEFE0F4B6BDA65B36841F4740B0D12 ____preserveReferencesHandling_37;
	// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.JsonSerializerSettings::_nullValueHandling
	Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 ____nullValueHandling_38;
	// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling> Newtonsoft.Json.JsonSerializerSettings::_objectCreationHandling
	Nullable_1_t5ECEC9E2B3F1C050A3E9EC928487DD5C9AB0996D ____objectCreationHandling_39;
	// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling> Newtonsoft.Json.JsonSerializerSettings::_missingMemberHandling
	Nullable_1_t776B72BEFF6E3E2D489C4C6D855C89139D6B4CA4 ____missingMemberHandling_40;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.JsonSerializerSettings::_referenceLoopHandling
	Nullable_1_t599F8D9D40143BFCB12D7085DFEA8AC7171F5E77 ____referenceLoopHandling_41;
	// System.Nullable`1<System.Runtime.Serialization.StreamingContext> Newtonsoft.Json.JsonSerializerSettings::_context
	Nullable_1_tC3E8E254B9DCF808C08AFA1FC2151C2BC0040F3A ____context_42;
	// System.Nullable`1<Newtonsoft.Json.ConstructorHandling> Newtonsoft.Json.JsonSerializerSettings::_constructorHandling
	Nullable_1_tE866C25CB8A73A44077AAC48B1D406CF034E1496 ____constructorHandling_43;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameHandling
	Nullable_1_tB85AB604017196E6A3D3B920121E8C3A255827F0 ____typeNameHandling_44;
	// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling> Newtonsoft.Json.JsonSerializerSettings::_metadataPropertyHandling
	Nullable_1_t0E2AF35997B80CE423EBCAFDC0C58FB7182CA6FE ____metadataPropertyHandling_45;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter> Newtonsoft.Json.JsonSerializerSettings::<Converters>k__BackingField
	RuntimeObject* ___U3CConvertersU3Ek__BackingField_46;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializerSettings::<ContractResolver>k__BackingField
	RuntimeObject* ___U3CContractResolverU3Ek__BackingField_47;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializerSettings::<EqualityComparer>k__BackingField
	RuntimeObject* ___U3CEqualityComparerU3Ek__BackingField_48;
	// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver> Newtonsoft.Json.JsonSerializerSettings::<ReferenceResolverProvider>k__BackingField
	Func_1_t78E8B13F3C7D6CC3EB821B4F5D26999D062417E2* ___U3CReferenceResolverProviderU3Ek__BackingField_49;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializerSettings::<TraceWriter>k__BackingField
	RuntimeObject* ___U3CTraceWriterU3Ek__BackingField_50;
	// Newtonsoft.Json.Serialization.ISerializationBinder Newtonsoft.Json.JsonSerializerSettings::<SerializationBinder>k__BackingField
	RuntimeObject* ___U3CSerializationBinderU3Ek__BackingField_51;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializerSettings::<Error>k__BackingField
	EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380* ___U3CErrorU3Ek__BackingField_52;
};

struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_StaticFields
{
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializerSettings::DefaultContext
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___DefaultContext_9;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::DefaultCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___DefaultCulture_18;
};

// Newtonsoft.Json.JsonTextReader
struct JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E  : public JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765
{
	// System.Boolean Newtonsoft.Json.JsonTextReader::_safeAsync
	bool ____safeAsync_15;
	// System.IO.TextReader Newtonsoft.Json.JsonTextReader::_reader
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ____reader_19;
	// System.Char[] Newtonsoft.Json.JsonTextReader::_chars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____chars_20;
	// System.Int32 Newtonsoft.Json.JsonTextReader::_charsUsed
	int32_t ____charsUsed_21;
	// System.Int32 Newtonsoft.Json.JsonTextReader::_charPos
	int32_t ____charPos_22;
	// System.Int32 Newtonsoft.Json.JsonTextReader::_lineStartPos
	int32_t ____lineStartPos_23;
	// System.Int32 Newtonsoft.Json.JsonTextReader::_lineNumber
	int32_t ____lineNumber_24;
	// System.Boolean Newtonsoft.Json.JsonTextReader::_isEndOfFile
	bool ____isEndOfFile_25;
	// Newtonsoft.Json.Utilities.StringBuffer Newtonsoft.Json.JsonTextReader::_stringBuffer
	StringBuffer_tCDD0DF688243FC93296397311678087BDC2FDEEB ____stringBuffer_26;
	// Newtonsoft.Json.Utilities.StringReference Newtonsoft.Json.JsonTextReader::_stringReference
	StringReference_t699448489ADA552CAB49087CA0E213D0554EFE3C ____stringReference_27;
	// Newtonsoft.Json.IArrayPool`1<System.Char> Newtonsoft.Json.JsonTextReader::_arrayPool
	RuntimeObject* ____arrayPool_28;
	// Newtonsoft.Json.JsonNameTable Newtonsoft.Json.JsonTextReader::<PropertyNameTable>k__BackingField
	JsonNameTable_t0B2C7BA303E82F2C1E3C1176620FA86FA3BB611F* ___U3CPropertyNameTableU3Ek__BackingField_29;
};

// Nethereum.JsonRpc.Client.RpcClient
struct RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9  : public ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B
{
	// System.Net.Http.Headers.AuthenticationHeaderValue Nethereum.JsonRpc.Client.RpcClient::_authHeaderValue
	AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* ____authHeaderValue_4;
	// System.Uri Nethereum.JsonRpc.Client.RpcClient::_baseUrl
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ____baseUrl_5;
	// System.Net.Http.HttpClientHandler Nethereum.JsonRpc.Client.RpcClient::_httpClientHandler
	HttpClientHandler_t7D9EE7EA0696F7843BD008E618C49F95D99D5FAD* ____httpClientHandler_6;
	// Microsoft.Extensions.Logging.ILogger Nethereum.JsonRpc.Client.RpcClient::_log
	RuntimeObject* ____log_7;
	// Newtonsoft.Json.JsonSerializerSettings Nethereum.JsonRpc.Client.RpcClient::_jsonSerializerSettings
	JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ____jsonSerializerSettings_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Nethereum.JsonRpc.Client.RpcClient::_firstHttpClient
	bool ____firstHttpClient_9;
	// System.Net.Http.HttpClient Nethereum.JsonRpc.Client.RpcClient::_httpClient
	HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* ____httpClient_10;
	// System.Net.Http.HttpClient Nethereum.JsonRpc.Client.RpcClient::_httpClient2
	HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* ____httpClient2_11;
	// System.Boolean Nethereum.JsonRpc.Client.RpcClient::_rotateHttpClients
	bool ____rotateHttpClients_12;
	// System.DateTime Nethereum.JsonRpc.Client.RpcClient::_httpClientLastCreatedAt
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____httpClientLastCreatedAt_13;
	// System.Object Nethereum.JsonRpc.Client.RpcClient::_lockObject
	RuntimeObject* ____lockObject_14;
};

struct RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9_StaticFields
{
	// System.Int32 Nethereum.JsonRpc.Client.RpcClient::<MaximumConnectionsPerServer>k__BackingField
	int32_t ___U3CMaximumConnectionsPerServerU3Ek__BackingField_3;
};

// Nethereum.JsonRpc.Client.RpcClientTimeoutException
struct RpcClientTimeoutException_t6705F8007F759185D010A0E822189E2554BB20AF  : public Exception_t
{
};

// Nethereum.JsonRpc.Client.RpcClientUnknownException
struct RpcClientUnknownException_tFF48990C365A31D6AFB630B612733B30AE3DA2C1  : public Exception_t
{
};

// Nethereum.JsonRpc.Client.SimpleRpcClient
struct SimpleRpcClient_t3A3EEC4E97A2B3CC93D6F6C0E8A021C281C8EE15  : public ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B
{
	// Newtonsoft.Json.JsonSerializerSettings Nethereum.JsonRpc.Client.SimpleRpcClient::_jsonSerializerSettings
	JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ____jsonSerializerSettings_2;
	// System.Net.Http.HttpClient Nethereum.JsonRpc.Client.SimpleRpcClient::_httpClient
	HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* ____httpClient_3;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__19
struct U3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9 
{
	// System.Int32 Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]> Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__19::<>t__builder
	AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF ___U3CU3Et__builder_1;
	// Nethereum.JsonRpc.Client.RpcClient Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__19::<>4__this
	RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* ___U3CU3E4__this_2;
	// Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage[] Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__19::requests
	RpcRequestMessageU5BU5D_t751C41D82385D4F97A408969DB7033B16596FE0E* ___requests_3;
	// Nethereum.JsonRpc.Client.RpcLogger Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__19::<logger>5__2
	RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* ___U3CloggerU3E5__2_4;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Net.Http.HttpResponseMessage> Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__19::<>u__1
	ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA ___U3CU3Eu__1_5;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.IO.Stream> Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__19::<>u__2
	ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2 ___U3CU3Eu__2_6;
};

// Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__20
struct U3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C 
{
	// System.Int32 Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage> Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__20::<>t__builder
	AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F ___U3CU3Et__builder_1;
	// Nethereum.JsonRpc.Client.RpcClient Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__20::<>4__this
	RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* ___U3CU3E4__this_2;
	// Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__20::request
	RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* ___request_3;
	// System.String Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__20::route
	String_t* ___route_4;
	// Nethereum.JsonRpc.Client.RpcLogger Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__20::<logger>5__2
	RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* ___U3CloggerU3E5__2_5;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Net.Http.HttpResponseMessage> Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__20::<>u__1
	ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA ___U3CU3Eu__1_6;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.IO.Stream> Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__20::<>u__2
	ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2 ___U3CU3Eu__2_7;
};

// Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__3
struct U3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0 
{
	// System.Int32 Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage> Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__3::<>t__builder
	AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F ___U3CU3Et__builder_1;
	// Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__3::request
	RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* ___request_2;
	// Nethereum.JsonRpc.Client.SimpleRpcClient Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__3::<>4__this
	SimpleRpcClient_t3A3EEC4E97A2B3CC93D6F6C0E8A021C281C8EE15* ___U3CU3E4__this_3;
	// System.String Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__3::route
	String_t* ___route_4;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Net.Http.HttpResponseMessage> Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__3::<>u__1
	ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA ___U3CU3Eu__1_5;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.IO.Stream> Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__3::<>u__2
	ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2 ___U3CU3Eu__2_6;
};

// Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__4
struct U3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0 
{
	// System.Int32 Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]> Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__4::<>t__builder
	AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF ___U3CU3Et__builder_1;
	// Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage[] Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__4::requests
	RpcRequestMessageU5BU5D_t751C41D82385D4F97A408969DB7033B16596FE0E* ___requests_2;
	// Nethereum.JsonRpc.Client.SimpleRpcClient Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__4::<>4__this
	SimpleRpcClient_t3A3EEC4E97A2B3CC93D6F6C0E8A021C281C8EE15* ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Net.Http.HttpResponseMessage> Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__4::<>u__1
	ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA ___U3CU3Eu__1_4;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.IO.Stream> Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__4::<>u__2
	ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2 ___U3CU3Eu__2_5;
};

// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken_18;
};

// System.Threading.Tasks.TaskCanceledException
struct TaskCanceledException_tDF877A81B2CD292CC0FBC2332962A8C07DE2A08E  : public OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662
{
	// System.Threading.Tasks.Task System.Threading.Tasks.TaskCanceledException::_canceledTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____canceledTask_19;
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
// Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage[]
struct RpcRequestMessageU5BU5D_t751C41D82385D4F97A408969DB7033B16596FE0E  : public RuntimeArray
{
	ALIGN_FIELD (8) RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* m_Items[1];

	inline RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]
struct RpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E  : public RuntimeArray
{
	ALIGN_FIELD (8) RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* m_Items[1];

	inline RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__19>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9_m6661F52065D9E8100301AAAA3B465D581CBA67DA_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__20>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C_m88B99DB5174A85176F0F47656BE730E655B9C66B_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C* ___stateMachine0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.Object>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t97C129EA63015240E6F9E767F4A120CC9122FEF8 Task_1_ConfigureAwait_m9D6420C859925B7C250DED7586DD770C91632070_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 ConfiguredTaskAwaitable_1_GetAwaiter_m10364C3B0A904803E890B2D75674665F986BDAB2_gshared_inline (ConfiguredTaskAwaitable_1_t97C129EA63015240E6F9E767F4A120CC9122FEF8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mD6243A7544181F96816A5F81459F4B66908ADB5E_gshared (ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__19>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9_m9E4C954CA832470CD2E8E79ACD0C4888F64D790A_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* ___awaiter0, U3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConfiguredTaskAwaiter_GetResult_m00ABE5C46A983C38086438B7A7CB2C62296B3383_gshared (ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* __this, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonSerializer::Deserialize<System.Object>(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonSerializer_Deserialize_TisRuntimeObject_m887812E4D7F06E92950AB4CA73CA8F31EDB09BFC_gshared (JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__20>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C_m05AA7465B26485820F74580CDA2855F131AE3D67_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* ___awaiter0, U3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__3>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0_m947683C5DC3CBD9FF42CFC432646C470BC8989DD_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__4>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0_m1B9147A04917611CC490E5751B69845B4E593791_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__3>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0_mC65C98DA75046B58236C85C64E9CDEF53F62D5A8_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* ___awaiter0, U3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__4>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0_m15489C378F91CA0019E61C075A257F3431C8418A_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* ___awaiter0, U3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0* ___stateMachine1, const RuntimeMethod* method) ;

// Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo Nethereum.JsonRpc.Client.UserAuthentication::GetBasicAuthenticationUserInfoFromUri(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* UserAuthentication_GetBasicAuthenticationUserInfoFromUri_m154EB74BEC986E385C771BDC71FA14CF3770127A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.String Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo::get_UserName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BasicAuthenticationUserInfo_get_UserName_m2D03CDEAD0C5650B8F8A1E40246F5C74EBFFB878_inline (BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* __this, const RuntimeMethod* method) ;
// System.String Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo::get_Password()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BasicAuthenticationUserInfo_get_Password_m24F1B6573F3AD6F32496C53283E433AF918C0931_inline (BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String System.Convert::ToBase64String(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inArray0, const RuntimeMethod* method) ;
// System.Void System.Net.Http.Headers.AuthenticationHeaderValue::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationHeaderValue__ctor_mB300A148851A28CD01FB63314836E75DADD1B399 (AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* __this, String_t* ___scheme0, String_t* ___parameter1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.ClientBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBase__ctor_m0B889E5EAAB7307F82C7EBDE29769C0076DADDB5 (ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B* __this, const RuntimeMethod* method) ;
// System.Net.Http.Headers.AuthenticationHeaderValue Nethereum.JsonRpc.Client.BasicAuthenticationHeaderHelper::GetBasicAuthenticationHeaderValueFromUri(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* BasicAuthenticationHeaderHelper_GetBasicAuthenticationHeaderValueFromUri_m779A851BB2D8D7444B898EB976E3219561B7D7E9 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri0, const RuntimeMethod* method) ;
// Newtonsoft.Json.JsonSerializerSettings Nethereum.JsonRpc.Client.DefaultJsonSerializerSettingsFactory::BuildDefaultJsonSerializerSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* DefaultJsonSerializerSettingsFactory_BuildDefaultJsonSerializerSettings_mD1C6DC5E0BAD49854BD2E512F7D5A41D8FB7F521 (const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcClient::CreateNewRotatedHttpClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcClient_CreateNewRotatedHttpClient_mF2EF1B76A03217EA1B53F717E714D3B22C587BFB (RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Http.HttpClientHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpClientHandler__ctor_m6357CCF5F420EF85F578EA8ECB5001E58A5C52AC (HttpClientHandler_t7D9EE7EA0696F7843BD008E618C49F95D99D5FAD* __this, const RuntimeMethod* method) ;
// System.Int32 Nethereum.JsonRpc.Client.RpcClient::get_MaximumConnectionsPerServer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RpcClient_get_MaximumConnectionsPerServer_mB0183831D02E2202FEA24EA4EA9A9ED30BCD96B6_inline (const RuntimeMethod* method) ;
// System.Void System.Net.Http.HttpClientHandler::set_MaxConnectionsPerServer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpClientHandler_set_MaxConnectionsPerServer_m10497AEA239CD5C1EFA092A2D3E6C0DB854B6E3D (HttpClientHandler_t7D9EE7EA0696F7843BD008E618C49F95D99D5FAD* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcClient::InitialiseHttpClient(System.Net.Http.HttpClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcClient_InitialiseHttpClient_m14C651097EB1B25B6AA68A58FDB2036EE6CC71ED (RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* __this, HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* ___httpClient0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]>::Create()
inline AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF AsyncTaskMethodBuilder_1_Create_m52090EDC7750E3D8B5DEFB22F05CA4796CD5FCA7 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]>::Start<Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__19>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9_m13069CBE242957617C6A16CAAA9947B62CDBC017 (AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF* __this, U3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF*, U3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9_m6661F52065D9E8100301AAAA3B465D581CBA67DA_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]>::get_Task()
inline Task_1_t521684A4C10415312B22F2EEE1222131B8703BF6* AsyncTaskMethodBuilder_1_get_Task_m370E645F9EEB260C09C268797E72BF24D81F8DB9 (AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t521684A4C10415312B22F2EEE1222131B8703BF6* (*) (AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::Create()
inline AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F AsyncTaskMethodBuilder_1_Create_m01F336A9A5C8AD522F3562B75C6EB452E5B09F5A (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::Start<Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__20>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C_m656083FC2145DB6D8856C7E4EDB5C9DEE26A8A97 (AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F* __this, U3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F*, U3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C_m88B99DB5174A85176F0F47656BE730E655B9C66B_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::get_Task()
inline Task_1_tC0061418037436F03DCF6A1FA753A1D429C67C60* AsyncTaskMethodBuilder_1_get_Task_mEBA213E036CC4EA76DE7DDFB3083EAF5220A8E38 (AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tC0061418037436F03DCF6A1FA753A1D429C67C60* (*) (AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA (const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d21, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Net.Http.HttpClient Nethereum.JsonRpc.Client.RpcClient::GetClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* RpcClient_GetClient_mE2C06C9D85C2D83A7894B0AE4FA728B050FBE071 (RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* __this, const RuntimeMethod* method) ;
// System.Net.Http.HttpClient Nethereum.JsonRpc.Client.RpcClient::CreateNewHttpClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* RpcClient_CreateNewHttpClient_mF0B1AFF97DC71130036EA1DF542963D8C7AB8530 (RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Http.HttpClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpClient__ctor_mD64C48138600CF1398E7BB24BF33EB582ECB1AFD (HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Http.HttpClient::.ctor(System.Net.Http.HttpMessageHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpClient__ctor_m8576B495665CC46BCF2D212052733B50C2F7B597 (HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* __this, HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17* ___handler0, const RuntimeMethod* method) ;
// System.Net.Http.HttpMessageHandler Nethereum.JsonRpc.Client.RpcClient::GetDefaultHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17* RpcClient_GetDefaultHandler_mBDC8FF55336F102489406DE780FEBE67D7474431 (const RuntimeMethod* method) ;
// System.Net.Http.Headers.HttpRequestHeaders System.Net.Http.HttpClient::get_DefaultRequestHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequestHeaders_tAC1E0B2246D915164C80B7A7925DE31283788DF7* HttpClient_get_DefaultRequestHeaders_m4BBE4A267D373F4A4677A2C8A92FDE393E440918 (HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Http.Headers.HttpRequestHeaders::set_Authorization(System.Net.Http.Headers.AuthenticationHeaderValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpRequestHeaders_set_Authorization_m3F73D5BBB5B7FF82CF6F5F59A6FCF340D65D19D5 (HttpRequestHeaders_tAC1E0B2246D915164C80B7A7925DE31283788DF7* __this, AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* ___value0, const RuntimeMethod* method) ;
// System.Void System.Net.Http.HttpClient::set_BaseAddress(System.Uri)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpClient_set_BaseAddress_mB894313F9EA76DC08382B3499F33216ED9CF4C48_inline (HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcLogger::.ctor(Microsoft.Extensions.Logging.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcLogger__ctor_mF2A9D330819C3C239EC6D5A0B3E29AAAC780B9EF (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, RuntimeObject* ___log0, const RuntimeMethod* method) ;
// System.Net.Http.HttpClient Nethereum.JsonRpc.Client.RpcClient::GetOrCreateHttpClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* RpcClient_GetOrCreateHttpClient_m5C494AE8B4284263F55FF362E355C86F0B9C0EE9 (RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* __this, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object,Newtonsoft.Json.JsonSerializerSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_SerializeObject_mEAA691E5567819FD0CDFEBB98629609ADB899D25 (RuntimeObject* ___value0, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___settings1, const RuntimeMethod* method) ;
// System.Void System.Net.Http.StringContent::.ctor(System.String,System.Text.Encoding,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringContent__ctor_mFA0D8BF1997C7B433B2C8371976440840A45AA63 (StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9* __this, String_t* ___content0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, String_t* ___mediaType2, const RuntimeMethod* method) ;
// System.Void System.Threading.CancellationTokenSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource__ctor_m2ADB5D13368A9D364C20BB6039EC6DE858735E2C (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* __this, const RuntimeMethod* method) ;
// System.TimeSpan Nethereum.JsonRpc.Client.ClientBase::get_ConnectionTimeout()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ClientBase_get_ConnectionTimeout_m06FA22606E824EF1CD46EC1D7432DC8A06E272DF_inline (const RuntimeMethod* method) ;
// System.Void System.Threading.CancellationTokenSource::CancelAfter(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource_CancelAfter_mC81CF6E81C5205DF6C2528B3AC624EF48D3B2B43 (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___delay0, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcLogger::LogRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcLogger_LogRequest_mA715CC7280C345F8130C90A7F0946CBF6BB78D02 (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, String_t* ___requestJsonMessage0, const RuntimeMethod* method) ;
// System.Threading.CancellationToken System.Threading.CancellationTokenSource::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationTokenSource_get_Token_m0FEC575DDDA2947476EE5D9B8F8AC887A4EEE3C4 (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage> System.Net.Http.HttpClient::PostAsync(System.String,System.Net.Http.HttpContent,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* HttpClient_PostAsync_mA79CE0DED944CDB3C848793128070008B6F155F8 (HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* __this, String_t* ___requestUri0, HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* ___content1, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken2, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t8CDF4BD8A651B04E9B68A1D1FBA52D4D98B9E9AD Task_1_ConfigureAwait_m25EFF82BDCE95D202B2F11CEAE4BF1645FD47504 (Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t8CDF4BD8A651B04E9B68A1D1FBA52D4D98B9E9AD (*) (Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023*, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m9D6420C859925B7C250DED7586DD770C91632070_gshared)(__this, ___continueOnCapturedContext0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Net.Http.HttpResponseMessage>::GetAwaiter()
inline ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA ConfiguredTaskAwaitable_1_GetAwaiter_m82E11E4D5A7D93F6C6535712CB0D9A19E0B3F1A6_inline (ConfiguredTaskAwaitable_1_t8CDF4BD8A651B04E9B68A1D1FBA52D4D98B9E9AD* __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA (*) (ConfiguredTaskAwaitable_1_t8CDF4BD8A651B04E9B68A1D1FBA52D4D98B9E9AD*, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m10364C3B0A904803E890B2D75674665F986BDAB2_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Net.Http.HttpResponseMessage>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_mAE5B09203993E840EC9B1093F11D767B90D0F249 (ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA*, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_mD6243A7544181F96816A5F81459F4B66908ADB5E_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Net.Http.HttpResponseMessage>,Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__19>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9_mF9A247083992319FB9C537642724392142DD5D0F (AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF* __this, ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA* ___awaiter0, U3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF*, ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA*, U3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9_m9E4C954CA832470CD2E8E79ACD0C4888F64D790A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Net.Http.HttpResponseMessage>::GetResult()
inline HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* ConfiguredTaskAwaiter_GetResult_mA6D771EE9708FACC33CA8BFDF2356EB65C51550A (ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA* __this, const RuntimeMethod* method)
{
	return ((  HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* (*) (ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA*, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m00ABE5C46A983C38086438B7A7CB2C62296B3383_gshared)(__this, method);
}
// System.Net.Http.HttpResponseMessage System.Net.Http.HttpResponseMessage::EnsureSuccessStatusCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* HttpResponseMessage_EnsureSuccessStatusCode_m9B3196715BFBEEC6946D0C082DE33C4C43C00210 (HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* __this, const RuntimeMethod* method) ;
// System.Net.Http.HttpContent System.Net.Http.HttpResponseMessage::get_Content()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* HttpResponseMessage_get_Content_m2350C12EA59DAD014A59B17398E5B50F62202AF6_inline (HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.IO.Stream> System.Net.Http.HttpContent::ReadAsStreamAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t06484715029D51A4420723456D165BAC63798F8D* HttpContent_ReadAsStreamAsync_m7C4323126B463483F4B8E702CD61F8661B89CD10 (HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.IO.Stream>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t8AF0FEBCC05402B6B9416E0286B45E21D42056AA Task_1_ConfigureAwait_m623E0E89F5E23F844E733FB75503B8AD97120277 (Task_1_t06484715029D51A4420723456D165BAC63798F8D* __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t8AF0FEBCC05402B6B9416E0286B45E21D42056AA (*) (Task_1_t06484715029D51A4420723456D165BAC63798F8D*, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m9D6420C859925B7C250DED7586DD770C91632070_gshared)(__this, ___continueOnCapturedContext0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.IO.Stream>::GetAwaiter()
inline ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2 ConfiguredTaskAwaitable_1_GetAwaiter_m73EC0AA35D69C7BD9CB8CF0401218F54D50A3F5A_inline (ConfiguredTaskAwaitable_1_t8AF0FEBCC05402B6B9416E0286B45E21D42056AA* __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2 (*) (ConfiguredTaskAwaitable_1_t8AF0FEBCC05402B6B9416E0286B45E21D42056AA*, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m10364C3B0A904803E890B2D75674665F986BDAB2_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.IO.Stream>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_m02D8819042F353E9808D8FD683CE7A85E070B46E (ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2*, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_mD6243A7544181F96816A5F81459F4B66908ADB5E_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.IO.Stream>,Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__19>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2_TisU3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9_m1B85AC7A83F0F6D31567F1E28F81E9FB165E1DD6 (AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF* __this, ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2* ___awaiter0, U3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF*, ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2*, U3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9_m9E4C954CA832470CD2E8E79ACD0C4888F64D790A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.IO.Stream>::GetResult()
inline Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ConfiguredTaskAwaiter_GetResult_mC3B711F8D7B7CFCA514C0A3FD4F6B2EC77BAD2DD (ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2* __this, const RuntimeMethod* method)
{
	return ((  Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* (*) (ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2*, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m00ABE5C46A983C38086438B7A7CB2C62296B3383_gshared)(__this, method);
}
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonTextReader::.ctor(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonTextReader__ctor_m362F27D5EA7CEE0A9BDBF46FE235D8558146C10D (JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader0, const RuntimeMethod* method) ;
// Newtonsoft.Json.JsonSerializer Newtonsoft.Json.JsonSerializer::Create(Newtonsoft.Json.JsonSerializerSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* JsonSerializer_Create_m1030D503AE4455241212085D4C07B6E878A44AFB (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___settings0, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonSerializer::Deserialize<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]>(Newtonsoft.Json.JsonReader)
inline RpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E* JsonSerializer_Deserialize_TisRpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E_m4917091376BC659AFB6B04287B5EC9BED17F49E2 (JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, const RuntimeMethod* method)
{
	return ((  RpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E* (*) (JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59*, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765*, const RuntimeMethod*))JsonSerializer_Deserialize_TisRuntimeObject_m887812E4D7F06E92950AB4CA73CA8F31EDB09BFC_gshared)(__this, ___reader0, method);
}
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcClientTimeoutException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcClientTimeoutException__ctor_mF1352073E00F6DBA1B15C4A16E38A112FA4D4483 (RpcClientTimeoutException_t6705F8007F759185D010A0E822189E2554BB20AF* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcLogger::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcLogger_LogException_m0FEFC87F52B2FEC3B480F3DCFF42BD96FAC88BE6 (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, Exception_t* ___ex0, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcClientUnknownException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcClientUnknownException__ctor_m91C6A7CC6E0368156778D0EF236270A9DD67C597 (RpcClientUnknownException_tFF48990C365A31D6AFB630B612733B30AE3DA2C1* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m9D70C765E9688DB85026E548C2A79251CC93EA7B (AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mADF00E9133B0A0E8944ECF7DC9E504E057464527 (AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF* __this, RpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF*, RpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__19_MoveNext_m9F87DC02C68C7439558DE19E1FB1F1362AF18030 (U3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m3A57F8DB8C304C3CAA196D98B5F150687FB30B6D (AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__19_SetStateMachine_mCF1507A272DCDF7F2CBDB4A2F120B4436405D8C5 (U3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Net.Http.HttpResponseMessage>,Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__20>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C_mA800B83D368FF954B7F384DA6D1A866775D426C0 (AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F* __this, ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA* ___awaiter0, U3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F*, ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA*, U3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C_m05AA7465B26485820F74580CDA2855F131AE3D67_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.IO.Stream>,Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__20>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2_TisU3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C_m9835AD493A7517BCBC29E3FAB5DA7B1DA15CD126 (AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F* __this, ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2* ___awaiter0, U3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F*, ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2*, U3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C_m05AA7465B26485820F74580CDA2855F131AE3D67_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// T Newtonsoft.Json.JsonSerializer::Deserialize<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>(Newtonsoft.Json.JsonReader)
inline RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* JsonSerializer_Deserialize_TisRpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1_m5F582FE23CBF1F23D18D3294FB08197DF5B16970 (JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, const RuntimeMethod* method)
{
	return ((  RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* (*) (JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59*, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765*, const RuntimeMethod*))JsonSerializer_Deserialize_TisRuntimeObject_m887812E4D7F06E92950AB4CA73CA8F31EDB09BFC_gshared)(__this, ___reader0, method);
}
// System.Void Nethereum.JsonRpc.Client.RpcLogger::LogResponse(Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcLogger_LogResponse_m5AB896D42204392EF335B2FF2979C9EB5266626C (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* ___responseMessage0, const RuntimeMethod* method) ;
// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::get_Method()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RpcRequestMessage_get_Method_mC80080EF982AA09703A1B06C9CCDE059EEFBB3B8_inline (RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m681F5CAA0A000471C03F97CFB40AA690DDBDFC0D (AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m1E2CD33CFDC79FD034B354BA338B1DF65CF21C6E (AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F* __this, RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F*, RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__20_MoveNext_m86C0036EBD8DD00717652F39013C482A222F99F5 (U3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m4AA37E67E5C26A021760A9D90C566A8CC9E07AFA (AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__20::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__20_SetStateMachine_m84018050A0BD817BAACEA7CBE9B181E9FA6FE813 (U3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::Start<Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__3>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0_m6C7EE436C40BEA620E8B111844E76931426F2CCA (AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F* __this, U3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F*, U3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0_m947683C5DC3CBD9FF42CFC432646C470BC8989DD_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]>::Start<Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__4>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0_m7C548A36CC3F940DE44643D7F13228C481EF6ED0 (AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF* __this, U3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF*, U3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0_m1B9147A04917611CC490E5751B69845B4E593791_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Net.Http.HttpResponseMessage>,Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__3>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0_m098C6682B993F254487C2ED84C9C50DDB9573548 (AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F* __this, ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA* ___awaiter0, U3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F*, ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA*, U3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0_mC65C98DA75046B58236C85C64E9CDEF53F62D5A8_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.IO.Stream>,Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__3>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2_TisU3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0_mA69CB5A1E5E563D855A5572199C4A74100919E65 (AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F* __this, ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2* ___awaiter0, U3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F*, ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2*, U3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0_mC65C98DA75046B58236C85C64E9CDEF53F62D5A8_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__3_MoveNext_m9802850B4B8D63F92434BB81AD60BCFDFF0C7BF1 (U3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__3_SetStateMachine_mD43D6A624A197C3CB440CE93E36D83F2F066B27C (U3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Net.Http.HttpResponseMessage>,Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__4>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0_m86DB1BFF84134D9503C5F14EB66601AE961944E7 (AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF* __this, ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA* ___awaiter0, U3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF*, ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA*, U3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0_m15489C378F91CA0019E61C075A257F3431C8418A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.IO.Stream>,Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__4>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2_TisU3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0_mF9B9AFF41D7891FE5CF0CA69BD9F11368107910F (AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF* __this, ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2* ___awaiter0, U3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF*, ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2*, U3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0_m15489C378F91CA0019E61C075A257F3431C8418A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__4_MoveNext_m150F410881E73971F44161CB8D494E80E84DA73C (U3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__4_SetStateMachine_m7DF7F6C0B22638E47F3B2C718C2B466122E46A52 (U3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
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
// System.Net.Http.Headers.AuthenticationHeaderValue Nethereum.JsonRpc.Client.BasicAuthenticationHeaderHelper::GetBasicAuthenticationHeaderValueFromUri(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* BasicAuthenticationHeaderHelper_GetBasicAuthenticationHeaderValueFromUri_m779A851BB2D8D7444B898EB976E3219561B7D7E9 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA01C4F4897E2641F90F7C00FF6187381E937B194);
		s_Il2CppMethodInitialized = true;
	}
	BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___uri0;
		BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* L_1;
		L_1 = UserAuthentication_GetBasicAuthenticationUserInfoFromUri_m154EB74BEC986E385C771BDC71FA14CF3770127A(L_0, NULL);
		V_0 = L_1;
		BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* L_2 = V_0;
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
		L_3 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = BasicAuthenticationUserInfo_get_UserName_m2D03CDEAD0C5650B8F8A1E40246F5C74EBFFB878_inline(L_4, NULL);
		BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = BasicAuthenticationUserInfo_get_Password_m24F1B6573F3AD6F32496C53283E433AF918C0931_inline(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_5, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_7, NULL);
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, L_8);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_10, NULL);
		AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* L_12 = (AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A*)il2cpp_codegen_object_new(AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		AuthenticationHeaderValue__ctor_mB300A148851A28CD01FB63314836E75DADD1B399(L_12, _stringLiteralA01C4F4897E2641F90F7C00FF6187381E937B194, L_11, NULL);
		return L_12;
	}

IL_003c:
	{
		return (AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A*)NULL;
	}
}
// System.Void Nethereum.JsonRpc.Client.BasicAuthenticationHeaderHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticationHeaderHelper__ctor_m145CF402EADD19BB43302022A9EF67B51E4C876C (BasicAuthenticationHeaderHelper_t89AE82ED5CB91BE77035651CB27D11F72AAA0F8A* __this, const RuntimeMethod* method) 
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
// System.Int32 Nethereum.JsonRpc.Client.RpcClient::get_MaximumConnectionsPerServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RpcClient_get_MaximumConnectionsPerServer_mB0183831D02E2202FEA24EA4EA9A9ED30BCD96B6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9_il2cpp_TypeInfo_var);
		int32_t L_0 = ((RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9_StaticFields*)il2cpp_codegen_static_fields_for(RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9_il2cpp_TypeInfo_var))->___U3CMaximumConnectionsPerServerU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcClient::set_MaximumConnectionsPerServer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcClient_set_MaximumConnectionsPerServer_m49173C56DD8CEC170657443373F96D5356AEB455 (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9_il2cpp_TypeInfo_var);
		((RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9_StaticFields*)il2cpp_codegen_static_fields_for(RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9_il2cpp_TypeInfo_var))->___U3CMaximumConnectionsPerServerU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcClient::.ctor(System.Uri,System.Net.Http.Headers.AuthenticationHeaderValue,Newtonsoft.Json.JsonSerializerSettings,System.Net.Http.HttpClientHandler,Microsoft.Extensions.Logging.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcClient__ctor_mBFE198548929936548EF742AF25626EC2DC394F0 (RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___baseUrl0, AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* ___authHeaderValue1, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___jsonSerializerSettings2, HttpClientHandler_t7D9EE7EA0696F7843BD008E618C49F95D99D5FAD* ___httpClientHandler3, RuntimeObject* ___log4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____rotateHttpClients_12 = (bool)1;
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->____lockObject_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lockObject_14), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_il2cpp_TypeInfo_var);
		ClientBase__ctor_m0B889E5EAAB7307F82C7EBDE29769C0076DADDB5(__this, NULL);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1 = ___baseUrl0;
		__this->____baseUrl_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____baseUrl_5), (void*)L_1);
		AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* L_2 = ___authHeaderValue1;
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_3 = ___baseUrl0;
		AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* L_4;
		L_4 = BasicAuthenticationHeaderHelper_GetBasicAuthenticationHeaderValueFromUri_m779A851BB2D8D7444B898EB976E3219561B7D7E9(L_3, NULL);
		___authHeaderValue1 = L_4;
	}

IL_002a:
	{
		AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* L_5 = ___authHeaderValue1;
		__this->____authHeaderValue_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____authHeaderValue_4), (void*)L_5);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_6 = ___jsonSerializerSettings2;
		if (L_6)
		{
			goto IL_003b;
		}
	}
	{
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_7;
		L_7 = DefaultJsonSerializerSettingsFactory_BuildDefaultJsonSerializerSettings_mD1C6DC5E0BAD49854BD2E512F7D5A41D8FB7F521(NULL);
		___jsonSerializerSettings2 = L_7;
	}

IL_003b:
	{
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_8 = ___jsonSerializerSettings2;
		__this->____jsonSerializerSettings_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jsonSerializerSettings_8), (void*)L_8);
		HttpClientHandler_t7D9EE7EA0696F7843BD008E618C49F95D99D5FAD* L_9 = ___httpClientHandler3;
		__this->____httpClientHandler_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____httpClientHandler_6), (void*)L_9);
		RuntimeObject* L_10 = ___log4;
		__this->____log_7 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____log_7), (void*)L_10);
		RpcClient_CreateNewRotatedHttpClient_mF2EF1B76A03217EA1B53F717E714D3B22C587BFB(__this, NULL);
		return;
	}
}
// System.Net.Http.HttpMessageHandler Nethereum.JsonRpc.Client.RpcClient::GetDefaultHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17* RpcClient_GetDefaultHandler_mBDC8FF55336F102489406DE780FEBE67D7474431 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpClientHandler_t7D9EE7EA0696F7843BD008E618C49F95D99D5FAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		HttpClientHandler_t7D9EE7EA0696F7843BD008E618C49F95D99D5FAD* L_0 = (HttpClientHandler_t7D9EE7EA0696F7843BD008E618C49F95D99D5FAD*)il2cpp_codegen_object_new(HttpClientHandler_t7D9EE7EA0696F7843BD008E618C49F95D99D5FAD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HttpClientHandler__ctor_m6357CCF5F420EF85F578EA8ECB5001E58A5C52AC(L_0, NULL);
		HttpClientHandler_t7D9EE7EA0696F7843BD008E618C49F95D99D5FAD* L_1 = L_0;
		il2cpp_codegen_runtime_class_init_inline(RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = RpcClient_get_MaximumConnectionsPerServer_mB0183831D02E2202FEA24EA4EA9A9ED30BCD96B6_inline(NULL);
		NullCheck(L_1);
		HttpClientHandler_set_MaxConnectionsPerServer_m10497AEA239CD5C1EFA092A2D3E6C0DB854B6E3D(L_1, L_2, NULL);
		V_0 = L_1;
		goto IL_0018;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0013;
		}
		throw e;
	}

CATCH_0013:
	{// begin catch(System.Object)
		V_0 = (HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0018;
	}// end catch (depth: 1)

IL_0018:
	{
		HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17* L_3 = V_0;
		return L_3;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcClient::.ctor(System.Uri,System.Net.Http.HttpClient,System.Net.Http.Headers.AuthenticationHeaderValue,Newtonsoft.Json.JsonSerializerSettings,Microsoft.Extensions.Logging.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcClient__ctor_m45C2A5260ABBBAF9536E550FE81254BD25C1D33F (RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___baseUrl0, HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* ___httpClient1, AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* ___authHeaderValue2, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___jsonSerializerSettings3, RuntimeObject* ___log4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____rotateHttpClients_12 = (bool)1;
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->____lockObject_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lockObject_14), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_il2cpp_TypeInfo_var);
		ClientBase__ctor_m0B889E5EAAB7307F82C7EBDE29769C0076DADDB5(__this, NULL);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1 = ___baseUrl0;
		__this->____baseUrl_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____baseUrl_5), (void*)L_1);
		AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* L_2 = ___authHeaderValue2;
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_3 = ___baseUrl0;
		AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* L_4;
		L_4 = BasicAuthenticationHeaderHelper_GetBasicAuthenticationHeaderValueFromUri_m779A851BB2D8D7444B898EB976E3219561B7D7E9(L_3, NULL);
		___authHeaderValue2 = L_4;
	}

IL_002a:
	{
		AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* L_5 = ___authHeaderValue2;
		__this->____authHeaderValue_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____authHeaderValue_4), (void*)L_5);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_6 = ___jsonSerializerSettings3;
		if (L_6)
		{
			goto IL_003c;
		}
	}
	{
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_7;
		L_7 = DefaultJsonSerializerSettingsFactory_BuildDefaultJsonSerializerSettings_mD1C6DC5E0BAD49854BD2E512F7D5A41D8FB7F521(NULL);
		___jsonSerializerSettings3 = L_7;
	}

IL_003c:
	{
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_8 = ___jsonSerializerSettings3;
		__this->____jsonSerializerSettings_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jsonSerializerSettings_8), (void*)L_8);
		RuntimeObject* L_9 = ___log4;
		__this->____log_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____log_7), (void*)L_9);
		HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_10 = ___httpClient1;
		RpcClient_InitialiseHttpClient_m14C651097EB1B25B6AA68A58FDB2036EE6CC71ED(__this, L_10, NULL);
		HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_11 = ___httpClient1;
		__this->____httpClient_10 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____httpClient_10), (void*)L_11);
		__this->____rotateHttpClients_12 = (bool)0;
		return;
	}
}
// System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]> Nethereum.JsonRpc.Client.RpcClient::SendAsync(Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t521684A4C10415312B22F2EEE1222131B8703BF6* RpcClient_SendAsync_m56C0E0E53819EDFF4BDCB2E3F343D092D41506A9 (RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* __this, RpcRequestMessageU5BU5D_t751C41D82385D4F97A408969DB7033B16596FE0E* ___requests0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m52090EDC7750E3D8B5DEFB22F05CA4796CD5FCA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9_m13069CBE242957617C6A16CAAA9947B62CDBC017_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m370E645F9EEB260C09C268797E72BF24D81F8DB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m52090EDC7750E3D8B5DEFB22F05CA4796CD5FCA7(AsyncTaskMethodBuilder_1_Create_m52090EDC7750E3D8B5DEFB22F05CA4796CD5FCA7_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		RpcRequestMessageU5BU5D_t751C41D82385D4F97A408969DB7033B16596FE0E* L_1 = ___requests0;
		(&V_0)->___requests_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___requests_3), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9_m13069CBE242957617C6A16CAAA9947B62CDBC017(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9_m13069CBE242957617C6A16CAAA9947B62CDBC017_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t521684A4C10415312B22F2EEE1222131B8703BF6* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m370E645F9EEB260C09C268797E72BF24D81F8DB9(L_3, AsyncTaskMethodBuilder_1_get_Task_m370E645F9EEB260C09C268797E72BF24D81F8DB9_RuntimeMethod_var);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage> Nethereum.JsonRpc.Client.RpcClient::SendAsync(Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC0061418037436F03DCF6A1FA753A1D429C67C60* RpcClient_SendAsync_mF2CF652D4B32B6911E90DDAB9E493E460849C495 (RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* __this, RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* ___request0, String_t* ___route1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m01F336A9A5C8AD522F3562B75C6EB452E5B09F5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C_m656083FC2145DB6D8856C7E4EDB5C9DEE26A8A97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mEBA213E036CC4EA76DE7DDFB3083EAF5220A8E38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m01F336A9A5C8AD522F3562B75C6EB452E5B09F5A(AsyncTaskMethodBuilder_1_Create_m01F336A9A5C8AD522F3562B75C6EB452E5B09F5A_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* L_1 = ___request0;
		(&V_0)->___request_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___request_3), (void*)L_1);
		String_t* L_2 = ___route1;
		(&V_0)->___route_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___route_4), (void*)L_2);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C_m656083FC2145DB6D8856C7E4EDB5C9DEE26A8A97(L_3, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C_m656083FC2145DB6D8856C7E4EDB5C9DEE26A8A97_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_tC0061418037436F03DCF6A1FA753A1D429C67C60* L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_mEBA213E036CC4EA76DE7DDFB3083EAF5220A8E38(L_4, AsyncTaskMethodBuilder_1_get_Task_mEBA213E036CC4EA76DE7DDFB3083EAF5220A8E38_RuntimeMethod_var);
		return L_5;
	}
}
// System.Net.Http.HttpClient Nethereum.JsonRpc.Client.RpcClient::GetOrCreateHttpClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* RpcClient_GetOrCreateHttpClient_m5C494AE8B4284263F55FF362E355C86F0B9C0EE9 (RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_2;
	memset((&V_2), 0, sizeof(V_2));
	HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* V_3 = NULL;
	{
		bool L_0 = __this->____rotateHttpClients_12;
		if (!L_0)
		{
			goto IL_0055;
		}
	}
	{
		RuntimeObject* L_1 = __this->____lockObject_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004b:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_0054;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_0054:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
				DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
				L_5 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
				DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6 = __this->____httpClientLastCreatedAt_13;
				TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_7;
				L_7 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_5, L_6, NULL);
				V_2 = L_7;
				double L_8;
				L_8 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_2), NULL);
				if ((!(((double)L_8) > ((double)(60.0)))))
				{
					goto IL_0042_1;
				}
			}
			{
				RpcClient_CreateNewRotatedHttpClient_mF2EF1B76A03217EA1B53F717E714D3B22C587BFB(__this, NULL);
			}

IL_0042_1:
			{
				HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_9;
				L_9 = RpcClient_GetClient_mE2C06C9D85C2D83A7894B0AE4FA728B050FBE071(__this, NULL);
				V_3 = L_9;
				goto IL_005c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0055:
	{
		HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_10;
		L_10 = RpcClient_GetClient_mE2C06C9D85C2D83A7894B0AE4FA728B050FBE071(__this, NULL);
		return L_10;
	}

IL_005c:
	{
		HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_11 = V_3;
		return L_11;
	}
}
// System.Net.Http.HttpClient Nethereum.JsonRpc.Client.RpcClient::GetClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* RpcClient_GetClient_mE2C06C9D85C2D83A7894B0AE4FA728B050FBE071 (RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* V_2 = NULL;
	HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* G_B5_0 = NULL;
	{
		bool L_0 = __this->____rotateHttpClients_12;
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		RuntimeObject* L_1 = __this->____lockObject_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_003d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				bool L_5 = __this->____firstHttpClient_9;
				il2cpp_codegen_memory_barrier();
				if (L_5)
				{
					goto IL_002b_1;
				}
			}
			{
				HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_6 = __this->____httpClient2_11;
				G_B5_0 = L_6;
				goto IL_0031_1;
			}

IL_002b_1:
			{
				HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_7 = __this->____httpClient_10;
				G_B5_0 = L_7;
			}

IL_0031_1:
			{
				V_2 = G_B5_0;
				goto IL_0045;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_8 = __this->____httpClient_10;
		return L_8;
	}

IL_0045:
	{
		HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_9 = V_2;
		return L_9;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcClient::CreateNewRotatedHttpClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcClient_CreateNewRotatedHttpClient_mF2EF1B76A03217EA1B53F717E714D3B22C587BFB (RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_0;
		L_0 = RpcClient_CreateNewHttpClient_mF0B1AFF97DC71130036EA1DF542963D8C7AB8530(__this, NULL);
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		__this->____httpClientLastCreatedAt_13 = L_1;
		bool L_2 = __this->____firstHttpClient_9;
		il2cpp_codegen_memory_barrier();
		if (!L_2)
		{
			goto IL_0049;
		}
	}
	{
		RuntimeObject* L_3 = __this->____lockObject_14;
		V_1 = L_3;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{// begin finally (depth: 1)
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0048;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_5, NULL);
				}

IL_0048:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_6 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_6, (&V_2), NULL);
			il2cpp_codegen_memory_barrier();
			__this->____firstHttpClient_9 = (bool)0;
			HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_7 = V_0;
			__this->____httpClient2_11 = L_7;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____httpClient2_11), (void*)L_7);
			goto IL_0076;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		RuntimeObject* L_8 = __this->____lockObject_14;
		V_1 = L_8;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006c:
			{// begin finally (depth: 1)
				{
					bool L_9 = V_2;
					if (!L_9)
					{
						goto IL_0075;
					}
				}
				{
					RuntimeObject* L_10 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_10, NULL);
				}

IL_0075:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_11 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_11, (&V_2), NULL);
			il2cpp_codegen_memory_barrier();
			__this->____firstHttpClient_9 = (bool)1;
			HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_12 = V_0;
			__this->____httpClient_10 = L_12;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____httpClient_10), (void*)L_12);
			goto IL_0076;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0076:
	{
		return;
	}
}
// System.Net.Http.HttpClient Nethereum.JsonRpc.Client.RpcClient::CreateNewHttpClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* RpcClient_CreateNewHttpClient_mF0B1AFF97DC71130036EA1DF542963D8C7AB8530 (RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* V_0 = NULL;
	HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17* V_1 = NULL;
	{
		HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_0 = (HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42*)il2cpp_codegen_object_new(HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HttpClient__ctor_mD64C48138600CF1398E7BB24BF33EB582ECB1AFD(L_0, NULL);
		V_0 = L_0;
		HttpClientHandler_t7D9EE7EA0696F7843BD008E618C49F95D99D5FAD* L_1 = __this->____httpClientHandler_6;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		HttpClientHandler_t7D9EE7EA0696F7843BD008E618C49F95D99D5FAD* L_2 = __this->____httpClientHandler_6;
		HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_3 = (HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42*)il2cpp_codegen_object_new(HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HttpClient__ctor_m8576B495665CC46BCF2D212052733B50C2F7B597(L_3, L_2, NULL);
		V_0 = L_3;
		goto IL_002c;
	}

IL_001c:
	{
		il2cpp_codegen_runtime_class_init_inline(RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9_il2cpp_TypeInfo_var);
		HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17* L_4;
		L_4 = RpcClient_GetDefaultHandler_mBDC8FF55336F102489406DE780FEBE67D7474431(NULL);
		V_1 = L_4;
		HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17* L_5 = V_1;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17* L_6 = V_1;
		HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_7 = (HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42*)il2cpp_codegen_object_new(HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		HttpClient__ctor_m8576B495665CC46BCF2D212052733B50C2F7B597(L_7, L_6, NULL);
		V_0 = L_7;
	}

IL_002c:
	{
		HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_8 = V_0;
		RpcClient_InitialiseHttpClient_m14C651097EB1B25B6AA68A58FDB2036EE6CC71ED(__this, L_8, NULL);
		HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_9 = V_0;
		return L_9;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcClient::InitialiseHttpClient(System.Net.Http.HttpClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcClient_InitialiseHttpClient_m14C651097EB1B25B6AA68A58FDB2036EE6CC71ED (RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* __this, HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* ___httpClient0, const RuntimeMethod* method) 
{
	{
		HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_0 = ___httpClient0;
		NullCheck(L_0);
		HttpRequestHeaders_tAC1E0B2246D915164C80B7A7925DE31283788DF7* L_1;
		L_1 = HttpClient_get_DefaultRequestHeaders_m4BBE4A267D373F4A4677A2C8A92FDE393E440918(L_0, NULL);
		AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* L_2 = __this->____authHeaderValue_4;
		NullCheck(L_1);
		HttpRequestHeaders_set_Authorization_m3F73D5BBB5B7FF82CF6F5F59A6FCF340D65D19D5(L_1, L_2, NULL);
		HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_3 = ___httpClient0;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_4 = __this->____baseUrl_5;
		NullCheck(L_3);
		HttpClient_set_BaseAddress_mB894313F9EA76DC08382B3499F33216ED9CF4C48_inline(L_3, L_4, NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcClient::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcClient__cctor_m033A77C13C8D55AD99CCE2A6A7B5A9FDFB8CA0DA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9_StaticFields*)il2cpp_codegen_static_fields_for(RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9_il2cpp_TypeInfo_var))->___U3CMaximumConnectionsPerServerU3Ek__BackingField_3 = ((int32_t)20);
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
// System.Void Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__19_MoveNext_m9F87DC02C68C7439558DE19E1FB1F1362AF18030 (U3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2_TisU3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9_m1B85AC7A83F0F6D31567F1E28F81E9FB165E1DD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9_mF9A247083992319FB9C537642724392142DD5D0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mADF00E9133B0A0E8944ECF7DC9E504E057464527_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m73EC0AA35D69C7BD9CB8CF0401218F54D50A3F5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m82E11E4D5A7D93F6C6535712CB0D9A19E0B3F1A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mA6D771EE9708FACC33CA8BFDF2356EB65C51550A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mC3B711F8D7B7CFCA514C0A3FD4F6B2EC77BAD2DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_m02D8819042F353E9808D8FD683CE7A85E070B46E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mAE5B09203993E840EC9B1093F11D767B90D0F249_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Deserialize_TisRpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E_m4917091376BC659AFB6B04287B5EC9BED17F49E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m25EFF82BDCE95D202B2F11CEAE4BF1645FD47504_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m623E0E89F5E23F844E733FB75503B8AD97120277_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* V_1 = NULL;
	RpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E* V_2 = NULL;
	String_t* V_3 = NULL;
	StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9* V_4 = NULL;
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* V_5 = NULL;
	ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA V_6;
	memset((&V_6), 0, sizeof(V_6));
	ConfiguredTaskAwaitable_1_t8CDF4BD8A651B04E9B68A1D1FBA52D4D98B9E9AD V_7;
	memset((&V_7), 0, sizeof(V_7));
	ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	ConfiguredTaskAwaitable_1_t8AF0FEBCC05402B6B9416E0286B45E21D42056AA V_9;
	memset((&V_9), 0, sizeof(V_9));
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_10 = NULL;
	JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E* V_11 = NULL;
	TaskCanceledException_tDF877A81B2CD292CC0FBC2332962A8C07DE2A08E* V_12 = NULL;
	RpcClientTimeoutException_t6705F8007F759185D010A0E822189E2554BB20AF* V_13 = NULL;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_14;
	memset((&V_14), 0, sizeof(V_14));
	Exception_t* V_15 = NULL;
	RpcClientUnknownException_tFF48990C365A31D6AFB630B612733B30AE3DA2C1* V_16 = NULL;
	Exception_t* V_17 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if ((!(((uint32_t)L_2) > ((uint32_t)1))))
			{
				goto IL_0023_1;
			}
		}
		{
			RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject* L_4 = L_3->____log_7;
			RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* L_5 = (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272*)il2cpp_codegen_object_new(RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			RpcLogger__ctor_mF2A9D330819C3C239EC6D5A0B3E29AAAC780B9EF(L_5, L_4, NULL);
			__this->___U3CloggerU3E5__2_4 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CloggerU3E5__2_4), (void*)L_5);
		}

IL_0023_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_00cb_2;
				}
			}
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_013e_2;
				}
			}
			{
				RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* L_8 = V_1;
				NullCheck(L_8);
				HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_9;
				L_9 = RpcClient_GetOrCreateHttpClient_m5C494AE8B4284263F55FF362E355C86F0B9C0EE9(L_8, NULL);
				RpcRequestMessageU5BU5D_t751C41D82385D4F97A408969DB7033B16596FE0E* L_10 = __this->___requests_3;
				RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* L_11 = V_1;
				NullCheck(L_11);
				JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_12 = L_11->____jsonSerializerSettings_8;
				il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
				String_t* L_13;
				L_13 = JsonConvert_SerializeObject_mEAA691E5567819FD0CDFEBB98629609ADB899D25((RuntimeObject*)L_10, L_12, NULL);
				V_3 = L_13;
				String_t* L_14 = V_3;
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_15;
				L_15 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
				StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9* L_16 = (StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9*)il2cpp_codegen_object_new(StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9_il2cpp_TypeInfo_var);
				NullCheck(L_16);
				StringContent__ctor_mFA0D8BF1997C7B433B2C8371976440840A45AA63(L_16, L_14, L_15, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
				V_4 = L_16;
				CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_17 = (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)il2cpp_codegen_object_new(CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
				NullCheck(L_17);
				CancellationTokenSource__ctor_m2ADB5D13368A9D364C20BB6039EC6DE858735E2C(L_17, NULL);
				V_5 = L_17;
				CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_18 = V_5;
				il2cpp_codegen_runtime_class_init_inline(ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_il2cpp_TypeInfo_var);
				TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_19;
				L_19 = ClientBase_get_ConnectionTimeout_m06FA22606E824EF1CD46EC1D7432DC8A06E272DF_inline(NULL);
				NullCheck(L_18);
				CancellationTokenSource_CancelAfter_mC81CF6E81C5205DF6C2528B3AC624EF48D3B2B43(L_18, L_19, NULL);
				RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* L_20 = __this->___U3CloggerU3E5__2_4;
				String_t* L_21 = V_3;
				NullCheck(L_20);
				RpcLogger_LogRequest_mA715CC7280C345F8130C90A7F0946CBF6BB78D02(L_20, L_21, NULL);
				String_t* L_22 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
				StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9* L_23 = V_4;
				CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_24 = V_5;
				NullCheck(L_24);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_25;
				L_25 = CancellationTokenSource_get_Token_m0FEC575DDDA2947476EE5D9B8F8AC887A4EEE3C4(L_24, NULL);
				NullCheck(L_9);
				Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* L_26;
				L_26 = HttpClient_PostAsync_mA79CE0DED944CDB3C848793128070008B6F155F8(L_9, L_22, L_23, L_25, NULL);
				NullCheck(L_26);
				ConfiguredTaskAwaitable_1_t8CDF4BD8A651B04E9B68A1D1FBA52D4D98B9E9AD L_27;
				L_27 = Task_1_ConfigureAwait_m25EFF82BDCE95D202B2F11CEAE4BF1645FD47504(L_26, (bool)0, Task_1_ConfigureAwait_m25EFF82BDCE95D202B2F11CEAE4BF1645FD47504_RuntimeMethod_var);
				V_7 = L_27;
				ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA L_28;
				L_28 = ConfiguredTaskAwaitable_1_GetAwaiter_m82E11E4D5A7D93F6C6535712CB0D9A19E0B3F1A6_inline((&V_7), ConfiguredTaskAwaitable_1_GetAwaiter_m82E11E4D5A7D93F6C6535712CB0D9A19E0B3F1A6_RuntimeMethod_var);
				V_6 = L_28;
				bool L_29;
				L_29 = ConfiguredTaskAwaiter_get_IsCompleted_mAE5B09203993E840EC9B1093F11D767B90D0F249((&V_6), ConfiguredTaskAwaiter_get_IsCompleted_mAE5B09203993E840EC9B1093F11D767B90D0F249_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_00e8_2;
				}
			}
			{
				int32_t L_30 = 0;
				V_0 = L_30;
				__this->___U3CU3E1__state_0 = L_30;
				ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA L_31 = V_6;
				__this->___U3CU3Eu__1_5 = L_31;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF* L_32 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9_mF9A247083992319FB9C537642724392142DD5D0F(L_32, (&V_6), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9_mF9A247083992319FB9C537642724392142DD5D0F_RuntimeMethod_var);
				goto IL_023d;
			}

IL_00cb_2:
			{
				ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA L_33 = __this->___U3CU3Eu__1_5;
				V_6 = L_33;
				ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA* L_34 = (&__this->___U3CU3Eu__1_5);
				il2cpp_codegen_initobj(L_34, sizeof(ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state_0 = L_35;
			}

IL_00e8_2:
			{
				HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_36;
				L_36 = ConfiguredTaskAwaiter_GetResult_mA6D771EE9708FACC33CA8BFDF2356EB65C51550A((&V_6), ConfiguredTaskAwaiter_GetResult_mA6D771EE9708FACC33CA8BFDF2356EB65C51550A_RuntimeMethod_var);
				HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_37 = L_36;
				NullCheck(L_37);
				HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_38;
				L_38 = HttpResponseMessage_EnsureSuccessStatusCode_m9B3196715BFBEEC6946D0C082DE33C4C43C00210(L_37, NULL);
				NullCheck(L_37);
				HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* L_39;
				L_39 = HttpResponseMessage_get_Content_m2350C12EA59DAD014A59B17398E5B50F62202AF6_inline(L_37, NULL);
				NullCheck(L_39);
				Task_1_t06484715029D51A4420723456D165BAC63798F8D* L_40;
				L_40 = HttpContent_ReadAsStreamAsync_m7C4323126B463483F4B8E702CD61F8661B89CD10(L_39, NULL);
				NullCheck(L_40);
				ConfiguredTaskAwaitable_1_t8AF0FEBCC05402B6B9416E0286B45E21D42056AA L_41;
				L_41 = Task_1_ConfigureAwait_m623E0E89F5E23F844E733FB75503B8AD97120277(L_40, (bool)0, Task_1_ConfigureAwait_m623E0E89F5E23F844E733FB75503B8AD97120277_RuntimeMethod_var);
				V_9 = L_41;
				ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2 L_42;
				L_42 = ConfiguredTaskAwaitable_1_GetAwaiter_m73EC0AA35D69C7BD9CB8CF0401218F54D50A3F5A_inline((&V_9), ConfiguredTaskAwaitable_1_GetAwaiter_m73EC0AA35D69C7BD9CB8CF0401218F54D50A3F5A_RuntimeMethod_var);
				V_8 = L_42;
				bool L_43;
				L_43 = ConfiguredTaskAwaiter_get_IsCompleted_m02D8819042F353E9808D8FD683CE7A85E070B46E((&V_8), ConfiguredTaskAwaiter_get_IsCompleted_m02D8819042F353E9808D8FD683CE7A85E070B46E_RuntimeMethod_var);
				if (L_43)
				{
					goto IL_015b_2;
				}
			}
			{
				int32_t L_44 = 1;
				V_0 = L_44;
				__this->___U3CU3E1__state_0 = L_44;
				ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2 L_45 = V_8;
				__this->___U3CU3Eu__2_6 = L_45;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_6))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF* L_46 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2_TisU3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9_m1B85AC7A83F0F6D31567F1E28F81E9FB165E1DD6(L_46, (&V_8), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2_TisU3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9_m1B85AC7A83F0F6D31567F1E28F81E9FB165E1DD6_RuntimeMethod_var);
				goto IL_023d;
			}

IL_013e_2:
			{
				ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2 L_47 = __this->___U3CU3Eu__2_6;
				V_8 = L_47;
				ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2* L_48 = (&__this->___U3CU3Eu__2_6);
				il2cpp_codegen_initobj(L_48, sizeof(ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2));
				int32_t L_49 = (-1);
				V_0 = L_49;
				__this->___U3CU3E1__state_0 = L_49;
			}

IL_015b_2:
			{
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_50;
				L_50 = ConfiguredTaskAwaiter_GetResult_mC3B711F8D7B7CFCA514C0A3FD4F6B2EC77BAD2DD((&V_8), ConfiguredTaskAwaiter_GetResult_mC3B711F8D7B7CFCA514C0A3FD4F6B2EC77BAD2DD_RuntimeMethod_var);
				StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_51 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
				NullCheck(L_51);
				StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(L_51, L_50, NULL);
				V_10 = L_51;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_019a_2:
					{// begin finally (depth: 3)
						{
							int32_t L_52 = V_0;
							if ((((int32_t)L_52) >= ((int32_t)0)))
							{
								goto IL_01a9_2;
							}
						}
						{
							StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_53 = V_10;
							if (!L_53)
							{
								goto IL_01a9_2;
							}
						}
						{
							StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_54 = V_10;
							NullCheck(L_54);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_54);
						}

IL_01a9_2:
						{
							return;
						}
					}// end finally (depth: 3)
				});
				try
				{// begin try (depth: 3)
					{
						StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_55 = V_10;
						JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E* L_56 = (JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E*)il2cpp_codegen_object_new(JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E_il2cpp_TypeInfo_var);
						NullCheck(L_56);
						JsonTextReader__ctor_m362F27D5EA7CEE0A9BDBF46FE235D8558146C10D(L_56, L_55, NULL);
						V_11 = L_56;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_018a_3:
							{// begin finally (depth: 4)
								{
									int32_t L_57 = V_0;
									if ((((int32_t)L_57) >= ((int32_t)0)))
									{
										goto IL_0199_3;
									}
								}
								{
									JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E* L_58 = V_11;
									if (!L_58)
									{
										goto IL_0199_3;
									}
								}
								{
									JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E* L_59 = V_11;
									NullCheck(L_59);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_59);
								}

IL_0199_3:
								{
									return;
								}
							}// end finally (depth: 4)
						});
						try
						{// begin try (depth: 4)
							RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* L_60 = V_1;
							NullCheck(L_60);
							JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_61 = L_60->____jsonSerializerSettings_8;
							JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_62;
							L_62 = JsonSerializer_Create_m1030D503AE4455241212085D4C07B6E878A44AFB(L_61, NULL);
							JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E* L_63 = V_11;
							NullCheck(L_62);
							RpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E* L_64;
							L_64 = JsonSerializer_Deserialize_TisRpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E_m4917091376BC659AFB6B04287B5EC9BED17F49E2(L_62, L_63, JsonSerializer_Deserialize_TisRpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E_m4917091376BC659AFB6B04287B5EC9BED17F49E2_RuntimeMethod_var);
							V_2 = L_64;
							goto IL_0222;
						}// end try (depth: 4)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}
				}// end try (depth: 3)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TaskCanceledException_tDF877A81B2CD292CC0FBC2332962A8C07DE2A08E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01aa_1;
			}
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01e2_1;
			}
			throw e;
		}

CATCH_01aa_1:
		{// begin catch(System.Threading.Tasks.TaskCanceledException)
			V_12 = ((TaskCanceledException_tDF877A81B2CD292CC0FBC2332962A8C07DE2A08E*)IL2CPP_GET_ACTIVE_EXCEPTION(TaskCanceledException_tDF877A81B2CD292CC0FBC2332962A8C07DE2A08E*));
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_il2cpp_TypeInfo_var)));
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_65;
			L_65 = ClientBase_get_ConnectionTimeout_m06FA22606E824EF1CD46EC1D7432DC8A06E272DF_inline(NULL);
			V_14 = L_65;
			double L_66;
			L_66 = TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF((&V_14), NULL);
			double L_67 = L_66;
			RuntimeObject* L_68 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)), &L_67);
			String_t* L_69;
			L_69 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDAC8226B79869EA87017AB5229861615BC0660A6)), L_68, NULL);
			TaskCanceledException_tDF877A81B2CD292CC0FBC2332962A8C07DE2A08E* L_70 = V_12;
			RpcClientTimeoutException_t6705F8007F759185D010A0E822189E2554BB20AF* L_71 = (RpcClientTimeoutException_t6705F8007F759185D010A0E822189E2554BB20AF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RpcClientTimeoutException_t6705F8007F759185D010A0E822189E2554BB20AF_il2cpp_TypeInfo_var)));
			NullCheck(L_71);
			RpcClientTimeoutException__ctor_mF1352073E00F6DBA1B15C4A16E38A112FA4D4483(L_71, L_69, L_70, NULL);
			V_13 = L_71;
			RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* L_72 = __this->___U3CloggerU3E5__2_4;
			RpcClientTimeoutException_t6705F8007F759185D010A0E822189E2554BB20AF* L_73 = V_13;
			NullCheck(L_72);
			RpcLogger_LogException_m0FEFC87F52B2FEC3B480F3DCFF42BD96FAC88BE6(L_72, L_73, NULL);
			RpcClientTimeoutException_t6705F8007F759185D010A0E822189E2554BB20AF* L_74 = V_13;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_74, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendAsyncU3Ed__19_MoveNext_m9F87DC02C68C7439558DE19E1FB1F1362AF18030_RuntimeMethod_var)));
		}// end catch (depth: 2)

CATCH_01e2_1:
		{// begin catch(System.Exception)
			V_15 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			Exception_t* L_75 = V_15;
			RpcClientUnknownException_tFF48990C365A31D6AFB630B612733B30AE3DA2C1* L_76 = (RpcClientUnknownException_tFF48990C365A31D6AFB630B612733B30AE3DA2C1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RpcClientUnknownException_tFF48990C365A31D6AFB630B612733B30AE3DA2C1_il2cpp_TypeInfo_var)));
			NullCheck(L_76);
			RpcClientUnknownException__ctor_m91C6A7CC6E0368156778D0EF236270A9DD67C597(L_76, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralED4E1D5375F8F5CA6973E2EF018BF102D8C7CFB5)), L_75, NULL);
			V_16 = L_76;
			RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* L_77 = __this->___U3CloggerU3E5__2_4;
			RpcClientUnknownException_tFF48990C365A31D6AFB630B612733B30AE3DA2C1* L_78 = V_16;
			NullCheck(L_77);
			RpcLogger_LogException_m0FEFC87F52B2FEC3B480F3DCFF42BD96FAC88BE6(L_77, L_78, NULL);
			RpcClientUnknownException_tFF48990C365A31D6AFB630B612733B30AE3DA2C1* L_79 = V_16;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_79, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendAsyncU3Ed__19_MoveNext_m9F87DC02C68C7439558DE19E1FB1F1362AF18030_RuntimeMethod_var)));
		}// end catch (depth: 2)
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0202;
		}
		throw e;
	}

CATCH_0202:
	{// begin catch(System.Exception)
		V_17 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CloggerU3E5__2_4 = (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CloggerU3E5__2_4), (void*)(RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272*)NULL);
		AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF* L_80 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_81 = V_17;
		AsyncTaskMethodBuilder_1_SetException_m9D70C765E9688DB85026E548C2A79251CC93EA7B(L_80, L_81, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m9D70C765E9688DB85026E548C2A79251CC93EA7B_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_023d;
	}// end catch (depth: 1)

IL_0222:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CloggerU3E5__2_4 = (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CloggerU3E5__2_4), (void*)(RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272*)NULL);
		AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF* L_82 = (&__this->___U3CU3Et__builder_1);
		RpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E* L_83 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mADF00E9133B0A0E8944ECF7DC9E504E057464527(L_82, L_83, AsyncTaskMethodBuilder_1_SetResult_mADF00E9133B0A0E8944ECF7DC9E504E057464527_RuntimeMethod_var);
	}

IL_023d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendAsyncU3Ed__19_MoveNext_m9F87DC02C68C7439558DE19E1FB1F1362AF18030_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9*>(__this + _offset);
	U3CSendAsyncU3Ed__19_MoveNext_m9F87DC02C68C7439558DE19E1FB1F1362AF18030(_thisAdjusted, method);
}
// System.Void Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__19_SetStateMachine_mCF1507A272DCDF7F2CBDB4A2F120B4436405D8C5 (U3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m3A57F8DB8C304C3CAA196D98B5F150687FB30B6D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m3A57F8DB8C304C3CAA196D98B5F150687FB30B6D(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m3A57F8DB8C304C3CAA196D98B5F150687FB30B6D_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendAsyncU3Ed__19_SetStateMachine_mCF1507A272DCDF7F2CBDB4A2F120B4436405D8C5_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendAsyncU3Ed__19_t946B704958B843D50A80222933D4C41C781F63A9*>(__this + _offset);
	U3CSendAsyncU3Ed__19_SetStateMachine_mCF1507A272DCDF7F2CBDB4A2F120B4436405D8C5(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__20_MoveNext_m86C0036EBD8DD00717652F39013C482A222F99F5 (U3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2_TisU3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C_m9835AD493A7517BCBC29E3FAB5DA7B1DA15CD126_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C_mA800B83D368FF954B7F384DA6D1A866775D426C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m1E2CD33CFDC79FD034B354BA338B1DF65CF21C6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m73EC0AA35D69C7BD9CB8CF0401218F54D50A3F5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m82E11E4D5A7D93F6C6535712CB0D9A19E0B3F1A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mA6D771EE9708FACC33CA8BFDF2356EB65C51550A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mC3B711F8D7B7CFCA514C0A3FD4F6B2EC77BAD2DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_m02D8819042F353E9808D8FD683CE7A85E070B46E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mAE5B09203993E840EC9B1093F11D767B90D0F249_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Deserialize_TisRpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1_m5F582FE23CBF1F23D18D3294FB08197DF5B16970_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m25EFF82BDCE95D202B2F11CEAE4BF1645FD47504_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m623E0E89F5E23F844E733FB75503B8AD97120277_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* V_1 = NULL;
	RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* V_2 = NULL;
	String_t* V_3 = NULL;
	StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9* V_4 = NULL;
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* V_5 = NULL;
	ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA V_6;
	memset((&V_6), 0, sizeof(V_6));
	ConfiguredTaskAwaitable_1_t8CDF4BD8A651B04E9B68A1D1FBA52D4D98B9E9AD V_7;
	memset((&V_7), 0, sizeof(V_7));
	ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	ConfiguredTaskAwaitable_1_t8AF0FEBCC05402B6B9416E0286B45E21D42056AA V_9;
	memset((&V_9), 0, sizeof(V_9));
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_10 = NULL;
	JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E* V_11 = NULL;
	RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* V_12 = NULL;
	TaskCanceledException_tDF877A81B2CD292CC0FBC2332962A8C07DE2A08E* V_13 = NULL;
	RpcClientTimeoutException_t6705F8007F759185D010A0E822189E2554BB20AF* V_14 = NULL;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_15;
	memset((&V_15), 0, sizeof(V_15));
	Exception_t* V_16 = NULL;
	RpcClientUnknownException_tFF48990C365A31D6AFB630B612733B30AE3DA2C1* V_17 = NULL;
	Exception_t* V_18 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if ((!(((uint32_t)L_2) > ((uint32_t)1))))
			{
				goto IL_0023_1;
			}
		}
		{
			RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject* L_4 = L_3->____log_7;
			RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* L_5 = (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272*)il2cpp_codegen_object_new(RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			RpcLogger__ctor_mF2A9D330819C3C239EC6D5A0B3E29AAAC780B9EF(L_5, L_4, NULL);
			__this->___U3CloggerU3E5__2_5 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CloggerU3E5__2_5), (void*)L_5);
		}

IL_0023_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_00cc_2;
				}
			}
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_013f_2;
				}
			}
			{
				RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* L_8 = V_1;
				NullCheck(L_8);
				HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_9;
				L_9 = RpcClient_GetOrCreateHttpClient_m5C494AE8B4284263F55FF362E355C86F0B9C0EE9(L_8, NULL);
				RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* L_10 = __this->___request_3;
				RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* L_11 = V_1;
				NullCheck(L_11);
				JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_12 = L_11->____jsonSerializerSettings_8;
				il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
				String_t* L_13;
				L_13 = JsonConvert_SerializeObject_mEAA691E5567819FD0CDFEBB98629609ADB899D25(L_10, L_12, NULL);
				V_3 = L_13;
				String_t* L_14 = V_3;
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_15;
				L_15 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
				StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9* L_16 = (StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9*)il2cpp_codegen_object_new(StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9_il2cpp_TypeInfo_var);
				NullCheck(L_16);
				StringContent__ctor_mFA0D8BF1997C7B433B2C8371976440840A45AA63(L_16, L_14, L_15, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
				V_4 = L_16;
				CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_17 = (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)il2cpp_codegen_object_new(CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
				NullCheck(L_17);
				CancellationTokenSource__ctor_m2ADB5D13368A9D364C20BB6039EC6DE858735E2C(L_17, NULL);
				V_5 = L_17;
				CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_18 = V_5;
				il2cpp_codegen_runtime_class_init_inline(ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_il2cpp_TypeInfo_var);
				TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_19;
				L_19 = ClientBase_get_ConnectionTimeout_m06FA22606E824EF1CD46EC1D7432DC8A06E272DF_inline(NULL);
				NullCheck(L_18);
				CancellationTokenSource_CancelAfter_mC81CF6E81C5205DF6C2528B3AC624EF48D3B2B43(L_18, L_19, NULL);
				RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* L_20 = __this->___U3CloggerU3E5__2_5;
				String_t* L_21 = V_3;
				NullCheck(L_20);
				RpcLogger_LogRequest_mA715CC7280C345F8130C90A7F0946CBF6BB78D02(L_20, L_21, NULL);
				String_t* L_22 = __this->___route_4;
				StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9* L_23 = V_4;
				CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_24 = V_5;
				NullCheck(L_24);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_25;
				L_25 = CancellationTokenSource_get_Token_m0FEC575DDDA2947476EE5D9B8F8AC887A4EEE3C4(L_24, NULL);
				NullCheck(L_9);
				Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* L_26;
				L_26 = HttpClient_PostAsync_mA79CE0DED944CDB3C848793128070008B6F155F8(L_9, L_22, L_23, L_25, NULL);
				NullCheck(L_26);
				ConfiguredTaskAwaitable_1_t8CDF4BD8A651B04E9B68A1D1FBA52D4D98B9E9AD L_27;
				L_27 = Task_1_ConfigureAwait_m25EFF82BDCE95D202B2F11CEAE4BF1645FD47504(L_26, (bool)0, Task_1_ConfigureAwait_m25EFF82BDCE95D202B2F11CEAE4BF1645FD47504_RuntimeMethod_var);
				V_7 = L_27;
				ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA L_28;
				L_28 = ConfiguredTaskAwaitable_1_GetAwaiter_m82E11E4D5A7D93F6C6535712CB0D9A19E0B3F1A6_inline((&V_7), ConfiguredTaskAwaitable_1_GetAwaiter_m82E11E4D5A7D93F6C6535712CB0D9A19E0B3F1A6_RuntimeMethod_var);
				V_6 = L_28;
				bool L_29;
				L_29 = ConfiguredTaskAwaiter_get_IsCompleted_mAE5B09203993E840EC9B1093F11D767B90D0F249((&V_6), ConfiguredTaskAwaiter_get_IsCompleted_mAE5B09203993E840EC9B1093F11D767B90D0F249_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_00e9_2;
				}
			}
			{
				int32_t L_30 = 0;
				V_0 = L_30;
				__this->___U3CU3E1__state_0 = L_30;
				ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA L_31 = V_6;
				__this->___U3CU3Eu__1_6 = L_31;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F* L_32 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C_mA800B83D368FF954B7F384DA6D1A866775D426C0(L_32, (&V_6), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C_mA800B83D368FF954B7F384DA6D1A866775D426C0_RuntimeMethod_var);
				goto IL_025f;
			}

IL_00cc_2:
			{
				ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA L_33 = __this->___U3CU3Eu__1_6;
				V_6 = L_33;
				ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA* L_34 = (&__this->___U3CU3Eu__1_6);
				il2cpp_codegen_initobj(L_34, sizeof(ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state_0 = L_35;
			}

IL_00e9_2:
			{
				HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_36;
				L_36 = ConfiguredTaskAwaiter_GetResult_mA6D771EE9708FACC33CA8BFDF2356EB65C51550A((&V_6), ConfiguredTaskAwaiter_GetResult_mA6D771EE9708FACC33CA8BFDF2356EB65C51550A_RuntimeMethod_var);
				HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_37 = L_36;
				NullCheck(L_37);
				HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_38;
				L_38 = HttpResponseMessage_EnsureSuccessStatusCode_m9B3196715BFBEEC6946D0C082DE33C4C43C00210(L_37, NULL);
				NullCheck(L_37);
				HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* L_39;
				L_39 = HttpResponseMessage_get_Content_m2350C12EA59DAD014A59B17398E5B50F62202AF6_inline(L_37, NULL);
				NullCheck(L_39);
				Task_1_t06484715029D51A4420723456D165BAC63798F8D* L_40;
				L_40 = HttpContent_ReadAsStreamAsync_m7C4323126B463483F4B8E702CD61F8661B89CD10(L_39, NULL);
				NullCheck(L_40);
				ConfiguredTaskAwaitable_1_t8AF0FEBCC05402B6B9416E0286B45E21D42056AA L_41;
				L_41 = Task_1_ConfigureAwait_m623E0E89F5E23F844E733FB75503B8AD97120277(L_40, (bool)0, Task_1_ConfigureAwait_m623E0E89F5E23F844E733FB75503B8AD97120277_RuntimeMethod_var);
				V_9 = L_41;
				ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2 L_42;
				L_42 = ConfiguredTaskAwaitable_1_GetAwaiter_m73EC0AA35D69C7BD9CB8CF0401218F54D50A3F5A_inline((&V_9), ConfiguredTaskAwaitable_1_GetAwaiter_m73EC0AA35D69C7BD9CB8CF0401218F54D50A3F5A_RuntimeMethod_var);
				V_8 = L_42;
				bool L_43;
				L_43 = ConfiguredTaskAwaiter_get_IsCompleted_m02D8819042F353E9808D8FD683CE7A85E070B46E((&V_8), ConfiguredTaskAwaiter_get_IsCompleted_m02D8819042F353E9808D8FD683CE7A85E070B46E_RuntimeMethod_var);
				if (L_43)
				{
					goto IL_015c_2;
				}
			}
			{
				int32_t L_44 = 1;
				V_0 = L_44;
				__this->___U3CU3E1__state_0 = L_44;
				ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2 L_45 = V_8;
				__this->___U3CU3Eu__2_7 = L_45;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_7))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F* L_46 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2_TisU3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C_m9835AD493A7517BCBC29E3FAB5DA7B1DA15CD126(L_46, (&V_8), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2_TisU3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C_m9835AD493A7517BCBC29E3FAB5DA7B1DA15CD126_RuntimeMethod_var);
				goto IL_025f;
			}

IL_013f_2:
			{
				ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2 L_47 = __this->___U3CU3Eu__2_7;
				V_8 = L_47;
				ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2* L_48 = (&__this->___U3CU3Eu__2_7);
				il2cpp_codegen_initobj(L_48, sizeof(ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2));
				int32_t L_49 = (-1);
				V_0 = L_49;
				__this->___U3CU3E1__state_0 = L_49;
			}

IL_015c_2:
			{
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_50;
				L_50 = ConfiguredTaskAwaiter_GetResult_mC3B711F8D7B7CFCA514C0A3FD4F6B2EC77BAD2DD((&V_8), ConfiguredTaskAwaiter_GetResult_mC3B711F8D7B7CFCA514C0A3FD4F6B2EC77BAD2DD_RuntimeMethod_var);
				StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_51 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
				NullCheck(L_51);
				StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(L_51, L_50, NULL);
				V_10 = L_51;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_01ac_2:
					{// begin finally (depth: 3)
						{
							int32_t L_52 = V_0;
							if ((((int32_t)L_52) >= ((int32_t)0)))
							{
								goto IL_01bb_2;
							}
						}
						{
							StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_53 = V_10;
							if (!L_53)
							{
								goto IL_01bb_2;
							}
						}
						{
							StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_54 = V_10;
							NullCheck(L_54);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_54);
						}

IL_01bb_2:
						{
							return;
						}
					}// end finally (depth: 3)
				});
				try
				{// begin try (depth: 3)
					{
						StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_55 = V_10;
						JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E* L_56 = (JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E*)il2cpp_codegen_object_new(JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E_il2cpp_TypeInfo_var);
						NullCheck(L_56);
						JsonTextReader__ctor_m362F27D5EA7CEE0A9BDBF46FE235D8558146C10D(L_56, L_55, NULL);
						V_11 = L_56;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_019c_3:
							{// begin finally (depth: 4)
								{
									int32_t L_57 = V_0;
									if ((((int32_t)L_57) >= ((int32_t)0)))
									{
										goto IL_01ab_3;
									}
								}
								{
									JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E* L_58 = V_11;
									if (!L_58)
									{
										goto IL_01ab_3;
									}
								}
								{
									JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E* L_59 = V_11;
									NullCheck(L_59);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_59);
								}

IL_01ab_3:
								{
									return;
								}
							}// end finally (depth: 4)
						});
						try
						{// begin try (depth: 4)
							RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* L_60 = V_1;
							NullCheck(L_60);
							JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_61 = L_60->____jsonSerializerSettings_8;
							JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_62;
							L_62 = JsonSerializer_Create_m1030D503AE4455241212085D4C07B6E878A44AFB(L_61, NULL);
							JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E* L_63 = V_11;
							NullCheck(L_62);
							RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* L_64;
							L_64 = JsonSerializer_Deserialize_TisRpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1_m5F582FE23CBF1F23D18D3294FB08197DF5B16970(L_62, L_63, JsonSerializer_Deserialize_TisRpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1_m5F582FE23CBF1F23D18D3294FB08197DF5B16970_RuntimeMethod_var);
							V_12 = L_64;
							RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* L_65 = __this->___U3CloggerU3E5__2_5;
							RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* L_66 = V_12;
							NullCheck(L_65);
							RpcLogger_LogResponse_m5AB896D42204392EF335B2FF2979C9EB5266626C(L_65, L_66, NULL);
							RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* L_67 = V_12;
							V_2 = L_67;
							goto IL_0244;
						}// end try (depth: 4)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}
				}// end try (depth: 3)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TaskCanceledException_tDF877A81B2CD292CC0FBC2332962A8C07DE2A08E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01bc_1;
			}
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01f4_1;
			}
			throw e;
		}

CATCH_01bc_1:
		{// begin catch(System.Threading.Tasks.TaskCanceledException)
			V_13 = ((TaskCanceledException_tDF877A81B2CD292CC0FBC2332962A8C07DE2A08E*)IL2CPP_GET_ACTIVE_EXCEPTION(TaskCanceledException_tDF877A81B2CD292CC0FBC2332962A8C07DE2A08E*));
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_il2cpp_TypeInfo_var)));
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_68;
			L_68 = ClientBase_get_ConnectionTimeout_m06FA22606E824EF1CD46EC1D7432DC8A06E272DF_inline(NULL);
			V_15 = L_68;
			double L_69;
			L_69 = TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF((&V_15), NULL);
			double L_70 = L_69;
			RuntimeObject* L_71 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)), &L_70);
			String_t* L_72;
			L_72 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDAC8226B79869EA87017AB5229861615BC0660A6)), L_71, NULL);
			TaskCanceledException_tDF877A81B2CD292CC0FBC2332962A8C07DE2A08E* L_73 = V_13;
			RpcClientTimeoutException_t6705F8007F759185D010A0E822189E2554BB20AF* L_74 = (RpcClientTimeoutException_t6705F8007F759185D010A0E822189E2554BB20AF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RpcClientTimeoutException_t6705F8007F759185D010A0E822189E2554BB20AF_il2cpp_TypeInfo_var)));
			NullCheck(L_74);
			RpcClientTimeoutException__ctor_mF1352073E00F6DBA1B15C4A16E38A112FA4D4483(L_74, L_72, L_73, NULL);
			V_14 = L_74;
			RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* L_75 = __this->___U3CloggerU3E5__2_5;
			RpcClientTimeoutException_t6705F8007F759185D010A0E822189E2554BB20AF* L_76 = V_14;
			NullCheck(L_75);
			RpcLogger_LogException_m0FEFC87F52B2FEC3B480F3DCFF42BD96FAC88BE6(L_75, L_76, NULL);
			RpcClientTimeoutException_t6705F8007F759185D010A0E822189E2554BB20AF* L_77 = V_14;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_77, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendAsyncU3Ed__20_MoveNext_m86C0036EBD8DD00717652F39013C482A222F99F5_RuntimeMethod_var)));
		}// end catch (depth: 2)

CATCH_01f4_1:
		{// begin catch(System.Exception)
			V_16 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* L_78 = __this->___request_3;
			NullCheck(L_78);
			String_t* L_79;
			L_79 = RpcRequestMessage_get_Method_mC80080EF982AA09703A1B06C9CCDE059EEFBB3B8_inline(L_78, NULL);
			String_t* L_80;
			L_80 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFD6819A0DAFBD6B8C298C8CEF5CD5E29F47816F0)), L_79, NULL);
			Exception_t* L_81 = V_16;
			RpcClientUnknownException_tFF48990C365A31D6AFB630B612733B30AE3DA2C1* L_82 = (RpcClientUnknownException_tFF48990C365A31D6AFB630B612733B30AE3DA2C1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RpcClientUnknownException_tFF48990C365A31D6AFB630B612733B30AE3DA2C1_il2cpp_TypeInfo_var)));
			NullCheck(L_82);
			RpcClientUnknownException__ctor_m91C6A7CC6E0368156778D0EF236270A9DD67C597(L_82, L_80, L_81, NULL);
			V_17 = L_82;
			RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* L_83 = __this->___U3CloggerU3E5__2_5;
			RpcClientUnknownException_tFF48990C365A31D6AFB630B612733B30AE3DA2C1* L_84 = V_17;
			NullCheck(L_83);
			RpcLogger_LogException_m0FEFC87F52B2FEC3B480F3DCFF42BD96FAC88BE6(L_83, L_84, NULL);
			RpcClientUnknownException_tFF48990C365A31D6AFB630B612733B30AE3DA2C1* L_85 = V_17;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_85, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendAsyncU3Ed__20_MoveNext_m86C0036EBD8DD00717652F39013C482A222F99F5_RuntimeMethod_var)));
		}// end catch (depth: 2)
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0224;
		}
		throw e;
	}

CATCH_0224:
	{// begin catch(System.Exception)
		V_18 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CloggerU3E5__2_5 = (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CloggerU3E5__2_5), (void*)(RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272*)NULL);
		AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F* L_86 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_87 = V_18;
		AsyncTaskMethodBuilder_1_SetException_m681F5CAA0A000471C03F97CFB40AA690DDBDFC0D(L_86, L_87, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m681F5CAA0A000471C03F97CFB40AA690DDBDFC0D_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_025f;
	}// end catch (depth: 1)

IL_0244:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CloggerU3E5__2_5 = (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CloggerU3E5__2_5), (void*)(RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272*)NULL);
		AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F* L_88 = (&__this->___U3CU3Et__builder_1);
		RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* L_89 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m1E2CD33CFDC79FD034B354BA338B1DF65CF21C6E(L_88, L_89, AsyncTaskMethodBuilder_1_SetResult_m1E2CD33CFDC79FD034B354BA338B1DF65CF21C6E_RuntimeMethod_var);
	}

IL_025f:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendAsyncU3Ed__20_MoveNext_m86C0036EBD8DD00717652F39013C482A222F99F5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C*>(__this + _offset);
	U3CSendAsyncU3Ed__20_MoveNext_m86C0036EBD8DD00717652F39013C482A222F99F5(_thisAdjusted, method);
}
// System.Void Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__20::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__20_SetStateMachine_m84018050A0BD817BAACEA7CBE9B181E9FA6FE813 (U3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m4AA37E67E5C26A021760A9D90C566A8CC9E07AFA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m4AA37E67E5C26A021760A9D90C566A8CC9E07AFA(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m4AA37E67E5C26A021760A9D90C566A8CC9E07AFA_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendAsyncU3Ed__20_SetStateMachine_m84018050A0BD817BAACEA7CBE9B181E9FA6FE813_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendAsyncU3Ed__20_t822D1DB6A140D542524754430BA1CD789522E86C*>(__this + _offset);
	U3CSendAsyncU3Ed__20_SetStateMachine_m84018050A0BD817BAACEA7CBE9B181E9FA6FE813(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Nethereum.JsonRpc.Client.SimpleRpcClient::.ctor(System.Uri,System.Net.Http.HttpClient,Newtonsoft.Json.JsonSerializerSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleRpcClient__ctor_mFC2D8EC64BC4675B70A0536A1A769C491BE1F745 (SimpleRpcClient_t3A3EEC4E97A2B3CC93D6F6C0E8A021C281C8EE15* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___baseUrl0, HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* ___httpClient1, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___jsonSerializerSettings2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_il2cpp_TypeInfo_var);
		ClientBase__ctor_m0B889E5EAAB7307F82C7EBDE29769C0076DADDB5(__this, NULL);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_0 = ___jsonSerializerSettings2;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_1;
		L_1 = DefaultJsonSerializerSettingsFactory_BuildDefaultJsonSerializerSettings_mD1C6DC5E0BAD49854BD2E512F7D5A41D8FB7F521(NULL);
		___jsonSerializerSettings2 = L_1;
	}

IL_0010:
	{
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_2 = ___jsonSerializerSettings2;
		__this->____jsonSerializerSettings_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jsonSerializerSettings_2), (void*)L_2);
		HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_3 = ___httpClient1;
		__this->____httpClient_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____httpClient_3), (void*)L_3);
		HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_4 = __this->____httpClient_3;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_5 = ___baseUrl0;
		NullCheck(L_4);
		HttpClient_set_BaseAddress_mB894313F9EA76DC08382B3499F33216ED9CF4C48_inline(L_4, L_5, NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage> Nethereum.JsonRpc.Client.SimpleRpcClient::SendAsync(Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC0061418037436F03DCF6A1FA753A1D429C67C60* SimpleRpcClient_SendAsync_mC63AFAFF2F14D90D8279C2EFCC80CA0FAADF228A (SimpleRpcClient_t3A3EEC4E97A2B3CC93D6F6C0E8A021C281C8EE15* __this, RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* ___request0, String_t* ___route1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m01F336A9A5C8AD522F3562B75C6EB452E5B09F5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0_m6C7EE436C40BEA620E8B111844E76931426F2CCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mEBA213E036CC4EA76DE7DDFB3083EAF5220A8E38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m01F336A9A5C8AD522F3562B75C6EB452E5B09F5A(AsyncTaskMethodBuilder_1_Create_m01F336A9A5C8AD522F3562B75C6EB452E5B09F5A_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* L_1 = ___request0;
		(&V_0)->___request_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___request_2), (void*)L_1);
		String_t* L_2 = ___route1;
		(&V_0)->___route_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___route_4), (void*)L_2);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0_m6C7EE436C40BEA620E8B111844E76931426F2CCA(L_3, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0_m6C7EE436C40BEA620E8B111844E76931426F2CCA_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_tC0061418037436F03DCF6A1FA753A1D429C67C60* L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_mEBA213E036CC4EA76DE7DDFB3083EAF5220A8E38(L_4, AsyncTaskMethodBuilder_1_get_Task_mEBA213E036CC4EA76DE7DDFB3083EAF5220A8E38_RuntimeMethod_var);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]> Nethereum.JsonRpc.Client.SimpleRpcClient::SendAsync(Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t521684A4C10415312B22F2EEE1222131B8703BF6* SimpleRpcClient_SendAsync_mC0CD42C304035BE748716C64F5E10B9F4E53E7CC (SimpleRpcClient_t3A3EEC4E97A2B3CC93D6F6C0E8A021C281C8EE15* __this, RpcRequestMessageU5BU5D_t751C41D82385D4F97A408969DB7033B16596FE0E* ___requests0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m52090EDC7750E3D8B5DEFB22F05CA4796CD5FCA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0_m7C548A36CC3F940DE44643D7F13228C481EF6ED0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m370E645F9EEB260C09C268797E72BF24D81F8DB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m52090EDC7750E3D8B5DEFB22F05CA4796CD5FCA7(AsyncTaskMethodBuilder_1_Create_m52090EDC7750E3D8B5DEFB22F05CA4796CD5FCA7_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		RpcRequestMessageU5BU5D_t751C41D82385D4F97A408969DB7033B16596FE0E* L_1 = ___requests0;
		(&V_0)->___requests_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___requests_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0_m7C548A36CC3F940DE44643D7F13228C481EF6ED0(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0_m7C548A36CC3F940DE44643D7F13228C481EF6ED0_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t521684A4C10415312B22F2EEE1222131B8703BF6* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m370E645F9EEB260C09C268797E72BF24D81F8DB9(L_3, AsyncTaskMethodBuilder_1_get_Task_m370E645F9EEB260C09C268797E72BF24D81F8DB9_RuntimeMethod_var);
		return L_4;
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
// System.Void Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__3_MoveNext_m9802850B4B8D63F92434BB81AD60BCFDFF0C7BF1 (U3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2_TisU3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0_mA69CB5A1E5E563D855A5572199C4A74100919E65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0_m098C6682B993F254487C2ED84C9C50DDB9573548_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m1E2CD33CFDC79FD034B354BA338B1DF65CF21C6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m73EC0AA35D69C7BD9CB8CF0401218F54D50A3F5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m82E11E4D5A7D93F6C6535712CB0D9A19E0B3F1A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mA6D771EE9708FACC33CA8BFDF2356EB65C51550A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mC3B711F8D7B7CFCA514C0A3FD4F6B2EC77BAD2DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_m02D8819042F353E9808D8FD683CE7A85E070B46E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mAE5B09203993E840EC9B1093F11D767B90D0F249_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Deserialize_TisRpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1_m5F582FE23CBF1F23D18D3294FB08197DF5B16970_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m25EFF82BDCE95D202B2F11CEAE4BF1645FD47504_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m623E0E89F5E23F844E733FB75503B8AD97120277_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SimpleRpcClient_t3A3EEC4E97A2B3CC93D6F6C0E8A021C281C8EE15* V_1 = NULL;
	RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* V_2 = NULL;
	StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9* V_3 = NULL;
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* V_4 = NULL;
	ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA V_5;
	memset((&V_5), 0, sizeof(V_5));
	ConfiguredTaskAwaitable_1_t8CDF4BD8A651B04E9B68A1D1FBA52D4D98B9E9AD V_6;
	memset((&V_6), 0, sizeof(V_6));
	ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	ConfiguredTaskAwaitable_1_t8AF0FEBCC05402B6B9416E0286B45E21D42056AA V_8;
	memset((&V_8), 0, sizeof(V_8));
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_9 = NULL;
	JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E* V_10 = NULL;
	TaskCanceledException_tDF877A81B2CD292CC0FBC2332962A8C07DE2A08E* V_11 = NULL;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	Exception_t* V_14 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SimpleRpcClient_t3A3EEC4E97A2B3CC93D6F6C0E8A021C281C8EE15* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_00ab_2;
				}
			}
			{
				int32_t L_4 = V_0;
				if ((((int32_t)L_4) == ((int32_t)1)))
				{
					goto IL_011e_2;
				}
			}
			{
				RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* L_5 = __this->___request_2;
				SimpleRpcClient_t3A3EEC4E97A2B3CC93D6F6C0E8A021C281C8EE15* L_6 = V_1;
				NullCheck(L_6);
				JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_7 = L_6->____jsonSerializerSettings_2;
				il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
				String_t* L_8;
				L_8 = JsonConvert_SerializeObject_mEAA691E5567819FD0CDFEBB98629609ADB899D25(L_5, L_7, NULL);
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_9;
				L_9 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
				StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9* L_10 = (StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9*)il2cpp_codegen_object_new(StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9_il2cpp_TypeInfo_var);
				NullCheck(L_10);
				StringContent__ctor_mFA0D8BF1997C7B433B2C8371976440840A45AA63(L_10, L_8, L_9, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
				V_3 = L_10;
				CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_11 = (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)il2cpp_codegen_object_new(CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
				NullCheck(L_11);
				CancellationTokenSource__ctor_m2ADB5D13368A9D364C20BB6039EC6DE858735E2C(L_11, NULL);
				V_4 = L_11;
				CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_12 = V_4;
				il2cpp_codegen_runtime_class_init_inline(ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_il2cpp_TypeInfo_var);
				TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_13;
				L_13 = ClientBase_get_ConnectionTimeout_m06FA22606E824EF1CD46EC1D7432DC8A06E272DF_inline(NULL);
				NullCheck(L_12);
				CancellationTokenSource_CancelAfter_mC81CF6E81C5205DF6C2528B3AC624EF48D3B2B43(L_12, L_13, NULL);
				SimpleRpcClient_t3A3EEC4E97A2B3CC93D6F6C0E8A021C281C8EE15* L_14 = V_1;
				NullCheck(L_14);
				HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_15 = L_14->____httpClient_3;
				String_t* L_16 = __this->___route_4;
				StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9* L_17 = V_3;
				CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_18 = V_4;
				NullCheck(L_18);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_19;
				L_19 = CancellationTokenSource_get_Token_m0FEC575DDDA2947476EE5D9B8F8AC887A4EEE3C4(L_18, NULL);
				NullCheck(L_15);
				Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* L_20;
				L_20 = HttpClient_PostAsync_mA79CE0DED944CDB3C848793128070008B6F155F8(L_15, L_16, L_17, L_19, NULL);
				NullCheck(L_20);
				ConfiguredTaskAwaitable_1_t8CDF4BD8A651B04E9B68A1D1FBA52D4D98B9E9AD L_21;
				L_21 = Task_1_ConfigureAwait_m25EFF82BDCE95D202B2F11CEAE4BF1645FD47504(L_20, (bool)0, Task_1_ConfigureAwait_m25EFF82BDCE95D202B2F11CEAE4BF1645FD47504_RuntimeMethod_var);
				V_6 = L_21;
				ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA L_22;
				L_22 = ConfiguredTaskAwaitable_1_GetAwaiter_m82E11E4D5A7D93F6C6535712CB0D9A19E0B3F1A6_inline((&V_6), ConfiguredTaskAwaitable_1_GetAwaiter_m82E11E4D5A7D93F6C6535712CB0D9A19E0B3F1A6_RuntimeMethod_var);
				V_5 = L_22;
				bool L_23;
				L_23 = ConfiguredTaskAwaiter_get_IsCompleted_mAE5B09203993E840EC9B1093F11D767B90D0F249((&V_5), ConfiguredTaskAwaiter_get_IsCompleted_mAE5B09203993E840EC9B1093F11D767B90D0F249_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_00c8_2;
				}
			}
			{
				int32_t L_24 = 0;
				V_0 = L_24;
				__this->___U3CU3E1__state_0 = L_24;
				ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA L_25 = V_5;
				__this->___U3CU3Eu__1_5 = L_25;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F* L_26 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0_m098C6682B993F254487C2ED84C9C50DDB9573548(L_26, (&V_5), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0_m098C6682B993F254487C2ED84C9C50DDB9573548_RuntimeMethod_var);
				goto IL_01fa;
			}

IL_00ab_2:
			{
				ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA L_27 = __this->___U3CU3Eu__1_5;
				V_5 = L_27;
				ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA* L_28 = (&__this->___U3CU3Eu__1_5);
				il2cpp_codegen_initobj(L_28, sizeof(ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA));
				int32_t L_29 = (-1);
				V_0 = L_29;
				__this->___U3CU3E1__state_0 = L_29;
			}

IL_00c8_2:
			{
				HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_30;
				L_30 = ConfiguredTaskAwaiter_GetResult_mA6D771EE9708FACC33CA8BFDF2356EB65C51550A((&V_5), ConfiguredTaskAwaiter_GetResult_mA6D771EE9708FACC33CA8BFDF2356EB65C51550A_RuntimeMethod_var);
				HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_31 = L_30;
				NullCheck(L_31);
				HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_32;
				L_32 = HttpResponseMessage_EnsureSuccessStatusCode_m9B3196715BFBEEC6946D0C082DE33C4C43C00210(L_31, NULL);
				NullCheck(L_31);
				HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* L_33;
				L_33 = HttpResponseMessage_get_Content_m2350C12EA59DAD014A59B17398E5B50F62202AF6_inline(L_31, NULL);
				NullCheck(L_33);
				Task_1_t06484715029D51A4420723456D165BAC63798F8D* L_34;
				L_34 = HttpContent_ReadAsStreamAsync_m7C4323126B463483F4B8E702CD61F8661B89CD10(L_33, NULL);
				NullCheck(L_34);
				ConfiguredTaskAwaitable_1_t8AF0FEBCC05402B6B9416E0286B45E21D42056AA L_35;
				L_35 = Task_1_ConfigureAwait_m623E0E89F5E23F844E733FB75503B8AD97120277(L_34, (bool)0, Task_1_ConfigureAwait_m623E0E89F5E23F844E733FB75503B8AD97120277_RuntimeMethod_var);
				V_8 = L_35;
				ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2 L_36;
				L_36 = ConfiguredTaskAwaitable_1_GetAwaiter_m73EC0AA35D69C7BD9CB8CF0401218F54D50A3F5A_inline((&V_8), ConfiguredTaskAwaitable_1_GetAwaiter_m73EC0AA35D69C7BD9CB8CF0401218F54D50A3F5A_RuntimeMethod_var);
				V_7 = L_36;
				bool L_37;
				L_37 = ConfiguredTaskAwaiter_get_IsCompleted_m02D8819042F353E9808D8FD683CE7A85E070B46E((&V_7), ConfiguredTaskAwaiter_get_IsCompleted_m02D8819042F353E9808D8FD683CE7A85E070B46E_RuntimeMethod_var);
				if (L_37)
				{
					goto IL_013b_2;
				}
			}
			{
				int32_t L_38 = 1;
				V_0 = L_38;
				__this->___U3CU3E1__state_0 = L_38;
				ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2 L_39 = V_7;
				__this->___U3CU3Eu__2_6 = L_39;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_6))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F* L_40 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2_TisU3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0_mA69CB5A1E5E563D855A5572199C4A74100919E65(L_40, (&V_7), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2_TisU3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0_mA69CB5A1E5E563D855A5572199C4A74100919E65_RuntimeMethod_var);
				goto IL_01fa;
			}

IL_011e_2:
			{
				ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2 L_41 = __this->___U3CU3Eu__2_6;
				V_7 = L_41;
				ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2* L_42 = (&__this->___U3CU3Eu__2_6);
				il2cpp_codegen_initobj(L_42, sizeof(ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2));
				int32_t L_43 = (-1);
				V_0 = L_43;
				__this->___U3CU3E1__state_0 = L_43;
			}

IL_013b_2:
			{
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_44;
				L_44 = ConfiguredTaskAwaiter_GetResult_mC3B711F8D7B7CFCA514C0A3FD4F6B2EC77BAD2DD((&V_7), ConfiguredTaskAwaiter_GetResult_mC3B711F8D7B7CFCA514C0A3FD4F6B2EC77BAD2DD_RuntimeMethod_var);
				StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_45 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
				NullCheck(L_45);
				StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(L_45, L_44, NULL);
				V_9 = L_45;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0177_2:
					{// begin finally (depth: 3)
						{
							int32_t L_46 = V_0;
							if ((((int32_t)L_46) >= ((int32_t)0)))
							{
								goto IL_0186_2;
							}
						}
						{
							StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_47 = V_9;
							if (!L_47)
							{
								goto IL_0186_2;
							}
						}
						{
							StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_48 = V_9;
							NullCheck(L_48);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_48);
						}

IL_0186_2:
						{
							return;
						}
					}// end finally (depth: 3)
				});
				try
				{// begin try (depth: 3)
					{
						StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_49 = V_9;
						JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E* L_50 = (JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E*)il2cpp_codegen_object_new(JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E_il2cpp_TypeInfo_var);
						NullCheck(L_50);
						JsonTextReader__ctor_m362F27D5EA7CEE0A9BDBF46FE235D8558146C10D(L_50, L_49, NULL);
						V_10 = L_50;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0167_3:
							{// begin finally (depth: 4)
								{
									int32_t L_51 = V_0;
									if ((((int32_t)L_51) >= ((int32_t)0)))
									{
										goto IL_0176_3;
									}
								}
								{
									JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E* L_52 = V_10;
									if (!L_52)
									{
										goto IL_0176_3;
									}
								}
								{
									JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E* L_53 = V_10;
									NullCheck(L_53);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_53);
								}

IL_0176_3:
								{
									return;
								}
							}// end finally (depth: 4)
						});
						try
						{// begin try (depth: 4)
							SimpleRpcClient_t3A3EEC4E97A2B3CC93D6F6C0E8A021C281C8EE15* L_54 = V_1;
							NullCheck(L_54);
							JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_55 = L_54->____jsonSerializerSettings_2;
							JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_56;
							L_56 = JsonSerializer_Create_m1030D503AE4455241212085D4C07B6E878A44AFB(L_55, NULL);
							JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E* L_57 = V_10;
							NullCheck(L_56);
							RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* L_58;
							L_58 = JsonSerializer_Deserialize_TisRpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1_m5F582FE23CBF1F23D18D3294FB08197DF5B16970(L_56, L_57, JsonSerializer_Deserialize_TisRpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1_m5F582FE23CBF1F23D18D3294FB08197DF5B16970_RuntimeMethod_var);
							V_2 = L_58;
							goto IL_01e6;
						}// end try (depth: 4)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}
				}// end try (depth: 3)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TaskCanceledException_tDF877A81B2CD292CC0FBC2332962A8C07DE2A08E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0187_1;
			}
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01ae_1;
			}
			throw e;
		}

CATCH_0187_1:
		{// begin catch(System.Threading.Tasks.TaskCanceledException)
			V_11 = ((TaskCanceledException_tDF877A81B2CD292CC0FBC2332962A8C07DE2A08E*)IL2CPP_GET_ACTIVE_EXCEPTION(TaskCanceledException_tDF877A81B2CD292CC0FBC2332962A8C07DE2A08E*));
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_il2cpp_TypeInfo_var)));
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_59;
			L_59 = ClientBase_get_ConnectionTimeout_m06FA22606E824EF1CD46EC1D7432DC8A06E272DF_inline(NULL);
			V_12 = L_59;
			double L_60;
			L_60 = TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF((&V_12), NULL);
			double L_61 = L_60;
			RuntimeObject* L_62 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)), &L_61);
			String_t* L_63;
			L_63 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDAC8226B79869EA87017AB5229861615BC0660A6)), L_62, NULL);
			TaskCanceledException_tDF877A81B2CD292CC0FBC2332962A8C07DE2A08E* L_64 = V_11;
			RpcClientTimeoutException_t6705F8007F759185D010A0E822189E2554BB20AF* L_65 = (RpcClientTimeoutException_t6705F8007F759185D010A0E822189E2554BB20AF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RpcClientTimeoutException_t6705F8007F759185D010A0E822189E2554BB20AF_il2cpp_TypeInfo_var)));
			NullCheck(L_65);
			RpcClientTimeoutException__ctor_mF1352073E00F6DBA1B15C4A16E38A112FA4D4483(L_65, L_63, L_64, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_65, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendAsyncU3Ed__3_MoveNext_m9802850B4B8D63F92434BB81AD60BCFDFF0C7BF1_RuntimeMethod_var)));
		}// end catch (depth: 2)

CATCH_01ae_1:
		{// begin catch(System.Exception)
			V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* L_66 = __this->___request_2;
			NullCheck(L_66);
			String_t* L_67;
			L_67 = RpcRequestMessage_get_Method_mC80080EF982AA09703A1B06C9CCDE059EEFBB3B8_inline(L_66, NULL);
			String_t* L_68;
			L_68 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFD6819A0DAFBD6B8C298C8CEF5CD5E29F47816F0)), L_67, NULL);
			Exception_t* L_69 = V_13;
			RpcClientUnknownException_tFF48990C365A31D6AFB630B612733B30AE3DA2C1* L_70 = (RpcClientUnknownException_tFF48990C365A31D6AFB630B612733B30AE3DA2C1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RpcClientUnknownException_tFF48990C365A31D6AFB630B612733B30AE3DA2C1_il2cpp_TypeInfo_var)));
			NullCheck(L_70);
			RpcClientUnknownException__ctor_m91C6A7CC6E0368156778D0EF236270A9DD67C597(L_70, L_68, L_69, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_70, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendAsyncU3Ed__3_MoveNext_m9802850B4B8D63F92434BB81AD60BCFDFF0C7BF1_RuntimeMethod_var)));
		}// end catch (depth: 2)
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01cd;
		}
		throw e;
	}

CATCH_01cd:
	{// begin catch(System.Exception)
		V_14 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F* L_71 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_72 = V_14;
		AsyncTaskMethodBuilder_1_SetException_m681F5CAA0A000471C03F97CFB40AA690DDBDFC0D(L_71, L_72, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m681F5CAA0A000471C03F97CFB40AA690DDBDFC0D_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01fa;
	}// end catch (depth: 1)

IL_01e6:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F* L_73 = (&__this->___U3CU3Et__builder_1);
		RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* L_74 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m1E2CD33CFDC79FD034B354BA338B1DF65CF21C6E(L_73, L_74, AsyncTaskMethodBuilder_1_SetResult_m1E2CD33CFDC79FD034B354BA338B1DF65CF21C6E_RuntimeMethod_var);
	}

IL_01fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendAsyncU3Ed__3_MoveNext_m9802850B4B8D63F92434BB81AD60BCFDFF0C7BF1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0*>(__this + _offset);
	U3CSendAsyncU3Ed__3_MoveNext_m9802850B4B8D63F92434BB81AD60BCFDFF0C7BF1(_thisAdjusted, method);
}
// System.Void Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__3_SetStateMachine_mD43D6A624A197C3CB440CE93E36D83F2F066B27C (U3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m4AA37E67E5C26A021760A9D90C566A8CC9E07AFA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t04CE7A2B25229FF5C4896DBB7B64B3CE604EC79F* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m4AA37E67E5C26A021760A9D90C566A8CC9E07AFA(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m4AA37E67E5C26A021760A9D90C566A8CC9E07AFA_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendAsyncU3Ed__3_SetStateMachine_mD43D6A624A197C3CB440CE93E36D83F2F066B27C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendAsyncU3Ed__3_t4E4337B7D3C1612423190E71A2AE6A66C8E5F5C0*>(__this + _offset);
	U3CSendAsyncU3Ed__3_SetStateMachine_mD43D6A624A197C3CB440CE93E36D83F2F066B27C(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__4_MoveNext_m150F410881E73971F44161CB8D494E80E84DA73C (U3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2_TisU3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0_mF9B9AFF41D7891FE5CF0CA69BD9F11368107910F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0_m86DB1BFF84134D9503C5F14EB66601AE961944E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mADF00E9133B0A0E8944ECF7DC9E504E057464527_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m73EC0AA35D69C7BD9CB8CF0401218F54D50A3F5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m82E11E4D5A7D93F6C6535712CB0D9A19E0B3F1A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mA6D771EE9708FACC33CA8BFDF2356EB65C51550A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mC3B711F8D7B7CFCA514C0A3FD4F6B2EC77BAD2DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_m02D8819042F353E9808D8FD683CE7A85E070B46E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mAE5B09203993E840EC9B1093F11D767B90D0F249_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Deserialize_TisRpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E_m4917091376BC659AFB6B04287B5EC9BED17F49E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m25EFF82BDCE95D202B2F11CEAE4BF1645FD47504_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m623E0E89F5E23F844E733FB75503B8AD97120277_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SimpleRpcClient_t3A3EEC4E97A2B3CC93D6F6C0E8A021C281C8EE15* V_1 = NULL;
	RpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E* V_2 = NULL;
	StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9* V_3 = NULL;
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* V_4 = NULL;
	ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA V_5;
	memset((&V_5), 0, sizeof(V_5));
	ConfiguredTaskAwaitable_1_t8CDF4BD8A651B04E9B68A1D1FBA52D4D98B9E9AD V_6;
	memset((&V_6), 0, sizeof(V_6));
	ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	ConfiguredTaskAwaitable_1_t8AF0FEBCC05402B6B9416E0286B45E21D42056AA V_8;
	memset((&V_8), 0, sizeof(V_8));
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_9 = NULL;
	JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E* V_10 = NULL;
	TaskCanceledException_tDF877A81B2CD292CC0FBC2332962A8C07DE2A08E* V_11 = NULL;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	Exception_t* V_14 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SimpleRpcClient_t3A3EEC4E97A2B3CC93D6F6C0E8A021C281C8EE15* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_00aa_2;
				}
			}
			{
				int32_t L_4 = V_0;
				if ((((int32_t)L_4) == ((int32_t)1)))
				{
					goto IL_011d_2;
				}
			}
			{
				RpcRequestMessageU5BU5D_t751C41D82385D4F97A408969DB7033B16596FE0E* L_5 = __this->___requests_2;
				SimpleRpcClient_t3A3EEC4E97A2B3CC93D6F6C0E8A021C281C8EE15* L_6 = V_1;
				NullCheck(L_6);
				JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_7 = L_6->____jsonSerializerSettings_2;
				il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
				String_t* L_8;
				L_8 = JsonConvert_SerializeObject_mEAA691E5567819FD0CDFEBB98629609ADB899D25((RuntimeObject*)L_5, L_7, NULL);
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_9;
				L_9 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
				StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9* L_10 = (StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9*)il2cpp_codegen_object_new(StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9_il2cpp_TypeInfo_var);
				NullCheck(L_10);
				StringContent__ctor_mFA0D8BF1997C7B433B2C8371976440840A45AA63(L_10, L_8, L_9, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
				V_3 = L_10;
				CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_11 = (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)il2cpp_codegen_object_new(CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
				NullCheck(L_11);
				CancellationTokenSource__ctor_m2ADB5D13368A9D364C20BB6039EC6DE858735E2C(L_11, NULL);
				V_4 = L_11;
				CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_12 = V_4;
				il2cpp_codegen_runtime_class_init_inline(ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_il2cpp_TypeInfo_var);
				TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_13;
				L_13 = ClientBase_get_ConnectionTimeout_m06FA22606E824EF1CD46EC1D7432DC8A06E272DF_inline(NULL);
				NullCheck(L_12);
				CancellationTokenSource_CancelAfter_mC81CF6E81C5205DF6C2528B3AC624EF48D3B2B43(L_12, L_13, NULL);
				SimpleRpcClient_t3A3EEC4E97A2B3CC93D6F6C0E8A021C281C8EE15* L_14 = V_1;
				NullCheck(L_14);
				HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_15 = L_14->____httpClient_3;
				String_t* L_16 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
				StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9* L_17 = V_3;
				CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_18 = V_4;
				NullCheck(L_18);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_19;
				L_19 = CancellationTokenSource_get_Token_m0FEC575DDDA2947476EE5D9B8F8AC887A4EEE3C4(L_18, NULL);
				NullCheck(L_15);
				Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* L_20;
				L_20 = HttpClient_PostAsync_mA79CE0DED944CDB3C848793128070008B6F155F8(L_15, L_16, L_17, L_19, NULL);
				NullCheck(L_20);
				ConfiguredTaskAwaitable_1_t8CDF4BD8A651B04E9B68A1D1FBA52D4D98B9E9AD L_21;
				L_21 = Task_1_ConfigureAwait_m25EFF82BDCE95D202B2F11CEAE4BF1645FD47504(L_20, (bool)0, Task_1_ConfigureAwait_m25EFF82BDCE95D202B2F11CEAE4BF1645FD47504_RuntimeMethod_var);
				V_6 = L_21;
				ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA L_22;
				L_22 = ConfiguredTaskAwaitable_1_GetAwaiter_m82E11E4D5A7D93F6C6535712CB0D9A19E0B3F1A6_inline((&V_6), ConfiguredTaskAwaitable_1_GetAwaiter_m82E11E4D5A7D93F6C6535712CB0D9A19E0B3F1A6_RuntimeMethod_var);
				V_5 = L_22;
				bool L_23;
				L_23 = ConfiguredTaskAwaiter_get_IsCompleted_mAE5B09203993E840EC9B1093F11D767B90D0F249((&V_5), ConfiguredTaskAwaiter_get_IsCompleted_mAE5B09203993E840EC9B1093F11D767B90D0F249_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_00c7_2;
				}
			}
			{
				int32_t L_24 = 0;
				V_0 = L_24;
				__this->___U3CU3E1__state_0 = L_24;
				ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA L_25 = V_5;
				__this->___U3CU3Eu__1_4 = L_25;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF* L_26 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0_m86DB1BFF84134D9503C5F14EB66601AE961944E7(L_26, (&V_5), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0_m86DB1BFF84134D9503C5F14EB66601AE961944E7_RuntimeMethod_var);
				goto IL_01e9;
			}

IL_00aa_2:
			{
				ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA L_27 = __this->___U3CU3Eu__1_4;
				V_5 = L_27;
				ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA* L_28 = (&__this->___U3CU3Eu__1_4);
				il2cpp_codegen_initobj(L_28, sizeof(ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA));
				int32_t L_29 = (-1);
				V_0 = L_29;
				__this->___U3CU3E1__state_0 = L_29;
			}

IL_00c7_2:
			{
				HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_30;
				L_30 = ConfiguredTaskAwaiter_GetResult_mA6D771EE9708FACC33CA8BFDF2356EB65C51550A((&V_5), ConfiguredTaskAwaiter_GetResult_mA6D771EE9708FACC33CA8BFDF2356EB65C51550A_RuntimeMethod_var);
				HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_31 = L_30;
				NullCheck(L_31);
				HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_32;
				L_32 = HttpResponseMessage_EnsureSuccessStatusCode_m9B3196715BFBEEC6946D0C082DE33C4C43C00210(L_31, NULL);
				NullCheck(L_31);
				HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* L_33;
				L_33 = HttpResponseMessage_get_Content_m2350C12EA59DAD014A59B17398E5B50F62202AF6_inline(L_31, NULL);
				NullCheck(L_33);
				Task_1_t06484715029D51A4420723456D165BAC63798F8D* L_34;
				L_34 = HttpContent_ReadAsStreamAsync_m7C4323126B463483F4B8E702CD61F8661B89CD10(L_33, NULL);
				NullCheck(L_34);
				ConfiguredTaskAwaitable_1_t8AF0FEBCC05402B6B9416E0286B45E21D42056AA L_35;
				L_35 = Task_1_ConfigureAwait_m623E0E89F5E23F844E733FB75503B8AD97120277(L_34, (bool)0, Task_1_ConfigureAwait_m623E0E89F5E23F844E733FB75503B8AD97120277_RuntimeMethod_var);
				V_8 = L_35;
				ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2 L_36;
				L_36 = ConfiguredTaskAwaitable_1_GetAwaiter_m73EC0AA35D69C7BD9CB8CF0401218F54D50A3F5A_inline((&V_8), ConfiguredTaskAwaitable_1_GetAwaiter_m73EC0AA35D69C7BD9CB8CF0401218F54D50A3F5A_RuntimeMethod_var);
				V_7 = L_36;
				bool L_37;
				L_37 = ConfiguredTaskAwaiter_get_IsCompleted_m02D8819042F353E9808D8FD683CE7A85E070B46E((&V_7), ConfiguredTaskAwaiter_get_IsCompleted_m02D8819042F353E9808D8FD683CE7A85E070B46E_RuntimeMethod_var);
				if (L_37)
				{
					goto IL_013a_2;
				}
			}
			{
				int32_t L_38 = 1;
				V_0 = L_38;
				__this->___U3CU3E1__state_0 = L_38;
				ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2 L_39 = V_7;
				__this->___U3CU3Eu__2_5 = L_39;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_5))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF* L_40 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2_TisU3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0_mF9B9AFF41D7891FE5CF0CA69BD9F11368107910F(L_40, (&V_7), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2_TisU3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0_mF9B9AFF41D7891FE5CF0CA69BD9F11368107910F_RuntimeMethod_var);
				goto IL_01e9;
			}

IL_011d_2:
			{
				ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2 L_41 = __this->___U3CU3Eu__2_5;
				V_7 = L_41;
				ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2* L_42 = (&__this->___U3CU3Eu__2_5);
				il2cpp_codegen_initobj(L_42, sizeof(ConfiguredTaskAwaiter_t602DE34EC880E76BC9BA4F3A367C1099BC914FA2));
				int32_t L_43 = (-1);
				V_0 = L_43;
				__this->___U3CU3E1__state_0 = L_43;
			}

IL_013a_2:
			{
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_44;
				L_44 = ConfiguredTaskAwaiter_GetResult_mC3B711F8D7B7CFCA514C0A3FD4F6B2EC77BAD2DD((&V_7), ConfiguredTaskAwaiter_GetResult_mC3B711F8D7B7CFCA514C0A3FD4F6B2EC77BAD2DD_RuntimeMethod_var);
				StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_45 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
				NullCheck(L_45);
				StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(L_45, L_44, NULL);
				V_9 = L_45;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0176_2:
					{// begin finally (depth: 3)
						{
							int32_t L_46 = V_0;
							if ((((int32_t)L_46) >= ((int32_t)0)))
							{
								goto IL_0185_2;
							}
						}
						{
							StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_47 = V_9;
							if (!L_47)
							{
								goto IL_0185_2;
							}
						}
						{
							StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_48 = V_9;
							NullCheck(L_48);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_48);
						}

IL_0185_2:
						{
							return;
						}
					}// end finally (depth: 3)
				});
				try
				{// begin try (depth: 3)
					{
						StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_49 = V_9;
						JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E* L_50 = (JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E*)il2cpp_codegen_object_new(JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E_il2cpp_TypeInfo_var);
						NullCheck(L_50);
						JsonTextReader__ctor_m362F27D5EA7CEE0A9BDBF46FE235D8558146C10D(L_50, L_49, NULL);
						V_10 = L_50;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0166_3:
							{// begin finally (depth: 4)
								{
									int32_t L_51 = V_0;
									if ((((int32_t)L_51) >= ((int32_t)0)))
									{
										goto IL_0175_3;
									}
								}
								{
									JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E* L_52 = V_10;
									if (!L_52)
									{
										goto IL_0175_3;
									}
								}
								{
									JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E* L_53 = V_10;
									NullCheck(L_53);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_53);
								}

IL_0175_3:
								{
									return;
								}
							}// end finally (depth: 4)
						});
						try
						{// begin try (depth: 4)
							SimpleRpcClient_t3A3EEC4E97A2B3CC93D6F6C0E8A021C281C8EE15* L_54 = V_1;
							NullCheck(L_54);
							JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_55 = L_54->____jsonSerializerSettings_2;
							JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_56;
							L_56 = JsonSerializer_Create_m1030D503AE4455241212085D4C07B6E878A44AFB(L_55, NULL);
							JsonTextReader_tCEDEE183A71157D31A68AB80F3636C1CBC2BE43E* L_57 = V_10;
							NullCheck(L_56);
							RpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E* L_58;
							L_58 = JsonSerializer_Deserialize_TisRpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E_m4917091376BC659AFB6B04287B5EC9BED17F49E2(L_56, L_57, JsonSerializer_Deserialize_TisRpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E_m4917091376BC659AFB6B04287B5EC9BED17F49E2_RuntimeMethod_var);
							V_2 = L_58;
							goto IL_01d5;
						}// end try (depth: 4)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}
				}// end try (depth: 3)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TaskCanceledException_tDF877A81B2CD292CC0FBC2332962A8C07DE2A08E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0186_1;
			}
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01ad_1;
			}
			throw e;
		}

CATCH_0186_1:
		{// begin catch(System.Threading.Tasks.TaskCanceledException)
			V_11 = ((TaskCanceledException_tDF877A81B2CD292CC0FBC2332962A8C07DE2A08E*)IL2CPP_GET_ACTIVE_EXCEPTION(TaskCanceledException_tDF877A81B2CD292CC0FBC2332962A8C07DE2A08E*));
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_il2cpp_TypeInfo_var)));
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_59;
			L_59 = ClientBase_get_ConnectionTimeout_m06FA22606E824EF1CD46EC1D7432DC8A06E272DF_inline(NULL);
			V_12 = L_59;
			double L_60;
			L_60 = TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF((&V_12), NULL);
			double L_61 = L_60;
			RuntimeObject* L_62 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)), &L_61);
			String_t* L_63;
			L_63 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDAC8226B79869EA87017AB5229861615BC0660A6)), L_62, NULL);
			TaskCanceledException_tDF877A81B2CD292CC0FBC2332962A8C07DE2A08E* L_64 = V_11;
			RpcClientTimeoutException_t6705F8007F759185D010A0E822189E2554BB20AF* L_65 = (RpcClientTimeoutException_t6705F8007F759185D010A0E822189E2554BB20AF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RpcClientTimeoutException_t6705F8007F759185D010A0E822189E2554BB20AF_il2cpp_TypeInfo_var)));
			NullCheck(L_65);
			RpcClientTimeoutException__ctor_mF1352073E00F6DBA1B15C4A16E38A112FA4D4483(L_65, L_63, L_64, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_65, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendAsyncU3Ed__4_MoveNext_m150F410881E73971F44161CB8D494E80E84DA73C_RuntimeMethod_var)));
		}// end catch (depth: 2)

CATCH_01ad_1:
		{// begin catch(System.Exception)
			V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			Exception_t* L_66 = V_13;
			RpcClientUnknownException_tFF48990C365A31D6AFB630B612733B30AE3DA2C1* L_67 = (RpcClientUnknownException_tFF48990C365A31D6AFB630B612733B30AE3DA2C1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RpcClientUnknownException_tFF48990C365A31D6AFB630B612733B30AE3DA2C1_il2cpp_TypeInfo_var)));
			NullCheck(L_67);
			RpcClientUnknownException__ctor_m91C6A7CC6E0368156778D0EF236270A9DD67C597(L_67, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFD6819A0DAFBD6B8C298C8CEF5CD5E29F47816F0)), L_66, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_67, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendAsyncU3Ed__4_MoveNext_m150F410881E73971F44161CB8D494E80E84DA73C_RuntimeMethod_var)));
		}// end catch (depth: 2)
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01bc;
		}
		throw e;
	}

CATCH_01bc:
	{// begin catch(System.Exception)
		V_14 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF* L_68 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_69 = V_14;
		AsyncTaskMethodBuilder_1_SetException_m9D70C765E9688DB85026E548C2A79251CC93EA7B(L_68, L_69, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m9D70C765E9688DB85026E548C2A79251CC93EA7B_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01e9;
	}// end catch (depth: 1)

IL_01d5:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF* L_70 = (&__this->___U3CU3Et__builder_1);
		RpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E* L_71 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mADF00E9133B0A0E8944ECF7DC9E504E057464527(L_70, L_71, AsyncTaskMethodBuilder_1_SetResult_mADF00E9133B0A0E8944ECF7DC9E504E057464527_RuntimeMethod_var);
	}

IL_01e9:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendAsyncU3Ed__4_MoveNext_m150F410881E73971F44161CB8D494E80E84DA73C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0*>(__this + _offset);
	U3CSendAsyncU3Ed__4_MoveNext_m150F410881E73971F44161CB8D494E80E84DA73C(_thisAdjusted, method);
}
// System.Void Nethereum.JsonRpc.Client.SimpleRpcClient/<SendAsync>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__4_SetStateMachine_m7DF7F6C0B22638E47F3B2C718C2B466122E46A52 (U3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m3A57F8DB8C304C3CAA196D98B5F150687FB30B6D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tC126441A1483B09B634DC29A57A4C97CFEDD4CCF* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m3A57F8DB8C304C3CAA196D98B5F150687FB30B6D(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m3A57F8DB8C304C3CAA196D98B5F150687FB30B6D_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendAsyncU3Ed__4_SetStateMachine_m7DF7F6C0B22638E47F3B2C718C2B466122E46A52_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendAsyncU3Ed__4_tA76308E86E024C1A4ECE3405AAAFBD895979DBF0*>(__this + _offset);
	U3CSendAsyncU3Ed__4_SetStateMachine_m7DF7F6C0B22638E47F3B2C718C2B466122E46A52(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BasicAuthenticationUserInfo_get_UserName_m2D03CDEAD0C5650B8F8A1E40246F5C74EBFFB878_inline (BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CUserNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BasicAuthenticationUserInfo_get_Password_m24F1B6573F3AD6F32496C53283E433AF918C0931_inline (BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPasswordU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RpcClient_get_MaximumConnectionsPerServer_mB0183831D02E2202FEA24EA4EA9A9ED30BCD96B6_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9_il2cpp_TypeInfo_var);
		int32_t L_0 = ((RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9_StaticFields*)il2cpp_codegen_static_fields_for(RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9_il2cpp_TypeInfo_var))->___U3CMaximumConnectionsPerServerU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpClient_set_BaseAddress_mB894313F9EA76DC08382B3499F33216ED9CF4C48_inline (HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___value0, const RuntimeMethod* method) 
{
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___value0;
		__this->___base_address_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___base_address_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ClientBase_get_ConnectionTimeout_m06FA22606E824EF1CD46EC1D7432DC8A06E272DF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ((ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_StaticFields*)il2cpp_codegen_static_fields_for(ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_il2cpp_TypeInfo_var))->___U3CConnectionTimeoutU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* HttpResponseMessage_get_Content_m2350C12EA59DAD014A59B17398E5B50F62202AF6_inline (HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* __this, const RuntimeMethod* method) 
{
	{
		HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* L_0 = __this->___U3CContentU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RpcRequestMessage_get_Method_mC80080EF982AA09703A1B06C9CCDE059EEFBB3B8_inline (RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMethodU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 ConfiguredTaskAwaitable_1_GetAwaiter_m10364C3B0A904803E890B2D75674665F986BDAB2_gshared_inline (ConfiguredTaskAwaitable_1_t97C129EA63015240E6F9E767F4A120CC9122FEF8* __this, const RuntimeMethod* method) 
{
	{
		ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 L_0 = (ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2)__this->___m_configuredTaskAwaiter_0;
		return L_0;
	}
}
