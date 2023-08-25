#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380;
// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver>
struct Func_1_t78E8B13F3C7D6CC3EB821B4F5D26999D062417E2;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<Nethereum.JsonRpc.Client.IRpcRequestResponseBatchItem,System.Boolean>
struct Func_2_tE8D27DA6DB21CB60C12AC22A45978B15556D7CC2;
// System.Func`2<Nethereum.JsonRpc.Client.IRpcRequestResponseBatchItem,Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage>
struct Func_2_tD2609153E882D28B55CFA4B75EA6989A9E13F254;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.Reflection.PropertyInfo,Newtonsoft.Json.Serialization.JsonProperty>
struct Func_2_t909388D06263B11EE8960AB1C4AAD9025EA29C90;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566;
// System.Func`3<Nethereum.JsonRpc.Client.RpcRequest,System.String,System.Threading.Tasks.Task>
struct Func_3_tE0EE343B458D09927050E38C911239670F82D81C;
// System.Func`4<System.Object,System.Object,System.Object,System.Object>
struct Func_4_t5BEC908E1F7894319A22CA9728A897FA95522DAD;
// System.Func`4<System.String,System.String,System.Object[],System.Threading.Tasks.Task>
struct Func_4_tD2B417B8273448F141CB0722CCE3A32D8432054B;
// System.Collections.Generic.IEnumerable`1<Nethereum.JsonRpc.Client.IRpcRequestResponseBatchItem>
struct IEnumerable_1_t470F739FE2CF83C48695F9C72D0A4AA900BE8EB4;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Serialization.JsonProperty>
struct IEnumerable_1_tC107EFC206CB804E47AF5CCEE98D4FEF67889387;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>
struct IEnumerable_1_t4F5FCDEAC3CEC5489B3CEE5871FC5F9D22C281EE;
// System.Collections.Generic.IEnumerable`1<Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage>
struct IEnumerable_1_tEB8FCEB50184AC65AD29F215B181DF01E3D99E9D;
// System.Collections.Generic.IEnumerable`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>
struct IEnumerable_1_tD97D65C81B242D571005A060EAB1E2CFA283A321;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>
struct IList_1_t106D4C1340745E38431865BBEA6AE170A4713431;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.JsonProperty>
struct IList_1_t9B14A530FBA8ECACC8EB673DB4D93DA765DD8551;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<Nethereum.JsonRpc.Client.IRpcRequestResponseBatchItem>
struct List_1_t3C943042DC58864AF24A09FD0A818698175020EA;
// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken>
struct List_1_t58901670B7FA44803364AA3059A3F981A991011A;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>
struct List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB;
// System.Collections.Generic.List`1<Newtonsoft.Json.Serialization.JsonProperty>
struct List_1_t74666FDF65CB5C8F34590E465BD151F8943D32CB;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]>
struct TaskFactory_1_tD4A761D0FD661A130A29F8D71C85052A363FD0FE;
// System.Threading.Tasks.TaskFactory`1<Nethereum.JsonRpc.Client.RpcRequestResponseBatch>
struct TaskFactory_1_t49CC7ACA49BC30DAC75BD0719F4324947D5D076F;
// System.Threading.Tasks.TaskFactory`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>
struct TaskFactory_1_t5B1C9960EF346DE5239570D805CD196794863B85;
// System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]>
struct Task_1_t521684A4C10415312B22F2EEE1222131B8703BF6;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcRequestResponseBatch>
struct Task_1_t67F4D792DFB211983224B6EF73EBF2B460451AB6;
// System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>
struct Task_1_tC0061418037436F03DCF6A1FA753A1D429C67C60;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,Newtonsoft.Json.Serialization.JsonContract>
struct ThreadSafeStore_2_tF22121D3E11895CE38FFEE9105F013F4ECC2DFC5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// Newtonsoft.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Nethereum.JsonRpc.Client.IRpcRequestResponseBatchItem[]
struct IRpcRequestResponseBatchItemU5BU5D_tD533CD6AD5FB92DD8B0AC7EE93870213536AF8BE;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E;
// Newtonsoft.Json.Serialization.JsonProperty[]
struct JsonPropertyU5BU5D_t10C88F15FC6BA5C5F99848D555A2946AB5585919;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage[]
struct RpcRequestMessageU5BU5D_t751C41D82385D4F97A408969DB7033B16596FE0E;
// Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]
struct RpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ComponentModel.AddingNewEventHandler
struct AddingNewEventHandler_tD9BAC60F604446ED14967643F63A83CE2A5C3701;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Nethereum.JsonRpc.Client.ClientBase
struct ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// Nethereum.JsonRpc.Client.Configuration
struct Configuration_t3005F5E8302BFC87F3BB89A9A42E3E2FBF58976D;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// Newtonsoft.Json.Serialization.DefaultContractResolver
struct DefaultContractResolver_t463A02A39C265D7EB415D4CEB2B2E32664A02CAD;
// Newtonsoft.Json.DefaultJsonNameTable
struct DefaultJsonNameTable_t81ABCBAD900C62AEA009A48779C3F3893DBC110D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// Newtonsoft.Json.Serialization.IAttributeProvider
struct IAttributeProvider_t7A99979C2D7DD703E91285B65728D13FCD3D2E2E;
// Nethereum.JsonRpc.Client.IClientRequestHeaderSupport
struct IClientRequestHeaderSupport_t16C1FB46059C42FE82DBD5F0BCB378C72C771887;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t7EC502F5FCA86DD95579A92A1E0116BE32D6340B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// Microsoft.Extensions.Logging.ILogger
struct ILogger_t1C0C2CD1CDFA86541C20F898F7581FB2CB04BFB4;
// Newtonsoft.Json.Serialization.IReferenceResolver
struct IReferenceResolver_t29B0AEAFB8A7BF2EE446320DE590343B21EA69A3;
// Nethereum.JsonRpc.Client.IRpcRequestResponseBatchItem
struct IRpcRequestResponseBatchItem_tA6FD1882E648C5B880809B25C0F13205DC303B4A;
// Newtonsoft.Json.Serialization.ISerializationBinder
struct ISerializationBinder_t3C8B850335FB40001C9201981439AE77B430031F;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_t44C99CB7D5AB59A077F569914E56DAD66B5A41EF;
// Newtonsoft.Json.Serialization.IValueProvider
struct IValueProvider_t2EEC2D13DF16BA74BC89448718A0754E0A4931D4;
// Newtonsoft.Json.Linq.JArray
struct JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A;
// Newtonsoft.Json.Linq.JObject
struct JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t4A44691A9942B8A7AEB4016F7405BF388D1E0632;
// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3;
// Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_t2B7EB6B1D12A8C94152AB2E690CC45F185373C46;
// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_tE6A7D4E99E3396B56718606824E99F870FCCF4BA;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16;
// Newtonsoft.Json.JsonConverterCollection
struct JsonConverterCollection_t6EEC84565C08B14107276B5023CE9E978DFCDF89;
// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3;
// Newtonsoft.Json.JsonReader
struct JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59;
// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_tDBF36F3E2C6B7538106878E1D5A7553C5EA77616;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Newtonsoft.Json.Serialization.NamingStrategy
struct NamingStrategy_tB85DD4A9F6C33F668AF7273D3B5193ABC4617D50;
// System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF;
// Nethereum.JsonRpc.Client.NullParamsFirstElementResolver
struct NullParamsFirstElementResolver_t14FF4D263B7CA7A8457DD39832ABDAAB1E407AED;
// Nethereum.JsonRpc.Client.NullParamsValueProvider
struct NullParamsValueProvider_t09155C95A76C6709EFB371342F757B11C72C620D;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_tF293724DEA588C35A7E94C4F4413AEE6438FE9CD;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// Nethereum.JsonRpc.Client.RequestInterceptor
struct RequestInterceptor_t0B0D2629DBFF7C5098B4B4C21BCA63444BD502F0;
// Nethereum.JsonRpc.Client.RpcClientTimeoutException
struct RpcClientTimeoutException_t6705F8007F759185D010A0E822189E2554BB20AF;
// Nethereum.JsonRpc.Client.RpcClientUnknownException
struct RpcClientUnknownException_tFF48990C365A31D6AFB630B612733B30AE3DA2C1;
// Nethereum.JsonRpc.Client.RpcError
struct RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3;
// Nethereum.JsonRpc.Client.RpcMessages.RpcError
struct RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C;
// Nethereum.JsonRpc.Client.RpcLogger
struct RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272;
// Nethereum.JsonRpc.Client.RpcMessages.RpcParametersJsonConverter
struct RpcParametersJsonConverter_tB1C1C5E6BED680B4F107A261B9352899C41FC67E;
// Nethereum.JsonRpc.Client.RpcRequest
struct RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5;
// Nethereum.JsonRpc.Client.RpcRequestBuilder
struct RpcRequestBuilder_t1EEB2A8EF2FDCBE66226A789E0B2F0B91D997CEF;
// Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage
struct RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D;
// Nethereum.JsonRpc.Client.RpcRequestResponseBatch
struct RpcRequestResponseBatch_t6AEBAEF11004CC33B6A80F4EAAD31AE318576632;
// Nethereum.JsonRpc.Client.RpcResponseException
struct RpcResponseException_tC6370C6CDE2D7E420D34DC0EDC15FF7CDD7B062F;
// Nethereum.JsonRpc.Client.RpcResponseFormatException
struct RpcResponseFormatException_t76CC339E2007361A292855FF82DD3787D6D0FC53;
// Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage
struct RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1;
// Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams
struct RpcStreamingParams_tA6178BB8E162EE9EA3E6A5F4DC3FC2C19CD01B2D;
// Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage
struct RpcStreamingResponseMessage_t843001565505B95D850573335FB72CCD26035149;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Type
struct Type_t;
// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Nethereum.JsonRpc.Client.NullParamsFirstElementResolver/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tB0EA81C76FCEC0D02323D8E737E40F6819484481;
// Nethereum.JsonRpc.Client.RpcRequestResponseBatch/<>c
struct U3CU3Ec_t0DA5A96E769895D8B5A6B11EBBC25A91DDB21F6A;
// Nethereum.JsonRpc.Client.RpcRequestResponseBatch/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t9BF30C858377308D1B6E9B593EEC74BEE9BA1925;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;
// Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo
struct BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B;

IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tF2ECC8ABC1EE7851CA7605B630A049F5DDF92727_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Configuration_t3005F5E8302BFC87F3BB89A9A42E3E2FBF58976D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultContractResolver_t463A02A39C265D7EB415D4CEB2B2E32664A02CAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t909388D06263B11EE8960AB1C4AAD9025EA29C90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD2609153E882D28B55CFA4B75EA6989A9E13F254_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE8D27DA6DB21CB60C12AC22A45978B15556D7CC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IClientRequestHeaderSupport_t16C1FB46059C42FE82DBD5F0BCB378C72C771887_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tD97D65C81B242D571005A060EAB1E2CFA283A321_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t83B4F51B8E95E2187321A1A079C140C8EA46C41B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_t1C0C2CD1CDFA86541C20F898F7581FB2CB04BFB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRpcRequestResponseBatchItem_tA6FD1882E648C5B880809B25C0F13205DC303B4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3C943042DC58864AF24A09FD0A818698175020EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullParamsValueProvider_t09155C95A76C6709EFB371342F757B11C72C620D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RpcResponseException_tC6370C6CDE2D7E420D34DC0EDC15FF7CDD7B062F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_tB0EA81C76FCEC0D02323D8E737E40F6819484481_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t9BF30C858377308D1B6E9B593EEC74BEE9BA1925_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0DA5A96E769895D8B5A6B11EBBC25A91DDB21F6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral068F780F4A8A2BE8B460C4858E09ED5587C3D171;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral2A1CCB509D9C2863877C3F9A21BA22023008BB1A;
IL2CPP_EXTERN_C String_t* _stringLiteral4A962F7AAEC3B50EF4B2CD52A7A2C969B759A960;
IL2CPP_EXTERN_C String_t* _stringLiteral4C5CD570816F5EF21DB031C8819A29AB3FE1F6D1;
IL2CPP_EXTERN_C String_t* _stringLiteral50506C2EC1EE335E6927A35852C7F4E22A2A095D;
IL2CPP_EXTERN_C String_t* _stringLiteral5B4F028A4070094FCA4E7762E2C376A65E2D59C6;
IL2CPP_EXTERN_C String_t* _stringLiteral7ACFAF82BBAB8E0AF489CE8E5C705D5561B275DF;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral9125A6F7AF01C617D0C306146BFE095F99C613FA;
IL2CPP_EXTERN_C String_t* _stringLiteral9EB642385221D006B3B8DB45C10F626FD2A3DB7C;
IL2CPP_EXTERN_C String_t* _stringLiteralD004EBBBC1070E7D0C496A257FCFE588E4B23913;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tB66B32BBEC7D214F8C06DBFCD83EAE28FC05871A_TisU3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382_m9CB6249D25317890F6A022CBEC4EA6418EBEDD30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m4BC751DE5228A932E5A397301D08847C86ED6FFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mEF2854D03FAFE1FA65666A343A5A4E693EAC5C09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m512728E1BD7F05EC8483CBF52CDACA0930B58C75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m5A1BFEB0204C3639B47062B208C905BD37A7EAF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382_mBA28B2AFAB87C924103FE94D42407074C7E23244_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m03EDF1D89A9457CA4A4800384133BE4383452EC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933_m34D6B2E94824DDAFADBC8F46423342D4FCD9233B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B_TisU3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B_m746B7C69AD446F8BD17369F232CD8175ED0854E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B_TisU3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197_m82B7759DA158FA54FDCE7B28BDD432704A982B31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933_m3E8A37A811A62C9EF91D30A009F8E147B491E5D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B_mA2EC7FB4C6DC17D35AC15CF9C3D9104A77CDF7FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197_m3D255C6F81471690512018DA3613ABC09524F532_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ClientBase_HandleRpcError_mABEA2591F0BB3D3067DC6AC5DC516A23BD0F5BC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m42A9E38692E4C0CD6AC6532132A8A456605E19EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m5E392CDD456FABF3D1CD5DAA83E61974437B61ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_m6333FFDC3EF3D5E2EC15C32AC339570ED7DE1966_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_mF91D4D04E07486802FD804FF9509FC2EE6121FF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_m007B99DA2999CA2DE57486D06A4465A7BD6482DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_mFEDD821A9639B102DF16501A45D30746A335F3FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisIRpcRequestResponseBatchItem_tA6FD1882E648C5B880809B25C0F13205DC303B4A_m802534855A50E85BCC992DD70E3B6476A407B791_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisIRpcRequestResponseBatchItem_tA6FD1882E648C5B880809B25C0F13205DC303B4A_TisRpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D_mBE552F7C454202B18874DCE7640EBFBFA5E79A5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisPropertyInfo_t_TisJsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3_m131F1A9BAF034D016DBB4945D2E260429535EBAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisRpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D_m8DA0019019BA9C5DD0F40B18361F36F2FE0876D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisJsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3_m6438BA513E6169D146E81CEB7D50D77F1DE2FD3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JToken_ToObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_mB190A5648F7D59DBCAAB93259A62BFB9AF268F89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JToken_ToObject_TisObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_mF55A415940C9707EE96EC0423BE2E913B8858876_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAE26BAB9625D4180D65D9BAC2E983B4B4F0CA689_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RpcParametersJsonConverter_ReadJson_m4D1EA44621F6A548879BCBF5530D7B5E786C0CE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m61B7CCAE6CC6063BEB2F01E3E780C21EC004C89B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_mDC4530758F5F98D6A31A819329FB9C5EC8704366_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetRpcRequestsU3Eb__4_0_mC54CEBF1FB6C1F483CBC9BBB3D2FBBA2CA796C91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CCreatePropertiesU3Eb__0_m7E45811BBEC0B1C178DA95B429A56F51B0A74550_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CUpdateBatchItemResponsesU3Eb__0_mF3FCA1BB62D28CD26993BC5424C6083694521967_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RpcRequestMessageU5BU5D_t751C41D82385D4F97A408969DB7033B16596FE0E;
struct RpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC54D6EE180E7C9588C5D8FBFB7602137A44ADDE6 
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

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
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
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<Nethereum.JsonRpc.Client.IRpcRequestResponseBatchItem>
struct List_1_t3C943042DC58864AF24A09FD0A818698175020EA  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IRpcRequestResponseBatchItemU5BU5D_tD533CD6AD5FB92DD8B0AC7EE93870213536AF8BE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3C943042DC58864AF24A09FD0A818698175020EA_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IRpcRequestResponseBatchItemU5BU5D_tD533CD6AD5FB92DD8B0AC7EE93870213536AF8BE* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Newtonsoft.Json.Serialization.JsonProperty>
struct List_1_t74666FDF65CB5C8F34590E465BD151F8943D32CB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	JsonPropertyU5BU5D_t10C88F15FC6BA5C5F99848D555A2946AB5585919* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t74666FDF65CB5C8F34590E465BD151F8943D32CB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	JsonPropertyU5BU5D_t10C88F15FC6BA5C5F99848D555A2946AB5585919* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Nethereum.JsonRpc.Client.Configuration
struct Configuration_t3005F5E8302BFC87F3BB89A9A42E3E2FBF58976D  : public RuntimeObject
{
};

struct Configuration_t3005F5E8302BFC87F3BB89A9A42E3E2FBF58976D_StaticFields
{
	// System.Object Nethereum.JsonRpc.Client.Configuration::<DefaultRequestId>k__BackingField
	RuntimeObject* ___U3CDefaultRequestIdU3Ek__BackingField_0;
};

// Newtonsoft.Json.Serialization.DefaultContractResolver
struct DefaultContractResolver_t463A02A39C265D7EB415D4CEB2B2E32664A02CAD  : public RuntimeObject
{
	// Newtonsoft.Json.DefaultJsonNameTable Newtonsoft.Json.Serialization.DefaultContractResolver::_nameTable
	DefaultJsonNameTable_t81ABCBAD900C62AEA009A48779C3F3893DBC110D* ____nameTable_3;
	// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,Newtonsoft.Json.Serialization.JsonContract> Newtonsoft.Json.Serialization.DefaultContractResolver::_contractCache
	ThreadSafeStore_2_tF22121D3E11895CE38FFEE9105F013F4ECC2DFC5* ____contractCache_4;
	// System.Reflection.BindingFlags Newtonsoft.Json.Serialization.DefaultContractResolver::<DefaultMembersSearchFlags>k__BackingField
	int32_t ___U3CDefaultMembersSearchFlagsU3Ek__BackingField_5;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<SerializeCompilerGeneratedMembers>k__BackingField
	bool ___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_6;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<IgnoreSerializableInterface>k__BackingField
	bool ___U3CIgnoreSerializableInterfaceU3Ek__BackingField_7;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<IgnoreSerializableAttribute>k__BackingField
	bool ___U3CIgnoreSerializableAttributeU3Ek__BackingField_8;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<IgnoreIsSpecifiedMembers>k__BackingField
	bool ___U3CIgnoreIsSpecifiedMembersU3Ek__BackingField_9;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<IgnoreShouldSerializeMembers>k__BackingField
	bool ___U3CIgnoreShouldSerializeMembersU3Ek__BackingField_10;
	// Newtonsoft.Json.Serialization.NamingStrategy Newtonsoft.Json.Serialization.DefaultContractResolver::<NamingStrategy>k__BackingField
	NamingStrategy_tB85DD4A9F6C33F668AF7273D3B5193ABC4617D50* ___U3CNamingStrategyU3Ek__BackingField_11;
};

struct DefaultContractResolver_t463A02A39C265D7EB415D4CEB2B2E32664A02CAD_StaticFields
{
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.Serialization.DefaultContractResolver::_instance
	RuntimeObject* ____instance_0;
	// System.String[] Newtonsoft.Json.Serialization.DefaultContractResolver::BlacklistedTypeNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___BlacklistedTypeNames_1;
	// Newtonsoft.Json.JsonConverter[] Newtonsoft.Json.Serialization.DefaultContractResolver::BuiltInConverters
	JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E* ___BuiltInConverters_2;
};

// Nethereum.JsonRpc.Client.DefaultJsonSerializerSettingsFactory
struct DefaultJsonSerializerSettingsFactory_t4F6C48DF2F436B49DE6329F66B65E3D06C8EF186  : public RuntimeObject
{
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

// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3  : public RuntimeObject
{
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A* ____parent_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____previous_2;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____next_3;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject* ____annotations_4;
};

struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_StaticFields
{
	// Newtonsoft.Json.Linq.JTokenEqualityComparer Newtonsoft.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_t2B7EB6B1D12A8C94152AB2E690CC45F185373C46* ____equalityComparer_0;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BooleanTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___NumberTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BigIntegerTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BigIntegerTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___StringTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___GuidTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___TimeSpanTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___UriTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___CharTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___DateTimeTypes_13;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BytesTypes_14;
};

// Newtonsoft.Json.JsonConverter
struct JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Nethereum.JsonRpc.Client.NullParamsValueProvider
struct NullParamsValueProvider_t09155C95A76C6709EFB371342F757B11C72C620D  : public RuntimeObject
{
	// System.Reflection.PropertyInfo Nethereum.JsonRpc.Client.NullParamsValueProvider::_memberInfo
	PropertyInfo_t* ____memberInfo_0;
};

// Nethereum.JsonRpc.Client.RequestInterceptor
struct RequestInterceptor_t0B0D2629DBFF7C5098B4B4C21BCA63444BD502F0  : public RuntimeObject
{
};

// Nethereum.JsonRpc.Client.RpcError
struct RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3  : public RuntimeObject
{
	// System.Int32 Nethereum.JsonRpc.Client.RpcError::<Code>k__BackingField
	int32_t ___U3CCodeU3Ek__BackingField_0;
	// System.String Nethereum.JsonRpc.Client.RpcError::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;
	// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcError::<Data>k__BackingField
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___U3CDataU3Ek__BackingField_2;
};

// Nethereum.JsonRpc.Client.RpcMessages.RpcError
struct RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C  : public RuntimeObject
{
	// System.Int32 Nethereum.JsonRpc.Client.RpcMessages.RpcError::<Code>k__BackingField
	int32_t ___U3CCodeU3Ek__BackingField_0;
	// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcError::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;
	// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcMessages.RpcError::<Data>k__BackingField
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___U3CDataU3Ek__BackingField_2;
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

// Nethereum.JsonRpc.Client.RpcRequest
struct RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5  : public RuntimeObject
{
	// System.Object Nethereum.JsonRpc.Client.RpcRequest::<Id>k__BackingField
	RuntimeObject* ___U3CIdU3Ek__BackingField_0;
	// System.String Nethereum.JsonRpc.Client.RpcRequest::<Method>k__BackingField
	String_t* ___U3CMethodU3Ek__BackingField_1;
	// System.Object[] Nethereum.JsonRpc.Client.RpcRequest::<RawParameters>k__BackingField
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___U3CRawParametersU3Ek__BackingField_2;
};

// Nethereum.JsonRpc.Client.RpcRequestBuilder
struct RpcRequestBuilder_t1EEB2A8EF2FDCBE66226A789E0B2F0B91D997CEF  : public RuntimeObject
{
	// System.String Nethereum.JsonRpc.Client.RpcRequestBuilder::<MethodName>k__BackingField
	String_t* ___U3CMethodNameU3Ek__BackingField_0;
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

// Nethereum.JsonRpc.Client.RpcRequestResponseBatch
struct RpcRequestResponseBatch_t6AEBAEF11004CC33B6A80F4EAAD31AE318576632  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Nethereum.JsonRpc.Client.IRpcRequestResponseBatchItem> Nethereum.JsonRpc.Client.RpcRequestResponseBatch::<BatchItems>k__BackingField
	List_1_t3C943042DC58864AF24A09FD0A818698175020EA* ___U3CBatchItemsU3Ek__BackingField_0;
};

// Nethereum.JsonRpc.Client.RpcMessages.RpcResponseExtensions
struct RpcResponseExtensions_tC392D1D54CD226862D13A3F697F29B52325E1D8C  : public RuntimeObject
{
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

// Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams
struct RpcStreamingParams_tA6178BB8E162EE9EA3E6A5F4DC3FC2C19CD01B2D  : public RuntimeObject
{
	// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams::<Subscription>k__BackingField
	String_t* ___U3CSubscriptionU3Ek__BackingField_0;
	// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams::<Result>k__BackingField
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___U3CResultU3Ek__BackingField_1;
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

// Nethereum.JsonRpc.Client.UserAuthentication
struct UserAuthentication_t92F49AD0EFFDD2E1E68E77A95B290B2EC399B76F  : public RuntimeObject
{
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

// Nethereum.JsonRpc.Client.NullParamsFirstElementResolver/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tB0EA81C76FCEC0D02323D8E737E40F6819484481  : public RuntimeObject
{
	// Nethereum.JsonRpc.Client.NullParamsFirstElementResolver Nethereum.JsonRpc.Client.NullParamsFirstElementResolver/<>c__DisplayClass0_0::<>4__this
	NullParamsFirstElementResolver_t14FF4D263B7CA7A8457DD39832ABDAAB1E407AED* ___U3CU3E4__this_0;
	// Newtonsoft.Json.MemberSerialization Nethereum.JsonRpc.Client.NullParamsFirstElementResolver/<>c__DisplayClass0_0::memberSerialization
	int32_t ___memberSerialization_1;
};

// Nethereum.JsonRpc.Client.RpcRequestResponseBatch/<>c
struct U3CU3Ec_t0DA5A96E769895D8B5A6B11EBBC25A91DDB21F6A  : public RuntimeObject
{
};

struct U3CU3Ec_t0DA5A96E769895D8B5A6B11EBBC25A91DDB21F6A_StaticFields
{
	// Nethereum.JsonRpc.Client.RpcRequestResponseBatch/<>c Nethereum.JsonRpc.Client.RpcRequestResponseBatch/<>c::<>9
	U3CU3Ec_t0DA5A96E769895D8B5A6B11EBBC25A91DDB21F6A* ___U3CU3E9_0;
	// System.Func`2<Nethereum.JsonRpc.Client.IRpcRequestResponseBatchItem,Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage> Nethereum.JsonRpc.Client.RpcRequestResponseBatch/<>c::<>9__4_0
	Func_2_tD2609153E882D28B55CFA4B75EA6989A9E13F254* ___U3CU3E9__4_0_1;
};

// Nethereum.JsonRpc.Client.RpcRequestResponseBatch/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t9BF30C858377308D1B6E9B593EEC74BEE9BA1925  : public RuntimeObject
{
	// Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage Nethereum.JsonRpc.Client.RpcRequestResponseBatch/<>c__DisplayClass5_0::response
	RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* ___response_0;
};

// Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo
struct BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B  : public RuntimeObject
{
	// System.String Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo::<UserName>k__BackingField
	String_t* ___U3CUserNameU3Ek__BackingField_0;
	// System.String Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo::<Password>k__BackingField
	String_t* ___U3CPasswordU3Ek__BackingField_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]>
struct ConfiguredTaskAwaiter_tB66B32BBEC7D214F8C06DBFCD83EAE28FC05871A 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t521684A4C10415312B22F2EEE1222131B8703BF6* ___m_task_0;
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

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>
struct ConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_tC0061418037436F03DCF6A1FA753A1D429C67C60* ___m_task_0;
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

// System.Nullable`1<Newtonsoft.Json.Required>
struct Nullable_1_t0ED183EB9E50B714F9A282F07935579F070B562B 
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

// System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcRequestResponseBatch>
struct Task_1_t67F4D792DFB211983224B6EF73EBF2B460451AB6  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RpcRequestResponseBatch_t6AEBAEF11004CC33B6A80F4EAAD31AE318576632* ___m_result_22;
};

struct Task_1_t67F4D792DFB211983224B6EF73EBF2B460451AB6_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t49CC7ACA49BC30DAC75BD0719F4324947D5D076F* ___s_defaultFactory_23;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
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

// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A  : public JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3
{
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_tDBF36F3E2C6B7538106878E1D5A7553C5EA77616* ____listChanged_15;
	// System.ComponentModel.AddingNewEventHandler Newtonsoft.Json.Linq.JContainer::_addingNew
	AddingNewEventHandler_tD9BAC60F604446ED14967643F63A83CE2A5C3701* ____addingNew_16;
	// System.Collections.Specialized.NotifyCollectionChangedEventHandler Newtonsoft.Json.Linq.JContainer::_collectionChanged
	NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF* ____collectionChanged_17;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject* ____syncRoot_18;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_19;
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

// Nethereum.JsonRpc.Client.NullParamsFirstElementResolver
struct NullParamsFirstElementResolver_t14FF4D263B7CA7A8457DD39832ABDAAB1E407AED  : public DefaultContractResolver_t463A02A39C265D7EB415D4CEB2B2E32664A02CAD
{
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// Nethereum.JsonRpc.Client.RpcMessages.RpcParametersJsonConverter
struct RpcParametersJsonConverter_tB1C1C5E6BED680B4F107A261B9352899C41FC67E  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
};

// Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage
struct RpcStreamingResponseMessage_t843001565505B95D850573335FB72CCD26035149  : public RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1
{
	// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::<Method>k__BackingField
	String_t* ___U3CMethodU3Ek__BackingField_4;
	// Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::<Params>k__BackingField
	RpcStreamingParams_tA6178BB8E162EE9EA3E6A5F4DC3FC2C19CD01B2D* ___U3CParamsU3Ek__BackingField_5;
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

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcRequestResponseBatch>
struct AsyncTaskMethodBuilder_1_tF2ECC8ABC1EE7851CA7605B630A049F5DDF92727 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t67F4D792DFB211983224B6EF73EBF2B460451AB6* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tF2ECC8ABC1EE7851CA7605B630A049F5DDF92727_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t67F4D792DFB211983224B6EF73EBF2B460451AB6* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]>
struct ConfiguredTaskAwaitable_1_t0AC5594D6969A3FD2EEE701AE13332ACCB161416 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tB66B32BBEC7D214F8C06DBFCD83EAE28FC05871A ___m_configuredTaskAwaiter_0;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>
struct ConfiguredTaskAwaitable_1_t97C129EA63015240E6F9E767F4A120CC9122FEF8 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 ___m_configuredTaskAwaiter_0;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>
struct ConfiguredTaskAwaitable_1_t4091B8D31F978789633C727AED2642E53F28BCFF 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B ___m_configuredTaskAwaiter_0;
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

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___m_configuredTaskAwaiter_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshaled_com
{
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_com ___m_configuredTaskAwaiter_0;
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

// Newtonsoft.Json.Linq.JArray
struct JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8  : public JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JArray::_values
	List_1_t58901670B7FA44803364AA3059A3F981A991011A* ____values_20;
};

// Newtonsoft.Json.Linq.JObject
struct JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1  : public JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A
{
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t4A44691A9942B8A7AEB4016F7405BF388D1E0632* ____properties_20;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___PropertyChanged_21;
	// System.ComponentModel.PropertyChangingEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanging
	PropertyChangingEventHandler_tF293724DEA588C35A7E94C4F4413AEE6438FE9CD* ___PropertyChanging_22;
};

// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3  : public RuntimeObject
{
	// System.Nullable`1<Newtonsoft.Json.Required> Newtonsoft.Json.Serialization.JsonProperty::_required
	Nullable_1_t0ED183EB9E50B714F9A282F07935579F070B562B ____required_0;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::_hasExplicitDefaultValue
	bool ____hasExplicitDefaultValue_1;
	// System.Object Newtonsoft.Json.Serialization.JsonProperty::_defaultValue
	RuntimeObject* ____defaultValue_2;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::_hasGeneratedDefaultValue
	bool ____hasGeneratedDefaultValue_3;
	// System.String Newtonsoft.Json.Serialization.JsonProperty::_propertyName
	String_t* ____propertyName_4;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::_skipPropertyNameEscape
	bool ____skipPropertyNameEscape_5;
	// System.Type Newtonsoft.Json.Serialization.JsonProperty::_propertyType
	Type_t* ____propertyType_6;
	// Newtonsoft.Json.Serialization.JsonContract Newtonsoft.Json.Serialization.JsonProperty::<PropertyContract>k__BackingField
	JsonContract_tE6A7D4E99E3396B56718606824E99F870FCCF4BA* ___U3CPropertyContractU3Ek__BackingField_7;
	// System.Type Newtonsoft.Json.Serialization.JsonProperty::<DeclaringType>k__BackingField
	Type_t* ___U3CDeclaringTypeU3Ek__BackingField_8;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.Serialization.JsonProperty::<Order>k__BackingField
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3COrderU3Ek__BackingField_9;
	// System.String Newtonsoft.Json.Serialization.JsonProperty::<UnderlyingName>k__BackingField
	String_t* ___U3CUnderlyingNameU3Ek__BackingField_10;
	// Newtonsoft.Json.Serialization.IValueProvider Newtonsoft.Json.Serialization.JsonProperty::<ValueProvider>k__BackingField
	RuntimeObject* ___U3CValueProviderU3Ek__BackingField_11;
	// Newtonsoft.Json.Serialization.IAttributeProvider Newtonsoft.Json.Serialization.JsonProperty::<AttributeProvider>k__BackingField
	RuntimeObject* ___U3CAttributeProviderU3Ek__BackingField_12;
	// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonProperty::<Converter>k__BackingField
	JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* ___U3CConverterU3Ek__BackingField_13;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<Ignored>k__BackingField
	bool ___U3CIgnoredU3Ek__BackingField_14;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<Readable>k__BackingField
	bool ___U3CReadableU3Ek__BackingField_15;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<Writable>k__BackingField
	bool ___U3CWritableU3Ek__BackingField_16;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<HasMemberAttribute>k__BackingField
	bool ___U3CHasMemberAttributeU3Ek__BackingField_17;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonProperty::<IsReference>k__BackingField
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___U3CIsReferenceU3Ek__BackingField_18;
	// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.Serialization.JsonProperty::<NullValueHandling>k__BackingField
	Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 ___U3CNullValueHandlingU3Ek__BackingField_19;
	// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling> Newtonsoft.Json.Serialization.JsonProperty::<DefaultValueHandling>k__BackingField
	Nullable_1_t4DEE77C12DDAF72BAE2A1FA8A8736FC478D721E8 ___U3CDefaultValueHandlingU3Ek__BackingField_20;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.Serialization.JsonProperty::<ReferenceLoopHandling>k__BackingField
	Nullable_1_t599F8D9D40143BFCB12D7085DFEA8AC7171F5E77 ___U3CReferenceLoopHandlingU3Ek__BackingField_21;
	// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling> Newtonsoft.Json.Serialization.JsonProperty::<ObjectCreationHandling>k__BackingField
	Nullable_1_t5ECEC9E2B3F1C050A3E9EC928487DD5C9AB0996D ___U3CObjectCreationHandlingU3Ek__BackingField_22;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.Serialization.JsonProperty::<TypeNameHandling>k__BackingField
	Nullable_1_tB85AB604017196E6A3D3B920121E8C3A255827F0 ___U3CTypeNameHandlingU3Ek__BackingField_23;
	// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::<ShouldSerialize>k__BackingField
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___U3CShouldSerializeU3Ek__BackingField_24;
	// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::<ShouldDeserialize>k__BackingField
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___U3CShouldDeserializeU3Ek__BackingField_25;
	// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::<GetIsSpecified>k__BackingField
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___U3CGetIsSpecifiedU3Ek__BackingField_26;
	// System.Action`2<System.Object,System.Object> Newtonsoft.Json.Serialization.JsonProperty::<SetIsSpecified>k__BackingField
	Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* ___U3CSetIsSpecifiedU3Ek__BackingField_27;
	// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonProperty::<ItemConverter>k__BackingField
	JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* ___U3CItemConverterU3Ek__BackingField_28;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonProperty::<ItemIsReference>k__BackingField
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___U3CItemIsReferenceU3Ek__BackingField_29;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.Serialization.JsonProperty::<ItemTypeNameHandling>k__BackingField
	Nullable_1_tB85AB604017196E6A3D3B920121E8C3A255827F0 ___U3CItemTypeNameHandlingU3Ek__BackingField_30;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.Serialization.JsonProperty::<ItemReferenceLoopHandling>k__BackingField
	Nullable_1_t599F8D9D40143BFCB12D7085DFEA8AC7171F5E77 ___U3CItemReferenceLoopHandlingU3Ek__BackingField_31;
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

// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonWriter::_stack
	List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB* ____stack_2;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonWriter::_currentPosition
	JsonPosition_t7788656A280615072710710E8C15D23285850E8E ____currentPosition_3;
	// Newtonsoft.Json.JsonWriter/State Newtonsoft.Json.JsonWriter::_currentState
	int32_t ____currentState_4;
	// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonWriter::_formatting
	int32_t ____formatting_5;
	// System.Boolean Newtonsoft.Json.JsonWriter::<CloseOutput>k__BackingField
	bool ___U3CCloseOutputU3Ek__BackingField_6;
	// System.Boolean Newtonsoft.Json.JsonWriter::<AutoCompleteOnClose>k__BackingField
	bool ___U3CAutoCompleteOnCloseU3Ek__BackingField_7;
	// Newtonsoft.Json.DateFormatHandling Newtonsoft.Json.JsonWriter::_dateFormatHandling
	int32_t ____dateFormatHandling_8;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonWriter::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_9;
	// Newtonsoft.Json.StringEscapeHandling Newtonsoft.Json.JsonWriter::_stringEscapeHandling
	int32_t ____stringEscapeHandling_10;
	// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonWriter::_floatFormatHandling
	int32_t ____floatFormatHandling_11;
	// System.String Newtonsoft.Json.JsonWriter::_dateFormatString
	String_t* ____dateFormatString_12;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonWriter::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_13;
};

struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3_StaticFields
{
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArray
	StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED* ___StateArray_0;
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArrayTemplate
	StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED* ___StateArrayTemplate_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
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

// Nethereum.JsonRpc.Client.RpcClientTimeoutException
struct RpcClientTimeoutException_t6705F8007F759185D010A0E822189E2554BB20AF  : public Exception_t
{
};

// Nethereum.JsonRpc.Client.RpcClientUnknownException
struct RpcClientUnknownException_tFF48990C365A31D6AFB630B612733B30AE3DA2C1  : public Exception_t
{
};

// Nethereum.JsonRpc.Client.RpcResponseException
struct RpcResponseException_tC6370C6CDE2D7E420D34DC0EDC15FF7CDD7B062F  : public Exception_t
{
	// Nethereum.JsonRpc.Client.RpcError Nethereum.JsonRpc.Client.RpcResponseException::<RpcError>k__BackingField
	RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3* ___U3CRpcErrorU3Ek__BackingField_18;
};

// Nethereum.JsonRpc.Client.RpcResponseFormatException
struct RpcResponseFormatException_t76CC339E2007361A292855FF82DD3787D6D0FC53  : public Exception_t
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// Nethereum.JsonRpc.Client.ClientBase/<SendBatchRequestAsync>d__9
struct U3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382 
{
	// System.Int32 Nethereum.JsonRpc.Client.ClientBase/<SendBatchRequestAsync>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcRequestResponseBatch> Nethereum.JsonRpc.Client.ClientBase/<SendBatchRequestAsync>d__9::<>t__builder
	AsyncTaskMethodBuilder_1_tF2ECC8ABC1EE7851CA7605B630A049F5DDF92727 ___U3CU3Et__builder_1;
	// Nethereum.JsonRpc.Client.ClientBase Nethereum.JsonRpc.Client.ClientBase/<SendBatchRequestAsync>d__9::<>4__this
	ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B* ___U3CU3E4__this_2;
	// Nethereum.JsonRpc.Client.RpcRequestResponseBatch Nethereum.JsonRpc.Client.ClientBase/<SendBatchRequestAsync>d__9::rpcRequestResponseBatch
	RpcRequestResponseBatch_t6AEBAEF11004CC33B6A80F4EAAD31AE318576632* ___rpcRequestResponseBatch_3;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]> Nethereum.JsonRpc.Client.ClientBase/<SendBatchRequestAsync>d__9::<>u__1
	ConfiguredTaskAwaiter_tB66B32BBEC7D214F8C06DBFCD83EAE28FC05871A ___U3CU3Eu__1_4;
};

// System.Func`2<Nethereum.JsonRpc.Client.IRpcRequestResponseBatchItem,System.Boolean>
struct Func_2_tE8D27DA6DB21CB60C12AC22A45978B15556D7CC2  : public MulticastDelegate_t
{
};

// System.Func`2<Nethereum.JsonRpc.Client.IRpcRequestResponseBatchItem,Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage>
struct Func_2_tD2609153E882D28B55CFA4B75EA6989A9E13F254  : public MulticastDelegate_t
{
};

// System.Func`2<System.Reflection.PropertyInfo,Newtonsoft.Json.Serialization.JsonProperty>
struct Func_2_t909388D06263B11EE8960AB1C4AAD9025EA29C90  : public MulticastDelegate_t
{
};

// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566  : public MulticastDelegate_t
{
};

// System.Func`3<Nethereum.JsonRpc.Client.RpcRequest,System.String,System.Threading.Tasks.Task>
struct Func_3_tE0EE343B458D09927050E38C911239670F82D81C  : public MulticastDelegate_t
{
};

// System.Func`4<System.Object,System.Object,System.Object,System.Object>
struct Func_4_t5BEC908E1F7894319A22CA9728A897FA95522DAD  : public MulticastDelegate_t
{
};

// System.Func`4<System.String,System.String,System.Object[],System.Threading.Tasks.Task>
struct Func_4_tD2B417B8273448F141CB0722CCE3A32D8432054B  : public MulticastDelegate_t
{
};

// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};

// Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__15
struct U3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B 
{
	// System.Int32 Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__15::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Nethereum.JsonRpc.Client.ClientBase Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__15::<>4__this
	ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B* ___U3CU3E4__this_2;
	// Nethereum.JsonRpc.Client.RpcRequest Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__15::request
	RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* ___request_3;
	// System.String Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__15::route
	String_t* ___route_4;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage> Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__15::<>u__1
	ConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B ___U3CU3Eu__1_5;
};

// Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__18
struct U3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197 
{
	// System.Int32 Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__18::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// System.String Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__18::method
	String_t* ___method_2;
	// System.Object[] Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__18::paramList
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___paramList_3;
	// Nethereum.JsonRpc.Client.ClientBase Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__18::<>4__this
	ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B* ___U3CU3E4__this_4;
	// System.String Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__18::route
	String_t* ___route_5;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage> Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__18::<>u__1
	ConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B ___U3CU3Eu__1_6;
};

// Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1
struct U3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933 
{
	// System.Int32 Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// System.Func`3<Nethereum.JsonRpc.Client.RpcRequest,System.String,System.Threading.Tasks.Task> Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::interceptedSendRequestAsync
	Func_3_tE0EE343B458D09927050E38C911239670F82D81C* ___interceptedSendRequestAsync_2;
	// Nethereum.JsonRpc.Client.RpcRequest Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::request
	RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* ___request_3;
	// System.String Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::route
	String_t* ___route_4;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::<>u__1
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___U3CU3Eu__1_5;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Nethereum.JsonRpc.Client.ClientBase/<SendBatchRequestAsync>d__9>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382_m8A129E38A61188ABD0690EE1A989B81FAD913B81_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__15>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B_mA2EC7FB4C6DC17D35AC15CF9C3D9104A77CDF7FB_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__18>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197_m3D255C6F81471690512018DA3613ABC09524F532_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197* ___stateMachine0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.Object>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t97C129EA63015240E6F9E767F4A120CC9122FEF8 Task_1_ConfigureAwait_m9D6420C859925B7C250DED7586DD770C91632070_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 ConfiguredTaskAwaitable_1_GetAwaiter_m10364C3B0A904803E890B2D75674665F986BDAB2_gshared_inline (ConfiguredTaskAwaitable_1_t97C129EA63015240E6F9E767F4A120CC9122FEF8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mD6243A7544181F96816A5F81459F4B66908ADB5E_gshared (ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Nethereum.JsonRpc.Client.ClientBase/<SendBatchRequestAsync>d__9>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382_m6CDF3DDDC90B6CEE414BFA60A21D5A3F0E70F78B_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* ___awaiter0, U3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConfiguredTaskAwaiter_GetResult_m00ABE5C46A983C38086438B7A7CB2C62296B3383_gshared (ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__15>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B_m473337A0669D6320C61B130F3D21035B168DEABE_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* ___awaiter0, U3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__18>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197_m075BAA292ADFCF5A7F31B3307CC58DAFB1347AF1_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* ___awaiter0, U3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933_m3E8A37A811A62C9EF91D30A009F8E147B491E5D0_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933* ___stateMachine0, const RuntimeMethod* method) ;
// TResult System.Func`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_4_Invoke_m9BAD5BBD30933FE9049B012CD3316FB2F24F3B8A_gshared_inline (Func_4_t5BEC908E1F7894319A22CA9728A897FA95522DAD* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method) ;
// TResult System.Func`3<System.Object,System.Object,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_3_Invoke_m31D9E56C7CAE538FD8564F34CABA2C2A537ED393_gshared_inline (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933_m34D6B2E94824DDAFADBC8F46423342D4FCD9233B_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___awaiter0, U3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933* ___stateMachine1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_First_TisRuntimeObject_mC6FA107934316BE28EA02DDB9EADA7AE8DD1916B_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T Newtonsoft.Json.Linq.JToken::ToObject<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JToken_ToObject_TisRuntimeObject_m60590FEF9C8FE15CB8D077C39B8E852F4C34E872_gshared (JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* __this, const RuntimeMethod* method) ;
// T Newtonsoft.Json.Linq.JToken::ToObject<System.Object>(Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JToken_ToObject_TisRuntimeObject_m396E3ED8322B1E7A8290DDB0C502C55FF8C129EB_gshared (JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* __this, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___jsonSerializer0, const RuntimeMethod* method) ;

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcRequestResponseBatch>::Create()
inline AsyncTaskMethodBuilder_1_tF2ECC8ABC1EE7851CA7605B630A049F5DDF92727 AsyncTaskMethodBuilder_1_Create_m4BC751DE5228A932E5A397301D08847C86ED6FFE (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tF2ECC8ABC1EE7851CA7605B630A049F5DDF92727 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcRequestResponseBatch>::Start<Nethereum.JsonRpc.Client.ClientBase/<SendBatchRequestAsync>d__9>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382_mBA28B2AFAB87C924103FE94D42407074C7E23244 (AsyncTaskMethodBuilder_1_tF2ECC8ABC1EE7851CA7605B630A049F5DDF92727* __this, U3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF2ECC8ABC1EE7851CA7605B630A049F5DDF92727*, U3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382_m8A129E38A61188ABD0690EE1A989B81FAD913B81_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcRequestResponseBatch>::get_Task()
inline Task_1_t67F4D792DFB211983224B6EF73EBF2B460451AB6* AsyncTaskMethodBuilder_1_get_Task_m03EDF1D89A9457CA4A4800384133BE4383452EC6 (AsyncTaskMethodBuilder_1_tF2ECC8ABC1EE7851CA7605B630A049F5DDF92727* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t67F4D792DFB211983224B6EF73EBF2B460451AB6* (*) (AsyncTaskMethodBuilder_1_tF2ECC8ABC1EE7851CA7605B630A049F5DDF92727*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Boolean Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::get_HasError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RpcResponseMessage_get_HasError_m6772B3DB2F0780B8219AF24D39825F0783E477FC (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, const RuntimeMethod* method) ;
// Nethereum.JsonRpc.Client.RpcMessages.RpcError Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* RpcResponseMessage_get_Error_m8797AF4364D700201859343603B5F3C7502EF451_inline (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, const RuntimeMethod* method) ;
// System.Int32 Nethereum.JsonRpc.Client.RpcMessages.RpcError::get_Code()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RpcError_get_Code_mEDBFDF1DB7BA77B0B6BACB052FAF3EE0EF92DC51_inline (RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* __this, const RuntimeMethod* method) ;
// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcError::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RpcError_get_Message_mD3F9B5D1772226C66F93562B3A591BB40AFF478D_inline (RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcMessages.RpcError::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* RpcError_get_Data_m2CA61333DE17B2C028DEA8D45D4D5B5BA3E6F493_inline (RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcError::.ctor(System.Int32,System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcError__ctor_m47134CA970B36548F370BD0D6CF607840EC01E84 (RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3* __this, int32_t ___code0, String_t* ___message1, JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___data2, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcResponseException::.ctor(Nethereum.JsonRpc.Client.RpcError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseException__ctor_m95027D76C124450556D520337C475BE27487A220 (RpcResponseException_tC6370C6CDE2D7E420D34DC0EDC15FF7CDD7B062F* __this, RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3* ___rpcError0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__15>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B_mA2EC7FB4C6DC17D35AC15CF9C3D9104A77CDF7FB (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B_mA2EC7FB4C6DC17D35AC15CF9C3D9104A77CDF7FB_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__18>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197_m3D255C6F81471690512018DA3613ABC09524F532 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197_m3D255C6F81471690512018DA3613ABC09524F532_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromSeconds_m4401B50C0CA831134068595C6AF2F1CA92AAF80F (double ___value0, const RuntimeMethod* method) ;
// Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage[] Nethereum.JsonRpc.Client.RpcRequestResponseBatch::GetRpcRequests()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RpcRequestMessageU5BU5D_t751C41D82385D4F97A408969DB7033B16596FE0E* RpcRequestResponseBatch_GetRpcRequests_m261C34B9995B913768B36CB7C0092206ECA9A799 (RpcRequestResponseBatch_t6AEBAEF11004CC33B6A80F4EAAD31AE318576632* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t0AC5594D6969A3FD2EEE701AE13332ACCB161416 Task_1_ConfigureAwait_m61B7CCAE6CC6063BEB2F01E3E780C21EC004C89B (Task_1_t521684A4C10415312B22F2EEE1222131B8703BF6* __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t0AC5594D6969A3FD2EEE701AE13332ACCB161416 (*) (Task_1_t521684A4C10415312B22F2EEE1222131B8703BF6*, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m9D6420C859925B7C250DED7586DD770C91632070_gshared)(__this, ___continueOnCapturedContext0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]>::GetAwaiter()
inline ConfiguredTaskAwaiter_tB66B32BBEC7D214F8C06DBFCD83EAE28FC05871A ConfiguredTaskAwaitable_1_GetAwaiter_m5E392CDD456FABF3D1CD5DAA83E61974437B61ED_inline (ConfiguredTaskAwaitable_1_t0AC5594D6969A3FD2EEE701AE13332ACCB161416* __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_tB66B32BBEC7D214F8C06DBFCD83EAE28FC05871A (*) (ConfiguredTaskAwaitable_1_t0AC5594D6969A3FD2EEE701AE13332ACCB161416*, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m10364C3B0A904803E890B2D75674665F986BDAB2_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_mFEDD821A9639B102DF16501A45D30746A335F3FE (ConfiguredTaskAwaiter_tB66B32BBEC7D214F8C06DBFCD83EAE28FC05871A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_tB66B32BBEC7D214F8C06DBFCD83EAE28FC05871A*, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_mD6243A7544181F96816A5F81459F4B66908ADB5E_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcRequestResponseBatch>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]>,Nethereum.JsonRpc.Client.ClientBase/<SendBatchRequestAsync>d__9>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tB66B32BBEC7D214F8C06DBFCD83EAE28FC05871A_TisU3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382_m9CB6249D25317890F6A022CBEC4EA6418EBEDD30 (AsyncTaskMethodBuilder_1_tF2ECC8ABC1EE7851CA7605B630A049F5DDF92727* __this, ConfiguredTaskAwaiter_tB66B32BBEC7D214F8C06DBFCD83EAE28FC05871A* ___awaiter0, U3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF2ECC8ABC1EE7851CA7605B630A049F5DDF92727*, ConfiguredTaskAwaiter_tB66B32BBEC7D214F8C06DBFCD83EAE28FC05871A*, U3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382_m6CDF3DDDC90B6CEE414BFA60A21D5A3F0E70F78B_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]>::GetResult()
inline RpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E* ConfiguredTaskAwaiter_GetResult_m6333FFDC3EF3D5E2EC15C32AC339570ED7DE1966 (ConfiguredTaskAwaiter_tB66B32BBEC7D214F8C06DBFCD83EAE28FC05871A* __this, const RuntimeMethod* method)
{
	return ((  RpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E* (*) (ConfiguredTaskAwaiter_tB66B32BBEC7D214F8C06DBFCD83EAE28FC05871A*, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m00ABE5C46A983C38086438B7A7CB2C62296B3383_gshared)(__this, method);
}
// System.Void Nethereum.JsonRpc.Client.RpcRequestResponseBatch::UpdateBatchItemResponses(System.Collections.Generic.IEnumerable`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestResponseBatch_UpdateBatchItemResponses_mADEDA02CC8F435471F41CFDAFD370ADAB8E488F9 (RpcRequestResponseBatch_t6AEBAEF11004CC33B6A80F4EAAD31AE318576632* __this, RuntimeObject* ___responses0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcRequestResponseBatch>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mEF2854D03FAFE1FA65666A343A5A4E693EAC5C09 (AsyncTaskMethodBuilder_1_tF2ECC8ABC1EE7851CA7605B630A049F5DDF92727* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF2ECC8ABC1EE7851CA7605B630A049F5DDF92727*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcRequestResponseBatch>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m512728E1BD7F05EC8483CBF52CDACA0930B58C75 (AsyncTaskMethodBuilder_1_tF2ECC8ABC1EE7851CA7605B630A049F5DDF92727* __this, RpcRequestResponseBatch_t6AEBAEF11004CC33B6A80F4EAAD31AE318576632* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF2ECC8ABC1EE7851CA7605B630A049F5DDF92727*, RpcRequestResponseBatch_t6AEBAEF11004CC33B6A80F4EAAD31AE318576632*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Nethereum.JsonRpc.Client.ClientBase/<SendBatchRequestAsync>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendBatchRequestAsyncU3Ed__9_MoveNext_m2672F94742E917BFA4B9EF7951CC1BBA68167D9B (U3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcRequestResponseBatch>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m5A1BFEB0204C3639B47062B208C905BD37A7EAF8 (AsyncTaskMethodBuilder_1_tF2ECC8ABC1EE7851CA7605B630A049F5DDF92727* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF2ECC8ABC1EE7851CA7605B630A049F5DDF92727*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Nethereum.JsonRpc.Client.ClientBase/<SendBatchRequestAsync>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendBatchRequestAsyncU3Ed__9_SetStateMachine_m13E3A92921C3E97081AFB01FCF92F80D0200147A (U3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Object Nethereum.JsonRpc.Client.RpcRequest::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RpcRequest_get_Id_m75D35C84A2A8E744A230D4E759BF81DE1B88343F_inline (RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* __this, const RuntimeMethod* method) ;
// System.String Nethereum.JsonRpc.Client.RpcRequest::get_Method()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RpcRequest_get_Method_mF886761414CD12474B7887B545141FBF42E871F1_inline (RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* __this, const RuntimeMethod* method) ;
// System.Object[] Nethereum.JsonRpc.Client.RpcRequest::get_RawParameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* RpcRequest_get_RawParameters_mEA71A7FE64FF28F690DBD585C07FC4278F3892D8_inline (RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::.ctor(System.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestMessage__ctor_m57959808111B2A5E938954780CC043C2364CC7A2 (RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* __this, RuntimeObject* ___id0, String_t* ___method1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameterList2, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t4091B8D31F978789633C727AED2642E53F28BCFF Task_1_ConfigureAwait_mDC4530758F5F98D6A31A819329FB9C5EC8704366 (Task_1_tC0061418037436F03DCF6A1FA753A1D429C67C60* __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t4091B8D31F978789633C727AED2642E53F28BCFF (*) (Task_1_tC0061418037436F03DCF6A1FA753A1D429C67C60*, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m9D6420C859925B7C250DED7586DD770C91632070_gshared)(__this, ___continueOnCapturedContext0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::GetAwaiter()
inline ConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B ConfiguredTaskAwaitable_1_GetAwaiter_m42A9E38692E4C0CD6AC6532132A8A456605E19EF_inline (ConfiguredTaskAwaitable_1_t4091B8D31F978789633C727AED2642E53F28BCFF* __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B (*) (ConfiguredTaskAwaitable_1_t4091B8D31F978789633C727AED2642E53F28BCFF*, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m10364C3B0A904803E890B2D75674665F986BDAB2_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_m007B99DA2999CA2DE57486D06A4465A7BD6482DB (ConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B*, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_mD6243A7544181F96816A5F81459F4B66908ADB5E_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>,Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__15>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B_TisU3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B_m746B7C69AD446F8BD17369F232CD8175ED0854E5 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B* ___awaiter0, U3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, ConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B*, U3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B_m473337A0669D6320C61B130F3D21035B168DEABE_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::GetResult()
inline RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* ConfiguredTaskAwaiter_GetResult_mF91D4D04E07486802FD804FF9509FC2EE6121FF7 (ConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B* __this, const RuntimeMethod* method)
{
	return ((  RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* (*) (ConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B*, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m00ABE5C46A983C38086438B7A7CB2C62296B3383_gshared)(__this, method);
}
// System.Void Nethereum.JsonRpc.Client.ClientBase::HandleRpcError(Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBase_HandleRpcError_mABEA2591F0BB3D3067DC6AC5DC516A23BD0F5BC7 (ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B* __this, RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* ___response0, String_t* ___reqMsg1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAsyncU3Ed__15_MoveNext_mDA0E7FAFC599BC840B13967C54F97C82ABE24402 (U3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAsyncU3Ed__15_SetStateMachine_m79F8512F65C24FA4D8318DED2A4172251804F938 (U3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>,Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__18>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B_TisU3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197_m82B7759DA158FA54FDCE7B28BDD432704A982B31 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B* ___awaiter0, U3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, ConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B*, U3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197_m075BAA292ADFCF5A7F31B3307CC58DAFB1347AF1_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAsyncU3Ed__18_MoveNext_m5DE57DBCB0B7F9EED1A6888997806825988DB609 (U3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__18::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAsyncU3Ed__18_SetStateMachine_mC472D929D820748FAC7D499752AA0D49DE682316 (U3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonSerializerSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings__ctor_mE1C9A90375BA88DF7F6911F1F96AEEC6A98CD22F (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_NullValueHandling(Newtonsoft.Json.NullValueHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings_set_NullValueHandling_mC389679010477A90BA5F811621B460004710CF16 (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_MissingMemberHandling(Newtonsoft.Json.MissingMemberHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings_set_MissingMemberHandling_mD0C7EE2F78B48F00E8304E9D6B25CF96550769F0 (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.NullParamsFirstElementResolver/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mE6D9411E77E3921BA304CD871B804F50EE6F124C (U3CU3Ec__DisplayClass0_0_tB0EA81C76FCEC0D02323D8E737E40F6819484481* __this, const RuntimeMethod* method) ;
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Reflection.PropertyInfo,Newtonsoft.Json.Serialization.JsonProperty>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m3D2C90AD78E64FA5F4BECC751A265F824C62D42D (Func_2_t909388D06263B11EE8960AB1C4AAD9025EA29C90* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t909388D06263B11EE8960AB1C4AAD9025EA29C90*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Reflection.PropertyInfo,Newtonsoft.Json.Serialization.JsonProperty>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisPropertyInfo_t_TisJsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3_m131F1A9BAF034D016DBB4945D2E260429535EBAA (RuntimeObject* ___source0, Func_2_t909388D06263B11EE8960AB1C4AAD9025EA29C90* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t909388D06263B11EE8960AB1C4AAD9025EA29C90*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Newtonsoft.Json.Serialization.JsonProperty>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t74666FDF65CB5C8F34590E465BD151F8943D32CB* Enumerable_ToList_TisJsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3_m6438BA513E6169D146E81CEB7D50D77F1DE2FD3F (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t74666FDF65CB5C8F34590E465BD151F8943D32CB* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultContractResolver__ctor_m52F3E230F523349797B923489423735999EA4A4E (DefaultContractResolver_t463A02A39C265D7EB415D4CEB2B2E32664A02CAD* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.NullParamsValueProvider::.ctor(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullParamsValueProvider__ctor_m22EFBF372F06C2ADB4373D39B12732D2E9DA67F5 (NullParamsValueProvider_t09155C95A76C6709EFB371342F757B11C72C620D* __this, PropertyInfo_t* ___memberInfo0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_ValueProvider(Newtonsoft.Json.Serialization.IValueProvider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonProperty_set_ValueProvider_m3E52A4C43012A13A874804F1539A9F50CC54D4BA_inline (JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyInfo_GetValue_m89576462107E2A4DF5B7775216AEC29D74FF6088 (PropertyInfo_t* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyInfo_SetValue_m67B3A509C7EB945C3DA97D096EF1231C805C92D3 (PropertyInfo_t* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933_m3E8A37A811A62C9EF91D30A009F8E147B491E5D0 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933_m3E8A37A811A62C9EF91D30A009F8E147B491E5D0_gshared)(__this, ___stateMachine0, method);
}
// TResult System.Func`4<System.String,System.String,System.Object[],System.Threading.Tasks.Task>::Invoke(T1,T2,T3)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Func_4_Invoke_m8D046ABDDB7FE3DD25F2722DCD9E997609EAAFDF_inline (Func_4_tD2B417B8273448F141CB0722CCE3A32D8432054B* __this, String_t* ___arg10, String_t* ___arg21, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___arg32, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Func_4_tD2B417B8273448F141CB0722CCE3A32D8432054B*, String_t*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))Func_4_Invoke_m9BAD5BBD30933FE9049B012CD3316FB2F24F3B8A_gshared_inline)(__this, ___arg10, ___arg21, ___arg32, method);
}
// TResult System.Func`3<Nethereum.JsonRpc.Client.RpcRequest,System.String,System.Threading.Tasks.Task>::Invoke(T1,T2)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Func_3_Invoke_mB4A62B5BD68C7E8F592BCE17617B9720CDAB6864_inline (Func_3_tE0EE343B458D09927050E38C911239670F82D81C* __this, RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* ___arg10, String_t* ___arg21, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Func_3_tE0EE343B458D09927050E38C911239670F82D81C*, RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5*, String_t*, const RuntimeMethod*))Func_3_Invoke_m31D9E56C7CAE538FD8564F34CABA2C2A537ED393_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline (ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850 (ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933_m34D6B2E94824DDAFADBC8F46423342D4FCD9233B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___awaiter0, U3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618*, U3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933_m34D6B2E94824DDAFADBC8F46423342D4FCD9233B_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26 (ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInterceptSendRequestAsyncU3Ed__1_MoveNext_mE76FBB62E24290856BA288E8DB9BFD0599A0C5AD (U3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInterceptSendRequestAsyncU3Ed__1_SetStateMachine_mA5672945409834C509160D9A51609AE957593878 (U3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcError::set_Code(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcError_set_Code_mE8A76A4C3FB5D7CCFC755F792BCE693041B0229B_inline (RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcError::set_Message(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcError_set_Message_mEA804107F6145887CCA5329FCCFB1E52F8E2B5B7_inline (RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcError::set_Data(Newtonsoft.Json.Linq.JToken)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcError_set_Data_mEBA82876962EE28B2ADA15F3AFC60F447B12B8B5_inline (RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3* __this, JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcLogger::set_Log(Microsoft.Extensions.Logging.ILogger)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcLogger_set_Log_mECA338BB580B360F18FA982142B4C37C8BF2256B_inline (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// Microsoft.Extensions.Logging.ILogger Nethereum.JsonRpc.Client.RpcLogger::get_Log()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RpcLogger_get_Log_m28F77D0DC56E9165B9F0B747A5046F6BF15572EB_inline (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcLogger::set_RequestJsonMessage(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcLogger_set_RequestJsonMessage_m6812E3E426DEAD650D478C1FBE8F2CBC25692DE4_inline (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Nethereum.JsonRpc.Client.RpcLogger::GetRPCRequestLogMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcLogger_GetRPCRequestLogMessage_m6509C42051BBA0FE6C03CA1190A14754573A1427 (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogTrace(Microsoft.Extensions.Logging.ILogger,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogTrace_mED89E988903065F91B17FCD42B7E442B98E21956 (RuntimeObject* ___logger0, String_t* ___message1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, const RuntimeMethod* method) ;
// System.String Nethereum.JsonRpc.Client.RpcLogger::get_RequestJsonMessage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RpcLogger_get_RequestJsonMessage_mBAA1B710960B44F081AED087C62967D85B762ADF_inline (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage Nethereum.JsonRpc.Client.RpcLogger::get_ResponseMessage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* RpcLogger_get_ResponseMessage_mDC8DDABE1DD767682F0845C51DB08B66C1F2EC23_inline (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* RpcResponseMessage_get_Result_m15C0CB82C1FF185CEA41EE154EB06A4805A7F18C_inline (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcLogger::set_ResponseMessage(Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcLogger_set_ResponseMessage_m0CF29DA40F280AACF7DA12285D86AB165FB10B31_inline (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* ___value0, const RuntimeMethod* method) ;
// System.String Nethereum.JsonRpc.Client.RpcLogger::GetRPCResponseLogMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcLogger_GetRPCResponseLogMessage_m3C4316DBDF20C345596CB45DC539640ADC289E4B (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, const RuntimeMethod* method) ;
// System.Boolean Nethereum.JsonRpc.Client.RpcLogger::HasError(Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RpcLogger_HasError_mF6C33595F9AD9A8262B7FD442B04AE89B3FA85AA (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* ___message0, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogError(Microsoft.Extensions.Logging.ILogger,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogError_m1151F264B84A277EAEE29115ED4832C7067F0245 (RuntimeObject* ___logger0, String_t* ___message1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogError(Microsoft.Extensions.Logging.ILogger,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogError_mD5B60284BA51EDD61E74DA22FA30A85B77927F5B (RuntimeObject* ___logger0, Exception_t* ___exception1, String_t* ___message2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args3, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcRequest::set_Id(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcRequest_set_Id_mC70D7D2490D4E817C7986855EE99CDDC6CB64946_inline (RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcRequest::set_Method(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcRequest_set_Method_mDEB803F569C6C8DF1755499D8DD1C000AB6A400E_inline (RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcRequest::set_RawParameters(System.Object[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcRequest_set_RawParameters_m7C225BA5CBAD47879241759AD3991D90EA4C83CF_inline (RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___value0, const RuntimeMethod* method) ;
// System.Object Nethereum.JsonRpc.Client.Configuration::get_DefaultRequestId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Configuration_get_DefaultRequestId_m9F7BD95ED6B25DA17C4B23BA38E83484A7B75A8C_inline (const RuntimeMethod* method) ;
// System.String Nethereum.JsonRpc.Client.RpcRequestBuilder::get_MethodName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RpcRequestBuilder_get_MethodName_mC648076154384E26CAB9194E7A8F4EE9F6693DCC_inline (RpcRequestBuilder_t1EEB2A8EF2FDCBE66226A789E0B2F0B91D997CEF* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcRequest::.ctor(System.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequest__ctor_mC4CA0ED8C85AAE7BD7F72FE65074094E3404CF5C (RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* __this, RuntimeObject* ___id0, String_t* ___method1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameterList2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Nethereum.JsonRpc.Client.IRpcRequestResponseBatchItem> Nethereum.JsonRpc.Client.RpcRequestResponseBatch::get_BatchItems()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t3C943042DC58864AF24A09FD0A818698175020EA* RpcRequestResponseBatch_get_BatchItems_m35AF61605C67B1E9807D9A04E02A9CF4E7EEB747_inline (RpcRequestResponseBatch_t6AEBAEF11004CC33B6A80F4EAAD31AE318576632* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Nethereum.JsonRpc.Client.IRpcRequestResponseBatchItem,Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m70FB997AA88476A7B29C5E0FAD47677614B10543 (Func_2_tD2609153E882D28B55CFA4B75EA6989A9E13F254* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD2609153E882D28B55CFA4B75EA6989A9E13F254*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Nethereum.JsonRpc.Client.IRpcRequestResponseBatchItem,Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisIRpcRequestResponseBatchItem_tA6FD1882E648C5B880809B25C0F13205DC303B4A_TisRpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D_mBE552F7C454202B18874DCE7640EBFBFA5E79A5A (RuntimeObject* ___source0, Func_2_tD2609153E882D28B55CFA4B75EA6989A9E13F254* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tD2609153E882D28B55CFA4B75EA6989A9E13F254*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RpcRequestMessageU5BU5D_t751C41D82385D4F97A408969DB7033B16596FE0E* Enumerable_ToArray_TisRpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D_m8DA0019019BA9C5DD0F40B18361F36F2FE0876D7 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RpcRequestMessageU5BU5D_t751C41D82385D4F97A408969DB7033B16596FE0E* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.Void Nethereum.JsonRpc.Client.RpcRequestResponseBatch/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mC68A09CB03D148F80D224C3B83111738127CE552 (U3CU3Ec__DisplayClass5_0_t9BF30C858377308D1B6E9B593EEC74BEE9BA1925* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Nethereum.JsonRpc.Client.IRpcRequestResponseBatchItem,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF05711888879093A640AFB8C54376FC663B9A464 (Func_2_tE8D27DA6DB21CB60C12AC22A45978B15556D7CC2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE8D27DA6DB21CB60C12AC22A45978B15556D7CC2*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::First<Nethereum.JsonRpc.Client.IRpcRequestResponseBatchItem>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_First_TisIRpcRequestResponseBatchItem_tA6FD1882E648C5B880809B25C0F13205DC303B4A_m802534855A50E85BCC992DD70E3B6476A407B791 (RuntimeObject* ___source0, Func_2_tE8D27DA6DB21CB60C12AC22A45978B15556D7CC2* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tE8D27DA6DB21CB60C12AC22A45978B15556D7CC2*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mC6FA107934316BE28EA02DDB9EADA7AE8DD1916B_gshared)(___source0, ___predicate1, method);
}
// System.Void System.Collections.Generic.List`1<Nethereum.JsonRpc.Client.IRpcRequestResponseBatchItem>::.ctor()
inline void List_1__ctor_mAE26BAB9625D4180D65D9BAC2E983B4B4F0CA689 (List_1_t3C943042DC58864AF24A09FD0A818698175020EA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3C943042DC58864AF24A09FD0A818698175020EA*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Nethereum.JsonRpc.Client.RpcRequestResponseBatch/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB57A43EC0EE297719283D505C1DF2EA1947B1027 (U3CU3Ec_t0DA5A96E769895D8B5A6B11EBBC25A91DDB21F6A* __this, const RuntimeMethod* method) ;
// System.Object Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RpcRequestMessage_get_Id_m1DD8CB468B4170F881DF38030B7B817268EC4294_inline (RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* __this, const RuntimeMethod* method) ;
// System.Object Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RpcResponseMessage_get_Id_m837AF74690299913D622D23A6158D1FFE008945F_inline (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, const RuntimeMethod* method) ;
// System.String Nethereum.JsonRpc.Client.RpcError::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RpcError_get_Message_m9FA16E822E99C2DDF53F6F85435A584A4E211B04_inline (RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.String System.Convert::ToBase64String(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inArray0, const RuntimeMethod* method) ;
// System.String System.Uri::get_UserInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_UserInfo_mC0189C851F71ACF0B48A462E74C7F3EB86501C8D (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticationUserInfo__ctor_m27F919FFBA75A4E7BDD82A7EC24FE3E6C6612B49 (BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo::set_UserName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BasicAuthenticationUserInfo_set_UserName_m15492E7FD5F929D66FE37CE2D9C7D93F23014F45_inline (BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo::set_Password(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BasicAuthenticationUserInfo_set_Password_m396F8F8F2071C27B3CD6F8577DF38C3FABAE423C_inline (BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo Nethereum.JsonRpc.Client.UserAuthentication::GetBasicAuthenticationUserInfoFromUri(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* UserAuthentication_GetBasicAuthenticationUserInfoFromUri_m154EB74BEC986E385C771BDC71FA14CF3770127A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri0, const RuntimeMethod* method) ;
// System.String Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo::get_UserName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BasicAuthenticationUserInfo_get_UserName_m2D03CDEAD0C5650B8F8A1E40246F5C74EBFFB878_inline (BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* __this, const RuntimeMethod* method) ;
// System.String Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo::get_Password()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BasicAuthenticationUserInfo_get_Password_m24F1B6573F3AD6F32496C53283E433AF918C0931_inline (BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.UserAuthentication::SetBasicAuthenticationHeader(Nethereum.JsonRpc.Client.IClientRequestHeaderSupport,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserAuthentication_SetBasicAuthenticationHeader_mBA3E275D6F48673EB418930ED28094258048644E (RuntimeObject* ___client0, String_t* ___userName1, String_t* ___password2, const RuntimeMethod* method) ;
// System.String Nethereum.JsonRpc.Client.UserAuthentication::GetBasicAuthentication(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserAuthentication_GetBasicAuthentication_mC33EB8BAA7F7D12F3E471453946AAB7D1C1023C3 (String_t* ___userName0, String_t* ___password1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::set_JsonRpcVersion(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcResponseMessage_set_JsonRpcVersion_m53185FE0AC814FA64ED321465187A6A68FB39870_inline (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::set_Id(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcResponseMessage_set_Id_m11D8E492F4F39F7705933527FDBA617B549C1AD6_inline (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage__ctor_mD60232597CAE1F2C07E8608B9778F08CC23079B5 (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, RuntimeObject* ___id0, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::set_Error(Nethereum.JsonRpc.Client.RpcMessages.RpcError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcResponseMessage_set_Error_m8691D90931A6603B2FD20817F2B20AD95BE210CB_inline (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::set_Result(Newtonsoft.Json.Linq.JToken)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcResponseMessage_set_Result_m2665B0381FF1D6003608428433D6ADA7C3B8703E_inline (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage__ctor_m628FC511BFFDDBD9AB16D532BEFF6F3FB02FE463 (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::set_Method(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcStreamingResponseMessage_set_Method_mBE6B783B271163FFA4AA49F3FD75A0AC5EE21C62_inline (RpcStreamingResponseMessage_t843001565505B95D850573335FB72CCD26035149* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::set_Params(Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcStreamingResponseMessage_set_Params_m0F92EEED82149752741C91E8D1C765DABD24E12C_inline (RpcStreamingResponseMessage_t843001565505B95D850573335FB72CCD26035149* __this, RpcStreamingParams_tA6178BB8E162EE9EA3E6A5F4DC3FC2C19CD01B2D* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::set_Id(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcRequestMessage_set_Id_m6CECD66C46B2CB857D76D50BDF1216D2AF877ACF_inline (RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::set_JsonRpcVersion(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcRequestMessage_set_JsonRpcVersion_mED9E8EBDA6F85593B8344C5ECF93D7D98971CDD6_inline (RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::set_Method(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcRequestMessage_set_Method_mB4EF44C803872CC03626AD283CF1CEC93ACD7870_inline (RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::set_RawParameters(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcRequestMessage_set_RawParameters_mBE84DD0F72BCA5470EB551DB9EF9CA437BD9157A_inline (RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonSerializer::Serialize(Newtonsoft.Json.JsonWriter,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializer_Serialize_mE7F0CF9C2D3AD9D1B19A24F16FB151C9F63E7A2F (JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___jsonWriter0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Load(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* JObject_Load_m44DE042F4F4752D15D54259823A74B609650E9EF (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, const RuntimeMethod* method) ;
// T Newtonsoft.Json.Linq.JToken::ToObject<System.Collections.Generic.Dictionary`2<System.String,System.Object>>()
inline Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* JToken_ToObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_mB190A5648F7D59DBCAAB93259A62BFB9AF268F89 (JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* __this, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* (*) (JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3*, const RuntimeMethod*))JToken_ToObject_TisRuntimeObject_m60590FEF9C8FE15CB8D077C39B8E852F4C34E872_gshared)(__this, method);
}
// Newtonsoft.Json.Linq.JArray Newtonsoft.Json.Linq.JArray::Load(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8* JArray_Load_mE90CEEC0A22EBC876F7D7E239A0E096E4691C807 (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, const RuntimeMethod* method) ;
// T Newtonsoft.Json.Linq.JToken::ToObject<System.Object[]>(Newtonsoft.Json.JsonSerializer)
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* JToken_ToObject_TisObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_mF55A415940C9707EE96EC0423BE2E913B8858876 (JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* __this, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___jsonSerializer0, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3*, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59*, const RuntimeMethod*))JToken_ToObject_TisRuntimeObject_m396E3ED8322B1E7A8290DDB0C502C55FF8C129EB_gshared)(__this, ___jsonSerializer0, method);
}
// System.Void Newtonsoft.Json.JsonConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB (JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* __this, const RuntimeMethod* method) ;
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
// System.TimeSpan Nethereum.JsonRpc.Client.ClientBase::get_ConnectionTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ClientBase_get_ConnectionTimeout_m06FA22606E824EF1CD46EC1D7432DC8A06E272DF (const RuntimeMethod* method) 
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
// System.Void Nethereum.JsonRpc.Client.ClientBase::set_ConnectionTimeout(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBase_set_ConnectionTimeout_m657FD9C8E54E936BC403E2220F19D6F409FA5F2F (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_il2cpp_TypeInfo_var);
		((ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_StaticFields*)il2cpp_codegen_static_fields_for(ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_il2cpp_TypeInfo_var))->___U3CConnectionTimeoutU3Ek__BackingField_0 = L_0;
		return;
	}
}
// Nethereum.JsonRpc.Client.RequestInterceptor Nethereum.JsonRpc.Client.ClientBase::get_OverridingRequestInterceptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestInterceptor_t0B0D2629DBFF7C5098B4B4C21BCA63444BD502F0* ClientBase_get_OverridingRequestInterceptor_mFCEACE3ED4A5BD60389A3E1387A9F775C8932674 (ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B* __this, const RuntimeMethod* method) 
{
	{
		RequestInterceptor_t0B0D2629DBFF7C5098B4B4C21BCA63444BD502F0* L_0 = __this->___U3COverridingRequestInterceptorU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.ClientBase::set_OverridingRequestInterceptor(Nethereum.JsonRpc.Client.RequestInterceptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBase_set_OverridingRequestInterceptor_m584DC354FFCAB7EA0E329BB6228861415F39D4D5 (ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B* __this, RequestInterceptor_t0B0D2629DBFF7C5098B4B4C21BCA63444BD502F0* ___value0, const RuntimeMethod* method) 
{
	{
		RequestInterceptor_t0B0D2629DBFF7C5098B4B4C21BCA63444BD502F0* L_0 = ___value0;
		__this->___U3COverridingRequestInterceptorU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COverridingRequestInterceptorU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcRequestResponseBatch> Nethereum.JsonRpc.Client.ClientBase::SendBatchRequestAsync(Nethereum.JsonRpc.Client.RpcRequestResponseBatch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t67F4D792DFB211983224B6EF73EBF2B460451AB6* ClientBase_SendBatchRequestAsync_mB458FDFA5A0E181AAE2442294A3D4D7ED3308319 (ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B* __this, RpcRequestResponseBatch_t6AEBAEF11004CC33B6A80F4EAAD31AE318576632* ___rpcRequestResponseBatch0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m4BC751DE5228A932E5A397301D08847C86ED6FFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382_mBA28B2AFAB87C924103FE94D42407074C7E23244_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m03EDF1D89A9457CA4A4800384133BE4383452EC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tF2ECC8ABC1EE7851CA7605B630A049F5DDF92727_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tF2ECC8ABC1EE7851CA7605B630A049F5DDF92727_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tF2ECC8ABC1EE7851CA7605B630A049F5DDF92727 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m4BC751DE5228A932E5A397301D08847C86ED6FFE(AsyncTaskMethodBuilder_1_Create_m4BC751DE5228A932E5A397301D08847C86ED6FFE_RuntimeMethod_var);
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
		RpcRequestResponseBatch_t6AEBAEF11004CC33B6A80F4EAAD31AE318576632* L_1 = ___rpcRequestResponseBatch0;
		(&V_0)->___rpcRequestResponseBatch_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___rpcRequestResponseBatch_3), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tF2ECC8ABC1EE7851CA7605B630A049F5DDF92727* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382_mBA28B2AFAB87C924103FE94D42407074C7E23244(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382_mBA28B2AFAB87C924103FE94D42407074C7E23244_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tF2ECC8ABC1EE7851CA7605B630A049F5DDF92727* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t67F4D792DFB211983224B6EF73EBF2B460451AB6* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m03EDF1D89A9457CA4A4800384133BE4383452EC6(L_3, AsyncTaskMethodBuilder_1_get_Task_m03EDF1D89A9457CA4A4800384133BE4383452EC6_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void Nethereum.JsonRpc.Client.ClientBase::HandleRpcError(Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBase_HandleRpcError_mABEA2591F0BB3D3067DC6AC5DC516A23BD0F5BC7 (ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B* __this, RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* ___response0, String_t* ___reqMsg1, const RuntimeMethod* method) 
{
	{
		RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* L_0 = ___response0;
		NullCheck(L_0);
		bool L_1;
		L_1 = RpcResponseMessage_get_HasError_m6772B3DB2F0780B8219AF24D39825F0783E477FC(L_0, NULL);
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* L_2 = ___response0;
		NullCheck(L_2);
		RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* L_3;
		L_3 = RpcResponseMessage_get_Error_m8797AF4364D700201859343603B5F3C7502EF451_inline(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = RpcError_get_Code_mEDBFDF1DB7BA77B0B6BACB052FAF3EE0EF92DC51_inline(L_3, NULL);
		RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* L_5 = ___response0;
		NullCheck(L_5);
		RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* L_6;
		L_6 = RpcResponseMessage_get_Error_m8797AF4364D700201859343603B5F3C7502EF451_inline(L_5, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = RpcError_get_Message_mD3F9B5D1772226C66F93562B3A591BB40AFF478D_inline(L_6, NULL);
		String_t* L_8 = ___reqMsg1;
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155)), L_8, NULL);
		RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* L_10 = ___response0;
		NullCheck(L_10);
		RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* L_11;
		L_11 = RpcResponseMessage_get_Error_m8797AF4364D700201859343603B5F3C7502EF451_inline(L_10, NULL);
		NullCheck(L_11);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_12;
		L_12 = RpcError_get_Data_m2CA61333DE17B2C028DEA8D45D4D5B5BA3E6F493_inline(L_11, NULL);
		RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3* L_13 = (RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		RpcError__ctor_m47134CA970B36548F370BD0D6CF607840EC01E84(L_13, L_4, L_9, L_12, NULL);
		RpcResponseException_tC6370C6CDE2D7E420D34DC0EDC15FF7CDD7B062F* L_14 = (RpcResponseException_tC6370C6CDE2D7E420D34DC0EDC15FF7CDD7B062F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RpcResponseException_tC6370C6CDE2D7E420D34DC0EDC15FF7CDD7B062F_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		RpcResponseException__ctor_m95027D76C124450556D520337C475BE27487A220(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ClientBase_HandleRpcError_mABEA2591F0BB3D3067DC6AC5DC516A23BD0F5BC7_RuntimeMethod_var)));
	}

IL_003f:
	{
		return;
	}
}
// System.Threading.Tasks.Task Nethereum.JsonRpc.Client.ClientBase::SendRequestAsync(Nethereum.JsonRpc.Client.RpcRequest,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ClientBase_SendRequestAsync_mA295B61E278E727E59ED4FA79E877282C19348BE (ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B* __this, RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* ___request0, String_t* ___route1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B_mA2EC7FB4C6DC17D35AC15CF9C3D9104A77CDF7FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* L_1 = ___request0;
		(&V_0)->___request_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___request_3), (void*)L_1);
		String_t* L_2 = ___route1;
		(&V_0)->___route_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___route_4), (void*)L_2);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B_mA2EC7FB4C6DC17D35AC15CF9C3D9104A77CDF7FB(L_3, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B_mA2EC7FB4C6DC17D35AC15CF9C3D9104A77CDF7FB_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_4, NULL);
		return L_5;
	}
}
// System.Threading.Tasks.Task Nethereum.JsonRpc.Client.ClientBase::SendRequestAsync(System.String,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ClientBase_SendRequestAsync_mBCA0D4402649DA21FD21D86D63ED75C3578C1D15 (ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B* __this, String_t* ___method0, String_t* ___route1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___paramList2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197_m3D255C6F81471690512018DA3613ABC09524F532_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_4), (void*)__this);
		String_t* L_1 = ___method0;
		(&V_0)->___method_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___method_2), (void*)L_1);
		String_t* L_2 = ___route1;
		(&V_0)->___route_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___route_5), (void*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___paramList2;
		(&V_0)->___paramList_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___paramList_3), (void*)L_3);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197_m3D255C6F81471690512018DA3613ABC09524F532(L_4, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197_m3D255C6F81471690512018DA3613ABC09524F532_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_5 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_5, NULL);
		return L_6;
	}
}
// System.Void Nethereum.JsonRpc.Client.ClientBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBase__ctor_m0B889E5EAAB7307F82C7EBDE29769C0076DADDB5 (ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.ClientBase::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBase__cctor_m2D7164E4CBC91995C6E61E26D6C3E574D54F624B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0;
		L_0 = TimeSpan_FromSeconds_m4401B50C0CA831134068595C6AF2F1CA92AAF80F((20.0), NULL);
		((ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_StaticFields*)il2cpp_codegen_static_fields_for(ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B_il2cpp_TypeInfo_var))->___U3CConnectionTimeoutU3Ek__BackingField_0 = L_0;
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
// System.Void Nethereum.JsonRpc.Client.ClientBase/<SendBatchRequestAsync>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendBatchRequestAsyncU3Ed__9_MoveNext_m2672F94742E917BFA4B9EF7951CC1BBA68167D9B (U3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tB66B32BBEC7D214F8C06DBFCD83EAE28FC05871A_TisU3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382_m9CB6249D25317890F6A022CBEC4EA6418EBEDD30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m512728E1BD7F05EC8483CBF52CDACA0930B58C75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m5E392CDD456FABF3D1CD5DAA83E61974437B61ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_m6333FFDC3EF3D5E2EC15C32AC339570ED7DE1966_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mFEDD821A9639B102DF16501A45D30746A335F3FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m61B7CCAE6CC6063BEB2F01E3E780C21EC004C89B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B* V_1 = NULL;
	RpcRequestResponseBatch_t6AEBAEF11004CC33B6A80F4EAAD31AE318576632* V_2 = NULL;
	RpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E* V_3 = NULL;
	ConfiguredTaskAwaiter_tB66B32BBEC7D214F8C06DBFCD83EAE28FC05871A V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaitable_1_t0AC5594D6969A3FD2EEE701AE13332ACCB161416 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_005d_1;
			}
		}
		{
			ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B* L_3 = V_1;
			RpcRequestResponseBatch_t6AEBAEF11004CC33B6A80F4EAAD31AE318576632* L_4 = __this->___rpcRequestResponseBatch_3;
			NullCheck(L_4);
			RpcRequestMessageU5BU5D_t751C41D82385D4F97A408969DB7033B16596FE0E* L_5;
			L_5 = RpcRequestResponseBatch_GetRpcRequests_m261C34B9995B913768B36CB7C0092206ECA9A799(L_4, NULL);
			NullCheck(L_3);
			Task_1_t521684A4C10415312B22F2EEE1222131B8703BF6* L_6;
			L_6 = VirtualFuncInvoker1< Task_1_t521684A4C10415312B22F2EEE1222131B8703BF6*, RpcRequestMessageU5BU5D_t751C41D82385D4F97A408969DB7033B16596FE0E* >::Invoke(16 /* System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]> Nethereum.JsonRpc.Client.ClientBase::SendAsync(Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage[]) */, L_3, L_5);
			NullCheck(L_6);
			ConfiguredTaskAwaitable_1_t0AC5594D6969A3FD2EEE701AE13332ACCB161416 L_7;
			L_7 = Task_1_ConfigureAwait_m61B7CCAE6CC6063BEB2F01E3E780C21EC004C89B(L_6, (bool)0, Task_1_ConfigureAwait_m61B7CCAE6CC6063BEB2F01E3E780C21EC004C89B_RuntimeMethod_var);
			V_5 = L_7;
			ConfiguredTaskAwaiter_tB66B32BBEC7D214F8C06DBFCD83EAE28FC05871A L_8;
			L_8 = ConfiguredTaskAwaitable_1_GetAwaiter_m5E392CDD456FABF3D1CD5DAA83E61974437B61ED_inline((&V_5), ConfiguredTaskAwaitable_1_GetAwaiter_m5E392CDD456FABF3D1CD5DAA83E61974437B61ED_RuntimeMethod_var);
			V_4 = L_8;
			bool L_9;
			L_9 = ConfiguredTaskAwaiter_get_IsCompleted_mFEDD821A9639B102DF16501A45D30746A335F3FE((&V_4), ConfiguredTaskAwaiter_get_IsCompleted_mFEDD821A9639B102DF16501A45D30746A335F3FE_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_007a_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state_0 = L_10;
			ConfiguredTaskAwaiter_tB66B32BBEC7D214F8C06DBFCD83EAE28FC05871A L_11 = V_4;
			__this->___U3CU3Eu__1_4 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tF2ECC8ABC1EE7851CA7605B630A049F5DDF92727* L_12 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tB66B32BBEC7D214F8C06DBFCD83EAE28FC05871A_TisU3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382_m9CB6249D25317890F6A022CBEC4EA6418EBEDD30(L_12, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tB66B32BBEC7D214F8C06DBFCD83EAE28FC05871A_TisU3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382_m9CB6249D25317890F6A022CBEC4EA6418EBEDD30_RuntimeMethod_var);
			goto IL_00c4;
		}

IL_005d_1:
		{
			ConfiguredTaskAwaiter_tB66B32BBEC7D214F8C06DBFCD83EAE28FC05871A L_13 = __this->___U3CU3Eu__1_4;
			V_4 = L_13;
			ConfiguredTaskAwaiter_tB66B32BBEC7D214F8C06DBFCD83EAE28FC05871A* L_14 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_14, sizeof(ConfiguredTaskAwaiter_tB66B32BBEC7D214F8C06DBFCD83EAE28FC05871A));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
		}

IL_007a_1:
		{
			RpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E* L_16;
			L_16 = ConfiguredTaskAwaiter_GetResult_m6333FFDC3EF3D5E2EC15C32AC339570ED7DE1966((&V_4), ConfiguredTaskAwaiter_GetResult_m6333FFDC3EF3D5E2EC15C32AC339570ED7DE1966_RuntimeMethod_var);
			V_3 = L_16;
			RpcRequestResponseBatch_t6AEBAEF11004CC33B6A80F4EAAD31AE318576632* L_17 = __this->___rpcRequestResponseBatch_3;
			RpcResponseMessageU5BU5D_t5294E30C7F9F1332B643A7450063CA012F74159E* L_18 = V_3;
			NullCheck(L_17);
			RpcRequestResponseBatch_UpdateBatchItemResponses_mADEDA02CC8F435471F41CFDAFD370ADAB8E488F9(L_17, (RuntimeObject*)L_18, NULL);
			RpcRequestResponseBatch_t6AEBAEF11004CC33B6A80F4EAAD31AE318576632* L_19 = __this->___rpcRequestResponseBatch_3;
			V_2 = L_19;
			goto IL_00b0;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0097;
		}
		throw e;
	}

CATCH_0097:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tF2ECC8ABC1EE7851CA7605B630A049F5DDF92727* L_20 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_21 = V_6;
		AsyncTaskMethodBuilder_1_SetException_mEF2854D03FAFE1FA65666A343A5A4E693EAC5C09(L_20, L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mEF2854D03FAFE1FA65666A343A5A4E693EAC5C09_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c4;
	}// end catch (depth: 1)

IL_00b0:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tF2ECC8ABC1EE7851CA7605B630A049F5DDF92727* L_22 = (&__this->___U3CU3Et__builder_1);
		RpcRequestResponseBatch_t6AEBAEF11004CC33B6A80F4EAAD31AE318576632* L_23 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m512728E1BD7F05EC8483CBF52CDACA0930B58C75(L_22, L_23, AsyncTaskMethodBuilder_1_SetResult_m512728E1BD7F05EC8483CBF52CDACA0930B58C75_RuntimeMethod_var);
	}

IL_00c4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendBatchRequestAsyncU3Ed__9_MoveNext_m2672F94742E917BFA4B9EF7951CC1BBA68167D9B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382*>(__this + _offset);
	U3CSendBatchRequestAsyncU3Ed__9_MoveNext_m2672F94742E917BFA4B9EF7951CC1BBA68167D9B(_thisAdjusted, method);
}
// System.Void Nethereum.JsonRpc.Client.ClientBase/<SendBatchRequestAsync>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendBatchRequestAsyncU3Ed__9_SetStateMachine_m13E3A92921C3E97081AFB01FCF92F80D0200147A (U3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m5A1BFEB0204C3639B47062B208C905BD37A7EAF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tF2ECC8ABC1EE7851CA7605B630A049F5DDF92727* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m5A1BFEB0204C3639B47062B208C905BD37A7EAF8(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m5A1BFEB0204C3639B47062B208C905BD37A7EAF8_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendBatchRequestAsyncU3Ed__9_SetStateMachine_m13E3A92921C3E97081AFB01FCF92F80D0200147A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendBatchRequestAsyncU3Ed__9_tE4142F3EB9A497FC3EB4DB1A00CCD0BE3F36C382*>(__this + _offset);
	U3CSendBatchRequestAsyncU3Ed__9_SetStateMachine_m13E3A92921C3E97081AFB01FCF92F80D0200147A(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAsyncU3Ed__15_MoveNext_mDA0E7FAFC599BC840B13967C54F97C82ABE24402 (U3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B_TisU3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B_m746B7C69AD446F8BD17369F232CD8175ED0854E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m42A9E38692E4C0CD6AC6532132A8A456605E19EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mF91D4D04E07486802FD804FF9509FC2EE6121FF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_m007B99DA2999CA2DE57486D06A4465A7BD6482DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_mDC4530758F5F98D6A31A819329FB9C5EC8704366_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B* V_1 = NULL;
	RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* V_2 = NULL;
	ConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConfiguredTaskAwaitable_1_t4091B8D31F978789633C727AED2642E53F28BCFF V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_007c_1;
			}
		}
		{
			ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B* L_3 = V_1;
			RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* L_4 = __this->___request_3;
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = RpcRequest_get_Id_m75D35C84A2A8E744A230D4E759BF81DE1B88343F_inline(L_4, NULL);
			RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* L_6 = __this->___request_3;
			NullCheck(L_6);
			String_t* L_7;
			L_7 = RpcRequest_get_Method_mF886761414CD12474B7887B545141FBF42E871F1_inline(L_6, NULL);
			RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* L_8 = __this->___request_3;
			NullCheck(L_8);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9;
			L_9 = RpcRequest_get_RawParameters_mEA71A7FE64FF28F690DBD585C07FC4278F3892D8_inline(L_8, NULL);
			RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* L_10 = (RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D*)il2cpp_codegen_object_new(RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D_il2cpp_TypeInfo_var);
			NullCheck(L_10);
			RpcRequestMessage__ctor_m57959808111B2A5E938954780CC043C2364CC7A2(L_10, L_5, L_7, L_9, NULL);
			String_t* L_11 = __this->___route_4;
			NullCheck(L_3);
			Task_1_tC0061418037436F03DCF6A1FA753A1D429C67C60* L_12;
			L_12 = VirtualFuncInvoker2< Task_1_tC0061418037436F03DCF6A1FA753A1D429C67C60*, RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D*, String_t* >::Invoke(15 /* System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage> Nethereum.JsonRpc.Client.ClientBase::SendAsync(Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage,System.String) */, L_3, L_10, L_11);
			NullCheck(L_12);
			ConfiguredTaskAwaitable_1_t4091B8D31F978789633C727AED2642E53F28BCFF L_13;
			L_13 = Task_1_ConfigureAwait_mDC4530758F5F98D6A31A819329FB9C5EC8704366(L_12, (bool)0, Task_1_ConfigureAwait_mDC4530758F5F98D6A31A819329FB9C5EC8704366_RuntimeMethod_var);
			V_4 = L_13;
			ConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B L_14;
			L_14 = ConfiguredTaskAwaitable_1_GetAwaiter_m42A9E38692E4C0CD6AC6532132A8A456605E19EF_inline((&V_4), ConfiguredTaskAwaitable_1_GetAwaiter_m42A9E38692E4C0CD6AC6532132A8A456605E19EF_RuntimeMethod_var);
			V_3 = L_14;
			bool L_15;
			L_15 = ConfiguredTaskAwaiter_get_IsCompleted_m007B99DA2999CA2DE57486D06A4465A7BD6482DB((&V_3), ConfiguredTaskAwaiter_get_IsCompleted_m007B99DA2999CA2DE57486D06A4465A7BD6482DB_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_0098_1;
			}
		}
		{
			int32_t L_16 = 0;
			V_0 = L_16;
			__this->___U3CU3E1__state_0 = L_16;
			ConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B L_17 = V_3;
			__this->___U3CU3Eu__1_5 = L_17;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_18 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B_TisU3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B_m746B7C69AD446F8BD17369F232CD8175ED0854E5(L_18, (&V_3), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B_TisU3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B_m746B7C69AD446F8BD17369F232CD8175ED0854E5_RuntimeMethod_var);
			goto IL_00e0;
		}

IL_007c_1:
		{
			ConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B L_19 = __this->___U3CU3Eu__1_5;
			V_3 = L_19;
			ConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B* L_20 = (&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_20, sizeof(ConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B));
			int32_t L_21 = (-1);
			V_0 = L_21;
			__this->___U3CU3E1__state_0 = L_21;
		}

IL_0098_1:
		{
			RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* L_22;
			L_22 = ConfiguredTaskAwaiter_GetResult_mF91D4D04E07486802FD804FF9509FC2EE6121FF7((&V_3), ConfiguredTaskAwaiter_GetResult_mF91D4D04E07486802FD804FF9509FC2EE6121FF7_RuntimeMethod_var);
			V_2 = L_22;
			ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B* L_23 = V_1;
			RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* L_24 = V_2;
			RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* L_25 = __this->___request_3;
			NullCheck(L_25);
			String_t* L_26;
			L_26 = RpcRequest_get_Method_mF886761414CD12474B7887B545141FBF42E871F1_inline(L_25, NULL);
			NullCheck(L_23);
			ClientBase_HandleRpcError_mABEA2591F0BB3D3067DC6AC5DC516A23BD0F5BC7(L_23, L_24, L_26, NULL);
			goto IL_00cd;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b4;
		}
		throw e;
	}

CATCH_00b4:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_27 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_28 = V_5;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_27, L_28, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e0;
	}// end catch (depth: 1)

IL_00cd:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_29 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_29, NULL);
	}

IL_00e0:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendRequestAsyncU3Ed__15_MoveNext_mDA0E7FAFC599BC840B13967C54F97C82ABE24402_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B*>(__this + _offset);
	U3CSendRequestAsyncU3Ed__15_MoveNext_mDA0E7FAFC599BC840B13967C54F97C82ABE24402(_thisAdjusted, method);
}
// System.Void Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAsyncU3Ed__15_SetStateMachine_m79F8512F65C24FA4D8318DED2A4172251804F938 (U3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendRequestAsyncU3Ed__15_SetStateMachine_m79F8512F65C24FA4D8318DED2A4172251804F938_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendRequestAsyncU3Ed__15_t9BC7D4141C5A6ECC427DA4C55AC979E0E889AD6B*>(__this + _offset);
	U3CSendRequestAsyncU3Ed__15_SetStateMachine_m79F8512F65C24FA4D8318DED2A4172251804F938(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAsyncU3Ed__18_MoveNext_m5DE57DBCB0B7F9EED1A6888997806825988DB609 (U3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B_TisU3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197_m82B7759DA158FA54FDCE7B28BDD432704A982B31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m42A9E38692E4C0CD6AC6532132A8A456605E19EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mF91D4D04E07486802FD804FF9509FC2EE6121FF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_m007B99DA2999CA2DE57486D06A4465A7BD6482DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_mDC4530758F5F98D6A31A819329FB9C5EC8704366_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B* V_1 = NULL;
	RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* V_2 = NULL;
	RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* V_3 = NULL;
	Guid_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B V_5;
	memset((&V_5), 0, sizeof(V_5));
	ConfiguredTaskAwaitable_1_t4091B8D31F978789633C727AED2642E53F28BCFF V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B* L_1 = __this->___U3CU3E4__this_4;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_007f_1;
			}
		}
		{
			Guid_t L_3;
			L_3 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
			V_4 = L_3;
			String_t* L_4;
			L_4 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_4), NULL);
			String_t* L_5 = __this->___method_2;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->___paramList_3;
			RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* L_7 = (RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D*)il2cpp_codegen_object_new(RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			RpcRequestMessage__ctor_m57959808111B2A5E938954780CC043C2364CC7A2(L_7, L_4, L_5, L_6, NULL);
			V_2 = L_7;
			ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B* L_8 = V_1;
			RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* L_9 = V_2;
			String_t* L_10 = __this->___route_5;
			NullCheck(L_8);
			Task_1_tC0061418037436F03DCF6A1FA753A1D429C67C60* L_11;
			L_11 = VirtualFuncInvoker2< Task_1_tC0061418037436F03DCF6A1FA753A1D429C67C60*, RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D*, String_t* >::Invoke(15 /* System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage> Nethereum.JsonRpc.Client.ClientBase::SendAsync(Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage,System.String) */, L_8, L_9, L_10);
			NullCheck(L_11);
			ConfiguredTaskAwaitable_1_t4091B8D31F978789633C727AED2642E53F28BCFF L_12;
			L_12 = Task_1_ConfigureAwait_mDC4530758F5F98D6A31A819329FB9C5EC8704366(L_11, (bool)0, Task_1_ConfigureAwait_mDC4530758F5F98D6A31A819329FB9C5EC8704366_RuntimeMethod_var);
			V_6 = L_12;
			ConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B L_13;
			L_13 = ConfiguredTaskAwaitable_1_GetAwaiter_m42A9E38692E4C0CD6AC6532132A8A456605E19EF_inline((&V_6), ConfiguredTaskAwaitable_1_GetAwaiter_m42A9E38692E4C0CD6AC6532132A8A456605E19EF_RuntimeMethod_var);
			V_5 = L_13;
			bool L_14;
			L_14 = ConfiguredTaskAwaiter_get_IsCompleted_m007B99DA2999CA2DE57486D06A4465A7BD6482DB((&V_5), ConfiguredTaskAwaiter_get_IsCompleted_m007B99DA2999CA2DE57486D06A4465A7BD6482DB_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_15 = 0;
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
			ConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B L_16 = V_5;
			__this->___U3CU3Eu__1_6 = L_16;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_17 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B_TisU3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197_m82B7759DA158FA54FDCE7B28BDD432704A982B31(L_17, (&V_5), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B_TisU3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197_m82B7759DA158FA54FDCE7B28BDD432704A982B31_RuntimeMethod_var);
			goto IL_00df;
		}

IL_007f_1:
		{
			ConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B L_18 = __this->___U3CU3Eu__1_6;
			V_5 = L_18;
			ConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B* L_19 = (&__this->___U3CU3Eu__1_6);
			il2cpp_codegen_initobj(L_19, sizeof(ConfiguredTaskAwaiter_tCF563CD0DF5E5965F22555BD7EF5774949672E1B));
			int32_t L_20 = (-1);
			V_0 = L_20;
			__this->___U3CU3E1__state_0 = L_20;
		}

IL_009c_1:
		{
			RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* L_21;
			L_21 = ConfiguredTaskAwaiter_GetResult_mF91D4D04E07486802FD804FF9509FC2EE6121FF7((&V_5), ConfiguredTaskAwaiter_GetResult_mF91D4D04E07486802FD804FF9509FC2EE6121FF7_RuntimeMethod_var);
			V_3 = L_21;
			ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B* L_22 = V_1;
			RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* L_23 = V_3;
			String_t* L_24 = __this->___method_2;
			NullCheck(L_22);
			ClientBase_HandleRpcError_mABEA2591F0BB3D3067DC6AC5DC516A23BD0F5BC7(L_22, L_23, L_24, NULL);
			goto IL_00cc;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b3;
		}
		throw e;
	}

CATCH_00b3:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_25 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_26 = V_7;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_25, L_26, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00df;
	}// end catch (depth: 1)

IL_00cc:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_27 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_27, NULL);
	}

IL_00df:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendRequestAsyncU3Ed__18_MoveNext_m5DE57DBCB0B7F9EED1A6888997806825988DB609_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197*>(__this + _offset);
	U3CSendRequestAsyncU3Ed__18_MoveNext_m5DE57DBCB0B7F9EED1A6888997806825988DB609(_thisAdjusted, method);
}
// System.Void Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__18::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAsyncU3Ed__18_SetStateMachine_mC472D929D820748FAC7D499752AA0D49DE682316 (U3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendRequestAsyncU3Ed__18_SetStateMachine_mC472D929D820748FAC7D499752AA0D49DE682316_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendRequestAsyncU3Ed__18_t3424CD93465BE96606A6CDEE3E6DAA9CE5045197*>(__this + _offset);
	U3CSendRequestAsyncU3Ed__18_SetStateMachine_mC472D929D820748FAC7D499752AA0D49DE682316(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Nethereum.JsonRpc.Client.Configuration::get_DefaultRequestId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Configuration_get_DefaultRequestId_m9F7BD95ED6B25DA17C4B23BA38E83484A7B75A8C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Configuration_t3005F5E8302BFC87F3BB89A9A42E3E2FBF58976D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Configuration_t3005F5E8302BFC87F3BB89A9A42E3E2FBF58976D_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Configuration_t3005F5E8302BFC87F3BB89A9A42E3E2FBF58976D_StaticFields*)il2cpp_codegen_static_fields_for(Configuration_t3005F5E8302BFC87F3BB89A9A42E3E2FBF58976D_il2cpp_TypeInfo_var))->___U3CDefaultRequestIdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.Configuration::set_DefaultRequestId(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration_set_DefaultRequestId_mADC7B71A3D3B0325B26EEF7E29AB617789D5D097 (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Configuration_t3005F5E8302BFC87F3BB89A9A42E3E2FBF58976D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Configuration_t3005F5E8302BFC87F3BB89A9A42E3E2FBF58976D_il2cpp_TypeInfo_var);
		((Configuration_t3005F5E8302BFC87F3BB89A9A42E3E2FBF58976D_StaticFields*)il2cpp_codegen_static_fields_for(Configuration_t3005F5E8302BFC87F3BB89A9A42E3E2FBF58976D_il2cpp_TypeInfo_var))->___U3CDefaultRequestIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Configuration_t3005F5E8302BFC87F3BB89A9A42E3E2FBF58976D_StaticFields*)il2cpp_codegen_static_fields_for(Configuration_t3005F5E8302BFC87F3BB89A9A42E3E2FBF58976D_il2cpp_TypeInfo_var))->___U3CDefaultRequestIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.Configuration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_mD79065812FCB37856F48EDD7AD8D5ABC2CC2645D (Configuration_t3005F5E8302BFC87F3BB89A9A42E3E2FBF58976D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.Configuration::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__cctor_m1C4423DD59F334B0D0509D2E5F1DA7C706A21BEA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Configuration_t3005F5E8302BFC87F3BB89A9A42E3E2FBF58976D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = 1;
		RuntimeObject* L_1 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_0);
		((Configuration_t3005F5E8302BFC87F3BB89A9A42E3E2FBF58976D_StaticFields*)il2cpp_codegen_static_fields_for(Configuration_t3005F5E8302BFC87F3BB89A9A42E3E2FBF58976D_il2cpp_TypeInfo_var))->___U3CDefaultRequestIdU3Ek__BackingField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Configuration_t3005F5E8302BFC87F3BB89A9A42E3E2FBF58976D_StaticFields*)il2cpp_codegen_static_fields_for(Configuration_t3005F5E8302BFC87F3BB89A9A42E3E2FBF58976D_il2cpp_TypeInfo_var))->___U3CDefaultRequestIdU3Ek__BackingField_0), (void*)L_1);
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
// Newtonsoft.Json.JsonSerializerSettings Nethereum.JsonRpc.Client.DefaultJsonSerializerSettingsFactory::BuildDefaultJsonSerializerSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* DefaultJsonSerializerSettingsFactory_BuildDefaultJsonSerializerSettings_mD1C6DC5E0BAD49854BD2E512F7D5A41D8FB7F521 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_0 = (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF*)il2cpp_codegen_object_new(JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JsonSerializerSettings__ctor_mE1C9A90375BA88DF7F6911F1F96AEEC6A98CD22F(L_0, NULL);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_1 = L_0;
		NullCheck(L_1);
		JsonSerializerSettings_set_NullValueHandling_mC389679010477A90BA5F811621B460004710CF16(L_1, 1, NULL);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_2 = L_1;
		NullCheck(L_2);
		JsonSerializerSettings_set_MissingMemberHandling_mD0C7EE2F78B48F00E8304E9D6B25CF96550769F0(L_2, 0, NULL);
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
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.JsonProperty> Nethereum.JsonRpc.Client.NullParamsFirstElementResolver::CreateProperties(System.Type,Newtonsoft.Json.MemberSerialization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NullParamsFirstElementResolver_CreateProperties_mBD2B1452A4EE65C5CDED8EFBEF50D3B104F15DFA (NullParamsFirstElementResolver_t14FF4D263B7CA7A8457DD39832ABDAAB1E407AED* __this, Type_t* ___type0, int32_t ___memberSerialization1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisPropertyInfo_t_TisJsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3_m131F1A9BAF034D016DBB4945D2E260429535EBAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisJsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3_m6438BA513E6169D146E81CEB7D50D77F1DE2FD3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t909388D06263B11EE8960AB1C4AAD9025EA29C90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CCreatePropertiesU3Eb__0_m7E45811BBEC0B1C178DA95B429A56F51B0A74550_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_tB0EA81C76FCEC0D02323D8E737E40F6819484481_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_tB0EA81C76FCEC0D02323D8E737E40F6819484481* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_tB0EA81C76FCEC0D02323D8E737E40F6819484481* L_0 = (U3CU3Ec__DisplayClass0_0_tB0EA81C76FCEC0D02323D8E737E40F6819484481*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_tB0EA81C76FCEC0D02323D8E737E40F6819484481_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass0_0__ctor_mE6D9411E77E3921BA304CD871B804F50EE6F124C(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_tB0EA81C76FCEC0D02323D8E737E40F6819484481* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass0_0_tB0EA81C76FCEC0D02323D8E737E40F6819484481* L_2 = V_0;
		int32_t L_3 = ___memberSerialization1;
		NullCheck(L_2);
		L_2->___memberSerialization_1 = L_3;
		Type_t* L_4 = ___type0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_5;
		L_5 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_4, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(130 /* System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> System.Reflection.TypeInfo::get_DeclaredProperties() */, L_5);
		U3CU3Ec__DisplayClass0_0_tB0EA81C76FCEC0D02323D8E737E40F6819484481* L_7 = V_0;
		Func_2_t909388D06263B11EE8960AB1C4AAD9025EA29C90* L_8 = (Func_2_t909388D06263B11EE8960AB1C4AAD9025EA29C90*)il2cpp_codegen_object_new(Func_2_t909388D06263B11EE8960AB1C4AAD9025EA29C90_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Func_2__ctor_m3D2C90AD78E64FA5F4BECC751A265F824C62D42D(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CCreatePropertiesU3Eb__0_m7E45811BBEC0B1C178DA95B429A56F51B0A74550_RuntimeMethod_var), NULL);
		RuntimeObject* L_9;
		L_9 = Enumerable_Select_TisPropertyInfo_t_TisJsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3_m131F1A9BAF034D016DBB4945D2E260429535EBAA(L_6, L_8, Enumerable_Select_TisPropertyInfo_t_TisJsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3_m131F1A9BAF034D016DBB4945D2E260429535EBAA_RuntimeMethod_var);
		List_1_t74666FDF65CB5C8F34590E465BD151F8943D32CB* L_10;
		L_10 = Enumerable_ToList_TisJsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3_m6438BA513E6169D146E81CEB7D50D77F1DE2FD3F(L_9, Enumerable_ToList_TisJsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3_m6438BA513E6169D146E81CEB7D50D77F1DE2FD3F_RuntimeMethod_var);
		return L_10;
	}
}
// System.Void Nethereum.JsonRpc.Client.NullParamsFirstElementResolver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullParamsFirstElementResolver__ctor_mDB479DE1DD3647726C621F093F84D4A4BC4D5A11 (NullParamsFirstElementResolver_t14FF4D263B7CA7A8457DD39832ABDAAB1E407AED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultContractResolver_t463A02A39C265D7EB415D4CEB2B2E32664A02CAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultContractResolver_t463A02A39C265D7EB415D4CEB2B2E32664A02CAD_il2cpp_TypeInfo_var);
		DefaultContractResolver__ctor_m52F3E230F523349797B923489423735999EA4A4E(__this, NULL);
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
// System.Void Nethereum.JsonRpc.Client.NullParamsFirstElementResolver/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mE6D9411E77E3921BA304CD871B804F50EE6F124C (U3CU3Ec__DisplayClass0_0_tB0EA81C76FCEC0D02323D8E737E40F6819484481* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Newtonsoft.Json.Serialization.JsonProperty Nethereum.JsonRpc.Client.NullParamsFirstElementResolver/<>c__DisplayClass0_0::<CreateProperties>b__0(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* U3CU3Ec__DisplayClass0_0_U3CCreatePropertiesU3Eb__0_m7E45811BBEC0B1C178DA95B429A56F51B0A74550 (U3CU3Ec__DisplayClass0_0_tB0EA81C76FCEC0D02323D8E737E40F6819484481* __this, PropertyInfo_t* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullParamsValueProvider_t09155C95A76C6709EFB371342F757B11C72C620D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullParamsFirstElementResolver_t14FF4D263B7CA7A8457DD39832ABDAAB1E407AED* L_0 = __this->___U3CU3E4__this_0;
		PropertyInfo_t* L_1 = ___p0;
		int32_t L_2 = __this->___memberSerialization_1;
		NullCheck(L_0);
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_3;
		L_3 = VirtualFuncInvoker2< JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3*, MemberInfo_t*, int32_t >::Invoke(22 /* Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.DefaultContractResolver::CreateProperty(System.Reflection.MemberInfo,Newtonsoft.Json.MemberSerialization) */, L_0, L_1, L_2);
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_4 = L_3;
		PropertyInfo_t* L_5 = ___p0;
		NullParamsValueProvider_t09155C95A76C6709EFB371342F757B11C72C620D* L_6 = (NullParamsValueProvider_t09155C95A76C6709EFB371342F757B11C72C620D*)il2cpp_codegen_object_new(NullParamsValueProvider_t09155C95A76C6709EFB371342F757B11C72C620D_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		NullParamsValueProvider__ctor_m22EFBF372F06C2ADB4373D39B12732D2E9DA67F5(L_6, L_5, NULL);
		NullCheck(L_4);
		JsonProperty_set_ValueProvider_m3E52A4C43012A13A874804F1539A9F50CC54D4BA_inline(L_4, L_6, NULL);
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
// System.Void Nethereum.JsonRpc.Client.NullParamsValueProvider::.ctor(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullParamsValueProvider__ctor_m22EFBF372F06C2ADB4373D39B12732D2E9DA67F5 (NullParamsValueProvider_t09155C95A76C6709EFB371342F757B11C72C620D* __this, PropertyInfo_t* ___memberInfo0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		PropertyInfo_t* L_0 = ___memberInfo0;
		__this->____memberInfo_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____memberInfo_0), (void*)L_0);
		return;
	}
}
// System.Object Nethereum.JsonRpc.Client.NullParamsValueProvider::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NullParamsValueProvider_GetValue_m8D974E5D6CBDD729126844320FA7E280C3B58E05 (NullParamsValueProvider_t09155C95A76C6709EFB371342F757B11C72C620D* __this, RuntimeObject* ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A1CCB509D9C2863877C3F9A21BA22023008BB1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B4F028A4070094FCA4E7762E2C376A65E2D59C6);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	{
		PropertyInfo_t* L_0 = __this->____memberInfo_0;
		RuntimeObject* L_1 = ___target0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = PropertyInfo_GetValue_m89576462107E2A4DF5B7775216AEC29D74FF6088(L_0, L_1, NULL);
		V_0 = L_2;
		PropertyInfo_t* L_3 = __this->____memberInfo_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral2A1CCB509D9C2863877C3F9A21BA22023008BB1A, NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		V_1 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_6, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_1;
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_1;
		NullCheck(L_8);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((uint32_t)1))))
		{
			goto IL_003f;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = 0;
		RuntimeObject* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if (L_11)
		{
			goto IL_003f;
		}
	}
	{
		V_0 = _stringLiteral5B4F028A4070094FCA4E7762E2C376A65E2D59C6;
	}

IL_003f:
	{
		RuntimeObject* L_12 = V_0;
		return L_12;
	}
}
// System.Void Nethereum.JsonRpc.Client.NullParamsValueProvider::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullParamsValueProvider_SetValue_m0C3CD5907DBFB6CCF46D203D7A7D2E25EDC4597C (NullParamsValueProvider_t09155C95A76C6709EFB371342F757B11C72C620D* __this, RuntimeObject* ___target0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->____memberInfo_0;
		RuntimeObject* L_1 = ___target0;
		RuntimeObject* L_2 = ___value1;
		NullCheck(L_0);
		PropertyInfo_SetValue_m67B3A509C7EB945C3DA97D096EF1231C805C92D3(L_0, L_1, L_2, NULL);
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
// System.Threading.Tasks.Task Nethereum.JsonRpc.Client.RequestInterceptor::InterceptSendRequestAsync(System.Func`3<Nethereum.JsonRpc.Client.RpcRequest,System.String,System.Threading.Tasks.Task>,Nethereum.JsonRpc.Client.RpcRequest,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* RequestInterceptor_InterceptSendRequestAsync_mC793B80912ABA6D7C4CBAAD438F299B63A73836F (RequestInterceptor_t0B0D2629DBFF7C5098B4B4C21BCA63444BD502F0* __this, Func_3_tE0EE343B458D09927050E38C911239670F82D81C* ___interceptedSendRequestAsync0, RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* ___request1, String_t* ___route2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933_m3E8A37A811A62C9EF91D30A009F8E147B491E5D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		Func_3_tE0EE343B458D09927050E38C911239670F82D81C* L_1 = ___interceptedSendRequestAsync0;
		(&V_0)->___interceptedSendRequestAsync_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___interceptedSendRequestAsync_2), (void*)L_1);
		RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* L_2 = ___request1;
		(&V_0)->___request_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___request_3), (void*)L_2);
		String_t* L_3 = ___route2;
		(&V_0)->___route_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___route_4), (void*)L_3);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933_m3E8A37A811A62C9EF91D30A009F8E147B491E5D0(L_4, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933_m3E8A37A811A62C9EF91D30A009F8E147B491E5D0_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_5 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_5, NULL);
		return L_6;
	}
}
// System.Threading.Tasks.Task Nethereum.JsonRpc.Client.RequestInterceptor::InterceptSendRequestAsync(System.Func`4<System.String,System.String,System.Object[],System.Threading.Tasks.Task>,System.String,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* RequestInterceptor_InterceptSendRequestAsync_m2F13E3FCCC03DA6A6C528B6D88FAE43FD399A0B6 (RequestInterceptor_t0B0D2629DBFF7C5098B4B4C21BCA63444BD502F0* __this, Func_4_tD2B417B8273448F141CB0722CCE3A32D8432054B* ___interceptedSendRequestAsync0, String_t* ___method1, String_t* ___route2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___paramList3, const RuntimeMethod* method) 
{
	{
		Func_4_tD2B417B8273448F141CB0722CCE3A32D8432054B* L_0 = ___interceptedSendRequestAsync0;
		String_t* L_1 = ___method1;
		String_t* L_2 = ___route2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___paramList3;
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = Func_4_Invoke_m8D046ABDDB7FE3DD25F2722DCD9E997609EAAFDF_inline(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Void Nethereum.JsonRpc.Client.RequestInterceptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestInterceptor__ctor_m51036668B9C9EDD7DE8E3FE7D0001DC515C4FB8F (RequestInterceptor_t0B0D2629DBFF7C5098B4B4C21BCA63444BD502F0* __this, const RuntimeMethod* method) 
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
// System.Void Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInterceptSendRequestAsyncU3Ed__1_MoveNext_mE76FBB62E24290856BA288E8DB9BFD0599A0C5AD (U3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933_m34D6B2E94824DDAFADBC8F46423342D4FCD9233B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0059_1;
			}
		}
		{
			Func_3_tE0EE343B458D09927050E38C911239670F82D81C* L_2 = __this->___interceptedSendRequestAsync_2;
			RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* L_3 = __this->___request_3;
			String_t* L_4 = __this->___route_4;
			NullCheck(L_2);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
			L_5 = Func_3_Invoke_mB4A62B5BD68C7E8F592BCE17617B9720CDAB6864_inline(L_2, L_3, L_4, NULL);
			NullCheck(L_5);
			ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_6;
			L_6 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_5, (bool)0, NULL);
			V_2 = L_6;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_7;
			L_7 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_2), NULL);
			V_1 = L_7;
			bool L_8;
			L_8 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_1), NULL);
			if (L_8)
			{
				goto IL_0075_1;
			}
		}
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->___U3CU3E1__state_0 = L_9;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_10 = V_1;
			__this->___U3CU3Eu__1_5 = L_10;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_11 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933_m34D6B2E94824DDAFADBC8F46423342D4FCD9233B(L_11, (&V_1), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933_m34D6B2E94824DDAFADBC8F46423342D4FCD9233B_RuntimeMethod_var);
			goto IL_00a8;
		}

IL_0059_1:
		{
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_12 = __this->___U3CU3Eu__1_5;
			V_1 = L_12;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_13 = (&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_13, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
		}

IL_0075_1:
		{
			ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_1), NULL);
			goto IL_0095;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007e;
		}
		throw e;
	}

CATCH_007e:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_15 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_16 = V_3;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_15, L_16, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a8;
	}// end catch (depth: 1)

IL_0095:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_17 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_17, NULL);
	}

IL_00a8:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInterceptSendRequestAsyncU3Ed__1_MoveNext_mE76FBB62E24290856BA288E8DB9BFD0599A0C5AD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933*>(__this + _offset);
	U3CInterceptSendRequestAsyncU3Ed__1_MoveNext_mE76FBB62E24290856BA288E8DB9BFD0599A0C5AD(_thisAdjusted, method);
}
// System.Void Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInterceptSendRequestAsyncU3Ed__1_SetStateMachine_mA5672945409834C509160D9A51609AE957593878 (U3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInterceptSendRequestAsyncU3Ed__1_SetStateMachine_mA5672945409834C509160D9A51609AE957593878_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInterceptSendRequestAsyncU3Ed__1_t062BF8470063B13D18782400D9DE607F2996A933*>(__this + _offset);
	U3CInterceptSendRequestAsyncU3Ed__1_SetStateMachine_mA5672945409834C509160D9A51609AE957593878(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Nethereum.JsonRpc.Client.RpcClientTimeoutException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcClientTimeoutException__ctor_m17E2B5B8E0F5A15742A539A575C027221D31E725 (RpcClientTimeoutException_t6705F8007F759185D010A0E822189E2554BB20AF* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcClientTimeoutException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcClientTimeoutException__ctor_mF1352073E00F6DBA1B15C4A16E38A112FA4D4483 (RpcClientTimeoutException_t6705F8007F759185D010A0E822189E2554BB20AF* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___innerException1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
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
// System.Void Nethereum.JsonRpc.Client.RpcClientUnknownException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcClientUnknownException__ctor_mAABEAAE14F9811EFEDAAD046334C6B886C812D56 (RpcClientUnknownException_tFF48990C365A31D6AFB630B612733B30AE3DA2C1* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcClientUnknownException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcClientUnknownException__ctor_m91C6A7CC6E0368156778D0EF236270A9DD67C597 (RpcClientUnknownException_tFF48990C365A31D6AFB630B612733B30AE3DA2C1* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___innerException1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
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
// System.Void Nethereum.JsonRpc.Client.RpcError::.ctor(System.Int32,System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcError__ctor_m47134CA970B36548F370BD0D6CF607840EC01E84 (RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3* __this, int32_t ___code0, String_t* ___message1, JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___data2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___code0;
		RpcError_set_Code_mE8A76A4C3FB5D7CCFC755F792BCE693041B0229B_inline(__this, L_0, NULL);
		String_t* L_1 = ___message1;
		RpcError_set_Message_mEA804107F6145887CCA5329FCCFB1E52F8E2B5B7_inline(__this, L_1, NULL);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_2 = ___data2;
		RpcError_set_Data_mEBA82876962EE28B2ADA15F3AFC60F447B12B8B5_inline(__this, L_2, NULL);
		return;
	}
}
// System.Int32 Nethereum.JsonRpc.Client.RpcError::get_Code()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RpcError_get_Code_mDABFEB074D13EB5FBD7B3690499600D8648394B7 (RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCodeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcError::set_Code(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcError_set_Code_mE8A76A4C3FB5D7CCFC755F792BCE693041B0229B (RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CCodeU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcError::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcError_get_Message_m9FA16E822E99C2DDF53F6F85435A584A4E211B04 (RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcError::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcError_set_Message_mEA804107F6145887CCA5329FCCFB1E52F8E2B5B7 (RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcError::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* RpcError_get_Data_m43BD7AD7220D63CBD58AAC9F3BA1E7EC5EE0869C (RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3* __this, const RuntimeMethod* method) 
{
	{
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_0 = __this->___U3CDataU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcError::set_Data(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcError_set_Data_mEBA82876962EE28B2ADA15F3AFC60F447B12B8B5 (RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3* __this, JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___value0, const RuntimeMethod* method) 
{
	{
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_0 = ___value0;
		__this->___U3CDataU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_2), (void*)L_0);
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
// System.Void Nethereum.JsonRpc.Client.RpcLogger::.ctor(Microsoft.Extensions.Logging.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcLogger__ctor_mF2A9D330819C3C239EC6D5A0B3E29AAAC780B9EF (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, RuntimeObject* ___log0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___log0;
		RpcLogger_set_Log_mECA338BB580B360F18FA982142B4C37C8BF2256B_inline(__this, L_0, NULL);
		return;
	}
}
// Microsoft.Extensions.Logging.ILogger Nethereum.JsonRpc.Client.RpcLogger::get_Log()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RpcLogger_get_Log_m28F77D0DC56E9165B9F0B747A5046F6BF15572EB (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CLogU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcLogger::set_Log(Microsoft.Extensions.Logging.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcLogger_set_Log_mECA338BB580B360F18FA982142B4C37C8BF2256B (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CLogU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLogU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcLogger::get_RequestJsonMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcLogger_get_RequestJsonMessage_mBAA1B710960B44F081AED087C62967D85B762ADF (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CRequestJsonMessageU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcLogger::set_RequestJsonMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcLogger_set_RequestJsonMessage_m6812E3E426DEAD650D478C1FBE8F2CBC25692DE4 (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CRequestJsonMessageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRequestJsonMessageU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage Nethereum.JsonRpc.Client.RpcLogger::get_ResponseMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* RpcLogger_get_ResponseMessage_mDC8DDABE1DD767682F0845C51DB08B66C1F2EC23 (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, const RuntimeMethod* method) 
{
	{
		RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* L_0 = __this->___U3CResponseMessageU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcLogger::set_ResponseMessage(Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcLogger_set_ResponseMessage_m0CF29DA40F280AACF7DA12285D86AB165FB10B31 (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* ___value0, const RuntimeMethod* method) 
{
	{
		RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* L_0 = ___value0;
		__this->___U3CResponseMessageU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResponseMessageU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcLogger::LogRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcLogger_LogRequest_mA715CC7280C345F8130C90A7F0946CBF6BB78D02 (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, String_t* ___requestJsonMessage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = RpcLogger_get_Log_m28F77D0DC56E9165B9F0B747A5046F6BF15572EB_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_1 = ___requestJsonMessage0;
		RpcLogger_set_RequestJsonMessage_m6812E3E426DEAD650D478C1FBE8F2CBC25692DE4_inline(__this, L_1, NULL);
		RuntimeObject* L_2;
		L_2 = RpcLogger_get_Log_m28F77D0DC56E9165B9F0B747A5046F6BF15572EB_inline(__this, NULL);
		String_t* L_3;
		L_3 = RpcLogger_GetRPCRequestLogMessage_m6509C42051BBA0FE6C03CA1190A14754573A1427(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_LogTrace_mED89E988903065F91B17FCD42B7E442B98E21956(L_2, L_3, L_4, NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcLogger::GetRPCRequestLogMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcLogger_GetRPCRequestLogMessage_m6509C42051BBA0FE6C03CA1190A14754573A1427 (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral068F780F4A8A2BE8B460C4858E09ED5587C3D171);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = RpcLogger_get_RequestJsonMessage_mBAA1B710960B44F081AED087C62967D85B762ADF_inline(__this, NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral068F780F4A8A2BE8B460C4858E09ED5587C3D171, L_0, NULL);
		return L_1;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcLogger::GetRPCResponseLogMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcLogger_GetRPCResponseLogMessage_m3C4316DBDF20C345596CB45DC539640ADC289E4B (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD004EBBBC1070E7D0C496A257FCFE588E4B23913);
		s_Il2CppMethodInitialized = true;
	}
	{
		RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* L_0;
		L_0 = RpcLogger_get_ResponseMessage_mDC8DDABE1DD767682F0845C51DB08B66C1F2EC23_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000e:
	{
		RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* L_2;
		L_2 = RpcLogger_get_ResponseMessage_mDC8DDABE1DD767682F0845C51DB08B66C1F2EC23_inline(__this, NULL);
		NullCheck(L_2);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_3;
		L_3 = RpcResponseMessage_get_Result_m15C0CB82C1FF185CEA41EE154EB06A4805A7F18C_inline(L_2, NULL);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD004EBBBC1070E7D0C496A257FCFE588E4B23913, L_3, NULL);
		return L_4;
	}
}
// System.Boolean Nethereum.JsonRpc.Client.RpcLogger::IsLogErrorEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RpcLogger_IsLogErrorEnabled_m09922AFD3E09293E2A25D35C41655B8A9DC32536 (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t1C0C2CD1CDFA86541C20F898F7581FB2CB04BFB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = RpcLogger_get_Log_m28F77D0DC56E9165B9F0B747A5046F6BF15572EB_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = RpcLogger_get_Log_m28F77D0DC56E9165B9F0B747A5046F6BF15572EB_inline(__this, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean Microsoft.Extensions.Logging.ILogger::IsEnabled(Microsoft.Extensions.Logging.LogLevel) */, ILogger_t1C0C2CD1CDFA86541C20F898F7581FB2CB04BFB4_il2cpp_TypeInfo_var, L_1, 4);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcLogger::LogResponse(Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcLogger_LogResponse_m5AB896D42204392EF335B2FF2979C9EB5266626C (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* ___responseMessage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C5CD570816F5EF21DB031C8819A29AB3FE1F6D1);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = RpcLogger_get_Log_m28F77D0DC56E9165B9F0B747A5046F6BF15572EB_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0053;
		}
	}
	{
		RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* L_1 = ___responseMessage0;
		RpcLogger_set_ResponseMessage_m0CF29DA40F280AACF7DA12285D86AB165FB10B31_inline(__this, L_1, NULL);
		RuntimeObject* L_2;
		L_2 = RpcLogger_get_Log_m28F77D0DC56E9165B9F0B747A5046F6BF15572EB_inline(__this, NULL);
		String_t* L_3;
		L_3 = RpcLogger_GetRPCResponseLogMessage_m3C4316DBDF20C345596CB45DC539640ADC289E4B(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_LogTrace_mED89E988903065F91B17FCD42B7E442B98E21956(L_2, L_3, L_4, NULL);
		RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* L_5 = ___responseMessage0;
		bool L_6;
		L_6 = RpcLogger_HasError_mF6C33595F9AD9A8262B7FD442B04AE89B3FA85AA(__this, L_5, NULL);
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_7;
		L_7 = RpcLogger_get_Log_m28F77D0DC56E9165B9F0B747A5046F6BF15572EB_inline(__this, NULL);
		RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* L_8 = ___responseMessage0;
		NullCheck(L_8);
		RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* L_9;
		L_9 = RpcResponseMessage_get_Error_m8797AF4364D700201859343603B5F3C7502EF451_inline(L_8, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = RpcError_get_Message_mD3F9B5D1772226C66F93562B3A591BB40AFF478D_inline(L_9, NULL);
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4C5CD570816F5EF21DB031C8819A29AB3FE1F6D1, L_10, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12;
		L_12 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_LogError_m1151F264B84A277EAEE29115ED4832C7067F0245(L_7, L_11, L_12, NULL);
	}

IL_0053:
	{
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcLogger::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcLogger_LogException_m0FEFC87F52B2FEC3B480F3DCFF42BD96FAC88BE6 (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, Exception_t* ___ex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9125A6F7AF01C617D0C306146BFE095F99C613FA);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = RpcLogger_get_Log_m28F77D0DC56E9165B9F0B747A5046F6BF15572EB_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = RpcLogger_get_Log_m28F77D0DC56E9165B9F0B747A5046F6BF15572EB_inline(__this, NULL);
		Exception_t* L_2 = ___ex0;
		String_t* L_3;
		L_3 = RpcLogger_GetRPCRequestLogMessage_m6509C42051BBA0FE6C03CA1190A14754573A1427(__this, NULL);
		String_t* L_4;
		L_4 = RpcLogger_GetRPCResponseLogMessage_m3C4316DBDF20C345596CB45DC539640ADC289E4B(__this, NULL);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral9125A6F7AF01C617D0C306146BFE095F99C613FA, L_3, L_4, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6;
		L_6 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_LogError_mD5B60284BA51EDD61E74DA22FA30A85B77927F5B(L_1, L_2, L_5, L_6, NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean Nethereum.JsonRpc.Client.RpcLogger::HasError(Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RpcLogger_HasError_mF6C33595F9AD9A8262B7FD442B04AE89B3FA85AA (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* ___message0, const RuntimeMethod* method) 
{
	{
		RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* L_0 = ___message0;
		NullCheck(L_0);
		RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* L_1;
		L_1 = RpcResponseMessage_get_Error_m8797AF4364D700201859343603B5F3C7502EF451_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* L_2 = ___message0;
		NullCheck(L_2);
		bool L_3;
		L_3 = RpcResponseMessage_get_HasError_m6772B3DB2F0780B8219AF24D39825F0783E477FC(L_2, NULL);
		return L_3;
	}

IL_000f:
	{
		return (bool)0;
	}
}
// System.Boolean Nethereum.JsonRpc.Client.RpcLogger::IsLogTraceEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RpcLogger_IsLogTraceEnabled_mA8C7E56C2C9AB16F7B71B79B414FE09A77515F69 (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t1C0C2CD1CDFA86541C20F898F7581FB2CB04BFB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = RpcLogger_get_Log_m28F77D0DC56E9165B9F0B747A5046F6BF15572EB_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = RpcLogger_get_Log_m28F77D0DC56E9165B9F0B747A5046F6BF15572EB_inline(__this, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean Microsoft.Extensions.Logging.ILogger::IsEnabled(Microsoft.Extensions.Logging.LogLevel) */, ILogger_t1C0C2CD1CDFA86541C20F898F7581FB2CB04BFB4_il2cpp_TypeInfo_var, L_1, 0);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
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
// System.Void Nethereum.JsonRpc.Client.RpcRequest::.ctor(System.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequest__ctor_mC4CA0ED8C85AAE7BD7F72FE65074094E3404CF5C (RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* __this, RuntimeObject* ___id0, String_t* ___method1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameterList2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___id0;
		RpcRequest_set_Id_mC70D7D2490D4E817C7986855EE99CDDC6CB64946_inline(__this, L_0, NULL);
		String_t* L_1 = ___method1;
		RpcRequest_set_Method_mDEB803F569C6C8DF1755499D8DD1C000AB6A400E_inline(__this, L_1, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___parameterList2;
		RpcRequest_set_RawParameters_m7C225BA5CBAD47879241759AD3991D90EA4C83CF_inline(__this, L_2, NULL);
		return;
	}
}
// System.Object Nethereum.JsonRpc.Client.RpcRequest::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RpcRequest_get_Id_m75D35C84A2A8E744A230D4E759BF81DE1B88343F (RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcRequest::set_Id(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequest_set_Id_mC70D7D2490D4E817C7986855EE99CDDC6CB64946 (RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcRequest::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcRequest_get_Method_mF886761414CD12474B7887B545141FBF42E871F1 (RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMethodU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcRequest::set_Method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequest_set_Method_mDEB803F569C6C8DF1755499D8DD1C000AB6A400E (RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CMethodU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMethodU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Object[] Nethereum.JsonRpc.Client.RpcRequest::get_RawParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* RpcRequest_get_RawParameters_mEA71A7FE64FF28F690DBD585C07FC4278F3892D8 (RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* __this, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___U3CRawParametersU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcRequest::set_RawParameters(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequest_set_RawParameters_m7C225BA5CBAD47879241759AD3991D90EA4C83CF (RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___value0, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___value0;
		__this->___U3CRawParametersU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRawParametersU3Ek__BackingField_2), (void*)L_0);
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
// System.Void Nethereum.JsonRpc.Client.RpcRequestBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestBuilder__ctor_mC4DEACB10F9E676365EBA5549F5F87ADB3917111 (RpcRequestBuilder_t1EEB2A8EF2FDCBE66226A789E0B2F0B91D997CEF* __this, String_t* ___methodName0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___methodName0;
		__this->___U3CMethodNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMethodNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcRequestBuilder::get_MethodName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcRequestBuilder_get_MethodName_mC648076154384E26CAB9194E7A8F4EE9F6693DCC (RpcRequestBuilder_t1EEB2A8EF2FDCBE66226A789E0B2F0B91D997CEF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMethodNameU3Ek__BackingField_0;
		return L_0;
	}
}
// Nethereum.JsonRpc.Client.RpcRequest Nethereum.JsonRpc.Client.RpcRequestBuilder::BuildRequest(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* RpcRequestBuilder_BuildRequest_m09E8F020F4E850E8F41EF1271A3B2A0EDDDAF2A3 (RpcRequestBuilder_t1EEB2A8EF2FDCBE66226A789E0B2F0B91D997CEF* __this, RuntimeObject* ___id0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___paramList1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Configuration_t3005F5E8302BFC87F3BB89A9A42E3E2FBF58976D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___id0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Configuration_t3005F5E8302BFC87F3BB89A9A42E3E2FBF58976D_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = Configuration_get_DefaultRequestId_m9F7BD95ED6B25DA17C4B23BA38E83484A7B75A8C_inline(NULL);
		___id0 = L_1;
	}

IL_000a:
	{
		RuntimeObject* L_2 = ___id0;
		String_t* L_3;
		L_3 = RpcRequestBuilder_get_MethodName_mC648076154384E26CAB9194E7A8F4EE9F6693DCC_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___paramList1;
		RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* L_5 = (RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5*)il2cpp_codegen_object_new(RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		RpcRequest__ctor_mC4CA0ED8C85AAE7BD7F72FE65074094E3404CF5C(L_5, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// Nethereum.JsonRpc.Client.RpcRequest Nethereum.JsonRpc.Client.RpcRequestBuilder::BuildRequest(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* RpcRequestBuilder_BuildRequest_m3ABDD8D307AD6D11BAC07CD8B2BCC70BAF975217 (RpcRequestBuilder_t1EEB2A8EF2FDCBE66226A789E0B2F0B91D997CEF* __this, RuntimeObject* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Configuration_t3005F5E8302BFC87F3BB89A9A42E3E2FBF58976D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___id0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Configuration_t3005F5E8302BFC87F3BB89A9A42E3E2FBF58976D_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = Configuration_get_DefaultRequestId_m9F7BD95ED6B25DA17C4B23BA38E83484A7B75A8C_inline(NULL);
		___id0 = L_1;
	}

IL_000a:
	{
		RuntimeObject* L_2 = ___id0;
		String_t* L_3;
		L_3 = RpcRequestBuilder_get_MethodName_mC648076154384E26CAB9194E7A8F4EE9F6693DCC_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* L_5 = (RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5*)il2cpp_codegen_object_new(RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		RpcRequest__ctor_mC4CA0ED8C85AAE7BD7F72FE65074094E3404CF5C(L_5, L_2, L_3, L_4, NULL);
		return L_5;
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
// System.Collections.Generic.List`1<Nethereum.JsonRpc.Client.IRpcRequestResponseBatchItem> Nethereum.JsonRpc.Client.RpcRequestResponseBatch::get_BatchItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3C943042DC58864AF24A09FD0A818698175020EA* RpcRequestResponseBatch_get_BatchItems_m35AF61605C67B1E9807D9A04E02A9CF4E7EEB747 (RpcRequestResponseBatch_t6AEBAEF11004CC33B6A80F4EAAD31AE318576632* __this, const RuntimeMethod* method) 
{
	{
		List_1_t3C943042DC58864AF24A09FD0A818698175020EA* L_0 = __this->___U3CBatchItemsU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcRequestResponseBatch::set_BatchItems(System.Collections.Generic.List`1<Nethereum.JsonRpc.Client.IRpcRequestResponseBatchItem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestResponseBatch_set_BatchItems_m85320BB147C53541BC77F0949BA40D800A47CDA9 (RpcRequestResponseBatch_t6AEBAEF11004CC33B6A80F4EAAD31AE318576632* __this, List_1_t3C943042DC58864AF24A09FD0A818698175020EA* ___value0, const RuntimeMethod* method) 
{
	{
		List_1_t3C943042DC58864AF24A09FD0A818698175020EA* L_0 = ___value0;
		__this->___U3CBatchItemsU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBatchItemsU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage[] Nethereum.JsonRpc.Client.RpcRequestResponseBatch::GetRpcRequests()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RpcRequestMessageU5BU5D_t751C41D82385D4F97A408969DB7033B16596FE0E* RpcRequestResponseBatch_GetRpcRequests_m261C34B9995B913768B36CB7C0092206ECA9A799 (RpcRequestResponseBatch_t6AEBAEF11004CC33B6A80F4EAAD31AE318576632* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisIRpcRequestResponseBatchItem_tA6FD1882E648C5B880809B25C0F13205DC303B4A_TisRpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D_mBE552F7C454202B18874DCE7640EBFBFA5E79A5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisRpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D_m8DA0019019BA9C5DD0F40B18361F36F2FE0876D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD2609153E882D28B55CFA4B75EA6989A9E13F254_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetRpcRequestsU3Eb__4_0_mC54CEBF1FB6C1F483CBC9BBB3D2FBBA2CA796C91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0DA5A96E769895D8B5A6B11EBBC25A91DDB21F6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tD2609153E882D28B55CFA4B75EA6989A9E13F254* G_B2_0 = NULL;
	List_1_t3C943042DC58864AF24A09FD0A818698175020EA* G_B2_1 = NULL;
	Func_2_tD2609153E882D28B55CFA4B75EA6989A9E13F254* G_B1_0 = NULL;
	List_1_t3C943042DC58864AF24A09FD0A818698175020EA* G_B1_1 = NULL;
	{
		List_1_t3C943042DC58864AF24A09FD0A818698175020EA* L_0;
		L_0 = RpcRequestResponseBatch_get_BatchItems_m35AF61605C67B1E9807D9A04E02A9CF4E7EEB747_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0DA5A96E769895D8B5A6B11EBBC25A91DDB21F6A_il2cpp_TypeInfo_var);
		Func_2_tD2609153E882D28B55CFA4B75EA6989A9E13F254* L_1 = ((U3CU3Ec_t0DA5A96E769895D8B5A6B11EBBC25A91DDB21F6A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0DA5A96E769895D8B5A6B11EBBC25A91DDB21F6A_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1;
		Func_2_tD2609153E882D28B55CFA4B75EA6989A9E13F254* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0DA5A96E769895D8B5A6B11EBBC25A91DDB21F6A_il2cpp_TypeInfo_var);
		U3CU3Ec_t0DA5A96E769895D8B5A6B11EBBC25A91DDB21F6A* L_3 = ((U3CU3Ec_t0DA5A96E769895D8B5A6B11EBBC25A91DDB21F6A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0DA5A96E769895D8B5A6B11EBBC25A91DDB21F6A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tD2609153E882D28B55CFA4B75EA6989A9E13F254* L_4 = (Func_2_tD2609153E882D28B55CFA4B75EA6989A9E13F254*)il2cpp_codegen_object_new(Func_2_tD2609153E882D28B55CFA4B75EA6989A9E13F254_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_m70FB997AA88476A7B29C5E0FAD47677614B10543(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CGetRpcRequestsU3Eb__4_0_mC54CEBF1FB6C1F483CBC9BBB3D2FBBA2CA796C91_RuntimeMethod_var), NULL);
		Func_2_tD2609153E882D28B55CFA4B75EA6989A9E13F254* L_5 = L_4;
		((U3CU3Ec_t0DA5A96E769895D8B5A6B11EBBC25A91DDB21F6A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0DA5A96E769895D8B5A6B11EBBC25A91DDB21F6A_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0DA5A96E769895D8B5A6B11EBBC25A91DDB21F6A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0DA5A96E769895D8B5A6B11EBBC25A91DDB21F6A_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisIRpcRequestResponseBatchItem_tA6FD1882E648C5B880809B25C0F13205DC303B4A_TisRpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D_mBE552F7C454202B18874DCE7640EBFBFA5E79A5A(G_B2_1, G_B2_0, Enumerable_Select_TisIRpcRequestResponseBatchItem_tA6FD1882E648C5B880809B25C0F13205DC303B4A_TisRpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D_mBE552F7C454202B18874DCE7640EBFBFA5E79A5A_RuntimeMethod_var);
		RpcRequestMessageU5BU5D_t751C41D82385D4F97A408969DB7033B16596FE0E* L_7;
		L_7 = Enumerable_ToArray_TisRpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D_m8DA0019019BA9C5DD0F40B18361F36F2FE0876D7(L_6, Enumerable_ToArray_TisRpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D_m8DA0019019BA9C5DD0F40B18361F36F2FE0876D7_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcRequestResponseBatch::UpdateBatchItemResponses(System.Collections.Generic.IEnumerable`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestResponseBatch_UpdateBatchItemResponses_mADEDA02CC8F435471F41CFDAFD370ADAB8E488F9 (RpcRequestResponseBatch_t6AEBAEF11004CC33B6A80F4EAAD31AE318576632* __this, RuntimeObject* ___responses0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisIRpcRequestResponseBatchItem_tA6FD1882E648C5B880809B25C0F13205DC303B4A_m802534855A50E85BCC992DD70E3B6476A407B791_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tE8D27DA6DB21CB60C12AC22A45978B15556D7CC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tD97D65C81B242D571005A060EAB1E2CFA283A321_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t83B4F51B8E95E2187321A1A079C140C8EA46C41B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRpcRequestResponseBatchItem_tA6FD1882E648C5B880809B25C0F13205DC303B4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CUpdateBatchItemResponsesU3Eb__0_mF3FCA1BB62D28CD26993BC5424C6083694521967_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t9BF30C858377308D1B6E9B593EEC74BEE9BA1925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	U3CU3Ec__DisplayClass5_0_t9BF30C858377308D1B6E9B593EEC74BEE9BA1925* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___responses0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::GetEnumerator() */, IEnumerable_1_tD97D65C81B242D571005A060EAB1E2CFA283A321_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0047:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0050;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0050:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003d_1;
			}

IL_0009_1:
			{
				U3CU3Ec__DisplayClass5_0_t9BF30C858377308D1B6E9B593EEC74BEE9BA1925* L_4 = (U3CU3Ec__DisplayClass5_0_t9BF30C858377308D1B6E9B593EEC74BEE9BA1925*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t9BF30C858377308D1B6E9B593EEC74BEE9BA1925_il2cpp_TypeInfo_var);
				NullCheck(L_4);
				U3CU3Ec__DisplayClass5_0__ctor_mC68A09CB03D148F80D224C3B83111738127CE552(L_4, NULL);
				V_1 = L_4;
				U3CU3Ec__DisplayClass5_0_t9BF30C858377308D1B6E9B593EEC74BEE9BA1925* L_5 = V_1;
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* L_7;
				L_7 = InterfaceFuncInvoker0< RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::get_Current() */, IEnumerator_1_t83B4F51B8E95E2187321A1A079C140C8EA46C41B_il2cpp_TypeInfo_var, L_6);
				NullCheck(L_5);
				L_5->___response_0 = L_7;
				Il2CppCodeGenWriteBarrier((void**)(&L_5->___response_0), (void*)L_7);
				List_1_t3C943042DC58864AF24A09FD0A818698175020EA* L_8;
				L_8 = RpcRequestResponseBatch_get_BatchItems_m35AF61605C67B1E9807D9A04E02A9CF4E7EEB747_inline(__this, NULL);
				U3CU3Ec__DisplayClass5_0_t9BF30C858377308D1B6E9B593EEC74BEE9BA1925* L_9 = V_1;
				Func_2_tE8D27DA6DB21CB60C12AC22A45978B15556D7CC2* L_10 = (Func_2_tE8D27DA6DB21CB60C12AC22A45978B15556D7CC2*)il2cpp_codegen_object_new(Func_2_tE8D27DA6DB21CB60C12AC22A45978B15556D7CC2_il2cpp_TypeInfo_var);
				NullCheck(L_10);
				Func_2__ctor_mF05711888879093A640AFB8C54376FC663B9A464(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CUpdateBatchItemResponsesU3Eb__0_mF3FCA1BB62D28CD26993BC5424C6083694521967_RuntimeMethod_var), NULL);
				RuntimeObject* L_11;
				L_11 = Enumerable_First_TisIRpcRequestResponseBatchItem_tA6FD1882E648C5B880809B25C0F13205DC303B4A_m802534855A50E85BCC992DD70E3B6476A407B791(L_8, L_10, Enumerable_First_TisIRpcRequestResponseBatchItem_tA6FD1882E648C5B880809B25C0F13205DC303B4A_m802534855A50E85BCC992DD70E3B6476A407B791_RuntimeMethod_var);
				U3CU3Ec__DisplayClass5_0_t9BF30C858377308D1B6E9B593EEC74BEE9BA1925* L_12 = V_1;
				NullCheck(L_12);
				RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* L_13 = L_12->___response_0;
				NullCheck(L_11);
				InterfaceActionInvoker1< RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* >::Invoke(4 /* System.Void Nethereum.JsonRpc.Client.IRpcRequestResponseBatchItem::DecodeResponse(Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage) */, IRpcRequestResponseBatchItem_tA6FD1882E648C5B880809B25C0F13205DC303B4A_il2cpp_TypeInfo_var, L_11, L_13);
			}

IL_003d_1:
			{
				RuntimeObject* L_14 = V_0;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0051;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0051:
	{
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcRequestResponseBatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestResponseBatch__ctor_mC1E62EEFAA85D99B65D81A611D91D7724E3CA4F6 (RpcRequestResponseBatch_t6AEBAEF11004CC33B6A80F4EAAD31AE318576632* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAE26BAB9625D4180D65D9BAC2E983B4B4F0CA689_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3C943042DC58864AF24A09FD0A818698175020EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3C943042DC58864AF24A09FD0A818698175020EA* L_0 = (List_1_t3C943042DC58864AF24A09FD0A818698175020EA*)il2cpp_codegen_object_new(List_1_t3C943042DC58864AF24A09FD0A818698175020EA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mAE26BAB9625D4180D65D9BAC2E983B4B4F0CA689(L_0, List_1__ctor_mAE26BAB9625D4180D65D9BAC2E983B4B4F0CA689_RuntimeMethod_var);
		__this->___U3CBatchItemsU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBatchItemsU3Ek__BackingField_0), (void*)L_0);
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
// System.Void Nethereum.JsonRpc.Client.RpcRequestResponseBatch/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m50CDC0B2E3864D106714198786C90FA970920D25 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0DA5A96E769895D8B5A6B11EBBC25A91DDB21F6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0DA5A96E769895D8B5A6B11EBBC25A91DDB21F6A* L_0 = (U3CU3Ec_t0DA5A96E769895D8B5A6B11EBBC25A91DDB21F6A*)il2cpp_codegen_object_new(U3CU3Ec_t0DA5A96E769895D8B5A6B11EBBC25A91DDB21F6A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mB57A43EC0EE297719283D505C1DF2EA1947B1027(L_0, NULL);
		((U3CU3Ec_t0DA5A96E769895D8B5A6B11EBBC25A91DDB21F6A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0DA5A96E769895D8B5A6B11EBBC25A91DDB21F6A_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0DA5A96E769895D8B5A6B11EBBC25A91DDB21F6A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0DA5A96E769895D8B5A6B11EBBC25A91DDB21F6A_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcRequestResponseBatch/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB57A43EC0EE297719283D505C1DF2EA1947B1027 (U3CU3Ec_t0DA5A96E769895D8B5A6B11EBBC25A91DDB21F6A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage Nethereum.JsonRpc.Client.RpcRequestResponseBatch/<>c::<GetRpcRequests>b__4_0(Nethereum.JsonRpc.Client.IRpcRequestResponseBatchItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* U3CU3Ec_U3CGetRpcRequestsU3Eb__4_0_mC54CEBF1FB6C1F483CBC9BBB3D2FBBA2CA796C91 (U3CU3Ec_t0DA5A96E769895D8B5A6B11EBBC25A91DDB21F6A* __this, RuntimeObject* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRpcRequestResponseBatchItem_tA6FD1882E648C5B880809B25C0F13205DC303B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___x0;
		NullCheck(L_0);
		RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* L_1;
		L_1 = InterfaceFuncInvoker0< RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* >::Invoke(3 /* Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage Nethereum.JsonRpc.Client.IRpcRequestResponseBatchItem::get_RpcRequestMessage() */, IRpcRequestResponseBatchItem_tA6FD1882E648C5B880809B25C0F13205DC303B4A_il2cpp_TypeInfo_var, L_0);
		return L_1;
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
// System.Void Nethereum.JsonRpc.Client.RpcRequestResponseBatch/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mC68A09CB03D148F80D224C3B83111738127CE552 (U3CU3Ec__DisplayClass5_0_t9BF30C858377308D1B6E9B593EEC74BEE9BA1925* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Nethereum.JsonRpc.Client.RpcRequestResponseBatch/<>c__DisplayClass5_0::<UpdateBatchItemResponses>b__0(Nethereum.JsonRpc.Client.IRpcRequestResponseBatchItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_0_U3CUpdateBatchItemResponsesU3Eb__0_mF3FCA1BB62D28CD26993BC5424C6083694521967 (U3CU3Ec__DisplayClass5_0_t9BF30C858377308D1B6E9B593EEC74BEE9BA1925* __this, RuntimeObject* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRpcRequestResponseBatchItem_tA6FD1882E648C5B880809B25C0F13205DC303B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___x0;
		NullCheck(L_0);
		RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* L_1;
		L_1 = InterfaceFuncInvoker0< RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* >::Invoke(3 /* Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage Nethereum.JsonRpc.Client.IRpcRequestResponseBatchItem::get_RpcRequestMessage() */, IRpcRequestResponseBatchItem_tA6FD1882E648C5B880809B25C0F13205DC303B4A_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = RpcRequestMessage_get_Id_m1DD8CB468B4170F881DF38030B7B817268EC4294_inline(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* L_4 = __this->___response_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = RpcResponseMessage_get_Id_m837AF74690299913D622D23A6158D1FFE008945F_inline(L_4, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, L_6, NULL);
		return L_7;
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
// System.Void Nethereum.JsonRpc.Client.RpcResponseException::.ctor(Nethereum.JsonRpc.Client.RpcError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseException__ctor_m95027D76C124450556D520337C475BE27487A220 (RpcResponseException_tC6370C6CDE2D7E420D34DC0EDC15FF7CDD7B062F* __this, RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3* ___rpcError0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3* L_0 = ___rpcError0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = RpcError_get_Message_m9FA16E822E99C2DDF53F6F85435A584A4E211B04_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_1, NULL);
		RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3* L_2 = ___rpcError0;
		__this->___U3CRpcErrorU3Ek__BackingField_18 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRpcErrorU3Ek__BackingField_18), (void*)L_2);
		return;
	}
}
// Nethereum.JsonRpc.Client.RpcError Nethereum.JsonRpc.Client.RpcResponseException::get_RpcError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3* RpcResponseException_get_RpcError_m2DD4B6046A2119EE619E6E957B05EF078DE69F86 (RpcResponseException_tC6370C6CDE2D7E420D34DC0EDC15FF7CDD7B062F* __this, const RuntimeMethod* method) 
{
	{
		RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3* L_0 = __this->___U3CRpcErrorU3Ek__BackingField_18;
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
// System.Void Nethereum.JsonRpc.Client.RpcResponseFormatException::.ctor(System.String,System.FormatException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseFormatException__ctor_mBC253EF5A31A4CF78A60AC8FF5E6F9D5001896A9 (RpcResponseFormatException_t76CC339E2007361A292855FF82DD3787D6D0FC53* __this, String_t* ___message0, FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* ___innerException1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_1 = ___innerException1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
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
// System.String Nethereum.JsonRpc.Client.UserAuthentication::GetBasicAuthentication(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserAuthentication_GetBasicAuthentication_mC33EB8BAA7F7D12F3E471453946AAB7D1C1023C3 (String_t* ___userName0, String_t* ___password1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB642385221D006B3B8DB45C10F626FD2A3DB7C);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___userName0;
		String_t* L_2 = ___password1;
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_2, NULL);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_3);
		V_0 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9EB642385221D006B3B8DB45C10F626FD2A3DB7C, L_6, NULL);
		return L_7;
	}
}
// Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo Nethereum.JsonRpc.Client.UserAuthentication::GetBasicAuthenticationUserInfoFromUri(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* UserAuthentication_GetBasicAuthenticationUserInfoFromUri_m154EB74BEC986E385C771BDC71FA14CF3770127A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B2_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_0 = NULL;
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___uri0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Uri_get_UserInfo_mC0189C851F71ACF0B48A462E74C7F3EB86501C8D(L_0, NULL);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		bool L_3;
		L_3 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_4 = ___uri0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Uri_get_UserInfo_mC0189C851F71ACF0B48A462E74C7F3EB86501C8D(L_4, NULL);
		String_t* L_6 = L_5;
		G_B2_0 = L_6;
		if (L_6)
		{
			G_B3_0 = L_6;
			goto IL_001f;
		}
	}
	{
		G_B4_0 = ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(NULL));
		goto IL_002f;
	}

IL_001f:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = L_7;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)58));
		NullCheck(G_B3_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9;
		L_9 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(G_B3_0, L_8, NULL);
		G_B4_0 = L_9;
	}

IL_002f:
	{
		V_0 = G_B4_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_0;
		NullCheck(L_10);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))) == ((uint32_t)2))))
		{
			goto IL_0052;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = 0;
		String_t* L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_1 = L_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = 1;
		String_t* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_2 = L_16;
		BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* L_17 = (BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B*)il2cpp_codegen_object_new(BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		BasicAuthenticationUserInfo__ctor_m27F919FFBA75A4E7BDD82A7EC24FE3E6C6612B49(L_17, NULL);
		BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* L_18 = L_17;
		String_t* L_19 = V_1;
		NullCheck(L_18);
		BasicAuthenticationUserInfo_set_UserName_m15492E7FD5F929D66FE37CE2D9C7D93F23014F45_inline(L_18, L_19, NULL);
		BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* L_20 = L_18;
		String_t* L_21 = V_2;
		NullCheck(L_20);
		BasicAuthenticationUserInfo_set_Password_m396F8F8F2071C27B3CD6F8577DF38C3FABAE423C_inline(L_20, L_21, NULL);
		return L_20;
	}

IL_0052:
	{
		return (BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B*)NULL;
	}
}
// System.Void Nethereum.JsonRpc.Client.UserAuthentication::SetBasicAuthenticationHeaderFromUri(Nethereum.JsonRpc.Client.IClientRequestHeaderSupport,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserAuthentication_SetBasicAuthenticationHeaderFromUri_m1B2D43F73D8FF7BA915A2E4005E67F046533ECA1 (RuntimeObject* ___client0, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri1, const RuntimeMethod* method) 
{
	BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* V_0 = NULL;
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___uri1;
		BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* L_1;
		L_1 = UserAuthentication_GetBasicAuthenticationUserInfoFromUri_m154EB74BEC986E385C771BDC71FA14CF3770127A(L_0, NULL);
		V_0 = L_1;
		BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_3 = ___client0;
		BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = BasicAuthenticationUserInfo_get_UserName_m2D03CDEAD0C5650B8F8A1E40246F5C74EBFFB878_inline(L_4, NULL);
		BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = BasicAuthenticationUserInfo_get_Password_m24F1B6573F3AD6F32496C53283E433AF918C0931_inline(L_6, NULL);
		UserAuthentication_SetBasicAuthenticationHeader_mBA3E275D6F48673EB418930ED28094258048644E(L_3, L_5, L_7, NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.UserAuthentication::SetBasicAuthenticationHeader(Nethereum.JsonRpc.Client.IClientRequestHeaderSupport,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserAuthentication_SetBasicAuthenticationHeader_mBA3E275D6F48673EB418930ED28094258048644E (RuntimeObject* ___client0, String_t* ___userName1, String_t* ___password2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientRequestHeaderSupport_t16C1FB46059C42FE82DBD5F0BCB378C72C771887_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ACFAF82BBAB8E0AF489CE8E5C705D5561B275DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___client0;
		NullCheck(L_0);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1;
		L_1 = InterfaceFuncInvoker0< Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* >::Invoke(0 /* System.Collections.Generic.Dictionary`2<System.String,System.String> Nethereum.JsonRpc.Client.IClientRequestHeaderSupport::get_RequestHeaders() */, IClientRequestHeaderSupport_t16C1FB46059C42FE82DBD5F0BCB378C72C771887_il2cpp_TypeInfo_var, L_0);
		String_t* L_2 = ___userName1;
		String_t* L_3 = ___password2;
		String_t* L_4;
		L_4 = UserAuthentication_GetBasicAuthentication_mC33EB8BAA7F7D12F3E471453946AAB7D1C1023C3(L_2, L_3, NULL);
		NullCheck(L_1);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_1, _stringLiteral7ACFAF82BBAB8E0AF489CE8E5C705D5561B275DF, L_4, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
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
// System.String Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo::get_UserName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BasicAuthenticationUserInfo_get_UserName_m2D03CDEAD0C5650B8F8A1E40246F5C74EBFFB878 (BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CUserNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo::set_UserName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticationUserInfo_set_UserName_m15492E7FD5F929D66FE37CE2D9C7D93F23014F45 (BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CUserNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo::get_Password()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BasicAuthenticationUserInfo_get_Password_m24F1B6573F3AD6F32496C53283E433AF918C0931 (BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPasswordU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo::set_Password(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticationUserInfo_set_Password_m396F8F8F2071C27B3CD6F8577DF38C3FABAE423C (BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CPasswordU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPasswordU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticationUserInfo__ctor_m27F919FFBA75A4E7BDD82A7EC24FE3E6C6612B49 (BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage__ctor_m628FC511BFFDDBD9AB16D532BEFF6F3FB02FE463 (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A962F7AAEC3B50EF4B2CD52A7A2C969B759A960);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RpcResponseMessage_set_JsonRpcVersion_m53185FE0AC814FA64ED321465187A6A68FB39870_inline(__this, _stringLiteral4A962F7AAEC3B50EF4B2CD52A7A2C969B759A960, NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage__ctor_mD60232597CAE1F2C07E8608B9778F08CC23079B5 (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, RuntimeObject* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A962F7AAEC3B50EF4B2CD52A7A2C969B759A960);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___id0;
		RpcResponseMessage_set_Id_m11D8E492F4F39F7705933527FDBA617B549C1AD6_inline(__this, L_0, NULL);
		RpcResponseMessage_set_JsonRpcVersion_m53185FE0AC814FA64ED321465187A6A68FB39870_inline(__this, _stringLiteral4A962F7AAEC3B50EF4B2CD52A7A2C969B759A960, NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::.ctor(System.Object,Nethereum.JsonRpc.Client.RpcMessages.RpcError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage__ctor_m731B649B8AE46CBB40EB5CE6DD2B57DA322ACC1D (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, RuntimeObject* ___id0, RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* ___error1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___id0;
		RpcResponseMessage__ctor_mD60232597CAE1F2C07E8608B9778F08CC23079B5(__this, L_0, NULL);
		RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* L_1 = ___error1;
		RpcResponseMessage_set_Error_m8691D90931A6603B2FD20817F2B20AD95BE210CB_inline(__this, L_1, NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::.ctor(System.Object,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage__ctor_m393CD68085671AB15C43E574132C4C661CB1B7B3 (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, RuntimeObject* ___id0, JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___result1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___id0;
		RpcResponseMessage__ctor_mD60232597CAE1F2C07E8608B9778F08CC23079B5(__this, L_0, NULL);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_1 = ___result1;
		RpcResponseMessage_set_Result_m2665B0381FF1D6003608428433D6ADA7C3B8703E_inline(__this, L_1, NULL);
		return;
	}
}
// System.Object Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RpcResponseMessage_get_Id_m837AF74690299913D622D23A6158D1FFE008945F (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::set_Id(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage_set_Id_m11D8E492F4F39F7705933527FDBA617B549C1AD6 (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::get_JsonRpcVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcResponseMessage_get_JsonRpcVersion_m0681569AA8EB4FF83B0A09F2BF6FE7CE49186740 (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CJsonRpcVersionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::set_JsonRpcVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage_set_JsonRpcVersion_m53185FE0AC814FA64ED321465187A6A68FB39870 (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CJsonRpcVersionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonRpcVersionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* RpcResponseMessage_get_Result_m15C0CB82C1FF185CEA41EE154EB06A4805A7F18C (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, const RuntimeMethod* method) 
{
	{
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_0 = __this->___U3CResultU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::set_Result(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage_set_Result_m2665B0381FF1D6003608428433D6ADA7C3B8703E (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___value0, const RuntimeMethod* method) 
{
	{
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_0 = ___value0;
		__this->___U3CResultU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// Nethereum.JsonRpc.Client.RpcMessages.RpcError Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* RpcResponseMessage_get_Error_m8797AF4364D700201859343603B5F3C7502EF451 (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, const RuntimeMethod* method) 
{
	{
		RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* L_0 = __this->___U3CErrorU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::set_Error(Nethereum.JsonRpc.Client.RpcMessages.RpcError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage_set_Error_m8691D90931A6603B2FD20817F2B20AD95BE210CB (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* ___value0, const RuntimeMethod* method) 
{
	{
		RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* L_0 = ___value0;
		__this->___U3CErrorU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Boolean Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::get_HasError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RpcResponseMessage_get_HasError_m6772B3DB2F0780B8219AF24D39825F0783E477FC (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, const RuntimeMethod* method) 
{
	{
		RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* L_0;
		L_0 = RpcResponseMessage_get_Error_m8797AF4364D700201859343603B5F3C7502EF451_inline(__this, NULL);
		return (bool)((!(((RuntimeObject*)(RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
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
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcStreamingResponseMessage__ctor_m36F00633A44A5CFDA6E923C34278C494E0A508B0 (RpcStreamingResponseMessage_t843001565505B95D850573335FB72CCD26035149* __this, const RuntimeMethod* method) 
{
	{
		RpcResponseMessage__ctor_m628FC511BFFDDBD9AB16D532BEFF6F3FB02FE463(__this, NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::.ctor(Nethereum.JsonRpc.Client.RpcMessages.RpcError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcStreamingResponseMessage__ctor_m99ED524FF59330ACA1F24DCA488FD458D608022F (RpcStreamingResponseMessage_t843001565505B95D850573335FB72CCD26035149* __this, RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* ___error0, const RuntimeMethod* method) 
{
	{
		RpcResponseMessage__ctor_m628FC511BFFDDBD9AB16D532BEFF6F3FB02FE463(__this, NULL);
		RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* L_0 = ___error0;
		RpcResponseMessage_set_Error_m8691D90931A6603B2FD20817F2B20AD95BE210CB_inline(__this, L_0, NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::.ctor(System.String,Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcStreamingResponseMessage__ctor_m50DA2412145FE8EE86E44AD15AC54552F662382A (RpcStreamingResponseMessage_t843001565505B95D850573335FB72CCD26035149* __this, String_t* ___method0, RpcStreamingParams_tA6178BB8E162EE9EA3E6A5F4DC3FC2C19CD01B2D* ___params1, const RuntimeMethod* method) 
{
	{
		RpcResponseMessage__ctor_m628FC511BFFDDBD9AB16D532BEFF6F3FB02FE463(__this, NULL);
		String_t* L_0 = ___method0;
		RpcStreamingResponseMessage_set_Method_mBE6B783B271163FFA4AA49F3FD75A0AC5EE21C62_inline(__this, L_0, NULL);
		RpcStreamingParams_tA6178BB8E162EE9EA3E6A5F4DC3FC2C19CD01B2D* L_1 = ___params1;
		RpcStreamingResponseMessage_set_Params_m0F92EEED82149752741C91E8D1C765DABD24E12C_inline(__this, L_1, NULL);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcStreamingResponseMessage_get_Method_mE01513B5112006516DA8B3555AD0B07BD51617E5 (RpcStreamingResponseMessage_t843001565505B95D850573335FB72CCD26035149* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMethodU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::set_Method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcStreamingResponseMessage_set_Method_mBE6B783B271163FFA4AA49F3FD75A0AC5EE21C62 (RpcStreamingResponseMessage_t843001565505B95D850573335FB72CCD26035149* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CMethodU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMethodU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::get_Params()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RpcStreamingParams_tA6178BB8E162EE9EA3E6A5F4DC3FC2C19CD01B2D* RpcStreamingResponseMessage_get_Params_mA9C26D84DE33244B15A0F06B0314F09D3A48AA08 (RpcStreamingResponseMessage_t843001565505B95D850573335FB72CCD26035149* __this, const RuntimeMethod* method) 
{
	{
		RpcStreamingParams_tA6178BB8E162EE9EA3E6A5F4DC3FC2C19CD01B2D* L_0 = __this->___U3CParamsU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::set_Params(Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcStreamingResponseMessage_set_Params_m0F92EEED82149752741C91E8D1C765DABD24E12C (RpcStreamingResponseMessage_t843001565505B95D850573335FB72CCD26035149* __this, RpcStreamingParams_tA6178BB8E162EE9EA3E6A5F4DC3FC2C19CD01B2D* ___value0, const RuntimeMethod* method) 
{
	{
		RpcStreamingParams_tA6178BB8E162EE9EA3E6A5F4DC3FC2C19CD01B2D* L_0 = ___value0;
		__this->___U3CParamsU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParamsU3Ek__BackingField_5), (void*)L_0);
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
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcStreamingParams__ctor_mBA62974901BE6940EA6CBFE5B016E19FD2991A52 (RpcStreamingParams_tA6178BB8E162EE9EA3E6A5F4DC3FC2C19CD01B2D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams::get_Subscription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcStreamingParams_get_Subscription_mEEDAEF11E121FE71EEEC838B3019CCD657D771F3 (RpcStreamingParams_tA6178BB8E162EE9EA3E6A5F4DC3FC2C19CD01B2D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSubscriptionU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams::set_Subscription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcStreamingParams_set_Subscription_mC2EE1C83C9F11F750CF998FBC0D2F39EDD2413D0 (RpcStreamingParams_tA6178BB8E162EE9EA3E6A5F4DC3FC2C19CD01B2D* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CSubscriptionU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSubscriptionU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* RpcStreamingParams_get_Result_m7EFBD5052737A7E29588225A8ACB5CEC6EF23C69 (RpcStreamingParams_tA6178BB8E162EE9EA3E6A5F4DC3FC2C19CD01B2D* __this, const RuntimeMethod* method) 
{
	{
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_0 = __this->___U3CResultU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams::set_Result(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcStreamingParams_set_Result_mA7EFF0BE4BC4DE22B1A9C27366E52D23D6D4394C (RpcStreamingParams_tA6178BB8E162EE9EA3E6A5F4DC3FC2C19CD01B2D* __this, JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___value0, const RuntimeMethod* method) 
{
	{
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_0 = ___value0;
		__this->___U3CResultU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultU3Ek__BackingField_1), (void*)L_0);
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
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestMessage__ctor_mFB0B291AA83B3E60C5FDAB4E12AF889F16EB9DDE (RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::.ctor(System.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestMessage__ctor_m57959808111B2A5E938954780CC043C2364CC7A2 (RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* __this, RuntimeObject* ___id0, String_t* ___method1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameterList2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A962F7AAEC3B50EF4B2CD52A7A2C969B759A960);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___id0;
		RpcRequestMessage_set_Id_m6CECD66C46B2CB857D76D50BDF1216D2AF877ACF_inline(__this, L_0, NULL);
		RpcRequestMessage_set_JsonRpcVersion_mED9E8EBDA6F85593B8344C5ECF93D7D98971CDD6_inline(__this, _stringLiteral4A962F7AAEC3B50EF4B2CD52A7A2C969B759A960, NULL);
		String_t* L_1 = ___method1;
		RpcRequestMessage_set_Method_mB4EF44C803872CC03626AD283CF1CEC93ACD7870_inline(__this, L_1, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___parameterList2;
		RpcRequestMessage_set_RawParameters_mBE84DD0F72BCA5470EB551DB9EF9CA437BD9157A_inline(__this, (RuntimeObject*)L_2, NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::.ctor(System.Object,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestMessage__ctor_mB412AA1BFE018919ABA5F075309BE9C704B8110A (RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* __this, RuntimeObject* ___id0, String_t* ___method1, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___parameterMap2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A962F7AAEC3B50EF4B2CD52A7A2C969B759A960);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___id0;
		RpcRequestMessage_set_Id_m6CECD66C46B2CB857D76D50BDF1216D2AF877ACF_inline(__this, L_0, NULL);
		RpcRequestMessage_set_JsonRpcVersion_mED9E8EBDA6F85593B8344C5ECF93D7D98971CDD6_inline(__this, _stringLiteral4A962F7AAEC3B50EF4B2CD52A7A2C969B759A960, NULL);
		String_t* L_1 = ___method1;
		RpcRequestMessage_set_Method_mB4EF44C803872CC03626AD283CF1CEC93ACD7870_inline(__this, L_1, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = ___parameterMap2;
		RpcRequestMessage_set_RawParameters_mBE84DD0F72BCA5470EB551DB9EF9CA437BD9157A_inline(__this, L_2, NULL);
		return;
	}
}
// System.Object Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RpcRequestMessage_get_Id_m1DD8CB468B4170F881DF38030B7B817268EC4294 (RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::set_Id(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestMessage_set_Id_m6CECD66C46B2CB857D76D50BDF1216D2AF877ACF (RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::get_JsonRpcVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcRequestMessage_get_JsonRpcVersion_mF022BB5B3F7C40A993A3B32FF3E7A7BD56A444ED (RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CJsonRpcVersionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::set_JsonRpcVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestMessage_set_JsonRpcVersion_mED9E8EBDA6F85593B8344C5ECF93D7D98971CDD6 (RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CJsonRpcVersionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonRpcVersionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcRequestMessage_get_Method_mC80080EF982AA09703A1B06C9CCDE059EEFBB3B8 (RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMethodU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::set_Method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestMessage_set_Method_mB4EF44C803872CC03626AD283CF1CEC93ACD7870 (RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CMethodU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMethodU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Object Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::get_RawParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RpcRequestMessage_get_RawParameters_mA8F3CFE7EEF2498CE8FA947E1B5CD84FCFFF1EED (RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CRawParametersU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::set_RawParameters(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestMessage_set_RawParameters_mBE84DD0F72BCA5470EB551DB9EF9CA437BD9157A (RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CRawParametersU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRawParametersU3Ek__BackingField_3), (void*)L_0);
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
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcParametersJsonConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcParametersJsonConverter_WriteJson_m83843C43C0CDC2BF281D2031A2AE3388E434FDE9 (RpcParametersJsonConverter_tB1C1C5E6BED680B4F107A261B9352899C41FC67E* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, RuntimeObject* ___value1, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer2, const RuntimeMethod* method) 
{
	{
		JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_0 = ___serializer2;
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_1 = ___writer0;
		RuntimeObject* L_2 = ___value1;
		NullCheck(L_0);
		JsonSerializer_Serialize_mE7F0CF9C2D3AD9D1B19A24F16FB151C9F63E7A2F(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Object Nethereum.JsonRpc.Client.RpcMessages.RpcParametersJsonConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RpcParametersJsonConverter_ReadJson_m4D1EA44621F6A548879BCBF5530D7B5E786C0CE3 (RpcParametersJsonConverter_tB1C1C5E6BED680B4F107A261B9352899C41FC67E* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, Type_t* ___objectType1, RuntimeObject* ___existingValue2, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JToken_ToObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_mB190A5648F7D59DBCAAB93259A62BFB9AF268F89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JToken_ToObject_TisObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_mF55A415940C9707EE96EC0423BE2E913B8858876_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_0 = ___reader0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)11))))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0041;
	}

IL_0016:
	{
	}
	try
	{// begin try (depth: 1)
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_5 = ___reader0;
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_6;
		L_6 = JObject_Load_m44DE042F4F4752D15D54259823A74B609650E9EF(L_5, NULL);
		NullCheck(L_6);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7;
		L_7 = JToken_ToObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_mB190A5648F7D59DBCAAB93259A62BFB9AF268F89(L_6, JToken_ToObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_mB190A5648F7D59DBCAAB93259A62BFB9AF268F89_RuntimeMethod_var);
		V_1 = L_7;
		goto IL_004c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0025;
		}
		throw e;
	}

CATCH_0025:
	{// begin catch(System.Exception)
		Exception_t* L_8 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50506C2EC1EE335E6927A35852C7F4E22A2A095D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RpcParametersJsonConverter_ReadJson_m4D1EA44621F6A548879BCBF5530D7B5E786C0CE3_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0031:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_9 = ___reader0;
		JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8* L_10;
		L_10 = JArray_Load_mE90CEEC0A22EBC876F7D7E239A0E096E4691C807(L_9, NULL);
		JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_11 = ___serializer3;
		NullCheck(L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12;
		L_12 = JToken_ToObject_TisObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_mF55A415940C9707EE96EC0423BE2E913B8858876(L_10, L_11, JToken_ToObject_TisObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_mF55A415940C9707EE96EC0423BE2E913B8858876_RuntimeMethod_var);
		return (RuntimeObject*)L_12;
	}

IL_003f:
	{
		return NULL;
	}

IL_0041:
	{
		Exception_t* L_13 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50506C2EC1EE335E6927A35852C7F4E22A2A095D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RpcParametersJsonConverter_ReadJson_m4D1EA44621F6A548879BCBF5530D7B5E786C0CE3_RuntimeMethod_var)));
	}

IL_004c:
	{
		RuntimeObject* L_14 = V_1;
		return L_14;
	}
}
// System.Boolean Nethereum.JsonRpc.Client.RpcMessages.RpcParametersJsonConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RpcParametersJsonConverter_CanConvert_m00D0BFD1C9AE3BCB835B51E2A124CB7FEF6F71FA (RpcParametersJsonConverter_tB1C1C5E6BED680B4F107A261B9352899C41FC67E* __this, Type_t* ___objectType0, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcParametersJsonConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcParametersJsonConverter__ctor_m6E22EBD3FC3876A6C7BDE506ED71D9D4B63587C8 (RpcParametersJsonConverter_tB1C1C5E6BED680B4F107A261B9352899C41FC67E* __this, const RuntimeMethod* method) 
{
	{
		JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB(__this, NULL);
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
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcError::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcError__ctor_mC3031A974AC84F6787E21F04C63806C29AF82C3C (RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 Nethereum.JsonRpc.Client.RpcMessages.RpcError::get_Code()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RpcError_get_Code_mEDBFDF1DB7BA77B0B6BACB052FAF3EE0EF92DC51 (RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCodeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcError::set_Code(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcError_set_Code_m0FBA5972F0136D199419D1842AA90E3908A1B344 (RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CCodeU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcError::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcError_get_Message_mD3F9B5D1772226C66F93562B3A591BB40AFF478D (RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcError::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcError_set_Message_m503A6DF66E1830F462AD73E76F3DE11309F81068 (RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcMessages.RpcError::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* RpcError_get_Data_m2CA61333DE17B2C028DEA8D45D4D5B5BA3E6F493 (RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* __this, const RuntimeMethod* method) 
{
	{
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_0 = __this->___U3CDataU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcError::set_Data(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcError_set_Data_m6190D5A3F93D69E7DEF3674C7732345BED607230 (RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* __this, JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___value0, const RuntimeMethod* method) 
{
	{
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_0 = ___value0;
		__this->___U3CDataU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* RpcResponseMessage_get_Error_m8797AF4364D700201859343603B5F3C7502EF451_inline (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, const RuntimeMethod* method) 
{
	{
		RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* L_0 = __this->___U3CErrorU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RpcError_get_Code_mEDBFDF1DB7BA77B0B6BACB052FAF3EE0EF92DC51_inline (RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCodeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RpcError_get_Message_mD3F9B5D1772226C66F93562B3A591BB40AFF478D_inline (RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* RpcError_get_Data_m2CA61333DE17B2C028DEA8D45D4D5B5BA3E6F493_inline (RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* __this, const RuntimeMethod* method) 
{
	{
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_0 = __this->___U3CDataU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RpcRequest_get_Id_m75D35C84A2A8E744A230D4E759BF81DE1B88343F_inline (RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RpcRequest_get_Method_mF886761414CD12474B7887B545141FBF42E871F1_inline (RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMethodU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* RpcRequest_get_RawParameters_mEA71A7FE64FF28F690DBD585C07FC4278F3892D8_inline (RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* __this, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___U3CRawParametersU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonProperty_set_ValueProvider_m3E52A4C43012A13A874804F1539A9F50CC54D4BA_inline (JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CValueProviderU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueProviderU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline (ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C* __this, const RuntimeMethod* method) 
{
	{
		ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_0 = __this->___m_configuredTaskAwaiter_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcError_set_Code_mE8A76A4C3FB5D7CCFC755F792BCE693041B0229B_inline (RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CCodeU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcError_set_Message_mEA804107F6145887CCA5329FCCFB1E52F8E2B5B7_inline (RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcError_set_Data_mEBA82876962EE28B2ADA15F3AFC60F447B12B8B5_inline (RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3* __this, JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___value0, const RuntimeMethod* method) 
{
	{
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_0 = ___value0;
		__this->___U3CDataU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcLogger_set_Log_mECA338BB580B360F18FA982142B4C37C8BF2256B_inline (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CLogU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLogU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RpcLogger_get_Log_m28F77D0DC56E9165B9F0B747A5046F6BF15572EB_inline (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CLogU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcLogger_set_RequestJsonMessage_m6812E3E426DEAD650D478C1FBE8F2CBC25692DE4_inline (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CRequestJsonMessageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRequestJsonMessageU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RpcLogger_get_RequestJsonMessage_mBAA1B710960B44F081AED087C62967D85B762ADF_inline (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CRequestJsonMessageU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* RpcLogger_get_ResponseMessage_mDC8DDABE1DD767682F0845C51DB08B66C1F2EC23_inline (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, const RuntimeMethod* method) 
{
	{
		RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* L_0 = __this->___U3CResponseMessageU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* RpcResponseMessage_get_Result_m15C0CB82C1FF185CEA41EE154EB06A4805A7F18C_inline (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, const RuntimeMethod* method) 
{
	{
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_0 = __this->___U3CResultU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcLogger_set_ResponseMessage_m0CF29DA40F280AACF7DA12285D86AB165FB10B31_inline (RpcLogger_t1B13EE9FE255663E0BF393CAD1F8C87EB9F60272* __this, RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* ___value0, const RuntimeMethod* method) 
{
	{
		RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* L_0 = ___value0;
		__this->___U3CResponseMessageU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResponseMessageU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcRequest_set_Id_mC70D7D2490D4E817C7986855EE99CDDC6CB64946_inline (RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcRequest_set_Method_mDEB803F569C6C8DF1755499D8DD1C000AB6A400E_inline (RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CMethodU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMethodU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcRequest_set_RawParameters_m7C225BA5CBAD47879241759AD3991D90EA4C83CF_inline (RpcRequest_tBDAEFBC54E27F3E0A98C50BC79396DE2043E4AC5* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___value0, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___value0;
		__this->___U3CRawParametersU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRawParametersU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Configuration_get_DefaultRequestId_m9F7BD95ED6B25DA17C4B23BA38E83484A7B75A8C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Configuration_t3005F5E8302BFC87F3BB89A9A42E3E2FBF58976D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Configuration_t3005F5E8302BFC87F3BB89A9A42E3E2FBF58976D_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Configuration_t3005F5E8302BFC87F3BB89A9A42E3E2FBF58976D_StaticFields*)il2cpp_codegen_static_fields_for(Configuration_t3005F5E8302BFC87F3BB89A9A42E3E2FBF58976D_il2cpp_TypeInfo_var))->___U3CDefaultRequestIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RpcRequestBuilder_get_MethodName_mC648076154384E26CAB9194E7A8F4EE9F6693DCC_inline (RpcRequestBuilder_t1EEB2A8EF2FDCBE66226A789E0B2F0B91D997CEF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMethodNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t3C943042DC58864AF24A09FD0A818698175020EA* RpcRequestResponseBatch_get_BatchItems_m35AF61605C67B1E9807D9A04E02A9CF4E7EEB747_inline (RpcRequestResponseBatch_t6AEBAEF11004CC33B6A80F4EAAD31AE318576632* __this, const RuntimeMethod* method) 
{
	{
		List_1_t3C943042DC58864AF24A09FD0A818698175020EA* L_0 = __this->___U3CBatchItemsU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RpcRequestMessage_get_Id_m1DD8CB468B4170F881DF38030B7B817268EC4294_inline (RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RpcResponseMessage_get_Id_m837AF74690299913D622D23A6158D1FFE008945F_inline (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RpcError_get_Message_m9FA16E822E99C2DDF53F6F85435A584A4E211B04_inline (RpcError_tAD1135D857DA241213F9FB00B8F3DED920AD00E3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BasicAuthenticationUserInfo_set_UserName_m15492E7FD5F929D66FE37CE2D9C7D93F23014F45_inline (BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CUserNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BasicAuthenticationUserInfo_set_Password_m396F8F8F2071C27B3CD6F8577DF38C3FABAE423C_inline (BasicAuthenticationUserInfo_t355FD20FA80E357F443E92934A5672B75359679B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CPasswordU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPasswordU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcResponseMessage_set_JsonRpcVersion_m53185FE0AC814FA64ED321465187A6A68FB39870_inline (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CJsonRpcVersionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonRpcVersionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcResponseMessage_set_Id_m11D8E492F4F39F7705933527FDBA617B549C1AD6_inline (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcResponseMessage_set_Error_m8691D90931A6603B2FD20817F2B20AD95BE210CB_inline (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* ___value0, const RuntimeMethod* method) 
{
	{
		RpcError_t437BE274DE94E98BFCB7A633112275868FB8C60C* L_0 = ___value0;
		__this->___U3CErrorU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcResponseMessage_set_Result_m2665B0381FF1D6003608428433D6ADA7C3B8703E_inline (RpcResponseMessage_tD09A9D3D8B31EBBADE93454C4F5EBE81B5781CC1* __this, JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___value0, const RuntimeMethod* method) 
{
	{
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_0 = ___value0;
		__this->___U3CResultU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcStreamingResponseMessage_set_Method_mBE6B783B271163FFA4AA49F3FD75A0AC5EE21C62_inline (RpcStreamingResponseMessage_t843001565505B95D850573335FB72CCD26035149* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CMethodU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMethodU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcStreamingResponseMessage_set_Params_m0F92EEED82149752741C91E8D1C765DABD24E12C_inline (RpcStreamingResponseMessage_t843001565505B95D850573335FB72CCD26035149* __this, RpcStreamingParams_tA6178BB8E162EE9EA3E6A5F4DC3FC2C19CD01B2D* ___value0, const RuntimeMethod* method) 
{
	{
		RpcStreamingParams_tA6178BB8E162EE9EA3E6A5F4DC3FC2C19CD01B2D* L_0 = ___value0;
		__this->___U3CParamsU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParamsU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcRequestMessage_set_Id_m6CECD66C46B2CB857D76D50BDF1216D2AF877ACF_inline (RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcRequestMessage_set_JsonRpcVersion_mED9E8EBDA6F85593B8344C5ECF93D7D98971CDD6_inline (RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CJsonRpcVersionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonRpcVersionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcRequestMessage_set_Method_mB4EF44C803872CC03626AD283CF1CEC93ACD7870_inline (RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CMethodU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMethodU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcRequestMessage_set_RawParameters_mBE84DD0F72BCA5470EB551DB9EF9CA437BD9157A_inline (RpcRequestMessage_tF7D8758AF25CE61AF84D74FA56B568939590E64D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CRawParametersU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRawParametersU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 ConfiguredTaskAwaitable_1_GetAwaiter_m10364C3B0A904803E890B2D75674665F986BDAB2_gshared_inline (ConfiguredTaskAwaitable_1_t97C129EA63015240E6F9E767F4A120CC9122FEF8* __this, const RuntimeMethod* method) 
{
	{
		ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 L_0 = (ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2)__this->___m_configuredTaskAwaiter_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_4_Invoke_m9BAD5BBD30933FE9049B012CD3316FB2F24F3B8A_gshared_inline (Func_4_t5BEC908E1F7894319A22CA9728A897FA95522DAD* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_3_Invoke_m31D9E56C7CAE538FD8564F34CABA2C2A537ED393_gshared_inline (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value_0;
		return L_0;
	}
}
