#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Buffers.ArrayPool`1<System.Char>
struct ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>
struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>
struct ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>
struct Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5;
// System.Func`3<Microsoft.Extensions.Logging.FormattedLogValues,System.Exception,System.String>
struct Func_3_t7B06BE9399C6AC652CFF72CFD7A90CC97B7389B3;
// System.Func`3<Microsoft.Extensions.Logging.FormattedLogValues,System.Object,System.Object>
struct Func_3_t40CDB714E743F1799F95B8D27ADFA72323E2BAB7;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t913F242211877D391217C9D75152235266FDAF10;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>
struct Tables_t08CF1F13032F16BEC996C0953A5D6523A5984C43;
// System.Collections.Generic.KeyValuePair`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>[]
struct KeyValuePair_2U5BU5D_tFB3FB9A252E42FED2D0EC0C61EDBA70C7B5FB33C;
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
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t9ACC1C215038273AB68324B1EEB216226C5C483E;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Microsoft.Extensions.Logging.ILogger
struct ILogger_t1C0C2CD1CDFA86541C20F898F7581FB2CB04BFB4;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// System.Runtime.CompilerServices.IsByRefLikeAttribute
struct IsByRefLikeAttribute_t20E6B43816F6BF22531CD6BB70E88CB289B7568E;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t8C2311A7523B4C06B6DB451F6DF102A6EF7DB234;
// Microsoft.Extensions.Logging.LogValuesFormatter
struct LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Diagnostics.CodeAnalysis.NotNullWhenAttribute
struct NotNullWhenAttribute_t0BAEB23332699783D82FD2BBD9529E7A9904D963;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_tE858056C93FB929FE83085ABB479C858D40E58C9;
// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t83FFF423583ACF86AE02603B2DEE5F487B0546D8;
// System.Runtime.CompilerServices.NullablePublicOnlyAttribute
struct NullablePublicOnlyAttribute_t7D4E8B83FE8C4C618904EE7500F26FE14C1031F7;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Microsoft.Extensions.Logging.FormattedLogValues/<>c
struct U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C;
// Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14
struct U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t7B06BE9399C6AC652CFF72CFD7A90CC97B7389B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral3F41BF20B4D5ED35ED0B5C03F1AF6B146720CB0B;
IL2CPP_EXTERN_C String_t* _stringLiteral5B3859B0D165EE865835DCE889C29568CCB924E8;
IL2CPP_EXTERN_C String_t* _stringLiteral6B0053E5BC12967A61A36D68970E7E9514BA83D6;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA;
IL2CPP_EXTERN_C String_t* _stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_GetOrAdd_m5EF0E65D8977A84F75210848D51F416EBB1F3D36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryGetValue_m18880E9C6AC11DE8CE63D09CD6B1CD0B778E46F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2__ctor_m3659626FF4BF93F715A9BD30A5176EC31C058B2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FormattedLogValues_get_Item_m97B27F9468C950908B5159DE6597464D92ADF72E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ILogger_Log_TisFormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_m2BE10C63CF08FD7A1E3C62F6075B3136827D0C5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LogValuesFormatter_GetValue_m937B78C1EEF207AE5F885B093158485737905F3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LogValuesFormatter__ctor_m63200EDB80E69D4D1CD0467FA2FBACFF255F9504_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoggerExtensions_Log_m75D476308DBDCD0476692483A7356CF3E6E7785F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoggerExtensions_MessageFormatter_m9FBE8058CC2F31726E5A8DB5AC2C8C87B858B935_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_ToString_m12316C6CDC05E2F49EA4BDAD78FD7F1718E6E980_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_m29F5DC693050EA4C8EBD39579FB5839CADD0E00A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__9_0_m8CA4F0E087E96B776FDB77E32D70D5EB282D3F7A_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t3BB693180E6274A3640EC526A43281BBE9184E1E 
{
};

// System.Buffers.ArrayPool`1<System.Char>
struct ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B  : public RuntimeObject
{
};

struct ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_StaticFields
{
	// System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1::<Shared>k__BackingField
	ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* ___U3CSharedU3Ek__BackingField_0;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>
struct ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t08CF1F13032F16BEC996C0953A5D6523A5984C43* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_tFB3FB9A252E42FED2D0EC0C61EDBA70C7B5FB33C* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

struct ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
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
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
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

// Microsoft.Extensions.Logging.LogValuesFormatter
struct LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C  : public RuntimeObject
{
	// System.String Microsoft.Extensions.Logging.LogValuesFormatter::_format
	String_t* ____format_1;
	// System.Collections.Generic.List`1<System.String> Microsoft.Extensions.Logging.LogValuesFormatter::_valueNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____valueNames_2;
	// System.String Microsoft.Extensions.Logging.LogValuesFormatter::<OriginalFormat>k__BackingField
	String_t* ___U3COriginalFormatU3Ek__BackingField_3;
};

struct LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_StaticFields
{
	// System.Char[] Microsoft.Extensions.Logging.LogValuesFormatter::FormatDelimiters
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___FormatDelimiters_0;
};

// Microsoft.Extensions.Logging.LoggerExtensions
struct LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08  : public RuntimeObject
{
};

struct LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_StaticFields
{
	// System.Func`3<Microsoft.Extensions.Logging.FormattedLogValues,System.Exception,System.String> Microsoft.Extensions.Logging.LoggerExtensions::_messageFormatter
	Func_3_t7B06BE9399C6AC652CFF72CFD7A90CC97B7389B3* ____messageFormatter_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// Microsoft.Extensions.Logging.FormattedLogValues/<>c
struct U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C  : public RuntimeObject
{
};

struct U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_StaticFields
{
	// Microsoft.Extensions.Logging.FormattedLogValues/<>c Microsoft.Extensions.Logging.FormattedLogValues/<>c::<>9
	U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C* ___U3CU3E9_0;
	// System.Func`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter> Microsoft.Extensions.Logging.FormattedLogValues/<>c::<>9__9_0
	Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5* ___U3CU3E9__9_0_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
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

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t9ACC1C215038273AB68324B1EEB216226C5C483E  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Microsoft.Extensions.Logging.EventId
struct EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 
{
	// System.Int32 Microsoft.Extensions.Logging.EventId::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// System.String Microsoft.Extensions.Logging.EventId::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of Microsoft.Extensions.Logging.EventId
struct EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_marshaled_pinvoke
{
	int32_t ___U3CIdU3Ek__BackingField_0;
	char* ___U3CNameU3Ek__BackingField_1;
};
// Native definition for COM marshalling of Microsoft.Extensions.Logging.EventId
struct EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_marshaled_com
{
	int32_t ___U3CIdU3Ek__BackingField_0;
	Il2CppChar* ___U3CNameU3Ek__BackingField_1;
};

// Microsoft.Extensions.Logging.FormattedLogValues
struct FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114 
{
	// Microsoft.Extensions.Logging.LogValuesFormatter Microsoft.Extensions.Logging.FormattedLogValues::_formatter
	LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* ____formatter_2;
	// System.Object[] Microsoft.Extensions.Logging.FormattedLogValues::_values
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____values_3;
	// System.String Microsoft.Extensions.Logging.FormattedLogValues::_originalMessage
	String_t* ____originalMessage_4;
};

struct FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_StaticFields
{
	// System.Int32 Microsoft.Extensions.Logging.FormattedLogValues::_count
	int32_t ____count_0;
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter> Microsoft.Extensions.Logging.FormattedLogValues::_formatters
	ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF* ____formatters_1;
};
// Native definition for P/Invoke marshalling of Microsoft.Extensions.Logging.FormattedLogValues
struct FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_marshaled_pinvoke
{
	LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* ____formatter_2;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____values_3;
	char* ____originalMessage_4;
};
// Native definition for COM marshalling of Microsoft.Extensions.Logging.FormattedLogValues
struct FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_marshaled_com
{
	LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* ____formatter_2;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____values_3;
	Il2CppChar* ____originalMessage_4;
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

// System.Runtime.CompilerServices.IsByRefLikeAttribute
struct IsByRefLikeAttribute_t20E6B43816F6BF22531CD6BB70E88CB289B7568E  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t8C2311A7523B4C06B6DB451F6DF102A6EF7DB234  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Diagnostics.CodeAnalysis.NotNullWhenAttribute
struct NotNullWhenAttribute_t0BAEB23332699783D82FD2BBD9529E7A9904D963  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.Diagnostics.CodeAnalysis.NotNullWhenAttribute::<ReturnValue>k__BackingField
	bool ___U3CReturnValueU3Ek__BackingField_0;
};

// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_tE858056C93FB929FE83085ABB479C858D40E58C9  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Byte[] System.Runtime.CompilerServices.NullableAttribute::NullableFlags
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___NullableFlags_0;
};

// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t83FFF423583ACF86AE02603B2DEE5F487B0546D8  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Byte System.Runtime.CompilerServices.NullableContextAttribute::Flag
	uint8_t ___Flag_0;
};

// System.Runtime.CompilerServices.NullablePublicOnlyAttribute
struct NullablePublicOnlyAttribute_t7D4E8B83FE8C4C618904EE7500F26FE14C1031F7  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.Runtime.CompilerServices.NullablePublicOnlyAttribute::IncludesInternals
	bool ___IncludesInternals_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// System.ByReference`1<System.Char>
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14
struct U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD  : public RuntimeObject
{
	// System.Int32 Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::<>2__current
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 ___U3CU3E2__current_1;
	// Microsoft.Extensions.Logging.FormattedLogValues Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::<>4__this
	FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114 ___U3CU3E4__this_2;
	// System.Int32 Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::<i>5__2
	int32_t ___U3CiU3E5__2_3;
};

// System.ReadOnlySpan`1<System.Char>
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.Char>
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
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

// System.Func`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>
struct Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5  : public MulticastDelegate_t
{
};

// System.Func`3<Microsoft.Extensions.Logging.FormattedLogValues,System.Exception,System.String>
struct Func_3_t7B06BE9399C6AC652CFF72CFD7A90CC97B7389B3  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Text.ValueStringBuilder
struct ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B 
{
	// System.Char[] System.Text.ValueStringBuilder::_arrayToReturnToPool
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____arrayToReturnToPool_0;
	// System.Span`1<System.Char> System.Text.ValueStringBuilder::_chars
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ____chars_1;
	// System.Int32 System.Text.ValueStringBuilder::_pos
	int32_t ____pos_2;
};
// Native definition for P/Invoke marshalling of System.Text.ValueStringBuilder
struct ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B_marshaled_pinvoke
{
	uint8_t* ____arrayToReturnToPool_0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ____chars_1;
	int32_t ____pos_2;
};
// Native definition for COM marshalling of System.Text.ValueStringBuilder
struct ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B_marshaled_com
{
	uint8_t* ____arrayToReturnToPool_0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ____chars_1;
	int32_t ____pos_2;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
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


// System.Span`1<T> System.Span`1<System.Char>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String System.Span`1<System.Char>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m12316C6CDC05E2F49EA4BDAD78FD7F1718E6E980_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Char>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Char>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___start0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::CopyTo(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination0, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Char>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) ;
// System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1<System.Char>::get_Shared()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_gshared_inline (const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Char>::op_Implicit(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_gshared (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___array0, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::CopyTo(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryGetValue_mE794BBB2811B9244CF8ECB11994F70DEB6BEFDF7_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TValue System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::GetOrAdd(TKey,System.Func`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_GetOrAdd_mF8E3897F8089492DC23AF0FE945A15B5C2499B00_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, RuntimeObject* ___key0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___valueFactory1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_m0891574E19148D39C27C179BF2787093757C5F57_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, const RuntimeMethod* method) ;
// System.Void System.Func`3<Microsoft.Extensions.Logging.FormattedLogValues,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_m113A0A0D802341FBDA1F1DB7F96A7C29DD606381_gshared (Func_3_t40CDB714E743F1799F95B8D27ADFA72323E2BAB7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::.ctor(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void System.Text.ValueStringBuilder::.ctor(System.Span`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder__ctor_mCBA742551CDF16ED07768E79F0A6084ED0BEA0A1 (ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___initialBuffer0, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Char>::Slice(System.Int32,System.Int32)
inline Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	return ((  Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, int32_t, int32_t, const RuntimeMethod*))Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_gshared_inline)(__this, ___start0, ___length1, method);
}
// System.String System.Span`1<System.Char>::ToString()
inline String_t* Span_1_ToString_m12316C6CDC05E2F49EA4BDAD78FD7F1718E6E980 (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, const RuntimeMethod*))Span_1_ToString_m12316C6CDC05E2F49EA4BDAD78FD7F1718E6E980_gshared)(__this, method);
}
// System.Void System.Text.ValueStringBuilder::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueStringBuilder_Dispose_m1C9559D4231FF854BA4352A2E152781937D22B42_inline (ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B* __this, const RuntimeMethod* method) ;
// System.String System.Text.ValueStringBuilder::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueStringBuilder_ToString_mC2FE860196F7D3D8DB3CFF16D697E3755C9D0BF0 (ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Char>::get_Length()
inline int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, const RuntimeMethod*))Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline)(__this, method);
}
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Text.ValueStringBuilder::AppendSlow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_AppendSlow_m3CE172AB40050F46D38B231E10CE868C5535A873 (ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B* __this, String_t* ___s0, const RuntimeMethod* method) ;
// System.Void System.Text.ValueStringBuilder::Append(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueStringBuilder_Append_m031799DA9B026147CDC10C2368497AD74DD24645_inline (ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B* __this, String_t* ___s0, const RuntimeMethod* method) ;
// System.Void System.Text.ValueStringBuilder::Grow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ValueStringBuilder_Grow_mB856B39FEDE255A06522309EC02A986E4C9FC169 (ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B* __this, int32_t ___additionalCapacityBeyondPos0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Char> System.MemoryExtensions::AsSpan(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline (String_t* ___text0, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Char>::Slice(System.Int32)
inline Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___start0, const RuntimeMethod* method)
{
	return ((  Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, int32_t, const RuntimeMethod*))Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_gshared_inline)(__this, ___start0, method);
}
// System.Void System.ReadOnlySpan`1<System.Char>::CopyTo(System.Span`1<T>)
inline void ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, const RuntimeMethod*))ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_gshared)(__this, ___destination0, method);
}
// System.Int32 System.ReadOnlySpan`1<System.Char>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline)(__this, method);
}
// System.Void System.Text.ValueStringBuilder::Append(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_Append_mA7B38292E87E056DA5D97F7CDE3680C2CDD049A2 (ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___value0, const RuntimeMethod* method) ;
// System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1<System.Char>::get_Shared()
inline ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline (const RuntimeMethod* method)
{
	return ((  ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* (*) (const RuntimeMethod*))ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_gshared_inline)(method);
}
// System.UInt32 System.Math::Max(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Math_Max_m6612C5AE2D40056418765878E8787E4828D2ADD7 (uint32_t ___val10, uint32_t ___val21, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Char>::op_Implicit(T[])
inline Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___array0, const RuntimeMethod* method)
{
	return ((  Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D (*) (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, const RuntimeMethod*))Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_gshared)(___array0, method);
}
// System.Void System.Span`1<System.Char>::CopyTo(System.Span`1<T>)
inline void Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination0, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, const RuntimeMethod*))Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E_gshared)(__this, ___destination0, method);
}
// System.Void Microsoft.Extensions.Logging.EventId::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventId__ctor_mFDDCC191B93DEABA80140E50C8E5A592EB5E1C6F (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, int32_t ___id0, String_t* ___name1, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Extensions.Logging.EventId::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EventId_get_Id_m86B112CC64D4CBED6F5319DD779D103663493B3A_inline (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, const RuntimeMethod* method) ;
// System.String Microsoft.Extensions.Logging.EventId::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EventId_get_Name_m8BD116C470BA834B6E7392A4D04A34BC1E63F8B6_inline (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String Microsoft.Extensions.Logging.EventId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EventId_ToString_m9B1D1541573A8A460D61C8EC14C5C17FC6CEEFD5 (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Logging.EventId::Equals(Microsoft.Extensions.Logging.EventId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventId_Equals_m11118ACCEA6715D6EEA89CA54745F9F63CDBCC42 (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___other0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Logging.EventId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventId_Equals_m0CAAD86008C8E5DDE9F9F8D81341D727643F91F1 (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Extensions.Logging.EventId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventId_GetHashCode_m1C7BA059C42C765351C534BB03BC2D3A1850645C (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>::TryGetValue(TKey,TValue&)
inline bool ConcurrentDictionary_2_TryGetValue_m18880E9C6AC11DE8CE63D09CD6B1CD0B778E46F9 (ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF* __this, String_t* ___key0, LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF*, String_t*, LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C**, const RuntimeMethod*))ConcurrentDictionary_2_TryGetValue_mE794BBB2811B9244CF8ECB11994F70DEB6BEFDF7_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Microsoft.Extensions.Logging.LogValuesFormatter::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogValuesFormatter__ctor_m63200EDB80E69D4D1CD0467FA2FBACFF255F9504 (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mDFAFE1C452564604F3E7A340E3D081BDD670FE55 (Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// TValue System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>::GetOrAdd(TKey,System.Func`2<TKey,TValue>)
inline LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* ConcurrentDictionary_2_GetOrAdd_m5EF0E65D8977A84F75210848D51F416EBB1F3D36 (ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF* __this, String_t* ___key0, Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5* ___valueFactory1, const RuntimeMethod* method)
{
	return ((  LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* (*) (ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF*, String_t*, Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5*, const RuntimeMethod*))ConcurrentDictionary_2_GetOrAdd_mF8E3897F8089492DC23AF0FE945A15B5C2499B00_gshared)(__this, ___key0, ___valueFactory1, method);
}
// System.Void Microsoft.Extensions.Logging.FormattedLogValues::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormattedLogValues__ctor_mCF58384A2EC59C96A510D418010A5199F384420F (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* __this, String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values1, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Extensions.Logging.FormattedLogValues::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FormattedLogValues_get_Count_mD4F7E80166B50AD2801CEAB9AE1A7ADC1C4C63FB (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* __this, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, String_t*, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> Microsoft.Extensions.Logging.LogValuesFormatter::GetValue(System.Object[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 LogValuesFormatter_GetValue_m937B78C1EEF207AE5F885B093158485737905F3F (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> Microsoft.Extensions.Logging.FormattedLogValues::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 FormattedLogValues_get_Item_m97B27F9468C950908B5159DE6597464D92ADF72E (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> Microsoft.Extensions.Logging.LogValuesFormatter::get_ValueNames()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* LogValuesFormatter_get_ValueNames_m7BB3F9B56AD516B6ECB699D81D9D17E280A422FB_inline (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14__ctor_m65962E588A342B47B1C4B6331FFE4FB6C14FB50F (U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> Microsoft.Extensions.Logging.FormattedLogValues::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FormattedLogValues_GetEnumerator_mF7E3A4A99FA8F4E88A16B1AD39A141643AF7EA70 (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* __this, const RuntimeMethod* method) ;
// System.String Microsoft.Extensions.Logging.LogValuesFormatter::Format(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogValuesFormatter_Format_m74126A3B9E54B7EC888F5D4DB0764271FC090323 (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values0, const RuntimeMethod* method) ;
// System.String Microsoft.Extensions.Logging.FormattedLogValues::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FormattedLogValues_ToString_m59B2396785E3BA6FD99896918E462096503CFDF6 (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Microsoft.Extensions.Logging.FormattedLogValues::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FormattedLogValues_System_Collections_IEnumerable_GetEnumerator_m0EFD0090FC1E78E9826263068A00CB7BDD4CF5E4 (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>::.ctor()
inline void ConcurrentDictionary_2__ctor_m3659626FF4BF93F715A9BD30A5176EC31C058B2E (ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF* __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF*, const RuntimeMethod*))ConcurrentDictionary_2__ctor_m0891574E19148D39C27C179BF2787093757C5F57_gshared)(__this, method);
}
// System.Void Microsoft.Extensions.Logging.FormattedLogValues/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m63593778D5647B867ACD5E3EC47BA9A7812F292A (U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309 (int32_t* ___location0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::Log(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.LogLevel,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_Log_m3F0219E0DB6E2CB10D0618F935EFE4BB8BAE85EA (RuntimeObject* ___logger0, int32_t ___logLevel1, String_t* ___message2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args3, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::Log(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.LogLevel,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_Log_mE483B53E65EE67EA6C848AD5B94A3D479E26E4D3 (RuntimeObject* ___logger0, int32_t ___logLevel1, Exception_t* ___exception2, String_t* ___message3, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args4, const RuntimeMethod* method) ;
// Microsoft.Extensions.Logging.EventId Microsoft.Extensions.Logging.EventId::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 EventId_op_Implicit_m0DAA73915C7788018C741D3EE391ABABBC967BF4 (int32_t ___i0, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::Log(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.LogLevel,Microsoft.Extensions.Logging.EventId,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_Log_m75D476308DBDCD0476692483A7356CF3E6E7785F (RuntimeObject* ___logger0, int32_t ___logLevel1, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___eventId2, Exception_t* ___exception3, String_t* ___message4, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args5, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Func`3<Microsoft.Extensions.Logging.FormattedLogValues,System.Exception,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m6D2444715EF8A9B257B8C6C130AE189F866A8F98 (Func_3_t7B06BE9399C6AC652CFF72CFD7A90CC97B7389B3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t7B06BE9399C6AC652CFF72CFD7A90CC97B7389B3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_3__ctor_m113A0A0D802341FBDA1F1DB7F96A7C29DD606381_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Microsoft.Extensions.Logging.LogValuesFormatter::set_OriginalFormat(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogValuesFormatter_set_OriginalFormat_m80D85FA1506C051EC3B5AC66852C46D3F466881A_inline (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::.ctor(System.Void*,System.Int32)
inline void Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_gshared_inline)(__this, ___pointer0, ___length1, method);
}
// System.Int32 Microsoft.Extensions.Logging.LogValuesFormatter::FindBraceIndex(System.String,System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogValuesFormatter_FindBraceIndex_m1DF65D25C5132079993BFA85236C6E14EBB60C87 (String_t* ___format0, Il2CppChar ___brace1, int32_t ___startIndex2, int32_t ___endIndex3, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Char> System.MemoryExtensions::AsSpan(System.String,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryExtensions_AsSpan_m8409F3DA0EF95BF6B3A8741E5C56E729B0A824C6_inline (String_t* ___text0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Extensions.Logging.LogValuesFormatter::FindIndexOfAny(System.String,System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogValuesFormatter_FindIndexOfAny_m2C4C3C1725A87F036579C904685B8F699B7BBBE2 (String_t* ___format0, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___chars1, int32_t ___startIndex2, int32_t ___endIndex3, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOfAny_m740B0108B7FAFFAB1C3F88E782B094195A4E3B75 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___anyOf0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Object Microsoft.Extensions.Logging.LogValuesFormatter::FormatArgument(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogValuesFormatter_FormatArgument_m9FCBAF42DAD055555C37C03E89B3F0EDF5149C43 (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___sourceArray0, RuntimeArray* ___destinationArray1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75 (RuntimeObject* ___provider0, String_t* ___format1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.String Microsoft.Extensions.Logging.LogValuesFormatter::get_OriginalFormat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LogValuesFormatter_get_OriginalFormat_m3BC5A1D8FD7535342E570848330DD86D641963E5_inline (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, const RuntimeMethod* method) ;
// System.Char& System.String::GetRawStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(T&,System.Int32)
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Il2CppChar*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___argument0, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::.ctor(T&,System.Int32)
inline void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, Il2CppChar*, int32_t, const RuntimeMethod*))Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowInvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___targetType0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___item0, method);
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mC81BDD0D64F17870C83932B3CCC11EAB3E9C0E2B (EmbeddedAttribute_t9ACC1C215038273AB68324B1EEB216226C5C483E* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_mE1B42485A59A0B4885D4ECDC2D51989D95A26F39 (IsReadOnlyAttribute_t8C2311A7523B4C06B6DB451F6DF102A6EF7DB234* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Runtime.CompilerServices.IsByRefLikeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsByRefLikeAttribute__ctor_m2114686245C777703E7435234D5DC3328550DFD1 (IsByRefLikeAttribute_t20E6B43816F6BF22531CD6BB70E88CB289B7568E* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Runtime.CompilerServices.NullableAttribute::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m361B7A8DD47CB105445E135E44565DD842647818 (NullableAttribute_tE858056C93FB929FE83085ABB479C858D40E58C9* __this, uint8_t p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		uint8_t L_2 = p0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		__this->___NullableFlags_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NullableFlags_0), (void*)L_1);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.NullableAttribute::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m80C72A556EA70CDD9215DB49B03413354BB20D78 (NullableAttribute_tE858056C93FB929FE83085ABB479C858D40E58C9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* p0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = p0;
		__this->___NullableFlags_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NullableFlags_0), (void*)L_0);
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
// System.Void System.Runtime.CompilerServices.NullableContextAttribute::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableContextAttribute__ctor_m70A1A1B3EC6334AA446FAF5262400C916A40B0D6 (NullableContextAttribute_t83FFF423583ACF86AE02603B2DEE5F487B0546D8* __this, uint8_t p0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		uint8_t L_0 = p0;
		__this->___Flag_0 = L_0;
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
// System.Void System.Runtime.CompilerServices.NullablePublicOnlyAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullablePublicOnlyAttribute__ctor_mAEA922DA51E9F4CAD73B87BB48423B83C9A11462 (NullablePublicOnlyAttribute_t7D4E8B83FE8C4C618904EE7500F26FE14C1031F7* __this, bool p0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = p0;
		__this->___IncludesInternals_0 = L_0;
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
// System.Void System.Diagnostics.CodeAnalysis.NotNullWhenAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotNullWhenAttribute__ctor_mA7303CA35EE2D33F84948655255D602413EED471 (NotNullWhenAttribute_t0BAEB23332699783D82FD2BBD9529E7A9904D963* __this, bool ___returnValue0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___returnValue0;
		__this->___U3CReturnValueU3Ek__BackingField_0 = L_0;
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
// Conversion methods for marshalling of: System.Text.ValueStringBuilder
IL2CPP_EXTERN_C void ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B_marshal_pinvoke(const ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B& unmarshaled, ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.____arrayToReturnToPool_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaled_arrayToReturnToPool_Length = (unmarshaled.____arrayToReturnToPool_0)->max_length;
		marshaled.____arrayToReturnToPool_0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled_arrayToReturnToPool_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_arrayToReturnToPool_Length); i++)
		{
			(marshaled.____arrayToReturnToPool_0)[i] = static_cast<uint8_t>((unmarshaled.____arrayToReturnToPool_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____arrayToReturnToPool_0 = NULL;
	}
	marshaled.____chars_1 = unmarshaled.____chars_1;
	marshaled.____pos_2 = unmarshaled.____pos_2;
}
IL2CPP_EXTERN_C void ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B_marshal_pinvoke_back(const ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B_marshaled_pinvoke& marshaled, ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____arrayToReturnToPool_0 != NULL)
	{
		if (unmarshaled.____arrayToReturnToPool_0 == NULL)
		{
			unmarshaled.____arrayToReturnToPool_0 = reinterpret_cast<CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*>((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____arrayToReturnToPool_0), (void*)reinterpret_cast<CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*>((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.____arrayToReturnToPool_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.____arrayToReturnToPool_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____arrayToReturnToPool_0)[i]));
		}
	}
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D unmarshaled_chars_temp_1;
	memset((&unmarshaled_chars_temp_1), 0, sizeof(unmarshaled_chars_temp_1));
	unmarshaled_chars_temp_1 = marshaled.____chars_1;
	unmarshaled.____chars_1 = unmarshaled_chars_temp_1;
	int32_t unmarshaled_pos_temp_2 = 0;
	unmarshaled_pos_temp_2 = marshaled.____pos_2;
	unmarshaled.____pos_2 = unmarshaled_pos_temp_2;
}
// Conversion method for clean up from marshalling of: System.Text.ValueStringBuilder
IL2CPP_EXTERN_C void ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B_marshal_pinvoke_cleanup(ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B_marshaled_pinvoke& marshaled)
{
	if (marshaled.____arrayToReturnToPool_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____arrayToReturnToPool_0);
		marshaled.____arrayToReturnToPool_0 = NULL;
	}
}
// Conversion methods for marshalling of: System.Text.ValueStringBuilder
IL2CPP_EXTERN_C void ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B_marshal_com(const ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B& unmarshaled, ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B_marshaled_com& marshaled)
{
	if (unmarshaled.____arrayToReturnToPool_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaled_arrayToReturnToPool_Length = (unmarshaled.____arrayToReturnToPool_0)->max_length;
		marshaled.____arrayToReturnToPool_0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled_arrayToReturnToPool_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_arrayToReturnToPool_Length); i++)
		{
			(marshaled.____arrayToReturnToPool_0)[i] = static_cast<uint8_t>((unmarshaled.____arrayToReturnToPool_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____arrayToReturnToPool_0 = NULL;
	}
	marshaled.____chars_1 = unmarshaled.____chars_1;
	marshaled.____pos_2 = unmarshaled.____pos_2;
}
IL2CPP_EXTERN_C void ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B_marshal_com_back(const ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B_marshaled_com& marshaled, ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____arrayToReturnToPool_0 != NULL)
	{
		if (unmarshaled.____arrayToReturnToPool_0 == NULL)
		{
			unmarshaled.____arrayToReturnToPool_0 = reinterpret_cast<CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*>((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____arrayToReturnToPool_0), (void*)reinterpret_cast<CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*>((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.____arrayToReturnToPool_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.____arrayToReturnToPool_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____arrayToReturnToPool_0)[i]));
		}
	}
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D unmarshaled_chars_temp_1;
	memset((&unmarshaled_chars_temp_1), 0, sizeof(unmarshaled_chars_temp_1));
	unmarshaled_chars_temp_1 = marshaled.____chars_1;
	unmarshaled.____chars_1 = unmarshaled_chars_temp_1;
	int32_t unmarshaled_pos_temp_2 = 0;
	unmarshaled_pos_temp_2 = marshaled.____pos_2;
	unmarshaled.____pos_2 = unmarshaled_pos_temp_2;
}
// Conversion method for clean up from marshalling of: System.Text.ValueStringBuilder
IL2CPP_EXTERN_C void ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B_marshal_com_cleanup(ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B_marshaled_com& marshaled)
{
	if (marshaled.____arrayToReturnToPool_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____arrayToReturnToPool_0);
		marshaled.____arrayToReturnToPool_0 = NULL;
	}
}
// System.Void System.Text.ValueStringBuilder::.ctor(System.Span`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder__ctor_mCBA742551CDF16ED07768E79F0A6084ED0BEA0A1 (ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___initialBuffer0, const RuntimeMethod* method) 
{
	{
		__this->____arrayToReturnToPool_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrayToReturnToPool_0), (void*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL);
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_0 = ___initialBuffer0;
		__this->____chars_1 = L_0;
		__this->____pos_2 = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void ValueStringBuilder__ctor_mCBA742551CDF16ED07768E79F0A6084ED0BEA0A1_AdjustorThunk (RuntimeObject* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___initialBuffer0, const RuntimeMethod* method)
{
	ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B*>(__this + _offset);
	ValueStringBuilder__ctor_mCBA742551CDF16ED07768E79F0A6084ED0BEA0A1(_thisAdjusted, ___initialBuffer0, method);
}
// System.String System.Text.ValueStringBuilder::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueStringBuilder_ToString_mC2FE860196F7D3D8DB3CFF16D697E3755C9D0BF0 (ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_ToString_m12316C6CDC05E2F49EA4BDAD78FD7F1718E6E980_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_0 = (&__this->____chars_1);
		int32_t L_1 = __this->____pos_2;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2;
		L_2 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline(L_0, 0, L_1, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		V_1 = L_2;
		String_t* L_3;
		L_3 = Span_1_ToString_m12316C6CDC05E2F49EA4BDAD78FD7F1718E6E980((&V_1), Span_1_ToString_m12316C6CDC05E2F49EA4BDAD78FD7F1718E6E980_RuntimeMethod_var);
		V_0 = L_3;
		ValueStringBuilder_Dispose_m1C9559D4231FF854BA4352A2E152781937D22B42_inline(__this, NULL);
		String_t* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* ValueStringBuilder_ToString_mC2FE860196F7D3D8DB3CFF16D697E3755C9D0BF0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ValueStringBuilder_ToString_mC2FE860196F7D3D8DB3CFF16D697E3755C9D0BF0(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.Text.ValueStringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_Append_m031799DA9B026147CDC10C2368497AD74DD24645 (ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		int32_t L_1 = __this->____pos_2;
		V_0 = L_1;
		String_t* L_2 = ___s0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_4 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_5 = (&__this->____chars_1);
		int32_t L_6;
		L_6 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_5, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		if ((!(((uint32_t)L_4) < ((uint32_t)L_6))))
		{
			goto IL_0040;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_7 = (&__this->____chars_1);
		int32_t L_8 = V_0;
		Il2CppChar* L_9;
		L_9 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&((L_7)->____pointer_0))->value, (L_8), (L_7)->____length_1);
		String_t* L_10 = ___s0;
		NullCheck(L_10);
		Il2CppChar L_11;
		L_11 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, 0, NULL);
		*((int16_t*)L_9) = (int16_t)L_11;
		int32_t L_12 = V_0;
		__this->____pos_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}

IL_0040:
	{
		String_t* L_13 = ___s0;
		ValueStringBuilder_AppendSlow_m3CE172AB40050F46D38B231E10CE868C5535A873(__this, L_13, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueStringBuilder_Append_m031799DA9B026147CDC10C2368497AD74DD24645_AdjustorThunk (RuntimeObject* __this, String_t* ___s0, const RuntimeMethod* method)
{
	ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B*>(__this + _offset);
	ValueStringBuilder_Append_m031799DA9B026147CDC10C2368497AD74DD24645_inline(_thisAdjusted, ___s0, method);
}
// System.Void System.Text.ValueStringBuilder::AppendSlow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_AppendSlow_m3CE172AB40050F46D38B231E10CE868C5535A873 (ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = __this->____pos_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_2 = (&__this->____chars_1);
		int32_t L_3;
		L_3 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_2, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		String_t* L_4 = ___s0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_5)))))
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_6 = ___s0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		ValueStringBuilder_Grow_mB856B39FEDE255A06522309EC02A986E4C9FC169(__this, L_7, NULL);
	}

IL_0028:
	{
		String_t* L_8 = ___s0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_9;
		L_9 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(L_8, NULL);
		V_1 = L_9;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_10 = (&__this->____chars_1);
		int32_t L_11 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		L_12 = Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_inline(L_10, L_11, Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030((&V_1), L_12, ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var);
		int32_t L_13 = __this->____pos_2;
		String_t* L_14 = ___s0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		__this->____pos_2 = ((int32_t)il2cpp_codegen_add(L_13, L_15));
		return;
	}
}
IL2CPP_EXTERN_C  void ValueStringBuilder_AppendSlow_m3CE172AB40050F46D38B231E10CE868C5535A873_AdjustorThunk (RuntimeObject* __this, String_t* ___s0, const RuntimeMethod* method)
{
	ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B*>(__this + _offset);
	ValueStringBuilder_AppendSlow_m3CE172AB40050F46D38B231E10CE868C5535A873(_thisAdjusted, ___s0, method);
}
// System.Void System.Text.ValueStringBuilder::Append(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_Append_mA7B38292E87E056DA5D97F7CDE3680C2CDD049A2 (ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____pos_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_2 = (&__this->____chars_1);
		int32_t L_3;
		L_3 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_2, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___value0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4)))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5;
		L_5 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___value0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		ValueStringBuilder_Grow_mB856B39FEDE255A06522309EC02A986E4C9FC169(__this, L_5, NULL);
	}

IL_002a:
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_6 = (&__this->____chars_1);
		int32_t L_7 = __this->____pos_2;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_8;
		L_8 = Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_inline(L_6, L_7, Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030((&___value0), L_8, ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var);
		int32_t L_9 = __this->____pos_2;
		int32_t L_10;
		L_10 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___value0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		__this->____pos_2 = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		return;
	}
}
IL2CPP_EXTERN_C  void ValueStringBuilder_Append_mA7B38292E87E056DA5D97F7CDE3680C2CDD049A2_AdjustorThunk (RuntimeObject* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___value0, const RuntimeMethod* method)
{
	ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B*>(__this + _offset);
	ValueStringBuilder_Append_mA7B38292E87E056DA5D97F7CDE3680C2CDD049A2(_thisAdjusted, ___value0, method);
}
// System.Void System.Text.ValueStringBuilder::Grow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ValueStringBuilder_Grow_mB856B39FEDE255A06522309EC02A986E4C9FC169 (ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B* __this, int32_t ___additionalCapacityBeyondPos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_1 = NULL;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_2;
	memset((&V_2), 0, sizeof(V_2));
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_3 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_0;
		L_0 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		int32_t L_1 = __this->____pos_2;
		int32_t L_2 = ___additionalCapacityBeyondPos0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_3 = (&__this->____chars_1);
		int32_t L_4;
		L_4 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_3, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint32_t L_5;
		L_5 = Math_Max_m6612C5AE2D40056418765878E8787E4828D2ADD7(((int32_t)il2cpp_codegen_add(L_1, L_2)), ((int32_t)il2cpp_codegen_multiply(L_4, 2)), NULL);
		NullCheck(L_0);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6;
		L_6 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(4 /* T[] System.Buffers.ArrayPool`1<System.Char>::Rent(System.Int32) */, L_0, L_5);
		V_0 = L_6;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_7 = (&__this->____chars_1);
		int32_t L_8 = __this->____pos_2;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_9;
		L_9 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline(L_7, 0, L_8, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		V_2 = L_9;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_11;
		L_11 = Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98(L_10, Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E((&V_2), L_11, Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = __this->____arrayToReturnToPool_0;
		V_1 = L_12;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = L_13;
		V_3 = L_14;
		__this->____arrayToReturnToPool_0 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrayToReturnToPool_0), (void*)L_14);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15 = V_3;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_16;
		L_16 = Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98(L_15, Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		__this->____chars_1 = L_16;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = V_1;
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_18;
		L_18 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_19 = V_1;
		NullCheck(L_18);
		VirtualActionInvoker2< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Char>::Return(T[],System.Boolean) */, L_18, L_19, (bool)0);
	}

IL_0070:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void ValueStringBuilder_Grow_mB856B39FEDE255A06522309EC02A986E4C9FC169_AdjustorThunk (RuntimeObject* __this, int32_t ___additionalCapacityBeyondPos0, const RuntimeMethod* method)
{
	ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B*>(__this + _offset);
	ValueStringBuilder_Grow_mB856B39FEDE255A06522309EC02A986E4C9FC169(_thisAdjusted, ___additionalCapacityBeyondPos0, method);
}
// System.Void System.Text.ValueStringBuilder::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_Dispose_m1C9559D4231FF854BA4352A2E152781937D22B42 (ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->____arrayToReturnToPool_0;
		V_0 = L_0;
		il2cpp_codegen_initobj(__this, sizeof(ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_2;
		L_2 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = V_0;
		NullCheck(L_2);
		VirtualActionInvoker2< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Char>::Return(T[],System.Boolean) */, L_2, L_3, (bool)0);
	}

IL_001d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void ValueStringBuilder_Dispose_m1C9559D4231FF854BA4352A2E152781937D22B42_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B*>(__this + _offset);
	ValueStringBuilder_Dispose_m1C9559D4231FF854BA4352A2E152781937D22B42_inline(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Microsoft.Extensions.Logging.EventId
IL2CPP_EXTERN_C void EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_marshal_pinvoke(const EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710& unmarshaled, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CIdU3Ek__BackingField_0 = unmarshaled.___U3CIdU3Ek__BackingField_0;
	marshaled.___U3CNameU3Ek__BackingField_1 = il2cpp_codegen_marshal_string(unmarshaled.___U3CNameU3Ek__BackingField_1);
}
IL2CPP_EXTERN_C void EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_marshal_pinvoke_back(const EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_marshaled_pinvoke& marshaled, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710& unmarshaled)
{
	int32_t unmarshaledU3CIdU3Ek__BackingField_temp_0 = 0;
	unmarshaledU3CIdU3Ek__BackingField_temp_0 = marshaled.___U3CIdU3Ek__BackingField_0;
	unmarshaled.___U3CIdU3Ek__BackingField_0 = unmarshaledU3CIdU3Ek__BackingField_temp_0;
	unmarshaled.___U3CNameU3Ek__BackingField_1 = il2cpp_codegen_marshal_string_result(marshaled.___U3CNameU3Ek__BackingField_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CNameU3Ek__BackingField_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___U3CNameU3Ek__BackingField_1));
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Logging.EventId
IL2CPP_EXTERN_C void EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_marshal_pinvoke_cleanup(EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CNameU3Ek__BackingField_1);
	marshaled.___U3CNameU3Ek__BackingField_1 = NULL;
}
// Conversion methods for marshalling of: Microsoft.Extensions.Logging.EventId
IL2CPP_EXTERN_C void EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_marshal_com(const EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710& unmarshaled, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_marshaled_com& marshaled)
{
	marshaled.___U3CIdU3Ek__BackingField_0 = unmarshaled.___U3CIdU3Ek__BackingField_0;
	marshaled.___U3CNameU3Ek__BackingField_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___U3CNameU3Ek__BackingField_1);
}
IL2CPP_EXTERN_C void EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_marshal_com_back(const EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_marshaled_com& marshaled, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710& unmarshaled)
{
	int32_t unmarshaledU3CIdU3Ek__BackingField_temp_0 = 0;
	unmarshaledU3CIdU3Ek__BackingField_temp_0 = marshaled.___U3CIdU3Ek__BackingField_0;
	unmarshaled.___U3CIdU3Ek__BackingField_0 = unmarshaledU3CIdU3Ek__BackingField_temp_0;
	unmarshaled.___U3CNameU3Ek__BackingField_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___U3CNameU3Ek__BackingField_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CNameU3Ek__BackingField_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___U3CNameU3Ek__BackingField_1));
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Logging.EventId
IL2CPP_EXTERN_C void EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_marshal_com_cleanup(EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CNameU3Ek__BackingField_1);
	marshaled.___U3CNameU3Ek__BackingField_1 = NULL;
}
// Microsoft.Extensions.Logging.EventId Microsoft.Extensions.Logging.EventId::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 EventId_op_Implicit_m0DAA73915C7788018C741D3EE391ABABBC967BF4 (int32_t ___i0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___i0;
		EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 L_1;
		memset((&L_1), 0, sizeof(L_1));
		EventId__ctor_mFDDCC191B93DEABA80140E50C8E5A592EB5E1C6F((&L_1), L_0, (String_t*)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.Extensions.Logging.EventId::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventId__ctor_mFDDCC191B93DEABA80140E50C8E5A592EB5E1C6F (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, int32_t ___id0, String_t* ___name1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___id0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		String_t* L_1 = ___name1;
		__this->___U3CNameU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_1), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void EventId__ctor_mFDDCC191B93DEABA80140E50C8E5A592EB5E1C6F_AdjustorThunk (RuntimeObject* __this, int32_t ___id0, String_t* ___name1, const RuntimeMethod* method)
{
	EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710*>(__this + _offset);
	EventId__ctor_mFDDCC191B93DEABA80140E50C8E5A592EB5E1C6F(_thisAdjusted, ___id0, ___name1, method);
}
// System.Int32 Microsoft.Extensions.Logging.EventId::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventId_get_Id_m86B112CC64D4CBED6F5319DD779D103663493B3A (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t EventId_get_Id_m86B112CC64D4CBED6F5319DD779D103663493B3A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = EventId_get_Id_m86B112CC64D4CBED6F5319DD779D103663493B3A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String Microsoft.Extensions.Logging.EventId::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EventId_get_Name_m8BD116C470BA834B6E7392A4D04A34BC1E63F8B6 (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* EventId_get_Name_m8BD116C470BA834B6E7392A4D04A34BC1E63F8B6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EventId_get_Name_m8BD116C470BA834B6E7392A4D04A34BC1E63F8B6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String Microsoft.Extensions.Logging.EventId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EventId_ToString_m9B1D1541573A8A460D61C8EC14C5C17FC6CEEFD5 (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0;
		L_0 = EventId_get_Name_m8BD116C470BA834B6E7392A4D04A34BC1E63F8B6_inline(__this, NULL);
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		int32_t L_2;
		L_2 = EventId_get_Id_m86B112CC64D4CBED6F5319DD779D103663493B3A_inline(__this, NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		G_B2_0 = L_3;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C  String_t* EventId_ToString_m9B1D1541573A8A460D61C8EC14C5C17FC6CEEFD5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EventId_ToString_m9B1D1541573A8A460D61C8EC14C5C17FC6CEEFD5(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Logging.EventId::Equals(Microsoft.Extensions.Logging.EventId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventId_Equals_m11118ACCEA6715D6EEA89CA54745F9F63CDBCC42 (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___other0, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = EventId_get_Id_m86B112CC64D4CBED6F5319DD779D103663493B3A_inline(__this, NULL);
		int32_t L_1;
		L_1 = EventId_get_Id_m86B112CC64D4CBED6F5319DD779D103663493B3A_inline((&___other0), NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool EventId_Equals_m11118ACCEA6715D6EEA89CA54745F9F63CDBCC42_AdjustorThunk (RuntimeObject* __this, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___other0, const RuntimeMethod* method)
{
	EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710*>(__this + _offset);
	bool _returnValue;
	_returnValue = EventId_Equals_m11118ACCEA6715D6EEA89CA54745F9F63CDBCC42(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Logging.EventId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventId_Equals_m0CAAD86008C8E5DDE9F9F8D81341D727643F91F1 (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = ___obj0;
		V_0 = ((*(EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710*)((EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710*)(EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710*)UnBox(L_2, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_il2cpp_TypeInfo_var))));
		EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 L_3 = V_0;
		bool L_4;
		L_4 = EventId_Equals_m11118ACCEA6715D6EEA89CA54745F9F63CDBCC42(__this, L_3, NULL);
		return L_4;
	}

IL_001c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool EventId_Equals_m0CAAD86008C8E5DDE9F9F8D81341D727643F91F1_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710*>(__this + _offset);
	bool _returnValue;
	_returnValue = EventId_Equals_m0CAAD86008C8E5DDE9F9F8D81341D727643F91F1(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Logging.EventId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventId_GetHashCode_m1C7BA059C42C765351C534BB03BC2D3A1850645C (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = EventId_get_Id_m86B112CC64D4CBED6F5319DD779D103663493B3A_inline(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t EventId_GetHashCode_m1C7BA059C42C765351C534BB03BC2D3A1850645C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = EventId_GetHashCode_m1C7BA059C42C765351C534BB03BC2D3A1850645C(_thisAdjusted, method);
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
// Conversion methods for marshalling of: Microsoft.Extensions.Logging.FormattedLogValues
IL2CPP_EXTERN_C void FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_marshal_pinvoke(const FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114& unmarshaled, FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_marshaled_pinvoke& marshaled)
{
	Exception_t* ____formatter_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_formatter' of type 'FormattedLogValues': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____formatter_2Exception, NULL);
}
IL2CPP_EXTERN_C void FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_marshal_pinvoke_back(const FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_marshaled_pinvoke& marshaled, FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114& unmarshaled)
{
	Exception_t* ____formatter_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_formatter' of type 'FormattedLogValues': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____formatter_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Logging.FormattedLogValues
IL2CPP_EXTERN_C void FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_marshal_pinvoke_cleanup(FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.Extensions.Logging.FormattedLogValues
IL2CPP_EXTERN_C void FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_marshal_com(const FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114& unmarshaled, FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_marshaled_com& marshaled)
{
	Exception_t* ____formatter_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_formatter' of type 'FormattedLogValues': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____formatter_2Exception, NULL);
}
IL2CPP_EXTERN_C void FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_marshal_com_back(const FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_marshaled_com& marshaled, FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114& unmarshaled)
{
	Exception_t* ____formatter_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_formatter' of type 'FormattedLogValues': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____formatter_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Logging.FormattedLogValues
IL2CPP_EXTERN_C void FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_marshal_com_cleanup(FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_marshaled_com& marshaled)
{
}
// System.Void Microsoft.Extensions.Logging.FormattedLogValues::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormattedLogValues__ctor_mCF58384A2EC59C96A510D418010A5199F384420F (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* __this, String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_GetOrAdd_m5EF0E65D8977A84F75210848D51F416EBB1F3D36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryGetValue_m18880E9C6AC11DE8CE63D09CD6B1CD0B778E46F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__9_0_m8CA4F0E087E96B776FDB77E32D70D5EB282D3F7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F41BF20B4D5ED35ED0B5C03F1AF6B146720CB0B);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF* G_B8_2 = NULL;
	FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* G_B8_3 = NULL;
	Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF* G_B7_2 = NULL;
	FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* G_B7_3 = NULL;
	String_t* G_B12_0 = NULL;
	FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* G_B12_1 = NULL;
	String_t* G_B11_0 = NULL;
	FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* G_B11_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___values1;
		if (!L_0)
		{
			goto IL_0069;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___values1;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0069;
		}
	}
	{
		String_t* L_2 = ___format0;
		if (!L_2)
		{
			goto IL_0069;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_il2cpp_TypeInfo_var);
		int32_t L_3 = ((FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_StaticFields*)il2cpp_codegen_static_fields_for(FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_il2cpp_TypeInfo_var))->____count_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)1024))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF* L_4 = ((FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_StaticFields*)il2cpp_codegen_static_fields_for(FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_il2cpp_TypeInfo_var))->____formatters_1;
		String_t* L_5 = ___format0;
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C** L_6 = (&__this->____formatter_2);
		NullCheck(L_4);
		bool L_7;
		L_7 = ConcurrentDictionary_2_TryGetValue_m18880E9C6AC11DE8CE63D09CD6B1CD0B778E46F9(L_4, L_5, L_6, ConcurrentDictionary_2_TryGetValue_m18880E9C6AC11DE8CE63D09CD6B1CD0B778E46F9_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_8 = ___format0;
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_9 = (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C*)il2cpp_codegen_object_new(LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		LogValuesFormatter__ctor_m63200EDB80E69D4D1CD0467FA2FBACFF255F9504(L_9, L_8, NULL);
		__this->____formatter_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____formatter_2), (void*)L_9);
		goto IL_0070;
	}

IL_0037:
	{
		il2cpp_codegen_runtime_class_init_inline(FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF* L_10 = ((FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_StaticFields*)il2cpp_codegen_static_fields_for(FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_il2cpp_TypeInfo_var))->____formatters_1;
		String_t* L_11 = ___format0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_il2cpp_TypeInfo_var);
		Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5* L_12 = ((U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1;
		Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5* L_13 = L_12;
		G_B7_0 = L_13;
		G_B7_1 = L_11;
		G_B7_2 = L_10;
		G_B7_3 = __this;
		if (L_13)
		{
			G_B8_0 = L_13;
			G_B8_1 = L_11;
			G_B8_2 = L_10;
			G_B8_3 = __this;
			goto IL_005d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_il2cpp_TypeInfo_var);
		U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C* L_14 = ((U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5* L_15 = (Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5*)il2cpp_codegen_object_new(Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Func_2__ctor_mDFAFE1C452564604F3E7A340E3D081BDD670FE55(L_15, L_14, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__9_0_m8CA4F0E087E96B776FDB77E32D70D5EB282D3F7A_RuntimeMethod_var), NULL);
		Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5* L_16 = L_15;
		((U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1), (void*)L_16);
		G_B8_0 = L_16;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_005d:
	{
		NullCheck(G_B8_2);
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_17;
		L_17 = ConcurrentDictionary_2_GetOrAdd_m5EF0E65D8977A84F75210848D51F416EBB1F3D36(G_B8_2, G_B8_1, G_B8_0, ConcurrentDictionary_2_GetOrAdd_m5EF0E65D8977A84F75210848D51F416EBB1F3D36_RuntimeMethod_var);
		G_B8_3->____formatter_2 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_3->____formatter_2), (void*)L_17);
		goto IL_0070;
	}

IL_0069:
	{
		__this->____formatter_2 = (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____formatter_2), (void*)(LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C*)NULL);
	}

IL_0070:
	{
		String_t* L_18 = ___format0;
		String_t* L_19 = L_18;
		G_B11_0 = L_19;
		G_B11_1 = __this;
		if (L_19)
		{
			G_B12_0 = L_19;
			G_B12_1 = __this;
			goto IL_007b;
		}
	}
	{
		G_B12_0 = _stringLiteral3F41BF20B4D5ED35ED0B5C03F1AF6B146720CB0B;
		G_B12_1 = G_B11_1;
	}

IL_007b:
	{
		G_B12_1->____originalMessage_4 = G_B12_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B12_1->____originalMessage_4), (void*)G_B12_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = ___values1;
		__this->____values_3 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_3), (void*)L_20);
		return;
	}
}
IL2CPP_EXTERN_C  void FormattedLogValues__ctor_mCF58384A2EC59C96A510D418010A5199F384420F_AdjustorThunk (RuntimeObject* __this, String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values1, const RuntimeMethod* method)
{
	FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114*>(__this + _offset);
	FormattedLogValues__ctor_mCF58384A2EC59C96A510D418010A5199F384420F(_thisAdjusted, ___format0, ___values1, method);
}
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> Microsoft.Extensions.Logging.FormattedLogValues::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 FormattedLogValues_get_Item_m97B27F9468C950908B5159DE6597464D92ADF72E (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B3859B0D165EE865835DCE889C29568CCB924E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index0;
		int32_t L_2;
		L_2 = FormattedLogValues_get_Count_mD4F7E80166B50AD2801CEAB9AE1A7ADC1C4C63FB(__this, NULL);
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_3 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormattedLogValues_get_Item_m97B27F9468C950908B5159DE6597464D92ADF72E_RuntimeMethod_var)));
	}

IL_0018:
	{
		int32_t L_4 = ___index0;
		int32_t L_5;
		L_5 = FormattedLogValues_get_Count_mD4F7E80166B50AD2801CEAB9AE1A7ADC1C4C63FB(__this, NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_5, 1))))))
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_6 = __this->____originalMessage_4;
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_7;
		memset((&L_7), 0, sizeof(L_7));
		KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB((&L_7), _stringLiteral5B3859B0D165EE865835DCE889C29568CCB924E8, L_6, /*hidden argument*/KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB_RuntimeMethod_var);
		return L_7;
	}

IL_0034:
	{
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_8 = __this->____formatter_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = __this->____values_3;
		int32_t L_10 = ___index0;
		NullCheck(L_8);
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_11;
		L_11 = LogValuesFormatter_GetValue_m937B78C1EEF207AE5F885B093158485737905F3F(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C  KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 FormattedLogValues_get_Item_m97B27F9468C950908B5159DE6597464D92ADF72E_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
	FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114*>(__this + _offset);
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 _returnValue;
	_returnValue = FormattedLogValues_get_Item_m97B27F9468C950908B5159DE6597464D92ADF72E(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Logging.FormattedLogValues::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FormattedLogValues_get_Count_mD4F7E80166B50AD2801CEAB9AE1A7ADC1C4C63FB (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_0 = __this->____formatter_2;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 1;
	}

IL_000a:
	{
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_1 = __this->____formatter_2;
		NullCheck(L_1);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2;
		L_2 = LogValuesFormatter_get_ValueNames_m7BB3F9B56AD516B6ECB699D81D9D17E280A422FB_inline(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_2, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		return ((int32_t)il2cpp_codegen_add(L_3, 1));
	}
}
IL2CPP_EXTERN_C  int32_t FormattedLogValues_get_Count_mD4F7E80166B50AD2801CEAB9AE1A7ADC1C4C63FB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = FormattedLogValues_get_Count_mD4F7E80166B50AD2801CEAB9AE1A7ADC1C4C63FB(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> Microsoft.Extensions.Logging.FormattedLogValues::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FormattedLogValues_GetEnumerator_mF7E3A4A99FA8F4E88A16B1AD39A141643AF7EA70 (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD* L_0 = (U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD*)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetEnumeratorU3Ed__14__ctor_m65962E588A342B47B1C4B6331FFE4FB6C14FB50F(L_0, 0, NULL);
		U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD* L_1 = L_0;
		FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114 L_2 = (*(FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114*)__this);
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3E4__this_2))->____formatter_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3E4__this_2))->____values_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3E4__this_2))->____originalMessage_4), (void*)NULL);
		#endif
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* FormattedLogValues_GetEnumerator_mF7E3A4A99FA8F4E88A16B1AD39A141643AF7EA70_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = FormattedLogValues_GetEnumerator_mF7E3A4A99FA8F4E88A16B1AD39A141643AF7EA70(_thisAdjusted, method);
	return _returnValue;
}
// System.String Microsoft.Extensions.Logging.FormattedLogValues::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FormattedLogValues_ToString_m59B2396785E3BA6FD99896918E462096503CFDF6 (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* __this, const RuntimeMethod* method) 
{
	{
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_0 = __this->____formatter_2;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = __this->____originalMessage_4;
		return L_1;
	}

IL_000f:
	{
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_2 = __this->____formatter_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____values_3;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = LogValuesFormatter_Format_m74126A3B9E54B7EC888F5D4DB0764271FC090323(L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* FormattedLogValues_ToString_m59B2396785E3BA6FD99896918E462096503CFDF6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = FormattedLogValues_ToString_m59B2396785E3BA6FD99896918E462096503CFDF6(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.IEnumerator Microsoft.Extensions.Logging.FormattedLogValues::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FormattedLogValues_System_Collections_IEnumerable_GetEnumerator_m0EFD0090FC1E78E9826263068A00CB7BDD4CF5E4 (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = FormattedLogValues_GetEnumerator_mF7E3A4A99FA8F4E88A16B1AD39A141643AF7EA70(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* FormattedLogValues_System_Collections_IEnumerable_GetEnumerator_m0EFD0090FC1E78E9826263068A00CB7BDD4CF5E4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = FormattedLogValues_System_Collections_IEnumerable_GetEnumerator_m0EFD0090FC1E78E9826263068A00CB7BDD4CF5E4(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Logging.FormattedLogValues::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormattedLogValues__cctor_mF36A92BB3C87B8CE49A9DB6EF8303BBC6C1B51C3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2__ctor_m3659626FF4BF93F715A9BD30A5176EC31C058B2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF* L_0 = (ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF*)il2cpp_codegen_object_new(ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ConcurrentDictionary_2__ctor_m3659626FF4BF93F715A9BD30A5176EC31C058B2E(L_0, ConcurrentDictionary_2__ctor_m3659626FF4BF93F715A9BD30A5176EC31C058B2E_RuntimeMethod_var);
		((FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_StaticFields*)il2cpp_codegen_static_fields_for(FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_il2cpp_TypeInfo_var))->____formatters_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_StaticFields*)il2cpp_codegen_static_fields_for(FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_il2cpp_TypeInfo_var))->____formatters_1), (void*)L_0);
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
// System.Void Microsoft.Extensions.Logging.FormattedLogValues/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0C0F7AA6596546D97F1E2103987830468F838B46 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C* L_0 = (U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C*)il2cpp_codegen_object_new(U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m63593778D5647B867ACD5E3EC47BA9A7812F292A(L_0, NULL);
		((U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.FormattedLogValues/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m63593778D5647B867ACD5E3EC47BA9A7812F292A (U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Microsoft.Extensions.Logging.LogValuesFormatter Microsoft.Extensions.Logging.FormattedLogValues/<>c::<.ctor>b__9_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* U3CU3Ec_U3C_ctorU3Eb__9_0_m8CA4F0E087E96B776FDB77E32D70D5EB282D3F7A (U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C* __this, String_t* ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((&((FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_StaticFields*)il2cpp_codegen_static_fields_for(FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_il2cpp_TypeInfo_var))->____count_0), NULL);
		String_t* L_1 = ___f0;
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_2 = (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C*)il2cpp_codegen_object_new(LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LogValuesFormatter__ctor_m63200EDB80E69D4D1CD0467FA2FBACFF255F9504(L_2, L_1, NULL);
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
// System.Void Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14__ctor_m65962E588A342B47B1C4B6331FFE4FB6C14FB50F (U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_mE038763A396457F91EF24ECCBFEEAE12BF6DDFE0 (U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__14_MoveNext_m35F40B92EBB8F2ED983B8B2C5D2A0E113D84E606 (U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
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
			goto IL_0040;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		__this->___U3CiU3E5__2_3 = 0;
		goto IL_0057;
	}

IL_0020:
	{
		FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* L_3 = (&__this->___U3CU3E4__this_2);
		int32_t L_4 = __this->___U3CiU3E5__2_3;
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_5;
		L_5 = FormattedLogValues_get_Item_m97B27F9468C950908B5159DE6597464D92ADF72E(L_3, L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___value_1), (void*)NULL);
		#endif
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0040:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_6 = __this->___U3CiU3E5__2_3;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		__this->___U3CiU3E5__2_3 = L_7;
	}

IL_0057:
	{
		int32_t L_8 = __this->___U3CiU3E5__2_3;
		FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* L_9 = (&__this->___U3CU3E4__this_2);
		int32_t L_10;
		L_10 = FormattedLogValues_get_Count_mD4F7E80166B50AD2801CEAB9AE1A7ADC1C4C63FB(L_9, NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0020;
		}
	}
	{
		return (bool)0;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 U3CGetEnumeratorU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_ObjectU3EU3E_get_Current_mE8653A395B10020893797723FBFAB6535A5DB8EC (U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_m29F5DC693050EA4C8EBD39579FB5839CADD0E00A (U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_m29F5DC693050EA4C8EBD39579FB5839CADD0E00A_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_get_Current_m77250264AADDF5EE2FB049506CCCCB6303C1AC67 (U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_0 = __this->___U3CU3E2__current_1;
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_1 = L_0;
		RuntimeObject* L_2 = Box(KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9_il2cpp_TypeInfo_var, &L_1);
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
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogTrace(Microsoft.Extensions.Logging.ILogger,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogTrace_mED89E988903065F91B17FCD42B7E442B98E21956 (RuntimeObject* ___logger0, String_t* ___message1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		String_t* L_1 = ___message1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m3F0219E0DB6E2CB10D0618F935EFE4BB8BAE85EA(L_0, 0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogInformation(Microsoft.Extensions.Logging.ILogger,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogInformation_mB7FDD0AD552DFF453F6BCD4AC7BF97DDDEDB7ADC (RuntimeObject* ___logger0, String_t* ___message1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		String_t* L_1 = ___message1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m3F0219E0DB6E2CB10D0618F935EFE4BB8BAE85EA(L_0, 2, L_1, L_2, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogError(Microsoft.Extensions.Logging.ILogger,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogError_mD5B60284BA51EDD61E74DA22FA30A85B77927F5B (RuntimeObject* ___logger0, Exception_t* ___exception1, String_t* ___message2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		Exception_t* L_1 = ___exception1;
		String_t* L_2 = ___message2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args3;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_mE483B53E65EE67EA6C848AD5B94A3D479E26E4D3(L_0, 4, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogError(Microsoft.Extensions.Logging.ILogger,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogError_m1151F264B84A277EAEE29115ED4832C7067F0245 (RuntimeObject* ___logger0, String_t* ___message1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		String_t* L_1 = ___message1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m3F0219E0DB6E2CB10D0618F935EFE4BB8BAE85EA(L_0, 4, L_1, L_2, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::Log(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.LogLevel,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_Log_m3F0219E0DB6E2CB10D0618F935EFE4BB8BAE85EA (RuntimeObject* ___logger0, int32_t ___logLevel1, String_t* ___message2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		int32_t L_1 = ___logLevel1;
		EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 L_2;
		L_2 = EventId_op_Implicit_m0DAA73915C7788018C741D3EE391ABABBC967BF4(0, NULL);
		String_t* L_3 = ___message2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___args3;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m75D476308DBDCD0476692483A7356CF3E6E7785F(L_0, L_1, L_2, (Exception_t*)NULL, L_3, L_4, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::Log(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.LogLevel,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_Log_mE483B53E65EE67EA6C848AD5B94A3D479E26E4D3 (RuntimeObject* ___logger0, int32_t ___logLevel1, Exception_t* ___exception2, String_t* ___message3, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		int32_t L_1 = ___logLevel1;
		EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 L_2;
		L_2 = EventId_op_Implicit_m0DAA73915C7788018C741D3EE391ABABBC967BF4(0, NULL);
		Exception_t* L_3 = ___exception2;
		String_t* L_4 = ___message3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = ___args4;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m75D476308DBDCD0476692483A7356CF3E6E7785F(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::Log(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.LogLevel,Microsoft.Extensions.Logging.EventId,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_Log_m75D476308DBDCD0476692483A7356CF3E6E7785F (RuntimeObject* ___logger0, int32_t ___logLevel1, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___eventId2, Exception_t* ___exception3, String_t* ___message4, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_Log_TisFormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_m2BE10C63CF08FD7A1E3C62F6075B3136827D0C5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6B0053E5BC12967A61A36D68970E7E9514BA83D6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LoggerExtensions_Log_m75D476308DBDCD0476692483A7356CF3E6E7785F_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___logger0;
		int32_t L_3 = ___logLevel1;
		EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 L_4 = ___eventId2;
		String_t* L_5 = ___message4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___args5;
		FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114 L_7;
		memset((&L_7), 0, sizeof(L_7));
		FormattedLogValues__ctor_mCF58384A2EC59C96A510D418010A5199F384420F((&L_7), L_5, L_6, /*hidden argument*/NULL);
		Exception_t* L_8 = ___exception3;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		Func_3_t7B06BE9399C6AC652CFF72CFD7A90CC97B7389B3* L_9 = ((LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_StaticFields*)il2cpp_codegen_static_fields_for(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var))->____messageFormatter_0;
		NullCheck(L_2);
		GenericInterfaceActionInvoker5< int32_t, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710, FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114, Exception_t*, Func_3_t7B06BE9399C6AC652CFF72CFD7A90CC97B7389B3* >::Invoke(ILogger_Log_TisFormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_m2BE10C63CF08FD7A1E3C62F6075B3136827D0C5B_RuntimeMethod_var, L_2, L_3, L_4, L_7, L_8, L_9);
		return;
	}
}
// System.String Microsoft.Extensions.Logging.LoggerExtensions::MessageFormatter(Microsoft.Extensions.Logging.FormattedLogValues,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoggerExtensions_MessageFormatter_m9FBE8058CC2F31726E5A8DB5AC2C8C87B858B935 (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114 ___state0, Exception_t* ___error1, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = FormattedLogValues_ToString_m59B2396785E3BA6FD99896918E462096503CFDF6((&___state0), NULL);
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions__cctor_m72A7B044687080FC4BE96762BB4DBFFD16ACDEC8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t7B06BE9399C6AC652CFF72CFD7A90CC97B7389B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_MessageFormatter_m9FBE8058CC2F31726E5A8DB5AC2C8C87B858B935_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_3_t7B06BE9399C6AC652CFF72CFD7A90CC97B7389B3* L_0 = (Func_3_t7B06BE9399C6AC652CFF72CFD7A90CC97B7389B3*)il2cpp_codegen_object_new(Func_3_t7B06BE9399C6AC652CFF72CFD7A90CC97B7389B3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Func_3__ctor_m6D2444715EF8A9B257B8C6C130AE189F866A8F98(L_0, NULL, (intptr_t)((void*)LoggerExtensions_MessageFormatter_m9FBE8058CC2F31726E5A8DB5AC2C8C87B858B935_RuntimeMethod_var), NULL);
		((LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_StaticFields*)il2cpp_codegen_static_fields_for(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var))->____messageFormatter_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_StaticFields*)il2cpp_codegen_static_fields_for(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var))->____messageFormatter_0), (void*)L_0);
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
// System.Void Microsoft.Extensions.Logging.LogValuesFormatter::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogValuesFormatter__ctor_m63200EDB80E69D4D1CD0467FA2FBACFF255F9504 (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, String_t* ___format0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->____valueNames_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____valueNames_2), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_1 = ___format0;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LogValuesFormatter__ctor_m63200EDB80E69D4D1CD0467FA2FBACFF255F9504_RuntimeMethod_var)));
	}

IL_001f:
	{
		String_t* L_3 = ___format0;
		LogValuesFormatter_set_OriginalFormat_m80D85FA1506C051EC3B5AC66852C46D3F466881A_inline(__this, L_3, NULL);
		int8_t* L_4 = (int8_t*) alloca(((uintptr_t)((int32_t)512)));
		memset(L_4, 0, ((uintptr_t)((int32_t)512)));
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_5;
		memset((&L_5), 0, sizeof(L_5));
		Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_inline((&L_5), (void*)(L_4), ((int32_t)256), /*hidden argument*/Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		V_3 = L_5;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_6 = V_3;
		ValueStringBuilder__ctor_mCBA742551CDF16ED07768E79F0A6084ED0BEA0A1((&V_0), L_6, NULL);
		V_1 = 0;
		String_t* L_7 = ___format0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		V_2 = L_8;
		goto IL_0109;
	}

IL_004f:
	{
		String_t* L_9 = ___format0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		il2cpp_codegen_runtime_class_init_inline(LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = LogValuesFormatter_FindBraceIndex_m1DF65D25C5132079993BFA85236C6E14EBB60C87(L_9, ((int32_t)123), L_10, L_11, NULL);
		V_4 = L_12;
		int32_t L_13 = V_1;
		if (L_13)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_14 = V_4;
		int32_t L_15 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_16 = ___format0;
		__this->____format_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____format_1), (void*)L_16);
		return;
	}

IL_006b:
	{
		String_t* L_17 = ___format0;
		int32_t L_18 = V_4;
		int32_t L_19 = V_2;
		il2cpp_codegen_runtime_class_init_inline(LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_il2cpp_TypeInfo_var);
		int32_t L_20;
		L_20 = LogValuesFormatter_FindBraceIndex_m1DF65D25C5132079993BFA85236C6E14EBB60C87(L_17, ((int32_t)125), L_18, L_19, NULL);
		V_5 = L_20;
		int32_t L_21 = V_5;
		int32_t L_22 = V_2;
		if ((!(((uint32_t)L_21) == ((uint32_t)L_22))))
		{
			goto IL_0092;
		}
	}
	{
		String_t* L_23 = ___format0;
		int32_t L_24 = V_1;
		int32_t L_25 = V_2;
		int32_t L_26 = V_1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_27;
		L_27 = MemoryExtensions_AsSpan_m8409F3DA0EF95BF6B3A8741E5C56E729B0A824C6_inline(L_23, L_24, ((int32_t)il2cpp_codegen_subtract(L_25, L_26)), NULL);
		ValueStringBuilder_Append_mA7B38292E87E056DA5D97F7CDE3680C2CDD049A2((&V_0), L_27, NULL);
		int32_t L_28 = V_2;
		V_1 = L_28;
		goto IL_0109;
	}

IL_0092:
	{
		String_t* L_29 = ___format0;
		il2cpp_codegen_runtime_class_init_inline(LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_30 = ((LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_StaticFields*)il2cpp_codegen_static_fields_for(LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_il2cpp_TypeInfo_var))->___FormatDelimiters_0;
		int32_t L_31 = V_4;
		int32_t L_32 = V_5;
		int32_t L_33;
		L_33 = LogValuesFormatter_FindIndexOfAny_m2C4C3C1725A87F036579C904685B8F699B7BBBE2(L_29, L_30, L_31, L_32, NULL);
		V_6 = L_33;
		String_t* L_34 = ___format0;
		int32_t L_35 = V_1;
		int32_t L_36 = V_4;
		int32_t L_37 = V_1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_38;
		L_38 = MemoryExtensions_AsSpan_m8409F3DA0EF95BF6B3A8741E5C56E729B0A824C6_inline(L_34, L_35, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_36, L_37)), 1)), NULL);
		ValueStringBuilder_Append_mA7B38292E87E056DA5D97F7CDE3680C2CDD049A2((&V_0), L_38, NULL);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_39 = __this->____valueNames_2;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_39, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_7 = L_40;
		String_t* L_41;
		L_41 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_7), NULL);
		ValueStringBuilder_Append_m031799DA9B026147CDC10C2368497AD74DD24645_inline((&V_0), L_41, NULL);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_42 = __this->____valueNames_2;
		String_t* L_43 = ___format0;
		int32_t L_44 = V_4;
		int32_t L_45 = V_6;
		int32_t L_46 = V_4;
		NullCheck(L_43);
		String_t* L_47;
		L_47 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_43, ((int32_t)il2cpp_codegen_add(L_44, 1)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_45, L_46)), 1)), NULL);
		NullCheck(L_42);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_42, L_47, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		String_t* L_48 = ___format0;
		int32_t L_49 = V_6;
		int32_t L_50 = V_5;
		int32_t L_51 = V_6;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_52;
		L_52 = MemoryExtensions_AsSpan_m8409F3DA0EF95BF6B3A8741E5C56E729B0A824C6_inline(L_48, L_49, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_50, L_51)), 1)), NULL);
		ValueStringBuilder_Append_mA7B38292E87E056DA5D97F7CDE3680C2CDD049A2((&V_0), L_52, NULL);
		int32_t L_53 = V_5;
		V_1 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_0109:
	{
		int32_t L_54 = V_1;
		int32_t L_55 = V_2;
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_004f;
		}
	}
	{
		String_t* L_56;
		L_56 = ValueStringBuilder_ToString_mC2FE860196F7D3D8DB3CFF16D697E3755C9D0BF0((&V_0), NULL);
		__this->____format_1 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____format_1), (void*)L_56);
		return;
	}
}
// System.String Microsoft.Extensions.Logging.LogValuesFormatter::get_OriginalFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogValuesFormatter_get_OriginalFormat_m3BC5A1D8FD7535342E570848330DD86D641963E5 (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3COriginalFormatU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Logging.LogValuesFormatter::set_OriginalFormat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogValuesFormatter_set_OriginalFormat_m80D85FA1506C051EC3B5AC66852C46D3F466881A (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3COriginalFormatU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COriginalFormatU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.String> Microsoft.Extensions.Logging.LogValuesFormatter::get_ValueNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* LogValuesFormatter_get_ValueNames_m7BB3F9B56AD516B6ECB699D81D9D17E280A422FB (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->____valueNames_2;
		return L_0;
	}
}
// System.Int32 Microsoft.Extensions.Logging.LogValuesFormatter::FindBraceIndex(System.String,System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogValuesFormatter_FindBraceIndex_m1DF65D25C5132079993BFA85236C6E14EBB60C87 (String_t* ___format0, Il2CppChar ___brace1, int32_t ___startIndex2, int32_t ___endIndex3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___endIndex3;
		V_0 = L_0;
		int32_t L_1 = ___startIndex2;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0041;
	}

IL_0008:
	{
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___format0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, L_4, NULL);
		Il2CppChar L_6 = ___brace1;
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_7 = V_2;
		if (((int32_t)(L_7%2)))
		{
			goto IL_0045;
		}
	}
	{
		V_2 = 0;
		int32_t L_8 = ___endIndex3;
		V_0 = L_8;
		goto IL_003d;
	}

IL_0021:
	{
		String_t* L_9 = ___format0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		Il2CppChar L_11;
		L_11 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_9, L_10, NULL);
		Il2CppChar L_12 = ___brace1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_003d;
		}
	}
	{
		Il2CppChar L_13 = ___brace1;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_14 = V_2;
		if (L_14)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_15 = V_1;
		V_0 = L_15;
		goto IL_0039;
	}

IL_0037:
	{
		int32_t L_16 = V_1;
		V_0 = L_16;
	}

IL_0039:
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_003d:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0041:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = ___endIndex3;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0008;
		}
	}

IL_0045:
	{
		int32_t L_21 = V_0;
		return L_21;
	}
}
// System.Int32 Microsoft.Extensions.Logging.LogValuesFormatter::FindIndexOfAny(System.String,System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogValuesFormatter_FindIndexOfAny_m2C4C3C1725A87F036579C904685B8F699B7BBBE2 (String_t* ___format0, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___chars1, int32_t ___startIndex2, int32_t ___endIndex3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___format0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___chars1;
		int32_t L_2 = ___startIndex2;
		int32_t L_3 = ___endIndex3;
		int32_t L_4 = ___startIndex2;
		NullCheck(L_0);
		int32_t L_5;
		L_5 = String_IndexOfAny_m740B0108B7FAFFAB1C3F88E782B094195A4E3B75(L_0, L_1, L_2, ((int32_t)il2cpp_codegen_subtract(L_3, L_4)), NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_0012:
	{
		int32_t L_8 = ___endIndex3;
		return L_8;
	}
}
// System.String Microsoft.Extensions.Logging.LogValuesFormatter::Format(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogValuesFormatter_Format_m74126A3B9E54B7EC888F5D4DB0764271FC090323 (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* G_B11_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* G_B10_2 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___values0;
		V_0 = L_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___values0;
		if (!L_1)
		{
			goto IL_0056;
		}
	}
	{
		V_1 = 0;
		goto IL_0050;
	}

IL_0009:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___values0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		RuntimeObject* L_6;
		L_6 = LogValuesFormatter_FormatArgument_m9FCBAF42DAD055555C37C03E89B3F0EDF5149C43(__this, L_5, NULL);
		V_2 = L_6;
		RuntimeObject* L_7 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___values0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((((RuntimeObject*)(RuntimeObject*)L_7) == ((RuntimeObject*)(RuntimeObject*)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = ___values0;
		NullCheck(L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)));
		V_0 = L_13;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___values0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_0;
		int32_t L_16 = V_1;
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_14, (RuntimeArray*)L_15, L_16, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		RuntimeObject* L_20 = V_2;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (RuntimeObject*)L_20);
		goto IL_0044;
	}

IL_0034:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = V_0;
		int32_t L_22 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = ___values0;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		RuntimeObject* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		RuntimeObject* L_27;
		L_27 = LogValuesFormatter_FormatArgument_m9FCBAF42DAD055555C37C03E89B3F0EDF5149C43(__this, L_26, NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_27);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (RuntimeObject*)L_27);
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0044:
	{
		int32_t L_29 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = ___values0;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_0034;
		}
	}
	{
		goto IL_0056;
	}

IL_004c:
	{
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0050:
	{
		int32_t L_32 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = ___values0;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_0009;
		}
	}

IL_0056:
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_34;
		L_34 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_35 = __this->____format_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = L_36;
		G_B10_0 = L_37;
		G_B10_1 = L_35;
		G_B10_2 = L_34;
		if (L_37)
		{
			G_B11_0 = L_37;
			G_B11_1 = L_35;
			G_B11_2 = L_34;
			goto IL_006b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38;
		L_38 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		G_B11_0 = L_38;
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
	}

IL_006b:
	{
		String_t* L_39;
		L_39 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(G_B11_2, G_B11_1, G_B11_0, NULL);
		return L_39;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> Microsoft.Extensions.Logging.LogValuesFormatter::GetValue(System.Object[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 LogValuesFormatter_GetValue_m937B78C1EEF207AE5F885B093158485737905F3F (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B3859B0D165EE865835DCE889C29568CCB924E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___index1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->____valueNames_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_2, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)L_3)))
		{
			goto IL_001d;
		}
	}

IL_0012:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_4 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LogValuesFormatter_GetValue_m937B78C1EEF207AE5F885B093158485737905F3F_RuntimeMethod_var)));
	}

IL_001d:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = __this->____valueNames_2;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_5, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		int32_t L_7 = ___index1;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0040;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = __this->____valueNames_2;
		int32_t L_9 = ___index1;
		NullCheck(L_8);
		String_t* L_10;
		L_10 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_8, L_9, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___values0;
		int32_t L_12 = ___index1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_15;
		memset((&L_15), 0, sizeof(L_15));
		KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB((&L_15), L_10, L_14, /*hidden argument*/KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB_RuntimeMethod_var);
		return L_15;
	}

IL_0040:
	{
		String_t* L_16;
		L_16 = LogValuesFormatter_get_OriginalFormat_m3BC5A1D8FD7535342E570848330DD86D641963E5_inline(__this, NULL);
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_17;
		memset((&L_17), 0, sizeof(L_17));
		KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB((&L_17), _stringLiteral5B3859B0D165EE865835DCE889C29568CCB924E8, L_16, /*hidden argument*/KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB_RuntimeMethod_var);
		return L_17;
	}
}
// System.Object Microsoft.Extensions.Logging.LogValuesFormatter::FormatArgument(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogValuesFormatter_FormatArgument_m9FCBAF42DAD055555C37C03E89B3F0EDF5149C43 (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B* G_B11_0 = NULL;
	ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B* G_B10_0 = NULL;
	String_t* G_B12_0 = NULL;
	ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B* G_B12_1 = NULL;
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return _stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31;
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_2 = ___value0;
		return L_2;
	}

IL_0013:
	{
		RuntimeObject* L_3 = ___value0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00a8;
		}
	}
	{
		int8_t* L_5 = (int8_t*) alloca(((uintptr_t)((int32_t)512)));
		memset(L_5, 0, ((uintptr_t)((int32_t)512)));
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_inline((&L_6), (void*)(L_5), ((int32_t)256), /*hidden argument*/Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		V_3 = L_6;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_7 = V_3;
		ValueStringBuilder__ctor_mCBA742551CDF16ED07768E79F0A6084ED0BEA0A1((&V_1), L_7, NULL);
		V_2 = (bool)1;
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_8);
		V_4 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0085:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_10 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_11 = V_6;
					if (!L_11)
					{
						goto IL_0099;
					}
				}
				{
					RuntimeObject* L_12 = V_6;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_0099:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007a_1;
			}

IL_0047_1:
			{
				RuntimeObject* L_13 = V_4;
				NullCheck(L_13);
				RuntimeObject* L_14;
				L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				V_5 = L_14;
				bool L_15 = V_2;
				if (L_15)
				{
					goto IL_005f_1;
				}
			}
			{
				ValueStringBuilder_Append_m031799DA9B026147CDC10C2368497AD74DD24645_inline((&V_1), _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
			}

IL_005f_1:
			{
				RuntimeObject* L_16 = V_5;
				G_B10_0 = (&V_1);
				if (L_16)
				{
					G_B11_0 = (&V_1);
					goto IL_006c_1;
				}
			}
			{
				G_B12_0 = _stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31;
				G_B12_1 = G_B10_0;
				goto IL_0073_1;
			}

IL_006c_1:
			{
				RuntimeObject* L_17 = V_5;
				NullCheck(L_17);
				String_t* L_18;
				L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
				G_B12_0 = L_18;
				G_B12_1 = G_B11_0;
			}

IL_0073_1:
			{
				ValueStringBuilder_Append_m031799DA9B026147CDC10C2368497AD74DD24645_inline(G_B12_1, G_B12_0, NULL);
				V_2 = (bool)0;
			}

IL_007a_1:
			{
				RuntimeObject* L_19 = V_4;
				NullCheck(L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				if (L_20)
				{
					goto IL_0047_1;
				}
			}
			{
				goto IL_009a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009a:
	{
		String_t* L_21;
		L_21 = ValueStringBuilder_ToString_mC2FE860196F7D3D8DB3CFF16D697E3755C9D0BF0((&V_1), NULL);
		return L_21;
	}

IL_00a8:
	{
		RuntimeObject* L_22 = ___value0;
		return L_22;
	}
}
// System.Void Microsoft.Extensions.Logging.LogValuesFormatter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogValuesFormatter__cctor_m5600A41BE8E7D1D431E4DAB694EAF6614EB8AA2C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)58));
		((LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_StaticFields*)il2cpp_codegen_static_fields_for(LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_il2cpp_TypeInfo_var))->___FormatDelimiters_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_StaticFields*)il2cpp_codegen_static_fields_for(LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_il2cpp_TypeInfo_var))->___FormatDelimiters_0), (void*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueStringBuilder_Dispose_m1C9559D4231FF854BA4352A2E152781937D22B42_inline (ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->____arrayToReturnToPool_0;
		V_0 = L_0;
		il2cpp_codegen_initobj(__this, sizeof(ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_2;
		L_2 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = V_0;
		NullCheck(L_2);
		VirtualActionInvoker2< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Char>::Return(T[],System.Boolean) */, L_2, L_3, (bool)0);
	}

IL_001d:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueStringBuilder_Append_m031799DA9B026147CDC10C2368497AD74DD24645_inline (ValueStringBuilder_tBC4C10539B2BDD734D0E5FBB7E485845B9B8E35B* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		int32_t L_1 = __this->____pos_2;
		V_0 = L_1;
		String_t* L_2 = ___s0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_4 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_5 = (&__this->____chars_1);
		int32_t L_6;
		L_6 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_5, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		if ((!(((uint32_t)L_4) < ((uint32_t)L_6))))
		{
			goto IL_0040;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_7 = (&__this->____chars_1);
		int32_t L_8 = V_0;
		Il2CppChar* L_9;
		L_9 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&((L_7)->____pointer_0))->value, (L_8), (L_7)->____length_1);
		String_t* L_10 = ___s0;
		NullCheck(L_10);
		Il2CppChar L_11;
		L_11 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, 0, NULL);
		*((int16_t*)L_9) = (int16_t)L_11;
		int32_t L_12 = V_0;
		__this->____pos_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}

IL_0040:
	{
		String_t* L_13 = ___s0;
		ValueStringBuilder_AppendSlow_m3CE172AB40050F46D38B231E10CE868C5535A873(__this, L_13, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline (String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		String_t* L_2 = ___text0;
		NullCheck(L_2);
		Il2CppChar* L_3;
		L_3 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_2, NULL);
		String_t* L_4 = ___text0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_6;
		memset((&L_6), 0, sizeof(L_6));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_6), L_3, L_5, /*hidden argument*/ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EventId_get_Id_m86B112CC64D4CBED6F5319DD779D103663493B3A_inline (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EventId_get_Name_m8BD116C470BA834B6E7392A4D04A34BC1E63F8B6_inline (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* LogValuesFormatter_get_ValueNames_m7BB3F9B56AD516B6ECB699D81D9D17E280A422FB_inline (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->____valueNames_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogValuesFormatter_set_OriginalFormat_m80D85FA1506C051EC3B5AC66852C46D3F466881A_inline (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3COriginalFormatU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COriginalFormatU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryExtensions_AsSpan_m8409F3DA0EF95BF6B3A8741E5C56E729B0A824C6_inline (String_t* ___text0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = ___start1;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___length2;
		if (!L_2)
		{
			goto IL_0010;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)24), NULL);
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3 = V_0;
		return L_3;
	}

IL_001a:
	{
		int32_t L_4 = ___start1;
		String_t* L_5 = ___text0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_7 = ___length2;
		String_t* L_8 = ___text0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		int32_t L_10 = ___start1;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0035;
		}
	}

IL_002e:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)24), NULL);
	}

IL_0035:
	{
		String_t* L_11 = ___text0;
		NullCheck(L_11);
		Il2CppChar* L_12;
		L_12 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_11, NULL);
		int32_t L_13 = ___start1;
		Il2CppChar* L_14;
		L_14 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_12, L_13);
		int32_t L_15 = ___length2;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_16;
		memset((&L_16), 0, sizeof(L_16));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_16), L_14, L_15, /*hidden argument*/ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LogValuesFormatter_get_OriginalFormat_m3BC5A1D8FD7535342E570848330DD86D641963E5_inline (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3COriginalFormatU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___length1;
		int32_t L_3 = (int32_t)__this->____length_1;
		int32_t L_4 = ___start0;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = (ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5)__this->____pointer_0;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___start0;
		Il2CppChar* L_8;
		L_8 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_6, L_7);
		int32_t L_9 = ___length1;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_10), L_8, L_9, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___start0, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = (ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5)__this->____pointer_0;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___start0;
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, L_4);
		int32_t L_6 = (int32_t)__this->____length_1;
		int32_t L_7 = ___start0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_0 = ((ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CSharedU3Ek__BackingField_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (!false)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 10)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_1, NULL);
	}

IL_0016:
	{
		int32_t L_2 = ___length1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_3 = ___pointer0;
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_as_ref<Il2CppChar>((uint8_t*)L_3);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer_0 = L_5;
		int32_t L_6 = ___length1;
		__this->____length_1 = L_6;
		return;
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
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___ptr0;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___ptr0;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
