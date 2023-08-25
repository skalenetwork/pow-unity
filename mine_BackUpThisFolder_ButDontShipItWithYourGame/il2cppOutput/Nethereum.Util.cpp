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
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.String,System.String>
struct Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_tEE97FB3EBFE8765D0E2FC164B95E82BA5D0EAE86;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t606011D801075A525E02DDE2533126EA96831FCF;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<System.Byte>
struct IList_1_t958E1E27F44A1E57CF73D43A68F1EF1A1E07FE0C;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// Nethereum.Util.AddressEqualityComparer
struct AddressEqualityComparer_tA2E7C0F1CECD02DA14B73949075AB3B8CE7CF801;
// Nethereum.Util.AddressUtil
struct AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// Nethereum.Util.Keccak.Arrays
struct Arrays_tE7266439ED9AC6DB4FA37BE0888F37664B751A6C;
// System.Numerics.BigInteger
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F;
// Nethereum.Util.ByteArrayComparer
struct ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9;
// Nethereum.Util.ByteListComparer
struct ByteListComparer_tD219640F05BCD0EEDC1E33424BB5DFC0C636BB83;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// Nethereum.Util.ByteArrayConvertors.ChartByteArrayConvertor
struct ChartByteArrayConvertor_t358D8304AC7DB7FA93B48211B266B104C2BC2DB4;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.CultureAwareComparer
struct CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
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
// Nethereum.Util.ByteArrayConvertors.HexToByteArrayConvertor
struct HexToByteArrayConvertor_t7F22F6A58491BFB696A9339A15BBE68FF5278007;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// Nethereum.Util.Keccak.KeccakDigest
struct KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.OrdinalCaseSensitiveComparer
struct OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A;
// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0;
// Nethereum.Util.Keccak.Pack
struct Pack_tB4EC70868FBBA5614C424646873E55E2EE4C84D2;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// Nethereum.Util.Sha3Keccack
struct Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6;
// Nethereum.Util.HashProviders.Sha3KeccackHashProvider
struct Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Nethereum.Util.ByteArrayConvertors.StringByteArrayConvertor
struct StringByteArrayConvertor_t6D4490F4AD978740D3C72C91E11A685A86A077DD;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// Nethereum.Util.UniqueAddressList
struct UniqueAddressList_t6D7BE9C58FA7125570B39AA0F0DD4AECD5AEF856;
// Nethereum.Util.UniqueTransactionHashList
struct UniqueTransactionHashList_tB6EDB337FFF48F8E8916B67563E5A3939388BDD6;
// Nethereum.Util.UnitConversion
struct UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Nethereum.Util.WaitStrategy
struct WaitStrategy_t198F1B8F587CD88CAC0AF9F75F92A075C5169061;
// Nethereum.Util.ByteUtil/<MergeToEnum>d__5
struct U3CMergeToEnumU3Ed__5_t0D0950728046AC81FC5102F883967738D5D99CFF;
// Nethereum.Util.Sha3Keccack/<>c
struct U3CU3Ec_tB6A7FC626DEC633A07B9755025D8C41EC65CF2AC;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* AddressEqualityComparer_tA2E7C0F1CECD02DA14B73949075AB3B8CE7CF801_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteListComparer_tD219640F05BCD0EEDC1E33424BB5DFC0C636BB83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteUtil_t3970634EEB0967A65636D41F893596448593FE44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t2F3F43301A2C4258285E66980237B7AE65F4CD7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t958E1E27F44A1E57CF73D43A68F1EF1A1E07FE0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NumberFormatting_t2855EBACAE6A9C452DF9C7BE20DECE31A0A684BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMergeToEnumU3Ed__5_t0D0950728046AC81FC5102F883967738D5D99CFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB6A7FC626DEC633A07B9755025D8C41EC65CF2AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitStrategy_t198F1B8F587CD88CAC0AF9F75F92A075C5169061_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t3B4686B7A048D2591E8CB02C0B6586B8112AFC75____8ACC0527215D58BB38BEB1E9BF85D16BB40F1F003901B05B87B735B444A65A93_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0ABFB20F7CF83967C5F8BFF72CA9763D6E250813;
IL2CPP_EXTERN_C String_t* _stringLiteral1649B6362D7BFE5B47AD5B0E3FF1C23199A234E7;
IL2CPP_EXTERN_C String_t* _stringLiteral2560015662CF4CE1FBB0C239EE33C0A6BD267C34;
IL2CPP_EXTERN_C String_t* _stringLiteral270800C8217B39CD8DD46ECDEE95E004E4567FFF;
IL2CPP_EXTERN_C String_t* _stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58;
IL2CPP_EXTERN_C String_t* _stringLiteral316F631FB9C4C420C2E74898E8868021F9B7C1EA;
IL2CPP_EXTERN_C String_t* _stringLiteral323B50F239A0CEA841D1CDB6FD827C73F3DA7D58;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral3C7A831A0474AE58A1A511C0AE679EA6ACAF323B;
IL2CPP_EXTERN_C String_t* _stringLiteral3C9F9624DF9F1C2E14A0850FDC6F9D35C3C2A698;
IL2CPP_EXTERN_C String_t* _stringLiteral3F415B51C76CFB7B00EE1C2F2DA3E8CFA2269CCA;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4BCF4B50E72B7CCD6AD748E8D2FDCADBF49961A8;
IL2CPP_EXTERN_C String_t* _stringLiteral53CE3854A381FE03C65D949A33C2E1D7DBA02CB4;
IL2CPP_EXTERN_C String_t* _stringLiteral56C9B652878395853110609B8408AB9C094B096A;
IL2CPP_EXTERN_C String_t* _stringLiteral571B8015AB310D000C937E6BB40186AA60B9C5C1;
IL2CPP_EXTERN_C String_t* _stringLiteral586421FA97056FDB29C92DF11FC45E50039AF58C;
IL2CPP_EXTERN_C String_t* _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89;
IL2CPP_EXTERN_C String_t* _stringLiteral5C6ACA12AB5C4ED3715E2E25B85413958933E3B9;
IL2CPP_EXTERN_C String_t* _stringLiteral5DF190B25B11B1AAEE1A438E606FA8F0FF446A82;
IL2CPP_EXTERN_C String_t* _stringLiteral61E72265B771E2ABEC223E49644B77AF40CFA993;
IL2CPP_EXTERN_C String_t* _stringLiteral6926C85E0B22B5E154849BA94F95B911D0F467AB;
IL2CPP_EXTERN_C String_t* _stringLiteral6B6E99AB68D2834E2BA881EA585508AE3BB8972B;
IL2CPP_EXTERN_C String_t* _stringLiteral6D8BB6EE0098845B9D74C7BA4668E0F9E330ACC0;
IL2CPP_EXTERN_C String_t* _stringLiteral717DA9E2386BEADCFFB33AE09B063FCD2EE1A657;
IL2CPP_EXTERN_C String_t* _stringLiteral71A4D286D674B387825473A6BF68FA0177EAEC37;
IL2CPP_EXTERN_C String_t* _stringLiteral7405068459969E65A509A575D3072180AB440CC4;
IL2CPP_EXTERN_C String_t* _stringLiteral75024B19E3B0D929FB55D9F58FB9F2BD92238C9A;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral8739AB73E27D444291AAFE563DFBA8832AD5D722;
IL2CPP_EXTERN_C String_t* _stringLiteral88ABBDEE731F56D989C298F52912B7B0D27D0D84;
IL2CPP_EXTERN_C String_t* _stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057;
IL2CPP_EXTERN_C String_t* _stringLiteral8C92FC7F604169F6F4A63083970753C014EAD040;
IL2CPP_EXTERN_C String_t* _stringLiteral91E1282FC8690BBC1CB33A6803C9119053A51DC8;
IL2CPP_EXTERN_C String_t* _stringLiteralA597E6496EE5F8DA5EADFABF86D203733ED956DE;
IL2CPP_EXTERN_C String_t* _stringLiteralA5D5402405EA46FA1359EF38E2451145DB09D1C5;
IL2CPP_EXTERN_C String_t* _stringLiteralA8E3A14BFED9F7D70EFB2C59F8DBAC2A52180062;
IL2CPP_EXTERN_C String_t* _stringLiteralACAF4A98A03BA8AD4CA372A00B3EB1821B13D668;
IL2CPP_EXTERN_C String_t* _stringLiteralACEB01644E7A4BCEFA0B7FD13C917DA74C936C31;
IL2CPP_EXTERN_C String_t* _stringLiteralBAEC6E601313282A8AE2E7B3C417AEA2E90DCA0F;
IL2CPP_EXTERN_C String_t* _stringLiteralBB012E8AECF9960218AEA1A96AFE93090316B3B1;
IL2CPP_EXTERN_C String_t* _stringLiteralBB2E8EBB9651B779E1B875B8AE46782B488FCAC0;
IL2CPP_EXTERN_C String_t* _stringLiteralC16CB3EB65A1DCE6FA520BCB808F4F0EA90A7826;
IL2CPP_EXTERN_C String_t* _stringLiteralC4BDB973AE821DEA70F0495195EF17C3A498E945;
IL2CPP_EXTERN_C String_t* _stringLiteralC4C4969CA68A212C57B6FC1FBAE5AEBACB547E07;
IL2CPP_EXTERN_C String_t* _stringLiteralCF15E6AB986C6E1A6B9D665510A803EB2245E941;
IL2CPP_EXTERN_C String_t* _stringLiteralCF5B5845107C1302EDC696A0C7AAAC4FA03151F4;
IL2CPP_EXTERN_C String_t* _stringLiteralD039C76F6BA3380896DFB0DA8F26D45B1448F44F;
IL2CPP_EXTERN_C String_t* _stringLiteralD0B955404E183709B5C731BFCF31085857DE0EC3;
IL2CPP_EXTERN_C String_t* _stringLiteralD25163422D668F498B77BBE8BE47AAF95218DD82;
IL2CPP_EXTERN_C String_t* _stringLiteralD8EBAE0CA29F1E4B2E6A074E9AAC922CD634B94F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC400987E5EE16841C02DE14AE43EB578A7FEAC0;
IL2CPP_EXTERN_C String_t* _stringLiteralDD1E96489DC4F60E6AB0135A5F5CDE79341D8BF7;
IL2CPP_EXTERN_C String_t* _stringLiteralDEFDD99707701302B4F3A4CE68BC9EB2926D7283;
IL2CPP_EXTERN_C String_t* _stringLiteralDF8AABD446632C7DFD26E667306D08F2425EFC9A;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralE9C4E5E72379B27F0B701202AF0659F326997B6A;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF8E3475A2DDD8A338B5687E45B80510D26142DC9;
IL2CPP_EXTERN_C String_t* _stringLiteralFD451BA3258011EFA8F90EAEAE0E7B8F26D35641;
IL2CPP_EXTERN_C String_t* _stringLiteralFE5D742782B0E080651D1931155F6F5C4E984427;
IL2CPP_EXTERN_C String_t* _stringLiteralFEDCF3D670BF4512049C2F6AC15B2EEA5E718BFD;
IL2CPP_EXTERN_C const RuntimeMethod* Arrays_GetLength_mA8ADF4E7AABF26BE77324B1126B193F20F257F7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigDecimal_CompareTo_mB7F7A18C578027070FA28D808D1F7872AB0C6AD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigDecimal_Pow_m0ADA04CE4B1CC1D2108F260BD4B6FAC904F00ACB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigDecimal_RoundAwayFromZero_mA8F2271B38937526F9A1B3F93A295DCEE144CE23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigDecimal_ToString_m5C537AB24B4D895F3CE282635AE9A091BC3CAE63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigDecimal_Truncate_m38AC1DA34FA00AEC384E97881C4F9E9F409E09A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigIntegerExtensions_ParseInvariant_m9913A4AA2A32152C5B63476ADC1777EF1B92C97B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ContractUtils_CalculateContractAddress_m003B9A35D016BBDED5DE9545F354E6E1BD4350D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ContractUtils_CalculateCreate2AddressMinimalProxy_m92C229C984AEA3600A1A10A2F7572748BBD5196A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ContractUtils_CalculateCreate2AddressUsingByteCodeHash_m2A41573392468D81A77F0AD9E3677CC8CC9C7D21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7707D8180AC8224E05B10E427AFF8CE903B0F54C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Last_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCFD5BA313EA72B18F61BD8C68803034882461219_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Take_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m0919EA050297104B260DB970151A823245F74A6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FormattingExtensions_ToStringInvariant_TisBigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_m629EE20DFFBB69DC3B851E8C4786130365788A70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FormattingExtensions_ToStringInvariant_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_mA1F214B0E0D2E638D2E6FCAC76B2CE98565C5833_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m795438439D8E973F4069A442EFA458942BCD5B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeccakDigest_AbsorbBits_m224802053047917627C0151A686430B1F445F9F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeccakDigest_Absorb_mF7E941904EB3A23A9D68AC98DE1E22977E5FE23D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeccakDigest_InitSponge_m7C76E7E9001574C85C7E0D7398A713CE81289206_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeccakDigest_Init_m663D38CA3A3B1C5E3370852A9B7D1EA7960CE421_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Reverse_mF9816C41791212F0EE4E67A13E5AC3893BD600EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NumberFormatting_FormatFixed_mE55D82EA0BCBD7C64FD0F56FA2DBB6BC20F67CE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMergeToEnumU3Ed__5_System_Collections_IEnumerator_Reset_m93FA9906D59128183D213A894599C4E549F47926_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCalculateHashFromHexU3Eb__4_0_m3D3B97835F0B45953618636946CB39EBA06F0397_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnitConversion_GetEthUnitValue_mFB970EA215080A5EA80B60128B404EA8AC9A1CE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnitConversion_TryValidateUnitValue_m41B23D570E88D312B8D9C9E02FAFF1895ABD4600_RuntimeMethod_var;
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F;;
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com;
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com;;
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke;
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke;;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t47F7B49FF1CB583D7785B4450CE6B986DB1C5066 
{
};

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_emptyArray_5;
};

// Nethereum.Util.AddressEqualityComparer
struct AddressEqualityComparer_tA2E7C0F1CECD02DA14B73949075AB3B8CE7CF801  : public RuntimeObject
{
};

// Nethereum.Util.AddressExtensions
struct AddressExtensions_t67DD8C8B3D9D0ADEE8F53205A33505D4E21759C4  : public RuntimeObject
{
};

// Nethereum.Util.AddressUtil
struct AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A  : public RuntimeObject
{
};

struct AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A_StaticFields
{
	// Nethereum.Util.AddressUtil Nethereum.Util.AddressUtil::_current
	AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* ____current_0;
};
struct Il2CppArrayBounds;

// Nethereum.Util.Keccak.Arrays
struct Arrays_tE7266439ED9AC6DB4FA37BE0888F37664B751A6C  : public RuntimeObject
{
};

// Nethereum.Util.BigDecimalFormatter
struct BigDecimalFormatter_t2AE6F1435A49F179C3F6DEACD41ABB86CB61A816  : public RuntimeObject
{
};

// Nethereum.Util.BigIntegerExtensions
struct BigIntegerExtensions_tB539626E9BFBB1C48A4C76D3E675629A0D913D10  : public RuntimeObject
{
};

// Nethereum.Util.ByteArrayComparer
struct ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9  : public RuntimeObject
{
};

struct ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9_StaticFields
{
	// Nethereum.Util.ByteArrayComparer Nethereum.Util.ByteArrayComparer::Current
	ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9* ___Current_0;
};

// Nethereum.Util.ByteListComparer
struct ByteListComparer_tD219640F05BCD0EEDC1E33424BB5DFC0C636BB83  : public RuntimeObject
{
};

struct ByteListComparer_tD219640F05BCD0EEDC1E33424BB5DFC0C636BB83_StaticFields
{
	// Nethereum.Util.ByteListComparer Nethereum.Util.ByteListComparer::Current
	ByteListComparer_tD219640F05BCD0EEDC1E33424BB5DFC0C636BB83* ___Current_0;
};

// Nethereum.Util.ByteUtil
struct ByteUtil_t3970634EEB0967A65636D41F893596448593FE44  : public RuntimeObject
{
};

struct ByteUtil_t3970634EEB0967A65636D41F893596448593FE44_StaticFields
{
	// System.Byte[] Nethereum.Util.ByteUtil::EMPTY_BYTE_ARRAY
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___EMPTY_BYTE_ARRAY_0;
	// System.Byte[] Nethereum.Util.ByteUtil::ZERO_BYTE_ARRAY
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ZERO_BYTE_ARRAY_1;
};

// Nethereum.Util.ByteArrayConvertors.ChartByteArrayConvertor
struct ChartByteArrayConvertor_t358D8304AC7DB7FA93B48211B266B104C2BC2DB4  : public RuntimeObject
{
};

// Nethereum.Util.ContractUtils
struct ContractUtils_t2217644696CD535AD96B9EF74232BDA485E33B7F  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
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

// Nethereum.Util.EnumerableExtensions
struct EnumerableExtensions_tEA5961560D96E3E0CF14D7D1F241A5A9D2032A69  : public RuntimeObject
{
};

// Nethereum.Util.FormattingExtensions
struct FormattingExtensions_t00AA167012548D04B6C3E362648B045603E388A1  : public RuntimeObject
{
};

// Nethereum.Util.ByteArrayConvertors.HexToByteArrayConvertor
struct HexToByteArrayConvertor_t7F22F6A58491BFB696A9339A15BBE68FF5278007  : public RuntimeObject
{
};

// Nethereum.Util.Keccak.KeccakDigest
struct KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7  : public RuntimeObject
{
	// System.UInt64[] Nethereum.Util.Keccak.KeccakDigest::state
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___state_3;
	// System.Byte[] Nethereum.Util.Keccak.KeccakDigest::dataQueue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dataQueue_4;
	// System.Int32 Nethereum.Util.Keccak.KeccakDigest::rate
	int32_t ___rate_5;
	// System.Int32 Nethereum.Util.Keccak.KeccakDigest::bitsInQueue
	int32_t ___bitsInQueue_6;
	// System.Int32 Nethereum.Util.Keccak.KeccakDigest::fixedOutputLength
	int32_t ___fixedOutputLength_7;
	// System.Boolean Nethereum.Util.Keccak.KeccakDigest::squeezing
	bool ___squeezing_8;
	// System.Int32 Nethereum.Util.Keccak.KeccakDigest::bitsAvailableForSqueezing
	int32_t ___bitsAvailableForSqueezing_9;
};

struct KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_StaticFields
{
	// System.UInt64[] Nethereum.Util.Keccak.KeccakDigest::KeccakRoundConstants
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___KeccakRoundConstants_0;
	// System.Int32[] Nethereum.Util.Keccak.KeccakDigest::KeccakRhoOffsets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___KeccakRhoOffsets_1;
	// System.Int32 Nethereum.Util.Keccak.KeccakDigest::STATE_LENGTH
	int32_t ___STATE_LENGTH_2;
};

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;
};

struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo_0;
};

// Nethereum.Util.NumberFormatting
struct NumberFormatting_t2855EBACAE6A9C452DF9C7BE20DECE31A0A684BF  : public RuntimeObject
{
};

struct NumberFormatting_t2855EBACAE6A9C452DF9C7BE20DECE31A0A684BF_StaticFields
{
	// System.String[] Nethereum.Util.NumberFormatting::s_posCurrencyFormats
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_posCurrencyFormats_0;
	// System.String[] Nethereum.Util.NumberFormatting::s_negCurrencyFormats
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_negCurrencyFormats_1;
};

// Nethereum.Util.Keccak.Pack
struct Pack_tB4EC70868FBBA5614C424646873E55E2EE4C84D2  : public RuntimeObject
{
};

// Nethereum.Util.PredicateBuilder
struct PredicateBuilder_t6989DE54C01B901C790849AB25E94F254F9952C5  : public RuntimeObject
{
};

// Nethereum.Util.Sha3Keccack
struct Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6  : public RuntimeObject
{
};

struct Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_StaticFields
{
	// Nethereum.Util.Sha3Keccack Nethereum.Util.Sha3Keccack::<Current>k__BackingField
	Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* ___U3CCurrentU3Ek__BackingField_0;
};

// Nethereum.Util.HashProviders.Sha3KeccackHashProvider
struct Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5  : public RuntimeObject
{
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

// Nethereum.Util.ByteArrayConvertors.StringByteArrayConvertor
struct StringByteArrayConvertor_t6D4490F4AD978740D3C72C91E11A685A86A077DD  : public RuntimeObject
{
};

// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06  : public RuntimeObject
{
};

struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields
{
	// System.CultureAwareComparer System.StringComparer::s_invariantCulture
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCulture_0;
	// System.CultureAwareComparer System.StringComparer::s_invariantCultureIgnoreCase
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCultureIgnoreCase_1;
	// System.OrdinalCaseSensitiveComparer System.StringComparer::s_ordinal
	OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A* ___s_ordinal_2;
	// System.OrdinalIgnoreCaseComparer System.StringComparer::s_ordinalIgnoreCase
	OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* ___s_ordinalIgnoreCase_3;
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

// Nethereum.Util.TransactionUtils
struct TransactionUtils_t81E86A916F0B3E41D7F6AD15D462EA72380D48E0  : public RuntimeObject
{
};

// Nethereum.Util.UnitConversion
struct UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823  : public RuntimeObject
{
};

struct UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823_StaticFields
{
	// Nethereum.Util.UnitConversion Nethereum.Util.UnitConversion::_convert
	UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* ____convert_0;
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

// Nethereum.Util.WaitStrategy
struct WaitStrategy_t198F1B8F587CD88CAC0AF9F75F92A075C5169061  : public RuntimeObject
{
};

struct WaitStrategy_t198F1B8F587CD88CAC0AF9F75F92A075C5169061_StaticFields
{
	// System.Int32[] Nethereum.Util.WaitStrategy::WaitIntervals
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___WaitIntervals_0;
};

// Nethereum.Util.ByteUtil/<MergeToEnum>d__5
struct U3CMergeToEnumU3Ed__5_t0D0950728046AC81FC5102F883967738D5D99CFF  : public RuntimeObject
{
	// System.Int32 Nethereum.Util.ByteUtil/<MergeToEnum>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Byte Nethereum.Util.ByteUtil/<MergeToEnum>d__5::<>2__current
	uint8_t ___U3CU3E2__current_1;
	// System.Int32 Nethereum.Util.ByteUtil/<MergeToEnum>d__5::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Byte[][] Nethereum.Util.ByteUtil/<MergeToEnum>d__5::arrays
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___arrays_3;
	// System.Byte[][] Nethereum.Util.ByteUtil/<MergeToEnum>d__5::<>3__arrays
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___U3CU3E3__arrays_4;
	// System.Byte[][] Nethereum.Util.ByteUtil/<MergeToEnum>d__5::<>7__wrap1
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___U3CU3E7__wrap1_5;
	// System.Int32 Nethereum.Util.ByteUtil/<MergeToEnum>d__5::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_6;
	// System.Byte[] Nethereum.Util.ByteUtil/<MergeToEnum>d__5::<>7__wrap3
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CU3E7__wrap3_7;
	// System.Int32 Nethereum.Util.ByteUtil/<MergeToEnum>d__5::<>7__wrap4
	int32_t ___U3CU3E7__wrap4_8;
};

// Nethereum.Util.Sha3Keccack/<>c
struct U3CU3Ec_tB6A7FC626DEC633A07B9755025D8C41EC65CF2AC  : public RuntimeObject
{
};

struct U3CU3Ec_tB6A7FC626DEC633A07B9755025D8C41EC65CF2AC_StaticFields
{
	// Nethereum.Util.Sha3Keccack/<>c Nethereum.Util.Sha3Keccack/<>c::<>9
	U3CU3Ec_tB6A7FC626DEC633A07B9755025D8C41EC65CF2AC* ___U3CU3E9_0;
	// System.Func`2<System.String,System.String> Nethereum.Util.Sha3Keccack/<>c::<>9__4_0
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* ___U3CU3E9__4_0_1;
};

// System.Numerics.BigInteger
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F 
{
	// System.Int32 System.Numerics.BigInteger::_sign
	int32_t ____sign_0;
	// System.UInt32[] System.Numerics.BigInteger::_bits
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____bits_1;
};

struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields
{
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnMinInt
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnMinInt_2;
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnOneInt
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnOneInt_3;
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnZeroInt
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnZeroInt_4;
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnMinusOneInt
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnMinusOneInt_5;
	// System.Byte[] System.Numerics.BigInteger::s_success
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_success_6;
};
// Native definition for P/Invoke marshalling of System.Numerics.BigInteger
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke
{
	int32_t ____sign_0;
	Il2CppSafeArray/*NONE*/* ____bits_1;
};
// Native definition for COM marshalling of System.Numerics.BigInteger
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com
{
	int32_t ____sign_0;
	Il2CppSafeArray/*NONE*/* ____bits_1;
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

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
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

// System.OrdinalComparer
struct OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170  : public StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06
{
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// Nethereum.Util.UniqueAddressList
struct UniqueAddressList_t6D7BE9C58FA7125570B39AA0F0DD4AECD5AEF856  : public HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178
{
};

// Nethereum.Util.UniqueTransactionHashList
struct UniqueTransactionHashList_tB6EDB337FFF48F8E8916B67563E5A3939388BDD6  : public HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178
{
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_t45CA9C1914CFC5DA0B49E9BD4408BA7318CFB083 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t45CA9C1914CFC5DA0B49E9BD4408BA7318CFB083__padding[20];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t3B4686B7A048D2591E8CB02C0B6586B8112AFC75  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t3B4686B7A048D2591E8CB02C0B6586B8112AFC75_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::8ACC0527215D58BB38BEB1E9BF85D16BB40F1F003901B05B87B735B444A65A93
	__StaticArrayInitTypeSizeU3D20_t45CA9C1914CFC5DA0B49E9BD4408BA7318CFB083 ___8ACC0527215D58BB38BEB1E9BF85D16BB40F1F003901B05B87B735B444A65A93_0;
};

// Nethereum.Util.BigDecimal
struct BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A 
{
	// System.Numerics.BigInteger Nethereum.Util.BigDecimal::<Mantissa>k__BackingField
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___U3CMantissaU3Ek__BackingField_1;
	// System.Int32 Nethereum.Util.BigDecimal::<Exponent>k__BackingField
	int32_t ___U3CExponentU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of Nethereum.Util.BigDecimal
struct BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A_marshaled_pinvoke
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke ___U3CMantissaU3Ek__BackingField_1;
	int32_t ___U3CExponentU3Ek__BackingField_2;
};
// Native definition for COM marshalling of Nethereum.Util.BigDecimal
struct BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A_marshaled_com
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com ___U3CMantissaU3Ek__BackingField_1;
	int32_t ___U3CExponentU3Ek__BackingField_2;
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

// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0  : public OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170
{
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
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

// System.Func`2<System.String,System.String>
struct Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
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
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA  : public RuntimeArray
{
	ALIGN_FIELD (8) ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* m_Items[1];

	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
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
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
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
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
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
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};

IL2CPP_EXTERN_C void BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke(const BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F& unmarshaled, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke_back(const BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke& marshaled, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F& unmarshaled);
IL2CPP_EXTERN_C void BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke_cleanup(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_com(const BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F& unmarshaled, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com& marshaled);
IL2CPP_EXTERN_C void BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_com_back(const BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com& marshaled, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F& unmarshaled);
IL2CPP_EXTERN_C void BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_com_cleanup(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com& marshaled);

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mAB3B1F14E6741A640E2FA9AE77D62C363B6FBA10_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Skip<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_gshared (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::Reverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mF9816C41791212F0EE4E67A13E5AC3893BD600EF_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Take_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m0919EA050297104B260DB970151A823245F74A6D_gshared (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7707D8180AC8224E05B10E427AFF8CE903B0F54C_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.String Nethereum.Util.FormattingExtensions::ToStringInvariant<System.Numerics.BigInteger>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FormattingExtensions_ToStringInvariant_TisBigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_m629EE20DFFBB69DC3B851E8C4786130365788A70_gshared (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___formattable0, const RuntimeMethod* method) ;
// System.String Nethereum.Util.FormattingExtensions::ToStringInvariant<System.Decimal>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FormattingExtensions_ToStringInvariant_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_mA1F214B0E0D2E638D2E6FCAC76B2CE98565C5833_gshared (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___formattable0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Last<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Last_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCFD5BA313EA72B18F61BD8C68803034882461219_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::AddWithResize(T)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m735EBD7363A06760DE25BACA0FC47F76CA0DEEAB_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___item0, const RuntimeMethod* method) ;

// Nethereum.Util.AddressUtil Nethereum.Util.AddressUtil::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* AddressUtil_get_Current_m5594A27CDFF5841FA041C5A99A25BA9F1CFFB9D4 (const RuntimeMethod* method) ;
// System.String Nethereum.Util.AddressUtil::ConvertToChecksumAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AddressUtil_ConvertToChecksumAddress_mEAEAE7FD8125E4A821AFBBD02303AB372C721C1E (AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* __this, String_t* ___address0, const RuntimeMethod* method) ;
// System.String Nethereum.Util.AddressUtil::ConvertToChecksumAddress(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AddressUtil_ConvertToChecksumAddress_m6AF0599CD17C904B7ABA05E555EB82C6CCECF863 (AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___address0, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Util.AddressUtil::IsChecksumAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressUtil_IsChecksumAddress_mAFB8250D7C23483559A79CB4BF9664FD468C8AB3 (AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* __this, String_t* ___address0, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Util.AddressUtil::IsValidEthereumAddressHexFormat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressUtil_IsValidEthereumAddressHexFormat_m5912B7AC620F987884B5041E1BBF5C069DAE9F2B (AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* __this, String_t* ___address0, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Util.AddressUtil::IsValidAddressLength(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressUtil_IsValidAddressLength_mBB59639C0D05894CD86F0D609749A0D8C073857D (AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* __this, String_t* ___address0, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Util.AddressUtil::AreAddressesTheSame(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressUtil_AreAddressesTheSame_m8A2CBB12085D5E51C38D78340818F908AC4E9583 (AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* __this, String_t* ___address10, String_t* ___address21, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Util.AddressUtil::IsAnEmptyAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressUtil_IsAnEmptyAddress_m221DABCC86731D4BE8A35F0117DDBD6A444CDEF5 (AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* __this, String_t* ___address0, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Util.AddressUtil::IsNotAnEmptyAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressUtil_IsNotAnEmptyAddress_m29BE761FD994B89DEEBBB3A68094E78639DA091C (AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* __this, String_t* ___address0, const RuntimeMethod* method) ;
// System.String Nethereum.Util.AddressUtil::AddressValueOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AddressUtil_AddressValueOrEmpty_m52378E4D5565D31F5730C6A4F85C087F47BA7794 (AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* __this, String_t* ___address0, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Util.AddressUtil::IsEmptyOrEqualsAddress(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressUtil_IsEmptyOrEqualsAddress_m1D0433ADA035C7FF0A90BA349245DF1A03894E43 (AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* __this, String_t* ___address10, String_t* ___candidate1, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.AddressEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressEqualityComparer__ctor_mBA346BF0E820582D6DCF4C36D0152F86079AB6CD (AddressEqualityComparer_tA2E7C0F1CECD02DA14B73949075AB3B8CE7CF801* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
inline void HashSet_1__ctor_m795438439D8E973F4069A442EFA458942BCD5B3F (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mAB3B1F14E6741A640E2FA9AE77D62C363B6FBA10_gshared)(__this, ___comparer0, method);
}
// System.Boolean Nethereum.Util.AddressExtensions::IsTheSameAddress(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressExtensions_IsTheSameAddress_m5366CF742A45B864A6D59F8040E77A7927A4B831 (String_t* ___address0, String_t* ___otherAddress1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.AddressUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressUtil__ctor_mFBD8B7B116001BE2851469A24B3C41095B7253B1 (AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Skip<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline RuntimeObject* Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8 (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_gshared)(___source0, ___count1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_gshared)(___source0, method);
}
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::ToHex(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, bool ___prefix1, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Util.AddressExtensions::IsAnEmptyAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressExtensions_IsAnEmptyAddress_m102147942812A727BC06E9CCF6DE23D34D43FBB1 (String_t* ___address0, const RuntimeMethod* method) ;
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::EnsureHexPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_EnsureHexPrefix_m19AD0DDEC70CED3CA428D91D7B270C5B18E09F7B (String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2 (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B (String_t* ___a0, String_t* ___b1, int32_t ___comparisonType2, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::RemoveHexPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_RemoveHexPrefix_m710ADEC9AA9C65D6E4A6E7E4F15B31862C627C15 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Sha3Keccack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha3Keccack__ctor_m1A1B72B31D347C8FEEAB51607616A6C4992DE7D0 (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* __this, const RuntimeMethod* method) ;
// System.String Nethereum.Util.Sha3Keccack::CalculateHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Sha3Keccack_CalculateHash_mBF873E85E6ECCD02DAA0C4582456294476D50752 (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String,System.Globalization.NumberStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mF336325913DF125A6F8F05F2909E3AFB0D73830E (String_t* ___s0, int32_t ___style1, const RuntimeMethod* method) ;
// System.String System.String::ToUpper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49 (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::PadLeft(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F (String_t* __this, int32_t ___totalWidth0, Il2CppChar ___paddingChar1, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::HasHexPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HexByteConvertorExtensions_HasHexPrefix_mD4C1F56C944A21EC76059EE2C45256675BED7B21 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::IsHex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HexByteConvertorExtensions_IsHex_mEA3912EB494419C6BE913E2CE98C05E8464378FF (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Numerics.BigInteger Nethereum.Util.BigDecimal::get_Mantissa()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, const RuntimeMethod* method) ;
// System.Int32 Nethereum.Util.BigDecimal::get_Exponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.BigDecimal::.ctor(System.Numerics.BigInteger,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigDecimal__ctor_m2C570A2032C8AC61D694C93DF30C8EFF5E660FC2 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___mantissa0, int32_t ___exponent1, bool ___alwaysTruncate2, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.BigDecimal::.ctor(Nethereum.Util.BigDecimal,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigDecimal__ctor_m93B854CACE48161D2F63923BE5DC30F22CF55B7F (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___bigDecimal0, bool ___alwaysTruncate1, const RuntimeMethod* method) ;
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Implicit(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_op_Implicit_m8C904BD712C4301F9272587002B2163D5B9D8584 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.BigDecimal::.ctor(System.Decimal,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigDecimal__ctor_mE224345E3C5A3EC92B8268D22C107252D53B8761 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, bool ___alwaysTruncate1, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.BigDecimal::set_Mantissa(System.Numerics.BigInteger)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BigDecimal_set_Mantissa_mCF06CF260D40574B915E19C1D11507C93BBDFAD4_inline (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.BigDecimal::set_Exponent(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BigDecimal_set_Exponent_mE6924E3CB5E9F09FA790576B883DA74E779E08F5_inline (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.BigDecimal::NormaliseExponentBiggerThanZero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigDecimal_NormaliseExponentBiggerThanZero_mCAA8129FFB8A677EF36C670235F4B26E6CBE656C (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.BigDecimal::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigDecimal_Normalize_m04C7276F84F37D4B64A289D772F83170FFAA70CE (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, const RuntimeMethod* method) ;
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::Truncate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_Truncate_m38AC1DA34FA00AEC384E97881C4F9E9F409E09A9 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, int32_t ___precision0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, const RuntimeMethod* method) ;
// System.Int32 Nethereum.Util.BigDecimal::CompareTo(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigDecimal_CompareTo_m3D418F5F4AFE73163A1A277C60B54FFE0BFB252C (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___other0, const RuntimeMethod* method) ;
// System.Int32 Nethereum.Util.BigDecimal::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigDecimal_CompareTo_mB7F7A18C578027070FA28D808D1F7872AB0C6AD8 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Util.BigDecimal::op_LessThan(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDecimal_op_LessThan_m2ED55EA83C770652548F4E4574042F4B6835E2F0 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___left0, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___right1, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Util.BigDecimal::op_GreaterThan(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDecimal_op_GreaterThan_m42270FCFAE3BB25EC2CF97282486E47B6A9EBAE4 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___left0, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___right1, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::Pow(System.Numerics.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_Pow_m26F5247594D5A8D0F0810D11ED79D2BDE8162B56 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, int32_t ___exponent1, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Multiply(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Multiply_m2AF82FA0B4750F56C6A5522A54FBFF2C84919EFE (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::get_IsZero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_get_IsZero_m54B3F16D56CB9E59DBEC6929CF61A7FBE3592DC4 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::DivRem(System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_DivRem_m802550C294ADB18D197A74A093BD2199171F9ED2 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___dividend0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___divisor1, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* ___remainder2, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::op_Inequality(System.Numerics.BigInteger,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Inequality_mB9EBC12ED2739B3BE3F327ABB232B1A31344F199 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, int64_t ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::op_Equality(System.Numerics.BigInteger,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_mC3E68AE3326F7FAC3441A5618537BFB24CD15248 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, int64_t ___right1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Division(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Division_mEABFC30E3B59FF3FF53F8CEB65F70D13CD2E64D5 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___dividend0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___divisor1, const RuntimeMethod* method) ;
// System.Int32 Nethereum.Util.BigIntegerExtensions::NumberOfDigits(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigIntegerExtensions_NumberOfDigits_m54A176ACC287A99AF6B5A266DDE79A189C02AA65 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::op_LessThan(System.Numerics.BigInteger,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThan_mD76A0CAA6AB2F6A0C712889429122ECA85261ABD (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, int64_t ___right1, const RuntimeMethod* method) ;
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_UnaryNegation(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_op_UnaryNegation_mD90A0B7E1B7E64DAABE575F0E4E89BD4E0DECCE7 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::op_GreaterThanOrEqual(System.Numerics.BigInteger,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThanOrEqual_mC867614569FD633E14E1F9AE662451AEEBA536CF (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, int64_t ___right1, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Addition(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Addition_m895A3ED96D07E1A6E4AD97483EDC256107A31B12 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___right1, const RuntimeMethod* method) ;
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::RoundAwayFromZero(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_RoundAwayFromZero_mA8F2271B38937526F9A1B3F93A295DCEE144CE23 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, int32_t ___significantDigits0, const RuntimeMethod* method) ;
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_op_Implicit_mD5B0EAF293EF97181A42C9CEFF1541D5C69B58B4 (int32_t ___value0, const RuntimeMethod* method) ;
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::Floor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_Floor_m0C10AAE9F0FB4413D5CF5C9ACEA4C72EF66E5DC9 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::Abs(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_Abs_mA142B2697C88CED7D671EEC470D0FE1A1AE9CB81 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) ;
// System.String System.Numerics.BigInteger::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m6AFB0DE9CD953DA8B015C31B3CC1FEF86D98A306 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, const RuntimeMethod* method) ;
// System.String System.String::Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A (String_t* __this, int32_t ___startIndex0, String_t* ___value1, const RuntimeMethod* method) ;
// System.String System.String::PadRight(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadRight_m7C573780177B3246D67D860C2A75AEF5832C7543 (String_t* __this, int32_t ___totalWidth0, Il2CppChar ___paddingChar1, const RuntimeMethod* method) ;
// System.String Nethereum.Util.BigDecimal::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigDecimal_ToString_mBDEDD4AB3129C60092D2CFC8DBA890B22A99AFC0 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::Equals(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_Equals_m36D3C46B170C61FBA8D78C5D4D52B6627DCB2314 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___other0, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Util.BigDecimal::Equals(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDecimal_Equals_mF601DFA13FF8CB76B5FBD4F3D1BCFF59A947BFB6 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___other0, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Util.BigDecimal::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDecimal_Equals_m30FDE2EA2FAD247190DEDCF744BE3ECF2647FC3F (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Numerics.BigInteger::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_GetHashCode_m2CB01C462C09EB23616010EB24E0A87A4D35D783 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, const RuntimeMethod* method) ;
// System.Int32 Nethereum.Util.BigDecimal::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigDecimal_GetHashCode_m5EF56AD24DFE3E3BE57F6CC3298D27AFB036CFAE (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, const RuntimeMethod* method) ;
// System.Decimal System.Convert::ToDecimal(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Convert_ToDecimal_mAF1D2181BB8C5D3F25C0963245437B4AF4E6C575 (double ___value0, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Explicit(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Explicit_mDABB25BDB23E1041C50E2C0927DC3E5C7B564863 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// System.Void System.Decimal::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Multiply(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Multiply_mA4945210C6DDD59AB803A2B07BA948E8A1BFD2FC (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d10, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d21, const RuntimeMethod* method) ;
// System.Decimal System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F BigInteger_op_Explicit_m1F21788C5AD515DC2A1FCE89B189F87449CE7835 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Decimal::op_Inequality(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decimal_op_Inequality_mCFFC6B60AEDE8CFB2DEABD97FF0F2B79A31E2690 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d10, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d21, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Double System.Double::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_m4566961BEFC86A927E00D2843F98EE83162EF2AB (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_mF40465AC387D690175D63EFFF44B0E810C090786 (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_Parse_mE9998C753C545CA5A781AC3E06762D5C68D7F196 (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Decimal Nethereum.Util.BigDecimal::op_Explicit(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F BigDecimal_op_Explicit_mD7A97B290DB5EEE8EC6B139C03D867DC544D3688 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mBE66D4EE083FDE96BB722B10D7D23FC1748B0525 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// System.UInt32 System.Convert::ToUInt32(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_mE24BF451803F2FCC99B039E98AF0C3C2BB6C8654 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Addition(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_op_Addition_mF44D4CD9D0E7D858784AAEE85C5C30C4DA12AB2F (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___left0, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___right1, const RuntimeMethod* method) ;
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Subtraction(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_op_Subtraction_mBEDE271D61DBFAA05155DF8D371FF586755C531E (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___left0, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___right1, const RuntimeMethod* method) ;
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::Add(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_Add_m13E17B562CF9367BF6F9453D3AFE914E9EF36448 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___left0, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___right1, const RuntimeMethod* method) ;
// System.Numerics.BigInteger Nethereum.Util.BigDecimal::AlignExponent(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigDecimal_AlignExponent_m50E85A0E7B7B648E74EEAEE595816378B4CB07E2 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___value0, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___reference1, const RuntimeMethod* method) ;
// System.Int32 Nethereum.Util.BigDecimal::NumberOfDigits(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigDecimal_NumberOfDigits_m6340D19AD525A27031A7B3E3BAB1B21D5B82EDD3 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::op_Equality(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_m0F0D30001407A83C4BF6851CEC391F8E78439C1D (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::op_Inequality(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Inequality_mF231CB46B3043DDB6A2F96D77816F1719AE9EA9D (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::op_LessThan(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThan_m7AFF4FB0B1B0AF3ADFB586AD468D3B85848AD56C (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::op_GreaterThan(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThan_m8B1CB08CDDED3EABF9950DF56D045113750928B7 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::op_LessThanOrEqual(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThanOrEqual_m0217024560C6B2E56EBE0A62A028BCF9D5610A4E (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::op_GreaterThanOrEqual(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThanOrEqual_m2112ACC2CFF7AAFD07A4F46787A545E0670A187B (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___right1, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_Parse_m8C6FB2B62154E2EE7C46930C85C120BE977576C4 (String_t* ___value0, const RuntimeMethod* method) ;
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Implicit(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_op_Implicit_m56CB2CB2D99F8AE030DC5CEE7A450C5C8F88CE96 (double ___value0, const RuntimeMethod* method) ;
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Multiply(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_op_Multiply_m654C65DFC0F98E28AB20EE382BE872079A2BDB4E (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___left0, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___right1, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Double System.Math::Pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265 (double ___x0, double ___y1, const RuntimeMethod* method) ;
// System.Char Nethereum.Util.NumberFormatting::ParseFormatSpecifier(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar NumberFormatting_ParseFormatSpecifier_m5BF754581F6274A47227300DA7187CABC279EFDE (String_t* ___format0, int32_t* ___digits1, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.String System.Numerics.BigInteger::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_mF67077A813661D27640565FC41346D65A155B3F6 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::GetInstance(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F (RuntimeObject* ___formatProvider0, const RuntimeMethod* method) ;
// System.String Nethereum.Util.BigDecimalFormatter::ToCurrencyString(Nethereum.Util.BigDecimal,System.Int32,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigDecimalFormatter_ToCurrencyString_m5E3BE2273B46703B022BDA7EB715A98BFCCD9B6D (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___value0, int32_t ___maxDigits1, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___format2, const RuntimeMethod* method) ;
// System.String Nethereum.Util.BigDecimal::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigDecimal_ToString_m5C537AB24B4D895F3CE282635AE9A091BC3CAE63 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, String_t* ___formatSpecifier0, RuntimeObject* ___format1, const RuntimeMethod* method) ;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyDecimalDigits()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_CurrencyDecimalDigits_m5E04D902AB388705BF7FED31630AF7730EFA34BE_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<System.Byte> Nethereum.Util.BigDecimalFormatter::GetDigits(Nethereum.Util.BigDecimal,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BigDecimalFormatter_GetDigits_m6C648C92B09B93EB041BD56B8D4BC6DCB1D79AF5 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___value0, int32_t* ___exponent1, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.NumberFormatting::FormatCurrency(System.Text.StringBuilder,System.Boolean,System.Collections.Generic.IList`1<System.Byte>,System.Int32,System.Int32,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatting_FormatCurrency_mC84EDA50402F1200971FAEF5FFB8793F0E21AEEA (StringBuilder_t* ___result0, bool ___isNegative1, RuntimeObject* ___digits2, int32_t ___exponent3, int32_t ___maxDigits4, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___info5, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::op_UnaryNegation(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_UnaryNegation_m2C40453E25F1D2E3E5D892D92CE633C8E177C1C3 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
inline void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared)(__this, method);
}
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Modulus(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Modulus_m3224170883C73BCEC10BC5ACB8ED7C979E43A8CE (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___dividend0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___divisor1, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Implicit_mE47ECF71B693CBA3538A95F12133334F08BE31F8 (uint16_t ___value0, const RuntimeMethod* method) ;
// System.Byte System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BigInteger_op_Explicit_mD787D48C59BD782640D92B79382C7F83022DAD04 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
inline void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, uint8_t, const RuntimeMethod*))List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Numerics.BigInteger::op_GreaterThan(System.Numerics.BigInteger,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThan_mE2855EC97576062A6EFBFA9F7B74BBC3D7A4B8DE (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, int64_t ___right1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::Reverse()
inline void List_1_Reverse_mF9816C41791212F0EE4E67A13E5AC3893BD600EF (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1_Reverse_mF9816C41791212F0EE4E67A13E5AC3893BD600EF_gshared)(__this, method);
}
// System.Int32 System.Numerics.BigInteger::get_Sign()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_get_Sign_m0B029046A49D6CCE27899B31890BF63BD6C68E5E (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_Parse_m2B82A0CB4AF02EFCD6175561813E9F0B8DA08334 (String_t* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___sourceArray0, RuntimeArray* ___destinationArray1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline RuntimeObject* Enumerable_Take_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m0919EA050297104B260DB970151A823245F74A6D (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Take_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m0919EA050297104B260DB970151A823245F74A6D_gshared)(___source0, ___count1, method);
}
// System.Void Nethereum.Util.ByteUtil/<MergeToEnum>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMergeToEnumU3Ed__5__ctor_mEF282E0BA2A7545C2F9F0FBD3137044839A4C476 (U3CMergeToEnumU3Ed__5_t0D0950728046AC81FC5102F883967738D5D99CFF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Byte> Nethereum.Util.ByteUtil::MergeToEnum(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ByteUtil_MergeToEnum_m3743FFFB577F7B24BE9668D6FEF4AC574E1D287D (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___arrays0, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Util.ByteUtil::PadBytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteUtil_PadBytes_m9AA48840313F52CC444555A4C9BF8DDBEC98D85E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytesToPad0, int32_t ___numberOfBytes1, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Byte> Nethereum.Util.ByteUtil/<MergeToEnum>d__5::System.Collections.Generic.IEnumerable<System.Byte>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMergeToEnumU3Ed__5_System_Collections_Generic_IEnumerableU3CSystem_ByteU3E_GetEnumerator_mDCAEB6A8E753C4739BAD4A4F9A9DAC42884C6515 (U3CMergeToEnumU3Ed__5_t0D0950728046AC81FC5102F883967738D5D99CFF* __this, const RuntimeMethod* method) ;
// System.Int32 System.Byte::CompareTo(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_CompareTo_m188EF2F51CA95A2820D240FE282E165FAEF8A5B8 (uint8_t* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>)
inline int32_t Enumerable_Count_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7707D8180AC8224E05B10E427AFF8CE903B0F54C (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7707D8180AC8224E05B10E427AFF8CE903B0F54C_gshared)(___source0, method);
}
// System.Int32 System.Int32::CompareTo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586 (int32_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 Nethereum.Util.ByteArrayComparer::Compare(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteArrayComparer_Compare_m7CC53715958D3C963EE0488E147D13F11E8D8414 (ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___y1, const RuntimeMethod* method) ;
// System.Void System.Numerics.BigInteger::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m25FA3F3C832BC621CD91ABFAC3535A2F4EE7B371 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.ByteArrayComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayComparer__ctor_m5621A85A161658F80BE49C560193CFFB54776CC4 (ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.ByteListComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteListComparer__ctor_m61436C88B04F6876503EC55E25EC6654E5953D5A (ByteListComparer_tD219640F05BCD0EEDC1E33424BB5DFC0C636BB83* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::HexToByteArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE (String_t* ___value0, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.RLP.RLP::EncodeElement(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___srcData0, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesForRLPEncoding(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___bigInteger0, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.RLP.RLP::EncodeList(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLP_EncodeList_m2A2C2A6B4DDA95C331AECF96926B0D9C1B16FE05 (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___items0, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Util.Sha3Keccack::CalculateHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Sha3Keccack_CalculateHash_mE94324F2BF9D80A18C59A08CF5F0735B78ECAAA0 (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.String Nethereum.Util.AddressExtensions::ConvertToEthereumChecksumAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AddressExtensions_ConvertToEthereumChecksumAddress_m831339B9826BB85B1CE6873372E19B208ED841E0 (String_t* ___address0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String Nethereum.Util.ContractUtils::CalculateCreate2Address(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContractUtils_CalculateCreate2Address_m650744E3E2767953F1A4EE3EF7D04D85DB967DE9 (String_t* ___address0, String_t* ___saltHex1, String_t* ___byteCodeHex2, const RuntimeMethod* method) ;
// System.String Nethereum.Util.Sha3Keccack::CalculateHashFromHex(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Sha3Keccack_CalculateHashFromHex_mAAD0150F4F88644893AC48D1EE0F8B7EAD1BB68B (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___hexValues0, const RuntimeMethod* method) ;
// System.String Nethereum.Util.ContractUtils::CalculateCreate2AddressUsingByteCodeHash(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContractUtils_CalculateCreate2AddressUsingByteCodeHash_m2A41573392468D81A77F0AD9E3677CC8CC9C7D21 (String_t* ___address0, String_t* ___saltHex1, String_t* ___byteCodeHexHash2, const RuntimeMethod* method) ;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyPositivePattern()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_CurrencyPositivePattern_m253954FD1F79EB2F9B12070A348E8E1DB0E75263_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyNegativePattern()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_CurrencyNegativePattern_m35EAAAC0517F13B43B444B82343F14D9B0A14FC4_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.Int32[] System.Globalization.NumberFormatInfo::get_CurrencyGroupSizes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* NumberFormatInfo_get_CurrencyGroupSizes_mA65056791CE7754317B7502465C488E2126591BA (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.String System.Globalization.NumberFormatInfo::get_CurrencyDecimalSeparator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_CurrencyDecimalSeparator_mBAD4DAC07DC995653374C16BFB02E6CF2CA121BD_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.String System.Globalization.NumberFormatInfo::get_CurrencyGroupSeparator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_CurrencyGroupSeparator_mE8F7687A3D4812C75092E30554B4C15C974441BD_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.NumberFormatting::FormatFixed(System.Text.StringBuilder,System.Collections.Generic.IList`1<System.Byte>,System.Int32,System.Int32,System.Int32[],System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatting_FormatFixed_mE55D82EA0BCBD7C64FD0F56FA2DBB6BC20F67CE1 (StringBuilder_t* ___sb0, RuntimeObject* ___digits1, int32_t ___exponent2, int32_t ___maxFractionalDigits3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___groupDigits4, String_t* ___decimalSeparator5, String_t* ___groupSeparator6, const RuntimeMethod* method) ;
// System.String System.Globalization.NumberFormatInfo::get_NegativeSign()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Globalization.NumberFormatInfo::get_CurrencySymbol()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_CurrencySymbol_m69E8700B6E102ADA1351AD4C6BBC7779D9F13F43_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m8455D90E068B02E8376B7650409E2325303D2456 (StringBuilder_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3 (StringBuilder_t* __this, Il2CppChar ___value0, int32_t ___repeatCount1, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void System.Func`2<System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6A29D0BC8A4BCF6079AD2737B4119D3802B41814 (Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.String,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6 (RuntimeObject* ___source0, Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Keccak.KeccakDigest::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest__ctor_m673559AC784A846BD6D34E352ED4FBC1BA93DA0F (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, int32_t ___bitLength0, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Sha3Keccack/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC1FF44E88B8796BBA0324C7389E68B5D022FC649 (U3CU3Ec_tB6A7FC626DEC633A07B9755025D8C41EC65CF2AC* __this, const RuntimeMethod* method) ;
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline (const RuntimeMethod* method) ;
// System.Void Nethereum.Util.UnitConversion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitConversion__ctor_m5E00A88113E7393DA8AA839644B151321771530E (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, const RuntimeMethod* method) ;
// System.Int32 Nethereum.Util.UnitConversion::GetEthUnitValueLength(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnitConversion_GetEthUnitValueLength_mF1F30503FC4195B0C82AE4BC49B04F2266167433 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___unitValue0, const RuntimeMethod* method) ;
// System.Decimal Nethereum.Util.UnitConversion::FromWei(System.Numerics.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F UnitConversion_FromWei_mAE0A85E7D933957551471D951EA94A6B93EA0672 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, int32_t ___decimalPlacesToUnit1, const RuntimeMethod* method) ;
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::GetEthUnitValue(Nethereum.Util.UnitConversion/EthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F UnitConversion_GetEthUnitValue_mFB970EA215080A5EA80B60128B404EA8AC9A1CE4 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, int32_t ___ethUnit0, const RuntimeMethod* method) ;
// System.Decimal Nethereum.Util.UnitConversion::FromWei(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F UnitConversion_FromWei_m6C6FE013FE0628B30EDF231DB9511E4935504715 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___toUnit1, const RuntimeMethod* method) ;
// Nethereum.Util.BigDecimal Nethereum.Util.UnitConversion::FromWeiToBigDecimal(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A UnitConversion_FromWeiToBigDecimal_m8D6A3A45BA804F9B37BD4D34B89D7EE68DF0EA14 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___toUnit1, const RuntimeMethod* method) ;
// Nethereum.Util.BigDecimal Nethereum.Util.UnitConversion::FromWeiToBigDecimal(System.Numerics.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A UnitConversion_FromWeiToBigDecimal_m1DCFA5DC6DD98A23607B351979E17820973DE374 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, int32_t ___decimalPlacesToUnit1, const RuntimeMethod* method) ;
// System.String Nethereum.Util.FormattingExtensions::ToStringInvariant<System.Numerics.BigInteger>(T)
inline String_t* FormattingExtensions_ToStringInvariant_TisBigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_m629EE20DFFBB69DC3B851E8C4786130365788A70 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___formattable0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F, const RuntimeMethod*))FormattingExtensions_ToStringInvariant_TisBigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_m629EE20DFFBB69DC3B851E8C4786130365788A70_gshared)(___formattable0, method);
}
// System.Numerics.BigInteger Nethereum.Util.BigIntegerExtensions::ParseInvariant(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigIntegerExtensions_ParseInvariant_m9913A4AA2A32152C5B63476ADC1777EF1B92C97B (String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Trim(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m81BD35659E6F89DDD56816975E6E05390D023FE5 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimChars0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWeiFromUnit(Nethereum.Util.BigDecimal,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F UnitConversion_ToWeiFromUnit_m7777834A8230B9AA2A6BDBA788D4CD4AA45C232E (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___amount0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___fromUnit1, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Util.UnitConversion::TryValidateUnitValue(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnitConversion_TryValidateUnitValue_m41B23D570E88D312B8D9C9E02FAFF1895ABD4600 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___ethUnit0, const RuntimeMethod* method) ;
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWei(Nethereum.Util.BigDecimal,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F UnitConversion_ToWei_mEE62A8DE9E499CBB1E73D2C3B1EE6747D7C25D82 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___amount0, int32_t ___decimalPlacesFromUnit1, const RuntimeMethod* method) ;
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWei(System.Decimal,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F UnitConversion_ToWei_m3E65FF953B123F6C50F8E3F191E6B1FD88B808D1 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___amount0, int32_t ___decimalPlacesFromUnit1, const RuntimeMethod* method) ;
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWeiFromUnit(System.Decimal,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F UnitConversion_ToWeiFromUnit_mFC65450C6BA1BB5314020DFE4BBFDDDD8D20A733 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___amount0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___fromUnit1, const RuntimeMethod* method) ;
// System.Void System.Numerics.BigInteger::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mFEDEDA4A6AFC2BA534FEEF4EB3431B9C5AC3F9D9 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWei(System.Numerics.BigInteger,Nethereum.Util.UnitConversion/EthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F UnitConversion_ToWei_m2C03442E8B9B6B570636AA19636F9723DC6E7CAC (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, int32_t ___fromUnit1, const RuntimeMethod* method) ;
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWei(System.Decimal,Nethereum.Util.UnitConversion/EthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F UnitConversion_ToWei_mBC531DB6C19F3BC6D8A9A8B248C259317718AB07 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___amount0, int32_t ___fromUnit1, const RuntimeMethod* method) ;
// System.Decimal System.Convert::ToDecimal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Convert_ToDecimal_m0CECFA6799BA3F8CDB59C34287DD5BAE54CC0EBE (float ___value0, const RuntimeMethod* method) ;
// System.Void System.Numerics.BigInteger::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mA87DC2182BB2F6AA0209BD98E81C30BCE5B8BBAA (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_Parse_mF59EB26DED52ED2D5E804452CFC9102E3347C10D (String_t* ___s0, const RuntimeMethod* method) ;
// System.Int32 Nethereum.Util.UnitConversion::CalculateNumberOfDecimalPlaces(System.Decimal,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnitConversion_CalculateNumberOfDecimalPlaces_mD01E25B3019E1B5118F499AA107FA7EB0D8267A2 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, int32_t ___maxNumberOfDecimals1, int32_t ___currentNumberOfDecimals2, const RuntimeMethod* method) ;
// System.String Nethereum.Util.FormattingExtensions::ToStringInvariant<System.Decimal>(T)
inline String_t* FormattingExtensions_ToStringInvariant_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_mA1F214B0E0D2E638D2E6FCAC76B2CE98565C5833 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___formattable0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F, const RuntimeMethod*))FormattingExtensions_ToStringInvariant_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_mA1F214B0E0D2E638D2E6FCAC76B2CE98565C5833_gshared)(___formattable0, method);
}
// System.Decimal System.Math::Round(System.Decimal)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Math_Round_mC44B363AC94B1B8DCB093A770B5C11E22F5A583E_inline (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d0, const RuntimeMethod* method) ;
// System.Boolean System.Decimal::op_Equality(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decimal_op_Equality_m4778C6A5F0E0FA5CBEFBBCB9E5A34BBE3D2D0BB5 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d10, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d21, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Last<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
inline int32_t Enumerable_Last_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCFD5BA313EA72B18F61BD8C68803034882461219 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Last_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCFD5BA313EA72B18F61BD8C68803034882461219_gshared)(___source0, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Delay_m4B84654B4DAADEC41096D9F01C099CCEA9927A48 (int32_t ___millisecondsDelay0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Keccak.KeccakDigest::Init(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Init_m663D38CA3A3B1C5E3370852A9B7D1EA7960CE421 (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, int32_t ___bitLength0, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Keccak.KeccakDigest::CopyIn(Nethereum.Util.Keccak.KeccakDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_CopyIn_m882F2F0B5F8636B47DE62374E2C3C4ABF752C66C (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* ___source0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Keccak.KeccakDigest::Absorb(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Absorb_mF7E941904EB3A23A9D68AC98DE1E22977E5FE23D (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___off1, int32_t ___len2, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Keccak.KeccakDigest::Squeeze(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Squeeze_m05A95BE87AE3DB461FDA77CFBE3CD582DDF40793 (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___off1, int32_t ___len2, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Keccak.KeccakDigest::AbsorbBits(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_AbsorbBits_m224802053047917627C0151A686430B1F445F9F9 (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, int32_t ___data0, int32_t ___bits1, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Keccak.KeccakDigest::InitSponge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_InitSponge_m7C76E7E9001574C85C7E0D7398A713CE81289206 (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, int32_t ___rate0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Keccak.Arrays::Fill(System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrays_Fill_mC53323A8A5385F960F36DDE7BDABE385BBAA8BA3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, uint8_t ___b1, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Keccak.KeccakDigest::KeccakAbsorb(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_KeccakAbsorb_m14FC67C47B3F929BE91BBD59B4205FFCC57E1ECA (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___off1, const RuntimeMethod* method) ;
// System.UInt64 Nethereum.Util.Keccak.Pack::LE_To_UInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Pack_LE_To_UInt64_m4A932F443044B6CB9A3022E4B348691318F47EDE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Keccak.KeccakDigest::KeccakPermutation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_KeccakPermutation_m91BAE14D9277F8D050673A09A372299E1ADD0C89 (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Keccak.KeccakDigest::KeccakExtract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_KeccakExtract_m0C7A267697170747AF7162900CFC98A496B3A2B4 (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Keccak.KeccakDigest::PadAndSwitchToSqueezingPhase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_PadAndSwitchToSqueezingPhase_m099A6EDC9078B75FE940735C214947901E5BDD8F (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, const RuntimeMethod* method) ;
// System.Int64 System.Math::Min(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Math_Min_mD731E8A02F13C67C1EAC7C1E7F81909FE466F079 (int64_t ___val10, int64_t ___val21, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Keccak.Pack::UInt64_To_LE(System.UInt64[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_LE_m8E513C0C7E26D1E73DB8FC63FA9D286625C2C610 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___ns0, int32_t ___nsOff1, int32_t ___nsLen2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs3, int32_t ___bsOff4, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Keccak.KeccakDigest::Theta(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Theta_mD5F289CD29B498B73B41BB43D79A8F40E1612098 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___A0, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Keccak.KeccakDigest::Rho(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Rho_mE6B61556A32A8DC14E2AD01AF8AD6A4B015390B9 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___A0, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Keccak.KeccakDigest::Pi(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Pi_m478BBE1D265C304F3FB74915F2208D50B112C402 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___A0, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Keccak.KeccakDigest::Chi(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Chi_mF939CE9BBD3B6B0F446DB6BBCBB523219232BA2B (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___A0, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Keccak.KeccakDigest::Iota(System.UInt64[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Iota_m742EA935E9E417BE170ABBB9AB18C851CF4A1A91 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___A0, int32_t ___indexRound1, const RuntimeMethod* method) ;
// System.UInt64 Nethereum.Util.Keccak.KeccakDigest::leftRotate(System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t KeccakDigest_leftRotate_m67FA24E0F32237BB0F78B9341E066C182B2586BA (uint64_t ___v0, int32_t ___r1, const RuntimeMethod* method) ;
// System.UInt64[] Nethereum.Util.Keccak.KeccakDigest::KeccakInitializeRoundConstants()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* KeccakDigest_KeccakInitializeRoundConstants_m51D2F707381B1235BB330061CF449575A767217B (const RuntimeMethod* method) ;
// System.Int32[] Nethereum.Util.Keccak.KeccakDigest::KeccakInitializeRhoOffsets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* KeccakDigest_KeccakInitializeRhoOffsets_mDD4EAAC764877F56239B2356540BDD006D5B541B (const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Keccak.Pack::UInt32_To_BE(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_BE_mF2E8B31DF4270DD6834E3D9133107935C0C4EA12 (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Keccak.Pack::UInt32_To_BE(System.UInt32[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_BE_mAB92F96F9BBE4503F936BE1F22FF80D5866836C1 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ns0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.UInt32 Nethereum.Util.Keccak.Pack::BE_To_UInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_BE_To_UInt32_m873E6DD001E9F00393EF9F06DA0D3513BBFB3FDA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Keccak.Pack::UInt64_To_BE(System.UInt64,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_BE_m2858A46307524A37655A016E5F312634237A290D (uint64_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Keccak.Pack::UInt32_To_BE(System.UInt32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_BE_m8AD82EC54386481A24A53D7C164C99D206CA0DAD (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Keccak.Pack::UInt64_To_BE(System.UInt64[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_BE_m42B6627FCE473A4255811A9C0BEA3D1BBC54F2A8 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___ns0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.UInt32 Nethereum.Util.Keccak.Pack::BE_To_UInt32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_BE_To_UInt32_mCF91DB30C034C8478C2ED5A486472FCC1EC3134F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, const RuntimeMethod* method) ;
// System.UInt64 Nethereum.Util.Keccak.Pack::BE_To_UInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Pack_BE_To_UInt64_mCC6E09C46B87F8CCA2CE6E80BDA14E9CA23DF571 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Keccak.Pack::UInt32_To_LE(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_LE_mF29A216542A56F5462F38AF6D04654E6FAE808A4 (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Keccak.Pack::UInt32_To_LE(System.UInt32[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_LE_mC64CEDEF84B6949E133D76BFE2830B1CAF23526C (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ns0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.UInt32 Nethereum.Util.Keccak.Pack::LE_To_UInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_LE_To_UInt32_mCD03138601EE575E33E887C90AA6CF4A594BD309 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Keccak.Pack::UInt64_To_LE(System.UInt64,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_LE_mAF15D24E8A2D9ADF7222B6FD6FBC28F5766325E9 (uint64_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Keccak.Pack::UInt32_To_LE(System.UInt32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_LE_mB56CE57D85B19A17CF5AA5AF7106BC8CC931A4A1 (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Keccak.Pack::UInt64_To_LE(System.UInt64[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_LE_mF789A24148BA52964552420B87173752C6172CC9 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___ns0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.UInt32 Nethereum.Util.Keccak.Pack::LE_To_UInt32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_LE_To_UInt32_m2FD6B1A2AD89145C1744BC58FAB0D23D9E97D415 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Util.Keccak.Arrays::HaveSameContents(System.Boolean[],System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_HaveSameContents_m2E3ED5E4B183C5C0637C938DDA43B6EB8D7D5587 (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___a0, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___b1, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Util.Keccak.Arrays::HaveSameContents(System.Char[],System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_HaveSameContents_m2D034130BB400EAD094F5C46EEDCDE822EC2FE2F (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___a0, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___b1, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Util.Keccak.Arrays::HaveSameContents(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_HaveSameContents_mE9062A6BEEFD78B41D41238FA5F23C18CD5E7A99 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Util.Keccak.Arrays::AreEqual(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_AreEqual_m9EE10F40F31FD6FA82B58D53146AFC8CD5DE2D64 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Util.Keccak.Arrays::HaveSameContents(System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_HaveSameContents_m0F46C07741AFA2ABA09851B07D3EE1AD01E44B42 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___a0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___b1, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Util.Keccak.Arrays::HaveSameContents(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_HaveSameContents_m9C87EA995EA9A3CA03C15895FD0519627E3007BE (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___a0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___b1, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Object System.Array::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Util.Keccak.Arrays::Clone(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Arrays_Clone_mC290C8D87AF6E2188E1C2A81D730854F16D4EEB1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.UInt64[] Nethereum.Util.Keccak.Arrays::Clone(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Arrays_Clone_m1881DFDDD14AEA11E0D3B4849A6D1781BBDD5EBF (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___data0, const RuntimeMethod* method) ;
// System.Int32 Nethereum.Util.Keccak.Arrays::GetLength(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Arrays_GetLength_mA8ADF4E7AABF26BE77324B1126B193F20F257F7D (int32_t ___from0, int32_t ___to1, const RuntimeMethod* method) ;
// System.Int32[] Nethereum.Util.Keccak.Arrays::Clone(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Arrays_Clone_m4E8762ABC7B1C6647C1065E1F1F92FE71DD17DBB (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___data0, const RuntimeMethod* method) ;
// Nethereum.Util.Sha3Keccack Nethereum.Util.Sha3Keccack::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* Sha3Keccack_get_Current_mD6FFC538783F0A2C61503A659F979F136C302D91_inline (const RuntimeMethod* method) ;
// System.Decimal System.Decimal::Round(System.Decimal,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_Round_m1DD2AAA2C9C8D2A1CDA6ECCC2724A075616FF624 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d0, int32_t ___decimals1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::AddWithResize(T)
inline void List_1_AddWithResize_m735EBD7363A06760DE25BACA0FC47F76CA0DEEAB (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, uint8_t, const RuntimeMethod*))List_1_AddWithResize_m735EBD7363A06760DE25BACA0FC47F76CA0DEEAB_gshared)(__this, ___item0, method);
}
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
// System.String Nethereum.Util.AddressExtensions::ConvertToEthereumChecksumAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AddressExtensions_ConvertToEthereumChecksumAddress_m831339B9826BB85B1CE6873372E19B208ED841E0 (String_t* ___address0, const RuntimeMethod* method) 
{
	{
		AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* L_0;
		L_0 = AddressUtil_get_Current_m5594A27CDFF5841FA041C5A99A25BA9F1CFFB9D4(NULL);
		String_t* L_1 = ___address0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AddressUtil_ConvertToChecksumAddress_mEAEAE7FD8125E4A821AFBBD02303AB372C721C1E(L_0, L_1, NULL);
		return L_2;
	}
}
// System.String Nethereum.Util.AddressExtensions::ConvertToEthereumChecksumAddress(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AddressExtensions_ConvertToEthereumChecksumAddress_m170C16E66425C2FB3825DC53E630A308043B6FB3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___address0, const RuntimeMethod* method) 
{
	{
		AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* L_0;
		L_0 = AddressUtil_get_Current_m5594A27CDFF5841FA041C5A99A25BA9F1CFFB9D4(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___address0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AddressUtil_ConvertToChecksumAddress_m6AF0599CD17C904B7ABA05E555EB82C6CCECF863(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Nethereum.Util.AddressExtensions::IsEthereumChecksumAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressExtensions_IsEthereumChecksumAddress_m9099CB3ACC2964D91ADE0DA7945BF5F892C78CFB (String_t* ___address0, const RuntimeMethod* method) 
{
	{
		AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* L_0;
		L_0 = AddressUtil_get_Current_m5594A27CDFF5841FA041C5A99A25BA9F1CFFB9D4(NULL);
		String_t* L_1 = ___address0;
		NullCheck(L_0);
		bool L_2;
		L_2 = AddressUtil_IsChecksumAddress_mAFB8250D7C23483559A79CB4BF9664FD468C8AB3(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Nethereum.Util.AddressExtensions::IsValidEthereumAddressHexFormat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressExtensions_IsValidEthereumAddressHexFormat_m3757B60761110FECA3AE09F96B45735E4FD24F7E (String_t* ___address0, const RuntimeMethod* method) 
{
	{
		AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* L_0;
		L_0 = AddressUtil_get_Current_m5594A27CDFF5841FA041C5A99A25BA9F1CFFB9D4(NULL);
		String_t* L_1 = ___address0;
		NullCheck(L_0);
		bool L_2;
		L_2 = AddressUtil_IsValidEthereumAddressHexFormat_m5912B7AC620F987884B5041E1BBF5C069DAE9F2B(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Nethereum.Util.AddressExtensions::IsValidEthereumAddressLength(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressExtensions_IsValidEthereumAddressLength_m89E4D9B3AFFD4C329A049A9CA720D25AB64E19D9 (String_t* ___address0, const RuntimeMethod* method) 
{
	{
		AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* L_0;
		L_0 = AddressUtil_get_Current_m5594A27CDFF5841FA041C5A99A25BA9F1CFFB9D4(NULL);
		String_t* L_1 = ___address0;
		NullCheck(L_0);
		bool L_2;
		L_2 = AddressUtil_IsValidAddressLength_mBB59639C0D05894CD86F0D609749A0D8C073857D(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Nethereum.Util.AddressExtensions::IsTheSameAddress(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressExtensions_IsTheSameAddress_m5366CF742A45B864A6D59F8040E77A7927A4B831 (String_t* ___address0, String_t* ___otherAddress1, const RuntimeMethod* method) 
{
	{
		AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* L_0;
		L_0 = AddressUtil_get_Current_m5594A27CDFF5841FA041C5A99A25BA9F1CFFB9D4(NULL);
		String_t* L_1 = ___address0;
		String_t* L_2 = ___otherAddress1;
		NullCheck(L_0);
		bool L_3;
		L_3 = AddressUtil_AreAddressesTheSame_m8A2CBB12085D5E51C38D78340818F908AC4E9583(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Nethereum.Util.AddressExtensions::IsAnEmptyAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressExtensions_IsAnEmptyAddress_m102147942812A727BC06E9CCF6DE23D34D43FBB1 (String_t* ___address0, const RuntimeMethod* method) 
{
	{
		AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* L_0;
		L_0 = AddressUtil_get_Current_m5594A27CDFF5841FA041C5A99A25BA9F1CFFB9D4(NULL);
		String_t* L_1 = ___address0;
		NullCheck(L_0);
		bool L_2;
		L_2 = AddressUtil_IsAnEmptyAddress_m221DABCC86731D4BE8A35F0117DDBD6A444CDEF5(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Nethereum.Util.AddressExtensions::IsNotAnEmptyAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressExtensions_IsNotAnEmptyAddress_m9925CF4E69A178ADAE8ACF29FC1A0C50389942FA (String_t* ___address0, const RuntimeMethod* method) 
{
	{
		AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* L_0;
		L_0 = AddressUtil_get_Current_m5594A27CDFF5841FA041C5A99A25BA9F1CFFB9D4(NULL);
		String_t* L_1 = ___address0;
		NullCheck(L_0);
		bool L_2;
		L_2 = AddressUtil_IsNotAnEmptyAddress_m29BE761FD994B89DEEBBB3A68094E78639DA091C(L_0, L_1, NULL);
		return L_2;
	}
}
// System.String Nethereum.Util.AddressExtensions::AddressValueOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AddressExtensions_AddressValueOrEmpty_m2FF6F3ED38F238FA287259DA9B9D8651E86B8ED4 (String_t* ___address0, const RuntimeMethod* method) 
{
	{
		AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* L_0;
		L_0 = AddressUtil_get_Current_m5594A27CDFF5841FA041C5A99A25BA9F1CFFB9D4(NULL);
		String_t* L_1 = ___address0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AddressUtil_AddressValueOrEmpty_m52378E4D5565D31F5730C6A4F85C087F47BA7794(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Nethereum.Util.AddressExtensions::IsEmptyOrEqualsAddress(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressExtensions_IsEmptyOrEqualsAddress_m05D0296A84844DABA63DF200A7AF495F2AD60745 (String_t* ___address10, String_t* ___candidate1, const RuntimeMethod* method) 
{
	{
		AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* L_0;
		L_0 = AddressUtil_get_Current_m5594A27CDFF5841FA041C5A99A25BA9F1CFFB9D4(NULL);
		String_t* L_1 = ___address10;
		String_t* L_2 = ___candidate1;
		NullCheck(L_0);
		bool L_3;
		L_3 = AddressUtil_IsEmptyOrEqualsAddress_m1D0433ADA035C7FF0A90BA349245DF1A03894E43(L_0, L_1, L_2, NULL);
		return L_3;
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
// System.Void Nethereum.Util.UniqueAddressList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniqueAddressList__ctor_m71988E84363AEB2B01EA8E58106755D527E52728 (UniqueAddressList_t6D7BE9C58FA7125570B39AA0F0DD4AECD5AEF856* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddressEqualityComparer_tA2E7C0F1CECD02DA14B73949075AB3B8CE7CF801_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m795438439D8E973F4069A442EFA458942BCD5B3F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AddressEqualityComparer_tA2E7C0F1CECD02DA14B73949075AB3B8CE7CF801* L_0 = (AddressEqualityComparer_tA2E7C0F1CECD02DA14B73949075AB3B8CE7CF801*)il2cpp_codegen_object_new(AddressEqualityComparer_tA2E7C0F1CECD02DA14B73949075AB3B8CE7CF801_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AddressEqualityComparer__ctor_mBA346BF0E820582D6DCF4C36D0152F86079AB6CD(L_0, NULL);
		HashSet_1__ctor_m795438439D8E973F4069A442EFA458942BCD5B3F(__this, L_0, HashSet_1__ctor_m795438439D8E973F4069A442EFA458942BCD5B3F_RuntimeMethod_var);
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
// System.Boolean Nethereum.Util.AddressEqualityComparer::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressEqualityComparer_Equals_mFFE65834D2316352269ED334D87D2F5B5ED3506C (AddressEqualityComparer_tA2E7C0F1CECD02DA14B73949075AB3B8CE7CF801* __this, String_t* ___x0, String_t* ___y1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___x0;
		String_t* L_1 = ___y1;
		bool L_2;
		L_2 = AddressExtensions_IsTheSameAddress_m5366CF742A45B864A6D59F8040E77A7927A4B831(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 Nethereum.Util.AddressEqualityComparer::GetHashCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AddressEqualityComparer_GetHashCode_mB28372A8728258F0A76B78F2BB40AB9A858D1037 (AddressEqualityComparer_tA2E7C0F1CECD02DA14B73949075AB3B8CE7CF801* __this, String_t* ___obj0, const RuntimeMethod* method) 
{
	{
		return (-1);
	}
}
// System.Void Nethereum.Util.AddressEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressEqualityComparer__ctor_mBA346BF0E820582D6DCF4C36D0152F86079AB6CD (AddressEqualityComparer_tA2E7C0F1CECD02DA14B73949075AB3B8CE7CF801* __this, const RuntimeMethod* method) 
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
// Nethereum.Util.AddressUtil Nethereum.Util.AddressUtil::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* AddressUtil_get_Current_m5594A27CDFF5841FA041C5A99A25BA9F1CFFB9D4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* L_0 = ((AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A_StaticFields*)il2cpp_codegen_static_fields_for(AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A_il2cpp_TypeInfo_var))->____current_0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* L_1 = (AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A*)il2cpp_codegen_object_new(AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AddressUtil__ctor_mFBD8B7B116001BE2851469A24B3C41095B7253B1(L_1, NULL);
		((AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A_StaticFields*)il2cpp_codegen_static_fields_for(AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A_il2cpp_TypeInfo_var))->____current_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A_StaticFields*)il2cpp_codegen_static_fields_for(AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A_il2cpp_TypeInfo_var))->____current_0), (void*)L_1);
	}

IL_0011:
	{
		AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* L_2 = ((AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A_StaticFields*)il2cpp_codegen_static_fields_for(AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A_il2cpp_TypeInfo_var))->____current_0;
		return L_2;
	}
}
// System.String Nethereum.Util.AddressUtil::ConvertToChecksumAddress(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AddressUtil_ConvertToChecksumAddress_m6AF0599CD17C904B7ABA05E555EB82C6CCECF863 (AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___address0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___address0;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) <= ((int32_t)((int32_t)20))))
		{
			goto IL_0025;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___address0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___address0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8((RuntimeObject*)L_1, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), ((int32_t)20))), Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_3, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_4, (bool)0, NULL);
		String_t* L_6;
		L_6 = AddressUtil_ConvertToChecksumAddress_mEAEAE7FD8125E4A821AFBBD02303AB372C721C1E(__this, L_5, NULL);
		return L_6;
	}

IL_0025:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___address0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_7, (bool)0, NULL);
		String_t* L_9;
		L_9 = AddressUtil_ConvertToChecksumAddress_mEAEAE7FD8125E4A821AFBBD02303AB372C721C1E(__this, L_8, NULL);
		return L_9;
	}
}
// System.Boolean Nethereum.Util.AddressUtil::IsAnEmptyAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressUtil_IsAnEmptyAddress_m221DABCC86731D4BE8A35F0117DDBD6A444CDEF5 (AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* __this, String_t* ___address0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BCF4B50E72B7CCD6AD748E8D2FDCADBF49961A8);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___address0;
		bool L_1;
		L_1 = String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		String_t* L_2 = ___address0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral4BCF4B50E72B7CCD6AD748E8D2FDCADBF49961A8, NULL);
		return L_3;
	}
}
// System.Boolean Nethereum.Util.AddressUtil::IsNotAnEmptyAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressUtil_IsNotAnEmptyAddress_m29BE761FD994B89DEEBBB3A68094E78639DA091C (AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* __this, String_t* ___address0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___address0;
		bool L_1;
		L_1 = AddressUtil_IsAnEmptyAddress_m221DABCC86731D4BE8A35F0117DDBD6A444CDEF5(__this, L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.String Nethereum.Util.AddressUtil::AddressValueOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AddressUtil_AddressValueOrEmpty_m52378E4D5565D31F5730C6A4F85C087F47BA7794 (AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* __this, String_t* ___address0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BCF4B50E72B7CCD6AD748E8D2FDCADBF49961A8);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___address0;
		bool L_1;
		L_1 = AddressExtensions_IsAnEmptyAddress_m102147942812A727BC06E9CCF6DE23D34D43FBB1(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_2 = ___address0;
		return L_2;
	}

IL_000a:
	{
		return _stringLiteral4BCF4B50E72B7CCD6AD748E8D2FDCADBF49961A8;
	}
}
// System.Boolean Nethereum.Util.AddressUtil::IsEmptyOrEqualsAddress(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressUtil_IsEmptyOrEqualsAddress_m1D0433ADA035C7FF0A90BA349245DF1A03894E43 (AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* __this, String_t* ___address10, String_t* ___candidate1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___address10;
		bool L_1;
		L_1 = AddressUtil_IsAnEmptyAddress_m221DABCC86731D4BE8A35F0117DDBD6A444CDEF5(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = ___address10;
		String_t* L_3 = ___candidate1;
		bool L_4;
		L_4 = AddressUtil_AreAddressesTheSame_m8A2CBB12085D5E51C38D78340818F908AC4E9583(__this, L_2, L_3, NULL);
		return L_4;
	}

IL_0012:
	{
		return (bool)1;
	}
}
// System.Boolean Nethereum.Util.AddressUtil::AreAddressesTheSame(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressUtil_AreAddressesTheSame_m8A2CBB12085D5E51C38D78340818F908AC4E9583 (AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* __this, String_t* ___address10, String_t* ___address21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B8_0 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	String_t* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	String_t* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	{
		String_t* L_0 = ___address10;
		bool L_1;
		L_1 = AddressExtensions_IsAnEmptyAddress_m102147942812A727BC06E9CCF6DE23D34D43FBB1(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = ___address21;
		bool L_3;
		L_3 = AddressExtensions_IsAnEmptyAddress_m102147942812A727BC06E9CCF6DE23D34D43FBB1(L_2, NULL);
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)1;
	}

IL_0012:
	{
		String_t* L_4 = ___address10;
		bool L_5;
		L_5 = AddressExtensions_IsAnEmptyAddress_m102147942812A727BC06E9CCF6DE23D34D43FBB1(L_4, NULL);
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_6 = ___address21;
		bool L_7;
		L_7 = AddressExtensions_IsAnEmptyAddress_m102147942812A727BC06E9CCF6DE23D34D43FBB1(L_6, NULL);
		if (!L_7)
		{
			goto IL_0024;
		}
	}

IL_0022:
	{
		return (bool)0;
	}

IL_0024:
	{
		String_t* L_8 = ___address10;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = HexByteConvertorExtensions_EnsureHexPrefix_m19AD0DDEC70CED3CA428D91D7B270C5B18E09F7B(L_8, NULL);
		String_t* L_10 = L_9;
		G_B7_0 = L_10;
		if (L_10)
		{
			G_B8_0 = L_10;
			goto IL_0031;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		goto IL_0036;
	}

IL_0031:
	{
		NullCheck(G_B8_0);
		String_t* L_11;
		L_11 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(G_B8_0, NULL);
		G_B9_0 = L_11;
	}

IL_0036:
	{
		String_t* L_12 = ___address21;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_13;
		L_13 = HexByteConvertorExtensions_EnsureHexPrefix_m19AD0DDEC70CED3CA428D91D7B270C5B18E09F7B(L_12, NULL);
		String_t* L_14 = L_13;
		G_B10_0 = L_14;
		G_B10_1 = G_B9_0;
		if (L_14)
		{
			G_B11_0 = L_14;
			G_B11_1 = G_B9_0;
			goto IL_0043;
		}
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		goto IL_0048;
	}

IL_0043:
	{
		NullCheck(G_B11_0);
		String_t* L_15;
		L_15 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(G_B11_0, NULL);
		G_B12_0 = L_15;
		G_B12_1 = G_B11_1;
	}

IL_0048:
	{
		bool L_16;
		L_16 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(G_B12_1, G_B12_0, 5, NULL);
		return L_16;
	}
}
// System.String Nethereum.Util.AddressUtil::ConvertToChecksumAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AddressUtil_ConvertToChecksumAddress_mEAEAE7FD8125E4A821AFBBD02303AB372C721C1E (AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* __this, String_t* ___address0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		String_t* L_0 = ___address0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = HexByteConvertorExtensions_RemoveHexPrefix_m710ADEC9AA9C65D6E4A6E7E4F15B31862C627C15(L_1, NULL);
		___address0 = L_2;
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_3 = (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6*)il2cpp_codegen_object_new(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Sha3Keccack__ctor_m1A1B72B31D347C8FEEAB51607616A6C4992DE7D0(L_3, NULL);
		String_t* L_4 = ___address0;
		NullCheck(L_3);
		String_t* L_5;
		L_5 = Sha3Keccack_CalculateHash_mBF873E85E6ECCD02DAA0C4582456294476D50752(L_3, L_4, NULL);
		V_0 = L_5;
		V_1 = _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89;
		V_2 = 0;
		goto IL_0076;
	}

IL_0023:
	{
		String_t* L_6 = V_0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		Il2CppChar L_8;
		L_8 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, L_7, NULL);
		V_3 = L_8;
		String_t* L_9;
		L_9 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_3), NULL);
		int32_t L_10;
		L_10 = Int32_Parse_mF336325913DF125A6F8F05F2909E3AFB0D73830E(L_9, ((int32_t)515), NULL);
		if ((((int32_t)L_10) <= ((int32_t)7)))
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_11 = V_1;
		String_t* L_12 = ___address0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Il2CppChar L_14;
		L_14 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_12, L_13, NULL);
		V_3 = L_14;
		String_t* L_15;
		L_15 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_3), NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_15, NULL);
		String_t* L_17;
		L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_11, L_16, NULL);
		V_1 = L_17;
		goto IL_0072;
	}

IL_005c:
	{
		String_t* L_18 = V_1;
		String_t* L_19 = ___address0;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		Il2CppChar L_21;
		L_21 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_19, L_20, NULL);
		V_3 = L_21;
		String_t* L_22;
		L_22 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_3), NULL);
		String_t* L_23;
		L_23 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_18, L_22, NULL);
		V_1 = L_23;
	}

IL_0072:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0076:
	{
		int32_t L_25 = V_2;
		String_t* L_26 = ___address0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_26, NULL);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_28 = V_1;
		return L_28;
	}
}
// System.String Nethereum.Util.AddressUtil::ConvertToValid20ByteAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AddressUtil_ConvertToValid20ByteAddress_m8EB54E7B992682701BE41F67A476BCD936FEB423 (AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* __this, String_t* ___address0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___address0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		___address0 = L_1;
	}

IL_000a:
	{
		String_t* L_2 = ___address0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = HexByteConvertorExtensions_RemoveHexPrefix_m710ADEC9AA9C65D6E4A6E7E4F15B31862C627C15(L_2, NULL);
		___address0 = L_3;
		String_t* L_4 = ___address0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F(L_4, ((int32_t)40), ((int32_t)48), NULL);
		String_t* L_6;
		L_6 = HexByteConvertorExtensions_EnsureHexPrefix_m19AD0DDEC70CED3CA428D91D7B270C5B18E09F7B(L_5, NULL);
		return L_6;
	}
}
// System.Boolean Nethereum.Util.AddressUtil::IsValidAddressLength(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressUtil_IsValidAddressLength_mBB59639C0D05894CD86F0D609749A0D8C073857D (AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* __this, String_t* ___address0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___address0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		String_t* L_2 = ___address0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = HexByteConvertorExtensions_RemoveHexPrefix_m710ADEC9AA9C65D6E4A6E7E4F15B31862C627C15(L_2, NULL);
		___address0 = L_3;
		String_t* L_4 = ___address0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		return (bool)((((int32_t)L_5) == ((int32_t)((int32_t)40)))? 1 : 0);
	}
}
// System.Boolean Nethereum.Util.AddressUtil::IsValidEthereumAddressHexFormat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressUtil_IsValidEthereumAddressHexFormat_m5912B7AC620F987884B5041E1BBF5C069DAE9F2B (AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* __this, String_t* ___address0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___address0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		String_t* L_2 = ___address0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = HexByteConvertorExtensions_HasHexPrefix_mD4C1F56C944A21EC76059EE2C45256675BED7B21(L_2, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_4 = ___address0;
		bool L_5;
		L_5 = AddressUtil_IsValidAddressLength_mBB59639C0D05894CD86F0D609749A0D8C073857D(__this, L_4, NULL);
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_6 = ___address0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = HexByteConvertorExtensions_IsHex_mEA3912EB494419C6BE913E2CE98C05E8464378FF(L_6, NULL);
		return L_7;
	}

IL_0022:
	{
		return (bool)0;
	}
}
// System.Boolean Nethereum.Util.AddressUtil::IsChecksumAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressUtil_IsChecksumAddress_mAFB8250D7C23483559A79CB4BF9664FD468C8AB3 (AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* __this, String_t* ___address0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		String_t* L_0 = ___address0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		String_t* L_2 = ___address0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = HexByteConvertorExtensions_RemoveHexPrefix_m710ADEC9AA9C65D6E4A6E7E4F15B31862C627C15(L_2, NULL);
		___address0 = L_3;
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_4 = (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6*)il2cpp_codegen_object_new(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Sha3Keccack__ctor_m1A1B72B31D347C8FEEAB51607616A6C4992DE7D0(L_4, NULL);
		String_t* L_5 = ___address0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_5, NULL);
		NullCheck(L_4);
		String_t* L_7;
		L_7 = Sha3Keccack_CalculateHash_mBF873E85E6ECCD02DAA0C4582456294476D50752(L_4, L_6, NULL);
		V_0 = L_7;
		V_1 = 0;
		goto IL_00a3;
	}

IL_0027:
	{
		String_t* L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, L_9, NULL);
		V_3 = L_10;
		String_t* L_11;
		L_11 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_3), NULL);
		int32_t L_12;
		L_12 = Int32_Parse_mF336325913DF125A6F8F05F2909E3AFB0D73830E(L_11, ((int32_t)515), NULL);
		V_2 = L_12;
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) <= ((int32_t)7)))
		{
			goto IL_006f;
		}
	}
	{
		String_t* L_14 = ___address0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		Il2CppChar L_16;
		L_16 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_14, L_15, NULL);
		V_3 = L_16;
		String_t* L_17;
		L_17 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_3), NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_17, NULL);
		String_t* L_19 = ___address0;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		Il2CppChar L_21;
		L_21 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_19, L_20, NULL);
		V_3 = L_21;
		String_t* L_22;
		L_22 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_3), NULL);
		bool L_23;
		L_23 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_18, L_22, NULL);
		if (L_23)
		{
			goto IL_009d;
		}
	}

IL_006f:
	{
		int32_t L_24 = V_2;
		if ((((int32_t)L_24) > ((int32_t)7)))
		{
			goto IL_009f;
		}
	}
	{
		String_t* L_25 = ___address0;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		Il2CppChar L_27;
		L_27 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_25, L_26, NULL);
		V_3 = L_27;
		String_t* L_28;
		L_28 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_3), NULL);
		NullCheck(L_28);
		String_t* L_29;
		L_29 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_28, NULL);
		String_t* L_30 = ___address0;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		Il2CppChar L_32;
		L_32 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_30, L_31, NULL);
		V_3 = L_32;
		String_t* L_33;
		L_33 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_3), NULL);
		bool L_34;
		L_34 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_29, L_33, NULL);
		if (!L_34)
		{
			goto IL_009f;
		}
	}

IL_009d:
	{
		return (bool)0;
	}

IL_009f:
	{
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00a3:
	{
		int32_t L_36 = V_1;
		if ((((int32_t)L_36) < ((int32_t)((int32_t)40))))
		{
			goto IL_0027;
		}
	}
	{
		return (bool)1;
	}
}
// System.Void Nethereum.Util.AddressUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressUtil__ctor_mFBD8B7B116001BE2851469A24B3C41095B7253B1 (AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* __this, const RuntimeMethod* method) 
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


// Conversion methods for marshalling of: Nethereum.Util.BigDecimal
IL2CPP_EXTERN_C void BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A_marshal_pinvoke(const BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A& unmarshaled, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A_marshaled_pinvoke& marshaled)
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke(unmarshaled.___U3CMantissaU3Ek__BackingField_1, marshaled.___U3CMantissaU3Ek__BackingField_1);
	marshaled.___U3CExponentU3Ek__BackingField_2 = unmarshaled.___U3CExponentU3Ek__BackingField_2;
}
IL2CPP_EXTERN_C void BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A_marshal_pinvoke_back(const BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A_marshaled_pinvoke& marshaled, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A& unmarshaled)
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F unmarshaledU3CMantissaU3Ek__BackingField_temp_0;
	memset((&unmarshaledU3CMantissaU3Ek__BackingField_temp_0), 0, sizeof(unmarshaledU3CMantissaU3Ek__BackingField_temp_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke_back(marshaled.___U3CMantissaU3Ek__BackingField_1, unmarshaledU3CMantissaU3Ek__BackingField_temp_0);
	unmarshaled.___U3CMantissaU3Ek__BackingField_1 = unmarshaledU3CMantissaU3Ek__BackingField_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___U3CMantissaU3Ek__BackingField_1))->____bits_1), (void*)NULL);
	int32_t unmarshaledU3CExponentU3Ek__BackingField_temp_1 = 0;
	unmarshaledU3CExponentU3Ek__BackingField_temp_1 = marshaled.___U3CExponentU3Ek__BackingField_2;
	unmarshaled.___U3CExponentU3Ek__BackingField_2 = unmarshaledU3CExponentU3Ek__BackingField_temp_1;
}
// Conversion method for clean up from marshalling of: Nethereum.Util.BigDecimal
IL2CPP_EXTERN_C void BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A_marshal_pinvoke_cleanup(BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A_marshaled_pinvoke& marshaled)
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke_cleanup(marshaled.___U3CMantissaU3Ek__BackingField_1);
}


// Conversion methods for marshalling of: Nethereum.Util.BigDecimal
IL2CPP_EXTERN_C void BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A_marshal_com(const BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A& unmarshaled, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A_marshaled_com& marshaled)
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_com(unmarshaled.___U3CMantissaU3Ek__BackingField_1, marshaled.___U3CMantissaU3Ek__BackingField_1);
	marshaled.___U3CExponentU3Ek__BackingField_2 = unmarshaled.___U3CExponentU3Ek__BackingField_2;
}
IL2CPP_EXTERN_C void BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A_marshal_com_back(const BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A_marshaled_com& marshaled, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A& unmarshaled)
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F unmarshaledU3CMantissaU3Ek__BackingField_temp_0;
	memset((&unmarshaledU3CMantissaU3Ek__BackingField_temp_0), 0, sizeof(unmarshaledU3CMantissaU3Ek__BackingField_temp_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_com_back(marshaled.___U3CMantissaU3Ek__BackingField_1, unmarshaledU3CMantissaU3Ek__BackingField_temp_0);
	unmarshaled.___U3CMantissaU3Ek__BackingField_1 = unmarshaledU3CMantissaU3Ek__BackingField_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___U3CMantissaU3Ek__BackingField_1))->____bits_1), (void*)NULL);
	int32_t unmarshaledU3CExponentU3Ek__BackingField_temp_1 = 0;
	unmarshaledU3CExponentU3Ek__BackingField_temp_1 = marshaled.___U3CExponentU3Ek__BackingField_2;
	unmarshaled.___U3CExponentU3Ek__BackingField_2 = unmarshaledU3CExponentU3Ek__BackingField_temp_1;
}
// Conversion method for clean up from marshalling of: Nethereum.Util.BigDecimal
IL2CPP_EXTERN_C void BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A_marshal_com_cleanup(BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A_marshaled_com& marshaled)
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_com_cleanup(marshaled.___U3CMantissaU3Ek__BackingField_1);
}
// System.Void Nethereum.Util.BigDecimal::.ctor(Nethereum.Util.BigDecimal,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigDecimal__ctor_m93B854CACE48161D2F63923BE5DC30F22CF55B7F (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___bigDecimal0, bool ___alwaysTruncate1, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0;
		L_0 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&___bigDecimal0), NULL);
		int32_t L_1;
		L_1 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline((&___bigDecimal0), NULL);
		bool L_2 = ___alwaysTruncate1;
		BigDecimal__ctor_m2C570A2032C8AC61D694C93DF30C8EFF5E660FC2(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void BigDecimal__ctor_m93B854CACE48161D2F63923BE5DC30F22CF55B7F_AdjustorThunk (RuntimeObject* __this, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___bigDecimal0, bool ___alwaysTruncate1, const RuntimeMethod* method)
{
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*>(__this + _offset);
	BigDecimal__ctor_m93B854CACE48161D2F63923BE5DC30F22CF55B7F(_thisAdjusted, ___bigDecimal0, ___alwaysTruncate1, method);
}
// System.Void Nethereum.Util.BigDecimal::.ctor(System.Decimal,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigDecimal__ctor_mE224345E3C5A3EC92B8268D22C107252D53B8761 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, bool ___alwaysTruncate1, const RuntimeMethod* method) 
{
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___value0;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_1;
		L_1 = BigDecimal_op_Implicit_m8C904BD712C4301F9272587002B2163D5B9D8584(L_0, NULL);
		bool L_2 = ___alwaysTruncate1;
		BigDecimal__ctor_m93B854CACE48161D2F63923BE5DC30F22CF55B7F(__this, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void BigDecimal__ctor_mE224345E3C5A3EC92B8268D22C107252D53B8761_AdjustorThunk (RuntimeObject* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, bool ___alwaysTruncate1, const RuntimeMethod* method)
{
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*>(__this + _offset);
	BigDecimal__ctor_mE224345E3C5A3EC92B8268D22C107252D53B8761(_thisAdjusted, ___value0, ___alwaysTruncate1, method);
}
// System.Void Nethereum.Util.BigDecimal::.ctor(System.Numerics.BigInteger,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigDecimal__ctor_m2C570A2032C8AC61D694C93DF30C8EFF5E660FC2 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___mantissa0, int32_t ___exponent1, bool ___alwaysTruncate2, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_initobj(__this, sizeof(BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A));
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___mantissa0;
		BigDecimal_set_Mantissa_mCF06CF260D40574B915E19C1D11507C93BBDFAD4_inline(__this, L_0, NULL);
		int32_t L_1 = ___exponent1;
		BigDecimal_set_Exponent_mE6924E3CB5E9F09FA790576B883DA74E779E08F5_inline(__this, L_1, NULL);
		BigDecimal_NormaliseExponentBiggerThanZero_mCAA8129FFB8A677EF36C670235F4B26E6CBE656C(__this, NULL);
		BigDecimal_Normalize_m04C7276F84F37D4B64A289D772F83170FFAA70CE(__this, NULL);
		bool L_2 = ___alwaysTruncate2;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_3;
		L_3 = BigDecimal_Truncate_m38AC1DA34FA00AEC384E97881C4F9E9F409E09A9(__this, ((int32_t)50), NULL);
	}

IL_002d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void BigDecimal__ctor_m2C570A2032C8AC61D694C93DF30C8EFF5E660FC2_AdjustorThunk (RuntimeObject* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___mantissa0, int32_t ___exponent1, bool ___alwaysTruncate2, const RuntimeMethod* method)
{
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*>(__this + _offset);
	BigDecimal__ctor_m2C570A2032C8AC61D694C93DF30C8EFF5E660FC2(_thisAdjusted, ___mantissa0, ___exponent1, ___alwaysTruncate2, method);
}
// System.Numerics.BigInteger Nethereum.Util.BigDecimal::get_Mantissa()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->___U3CMantissaU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*>(__this + _offset);
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F _returnValue;
	_returnValue = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Nethereum.Util.BigDecimal::set_Mantissa(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigDecimal_set_Mantissa_mCF06CF260D40574B915E19C1D11507C93BBDFAD4 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___value0;
		__this->___U3CMantissaU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CMantissaU3Ek__BackingField_1))->____bits_1), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void BigDecimal_set_Mantissa_mCF06CF260D40574B915E19C1D11507C93BBDFAD4_AdjustorThunk (RuntimeObject* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method)
{
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*>(__this + _offset);
	BigDecimal_set_Mantissa_mCF06CF260D40574B915E19C1D11507C93BBDFAD4_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 Nethereum.Util.BigDecimal::get_Exponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CExponentU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Nethereum.Util.BigDecimal::set_Exponent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigDecimal_set_Exponent_mE6924E3CB5E9F09FA790576B883DA74E779E08F5 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CExponentU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void BigDecimal_set_Exponent_mE6924E3CB5E9F09FA790576B883DA74E779E08F5_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*>(__this + _offset);
	BigDecimal_set_Exponent_mE6924E3CB5E9F09FA790576B883DA74E779E08F5_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 Nethereum.Util.BigDecimal::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigDecimal_CompareTo_mB7F7A18C578027070FA28D808D1F7872AB0C6AD8 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A_il2cpp_TypeInfo_var)))
		{
			goto IL_0011;
		}
	}

IL_000b:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigDecimal_CompareTo_mB7F7A18C578027070FA28D808D1F7872AB0C6AD8_RuntimeMethod_var)));
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___obj0;
		int32_t L_4;
		L_4 = BigDecimal_CompareTo_m3D418F5F4AFE73163A1A277C60B54FFE0BFB252C(__this, ((*(BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*)((BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*)(BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*)UnBox(L_3, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A_il2cpp_TypeInfo_var)))), NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t BigDecimal_CompareTo_mB7F7A18C578027070FA28D808D1F7872AB0C6AD8_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BigDecimal_CompareTo_mB7F7A18C578027070FA28D808D1F7872AB0C6AD8(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 Nethereum.Util.BigDecimal::CompareTo(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigDecimal_CompareTo_m3D418F5F4AFE73163A1A277C60B54FFE0BFB252C (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___other0, const RuntimeMethod* method) 
{
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_0 = (*(BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*)__this);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_1 = ___other0;
		bool L_2;
		L_2 = BigDecimal_op_LessThan_m2ED55EA83C770652548F4E4574042F4B6835E2F0(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_3 = (*(BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*)__this);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_4 = ___other0;
		bool L_5;
		L_5 = BigDecimal_op_GreaterThan_m42270FCFAE3BB25EC2CF97282486E47B6A9EBAE4(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_001e;
		}
	}
	{
		return 0;
	}

IL_001e:
	{
		return 1;
	}

IL_0020:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C  int32_t BigDecimal_CompareTo_m3D418F5F4AFE73163A1A277C60B54FFE0BFB252C_AdjustorThunk (RuntimeObject* __this, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___other0, const RuntimeMethod* method)
{
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BigDecimal_CompareTo_m3D418F5F4AFE73163A1A277C60B54FFE0BFB252C(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void Nethereum.Util.BigDecimal::NormaliseExponentBiggerThanZero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigDecimal_NormaliseExponentBiggerThanZero_mCAA8129FFB8A677EF36C670235F4B26E6CBE656C (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(((int32_t)10), NULL);
		int32_t L_3;
		L_3 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline(__this, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = BigInteger_Pow_m26F5247594D5A8D0F0810D11ED79D2BDE8162B56(L_2, L_3, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = BigInteger_op_Multiply_m2AF82FA0B4750F56C6A5522A54FBFF2C84919EFE(L_1, L_4, NULL);
		BigDecimal_set_Mantissa_mCF06CF260D40574B915E19C1D11507C93BBDFAD4_inline(__this, L_5, NULL);
		BigDecimal_set_Exponent_mE6924E3CB5E9F09FA790576B883DA74E779E08F5_inline(__this, 0, NULL);
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void BigDecimal_NormaliseExponentBiggerThanZero_mCAA8129FFB8A677EF36C670235F4B26E6CBE656C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*>(__this + _offset);
	BigDecimal_NormaliseExponentBiggerThanZero_mCAA8129FFB8A677EF36C670235F4B26E6CBE656C(_thisAdjusted, method);
}
// System.Void Nethereum.Util.BigDecimal::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigDecimal_Normalize_m04C7276F84F37D4B64A289D772F83170FFAA70CE (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_1;
	memset((&V_1), 0, sizeof(V_1));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline(__this, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = BigInteger_get_IsZero_m54B3F16D56CB9E59DBEC6929CF61A7FBE3592DC4((&V_0), NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		BigDecimal_set_Exponent_mE6924E3CB5E9F09FA790576B883DA74E779E08F5_inline(__this, 0, NULL);
		return;
	}

IL_0021:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(0, NULL);
		V_1 = L_3;
		goto IL_0060;
	}

IL_002a:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(((int32_t)10), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6;
		L_6 = BigInteger_DivRem_m802550C294ADB18D197A74A093BD2199171F9ED2(L_4, L_5, (&V_1), NULL);
		V_2 = L_6;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7 = V_1;
		bool L_8;
		L_8 = BigInteger_op_Inequality_mB9EBC12ED2739B3BE3F327ABB232B1A31344F199(L_7, ((int64_t)0), NULL);
		if (L_8)
		{
			goto IL_0060;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_9 = V_2;
		BigDecimal_set_Mantissa_mCF06CF260D40574B915E19C1D11507C93BBDFAD4_inline(__this, L_9, NULL);
		int32_t L_10;
		L_10 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline(__this, NULL);
		V_3 = L_10;
		int32_t L_11 = V_3;
		BigDecimal_set_Exponent_mE6924E3CB5E9F09FA790576B883DA74E779E08F5_inline(__this, ((int32_t)il2cpp_codegen_add(L_11, 1)), NULL);
	}

IL_0060:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_12 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = BigInteger_op_Equality_mC3E68AE3326F7FAC3441A5618537BFB24CD15248(L_12, ((int64_t)0), NULL);
		if (L_13)
		{
			goto IL_002a;
		}
	}
	{
		BigDecimal_NormaliseExponentBiggerThanZero_mCAA8129FFB8A677EF36C670235F4B26E6CBE656C(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void BigDecimal_Normalize_m04C7276F84F37D4B64A289D772F83170FFAA70CE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*>(__this + _offset);
	BigDecimal_Normalize_m04C7276F84F37D4B64A289D772F83170FFAA70CE(_thisAdjusted, method);
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::Truncate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_Truncate_m38AC1DA34FA00AEC384E97881C4F9E9F409E09A9 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, int32_t ___precision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___precision0;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDF8AABD446632C7DFD26E667306D08F2425EFC9A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigDecimal_Truncate_m38AC1DA34FA00AEC384E97881C4F9E9F409E09A9_RuntimeMethod_var)));
	}

IL_000f:
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_2 = (*(BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*)__this);
		V_0 = L_2;
		BigDecimal_Normalize_m04C7276F84F37D4B64A289D772F83170FFAA70CE((&V_0), NULL);
		goto IL_0049;
	}

IL_001f:
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* L_3 = (&V_0);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(((int32_t)10), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6;
		L_6 = BigInteger_op_Division_mEABFC30E3B59FF3FF53F8CEB65F70D13CD2E64D5(L_4, L_5, NULL);
		BigDecimal_set_Mantissa_mCF06CF260D40574B915E19C1D11507C93BBDFAD4_inline(L_3, L_6, NULL);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* L_7 = (&V_0);
		int32_t L_8;
		L_8 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline(L_7, NULL);
		V_1 = L_8;
		int32_t L_9 = V_1;
		BigDecimal_set_Exponent_mE6924E3CB5E9F09FA790576B883DA74E779E08F5_inline(L_7, ((int32_t)il2cpp_codegen_add(L_9, 1)), NULL);
	}

IL_0049:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_10;
		L_10 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&V_0), NULL);
		int32_t L_11;
		L_11 = BigIntegerExtensions_NumberOfDigits_m54A176ACC287A99AF6B5A266DDE79A189C02AA65(L_10, NULL);
		int32_t L_12 = ___precision0;
		if ((((int32_t)L_11) > ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_13 = V_0;
		return L_13;
	}
}
IL2CPP_EXTERN_C  BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_Truncate_m38AC1DA34FA00AEC384E97881C4F9E9F409E09A9_AdjustorThunk (RuntimeObject* __this, int32_t ___precision0, const RuntimeMethod* method)
{
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*>(__this + _offset);
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A _returnValue;
	_returnValue = BigDecimal_Truncate_m38AC1DA34FA00AEC384E97881C4F9E9F409E09A9(_thisAdjusted, ___precision0, method);
	return _returnValue;
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::RoundAwayFromZero(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_RoundAwayFromZero_mA8F2271B38937526F9A1B3F93A295DCEE144CE23 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, int32_t ___significantDigits0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A V_1;
	memset((&V_1), 0, sizeof(V_1));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* G_B11_1 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* G_B10_1 = NULL;
	int32_t G_B12_0 = 0;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B12_1;
	memset((&G_B12_1), 0, sizeof(G_B12_1));
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* G_B12_2 = NULL;
	{
		int32_t L_0 = ___significantDigits0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___significantDigits0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)2000000000))))
		{
			goto IL_0017;
		}
	}

IL_000c:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral316F631FB9C4C420C2E74898E8868021F9B7C1EA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigDecimal_RoundAwayFromZero_mA8F2271B38937526F9A1B3F93A295DCEE144CE23_RuntimeMethod_var)));
	}

IL_0017:
	{
		int32_t L_3;
		L_3 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline(__this, NULL);
		int32_t L_4 = ___significantDigits0;
		if ((((int32_t)L_3) < ((int32_t)((-L_4)))))
		{
			goto IL_0028;
		}
	}
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_5 = (*(BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*)__this);
		return L_5;
	}

IL_0028:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6;
		L_6 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = BigInteger_op_LessThan_mD76A0CAA6AB2F6A0C712889429122ECA85261ABD(L_6, ((int64_t)0), NULL);
		V_0 = L_7;
		bool L_8 = V_0;
		if (L_8)
		{
			goto IL_0041;
		}
	}
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_9 = (*(BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*)__this);
		G_B8_0 = L_9;
		goto IL_004c;
	}

IL_0041:
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_10 = (*(BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*)__this);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_11;
		L_11 = BigDecimal_op_UnaryNegation_mD90A0B7E1B7E64DAABE575F0E4E89BD4E0DECCE7(L_10, NULL);
		G_B8_0 = L_11;
	}

IL_004c:
	{
		V_1 = G_B8_0;
		BigDecimal_Normalize_m04C7276F84F37D4B64A289D772F83170FFAA70CE((&V_1), NULL);
		goto IL_00a8;
	}

IL_0056:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_12;
		L_12 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_13;
		L_13 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(((int32_t)10), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_14;
		L_14 = BigInteger_DivRem_m802550C294ADB18D197A74A093BD2199171F9ED2(L_12, L_13, (&V_2), NULL);
		BigDecimal_set_Mantissa_mCF06CF260D40574B915E19C1D11507C93BBDFAD4_inline((&V_1), L_14, NULL);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* L_15 = (&V_1);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_16;
		L_16 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline(L_15, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_17 = V_2;
		bool L_18;
		L_18 = BigInteger_op_GreaterThanOrEqual_mC867614569FD633E14E1F9AE662451AEEBA536CF(L_17, ((int64_t)5), NULL);
		G_B10_0 = L_16;
		G_B10_1 = L_15;
		if (L_18)
		{
			G_B11_0 = L_16;
			G_B11_1 = L_15;
			goto IL_0087;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		goto IL_0088;
	}

IL_0087:
	{
		G_B12_0 = 1;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
	}

IL_0088:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_19;
		L_19 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(G_B12_0, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_20;
		L_20 = BigInteger_op_Addition_m895A3ED96D07E1A6E4AD97483EDC256107A31B12(G_B12_1, L_19, NULL);
		BigDecimal_set_Mantissa_mCF06CF260D40574B915E19C1D11507C93BBDFAD4_inline(G_B12_2, L_20, NULL);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* L_21 = (&V_1);
		int32_t L_22;
		L_22 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline(L_21, NULL);
		V_3 = L_22;
		int32_t L_23 = V_3;
		BigDecimal_set_Exponent_mE6924E3CB5E9F09FA790576B883DA74E779E08F5_inline(L_21, ((int32_t)il2cpp_codegen_add(L_23, 1)), NULL);
	}

IL_00a8:
	{
		int32_t L_24;
		L_24 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline((&V_1), NULL);
		int32_t L_25 = ___significantDigits0;
		if ((((int32_t)L_24) < ((int32_t)((-L_25)))))
		{
			goto IL_0056;
		}
	}
	{
		bool L_26 = V_0;
		if (L_26)
		{
			goto IL_00b8;
		}
	}
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_27 = V_1;
		return L_27;
	}

IL_00b8:
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_28 = V_1;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_29;
		L_29 = BigDecimal_op_UnaryNegation_mD90A0B7E1B7E64DAABE575F0E4E89BD4E0DECCE7(L_28, NULL);
		return L_29;
	}
}
IL2CPP_EXTERN_C  BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_RoundAwayFromZero_mA8F2271B38937526F9A1B3F93A295DCEE144CE23_AdjustorThunk (RuntimeObject* __this, int32_t ___significantDigits0, const RuntimeMethod* method)
{
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*>(__this + _offset);
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A _returnValue;
	_returnValue = BigDecimal_RoundAwayFromZero_mA8F2271B38937526F9A1B3F93A295DCEE144CE23(_thisAdjusted, ___significantDigits0, method);
	return _returnValue;
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::Floor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_Floor_m0C10AAE9F0FB4413D5CF5C9ACEA4C72EF66E5DC9 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0;
		L_0 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline(__this, NULL);
		int32_t L_1;
		L_1 = BigIntegerExtensions_NumberOfDigits_m54A176ACC287A99AF6B5A266DDE79A189C02AA65(L_0, NULL);
		int32_t L_2;
		L_2 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline(__this, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_4;
		L_4 = BigDecimal_op_Implicit_mD5B0EAF293EF97181A42C9CEFF1541D5C69B58B4(0, NULL);
		return L_4;
	}

IL_001e:
	{
		int32_t L_5 = V_0;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_6;
		L_6 = BigDecimal_Truncate_m38AC1DA34FA00AEC384E97881C4F9E9F409E09A9(__this, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_Floor_m0C10AAE9F0FB4413D5CF5C9ACEA4C72EF66E5DC9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*>(__this + _offset);
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A _returnValue;
	_returnValue = BigDecimal_Floor_m0C10AAE9F0FB4413D5CF5C9ACEA4C72EF66E5DC9(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Nethereum.Util.BigDecimal::NumberOfDigits(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigDecimal_NumberOfDigits_m6340D19AD525A27031A7B3E3BAB1B21D5B82EDD3 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___value0;
		int32_t L_1;
		L_1 = BigIntegerExtensions_NumberOfDigits_m54A176ACC287A99AF6B5A266DDE79A189C02AA65(L_0, NULL);
		return L_1;
	}
}
// System.String Nethereum.Util.BigDecimal::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigDecimal_ToString_mBDEDD4AB3129C60092D2CFC8DBA890B22A99AFC0 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral571B8015AB310D000C937E6BB40186AA60B9C5C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool G_B9_0 = false;
	bool G_B1_0 = false;
	bool G_B8_0 = false;
	bool G_B2_0 = false;
	bool G_B7_0 = false;
	bool G_B3_0 = false;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	bool G_B5_2 = false;
	int32_t G_B4_0 = 0;
	String_t* G_B4_1 = NULL;
	bool G_B4_2 = false;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	String_t* G_B6_2 = NULL;
	bool G_B6_3 = false;
	{
		BigDecimal_Normalize_m04C7276F84F37D4B64A289D772F83170FFAA70CE(__this, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0;
		L_0 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = BigInteger_op_LessThan_mD76A0CAA6AB2F6A0C712889429122ECA85261ABD(L_0, ((int64_t)0), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline(__this, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigInteger_Abs_mA142B2697C88CED7D671EEC470D0FE1A1AE9CB81(L_2, NULL);
		V_1 = L_3;
		String_t* L_4;
		L_4 = BigInteger_ToString_m6AFB0DE9CD953DA8B015C31B3CC1FEF86D98A306((&V_1), NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline(__this, NULL);
		G_B1_0 = L_1;
		if (!L_5)
		{
			G_B9_0 = L_1;
			goto IL_0092;
		}
	}
	{
		String_t* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		int32_t L_8;
		L_8 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline(__this, NULL);
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = V_2;
		String_t* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		G_B2_0 = G_B1_0;
		if ((((int32_t)L_9) >= ((int32_t)L_11)))
		{
			G_B8_0 = G_B1_0;
			goto IL_0088;
		}
	}
	{
		int32_t L_12 = V_2;
		G_B3_0 = G_B2_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			G_B7_0 = G_B2_0;
			goto IL_0069;
		}
	}
	{
		String_t* L_13 = V_0;
		int32_t L_14 = V_2;
		int32_t L_15 = V_2;
		G_B4_0 = L_14;
		G_B4_1 = L_13;
		G_B4_2 = G_B3_0;
		if (!L_15)
		{
			G_B5_0 = L_14;
			G_B5_1 = L_13;
			G_B5_2 = G_B3_0;
			goto IL_005c;
		}
	}
	{
		G_B6_0 = _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0061;
	}

IL_005c:
	{
		G_B6_0 = _stringLiteral571B8015AB310D000C937E6BB40186AA60B9C5C1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0061:
	{
		NullCheck(G_B6_2);
		String_t* L_16;
		L_16 = String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A(G_B6_2, G_B6_1, G_B6_0, NULL);
		V_0 = L_16;
		G_B9_0 = G_B6_3;
		goto IL_0092;
	}

IL_0069:
	{
		String_t* L_17 = V_0;
		int32_t L_18 = V_2;
		String_t* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_19, NULL);
		NullCheck(L_17);
		String_t* L_21;
		L_21 = String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F(L_17, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_18, (-1))), L_20)), ((int32_t)48), NULL);
		String_t* L_22;
		L_22 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral571B8015AB310D000C937E6BB40186AA60B9C5C1, L_21, NULL);
		V_0 = L_22;
		G_B9_0 = G_B7_0;
		goto IL_0092;
	}

IL_0088:
	{
		String_t* L_23 = V_0;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		String_t* L_25;
		L_25 = String_PadRight_m7C573780177B3246D67D860C2A75AEF5832C7543(L_23, L_24, ((int32_t)48), NULL);
		V_0 = L_25;
		G_B9_0 = G_B8_0;
	}

IL_0092:
	{
		if (G_B9_0)
		{
			goto IL_0096;
		}
	}
	{
		String_t* L_26 = V_0;
		return L_26;
	}

IL_0096:
	{
		String_t* L_27 = V_0;
		String_t* L_28;
		L_28 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, L_27, NULL);
		return L_28;
	}
}
IL2CPP_EXTERN_C  String_t* BigDecimal_ToString_mBDEDD4AB3129C60092D2CFC8DBA890B22A99AFC0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = BigDecimal_ToString_mBDEDD4AB3129C60092D2CFC8DBA890B22A99AFC0(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Nethereum.Util.BigDecimal::Equals(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDecimal_Equals_mF601DFA13FF8CB76B5FBD4F3D1BCFF59A947BFB6 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___other0, const RuntimeMethod* method) 
{
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A V_0;
	memset((&V_0), 0, sizeof(V_0));
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A V_1;
	memset((&V_1), 0, sizeof(V_1));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_0 = (*(BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*)__this);
		V_0 = L_0;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_1 = ___other0;
		V_1 = L_1;
		BigDecimal_Normalize_m04C7276F84F37D4B64A289D772F83170FFAA70CE((&V_0), NULL);
		BigDecimal_Normalize_m04C7276F84F37D4B64A289D772F83170FFAA70CE((&V_1), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&V_1), NULL);
		V_2 = L_2;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&V_0), NULL);
		bool L_4;
		L_4 = BigInteger_Equals_m36D3C46B170C61FBA8D78C5D4D52B6627DCB2314((&V_2), L_3, NULL);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_5;
		L_5 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline((&V_1), NULL);
		int32_t L_6;
		L_6 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline((&V_0), NULL);
		return (bool)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
	}

IL_0040:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool BigDecimal_Equals_mF601DFA13FF8CB76B5FBD4F3D1BCFF59A947BFB6_AdjustorThunk (RuntimeObject* __this, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___other0, const RuntimeMethod* method)
{
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*>(__this + _offset);
	bool _returnValue;
	_returnValue = BigDecimal_Equals_mF601DFA13FF8CB76B5FBD4F3D1BCFF59A947BFB6(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Nethereum.Util.BigDecimal::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDecimal_Equals_m30FDE2EA2FAD247190DEDCF744BE3ECF2647FC3F (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_2 = ___obj0;
		bool L_3;
		L_3 = BigDecimal_Equals_mF601DFA13FF8CB76B5FBD4F3D1BCFF59A947BFB6(__this, ((*(BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*)((BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*)(BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*)UnBox(L_2, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A_il2cpp_TypeInfo_var)))), NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool BigDecimal_Equals_m30FDE2EA2FAD247190DEDCF744BE3ECF2647FC3F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*>(__this + _offset);
	bool _returnValue;
	_returnValue = BigDecimal_Equals_m30FDE2EA2FAD247190DEDCF744BE3ECF2647FC3F(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 Nethereum.Util.BigDecimal::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigDecimal_GetHashCode_m5EF56AD24DFE3E3BE57F6CC3298D27AFB036CFAE (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, const RuntimeMethod* method) 
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0;
		L_0 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = BigInteger_GetHashCode_m2CB01C462C09EB23616010EB24E0A87A4D35D783((&V_0), NULL);
		int32_t L_2;
		L_2 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline(__this, NULL);
		return ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)397)))^L_2));
	}
}
IL2CPP_EXTERN_C  int32_t BigDecimal_GetHashCode_m5EF56AD24DFE3E3BE57F6CC3298D27AFB036CFAE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BigDecimal_GetHashCode_m5EF56AD24DFE3E3BE57F6CC3298D27AFB036CFAE(_thisAdjusted, method);
	return _returnValue;
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_op_Implicit_mD5B0EAF293EF97181A42C9CEFF1541D5C69B58B4 (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(L_0, NULL);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_2;
		memset((&L_2), 0, sizeof(L_2));
		BigDecimal__ctor_m2C570A2032C8AC61D694C93DF30C8EFF5E660FC2((&L_2), L_1, 0, (bool)0, /*hidden argument*/NULL);
		return L_2;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Implicit(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_op_Implicit_m09596C2B1DDEFFAFEFFEDC597CC3A83551497C76 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___value0;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_1;
		memset((&L_1), 0, sizeof(L_1));
		BigDecimal__ctor_m2C570A2032C8AC61D694C93DF30C8EFF5E660FC2((&L_1), L_0, 0, (bool)0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Implicit(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_op_Implicit_m56CB2CB2D99F8AE030DC5CEE7A450C5C8F88CE96 (double ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1;
		L_1 = Convert_ToDecimal_mAF1D2181BB8C5D3F25C0963245437B4AF4E6C575(L_0, NULL);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_2;
		memset((&L_2), 0, sizeof(L_2));
		BigDecimal__ctor_mE224345E3C5A3EC92B8268D22C107252D53B8761((&L_2), L_1, (bool)0, /*hidden argument*/NULL);
		return L_2;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Implicit(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_op_Implicit_m8C904BD712C4301F9272587002B2163D5B9D8584 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = BigInteger_op_Explicit_mDABB25BDB23E1041C50E2C0927DC3E5C7B564863(L_0, NULL);
		V_0 = L_1;
		V_1 = 0;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_2 = ((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields*)il2cpp_codegen_static_fields_for(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var))->___One_4;
		V_2 = L_2;
		goto IL_0030;
	}

IL_0011:
	{
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4 = V_2;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_5;
		memset((&L_5), 0, sizeof(L_5));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_5), ((int32_t)10), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_6;
		L_6 = Decimal_op_Multiply_mA4945210C6DDD59AB803A2B07BA948E8A1BFD2FC(L_4, L_5, NULL);
		V_2 = L_6;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_7 = ___value0;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_8 = V_2;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_9;
		L_9 = Decimal_op_Multiply_mA4945210C6DDD59AB803A2B07BA948E8A1BFD2FC(L_7, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_10;
		L_10 = BigInteger_op_Explicit_mDABB25BDB23E1041C50E2C0927DC3E5C7B564863(L_9, NULL);
		V_0 = L_10;
	}

IL_0030:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_12;
		L_12 = BigInteger_op_Explicit_m1F21788C5AD515DC2A1FCE89B189F87449CE7835(L_11, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_13 = ___value0;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_14 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_15;
		L_15 = Decimal_op_Multiply_mA4945210C6DDD59AB803A2B07BA948E8A1BFD2FC(L_13, L_14, NULL);
		bool L_16;
		L_16 = Decimal_op_Inequality_mCFFC6B60AEDE8CFB2DEABD97FF0F2B79A31E2690(L_12, L_15, NULL);
		if (L_16)
		{
			goto IL_0011;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_17 = V_0;
		int32_t L_18 = V_1;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_19;
		memset((&L_19), 0, sizeof(L_19));
		BigDecimal__ctor_m2C570A2032C8AC61D694C93DF30C8EFF5E660FC2((&L_19), L_17, L_18, (bool)0, /*hidden argument*/NULL);
		return L_19;
	}
}
// System.Double Nethereum.Util.BigDecimal::op_Explicit(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double BigDecimal_op_Explicit_mFABA898DCB43A2686F56DE7C98F88E4A0370B22B (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = BigDecimal_ToString_mBDEDD4AB3129C60092D2CFC8DBA890B22A99AFC0((&___value0), NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		double L_2;
		L_2 = Double_Parse_m4566961BEFC86A927E00D2843F98EE83162EF2AB(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Single Nethereum.Util.BigDecimal::op_Explicit(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BigDecimal_op_Explicit_m11F35C840D36979C5A58F16F6BFAC2D0FA92B01E (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = BigDecimal_ToString_mBDEDD4AB3129C60092D2CFC8DBA890B22A99AFC0((&___value0), NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		float L_2;
		L_2 = Single_Parse_mF40465AC387D690175D63EFFF44B0E810C090786(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Decimal Nethereum.Util.BigDecimal::op_Explicit(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F BigDecimal_op_Explicit_mD7A97B290DB5EEE8EC6B139C03D867DC544D3688 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = BigDecimal_ToString_mBDEDD4AB3129C60092D2CFC8DBA890B22A99AFC0((&___value0), NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_2;
		L_2 = Decimal_Parse_mE9998C753C545CA5A781AC3E06762D5C68D7F196(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 Nethereum.Util.BigDecimal::op_Explicit(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigDecimal_op_Explicit_m51483A346723C596B8D6E28D48CA04C24765CA23 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_0 = ___value0;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1;
		L_1 = BigDecimal_op_Explicit_mD7A97B290DB5EEE8EC6B139C03D867DC544D3688(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_mBE66D4EE083FDE96BB722B10D7D23FC1748B0525(L_1, NULL);
		return L_2;
	}
}
// System.UInt32 Nethereum.Util.BigDecimal::op_Explicit(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BigDecimal_op_Explicit_mA4167B32195FA6D196A7369A74CB2B610B1295CA (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_0 = ___value0;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1;
		L_1 = BigDecimal_op_Explicit_mD7A97B290DB5EEE8EC6B139C03D867DC544D3688(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = Convert_ToUInt32_mE24BF451803F2FCC99B039E98AF0C3C2BB6C8654(L_1, NULL);
		return L_2;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_UnaryPlus(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_op_UnaryPlus_m3588FBAA21D48618C90C645B1E89E9EEE817A1A8 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___value0, const RuntimeMethod* method) 
{
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_0 = ___value0;
		return L_0;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_UnaryNegation(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_op_UnaryNegation_mD90A0B7E1B7E64DAABE575F0E4E89BD4E0DECCE7 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* L_0 = (&___value0);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850((-1), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigInteger_op_Multiply_m2AF82FA0B4750F56C6A5522A54FBFF2C84919EFE(L_1, L_2, NULL);
		BigDecimal_set_Mantissa_mCF06CF260D40574B915E19C1D11507C93BBDFAD4_inline(L_0, L_3, NULL);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_4 = ___value0;
		return L_4;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Increment(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_op_Increment_m5AC9ABDE075028A8C3C7ADB64FEE74B2F1E465ED (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___value0, const RuntimeMethod* method) 
{
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_0 = ___value0;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_1;
		L_1 = BigDecimal_op_Implicit_mD5B0EAF293EF97181A42C9CEFF1541D5C69B58B4(1, NULL);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_2;
		L_2 = BigDecimal_op_Addition_mF44D4CD9D0E7D858784AAEE85C5C30C4DA12AB2F(L_0, L_1, NULL);
		return L_2;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Decrement(Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_op_Decrement_mA76F92580419317573750564605F8A52ADE85DE2 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___value0, const RuntimeMethod* method) 
{
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_0 = ___value0;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_1;
		L_1 = BigDecimal_op_Implicit_mD5B0EAF293EF97181A42C9CEFF1541D5C69B58B4(1, NULL);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_2;
		L_2 = BigDecimal_op_Subtraction_mBEDE271D61DBFAA05155DF8D371FF586755C531E(L_0, L_1, NULL);
		return L_2;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Addition(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_op_Addition_mF44D4CD9D0E7D858784AAEE85C5C30C4DA12AB2F (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___left0, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___right1, const RuntimeMethod* method) 
{
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_0 = ___left0;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_1 = ___right1;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_2;
		L_2 = BigDecimal_Add_m13E17B562CF9367BF6F9453D3AFE914E9EF36448(L_0, L_1, NULL);
		return L_2;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Subtraction(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_op_Subtraction_mBEDE271D61DBFAA05155DF8D371FF586755C531E (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___left0, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___right1, const RuntimeMethod* method) 
{
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_0 = ___left0;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_1 = ___right1;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_2;
		L_2 = BigDecimal_op_UnaryNegation_mD90A0B7E1B7E64DAABE575F0E4E89BD4E0DECCE7(L_1, NULL);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_3;
		L_3 = BigDecimal_Add_m13E17B562CF9367BF6F9453D3AFE914E9EF36448(L_0, L_2, NULL);
		return L_3;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::Add(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_Add_m13E17B562CF9367BF6F9453D3AFE914E9EF36448 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___left0, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline((&___left0), NULL);
		int32_t L_1;
		L_1 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline((&___right1), NULL);
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0031;
		}
	}
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_2 = ___right1;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_3 = ___left0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = BigDecimal_AlignExponent_m50E85A0E7B7B648E74EEAEE595816378B4CB07E2(L_2, L_3, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&___left0), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6;
		L_6 = BigInteger_op_Addition_m895A3ED96D07E1A6E4AD97483EDC256107A31B12(L_4, L_5, NULL);
		int32_t L_7;
		L_7 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline((&___left0), NULL);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_8;
		memset((&L_8), 0, sizeof(L_8));
		BigDecimal__ctor_m2C570A2032C8AC61D694C93DF30C8EFF5E660FC2((&L_8), L_6, L_7, (bool)0, /*hidden argument*/NULL);
		return L_8;
	}

IL_0031:
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_9 = ___left0;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_10 = ___right1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_11;
		L_11 = BigDecimal_AlignExponent_m50E85A0E7B7B648E74EEAEE595816378B4CB07E2(L_9, L_10, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_12;
		L_12 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&___right1), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_13;
		L_13 = BigInteger_op_Addition_m895A3ED96D07E1A6E4AD97483EDC256107A31B12(L_11, L_12, NULL);
		int32_t L_14;
		L_14 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline((&___right1), NULL);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_15;
		memset((&L_15), 0, sizeof(L_15));
		BigDecimal__ctor_m2C570A2032C8AC61D694C93DF30C8EFF5E660FC2((&L_15), L_13, L_14, (bool)0, /*hidden argument*/NULL);
		return L_15;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Multiply(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_op_Multiply_m654C65DFC0F98E28AB20EE382BE872079A2BDB4E (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___left0, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0;
		L_0 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&___left0), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&___right1), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = BigInteger_op_Multiply_m2AF82FA0B4750F56C6A5522A54FBFF2C84919EFE(L_0, L_1, NULL);
		int32_t L_3;
		L_3 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline((&___left0), NULL);
		int32_t L_4;
		L_4 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline((&___right1), NULL);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_5;
		memset((&L_5), 0, sizeof(L_5));
		BigDecimal__ctor_m2C570A2032C8AC61D694C93DF30C8EFF5E660FC2((&L_5), L_2, ((int32_t)il2cpp_codegen_add(L_3, L_4)), (bool)0, /*hidden argument*/NULL);
		return L_5;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::op_Division(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_op_Division_m3E9E7FBFC26C394ED6AB5C8EA794C01FDA4BB4EF (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___dividend0, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___divisor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0;
		L_0 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&___dividend0), NULL);
		int32_t L_1;
		L_1 = BigDecimal_NumberOfDigits_m6340D19AD525A27031A7B3E3BAB1B21D5B82EDD3(L_0, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&___divisor1), NULL);
		int32_t L_3;
		L_3 = BigDecimal_NumberOfDigits_m6340D19AD525A27031A7B3E3BAB1B21D5B82EDD3(L_2, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)50), ((int32_t)il2cpp_codegen_subtract(L_1, L_3))));
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		V_0 = 0;
	}

IL_0023:
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* L_5 = (&___dividend0);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6;
		L_6 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7;
		L_7 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(((int32_t)10), NULL);
		int32_t L_8 = V_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_9;
		L_9 = BigInteger_Pow_m26F5247594D5A8D0F0810D11ED79D2BDE8162B56(L_7, L_8, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_10;
		L_10 = BigInteger_op_Multiply_m2AF82FA0B4750F56C6A5522A54FBFF2C84919EFE(L_6, L_9, NULL);
		BigDecimal_set_Mantissa_mCF06CF260D40574B915E19C1D11507C93BBDFAD4_inline(L_5, L_10, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_11;
		L_11 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&___dividend0), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_12;
		L_12 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&___divisor1), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_13;
		L_13 = BigInteger_op_Division_mEABFC30E3B59FF3FF53F8CEB65F70D13CD2E64D5(L_11, L_12, NULL);
		int32_t L_14;
		L_14 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline((&___dividend0), NULL);
		int32_t L_15;
		L_15 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline((&___divisor1), NULL);
		int32_t L_16 = V_0;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_17;
		memset((&L_17), 0, sizeof(L_17));
		BigDecimal__ctor_m2C570A2032C8AC61D694C93DF30C8EFF5E660FC2((&L_17), L_13, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_14, L_15)), L_16)), (bool)0, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.Boolean Nethereum.Util.BigDecimal::op_Equality(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDecimal_op_Equality_m275AC1F0D48434CF9B39F4BE932A14AC682E61D2 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___left0, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline((&___left0), NULL);
		int32_t L_1;
		L_1 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline((&___right1), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0024;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&___left0), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&___right1), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = BigInteger_op_Equality_m0F0D30001407A83C4BF6851CEC391F8E78439C1D(L_2, L_3, NULL);
		return L_4;
	}

IL_0024:
	{
		return (bool)0;
	}
}
// System.Boolean Nethereum.Util.BigDecimal::op_Inequality(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDecimal_op_Inequality_mAC7D333D982477D77A1AB47FB68D649860CE12FA (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___left0, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline((&___left0), NULL);
		int32_t L_1;
		L_1 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline((&___right1), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0024;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&___left0), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&___right1), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = BigInteger_op_Inequality_mF231CB46B3043DDB6A2F96D77816F1719AE9EA9D(L_2, L_3, NULL);
		return L_4;
	}

IL_0024:
	{
		return (bool)1;
	}
}
// System.Boolean Nethereum.Util.BigDecimal::op_LessThan(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDecimal_op_LessThan_m2ED55EA83C770652548F4E4574042F4B6835E2F0 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___left0, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline((&___left0), NULL);
		int32_t L_1;
		L_1 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline((&___right1), NULL);
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0024;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&___left0), NULL);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_3 = ___right1;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_4 = ___left0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = BigDecimal_AlignExponent_m50E85A0E7B7B648E74EEAEE595816378B4CB07E2(L_3, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = BigInteger_op_LessThan_m7AFF4FB0B1B0AF3ADFB586AD468D3B85848AD56C(L_2, L_5, NULL);
		return L_6;
	}

IL_0024:
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_7 = ___left0;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_8 = ___right1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_9;
		L_9 = BigDecimal_AlignExponent_m50E85A0E7B7B648E74EEAEE595816378B4CB07E2(L_7, L_8, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_10;
		L_10 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&___right1), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = BigInteger_op_LessThan_m7AFF4FB0B1B0AF3ADFB586AD468D3B85848AD56C(L_9, L_10, NULL);
		return L_11;
	}
}
// System.Boolean Nethereum.Util.BigDecimal::op_GreaterThan(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDecimal_op_GreaterThan_m42270FCFAE3BB25EC2CF97282486E47B6A9EBAE4 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___left0, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline((&___left0), NULL);
		int32_t L_1;
		L_1 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline((&___right1), NULL);
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0024;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&___left0), NULL);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_3 = ___right1;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_4 = ___left0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = BigDecimal_AlignExponent_m50E85A0E7B7B648E74EEAEE595816378B4CB07E2(L_3, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = BigInteger_op_GreaterThan_m8B1CB08CDDED3EABF9950DF56D045113750928B7(L_2, L_5, NULL);
		return L_6;
	}

IL_0024:
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_7 = ___left0;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_8 = ___right1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_9;
		L_9 = BigDecimal_AlignExponent_m50E85A0E7B7B648E74EEAEE595816378B4CB07E2(L_7, L_8, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_10;
		L_10 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&___right1), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = BigInteger_op_GreaterThan_m8B1CB08CDDED3EABF9950DF56D045113750928B7(L_9, L_10, NULL);
		return L_11;
	}
}
// System.Boolean Nethereum.Util.BigDecimal::op_LessThanOrEqual(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDecimal_op_LessThanOrEqual_m0DB5D82EBAF72FC472540CCEC6BB703A3B3FE648 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___left0, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline((&___left0), NULL);
		int32_t L_1;
		L_1 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline((&___right1), NULL);
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0024;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&___left0), NULL);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_3 = ___right1;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_4 = ___left0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = BigDecimal_AlignExponent_m50E85A0E7B7B648E74EEAEE595816378B4CB07E2(L_3, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = BigInteger_op_LessThanOrEqual_m0217024560C6B2E56EBE0A62A028BCF9D5610A4E(L_2, L_5, NULL);
		return L_6;
	}

IL_0024:
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_7 = ___left0;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_8 = ___right1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_9;
		L_9 = BigDecimal_AlignExponent_m50E85A0E7B7B648E74EEAEE595816378B4CB07E2(L_7, L_8, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_10;
		L_10 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&___right1), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = BigInteger_op_LessThanOrEqual_m0217024560C6B2E56EBE0A62A028BCF9D5610A4E(L_9, L_10, NULL);
		return L_11;
	}
}
// System.Boolean Nethereum.Util.BigDecimal::op_GreaterThanOrEqual(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDecimal_op_GreaterThanOrEqual_m77ED425174FF7D674E79D8BE5483878A786618C6 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___left0, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline((&___left0), NULL);
		int32_t L_1;
		L_1 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline((&___right1), NULL);
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0024;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&___left0), NULL);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_3 = ___right1;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_4 = ___left0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = BigDecimal_AlignExponent_m50E85A0E7B7B648E74EEAEE595816378B4CB07E2(L_3, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = BigInteger_op_GreaterThanOrEqual_m2112ACC2CFF7AAFD07A4F46787A545E0670A187B(L_2, L_5, NULL);
		return L_6;
	}

IL_0024:
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_7 = ___left0;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_8 = ___right1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_9;
		L_9 = BigDecimal_AlignExponent_m50E85A0E7B7B648E74EEAEE595816378B4CB07E2(L_7, L_8, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_10;
		L_10 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&___right1), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = BigInteger_op_GreaterThanOrEqual_m2112ACC2CFF7AAFD07A4F46787A545E0670A187B(L_9, L_10, NULL);
		return L_11;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_Parse_mD4B6A95248608A3B7134BE34BE369EDB9955E6C0 (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
		String_t* L_0 = ___value0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_0, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		V_1 = L_1;
		V_2 = 0;
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = ___value0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		int32_t L_5 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)il2cpp_codegen_add(L_5, 1)))), (-1)));
	}

IL_0025:
	{
		String_t* L_6 = ___value0;
		String_t* L_7 = V_0;
		NullCheck(L_6);
		String_t* L_8;
		L_8 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_6, L_7, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_9;
		L_9 = BigInteger_Parse_m8C6FB2B62154E2EE7C46930C85C120BE977576C4(L_8, NULL);
		int32_t L_10 = V_2;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_11;
		memset((&L_11), 0, sizeof(L_11));
		BigDecimal__ctor_m2C570A2032C8AC61D694C93DF30C8EFF5E660FC2((&L_11), L_9, L_10, (bool)0, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Numerics.BigInteger Nethereum.Util.BigDecimal::AlignExponent(Nethereum.Util.BigDecimal,Nethereum.Util.BigDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigDecimal_AlignExponent_m50E85A0E7B7B648E74EEAEE595816378B4CB07E2 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___value0, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___reference1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0;
		L_0 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&___value0), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(((int32_t)10), NULL);
		int32_t L_2;
		L_2 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline((&___value0), NULL);
		int32_t L_3;
		L_3 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline((&___reference1), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = BigInteger_Pow_m26F5247594D5A8D0F0810D11ED79D2BDE8162B56(L_1, ((int32_t)il2cpp_codegen_subtract(L_2, L_3)), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = BigInteger_op_Multiply_m2AF82FA0B4750F56C6A5522A54FBFF2C84919EFE(L_0, L_4, NULL);
		return L_5;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::Exp(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_Exp_mD51A4D6C535E4FED3FD32DC9EF5B08DABA14A406 (double ___exponent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_0;
		L_0 = BigDecimal_op_Implicit_mD5B0EAF293EF97181A42C9CEFF1541D5C69B58B4(1, NULL);
		V_0 = L_0;
		goto IL_0035;
	}

IL_0009:
	{
		double L_1 = ___exponent0;
		if ((((double)L_1) > ((double)(0.0))))
		{
			goto IL_0019;
		}
	}
	{
		G_B4_0 = ((int32_t)-100);
		goto IL_001b;
	}

IL_0019:
	{
		G_B4_0 = ((int32_t)100);
	}

IL_001b:
	{
		V_1 = G_B4_0;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_2 = V_0;
		int32_t L_3 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = exp(((double)L_3));
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_5;
		L_5 = BigDecimal_op_Implicit_m56CB2CB2D99F8AE030DC5CEE7A450C5C8F88CE96(L_4, NULL);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_6;
		L_6 = BigDecimal_op_Multiply_m654C65DFC0F98E28AB20EE382BE872079A2BDB4E(L_2, L_5, NULL);
		V_0 = L_6;
		double L_7 = ___exponent0;
		int32_t L_8 = V_1;
		___exponent0 = ((double)il2cpp_codegen_subtract(L_7, ((double)L_8)));
	}

IL_0035:
	{
		double L_9 = ___exponent0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_10;
		L_10 = fabs(L_9);
		if ((((double)L_10) > ((double)(100.0))))
		{
			goto IL_0009;
		}
	}
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_11 = V_0;
		double L_12 = ___exponent0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_13;
		L_13 = exp(L_12);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_14;
		L_14 = BigDecimal_op_Implicit_m56CB2CB2D99F8AE030DC5CEE7A450C5C8F88CE96(L_13, NULL);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_15;
		L_15 = BigDecimal_op_Multiply_m654C65DFC0F98E28AB20EE382BE872079A2BDB4E(L_11, L_14, NULL);
		return L_15;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::Pow(Nethereum.Util.BigDecimal,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_Pow_m0ADA04CE4B1CC1D2108F260BD4B6FAC904F00ACB (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___value0, int32_t ___exponent1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___exponent1;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE5D742782B0E080651D1931155F6F5C4E984427)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6D8BB6EE0098845B9D74C7BA4668E0F9E330ACC0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigDecimal_Pow_m0ADA04CE4B1CC1D2108F260BD4B6FAC904F00ACB_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_2 = ___exponent1;
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_3 = ((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields*)il2cpp_codegen_static_fields_for(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var))->___One_4;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_4;
		memset((&L_4), 0, sizeof(L_4));
		BigDecimal__ctor_mE224345E3C5A3EC92B8268D22C107252D53B8761((&L_4), L_3, (bool)0, /*hidden argument*/NULL);
		return L_4;
	}

IL_0023:
	{
		int32_t L_5 = ___exponent1;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0029;
		}
	}
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_6 = ___value0;
		return L_6;
	}

IL_0029:
	{
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_7 = ((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields*)il2cpp_codegen_static_fields_for(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var))->___One_4;
		BigDecimal__ctor_mE224345E3C5A3EC92B8268D22C107252D53B8761((&V_0), L_7, (bool)0, NULL);
		goto IL_0057;
	}

IL_0038:
	{
		int32_t L_8 = ___exponent1;
		if (!((int32_t)(L_8&1)))
		{
			goto IL_0045;
		}
	}
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_9 = V_0;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_10 = ___value0;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_11;
		L_11 = BigDecimal_op_Multiply_m654C65DFC0F98E28AB20EE382BE872079A2BDB4E(L_9, L_10, NULL);
		V_0 = L_11;
	}

IL_0045:
	{
		int32_t L_12 = ___exponent1;
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			goto IL_005a;
		}
	}
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_13 = ___value0;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_14 = ___value0;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_15;
		L_15 = BigDecimal_op_Multiply_m654C65DFC0F98E28AB20EE382BE872079A2BDB4E(L_13, L_14, NULL);
		___value0 = L_15;
		int32_t L_16 = ___exponent1;
		___exponent1 = ((int32_t)(L_16>>1));
	}

IL_0057:
	{
		int32_t L_17 = ___exponent1;
		if (L_17)
		{
			goto IL_0038;
		}
	}

IL_005a:
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_18 = V_0;
		return L_18;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.BigDecimal::Pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A BigDecimal_Pow_mC7F9E286006998796F3735913BC1F2FE7A673A14 (double ___basis0, double ___exponent1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_0;
		L_0 = BigDecimal_op_Implicit_mD5B0EAF293EF97181A42C9CEFF1541D5C69B58B4(1, NULL);
		V_0 = L_0;
		goto IL_0036;
	}

IL_0009:
	{
		double L_1 = ___exponent1;
		if ((((double)L_1) > ((double)(0.0))))
		{
			goto IL_0019;
		}
	}
	{
		G_B4_0 = ((int32_t)-100);
		goto IL_001b;
	}

IL_0019:
	{
		G_B4_0 = ((int32_t)100);
	}

IL_001b:
	{
		V_1 = G_B4_0;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_2 = V_0;
		double L_3 = ___basis0;
		int32_t L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265(L_3, ((double)L_4), NULL);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_6;
		L_6 = BigDecimal_op_Implicit_m56CB2CB2D99F8AE030DC5CEE7A450C5C8F88CE96(L_5, NULL);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_7;
		L_7 = BigDecimal_op_Multiply_m654C65DFC0F98E28AB20EE382BE872079A2BDB4E(L_2, L_6, NULL);
		V_0 = L_7;
		double L_8 = ___exponent1;
		int32_t L_9 = V_1;
		___exponent1 = ((double)il2cpp_codegen_subtract(L_8, ((double)L_9)));
	}

IL_0036:
	{
		double L_10 = ___exponent1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = fabs(L_10);
		if ((((double)L_11) > ((double)(100.0))))
		{
			goto IL_0009;
		}
	}
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_12 = V_0;
		double L_13 = ___basis0;
		double L_14 = ___exponent1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_15;
		L_15 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265(L_13, L_14, NULL);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_16;
		L_16 = BigDecimal_op_Implicit_m56CB2CB2D99F8AE030DC5CEE7A450C5C8F88CE96(L_15, NULL);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_17;
		L_17 = BigDecimal_op_Multiply_m654C65DFC0F98E28AB20EE382BE872079A2BDB4E(L_12, L_16, NULL);
		return L_17;
	}
}
// System.String Nethereum.Util.BigDecimal::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigDecimal_ToString_m5C537AB24B4D895F3CE282635AE9A091BC3CAE63 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, String_t* ___formatSpecifier0, RuntimeObject* ___format1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatting_t2855EBACAE6A9C452DF9C7BE20DECE31A0A684BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* V_2 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		String_t* L_0 = ___formatSpecifier0;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatting_t2855EBACAE6A9C452DF9C7BE20DECE31A0A684BF_il2cpp_TypeInfo_var);
		Il2CppChar L_1;
		L_1 = NumberFormatting_ParseFormatSpecifier_m5BF754581F6274A47227300DA7187CABC279EFDE(L_0, (&V_1), NULL);
		V_0 = L_1;
		Il2CppChar L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)99))))
		{
			goto IL_0019;
		}
	}
	{
		Il2CppChar L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)67))))
		{
			goto IL_0019;
		}
	}
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_4 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigDecimal_ToString_m5C537AB24B4D895F3CE282635AE9A091BC3CAE63_RuntimeMethod_var)));
	}

IL_0019:
	{
		BigDecimal_Normalize_m04C7276F84F37D4B64A289D772F83170FFAA70CE(__this, NULL);
		int32_t L_5;
		L_5 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline(__this, NULL);
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6;
		L_6 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline(__this, NULL);
		V_3 = L_6;
		String_t* L_7 = ___formatSpecifier0;
		RuntimeObject* L_8 = ___format1;
		String_t* L_9;
		L_9 = BigInteger_ToString_mF67077A813661D27640565FC41346D65A155B3F6((&V_3), L_7, L_8, NULL);
		return L_9;
	}

IL_0038:
	{
		RuntimeObject* L_10 = ___format1;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_11;
		L_11 = NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F(L_10, NULL);
		V_2 = L_11;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_12 = (*(BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*)__this);
		int32_t L_13 = V_1;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_14 = V_2;
		String_t* L_15;
		L_15 = BigDecimalFormatter_ToCurrencyString_m5E3BE2273B46703B022BDA7EB715A98BFCCD9B6D(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C  String_t* BigDecimal_ToString_m5C537AB24B4D895F3CE282635AE9A091BC3CAE63_AdjustorThunk (RuntimeObject* __this, String_t* ___formatSpecifier0, RuntimeObject* ___format1, const RuntimeMethod* method)
{
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = BigDecimal_ToString_m5C537AB24B4D895F3CE282635AE9A091BC3CAE63(_thisAdjusted, ___formatSpecifier0, ___format1, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Nethereum.Util.BigDecimalFormatter::ToCurrencyString(Nethereum.Util.BigDecimal,System.Int32,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigDecimalFormatter_ToCurrencyString_m5E3BE2273B46703B022BDA7EB715A98BFCCD9B6D (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___value0, int32_t ___maxDigits1, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___format2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatting_t2855EBACAE6A9C452DF9C7BE20DECE31A0A684BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		BigDecimal_Normalize_m04C7276F84F37D4B64A289D772F83170FFAA70CE((&___value0), NULL);
		int32_t L_0 = ___maxDigits1;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = ___format2;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = NumberFormatInfo_get_CurrencyDecimalDigits_m5E04D902AB388705BF7FED31630AF7730EFA34BE_inline(L_1, NULL);
		___maxDigits1 = L_2;
	}

IL_0013:
	{
		int32_t L_3 = ___maxDigits1;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_4;
		L_4 = BigDecimal_RoundAwayFromZero_mA8F2271B38937526F9A1B3F93A295DCEE144CE23((&___value0), L_3, NULL);
		V_0 = L_4;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_5 = V_0;
		RuntimeObject* L_6;
		L_6 = BigDecimalFormatter_GetDigits_m6C648C92B09B93EB041BD56B8D4BC6DCB1D79AF5(L_5, (&V_2), NULL);
		V_1 = L_6;
		StringBuilder_t* L_7 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_7, NULL);
		StringBuilder_t* L_8 = L_7;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_9;
		L_9 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = BigInteger_op_LessThan_mD76A0CAA6AB2F6A0C712889429122ECA85261ABD(L_9, ((int64_t)0), NULL);
		RuntimeObject* L_11 = V_1;
		int32_t L_12 = V_2;
		int32_t L_13 = ___maxDigits1;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_14 = ___format2;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatting_t2855EBACAE6A9C452DF9C7BE20DECE31A0A684BF_il2cpp_TypeInfo_var);
		NumberFormatting_FormatCurrency_mC84EDA50402F1200971FAEF5FFB8793F0E21AEEA(L_8, L_10, L_11, L_12, L_13, L_14, NULL);
		NullCheck(L_8);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_15;
	}
}
// System.Collections.Generic.IList`1<System.Byte> Nethereum.Util.BigDecimalFormatter::GetDigits(Nethereum.Util.BigDecimal,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BigDecimalFormatter_GetDigits_m6C648C92B09B93EB041BD56B8D4BC6DCB1D79AF5 (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___value0, int32_t* ___exponent1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Reverse_mF9816C41791212F0EE4E67A13E5AC3893BD600EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_1 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0;
		L_0 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&___value0), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = BigInteger_op_LessThan_mD76A0CAA6AB2F6A0C712889429122ECA85261ABD(L_0, ((int64_t)0), NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&___value0), NULL);
		G_B3_0 = L_2;
		goto IL_0025;
	}

IL_0019:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&___value0), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = BigInteger_op_UnaryNegation_m2C40453E25F1D2E3E5D892D92CE633C8E177C1C3(L_3, NULL);
		G_B3_0 = L_4;
	}

IL_0025:
	{
		V_0 = G_B3_0;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_5 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9(L_5, List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		V_1 = L_5;
		goto IL_0060;
	}

IL_002e:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_6 = V_1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_8;
		L_8 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(((int32_t)10), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_9;
		L_9 = BigInteger_op_Modulus_m3224170883C73BCEC10BC5ACB8ED7C979E43A8CE(L_7, L_8, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_10;
		L_10 = BigInteger_op_Implicit_mE47ECF71B693CBA3538A95F12133334F08BE31F8((uint16_t)((int32_t)48), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_11;
		L_11 = BigInteger_op_Addition_m895A3ED96D07E1A6E4AD97483EDC256107A31B12(L_9, L_10, NULL);
		uint8_t L_12;
		L_12 = BigInteger_op_Explicit_mD787D48C59BD782640D92B79382C7F83022DAD04(L_11, NULL);
		NullCheck(L_6);
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_6, L_12, List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_13 = V_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_14;
		L_14 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(((int32_t)10), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_15;
		L_15 = BigInteger_op_Division_mEABFC30E3B59FF3FF53F8CEB65F70D13CD2E64D5(L_13, L_14, NULL);
		V_0 = L_15;
	}

IL_0060:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = BigInteger_op_GreaterThan_mE2855EC97576062A6EFBFA9F7B74BBC3D7A4B8DE(L_16, ((int64_t)0), NULL);
		if (L_17)
		{
			goto IL_002e;
		}
	}
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_18 = V_1;
		NullCheck(L_18);
		List_1_Reverse_mF9816C41791212F0EE4E67A13E5AC3893BD600EF(L_18, List_1_Reverse_mF9816C41791212F0EE4E67A13E5AC3893BD600EF_RuntimeMethod_var);
		int32_t* L_19 = ___exponent1;
		int32_t L_20;
		L_20 = BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline((&___value0), NULL);
		*((int32_t*)L_19) = (int32_t)L_20;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_21 = V_1;
		return L_21;
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
// System.Int32 Nethereum.Util.BigIntegerExtensions::NumberOfDigits(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigIntegerExtensions_NumberOfDigits_m54A176ACC287A99AF6B5A266DDE79A189C02AA65 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___value0;
		int32_t L_1;
		L_1 = BigInteger_get_Sign_m0B029046A49D6CCE27899B31890BF63BD6C68E5E((&___value0), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(L_1, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigInteger_op_Multiply_m2AF82FA0B4750F56C6A5522A54FBFF2C84919EFE(L_0, L_2, NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = BigInteger_ToString_m6AFB0DE9CD953DA8B015C31B3CC1FEF86D98A306((&V_0), NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		return L_5;
	}
}
// System.Numerics.BigInteger Nethereum.Util.BigIntegerExtensions::ParseInvariant(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigIntegerExtensions_ParseInvariant_m9913A4AA2A32152C5B63476ADC1777EF1B92C97B (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigIntegerExtensions_ParseInvariant_m9913A4AA2A32152C5B63476ADC1777EF1B92C97B_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3;
		L_3 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = BigInteger_Parse_m2B82A0CB4AF02EFCD6175561813E9F0B8DA08334(L_2, L_3, NULL);
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
// System.Byte[] Nethereum.Util.ByteUtil::AppendByte(System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteUtil_AppendByte_m9B572F989730D84D90A2F27A35F663E5C09DB0FC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, uint8_t ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_0)->max_length)), 1)));
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bytes0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___bytes0;
		NullCheck(L_4);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_2, (RuntimeArray*)L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_6);
		uint8_t L_7 = ___b1;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), 1))), (uint8_t)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		return L_8;
	}
}
// System.Byte[] Nethereum.Util.ByteUtil::Slice(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteUtil_Slice_m2CD2B109CED9EDD8B0592E6CE8B6288913CBF4EC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___org0, int32_t ___start1, int32_t ___end2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Take_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m0919EA050297104B260DB970151A823245F74A6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___end2;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___org0;
		NullCheck(L_1);
		int32_t L_2 = ___end2;
		___end2 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_1)->max_length)), L_2));
	}

IL_000b:
	{
		int32_t L_3 = ___start1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(0, L_3, NULL);
		___start1 = L_4;
		int32_t L_5 = ___start1;
		int32_t L_6 = ___end2;
		int32_t L_7;
		L_7 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_5, L_6, NULL);
		___end2 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___org0;
		int32_t L_9 = ___start1;
		RuntimeObject* L_10;
		L_10 = Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8((RuntimeObject*)L_8, L_9, Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		int32_t L_11 = ___end2;
		int32_t L_12 = ___start1;
		RuntimeObject* L_13;
		L_13 = Enumerable_Take_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m0919EA050297104B260DB970151A823245F74A6D(L_10, ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), Enumerable_Take_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m0919EA050297104B260DB970151A823245F74A6D_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_13, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		return L_14;
	}
}
// System.Byte[] Nethereum.Util.ByteUtil::InitialiseEmptyByteArray(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteUtil_InitialiseEmptyByteArray_m8A8F12A11B9D77FEC52E8D1B8C8A717EB92FAF45 (int32_t ___length0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___length0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0013;
	}

IL_000b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)0);
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0013:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = ___length0;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_000b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		return L_7;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Byte> Nethereum.Util.ByteUtil::MergeToEnum(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ByteUtil_MergeToEnum_m3743FFFB577F7B24BE9668D6FEF4AC574E1D287D (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___arrays0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMergeToEnumU3Ed__5_t0D0950728046AC81FC5102F883967738D5D99CFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMergeToEnumU3Ed__5_t0D0950728046AC81FC5102F883967738D5D99CFF* L_0 = (U3CMergeToEnumU3Ed__5_t0D0950728046AC81FC5102F883967738D5D99CFF*)il2cpp_codegen_object_new(U3CMergeToEnumU3Ed__5_t0D0950728046AC81FC5102F883967738D5D99CFF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CMergeToEnumU3Ed__5__ctor_mEF282E0BA2A7545C2F9F0FBD3137044839A4C476(L_0, ((int32_t)-2), NULL);
		U3CMergeToEnumU3Ed__5_t0D0950728046AC81FC5102F883967738D5D99CFF* L_1 = L_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_2 = ___arrays0;
		NullCheck(L_1);
		L_1->___U3CU3E3__arrays_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E3__arrays_4), (void*)L_2);
		return L_1;
	}
}
// System.Byte[] Nethereum.Util.ByteUtil::Merge(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteUtil_Merge_m41BF242AC0F125479C873B4C98EEDC3FE7018A14 (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___arrays0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteUtil_t3970634EEB0967A65636D41F893596448593FE44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = ___arrays0;
		il2cpp_codegen_runtime_class_init_inline(ByteUtil_t3970634EEB0967A65636D41F893596448593FE44_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = ByteUtil_MergeToEnum_m3743FFFB577F7B24BE9668D6FEF4AC574E1D287D(L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_1, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		return L_2;
	}
}
// System.Byte[] Nethereum.Util.ByteUtil::XOR(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteUtil_XOR_m15CDE4DBF5DB145BC511FA3D33DC90E1BD699C27 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___a0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___b1;
		NullCheck(L_1);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)(((RuntimeArray*)L_0)->max_length)), ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		V_2 = 0;
		goto IL_0026;
	}

IL_0017:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
		int32_t L_6 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___a0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___b1;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_10^(int32_t)L_14))));
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0026:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		return L_18;
	}
}
// System.Byte[] Nethereum.Util.ByteUtil::PadTo32Bytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteUtil_PadTo32Bytes_mA9517B3EA8C0CFEC22F531524A26013E5D8F9F4B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytesToPad0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteUtil_t3970634EEB0967A65636D41F893596448593FE44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytesToPad0;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) < ((int32_t)((int32_t)32))))
		{
			goto IL_0009;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bytesToPad0;
		return L_1;
	}

IL_0009:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bytesToPad0;
		il2cpp_codegen_runtime_class_init_inline(ByteUtil_t3970634EEB0967A65636D41F893596448593FE44_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = ByteUtil_PadBytes_m9AA48840313F52CC444555A4C9BF8DDBEC98D85E(L_2, ((int32_t)32), NULL);
		return L_3;
	}
}
// System.Byte[] Nethereum.Util.ByteUtil::PadTo128Bytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteUtil_PadTo128Bytes_m024467C7086EFE2F7F8E5FFF025AF95A37C4F9B7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytesToPad0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteUtil_t3970634EEB0967A65636D41F893596448593FE44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytesToPad0;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) < ((int32_t)((int32_t)128))))
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bytesToPad0;
		return L_1;
	}

IL_000c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bytesToPad0;
		il2cpp_codegen_runtime_class_init_inline(ByteUtil_t3970634EEB0967A65636D41F893596448593FE44_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = ByteUtil_PadBytes_m9AA48840313F52CC444555A4C9BF8DDBEC98D85E(L_2, ((int32_t)128), NULL);
		return L_3;
	}
}
// System.Byte[] Nethereum.Util.ByteUtil::PadBytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteUtil_PadBytes_m9AA48840313F52CC444555A4C9BF8DDBEC98D85E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytesToPad0, int32_t ___numberOfBytes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___numberOfBytes1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0013;
	}

IL_000b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)0);
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0013:
	{
		int32_t L_5 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___bytesToPad0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		int32_t L_9 = ___numberOfBytes1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___bytesToPad0;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___bytesToPad0;
		NullCheck(L_11);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, 0, (RuntimeArray*)L_8, ((int32_t)il2cpp_codegen_subtract(L_9, ((int32_t)(((RuntimeArray*)L_10)->max_length)))), ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		return L_12;
	}
}
// System.Byte[] Nethereum.Util.ByteUtil::ShiftLeft(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteUtil_ShiftLeft_m11F528321F59B6BA78B9F3971AC5CABDD8215C4B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___shift1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		V_1 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___value0;
		NullCheck(L_2);
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1));
		goto IL_0054;
	}

IL_0013:
	{
		int32_t L_3 = V_2;
		int32_t L_4 = ___shift1;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_3, 8)), L_4)), 7));
		V_3 = ((int32_t)(L_5/8));
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		int32_t L_7 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___value0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = ___shift1;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_11<<((int32_t)(((int32_t)(L_12%8))&((int32_t)31)))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		uint8_t* L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		int32_t L_16 = *((uint8_t*)L_15);
		uint8_t L_17 = V_1;
		*((int8_t*)L_15) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_16|(int32_t)L_17)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___value0;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		int32_t L_22 = ___shift1;
		V_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_21<<((int32_t)(((int32_t)(L_22%8))&((int32_t)31)))))&((int32_t)65280)))>>8)));
	}

IL_0050:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
	}

IL_0054:
	{
		int32_t L_24 = V_2;
		if ((((int32_t)L_24) >= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_0;
		return L_25;
	}
}
// System.Byte[] Nethereum.Util.ByteUtil::ShiftRight(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteUtil_ShiftRight_m5B17B82898AE249CE9258141638139AE5935F6A8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___shift1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		V_1 = (uint8_t)0;
		V_2 = 0;
		goto IL_0050;
	}

IL_000f:
	{
		int32_t L_2 = V_2;
		int32_t L_3 = ___shift1;
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2, 8)), L_3))/8));
		int32_t L_4 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___value0;
		NullCheck(L_5);
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_004c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		int32_t L_7 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___value0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = ___shift1;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_11>>((int32_t)(((int32_t)(L_12%8))&((int32_t)31)))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		uint8_t* L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		int32_t L_16 = *((uint8_t*)L_15);
		uint8_t L_17 = V_1;
		*((int8_t*)L_15) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_16|(int32_t)L_17)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___value0;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		int32_t L_22 = ___shift1;
		V_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_21<<((int32_t)(((int32_t)il2cpp_codegen_subtract(8, ((int32_t)(L_22%8))))&((int32_t)31)))))&((int32_t)255))));
	}

IL_004c:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0050:
	{
		int32_t L_24 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___value0;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_000f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_0;
		return L_26;
	}
}
// System.Void Nethereum.Util.ByteUtil::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteUtil__cctor_m403D292CE7498F9713430EA9705E256302061161 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteUtil_t3970634EEB0967A65636D41F893596448593FE44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		((ByteUtil_t3970634EEB0967A65636D41F893596448593FE44_StaticFields*)il2cpp_codegen_static_fields_for(ByteUtil_t3970634EEB0967A65636D41F893596448593FE44_il2cpp_TypeInfo_var))->___EMPTY_BYTE_ARRAY_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ByteUtil_t3970634EEB0967A65636D41F893596448593FE44_StaticFields*)il2cpp_codegen_static_fields_for(ByteUtil_t3970634EEB0967A65636D41F893596448593FE44_il2cpp_TypeInfo_var))->___EMPTY_BYTE_ARRAY_0), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		((ByteUtil_t3970634EEB0967A65636D41F893596448593FE44_StaticFields*)il2cpp_codegen_static_fields_for(ByteUtil_t3970634EEB0967A65636D41F893596448593FE44_il2cpp_TypeInfo_var))->___ZERO_BYTE_ARRAY_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ByteUtil_t3970634EEB0967A65636D41F893596448593FE44_StaticFields*)il2cpp_codegen_static_fields_for(ByteUtil_t3970634EEB0967A65636D41F893596448593FE44_il2cpp_TypeInfo_var))->___ZERO_BYTE_ARRAY_1), (void*)L_1);
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
// System.Void Nethereum.Util.ByteUtil/<MergeToEnum>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMergeToEnumU3Ed__5__ctor_mEF282E0BA2A7545C2F9F0FBD3137044839A4C476 (U3CMergeToEnumU3Ed__5_t0D0950728046AC81FC5102F883967738D5D99CFF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void Nethereum.Util.ByteUtil/<MergeToEnum>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMergeToEnumU3Ed__5_System_IDisposable_Dispose_mC1841611199F9ACCF2312EED4B50AED6776A6497 (U3CMergeToEnumU3Ed__5_t0D0950728046AC81FC5102F883967738D5D99CFF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Nethereum.Util.ByteUtil/<MergeToEnum>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMergeToEnumU3Ed__5_MoveNext_m1436C164A9853D69206BC21BB2C975B3CF0BD14F (U3CMergeToEnumU3Ed__5_t0D0950728046AC81FC5102F883967738D5D99CFF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	uint8_t V_2 = 0x0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0068;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_3 = __this->___arrays_3;
		__this->___U3CU3E7__wrap1_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_5), (void*)L_3);
		__this->___U3CU3E7__wrap2_6 = 0;
		goto IL_00a2;
	}

IL_002c:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_4 = __this->___U3CU3E7__wrap1_5;
		int32_t L_5 = __this->___U3CU3E7__wrap2_6;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
		__this->___U3CU3E7__wrap3_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap3_7), (void*)L_8);
		__this->___U3CU3E7__wrap4_8 = 0;
		goto IL_007d;
	}

IL_004a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___U3CU3E7__wrap3_7;
		int32_t L_10 = __this->___U3CU3E7__wrap4_8;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = L_12;
		uint8_t L_13 = V_2;
		__this->___U3CU3E2__current_1 = L_13;
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0068:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_14 = __this->___U3CU3E7__wrap4_8;
		__this->___U3CU3E7__wrap4_8 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_007d:
	{
		int32_t L_15 = __this->___U3CU3E7__wrap4_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___U3CU3E7__wrap3_7;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_004a;
		}
	}
	{
		__this->___U3CU3E7__wrap3_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap3_7), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		int32_t L_17 = __this->___U3CU3E7__wrap2_6;
		__this->___U3CU3E7__wrap2_6 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_00a2:
	{
		int32_t L_18 = __this->___U3CU3E7__wrap2_6;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_19 = __this->___U3CU3E7__wrap1_5;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_002c;
		}
	}
	{
		__this->___U3CU3E7__wrap1_5 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_5), (void*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)NULL);
		return (bool)0;
	}
}
// System.Byte Nethereum.Util.ByteUtil/<MergeToEnum>d__5::System.Collections.Generic.IEnumerator<System.Byte>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U3CMergeToEnumU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ByteU3E_get_Current_m35449FB9E8E43EDFBA65D0B3B32D5FECD2297DF9 (U3CMergeToEnumU3Ed__5_t0D0950728046AC81FC5102F883967738D5D99CFF* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Nethereum.Util.ByteUtil/<MergeToEnum>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMergeToEnumU3Ed__5_System_Collections_IEnumerator_Reset_m93FA9906D59128183D213A894599C4E549F47926 (U3CMergeToEnumU3Ed__5_t0D0950728046AC81FC5102F883967738D5D99CFF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMergeToEnumU3Ed__5_System_Collections_IEnumerator_Reset_m93FA9906D59128183D213A894599C4E549F47926_RuntimeMethod_var)));
	}
}
// System.Object Nethereum.Util.ByteUtil/<MergeToEnum>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMergeToEnumU3Ed__5_System_Collections_IEnumerator_get_Current_m44E527368D923B912CD86E9A1633B5312C5504E3 (U3CMergeToEnumU3Ed__5_t0D0950728046AC81FC5102F883967738D5D99CFF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = __this->___U3CU3E2__current_1;
		uint8_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Byte> Nethereum.Util.ByteUtil/<MergeToEnum>d__5::System.Collections.Generic.IEnumerable<System.Byte>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMergeToEnumU3Ed__5_System_Collections_Generic_IEnumerableU3CSystem_ByteU3E_GetEnumerator_mDCAEB6A8E753C4739BAD4A4F9A9DAC42884C6515 (U3CMergeToEnumU3Ed__5_t0D0950728046AC81FC5102F883967738D5D99CFF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMergeToEnumU3Ed__5_t0D0950728046AC81FC5102F883967738D5D99CFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CMergeToEnumU3Ed__5_t0D0950728046AC81FC5102F883967738D5D99CFF* V_0 = NULL;
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
		U3CMergeToEnumU3Ed__5_t0D0950728046AC81FC5102F883967738D5D99CFF* L_3 = (U3CMergeToEnumU3Ed__5_t0D0950728046AC81FC5102F883967738D5D99CFF*)il2cpp_codegen_object_new(U3CMergeToEnumU3Ed__5_t0D0950728046AC81FC5102F883967738D5D99CFF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CMergeToEnumU3Ed__5__ctor_mEF282E0BA2A7545C2F9F0FBD3137044839A4C476(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CMergeToEnumU3Ed__5_t0D0950728046AC81FC5102F883967738D5D99CFF* L_4 = V_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_5 = __this->___U3CU3E3__arrays_4;
		NullCheck(L_4);
		L_4->___arrays_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___arrays_3), (void*)L_5);
		U3CMergeToEnumU3Ed__5_t0D0950728046AC81FC5102F883967738D5D99CFF* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Nethereum.Util.ByteUtil/<MergeToEnum>d__5::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMergeToEnumU3Ed__5_System_Collections_IEnumerable_GetEnumerator_mDC790D7B5119836BBE594D9B0C0413E030ACD95A (U3CMergeToEnumU3Ed__5_t0D0950728046AC81FC5102F883967738D5D99CFF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CMergeToEnumU3Ed__5_System_Collections_Generic_IEnumerableU3CSystem_ByteU3E_GetEnumerator_mDCAEB6A8E753C4739BAD4A4F9A9DAC42884C6515(__this, NULL);
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
// System.Int32 Nethereum.Util.ByteArrayComparer::Compare(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteArrayComparer_Compare_m7CC53715958D3C963EE0488E147D13F11E8D8414 (ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7707D8180AC8224E05B10E427AFF8CE903B0F54C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___x0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___y1;
		if (L_1)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___x0;
		if (L_2)
		{
			goto IL_000d;
		}
	}
	{
		return (-1);
	}

IL_000d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___y1;
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___x0;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___y1;
		NullCheck(L_5);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)(((RuntimeArray*)L_4)->max_length)), ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		V_1 = L_6;
		V_2 = 0;
		goto IL_003b;
	}

IL_0022:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___x0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___y1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13;
		L_13 = Byte_CompareTo_m188EF2F51CA95A2820D240FE282E165FAEF8A5B8(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), L_12, NULL);
		V_0 = L_13;
		int32_t L_14 = V_0;
		if (!L_14)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_15 = V_0;
		return L_15;
	}

IL_0037:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_003b:
	{
		int32_t L_17 = V_2;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0022;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___x0;
		int32_t L_20;
		L_20 = Enumerable_Count_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7707D8180AC8224E05B10E427AFF8CE903B0F54C((RuntimeObject*)L_19, Enumerable_Count_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7707D8180AC8224E05B10E427AFF8CE903B0F54C_RuntimeMethod_var);
		V_3 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___y1;
		int32_t L_22;
		L_22 = Enumerable_Count_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7707D8180AC8224E05B10E427AFF8CE903B0F54C((RuntimeObject*)L_21, Enumerable_Count_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7707D8180AC8224E05B10E427AFF8CE903B0F54C_RuntimeMethod_var);
		int32_t L_23;
		L_23 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((&V_3), L_22, NULL);
		return L_23;
	}
}
// System.Boolean Nethereum.Util.ByteArrayComparer::Equals(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteArrayComparer_Equals_mFECF77480CE9B02E79A559DCE2B0626F750EA1B2 (ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___y1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___x0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___y1;
		int32_t L_2;
		L_2 = ByteArrayComparer_Compare_m7CC53715958D3C963EE0488E147D13F11E8D8414(__this, L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 Nethereum.Util.ByteArrayComparer::GetHashCode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteArrayComparer_GetHashCode_m5F27FB032E83C1C7759E5D3FCC103A59AA5D8617 (ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___obj0, const RuntimeMethod* method) 
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___obj0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		memset((&L_1), 0, sizeof(L_1));
		BigInteger__ctor_m25FA3F3C832BC621CD91ABFAC3535A2F4EE7B371((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = BigInteger_GetHashCode_m2CB01C462C09EB23616010EB24E0A87A4D35D783((&V_0), NULL);
		return L_2;
	}
}
// System.Void Nethereum.Util.ByteArrayComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayComparer__ctor_m5621A85A161658F80BE49C560193CFFB54776CC4 (ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Nethereum.Util.ByteArrayComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayComparer__cctor_m41DE6779907209947B2539286E772086B5282FA5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9* L_0 = (ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9*)il2cpp_codegen_object_new(ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ByteArrayComparer__ctor_m5621A85A161658F80BE49C560193CFFB54776CC4(L_0, NULL);
		((ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9_StaticFields*)il2cpp_codegen_static_fields_for(ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9_il2cpp_TypeInfo_var))->___Current_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9_StaticFields*)il2cpp_codegen_static_fields_for(ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9_il2cpp_TypeInfo_var))->___Current_0), (void*)L_0);
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
// System.Int32 Nethereum.Util.ByteListComparer::Compare(System.Collections.Generic.IList`1<System.Byte>,System.Collections.Generic.IList`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteListComparer_Compare_m16D40A98365D979B267800EC6106A35AC3CCA0AE (ByteListComparer_tD219640F05BCD0EEDC1E33424BB5DFC0C636BB83* __this, RuntimeObject* ___x0, RuntimeObject* ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7707D8180AC8224E05B10E427AFF8CE903B0F54C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t2F3F43301A2C4258285E66980237B7AE65F4CD7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t958E1E27F44A1E57CF73D43A68F1EF1A1E07FE0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	int32_t V_4 = 0;
	{
		RuntimeObject* L_0 = ___x0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		RuntimeObject* L_1 = ___y1;
		if (L_1)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		RuntimeObject* L_2 = ___x0;
		if (L_2)
		{
			goto IL_000d;
		}
	}
	{
		return (-1);
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___y1;
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		RuntimeObject* L_4 = ___x0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Byte>::get_Count() */, ICollection_1_t2F3F43301A2C4258285E66980237B7AE65F4CD7C_il2cpp_TypeInfo_var, L_4);
		RuntimeObject* L_6 = ___y1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Byte>::get_Count() */, ICollection_1_t2F3F43301A2C4258285E66980237B7AE65F4CD7C_il2cpp_TypeInfo_var, L_6);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_5, L_7, NULL);
		V_1 = L_8;
		V_2 = 0;
		goto IL_0048;
	}

IL_0028:
	{
		RuntimeObject* L_9 = ___x0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Byte>::get_Item(System.Int32) */, IList_1_t958E1E27F44A1E57CF73D43A68F1EF1A1E07FE0C_il2cpp_TypeInfo_var, L_9, L_10);
		V_3 = L_11;
		RuntimeObject* L_12 = ___y1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		uint8_t L_14;
		L_14 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Byte>::get_Item(System.Int32) */, IList_1_t958E1E27F44A1E57CF73D43A68F1EF1A1E07FE0C_il2cpp_TypeInfo_var, L_12, L_13);
		int32_t L_15;
		L_15 = Byte_CompareTo_m188EF2F51CA95A2820D240FE282E165FAEF8A5B8((&V_3), L_14, NULL);
		V_0 = L_15;
		int32_t L_16 = V_0;
		if (!L_16)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}

IL_0044:
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0048:
	{
		int32_t L_19 = V_2;
		int32_t L_20 = V_1;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_21 = ___x0;
		int32_t L_22;
		L_22 = Enumerable_Count_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7707D8180AC8224E05B10E427AFF8CE903B0F54C(L_21, Enumerable_Count_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7707D8180AC8224E05B10E427AFF8CE903B0F54C_RuntimeMethod_var);
		V_4 = L_22;
		RuntimeObject* L_23 = ___y1;
		int32_t L_24;
		L_24 = Enumerable_Count_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7707D8180AC8224E05B10E427AFF8CE903B0F54C(L_23, Enumerable_Count_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7707D8180AC8224E05B10E427AFF8CE903B0F54C_RuntimeMethod_var);
		int32_t L_25;
		L_25 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((&V_4), L_24, NULL);
		return L_25;
	}
}
// System.Void Nethereum.Util.ByteListComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteListComparer__ctor_m61436C88B04F6876503EC55E25EC6654E5953D5A (ByteListComparer_tD219640F05BCD0EEDC1E33424BB5DFC0C636BB83* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Nethereum.Util.ByteListComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteListComparer__cctor_m0FD1E6AFA34979F4E2454E9F176737ABF8CD280D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteListComparer_tD219640F05BCD0EEDC1E33424BB5DFC0C636BB83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteListComparer_tD219640F05BCD0EEDC1E33424BB5DFC0C636BB83* L_0 = (ByteListComparer_tD219640F05BCD0EEDC1E33424BB5DFC0C636BB83*)il2cpp_codegen_object_new(ByteListComparer_tD219640F05BCD0EEDC1E33424BB5DFC0C636BB83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ByteListComparer__ctor_m61436C88B04F6876503EC55E25EC6654E5953D5A(L_0, NULL);
		((ByteListComparer_tD219640F05BCD0EEDC1E33424BB5DFC0C636BB83_StaticFields*)il2cpp_codegen_static_fields_for(ByteListComparer_tD219640F05BCD0EEDC1E33424BB5DFC0C636BB83_il2cpp_TypeInfo_var))->___Current_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ByteListComparer_tD219640F05BCD0EEDC1E33424BB5DFC0C636BB83_StaticFields*)il2cpp_codegen_static_fields_for(ByteListComparer_tD219640F05BCD0EEDC1E33424BB5DFC0C636BB83_il2cpp_TypeInfo_var))->___Current_0), (void*)L_0);
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
// System.String Nethereum.Util.ContractUtils::CalculateContractAddress(System.String,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContractUtils_CalculateContractAddress_m003B9A35D016BBDED5DE9545F354E6E1BD4350D4 (String_t* ___address0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___nonce1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___address0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3F415B51C76CFB7B00EE1C2F2DA3E8CFA2269CCA)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ContractUtils_CalculateContractAddress_m003B9A35D016BBDED5DE9545F354E6E1BD4350D4_RuntimeMethod_var)));
	}

IL_0018:
	{
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_3 = (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6*)il2cpp_codegen_object_new(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Sha3Keccack__ctor_m1A1B72B31D347C8FEEAB51607616A6C4992DE7D0(L_3, NULL);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_4 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_5 = L_4;
		String_t* L_6 = ___address0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_7, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_8);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_9 = L_5;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_10 = ___nonce1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_10, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_11, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = RLP_EncodeList_m2A2C2A6B4DDA95C331AECF96926B0D9C1B16FE05(L_9, NULL);
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = Sha3Keccack_CalculateHash_mE94324F2BF9D80A18C59A08CF5F0735B78ECAAA0(L_3, L_13, NULL);
		String_t* L_15;
		L_15 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_14, (bool)0, NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_15, ((int32_t)24), NULL);
		String_t* L_17;
		L_17 = AddressExtensions_ConvertToEthereumChecksumAddress_m831339B9826BB85B1CE6873372E19B208ED841E0(L_16, NULL);
		return L_17;
	}
}
// System.String Nethereum.Util.ContractUtils::CalculateCreate2AddressMinimalProxy(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContractUtils_CalculateCreate2AddressMinimalProxy_m92C229C984AEA3600A1A10A2F7572748BBD5196A (String_t* ___address0, String_t* ___saltHex1, String_t* ___deploymentAddress2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61E72265B771E2ABEC223E49644B77AF40CFA993);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACAF4A98A03BA8AD4CA372A00B3EB1821B13D668);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___deploymentAddress2;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD8EBAE0CA29F1E4B2E6A074E9AAC922CD634B94F)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE9C4E5E72379B27F0B701202AF0659F326997B6A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ContractUtils_CalculateCreate2AddressMinimalProxy_m92C229C984AEA3600A1A10A2F7572748BBD5196A_RuntimeMethod_var)));
	}

IL_0018:
	{
		String_t* L_3 = ___deploymentAddress2;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = HexByteConvertorExtensions_RemoveHexPrefix_m710ADEC9AA9C65D6E4A6E7E4F15B31862C627C15(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral61E72265B771E2ABEC223E49644B77AF40CFA993, L_4, _stringLiteralACAF4A98A03BA8AD4CA372A00B3EB1821B13D668, NULL);
		V_0 = L_5;
		String_t* L_6 = ___address0;
		String_t* L_7 = ___saltHex1;
		String_t* L_8 = V_0;
		String_t* L_9;
		L_9 = ContractUtils_CalculateCreate2Address_m650744E3E2767953F1A4EE3EF7D04D85DB967DE9(L_6, L_7, L_8, NULL);
		return L_9;
	}
}
// System.String Nethereum.Util.ContractUtils::CalculateCreate2Address(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContractUtils_CalculateCreate2Address_m650744E3E2767953F1A4EE3EF7D04D85DB967DE9 (String_t* ___address0, String_t* ___saltHex1, String_t* ___byteCodeHex2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* V_0 = NULL;
	{
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_0 = (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6*)il2cpp_codegen_object_new(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Sha3Keccack__ctor_m1A1B72B31D347C8FEEAB51607616A6C4992DE7D0(L_0, NULL);
		V_0 = L_0;
		String_t* L_1 = ___address0;
		String_t* L_2 = ___saltHex1;
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_3 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = ___byteCodeHex2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
		NullCheck(L_3);
		String_t* L_7;
		L_7 = Sha3Keccack_CalculateHashFromHex_mAAD0150F4F88644893AC48D1EE0F8B7EAD1BB68B(L_3, L_5, NULL);
		String_t* L_8;
		L_8 = ContractUtils_CalculateCreate2AddressUsingByteCodeHash_m2A41573392468D81A77F0AD9E3677CC8CC9C7D21(L_1, L_2, L_7, NULL);
		return L_8;
	}
}
// System.String Nethereum.Util.ContractUtils::CalculateCreate2AddressUsingByteCodeHash(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContractUtils_CalculateCreate2AddressUsingByteCodeHash_m2A41573392468D81A77F0AD9E3677CC8CC9C7D21 (String_t* ___address0, String_t* ___saltHex1, String_t* ___byteCodeHexHash2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEDCF3D670BF4512049C2F6AC15B2EEA5E718BFD);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___address0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3F415B51C76CFB7B00EE1C2F2DA3E8CFA2269CCA)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ContractUtils_CalculateCreate2AddressUsingByteCodeHash_m2A41573392468D81A77F0AD9E3677CC8CC9C7D21_RuntimeMethod_var)));
	}

IL_0018:
	{
		String_t* L_3 = ___saltHex1;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFD451BA3258011EFA8F90EAEAE0E7B8F26D35641)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBAEC6E601313282A8AE2E7B3C417AEA2E90DCA0F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ContractUtils_CalculateCreate2AddressUsingByteCodeHash_m2A41573392468D81A77F0AD9E3677CC8CC9C7D21_RuntimeMethod_var)));
	}

IL_0030:
	{
		String_t* L_6 = ___saltHex1;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = HexByteConvertorExtensions_EnsureHexPrefix_m19AD0DDEC70CED3CA428D91D7B270C5B18E09F7B(L_6, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)66))))
		{
			goto IL_004f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5C6ACA12AB5C4ED3715E2E25B85413958933E3B9)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBAEC6E601313282A8AE2E7B3C417AEA2E90DCA0F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ContractUtils_CalculateCreate2AddressUsingByteCodeHash_m2A41573392468D81A77F0AD9E3677CC8CC9C7D21_RuntimeMethod_var)));
	}

IL_004f:
	{
		String_t* L_10 = ___address0;
		String_t* L_11;
		L_11 = AddressExtensions_ConvertToEthereumChecksumAddress_m831339B9826BB85B1CE6873372E19B208ED841E0(L_10, NULL);
		___address0 = L_11;
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_12 = (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6*)il2cpp_codegen_object_new(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Sha3Keccack__ctor_m1A1B72B31D347C8FEEAB51607616A6C4992DE7D0(L_12, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralFEDCF3D670BF4512049C2F6AC15B2EEA5E718BFD);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralFEDCF3D670BF4512049C2F6AC15B2EEA5E718BFD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		String_t* L_16 = ___address0;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_15;
		String_t* L_18 = ___saltHex1;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_18);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_17;
		String_t* L_20 = ___byteCodeHexHash2;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_20);
		NullCheck(L_12);
		String_t* L_21;
		L_21 = Sha3Keccack_CalculateHashFromHex_mAAD0150F4F88644893AC48D1EE0F8B7EAD1BB68B(L_12, L_19, NULL);
		NullCheck(L_21);
		String_t* L_22;
		L_22 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_21, ((int32_t)24), NULL);
		String_t* L_23;
		L_23 = AddressExtensions_ConvertToEthereumChecksumAddress_m831339B9826BB85B1CE6873372E19B208ED841E0(L_22, NULL);
		return L_23;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Char Nethereum.Util.NumberFormatting::ParseFormatSpecifier(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar NumberFormatting_ParseFormatSpecifier_m5BF754581F6274A47227300DA7187CABC279EFDE (String_t* ___format0, int32_t* ___digits1, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		V_0 = 0;
		String_t* L_0 = ___format0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_00db;
		}
	}
	{
		String_t* L_2 = ___format0;
		NullCheck(L_2);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_2, 0, NULL);
		V_0 = L_3;
		Il2CppChar L_4 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, ((int32_t)65)))) > ((uint32_t)((int32_t)25)))))
		{
			goto IL_0029;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, ((int32_t)97)))) <= ((uint32_t)((int32_t)25)))))
		{
			goto IL_00db;
		}
	}

IL_0029:
	{
		String_t* L_6 = ___format0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t* L_8 = ___digits1;
		*((int32_t*)L_8) = (int32_t)(-1);
		Il2CppChar L_9 = V_0;
		return L_9;
	}

IL_0037:
	{
		String_t* L_10 = ___format0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_0055;
		}
	}
	{
		String_t* L_12 = ___format0;
		NullCheck(L_12);
		Il2CppChar L_13;
		L_13 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_12, 1, NULL);
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, ((int32_t)48)));
		int32_t L_14 = V_3;
		if ((!(((uint32_t)L_14) < ((uint32_t)((int32_t)10)))))
		{
			goto IL_008e;
		}
	}
	{
		int32_t* L_15 = ___digits1;
		int32_t L_16 = V_3;
		*((int32_t*)L_15) = (int32_t)L_16;
		Il2CppChar L_17 = V_0;
		return L_17;
	}

IL_0055:
	{
		String_t* L_18 = ___format0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_18, NULL);
		if ((!(((uint32_t)L_19) == ((uint32_t)3))))
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_20 = ___format0;
		NullCheck(L_20);
		Il2CppChar L_21;
		L_21 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_20, 1, NULL);
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, ((int32_t)48)));
		String_t* L_22 = ___format0;
		NullCheck(L_22);
		Il2CppChar L_23;
		L_23 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_22, 2, NULL);
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, ((int32_t)48)));
		int32_t L_24 = V_4;
		if ((!(((uint32_t)L_24) < ((uint32_t)((int32_t)10)))))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_25 = V_5;
		if ((!(((uint32_t)L_25) < ((uint32_t)((int32_t)10)))))
		{
			goto IL_008e;
		}
	}
	{
		int32_t* L_26 = ___digits1;
		int32_t L_27 = V_4;
		int32_t L_28 = V_5;
		*((int32_t*)L_26) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_27, ((int32_t)10))), L_28));
		Il2CppChar L_29 = V_0;
		return L_29;
	}

IL_008e:
	{
		V_1 = 0;
		V_2 = 1;
		goto IL_00a8;
	}

IL_0094:
	{
		int32_t L_30 = V_1;
		String_t* L_31 = ___format0;
		int32_t L_32 = V_2;
		int32_t L_33 = L_32;
		V_2 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		NullCheck(L_31);
		Il2CppChar L_34;
		L_34 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_31, L_33, NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_30, ((int32_t)10))), (int32_t)L_34)), ((int32_t)48)));
	}

IL_00a8:
	{
		int32_t L_35 = V_2;
		String_t* L_36 = ___format0;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_36, NULL);
		if ((((int32_t)L_35) >= ((int32_t)L_37)))
		{
			goto IL_00c4;
		}
	}
	{
		String_t* L_38 = ___format0;
		int32_t L_39 = V_2;
		NullCheck(L_38);
		Il2CppChar L_40;
		L_40 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_38, L_39, NULL);
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_40, ((int32_t)48)))) < ((uint32_t)((int32_t)10)))))
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_41 = V_1;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)10))))
		{
			goto IL_0094;
		}
	}

IL_00c4:
	{
		int32_t L_42 = V_2;
		String_t* L_43 = ___format0;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_43, NULL);
		if ((((int32_t)L_42) == ((int32_t)L_44)))
		{
			goto IL_00d6;
		}
	}
	{
		String_t* L_45 = ___format0;
		int32_t L_46 = V_2;
		NullCheck(L_45);
		Il2CppChar L_47;
		L_47 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_45, L_46, NULL);
		if (L_47)
		{
			goto IL_00db;
		}
	}

IL_00d6:
	{
		int32_t* L_48 = ___digits1;
		int32_t L_49 = V_1;
		*((int32_t*)L_48) = (int32_t)L_49;
		Il2CppChar L_50 = V_0;
		return L_50;
	}

IL_00db:
	{
		int32_t* L_51 = ___digits1;
		*((int32_t*)L_51) = (int32_t)(-1);
		String_t* L_52 = ___format0;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_52, NULL);
		if (!L_53)
		{
			goto IL_00eb;
		}
	}
	{
		Il2CppChar L_54 = V_0;
		if (!L_54)
		{
			goto IL_00eb;
		}
	}
	{
		return 0;
	}

IL_00eb:
	{
		return ((int32_t)71);
	}
}
// System.Void Nethereum.Util.NumberFormatting::FormatCurrency(System.Text.StringBuilder,System.Boolean,System.Collections.Generic.IList`1<System.Byte>,System.Int32,System.Int32,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatting_FormatCurrency_mC84EDA50402F1200971FAEF5FFB8793F0E21AEEA (StringBuilder_t* ___result0, bool ___isNegative1, RuntimeObject* ___digits2, int32_t ___exponent3, int32_t ___maxDigits4, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___info5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatting_t2855EBACAE6A9C452DF9C7BE20DECE31A0A684BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	String_t* G_B3_0 = NULL;
	{
		bool L_0 = ___isNegative1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NumberFormatting_t2855EBACAE6A9C452DF9C7BE20DECE31A0A684BF_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ((NumberFormatting_t2855EBACAE6A9C452DF9C7BE20DECE31A0A684BF_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatting_t2855EBACAE6A9C452DF9C7BE20DECE31A0A684BF_il2cpp_TypeInfo_var))->___s_posCurrencyFormats_0;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_2 = ___info5;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = NumberFormatInfo_get_CurrencyPositivePattern_m253954FD1F79EB2F9B12070A348E8E1DB0E75263_inline(L_2, NULL);
		NullCheck(L_1);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		G_B3_0 = L_5;
		goto IL_001f;
	}

IL_0012:
	{
		il2cpp_codegen_runtime_class_init_inline(NumberFormatting_t2855EBACAE6A9C452DF9C7BE20DECE31A0A684BF_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ((NumberFormatting_t2855EBACAE6A9C452DF9C7BE20DECE31A0A684BF_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatting_t2855EBACAE6A9C452DF9C7BE20DECE31A0A684BF_il2cpp_TypeInfo_var))->___s_negCurrencyFormats_1;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_7 = ___info5;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = NumberFormatInfo_get_CurrencyNegativePattern_m35EAAAC0517F13B43B444B82343F14D9B0A14FC4_inline(L_7, NULL);
		NullCheck(L_6);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		G_B3_0 = L_10;
	}

IL_001f:
	{
		V_0 = G_B3_0;
		V_1 = 0;
		goto IL_008a;
	}

IL_0024:
	{
		String_t* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		Il2CppChar L_13;
		L_13 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_11, L_12, NULL);
		V_2 = L_13;
		Il2CppChar L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)35))))
		{
			goto IL_003d;
		}
	}
	{
		Il2CppChar L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)36))))
		{
			goto IL_006e;
		}
	}
	{
		Il2CppChar L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)45))))
		{
			goto IL_005e;
		}
	}
	{
		goto IL_007e;
	}

IL_003d:
	{
		StringBuilder_t* L_17 = ___result0;
		RuntimeObject* L_18 = ___digits2;
		int32_t L_19 = ___exponent3;
		int32_t L_20 = ___maxDigits4;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_21 = ___info5;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22;
		L_22 = NumberFormatInfo_get_CurrencyGroupSizes_mA65056791CE7754317B7502465C488E2126591BA(L_21, NULL);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_23 = ___info5;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = NumberFormatInfo_get_CurrencyDecimalSeparator_mBAD4DAC07DC995653374C16BFB02E6CF2CA121BD_inline(L_23, NULL);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_25 = ___info5;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = NumberFormatInfo_get_CurrencyGroupSeparator_mE8F7687A3D4812C75092E30554B4C15C974441BD_inline(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(NumberFormatting_t2855EBACAE6A9C452DF9C7BE20DECE31A0A684BF_il2cpp_TypeInfo_var);
		NumberFormatting_FormatFixed_mE55D82EA0BCBD7C64FD0F56FA2DBB6BC20F67CE1(L_17, L_18, L_19, L_20, L_22, L_24, L_26, NULL);
		goto IL_0086;
	}

IL_005e:
	{
		StringBuilder_t* L_27 = ___result0;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_28 = ___info5;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_28, NULL);
		NullCheck(L_27);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_27, L_29, NULL);
		goto IL_0086;
	}

IL_006e:
	{
		StringBuilder_t* L_31 = ___result0;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_32 = ___info5;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = NumberFormatInfo_get_CurrencySymbol_m69E8700B6E102ADA1351AD4C6BBC7779D9F13F43_inline(L_32, NULL);
		NullCheck(L_31);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_31, L_33, NULL);
		goto IL_0086;
	}

IL_007e:
	{
		StringBuilder_t* L_35 = ___result0;
		Il2CppChar L_36 = V_2;
		NullCheck(L_35);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_35, L_36, NULL);
	}

IL_0086:
	{
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_008a:
	{
		int32_t L_39 = V_1;
		String_t* L_40 = V_0;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_40, NULL);
		if ((((int32_t)L_39) < ((int32_t)L_41)))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}
}
// System.Void Nethereum.Util.NumberFormatting::FormatFixed(System.Text.StringBuilder,System.Collections.Generic.IList`1<System.Byte>,System.Int32,System.Int32,System.Int32[],System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatting_FormatFixed_mE55D82EA0BCBD7C64FD0F56FA2DBB6BC20F67CE1 (StringBuilder_t* ___sb0, RuntimeObject* ___digits1, int32_t ___exponent2, int32_t ___maxFractionalDigits3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___groupDigits4, String_t* ___decimalSeparator5, String_t* ___groupSeparator6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t2F3F43301A2C4258285E66980237B7AE65F4CD7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t958E1E27F44A1E57CF73D43A68F1EF1A1E07FE0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B21_0 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* G_B21_1 = NULL;
	int32_t G_B20_0 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* G_B20_1 = NULL;
	int32_t G_B22_0 = 0;
	int32_t G_B22_1 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* G_B22_2 = NULL;
	StringBuilder_t* G_B36_0 = NULL;
	StringBuilder_t* G_B35_0 = NULL;
	int32_t G_B37_0 = 0;
	StringBuilder_t* G_B37_1 = NULL;
	StringBuilder_t* G_B46_0 = NULL;
	StringBuilder_t* G_B45_0 = NULL;
	int32_t G_B47_0 = 0;
	StringBuilder_t* G_B47_1 = NULL;
	{
		RuntimeObject* L_0 = ___digits1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Byte>::get_Count() */, ICollection_1_t2F3F43301A2C4258285E66980237B7AE65F4CD7C_il2cpp_TypeInfo_var, L_0);
		int32_t L_2 = ___exponent2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		V_1 = 0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_015d;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___groupDigits4;
		if (!L_4)
		{
			goto IL_0134;
		}
	}
	{
		V_2 = 0;
		int32_t L_5 = V_0;
		V_3 = L_5;
		V_4 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___groupDigits4;
		NullCheck(L_6);
		if (!(((RuntimeArray*)L_6)->max_length))
		{
			goto IL_0078;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___groupDigits4;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_10 = L_10;
		goto IL_0066;
	}

IL_002d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ___groupDigits4;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		int32_t L_15 = V_4;
		if (!L_15)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_16 = V_3;
		String_t* L_17 = ___groupSeparator6;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_17, NULL);
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, L_18));
		int32_t L_19 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = ___groupDigits4;
		NullCheck(L_20);
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_20)->max_length)), 1)))))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_004e:
	{
		int32_t L_22 = V_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = ___groupDigits4;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_10 = ((int32_t)il2cpp_codegen_add(L_22, L_26));
		int32_t L_27 = V_10;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_0066;
		}
	}

IL_0060:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_29 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_29);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_29, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NumberFormatting_FormatFixed_mE55D82EA0BCBD7C64FD0F56FA2DBB6BC20F67CE1_RuntimeMethod_var)));
	}

IL_0066:
	{
		int32_t L_30 = V_0;
		int32_t L_31 = V_10;
		if ((((int32_t)L_30) > ((int32_t)L_31)))
		{
			goto IL_002d;
		}
	}

IL_006b:
	{
		int32_t L_32 = V_10;
		if (!L_32)
		{
			goto IL_0075;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = ___groupDigits4;
		NullCheck(L_33);
		int32_t L_34 = 0;
		int32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		G_B14_0 = L_35;
		goto IL_0076;
	}

IL_0075:
	{
		G_B14_0 = 0;
	}

IL_0076:
	{
		V_4 = G_B14_0;
	}

IL_0078:
	{
		V_2 = 0;
		V_5 = 0;
		RuntimeObject* L_36 = ___digits1;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Byte>::get_Count() */, ICollection_1_t2F3F43301A2C4258285E66980237B7AE65F4CD7C_il2cpp_TypeInfo_var, L_36);
		V_6 = L_37;
		int32_t L_38 = V_0;
		int32_t L_39 = V_6;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_40 = V_6;
		G_B18_0 = L_40;
		goto IL_008f;
	}

IL_008e:
	{
		int32_t L_41 = V_0;
		G_B18_0 = L_41;
	}

IL_008f:
	{
		V_7 = G_B18_0;
		int32_t L_42 = V_3;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_43 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_42);
		V_8 = L_43;
		int32_t L_44 = V_3;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_44, 1));
		int32_t L_45 = V_0;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
		goto IL_011f;
	}

IL_00a5:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_46 = V_8;
		int32_t L_47 = V_9;
		int32_t L_48 = L_47;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_48, 1));
		int32_t L_49 = V_11;
		int32_t L_50 = V_7;
		G_B20_0 = L_48;
		G_B20_1 = L_46;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			G_B21_0 = L_48;
			G_B21_1 = L_46;
			goto IL_00b8;
		}
	}
	{
		G_B22_0 = ((int32_t)48);
		G_B22_1 = G_B20_0;
		G_B22_2 = G_B20_1;
		goto IL_00c2;
	}

IL_00b8:
	{
		RuntimeObject* L_51 = ___digits1;
		int32_t L_52 = V_1;
		int32_t L_53 = V_11;
		NullCheck(L_51);
		uint8_t L_54;
		L_54 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Byte>::get_Item(System.Int32) */, IList_1_t958E1E27F44A1E57CF73D43A68F1EF1A1E07FE0C_il2cpp_TypeInfo_var, L_51, ((int32_t)il2cpp_codegen_add(L_52, L_53)));
		G_B22_0 = ((int32_t)(L_54));
		G_B22_1 = G_B21_0;
		G_B22_2 = G_B21_1;
	}

IL_00c2:
	{
		NullCheck(G_B22_2);
		(G_B22_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B22_1), (Il2CppChar)G_B22_0);
		int32_t L_55 = V_4;
		if ((((int32_t)L_55) <= ((int32_t)0)))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_56 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = V_5;
		int32_t L_58 = V_4;
		if ((!(((uint32_t)L_57) == ((uint32_t)L_58))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_59 = V_11;
		if (!L_59)
		{
			goto IL_0119;
		}
	}
	{
		String_t* L_60 = ___groupSeparator6;
		NullCheck(L_60);
		int32_t L_61;
		L_61 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_60, NULL);
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_61, 1));
		goto IL_00fe;
	}

IL_00e5:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_62 = V_8;
		int32_t L_63 = V_9;
		int32_t L_64 = L_63;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_64, 1));
		String_t* L_65 = ___groupSeparator6;
		int32_t L_66 = V_12;
		NullCheck(L_65);
		Il2CppChar L_67;
		L_67 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_65, L_66, NULL);
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (Il2CppChar)L_67);
		int32_t L_68 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_68, 1));
	}

IL_00fe:
	{
		int32_t L_69 = V_12;
		if ((((int32_t)L_69) >= ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		int32_t L_70 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_71 = ___groupDigits4;
		NullCheck(L_71);
		if ((((int32_t)L_70) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_71)->max_length)), 1)))))
		{
			goto IL_0116;
		}
	}
	{
		int32_t L_72 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_72, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = ___groupDigits4;
		int32_t L_74 = V_2;
		NullCheck(L_73);
		int32_t L_75 = L_74;
		int32_t L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		V_4 = L_76;
	}

IL_0116:
	{
		V_5 = 0;
	}

IL_0119:
	{
		int32_t L_77 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
	}

IL_011f:
	{
		int32_t L_78 = V_11;
		if ((((int32_t)L_78) >= ((int32_t)0)))
		{
			goto IL_00a5;
		}
	}
	{
		StringBuilder_t* L_79 = ___sb0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_80 = V_8;
		NullCheck(L_79);
		StringBuilder_t* L_81;
		L_81 = StringBuilder_Append_m8455D90E068B02E8376B7650409E2325303D2456(L_79, L_80, NULL);
		int32_t L_82 = V_1;
		int32_t L_83 = V_7;
		V_1 = ((int32_t)il2cpp_codegen_add(L_82, L_83));
		goto IL_0166;
	}

IL_0134:
	{
		StringBuilder_t* L_84 = ___sb0;
		int32_t L_85 = V_1;
		RuntimeObject* L_86 = ___digits1;
		NullCheck(L_86);
		int32_t L_87;
		L_87 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Byte>::get_Count() */, ICollection_1_t2F3F43301A2C4258285E66980237B7AE65F4CD7C_il2cpp_TypeInfo_var, L_86);
		G_B35_0 = L_84;
		if ((((int32_t)L_85) < ((int32_t)L_87)))
		{
			G_B36_0 = L_84;
			goto IL_0142;
		}
	}
	{
		G_B37_0 = ((int32_t)48);
		G_B37_1 = G_B35_0;
		goto IL_014d;
	}

IL_0142:
	{
		RuntimeObject* L_88 = ___digits1;
		int32_t L_89 = V_1;
		int32_t L_90 = L_89;
		V_1 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		NullCheck(L_88);
		uint8_t L_91;
		L_91 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Byte>::get_Item(System.Int32) */, IList_1_t958E1E27F44A1E57CF73D43A68F1EF1A1E07FE0C_il2cpp_TypeInfo_var, L_88, L_90);
		G_B37_0 = ((int32_t)(L_91));
		G_B37_1 = G_B36_0;
	}

IL_014d:
	{
		NullCheck(G_B37_1);
		StringBuilder_t* L_92;
		L_92 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(G_B37_1, G_B37_0, NULL);
		int32_t L_93 = V_0;
		int32_t L_94 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		V_0 = L_94;
		if ((((int32_t)L_94) > ((int32_t)0)))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0166;
	}

IL_015d:
	{
		StringBuilder_t* L_95 = ___sb0;
		NullCheck(L_95);
		StringBuilder_t* L_96;
		L_96 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_95, ((int32_t)48), NULL);
	}

IL_0166:
	{
		int32_t L_97 = ___maxFractionalDigits3;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_01c5;
		}
	}
	{
		StringBuilder_t* L_98 = ___sb0;
		String_t* L_99 = ___decimalSeparator5;
		NullCheck(L_98);
		StringBuilder_t* L_100;
		L_100 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_98, L_99, NULL);
		int32_t L_101 = V_0;
		if ((((int32_t)L_101) >= ((int32_t)0)))
		{
			goto IL_01c1;
		}
	}
	{
		int32_t L_102 = ___maxFractionalDigits3;
		if ((((int32_t)L_102) <= ((int32_t)0)))
		{
			goto IL_01c1;
		}
	}
	{
		int32_t L_103 = V_0;
		int32_t L_104 = ___maxFractionalDigits3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_105;
		L_105 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((-L_103)), L_104, NULL);
		V_13 = L_105;
		StringBuilder_t* L_106 = ___sb0;
		int32_t L_107 = V_13;
		NullCheck(L_106);
		StringBuilder_t* L_108;
		L_108 = StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3(L_106, ((int32_t)48), L_107, NULL);
		int32_t L_109 = V_0;
		int32_t L_110 = V_13;
		V_0 = ((int32_t)il2cpp_codegen_add(L_109, L_110));
		int32_t L_111 = ___maxFractionalDigits3;
		int32_t L_112 = V_13;
		___maxFractionalDigits3 = ((int32_t)il2cpp_codegen_subtract(L_111, L_112));
		goto IL_01c1;
	}

IL_019d:
	{
		StringBuilder_t* L_113 = ___sb0;
		int32_t L_114 = V_1;
		RuntimeObject* L_115 = ___digits1;
		NullCheck(L_115);
		int32_t L_116;
		L_116 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Byte>::get_Count() */, ICollection_1_t2F3F43301A2C4258285E66980237B7AE65F4CD7C_il2cpp_TypeInfo_var, L_115);
		G_B45_0 = L_113;
		if ((((int32_t)L_114) < ((int32_t)L_116)))
		{
			G_B46_0 = L_113;
			goto IL_01ab;
		}
	}
	{
		G_B47_0 = ((int32_t)48);
		G_B47_1 = G_B45_0;
		goto IL_01b6;
	}

IL_01ab:
	{
		RuntimeObject* L_117 = ___digits1;
		int32_t L_118 = V_1;
		int32_t L_119 = L_118;
		V_1 = ((int32_t)il2cpp_codegen_add(L_119, 1));
		NullCheck(L_117);
		uint8_t L_120;
		L_120 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Byte>::get_Item(System.Int32) */, IList_1_t958E1E27F44A1E57CF73D43A68F1EF1A1E07FE0C_il2cpp_TypeInfo_var, L_117, L_119);
		G_B47_0 = ((int32_t)(L_120));
		G_B47_1 = G_B46_0;
	}

IL_01b6:
	{
		NullCheck(G_B47_1);
		StringBuilder_t* L_121;
		L_121 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(G_B47_1, G_B47_0, NULL);
		int32_t L_122 = ___maxFractionalDigits3;
		___maxFractionalDigits3 = ((int32_t)il2cpp_codegen_subtract(L_122, 1));
	}

IL_01c1:
	{
		int32_t L_123 = ___maxFractionalDigits3;
		if ((((int32_t)L_123) > ((int32_t)0)))
		{
			goto IL_019d;
		}
	}

IL_01c5:
	{
		return;
	}
}
// System.Void Nethereum.Util.NumberFormatting::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatting__cctor_mC34236513F305C2A303D46D1A285AD6DD5CADDBF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatting_t2855EBACAE6A9C452DF9C7BE20DECE31A0A684BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1649B6362D7BFE5B47AD5B0E3FF1C23199A234E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2560015662CF4CE1FBB0C239EE33C0A6BD267C34);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral323B50F239A0CEA841D1CDB6FD827C73F3DA7D58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C7A831A0474AE58A1A511C0AE679EA6ACAF323B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56C9B652878395853110609B8408AB9C094B096A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral586421FA97056FDB29C92DF11FC45E50039AF58C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6926C85E0B22B5E154849BA94F95B911D0F467AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B6E99AB68D2834E2BA881EA585508AE3BB8972B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71A4D286D674B387825473A6BF68FA0177EAEC37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7405068459969E65A509A575D3072180AB440CC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75024B19E3B0D929FB55D9F58FB9F2BD92238C9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACEB01644E7A4BCEFA0B7FD13C917DA74C936C31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4BDB973AE821DEA70F0495195EF17C3A498E945);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4C4969CA68A212C57B6FC1FBAE5AEBACB547E07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF15E6AB986C6E1A6B9D665510A803EB2245E941);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF5B5845107C1302EDC696A0C7AAAC4FA03151F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD25163422D668F498B77BBE8BE47AAF95218DD82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC400987E5EE16841C02DE14AE43EB578A7FEAC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD1E96489DC4F60E6AB0135A5F5CDE79341D8BF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8E3475A2DDD8A338B5687E45B80510D26142DC9);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralF8E3475A2DDD8A338B5687E45B80510D26142DC9);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF8E3475A2DDD8A338B5687E45B80510D26142DC9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral7405068459969E65A509A575D3072180AB440CC4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral7405068459969E65A509A575D3072180AB440CC4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral3C7A831A0474AE58A1A511C0AE679EA6ACAF323B);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3C7A831A0474AE58A1A511C0AE679EA6ACAF323B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralD25163422D668F498B77BBE8BE47AAF95218DD82);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralD25163422D668F498B77BBE8BE47AAF95218DD82);
		((NumberFormatting_t2855EBACAE6A9C452DF9C7BE20DECE31A0A684BF_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatting_t2855EBACAE6A9C452DF9C7BE20DECE31A0A684BF_il2cpp_TypeInfo_var))->___s_posCurrencyFormats_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((NumberFormatting_t2855EBACAE6A9C452DF9C7BE20DECE31A0A684BF_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatting_t2855EBACAE6A9C452DF9C7BE20DECE31A0A684BF_il2cpp_TypeInfo_var))->___s_posCurrencyFormats_0), (void*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralC4C4969CA68A212C57B6FC1FBAE5AEBACB547E07);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC4C4969CA68A212C57B6FC1FBAE5AEBACB547E07);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral2560015662CF4CE1FBB0C239EE33C0A6BD267C34);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2560015662CF4CE1FBB0C239EE33C0A6BD267C34);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralDC400987E5EE16841C02DE14AE43EB578A7FEAC0);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDC400987E5EE16841C02DE14AE43EB578A7FEAC0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral71A4D286D674B387825473A6BF68FA0177EAEC37);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral71A4D286D674B387825473A6BF68FA0177EAEC37);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral323B50F239A0CEA841D1CDB6FD827C73F3DA7D58);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral323B50F239A0CEA841D1CDB6FD827C73F3DA7D58);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralACEB01644E7A4BCEFA0B7FD13C917DA74C936C31);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralACEB01644E7A4BCEFA0B7FD13C917DA74C936C31);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral586421FA97056FDB29C92DF11FC45E50039AF58C);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral586421FA97056FDB29C92DF11FC45E50039AF58C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral6926C85E0B22B5E154849BA94F95B911D0F467AB);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral6926C85E0B22B5E154849BA94F95B911D0F467AB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralC4BDB973AE821DEA70F0495195EF17C3A498E945);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralC4BDB973AE821DEA70F0495195EF17C3A498E945);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralCF15E6AB986C6E1A6B9D665510A803EB2245E941);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralCF15E6AB986C6E1A6B9D665510A803EB2245E941);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralDD1E96489DC4F60E6AB0135A5F5CDE79341D8BF7);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralDD1E96489DC4F60E6AB0135A5F5CDE79341D8BF7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral56C9B652878395853110609B8408AB9C094B096A);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral56C9B652878395853110609B8408AB9C094B096A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral75024B19E3B0D929FB55D9F58FB9F2BD92238C9A);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral75024B19E3B0D929FB55D9F58FB9F2BD92238C9A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral1649B6362D7BFE5B47AD5B0E3FF1C23199A234E7);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral1649B6362D7BFE5B47AD5B0E3FF1C23199A234E7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral6B6E99AB68D2834E2BA881EA585508AE3BB8972B);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral6B6E99AB68D2834E2BA881EA585508AE3BB8972B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralCF5B5845107C1302EDC696A0C7AAAC4FA03151F4);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteralCF5B5845107C1302EDC696A0C7AAAC4FA03151F4);
		((NumberFormatting_t2855EBACAE6A9C452DF9C7BE20DECE31A0A684BF_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatting_t2855EBACAE6A9C452DF9C7BE20DECE31A0A684BF_il2cpp_TypeInfo_var))->___s_negCurrencyFormats_1 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((NumberFormatting_t2855EBACAE6A9C452DF9C7BE20DECE31A0A684BF_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatting_t2855EBACAE6A9C452DF9C7BE20DECE31A0A684BF_il2cpp_TypeInfo_var))->___s_negCurrencyFormats_1), (void*)L_21);
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
// Nethereum.Util.Sha3Keccack Nethereum.Util.Sha3Keccack::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* Sha3Keccack_get_Current_mD6FFC538783F0A2C61503A659F979F136C302D91 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_0 = ((Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_StaticFields*)il2cpp_codegen_static_fields_for(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField_0;
		return L_0;
	}
}
// System.String Nethereum.Util.Sha3Keccack::CalculateHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Sha3Keccack_CalculateHash_mBF873E85E6ECCD02DAA0C4582456294476D50752 (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = Sha3Keccack_CalculateHash_mE94324F2BF9D80A18C59A08CF5F0735B78ECAAA0(__this, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_4, (bool)0, NULL);
		return L_5;
	}
}
// System.String Nethereum.Util.Sha3Keccack::CalculateHashFromHex(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Sha3Keccack_CalculateHashFromHex_mAAD0150F4F88644893AC48D1EE0F8B7EAD1BB68B (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___hexValues0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCalculateHashFromHexU3Eb__4_0_m3D3B97835F0B45953618636946CB39EBA06F0397_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB6A7FC626DEC633A07B9755025D8C41EC65CF2AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* G_B2_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* G_B1_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___hexValues0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB6A7FC626DEC633A07B9755025D8C41EC65CF2AC_il2cpp_TypeInfo_var);
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_1 = ((U3CU3Ec_tB6A7FC626DEC633A07B9755025D8C41EC65CF2AC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB6A7FC626DEC633A07B9755025D8C41EC65CF2AC_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1;
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		G_B1_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			G_B2_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB6A7FC626DEC633A07B9755025D8C41EC65CF2AC_il2cpp_TypeInfo_var);
		U3CU3Ec_tB6A7FC626DEC633A07B9755025D8C41EC65CF2AC* L_3 = ((U3CU3Ec_tB6A7FC626DEC633A07B9755025D8C41EC65CF2AC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB6A7FC626DEC633A07B9755025D8C41EC65CF2AC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_4 = (Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93*)il2cpp_codegen_object_new(Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_m6A29D0BC8A4BCF6079AD2737B4119D3802B41814(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CCalculateHashFromHexU3Eb__4_0_m3D3B97835F0B45953618636946CB39EBA06F0397_RuntimeMethod_var), NULL);
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_5 = L_4;
		((U3CU3Ec_tB6A7FC626DEC633A07B9755025D8C41EC65CF2AC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB6A7FC626DEC633A07B9755025D8C41EC65CF2AC_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB6A7FC626DEC633A07B9755025D8C41EC65CF2AC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB6A7FC626DEC633A07B9755025D8C41EC65CF2AC_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0025:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7;
		L_7 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194(L_6, Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		String_t* L_8;
		L_8 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(G_B2_2, L_7, NULL);
		V_0 = L_8;
		String_t* L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_9, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = Sha3Keccack_CalculateHash_mE94324F2BF9D80A18C59A08CF5F0735B78ECAAA0(__this, L_10, NULL);
		String_t* L_12;
		L_12 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_11, (bool)0, NULL);
		return L_12;
	}
}
// System.Byte[] Nethereum.Util.Sha3Keccack::CalculateHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Sha3Keccack_CalculateHash_mE94324F2BF9D80A18C59A08CF5F0735B78ECAAA0 (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* L_0 = (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7*)il2cpp_codegen_object_new(KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		KeccakDigest__ctor_m673559AC784A846BD6D34E352ED4FBC1BA93DA0F(L_0, ((int32_t)256), NULL);
		KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Nethereum.Util.Keccak.KeccakDigest::GetDigestSize() */, L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* L_4 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___value0;
		NullCheck(L_6);
		NullCheck(L_4);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(7 /* System.Void Nethereum.Util.Keccak.KeccakDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, ((int32_t)(((RuntimeArray*)L_6)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_4);
		int32_t L_8;
		L_8 = VirtualFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(8 /* System.Int32 Nethereum.Util.Keccak.KeccakDigest::DoFinal(System.Byte[],System.Int32) */, L_4, L_7, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		return L_9;
	}
}
// System.Void Nethereum.Util.Sha3Keccack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha3Keccack__ctor_m1A1B72B31D347C8FEEAB51607616A6C4992DE7D0 (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Nethereum.Util.Sha3Keccack::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha3Keccack__cctor_m332B743728D46086CED62337AA32E6A1CE321483 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_0 = (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6*)il2cpp_codegen_object_new(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Sha3Keccack__ctor_m1A1B72B31D347C8FEEAB51607616A6C4992DE7D0(L_0, NULL);
		((Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_StaticFields*)il2cpp_codegen_static_fields_for(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_StaticFields*)il2cpp_codegen_static_fields_for(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField_0), (void*)L_0);
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
// System.Void Nethereum.Util.Sha3Keccack/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6DFBC3E0F6D833BBDBB05526210D3D209752DAF9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB6A7FC626DEC633A07B9755025D8C41EC65CF2AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB6A7FC626DEC633A07B9755025D8C41EC65CF2AC* L_0 = (U3CU3Ec_tB6A7FC626DEC633A07B9755025D8C41EC65CF2AC*)il2cpp_codegen_object_new(U3CU3Ec_tB6A7FC626DEC633A07B9755025D8C41EC65CF2AC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mC1FF44E88B8796BBA0324C7389E68B5D022FC649(L_0, NULL);
		((U3CU3Ec_tB6A7FC626DEC633A07B9755025D8C41EC65CF2AC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB6A7FC626DEC633A07B9755025D8C41EC65CF2AC_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB6A7FC626DEC633A07B9755025D8C41EC65CF2AC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB6A7FC626DEC633A07B9755025D8C41EC65CF2AC_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.Util.Sha3Keccack/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC1FF44E88B8796BBA0324C7389E68B5D022FC649 (U3CU3Ec_tB6A7FC626DEC633A07B9755025D8C41EC65CF2AC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Nethereum.Util.Sha3Keccack/<>c::<CalculateHashFromHex>b__4_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCalculateHashFromHexU3Eb__4_0_m3D3B97835F0B45953618636946CB39EBA06F0397 (U3CU3Ec_tB6A7FC626DEC633A07B9755025D8C41EC65CF2AC* __this, String_t* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = HexByteConvertorExtensions_RemoveHexPrefix_m710ADEC9AA9C65D6E4A6E7E4F15B31862C627C15(L_0, NULL);
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
// System.String Nethereum.Util.TransactionUtils::CalculateTransactionHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TransactionUtils_CalculateTransactionHash_mB744EB8463344E461DAFF4EDDF21ACFA9DB55FA5 (String_t* ___rawSignedTransaction0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_0 = (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6*)il2cpp_codegen_object_new(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Sha3Keccack__ctor_m1A1B72B31D347C8FEEAB51607616A6C4992DE7D0(L_0, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = ___rawSignedTransaction0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		NullCheck(L_0);
		String_t* L_4;
		L_4 = Sha3Keccack_CalculateHashFromHex_mAAD0150F4F88644893AC48D1EE0F8B7EAD1BB68B(L_0, L_2, NULL);
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
// System.Void Nethereum.Util.UniqueTransactionHashList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniqueTransactionHashList__ctor_m3F48B30F25D0C9E5DE7B42B864E91F2D336DB64E (UniqueTransactionHashList_tB6EDB337FFF48F8E8916B67563E5A3939388BDD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m795438439D8E973F4069A442EFA458942BCD5B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_0;
		L_0 = StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline(NULL);
		HashSet_1__ctor_m795438439D8E973F4069A442EFA458942BCD5B3F(__this, L_0, HashSet_1__ctor_m795438439D8E973F4069A442EFA458942BCD5B3F_RuntimeMethod_var);
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
// Nethereum.Util.UnitConversion Nethereum.Util.UnitConversion::get_Convert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* UnitConversion_get_Convert_mA69E5EF3A40C0B6C449B9AFF44E133D8CC24D733 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* L_0 = ((UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823_StaticFields*)il2cpp_codegen_static_fields_for(UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823_il2cpp_TypeInfo_var))->____convert_0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* L_1 = (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823*)il2cpp_codegen_object_new(UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnitConversion__ctor_m5E00A88113E7393DA8AA839644B151321771530E(L_1, NULL);
		((UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823_StaticFields*)il2cpp_codegen_static_fields_for(UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823_il2cpp_TypeInfo_var))->____convert_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823_StaticFields*)il2cpp_codegen_static_fields_for(UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823_il2cpp_TypeInfo_var))->____convert_0), (void*)L_1);
	}

IL_0011:
	{
		UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* L_2 = ((UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823_StaticFields*)il2cpp_codegen_static_fields_for(UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823_il2cpp_TypeInfo_var))->____convert_0;
		return L_2;
	}
}
// System.Decimal Nethereum.Util.UnitConversion::FromWei(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F UnitConversion_FromWei_m6C6FE013FE0628B30EDF231DB9511E4935504715 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___toUnit1, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___value0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1 = ___toUnit1;
		int32_t L_2;
		L_2 = UnitConversion_GetEthUnitValueLength_mF1F30503FC4195B0C82AE4BC49B04F2266167433(__this, L_1, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_3;
		L_3 = UnitConversion_FromWei_mAE0A85E7D933957551471D951EA94A6B93EA0672(__this, L_0, L_2, NULL);
		return L_3;
	}
}
// System.Decimal Nethereum.Util.UnitConversion::FromWei(System.Numerics.BigInteger,Nethereum.Util.UnitConversion/EthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F UnitConversion_FromWei_mFF511CCBC4BF45B7E2C4ED10E3CB22BC15CEC1A5 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, int32_t ___toUnit1, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___value0;
		int32_t L_1 = ___toUnit1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = UnitConversion_GetEthUnitValue_mFB970EA215080A5EA80B60128B404EA8AC9A1CE4(__this, L_1, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_3;
		L_3 = UnitConversion_FromWei_m6C6FE013FE0628B30EDF231DB9511E4935504715(__this, L_0, L_2, NULL);
		return L_3;
	}
}
// System.Decimal Nethereum.Util.UnitConversion::FromWei(System.Numerics.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F UnitConversion_FromWei_mAE0A85E7D933957551471D951EA94A6B93EA0672 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, int32_t ___decimalPlacesToUnit1, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___value0;
		int32_t L_1 = ___decimalPlacesToUnit1;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_2;
		memset((&L_2), 0, sizeof(L_2));
		BigDecimal__ctor_m2C570A2032C8AC61D694C93DF30C8EFF5E660FC2((&L_2), L_0, ((int32_t)il2cpp_codegen_multiply(L_1, (-1))), (bool)0, /*hidden argument*/NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_3;
		L_3 = BigDecimal_op_Explicit_mD7A97B290DB5EEE8EC6B139C03D867DC544D3688(L_2, NULL);
		return L_3;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.UnitConversion::FromWeiToBigDecimal(System.Numerics.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A UnitConversion_FromWeiToBigDecimal_m1DCFA5DC6DD98A23607B351979E17820973DE374 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, int32_t ___decimalPlacesToUnit1, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___value0;
		int32_t L_1 = ___decimalPlacesToUnit1;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_2;
		memset((&L_2), 0, sizeof(L_2));
		BigDecimal__ctor_m2C570A2032C8AC61D694C93DF30C8EFF5E660FC2((&L_2), L_0, ((int32_t)il2cpp_codegen_multiply(L_1, (-1))), (bool)0, /*hidden argument*/NULL);
		return L_2;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.UnitConversion::FromWeiToBigDecimal(System.Numerics.BigInteger,Nethereum.Util.UnitConversion/EthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A UnitConversion_FromWeiToBigDecimal_mA4A8111C4EB0B60582853952BE8255DC3AC3AE30 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, int32_t ___toUnit1, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___value0;
		int32_t L_1 = ___toUnit1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = UnitConversion_GetEthUnitValue_mFB970EA215080A5EA80B60128B404EA8AC9A1CE4(__this, L_1, NULL);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_3;
		L_3 = UnitConversion_FromWeiToBigDecimal_m8D6A3A45BA804F9B37BD4D34B89D7EE68DF0EA14(__this, L_0, L_2, NULL);
		return L_3;
	}
}
// Nethereum.Util.BigDecimal Nethereum.Util.UnitConversion::FromWeiToBigDecimal(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A UnitConversion_FromWeiToBigDecimal_m8D6A3A45BA804F9B37BD4D34B89D7EE68DF0EA14 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___toUnit1, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___value0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1 = ___toUnit1;
		int32_t L_2;
		L_2 = UnitConversion_GetEthUnitValueLength_mF1F30503FC4195B0C82AE4BC49B04F2266167433(__this, L_1, NULL);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_3;
		L_3 = UnitConversion_FromWeiToBigDecimal_m1DCFA5DC6DD98A23607B351979E17820973DE374(__this, L_0, L_2, NULL);
		return L_3;
	}
}
// System.Int32 Nethereum.Util.UnitConversion::GetEthUnitValueLength(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnitConversion_GetEthUnitValueLength_mF1F30503FC4195B0C82AE4BC49B04F2266167433 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___unitValue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormattingExtensions_ToStringInvariant_TisBigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_m629EE20DFFBB69DC3B851E8C4786130365788A70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___unitValue0;
		String_t* L_1;
		L_1 = FormattingExtensions_ToStringInvariant_TisBigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_m629EE20DFFBB69DC3B851E8C4786130365788A70(L_0, FormattingExtensions_ToStringInvariant_TisBigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_m629EE20DFFBB69DC3B851E8C4786130365788A70_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_2, 1));
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::GetEthUnitValue(Nethereum.Util.UnitConversion/EthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F UnitConversion_GetEthUnitValue_mFB970EA215080A5EA80B60128B404EA8AC9A1CE4 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, int32_t ___ethUnit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ABFB20F7CF83967C5F8BFF72CA9763D6E250813);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral270800C8217B39CD8DD46ECDEE95E004E4567FFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DF190B25B11B1AAEE1A438E606FA8F0FF446A82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739AB73E27D444291AAFE563DFBA8832AD5D722);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C92FC7F604169F6F4A63083970753C014EAD040);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91E1282FC8690BBC1CB33A6803C9119053A51DC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA597E6496EE5F8DA5EADFABF86D203733ED956DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB012E8AECF9960218AEA1A96AFE93090316B3B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB2E8EBB9651B779E1B875B8AE46782B488FCAC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC16CB3EB65A1DCE6FA520BCB808F4F0EA90A7826);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___ethUnit0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_006b;
			}
			case 1:
			{
				goto IL_0076;
			}
			case 2:
			{
				goto IL_0168;
			}
			case 3:
			{
				goto IL_008c;
			}
			case 4:
			{
				goto IL_0097;
			}
			case 5:
			{
				goto IL_0081;
			}
			case 6:
			{
				goto IL_00a2;
			}
			case 7:
			{
				goto IL_00ad;
			}
			case 8:
			{
				goto IL_00b8;
			}
			case 9:
			{
				goto IL_00c3;
			}
			case 10:
			{
				goto IL_00ce;
			}
			case 11:
			{
				goto IL_00d9;
			}
			case 12:
			{
				goto IL_00e4;
			}
			case 13:
			{
				goto IL_00ef;
			}
			case 14:
			{
				goto IL_00fa;
			}
			case 15:
			{
				goto IL_0105;
			}
			case 16:
			{
				goto IL_0110;
			}
			case 17:
			{
				goto IL_011b;
			}
			case 18:
			{
				goto IL_0126;
			}
			case 19:
			{
				goto IL_0131;
			}
			case 20:
			{
				goto IL_013c;
			}
			case 21:
			{
				goto IL_0147;
			}
			case 22:
			{
				goto IL_0152;
			}
			case 23:
			{
				goto IL_015d;
			}
		}
	}
	{
		goto IL_0168;
	}

IL_006b:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = BigIntegerExtensions_ParseInvariant_m9913A4AA2A32152C5B63476ADC1777EF1B92C97B(_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, NULL);
		return L_1;
	}

IL_0076:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = BigIntegerExtensions_ParseInvariant_m9913A4AA2A32152C5B63476ADC1777EF1B92C97B(_stringLiteral8739AB73E27D444291AAFE563DFBA8832AD5D722, NULL);
		return L_2;
	}

IL_0081:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigIntegerExtensions_ParseInvariant_m9913A4AA2A32152C5B63476ADC1777EF1B92C97B(_stringLiteral8739AB73E27D444291AAFE563DFBA8832AD5D722, NULL);
		return L_3;
	}

IL_008c:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = BigIntegerExtensions_ParseInvariant_m9913A4AA2A32152C5B63476ADC1777EF1B92C97B(_stringLiteral8739AB73E27D444291AAFE563DFBA8832AD5D722, NULL);
		return L_4;
	}

IL_0097:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = BigIntegerExtensions_ParseInvariant_m9913A4AA2A32152C5B63476ADC1777EF1B92C97B(_stringLiteralC16CB3EB65A1DCE6FA520BCB808F4F0EA90A7826, NULL);
		return L_5;
	}

IL_00a2:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6;
		L_6 = BigIntegerExtensions_ParseInvariant_m9913A4AA2A32152C5B63476ADC1777EF1B92C97B(_stringLiteralC16CB3EB65A1DCE6FA520BCB808F4F0EA90A7826, NULL);
		return L_6;
	}

IL_00ad:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7;
		L_7 = BigIntegerExtensions_ParseInvariant_m9913A4AA2A32152C5B63476ADC1777EF1B92C97B(_stringLiteral8C92FC7F604169F6F4A63083970753C014EAD040, NULL);
		return L_7;
	}

IL_00b8:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_8;
		L_8 = BigIntegerExtensions_ParseInvariant_m9913A4AA2A32152C5B63476ADC1777EF1B92C97B(_stringLiteral8C92FC7F604169F6F4A63083970753C014EAD040, NULL);
		return L_8;
	}

IL_00c3:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_9;
		L_9 = BigIntegerExtensions_ParseInvariant_m9913A4AA2A32152C5B63476ADC1777EF1B92C97B(_stringLiteral8C92FC7F604169F6F4A63083970753C014EAD040, NULL);
		return L_9;
	}

IL_00ce:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_10;
		L_10 = BigIntegerExtensions_ParseInvariant_m9913A4AA2A32152C5B63476ADC1777EF1B92C97B(_stringLiteral8C92FC7F604169F6F4A63083970753C014EAD040, NULL);
		return L_10;
	}

IL_00d9:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_11;
		L_11 = BigIntegerExtensions_ParseInvariant_m9913A4AA2A32152C5B63476ADC1777EF1B92C97B(_stringLiteral5DF190B25B11B1AAEE1A438E606FA8F0FF446A82, NULL);
		return L_11;
	}

IL_00e4:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_12;
		L_12 = BigIntegerExtensions_ParseInvariant_m9913A4AA2A32152C5B63476ADC1777EF1B92C97B(_stringLiteral5DF190B25B11B1AAEE1A438E606FA8F0FF446A82, NULL);
		return L_12;
	}

IL_00ef:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_13;
		L_13 = BigIntegerExtensions_ParseInvariant_m9913A4AA2A32152C5B63476ADC1777EF1B92C97B(_stringLiteral5DF190B25B11B1AAEE1A438E606FA8F0FF446A82, NULL);
		return L_13;
	}

IL_00fa:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_14;
		L_14 = BigIntegerExtensions_ParseInvariant_m9913A4AA2A32152C5B63476ADC1777EF1B92C97B(_stringLiteralBB012E8AECF9960218AEA1A96AFE93090316B3B1, NULL);
		return L_14;
	}

IL_0105:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_15;
		L_15 = BigIntegerExtensions_ParseInvariant_m9913A4AA2A32152C5B63476ADC1777EF1B92C97B(_stringLiteralBB012E8AECF9960218AEA1A96AFE93090316B3B1, NULL);
		return L_15;
	}

IL_0110:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_16;
		L_16 = BigIntegerExtensions_ParseInvariant_m9913A4AA2A32152C5B63476ADC1777EF1B92C97B(_stringLiteralBB012E8AECF9960218AEA1A96AFE93090316B3B1, NULL);
		return L_16;
	}

IL_011b:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_17;
		L_17 = BigIntegerExtensions_ParseInvariant_m9913A4AA2A32152C5B63476ADC1777EF1B92C97B(_stringLiteral270800C8217B39CD8DD46ECDEE95E004E4567FFF, NULL);
		return L_17;
	}

IL_0126:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_18;
		L_18 = BigIntegerExtensions_ParseInvariant_m9913A4AA2A32152C5B63476ADC1777EF1B92C97B(_stringLiteral0ABFB20F7CF83967C5F8BFF72CA9763D6E250813, NULL);
		return L_18;
	}

IL_0131:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_19;
		L_19 = BigIntegerExtensions_ParseInvariant_m9913A4AA2A32152C5B63476ADC1777EF1B92C97B(_stringLiteral0ABFB20F7CF83967C5F8BFF72CA9763D6E250813, NULL);
		return L_19;
	}

IL_013c:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_20;
		L_20 = BigIntegerExtensions_ParseInvariant_m9913A4AA2A32152C5B63476ADC1777EF1B92C97B(_stringLiteral0ABFB20F7CF83967C5F8BFF72CA9763D6E250813, NULL);
		return L_20;
	}

IL_0147:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_21;
		L_21 = BigIntegerExtensions_ParseInvariant_m9913A4AA2A32152C5B63476ADC1777EF1B92C97B(_stringLiteralBB2E8EBB9651B779E1B875B8AE46782B488FCAC0, NULL);
		return L_21;
	}

IL_0152:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_22;
		L_22 = BigIntegerExtensions_ParseInvariant_m9913A4AA2A32152C5B63476ADC1777EF1B92C97B(_stringLiteral91E1282FC8690BBC1CB33A6803C9119053A51DC8, NULL);
		return L_22;
	}

IL_015d:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_23;
		L_23 = BigIntegerExtensions_ParseInvariant_m9913A4AA2A32152C5B63476ADC1777EF1B92C97B(_stringLiteralA597E6496EE5F8DA5EADFABF86D203733ED956DE, NULL);
		return L_23;
	}

IL_0168:
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_24 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_24);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_24, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnitConversion_GetEthUnitValue_mFB970EA215080A5EA80B60128B404EA8AC9A1CE4_RuntimeMethod_var)));
	}
}
// System.Boolean Nethereum.Util.UnitConversion::TryValidateUnitValue(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnitConversion_TryValidateUnitValue_m41B23D570E88D312B8D9C9E02FAFF1895ABD4600 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___ethUnit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormattingExtensions_ToStringInvariant_TisBigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_m629EE20DFFBB69DC3B851E8C4786130365788A70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___ethUnit0;
		String_t* L_1;
		L_1 = FormattingExtensions_ToStringInvariant_TisBigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_m629EE20DFFBB69DC3B851E8C4786130365788A70(L_0, FormattingExtensions_ToStringInvariant_TisBigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_m629EE20DFFBB69DC3B851E8C4786130365788A70_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)48));
		NullCheck(L_1);
		String_t* L_4;
		L_4 = String_Trim_m81BD35659E6F89DDD56816975E6E05390D023FE5(L_1, L_3, NULL);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		return (bool)1;
	}

IL_0024:
	{
		Exception_t* L_6 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3C9F9624DF9F1C2E14A0850FDC6F9D35C3C2A698)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnitConversion_TryValidateUnitValue_m41B23D570E88D312B8D9C9E02FAFF1895ABD4600_RuntimeMethod_var)));
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWeiFromUnit(System.Decimal,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F UnitConversion_ToWeiFromUnit_mFC65450C6BA1BB5314020DFE4BBFDDDD8D20A733 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___amount0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___fromUnit1, const RuntimeMethod* method) 
{
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___amount0;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_1;
		L_1 = BigDecimal_op_Implicit_m8C904BD712C4301F9272587002B2163D5B9D8584(L_0, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = ___fromUnit1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = UnitConversion_ToWeiFromUnit_m7777834A8230B9AA2A6BDBA788D4CD4AA45C232E(__this, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWeiFromUnit(Nethereum.Util.BigDecimal,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F UnitConversion_ToWeiFromUnit_m7777834A8230B9AA2A6BDBA788D4CD4AA45C232E (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___amount0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___fromUnit1, const RuntimeMethod* method) 
{
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A V_0;
	memset((&V_0), 0, sizeof(V_0));
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A V_1;
	memset((&V_1), 0, sizeof(V_1));
	BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___fromUnit1;
		bool L_1;
		L_1 = UnitConversion_TryValidateUnitValue_m41B23D570E88D312B8D9C9E02FAFF1895ABD4600(__this, L_0, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = ___fromUnit1;
		BigDecimal__ctor_m2C570A2032C8AC61D694C93DF30C8EFF5E660FC2((&V_0), L_2, 0, (bool)0, NULL);
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_3 = ___amount0;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_4 = V_0;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_5;
		L_5 = BigDecimal_op_Multiply_m654C65DFC0F98E28AB20EE382BE872079A2BDB4E(L_3, L_4, NULL);
		V_1 = L_5;
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_6;
		L_6 = BigDecimal_Floor_m0C10AAE9F0FB4413D5CF5C9ACEA4C72EF66E5DC9((&V_1), NULL);
		V_2 = L_6;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7;
		L_7 = BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline((&V_2), NULL);
		return L_7;
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWei(Nethereum.Util.BigDecimal,Nethereum.Util.UnitConversion/EthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F UnitConversion_ToWei_mF2A048FA0A861AC5B30AF606249A89EF946C0C50 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___amount0, int32_t ___fromUnit1, const RuntimeMethod* method) 
{
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_0 = ___amount0;
		int32_t L_1 = ___fromUnit1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = UnitConversion_GetEthUnitValue_mFB970EA215080A5EA80B60128B404EA8AC9A1CE4(__this, L_1, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = UnitConversion_ToWeiFromUnit_m7777834A8230B9AA2A6BDBA788D4CD4AA45C232E(__this, L_0, L_2, NULL);
		return L_3;
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWei(Nethereum.Util.BigDecimal,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F UnitConversion_ToWei_mEE62A8DE9E499CBB1E73D2C3B1EE6747D7C25D82 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A ___amount0, int32_t ___decimalPlacesFromUnit1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___decimalPlacesFromUnit1;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_1 = ___amount0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = UnitConversion_ToWei_mEE62A8DE9E499CBB1E73D2C3B1EE6747D7C25D82(__this, L_1, 1, NULL);
	}

IL_000c:
	{
		BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A L_3 = ___amount0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(((int32_t)10), NULL);
		int32_t L_5 = ___decimalPlacesFromUnit1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6;
		L_6 = BigInteger_Pow_m26F5247594D5A8D0F0810D11ED79D2BDE8162B56(L_4, L_5, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7;
		L_7 = UnitConversion_ToWeiFromUnit_m7777834A8230B9AA2A6BDBA788D4CD4AA45C232E(__this, L_3, L_6, NULL);
		return L_7;
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWei(System.Decimal,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F UnitConversion_ToWei_m3E65FF953B123F6C50F8E3F191E6B1FD88B808D1 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___amount0, int32_t ___decimalPlacesFromUnit1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___decimalPlacesFromUnit1;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1 = ___amount0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = UnitConversion_ToWei_m3E65FF953B123F6C50F8E3F191E6B1FD88B808D1(__this, L_1, 1, NULL);
	}

IL_000c:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_3 = ___amount0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(((int32_t)10), NULL);
		int32_t L_5 = ___decimalPlacesFromUnit1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6;
		L_6 = BigInteger_Pow_m26F5247594D5A8D0F0810D11ED79D2BDE8162B56(L_4, L_5, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7;
		L_7 = UnitConversion_ToWeiFromUnit_mFC65450C6BA1BB5314020DFE4BBFDDDD8D20A733(__this, L_3, L_6, NULL);
		return L_7;
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWei(System.Decimal,Nethereum.Util.UnitConversion/EthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F UnitConversion_ToWei_mBC531DB6C19F3BC6D8A9A8B248C259317718AB07 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___amount0, int32_t ___fromUnit1, const RuntimeMethod* method) 
{
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___amount0;
		int32_t L_1 = ___fromUnit1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = UnitConversion_GetEthUnitValue_mFB970EA215080A5EA80B60128B404EA8AC9A1CE4(__this, L_1, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = UnitConversion_ToWeiFromUnit_mFC65450C6BA1BB5314020DFE4BBFDDDD8D20A733(__this, L_0, L_2, NULL);
		return L_3;
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWei(System.Numerics.BigInteger,Nethereum.Util.UnitConversion/EthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F UnitConversion_ToWei_m2C03442E8B9B6B570636AA19636F9723DC6E7CAC (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, int32_t ___fromUnit1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___value0;
		int32_t L_1 = ___fromUnit1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = UnitConversion_GetEthUnitValue_mFB970EA215080A5EA80B60128B404EA8AC9A1CE4(__this, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigInteger_op_Multiply_m2AF82FA0B4750F56C6A5522A54FBFF2C84919EFE(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWei(System.Int32,Nethereum.Util.UnitConversion/EthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F UnitConversion_ToWei_mC9D648D80FA0BB08D102768E1AEDB8983C39F408 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, int32_t ___value0, int32_t ___fromUnit1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		memset((&L_1), 0, sizeof(L_1));
		BigInteger__ctor_mFEDEDA4A6AFC2BA534FEEF4EB3431B9C5AC3F9D9((&L_1), L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___fromUnit1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = UnitConversion_ToWei_m2C03442E8B9B6B570636AA19636F9723DC6E7CAC(__this, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWei(System.Double,Nethereum.Util.UnitConversion/EthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F UnitConversion_ToWei_mE56CD7F9818E6A545E8818E513F843D675DDCE71 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, double ___value0, int32_t ___fromUnit1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1;
		L_1 = Convert_ToDecimal_mAF1D2181BB8C5D3F25C0963245437B4AF4E6C575(L_0, NULL);
		int32_t L_2 = ___fromUnit1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = UnitConversion_ToWei_mBC531DB6C19F3BC6D8A9A8B248C259317718AB07(__this, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWei(System.Single,Nethereum.Util.UnitConversion/EthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F UnitConversion_ToWei_mFB6743E14F7FF8B313BBA13793C7232F913A3A39 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, float ___value0, int32_t ___fromUnit1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1;
		L_1 = Convert_ToDecimal_m0CECFA6799BA3F8CDB59C34287DD5BAE54CC0EBE(L_0, NULL);
		int32_t L_2 = ___fromUnit1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = UnitConversion_ToWei_mBC531DB6C19F3BC6D8A9A8B248C259317718AB07(__this, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWei(System.Int64,Nethereum.Util.UnitConversion/EthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F UnitConversion_ToWei_m24AF37B60C4D2DF270DDA77AAE6835E43B2F6665 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, int64_t ___value0, int32_t ___fromUnit1, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		memset((&L_1), 0, sizeof(L_1));
		BigInteger__ctor_mA87DC2182BB2F6AA0209BD98E81C30BCE5B8BBAA((&L_1), L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___fromUnit1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = UnitConversion_ToWei_m2C03442E8B9B6B570636AA19636F9723DC6E7CAC(__this, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::ToWei(System.String,Nethereum.Util.UnitConversion/EthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F UnitConversion_ToWei_m23DF90C2D1BB461BCC076631BAC4E02FC98B2DFE (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, String_t* ___value0, int32_t ___fromUnit1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1;
		L_1 = Decimal_Parse_mF59EB26DED52ED2D5E804452CFC9102E3347C10D(L_0, NULL);
		int32_t L_2 = ___fromUnit1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = UnitConversion_ToWei_mBC531DB6C19F3BC6D8A9A8B248C259317718AB07(__this, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::CalculateNumberOfDecimalPlaces(System.Double,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F UnitConversion_CalculateNumberOfDecimalPlaces_mC80CA7188F94DFA48602D1C9F35A0D2248D55E3A (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, double ___value0, int32_t ___maxNumberOfDecimals1, int32_t ___currentNumberOfDecimals2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1;
		L_1 = Convert_ToDecimal_mAF1D2181BB8C5D3F25C0963245437B4AF4E6C575(L_0, NULL);
		int32_t L_2 = ___maxNumberOfDecimals1;
		int32_t L_3 = ___currentNumberOfDecimals2;
		int32_t L_4;
		L_4 = UnitConversion_CalculateNumberOfDecimalPlaces_mD01E25B3019E1B5118F499AA107FA7EB0D8267A2(__this, L_1, L_2, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(L_4, NULL);
		return L_5;
	}
}
// System.Numerics.BigInteger Nethereum.Util.UnitConversion::CalculateNumberOfDecimalPlaces(System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F UnitConversion_CalculateNumberOfDecimalPlaces_m398E804DC82D855E021AB66C1D9C987976B3E9A9 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, float ___value0, int32_t ___maxNumberOfDecimals1, int32_t ___currentNumberOfDecimals2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1;
		L_1 = Convert_ToDecimal_m0CECFA6799BA3F8CDB59C34287DD5BAE54CC0EBE(L_0, NULL);
		int32_t L_2 = ___maxNumberOfDecimals1;
		int32_t L_3 = ___currentNumberOfDecimals2;
		int32_t L_4;
		L_4 = UnitConversion_CalculateNumberOfDecimalPlaces_mD01E25B3019E1B5118F499AA107FA7EB0D8267A2(__this, L_1, L_2, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(L_4, NULL);
		return L_5;
	}
}
// System.Int32 Nethereum.Util.UnitConversion::CalculateNumberOfDecimalPlaces(System.Decimal,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnitConversion_CalculateNumberOfDecimalPlaces_mD01E25B3019E1B5118F499AA107FA7EB0D8267A2 (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, int32_t ___maxNumberOfDecimals1, int32_t ___currentNumberOfDecimals2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormattingExtensions_ToStringInvariant_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_mA1F214B0E0D2E638D2E6FCAC76B2CE98565C5833_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___currentNumberOfDecimals2;
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1 = ___value0;
		String_t* L_2;
		L_2 = FormattingExtensions_ToStringInvariant_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_mA1F214B0E0D2E638D2E6FCAC76B2CE98565C5833(L_1, FormattingExtensions_ToStringInvariant_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_mA1F214B0E0D2E638D2E6FCAC76B2CE98565C5833_RuntimeMethod_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_3 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4;
		L_4 = Math_Round_mC44B363AC94B1B8DCB093A770B5C11E22F5A583E_inline(L_3, NULL);
		String_t* L_5;
		L_5 = FormattingExtensions_ToStringInvariant_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_mA1F214B0E0D2E638D2E6FCAC76B2CE98565C5833(L_4, FormattingExtensions_ToStringInvariant_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_mA1F214B0E0D2E638D2E6FCAC76B2CE98565C5833_RuntimeMethod_var);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, L_5, NULL);
		if (!L_6)
		{
			goto IL_001d;
		}
	}
	{
		return 0;
	}

IL_001d:
	{
		___currentNumberOfDecimals2 = 1;
	}

IL_0020:
	{
		int32_t L_7 = ___currentNumberOfDecimals2;
		int32_t L_8 = ___maxNumberOfDecimals1;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_9 = ___maxNumberOfDecimals1;
		return L_9;
	}

IL_0026:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_10 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_11;
		L_11 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(((int32_t)10), NULL);
		int32_t L_12 = ___currentNumberOfDecimals2;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_13;
		L_13 = BigInteger_Pow_m26F5247594D5A8D0F0810D11ED79D2BDE8162B56(L_11, L_12, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_14;
		L_14 = BigInteger_op_Explicit_m1F21788C5AD515DC2A1FCE89B189F87449CE7835(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_15;
		L_15 = Decimal_op_Multiply_mA4945210C6DDD59AB803A2B07BA948E8A1BFD2FC(L_10, L_14, NULL);
		V_0 = L_15;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_17;
		L_17 = Math_Round_mC44B363AC94B1B8DCB093A770B5C11E22F5A583E_inline(L_16, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_18 = V_0;
		bool L_19;
		L_19 = Decimal_op_Equality_m4778C6A5F0E0FA5CBEFBBCB9E5A34BBE3D2D0BB5(L_17, L_18, NULL);
		if (!L_19)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_20 = ___currentNumberOfDecimals2;
		return L_20;
	}

IL_004f:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_21 = ___value0;
		int32_t L_22 = ___maxNumberOfDecimals1;
		int32_t L_23 = ___currentNumberOfDecimals2;
		int32_t L_24;
		L_24 = UnitConversion_CalculateNumberOfDecimalPlaces_mD01E25B3019E1B5118F499AA107FA7EB0D8267A2(__this, L_21, L_22, ((int32_t)il2cpp_codegen_add(L_23, 1)), NULL);
		return L_24;
	}
}
// System.Void Nethereum.Util.UnitConversion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitConversion__ctor_m5E00A88113E7393DA8AA839644B151321771530E (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, const RuntimeMethod* method) 
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
// System.Threading.Tasks.Task Nethereum.Util.WaitStrategy::ApplyAsync(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WaitStrategy_ApplyAsync_mA9BE55E1A7D60D85B7245C29699D8D29F8F92FF0 (WaitStrategy_t198F1B8F587CD88CAC0AF9F75F92A075C5169061* __this, uint32_t ___retryCount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Last_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCFD5BA313EA72B18F61BD8C68803034882461219_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitStrategy_t198F1B8F587CD88CAC0AF9F75F92A075C5169061_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		uint32_t L_0 = ___retryCount0;
		il2cpp_codegen_runtime_class_init_inline(WaitStrategy_t198F1B8F587CD88CAC0AF9F75F92A075C5169061_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ((WaitStrategy_t198F1B8F587CD88CAC0AF9F75F92A075C5169061_StaticFields*)il2cpp_codegen_static_fields_for(WaitStrategy_t198F1B8F587CD88CAC0AF9F75F92A075C5169061_il2cpp_TypeInfo_var))->___WaitIntervals_0;
		NullCheck(L_1);
		if ((((int64_t)((int64_t)(uint64_t)L_0)) >= ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0015;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WaitStrategy_t198F1B8F587CD88CAC0AF9F75F92A075C5169061_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((WaitStrategy_t198F1B8F587CD88CAC0AF9F75F92A075C5169061_StaticFields*)il2cpp_codegen_static_fields_for(WaitStrategy_t198F1B8F587CD88CAC0AF9F75F92A075C5169061_il2cpp_TypeInfo_var))->___WaitIntervals_0;
		uint32_t L_3 = ___retryCount0;
		NullCheck(L_2);
		uint32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		G_B3_0 = L_5;
		goto IL_001f;
	}

IL_0015:
	{
		il2cpp_codegen_runtime_class_init_inline(WaitStrategy_t198F1B8F587CD88CAC0AF9F75F92A075C5169061_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ((WaitStrategy_t198F1B8F587CD88CAC0AF9F75F92A075C5169061_StaticFields*)il2cpp_codegen_static_fields_for(WaitStrategy_t198F1B8F587CD88CAC0AF9F75F92A075C5169061_il2cpp_TypeInfo_var))->___WaitIntervals_0;
		int32_t L_7;
		L_7 = Enumerable_Last_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCFD5BA313EA72B18F61BD8C68803034882461219((RuntimeObject*)L_6, Enumerable_Last_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCFD5BA313EA72B18F61BD8C68803034882461219_RuntimeMethod_var);
		G_B3_0 = L_7;
	}

IL_001f:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
		L_8 = Task_Delay_m4B84654B4DAADEC41096D9F01C099CCEA9927A48(G_B3_0, NULL);
		return L_8;
	}
}
// System.Void Nethereum.Util.WaitStrategy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitStrategy__ctor_m09F433987D290783DAE24553ACA89B213F9FB75D (WaitStrategy_t198F1B8F587CD88CAC0AF9F75F92A075C5169061* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Nethereum.Util.WaitStrategy::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitStrategy__cctor_m51F718FED97A5379E56163C0FE230A17E544446B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t3B4686B7A048D2591E8CB02C0B6586B8112AFC75____8ACC0527215D58BB38BEB1E9BF85D16BB40F1F003901B05B87B735B444A65A93_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitStrategy_t198F1B8F587CD88CAC0AF9F75F92A075C5169061_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3B4686B7A048D2591E8CB02C0B6586B8112AFC75____8ACC0527215D58BB38BEB1E9BF85D16BB40F1F003901B05B87B735B444A65A93_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((WaitStrategy_t198F1B8F587CD88CAC0AF9F75F92A075C5169061_StaticFields*)il2cpp_codegen_static_fields_for(WaitStrategy_t198F1B8F587CD88CAC0AF9F75F92A075C5169061_il2cpp_TypeInfo_var))->___WaitIntervals_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((WaitStrategy_t198F1B8F587CD88CAC0AF9F75F92A075C5169061_StaticFields*)il2cpp_codegen_static_fields_for(WaitStrategy_t198F1B8F587CD88CAC0AF9F75F92A075C5169061_il2cpp_TypeInfo_var))->___WaitIntervals_0), (void*)L_1);
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
// System.UInt64[] Nethereum.Util.Keccak.KeccakDigest::KeccakInitializeRoundConstants()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* KeccakDigest_KeccakInitializeRoundConstants_m51D2F707381B1235BB330061CF449575A767217B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	uint8_t V_1 = 0x0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)24));
		V_0 = L_0;
		V_1 = (uint8_t)1;
		V_2 = 0;
		goto IL_005f;
	}

IL_000e:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = V_0;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint64_t)((int64_t)0));
		V_3 = 0;
		goto IL_0057;
	}

IL_0017:
	{
		int32_t L_3 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))), 1));
		uint8_t L_4 = V_1;
		if (!((!(((uint32_t)((int32_t)((int32_t)L_4&1))) <= ((uint32_t)0)))? 1 : 0))
		{
			goto IL_003c;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = V_0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		uint64_t* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)));
		int64_t L_8 = *((int64_t*)L_7);
		int32_t L_9 = V_4;
		*((int64_t*)L_7) = (int64_t)((int64_t)(L_8^((int64_t)(((int64_t)1)<<((int32_t)(L_9&((int32_t)63)))))));
	}

IL_003c:
	{
		uint8_t L_10 = V_1;
		uint8_t L_11 = V_1;
		V_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_11<<1)));
		if (!((!(((uint32_t)((int32_t)((int32_t)L_10&((int32_t)128)))) <= ((uint32_t)0)))? 1 : 0))
		{
			goto IL_0053;
		}
	}
	{
		uint8_t L_12 = V_1;
		V_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_12^((int32_t)113))));
	}

IL_0053:
	{
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0057:
	{
		int32_t L_14 = V_3;
		if ((((int32_t)L_14) < ((int32_t)7)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_005f:
	{
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)24))))
		{
			goto IL_000e;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = V_0;
		return L_17;
	}
}
// System.Int32[] Nethereum.Util.Keccak.KeccakDigest::KeccakInitializeRhoOffsets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* KeccakDigest_KeccakInitializeRhoOffsets_mDD4EAAC764877F56239B2356540BDD006D5B541B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)25));
		V_0 = L_0;
		V_5 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = V_0;
		int32_t L_2 = V_5;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_2);
		V_1 = 1;
		V_2 = 0;
		V_3 = 1;
		goto IL_0044;
	}

IL_0018:
	{
		int32_t L_3 = V_5;
		int32_t L_4 = V_3;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_3, L_4))&((int32_t)63)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = V_2;
		int32_t L_8 = V_5;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)(L_6%5)), ((int32_t)il2cpp_codegen_multiply(5, ((int32_t)(L_7%5))))))), (int32_t)L_8);
		int32_t L_9 = V_2;
		V_4 = ((int32_t)(L_9%5));
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		int32_t L_12 = V_4;
		V_1 = L_12;
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_10)), ((int32_t)il2cpp_codegen_multiply(3, L_11))))%5));
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0044:
	{
		int32_t L_14 = V_3;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)25))))
		{
			goto IL_0018;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_0;
		return L_15;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest__ctor_m3B9228168C3AE6C897F13394C6DDA87DEEC38B30 (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, const RuntimeMethod* method) 
{
	{
		KeccakDigest__ctor_m673559AC784A846BD6D34E352ED4FBC1BA93DA0F(__this, ((int32_t)288), NULL);
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest__ctor_m673559AC784A846BD6D34E352ED4FBC1BA93DA0F (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, int32_t ___bitLength0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_il2cpp_TypeInfo_var);
		int32_t L_0 = ((KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_StaticFields*)il2cpp_codegen_static_fields_for(KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_il2cpp_TypeInfo_var))->___STATE_LENGTH_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_0/8)));
		__this->___state_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___state_3), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)192));
		__this->___dataQueue_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataQueue_4), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_3 = ___bitLength0;
		KeccakDigest_Init_m663D38CA3A3B1C5E3370852A9B7D1EA7960CE421(__this, L_3, NULL);
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::.ctor(Nethereum.Util.Keccak.KeccakDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest__ctor_m46969D3A761EC10B1F01A25C7CAC6E5C7CDA402F (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* ___source0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_il2cpp_TypeInfo_var);
		int32_t L_0 = ((KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_StaticFields*)il2cpp_codegen_static_fields_for(KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_il2cpp_TypeInfo_var))->___STATE_LENGTH_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_0/8)));
		__this->___state_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___state_3), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)192));
		__this->___dataQueue_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataQueue_4), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* L_3 = ___source0;
		KeccakDigest_CopyIn_m882F2F0B5F8636B47DE62374E2C3C4ABF752C66C(__this, L_3, NULL);
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::CopyIn(Nethereum.Util.Keccak.KeccakDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_CopyIn_m882F2F0B5F8636B47DE62374E2C3C4ABF752C66C (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* ___source0, const RuntimeMethod* method) 
{
	{
		KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* L_0 = ___source0;
		NullCheck(L_0);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = L_0->___state_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = __this->___state_3;
		KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* L_3 = ___source0;
		NullCheck(L_3);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = L_3->___state_3;
		NullCheck(L_4);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_1, 0, (RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* L_5 = ___source0;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_5->___dataQueue_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___dataQueue_4;
		KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* L_8 = ___source0;
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_8->___dataQueue_4;
		NullCheck(L_9);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, 0, (RuntimeArray*)L_7, 0, ((int32_t)(((RuntimeArray*)L_9)->max_length)), NULL);
		KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* L_10 = ___source0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___rate_5;
		__this->___rate_5 = L_11;
		KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* L_12 = ___source0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bitsInQueue_6;
		__this->___bitsInQueue_6 = L_13;
		KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* L_14 = ___source0;
		NullCheck(L_14);
		int32_t L_15 = L_14->___fixedOutputLength_7;
		__this->___fixedOutputLength_7 = L_15;
		KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* L_16 = ___source0;
		NullCheck(L_16);
		bool L_17 = L_16->___squeezing_8;
		__this->___squeezing_8 = L_17;
		KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* L_18 = ___source0;
		NullCheck(L_18);
		int32_t L_19 = L_18->___bitsAvailableForSqueezing_9;
		__this->___bitsAvailableForSqueezing_9 = L_19;
		return;
	}
}
// System.String Nethereum.Util.Keccak.KeccakDigest::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeccakDigest_get_AlgorithmName_m9C58E5235475F6E776C326F26CAC1F1599DCECE3 (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53CE3854A381FE03C65D949A33C2E1D7DBA02CB4);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t* L_0 = (&__this->___fixedOutputLength_7);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral53CE3854A381FE03C65D949A33C2E1D7DBA02CB4, L_1, NULL);
		return L_2;
	}
}
// System.Int32 Nethereum.Util.Keccak.KeccakDigest::GetDigestSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeccakDigest_GetDigestSize_m42F16558171725CB5AD31F747D25D908564B0A66 (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___fixedOutputLength_7;
		return ((int32_t)(L_0>>3));
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Update_m14FD2F2EA9BB0555F8B08B35B3CE3A34F978DB5B (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, uint8_t ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		uint8_t L_2 = ___input0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		KeccakDigest_Absorb_mF7E941904EB3A23A9D68AC98DE1E22977E5FE23D(__this, L_1, 0, 1, NULL);
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_BlockUpdate_mC0F91349AF443CC63984CDECDFEAC249533B8C8B (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___len2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		int32_t L_2 = ___len2;
		KeccakDigest_Absorb_mF7E941904EB3A23A9D68AC98DE1E22977E5FE23D(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Int32 Nethereum.Util.Keccak.KeccakDigest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeccakDigest_DoFinal_m9980810C6DD2DBE9259A57AF9063F781C18E58DC (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___output0;
		int32_t L_1 = ___outOff1;
		int32_t L_2 = __this->___fixedOutputLength_7;
		KeccakDigest_Squeeze_m05A95BE87AE3DB461FDA77CFBE3CD582DDF40793(__this, L_0, L_1, ((int32_t)(L_2>>3)), NULL);
		VirtualActionInvoker0::Invoke(10 /* System.Void Nethereum.Util.Keccak.KeccakDigest::Reset() */, __this);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Nethereum.Util.Keccak.KeccakDigest::GetDigestSize() */, __this);
		return L_3;
	}
}
// System.Int32 Nethereum.Util.Keccak.KeccakDigest::DoFinal(System.Byte[],System.Int32,System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeccakDigest_DoFinal_m42492941F28319E61BFF5A0A6EF191B8392EF3DF (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, uint8_t ___partialByte2, int32_t ___partialBits3, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___partialBits3;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		uint8_t L_1 = ___partialByte2;
		int32_t L_2 = ___partialBits3;
		KeccakDigest_AbsorbBits_m224802053047917627C0151A686430B1F445F9F9(__this, L_1, L_2, NULL);
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___output0;
		int32_t L_4 = ___outOff1;
		int32_t L_5 = __this->___fixedOutputLength_7;
		KeccakDigest_Squeeze_m05A95BE87AE3DB461FDA77CFBE3CD582DDF40793(__this, L_3, L_4, ((int32_t)(L_5>>3)), NULL);
		VirtualActionInvoker0::Invoke(10 /* System.Void Nethereum.Util.Keccak.KeccakDigest::Reset() */, __this);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Nethereum.Util.Keccak.KeccakDigest::GetDigestSize() */, __this);
		return L_6;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Reset_mD22C81248F82C699E1C10B04FFE34254C756969E (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___fixedOutputLength_7;
		KeccakDigest_Init_m663D38CA3A3B1C5E3370852A9B7D1EA7960CE421(__this, L_0, NULL);
		return;
	}
}
// System.Int32 Nethereum.Util.Keccak.KeccakDigest::GetByteLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeccakDigest_GetByteLength_m49A1AFA6E4A9DCC1392BD0637E3BCBC42CECFF30 (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___rate_5;
		return ((int32_t)(L_0>>3));
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::Init(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Init_m663D38CA3A3B1C5E3370852A9B7D1EA7960CE421 (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, int32_t ___bitLength0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___bitLength0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)256))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = ___bitLength0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)128))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_2 = ___bitLength0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)224))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_3 = ___bitLength0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)256))))
		{
			goto IL_003a;
		}
	}
	{
		goto IL_004a;
	}

IL_0022:
	{
		int32_t L_4 = ___bitLength0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)288))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_5 = ___bitLength0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)384))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_6 = ___bitLength0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)512)))))
		{
			goto IL_004a;
		}
	}

IL_003a:
	{
		int32_t L_7 = ___bitLength0;
		KeccakDigest_InitSponge_m7C76E7E9001574C85C7E0D7398A713CE81289206(__this, ((int32_t)il2cpp_codegen_subtract(((int32_t)1600), ((int32_t)(L_7<<1)))), NULL);
		return;
	}

IL_004a:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA5D5402405EA46FA1359EF38E2451145DB09D1C5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDEFDD99707701302B4F3A4CE68BC9EB2926D7283)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeccakDigest_Init_m663D38CA3A3B1C5E3370852A9B7D1EA7960CE421_RuntimeMethod_var)));
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::InitSponge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_InitSponge_m7C76E7E9001574C85C7E0D7398A713CE81289206 (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, int32_t ___rate0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___rate0;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___rate0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)1600))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = ___rate0;
		if (!((int32_t)(L_2&((int32_t)63))))
		{
			goto IL_001d;
		}
	}

IL_0012:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD0B955404E183709B5C731BFCF31085857DE0EC3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeccakDigest_InitSponge_m7C76E7E9001574C85C7E0D7398A713CE81289206_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_4 = ___rate0;
		__this->___rate_5 = L_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = __this->___state_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = __this->___state_3;
		NullCheck(L_6);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_5, 0, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___dataQueue_4;
		Arrays_Fill_mC53323A8A5385F960F36DDE7BDABE385BBAA8BA3(L_7, (uint8_t)0, NULL);
		__this->___bitsInQueue_6 = 0;
		__this->___squeezing_8 = (bool)0;
		__this->___bitsAvailableForSqueezing_9 = 0;
		int32_t L_8 = ___rate0;
		__this->___fixedOutputLength_7 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)1600), L_8))>>1));
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::Absorb(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Absorb_mF7E941904EB3A23A9D68AC98DE1E22977E5FE23D (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___off1, int32_t ___len2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___bitsInQueue_6;
		if (!((int32_t)(L_0&7)))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA8E3A14BFED9F7D70EFB2C59F8DBAC2A52180062)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeccakDigest_Absorb_mF7E941904EB3A23A9D68AC98DE1E22977E5FE23D_RuntimeMethod_var)));
	}

IL_0015:
	{
		bool L_2 = __this->___squeezing_8;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88ABBDEE731F56D989C298F52912B7B0D27D0D84)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeccakDigest_Absorb_mF7E941904EB3A23A9D68AC98DE1E22977E5FE23D_RuntimeMethod_var)));
	}

IL_0028:
	{
		int32_t L_4 = __this->___bitsInQueue_6;
		V_0 = ((int32_t)(L_4>>3));
		int32_t L_5 = __this->___rate_5;
		V_1 = ((int32_t)(L_5>>3));
		V_2 = 0;
		goto IL_0095;
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		if (L_6)
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_7 = V_2;
		int32_t L_8 = ___len2;
		int32_t L_9 = V_1;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9)))))
		{
			goto IL_005d;
		}
	}

IL_0047:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___data0;
		int32_t L_11 = ___off1;
		int32_t L_12 = V_2;
		KeccakDigest_KeccakAbsorb_m14FC67C47B3F929BE91BBD59B4205FFCC57E1ECA(__this, L_10, ((int32_t)il2cpp_codegen_add(L_11, L_12)), NULL);
		int32_t L_13 = V_2;
		int32_t L_14 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		int32_t L_15 = V_2;
		int32_t L_16 = ___len2;
		int32_t L_17 = V_1;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_16, L_17)))))
		{
			goto IL_0047;
		}
	}
	{
		goto IL_0095;
	}

IL_005d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		int32_t L_20 = ___len2;
		int32_t L_21 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_22;
		L_22 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(L_18, L_19)), ((int32_t)il2cpp_codegen_subtract(L_20, L_21)), NULL);
		V_3 = L_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___data0;
		int32_t L_24 = ___off1;
		int32_t L_25 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___dataQueue_4;
		int32_t L_27 = V_0;
		int32_t L_28 = V_3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_23, ((int32_t)il2cpp_codegen_add(L_24, L_25)), (RuntimeArray*)L_26, L_27, L_28, NULL);
		int32_t L_29 = V_0;
		int32_t L_30 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, L_30));
		int32_t L_31 = V_2;
		int32_t L_32 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add(L_31, L_32));
		int32_t L_33 = V_0;
		int32_t L_34 = V_1;
		if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
		{
			goto IL_0095;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = __this->___dataQueue_4;
		KeccakDigest_KeccakAbsorb_m14FC67C47B3F929BE91BBD59B4205FFCC57E1ECA(__this, L_35, 0, NULL);
		V_0 = 0;
	}

IL_0095:
	{
		int32_t L_36 = V_2;
		int32_t L_37 = ___len2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_38 = V_0;
		__this->___bitsInQueue_6 = ((int32_t)(L_38<<3));
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::AbsorbBits(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_AbsorbBits_m224802053047917627C0151A686430B1F445F9F9 (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, int32_t ___data0, int32_t ___bits1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bits1;
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___bits1;
		if ((((int32_t)L_1) <= ((int32_t)7)))
		{
			goto IL_0018;
		}
	}

IL_0008:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD039C76F6BA3380896DFB0DA8F26D45B1448F44F)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeccakDigest_AbsorbBits_m224802053047917627C0151A686430B1F445F9F9_RuntimeMethod_var)));
	}

IL_0018:
	{
		int32_t L_3 = __this->___bitsInQueue_6;
		if (!((int32_t)(L_3&7)))
		{
			goto IL_002d;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA8E3A14BFED9F7D70EFB2C59F8DBAC2A52180062)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeccakDigest_AbsorbBits_m224802053047917627C0151A686430B1F445F9F9_RuntimeMethod_var)));
	}

IL_002d:
	{
		bool L_5 = __this->___squeezing_8;
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88ABBDEE731F56D989C298F52912B7B0D27D0D84)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeccakDigest_AbsorbBits_m224802053047917627C0151A686430B1F445F9F9_RuntimeMethod_var)));
	}

IL_0040:
	{
		int32_t L_7 = ___bits1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_7&((int32_t)31))))), 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___dataQueue_4;
		int32_t L_9 = __this->___bitsInQueue_6;
		int32_t L_10 = ___data0;
		int32_t L_11 = V_0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_9>>3))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_10&L_11))));
		int32_t L_12 = __this->___bitsInQueue_6;
		int32_t L_13 = ___bits1;
		__this->___bitsInQueue_6 = ((int32_t)il2cpp_codegen_add(L_12, L_13));
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::PadAndSwitchToSqueezingPhase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_PadAndSwitchToSqueezingPhase_m099A6EDC9078B75FE940735C214947901E5BDD8F (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___dataQueue_4;
		int32_t L_1 = __this->___bitsInQueue_6;
		NullCheck(L_0);
		uint8_t* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_1>>3)))));
		int32_t L_3 = *((uint8_t*)L_2);
		int32_t L_4 = __this->___bitsInQueue_6;
		*((int8_t*)L_2) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_3|((int32_t)(uint8_t)((int32_t)(1<<((int32_t)(((int32_t)(L_4&7))&((int32_t)31)))))))));
		int32_t L_5 = __this->___bitsInQueue_6;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		__this->___bitsInQueue_6 = L_6;
		int32_t L_7 = V_0;
		int32_t L_8 = __this->___rate_5;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0053;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___dataQueue_4;
		KeccakDigest_KeccakAbsorb_m14FC67C47B3F929BE91BBD59B4205FFCC57E1ECA(__this, L_9, 0, NULL);
		__this->___bitsInQueue_6 = 0;
	}

IL_0053:
	{
		int32_t L_10 = __this->___bitsInQueue_6;
		V_1 = ((int32_t)(L_10>>6));
		int32_t L_11 = __this->___bitsInQueue_6;
		V_2 = ((int32_t)(L_11&((int32_t)63)));
		V_3 = 0;
		V_4 = 0;
		goto IL_0094;
	}

IL_006d:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = __this->___state_3;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		uint64_t* L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)));
		int64_t L_15 = *((int64_t*)L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___dataQueue_4;
		int32_t L_17 = V_3;
		uint64_t L_18;
		L_18 = Pack_LE_To_UInt64_m4A932F443044B6CB9A3022E4B348691318F47EDE(L_16, L_17, NULL);
		*((int64_t*)L_14) = (int64_t)((int64_t)(L_15^(int64_t)L_18));
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_19, 8));
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0094:
	{
		int32_t L_21 = V_4;
		int32_t L_22 = V_1;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_23 = V_2;
		if ((((int32_t)L_23) <= ((int32_t)0)))
		{
			goto IL_00c8;
		}
	}
	{
		int32_t L_24 = V_2;
		V_5 = ((int64_t)il2cpp_codegen_subtract(((int64_t)(((int64_t)1)<<((int32_t)(L_24&((int32_t)63))))), ((int64_t)1)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_25 = __this->___state_3;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		uint64_t* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)));
		int64_t L_28 = *((int64_t*)L_27);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___dataQueue_4;
		int32_t L_30 = V_3;
		uint64_t L_31;
		L_31 = Pack_LE_To_UInt64_m4A932F443044B6CB9A3022E4B348691318F47EDE(L_29, L_30, NULL);
		uint64_t L_32 = V_5;
		*((int64_t*)L_27) = (int64_t)((int64_t)(L_28^((int64_t)((int64_t)L_31&(int64_t)L_32))));
	}

IL_00c8:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_33 = __this->___state_3;
		int32_t L_34 = __this->___rate_5;
		NullCheck(L_33);
		uint64_t* L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(((int32_t)il2cpp_codegen_subtract(L_34, 1))>>6)))));
		int64_t L_36 = *((int64_t*)L_35);
		*((int64_t*)L_35) = (int64_t)((int64_t)(L_36^((int64_t)(std::numeric_limits<int64_t>::min)())));
		KeccakDigest_KeccakPermutation_m91BAE14D9277F8D050673A09A372299E1ADD0C89(__this, NULL);
		KeccakDigest_KeccakExtract_m0C7A267697170747AF7162900CFC98A496B3A2B4(__this, NULL);
		int32_t L_37 = __this->___rate_5;
		__this->___bitsAvailableForSqueezing_9 = L_37;
		__this->___bitsInQueue_6 = 0;
		__this->___squeezing_8 = (bool)1;
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::Squeeze(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Squeeze_m05A95BE87AE3DB461FDA77CFBE3CD582DDF40793 (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___off1, int32_t ___len2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	{
		bool L_0 = __this->___squeezing_8;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		KeccakDigest_PadAndSwitchToSqueezingPhase_m099A6EDC9078B75FE940735C214947901E5BDD8F(__this, NULL);
	}

IL_000e:
	{
		int32_t L_1 = ___len2;
		V_0 = ((int64_t)(((int64_t)L_1)<<3));
		V_1 = ((int64_t)0);
		goto IL_0080;
	}

IL_0018:
	{
		int32_t L_2 = __this->___bitsAvailableForSqueezing_9;
		if (L_2)
		{
			goto IL_0038;
		}
	}
	{
		KeccakDigest_KeccakPermutation_m91BAE14D9277F8D050673A09A372299E1ADD0C89(__this, NULL);
		KeccakDigest_KeccakExtract_m0C7A267697170747AF7162900CFC98A496B3A2B4(__this, NULL);
		int32_t L_3 = __this->___rate_5;
		__this->___bitsAvailableForSqueezing_9 = L_3;
	}

IL_0038:
	{
		int32_t L_4 = __this->___bitsAvailableForSqueezing_9;
		int64_t L_5 = V_0;
		int64_t L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int64_t L_7;
		L_7 = Math_Min_mD731E8A02F13C67C1EAC7C1E7F81909FE466F079(((int64_t)L_4), ((int64_t)il2cpp_codegen_subtract(L_5, L_6)), NULL);
		V_2 = ((int32_t)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___dataQueue_4;
		int32_t L_9 = __this->___rate_5;
		int32_t L_10 = __this->___bitsAvailableForSqueezing_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___output0;
		int32_t L_12 = ___off1;
		int64_t L_13 = V_1;
		int32_t L_14 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_9, L_10))>>3)), (RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, ((int32_t)((int64_t)(L_13>>3))))), ((int32_t)(L_14>>3)), NULL);
		int32_t L_15 = __this->___bitsAvailableForSqueezing_9;
		int32_t L_16 = V_2;
		__this->___bitsAvailableForSqueezing_9 = ((int32_t)il2cpp_codegen_subtract(L_15, L_16));
		int64_t L_17 = V_1;
		int32_t L_18 = V_2;
		V_1 = ((int64_t)il2cpp_codegen_add(L_17, ((int64_t)L_18)));
	}

IL_0080:
	{
		int64_t L_19 = V_1;
		int64_t L_20 = V_0;
		if ((((int64_t)L_19) < ((int64_t)L_20)))
		{
			goto IL_0018;
		}
	}
	{
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::KeccakAbsorb(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_KeccakAbsorb_m14FC67C47B3F929BE91BBD59B4205FFCC57E1ECA (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___off1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___rate_5;
		V_0 = ((int32_t)(L_0>>6));
		V_1 = 0;
		goto IL_002d;
	}

IL_000d:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->___state_3;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		uint64_t* L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)));
		int64_t L_4 = *((int64_t*)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___data0;
		int32_t L_6 = ___off1;
		uint64_t L_7;
		L_7 = Pack_LE_To_UInt64_m4A932F443044B6CB9A3022E4B348691318F47EDE(L_5, L_6, NULL);
		*((int64_t*)L_3) = (int64_t)((int64_t)(L_4^(int64_t)L_7));
		int32_t L_8 = ___off1;
		___off1 = ((int32_t)il2cpp_codegen_add(L_8, 8));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002d:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000d;
		}
	}
	{
		KeccakDigest_KeccakPermutation_m91BAE14D9277F8D050673A09A372299E1ADD0C89(__this, NULL);
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::KeccakExtract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_KeccakExtract_m0C7A267697170747AF7162900CFC98A496B3A2B4 (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = __this->___state_3;
		int32_t L_1 = __this->___rate_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___dataQueue_4;
		Pack_UInt64_To_LE_m8E513C0C7E26D1E73DB8FC63FA9D286625C2C610(L_0, 0, ((int32_t)(L_1>>6)), L_2, 0, NULL);
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::KeccakPermutation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_KeccakPermutation_m91BAE14D9277F8D050673A09A372299E1ADD0C89 (KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0040;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = __this->___state_3;
		il2cpp_codegen_runtime_class_init_inline(KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_il2cpp_TypeInfo_var);
		KeccakDigest_Theta_mD5F289CD29B498B73B41BB43D79A8F40E1612098(L_0, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->___state_3;
		KeccakDigest_Rho_mE6B61556A32A8DC14E2AD01AF8AD6A4B015390B9(L_1, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = __this->___state_3;
		KeccakDigest_Pi_m478BBE1D265C304F3FB74915F2208D50B112C402(L_2, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = __this->___state_3;
		KeccakDigest_Chi_mF939CE9BBD3B6B0F446DB6BBCBB523219232BA2B(L_3, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = __this->___state_3;
		int32_t L_5 = V_0;
		KeccakDigest_Iota_m742EA935E9E417BE170ABBB9AB18C851CF4A1A91(L_4, L_5, NULL);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0040:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)24))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.UInt64 Nethereum.Util.Keccak.KeccakDigest::leftRotate(System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t KeccakDigest_leftRotate_m67FA24E0F32237BB0F78B9341E066C182B2586BA (uint64_t ___v0, int32_t ___r1, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___v0;
		int32_t L_1 = ___r1;
		uint64_t L_2 = ___v0;
		int32_t L_3 = ___r1;
		return ((int64_t)(((int64_t)((int64_t)L_0<<((int32_t)(L_1&((int32_t)63)))))|((int64_t)((uint64_t)L_2>>((int32_t)(((-L_3))&((int32_t)63)))))));
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::Theta(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Theta_mD5F289CD29B498B73B41BB43D79A8F40E1612098 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___A0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___A0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		int64_t L_2 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___A0;
		NullCheck(L_3);
		int32_t L_4 = 5;
		int64_t L_5 = (int64_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = ___A0;
		NullCheck(L_6);
		int32_t L_7 = ((int32_t)10);
		int64_t L_8 = (int64_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = ___A0;
		NullCheck(L_9);
		int32_t L_10 = ((int32_t)15);
		int64_t L_11 = (int64_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = ___A0;
		NullCheck(L_12);
		int32_t L_13 = ((int32_t)20);
		int64_t L_14 = (int64_t)(L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_0 = ((int64_t)(((int64_t)(((int64_t)(((int64_t)(L_2^L_5))^L_8))^L_11))^L_14));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_15 = ___A0;
		NullCheck(L_15);
		int32_t L_16 = 1;
		int64_t L_17 = (int64_t)(L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_18 = ___A0;
		NullCheck(L_18);
		int32_t L_19 = 6;
		int64_t L_20 = (int64_t)(L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_21 = ___A0;
		NullCheck(L_21);
		int32_t L_22 = ((int32_t)11);
		int64_t L_23 = (int64_t)(L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = ___A0;
		NullCheck(L_24);
		int32_t L_25 = ((int32_t)16);
		int64_t L_26 = (int64_t)(L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_27 = ___A0;
		NullCheck(L_27);
		int32_t L_28 = ((int32_t)21);
		int64_t L_29 = (int64_t)(L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_1 = ((int64_t)(((int64_t)(((int64_t)(((int64_t)(L_17^L_20))^L_23))^L_26))^L_29));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_30 = ___A0;
		NullCheck(L_30);
		int32_t L_31 = 2;
		int64_t L_32 = (int64_t)(L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_33 = ___A0;
		NullCheck(L_33);
		int32_t L_34 = 7;
		int64_t L_35 = (int64_t)(L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_36 = ___A0;
		NullCheck(L_36);
		int32_t L_37 = ((int32_t)12);
		int64_t L_38 = (int64_t)(L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_39 = ___A0;
		NullCheck(L_39);
		int32_t L_40 = ((int32_t)17);
		int64_t L_41 = (int64_t)(L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_42 = ___A0;
		NullCheck(L_42);
		int32_t L_43 = ((int32_t)22);
		int64_t L_44 = (int64_t)(L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_2 = ((int64_t)(((int64_t)(((int64_t)(((int64_t)(L_32^L_35))^L_38))^L_41))^L_44));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_45 = ___A0;
		NullCheck(L_45);
		int32_t L_46 = 3;
		int64_t L_47 = (int64_t)(L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_48 = ___A0;
		NullCheck(L_48);
		int32_t L_49 = 8;
		int64_t L_50 = (int64_t)(L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_51 = ___A0;
		NullCheck(L_51);
		int32_t L_52 = ((int32_t)13);
		int64_t L_53 = (int64_t)(L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_54 = ___A0;
		NullCheck(L_54);
		int32_t L_55 = ((int32_t)18);
		int64_t L_56 = (int64_t)(L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_57 = ___A0;
		NullCheck(L_57);
		int32_t L_58 = ((int32_t)23);
		int64_t L_59 = (int64_t)(L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_3 = ((int64_t)(((int64_t)(((int64_t)(((int64_t)(L_47^L_50))^L_53))^L_56))^L_59));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_60 = ___A0;
		NullCheck(L_60);
		int32_t L_61 = 4;
		int64_t L_62 = (int64_t)(L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_63 = ___A0;
		NullCheck(L_63);
		int32_t L_64 = ((int32_t)9);
		int64_t L_65 = (int64_t)(L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_66 = ___A0;
		NullCheck(L_66);
		int32_t L_67 = ((int32_t)14);
		int64_t L_68 = (int64_t)(L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_69 = ___A0;
		NullCheck(L_69);
		int32_t L_70 = ((int32_t)19);
		int64_t L_71 = (int64_t)(L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_72 = ___A0;
		NullCheck(L_72);
		int32_t L_73 = ((int32_t)24);
		int64_t L_74 = (int64_t)(L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		V_4 = ((int64_t)(((int64_t)(((int64_t)(((int64_t)(L_62^L_65))^L_68))^L_71))^L_74));
		uint64_t L_75 = V_1;
		il2cpp_codegen_runtime_class_init_inline(KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_il2cpp_TypeInfo_var);
		uint64_t L_76;
		L_76 = KeccakDigest_leftRotate_m67FA24E0F32237BB0F78B9341E066C182B2586BA(L_75, 1, NULL);
		uint64_t L_77 = V_4;
		V_5 = ((int64_t)((int64_t)L_76^(int64_t)L_77));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_78 = ___A0;
		NullCheck(L_78);
		uint64_t* L_79 = ((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int64_t L_80 = *((int64_t*)L_79);
		uint64_t L_81 = V_5;
		*((int64_t*)L_79) = (int64_t)((int64_t)(L_80^(int64_t)L_81));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_82 = ___A0;
		NullCheck(L_82);
		uint64_t* L_83 = ((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(5)));
		int64_t L_84 = *((int64_t*)L_83);
		uint64_t L_85 = V_5;
		*((int64_t*)L_83) = (int64_t)((int64_t)(L_84^(int64_t)L_85));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_86 = ___A0;
		NullCheck(L_86);
		uint64_t* L_87 = ((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)10))));
		int64_t L_88 = *((int64_t*)L_87);
		uint64_t L_89 = V_5;
		*((int64_t*)L_87) = (int64_t)((int64_t)(L_88^(int64_t)L_89));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_90 = ___A0;
		NullCheck(L_90);
		uint64_t* L_91 = ((L_90)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)15))));
		int64_t L_92 = *((int64_t*)L_91);
		uint64_t L_93 = V_5;
		*((int64_t*)L_91) = (int64_t)((int64_t)(L_92^(int64_t)L_93));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_94 = ___A0;
		NullCheck(L_94);
		uint64_t* L_95 = ((L_94)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)20))));
		int64_t L_96 = *((int64_t*)L_95);
		uint64_t L_97 = V_5;
		*((int64_t*)L_95) = (int64_t)((int64_t)(L_96^(int64_t)L_97));
		uint64_t L_98 = V_2;
		uint64_t L_99;
		L_99 = KeccakDigest_leftRotate_m67FA24E0F32237BB0F78B9341E066C182B2586BA(L_98, 1, NULL);
		uint64_t L_100 = V_0;
		V_5 = ((int64_t)((int64_t)L_99^(int64_t)L_100));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_101 = ___A0;
		NullCheck(L_101);
		uint64_t* L_102 = ((L_101)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		int64_t L_103 = *((int64_t*)L_102);
		uint64_t L_104 = V_5;
		*((int64_t*)L_102) = (int64_t)((int64_t)(L_103^(int64_t)L_104));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_105 = ___A0;
		NullCheck(L_105);
		uint64_t* L_106 = ((L_105)->GetAddressAt(static_cast<il2cpp_array_size_t>(6)));
		int64_t L_107 = *((int64_t*)L_106);
		uint64_t L_108 = V_5;
		*((int64_t*)L_106) = (int64_t)((int64_t)(L_107^(int64_t)L_108));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_109 = ___A0;
		NullCheck(L_109);
		uint64_t* L_110 = ((L_109)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)11))));
		int64_t L_111 = *((int64_t*)L_110);
		uint64_t L_112 = V_5;
		*((int64_t*)L_110) = (int64_t)((int64_t)(L_111^(int64_t)L_112));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_113 = ___A0;
		NullCheck(L_113);
		uint64_t* L_114 = ((L_113)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)16))));
		int64_t L_115 = *((int64_t*)L_114);
		uint64_t L_116 = V_5;
		*((int64_t*)L_114) = (int64_t)((int64_t)(L_115^(int64_t)L_116));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_117 = ___A0;
		NullCheck(L_117);
		uint64_t* L_118 = ((L_117)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)21))));
		int64_t L_119 = *((int64_t*)L_118);
		uint64_t L_120 = V_5;
		*((int64_t*)L_118) = (int64_t)((int64_t)(L_119^(int64_t)L_120));
		uint64_t L_121 = V_3;
		uint64_t L_122;
		L_122 = KeccakDigest_leftRotate_m67FA24E0F32237BB0F78B9341E066C182B2586BA(L_121, 1, NULL);
		uint64_t L_123 = V_1;
		V_5 = ((int64_t)((int64_t)L_122^(int64_t)L_123));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_124 = ___A0;
		NullCheck(L_124);
		uint64_t* L_125 = ((L_124)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)));
		int64_t L_126 = *((int64_t*)L_125);
		uint64_t L_127 = V_5;
		*((int64_t*)L_125) = (int64_t)((int64_t)(L_126^(int64_t)L_127));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_128 = ___A0;
		NullCheck(L_128);
		uint64_t* L_129 = ((L_128)->GetAddressAt(static_cast<il2cpp_array_size_t>(7)));
		int64_t L_130 = *((int64_t*)L_129);
		uint64_t L_131 = V_5;
		*((int64_t*)L_129) = (int64_t)((int64_t)(L_130^(int64_t)L_131));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_132 = ___A0;
		NullCheck(L_132);
		uint64_t* L_133 = ((L_132)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)12))));
		int64_t L_134 = *((int64_t*)L_133);
		uint64_t L_135 = V_5;
		*((int64_t*)L_133) = (int64_t)((int64_t)(L_134^(int64_t)L_135));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_136 = ___A0;
		NullCheck(L_136);
		uint64_t* L_137 = ((L_136)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)17))));
		int64_t L_138 = *((int64_t*)L_137);
		uint64_t L_139 = V_5;
		*((int64_t*)L_137) = (int64_t)((int64_t)(L_138^(int64_t)L_139));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_140 = ___A0;
		NullCheck(L_140);
		uint64_t* L_141 = ((L_140)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)22))));
		int64_t L_142 = *((int64_t*)L_141);
		uint64_t L_143 = V_5;
		*((int64_t*)L_141) = (int64_t)((int64_t)(L_142^(int64_t)L_143));
		uint64_t L_144 = V_4;
		uint64_t L_145;
		L_145 = KeccakDigest_leftRotate_m67FA24E0F32237BB0F78B9341E066C182B2586BA(L_144, 1, NULL);
		uint64_t L_146 = V_2;
		V_5 = ((int64_t)((int64_t)L_145^(int64_t)L_146));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_147 = ___A0;
		NullCheck(L_147);
		uint64_t* L_148 = ((L_147)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)));
		int64_t L_149 = *((int64_t*)L_148);
		uint64_t L_150 = V_5;
		*((int64_t*)L_148) = (int64_t)((int64_t)(L_149^(int64_t)L_150));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_151 = ___A0;
		NullCheck(L_151);
		uint64_t* L_152 = ((L_151)->GetAddressAt(static_cast<il2cpp_array_size_t>(8)));
		int64_t L_153 = *((int64_t*)L_152);
		uint64_t L_154 = V_5;
		*((int64_t*)L_152) = (int64_t)((int64_t)(L_153^(int64_t)L_154));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_155 = ___A0;
		NullCheck(L_155);
		uint64_t* L_156 = ((L_155)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)13))));
		int64_t L_157 = *((int64_t*)L_156);
		uint64_t L_158 = V_5;
		*((int64_t*)L_156) = (int64_t)((int64_t)(L_157^(int64_t)L_158));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_159 = ___A0;
		NullCheck(L_159);
		uint64_t* L_160 = ((L_159)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)18))));
		int64_t L_161 = *((int64_t*)L_160);
		uint64_t L_162 = V_5;
		*((int64_t*)L_160) = (int64_t)((int64_t)(L_161^(int64_t)L_162));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_163 = ___A0;
		NullCheck(L_163);
		uint64_t* L_164 = ((L_163)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)23))));
		int64_t L_165 = *((int64_t*)L_164);
		uint64_t L_166 = V_5;
		*((int64_t*)L_164) = (int64_t)((int64_t)(L_165^(int64_t)L_166));
		uint64_t L_167 = V_0;
		uint64_t L_168;
		L_168 = KeccakDigest_leftRotate_m67FA24E0F32237BB0F78B9341E066C182B2586BA(L_167, 1, NULL);
		uint64_t L_169 = V_3;
		V_5 = ((int64_t)((int64_t)L_168^(int64_t)L_169));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_170 = ___A0;
		NullCheck(L_170);
		uint64_t* L_171 = ((L_170)->GetAddressAt(static_cast<il2cpp_array_size_t>(4)));
		int64_t L_172 = *((int64_t*)L_171);
		uint64_t L_173 = V_5;
		*((int64_t*)L_171) = (int64_t)((int64_t)(L_172^(int64_t)L_173));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_174 = ___A0;
		NullCheck(L_174);
		uint64_t* L_175 = ((L_174)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)9))));
		int64_t L_176 = *((int64_t*)L_175);
		uint64_t L_177 = V_5;
		*((int64_t*)L_175) = (int64_t)((int64_t)(L_176^(int64_t)L_177));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_178 = ___A0;
		NullCheck(L_178);
		uint64_t* L_179 = ((L_178)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)14))));
		int64_t L_180 = *((int64_t*)L_179);
		uint64_t L_181 = V_5;
		*((int64_t*)L_179) = (int64_t)((int64_t)(L_180^(int64_t)L_181));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_182 = ___A0;
		NullCheck(L_182);
		uint64_t* L_183 = ((L_182)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)19))));
		int64_t L_184 = *((int64_t*)L_183);
		uint64_t L_185 = V_5;
		*((int64_t*)L_183) = (int64_t)((int64_t)(L_184^(int64_t)L_185));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_186 = ___A0;
		NullCheck(L_186);
		uint64_t* L_187 = ((L_186)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)24))));
		int64_t L_188 = *((int64_t*)L_187);
		uint64_t L_189 = V_5;
		*((int64_t*)L_187) = (int64_t)((int64_t)(L_188^(int64_t)L_189));
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::Rho(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Rho_mE6B61556A32A8DC14E2AD01AF8AD6A4B015390B9 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___A0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 1;
		goto IL_001a;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___A0;
		int32_t L_1 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___A0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int64_t L_5 = (int64_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		il2cpp_codegen_runtime_class_init_inline(KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ((KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_StaticFields*)il2cpp_codegen_static_fields_for(KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_il2cpp_TypeInfo_var))->___KeccakRhoOffsets_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		uint64_t L_10;
		L_10 = KeccakDigest_leftRotate_m67FA24E0F32237BB0F78B9341E066C182B2586BA(L_5, L_9, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint64_t)L_10);
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_001a:
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)25))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::Pi(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Pi_m478BBE1D265C304F3FB74915F2208D50B112C402 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___A0, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___A0;
		NullCheck(L_0);
		int32_t L_1 = 1;
		int64_t L_2 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___A0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___A0;
		NullCheck(L_4);
		int32_t L_5 = 6;
		int64_t L_6 = (int64_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_6);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = ___A0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___A0;
		NullCheck(L_8);
		int32_t L_9 = ((int32_t)9);
		int64_t L_10 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_10);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___A0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = ___A0;
		NullCheck(L_12);
		int32_t L_13 = ((int32_t)22);
		int64_t L_14 = (int64_t)(L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint64_t)L_14);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_15 = ___A0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = ___A0;
		NullCheck(L_16);
		int32_t L_17 = ((int32_t)14);
		int64_t L_18 = (int64_t)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (uint64_t)L_18);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_19 = ___A0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___A0;
		NullCheck(L_20);
		int32_t L_21 = ((int32_t)20);
		int64_t L_22 = (int64_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint64_t)L_22);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = ___A0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = ___A0;
		NullCheck(L_24);
		int32_t L_25 = 2;
		int64_t L_26 = (int64_t)(L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (uint64_t)L_26);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_27 = ___A0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_28 = ___A0;
		NullCheck(L_28);
		int32_t L_29 = ((int32_t)12);
		int64_t L_30 = (int64_t)(L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_30);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_31 = ___A0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = ___A0;
		NullCheck(L_32);
		int32_t L_33 = ((int32_t)13);
		int64_t L_34 = (int64_t)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint64_t)L_34);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_35 = ___A0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_36 = ___A0;
		NullCheck(L_36);
		int32_t L_37 = ((int32_t)19);
		int64_t L_38 = (int64_t)(L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint64_t)L_38);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_39 = ___A0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_40 = ___A0;
		NullCheck(L_40);
		int32_t L_41 = ((int32_t)23);
		int64_t L_42 = (int64_t)(L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (uint64_t)L_42);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_43 = ___A0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_44 = ___A0;
		NullCheck(L_44);
		int32_t L_45 = ((int32_t)15);
		int64_t L_46 = (int64_t)(L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (uint64_t)L_46);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_47 = ___A0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_48 = ___A0;
		NullCheck(L_48);
		int32_t L_49 = 4;
		int64_t L_50 = (int64_t)(L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint64_t)L_50);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_51 = ___A0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_52 = ___A0;
		NullCheck(L_52);
		int32_t L_53 = ((int32_t)24);
		int64_t L_54 = (int64_t)(L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_54);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_55 = ___A0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_56 = ___A0;
		NullCheck(L_56);
		int32_t L_57 = ((int32_t)21);
		int64_t L_58 = (int64_t)(L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (uint64_t)L_58);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_59 = ___A0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_60 = ___A0;
		NullCheck(L_60);
		int32_t L_61 = 8;
		int64_t L_62 = (int64_t)(L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (uint64_t)L_62);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_63 = ___A0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_64 = ___A0;
		NullCheck(L_64);
		int32_t L_65 = ((int32_t)16);
		int64_t L_66 = (int64_t)(L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint64_t)L_66);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_67 = ___A0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_68 = ___A0;
		NullCheck(L_68);
		int32_t L_69 = 5;
		int64_t L_70 = (int64_t)(L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (uint64_t)L_70);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_71 = ___A0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_72 = ___A0;
		NullCheck(L_72);
		int32_t L_73 = 3;
		int64_t L_74 = (int64_t)(L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_74);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_75 = ___A0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_76 = ___A0;
		NullCheck(L_76);
		int32_t L_77 = ((int32_t)18);
		int64_t L_78 = (int64_t)(L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_78);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_79 = ___A0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_80 = ___A0;
		NullCheck(L_80);
		int32_t L_81 = ((int32_t)17);
		int64_t L_82 = (int64_t)(L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (uint64_t)L_82);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_83 = ___A0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_84 = ___A0;
		NullCheck(L_84);
		int32_t L_85 = ((int32_t)11);
		int64_t L_86 = (int64_t)(L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (uint64_t)L_86);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_87 = ___A0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_88 = ___A0;
		NullCheck(L_88);
		int32_t L_89 = 7;
		int64_t L_90 = (int64_t)(L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint64_t)L_90);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_91 = ___A0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_92 = ___A0;
		NullCheck(L_92);
		int32_t L_93 = ((int32_t)10);
		int64_t L_94 = (int64_t)(L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		NullCheck(L_91);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint64_t)L_94);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_95 = ___A0;
		uint64_t L_96 = V_0;
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint64_t)L_96);
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::Chi(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Chi_mF939CE9BBD3B6B0F446DB6BBCBB523219232BA2B (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___A0, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	int32_t V_5 = 0;
	{
		V_5 = 0;
		goto IL_0099;
	}

IL_0008:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___A0;
		int32_t L_1 = V_5;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___A0;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(1, L_5));
		int64_t L_7 = (int64_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___A0;
		int32_t L_9 = V_5;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(2, L_9));
		int64_t L_11 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int64_t)(L_3^((int64_t)(((~L_7))&L_11))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = ___A0;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(1, L_13));
		int64_t L_15 = (int64_t)(L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = ___A0;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(2, L_17));
		int64_t L_19 = (int64_t)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___A0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(3, L_21));
		int64_t L_23 = (int64_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_1 = ((int64_t)(L_15^((int64_t)(((~L_19))&L_23))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = ___A0;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(2, L_25));
		int64_t L_27 = (int64_t)(L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_28 = ___A0;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(3, L_29));
		int64_t L_31 = (int64_t)(L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = ___A0;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(4, L_33));
		int64_t L_35 = (int64_t)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_2 = ((int64_t)(L_27^((int64_t)(((~L_31))&L_35))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_36 = ___A0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = ((int32_t)il2cpp_codegen_add(3, L_37));
		int64_t L_39 = (int64_t)(L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_40 = ___A0;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(4, L_41));
		int64_t L_43 = (int64_t)(L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_44 = ___A0;
		int32_t L_45 = V_5;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		int64_t L_47 = (int64_t)(L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_3 = ((int64_t)(L_39^((int64_t)(((~L_43))&L_47))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_48 = ___A0;
		int32_t L_49 = V_5;
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)il2cpp_codegen_add(4, L_49));
		int64_t L_51 = (int64_t)(L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_52 = ___A0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		int64_t L_55 = (int64_t)(L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_56 = ___A0;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(1, L_57));
		int64_t L_59 = (int64_t)(L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_4 = ((int64_t)(L_51^((int64_t)(((~L_55))&L_59))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_60 = ___A0;
		int32_t L_61 = V_5;
		uint64_t L_62 = V_0;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (uint64_t)L_62);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_63 = ___A0;
		int32_t L_64 = V_5;
		uint64_t L_65 = V_1;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(1, L_64))), (uint64_t)L_65);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_66 = ___A0;
		int32_t L_67 = V_5;
		uint64_t L_68 = V_2;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(2, L_67))), (uint64_t)L_68);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_69 = ___A0;
		int32_t L_70 = V_5;
		uint64_t L_71 = V_3;
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(3, L_70))), (uint64_t)L_71);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_72 = ___A0;
		int32_t L_73 = V_5;
		uint64_t L_74 = V_4;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(4, L_73))), (uint64_t)L_74);
		int32_t L_75 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_75, 5));
	}

IL_0099:
	{
		int32_t L_76 = V_5;
		if ((((int32_t)L_76) < ((int32_t)((int32_t)25))))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::Iota(System.UInt64[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Iota_m742EA935E9E417BE170ABBB9AB18C851CF4A1A91 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___A0, int32_t ___indexRound1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___A0;
		NullCheck(L_0);
		uint64_t* L_1 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int64_t L_2 = *((int64_t*)L_1);
		il2cpp_codegen_runtime_class_init_inline(KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_il2cpp_TypeInfo_var);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ((KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_StaticFields*)il2cpp_codegen_static_fields_for(KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_il2cpp_TypeInfo_var))->___KeccakRoundConstants_0;
		int32_t L_4 = ___indexRound1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int64_t L_6 = (int64_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*((int64_t*)L_1) = (int64_t)((int64_t)(L_2^L_6));
		return;
	}
}
// System.Void Nethereum.Util.Keccak.KeccakDigest::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest__cctor_mD270A0CDEC263512424514D8A682B0361EEBF0ED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0;
		L_0 = KeccakDigest_KeccakInitializeRoundConstants_m51D2F707381B1235BB330061CF449575A767217B(NULL);
		((KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_StaticFields*)il2cpp_codegen_static_fields_for(KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_il2cpp_TypeInfo_var))->___KeccakRoundConstants_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_StaticFields*)il2cpp_codegen_static_fields_for(KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_il2cpp_TypeInfo_var))->___KeccakRoundConstants_0), (void*)L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = KeccakDigest_KeccakInitializeRhoOffsets_mDD4EAAC764877F56239B2356540BDD006D5B541B(NULL);
		((KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_StaticFields*)il2cpp_codegen_static_fields_for(KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_il2cpp_TypeInfo_var))->___KeccakRhoOffsets_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_StaticFields*)il2cpp_codegen_static_fields_for(KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_il2cpp_TypeInfo_var))->___KeccakRhoOffsets_1), (void*)L_1);
		((KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_StaticFields*)il2cpp_codegen_static_fields_for(KeccakDigest_tD75BFED1FEAC6CA15164975D7A27526D06E9C4F7_il2cpp_TypeInfo_var))->___STATE_LENGTH_2 = ((int32_t)200);
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
// System.Void Nethereum.Util.Keccak.Pack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack__ctor_m0C50980CBBA21A42DC4B0BF1C457846D3F712256 (Pack_tB4EC70868FBBA5614C424646873E55E2EE4C84D2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt16_To_BE(System.UInt16,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt16_To_BE_m3F7776E2FE45D5D60AA3B3AE5A96C3D66019EC85 (uint16_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs1;
		uint16_t L_1 = ___n0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_1>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bs1;
		uint16_t L_3 = ___n0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)L_3));
		return;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt16_To_BE(System.UInt16,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt16_To_BE_mD178B01FD52EDCDF761EE655AA8CFED91F1D53EE (uint16_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs1;
		int32_t L_1 = ___off2;
		uint16_t L_2 = ___n0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_2>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bs1;
		int32_t L_4 = ___off2;
		uint16_t L_5 = ___n0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 1))), (uint8_t)((int32_t)(uint8_t)L_5));
		return;
	}
}
// System.UInt16 Nethereum.Util.Keccak.Pack::BE_To_UInt16(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Pack_BE_To_UInt16_m28771E107B048C2DAEF4FEA4EF5CB6B094AEE354 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bs0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_2<<8))|(int32_t)L_5)));
	}
}
// System.UInt16 Nethereum.Util.Keccak.Pack::BE_To_UInt16(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Pack_BE_To_UInt16_m979CD366FFD0DBBFB3B6241669F9005F94470C3B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs0;
		int32_t L_1 = ___off1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___bs0;
		int32_t L_5 = ___off1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_3<<8))|(int32_t)L_7)));
	}
}
// System.Byte[] Nethereum.Util.Keccak.Pack::UInt32_To_BE(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Pack_UInt32_To_BE_m3D03643D13A5C240F05CA427BF623D648A29A198 (uint32_t ___n0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		uint32_t L_1 = ___n0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		Pack_UInt32_To_BE_mF2E8B31DF4270DD6834E3D9133107935C0C4EA12(L_1, L_2, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		return L_3;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt32_To_BE(System.UInt32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_BE_m8AD82EC54386481A24A53D7C164C99D206CA0DAD (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs1;
		uint32_t L_1 = ___n0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_1>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bs1;
		uint32_t L_3 = ___n0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_3>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___bs1;
		uint32_t L_5 = ___n0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_5>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___bs1;
		uint32_t L_7 = ___n0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)L_7));
		return;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt32_To_BE(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_BE_mF2E8B31DF4270DD6834E3D9133107935C0C4EA12 (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs1;
		int32_t L_1 = ___off2;
		uint32_t L_2 = ___n0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_2>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bs1;
		int32_t L_4 = ___off2;
		uint32_t L_5 = ___n0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_5>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___bs1;
		int32_t L_7 = ___off2;
		uint32_t L_8 = ___n0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_8>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___bs1;
		int32_t L_10 = ___off2;
		uint32_t L_11 = ___n0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_10, 3))), (uint8_t)((int32_t)(uint8_t)L_11));
		return;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Pack::UInt32_To_BE(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Pack_UInt32_To_BE_m569789A334104FACDE0ED1FB1B906A95045F0EE3 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ns0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___ns0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(4, ((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___ns0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		Pack_UInt32_To_BE_mAB92F96F9BBE4503F936BE1F22FF80D5866836C1(L_2, L_3, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		return L_4;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt32_To_BE(System.UInt32[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_BE_mAB92F96F9BBE4503F936BE1F22FF80D5866836C1 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ns0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0017;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___ns0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___bs1;
		int32_t L_5 = ___off2;
		Pack_UInt32_To_BE_mF2E8B31DF4270DD6834E3D9133107935C0C4EA12(L_3, L_4, L_5, NULL);
		int32_t L_6 = ___off2;
		___off2 = ((int32_t)il2cpp_codegen_add(L_6, 4));
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0017:
	{
		int32_t L_8 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___ns0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.UInt32 Nethereum.Util.Keccak.Pack::BE_To_UInt32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_BE_To_UInt32_mCF91DB30C034C8478C2ED5A486472FCC1EC3134F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bs0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___bs0;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___bs0;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_2<<((int32_t)24)))|((int32_t)((int32_t)L_5<<((int32_t)16)))))|((int32_t)((int32_t)L_8<<8))))|(int32_t)L_11));
	}
}
// System.UInt32 Nethereum.Util.Keccak.Pack::BE_To_UInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_BE_To_UInt32_m873E6DD001E9F00393EF9F06DA0D3513BBFB3FDA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs0;
		int32_t L_1 = ___off1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___bs0;
		int32_t L_5 = ___off1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___bs0;
		int32_t L_9 = ___off1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___bs0;
		int32_t L_13 = ___off1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_3<<((int32_t)24)))|((int32_t)((int32_t)L_7<<((int32_t)16)))))|((int32_t)((int32_t)L_11<<8))))|(int32_t)L_15));
	}
}
// System.Void Nethereum.Util.Keccak.Pack::BE_To_UInt32(System.Byte[],System.Int32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_BE_To_UInt32_m446B35006F53D271AE5FDBAA0851734CB6EAF860 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ns2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0017;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___ns2;
		int32_t L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bs0;
		int32_t L_3 = ___off1;
		uint32_t L_4;
		L_4 = Pack_BE_To_UInt32_m873E6DD001E9F00393EF9F06DA0D3513BBFB3FDA(L_2, L_3, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)L_4);
		int32_t L_5 = ___off1;
		___off1 = ((int32_t)il2cpp_codegen_add(L_5, 4));
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0017:
	{
		int32_t L_7 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___ns2;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Pack::UInt64_To_BE(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Pack_UInt64_To_BE_mA53479D5C64FAB4DB7BD6A9BF54BE4C9966C241B (uint64_t ___n0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_0;
		uint64_t L_1 = ___n0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		Pack_UInt64_To_BE_m2858A46307524A37655A016E5F312634237A290D(L_1, L_2, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		return L_3;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt64_To_BE(System.UInt64,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_BE_m6C218875E023BAC05113788230A7C01E567381AE (uint64_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___n0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bs1;
		Pack_UInt32_To_BE_m8AD82EC54386481A24A53D7C164C99D206CA0DAD(((int32_t)(uint32_t)((int64_t)((uint64_t)L_0>>((int32_t)32)))), L_1, NULL);
		uint64_t L_2 = ___n0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bs1;
		Pack_UInt32_To_BE_mF2E8B31DF4270DD6834E3D9133107935C0C4EA12(((int32_t)(uint32_t)L_2), L_3, 4, NULL);
		return;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt64_To_BE(System.UInt64,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_BE_m2858A46307524A37655A016E5F312634237A290D (uint64_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___n0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bs1;
		int32_t L_2 = ___off2;
		Pack_UInt32_To_BE_mF2E8B31DF4270DD6834E3D9133107935C0C4EA12(((int32_t)(uint32_t)((int64_t)((uint64_t)L_0>>((int32_t)32)))), L_1, L_2, NULL);
		uint64_t L_3 = ___n0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___bs1;
		int32_t L_5 = ___off2;
		Pack_UInt32_To_BE_mF2E8B31DF4270DD6834E3D9133107935C0C4EA12(((int32_t)(uint32_t)L_3), L_4, ((int32_t)il2cpp_codegen_add(L_5, 4)), NULL);
		return;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Pack::UInt64_To_BE(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Pack_UInt64_To_BE_m2BE012D727F37D6EF3D185CE5F17886A0CF75337 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___ns0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___ns0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(8, ((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = L_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___ns0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		Pack_UInt64_To_BE_m42B6627FCE473A4255811A9C0BEA3D1BBC54F2A8(L_2, L_3, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		return L_4;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt64_To_BE(System.UInt64[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_BE_m42B6627FCE473A4255811A9C0BEA3D1BBC54F2A8 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___ns0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0017;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___ns0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___bs1;
		int32_t L_5 = ___off2;
		Pack_UInt64_To_BE_m2858A46307524A37655A016E5F312634237A290D(L_3, L_4, L_5, NULL);
		int32_t L_6 = ___off2;
		___off2 = ((int32_t)il2cpp_codegen_add(L_6, 8));
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0017:
	{
		int32_t L_8 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = ___ns0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.UInt64 Nethereum.Util.Keccak.Pack::BE_To_UInt64(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Pack_BE_To_UInt64_m7F2C4140945B6866E1A4BC692F10AB3A915E584C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs0;
		uint32_t L_1;
		L_1 = Pack_BE_To_UInt32_mCF91DB30C034C8478C2ED5A486472FCC1EC3134F(L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bs0;
		uint32_t L_3;
		L_3 = Pack_BE_To_UInt32_m873E6DD001E9F00393EF9F06DA0D3513BBFB3FDA(L_2, 4, NULL);
		V_0 = L_3;
		uint32_t L_4 = V_0;
		return ((int64_t)(((int64_t)(((int64_t)(uint64_t)L_1)<<((int32_t)32)))|((int64_t)(uint64_t)L_4)));
	}
}
// System.UInt64 Nethereum.Util.Keccak.Pack::BE_To_UInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Pack_BE_To_UInt64_mCC6E09C46B87F8CCA2CE6E80BDA14E9CA23DF571 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs0;
		int32_t L_1 = ___off1;
		uint32_t L_2;
		L_2 = Pack_BE_To_UInt32_m873E6DD001E9F00393EF9F06DA0D3513BBFB3FDA(L_0, L_1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bs0;
		int32_t L_4 = ___off1;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_m873E6DD001E9F00393EF9F06DA0D3513BBFB3FDA(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		V_0 = L_5;
		uint32_t L_6 = V_0;
		return ((int64_t)(((int64_t)(((int64_t)(uint64_t)L_2)<<((int32_t)32)))|((int64_t)(uint64_t)L_6)));
	}
}
// System.Void Nethereum.Util.Keccak.Pack::BE_To_UInt64(System.Byte[],System.Int32,System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_BE_To_UInt64_m2A60C1EFEC5868E2EDB667E66B92188C111BF3A1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___ns2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0017;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___ns2;
		int32_t L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bs0;
		int32_t L_3 = ___off1;
		uint64_t L_4;
		L_4 = Pack_BE_To_UInt64_mCC6E09C46B87F8CCA2CE6E80BDA14E9CA23DF571(L_2, L_3, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint64_t)L_4);
		int32_t L_5 = ___off1;
		___off1 = ((int32_t)il2cpp_codegen_add(L_5, 8));
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0017:
	{
		int32_t L_7 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___ns2;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt16_To_LE(System.UInt16,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt16_To_LE_mA555DB5C5C3C80A4F85AF47BC4342579A38D1D3D (uint16_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs1;
		uint16_t L_1 = ___n0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)L_1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bs1;
		uint16_t L_3 = ___n0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_3>>8))));
		return;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt16_To_LE(System.UInt16,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt16_To_LE_m460A13DC35556C3959FFD5D9A9084F916B2633E1 (uint16_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs1;
		int32_t L_1 = ___off2;
		uint16_t L_2 = ___n0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bs1;
		int32_t L_4 = ___off2;
		uint16_t L_5 = ___n0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_5>>8))));
		return;
	}
}
// System.UInt16 Nethereum.Util.Keccak.Pack::LE_To_UInt16(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Pack_LE_To_UInt16_m7734DC7E237C4AC259A7C11AD0D130A83B2A742B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bs0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_2|((int32_t)((int32_t)L_5<<8)))));
	}
}
// System.UInt16 Nethereum.Util.Keccak.Pack::LE_To_UInt16(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Pack_LE_To_UInt16_mA413AB6D4450A34074C169C1705DE50C7673335E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs0;
		int32_t L_1 = ___off1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___bs0;
		int32_t L_5 = ___off1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_3|((int32_t)((int32_t)L_7<<8)))));
	}
}
// System.Byte[] Nethereum.Util.Keccak.Pack::UInt32_To_LE(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Pack_UInt32_To_LE_mE482CB9B07CF764563066FF07B517A8A493A60CB (uint32_t ___n0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		uint32_t L_1 = ___n0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		Pack_UInt32_To_LE_mF29A216542A56F5462F38AF6D04654E6FAE808A4(L_1, L_2, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		return L_3;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt32_To_LE(System.UInt32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_LE_mB56CE57D85B19A17CF5AA5AF7106BC8CC931A4A1 (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs1;
		uint32_t L_1 = ___n0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)L_1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bs1;
		uint32_t L_3 = ___n0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_3>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___bs1;
		uint32_t L_5 = ___n0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_5>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___bs1;
		uint32_t L_7 = ___n0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_7>>((int32_t)24)))));
		return;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt32_To_LE(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_LE_mF29A216542A56F5462F38AF6D04654E6FAE808A4 (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs1;
		int32_t L_1 = ___off2;
		uint32_t L_2 = ___n0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bs1;
		int32_t L_4 = ___off2;
		uint32_t L_5 = ___n0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_5>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___bs1;
		int32_t L_7 = ___off2;
		uint32_t L_8 = ___n0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_8>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___bs1;
		int32_t L_10 = ___off2;
		uint32_t L_11 = ___n0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_10, 3))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_11>>((int32_t)24)))));
		return;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Pack::UInt32_To_LE(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Pack_UInt32_To_LE_m5EAB36721FBF47D896D9BBFF1CDD9B621CACE04E (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ns0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___ns0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(4, ((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___ns0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		Pack_UInt32_To_LE_mC64CEDEF84B6949E133D76BFE2830B1CAF23526C(L_2, L_3, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		return L_4;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt32_To_LE(System.UInt32[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_LE_mC64CEDEF84B6949E133D76BFE2830B1CAF23526C (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ns0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0017;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___ns0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___bs1;
		int32_t L_5 = ___off2;
		Pack_UInt32_To_LE_mF29A216542A56F5462F38AF6D04654E6FAE808A4(L_3, L_4, L_5, NULL);
		int32_t L_6 = ___off2;
		___off2 = ((int32_t)il2cpp_codegen_add(L_6, 4));
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0017:
	{
		int32_t L_8 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___ns0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.UInt32 Nethereum.Util.Keccak.Pack::LE_To_UInt32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_LE_To_UInt32_m2FD6B1A2AD89145C1744BC58FAB0D23D9E97D415 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bs0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___bs0;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___bs0;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_2|((int32_t)((int32_t)L_5<<8))))|((int32_t)((int32_t)L_8<<((int32_t)16)))))|((int32_t)((int32_t)L_11<<((int32_t)24)))));
	}
}
// System.UInt32 Nethereum.Util.Keccak.Pack::LE_To_UInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_LE_To_UInt32_mCD03138601EE575E33E887C90AA6CF4A594BD309 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs0;
		int32_t L_1 = ___off1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___bs0;
		int32_t L_5 = ___off1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___bs0;
		int32_t L_9 = ___off1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___bs0;
		int32_t L_13 = ___off1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_3|((int32_t)((int32_t)L_7<<8))))|((int32_t)((int32_t)L_11<<((int32_t)16)))))|((int32_t)((int32_t)L_15<<((int32_t)24)))));
	}
}
// System.Void Nethereum.Util.Keccak.Pack::LE_To_UInt32(System.Byte[],System.Int32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_LE_To_UInt32_m8C839B0BC144C2C960993308B2EDD3D8F0AD0B8C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ns2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0017;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___ns2;
		int32_t L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bs0;
		int32_t L_3 = ___off1;
		uint32_t L_4;
		L_4 = Pack_LE_To_UInt32_mCD03138601EE575E33E887C90AA6CF4A594BD309(L_2, L_3, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)L_4);
		int32_t L_5 = ___off1;
		___off1 = ((int32_t)il2cpp_codegen_add(L_5, 4));
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0017:
	{
		int32_t L_7 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___ns2;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::LE_To_UInt32(System.Byte[],System.Int32,System.UInt32[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_LE_To_UInt32_mC4BCD5AB57C201C9A5C982C0C0DB5500D42A2262 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___bOff1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ns2, int32_t ___nOff3, int32_t ___count4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___ns2;
		int32_t L_1 = ___nOff3;
		int32_t L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bs0;
		int32_t L_4 = ___bOff1;
		uint32_t L_5;
		L_5 = Pack_LE_To_UInt32_mCD03138601EE575E33E887C90AA6CF4A594BD309(L_3, L_4, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (uint32_t)L_5);
		int32_t L_6 = ___bOff1;
		___bOff1 = ((int32_t)il2cpp_codegen_add(L_6, 4));
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0019:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = ___count4;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.UInt32[] Nethereum.Util.Keccak.Pack::LE_To_UInt32(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Pack_LE_To_UInt32_m1508CF089C1E65812906CA2FD84B1A66045833DF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___count2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_001e;
	}

IL_000b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		int32_t L_3 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___bs0;
		int32_t L_5 = ___off1;
		uint32_t L_6;
		L_6 = Pack_LE_To_UInt32_mCD03138601EE575E33E887C90AA6CF4A594BD309(L_4, L_5, NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint32_t)L_6);
		int32_t L_7 = ___off1;
		___off1 = ((int32_t)il2cpp_codegen_add(L_7, 4));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_001e:
	{
		int32_t L_9 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		return L_11;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Pack::UInt64_To_LE(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Pack_UInt64_To_LE_m4311F412A47FD21A23D569943E699794D4360270 (uint64_t ___n0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_0;
		uint64_t L_1 = ___n0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		Pack_UInt64_To_LE_mAF15D24E8A2D9ADF7222B6FD6FBC28F5766325E9(L_1, L_2, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		return L_3;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt64_To_LE(System.UInt64,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_LE_mBF56B418C84C4448216B1A80AF49244600C652A2 (uint64_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___n0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bs1;
		Pack_UInt32_To_LE_mB56CE57D85B19A17CF5AA5AF7106BC8CC931A4A1(((int32_t)(uint32_t)L_0), L_1, NULL);
		uint64_t L_2 = ___n0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bs1;
		Pack_UInt32_To_LE_mF29A216542A56F5462F38AF6D04654E6FAE808A4(((int32_t)(uint32_t)((int64_t)((uint64_t)L_2>>((int32_t)32)))), L_3, 4, NULL);
		return;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt64_To_LE(System.UInt64,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_LE_mAF15D24E8A2D9ADF7222B6FD6FBC28F5766325E9 (uint64_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___n0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bs1;
		int32_t L_2 = ___off2;
		Pack_UInt32_To_LE_mF29A216542A56F5462F38AF6D04654E6FAE808A4(((int32_t)(uint32_t)L_0), L_1, L_2, NULL);
		uint64_t L_3 = ___n0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___bs1;
		int32_t L_5 = ___off2;
		Pack_UInt32_To_LE_mF29A216542A56F5462F38AF6D04654E6FAE808A4(((int32_t)(uint32_t)((int64_t)((uint64_t)L_3>>((int32_t)32)))), L_4, ((int32_t)il2cpp_codegen_add(L_5, 4)), NULL);
		return;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Pack::UInt64_To_LE(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Pack_UInt64_To_LE_m1099F609AC03516838F6F80298749FC3FEB5E1AA (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___ns0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___ns0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(8, ((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = L_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___ns0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		Pack_UInt64_To_LE_mF789A24148BA52964552420B87173752C6172CC9(L_2, L_3, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		return L_4;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt64_To_LE(System.UInt64[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_LE_mF789A24148BA52964552420B87173752C6172CC9 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___ns0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0017;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___ns0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___bs1;
		int32_t L_5 = ___off2;
		Pack_UInt64_To_LE_mAF15D24E8A2D9ADF7222B6FD6FBC28F5766325E9(L_3, L_4, L_5, NULL);
		int32_t L_6 = ___off2;
		___off2 = ((int32_t)il2cpp_codegen_add(L_6, 8));
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0017:
	{
		int32_t L_8 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = ___ns0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::UInt64_To_LE(System.UInt64[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_LE_m8E513C0C7E26D1E73DB8FC63FA9D286625C2C610 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___ns0, int32_t ___nsOff1, int32_t ___nsLen2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs3, int32_t ___bsOff4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001b;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___ns0;
		int32_t L_1 = ___nsOff1;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		int64_t L_4 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___bs3;
		int32_t L_6 = ___bsOff4;
		Pack_UInt64_To_LE_mAF15D24E8A2D9ADF7222B6FD6FBC28F5766325E9(L_4, L_5, L_6, NULL);
		int32_t L_7 = ___bsOff4;
		___bsOff4 = ((int32_t)il2cpp_codegen_add(L_7, 8));
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_001b:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ___nsLen2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.UInt64 Nethereum.Util.Keccak.Pack::LE_To_UInt64(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Pack_LE_To_UInt64_m6C5181C96629F0418DBAC0D78DE400B3F3A5BB0A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs0;
		uint32_t L_1;
		L_1 = Pack_LE_To_UInt32_m2FD6B1A2AD89145C1744BC58FAB0D23D9E97D415(L_0, NULL);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bs0;
		uint32_t L_3;
		L_3 = Pack_LE_To_UInt32_mCD03138601EE575E33E887C90AA6CF4A594BD309(L_2, 4, NULL);
		uint32_t L_4 = V_0;
		return ((int64_t)(((int64_t)(((int64_t)(uint64_t)L_3)<<((int32_t)32)))|((int64_t)(uint64_t)L_4)));
	}
}
// System.UInt64 Nethereum.Util.Keccak.Pack::LE_To_UInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Pack_LE_To_UInt64_m4A932F443044B6CB9A3022E4B348691318F47EDE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs0;
		int32_t L_1 = ___off1;
		uint32_t L_2;
		L_2 = Pack_LE_To_UInt32_mCD03138601EE575E33E887C90AA6CF4A594BD309(L_0, L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bs0;
		int32_t L_4 = ___off1;
		uint32_t L_5;
		L_5 = Pack_LE_To_UInt32_mCD03138601EE575E33E887C90AA6CF4A594BD309(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		uint32_t L_6 = V_0;
		return ((int64_t)(((int64_t)(((int64_t)(uint64_t)L_5)<<((int32_t)32)))|((int64_t)(uint64_t)L_6)));
	}
}
// System.Void Nethereum.Util.Keccak.Pack::LE_To_UInt64(System.Byte[],System.Int32,System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_LE_To_UInt64_m515524B55FE5F571705F603439C2848879972B85 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___ns2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0017;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___ns2;
		int32_t L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bs0;
		int32_t L_3 = ___off1;
		uint64_t L_4;
		L_4 = Pack_LE_To_UInt64_m4A932F443044B6CB9A3022E4B348691318F47EDE(L_2, L_3, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint64_t)L_4);
		int32_t L_5 = ___off1;
		___off1 = ((int32_t)il2cpp_codegen_add(L_5, 8));
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0017:
	{
		int32_t L_7 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___ns2;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Nethereum.Util.Keccak.Pack::LE_To_UInt64(System.Byte[],System.Int32,System.UInt64[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_LE_To_UInt64_mDC9104C87A450B7F6CD7BD99A90328DFC7DF283F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___bsOff1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___ns2, int32_t ___nsOff3, int32_t ___nsLen4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___ns2;
		int32_t L_1 = ___nsOff3;
		int32_t L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bs0;
		int32_t L_4 = ___bsOff1;
		uint64_t L_5;
		L_5 = Pack_LE_To_UInt64_m4A932F443044B6CB9A3022E4B348691318F47EDE(L_3, L_4, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (uint64_t)L_5);
		int32_t L_6 = ___bsOff1;
		___bsOff1 = ((int32_t)il2cpp_codegen_add(L_6, 8));
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0019:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = ___nsLen4;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
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
// System.Boolean Nethereum.Util.Keccak.Arrays::AreEqual(System.Boolean[],System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_AreEqual_m7CEDACCD1D5CA660786D84B140DF2016B3847F52 (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___a0, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___b1, const RuntimeMethod* method) 
{
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___a0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = ___b1;
		if ((!(((RuntimeObject*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)L_0) == ((RuntimeObject*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = ___a0;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = ___b1;
		if (L_3)
		{
			goto IL_000e;
		}
	}

IL_000c:
	{
		return (bool)0;
	}

IL_000e:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = ___a0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_5 = ___b1;
		bool L_6;
		L_6 = Arrays_HaveSameContents_m2E3ED5E4B183C5C0637C938DDA43B6EB8D7D5587(L_4, L_5, NULL);
		return L_6;
	}
}
// System.Boolean Nethereum.Util.Keccak.Arrays::AreEqual(System.Char[],System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_AreEqual_mF6435ED2F648D910B2DCB0529D961FF97190B347 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___a0, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___b1, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___a0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___b1;
		if ((!(((RuntimeObject*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)L_0) == ((RuntimeObject*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___a0;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = ___b1;
		if (L_3)
		{
			goto IL_000e;
		}
	}

IL_000c:
	{
		return (bool)0;
	}

IL_000e:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = ___a0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ___b1;
		bool L_6;
		L_6 = Arrays_HaveSameContents_m2D034130BB400EAD094F5C46EEDCDE822EC2FE2F(L_4, L_5, NULL);
		return L_6;
	}
}
// System.Boolean Nethereum.Util.Keccak.Arrays::AreEqual(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_AreEqual_m9EE10F40F31FD6FA82B58D53146AFC8CD5DE2D64 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___a0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___b1;
		if ((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) == ((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___a0;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___b1;
		if (L_3)
		{
			goto IL_000e;
		}
	}

IL_000c:
	{
		return (bool)0;
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___a0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___b1;
		bool L_6;
		L_6 = Arrays_HaveSameContents_mE9062A6BEEFD78B41D41238FA5F23C18CD5E7A99(L_4, L_5, NULL);
		return L_6;
	}
}
// System.Boolean Nethereum.Util.Keccak.Arrays::AreSame(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_AreSame_m550E0411F8BBD6D833DF27C45BA1FF122D21FFCD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___a0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___b1;
		bool L_2;
		L_2 = Arrays_AreEqual_m9EE10F40F31FD6FA82B58D53146AFC8CD5DE2D64(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Nethereum.Util.Keccak.Arrays::ConstantTimeAreEqual(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_ConstantTimeAreEqual_mE26954AE6AD059717D36BD1F94FF377FD9F1F15F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___a0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___b1;
		NullCheck(L_2);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		V_1 = 0;
		goto IL_001e;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___a0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___b1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_1 = ((int32_t)(L_4|((int32_t)((int32_t)L_8^(int32_t)L_12))));
	}

IL_001e:
	{
		int32_t L_13 = V_0;
		if (L_13)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_14 = V_1;
		return (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Nethereum.Util.Keccak.Arrays::AreEqual(System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_AreEqual_mD077C13B69CFAC3A993E18E0ACEB942460A8FC6D (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___a0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___b1, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___a0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___b1;
		if ((!(((RuntimeObject*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_0) == ((RuntimeObject*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___a0;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___b1;
		if (L_3)
		{
			goto IL_000e;
		}
	}

IL_000c:
	{
		return (bool)0;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___a0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___b1;
		bool L_6;
		L_6 = Arrays_HaveSameContents_m0F46C07741AFA2ABA09851B07D3EE1AD01E44B42(L_4, L_5, NULL);
		return L_6;
	}
}
// System.Boolean Nethereum.Util.Keccak.Arrays::AreEqual(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_AreEqual_mDE31E18F5DE7351E551A899FE972A11E57B4D750 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___a0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___b1, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___a0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___b1;
		if ((!(((RuntimeObject*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)L_0) == ((RuntimeObject*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___a0;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___b1;
		if (L_3)
		{
			goto IL_000e;
		}
	}

IL_000c:
	{
		return (bool)0;
	}

IL_000e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___a0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___b1;
		bool L_6;
		L_6 = Arrays_HaveSameContents_m9C87EA995EA9A3CA03C15895FD0519627E3007BE(L_4, L_5, NULL);
		return L_6;
	}
}
// System.Boolean Nethereum.Util.Keccak.Arrays::HaveSameContents(System.Boolean[],System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_HaveSameContents_m2E3ED5E4B183C5C0637C938DDA43B6EB8D7D5587 (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___a0, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___a0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = ___b1;
		NullCheck(L_2);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = ___a0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (uint8_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_8 = ___b1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint8_t L_11 = (uint8_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_7) == ((int32_t)L_11)))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		int32_t L_12 = V_0;
		if (L_12)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean Nethereum.Util.Keccak.Arrays::HaveSameContents(System.Char[],System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_HaveSameContents_m2D034130BB400EAD094F5C46EEDCDE822EC2FE2F (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___a0, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___a0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___b1;
		NullCheck(L_2);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = ___a0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = ___b1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint16_t L_11 = (uint16_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_7) == ((int32_t)L_11)))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		int32_t L_12 = V_0;
		if (L_12)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean Nethereum.Util.Keccak.Arrays::HaveSameContents(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_HaveSameContents_mE9062A6BEEFD78B41D41238FA5F23C18CD5E7A99 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___a0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___b1;
		NullCheck(L_2);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___a0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___b1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_7) == ((int32_t)L_11)))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		int32_t L_12 = V_0;
		if (L_12)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean Nethereum.Util.Keccak.Arrays::HaveSameContents(System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_HaveSameContents_m0F46C07741AFA2ABA09851B07D3EE1AD01E44B42 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___a0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___a0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___b1;
		NullCheck(L_2);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___a0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___b1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_7) == ((int32_t)L_11)))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		int32_t L_12 = V_0;
		if (L_12)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean Nethereum.Util.Keccak.Arrays::HaveSameContents(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_HaveSameContents_m9C87EA995EA9A3CA03C15895FD0519627E3007BE (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___a0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___a0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___b1;
		NullCheck(L_2);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___a0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___b1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_7) == ((int32_t)L_11)))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		int32_t L_12 = V_0;
		if (L_12)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}
}
// System.String Nethereum.Util.Keccak.Arrays::ToString(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Arrays_ToString_mFAC4CEBCA37A1DECBE13884A9C3003AC401B3805 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___a0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_0, ((int32_t)91), NULL);
		V_0 = L_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___a0;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0038;
		}
	}
	{
		StringBuilder_t* L_2 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___a0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		RuntimeObject* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_2);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_2, L_5, NULL);
		V_1 = 1;
		goto IL_0032;
	}

IL_001a:
	{
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___a0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_8, L_12, NULL);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0032:
	{
		int32_t L_15 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = ___a0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_001a;
		}
	}

IL_0038:
	{
		StringBuilder_t* L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_17, ((int32_t)93), NULL);
		StringBuilder_t* L_19 = V_0;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		return L_20;
	}
}
// System.Int32 Nethereum.Util.Keccak.Arrays::GetHashCode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Arrays_GetHashCode_mE1174FF4CCC3203C5D56C08281F1B823E9A94C35 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		NullCheck(L_1);
		V_0 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		goto IL_001d;
	}

IL_000f:
	{
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)257)));
		int32_t L_4 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___data0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = ((int32_t)(L_4^(int32_t)L_8));
	}

IL_001d:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		V_0 = L_10;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_11 = V_1;
		return L_11;
	}
}
// System.Int32 Nethereum.Util.Keccak.Arrays::GetHashCode(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Arrays_GetHashCode_m2B4823CE6D36AD44ED3A7A6C3153DB58B403D7BB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___off1, int32_t ___len2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		int32_t L_1 = ___len2;
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		goto IL_001d;
	}

IL_000d:
	{
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)257)));
		int32_t L_4 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___data0;
		int32_t L_6 = ___off1;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = ((int32_t)(L_4^(int32_t)L_9));
	}

IL_001d:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		V_0 = L_11;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_12 = V_1;
		return L_12;
	}
}
// System.Int32 Nethereum.Util.Keccak.Arrays::GetHashCode(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Arrays_GetHashCode_mADBEB052388492FF4571D39AA01772277DEAB416 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___data0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___data0;
		NullCheck(L_1);
		V_0 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		goto IL_001d;
	}

IL_000f:
	{
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)257)));
		int32_t L_4 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___data0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = ((int32_t)(L_4^L_8));
	}

IL_001d:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		V_0 = L_10;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_11 = V_1;
		return L_11;
	}
}
// System.Int32 Nethereum.Util.Keccak.Arrays::GetHashCode(System.Int32[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Arrays_GetHashCode_mBFF4DFE47F2EE43E7015874A13D6243FD4519721 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___data0, int32_t ___off1, int32_t ___len2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		int32_t L_1 = ___len2;
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		goto IL_001d;
	}

IL_000d:
	{
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)257)));
		int32_t L_4 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___data0;
		int32_t L_6 = ___off1;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		int32_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = ((int32_t)(L_4^L_9));
	}

IL_001d:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		V_0 = L_11;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_12 = V_1;
		return L_12;
	}
}
// System.Int32 Nethereum.Util.Keccak.Arrays::GetHashCode(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Arrays_GetHashCode_m3D23659085BDDDF77ED27B5902D97D2276E9E787 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___data0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___data0;
		NullCheck(L_1);
		V_0 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		goto IL_001d;
	}

IL_000f:
	{
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)257)));
		int32_t L_4 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___data0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = ((int32_t)(L_4^(int32_t)L_8));
	}

IL_001d:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		V_0 = L_10;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_11 = V_1;
		return L_11;
	}
}
// System.Int32 Nethereum.Util.Keccak.Arrays::GetHashCode(System.UInt32[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Arrays_GetHashCode_m4204F2C8061A7F58D38A391326B7607D7418995A (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___data0, int32_t ___off1, int32_t ___len2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		int32_t L_1 = ___len2;
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		goto IL_001d;
	}

IL_000d:
	{
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)257)));
		int32_t L_4 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___data0;
		int32_t L_6 = ___off1;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		uint32_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = ((int32_t)(L_4^(int32_t)L_9));
	}

IL_001d:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		V_0 = L_11;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_12 = V_1;
		return L_12;
	}
}
// System.Int32 Nethereum.Util.Keccak.Arrays::GetHashCode(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Arrays_GetHashCode_m2F6BF3A0A1692D0CAD45F86C6DD6DCE25D898F38 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___data0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___data0;
		NullCheck(L_1);
		V_0 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		goto IL_0030;
	}

IL_000f:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___data0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int64_t L_6 = (int64_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)257)));
		int32_t L_8 = V_1;
		uint64_t L_9 = V_2;
		V_1 = ((int32_t)(L_8^((int32_t)L_9)));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)257)));
		int32_t L_11 = V_1;
		uint64_t L_12 = V_2;
		V_1 = ((int32_t)(L_11^((int32_t)((int64_t)((uint64_t)L_12>>((int32_t)32))))));
	}

IL_0030:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		V_0 = L_14;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_15 = V_1;
		return L_15;
	}
}
// System.Int32 Nethereum.Util.Keccak.Arrays::GetHashCode(System.UInt64[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Arrays_GetHashCode_mAA4F799942542E4A778FB311CC5B8F280D55A861 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___data0, int32_t ___off1, int32_t ___len2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		int32_t L_1 = ___len2;
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		goto IL_0030;
	}

IL_000d:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___data0;
		int32_t L_4 = ___off1;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		int64_t L_7 = (int64_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_8, ((int32_t)257)));
		int32_t L_9 = V_1;
		uint64_t L_10 = V_2;
		V_1 = ((int32_t)(L_9^((int32_t)L_10)));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)257)));
		int32_t L_12 = V_1;
		uint64_t L_13 = V_2;
		V_1 = ((int32_t)(L_12^((int32_t)((int64_t)((uint64_t)L_13>>((int32_t)32))))));
	}

IL_0030:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		V_0 = L_15;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Arrays::Clone(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Arrays_Clone_mC290C8D87AF6E2188E1C2A81D730854F16D4EEB1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		NullCheck((RuntimeArray*)L_1);
		RuntimeObject* L_2;
		L_2 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_1, NULL);
		return ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
	}

IL_000f:
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Arrays::Clone(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Arrays_Clone_m6C8C87174F5522311DAF2EFEA3992925666D3E41 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___existing1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_0005:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___existing1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___existing1;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___data0;
		NullCheck(L_3);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0017;
		}
	}

IL_0010:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___data0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Arrays_Clone_mC290C8D87AF6E2188E1C2A81D730854F16D4EEB1(L_4, NULL);
		return L_5;
	}

IL_0017:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___data0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___existing1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___existing1;
		NullCheck(L_8);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, 0, (RuntimeArray*)L_7, 0, ((int32_t)(((RuntimeArray*)L_8)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___existing1;
		return L_9;
	}
}
// System.Int32[] Nethereum.Util.Keccak.Arrays::Clone(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Arrays_Clone_m4E8762ABC7B1C6647C1065E1F1F92FE71DD17DBB (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___data0;
		NullCheck((RuntimeArray*)L_1);
		RuntimeObject* L_2;
		L_2 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_1, NULL);
		return ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
	}

IL_000f:
	{
		return (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
	}
}
// System.UInt32[] Nethereum.Util.Keccak.Arrays::Clone(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Arrays_Clone_m98E1B9DD300D109558A136975C43F1553E61C687 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___data0;
		NullCheck((RuntimeArray*)L_1);
		RuntimeObject* L_2;
		L_2 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_1, NULL);
		return ((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var));
	}

IL_000f:
	{
		return (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
	}
}
// System.Int64[] Nethereum.Util.Keccak.Arrays::Clone(System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* Arrays_Clone_mB47BCF079CFA8DA08E0D85CE87441A55236FB300 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = ___data0;
		NullCheck((RuntimeArray*)L_1);
		RuntimeObject* L_2;
		L_2 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_1, NULL);
		return ((Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)Castclass((RuntimeObject*)L_2, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var));
	}

IL_000f:
	{
		return (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)NULL;
	}
}
// System.UInt64[] Nethereum.Util.Keccak.Arrays::Clone(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Arrays_Clone_m1881DFDDD14AEA11E0D3B4849A6D1781BBDD5EBF (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___data0;
		NullCheck((RuntimeArray*)L_1);
		RuntimeObject* L_2;
		L_2 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_1, NULL);
		return ((UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)Castclass((RuntimeObject*)L_2, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var));
	}

IL_000f:
	{
		return (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)NULL;
	}
}
// System.UInt64[] Nethereum.Util.Keccak.Arrays::Clone(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Arrays_Clone_mB497F7DBD28392E1DF5F19958F83B478AA2C3A27 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___data0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___existing1, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)NULL;
	}

IL_0005:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___existing1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___existing1;
		NullCheck(L_2);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___data0;
		NullCheck(L_3);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0017;
		}
	}

IL_0010:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___data0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5;
		L_5 = Arrays_Clone_m1881DFDDD14AEA11E0D3B4849A6D1781BBDD5EBF(L_4, NULL);
		return L_5;
	}

IL_0017:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = ___data0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = ___existing1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___existing1;
		NullCheck(L_8);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, 0, (RuntimeArray*)L_7, 0, ((int32_t)(((RuntimeArray*)L_8)->max_length)), NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = ___existing1;
		return L_9;
	}
}
// System.Boolean Nethereum.Util.Keccak.Arrays::Contains(System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_Contains_mC617B71A0287C9876734F9266D8096FC310598CF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, uint8_t ___n1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0010;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___a0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		uint8_t L_4 = ___n1;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}

IL_000c:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0010:
	{
		int32_t L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___a0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)0;
	}
}
// System.Boolean Nethereum.Util.Keccak.Arrays::Contains(System.Int16[],System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_Contains_mC9FE2C4262A54CAB3EC45B0610BF1B7B43A1AC84 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___a0, int16_t ___n1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0010;
	}

IL_0004:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___a0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int16_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int16_t L_4 = ___n1;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}

IL_000c:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0010:
	{
		int32_t L_6 = V_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = ___a0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)0;
	}
}
// System.Boolean Nethereum.Util.Keccak.Arrays::Contains(System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_Contains_mB1D581F4AD78F24ADF64C1BBE57E697D69695DBF (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___a0, int32_t ___n1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0010;
	}

IL_0004:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___a0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = ___n1;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}

IL_000c:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0010:
	{
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___a0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)0;
	}
}
// System.Void Nethereum.Util.Keccak.Arrays::Fill(System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrays_Fill_mC53323A8A5385F960F36DDE7BDABE385BBAA8BA3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, uint8_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buf0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		goto IL_000e;
	}

IL_0006:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buf0;
		int32_t L_2 = V_0;
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		V_0 = L_3;
		uint8_t L_4 = ___b1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_4);
	}

IL_000e:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Arrays::CopyOf(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Arrays_CopyOf_m991DBE1A0B844563BB8528BA83B077ABF3BA1527 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___newLength1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		int32_t L_0 = ___newLength1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___data0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		int32_t L_4 = ___newLength1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___data0;
		NullCheck(L_5);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_4, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, L_6, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		return L_7;
	}
}
// System.Char[] Nethereum.Util.Keccak.Arrays::CopyOf(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Arrays_CopyOf_mEFBFB25A59764A4535090749D332A223601329DF (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___data0, int32_t ___newLength1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	{
		int32_t L_0 = ___newLength1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___data0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = V_0;
		int32_t L_4 = ___newLength1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ___data0;
		NullCheck(L_5);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_4, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, L_6, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = V_0;
		return L_7;
	}
}
// System.Int32[] Nethereum.Util.Keccak.Arrays::CopyOf(System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Arrays_CopyOf_mCF2745BEAA44029194FF23F1670A416ED98DCF55 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___data0, int32_t ___newLength1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		int32_t L_0 = ___newLength1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___data0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_0;
		int32_t L_4 = ___newLength1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___data0;
		NullCheck(L_5);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_4, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, L_6, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		return L_7;
	}
}
// System.Int64[] Nethereum.Util.Keccak.Arrays::CopyOf(System.Int64[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* Arrays_CopyOf_mBE46A7FEF55F02FECC17DF2CCC7A2617CEE37F45 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___data0, int32_t ___newLength1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_0 = NULL;
	{
		int32_t L_0 = ___newLength1;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_2 = ___data0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = V_0;
		int32_t L_4 = ___newLength1;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = ___data0;
		NullCheck(L_5);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_4, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, L_6, NULL);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_7 = V_0;
		return L_7;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Arrays::CopyOfRange(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Arrays_CopyOfRange_m59CE49A063DECB5AFE56FF8E00F97727D102343A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___from1, int32_t ___to2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		int32_t L_0 = ___from1;
		int32_t L_1 = ___to2;
		int32_t L_2;
		L_2 = Arrays_GetLength_mA8ADF4E7AABF26BE77324B1126B193F20F257F7D(L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___data0;
		int32_t L_6 = ___from1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		int32_t L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___data0;
		NullCheck(L_9);
		int32_t L_10 = ___from1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_8, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)), NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_11, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		return L_12;
	}
}
// System.Int32[] Nethereum.Util.Keccak.Arrays::CopyOfRange(System.Int32[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Arrays_CopyOfRange_m71F76514B4AC93B11F73489FA0291E5337BD6A95 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___data0, int32_t ___from1, int32_t ___to2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	{
		int32_t L_0 = ___from1;
		int32_t L_1 = ___to2;
		int32_t L_2;
		L_2 = Arrays_GetLength_mA8ADF4E7AABF26BE77324B1126B193F20F257F7D(L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___data0;
		int32_t L_6 = ___from1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ___data0;
		NullCheck(L_9);
		int32_t L_10 = ___from1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_8, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)), NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_11, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_1;
		return L_12;
	}
}
// System.Int64[] Nethereum.Util.Keccak.Arrays::CopyOfRange(System.Int64[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* Arrays_CopyOfRange_m15B8BBABC9F8C6DBA3ED657CA95245B8DF494F25 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___data0, int32_t ___from1, int32_t ___to2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_1 = NULL;
	{
		int32_t L_0 = ___from1;
		int32_t L_1 = ___to2;
		int32_t L_2;
		L_2 = Arrays_GetLength_mA8ADF4E7AABF26BE77324B1126B193F20F257F7D(L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = ___data0;
		int32_t L_6 = ___from1;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_7 = V_1;
		int32_t L_8 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_9 = ___data0;
		NullCheck(L_9);
		int32_t L_10 = ___from1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_8, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)), NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_11, NULL);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_12 = V_1;
		return L_12;
	}
}
// System.Int32 Nethereum.Util.Keccak.Arrays::GetLength(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Arrays_GetLength_mA8ADF4E7AABF26BE77324B1126B193F20F257F7D (int32_t ___from0, int32_t ___to1, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		int32_t L_0 = ___to1;
		int32_t L_1 = ___from0;
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		G_B1_0 = L_2;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			G_B2_0 = L_2;
			goto IL_0025;
		}
	}
	{
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___from0), NULL);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___to1), NULL);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral717DA9E2386BEADCFFB33AE09B063FCD2EE1A657)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Arrays_GetLength_mA8ADF4E7AABF26BE77324B1126B193F20F257F7D_RuntimeMethod_var)));
	}

IL_0025:
	{
		return G_B2_0;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Arrays::Append(System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Arrays_Append_m3D0D32490C0F788C41684860A44C4BD4384FBD3A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, uint8_t ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___a0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		uint8_t L_3 = ___b1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_3);
		return L_2;
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___a0;
		NullCheck(L_4);
		V_0 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_5, 1)));
		V_1 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___a0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
		int32_t L_9 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, 0, (RuntimeArray*)L_8, 0, L_9, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		int32_t L_11 = V_0;
		uint8_t L_12 = ___b1;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint8_t)L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		return L_13;
	}
}
// System.Int16[] Nethereum.Util.Keccak.Arrays::Append(System.Int16[],System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* Arrays_Append_m93915336376280653A65382FC782BBCD92B6949D (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___a0, int16_t ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_1 = NULL;
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___a0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)1);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = L_1;
		int16_t L_3 = ___b1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (int16_t)L_3);
		return L_2;
	}

IL_000e:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = ___a0;
		NullCheck(L_4);
		V_0 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		int32_t L_5 = V_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_6 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_5, 1)));
		V_1 = L_6;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = ___a0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_8 = V_1;
		int32_t L_9 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, 0, (RuntimeArray*)L_8, 0, L_9, NULL);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_10 = V_1;
		int32_t L_11 = V_0;
		int16_t L_12 = ___b1;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (int16_t)L_12);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_13 = V_1;
		return L_13;
	}
}
// System.Int32[] Nethereum.Util.Keccak.Arrays::Append(System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Arrays_Append_m0F357230248B666F3C3758ADDAD69961A60DC97E (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___a0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = L_1;
		int32_t L_3 = ___b1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_3);
		return L_2;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___a0;
		NullCheck(L_4);
		V_0 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		int32_t L_5 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_5, 1)));
		V_1 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___a0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_1;
		int32_t L_9 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, 0, (RuntimeArray*)L_8, 0, L_9, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_1;
		int32_t L_11 = V_0;
		int32_t L_12 = ___b1;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (int32_t)L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_1;
		return L_13;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Arrays::Concatenate(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Arrays_Concatenate_m971BB39E91BFD2E79A15BAAE7DECB98E6F1C2C9A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___a0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___b1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Arrays_Clone_mC290C8D87AF6E2188E1C2A81D730854F16D4EEB1(L_1, NULL);
		return L_2;
	}

IL_000a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___b1;
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___a0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Arrays_Clone_mC290C8D87AF6E2188E1C2A81D730854F16D4EEB1(L_4, NULL);
		return L_5;
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___a0;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___b1;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_6)->max_length)), ((int32_t)(((RuntimeArray*)L_7)->max_length)))));
		V_0 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___a0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___a0;
		NullCheck(L_11);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___b1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___a0;
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___b1;
		NullCheck(L_15);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, 0, (RuntimeArray*)L_13, ((int32_t)(((RuntimeArray*)L_14)->max_length)), ((int32_t)(((RuntimeArray*)L_15)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		return L_16;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Arrays::ConcatenateAll(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Arrays_ConcatenateAll_m5DF36815C4A10D78658C78ACE6D4B68933AA96A6 (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___vs0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	int32_t V_7 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_8 = NULL;
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = ___vs0;
		NullCheck(L_0);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_1 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		V_1 = 0;
		V_2 = 0;
		V_5 = 0;
		goto IL_0032;
	}

IL_0012:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_2 = ___vs0;
		int32_t L_3 = V_5;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_6 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_6;
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_10);
		int32_t L_11 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_6;
		NullCheck(L_12);
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)(((RuntimeArray*)L_12)->max_length))));
	}

IL_002c:
	{
		int32_t L_13 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0032:
	{
		int32_t L_14 = V_5;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_15 = ___vs0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_16 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_16);
		V_3 = L_17;
		V_4 = 0;
		V_7 = 0;
		goto IL_006c;
	}

IL_0048:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_18 = V_0;
		int32_t L_19 = V_7;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_8 = L_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_3;
		int32_t L_24 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_8;
		NullCheck(L_25);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_22, 0, (RuntimeArray*)L_23, L_24, ((int32_t)(((RuntimeArray*)L_25)->max_length)), NULL);
		int32_t L_26 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_8;
		NullCheck(L_27);
		V_4 = ((int32_t)il2cpp_codegen_add(L_26, ((int32_t)(((RuntimeArray*)L_27)->max_length))));
		int32_t L_28 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_006c:
	{
		int32_t L_29 = V_7;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0048;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_3;
		return L_31;
	}
}
// System.Int32[] Nethereum.Util.Keccak.Arrays::Concatenate(System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Arrays_Concatenate_m654AAE4FE3F7BB5A528A156C831D0136471F19AE (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___a0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___a0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___b1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = Arrays_Clone_m4E8762ABC7B1C6647C1065E1F1F92FE71DD17DBB(L_1, NULL);
		return L_2;
	}

IL_000a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___b1;
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___a0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5;
		L_5 = Arrays_Clone_m4E8762ABC7B1C6647C1065E1F1F92FE71DD17DBB(L_4, NULL);
		return L_5;
	}

IL_0014:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___a0;
		NullCheck(L_6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___b1;
		NullCheck(L_7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_6)->max_length)), ((int32_t)(((RuntimeArray*)L_7)->max_length)))));
		V_0 = L_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ___a0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ___a0;
		NullCheck(L_11);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___b1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = ___a0;
		NullCheck(L_14);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = ___b1;
		NullCheck(L_15);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, 0, (RuntimeArray*)L_13, ((int32_t)(((RuntimeArray*)L_14)->max_length)), ((int32_t)(((RuntimeArray*)L_15)->max_length)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_0;
		return L_16;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Arrays::Prepend(System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Arrays_Prepend_m2D6F5F22A53D29A05558466A540546E2BD1BDA06 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, uint8_t ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___a0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		uint8_t L_3 = ___b1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_3);
		return L_2;
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___a0;
		NullCheck(L_4);
		V_0 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_5, 1)));
		V_1 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___a0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
		int32_t L_9 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, 0, (RuntimeArray*)L_8, 1, L_9, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		uint8_t L_11 = ___b1;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		return L_12;
	}
}
// System.Int16[] Nethereum.Util.Keccak.Arrays::Prepend(System.Int16[],System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* Arrays_Prepend_m037CE2B7DB2401FFD431B9C7F924FB62C09EEDD2 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___a0, int16_t ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_1 = NULL;
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___a0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)1);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = L_1;
		int16_t L_3 = ___b1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (int16_t)L_3);
		return L_2;
	}

IL_000e:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = ___a0;
		NullCheck(L_4);
		V_0 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		int32_t L_5 = V_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_6 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_5, 1)));
		V_1 = L_6;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = ___a0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_8 = V_1;
		int32_t L_9 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, 0, (RuntimeArray*)L_8, 1, L_9, NULL);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_10 = V_1;
		int16_t L_11 = ___b1;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (int16_t)L_11);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_12 = V_1;
		return L_12;
	}
}
// System.Int32[] Nethereum.Util.Keccak.Arrays::Prepend(System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Arrays_Prepend_m3F6065FFB9D9FFD9C882DD6509C372956FAD0403 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___a0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = L_1;
		int32_t L_3 = ___b1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_3);
		return L_2;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___a0;
		NullCheck(L_4);
		V_0 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		int32_t L_5 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_5, 1)));
		V_1 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___a0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_1;
		int32_t L_9 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, 0, (RuntimeArray*)L_8, 1, L_9, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_1;
		int32_t L_11 = ___b1;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_1;
		return L_12;
	}
}
// System.Byte[] Nethereum.Util.Keccak.Arrays::Reverse(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Arrays_Reverse_mCBE72B0575DC8D933AA888DF3A4F21C0658C9CF3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___a0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_0005:
	{
		V_0 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___a0;
		NullCheck(L_1);
		V_1 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		int32_t L_2 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_2 = L_3;
		goto IL_001e;
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_2;
		int32_t L_5 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___a0;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		NullCheck(L_6);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)L_10);
	}

IL_001e:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		V_1 = L_12;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_2;
		return L_13;
	}
}
// System.Int32[] Nethereum.Util.Keccak.Arrays::Reverse(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Arrays_Reverse_m8839DB0B05EA5B52678341465F4981E9D98B128A (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___a0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___a0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
	}

IL_0005:
	{
		V_0 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___a0;
		NullCheck(L_1);
		V_1 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		int32_t L_2 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_2 = L_3;
		goto IL_001e;
	}

IL_0014:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_2;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___a0;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		NullCheck(L_6);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (int32_t)L_10);
	}

IL_001e:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		V_1 = L_12;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_2;
		return L_13;
	}
}
// System.Void Nethereum.Util.Keccak.Arrays::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrays__ctor_mCB02FA0D5E134AEAA6DB101C610C1FDEFDC2CAF4 (Arrays_tE7266439ED9AC6DB4FA37BE0888F37664B751A6C* __this, const RuntimeMethod* method) 
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
// System.Byte[] Nethereum.Util.HashProviders.Sha3KeccackHashProvider::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Sha3KeccackHashProvider_ComputeHash_m358C5EE615F4FC68C40C040A2E0A0E9A59D952CD (Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_0;
		L_0 = Sha3Keccack_get_Current_mD6FFC538783F0A2C61503A659F979F136C302D91_inline(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Sha3Keccack_CalculateHash_mE94324F2BF9D80A18C59A08CF5F0735B78ECAAA0(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void Nethereum.Util.HashProviders.Sha3KeccackHashProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha3KeccackHashProvider__ctor_mBBD08D9177EC57F999D617D6F9628CDBB368E9DD (Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5* __this, const RuntimeMethod* method) 
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
// System.Byte[] Nethereum.Util.ByteArrayConvertors.ChartByteArrayConvertor::ConvertToByteArray(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ChartByteArrayConvertor_ConvertToByteArray_m14E462000FB9624884E18626E7E228222BEB8395 (ChartByteArrayConvertor_t358D8304AC7DB7FA93B48211B266B104C2BC2DB4* __this, Il2CppChar ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		Il2CppChar L_3 = ___data0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)L_3);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.Char[]) */, L_0, L_2);
		return L_4;
	}
}
// System.Void Nethereum.Util.ByteArrayConvertors.ChartByteArrayConvertor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChartByteArrayConvertor__ctor_m3DF1B1B63D8C0FC323460623C2EAE9684602D41B (ChartByteArrayConvertor_t358D8304AC7DB7FA93B48211B266B104C2BC2DB4* __this, const RuntimeMethod* method) 
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
// System.Byte[] Nethereum.Util.ByteArrayConvertors.HexToByteArrayConvertor::ConvertToByteArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HexToByteArrayConvertor_ConvertToByteArray_m966ED8BAF15BE9114128F1DC2FC59CD1DD6088C7 (HexToByteArrayConvertor_t7F22F6A58491BFB696A9339A15BBE68FF5278007* __this, String_t* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___data0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_0, NULL);
		return L_1;
	}
}
// System.Void Nethereum.Util.ByteArrayConvertors.HexToByteArrayConvertor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexToByteArrayConvertor__ctor_mEAE822331F520AB56D16D3A1E35F586545A8E0A9 (HexToByteArrayConvertor_t7F22F6A58491BFB696A9339A15BBE68FF5278007* __this, const RuntimeMethod* method) 
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
// System.Byte[] Nethereum.Util.ByteArrayConvertors.StringByteArrayConvertor::ConvertToByteArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* StringByteArrayConvertor_ConvertToByteArray_m881674D2F92DB81176FE9C58B3481088A3F3593B (StringByteArrayConvertor_t6D4490F4AD978740D3C72C91E11A685A86A077DD* __this, String_t* ___data0, const RuntimeMethod* method) 
{
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___data0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Nethereum.Util.ByteArrayConvertors.StringByteArrayConvertor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringByteArrayConvertor__ctor_m4BCFF4806417DA551A245D561C14EC704D9F1709 (StringByteArrayConvertor_t6D4490F4AD978740D3C72C91E11A685A86A077DD* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigDecimal_get_Mantissa_m03EDAFE27795E691CFC47E83A7C593006E6275B5_inline (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->___U3CMantissaU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BigDecimal_get_Exponent_m33A546142799C596A7E7858C7C2C6F98FA8F066A_inline (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CExponentU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BigDecimal_set_Mantissa_mCF06CF260D40574B915E19C1D11507C93BBDFAD4_inline (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___value0;
		__this->___U3CMantissaU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CMantissaU3Ek__BackingField_1))->____bits_1), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BigDecimal_set_Exponent_mE6924E3CB5E9F09FA790576B883DA74E779E08F5_inline (BigDecimal_t6091CD9A05EBA414159F67106878E676EB15219A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CExponentU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_CurrencyDecimalDigits_m5E04D902AB388705BF7FED31630AF7730EFA34BE_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___currencyDecimalDigits_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_CurrencyPositivePattern_m253954FD1F79EB2F9B12070A348E8E1DB0E75263_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___currencyPositivePattern_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_CurrencyNegativePattern_m35EAAAC0517F13B43B444B82343F14D9B0A14FC4_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___currencyNegativePattern_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_CurrencyDecimalSeparator_mBAD4DAC07DC995653374C16BFB02E6CF2CA121BD_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___currencyDecimalSeparator_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_CurrencyGroupSeparator_mE8F7687A3D4812C75092E30554B4C15C974441BD_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___currencyGroupSeparator_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___negativeSign_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_CurrencySymbol_m69E8700B6E102ADA1351AD4C6BBC7779D9F13F43_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___currencySymbol_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* L_0 = ((StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var))->___s_ordinalIgnoreCase_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Math_Round_mC44B363AC94B1B8DCB093A770B5C11E22F5A583E_inline (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___d0;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1;
		L_1 = Decimal_Round_m1DD2AAA2C9C8D2A1CDA6ECCC2724A075616FF624(L_0, 0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* Sha3Keccack_get_Current_mD6FFC538783F0A2C61503A659F979F136C302D91_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_0 = ((Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_StaticFields*)il2cpp_codegen_static_fields_for(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___item0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		int32_t L_7 = V_1;
		uint8_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)L_8);
		return;
	}

IL_0034:
	{
		uint8_t L_9 = ___item0;
		List_1_AddWithResize_m735EBD7363A06760DE25BACA0FC47F76CA0DEEAB(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
