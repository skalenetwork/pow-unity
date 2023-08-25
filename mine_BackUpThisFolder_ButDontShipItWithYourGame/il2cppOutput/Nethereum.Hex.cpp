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
// System.Func`2<System.Byte,System.Object>
struct Func_2_t6E66BCD31592FAA3B441B68BF938E37260DCFA3C;
// System.Func`2<System.Byte,System.String>
struct Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E;
// Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>
struct HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0;
// Nethereum.Hex.HexTypes.HexRPCType`1<System.Object>
struct HexRPCType_1_tF9310045E7DCDEBC006660889352D388D629A0F3;
// Nethereum.Hex.HexTypes.HexRPCType`1<System.String>
struct HexRPCType_1_t85C025036053F37838F6F71B2043F41BAB796FD1;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_tEE97FB3EBFE8765D0E2FC164B95E82BA5D0EAE86;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// Nethereum.Hex.HexConvertors.IHexConvertor`1<System.Numerics.BigInteger>
struct IHexConvertor_1_t065D8C7F14D94EDF4E83EE3837AA95C741793015;
// Nethereum.Hex.HexConvertors.IHexConvertor`1<System.Object>
struct IHexConvertor_1_t2AE0CC0EF0C71682726201B0A81A55E6FDBC3687;
// Nethereum.Hex.HexConvertors.IHexConvertor`1<System.String>
struct IHexConvertor_1_t927789FE004BEF2782DCB998B18697341586DECA;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B;
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
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
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
// Nethereum.Hex.HexTypes.HexBigInteger
struct HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811;
// Nethereum.Hex.HexConvertors.HexBigIntegerBigEndianConvertor
struct HexBigIntegerBigEndianConvertor_tE9413AE2652DF1D69CDCD7FA6F708896F2DE76C8;
// Nethereum.Hex.HexTypes.HexTypeFactory
struct HexTypeFactory_t7BF4452E17667E7E3118134886CA3FC1EA3436D1;
// Nethereum.Hex.HexTypes.HexUTF8String
struct HexUTF8String_t578C508FA751E6088C06E76A5983545D1B5237A2;
// Nethereum.Hex.HexConvertors.HexUTF8StringConvertor
struct HexUTF8StringConvertor_tA4626B906A3240AD679B60B6518855207ACAA000;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions/<>c
struct U3CU3Ec_t231D9C1EB717F2471905FE69D76AA57BA66D4ACF;

IL2CPP_EXTERN_C RuntimeClass* BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HexBigIntegerBigEndianConvertor_tE9413AE2652DF1D69CDCD7FA6F708896F2DE76C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HexUTF8StringConvertor_tA4626B906A3240AD679B60B6518855207ACAA000_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HexUTF8String_t578C508FA751E6088C06E76A5983545D1B5237A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t231D9C1EB717F2471905FE69D76AA57BA66D4ACF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral14EDE195912AFD586B3C9D6841D4786E35B50299;
IL2CPP_EXTERN_C String_t* _stringLiteral347BB4CBF7CC52D07091977DE184B410FFDDD5B7;
IL2CPP_EXTERN_C String_t* _stringLiteral4BCF4B50E72B7CCD6AD748E8D2FDCADBF49961A8;
IL2CPP_EXTERN_C String_t* _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89;
IL2CPP_EXTERN_C String_t* _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260;
IL2CPP_EXTERN_C String_t* _stringLiteral70C6D80A1C9DC0AE77AA63E1DC135F76ED9B37E0;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE1C5F82060828B85D20B64B14FDF6084A256C826_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisString_t_m2052FCC7ADC9755B1FCA666EB30114DE80CCF1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE6698319D8C4D7E21D7693BA39F6AEA848ED1C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HexBigIntegerConvertorExtensions_ToHex_m3FA9C6A50327618B0FCC603437EA8FBFF5482F97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HexByteConvertorExtensions_FromCharacterToByte_mEE18610E323554161BC6D8F99F22ED6309206EF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HexRPCType_1__ctor_m3AA65FC221755C7D7C11FC89749E95E9046B66BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HexRPCType_1__ctor_mBC5FDF3A27217EA3A6BCE81B95F70CA304CAD2FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HexRPCType_1__ctor_mD2DA5286ACBCCE380A2499C0BAD9395DF1CC1B34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HexRPCType_1__ctor_mD79EDFF0BA2516397A353DC571FA69896F1EA531_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HexRPCType_1_op_Equality_mC3A87099DAFB6C109637B611558A892934121788_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HexRPCType_1_set_HexValue_mF2925CC823BAC647AFC70178234B0316E0A07C2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m340AA5688FC1B07E49081519A407B6D09B49BAE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToHexU3Eb__1_0_m28B2607DC9CA8AE04C50019F41558ADA7A77B5DC_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tEE50AE518F44C56F5DC6D04E3669BE25E6F063A4 
{
};

// Nethereum.Hex.HexTypes.HexRPCType`1<System.String>
struct HexRPCType_1_t85C025036053F37838F6F71B2043F41BAB796FD1  : public RuntimeObject
{
	// Nethereum.Hex.HexConvertors.IHexConvertor`1<T> Nethereum.Hex.HexTypes.HexRPCType`1::convertor
	RuntimeObject* ___convertor_0;
	// System.String Nethereum.Hex.HexTypes.HexRPCType`1::hexValue
	String_t* ___hexValue_1;
	// T Nethereum.Hex.HexTypes.HexRPCType`1::value
	String_t* ___value_2;
	// System.Object Nethereum.Hex.HexTypes.HexRPCType`1::lockingObject
	RuntimeObject* ___lockingObject_3;
	// System.Boolean Nethereum.Hex.HexTypes.HexRPCType`1::needsInitialisingValue
	bool ___needsInitialisingValue_4;
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
struct Il2CppArrayBounds;

// System.BitConverter
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27  : public RuntimeObject
{
};

struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields
{
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_0;
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

// Nethereum.Hex.HexConvertors.HexBigIntegerBigEndianConvertor
struct HexBigIntegerBigEndianConvertor_tE9413AE2652DF1D69CDCD7FA6F708896F2DE76C8  : public RuntimeObject
{
};

// Nethereum.Hex.HexConvertors.Extensions.HexBigIntegerConvertorExtensions
struct HexBigIntegerConvertorExtensions_tFE80EE8247A0372C1E8CB31F0661E8095EA89E56  : public RuntimeObject
{
};

// Nethereum.Hex.HexTypes.HexBigIntegerNumberExtensions
struct HexBigIntegerNumberExtensions_t0791BF591C460FAC2FFB37AA162D5DA215C97AE4  : public RuntimeObject
{
};

// Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions
struct HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F  : public RuntimeObject
{
};

struct HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_StaticFields
{
	// System.Byte[] Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::Empty
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Empty_0;
};

// Nethereum.Hex.HexConvertors.Extensions.HexStringUTF8ConvertorExtensions
struct HexStringUTF8ConvertorExtensions_t2B62B7F9705520F19A7694B79CC84F8937D75CB3  : public RuntimeObject
{
};

// Nethereum.Hex.HexTypes.HexTypeFactory
struct HexTypeFactory_t7BF4452E17667E7E3118134886CA3FC1EA3436D1  : public RuntimeObject
{
};

// Nethereum.Hex.HexConvertors.HexUTF8StringConvertor
struct HexUTF8StringConvertor_tA4626B906A3240AD679B60B6518855207ACAA000  : public RuntimeObject
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

// Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions/<>c
struct U3CU3Ec_t231D9C1EB717F2471905FE69D76AA57BA66D4ACF  : public RuntimeObject
{
};

struct U3CU3Ec_t231D9C1EB717F2471905FE69D76AA57BA66D4ACF_StaticFields
{
	// Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions/<>c Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions/<>c::<>9
	U3CU3Ec_t231D9C1EB717F2471905FE69D76AA57BA66D4ACF* ___U3CU3E9_0;
	// System.Func`2<System.Byte,System.String> Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions/<>c::<>9__1_0
	Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* ___U3CU3E9__1_0_1;
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

// Nethereum.Hex.HexTypes.HexUTF8String
struct HexUTF8String_t578C508FA751E6088C06E76A5983545D1B5237A2  : public HexRPCType_1_t85C025036053F37838F6F71B2043F41BAB796FD1
{
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

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>
struct HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0  : public RuntimeObject
{
	// Nethereum.Hex.HexConvertors.IHexConvertor`1<T> Nethereum.Hex.HexTypes.HexRPCType`1::convertor
	RuntimeObject* ___convertor_0;
	// System.String Nethereum.Hex.HexTypes.HexRPCType`1::hexValue
	String_t* ___hexValue_1;
	// T Nethereum.Hex.HexTypes.HexRPCType`1::value
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value_2;
	// System.Object Nethereum.Hex.HexTypes.HexRPCType`1::lockingObject
	RuntimeObject* ___lockingObject_3;
	// System.Boolean Nethereum.Hex.HexTypes.HexRPCType`1::needsInitialisingValue
	bool ___needsInitialisingValue_4;
};

// System.Nullable`1<System.Numerics.BigInteger>
struct Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value_1;
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

// Nethereum.Hex.HexTypes.HexBigInteger
struct HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811  : public HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0
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

// System.Func`2<System.Byte,System.String>
struct Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E  : public MulticastDelegate_t
{
};

// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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


// System.Void Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::.ctor(Nethereum.Hex.HexConvertors.IHexConvertor`1<T>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexRPCType_1__ctor_mBC5FDF3A27217EA3A6BCE81B95F70CA304CAD2FA_gshared (HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0* __this, RuntimeObject* ___convertor0, String_t* ___hexValue1, const RuntimeMethod* method) ;
// System.Void Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::.ctor(T,Nethereum.Hex.HexConvertors.IHexConvertor`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexRPCType_1__ctor_m3AA65FC221755C7D7C11FC89749E95E9046B66BC_gshared (HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, RuntimeObject* ___convertor1, const RuntimeMethod* method) ;
// T Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D_gshared (HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Hex.HexTypes.HexRPCType`1<System.Object>::.ctor(Nethereum.Hex.HexConvertors.IHexConvertor`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexRPCType_1__ctor_m5D21860391BB97AA469EF197ED2102B17F3ECDB0_gshared (HexRPCType_1_tF9310045E7DCDEBC006660889352D388D629A0F3* __this, RuntimeObject* ___convertor0, const RuntimeMethod* method) ;
// System.Void Nethereum.Hex.HexTypes.HexRPCType`1<System.Object>::.ctor(T,Nethereum.Hex.HexConvertors.IHexConvertor`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexRPCType_1__ctor_mC300C24B5E7CE521E302100E4699F7731D257E5E_gshared (HexRPCType_1_tF9310045E7DCDEBC006660889352D388D629A0F3* __this, RuntimeObject* ___value0, RuntimeObject* ___convertor1, const RuntimeMethod* method) ;
// System.Void Nethereum.Hex.HexTypes.HexRPCType`1<System.Object>::set_HexValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexRPCType_1_set_HexValue_m5434B78EDA76E7DC0DF826C9A70C6C22C27E6715_gshared (HexRPCType_1_tF9310045E7DCDEBC006660889352D388D629A0F3* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::op_Equality(Nethereum.Hex.HexTypes.HexRPCType`1<T>,Nethereum.Hex.HexTypes.HexRPCType`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HexRPCType_1_op_Equality_mC3A87099DAFB6C109637B611558A892934121788_gshared (HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0* ___lhs0, HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0* ___rhs1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Numerics.BigInteger>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138_gshared (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Reverse<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE1C5F82060828B85D20B64B14FDF6084A256C826_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* Enumerable_ToList_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE6698319D8C4D7E21D7693BA39F6AEA848ED1C7C_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m340AA5688FC1B07E49081519A407B6D09B49BAE4_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, int32_t ___index0, uint8_t ___item1, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Byte,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m356DD0E5E7CE04DB0252EF251F0D812872A08C8B_gshared (Func_2_t6E66BCD31592FAA3B441B68BF938E37260DCFA3C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Byte,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_mC1471D425731DC6CDDA682B4426C72DFFFC8A781_gshared (RuntimeObject* ___source0, Func_2_t6E66BCD31592FAA3B441B68BF938E37260DCFA3C* ___selector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;

// System.Void Nethereum.Hex.HexConvertors.HexBigIntegerBigEndianConvertor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexBigIntegerBigEndianConvertor__ctor_mD571F54C677C61EE00DAB111C8FF3E9927233B3D (HexBigIntegerBigEndianConvertor_tE9413AE2652DF1D69CDCD7FA6F708896F2DE76C8* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::.ctor(Nethereum.Hex.HexConvertors.IHexConvertor`1<T>,System.String)
inline void HexRPCType_1__ctor_mBC5FDF3A27217EA3A6BCE81B95F70CA304CAD2FA (HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0* __this, RuntimeObject* ___convertor0, String_t* ___hexValue1, const RuntimeMethod* method)
{
	((  void (*) (HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0*, RuntimeObject*, String_t*, const RuntimeMethod*))HexRPCType_1__ctor_mBC5FDF3A27217EA3A6BCE81B95F70CA304CAD2FA_gshared)(__this, ___convertor0, ___hexValue1, method);
}
// System.Void Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::.ctor(T,Nethereum.Hex.HexConvertors.IHexConvertor`1<T>)
inline void HexRPCType_1__ctor_m3AA65FC221755C7D7C11FC89749E95E9046B66BC (HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, RuntimeObject* ___convertor1, const RuntimeMethod* method)
{
	((  void (*) (HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0*, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F, RuntimeObject*, const RuntimeMethod*))HexRPCType_1__ctor_m3AA65FC221755C7D7C11FC89749E95E9046B66BC_gshared)(__this, ___value0, ___convertor1, method);
}
// T Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::get_Value()
inline BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D (HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0* __this, const RuntimeMethod* method)
{
	return ((  BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F (*) (HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0*, const RuntimeMethod*))HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D_gshared)(__this, method);
}
// System.String System.Numerics.BigInteger::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m6AFB0DE9CD953DA8B015C31B3CC1FEF86D98A306 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Implicit_m82583327AA7F7D65A79CDCEF93F19C2398974548 (uint64_t ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Hex.HexTypes.HexBigInteger::.ctor(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexBigInteger__ctor_mE96FF1F49C3B1DF037485FBCEBEB27707DA444ED (HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850 (int32_t ___value0, const RuntimeMethod* method) ;
// System.UInt64 System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t BigInteger_op_Explicit_mC90AC1989E67C94D9146E1E19794016BA20AD101 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Hex.HexConvertors.HexUTF8StringConvertor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexUTF8StringConvertor__ctor_mBFD19CD5DE72FBD589A65C49D2091F18B07A75FD (HexUTF8StringConvertor_tA4626B906A3240AD679B60B6518855207ACAA000* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Hex.HexTypes.HexRPCType`1<System.String>::.ctor(Nethereum.Hex.HexConvertors.IHexConvertor`1<T>)
inline void HexRPCType_1__ctor_mD2DA5286ACBCCE380A2499C0BAD9395DF1CC1B34 (HexRPCType_1_t85C025036053F37838F6F71B2043F41BAB796FD1* __this, RuntimeObject* ___convertor0, const RuntimeMethod* method)
{
	((  void (*) (HexRPCType_1_t85C025036053F37838F6F71B2043F41BAB796FD1*, RuntimeObject*, const RuntimeMethod*))HexRPCType_1__ctor_m5D21860391BB97AA469EF197ED2102B17F3ECDB0_gshared)(__this, ___convertor0, method);
}
// System.Void Nethereum.Hex.HexTypes.HexRPCType`1<System.String>::.ctor(T,Nethereum.Hex.HexConvertors.IHexConvertor`1<T>)
inline void HexRPCType_1__ctor_mD79EDFF0BA2516397A353DC571FA69896F1EA531 (HexRPCType_1_t85C025036053F37838F6F71B2043F41BAB796FD1* __this, String_t* ___value0, RuntimeObject* ___convertor1, const RuntimeMethod* method)
{
	((  void (*) (HexRPCType_1_t85C025036053F37838F6F71B2043F41BAB796FD1*, String_t*, RuntimeObject*, const RuntimeMethod*))HexRPCType_1__ctor_mC300C24B5E7CE521E302100E4699F7731D257E5E_gshared)(__this, ___value0, ___convertor1, method);
}
// System.Void Nethereum.Hex.HexTypes.HexUTF8String::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexUTF8String__ctor_m78238E47286416E47C331FFDF86FE1521FC7C2DA (HexUTF8String_t578C508FA751E6088C06E76A5983545D1B5237A2* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Hex.HexTypes.HexRPCType`1<System.String>::set_HexValue(System.String)
inline void HexRPCType_1_set_HexValue_mF2925CC823BAC647AFC70178234B0316E0A07C2A (HexRPCType_1_t85C025036053F37838F6F71B2043F41BAB796FD1* __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (HexRPCType_1_t85C025036053F37838F6F71B2043F41BAB796FD1*, String_t*, const RuntimeMethod*))HexRPCType_1_set_HexValue_m5434B78EDA76E7DC0DF826C9A70C6C22C27E6715_gshared)(__this, ___value0, method);
}
// System.String Nethereum.Hex.HexConvertors.Extensions.HexBigIntegerConvertorExtensions::ToHex(System.Numerics.BigInteger,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexBigIntegerConvertorExtensions_ToHex_m3FA9C6A50327618B0FCC603437EA8FBFF5482F97 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, bool ___littleEndian1, bool ___compact2, const RuntimeMethod* method) ;
// System.Numerics.BigInteger Nethereum.Hex.HexConvertors.Extensions.HexBigIntegerConvertorExtensions::HexToBigInteger(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F HexBigIntegerConvertorExtensions_HexToBigInteger_m7E29ACDF5DDAC3C5BCC3F22B7822C0E70B397757 (String_t* ___hex0, bool ___isHexLittleEndian1, const RuntimeMethod* method) ;
// System.String Nethereum.Hex.HexConvertors.Extensions.HexStringUTF8ConvertorExtensions::ToHexUTF8(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexStringUTF8ConvertorExtensions_ToHexUTF8_m35E36ADDB74E615DD07CA8DCEF0724979FAFF764 (String_t* ___value0, const RuntimeMethod* method) ;
// System.String Nethereum.Hex.HexConvertors.Extensions.HexStringUTF8ConvertorExtensions::HexToUTF8String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexStringUTF8ConvertorExtensions_HexToUTF8String_m2376BB04C91106CB309A7C7906EAC8069BF1FB4F (String_t* ___hex0, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::op_Equality(Nethereum.Hex.HexTypes.HexRPCType`1<T>,Nethereum.Hex.HexTypes.HexRPCType`1<T>)
inline bool HexRPCType_1_op_Equality_mC3A87099DAFB6C109637B611558A892934121788 (HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0* ___lhs0, HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0* ___rhs1, const RuntimeMethod* method)
{
	return ((  bool (*) (HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0*, HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0*, const RuntimeMethod*))HexRPCType_1_op_Equality_mC3A87099DAFB6C109637B611558A892934121788_gshared)(___lhs0, ___rhs1, method);
}
// System.Void System.Nullable`1<System.Numerics.BigInteger>::.ctor(T)
inline void Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138 (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72*, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F, const RuntimeMethod*))Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138_gshared)(__this, ___value0, method);
}
// System.Byte[] Nethereum.Hex.HexConvertors.Extensions.HexBigIntegerConvertorExtensions::ConvertToByteArray(System.Numerics.BigInteger,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HexBigIntegerConvertorExtensions_ConvertToByteArray_m6CDDAA2C5A3873A3960EB97ACAC8C9EA2837C936 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, bool ___littleEndian1, const RuntimeMethod* method) ;
// System.Byte[] System.Numerics.BigInteger::ToByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BigInteger_ToByteArray_mC501D315AF605FB0EF172628E9D4C95D2F015EB3 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Reverse<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE1C5F82060828B85D20B64B14FDF6084A256C826 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE1C5F82060828B85D20B64B14FDF6084A256C826_gshared)(___source0, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_gshared)(___source0, method);
}
// System.Int32 System.Numerics.BigInteger::get_Sign()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_get_Sign_m0B029046A49D6CCE27899B31890BF63BD6C68E5E (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::op_Equality(System.Numerics.BigInteger,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_mC3E68AE3326F7FAC3441A5618537BFB24CD15248 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, int64_t ___right1, const RuntimeMethod* method) ;
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::ToHexCompact(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_ToHexCompact_m2BBC369BB5939E3794028CA93FF58F921E4D8A1D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::ToHex(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, bool ___prefix1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::HexToByteArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE (String_t* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* Enumerable_ToList_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE6698319D8C4D7E21D7693BA39F6AEA848ED1C7C (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE6698319D8C4D7E21D7693BA39F6AEA848ED1C7C_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte>::Insert(System.Int32,T)
inline void List_1_Insert_m340AA5688FC1B07E49081519A407B6D09B49BAE4 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, int32_t ___index0, uint8_t ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, int32_t, uint8_t, const RuntimeMethod*))List_1_Insert_m340AA5688FC1B07E49081519A407B6D09B49BAE4_gshared)(__this, ___index0, ___item1, method);
}
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared)(__this, method);
}
// System.Void System.Numerics.BigInteger::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m25FA3F3C832BC621CD91ABFAC3535A2F4EE7B371 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Byte,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB31E88A2C3F2063BDBA38CD35564CDC13C344109 (Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m356DD0E5E7CE04DB0252EF251F0D812872A08C8B_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Byte,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisString_t_m2052FCC7ADC9755B1FCA666EB30114DE80CCF1DF (RuntimeObject* ___source0, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E*, const RuntimeMethod*))Enumerable_Select_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_mC1471D425731DC6CDDA682B4426C72DFFFC8A781_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::RemoveHexPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_RemoveHexPrefix_m710ADEC9AA9C65D6E4A6E7E4F15B31862C627C15 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::EnsureHexPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_EnsureHexPrefix_m19AD0DDEC70CED3CA428D91D7B270C5B18E09F7B (String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B (String_t* ___a0, String_t* ___b1, int32_t ___comparisonType2, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::HasHexPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HexByteConvertorExtensions_HasHexPrefix_mD4C1F56C944A21EC76059EE2C45256675BED7B21 (String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::TrimStart(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimStart_m67833D80326BEA11CC3517CE03CD7B16669BCEEC (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimChars0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.Byte Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::FromCharacterToByte(System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t HexByteConvertorExtensions_FromCharacterToByte_mEE18610E323554161BC6D8F99F22ED6309206EF8 (Il2CppChar ___character0, int32_t ___index1, int32_t ___shift2, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::HexToByteArrayInternal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HexByteConvertorExtensions_HexToByteArrayInternal_m8C514D60E14DC585BD754386E31C505285F84388 (String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.FormatException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mE31CCFC2A6FA296CA9E9C6813112D7850FE682D4 (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void System.FormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m829B68D31B0342DBD3F8337487D9A2E7A27C6BB3 (U3CU3Ec_t231D9C1EB717F2471905FE69D76AA57BA66D4ACF* __this, const RuntimeMethod* method) ;
// System.String System.Byte::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310 (uint8_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
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
// System.Void Nethereum.Hex.HexTypes.HexBigInteger::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexBigInteger__ctor_m319E62BEA231E88AA365F4C8530F0C46E95925C9 (HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* __this, String_t* ___hex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexBigIntegerBigEndianConvertor_tE9413AE2652DF1D69CDCD7FA6F708896F2DE76C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexRPCType_1__ctor_mBC5FDF3A27217EA3A6BCE81B95F70CA304CAD2FA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HexBigIntegerBigEndianConvertor_tE9413AE2652DF1D69CDCD7FA6F708896F2DE76C8* L_0 = (HexBigIntegerBigEndianConvertor_tE9413AE2652DF1D69CDCD7FA6F708896F2DE76C8*)il2cpp_codegen_object_new(HexBigIntegerBigEndianConvertor_tE9413AE2652DF1D69CDCD7FA6F708896F2DE76C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HexBigIntegerBigEndianConvertor__ctor_mD571F54C677C61EE00DAB111C8FF3E9927233B3D(L_0, NULL);
		String_t* L_1 = ___hex0;
		HexRPCType_1__ctor_mBC5FDF3A27217EA3A6BCE81B95F70CA304CAD2FA(__this, L_0, L_1, HexRPCType_1__ctor_mBC5FDF3A27217EA3A6BCE81B95F70CA304CAD2FA_RuntimeMethod_var);
		return;
	}
}
// System.Void Nethereum.Hex.HexTypes.HexBigInteger::.ctor(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexBigInteger__ctor_mE96FF1F49C3B1DF037485FBCEBEB27707DA444ED (HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexBigIntegerBigEndianConvertor_tE9413AE2652DF1D69CDCD7FA6F708896F2DE76C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexRPCType_1__ctor_m3AA65FC221755C7D7C11FC89749E95E9046B66BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___value0;
		HexBigIntegerBigEndianConvertor_tE9413AE2652DF1D69CDCD7FA6F708896F2DE76C8* L_1 = (HexBigIntegerBigEndianConvertor_tE9413AE2652DF1D69CDCD7FA6F708896F2DE76C8*)il2cpp_codegen_object_new(HexBigIntegerBigEndianConvertor_tE9413AE2652DF1D69CDCD7FA6F708896F2DE76C8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HexBigIntegerBigEndianConvertor__ctor_mD571F54C677C61EE00DAB111C8FF3E9927233B3D(L_1, NULL);
		HexRPCType_1__ctor_m3AA65FC221755C7D7C11FC89749E95E9046B66BC(__this, L_0, L_1, HexRPCType_1__ctor_m3AA65FC221755C7D7C11FC89749E95E9046B66BC_RuntimeMethod_var);
		return;
	}
}
// System.String Nethereum.Hex.HexTypes.HexBigInteger::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexBigInteger_ToString_mF5D16057DADC18D4C9D835542515926784D91EDD (HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0;
		L_0 = HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D(__this, HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D_RuntimeMethod_var);
		V_0 = L_0;
		String_t* L_1;
		L_1 = BigInteger_ToString_m6AFB0DE9CD953DA8B015C31B3CC1FEF86D98A306((&V_0), NULL);
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
// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.Hex.HexTypes.HexBigIntegerNumberExtensions::ToHexBigInteger(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* HexBigIntegerNumberExtensions_ToHexBigInteger_m9F109DFC5685F8136CB79C0A9132C4F5F6D57533 (uint64_t ___val0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0 = ___val0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = BigInteger_op_Implicit_m82583327AA7F7D65A79CDCEF93F19C2398974548(L_0, NULL);
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_2 = (HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811*)il2cpp_codegen_object_new(HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HexBigInteger__ctor_mE96FF1F49C3B1DF037485FBCEBEB27707DA444ED(L_2, L_1, NULL);
		return L_2;
	}
}
// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.Hex.HexTypes.HexBigIntegerNumberExtensions::ToHexBigInteger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* HexBigIntegerNumberExtensions_ToHexBigInteger_m911915A1A15B55E52264515A2978A3165D713D18 (int32_t ___val0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___val0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(L_0, NULL);
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_2 = (HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811*)il2cpp_codegen_object_new(HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HexBigInteger__ctor_mE96FF1F49C3B1DF037485FBCEBEB27707DA444ED(L_2, L_1, NULL);
		return L_2;
	}
}
// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.Hex.HexTypes.HexBigIntegerNumberExtensions::ToHexBigInteger(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* HexBigIntegerNumberExtensions_ToHexBigInteger_m15699FCA1652E0B7596DF1749F96CB550248037A (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___val0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___val0;
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_1 = (HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811*)il2cpp_codegen_object_new(HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HexBigInteger__ctor_mE96FF1F49C3B1DF037485FBCEBEB27707DA444ED(L_1, L_0, NULL);
		return L_1;
	}
}
// System.UInt64 Nethereum.Hex.HexTypes.HexBigIntegerNumberExtensions::ToUlong(Nethereum.Hex.HexTypes.HexBigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t HexBigIntegerNumberExtensions_ToUlong_m7D9129E4F2AF9197233645635046336909510304 (HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* ___val0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_0 = ___val0;
		NullCheck(L_0);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D(L_0, HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = BigInteger_op_Explicit_mC90AC1989E67C94D9146E1E19794016BA20AD101(L_1, NULL);
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
// System.Void Nethereum.Hex.HexTypes.HexTypeFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexTypeFactory__ctor_mF002B0F162646B146BD736FE575486061CD61EB5 (HexTypeFactory_t7BF4452E17667E7E3118134886CA3FC1EA3436D1* __this, const RuntimeMethod* method) 
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
// System.Void Nethereum.Hex.HexTypes.HexUTF8String::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexUTF8String__ctor_m78238E47286416E47C331FFDF86FE1521FC7C2DA (HexUTF8String_t578C508FA751E6088C06E76A5983545D1B5237A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexRPCType_1__ctor_mD2DA5286ACBCCE380A2499C0BAD9395DF1CC1B34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexUTF8StringConvertor_tA4626B906A3240AD679B60B6518855207ACAA000_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HexUTF8StringConvertor_tA4626B906A3240AD679B60B6518855207ACAA000* L_0 = (HexUTF8StringConvertor_tA4626B906A3240AD679B60B6518855207ACAA000*)il2cpp_codegen_object_new(HexUTF8StringConvertor_tA4626B906A3240AD679B60B6518855207ACAA000_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HexUTF8StringConvertor__ctor_mBFD19CD5DE72FBD589A65C49D2091F18B07A75FD(L_0, NULL);
		HexRPCType_1__ctor_mD2DA5286ACBCCE380A2499C0BAD9395DF1CC1B34(__this, L_0, HexRPCType_1__ctor_mD2DA5286ACBCCE380A2499C0BAD9395DF1CC1B34_RuntimeMethod_var);
		return;
	}
}
// System.Void Nethereum.Hex.HexTypes.HexUTF8String::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexUTF8String__ctor_m58DDC407945B432C617D188E81C07C9998C320E7 (HexUTF8String_t578C508FA751E6088C06E76A5983545D1B5237A2* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexRPCType_1__ctor_mD79EDFF0BA2516397A353DC571FA69896F1EA531_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexUTF8StringConvertor_tA4626B906A3240AD679B60B6518855207ACAA000_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		HexUTF8StringConvertor_tA4626B906A3240AD679B60B6518855207ACAA000* L_1 = (HexUTF8StringConvertor_tA4626B906A3240AD679B60B6518855207ACAA000*)il2cpp_codegen_object_new(HexUTF8StringConvertor_tA4626B906A3240AD679B60B6518855207ACAA000_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HexUTF8StringConvertor__ctor_mBFD19CD5DE72FBD589A65C49D2091F18B07A75FD(L_1, NULL);
		HexRPCType_1__ctor_mD79EDFF0BA2516397A353DC571FA69896F1EA531(__this, L_0, L_1, HexRPCType_1__ctor_mD79EDFF0BA2516397A353DC571FA69896F1EA531_RuntimeMethod_var);
		return;
	}
}
// Nethereum.Hex.HexTypes.HexUTF8String Nethereum.Hex.HexTypes.HexUTF8String::CreateFromHex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HexUTF8String_t578C508FA751E6088C06E76A5983545D1B5237A2* HexUTF8String_CreateFromHex_m5123D5C05E718B97FBAA865D90786DE35EEA45F6 (String_t* ___hex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexRPCType_1_set_HexValue_mF2925CC823BAC647AFC70178234B0316E0A07C2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexUTF8String_t578C508FA751E6088C06E76A5983545D1B5237A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HexUTF8String_t578C508FA751E6088C06E76A5983545D1B5237A2* L_0 = (HexUTF8String_t578C508FA751E6088C06E76A5983545D1B5237A2*)il2cpp_codegen_object_new(HexUTF8String_t578C508FA751E6088C06E76A5983545D1B5237A2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HexUTF8String__ctor_m78238E47286416E47C331FFDF86FE1521FC7C2DA(L_0, NULL);
		HexUTF8String_t578C508FA751E6088C06E76A5983545D1B5237A2* L_1 = L_0;
		String_t* L_2 = ___hex0;
		NullCheck(L_1);
		HexRPCType_1_set_HexValue_mF2925CC823BAC647AFC70178234B0316E0A07C2A(L_1, L_2, HexRPCType_1_set_HexValue_mF2925CC823BAC647AFC70178234B0316E0A07C2A_RuntimeMethod_var);
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
// System.String Nethereum.Hex.HexConvertors.HexBigIntegerBigEndianConvertor::ConvertToHex(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexBigIntegerBigEndianConvertor_ConvertToHex_m18248D54575C446596983F1F8AB4A90709C7327B (HexBigIntegerBigEndianConvertor_tE9413AE2652DF1D69CDCD7FA6F708896F2DE76C8* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___newValue0, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___newValue0;
		String_t* L_1;
		L_1 = HexBigIntegerConvertorExtensions_ToHex_m3FA9C6A50327618B0FCC603437EA8FBFF5482F97(L_0, (bool)0, (bool)1, NULL);
		return L_1;
	}
}
// System.Numerics.BigInteger Nethereum.Hex.HexConvertors.HexBigIntegerBigEndianConvertor::ConvertFromHex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F HexBigIntegerBigEndianConvertor_ConvertFromHex_m7060644152CE3858E19CAAF871700ACE60CA0985 (HexBigIntegerBigEndianConvertor_tE9413AE2652DF1D69CDCD7FA6F708896F2DE76C8* __this, String_t* ___hex0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___hex0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = HexBigIntegerConvertorExtensions_HexToBigInteger_m7E29ACDF5DDAC3C5BCC3F22B7822C0E70B397757(L_0, (bool)0, NULL);
		return L_1;
	}
}
// System.Void Nethereum.Hex.HexConvertors.HexBigIntegerBigEndianConvertor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexBigIntegerBigEndianConvertor__ctor_mD571F54C677C61EE00DAB111C8FF3E9927233B3D (HexBigIntegerBigEndianConvertor_tE9413AE2652DF1D69CDCD7FA6F708896F2DE76C8* __this, const RuntimeMethod* method) 
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
// System.String Nethereum.Hex.HexConvertors.HexUTF8StringConvertor::ConvertToHex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexUTF8StringConvertor_ConvertToHex_mC7F44E9E90CE0864DA7D107E3B4497456B3949BA (HexUTF8StringConvertor_tA4626B906A3240AD679B60B6518855207ACAA000* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		String_t* L_1;
		L_1 = HexStringUTF8ConvertorExtensions_ToHexUTF8_m35E36ADDB74E615DD07CA8DCEF0724979FAFF764(L_0, NULL);
		return L_1;
	}
}
// System.String Nethereum.Hex.HexConvertors.HexUTF8StringConvertor::ConvertFromHex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexUTF8StringConvertor_ConvertFromHex_mBDEDC0C770797F438A48735A768F0B463EAC5F3E (HexUTF8StringConvertor_tA4626B906A3240AD679B60B6518855207ACAA000* __this, String_t* ___hex0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___hex0;
		String_t* L_1;
		L_1 = HexStringUTF8ConvertorExtensions_HexToUTF8String_m2376BB04C91106CB309A7C7906EAC8069BF1FB4F(L_0, NULL);
		return L_1;
	}
}
// System.Void Nethereum.Hex.HexConvertors.HexUTF8StringConvertor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexUTF8StringConvertor__ctor_mBFD19CD5DE72FBD589A65C49D2091F18B07A75FD (HexUTF8StringConvertor_tA4626B906A3240AD679B60B6518855207ACAA000* __this, const RuntimeMethod* method) 
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
// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Hex.HexConvertors.Extensions.HexBigIntegerConvertorExtensions::GetValue(Nethereum.Hex.HexTypes.HexBigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 HexBigIntegerConvertorExtensions_GetValue_m3FFA2BA1AC99D2347DC7918FF7A23E1CA57A3CE8 (HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* ___hexBigInteger0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexRPCType_1_op_Equality_mC3A87099DAFB6C109637B611558A892934121788_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_0 = ___hexBigInteger0;
		bool L_1;
		L_1 = HexRPCType_1_op_Equality_mC3A87099DAFB6C109637B611558A892934121788(L_0, (HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0*)NULL, HexRPCType_1_op_Equality_mC3A87099DAFB6C109637B611558A892934121788_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72));
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_2 = V_0;
		return L_2;
	}

IL_0013:
	{
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_3 = ___hexBigInteger0;
		NullCheck(L_3);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D(L_3, HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D_RuntimeMethod_var);
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138((&L_5), L_4, /*hidden argument*/Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138_RuntimeMethod_var);
		return L_5;
	}
}
// System.Byte[] Nethereum.Hex.HexConvertors.Extensions.HexBigIntegerConvertorExtensions::ToByteArray(System.Numerics.BigInteger,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HexBigIntegerConvertorExtensions_ToByteArray_mAAADC625C1954EA06E49716525F2C44331E2E87D (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, bool ___littleEndian1, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___value0;
		bool L_1 = ___littleEndian1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = HexBigIntegerConvertorExtensions_ConvertToByteArray_m6CDDAA2C5A3873A3960EB97ACAC8C9EA2837C936(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Byte[] Nethereum.Hex.HexConvertors.Extensions.HexBigIntegerConvertorExtensions::ConvertToByteArray(System.Numerics.BigInteger,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HexBigIntegerConvertorExtensions_ConvertToByteArray_m6CDDAA2C5A3873A3960EB97ACAC8C9EA2837C936 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, bool ___littleEndian1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE1C5F82060828B85D20B64B14FDF6084A256C826_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		bool L_1 = ___littleEndian1;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BigInteger_ToByteArray_mC501D315AF605FB0EF172628E9D4C95D2F015EB3((&___value0), NULL);
		RuntimeObject* L_3;
		L_3 = Enumerable_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE1C5F82060828B85D20B64B14FDF6084A256C826((RuntimeObject*)L_2, Enumerable_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE1C5F82060828B85D20B64B14FDF6084A256C826_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_3, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		V_0 = L_4;
		goto IL_0029;
	}

IL_001c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = BigInteger_ToByteArray_mC501D315AF605FB0EF172628E9D4C95D2F015EB3((&___value0), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64((RuntimeObject*)L_5, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		V_0 = L_6;
	}

IL_0029:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		return L_7;
	}
}
// System.String Nethereum.Hex.HexConvertors.Extensions.HexBigIntegerConvertorExtensions::ToHex(System.Numerics.BigInteger,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexBigIntegerConvertorExtensions_ToHex_m3FA9C6A50327618B0FCC603437EA8FBFF5482F97 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, bool ___littleEndian1, bool ___compact2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BCF4B50E72B7CCD6AD748E8D2FDCADBF49961A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		int32_t L_0;
		L_0 = BigInteger_get_Sign_m0B029046A49D6CCE27899B31890BF63BD6C68E5E((&___value0), NULL);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral14EDE195912AFD586B3C9D6841D4786E35B50299)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HexBigIntegerConvertorExtensions_ToHex_m3FA9C6A50327618B0FCC603437EA8FBFF5482F97_RuntimeMethod_var)));
	}

IL_0015:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BigInteger_op_Equality_mC3E68AE3326F7FAC3441A5618537BFB24CD15248(L_2, ((int64_t)0), NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		return _stringLiteral4BCF4B50E72B7CCD6AD748E8D2FDCADBF49961A8;
	}

IL_0025:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4 = ___value0;
		bool L_5 = ___littleEndian1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = HexBigIntegerConvertorExtensions_ConvertToByteArray_m6CDDAA2C5A3873A3960EB97ACAC8C9EA2837C936(L_4, L_5, NULL);
		V_0 = L_6;
		bool L_7 = ___compact2;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = HexByteConvertorExtensions_ToHexCompact_m2BBC369BB5939E3794028CA93FF58F921E4D8A1D(L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89, L_9, NULL);
		return L_10;
	}

IL_0041:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_12;
		L_12 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_11, (bool)0, NULL);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89, L_12, NULL);
		return L_13;
	}
}
// System.Numerics.BigInteger Nethereum.Hex.HexConvertors.Extensions.HexBigIntegerConvertorExtensions::HexToBigInteger(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F HexBigIntegerConvertorExtensions_HexToBigInteger_m7E29ACDF5DDAC3C5BCC3F22B7822C0E70B397757 (String_t* ___hex0, bool ___isHexLittleEndian1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE1C5F82060828B85D20B64B14FDF6084A256C826_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE6698319D8C4D7E21D7693BA39F6AEA848ED1C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_m340AA5688FC1B07E49081519A407B6D09B49BAE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BCF4B50E72B7CCD6AD748E8D2FDCADBF49961A8);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		String_t* L_0 = ___hex0;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral4BCF4B50E72B7CCD6AD748E8D2FDCADBF49961A8, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(0, NULL);
		return L_2;
	}

IL_0014:
	{
		String_t* L_3 = ___hex0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_3, NULL);
		V_0 = L_4;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_5 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		bool L_6 = ___isHexLittleEndian1;
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_0041;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_8;
		L_8 = Enumerable_ToList_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE6698319D8C4D7E21D7693BA39F6AEA848ED1C7C((RuntimeObject*)L_7, Enumerable_ToList_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE6698319D8C4D7E21D7693BA39F6AEA848ED1C7C_RuntimeMethod_var);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_9 = L_8;
		NullCheck(L_9);
		List_1_Insert_m340AA5688FC1B07E49081519A407B6D09B49BAE4(L_9, 0, (uint8_t)0, List_1_Insert_m340AA5688FC1B07E49081519A407B6D09B49BAE4_RuntimeMethod_var);
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_9, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		RuntimeObject* L_11;
		L_11 = Enumerable_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE1C5F82060828B85D20B64B14FDF6084A256C826((RuntimeObject*)L_10, Enumerable_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE1C5F82060828B85D20B64B14FDF6084A256C826_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_11, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		V_0 = L_12;
	}

IL_0041:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_14;
		memset((&L_14), 0, sizeof(L_14));
		BigInteger__ctor_m25FA3F3C832BC621CD91ABFAC3535A2F4EE7B371((&L_14), L_13, /*hidden argument*/NULL);
		return L_14;
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
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::ToHex(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, bool ___prefix1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisString_t_m2052FCC7ADC9755B1FCA666EB30114DE80CCF1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToHexU3Eb__1_0_m28B2607DC9CA8AE04C50019F41558ADA7A77B5DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t231D9C1EB717F2471905FE69D76AA57BA66D4ACF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* G_B5_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B5_1 = NULL;
	String_t* G_B5_2 = NULL;
	Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* G_B4_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	{
		bool L_0 = ___prefix1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_000f;
	}

IL_000a:
	{
		G_B3_0 = _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t231D9C1EB717F2471905FE69D76AA57BA66D4ACF_il2cpp_TypeInfo_var);
		Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* L_2 = ((U3CU3Ec_t231D9C1EB717F2471905FE69D76AA57BA66D4ACF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t231D9C1EB717F2471905FE69D76AA57BA66D4ACF_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1;
		Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* L_3 = L_2;
		G_B4_0 = L_3;
		G_B4_1 = L_1;
		G_B4_2 = G_B3_0;
		if (L_3)
		{
			G_B5_0 = L_3;
			G_B5_1 = L_1;
			G_B5_2 = G_B3_0;
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t231D9C1EB717F2471905FE69D76AA57BA66D4ACF_il2cpp_TypeInfo_var);
		U3CU3Ec_t231D9C1EB717F2471905FE69D76AA57BA66D4ACF* L_4 = ((U3CU3Ec_t231D9C1EB717F2471905FE69D76AA57BA66D4ACF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t231D9C1EB717F2471905FE69D76AA57BA66D4ACF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* L_5 = (Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E*)il2cpp_codegen_object_new(Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_mB31E88A2C3F2063BDBA38CD35564CDC13C344109(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CToHexU3Eb__1_0_m28B2607DC9CA8AE04C50019F41558ADA7A77B5DC_RuntimeMethod_var), NULL);
		Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* L_6 = L_5;
		((U3CU3Ec_t231D9C1EB717F2471905FE69D76AA57BA66D4ACF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t231D9C1EB717F2471905FE69D76AA57BA66D4ACF_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t231D9C1EB717F2471905FE69D76AA57BA66D4ACF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t231D9C1EB717F2471905FE69D76AA57BA66D4ACF_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1), (void*)L_6);
		G_B5_0 = L_6;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
	}

IL_002f:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_Select_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisString_t_m2052FCC7ADC9755B1FCA666EB30114DE80CCF1DF((RuntimeObject*)G_B5_1, G_B5_0, Enumerable_Select_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisString_t_m2052FCC7ADC9755B1FCA666EB30114DE80CCF1DF_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8;
		L_8 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194(L_7, Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		String_t* L_9;
		L_9 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B5_2, L_9, NULL);
		return L_10;
	}
}
// System.Boolean Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::HasHexPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HexByteConvertorExtensions_HasHexPrefix_mD4C1F56C944A21EC76059EE2C45256675BED7B21 (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_0, _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89, NULL);
		return L_1;
	}
}
// System.Boolean Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::IsHex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HexByteConvertorExtensions_IsHex_mEA3912EB494419C6BE913E2CE98C05E8464378FF (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t G_B9_0 = 0;
	{
		String_t* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = HexByteConvertorExtensions_RemoveHexPrefix_m710ADEC9AA9C65D6E4A6E7E4F15B31862C627C15(L_0, NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0042;
	}

IL_000b:
	{
		String_t* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_2, L_3, NULL);
		V_2 = L_4;
		Il2CppChar L_5 = V_2;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)48))))
		{
			goto IL_001d;
		}
	}
	{
		Il2CppChar L_6 = V_2;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0039;
		}
	}

IL_001d:
	{
		Il2CppChar L_7 = V_2;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)97))))
		{
			goto IL_0027;
		}
	}
	{
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)102))))
		{
			goto IL_0039;
		}
	}

IL_0027:
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)65))))
		{
			goto IL_0036;
		}
	}
	{
		Il2CppChar L_10 = V_2;
		G_B9_0 = ((((int32_t)((((int32_t)L_10) > ((int32_t)((int32_t)70)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003a;
	}

IL_0036:
	{
		G_B9_0 = 0;
		goto IL_003a;
	}

IL_0039:
	{
		G_B9_0 = 1;
	}

IL_003a:
	{
		if (G_B9_0)
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_003e:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0042:
	{
		int32_t L_12 = V_1;
		String_t* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_13, NULL);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}
}
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::RemoveHexPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_RemoveHexPrefix_m710ADEC9AA9C65D6E4A6E7E4F15B31862C627C15 (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	{
		String_t* L_0 = ___value0;
		String_t* L_1 = ___value0;
		NullCheck(L_1);
		bool L_2;
		L_2 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_1, _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89, NULL);
		G_B1_0 = L_0;
		if (L_2)
		{
			G_B2_0 = L_0;
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 2;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		NullCheck(G_B3_1);
		String_t* L_3;
		L_3 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(G_B3_1, G_B3_0, NULL);
		return L_3;
	}
}
// System.Boolean Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::IsTheSameHex(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HexByteConvertorExtensions_IsTheSameHex_m971DFB0365B3E594765F81E868EDBA4A85679E22 (String_t* ___first0, String_t* ___second1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___first0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = HexByteConvertorExtensions_EnsureHexPrefix_m19AD0DDEC70CED3CA428D91D7B270C5B18E09F7B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_1, NULL);
		String_t* L_3 = ___second1;
		String_t* L_4;
		L_4 = HexByteConvertorExtensions_EnsureHexPrefix_m19AD0DDEC70CED3CA428D91D7B270C5B18E09F7B(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_4, NULL);
		bool L_6;
		L_6 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_2, L_5, 4, NULL);
		return L_6;
	}
}
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::EnsureHexPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_EnsureHexPrefix_m19AD0DDEC70CED3CA428D91D7B270C5B18E09F7B (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0005:
	{
		String_t* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = HexByteConvertorExtensions_HasHexPrefix_mD4C1F56C944A21EC76059EE2C45256675BED7B21(L_1, NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_3 = ___value0;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89, L_3, NULL);
		return L_4;
	}

IL_0019:
	{
		String_t* L_5 = ___value0;
		return L_5;
	}
}
// System.String[] Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::EnsureHexPrefix(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* HexByteConvertorExtensions_EnsureHexPrefix_m9FD50C4AA57A1F24D351EA9F2AF140B18B945477 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___values0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___values0;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0016;
	}

IL_0009:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = HexByteConvertorExtensions_EnsureHexPrefix_m19AD0DDEC70CED3CA428D91D7B270C5B18E09F7B(L_5, NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0016:
	{
		int32_t L_8 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0009;
		}
	}

IL_001c:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ___values0;
		return L_10;
	}
}
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::ToHexCompact(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_ToHexCompact_m2BBC369BB5939E3794028CA93FF58F921E4D8A1D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_0, (bool)0, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)48));
		NullCheck(L_1);
		String_t* L_4;
		L_4 = String_TrimStart_m67833D80326BEA11CC3517CE03CD7B16669BCEEC(L_1, L_3, NULL);
		return L_4;
	}
}
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::ToHexCompact(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_ToHexCompact_m568F1D8D59A59DD59050993392CD4C4F69EA7CEF (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = HexByteConvertorExtensions_RemoveHexPrefix_m710ADEC9AA9C65D6E4A6E7E4F15B31862C627C15(L_0, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)48));
		NullCheck(L_1);
		String_t* L_4;
		L_4 = String_TrimStart_m67833D80326BEA11CC3517CE03CD7B16669BCEEC(L_1, L_3, NULL);
		return L_4;
	}
}
// System.Byte[] Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::HexToByteArrayInternal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HexByteConvertorExtensions_HexToByteArrayInternal_m8C514D60E14DC585BD754386E31C505285F84388 (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint8_t V_6 = 0x0;
	uint8_t V_7 = 0x0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	{
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_StaticFields*)il2cpp_codegen_static_fields_for(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var))->___Empty_0;
		V_0 = L_2;
		goto IL_00b4;
	}

IL_0015:
	{
		String_t* L_3 = ___value0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		String_t* L_5 = ___value0;
		NullCheck(L_5);
		bool L_6;
		L_6 = String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264(L_5, _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89, 4, NULL);
		G_B3_0 = L_4;
		if (L_6)
		{
			G_B4_0 = L_4;
			goto IL_002c;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 2;
		G_B5_1 = G_B4_0;
	}

IL_002d:
	{
		V_1 = G_B5_0;
		int32_t L_7 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(G_B5_1, L_7));
		V_3 = (bool)0;
		int32_t L_8 = V_2;
		if (!((int32_t)(L_8%2)))
		{
			goto IL_003e;
		}
	}
	{
		V_3 = (bool)1;
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_003e:
	{
		int32_t L_10 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_10/2)));
		V_0 = L_11;
		V_4 = 0;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0068;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		int32_t L_14 = V_4;
		int32_t L_15 = L_14;
		V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		String_t* L_16 = ___value0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		Il2CppChar L_18;
		L_18 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_16, L_17, NULL);
		int32_t L_19 = V_1;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		uint8_t L_20;
		L_20 = HexByteConvertorExtensions_FromCharacterToByte_mEE18610E323554161BC6D8F99F22ED6309206EF8(L_18, L_19, 0, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)L_20);
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0068:
	{
		int32_t L_22 = V_1;
		V_5 = L_22;
		goto IL_00aa;
	}

IL_006d:
	{
		String_t* L_23 = ___value0;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		Il2CppChar L_25;
		L_25 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_23, L_24, NULL);
		int32_t L_26 = V_5;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		uint8_t L_27;
		L_27 = HexByteConvertorExtensions_FromCharacterToByte_mEE18610E323554161BC6D8F99F22ED6309206EF8(L_25, L_26, 4, NULL);
		V_6 = L_27;
		String_t* L_28 = ___value0;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		Il2CppChar L_30;
		L_30 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_28, ((int32_t)il2cpp_codegen_add(L_29, 1)), NULL);
		int32_t L_31 = V_5;
		uint8_t L_32;
		L_32 = HexByteConvertorExtensions_FromCharacterToByte_mEE18610E323554161BC6D8F99F22ED6309206EF8(L_30, ((int32_t)il2cpp_codegen_add(L_31, 1)), 0, NULL);
		V_7 = L_32;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_0;
		int32_t L_34 = V_4;
		int32_t L_35 = L_34;
		V_4 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		uint8_t L_36 = V_6;
		uint8_t L_37 = V_7;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_36|(int32_t)L_37))));
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 2));
	}

IL_00aa:
	{
		int32_t L_39 = V_5;
		String_t* L_40 = ___value0;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_40, NULL);
		if ((((int32_t)L_39) < ((int32_t)L_41)))
		{
			goto IL_006d;
		}
	}

IL_00b4:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_0;
		return L_42;
	}
}
// System.Byte[] Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::HexToByteArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		String_t* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = HexByteConvertorExtensions_HexToByteArrayInternal_m8C514D60E14DC585BD754386E31C505285F84388(L_0, NULL);
		V_0 = L_1;
		goto IL_001c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.FormatException)
		V_1 = ((FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)IL2CPP_GET_ACTIVE_EXCEPTION(FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*));
		String_t* L_2 = ___value0;
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral347BB4CBF7CC52D07091977DE184B410FFDDD5B7)), L_2, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_4 = V_1;
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_5 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		FormatException__ctor_mE31CCFC2A6FA296CA9E9C6813112D7850FE682D4(L_5, L_3, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_001c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		return L_6;
	}
}
// System.Byte Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::FromCharacterToByte(System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t HexByteConvertorExtensions_FromCharacterToByte_mEE18610E323554161BC6D8F99F22ED6309206EF8 (Il2CppChar ___character0, int32_t ___index1, int32_t ___shift2, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		Il2CppChar L_0 = ___character0;
		V_0 = (uint8_t)((int32_t)(uint8_t)L_0);
		uint8_t L_1 = V_0;
		if ((((int32_t)((int32_t)64)) >= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		uint8_t L_2 = V_0;
		if ((((int32_t)((int32_t)71)) > ((int32_t)L_2)))
		{
			goto IL_0017;
		}
	}

IL_000d:
	{
		uint8_t L_3 = V_0;
		if ((((int32_t)((int32_t)96)) >= ((int32_t)L_3)))
		{
			goto IL_0047;
		}
	}
	{
		uint8_t L_4 = V_0;
		if ((((int32_t)((int32_t)103)) <= ((int32_t)L_4)))
		{
			goto IL_0047;
		}
	}

IL_0017:
	{
		uint8_t L_5 = V_0;
		if ((!(((uint32_t)((int32_t)64)) == ((uint32_t)((int32_t)(((int32_t)64)&(int32_t)L_5))))))
		{
			goto IL_007a;
		}
	}
	{
		uint8_t L_6 = V_0;
		if ((!(((uint32_t)((int32_t)32)) == ((uint32_t)((int32_t)(((int32_t)32)&(int32_t)L_6))))))
		{
			goto IL_0037;
		}
	}
	{
		uint8_t L_7 = V_0;
		int32_t L_8 = ___shift2;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_7, ((int32_t)10))), ((int32_t)97)))<<((int32_t)(L_8&((int32_t)31))))));
		goto IL_007a;
	}

IL_0037:
	{
		uint8_t L_9 = V_0;
		int32_t L_10 = ___shift2;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_9, ((int32_t)10))), ((int32_t)65)))<<((int32_t)(L_10&((int32_t)31))))));
		goto IL_007a;
	}

IL_0047:
	{
		uint8_t L_11 = V_0;
		if ((((int32_t)((int32_t)41)) >= ((int32_t)L_11)))
		{
			goto IL_005e;
		}
	}
	{
		uint8_t L_12 = V_0;
		if ((((int32_t)((int32_t)64)) <= ((int32_t)L_12)))
		{
			goto IL_005e;
		}
	}
	{
		uint8_t L_13 = V_0;
		int32_t L_14 = ___shift2;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_13, ((int32_t)48)))<<((int32_t)(L_14&((int32_t)31))))));
		goto IL_007a;
	}

IL_005e:
	{
		Il2CppChar L_15 = ___character0;
		Il2CppChar L_16 = L_15;
		RuntimeObject* L_17 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)), &L_16);
		int32_t L_18 = ___index1;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_19);
		String_t* L_21;
		L_21 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral70C6D80A1C9DC0AE77AA63E1DC135F76ED9B37E0)), L_17, L_20, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_22 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HexByteConvertorExtensions_FromCharacterToByte_mEE18610E323554161BC6D8F99F22ED6309206EF8_RuntimeMethod_var)));
	}

IL_007a:
	{
		uint8_t L_23 = V_0;
		return L_23;
	}
}
// System.Void Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexByteConvertorExtensions__cctor_m0EF9BDDE710C3D6D1CB5E009717ABC59B9A44095 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		((HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_StaticFields*)il2cpp_codegen_static_fields_for(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var))->___Empty_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_StaticFields*)il2cpp_codegen_static_fields_for(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var))->___Empty_0), (void*)L_0);
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
// System.Void Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mEEBAA509E41AC0CEBBDC2642147F6D4EECC08EA3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t231D9C1EB717F2471905FE69D76AA57BA66D4ACF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t231D9C1EB717F2471905FE69D76AA57BA66D4ACF* L_0 = (U3CU3Ec_t231D9C1EB717F2471905FE69D76AA57BA66D4ACF*)il2cpp_codegen_object_new(U3CU3Ec_t231D9C1EB717F2471905FE69D76AA57BA66D4ACF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m829B68D31B0342DBD3F8337487D9A2E7A27C6BB3(L_0, NULL);
		((U3CU3Ec_t231D9C1EB717F2471905FE69D76AA57BA66D4ACF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t231D9C1EB717F2471905FE69D76AA57BA66D4ACF_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t231D9C1EB717F2471905FE69D76AA57BA66D4ACF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t231D9C1EB717F2471905FE69D76AA57BA66D4ACF_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m829B68D31B0342DBD3F8337487D9A2E7A27C6BB3 (U3CU3Ec_t231D9C1EB717F2471905FE69D76AA57BA66D4ACF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions/<>c::<ToHex>b__1_0(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToHexU3Eb__1_0_m28B2607DC9CA8AE04C50019F41558ADA7A77B5DC (U3CU3Ec_t231D9C1EB717F2471905FE69D76AA57BA66D4ACF* __this, uint8_t ___b0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310((&___b0), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
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
// System.String Nethereum.Hex.HexConvertors.Extensions.HexStringUTF8ConvertorExtensions::ToHexUTF8(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexStringUTF8ConvertorExtensions_ToHexUTF8_m35E36ADDB74E615DD07CA8DCEF0724979FAFF764 (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		s_Il2CppMethodInitialized = true;
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_2, (bool)0, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89, L_3, NULL);
		return L_4;
	}
}
// System.String Nethereum.Hex.HexConvertors.Extensions.HexStringUTF8ConvertorExtensions::HexToUTF8String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexStringUTF8ConvertorExtensions_HexToUTF8String_m2376BB04C91106CB309A7C7906EAC8069BF1FB4F (String_t* ___hex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		String_t* L_0 = ___hex0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_0, NULL);
		V_0 = L_1;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		NullCheck(L_2);
		String_t* L_5;
		L_5 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)));
		return L_5;
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
