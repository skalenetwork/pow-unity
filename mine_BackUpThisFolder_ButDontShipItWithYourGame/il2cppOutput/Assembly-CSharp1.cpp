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

// System.Collections.Generic.Dictionary`2<System.String,BNSharp.MPrime>
struct Dictionary_2_t4F3553B426ADB76149E965153F34AB41F850B2DA;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// BNSharp.BN
struct BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77;
// BNSharp.BNDivResult
struct BNDivResult_tA7E07F06484FBF48421A82985B34F05CBCDEA5BB;
// BNSharp.BNException
struct BNException_t36A4C4E59D0A80EC5EC2EDBE01ABD7F21EF6A3AE;
// BNSharp.BNExtendedGCDResult
struct BNExtendedGCDResult_t09BB1234B171983D8F1033641D0C6126EB181290;
// System.Exception
struct Exception_t;
// BNSharp.FFTM
struct FFTM_tEBD55B9A3A626BEF6B8313CCD63B530A3A397E52;
// BNSharp.Functions
struct Functions_t52DC9CBAD09943E10BAF8A191DBDC94329A6B54C;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// BNSharp.K256
struct K256_tBFE212AB79DB30EB5C569FCC0E73C5F77FF564D5;
// BNSharp.MPrime
struct MPrime_t2093D713ACC42277001478C1870901F98E6DBFDC;
// BNSharp.Mont
struct Mont_t8926333F330B452B1E3CE8B74FC11569C15F296D;
// BNSharp.P192
struct P192_t61D199D181544710D5C227E222F8E63A67956085;
// BNSharp.P224
struct P224_tBD18960B955B2CA4FC41B9B6DCEA46F78ED86A5A;
// BNSharp.P25519
struct P25519_t572A40235290634375C483BC155BA16ABE68DA13;
// BNSharp.Red
struct Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BNException_t36A4C4E59D0A80EC5EC2EDBE01ABD7F21EF6A3AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BNU5BU5D_t2A377A1EAB36E79A9762DE4FCE7C59852EC6B303_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0503FBD8149A36243AD39D4EA4BB665808AE1636;
IL2CPP_EXTERN_C String_t* _stringLiteral1777E04081A95934FC05C77E36A1FC5D54E41211;
IL2CPP_EXTERN_C String_t* _stringLiteral32BB243ED13DA8E261D1205808A9A827E9B54758;
IL2CPP_EXTERN_C String_t* _stringLiteral390E907F106DD304688267AE7076BCE46596F5A7;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral454BDE7E23EE3B7B6F216B675E6E0C6FDB3D55C3;
IL2CPP_EXTERN_C String_t* _stringLiteral71C7D3BB3AE871CF851795E7E9313741A453F5A2;
IL2CPP_EXTERN_C String_t* _stringLiteral79771932CCC3A04ECB752A1DEDC5A407B4326FC7;
IL2CPP_EXTERN_C String_t* _stringLiteral91DF309DA88B9454DFBC07AF84C4914C819841F5;
IL2CPP_EXTERN_C String_t* _stringLiteralB477EB18904C184B2CE838DAB8AD4613718A329B;
IL2CPP_EXTERN_C String_t* _stringLiteralBB556525266B8688575F8C8D1C91986E2597375F;
IL2CPP_EXTERN_C String_t* _stringLiteralCA6E871A9F95571E0661C587B0F0FE3675ED3511;
IL2CPP_EXTERN_C String_t* _stringLiteralCB700205FF65F52AA739D18D7B8B0C06536C7C99;
IL2CPP_EXTERN_C String_t* _stringLiteralEF3A9701F477BEEA65598679690E8FFAE22F67DB;
IL2CPP_EXTERN_C String_t* _stringLiteralF4C01072D904F5BCDAFBFCD23B0C42F43EDD792E;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FFTM_Convert13b_mECFF26EE43FE8D905BA13ECC33A470BCC57EFFD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Functions_Assert_m95CB7EA6CEE9D7C55213C48C439F6FC7920CE6ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NumberExtensions_DecimalToArbitrarySystem_m0B1F6EE87EF9F0DD26C6198AA5D1EF44EBA76075_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BNU5BU5D_t2A377A1EAB36E79A9762DE4FCE7C59852EC6B303;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// BNSharp.BN
struct BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77  : public RuntimeObject
{
	// System.Int32 BNSharp.BN::Negative
	int32_t ___Negative_1;
	// System.Int32[] BNSharp.BN::words
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___words_2;
	// System.Int32 BNSharp.BN::Length
	int32_t ___Length_3;
	// BNSharp.Red BNSharp.BN::red
	Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* ___red_4;
	// System.String[] BNSharp.BN::zeros
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___zeros_5;
	// System.Int32[] BNSharp.BN::groupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___groupSizes_6;
	// System.Int32[] BNSharp.BN::groupBases
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___groupBases_7;
};

struct BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77_StaticFields
{
	// System.Int32 BNSharp.BN::wordSize
	int32_t ___wordSize_0;
	// System.Collections.Generic.Dictionary`2<System.String,BNSharp.MPrime> BNSharp.BN::primes
	Dictionary_2_t4F3553B426ADB76149E965153F34AB41F850B2DA* ___primes_8;
};

// BNSharp.BNDivResult
struct BNDivResult_tA7E07F06484FBF48421A82985B34F05CBCDEA5BB  : public RuntimeObject
{
	// BNSharp.BN BNSharp.BNDivResult::<Div>k__BackingField
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___U3CDivU3Ek__BackingField_0;
	// BNSharp.BN BNSharp.BNDivResult::<Mod>k__BackingField
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___U3CModU3Ek__BackingField_1;
};

// BNSharp.BNExtendedGCDResult
struct BNExtendedGCDResult_t09BB1234B171983D8F1033641D0C6126EB181290  : public RuntimeObject
{
	// BNSharp.BN BNSharp.BNExtendedGCDResult::<A>k__BackingField
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___U3CAU3Ek__BackingField_0;
	// BNSharp.BN BNSharp.BNExtendedGCDResult::<B>k__BackingField
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___U3CBU3Ek__BackingField_1;
	// BNSharp.BN BNSharp.BNExtendedGCDResult::<Gcd>k__BackingField
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___U3CGcdU3Ek__BackingField_2;
};

// BNSharp.FFTM
struct FFTM_tEBD55B9A3A626BEF6B8313CCD63B530A3A397E52  : public RuntimeObject
{
	// System.Int32 BNSharp.FFTM::x
	int32_t ___x_0;
	// System.Int32 BNSharp.FFTM::y
	int32_t ___y_1;
};

// BNSharp.Functions
struct Functions_t52DC9CBAD09943E10BAF8A191DBDC94329A6B54C  : public RuntimeObject
{
};

// BNSharp.MPrime
struct MPrime_t2093D713ACC42277001478C1870901F98E6DBFDC  : public RuntimeObject
{
	// System.String BNSharp.MPrime::name
	String_t* ___name_0;
	// BNSharp.BN BNSharp.MPrime::p
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___p_1;
	// System.Int32 BNSharp.MPrime::n
	int32_t ___n_2;
	// BNSharp.BN BNSharp.MPrime::k
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___k_3;
	// BNSharp.BN BNSharp.MPrime::tmp
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___tmp_4;
};

// BNSharp.Extensions.NumberExtensions
struct NumberExtensions_t86B7E78A1AFEF8E3E527A90CDD5CF6FDD95DCA85  : public RuntimeObject
{
};

// BNSharp.Red
struct Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92  : public RuntimeObject
{
	// BNSharp.BN BNSharp.Red::m
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___m_0;
	// BNSharp.MPrime BNSharp.Red::prime
	MPrime_t2093D713ACC42277001478C1870901F98E6DBFDC* ___prime_1;
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

// BNSharp.K256
struct K256_tBFE212AB79DB30EB5C569FCC0E73C5F77FF564D5  : public MPrime_t2093D713ACC42277001478C1870901F98E6DBFDC
{
};

// BNSharp.Mont
struct Mont_t8926333F330B452B1E3CE8B74FC11569C15F296D  : public Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92
{
	// System.Int32 BNSharp.Mont::shift
	int32_t ___shift_2;
	// BNSharp.BN BNSharp.Mont::r
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___r_3;
	// BNSharp.BN BNSharp.Mont::r2
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___r2_4;
	// BNSharp.BN BNSharp.Mont::rinv
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___rinv_5;
	// BNSharp.BN BNSharp.Mont::minv
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___minv_6;
};

// BNSharp.P192
struct P192_t61D199D181544710D5C227E222F8E63A67956085  : public MPrime_t2093D713ACC42277001478C1870901F98E6DBFDC
{
};

// BNSharp.P224
struct P224_tBD18960B955B2CA4FC41B9B6DCEA46F78ED86A5A  : public MPrime_t2093D713ACC42277001478C1870901F98E6DBFDC
{
};

// BNSharp.P25519
struct P25519_t572A40235290634375C483BC155BA16ABE68DA13  : public MPrime_t2093D713ACC42277001478C1870901F98E6DBFDC
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=148
struct __StaticArrayInitTypeSizeU3D148_t07F1309237F40E25A8D3B0456032D472184E5A6E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D148_t07F1309237F40E25A8D3B0456032D472184E5A6E__padding[148];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=148 <PrivateImplementationDetails>::414DA3C58588998FAEDEC09B1F11FF555E8C700E3D79F5255F3E880A7FDE7E78
	__StaticArrayInitTypeSizeU3D148_t07F1309237F40E25A8D3B0456032D472184E5A6E ___414DA3C58588998FAEDEC09B1F11FF555E8C700E3D79F5255F3E880A7FDE7E78_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=148 <PrivateImplementationDetails>::52527BCEDB25E0C925E6B69C76EB06DDF6D7633D57771FFC295EB643CC59FACE
	__StaticArrayInitTypeSizeU3D148_t07F1309237F40E25A8D3B0456032D472184E5A6E ___52527BCEDB25E0C925E6B69C76EB06DDF6D7633D57771FFC295EB643CC59FACE_1;
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

// BNSharp.BNException
struct BNException_t36A4C4E59D0A80EC5EC2EDBE01ABD7F21EF6A3AE  : public Exception_t
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// BNSharp.BN[]
struct BNU5BU5D_t2A377A1EAB36E79A9762DE4FCE7C59852EC6B303  : public RuntimeArray
{
	ALIGN_FIELD (8) BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* m_Items[1];

	inline BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* value)
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


// System.Void System.Array::Resize<System.Int32>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 BNSharp.BN::_countBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BN__countBits_mB264CC01EC1C782ED38824FB6E0B1F5C8BCCC998 (int32_t ___w0, const RuntimeMethod* method) ;
// System.Int32 BNSharp.FFTM::RevBin(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FFTM_RevBin_m1CA3029AEE184422458ACEB9C0F55AA9DE6499AB (FFTM_tEBD55B9A3A626BEF6B8313CCD63B530A3A397E52* __this, int32_t ___x0, int32_t ___l1, int32_t ___N2, const RuntimeMethod* method) ;
// System.Void BNSharp.FFTM::Permute(System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FFTM_Permute_mB63825C419AFB5A460965E1881E55B4963FA51F8 (FFTM_tEBD55B9A3A626BEF6B8313CCD63B530A3A397E52* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___rbt0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___rws1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___iws2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___rtws3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itws4, int32_t ___N5, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void BNSharp.BNException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BNException__ctor_mE0AFA200BE3CE2718CD7D5D7E7E48146B9FB47D4 (BNException_t36A4C4E59D0A80EC5EC2EDBE01ABD7F21EF6A3AE* __this, const RuntimeMethod* method) ;
// System.Int32 BNSharp.FFTM::GuessLen13b(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FFTM_GuessLen13b_m364C9AD851EBC045E5A9979DBD58ABB407FFCC77 (FFTM_tEBD55B9A3A626BEF6B8313CCD63B530A3A397E52* __this, int32_t ___n0, int32_t ___m1, const RuntimeMethod* method) ;
// System.Int32[] BNSharp.FFTM::MakeRBT(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* FFTM_MakeRBT_m3F4485A97117CD9444C1E8BBF1245DAF51AB2F5E (FFTM_tEBD55B9A3A626BEF6B8313CCD63B530A3A397E52* __this, int32_t ___N0, const RuntimeMethod* method) ;
// System.Int32[] BNSharp.FFTM::Stub(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* FFTM_Stub_m12D257DA42C84AE5293A533E77673D3FDA5CC244 (FFTM_tEBD55B9A3A626BEF6B8313CCD63B530A3A397E52* __this, int32_t ___N0, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Void BNSharp.FFTM::Convert13b(System.Int32[],System.Int32,System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FFTM_Convert13b_mECFF26EE43FE8D905BA13ECC33A470BCC57EFFD6 (FFTM_tEBD55B9A3A626BEF6B8313CCD63B530A3A397E52* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ws0, int32_t ___len1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___rws2, int32_t ___N3, const RuntimeMethod* method) ;
// System.Void BNSharp.FFTM::Transform(System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FFTM_Transform_mB55384E5BA55D4CD70EA88E1B5A0112A8EDDD648 (FFTM_tEBD55B9A3A626BEF6B8313CCD63B530A3A397E52* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___rws0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___iws1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___rtws2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itws3, int32_t ___N4, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___rbt5, const RuntimeMethod* method) ;
// System.Void BNSharp.FFTM::Conjugate(System.Int32[],System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FFTM_Conjugate_m865E1824BBB2BBE2523878C5332623E86834570A (FFTM_tEBD55B9A3A626BEF6B8313CCD63B530A3A397E52* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___rws0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___iws1, int32_t ___N2, const RuntimeMethod* method) ;
// System.Int32[] BNSharp.FFTM::Normalize13b(System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* FFTM_Normalize13b_m1D5E5F7ADEEB2CB77866AD46611368245F25877F (FFTM_tEBD55B9A3A626BEF6B8313CCD63B530A3A397E52* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ws0, int32_t ___N1, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.BN::_strip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BN__strip_mE07F8F68F583B6071A9A27C2AFCBDED5B4BF67D0 (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, const RuntimeMethod* method) ;
// System.Void BNSharp.BNException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BNException__ctor_mBB2AF39D4283D67E474B6C0EDCC2130FE2D6A294 (BNException_t36A4C4E59D0A80EC5EC2EDBE01ABD7F21EF6A3AE* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void BNSharp.MPrime::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MPrime__ctor_m222E288C7617F08EA777D100AEEEF431CEE11C32 (MPrime_t2093D713ACC42277001478C1870901F98E6DBFDC* __this, String_t* ___name0, String_t* ___p1, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Int32>(T[]&,System.Int32)
inline void Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**, int32_t, const RuntimeMethod*))Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_gshared)(___array0, ___newSize1, method);
}
// System.Void BNSharp.Red::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Red__ctor_m218918067F65C97668A3A322BB21F79FD23E1A59 (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* __this, String_t* ___m0, const RuntimeMethod* method) ;
// System.Void BNSharp.Mont::_init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mont__init_m44DB37E6A9357B6BD728D471B33C949BC2CBF6A3 (Mont_t8926333F330B452B1E3CE8B74FC11569C15F296D* __this, const RuntimeMethod* method) ;
// System.Void BNSharp.Red::.ctor(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Red__ctor_m2755B29886F877F3AE2144AE41C366640A977920 (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___m0, const RuntimeMethod* method) ;
// System.Int32 BNSharp.BN::BitLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BN_BitLength_m5325F70FE6E18996F0D3AE4292D01047500C8B47 (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, const RuntimeMethod* method) ;
// System.Void BNSharp.BN::.ctor(System.Int64,BNSharp.Endian)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BN__ctor_m38F25106CEE7C5D24CF27D1CE95EE40825412311 (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, int64_t ___number0, int32_t ___endian1, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.BN::Iushln(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BN_Iushln_mFE36C60B6A1EF5B0343BFB74C60708AE72ED261B (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, int32_t ___bits0, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.BN::Sqr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BN_Sqr_mA6C18F3C459A48C02688B0D2457D655347F50D70 (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.Red::Imod(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* Red_Imod_m55AEA08A22BDA07C213F0B5674E402A0A82E6689 (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___a0, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.BN::_invmp(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BN__invmp_mE5B9A9FBB438DA1979BFA43F452DD7B98993F2C8 (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___p0, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.BN::Mul(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BN_Mul_m0023E9CB6AC95308A99037F602EE558102E08C1B (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___num0, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.BN::Isubn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BN_Isubn_mFF564F02BDF7B48A53F5A77597143F7DE052C4C3 (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, int32_t ___num0, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.BN::Div(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BN_Div_m7F3E7178DB29766E4C35A198AEC20521F9A57214 (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___num0, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.BN::Umod(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BN_Umod_m6F0A64F184AB459A8CB6B2D8BF2E63045E47CFDC (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___num0, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.BN::Sub(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BN_Sub_m64C53EBCF9D4CD2E3E67E207999B3D6E45984CC4 (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___num0, const RuntimeMethod* method) ;
// System.Boolean BNSharp.BN::IsZero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BN_IsZero_mC595B7C6B18232EE575AD6B2FFCB4BA6FA24F0BD (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.BN::Imul(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BN_Imul_m372373AB07471C75221F9FEB3BF0595E657EF79B (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___num0, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.BN::Maskn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BN_Maskn_m1AFD33E3BCF8070C7A6BCB2AA2053284EF143F2E (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, int32_t ___bits0, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.BN::Imaskn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BN_Imaskn_mDFD9F9095567507476B6C54843DC6F2E5202590E (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, int32_t ___bits0, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.BN::Isub(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BN_Isub_m1F255A2CD6B0C5E900C52BB0AABA7B06393A4DC2 (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___num0, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.BN::Iushrn(System.Int32,System.Int32,BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BN_Iushrn_m550F3BAC995BE733DBED6DDBDF2E76706E26E415 (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, int32_t ___bits0, int32_t ___hint1, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___extended2, const RuntimeMethod* method) ;
// System.Int32 BNSharp.BN::Cmp(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BN_Cmp_m8BCA5B0A1D731A7FC021CA390B3D6E67C96D89CC (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___num0, const RuntimeMethod* method) ;
// System.Int32 BNSharp.BN::Cmpn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BN_Cmpn_mDD8A9BE43B0270F09C097C5E555AD71CD08391A1 (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, int32_t ___num0, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.BN::Iadd(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BN_Iadd_m1FEA663378105EF1E2F9A3487C87AF5B24D01F58 (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___num0, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.BN::_forceRed(BNSharp.Red)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BN__forceRed_mAA398E9058AE5D8CD55B97F2583F21D9A3223DE6 (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* ___ctx0, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.BN::Ushln(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BN_Ushln_mDC535D767894D4E486EEDD65A31504F74B9BA841 (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, int32_t ___bits0, const RuntimeMethod* method) ;
// System.Void BNSharp.BN::.ctor(System.String,System.Int32,BNSharp.Endian)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BN__ctor_mBD1B5FE4208512195FF431CC3B53E9B4A23D3F47 (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, String_t* ___number0, int32_t ___base1, int32_t ___endian2, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.MPrime::_tmp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* MPrime__tmp_m203639CBE2D542353BCDBBBC7C3B14A7B9614CB8 (MPrime_t2093D713ACC42277001478C1870901F98E6DBFDC* __this, const RuntimeMethod* method) ;
// System.Void BNSharp.BN::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BN__ctor_mF3631A7F840A00614637CEE881D58F8AA5B9C13C (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, const RuntimeMethod* method) ;
// System.Int32 BNSharp.BN::Ucmp(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BN_Ucmp_mCB9B89E2E5FEF0423DA7B4F5C62D2C4DC1EC7127 (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___num0, const RuntimeMethod* method) ;
// BNSharp.MPrime BNSharp.BN::Prime(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MPrime_t2093D713ACC42277001478C1870901F98E6DBFDC* BN_Prime_m6B0B585BC5A45BA93C908F4CBAF4A4BD9A213FF2 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean BNSharp.BN::Gtn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BN_Gtn_m64D348AB59B17D602780232AECB509A8B6ED2948 (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, int32_t ___num0, const RuntimeMethod* method) ;
// System.Void BNSharp.Functions::Assert(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Functions_Assert_m95CB7EA6CEE9D7C55213C48C439F6FC7920CE6ED (bool ___val0, String_t* ___msg1, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.MPrime::Ireduce(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* MPrime_Ireduce_m55D9354BCE24122143C4AE3D95AC6BA2991F9E93 (MPrime_t2093D713ACC42277001478C1870901F98E6DBFDC* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___num0, const RuntimeMethod* method) ;
// System.Void BNSharp.BN::move(BNSharp.BN,BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BN_move_m2C589B0068408A87B30CC5F42B5F7A9B037400E1 (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___dest0, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___src1, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.BN::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BN_Clone_m913FCCDDC548D159D930E6479D81B1556ADE1FCF (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, const RuntimeMethod* method) ;
// System.Void BNSharp.Red::_verify2(BNSharp.BN,BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Red__verify2_m3A66393E0DBD4F2121768BA453DE5F11465C38C6 (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___a0, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___b1, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.BN::Add(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BN_Add_m0B4E9906F7B7201C011194D2139A200A3CB786DB (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___num0, const RuntimeMethod* method) ;
// System.Void BNSharp.Red::_verify1(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Red__verify1_m22BEB03C17EBA703FC7B48D6DA408A39F5C65B59 (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___a0, const RuntimeMethod* method) ;
// System.Int32 BNSharp.BN::Andln(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BN_Andln_m1623B898A986B7F8C47EDFCBD5B53CE0A928221C (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, int32_t ___num0, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.Red::Pow(BNSharp.BN,BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* Red_Pow_mA8E016BDF91DF31BE2EDA30ED8C47E0067A242A9 (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___a0, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___num1, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.BN::Subn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BN_Subn_mE7739B69F76F65EEB62D58A857060B5D0F50B8A2 (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, int32_t ___num0, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.BN::ToRed(BNSharp.Red)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BN_ToRed_m53B5883B70A58A7176DF981243ECDAF74C25F7DC (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* ___ctx0, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.BN::RedNeg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BN_RedNeg_mFA8232EC20D54FA9ECB637CB9116EA9F28FE0457 (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.BN::RedIAdd(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BN_RedIAdd_mF89C5062ACD47D2B1456495A697DB599F9DB8A93 (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___num0, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.BN::Addn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BN_Addn_m8A1ADD3C2DACB93607F93939BBA2AC95C4F26D52 (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, int32_t ___num0, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.BN::RedSqr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BN_RedSqr_mEA995883F51E4268F48DB90D8242F74214631429 (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.BN::RedMul(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BN_RedMul_m77998DB32317D6A4267A2166B392FB552AB0B7C2 (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___num0, const RuntimeMethod* method) ;
// BNSharp.BN BNSharp.Red::Sqr(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* Red_Sqr_m3D4524D1666D7065F29F33B4AFE3E6F0F285038A (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___a0, const RuntimeMethod* method) ;
// System.String BNSharp.Extensions.NumberExtensions::DecimalToArbitrarySystem(System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NumberExtensions_DecimalToArbitrarySystem_m0B1F6EE87EF9F0DD26C6198AA5D1EF44EBA76075 (int64_t ___decimalNumber0, int32_t ___radix1, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method) ;
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2 (String_t* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// BNSharp.BN BNSharp.BNDivResult::get_Div()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BNDivResult_get_Div_mF49217AE99480CFB5C43EB22FB177AB2D8CE7C86 (BNDivResult_tA7E07F06484FBF48421A82985B34F05CBCDEA5BB* __this, const RuntimeMethod* method) 
{
	{
		// public BN? Div { get; set; }
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = __this->___U3CDivU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void BNSharp.BNDivResult::set_Div(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BNDivResult_set_Div_mE697CD504AF1FC87171E794791108C1A33A8503C (BNDivResult_tA7E07F06484FBF48421A82985B34F05CBCDEA5BB* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___value0, const RuntimeMethod* method) 
{
	{
		// public BN? Div { get; set; }
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___value0;
		__this->___U3CDivU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDivU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// BNSharp.BN BNSharp.BNDivResult::get_Mod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BNDivResult_get_Mod_mFBE854B1DCB77FAAEA723188635CBCD970232D1A (BNDivResult_tA7E07F06484FBF48421A82985B34F05CBCDEA5BB* __this, const RuntimeMethod* method) 
{
	{
		// public BN? Mod { get; set; }
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = __this->___U3CModU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void BNSharp.BNDivResult::set_Mod(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BNDivResult_set_Mod_m844F49FAC059660A414BE489AF04F5B1E96E0F91 (BNDivResult_tA7E07F06484FBF48421A82985B34F05CBCDEA5BB* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___value0, const RuntimeMethod* method) 
{
	{
		// public BN? Mod { get; set; }
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___value0;
		__this->___U3CModU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CModU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void BNSharp.BNDivResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BNDivResult__ctor_m3F6979A3459A94381577008F848ECE1029069CA5 (BNDivResult_tA7E07F06484FBF48421A82985B34F05CBCDEA5BB* __this, const RuntimeMethod* method) 
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
// System.Void BNSharp.BNException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BNException__ctor_mE0AFA200BE3CE2718CD7D5D7E7E48146B9FB47D4 (BNException_t36A4C4E59D0A80EC5EC2EDBE01ABD7F21EF6A3AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public BNException() : base() { }
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// public BNException() : base() { }
		return;
	}
}
// System.Void BNSharp.BNException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BNException__ctor_mBB2AF39D4283D67E474B6C0EDCC2130FE2D6A294 (BNException_t36A4C4E59D0A80EC5EC2EDBE01ABD7F21EF6A3AE* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public BNException(string message) : base(message) { }
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// public BNException(string message) : base(message) { }
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
// BNSharp.BN BNSharp.BNExtendedGCDResult::get_A()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BNExtendedGCDResult_get_A_mCF836BC90C554599B66D5C0C926B72A02EDFB13F (BNExtendedGCDResult_t09BB1234B171983D8F1033641D0C6126EB181290* __this, const RuntimeMethod* method) 
{
	{
		// public BN? A { get; set; }
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = __this->___U3CAU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void BNSharp.BNExtendedGCDResult::set_A(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BNExtendedGCDResult_set_A_m04B24B67DBA680F25D6D158F0CC634245D1791DF (BNExtendedGCDResult_t09BB1234B171983D8F1033641D0C6126EB181290* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___value0, const RuntimeMethod* method) 
{
	{
		// public BN? A { get; set; }
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___value0;
		__this->___U3CAU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// BNSharp.BN BNSharp.BNExtendedGCDResult::get_B()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BNExtendedGCDResult_get_B_m92C4A3976727AA7E5E16801451837DA891BFFD17 (BNExtendedGCDResult_t09BB1234B171983D8F1033641D0C6126EB181290* __this, const RuntimeMethod* method) 
{
	{
		// public BN? B { get; set; }
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = __this->___U3CBU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void BNSharp.BNExtendedGCDResult::set_B(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BNExtendedGCDResult_set_B_m9BEE4D5B33EE6F7FE74C4850C60969C8E1111639 (BNExtendedGCDResult_t09BB1234B171983D8F1033641D0C6126EB181290* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___value0, const RuntimeMethod* method) 
{
	{
		// public BN? B { get; set; }
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___value0;
		__this->___U3CBU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// BNSharp.BN BNSharp.BNExtendedGCDResult::get_Gcd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* BNExtendedGCDResult_get_Gcd_m411582EA81516A80B60E66FBF4823312ED1752C5 (BNExtendedGCDResult_t09BB1234B171983D8F1033641D0C6126EB181290* __this, const RuntimeMethod* method) 
{
	{
		// public BN? Gcd { get; set; }
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = __this->___U3CGcdU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void BNSharp.BNExtendedGCDResult::set_Gcd(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BNExtendedGCDResult_set_Gcd_m495BD0754A5EDAF709E32ADC890B8BD6FC12728C (BNExtendedGCDResult_t09BB1234B171983D8F1033641D0C6126EB181290* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___value0, const RuntimeMethod* method) 
{
	{
		// public BN? Gcd { get; set; }
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___value0;
		__this->___U3CGcdU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGcdU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void BNSharp.BNExtendedGCDResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BNExtendedGCDResult__ctor_m3D2638418A6F34DF01D8F6602A440FBFA20DBC63 (BNExtendedGCDResult_t09BB1234B171983D8F1033641D0C6126EB181290* __this, const RuntimeMethod* method) 
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
// System.Void BNSharp.FFTM::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FFTM__ctor_mEDFAF0C82E795C4EC7502A18EEFEE82E45BFD1F7 (FFTM_tEBD55B9A3A626BEF6B8313CCD63B530A3A397E52* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		// public FFTM(int x, int y)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.x = x;
		int32_t L_0 = ___x0;
		__this->___x_0 = L_0;
		// this.y = y;
		int32_t L_1 = ___y1;
		__this->___y_1 = L_1;
		// }
		return;
	}
}
// System.Int32[] BNSharp.FFTM::MakeRBT(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* FFTM_MakeRBT_m3F4485A97117CD9444C1E8BBF1245DAF51AB2F5E (FFTM_tEBD55B9A3A626BEF6B8313CCD63B530A3A397E52* __this, int32_t ___N0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// var t = new int[N];
		int32_t L_0 = ___N0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// var l = BN._countBits(N) - 1;
		int32_t L_2 = ___N0;
		il2cpp_codegen_runtime_class_init_inline(BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = BN__countBits_mB264CC01EC1C782ED38824FB6E0B1F5C8BCCC998(L_2, NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		// for (var i = 0; i < N; i++)
		V_2 = 0;
		goto IL_0024;
	}

IL_0014:
	{
		// t[i] = this.RevBin(i, l, N);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		int32_t L_5 = V_2;
		int32_t L_6 = V_2;
		int32_t L_7 = V_1;
		int32_t L_8 = ___N0;
		int32_t L_9;
		L_9 = FFTM_RevBin_m1CA3029AEE184422458ACEB9C0F55AA9DE6499AB(__this, L_6, L_7, L_8, NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (int32_t)L_9);
		// for (var i = 0; i < N; i++)
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0024:
	{
		// for (var i = 0; i < N; i++)
		int32_t L_11 = V_2;
		int32_t L_12 = ___N0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0014;
		}
	}
	{
		// return t;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_0;
		return L_13;
	}
}
// System.Int32 BNSharp.FFTM::RevBin(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FFTM_RevBin_m1CA3029AEE184422458ACEB9C0F55AA9DE6499AB (FFTM_tEBD55B9A3A626BEF6B8313CCD63B530A3A397E52* __this, int32_t ___x0, int32_t ___l1, int32_t ___N2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (x == 0 || x == N - 1) return x;
		int32_t L_0 = ___x0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___x0;
		int32_t L_2 = ___N2;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_2, 1))))))
		{
			goto IL_000b;
		}
	}

IL_0009:
	{
		// if (x == 0 || x == N - 1) return x;
		int32_t L_3 = ___x0;
		return L_3;
	}

IL_000b:
	{
		// var rb = 0;
		V_0 = 0;
		// for (var i = 0; i < l; i++)
		V_1 = 0;
		goto IL_0029;
	}

IL_0011:
	{
		// rb |= (x & 1) << (l - i - 1);
		int32_t L_4 = V_0;
		int32_t L_5 = ___x0;
		int32_t L_6 = ___l1;
		int32_t L_7 = V_1;
		V_0 = ((int32_t)(L_4|((int32_t)(((int32_t)(L_5&1))<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_6, L_7)), 1))&((int32_t)31)))))));
		// x >>= 1;
		int32_t L_8 = ___x0;
		___x0 = ((int32_t)(L_8>>1));
		// for (var i = 0; i < l; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0029:
	{
		// for (var i = 0; i < l; i++)
		int32_t L_10 = V_1;
		int32_t L_11 = ___l1;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0011;
		}
	}
	{
		// return rb;
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Void BNSharp.FFTM::Permute(System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FFTM_Permute_mB63825C419AFB5A460965E1881E55B4963FA51F8 (FFTM_tEBD55B9A3A626BEF6B8313CCD63B530A3A397E52* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___rbt0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___rws1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___iws2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___rtws3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itws4, int32_t ___N5, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (var i = 0; i < N; i++)
		V_0 = 0;
		goto IL_001a;
	}

IL_0004:
	{
		// rtws[i] = rws[rbt[i]];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___rtws3;
		int32_t L_1 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___rws1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___rbt0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (int32_t)L_8);
		// itws[i] = iws[rbt[i]];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ___itws4;
		int32_t L_10 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ___iws2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___rbt0;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_11);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (int32_t)L_17);
		// for (var i = 0; i < N; i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_001a:
	{
		// for (var i = 0; i < N; i++)
		int32_t L_19 = V_0;
		int32_t L_20 = ___N5;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BNSharp.FFTM::Transform(System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FFTM_Transform_mB55384E5BA55D4CD70EA88E1B5A0112A8EDDD648 (FFTM_tEBD55B9A3A626BEF6B8313CCD63B530A3A397E52* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___rws0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___iws1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___rtws2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itws3, int32_t ___N4, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___rbt5, const RuntimeMethod* method) 
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
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	{
		// this.Permute(rbt, rws, iws, rtws, itws, N);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___rbt5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___rws0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___iws1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___rtws2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___itws3;
		int32_t L_5 = ___N4;
		FFTM_Permute_mB63825C419AFB5A460965E1881E55B4963FA51F8(__this, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		// for (var s = 1; s < N; s <<= 1)
		V_0 = 1;
		goto IL_0114;
	}

IL_0016:
	{
		// var l = s << 1;
		int32_t L_6 = V_0;
		V_1 = ((int32_t)(L_6<<1));
		// var rtwdf = (int)Math.Cos(2 * Math.PI / l);
		int32_t L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_8;
		L_8 = cos(((double)((6.2831853071795862)/((double)L_7))));
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_8);
		// var itwdf = (int)Math.Sin(2 * Math.PI / l);
		int32_t L_9 = V_1;
		double L_10;
		L_10 = sin(((double)((6.2831853071795862)/((double)L_9))));
		V_3 = il2cpp_codegen_cast_double_to_int<int32_t>(L_10);
		// for (var p = 0; p < N; p += l)
		V_4 = 0;
		goto IL_0107;
	}

IL_0048:
	{
		// var rtwdf_ = rtwdf;
		int32_t L_11 = V_2;
		V_5 = L_11;
		// var itwdf_ = itwdf;
		int32_t L_12 = V_3;
		V_6 = L_12;
		// for (var j = 0; j < s; j++)
		V_7 = 0;
		goto IL_00f9;
	}

IL_0056:
	{
		// var re = rtws[p + j];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = ___rtws2;
		int32_t L_14 = V_4;
		int32_t L_15 = V_7;
		NullCheck(L_13);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_14, L_15));
		int32_t L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_8 = L_17;
		// var ie = itws[p + j];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ___itws3;
		int32_t L_19 = V_4;
		int32_t L_20 = V_7;
		NullCheck(L_18);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(L_19, L_20));
		int32_t L_22 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_9 = L_22;
		// var ro = rtws[p + j + s];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = ___rtws2;
		int32_t L_24 = V_4;
		int32_t L_25 = V_7;
		int32_t L_26 = V_0;
		NullCheck(L_23);
		int32_t L_27 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_24, L_25)), L_26));
		int32_t L_28 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_10 = L_28;
		// var io = itws[p + j + s];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = ___itws3;
		int32_t L_30 = V_4;
		int32_t L_31 = V_7;
		int32_t L_32 = V_0;
		NullCheck(L_29);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_30, L_31)), L_32));
		int32_t L_34 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_11 = L_34;
		// var rx = rtwdf_ * ro - itwdf_ * io;
		int32_t L_35 = V_5;
		int32_t L_36 = V_10;
		int32_t L_37 = V_6;
		int32_t L_38 = V_11;
		V_12 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_35, L_36)), ((int32_t)il2cpp_codegen_multiply(L_37, L_38))));
		// io = rtwdf_ * io + itwdf_ * ro;
		int32_t L_39 = V_5;
		int32_t L_40 = V_11;
		int32_t L_41 = V_6;
		int32_t L_42 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_39, L_40)), ((int32_t)il2cpp_codegen_multiply(L_41, L_42))));
		// ro = rx;
		int32_t L_43 = V_12;
		V_10 = L_43;
		// rtws[p + j] = re + ro;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = ___rtws2;
		int32_t L_45 = V_4;
		int32_t L_46 = V_7;
		int32_t L_47 = V_8;
		int32_t L_48 = V_10;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_45, L_46))), (int32_t)((int32_t)il2cpp_codegen_add(L_47, L_48)));
		// itws[p + j] = ie + io;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = ___itws3;
		int32_t L_50 = V_4;
		int32_t L_51 = V_7;
		int32_t L_52 = V_9;
		int32_t L_53 = V_11;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_50, L_51))), (int32_t)((int32_t)il2cpp_codegen_add(L_52, L_53)));
		// rtws[p + j + s] = re - ro;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = ___rtws2;
		int32_t L_55 = V_4;
		int32_t L_56 = V_7;
		int32_t L_57 = V_0;
		int32_t L_58 = V_8;
		int32_t L_59 = V_10;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_55, L_56)), L_57))), (int32_t)((int32_t)il2cpp_codegen_subtract(L_58, L_59)));
		// itws[p + j + s] = ie - io;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = ___itws3;
		int32_t L_61 = V_4;
		int32_t L_62 = V_7;
		int32_t L_63 = V_0;
		int32_t L_64 = V_9;
		int32_t L_65 = V_11;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_61, L_62)), L_63))), (int32_t)((int32_t)il2cpp_codegen_subtract(L_64, L_65)));
		// if (j != l)
		int32_t L_66 = V_7;
		int32_t L_67 = V_1;
		if ((((int32_t)L_66) == ((int32_t)L_67)))
		{
			goto IL_00f3;
		}
	}
	{
		// rx = rtwdf * rtwdf_ - itwdf * itwdf_;
		int32_t L_68 = V_2;
		int32_t L_69 = V_5;
		int32_t L_70 = V_3;
		int32_t L_71 = V_6;
		V_12 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_68, L_69)), ((int32_t)il2cpp_codegen_multiply(L_70, L_71))));
		// itwdf_ = rtwdf * itwdf_ + itwdf * rtwdf_;
		int32_t L_72 = V_2;
		int32_t L_73 = V_6;
		int32_t L_74 = V_3;
		int32_t L_75 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_72, L_73)), ((int32_t)il2cpp_codegen_multiply(L_74, L_75))));
		// rtwdf_ = rx;
		int32_t L_76 = V_12;
		V_5 = L_76;
	}

IL_00f3:
	{
		// for (var j = 0; j < s; j++)
		int32_t L_77 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_00f9:
	{
		// for (var j = 0; j < s; j++)
		int32_t L_78 = V_7;
		int32_t L_79 = V_0;
		if ((((int32_t)L_78) < ((int32_t)L_79)))
		{
			goto IL_0056;
		}
	}
	{
		// for (var p = 0; p < N; p += l)
		int32_t L_80 = V_4;
		int32_t L_81 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_add(L_80, L_81));
	}

IL_0107:
	{
		// for (var p = 0; p < N; p += l)
		int32_t L_82 = V_4;
		int32_t L_83 = ___N4;
		if ((((int32_t)L_82) < ((int32_t)L_83)))
		{
			goto IL_0048;
		}
	}
	{
		// for (var s = 1; s < N; s <<= 1)
		int32_t L_84 = V_0;
		V_0 = ((int32_t)(L_84<<1));
	}

IL_0114:
	{
		// for (var s = 1; s < N; s <<= 1)
		int32_t L_85 = V_0;
		int32_t L_86 = ___N4;
		if ((((int32_t)L_85) < ((int32_t)L_86)))
		{
			goto IL_0016;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 BNSharp.FFTM::GuessLen13b(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FFTM_GuessLen13b_m364C9AD851EBC045E5A9979DBD58ABB407FFCC77 (FFTM_tEBD55B9A3A626BEF6B8313CCD63B530A3A397E52* __this, int32_t ___n0, int32_t ___m1, const RuntimeMethod* method) 
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
	{
		// var N = Math.Max(m, n) | 1;
		int32_t L_0 = ___m1;
		int32_t L_1 = ___n0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_0, L_1, NULL);
		V_0 = ((int32_t)(L_2|1));
		// var odd = N & 1;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)(L_3&1));
		// var i = 0;
		V_2 = 0;
		// for (N = N / 2 | 0; N != 0; N = N >> 1)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(((int32_t)(L_4/2))|0));
		goto IL_0020;
	}

IL_0018:
	{
		// i++;
		int32_t L_5 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// for (N = N / 2 | 0; N != 0; N = N >> 1)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)(L_6>>1));
	}

IL_0020:
	{
		// for (N = N / 2 | 0; N != 0; N = N >> 1)
		int32_t L_7 = V_0;
		if (L_7)
		{
			goto IL_0018;
		}
	}
	{
		// return 1 << i + 1 + odd;
		int32_t L_8 = V_2;
		int32_t L_9 = V_1;
		return ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_8, 1)), L_9))&((int32_t)31)))));
	}
}
// System.Void BNSharp.FFTM::Conjugate(System.Int32[],System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FFTM_Conjugate_m865E1824BBB2BBE2523878C5332623E86834570A (FFTM_tEBD55B9A3A626BEF6B8313CCD63B530A3A397E52* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___rws0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___iws1, int32_t ___N2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (N <= 1) return;
		int32_t L_0 = ___N2;
		if ((((int32_t)L_0) > ((int32_t)1)))
		{
			goto IL_0005;
		}
	}
	{
		// if (N <= 1) return;
		return;
	}

IL_0005:
	{
		// for (var i = 0; i < N / 2; i++)
		V_0 = 0;
		goto IL_003b;
	}

IL_0009:
	{
		// var t = rws[i];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___rws0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// rws[i] = rws[N - i - 1];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___rws0;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___rws0;
		int32_t L_8 = ___N2;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_8, L_9)), 1));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int32_t)L_11);
		// rws[N - i - 1] = t;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___rws0;
		int32_t L_13 = ___N2;
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_13, L_14)), 1))), (int32_t)L_15);
		// t = iws[i];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ___iws1;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_1 = L_19;
		// iws[i] = -iws[N - i - 1];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = ___iws1;
		int32_t L_21 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = ___iws1;
		int32_t L_23 = ___N2;
		int32_t L_24 = V_0;
		NullCheck(L_22);
		int32_t L_25 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_23, L_24)), 1));
		int32_t L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (int32_t)((-L_26)));
		// iws[N - i - 1] = -t;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = ___iws1;
		int32_t L_28 = ___N2;
		int32_t L_29 = V_0;
		int32_t L_30 = V_1;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_28, L_29)), 1))), (int32_t)((-L_30)));
		// for (var i = 0; i < N / 2; i++)
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_003b:
	{
		// for (var i = 0; i < N / 2; i++)
		int32_t L_32 = V_0;
		int32_t L_33 = ___N2;
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(L_33/2)))))
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32[] BNSharp.FFTM::Normalize13b(System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* FFTM_Normalize13b_m1D5E5F7ADEEB2CB77866AD46611368245F25877F (FFTM_tEBD55B9A3A626BEF6B8313CCD63B530A3A397E52* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ws0, int32_t ___N1, const RuntimeMethod* method) 
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
	{
		// var carry = 0;
		V_0 = 0;
		// for (var i = 0; i < N / 2; i++)
		V_1 = 0;
		goto IL_0054;
	}

IL_0006:
	{
		// var w = (int)Math.Round((double)ws[2 * i + 1] / N) * 0x2000 +
		//   (int)Math.Round((double)ws[2 * i] / N) +
		//   carry;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___ws0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_1)), 1));
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = ___N1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = bankers_round(((double)(((double)L_3)/((double)L_4))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___ws0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_multiply(2, L_7));
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = ___N1;
		double L_11;
		L_11 = bankers_round(((double)(((double)L_9)/((double)L_10))));
		int32_t L_12 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(il2cpp_codegen_cast_double_to_int<int32_t>(L_5), ((int32_t)8192))), il2cpp_codegen_cast_double_to_int<int32_t>(L_11))), L_12));
		// ws[i] = w & 0x3ffffff;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = ___ws0;
		int32_t L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (int32_t)((int32_t)(L_15&((int32_t)67108863))));
		// if (w < 0x4000000)
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) >= ((int32_t)((int32_t)67108864))))
		{
			goto IL_0046;
		}
	}
	{
		// carry = 0;
		V_0 = 0;
		goto IL_0050;
	}

IL_0046:
	{
		// carry = w / 0x4000000 | 0;
		int32_t L_17 = V_2;
		V_0 = ((int32_t)(((int32_t)(L_17/((int32_t)67108864)))|0));
	}

IL_0050:
	{
		// for (var i = 0; i < N / 2; i++)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0054:
	{
		// for (var i = 0; i < N / 2; i++)
		int32_t L_19 = V_1;
		int32_t L_20 = ___N1;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(L_20/2)))))
		{
			goto IL_0006;
		}
	}
	{
		// return ws;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = ___ws0;
		return L_21;
	}
}
// System.Void BNSharp.FFTM::Convert13b(System.Int32[],System.Int32,System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FFTM_Convert13b_mECFF26EE43FE8D905BA13ECC33A470BCC57EFFD6 (FFTM_tEBD55B9A3A626BEF6B8313CCD63B530A3A397E52* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ws0, int32_t ___len1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___rws2, int32_t ___N3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// var carry = 0;
		V_0 = 0;
		// for (i = 0; i < len; i++)
		V_1 = 0;
		goto IL_0036;
	}

IL_0006:
	{
		// carry = carry + (ws[i] | 0);
		int32_t L_0 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___ws0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(L_4|0))));
		// rws[2 * i] = carry & 0x1fff; carry = carry >> 13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___rws2;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(2, L_6))), (int32_t)((int32_t)(L_7&((int32_t)8191))));
		// rws[2 * i] = carry & 0x1fff; carry = carry >> 13;
		int32_t L_8 = V_0;
		V_0 = ((int32_t)(L_8>>((int32_t)13)));
		// rws[2 * i + 1] = carry & 0x1fff; carry = carry >> 13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ___rws2;
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_10)), 1))), (int32_t)((int32_t)(L_11&((int32_t)8191))));
		// rws[2 * i + 1] = carry & 0x1fff; carry = carry >> 13;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)(L_12>>((int32_t)13)));
		// for (i = 0; i < len; i++)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0036:
	{
		// for (i = 0; i < len; i++)
		int32_t L_14 = V_1;
		int32_t L_15 = ___len1;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0006;
		}
	}
	{
		// for (i = 2 * len; i < N; ++i)
		int32_t L_16 = ___len1;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_16));
		goto IL_0048;
	}

IL_0040:
	{
		// rws[i] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ___rws2;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (int32_t)0);
		// for (i = 2 * len; i < N; ++i)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0048:
	{
		// for (i = 2 * len; i < N; ++i)
		int32_t L_20 = V_1;
		int32_t L_21 = ___N3;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0040;
		}
	}
	{
		// if (carry != 0) throw new BNException();
		int32_t L_22 = V_0;
		if (!L_22)
		{
			goto IL_0056;
		}
	}
	{
		// if (carry != 0) throw new BNException();
		BNException_t36A4C4E59D0A80EC5EC2EDBE01ABD7F21EF6A3AE* L_23 = (BNException_t36A4C4E59D0A80EC5EC2EDBE01ABD7F21EF6A3AE*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BNException_t36A4C4E59D0A80EC5EC2EDBE01ABD7F21EF6A3AE_il2cpp_TypeInfo_var)));
		NullCheck(L_23);
		BNException__ctor_mE0AFA200BE3CE2718CD7D5D7E7E48146B9FB47D4(L_23, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FFTM_Convert13b_mECFF26EE43FE8D905BA13ECC33A470BCC57EFFD6_RuntimeMethod_var)));
	}

IL_0056:
	{
		// if ((carry & ~0x1fff) != 0) throw new BNException();
		int32_t L_24 = V_0;
		if (!((int32_t)(L_24&((int32_t)-8192))))
		{
			goto IL_0065;
		}
	}
	{
		// if ((carry & ~0x1fff) != 0) throw new BNException();
		BNException_t36A4C4E59D0A80EC5EC2EDBE01ABD7F21EF6A3AE* L_25 = (BNException_t36A4C4E59D0A80EC5EC2EDBE01ABD7F21EF6A3AE*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BNException_t36A4C4E59D0A80EC5EC2EDBE01ABD7F21EF6A3AE_il2cpp_TypeInfo_var)));
		NullCheck(L_25);
		BNException__ctor_mE0AFA200BE3CE2718CD7D5D7E7E48146B9FB47D4(L_25, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FFTM_Convert13b_mECFF26EE43FE8D905BA13ECC33A470BCC57EFFD6_RuntimeMethod_var)));
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Int32[] BNSharp.FFTM::Stub(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* FFTM_Stub_m12D257DA42C84AE5293A533E77673D3FDA5CC244 (FFTM_tEBD55B9A3A626BEF6B8313CCD63B530A3A397E52* __this, int32_t ___N0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var ph = new int[N];
		int32_t L_0 = ___N0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// for (var i = 0; i < N; i++)
		V_1 = 0;
		goto IL_0013;
	}

IL_000b:
	{
		// ph[i] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)0);
		// for (var i = 0; i < N; i++)
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0013:
	{
		// for (var i = 0; i < N; i++)
		int32_t L_5 = V_1;
		int32_t L_6 = ___N0;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_000b;
		}
	}
	{
		// return ph;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		return L_7;
	}
}
// BNSharp.BN BNSharp.FFTM::Mulp(BNSharp.BN,BNSharp.BN,BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* FFTM_Mulp_m4CCE496C8A70764CC769FC323BA34A80F11D14D0 (FFTM_tEBD55B9A3A626BEF6B8313CCD63B530A3A397E52* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___x0, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___y1, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___out2, const RuntimeMethod* method) 
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
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_7 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_8 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		// var N = 2 * this.GuessLen13b(x.Length, y.Length);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___x0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Length_3;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2 = ___y1;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Length_3;
		int32_t L_4;
		L_4 = FFTM_GuessLen13b_m364C9AD851EBC045E5A9979DBD58ABB407FFCC77(__this, L_1, L_3, NULL);
		V_0 = ((int32_t)il2cpp_codegen_multiply(2, L_4));
		// var rbt = this.MakeRBT(N);
		int32_t L_5 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6;
		L_6 = FFTM_MakeRBT_m3F4485A97117CD9444C1E8BBF1245DAF51AB2F5E(__this, L_5, NULL);
		V_1 = L_6;
		// var _ = this.Stub(N);
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8;
		L_8 = FFTM_Stub_m12D257DA42C84AE5293A533E77673D3FDA5CC244(__this, L_7, NULL);
		V_2 = L_8;
		// var rws = new int[N];
		int32_t L_9 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_3 = L_10;
		// var rwst = new int[N];
		int32_t L_11 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_11);
		V_4 = L_12;
		// var iwst = new int[N];
		int32_t L_13 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_13);
		V_5 = L_14;
		// var nrws = new int[N];
		int32_t L_15 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_15);
		V_6 = L_16;
		// var nrwst = new int[N];
		int32_t L_17 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_17);
		V_7 = L_18;
		// var niwst = new int[N];
		int32_t L_19 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_8 = L_20;
		// var rmws = new int[N];
		int32_t L_21 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_21);
		V_9 = L_22;
		// Array.Copy(@out.words, 0, rmws, 0, Math.Min(@out.words.Length, N));
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_23 = ___out2;
		NullCheck(L_23);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = L_23->___words_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_9;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_26 = ___out2;
		NullCheck(L_26);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = L_26->___words_2;
		NullCheck(L_27);
		int32_t L_28 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_29;
		L_29 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28, NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, 0, (RuntimeArray*)L_25, 0, L_29, NULL);
		// this.Convert13b(x.words, x.Length, rws, N);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_30 = ___x0;
		NullCheck(L_30);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = L_30->___words_2;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_32 = ___x0;
		NullCheck(L_32);
		int32_t L_33 = L_32->___Length_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_3;
		int32_t L_35 = V_0;
		FFTM_Convert13b_mECFF26EE43FE8D905BA13ECC33A470BCC57EFFD6(__this, L_31, L_33, L_34, L_35, NULL);
		// this.Convert13b(y.words, y.Length, nrws, N);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_36 = ___y1;
		NullCheck(L_36);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = L_36->___words_2;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_38 = ___y1;
		NullCheck(L_38);
		int32_t L_39 = L_38->___Length_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_6;
		int32_t L_41 = V_0;
		FFTM_Convert13b_mECFF26EE43FE8D905BA13ECC33A470BCC57EFFD6(__this, L_37, L_39, L_40, L_41, NULL);
		// this.Transform(rws, _, rwst, iwst, N, rbt);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = V_5;
		int32_t L_46 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = V_1;
		FFTM_Transform_mB55384E5BA55D4CD70EA88E1B5A0112A8EDDD648(__this, L_42, L_43, L_44, L_45, L_46, L_47, NULL);
		// this.Transform(nrws, _, nrwst, niwst, N, rbt);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = V_8;
		int32_t L_52 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		FFTM_Transform_mB55384E5BA55D4CD70EA88E1B5A0112A8EDDD648(__this, L_48, L_49, L_50, L_51, L_52, L_53, NULL);
		// for (var i = 0; i < N; i++)
		V_10 = 0;
		goto IL_0106;
	}

IL_00c4:
	{
		// var rx = rwst[i] * nrwst[i] - iwst[i] * niwst[i];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = V_4;
		int32_t L_55 = V_10;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		int32_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_7;
		int32_t L_59 = V_10;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		int32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = V_5;
		int32_t L_63 = V_10;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		int32_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = V_8;
		int32_t L_67 = V_10;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		int32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_11 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_57, L_61)), ((int32_t)il2cpp_codegen_multiply(L_65, L_69))));
		// iwst[i] = rwst[i] * niwst[i] + iwst[i] * nrwst[i];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = V_5;
		int32_t L_71 = V_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = V_4;
		int32_t L_73 = V_10;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		int32_t L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = V_8;
		int32_t L_77 = V_10;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		int32_t L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = V_5;
		int32_t L_81 = V_10;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		int32_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_84 = V_7;
		int32_t L_85 = V_10;
		NullCheck(L_84);
		int32_t L_86 = L_85;
		int32_t L_87 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(L_71), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_75, L_79)), ((int32_t)il2cpp_codegen_multiply(L_83, L_87)))));
		// rwst[i] = rx;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = V_4;
		int32_t L_89 = V_10;
		int32_t L_90 = V_11;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(L_89), (int32_t)L_90);
		// for (var i = 0; i < N; i++)
		int32_t L_91 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_91, 1));
	}

IL_0106:
	{
		// for (var i = 0; i < N; i++)
		int32_t L_92 = V_10;
		int32_t L_93 = V_0;
		if ((((int32_t)L_92) < ((int32_t)L_93)))
		{
			goto IL_00c4;
		}
	}
	{
		// this.Conjugate(rwst, iwst, N);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_94 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_95 = V_5;
		int32_t L_96 = V_0;
		FFTM_Conjugate_m865E1824BBB2BBE2523878C5332623E86834570A(__this, L_94, L_95, L_96, NULL);
		// this.Transform(rwst, iwst, rmws, _, N, rbt);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_98 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_99 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100 = V_2;
		int32_t L_101 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = V_1;
		FFTM_Transform_mB55384E5BA55D4CD70EA88E1B5A0112A8EDDD648(__this, L_97, L_98, L_99, L_100, L_101, L_102, NULL);
		// this.Conjugate(rmws, _, N);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_103 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = V_2;
		int32_t L_105 = V_0;
		FFTM_Conjugate_m865E1824BBB2BBE2523878C5332623E86834570A(__this, L_103, L_104, L_105, NULL);
		// this.Normalize13b(rmws, N);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_106 = V_9;
		int32_t L_107 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108;
		L_108 = FFTM_Normalize13b_m1D5E5F7ADEEB2CB77866AD46611368245F25877F(__this, L_106, L_107, NULL);
		// @out.Negative = x.Negative ^ y.Negative;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_109 = ___out2;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_110 = ___x0;
		NullCheck(L_110);
		int32_t L_111 = L_110->___Negative_1;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_112 = ___y1;
		NullCheck(L_112);
		int32_t L_113 = L_112->___Negative_1;
		NullCheck(L_109);
		L_109->___Negative_1 = ((int32_t)(L_111^L_113));
		// @out.Length = x.Length + y.Length;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_114 = ___out2;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_115 = ___x0;
		NullCheck(L_115);
		int32_t L_116 = L_115->___Length_3;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_117 = ___y1;
		NullCheck(L_117);
		int32_t L_118 = L_117->___Length_3;
		NullCheck(L_114);
		L_114->___Length_3 = ((int32_t)il2cpp_codegen_add(L_116, L_118));
		// @out.words = rmws; //?
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_119 = ___out2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_120 = V_9;
		NullCheck(L_119);
		L_119->___words_2 = L_120;
		Il2CppCodeGenWriteBarrier((void**)(&L_119->___words_2), (void*)L_120);
		// return @out._strip();
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_121 = ___out2;
		NullCheck(L_121);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_122;
		L_122 = BN__strip_mE07F8F68F583B6071A9A27C2AFCBDED5B4BF67D0(L_121, NULL);
		return L_122;
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
// System.Void BNSharp.Functions::Assert(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Functions_Assert_m95CB7EA6CEE9D7C55213C48C439F6FC7920CE6ED (bool ___val0, String_t* ___msg1, const RuntimeMethod* method) 
{
	String_t* G_B3_0 = NULL;
	String_t* G_B2_0 = NULL;
	{
		// if (!val) throw new BNException(msg ?? "Assertion failed");
		bool L_0 = ___val0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (!val) throw new BNException(msg ?? "Assertion failed");
		String_t* L_1 = ___msg1;
		String_t* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91DF309DA88B9454DFBC07AF84C4914C819841F5));
	}

IL_000d:
	{
		BNException_t36A4C4E59D0A80EC5EC2EDBE01ABD7F21EF6A3AE* L_3 = (BNException_t36A4C4E59D0A80EC5EC2EDBE01ABD7F21EF6A3AE*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BNException_t36A4C4E59D0A80EC5EC2EDBE01ABD7F21EF6A3AE_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		BNException__ctor_mBB2AF39D4283D67E474B6C0EDCC2130FE2D6A294(L_3, G_B3_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Functions_Assert_m95CB7EA6CEE9D7C55213C48C439F6FC7920CE6ED_RuntimeMethod_var)));
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void BNSharp.Functions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Functions__ctor_mF79684EA93D9496F2A9BC800A394CA454C662B63 (Functions_t52DC9CBAD09943E10BAF8A191DBDC94329A6B54C* __this, const RuntimeMethod* method) 
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
// System.Void BNSharp.K256::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void K256__ctor_mD4E9E8718EFBEE724854A16D06A4A34B9608E970 (K256_tBFE212AB79DB30EB5C569FCC0E73C5F77FF564D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral390E907F106DD304688267AE7076BCE46596F5A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB556525266B8688575F8C8D1C91986E2597375F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public K256() : base("k256", "ffffffff ffffffff ffffffff ffffffff ffffffff ffffffff fffffffe fffffc2f")
		MPrime__ctor_m222E288C7617F08EA777D100AEEEF431CEE11C32(__this, _stringLiteralBB556525266B8688575F8C8D1C91986E2597375F, _stringLiteral390E907F106DD304688267AE7076BCE46596F5A7, NULL);
		// }
		return;
	}
}
// System.Void BNSharp.K256::Split(BNSharp.BN,BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void K256_Split_mB3C7B54853C6250FE4305DA1D70BAEFDE6D437F5 (K256_tBFE212AB79DB30EB5C569FCC0E73C5F77FF564D5* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___input0, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___output1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// var mask = 0x3fffff;
		V_0 = ((int32_t)4194303);
		// var outLen = Math.Min(input.Length, 9);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___input0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Length_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_1, ((int32_t)9), NULL);
		V_1 = L_2;
		// Array.Resize(ref output.words, outLen);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_3 = ___output1;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_4 = (&L_3->___words_2);
		int32_t L_5 = V_1;
		Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916(L_4, L_5, Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_RuntimeMethod_var);
		// for (i = 0; i < outLen; i++)
		V_2 = 0;
		goto IL_0038;
	}

IL_0024:
	{
		// output.words[i] = input.words[i];
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_6 = ___output1;
		NullCheck(L_6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6->___words_2;
		int32_t L_8 = V_2;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_9 = ___input0;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->___words_2;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)L_13);
		// for (i = 0; i < outLen; i++)
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0038:
	{
		// for (i = 0; i < outLen; i++)
		int32_t L_15 = V_2;
		int32_t L_16 = V_1;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0024;
		}
	}
	{
		// output.Length = outLen;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_17 = ___output1;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		L_17->___Length_3 = L_18;
		// if (input.Length <= 9)
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_19 = ___input0;
		NullCheck(L_19);
		int32_t L_20 = L_19->___Length_3;
		if ((((int32_t)L_20) > ((int32_t)((int32_t)9))))
		{
			goto IL_005e;
		}
	}
	{
		// input.words[0] = 0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_21 = ___input0;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = L_21->___words_2;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		// input.Length = 1;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_23 = ___input0;
		NullCheck(L_23);
		L_23->___Length_3 = 1;
		// return;
		return;
	}

IL_005e:
	{
		// var prev = input.words[9];
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_24 = ___input0;
		NullCheck(L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = L_24->___words_2;
		NullCheck(L_25);
		int32_t L_26 = ((int32_t)9);
		int32_t L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_3 = L_27;
		// Array.Resize(ref output.words, output.Length + 1);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_28 = ___output1;
		NullCheck(L_28);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_29 = (&L_28->___words_2);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_30 = ___output1;
		NullCheck(L_30);
		int32_t L_31 = L_30->___Length_3;
		Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916(L_29, ((int32_t)il2cpp_codegen_add(L_31, 1)), Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_RuntimeMethod_var);
		// output.words[output.Length++] = prev & mask;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_32 = ___output1;
		NullCheck(L_32);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = L_32->___words_2;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_34 = ___output1;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_35 = L_34;
		NullCheck(L_35);
		int32_t L_36 = L_35->___Length_3;
		V_4 = L_36;
		int32_t L_37 = V_4;
		NullCheck(L_35);
		L_35->___Length_3 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		int32_t L_38 = V_4;
		int32_t L_39 = V_3;
		int32_t L_40 = V_0;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)(L_39&L_40)));
		// for (i = 10; i < input.Length; i++)
		V_2 = ((int32_t)10);
		goto IL_00c7;
	}

IL_009e:
	{
		// var next = input.words[i] | 0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_41 = ___input0;
		NullCheck(L_41);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = L_41->___words_2;
		int32_t L_43 = V_2;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		int32_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_5 = ((int32_t)(L_45|0));
		// input.words[i - 10] = ((next & mask) << 4) | (prev >> 22);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_46 = ___input0;
		NullCheck(L_46);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = L_46->___words_2;
		int32_t L_48 = V_2;
		int32_t L_49 = V_5;
		int32_t L_50 = V_0;
		int32_t L_51 = V_3;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_48, ((int32_t)10)))), (int32_t)((int32_t)(((int32_t)(((int32_t)(L_49&L_50))<<4))|((int32_t)(L_51>>((int32_t)22))))));
		// prev = next;
		int32_t L_52 = V_5;
		V_3 = L_52;
		// for (i = 10; i < input.Length; i++)
		int32_t L_53 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_00c7:
	{
		// for (i = 10; i < input.Length; i++)
		int32_t L_54 = V_2;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_55 = ___input0;
		NullCheck(L_55);
		int32_t L_56 = L_55->___Length_3;
		if ((((int32_t)L_54) < ((int32_t)L_56)))
		{
			goto IL_009e;
		}
	}
	{
		// prev >>= 22;
		int32_t L_57 = V_3;
		V_3 = ((int32_t)(L_57>>((int32_t)22)));
		// input.words[i - 10] = prev;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_58 = ___input0;
		NullCheck(L_58);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = L_58->___words_2;
		int32_t L_60 = V_2;
		int32_t L_61 = V_3;
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_60, ((int32_t)10)))), (int32_t)L_61);
		// if (prev == 0 && input.Length > 10)
		int32_t L_62 = V_3;
		if (L_62)
		{
			goto IL_00fe;
		}
	}
	{
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_63 = ___input0;
		NullCheck(L_63);
		int32_t L_64 = L_63->___Length_3;
		if ((((int32_t)L_64) <= ((int32_t)((int32_t)10))))
		{
			goto IL_00fe;
		}
	}
	{
		// input.Length -= 10;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_65 = ___input0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_66 = L_65;
		NullCheck(L_66);
		int32_t L_67 = L_66->___Length_3;
		NullCheck(L_66);
		L_66->___Length_3 = ((int32_t)il2cpp_codegen_subtract(L_67, ((int32_t)10)));
		return;
	}

IL_00fe:
	{
		// input.Length -= 9;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_68 = ___input0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_69 = L_68;
		NullCheck(L_69);
		int32_t L_70 = L_69->___Length_3;
		NullCheck(L_69);
		L_69->___Length_3 = ((int32_t)il2cpp_codegen_subtract(L_70, ((int32_t)9)));
		// }
		return;
	}
}
// BNSharp.BN BNSharp.K256::ImulK(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* K256_ImulK_m40CA590948E0FD512772C47A0DABA7BB3B2E619F (K256_tBFE212AB79DB30EB5C569FCC0E73C5F77FF564D5* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___num0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		// Array.Resize(ref num.words, num.Length + 2);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___num0;
		NullCheck(L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_1 = (&L_0->___words_2);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2 = ___num0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Length_3;
		Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916(L_1, ((int32_t)il2cpp_codegen_add(L_3, 2)), Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_RuntimeMethod_var);
		// num.words[num.Length] = 0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_4 = ___num0;
		NullCheck(L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___words_2;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_6 = ___num0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___Length_3;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)0);
		// num.words[num.Length + 1] = 0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_8 = ___num0;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->___words_2;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_10 = ___num0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___Length_3;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_11, 1))), (int32_t)0);
		// num.Length += 2;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_12 = ___num0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_13 = L_12;
		NullCheck(L_13);
		int32_t L_14 = L_13->___Length_3;
		NullCheck(L_13);
		L_13->___Length_3 = ((int32_t)il2cpp_codegen_add(L_14, 2));
		// long lo = 0;
		V_0 = ((int64_t)0);
		// for (var i = 0; i < num.Length; i++)
		V_1 = 0;
		goto IL_0085;
	}

IL_0046:
	{
		// var w = (long)num.words[i] | 0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_15 = ___num0;
		NullCheck(L_15);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = L_15->___words_2;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_2 = ((int64_t)(((int64_t)L_19)|((int64_t)0)));
		// lo += w * 0x3d1;
		int64_t L_20 = V_0;
		int64_t L_21 = V_2;
		V_0 = ((int64_t)il2cpp_codegen_add(L_20, ((int64_t)il2cpp_codegen_multiply(L_21, ((int64_t)((int32_t)977))))));
		// num.words[i] = (int)(lo & 0x3ffffff);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_22 = ___num0;
		NullCheck(L_22);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = L_22->___words_2;
		int32_t L_24 = V_1;
		int64_t L_25 = V_0;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (int32_t)((int32_t)((int64_t)(L_25&((int64_t)((int32_t)67108863))))));
		// lo = w * 0x40 + ((lo / 0x4000000) | 0);
		int64_t L_26 = V_2;
		int64_t L_27 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(L_26, ((int64_t)((int32_t)64)))), ((int64_t)(((int64_t)(L_27/((int64_t)((int32_t)67108864))))|((int64_t)0)))));
		// for (var i = 0; i < num.Length; i++)
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0085:
	{
		// for (var i = 0; i < num.Length; i++)
		int32_t L_29 = V_1;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_30 = ___num0;
		NullCheck(L_30);
		int32_t L_31 = L_30->___Length_3;
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_0046;
		}
	}
	{
		// if (num.words[num.Length - 1] == 0)
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_32 = ___num0;
		NullCheck(L_32);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = L_32->___words_2;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_34 = ___num0;
		NullCheck(L_34);
		int32_t L_35 = L_34->___Length_3;
		NullCheck(L_33);
		int32_t L_36 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		int32_t L_37 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		if (L_37)
		{
			goto IL_00cc;
		}
	}
	{
		// num.Length--;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_38 = ___num0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_39 = L_38;
		NullCheck(L_39);
		int32_t L_40 = L_39->___Length_3;
		NullCheck(L_39);
		L_39->___Length_3 = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
		// if (num.words[num.Length - 1] == 0)
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_41 = ___num0;
		NullCheck(L_41);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = L_41->___words_2;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_43 = ___num0;
		NullCheck(L_43);
		int32_t L_44 = L_43->___Length_3;
		NullCheck(L_42);
		int32_t L_45 = ((int32_t)il2cpp_codegen_subtract(L_44, 1));
		int32_t L_46 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		if (L_46)
		{
			goto IL_00cc;
		}
	}
	{
		// num.Length--;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_47 = ___num0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_48 = L_47;
		NullCheck(L_48);
		int32_t L_49 = L_48->___Length_3;
		NullCheck(L_48);
		L_48->___Length_3 = ((int32_t)il2cpp_codegen_subtract(L_49, 1));
	}

IL_00cc:
	{
		// return num;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_50 = ___num0;
		return L_50;
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
// System.Void BNSharp.Mont::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mont__ctor_mDDCDE563CB2E3365A35048D4E20FE9D66226D8BC (Mont_t8926333F330B452B1E3CE8B74FC11569C15F296D* __this, String_t* ___m0, const RuntimeMethod* method) 
{
	{
		// public Mont(string m) : base(m)
		String_t* L_0 = ___m0;
		Red__ctor_m218918067F65C97668A3A322BB21F79FD23E1A59(__this, L_0, NULL);
		// _init();
		Mont__init_m44DB37E6A9357B6BD728D471B33C949BC2CBF6A3(__this, NULL);
		// }
		return;
	}
}
// System.Void BNSharp.Mont::.ctor(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mont__ctor_mF4F922D2E281E00C794548E31A635D2CD2154B7D (Mont_t8926333F330B452B1E3CE8B74FC11569C15F296D* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___m0, const RuntimeMethod* method) 
{
	{
		// public Mont(BN m) : base(m)
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___m0;
		Red__ctor_m2755B29886F877F3AE2144AE41C366640A977920(__this, L_0, NULL);
		// _init();
		Mont__init_m44DB37E6A9357B6BD728D471B33C949BC2CBF6A3(__this, NULL);
		// }
		return;
	}
}
// System.Void BNSharp.Mont::_init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mont__init_m44DB37E6A9357B6BD728D471B33C949BC2CBF6A3 (Mont_t8926333F330B452B1E3CE8B74FC11569C15F296D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.shift = this.m.BitLength();
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ((Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92*)__this)->___m_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BN_BitLength_m5325F70FE6E18996F0D3AE4292D01047500C8B47(L_0, NULL);
		__this->___shift_2 = L_1;
		// if (this.shift % 26 != 0)
		int32_t L_2 = __this->___shift_2;
		if (!((int32_t)(L_2%((int32_t)26))))
		{
			goto IL_0035;
		}
	}
	{
		// this.shift += 26 - (this.shift % 26);
		int32_t L_3 = __this->___shift_2;
		int32_t L_4 = __this->___shift_2;
		__this->___shift_2 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)il2cpp_codegen_subtract(((int32_t)26), ((int32_t)(L_4%((int32_t)26)))))));
	}

IL_0035:
	{
		// this.r = new BN(1).Iushln(this.shift);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_5 = (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*)il2cpp_codegen_object_new(BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		BN__ctor_m38F25106CEE7C5D24CF27D1CE95EE40825412311(L_5, ((int64_t)1), 1, NULL);
		int32_t L_6 = __this->___shift_2;
		NullCheck(L_5);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_7;
		L_7 = BN_Iushln_mFE36C60B6A1EF5B0343BFB74C60708AE72ED261B(L_5, L_6, NULL);
		__this->___r_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___r_3), (void*)L_7);
		// this.r2 = this.Imod(this.r.Sqr());
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_8 = __this->___r_3;
		NullCheck(L_8);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_9;
		L_9 = BN_Sqr_mA6C18F3C459A48C02688B0D2457D655347F50D70(L_8, NULL);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_10;
		L_10 = Red_Imod_m55AEA08A22BDA07C213F0B5674E402A0A82E6689(__this, L_9, NULL);
		__this->___r2_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___r2_4), (void*)L_10);
		// this.rinv = this.r._invmp(this.m);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_11 = __this->___r_3;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_12 = ((Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92*)__this)->___m_0;
		NullCheck(L_11);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_13;
		L_13 = BN__invmp_mE5B9A9FBB438DA1979BFA43F452DD7B98993F2C8(L_11, L_12, NULL);
		__this->___rinv_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rinv_5), (void*)L_13);
		// this.minv = this.rinv.Mul(this.r).Isubn(1).Div(this.m);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_14 = __this->___rinv_5;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_15 = __this->___r_3;
		NullCheck(L_14);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_16;
		L_16 = BN_Mul_m0023E9CB6AC95308A99037F602EE558102E08C1B(L_14, L_15, NULL);
		NullCheck(L_16);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_17;
		L_17 = BN_Isubn_mFF564F02BDF7B48A53F5A77597143F7DE052C4C3(L_16, 1, NULL);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_18 = ((Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92*)__this)->___m_0;
		NullCheck(L_17);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_19;
		L_19 = BN_Div_m7F3E7178DB29766E4C35A198AEC20521F9A57214(L_17, L_18, NULL);
		__this->___minv_6 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___minv_6), (void*)L_19);
		// this.minv = this.minv.Umod(this.r);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_20 = __this->___minv_6;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_21 = __this->___r_3;
		NullCheck(L_20);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_22;
		L_22 = BN_Umod_m6F0A64F184AB459A8CB6B2D8BF2E63045E47CFDC(L_20, L_21, NULL);
		__this->___minv_6 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___minv_6), (void*)L_22);
		// this.minv = this.r.Sub(this.minv);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_23 = __this->___r_3;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_24 = __this->___minv_6;
		NullCheck(L_23);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_25;
		L_25 = BN_Sub_m64C53EBCF9D4CD2E3E67E207999B3D6E45984CC4(L_23, L_24, NULL);
		__this->___minv_6 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___minv_6), (void*)L_25);
		// }
		return;
	}
}
// BNSharp.BN BNSharp.Mont::Imul(BNSharp.BN,BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* Mont_Imul_m390C23EB87FC4EAFBF42CBB6D7856704535E526A (Mont_t8926333F330B452B1E3CE8B74FC11569C15F296D* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___a0, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___b1, const RuntimeMethod* method) 
{
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* V_0 = NULL;
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* V_1 = NULL;
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* V_2 = NULL;
	{
		// if (a.IsZero() || b.IsZero())
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___a0;
		NullCheck(L_0);
		bool L_1;
		L_1 = BN_IsZero_mC595B7C6B18232EE575AD6B2FFCB4BA6FA24F0BD(L_0, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2 = ___b1;
		NullCheck(L_2);
		bool L_3;
		L_3 = BN_IsZero_mC595B7C6B18232EE575AD6B2FFCB4BA6FA24F0BD(L_2, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}

IL_0010:
	{
		// a.words[0] = 0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_4 = ___a0;
		NullCheck(L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___words_2;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		// a.Length = 1;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_6 = ___a0;
		NullCheck(L_6);
		L_6->___Length_3 = 1;
		// return a;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_7 = ___a0;
		return L_7;
	}

IL_0022:
	{
		// var t = a.Imul(b);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_8 = ___a0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_9 = ___b1;
		NullCheck(L_8);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_10;
		L_10 = BN_Imul_m372373AB07471C75221F9FEB3BF0595E657EF79B(L_8, L_9, NULL);
		// var c = t.Maskn(this.shift).Mul(this.minv).Imaskn(this.shift).Mul(this.m);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_11 = L_10;
		int32_t L_12 = __this->___shift_2;
		NullCheck(L_11);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_13;
		L_13 = BN_Maskn_m1AFD33E3BCF8070C7A6BCB2AA2053284EF143F2E(L_11, L_12, NULL);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_14 = __this->___minv_6;
		NullCheck(L_13);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_15;
		L_15 = BN_Mul_m0023E9CB6AC95308A99037F602EE558102E08C1B(L_13, L_14, NULL);
		int32_t L_16 = __this->___shift_2;
		NullCheck(L_15);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_17;
		L_17 = BN_Imaskn_mDFD9F9095567507476B6C54843DC6F2E5202590E(L_15, L_16, NULL);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_18 = ((Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92*)__this)->___m_0;
		NullCheck(L_17);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_19;
		L_19 = BN_Mul_m0023E9CB6AC95308A99037F602EE558102E08C1B(L_17, L_18, NULL);
		V_0 = L_19;
		// var u = t.Isub(c).Iushrn(this.shift);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_20 = V_0;
		NullCheck(L_11);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_21;
		L_21 = BN_Isub_m1F255A2CD6B0C5E900C52BB0AABA7B06393A4DC2(L_11, L_20, NULL);
		int32_t L_22 = __this->___shift_2;
		NullCheck(L_21);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_23;
		L_23 = BN_Iushrn_m550F3BAC995BE733DBED6DDBDF2E76706E26E415(L_21, L_22, 0, (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*)NULL, NULL);
		V_1 = L_23;
		// var res = u;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_24 = V_1;
		V_2 = L_24;
		// if (u.Cmp(this.m) >= 0)
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_25 = V_1;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_26 = ((Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92*)__this)->___m_0;
		NullCheck(L_25);
		int32_t L_27;
		L_27 = BN_Cmp_m8BCA5B0A1D731A7FC021CA390B3D6E67C96D89CC(L_25, L_26, NULL);
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_008b;
		}
	}
	{
		// res = u.Isub(this.m);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_28 = V_1;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_29 = ((Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92*)__this)->___m_0;
		NullCheck(L_28);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_30;
		L_30 = BN_Isub_m1F255A2CD6B0C5E900C52BB0AABA7B06393A4DC2(L_28, L_29, NULL);
		V_2 = L_30;
		goto IL_00a2;
	}

IL_008b:
	{
		// else if (u.Cmpn(0) < 0)
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_31 = V_1;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = BN_Cmpn_mDD8A9BE43B0270F09C097C5E555AD71CD08391A1(L_31, 0, NULL);
		if ((((int32_t)L_32) >= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		// res = u.Iadd(this.m);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_33 = V_1;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_34 = ((Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92*)__this)->___m_0;
		NullCheck(L_33);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_35;
		L_35 = BN_Iadd_m1FEA663378105EF1E2F9A3487C87AF5B24D01F58(L_33, L_34, NULL);
		V_2 = L_35;
	}

IL_00a2:
	{
		// return res._forceRed(this);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_36 = V_2;
		NullCheck(L_36);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_37;
		L_37 = BN__forceRed_mAA398E9058AE5D8CD55B97F2583F21D9A3223DE6(L_36, __this, NULL);
		return L_37;
	}
}
// BNSharp.BN BNSharp.Mont::Mul(BNSharp.BN,BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* Mont_Mul_m899ECDDA3CE6C8F482A025A9D5C03492D15C4A92 (Mont_t8926333F330B452B1E3CE8B74FC11569C15F296D* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___a0, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* V_0 = NULL;
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* V_1 = NULL;
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* V_2 = NULL;
	{
		// if (a.IsZero() || b.IsZero()) return new BN(0)._forceRed(this);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___a0;
		NullCheck(L_0);
		bool L_1;
		L_1 = BN_IsZero_mC595B7C6B18232EE575AD6B2FFCB4BA6FA24F0BD(L_0, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2 = ___b1;
		NullCheck(L_2);
		bool L_3;
		L_3 = BN_IsZero_mC595B7C6B18232EE575AD6B2FFCB4BA6FA24F0BD(L_2, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}

IL_0010:
	{
		// if (a.IsZero() || b.IsZero()) return new BN(0)._forceRed(this);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_4 = (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*)il2cpp_codegen_object_new(BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BN__ctor_m38F25106CEE7C5D24CF27D1CE95EE40825412311(L_4, ((int64_t)0), 1, NULL);
		NullCheck(L_4);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_5;
		L_5 = BN__forceRed_mAA398E9058AE5D8CD55B97F2583F21D9A3223DE6(L_4, __this, NULL);
		return L_5;
	}

IL_001f:
	{
		// var t = a.Mul(b);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_6 = ___a0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_7 = ___b1;
		NullCheck(L_6);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_8;
		L_8 = BN_Mul_m0023E9CB6AC95308A99037F602EE558102E08C1B(L_6, L_7, NULL);
		// var c = t.Maskn(this.shift).Mul(this.minv).Imaskn(this.shift).Mul(this.m);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_9 = L_8;
		int32_t L_10 = __this->___shift_2;
		NullCheck(L_9);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_11;
		L_11 = BN_Maskn_m1AFD33E3BCF8070C7A6BCB2AA2053284EF143F2E(L_9, L_10, NULL);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_12 = __this->___minv_6;
		NullCheck(L_11);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_13;
		L_13 = BN_Mul_m0023E9CB6AC95308A99037F602EE558102E08C1B(L_11, L_12, NULL);
		int32_t L_14 = __this->___shift_2;
		NullCheck(L_13);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_15;
		L_15 = BN_Imaskn_mDFD9F9095567507476B6C54843DC6F2E5202590E(L_13, L_14, NULL);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_16 = ((Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92*)__this)->___m_0;
		NullCheck(L_15);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_17;
		L_17 = BN_Mul_m0023E9CB6AC95308A99037F602EE558102E08C1B(L_15, L_16, NULL);
		V_0 = L_17;
		// var u = t.Isub(c).Iushrn(this.shift);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_18 = V_0;
		NullCheck(L_9);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_19;
		L_19 = BN_Isub_m1F255A2CD6B0C5E900C52BB0AABA7B06393A4DC2(L_9, L_18, NULL);
		int32_t L_20 = __this->___shift_2;
		NullCheck(L_19);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_21;
		L_21 = BN_Iushrn_m550F3BAC995BE733DBED6DDBDF2E76706E26E415(L_19, L_20, 0, (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*)NULL, NULL);
		V_1 = L_21;
		// var res = u;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_22 = V_1;
		V_2 = L_22;
		// if (u.Cmp(this.m) >= 0)
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_23 = V_1;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_24 = ((Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92*)__this)->___m_0;
		NullCheck(L_23);
		int32_t L_25;
		L_25 = BN_Cmp_m8BCA5B0A1D731A7FC021CA390B3D6E67C96D89CC(L_23, L_24, NULL);
		if ((((int32_t)L_25) < ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		// res = u.Isub(this.m);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_26 = V_1;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_27 = ((Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92*)__this)->___m_0;
		NullCheck(L_26);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_28;
		L_28 = BN_Isub_m1F255A2CD6B0C5E900C52BB0AABA7B06393A4DC2(L_26, L_27, NULL);
		V_2 = L_28;
		goto IL_009f;
	}

IL_0088:
	{
		// else if (u.Cmpn(0) < 0)
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_29 = V_1;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = BN_Cmpn_mDD8A9BE43B0270F09C097C5E555AD71CD08391A1(L_29, 0, NULL);
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_009f;
		}
	}
	{
		// res = u.Iadd(this.m);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_31 = V_1;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_32 = ((Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92*)__this)->___m_0;
		NullCheck(L_31);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_33;
		L_33 = BN_Iadd_m1FEA663378105EF1E2F9A3487C87AF5B24D01F58(L_31, L_32, NULL);
		V_2 = L_33;
	}

IL_009f:
	{
		// return res._forceRed(this);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_34 = V_2;
		NullCheck(L_34);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_35;
		L_35 = BN__forceRed_mAA398E9058AE5D8CD55B97F2583F21D9A3223DE6(L_34, __this, NULL);
		return L_35;
	}
}
// BNSharp.BN BNSharp.Mont::Invm(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* Mont_Invm_mA5A83FA0620F8898F2EBA1834E4B062C9C49A41E (Mont_t8926333F330B452B1E3CE8B74FC11569C15F296D* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___a0, const RuntimeMethod* method) 
{
	{
		// var res = this.Imod(a._invmp(this.m).Mul(this.r2));
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___a0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_1 = ((Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92*)__this)->___m_0;
		NullCheck(L_0);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2;
		L_2 = BN__invmp_mE5B9A9FBB438DA1979BFA43F452DD7B98993F2C8(L_0, L_1, NULL);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_3 = __this->___r2_4;
		NullCheck(L_2);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_4;
		L_4 = BN_Mul_m0023E9CB6AC95308A99037F602EE558102E08C1B(L_2, L_3, NULL);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_5;
		L_5 = Red_Imod_m55AEA08A22BDA07C213F0B5674E402A0A82E6689(__this, L_4, NULL);
		// return res._forceRed(this);
		NullCheck(L_5);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_6;
		L_6 = BN__forceRed_mAA398E9058AE5D8CD55B97F2583F21D9A3223DE6(L_5, __this, NULL);
		return L_6;
	}
}
// BNSharp.BN BNSharp.Mont::ConvertTo(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* Mont_ConvertTo_mB2FC222394A9AEE92D6078392B14D48B3608A488 (Mont_t8926333F330B452B1E3CE8B74FC11569C15F296D* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___num0, const RuntimeMethod* method) 
{
	{
		// return this.Imod(num.Ushln(this.shift));
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___num0;
		int32_t L_1 = __this->___shift_2;
		NullCheck(L_0);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2;
		L_2 = BN_Ushln_mDC535D767894D4E486EEDD65A31504F74B9BA841(L_0, L_1, NULL);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_3;
		L_3 = Red_Imod_m55AEA08A22BDA07C213F0B5674E402A0A82E6689(__this, L_2, NULL);
		return L_3;
	}
}
// BNSharp.BN BNSharp.Mont::ConvertFrom(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* Mont_ConvertFrom_m64141FF3F0D40091F3A9032442914FE9F83B2B7A (Mont_t8926333F330B452B1E3CE8B74FC11569C15F296D* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___num0, const RuntimeMethod* method) 
{
	{
		// var r = this.Imod(num.Mul(this.rinv));
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___num0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_1 = __this->___rinv_5;
		NullCheck(L_0);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2;
		L_2 = BN_Mul_m0023E9CB6AC95308A99037F602EE558102E08C1B(L_0, L_1, NULL);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_3;
		L_3 = Red_Imod_m55AEA08A22BDA07C213F0B5674E402A0A82E6689(__this, L_2, NULL);
		// r.red = null;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_4 = L_3;
		NullCheck(L_4);
		L_4->___red_4 = (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___red_4), (void*)(Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92*)NULL);
		// return r;
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
// System.Void BNSharp.MPrime::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MPrime__ctor_m222E288C7617F08EA777D100AEEEF431CEE11C32 (MPrime_t2093D713ACC42277001478C1870901F98E6DBFDC* __this, String_t* ___name0, String_t* ___p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MPrime(string name, string p)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		__this->___name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_0);
		// this.p = new BN(p, 16);
		String_t* L_1 = ___p1;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2 = (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*)il2cpp_codegen_object_new(BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BN__ctor_mBD1B5FE4208512195FF431CC3B53E9B4A23D3F47(L_2, L_1, ((int32_t)16), 1, NULL);
		__this->___p_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___p_1), (void*)L_2);
		// this.n = this.p.BitLength();
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_3 = __this->___p_1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = BN_BitLength_m5325F70FE6E18996F0D3AE4292D01047500C8B47(L_3, NULL);
		__this->___n_2 = L_4;
		// this.k = new BN(1).Iushln(this.n).Isub(this.p);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_5 = (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*)il2cpp_codegen_object_new(BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		BN__ctor_m38F25106CEE7C5D24CF27D1CE95EE40825412311(L_5, ((int64_t)1), 1, NULL);
		int32_t L_6 = __this->___n_2;
		NullCheck(L_5);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_7;
		L_7 = BN_Iushln_mFE36C60B6A1EF5B0343BFB74C60708AE72ED261B(L_5, L_6, NULL);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_8 = __this->___p_1;
		NullCheck(L_7);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_9;
		L_9 = BN_Isub_m1F255A2CD6B0C5E900C52BB0AABA7B06393A4DC2(L_7, L_8, NULL);
		__this->___k_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_3), (void*)L_9);
		// this.tmp = this._tmp();
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_10;
		L_10 = MPrime__tmp_m203639CBE2D542353BCDBBBC7C3B14A7B9614CB8(__this, NULL);
		__this->___tmp_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tmp_4), (void*)L_10);
		// }
		return;
	}
}
// BNSharp.BN BNSharp.MPrime::_tmp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* MPrime__tmp_m203639CBE2D542353BCDBBBC7C3B14A7B9614CB8 (MPrime_t2093D713ACC42277001478C1870901F98E6DBFDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var tmp = new BN();
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*)il2cpp_codegen_object_new(BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BN__ctor_mF3631A7F840A00614637CEE881D58F8AA5B9C13C(L_0, NULL);
		// tmp.words = new int[(int)Math.Ceiling((double)this.n / 13)];
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_1 = L_0;
		int32_t L_2 = __this->___n_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = ceil(((double)(((double)L_2)/(13.0))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_3));
		NullCheck(L_1);
		L_1->___words_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___words_2), (void*)L_4);
		// return tmp;
		return L_1;
	}
}
// BNSharp.BN BNSharp.MPrime::Ireduce(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* MPrime_Ireduce_m55D9354BCE24122143C4AE3D95AC6BA2991F9E93 (MPrime_t2093D713ACC42277001478C1870901F98E6DBFDC* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___num0, const RuntimeMethod* method) 
{
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B5_0 = 0;
	{
		// var r = num;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___num0;
		V_0 = L_0;
	}

IL_0002:
	{
		// this.Split(r, this.tmp);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_1 = V_0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2 = __this->___tmp_4;
		VirtualActionInvoker2< BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* >::Invoke(4 /* System.Void BNSharp.MPrime::Split(BNSharp.BN,BNSharp.BN) */, __this, L_1, L_2);
		// r = this.ImulK(r);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_3 = V_0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_4;
		L_4 = VirtualFuncInvoker1< BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* >::Invoke(5 /* BNSharp.BN BNSharp.MPrime::ImulK(BNSharp.BN) */, __this, L_3);
		V_0 = L_4;
		// r = r.Iadd(this.tmp);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_5 = V_0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_6 = __this->___tmp_4;
		NullCheck(L_5);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_7;
		L_7 = BN_Iadd_m1FEA663378105EF1E2F9A3487C87AF5B24D01F58(L_5, L_6, NULL);
		V_0 = L_7;
		// rlen = r.BitLength();
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = BN_BitLength_m5325F70FE6E18996F0D3AE4292D01047500C8B47(L_8, NULL);
		V_1 = L_9;
		// } while (rlen > this.n);
		int32_t L_10 = V_1;
		int32_t L_11 = __this->___n_2;
		if ((((int32_t)L_10) > ((int32_t)L_11)))
		{
			goto IL_0002;
		}
	}
	{
		// var cmp = rlen < this.n ? -1 : r.Ucmp(this.p);
		int32_t L_12 = V_1;
		int32_t L_13 = __this->___n_2;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_14 = V_0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_15 = __this->___p_1;
		NullCheck(L_14);
		int32_t L_16;
		L_16 = BN_Ucmp_mCB9B89E2E5FEF0423DA7B4F5C62D2C4DC1EC7127(L_14, L_15, NULL);
		G_B5_0 = L_16;
		goto IL_004c;
	}

IL_004b:
	{
		G_B5_0 = (-1);
	}

IL_004c:
	{
		V_2 = G_B5_0;
		// if (cmp == 0)
		int32_t L_17 = V_2;
		if (L_17)
		{
			goto IL_0062;
		}
	}
	{
		// r.words[0] = 0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_18 = V_0;
		NullCheck(L_18);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = L_18->___words_2;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		// r.Length = 1;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_20 = V_0;
		NullCheck(L_20);
		L_20->___Length_3 = 1;
		goto IL_007c;
	}

IL_0062:
	{
		// else if (cmp > 0)
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		// r.Isub(this.p);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_22 = V_0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_23 = __this->___p_1;
		NullCheck(L_22);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_24;
		L_24 = BN_Isub_m1F255A2CD6B0C5E900C52BB0AABA7B06393A4DC2(L_22, L_23, NULL);
		goto IL_007c;
	}

IL_0075:
	{
		// r._strip();
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_25 = V_0;
		NullCheck(L_25);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_26;
		L_26 = BN__strip_mE07F8F68F583B6071A9A27C2AFCBDED5B4BF67D0(L_25, NULL);
	}

IL_007c:
	{
		// return r;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_27 = V_0;
		return L_27;
	}
}
// System.Void BNSharp.MPrime::Split(BNSharp.BN,BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MPrime_Split_m295B3FAD9CC2161C42CE92C37C59BB4A3A5687D0 (MPrime_t2093D713ACC42277001478C1870901F98E6DBFDC* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___input0, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___out1, const RuntimeMethod* method) 
{
	{
		// input.Iushrn(this.n, 0, @out);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___input0;
		int32_t L_1 = __this->___n_2;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2 = ___out1;
		NullCheck(L_0);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_3;
		L_3 = BN_Iushrn_m550F3BAC995BE733DBED6DDBDF2E76706E26E415(L_0, L_1, 0, L_2, NULL);
		// }
		return;
	}
}
// BNSharp.BN BNSharp.MPrime::ImulK(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* MPrime_ImulK_m367962E989506BDA3153336D7B3D3FF9589882A1 (MPrime_t2093D713ACC42277001478C1870901F98E6DBFDC* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___num0, const RuntimeMethod* method) 
{
	{
		// return num.Imul(this.k);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___num0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_1 = __this->___k_3;
		NullCheck(L_0);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2;
		L_2 = BN_Imul_m372373AB07471C75221F9FEB3BF0595E657EF79B(L_0, L_1, NULL);
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
// System.Void BNSharp.P192::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P192__ctor_m840C5C5D19A72B7AEE082590285510D47C77ECAD (P192_t61D199D181544710D5C227E222F8E63A67956085* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0503FBD8149A36243AD39D4EA4BB665808AE1636);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4C01072D904F5BCDAFBFCD23B0C42F43EDD792E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public P192() : base("p192", "ffffffff ffffffff ffffffff fffffffe ffffffff ffffffff")
		MPrime__ctor_m222E288C7617F08EA777D100AEEEF431CEE11C32(__this, _stringLiteralF4C01072D904F5BCDAFBFCD23B0C42F43EDD792E, _stringLiteral0503FBD8149A36243AD39D4EA4BB665808AE1636, NULL);
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
// System.Void BNSharp.P224::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P224__ctor_m72E94B2CF03E9C69298E64169D327F7645D29981 (P224_tBD18960B955B2CA4FC41B9B6DCEA46F78ED86A5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32BB243ED13DA8E261D1205808A9A827E9B54758);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79771932CCC3A04ECB752A1DEDC5A407B4326FC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public P224() : base("p224", "ffffffff ffffffff ffffffff ffffffff 00000000 00000000 00000001")
		MPrime__ctor_m222E288C7617F08EA777D100AEEEF431CEE11C32(__this, _stringLiteral32BB243ED13DA8E261D1205808A9A827E9B54758, _stringLiteral79771932CCC3A04ECB752A1DEDC5A407B4326FC7, NULL);
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
// System.Void BNSharp.P25519::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P25519__ctor_m66B6F081321126F766D5F122EFC200077E3608BA (P25519_t572A40235290634375C483BC155BA16ABE68DA13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71C7D3BB3AE871CF851795E7E9313741A453F5A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF3A9701F477BEEA65598679690E8FFAE22F67DB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public P25519() : base("25519", "7fffffffffffffff ffffffffffffffff ffffffffffffffff ffffffffffffffed")
		MPrime__ctor_m222E288C7617F08EA777D100AEEEF431CEE11C32(__this, _stringLiteralEF3A9701F477BEEA65598679690E8FFAE22F67DB, _stringLiteral71C7D3BB3AE871CF851795E7E9313741A453F5A2, NULL);
		// }
		return;
	}
}
// BNSharp.BN BNSharp.P25519::ImulK(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* P25519_ImulK_mD88AF6E15EBE9D139C99DF1804C87E667FF54E50 (P25519_t572A40235290634375C483BC155BA16ABE68DA13* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___num0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// var carry = 0;
		V_0 = 0;
		// for (var i = 0; i < num.Length; i++)
		V_1 = 0;
		goto IL_002e;
	}

IL_0006:
	{
		// var hi = (num.words[i] | 0) * 0x13 + carry;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___num0;
		NullCheck(L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0->___words_2;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		int32_t L_5 = V_0;
		// var lo = hi & 0x3ffffff;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)(L_4|0)), ((int32_t)19))), L_5));
		V_2 = ((int32_t)(L_6&((int32_t)67108863)));
		// hi >>= 26;
		// num.words[i] = lo;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_7 = ___num0;
		NullCheck(L_7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7->___words_2;
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (int32_t)L_10);
		// carry = hi;
		V_0 = ((int32_t)(L_6>>((int32_t)26)));
		// for (var i = 0; i < num.Length; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002e:
	{
		// for (var i = 0; i < num.Length; i++)
		int32_t L_12 = V_1;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_13 = ___num0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___Length_3;
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0006;
		}
	}
	{
		// if (carry != 0)
		int32_t L_15 = V_0;
		if (!L_15)
		{
			goto IL_0053;
		}
	}
	{
		// num.words[num.Length++] = carry;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_16 = ___num0;
		NullCheck(L_16);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = L_16->___words_2;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_18 = ___num0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_19 = L_18;
		NullCheck(L_19);
		int32_t L_20 = L_19->___Length_3;
		V_3 = L_20;
		int32_t L_21 = V_3;
		NullCheck(L_19);
		L_19->___Length_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		int32_t L_22 = V_3;
		int32_t L_23 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (int32_t)L_23);
	}

IL_0053:
	{
		// return num;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_24 = ___num0;
		return L_24;
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
// System.Void BNSharp.Red::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Red__ctor_m218918067F65C97668A3A322BB21F79FD23E1A59 (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* __this, String_t* ___m0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MPrime_t2093D713ACC42277001478C1870901F98E6DBFDC* V_0 = NULL;
	{
		// public Red(string m)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// var prime = BN.Prime(m);
		String_t* L_0 = ___m0;
		il2cpp_codegen_runtime_class_init_inline(BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77_il2cpp_TypeInfo_var);
		MPrime_t2093D713ACC42277001478C1870901F98E6DBFDC* L_1;
		L_1 = BN_Prime_m6B0B585BC5A45BA93C908F4CBAF4A4BD9A213FF2(L_0, NULL);
		V_0 = L_1;
		// this.m = prime.p;
		MPrime_t2093D713ACC42277001478C1870901F98E6DBFDC* L_2 = V_0;
		NullCheck(L_2);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_3 = L_2->___p_1;
		__this->___m_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_0), (void*)L_3);
		// this.prime = prime;
		MPrime_t2093D713ACC42277001478C1870901F98E6DBFDC* L_4 = V_0;
		__this->___prime_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prime_1), (void*)L_4);
		// }
		return;
	}
}
// System.Void BNSharp.Red::.ctor(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Red__ctor_m2755B29886F877F3AE2144AE41C366640A977920 (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___m0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA6E871A9F95571E0661C587B0F0FE3675ED3511);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Red(BN m)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Functions.Assert(m.Gtn(1), "modulus must be greater than 1");
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___m0;
		NullCheck(L_0);
		bool L_1;
		L_1 = BN_Gtn_m64D348AB59B17D602780232AECB509A8B6ED2948(L_0, 1, NULL);
		Functions_Assert_m95CB7EA6CEE9D7C55213C48C439F6FC7920CE6ED(L_1, _stringLiteralCA6E871A9F95571E0661C587B0F0FE3675ED3511, NULL);
		// this.m = m;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2 = ___m0;
		__this->___m_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_0), (void*)L_2);
		// this.prime = null;
		__this->___prime_1 = (MPrime_t2093D713ACC42277001478C1870901F98E6DBFDC*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prime_1), (void*)(MPrime_t2093D713ACC42277001478C1870901F98E6DBFDC*)NULL);
		// }
		return;
	}
}
// System.Void BNSharp.Red::_verify1(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Red__verify1_m22BEB03C17EBA703FC7B48D6DA408A39F5C65B59 (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___a0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1777E04081A95934FC05C77E36A1FC5D54E41211);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral454BDE7E23EE3B7B6F216B675E6E0C6FDB3D55C3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Functions.Assert(a.Negative == 0, "red works only with positives");
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___a0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Negative_1;
		Functions_Assert_m95CB7EA6CEE9D7C55213C48C439F6FC7920CE6ED((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), _stringLiteral454BDE7E23EE3B7B6F216B675E6E0C6FDB3D55C3, NULL);
		// Functions.Assert(a.red != null, "red works only with red numbers");
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2 = ___a0;
		NullCheck(L_2);
		Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* L_3 = L_2->___red_4;
		Functions_Assert_m95CB7EA6CEE9D7C55213C48C439F6FC7920CE6ED((bool)((!(((RuntimeObject*)(Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), _stringLiteral1777E04081A95934FC05C77E36A1FC5D54E41211, NULL);
		// }
		return;
	}
}
// System.Void BNSharp.Red::_verify2(BNSharp.BN,BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Red__verify2_m3A66393E0DBD4F2121768BA453DE5F11465C38C6 (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___a0, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1777E04081A95934FC05C77E36A1FC5D54E41211);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral454BDE7E23EE3B7B6F216B675E6E0C6FDB3D55C3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// Functions.Assert((a.Negative | b.Negative) == 0, "red works only with positives");
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___a0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Negative_1;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2 = ___b1;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Negative_1;
		Functions_Assert_m95CB7EA6CEE9D7C55213C48C439F6FC7920CE6ED((bool)((((int32_t)((int32_t)(L_1|L_3))) == ((int32_t)0))? 1 : 0), _stringLiteral454BDE7E23EE3B7B6F216B675E6E0C6FDB3D55C3, NULL);
		// Functions.Assert(a.red != null && a.red == b.red,
		//   "red works only with red numbers");
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_4 = ___a0;
		NullCheck(L_4);
		Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* L_5 = L_4->___red_4;
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_6 = ___a0;
		NullCheck(L_6);
		Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* L_7 = L_6->___red_4;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_8 = ___b1;
		NullCheck(L_8);
		Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* L_9 = L_8->___red_4;
		G_B3_0 = ((((RuntimeObject*)(Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92*)L_7) == ((RuntimeObject*)(Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92*)L_9))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B3_0 = 0;
	}

IL_0033:
	{
		Functions_Assert_m95CB7EA6CEE9D7C55213C48C439F6FC7920CE6ED((bool)G_B3_0, _stringLiteral1777E04081A95934FC05C77E36A1FC5D54E41211, NULL);
		// }
		return;
	}
}
// BNSharp.BN BNSharp.Red::Imod(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* Red_Imod_m55AEA08A22BDA07C213F0B5674E402A0A82E6689 (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___a0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.prime != null) return this.prime.Ireduce(a)._forceRed(this);
		MPrime_t2093D713ACC42277001478C1870901F98E6DBFDC* L_0 = __this->___prime_1;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// if (this.prime != null) return this.prime.Ireduce(a)._forceRed(this);
		MPrime_t2093D713ACC42277001478C1870901F98E6DBFDC* L_1 = __this->___prime_1;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2 = ___a0;
		NullCheck(L_1);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_3;
		L_3 = MPrime_Ireduce_m55D9354BCE24122143C4AE3D95AC6BA2991F9E93(L_1, L_2, NULL);
		NullCheck(L_3);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_4;
		L_4 = BN__forceRed_mAA398E9058AE5D8CD55B97F2583F21D9A3223DE6(L_3, __this, NULL);
		return L_4;
	}

IL_001b:
	{
		// BN.move(a, a.Umod(this.m)._forceRed(this));
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_5 = ___a0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_6 = ___a0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_7 = __this->___m_0;
		NullCheck(L_6);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_8;
		L_8 = BN_Umod_m6F0A64F184AB459A8CB6B2D8BF2E63045E47CFDC(L_6, L_7, NULL);
		NullCheck(L_8);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_9;
		L_9 = BN__forceRed_mAA398E9058AE5D8CD55B97F2583F21D9A3223DE6(L_8, __this, NULL);
		il2cpp_codegen_runtime_class_init_inline(BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77_il2cpp_TypeInfo_var);
		BN_move_m2C589B0068408A87B30CC5F42B5F7A9B037400E1(L_5, L_9, NULL);
		// return a;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_10 = ___a0;
		return L_10;
	}
}
// BNSharp.BN BNSharp.Red::Neg(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* Red_Neg_m80501B4874077AF40252A08827A8FDC94FE98E79 (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___a0, const RuntimeMethod* method) 
{
	{
		// if (a.IsZero())
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___a0;
		NullCheck(L_0);
		bool L_1;
		L_1 = BN_IsZero_mC595B7C6B18232EE575AD6B2FFCB4BA6FA24F0BD(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return a.Clone();
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2 = ___a0;
		NullCheck(L_2);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_3;
		L_3 = BN_Clone_m913FCCDDC548D159D930E6479D81B1556ADE1FCF(L_2, NULL);
		return L_3;
	}

IL_000f:
	{
		// return this.m.Sub(a)._forceRed(this);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_4 = __this->___m_0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_5 = ___a0;
		NullCheck(L_4);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_6;
		L_6 = BN_Sub_m64C53EBCF9D4CD2E3E67E207999B3D6E45984CC4(L_4, L_5, NULL);
		NullCheck(L_6);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_7;
		L_7 = BN__forceRed_mAA398E9058AE5D8CD55B97F2583F21D9A3223DE6(L_6, __this, NULL);
		return L_7;
	}
}
// BNSharp.BN BNSharp.Red::Add(BNSharp.BN,BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* Red_Add_mD4A9F25A109B9B0C36F229632D082ACAC426D2A3 (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___a0, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___b1, const RuntimeMethod* method) 
{
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* V_0 = NULL;
	{
		// this._verify2(a, b);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___a0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_1 = ___b1;
		Red__verify2_m3A66393E0DBD4F2121768BA453DE5F11465C38C6(__this, L_0, L_1, NULL);
		// var res = a.Add(b);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2 = ___a0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_3 = ___b1;
		NullCheck(L_2);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_4;
		L_4 = BN_Add_m0B4E9906F7B7201C011194D2139A200A3CB786DB(L_2, L_3, NULL);
		V_0 = L_4;
		// if (res.Cmp(this.m) >= 0)
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_5 = V_0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_6 = __this->___m_0;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = BN_Cmp_m8BCA5B0A1D731A7FC021CA390B3D6E67C96D89CC(L_5, L_6, NULL);
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// res.Isub(this.m);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_8 = V_0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_9 = __this->___m_0;
		NullCheck(L_8);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_10;
		L_10 = BN_Isub_m1F255A2CD6B0C5E900C52BB0AABA7B06393A4DC2(L_8, L_9, NULL);
	}

IL_002c:
	{
		// return res._forceRed(this);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_11 = V_0;
		NullCheck(L_11);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_12;
		L_12 = BN__forceRed_mAA398E9058AE5D8CD55B97F2583F21D9A3223DE6(L_11, __this, NULL);
		return L_12;
	}
}
// BNSharp.BN BNSharp.Red::Iadd(BNSharp.BN,BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* Red_Iadd_mD1212B1D482FD8CD5E42F07D6B063799E9993B21 (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___a0, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___b1, const RuntimeMethod* method) 
{
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* V_0 = NULL;
	{
		// this._verify2(a, b);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___a0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_1 = ___b1;
		Red__verify2_m3A66393E0DBD4F2121768BA453DE5F11465C38C6(__this, L_0, L_1, NULL);
		// var res = a.Iadd(b);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2 = ___a0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_3 = ___b1;
		NullCheck(L_2);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_4;
		L_4 = BN_Iadd_m1FEA663378105EF1E2F9A3487C87AF5B24D01F58(L_2, L_3, NULL);
		V_0 = L_4;
		// if (res.Cmp(this.m) >= 0)
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_5 = V_0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_6 = __this->___m_0;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = BN_Cmp_m8BCA5B0A1D731A7FC021CA390B3D6E67C96D89CC(L_5, L_6, NULL);
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// res.Isub(this.m);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_8 = V_0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_9 = __this->___m_0;
		NullCheck(L_8);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_10;
		L_10 = BN_Isub_m1F255A2CD6B0C5E900C52BB0AABA7B06393A4DC2(L_8, L_9, NULL);
	}

IL_002c:
	{
		// return res;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_11 = V_0;
		return L_11;
	}
}
// BNSharp.BN BNSharp.Red::Sub(BNSharp.BN,BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* Red_Sub_mEF9B910B3896F1447EDB1FBE6D474F953D61B48D (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___a0, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___b1, const RuntimeMethod* method) 
{
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* V_0 = NULL;
	{
		// this._verify2(a, b);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___a0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_1 = ___b1;
		Red__verify2_m3A66393E0DBD4F2121768BA453DE5F11465C38C6(__this, L_0, L_1, NULL);
		// var res = a.Sub(b);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2 = ___a0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_3 = ___b1;
		NullCheck(L_2);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_4;
		L_4 = BN_Sub_m64C53EBCF9D4CD2E3E67E207999B3D6E45984CC4(L_2, L_3, NULL);
		V_0 = L_4;
		// if (res.Cmpn(0) < 0)
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = BN_Cmpn_mDD8A9BE43B0270F09C097C5E555AD71CD08391A1(L_5, 0, NULL);
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		// res.Iadd(this.m);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_7 = V_0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_8 = __this->___m_0;
		NullCheck(L_7);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_9;
		L_9 = BN_Iadd_m1FEA663378105EF1E2F9A3487C87AF5B24D01F58(L_7, L_8, NULL);
	}

IL_0027:
	{
		// return res._forceRed(this);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_10 = V_0;
		NullCheck(L_10);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_11;
		L_11 = BN__forceRed_mAA398E9058AE5D8CD55B97F2583F21D9A3223DE6(L_10, __this, NULL);
		return L_11;
	}
}
// BNSharp.BN BNSharp.Red::Isub(BNSharp.BN,BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* Red_Isub_m69D68207BAB918ECC67A4AE7671AB496E5D7C0CB (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___a0, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___b1, const RuntimeMethod* method) 
{
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* V_0 = NULL;
	{
		// this._verify2(a, b);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___a0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_1 = ___b1;
		Red__verify2_m3A66393E0DBD4F2121768BA453DE5F11465C38C6(__this, L_0, L_1, NULL);
		// var res = a.Isub(b);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2 = ___a0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_3 = ___b1;
		NullCheck(L_2);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_4;
		L_4 = BN_Isub_m1F255A2CD6B0C5E900C52BB0AABA7B06393A4DC2(L_2, L_3, NULL);
		V_0 = L_4;
		// if (res.Cmpn(0) < 0)
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = BN_Cmpn_mDD8A9BE43B0270F09C097C5E555AD71CD08391A1(L_5, 0, NULL);
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		// res.Iadd(this.m);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_7 = V_0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_8 = __this->___m_0;
		NullCheck(L_7);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_9;
		L_9 = BN_Iadd_m1FEA663378105EF1E2F9A3487C87AF5B24D01F58(L_7, L_8, NULL);
	}

IL_0027:
	{
		// return res;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_10 = V_0;
		return L_10;
	}
}
// BNSharp.BN BNSharp.Red::Shl(BNSharp.BN,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* Red_Shl_mA42D5EAEF050D8E119DAA7EC141548828DD65872 (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___a0, int32_t ___num1, const RuntimeMethod* method) 
{
	{
		// this._verify1(a);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___a0;
		Red__verify1_m22BEB03C17EBA703FC7B48D6DA408A39F5C65B59(__this, L_0, NULL);
		// return this.Imod(a.Ushln(num));
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_1 = ___a0;
		int32_t L_2 = ___num1;
		NullCheck(L_1);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_3;
		L_3 = BN_Ushln_mDC535D767894D4E486EEDD65A31504F74B9BA841(L_1, L_2, NULL);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_4;
		L_4 = Red_Imod_m55AEA08A22BDA07C213F0B5674E402A0A82E6689(__this, L_3, NULL);
		return L_4;
	}
}
// BNSharp.BN BNSharp.Red::Imul(BNSharp.BN,BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* Red_Imul_m1408909FEDF53B994B2330F183B8912FF15EB9EF (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___a0, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___b1, const RuntimeMethod* method) 
{
	{
		// this._verify2(a, b);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___a0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_1 = ___b1;
		Red__verify2_m3A66393E0DBD4F2121768BA453DE5F11465C38C6(__this, L_0, L_1, NULL);
		// return this.Imod(a.Imul(b));
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2 = ___a0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_3 = ___b1;
		NullCheck(L_2);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_4;
		L_4 = BN_Imul_m372373AB07471C75221F9FEB3BF0595E657EF79B(L_2, L_3, NULL);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_5;
		L_5 = Red_Imod_m55AEA08A22BDA07C213F0B5674E402A0A82E6689(__this, L_4, NULL);
		return L_5;
	}
}
// BNSharp.BN BNSharp.Red::Mul(BNSharp.BN,BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* Red_Mul_mDF4908B74F7D74BFCC98785FB7484D84F57E2B1E (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___a0, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___b1, const RuntimeMethod* method) 
{
	{
		// this._verify2(a, b);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___a0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_1 = ___b1;
		Red__verify2_m3A66393E0DBD4F2121768BA453DE5F11465C38C6(__this, L_0, L_1, NULL);
		// return this.Imod(a.Mul(b));
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2 = ___a0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_3 = ___b1;
		NullCheck(L_2);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_4;
		L_4 = BN_Mul_m0023E9CB6AC95308A99037F602EE558102E08C1B(L_2, L_3, NULL);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_5;
		L_5 = Red_Imod_m55AEA08A22BDA07C213F0B5674E402A0A82E6689(__this, L_4, NULL);
		return L_5;
	}
}
// BNSharp.BN BNSharp.Red::Isqr(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* Red_Isqr_m5158F156A37F01754279B8F5933423B42A193CFF (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___a0, const RuntimeMethod* method) 
{
	{
		// return this.Imul(a, a.Clone());
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___a0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_1 = ___a0;
		NullCheck(L_1);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2;
		L_2 = BN_Clone_m913FCCDDC548D159D930E6479D81B1556ADE1FCF(L_1, NULL);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_3;
		L_3 = VirtualFuncInvoker2< BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* >::Invoke(4 /* BNSharp.BN BNSharp.Red::Imul(BNSharp.BN,BNSharp.BN) */, __this, L_0, L_2);
		return L_3;
	}
}
// BNSharp.BN BNSharp.Red::Sqr(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* Red_Sqr_m3D4524D1666D7065F29F33B4AFE3E6F0F285038A (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___a0, const RuntimeMethod* method) 
{
	{
		// return this.Mul(a, a);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___a0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_1 = ___a0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2;
		L_2 = VirtualFuncInvoker2< BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* >::Invoke(5 /* BNSharp.BN BNSharp.Red::Mul(BNSharp.BN,BNSharp.BN) */, __this, L_0, L_1);
		return L_2;
	}
}
// BNSharp.BN BNSharp.Red::Sqrt(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* Red_Sqrt_m73BDE468ADA33D565470EAD2EC86F9CF8BC8578F (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___a0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* V_0 = NULL;
	int32_t V_1 = 0;
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* V_2 = NULL;
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* V_3 = NULL;
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* V_4 = NULL;
	int32_t V_5 = 0;
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* V_6 = NULL;
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* V_7 = NULL;
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* V_8 = NULL;
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* V_9 = NULL;
	int32_t V_10 = 0;
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* V_11 = NULL;
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* V_12 = NULL;
	int32_t V_13 = 0;
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* V_14 = NULL;
	{
		// if (a.IsZero()) return a.Clone();
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___a0;
		NullCheck(L_0);
		bool L_1;
		L_1 = BN_IsZero_mC595B7C6B18232EE575AD6B2FFCB4BA6FA24F0BD(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (a.IsZero()) return a.Clone();
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2 = ___a0;
		NullCheck(L_2);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_3;
		L_3 = BN_Clone_m913FCCDDC548D159D930E6479D81B1556ADE1FCF(L_2, NULL);
		return L_3;
	}

IL_000f:
	{
		// var mod3 = this.m.Andln(3);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_4 = __this->___m_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = BN_Andln_m1623B898A986B7F8C47EDFCBD5B53CE0A928221C(L_4, 3, NULL);
		// Functions.Assert(mod3 % 2 == 1);
		int32_t L_6 = L_5;
		Functions_Assert_m95CB7EA6CEE9D7C55213C48C439F6FC7920CE6ED((bool)((((int32_t)((int32_t)(L_6%2))) == ((int32_t)1))? 1 : 0), (String_t*)NULL, NULL);
		// if (mod3 == 3)
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_0051;
		}
	}
	{
		// var pow = this.m.Add(new BN(1)).Iushrn(2);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_7 = __this->___m_0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_8 = (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*)il2cpp_codegen_object_new(BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		BN__ctor_m38F25106CEE7C5D24CF27D1CE95EE40825412311(L_8, ((int64_t)1), 1, NULL);
		NullCheck(L_7);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_9;
		L_9 = BN_Add_m0B4E9906F7B7201C011194D2139A200A3CB786DB(L_7, L_8, NULL);
		NullCheck(L_9);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_10;
		L_10 = BN_Iushrn_m550F3BAC995BE733DBED6DDBDF2E76706E26E415(L_9, 2, 0, (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*)NULL, NULL);
		V_11 = L_10;
		// return this.Pow(a, pow);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_11 = ___a0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_12 = V_11;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_13;
		L_13 = Red_Pow_mA8E016BDF91DF31BE2EDA30ED8C47E0067A242A9(__this, L_11, L_12, NULL);
		return L_13;
	}

IL_0051:
	{
		// var q = this.m.Subn(1);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_14 = __this->___m_0;
		NullCheck(L_14);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_15;
		L_15 = BN_Subn_mE7739B69F76F65EEB62D58A857060B5D0F50B8A2(L_14, 1, NULL);
		V_0 = L_15;
		// var s = 0;
		V_1 = 0;
		goto IL_0070;
	}

IL_0062:
	{
		// s++;
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		// q.Iushrn(1);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_17 = V_0;
		NullCheck(L_17);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_18;
		L_18 = BN_Iushrn_m550F3BAC995BE733DBED6DDBDF2E76706E26E415(L_17, 1, 0, (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*)NULL, NULL);
	}

IL_0070:
	{
		// while (!q.IsZero() && q.Andln(1) == 0)
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_19 = V_0;
		NullCheck(L_19);
		bool L_20;
		L_20 = BN_IsZero_mC595B7C6B18232EE575AD6B2FFCB4BA6FA24F0BD(L_19, NULL);
		if (L_20)
		{
			goto IL_0081;
		}
	}
	{
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = BN_Andln_m1623B898A986B7F8C47EDFCBD5B53CE0A928221C(L_21, 1, NULL);
		if (!L_22)
		{
			goto IL_0062;
		}
	}

IL_0081:
	{
		// Functions.Assert(!q.IsZero());
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_23 = V_0;
		NullCheck(L_23);
		bool L_24;
		L_24 = BN_IsZero_mC595B7C6B18232EE575AD6B2FFCB4BA6FA24F0BD(L_23, NULL);
		Functions_Assert_m95CB7EA6CEE9D7C55213C48C439F6FC7920CE6ED((bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0), (String_t*)NULL, NULL);
		// var one = new BN(1).ToRed(this);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_25 = (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*)il2cpp_codegen_object_new(BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		BN__ctor_m38F25106CEE7C5D24CF27D1CE95EE40825412311(L_25, ((int64_t)1), 1, NULL);
		NullCheck(L_25);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_26;
		L_26 = BN_ToRed_m53B5883B70A58A7176DF981243ECDAF74C25F7DC(L_25, __this, NULL);
		V_2 = L_26;
		// var nOne = one.RedNeg();
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_27 = V_2;
		NullCheck(L_27);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_28;
		L_28 = BN_RedNeg_mFA8232EC20D54FA9ECB637CB9116EA9F28FE0457(L_27, NULL);
		V_3 = L_28;
		// var lpow = this.m.Subn(1).Iushrn(1);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_29 = __this->___m_0;
		NullCheck(L_29);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_30;
		L_30 = BN_Subn_mE7739B69F76F65EEB62D58A857060B5D0F50B8A2(L_29, 1, NULL);
		NullCheck(L_30);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_31;
		L_31 = BN_Iushrn_m550F3BAC995BE733DBED6DDBDF2E76706E26E415(L_30, 1, 0, (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*)NULL, NULL);
		V_4 = L_31;
		// var z0 = this.m.BitLength();
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_32 = __this->___m_0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = BN_BitLength_m5325F70FE6E18996F0D3AE4292D01047500C8B47(L_32, NULL);
		V_5 = L_33;
		// var z = new BN(2 * z0 * z0).ToRed(this);
		int32_t L_34 = V_5;
		int32_t L_35 = V_5;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_36 = (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*)il2cpp_codegen_object_new(BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		BN__ctor_m38F25106CEE7C5D24CF27D1CE95EE40825412311(L_36, ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(2, L_34)), L_35))), 1, NULL);
		NullCheck(L_36);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_37;
		L_37 = BN_ToRed_m53B5883B70A58A7176DF981243ECDAF74C25F7DC(L_36, __this, NULL);
		V_6 = L_37;
		goto IL_00ea;
	}

IL_00e1:
	{
		// z.RedIAdd(nOne);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_38 = V_6;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_39 = V_3;
		NullCheck(L_38);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_40;
		L_40 = BN_RedIAdd_mF89C5062ACD47D2B1456495A697DB599F9DB8A93(L_38, L_39, NULL);
	}

IL_00ea:
	{
		// while (this.Pow(z, lpow).Cmp(nOne) != 0)
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_41 = V_6;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_42 = V_4;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_43;
		L_43 = Red_Pow_mA8E016BDF91DF31BE2EDA30ED8C47E0067A242A9(__this, L_41, L_42, NULL);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_44 = V_3;
		NullCheck(L_43);
		int32_t L_45;
		L_45 = BN_Cmp_m8BCA5B0A1D731A7FC021CA390B3D6E67C96D89CC(L_43, L_44, NULL);
		if (L_45)
		{
			goto IL_00e1;
		}
	}
	{
		// var c = this.Pow(z, q);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_46 = V_6;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_47 = V_0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_48;
		L_48 = Red_Pow_mA8E016BDF91DF31BE2EDA30ED8C47E0067A242A9(__this, L_46, L_47, NULL);
		V_7 = L_48;
		// var r = this.Pow(a, q.Addn(1).Iushrn(1));
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_49 = ___a0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_50 = V_0;
		NullCheck(L_50);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_51;
		L_51 = BN_Addn_m8A1ADD3C2DACB93607F93939BBA2AC95C4F26D52(L_50, 1, NULL);
		NullCheck(L_51);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_52;
		L_52 = BN_Iushrn_m550F3BAC995BE733DBED6DDBDF2E76706E26E415(L_51, 1, 0, (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*)NULL, NULL);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_53;
		L_53 = Red_Pow_mA8E016BDF91DF31BE2EDA30ED8C47E0067A242A9(__this, L_49, L_52, NULL);
		V_8 = L_53;
		// var t = this.Pow(a, q);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_54 = ___a0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_55 = V_0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_56;
		L_56 = Red_Pow_mA8E016BDF91DF31BE2EDA30ED8C47E0067A242A9(__this, L_54, L_55, NULL);
		V_9 = L_56;
		// var m = s;
		int32_t L_57 = V_1;
		V_10 = L_57;
		goto IL_019d;
	}

IL_012e:
	{
		// var tmp = t;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_58 = V_9;
		V_12 = L_58;
		// for (i = 0; tmp.Cmp(one) != 0; i++)
		V_13 = 0;
		goto IL_0146;
	}

IL_0137:
	{
		// tmp = tmp.RedSqr();
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_59 = V_12;
		NullCheck(L_59);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_60;
		L_60 = BN_RedSqr_mEA995883F51E4268F48DB90D8242F74214631429(L_59, NULL);
		V_12 = L_60;
		// for (i = 0; tmp.Cmp(one) != 0; i++)
		int32_t L_61 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_0146:
	{
		// for (i = 0; tmp.Cmp(one) != 0; i++)
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_62 = V_12;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_63 = V_2;
		NullCheck(L_62);
		int32_t L_64;
		L_64 = BN_Cmp_m8BCA5B0A1D731A7FC021CA390B3D6E67C96D89CC(L_62, L_63, NULL);
		if (L_64)
		{
			goto IL_0137;
		}
	}
	{
		// Functions.Assert(i < m);
		int32_t L_65 = V_13;
		int32_t L_66 = V_10;
		Functions_Assert_m95CB7EA6CEE9D7C55213C48C439F6FC7920CE6ED((bool)((((int32_t)L_65) < ((int32_t)L_66))? 1 : 0), (String_t*)NULL, NULL);
		// var b = this.Pow(c, new BN(1).Iushln(m - i - 1));
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_67 = V_7;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_68 = (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*)il2cpp_codegen_object_new(BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77_il2cpp_TypeInfo_var);
		NullCheck(L_68);
		BN__ctor_m38F25106CEE7C5D24CF27D1CE95EE40825412311(L_68, ((int64_t)1), 1, NULL);
		int32_t L_69 = V_10;
		int32_t L_70 = V_13;
		NullCheck(L_68);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_71;
		L_71 = BN_Iushln_mFE36C60B6A1EF5B0343BFB74C60708AE72ED261B(L_68, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_69, L_70)), 1)), NULL);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_72;
		L_72 = Red_Pow_mA8E016BDF91DF31BE2EDA30ED8C47E0067A242A9(__this, L_67, L_71, NULL);
		V_14 = L_72;
		// r = r.RedMul(b);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_73 = V_8;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_74 = V_14;
		NullCheck(L_73);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_75;
		L_75 = BN_RedMul_m77998DB32317D6A4267A2166B392FB552AB0B7C2(L_73, L_74, NULL);
		V_8 = L_75;
		// c = b.RedSqr();
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_76 = V_14;
		NullCheck(L_76);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_77;
		L_77 = BN_RedSqr_mEA995883F51E4268F48DB90D8242F74214631429(L_76, NULL);
		V_7 = L_77;
		// t = t.RedMul(c);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_78 = V_9;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_79 = V_7;
		NullCheck(L_78);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_80;
		L_80 = BN_RedMul_m77998DB32317D6A4267A2166B392FB552AB0B7C2(L_78, L_79, NULL);
		V_9 = L_80;
		// m = i;
		int32_t L_81 = V_13;
		V_10 = L_81;
	}

IL_019d:
	{
		// while (t.Cmp(one) != 0)
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_82 = V_9;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_83 = V_2;
		NullCheck(L_82);
		int32_t L_84;
		L_84 = BN_Cmp_m8BCA5B0A1D731A7FC021CA390B3D6E67C96D89CC(L_82, L_83, NULL);
		if (L_84)
		{
			goto IL_012e;
		}
	}
	{
		// return r;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_85 = V_8;
		return L_85;
	}
}
// BNSharp.BN BNSharp.Red::Invm(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* Red_Invm_m510E4869A6A8A8983BC9BB66DC888941A7B164BB (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___a0, const RuntimeMethod* method) 
{
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* V_0 = NULL;
	{
		// var inv = a._invmp(this.m);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___a0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_1 = __this->___m_0;
		NullCheck(L_0);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2;
		L_2 = BN__invmp_mE5B9A9FBB438DA1979BFA43F452DD7B98993F2C8(L_0, L_1, NULL);
		V_0 = L_2;
		// if (inv.Negative != 0)
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Negative_1;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// inv.Negative = 0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_5 = V_0;
		NullCheck(L_5);
		L_5->___Negative_1 = 0;
		// return this.Imod(inv).RedNeg();
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_6 = V_0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_7;
		L_7 = Red_Imod_m55AEA08A22BDA07C213F0B5674E402A0A82E6689(__this, L_6, NULL);
		NullCheck(L_7);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_8;
		L_8 = BN_RedNeg_mFA8232EC20D54FA9ECB637CB9116EA9F28FE0457(L_7, NULL);
		return L_8;
	}

IL_0029:
	{
		// return this.Imod(inv);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_9 = V_0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_10;
		L_10 = Red_Imod_m55AEA08A22BDA07C213F0B5674E402A0A82E6689(__this, L_9, NULL);
		return L_10;
	}
}
// BNSharp.BN BNSharp.Red::Pow(BNSharp.BN,BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* Red_Pow_mA8E016BDF91DF31BE2EDA30ED8C47E0067A242A9 (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___a0, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___num1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BNU5BU5D_t2A377A1EAB36E79A9762DE4FCE7C59852EC6B303_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BNU5BU5D_t2A377A1EAB36E79A9762DE4FCE7C59852EC6B303* V_1 = NULL;
	int32_t V_2 = 0;
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		// if (num.IsZero()) return new BN(1).ToRed(this);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___num1;
		NullCheck(L_0);
		bool L_1;
		L_1 = BN_IsZero_mC595B7C6B18232EE575AD6B2FFCB4BA6FA24F0BD(L_0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (num.IsZero()) return new BN(1).ToRed(this);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2 = (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*)il2cpp_codegen_object_new(BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BN__ctor_m38F25106CEE7C5D24CF27D1CE95EE40825412311(L_2, ((int64_t)1), 1, NULL);
		NullCheck(L_2);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_3;
		L_3 = BN_ToRed_m53B5883B70A58A7176DF981243ECDAF74C25F7DC(L_2, __this, NULL);
		return L_3;
	}

IL_0017:
	{
		// if (num.Cmpn(1) == 0) return a.Clone();
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_4 = ___num1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = BN_Cmpn_mDD8A9BE43B0270F09C097C5E555AD71CD08391A1(L_4, 1, NULL);
		if (L_5)
		{
			goto IL_0027;
		}
	}
	{
		// if (num.Cmpn(1) == 0) return a.Clone();
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_6 = ___a0;
		NullCheck(L_6);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_7;
		L_7 = BN_Clone_m913FCCDDC548D159D930E6479D81B1556ADE1FCF(L_6, NULL);
		return L_7;
	}

IL_0027:
	{
		// var windowSize = 4;
		V_0 = 4;
		// var wnd = new BN[1 << windowSize];
		int32_t L_8 = V_0;
		BNU5BU5D_t2A377A1EAB36E79A9762DE4FCE7C59852EC6B303* L_9 = (BNU5BU5D_t2A377A1EAB36E79A9762DE4FCE7C59852EC6B303*)(BNU5BU5D_t2A377A1EAB36E79A9762DE4FCE7C59852EC6B303*)SZArrayNew(BNU5BU5D_t2A377A1EAB36E79A9762DE4FCE7C59852EC6B303_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_8&((int32_t)31))))));
		V_1 = L_9;
		// wnd[0] = new BN(1).ToRed(this);
		BNU5BU5D_t2A377A1EAB36E79A9762DE4FCE7C59852EC6B303* L_10 = V_1;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_11 = (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*)il2cpp_codegen_object_new(BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		BN__ctor_m38F25106CEE7C5D24CF27D1CE95EE40825412311(L_11, ((int64_t)1), 1, NULL);
		NullCheck(L_11);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_12;
		L_12 = BN_ToRed_m53B5883B70A58A7176DF981243ECDAF74C25F7DC(L_11, __this, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*)L_12);
		// wnd[1] = a;
		BNU5BU5D_t2A377A1EAB36E79A9762DE4FCE7C59852EC6B303* L_13 = V_1;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_14 = ___a0;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*)L_14);
		// for (i = 2; i < wnd.Length; i++)
		V_2 = 2;
		goto IL_0061;
	}

IL_004e:
	{
		// wnd[i] = this.Mul(wnd[i - 1], a);
		BNU5BU5D_t2A377A1EAB36E79A9762DE4FCE7C59852EC6B303* L_15 = V_1;
		int32_t L_16 = V_2;
		BNU5BU5D_t2A377A1EAB36E79A9762DE4FCE7C59852EC6B303* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_21 = ___a0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_22;
		L_22 = VirtualFuncInvoker2< BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* >::Invoke(5 /* BNSharp.BN BNSharp.Red::Mul(BNSharp.BN,BNSharp.BN) */, __this, L_20, L_21);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_22);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*)L_22);
		// for (i = 2; i < wnd.Length; i++)
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0061:
	{
		// for (i = 2; i < wnd.Length; i++)
		int32_t L_24 = V_2;
		BNU5BU5D_t2A377A1EAB36E79A9762DE4FCE7C59852EC6B303* L_25 = V_1;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_004e;
		}
	}
	{
		// var res = wnd[0];
		BNU5BU5D_t2A377A1EAB36E79A9762DE4FCE7C59852EC6B303* L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27 = 0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_3 = L_28;
		// var current = 0;
		V_4 = 0;
		// var currentLen = 0;
		V_5 = 0;
		// var start = num.BitLength() % 26;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_29 = ___num1;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = BN_BitLength_m5325F70FE6E18996F0D3AE4292D01047500C8B47(L_29, NULL);
		V_6 = ((int32_t)(L_30%((int32_t)26)));
		// if (start == 0)
		int32_t L_31 = V_6;
		if (L_31)
		{
			goto IL_0084;
		}
	}
	{
		// start = 26;
		V_6 = ((int32_t)26);
	}

IL_0084:
	{
		// for (i = num.Length - 1; i >= 0; i--)
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_32 = ___num1;
		NullCheck(L_32);
		int32_t L_33 = L_32->___Length_3;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_33, 1));
		goto IL_010c;
	}

IL_008f:
	{
		// var word = num.words[i];
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_34 = ___num1;
		NullCheck(L_34);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = L_34->___words_2;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		int32_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_7 = L_38;
		// for (var j = start - 1; j >= 0; j--)
		int32_t L_39 = V_6;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
		goto IL_00ff;
	}

IL_00a1:
	{
		// var bit = (word >> j) & 1;
		int32_t L_40 = V_7;
		int32_t L_41 = V_8;
		V_9 = ((int32_t)(((int32_t)(L_40>>((int32_t)(L_41&((int32_t)31)))))&1));
		// if (res != wnd[0])
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_42 = V_3;
		BNU5BU5D_t2A377A1EAB36E79A9762DE4FCE7C59852EC6B303* L_43 = V_1;
		NullCheck(L_43);
		int32_t L_44 = 0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		if ((((RuntimeObject*)(BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*)L_42) == ((RuntimeObject*)(BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*)L_45)))
		{
			goto IL_00bb;
		}
	}
	{
		// res = this.Sqr(res);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_46 = V_3;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_47;
		L_47 = Red_Sqr_m3D4524D1666D7065F29F33B4AFE3E6F0F285038A(__this, L_46, NULL);
		V_3 = L_47;
	}

IL_00bb:
	{
		// if (bit == 0 && current == 0)
		int32_t L_48 = V_9;
		if (L_48)
		{
			goto IL_00c8;
		}
	}
	{
		int32_t L_49 = V_4;
		if (L_49)
		{
			goto IL_00c8;
		}
	}
	{
		// currentLen = 0;
		V_5 = 0;
		// continue;
		goto IL_00f9;
	}

IL_00c8:
	{
		// current <<= 1;
		int32_t L_50 = V_4;
		V_4 = ((int32_t)(L_50<<1));
		// current |= bit;
		int32_t L_51 = V_4;
		int32_t L_52 = V_9;
		V_4 = ((int32_t)(L_51|L_52));
		// currentLen++;
		int32_t L_53 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		// if (currentLen != windowSize && (i != 0 || j != 0)) continue;
		int32_t L_54 = V_5;
		int32_t L_55 = V_0;
		if ((((int32_t)L_54) == ((int32_t)L_55)))
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_56 = V_2;
		if (L_56)
		{
			goto IL_00f9;
		}
	}
	{
		int32_t L_57 = V_8;
		if (L_57)
		{
			goto IL_00f9;
		}
	}

IL_00e7:
	{
		// res = this.Mul(res, wnd[current]);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_58 = V_3;
		BNU5BU5D_t2A377A1EAB36E79A9762DE4FCE7C59852EC6B303* L_59 = V_1;
		int32_t L_60 = V_4;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_63;
		L_63 = VirtualFuncInvoker2< BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* >::Invoke(5 /* BNSharp.BN BNSharp.Red::Mul(BNSharp.BN,BNSharp.BN) */, __this, L_58, L_62);
		V_3 = L_63;
		// currentLen = 0;
		V_5 = 0;
		// current = 0;
		V_4 = 0;
	}

IL_00f9:
	{
		// for (var j = start - 1; j >= 0; j--)
		int32_t L_64 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_64, 1));
	}

IL_00ff:
	{
		// for (var j = start - 1; j >= 0; j--)
		int32_t L_65 = V_8;
		if ((((int32_t)L_65) >= ((int32_t)0)))
		{
			goto IL_00a1;
		}
	}
	{
		// start = 26;
		V_6 = ((int32_t)26);
		// for (i = num.Length - 1; i >= 0; i--)
		int32_t L_66 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
	}

IL_010c:
	{
		// for (i = num.Length - 1; i >= 0; i--)
		int32_t L_67 = V_2;
		if ((((int32_t)L_67) >= ((int32_t)0)))
		{
			goto IL_008f;
		}
	}
	{
		// return res;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_68 = V_3;
		return L_68;
	}
}
// BNSharp.BN BNSharp.Red::ConvertTo(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* Red_ConvertTo_m22D9515F62FDF374A2EB565FE2DCF03ECC902FC3 (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___num0, const RuntimeMethod* method) 
{
	BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* V_0 = NULL;
	{
		// var r = num.Umod(this.m);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___num0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_1 = __this->___m_0;
		NullCheck(L_0);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2;
		L_2 = BN_Umod_m6F0A64F184AB459A8CB6B2D8BF2E63045E47CFDC(L_0, L_1, NULL);
		V_0 = L_2;
		// return r == num ? r.Clone() : r;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_3 = V_0;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_4 = ___num0;
		if ((((RuntimeObject*)(BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*)L_3) == ((RuntimeObject*)(BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77*)L_4)))
		{
			goto IL_0013;
		}
	}
	{
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_5 = V_0;
		return L_5;
	}

IL_0013:
	{
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_6 = V_0;
		NullCheck(L_6);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_7;
		L_7 = BN_Clone_m913FCCDDC548D159D930E6479D81B1556ADE1FCF(L_6, NULL);
		return L_7;
	}
}
// BNSharp.BN BNSharp.Red::ConvertFrom(BNSharp.BN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* Red_ConvertFrom_m190AB08706074ECBE0582CE5FB42324FEC1275A8 (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92* __this, BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* ___num0, const RuntimeMethod* method) 
{
	{
		// var res = num.Clone();
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_0 = ___num0;
		NullCheck(L_0);
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_1;
		L_1 = BN_Clone_m913FCCDDC548D159D930E6479D81B1556ADE1FCF(L_0, NULL);
		// res.red = null;
		BN_t5BB9AB63B8E781E0D48F6F24A2EDA9B0031DFF77* L_2 = L_1;
		NullCheck(L_2);
		L_2->___red_4 = (Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___red_4), (void*)(Red_tDCACC8C4BB5DD97F515916CD3D82BC0720D76B92*)NULL);
		// return res;
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
// System.String BNSharp.Extensions.NumberExtensions::ToString(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NumberExtensions_ToString_m25E5CA49EF91C12826825031C18A3D879F2CCB1C (int32_t ___num0, int32_t ___base1, const RuntimeMethod* method) 
{
	{
		// return DecimalToArbitrarySystem(num, @base);
		int32_t L_0 = ___num0;
		int32_t L_1 = ___base1;
		String_t* L_2;
		L_2 = NumberExtensions_DecimalToArbitrarySystem_m0B1F6EE87EF9F0DD26C6198AA5D1EF44EBA76075(((int64_t)L_0), L_1, NULL);
		return L_2;
	}
}
// System.String BNSharp.Extensions.NumberExtensions::DecimalToArbitrarySystem(System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NumberExtensions_DecimalToArbitrarySystem_m0B1F6EE87EF9F0DD26C6198AA5D1EF44EBA76075 (int64_t ___decimalNumber0, int32_t ___radix1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB700205FF65F52AA739D18D7B8B0C06536C7C99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// if (radix < 2 || radix > Digits.Length)
		int32_t L_0 = ___radix1;
		if ((((int32_t)L_0) < ((int32_t)2)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___radix1;
		NullCheck(_stringLiteralCB700205FF65F52AA739D18D7B8B0C06536C7C99);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralCB700205FF65F52AA739D18D7B8B0C06536C7C99, NULL);
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0034;
		}
	}

IL_0011:
	{
		// throw new ArgumentException("The radix must be >= 2 and <= " + Digits.Length.ToString());
		NullCheck(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB700205FF65F52AA739D18D7B8B0C06536C7C99)));
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB700205FF65F52AA739D18D7B8B0C06536C7C99)), NULL);
		V_4 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB477EB18904C184B2CE838DAB8AD4613718A329B)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NumberExtensions_DecimalToArbitrarySystem_m0B1F6EE87EF9F0DD26C6198AA5D1EF44EBA76075_RuntimeMethod_var)));
	}

IL_0034:
	{
		// if (decimalNumber == 0)
		int64_t L_7 = ___decimalNumber0;
		if (L_7)
		{
			goto IL_003d;
		}
	}
	{
		// return "0";
		return _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
	}

IL_003d:
	{
		// int index = BitsInLong - 1;
		V_0 = ((int32_t)63);
		// long currentNumber = Math.Abs(decimalNumber);
		int64_t L_8 = ___decimalNumber0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int64_t L_9;
		L_9 = il2cpp_codegen_abs(L_8);
		V_1 = L_9;
		// char[] charArray = new char[BitsInLong];
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		V_2 = L_10;
		goto IL_0070;
	}

IL_0051:
	{
		// int remainder = (int)(currentNumber % radix);
		int64_t L_11 = V_1;
		int32_t L_12 = ___radix1;
		V_5 = ((int32_t)((int64_t)(L_11%((int64_t)L_12))));
		// charArray[index--] = Digits[remainder];
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = V_2;
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		int32_t L_16 = V_5;
		NullCheck(_stringLiteralCB700205FF65F52AA739D18D7B8B0C06536C7C99);
		Il2CppChar L_17;
		L_17 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteralCB700205FF65F52AA739D18D7B8B0C06536C7C99, L_16, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Il2CppChar)L_17);
		// currentNumber = currentNumber / radix;
		int64_t L_18 = V_1;
		int32_t L_19 = ___radix1;
		V_1 = ((int64_t)(L_18/((int64_t)L_19)));
	}

IL_0070:
	{
		// while (currentNumber != 0)
		int64_t L_20 = V_1;
		if (L_20)
		{
			goto IL_0051;
		}
	}
	{
		// string result = new string(charArray, index + 1, BitsInLong - index - 1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_21 = V_2;
		int32_t L_22 = V_0;
		int32_t L_23 = V_0;
		String_t* L_24;
		L_24 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_21, ((int32_t)il2cpp_codegen_add(L_22, 1)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_23)), 1)), NULL);
		V_3 = L_24;
		// if (decimalNumber < 0)
		int64_t L_25 = ___decimalNumber0;
		if ((((int64_t)L_25) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0094;
		}
	}
	{
		// result = "-" + result;
		String_t* L_26 = V_3;
		String_t* L_27;
		L_27 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, L_26, NULL);
		V_3 = L_27;
	}

IL_0094:
	{
		// return result.ToLowerInvariant();
		String_t* L_28 = V_3;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_28, NULL);
		return L_29;
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
