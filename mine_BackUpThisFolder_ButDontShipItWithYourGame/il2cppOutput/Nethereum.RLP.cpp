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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Func`2<System.Byte[],System.Byte[]>
struct Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Collections.Generic.IEnumerable`1<System.Byte[]>
struct IEnumerable_1_t21E2C2093877744709873DDCB2D3C8297821E513;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_tEE97FB3EBFE8765D0E2FC164B95E82BA5D0EAE86;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B;
// System.Collections.Generic.List`1<Nethereum.RLP.IRLPElement>
struct List_1_t8930E92CA3374D0394732F4FF2E0265B48828819;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Nethereum.RLP.IRLPElement[]
struct IRLPElementU5BU5D_tDF03CD04296E80AE35187FDB06324897EDEA8C66;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
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
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Nethereum.RLP.IRLPElement
struct IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Nethereum.RLP.RLP
struct RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659;
// Nethereum.RLP.RLPCollection
struct RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6;
// Nethereum.RLP.RLPItem
struct RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC;
// Nethereum.RLP.RLPStringFormatter
struct RLPStringFormatter_t94FC488A1E9E5E21E8E8E49A457D643CCF4E633B;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8930E92CA3374D0394732F4FF2E0265B48828819_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4A93D7BBDC8CA9F19676F72DC234545AA41CF9CC;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral9E22D0F7A2F97DEE1B8F2A283E739C3B4560BA62;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m62FB3DBA3F73FEBF64FEAD95645C625ADFB2B178_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE1C5F82060828B85D20B64B14FDF6084A256C826_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m824CB55CF36C3F8666771B7E239506A69E9080A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m69ABAF9B9856F43579FBFCFD5EAEDC18422BC4B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE6698319D8C4D7E21D7693BA39F6AEA848ED1C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB3E5ABD0EBFF0D5435926AC1742BE2787DA3EDBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m972AD6DC207A4D3369326FD26869733B895511E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m01B4358E85EA55FCDB8E7D81F818B525A9BF7E5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA778F5C4AAA949CABD16C601AED1A53CC5B8F759_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB0DD2C91E1EE18AF0585CE424F50F5F98FC97904_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m340AA5688FC1B07E49081519A407B6D09B49BAE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2EF3C1E452229C0DC88CBC75BD20C5706C238A25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RLPStringFormatter_Format_mE7EE114CAE04DB977DEDC460D458662FB3811046_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RLP_Decode_mCD3852A35EC763D0AFAA6E640A7E054BB944BA3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
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
struct U3CModuleU3E_t340EC2E7E65CFDED165330C18253C1883C33DADC 
{
};

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<Nethereum.RLP.IRLPElement>
struct List_1_t8930E92CA3374D0394732F4FF2E0265B48828819  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IRLPElementU5BU5D_tDF03CD04296E80AE35187FDB06324897EDEA8C66* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8930E92CA3374D0394732F4FF2E0265B48828819_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IRLPElementU5BU5D_tDF03CD04296E80AE35187FDB06324897EDEA8C66* ___s_emptyArray_5;
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

// Nethereum.RLP.ConvertorForRLPEncodingExtensions
struct ConvertorForRLPEncodingExtensions_t97BB63A6C43F8ABC2513B04C65C52978B501B3F7  : public RuntimeObject
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

// Nethereum.RLP.RLP
struct RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659  : public RuntimeObject
{
};

struct RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_StaticFields
{
	// System.Byte[] Nethereum.RLP.RLP::EMPTY_BYTE_ARRAY
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___EMPTY_BYTE_ARRAY_5;
	// System.Byte[] Nethereum.RLP.RLP::ZERO_BYTE_ARRAY
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ZERO_BYTE_ARRAY_6;
};

// Nethereum.RLP.RLPItem
struct RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC  : public RuntimeObject
{
	// System.Byte[] Nethereum.RLP.RLPItem::_rlpData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____rlpData_0;
};

// Nethereum.RLP.RLPStringFormatter
struct RLPStringFormatter_t94FC488A1E9E5E21E8E8E49A457D643CCF4E633B  : public RuntimeObject
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

// System.Collections.Generic.List`1/Enumerator<Nethereum.RLP.IRLPElement>
struct Enumerator_t50392BDDA51524CFB345E6E743C3052F6D54CA2D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8930E92CA3374D0394732F4FF2E0265B48828819* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
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

// Nethereum.RLP.RLPCollection
struct RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6  : public List_1_t8930E92CA3374D0394732F4FF2E0265B48828819
{
	// System.Byte[] Nethereum.RLP.RLPCollection::<RLPData>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CRLPDataU3Ek__BackingField_6;
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

// System.Func`2<System.Byte[],System.Byte[]>
struct Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6  : public MulticastDelegate_t
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


// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* Enumerable_ToList_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE6698319D8C4D7E21D7693BA39F6AEA848ED1C7C_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m340AA5688FC1B07E49081519A407B6D09B49BAE4_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, int32_t ___index0, uint8_t ___item1, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Reverse<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE1C5F82060828B85D20B64B14FDF6084A256C826_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m62FB3DBA3F73FEBF64FEAD95645C625ADFB2B178_gshared (RuntimeObject* ___source0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::AddWithResize(T)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m735EBD7363A06760DE25BACA0FC47F76CA0DEEAB_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___item0, const RuntimeMethod* method) ;

// System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850 (int32_t ___value0, const RuntimeMethod* method) ;
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
// System.Void System.Numerics.BigInteger::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m25FA3F3C832BC621CD91ABFAC3535A2F4EE7B371 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.Numerics.BigInteger::ToByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BigInteger_ToByteArray_mC501D315AF605FB0EF172628E9D4C95D2F015EB3 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesFromNumber(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConvertorForRLPEncodingExtensions_ToBytesFromNumber_m07A0EBD3B159A5F3625EDCB3BE8C2F452510C0B4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m794066816CE7E3AF4A549BC3E41315061A98ADA9 (int64_t ___value0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
inline void List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4 (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesForRLPEncoding(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mFF064F575E3C6EC44A4C3817D790CBF0D23D34E0 (String_t* ___str0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
inline void List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T[] System.Collections.Generic.List`1<System.Byte[]>::ToArray()
inline ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Numerics.BigInteger Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBigIntegerFromRLPDecoded(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mAD7F985D3961A7070872967A541A414B9B5D13ED (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) ;
// System.Int32 System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_op_Explicit_m381F80B7F65BFEC7F2597DCDB24622F7F32E6848 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) ;
// System.Int64 System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BigInteger_op_Explicit_mFADFEBD0E21A83E1522FF45D3B41F46F546F2264 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::TrimZeroBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConvertorForRLPEncodingExtensions_TrimZeroBytes_mEAF1B87C87761C26491C2F3106011097B4E6D99F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
inline void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
inline void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, uint8_t, const RuntimeMethod*))List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Array::Reverse(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C (RuntimeArray* ___array0, const RuntimeMethod* method) ;
// System.Int32 System.BitConverter::ToInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitConverter_ToInt32_m259B4E62995575B80C4086347C867EB3C8D7DAB3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Void Nethereum.RLP.RLPCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPCollection__ctor_m8A7598E0D369DFF8E26985801DA566CBEC5C9BB7 (RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.RLP.RLP::Decode(System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32,Nethereum.RLP.RLPCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLP_Decode_mCD3852A35EC763D0AFAA6E640A7E054BB944BA3B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, int32_t ___level1, int32_t ___startPosition2, int32_t ___endPosition3, int32_t ___levelToIndex4, RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* ___rlpCollection5, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Nethereum.RLP.IRLPElement>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349 (List_1_t8930E92CA3374D0394732F4FF2E0265B48828819* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t8930E92CA3374D0394732F4FF2E0265B48828819*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Boolean Nethereum.RLP.RLP::IsListBiggerThan55Bytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsListBiggerThan55Bytes_mA801C1A09F9AD882359BAB673F0CF1E516D20351 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method) ;
// System.Int32 Nethereum.RLP.RLP::ProcessListBiggerThan55Bytes(System.Byte[],System.Int32,System.Int32,Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessListBiggerThan55Bytes_mC7E541CFD7E487A107C010B2801B6494B6024E31 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, int32_t ___level1, int32_t ___levelToIndex2, RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* ___rlpCollection3, int32_t ___currentPosition4, const RuntimeMethod* method) ;
// System.Boolean Nethereum.RLP.RLP::IsListLessThan55Bytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsListLessThan55Bytes_m73DA48A4790847F432E763B0C6A4070D1AE64245 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method) ;
// System.Int32 Nethereum.RLP.RLP::ProcessListLessThan55Bytes(System.Byte[],System.Int32,System.Int32,Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessListLessThan55Bytes_m32CD016E35FC74C90FDDBEF781A9DE29F2E33DE1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, int32_t ___level1, int32_t ___levelToIndex2, RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* ___rlpCollection3, int32_t ___currentPosition4, const RuntimeMethod* method) ;
// System.Boolean Nethereum.RLP.RLP::IsItemBiggerThan55Bytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsItemBiggerThan55Bytes_m6B2E9BD975E5FCC1BF6D31A87D03C3A66CDC2954 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method) ;
// System.Int32 Nethereum.RLP.RLP::ProcessItemBiggerThan55Bytes(System.Byte[],Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessItemBiggerThan55Bytes_m889D051FDC3DF9561F9ACEE797A8BE9BF261128E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* ___rlpCollection1, int32_t ___currentPosition2, const RuntimeMethod* method) ;
// System.Boolean Nethereum.RLP.RLP::IsItemLessThan55Bytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsItemLessThan55Bytes_m076EF106B7AA8A5DC92E112ADFF41C0DBC432D4B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method) ;
// System.Int32 Nethereum.RLP.RLP::ProcessItemLessThan55Bytes(System.Byte[],Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessItemLessThan55Bytes_m47C0F1CB6BCFFEF37727A050564754A32FEC902B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* ___rlpCollection1, int32_t ___currentPosition2, const RuntimeMethod* method) ;
// System.Boolean Nethereum.RLP.RLP::IsNullItem(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsNullItem_mA469B522F0D38B78A5C985803B1E928D847304E3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method) ;
// System.Int32 Nethereum.RLP.RLP::ProcessNullItem(Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessNullItem_m11A5BFFA71343D522DAC7C38CDC8378FD5DCC9A7 (RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* ___rlpCollection0, int32_t ___currentPosition1, const RuntimeMethod* method) ;
// System.Boolean Nethereum.RLP.RLP::IsSigleByteItem(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsSigleByteItem_m03A6E506D0BD6197BE4D46D7AA937627CB6B7ADF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method) ;
// System.Int32 Nethereum.RLP.RLP::ProcessSingleByteItem(System.Byte[],Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessSingleByteItem_m70468A1EA945307400A12CA2F86B147A64234A7D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* ___rlpCollection1, int32_t ___currentPosition2, const RuntimeMethod* method) ;
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::ToHex(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, bool ___prefix1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void Nethereum.RLP.RLPItem::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPItem__ctor_mAFC6111AA2DD006A0AE8B75714677E703FF0AA8E (RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rlpData0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Nethereum.RLP.IRLPElement>::Add(T)
inline void List_1_Add_mA778F5C4AAA949CABD16C601AED1A53CC5B8F759_inline (List_1_t8930E92CA3374D0394732F4FF2E0265B48828819* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8930E92CA3374D0394732F4FF2E0265B48828819*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 Nethereum.RLP.RLP::CalculateLength(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_CalculateLength_m4A165F189E10C601C4CFE15CEEC0B8EEC07550FE (int32_t ___lengthOfLength0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData1, int32_t ___pos2, const RuntimeMethod* method) ;
// System.Void Nethereum.RLP.RLPCollection::set_RLPData(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RLPCollection_set_RLPData_mA63FEDE0C3835FF767DBE5D6F410EB738F5C2B9E_inline (RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Boolean Nethereum.RLP.RLP::IsNullOrZeroArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsNullOrZeroArray_m2F209F623CB7E375D2581787961302094EE88102 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) ;
// System.Boolean Nethereum.RLP.RLP::IsSingleZero(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsSingleZero_m2919B2D7291469E35BF152182CE804D2095036F2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Byte[],System.Byte[]>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD26A5AC8F9D1B72F4B75E06D44C6ABCA7BCDB4A0 (Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Byte[],System.Byte[]>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m824CB55CF36C3F8666771B7E239506A69E9080A3 (RuntimeObject* ___source0, Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.Byte[]>(System.Collections.Generic.IEnumerable`1<TSource>)
inline ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* Enumerable_ToArray_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m69ABAF9B9856F43579FBFCFD5EAEDC18422BC4B9 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.Byte[] Nethereum.RLP.RLP::EncodeList(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLP_EncodeList_m2A2C2A6B4DDA95C331AECF96926B0D9C1B16FE05 (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___items0, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
inline bool Enumerable_Contains_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m62FB3DBA3F73FEBF64FEAD95645C625ADFB2B178 (RuntimeObject* ___source0, int32_t ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Contains_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m62FB3DBA3F73FEBF64FEAD95645C625ADFB2B178_gshared)(___source0, ___value1, method);
}
// System.Byte[] Nethereum.RLP.RLP::EncodeElement(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___srcData0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Nethereum.RLP.IRLPElement>::.ctor()
inline void List_1__ctor_m2EF3C1E452229C0DC88CBC75BD20C5706C238A25 (List_1_t8930E92CA3374D0394732F4FF2E0265B48828819* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8930E92CA3374D0394732F4FF2E0265B48828819*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Byte[] Nethereum.RLP.RLPItem::GetRLPData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLPItem_GetRLPData_mDD448A4B6C4F81DBCD65430CC9319B40BD68CB23 (RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Nethereum.RLP.IRLPElement>::GetEnumerator()
inline Enumerator_t50392BDDA51524CFB345E6E743C3052F6D54CA2D List_1_GetEnumerator_mB0DD2C91E1EE18AF0585CE424F50F5F98FC97904 (List_1_t8930E92CA3374D0394732F4FF2E0265B48828819* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t50392BDDA51524CFB345E6E743C3052F6D54CA2D (*) (List_1_t8930E92CA3374D0394732F4FF2E0265B48828819*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Nethereum.RLP.IRLPElement>::Dispose()
inline void Enumerator_Dispose_mB3E5ABD0EBFF0D5435926AC1742BE2787DA3EDBE (Enumerator_t50392BDDA51524CFB345E6E743C3052F6D54CA2D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t50392BDDA51524CFB345E6E743C3052F6D54CA2D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Nethereum.RLP.IRLPElement>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m01B4358E85EA55FCDB8E7D81F818B525A9BF7E5D_inline (Enumerator_t50392BDDA51524CFB345E6E743C3052F6D54CA2D* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t50392BDDA51524CFB345E6E743C3052F6D54CA2D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.String Nethereum.RLP.RLPStringFormatter::Format(Nethereum.RLP.IRLPElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RLPStringFormatter_Format_mE7EE114CAE04DB977DEDC460D458662FB3811046 (RuntimeObject* ___element0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Nethereum.RLP.IRLPElement>::MoveNext()
inline bool Enumerator_MoveNext_m972AD6DC207A4D3369326FD26869733B895511E5 (Enumerator_t50392BDDA51524CFB345E6E743C3052F6D54CA2D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t50392BDDA51524CFB345E6E743C3052F6D54CA2D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___item0, method);
}
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
// System.Numerics.BigInteger Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBigIntegerFromRLPDecoded(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mAD7F985D3961A7070872967A541A414B9B5D13ED (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE1C5F82060828B85D20B64B14FDF6084A256C826_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE6698319D8C4D7E21D7693BA39F6AEA848ED1C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_m340AA5688FC1B07E49081519A407B6D09B49BAE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(0, NULL);
		return L_1;
	}

IL_000a:
	{
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_2 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bytes0;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_4;
		L_4 = Enumerable_ToList_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE6698319D8C4D7E21D7693BA39F6AEA848ED1C7C((RuntimeObject*)L_3, Enumerable_ToList_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE6698319D8C4D7E21D7693BA39F6AEA848ED1C7C_RuntimeMethod_var);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_5 = L_4;
		NullCheck(L_5);
		List_1_Insert_m340AA5688FC1B07E49081519A407B6D09B49BAE4(L_5, 0, (uint8_t)0, List_1_Insert_m340AA5688FC1B07E49081519A407B6D09B49BAE4_RuntimeMethod_var);
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_5, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		RuntimeObject* L_7;
		L_7 = Enumerable_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE1C5F82060828B85D20B64B14FDF6084A256C826((RuntimeObject*)L_6, Enumerable_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE1C5F82060828B85D20B64B14FDF6084A256C826_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_7, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		___bytes0 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___bytes0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_10;
		memset((&L_10), 0, sizeof(L_10));
		BigInteger__ctor_m25FA3F3C832BC621CD91ABFAC3535A2F4EE7B371((&L_10), L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0037:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___bytes0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_12;
		memset((&L_12), 0, sizeof(L_12));
		BigInteger__ctor_m25FA3F3C832BC621CD91ABFAC3535A2F4EE7B371((&L_12), L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesForRLPEncoding(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___bigInteger0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = BigInteger_ToByteArray_mC501D315AF605FB0EF172628E9D4C95D2F015EB3((&___bigInteger0), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = ConvertorForRLPEncodingExtensions_ToBytesFromNumber_m07A0EBD3B159A5F3625EDCB3BE8C2F452510C0B4(L_0, NULL);
		return L_1;
	}
}
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesForRLPEncoding(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mB8A2D4491D58D2CFEDB5F7086A4D41E2BA349811 (int32_t ___number0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___number0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9(L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = ConvertorForRLPEncodingExtensions_ToBytesFromNumber_m07A0EBD3B159A5F3625EDCB3BE8C2F452510C0B4(L_1, NULL);
		return L_2;
	}
}
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesForRLPEncoding(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_m6AD343E741D49F00EF0AB8F671EF6582DFDCEAA4 (int64_t ___number0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___number0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = BitConverter_GetBytes_m794066816CE7E3AF4A549BC3E41315061A98ADA9(L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = ConvertorForRLPEncodingExtensions_ToBytesFromNumber_m07A0EBD3B159A5F3625EDCB3BE8C2F452510C0B4(L_1, NULL);
		return L_2;
	}
}
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesForRLPEncoding(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mFF064F575E3C6EC44A4C3817D790CBF0D23D34E0 (String_t* ___str0, const RuntimeMethod* method) 
{
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___str0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Byte[][] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesForRLPEncoding(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mF93CB2A31EE08695B61577D0F2B4E6419DD43FC6 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___strings0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_0, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		V_0 = L_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___strings0;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0020;
	}

IL_000c:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_6 = V_0;
		String_t* L_7 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mFF064F575E3C6EC44A4C3817D790CBF0D23D34E0(L_7, NULL);
		NullCheck(L_6);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_6, L_8, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0020:
	{
		int32_t L_10 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_13;
		L_13 = List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A(L_12, List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		return L_13;
	}
}
// System.Int32 Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToIntFromRLPDecoded(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConvertorForRLPEncodingExtensions_ToIntFromRLPDecoded_m7280556CD649048E229066E318FB0B85D4B5AC36 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mAD7F985D3961A7070872967A541A414B9B5D13ED(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = BigInteger_op_Explicit_m381F80B7F65BFEC7F2597DCDB24622F7F32E6848(L_1, NULL);
		return L_2;
	}
}
// System.Int64 Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToLongFromRLPDecoded(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ConvertorForRLPEncodingExtensions_ToLongFromRLPDecoded_m115B1AFCE51801BF5551ADA984EFCF3EAFFF17B7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mAD7F985D3961A7070872967A541A414B9B5D13ED(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		int64_t L_2;
		L_2 = BigInteger_op_Explicit_mFADFEBD0E21A83E1522FF45D3B41F46F546F2264(L_1, NULL);
		return L_2;
	}
}
// System.String Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToStringFromRLPDecoded(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConvertorForRLPEncodingExtensions_ToStringFromRLPDecoded_m7E8B45A1DAF7697F374DC26B8BB694729EF045D0 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0009:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bytes0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bytes0;
		NullCheck(L_3);
		NullCheck(L_1);
		String_t* L_4;
		L_4 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)));
		return L_4;
	}
}
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesFromNumber(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConvertorForRLPEncodingExtensions_ToBytesFromNumber_m07A0EBD3B159A5F3625EDCB3BE8C2F452510C0B4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE1C5F82060828B85D20B64B14FDF6084A256C826_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bytes0;
		RuntimeObject* L_2;
		L_2 = Enumerable_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE1C5F82060828B85D20B64B14FDF6084A256C826((RuntimeObject*)L_1, Enumerable_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE1C5F82060828B85D20B64B14FDF6084A256C826_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_2, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		___bytes0 = L_3;
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___bytes0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = ConvertorForRLPEncodingExtensions_TrimZeroBytes_mEAF1B87C87761C26491C2F3106011097B4E6D99F(L_4, NULL);
		return L_5;
	}
}
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::TrimZeroBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConvertorForRLPEncodingExtensions_TrimZeroBytes_mEAF1B87C87761C26491C2F3106011097B4E6D99F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9(L_0, List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = (bool)1;
		V_2 = 0;
		goto IL_0023;
	}

IL_000c:
	{
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bytes0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if (!L_5)
		{
			goto IL_001f;
		}
	}

IL_0014:
	{
		V_1 = (bool)0;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___bytes0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_6, L_10, List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
	}

IL_001f:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0023:
	{
		int32_t L_12 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___bytes0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_14 = V_0;
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_14, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		return L_15;
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
// System.Int32 Nethereum.RLP.RLP::ByteArrayToInt(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ByteArrayToInt_m2F8EE899FC43EDEB6F99C636D7606F8CB73CE393 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bytes0;
		Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_1, NULL);
	}

IL_000d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bytes0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = BitConverter_ToInt32_m259B4E62995575B80C4086347C867EB3C8D7DAB3(L_2, 0, NULL);
		return L_3;
	}
}
// Nethereum.RLP.IRLPElement Nethereum.RLP.RLP::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RLP_Decode_m25755DBDC9A4DD532BC45B2C9BBBB03E00FA0C33 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* V_0 = NULL;
	{
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_0 = (RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6*)il2cpp_codegen_object_new(RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RLPCollection__ctor_m8A7598E0D369DFF8E26985801DA566CBEC5C9BB7(L_0, NULL);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___msgData0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___msgData0;
		NullCheck(L_2);
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		RLP_Decode_mCD3852A35EC763D0AFAA6E640A7E054BB944BA3B(L_1, 0, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), 1, L_3, NULL);
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_4, 0, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		return L_5;
	}
}
// Nethereum.RLP.IRLPElement Nethereum.RLP.RLP::DecodeCollection(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RLP_DecodeCollection_m494A27B85770F5DAA02912A31825687595401F27 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* V_0 = NULL;
	{
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_0 = (RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6*)il2cpp_codegen_object_new(RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RLPCollection__ctor_m8A7598E0D369DFF8E26985801DA566CBEC5C9BB7(L_0, NULL);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___msgData0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___msgData0;
		NullCheck(L_2);
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		RLP_Decode_mCD3852A35EC763D0AFAA6E640A7E054BB944BA3B(L_1, 0, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), 1, L_3, NULL);
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_4 = V_0;
		return L_4;
	}
}
// System.Void Nethereum.RLP.RLP::Decode(System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32,Nethereum.RLP.RLPCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLP_Decode_mCD3852A35EC763D0AFAA6E640A7E054BB944BA3B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, int32_t ___level1, int32_t ___startPosition2, int32_t ___endPosition3, int32_t ___levelToIndex4, RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* ___rlpCollection5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___msgData0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___msgData0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0008;
		}
	}

IL_0007:
	{
		return;
	}

IL_0008:
	{
		int32_t L_2 = ___endPosition3;
		int32_t L_3 = ___startPosition2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3)));
		V_0 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___msgData0;
		int32_t L_6 = ___startPosition2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, ((int32_t)(((RuntimeArray*)L_8)->max_length)), NULL);
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_9 = ___startPosition2;
			V_1 = L_9;
			goto IL_00a5_1;
		}

IL_0024_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___msgData0;
			int32_t L_11 = V_1;
			il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
			bool L_12;
			L_12 = RLP_IsListBiggerThan55Bytes_mA801C1A09F9AD882359BAB673F0CF1E516D20351(L_10, L_11, NULL);
			if (!L_12)
			{
				goto IL_003c_1;
			}
		}
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___msgData0;
			int32_t L_14 = ___level1;
			int32_t L_15 = ___levelToIndex4;
			RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_16 = ___rlpCollection5;
			int32_t L_17 = V_1;
			il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
			int32_t L_18;
			L_18 = RLP_ProcessListBiggerThan55Bytes_mC7E541CFD7E487A107C010B2801B6494B6024E31(L_13, L_14, L_15, L_16, L_17, NULL);
			V_1 = L_18;
			goto IL_00a5_1;
		}

IL_003c_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___msgData0;
			int32_t L_20 = V_1;
			il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
			bool L_21;
			L_21 = RLP_IsListLessThan55Bytes_m73DA48A4790847F432E763B0C6A4070D1AE64245(L_19, L_20, NULL);
			if (!L_21)
			{
				goto IL_0054_1;
			}
		}
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___msgData0;
			int32_t L_23 = ___level1;
			int32_t L_24 = ___levelToIndex4;
			RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_25 = ___rlpCollection5;
			int32_t L_26 = V_1;
			il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
			int32_t L_27;
			L_27 = RLP_ProcessListLessThan55Bytes_m32CD016E35FC74C90FDDBEF781A9DE29F2E33DE1(L_22, L_23, L_24, L_25, L_26, NULL);
			V_1 = L_27;
			goto IL_00a5_1;
		}

IL_0054_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___msgData0;
			int32_t L_29 = V_1;
			il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
			bool L_30;
			L_30 = RLP_IsItemBiggerThan55Bytes_m6B2E9BD975E5FCC1BF6D31A87D03C3A66CDC2954(L_28, L_29, NULL);
			if (!L_30)
			{
				goto IL_0069_1;
			}
		}
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___msgData0;
			RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_32 = ___rlpCollection5;
			int32_t L_33 = V_1;
			il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
			int32_t L_34;
			L_34 = RLP_ProcessItemBiggerThan55Bytes_m889D051FDC3DF9561F9ACEE797A8BE9BF261128E(L_31, L_32, L_33, NULL);
			V_1 = L_34;
			goto IL_00a5_1;
		}

IL_0069_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ___msgData0;
			int32_t L_36 = V_1;
			il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
			bool L_37;
			L_37 = RLP_IsItemLessThan55Bytes_m076EF106B7AA8A5DC92E112ADFF41C0DBC432D4B(L_35, L_36, NULL);
			if (!L_37)
			{
				goto IL_007e_1;
			}
		}
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ___msgData0;
			RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_39 = ___rlpCollection5;
			int32_t L_40 = V_1;
			il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
			int32_t L_41;
			L_41 = RLP_ProcessItemLessThan55Bytes_m47C0F1CB6BCFFEF37727A050564754A32FEC902B(L_38, L_39, L_40, NULL);
			V_1 = L_41;
			goto IL_00a5_1;
		}

IL_007e_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___msgData0;
			int32_t L_43 = V_1;
			il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
			bool L_44;
			L_44 = RLP_IsNullItem_mA469B522F0D38B78A5C985803B1E928D847304E3(L_42, L_43, NULL);
			if (!L_44)
			{
				goto IL_0092_1;
			}
		}
		{
			RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_45 = ___rlpCollection5;
			int32_t L_46 = V_1;
			il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
			int32_t L_47;
			L_47 = RLP_ProcessNullItem_m11A5BFFA71343D522DAC7C38CDC8378FD5DCC9A7(L_45, L_46, NULL);
			V_1 = L_47;
			goto IL_00a5_1;
		}

IL_0092_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = ___msgData0;
			int32_t L_49 = V_1;
			il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
			bool L_50;
			L_50 = RLP_IsSigleByteItem_m03A6E506D0BD6197BE4D46D7AA937627CB6B7ADF(L_48, L_49, NULL);
			if (!L_50)
			{
				goto IL_00a5_1;
			}
		}
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = ___msgData0;
			RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_52 = ___rlpCollection5;
			int32_t L_53 = V_1;
			il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
			int32_t L_54;
			L_54 = RLP_ProcessSingleByteItem_m70468A1EA945307400A12CA2F86B147A64234A7D(L_51, L_52, L_53, NULL);
			V_1 = L_54;
		}

IL_00a5_1:
		{
			int32_t L_55 = V_1;
			int32_t L_56 = ___endPosition3;
			if ((((int32_t)L_55) < ((int32_t)L_56)))
			{
				goto IL_0024_1;
			}
		}
		{
			goto IL_00c7;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ae;
		}
		throw e;
	}

CATCH_00ae:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = V_0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var)));
		String_t* L_58;
		L_58 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_57, (bool)0, NULL);
		String_t* L_59;
		L_59 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4A93D7BBDC8CA9F19676F72DC234545AA41CF9CC)), L_58, NULL);
		Exception_t* L_60 = V_2;
		Exception_t* L_61 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_61);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(L_61, L_59, L_60, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_61, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RLP_Decode_mCD3852A35EC763D0AFAA6E640A7E054BB944BA3B_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_00c7:
	{
		return;
	}
}
// System.Boolean Nethereum.RLP.RLP::IsListBiggerThan55Bytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsListBiggerThan55Bytes_mA801C1A09F9AD882359BAB673F0CF1E516D20351 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return (bool)((((int32_t)L_3) > ((int32_t)((int32_t)247)))? 1 : 0);
	}
}
// System.Boolean Nethereum.RLP.RLP::IsListLessThan55Bytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsListLessThan55Bytes_m73DA48A4790847F432E763B0C6A4070D1AE64245 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((((int32_t)L_3) < ((int32_t)((int32_t)192))))
		{
			goto IL_0018;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___msgData0;
		int32_t L_5 = ___currentPosition1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return (bool)((((int32_t)((((int32_t)L_7) > ((int32_t)((int32_t)247)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0018:
	{
		return (bool)0;
	}
}
// System.Boolean Nethereum.RLP.RLP::IsItemBiggerThan55Bytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsItemBiggerThan55Bytes_m6B2E9BD975E5FCC1BF6D31A87D03C3A66CDC2954 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)183))))
		{
			goto IL_0015;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___msgData0;
		int32_t L_5 = ___currentPosition1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return (bool)((((int32_t)L_7) < ((int32_t)((int32_t)192)))? 1 : 0);
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Boolean Nethereum.RLP.RLP::IsItemLessThan55Bytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsItemLessThan55Bytes_m076EF106B7AA8A5DC92E112ADFF41C0DBC432D4B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)128))))
		{
			goto IL_0018;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___msgData0;
		int32_t L_5 = ___currentPosition1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return (bool)((((int32_t)((((int32_t)L_7) > ((int32_t)((int32_t)183)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0018:
	{
		return (bool)0;
	}
}
// System.Boolean Nethereum.RLP.RLP::IsNullItem(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsNullItem_mA469B522F0D38B78A5C985803B1E928D847304E3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return (bool)((((int32_t)L_3) == ((int32_t)((int32_t)128)))? 1 : 0);
	}
}
// System.Boolean Nethereum.RLP.RLP::IsSigleByteItem(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsSigleByteItem_m03A6E506D0BD6197BE4D46D7AA937627CB6B7ADF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return (bool)((((int32_t)L_3) < ((int32_t)((int32_t)128)))? 1 : 0);
	}
}
// System.Int32 Nethereum.RLP.RLP::ProcessSingleByteItem(System.Byte[],Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessSingleByteItem_m70468A1EA945307400A12CA2F86B147A64234A7D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* ___rlpCollection1, int32_t ___currentPosition2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA778F5C4AAA949CABD16C601AED1A53CC5B8F759_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___msgData0;
		int32_t L_3 = ___currentPosition2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_5);
		RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC* L_6 = (RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC*)il2cpp_codegen_object_new(RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		RLPItem__ctor_mAFC6111AA2DD006A0AE8B75714677E703FF0AA8E(L_6, L_1, NULL);
		V_0 = L_6;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_7 = ___rlpCollection1;
		RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC* L_8 = V_0;
		NullCheck(L_7);
		List_1_Add_mA778F5C4AAA949CABD16C601AED1A53CC5B8F759_inline(L_7, L_8, List_1_Add_mA778F5C4AAA949CABD16C601AED1A53CC5B8F759_RuntimeMethod_var);
		int32_t L_9 = ___currentPosition2;
		___currentPosition2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = ___currentPosition2;
		return L_10;
	}
}
// System.Int32 Nethereum.RLP.RLP::ProcessNullItem(Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessNullItem_m11A5BFFA71343D522DAC7C38CDC8378FD5DCC9A7 (RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* ___rlpCollection0, int32_t ___currentPosition1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA778F5C4AAA949CABD16C601AED1A53CC5B8F759_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_StaticFields*)il2cpp_codegen_static_fields_for(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var))->___EMPTY_BYTE_ARRAY_5;
		RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC* L_1 = (RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC*)il2cpp_codegen_object_new(RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RLPItem__ctor_mAFC6111AA2DD006A0AE8B75714677E703FF0AA8E(L_1, L_0, NULL);
		V_0 = L_1;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_2 = ___rlpCollection0;
		RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC* L_3 = V_0;
		NullCheck(L_2);
		List_1_Add_mA778F5C4AAA949CABD16C601AED1A53CC5B8F759_inline(L_2, L_3, List_1_Add_mA778F5C4AAA949CABD16C601AED1A53CC5B8F759_RuntimeMethod_var);
		int32_t L_4 = ___currentPosition1;
		___currentPosition1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = ___currentPosition1;
		return L_5;
	}
}
// System.Int32 Nethereum.RLP.RLP::ProcessItemLessThan55Bytes(System.Byte[],Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessItemLessThan55Bytes_m47C0F1CB6BCFFEF37727A050564754A32FEC902B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* ___rlpCollection1, int32_t ___currentPosition2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA778F5C4AAA949CABD16C601AED1A53CC5B8F759_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, ((int32_t)128))));
		uint8_t L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___msgData0;
		int32_t L_7 = ___currentPosition2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
		uint8_t L_9 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), (RuntimeArray*)L_8, 0, L_9, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		V_2 = L_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___msgData0;
		int32_t L_12 = ___currentPosition2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, L_12, (RuntimeArray*)L_13, 0, 2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC* L_15 = (RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC*)il2cpp_codegen_object_new(RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		RLPItem__ctor_mAFC6111AA2DD006A0AE8B75714677E703FF0AA8E(L_15, L_14, NULL);
		V_3 = L_15;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_16 = ___rlpCollection1;
		RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC* L_17 = V_3;
		NullCheck(L_16);
		List_1_Add_mA778F5C4AAA949CABD16C601AED1A53CC5B8F759_inline(L_16, L_17, List_1_Add_mA778F5C4AAA949CABD16C601AED1A53CC5B8F759_RuntimeMethod_var);
		int32_t L_18 = ___currentPosition2;
		uint8_t L_19 = V_0;
		___currentPosition2 = ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)il2cpp_codegen_add(1, (int32_t)L_19))));
		int32_t L_20 = ___currentPosition2;
		return L_20;
	}
}
// System.Int32 Nethereum.RLP.RLP::ProcessItemBiggerThan55Bytes(System.Byte[],Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessItemBiggerThan55Bytes_m889D051FDC3DF9561F9ACEE797A8BE9BF261128E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* ___rlpCollection1, int32_t ___currentPosition2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA778F5C4AAA949CABD16C601AED1A53CC5B8F759_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC* V_4 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, ((int32_t)183))));
		uint8_t L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___msgData0;
		int32_t L_6 = ___currentPosition2;
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = RLP_CalculateLength_m4A165F189E10C601C4CFE15CEEC0B8EEC07550FE(L_4, L_5, L_6, NULL);
		V_1 = L_7;
		int32_t L_8 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_2 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___msgData0;
		int32_t L_11 = ___currentPosition2;
		uint8_t L_12 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_2;
		int32_t L_14 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_11, (int32_t)L_12)), 1)), (RuntimeArray*)L_13, 0, L_14, NULL);
		uint8_t L_15 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, 1)));
		V_3 = L_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___msgData0;
		int32_t L_18 = ___currentPosition2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_3;
		uint8_t L_20 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_17, L_18, (RuntimeArray*)L_19, 0, ((int32_t)il2cpp_codegen_add((int32_t)L_20, 1)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_2;
		RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC* L_22 = (RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC*)il2cpp_codegen_object_new(RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		RLPItem__ctor_mAFC6111AA2DD006A0AE8B75714677E703FF0AA8E(L_22, L_21, NULL);
		V_4 = L_22;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_23 = ___rlpCollection1;
		RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC* L_24 = V_4;
		NullCheck(L_23);
		List_1_Add_mA778F5C4AAA949CABD16C601AED1A53CC5B8F759_inline(L_23, L_24, List_1_Add_mA778F5C4AAA949CABD16C601AED1A53CC5B8F759_RuntimeMethod_var);
		int32_t L_25 = ___currentPosition2;
		uint8_t L_26 = V_0;
		int32_t L_27 = V_1;
		___currentPosition2 = ((int32_t)il2cpp_codegen_add(L_25, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_26, L_27)), 1))));
		int32_t L_28 = ___currentPosition2;
		return L_28;
	}
}
// System.Int32 Nethereum.RLP.RLP::ProcessListLessThan55Bytes(System.Byte[],System.Int32,System.Int32,Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessListLessThan55Bytes_m32CD016E35FC74C90FDDBEF781A9DE29F2E33DE1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, int32_t ___level1, int32_t ___levelToIndex2, RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* ___rlpCollection3, int32_t ___currentPosition4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA778F5C4AAA949CABD16C601AED1A53CC5B8F759_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* V_2 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition4;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, ((int32_t)192)));
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_5, 1)));
		V_1 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___msgData0;
		int32_t L_8 = ___currentPosition4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		int32_t L_10 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, 0, L_10, NULL);
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_11 = (RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6*)il2cpp_codegen_object_new(RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		RLPCollection__ctor_m8A7598E0D369DFF8E26985801DA566CBEC5C9BB7(L_11, NULL);
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_12 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		NullCheck(L_12);
		RLPCollection_set_RLPData_mA63FEDE0C3835FF767DBE5D6F410EB738F5C2B9E_inline(L_12, L_13, NULL);
		V_2 = L_12;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___msgData0;
		int32_t L_15 = ___level1;
		int32_t L_16 = ___currentPosition4;
		int32_t L_17 = ___currentPosition4;
		int32_t L_18 = V_0;
		int32_t L_19 = ___levelToIndex2;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_20 = V_2;
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		RLP_Decode_mCD3852A35EC763D0AFAA6E640A7E054BB944BA3B(L_14, ((int32_t)il2cpp_codegen_add(L_15, 1)), ((int32_t)il2cpp_codegen_add(L_16, 1)), ((int32_t)il2cpp_codegen_add(L_17, L_18)), L_19, L_20, NULL);
	}

IL_0045:
	{
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_21 = ___rlpCollection3;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_22 = V_2;
		NullCheck(L_21);
		List_1_Add_mA778F5C4AAA949CABD16C601AED1A53CC5B8F759_inline(L_21, L_22, List_1_Add_mA778F5C4AAA949CABD16C601AED1A53CC5B8F759_RuntimeMethod_var);
		int32_t L_23 = ___currentPosition4;
		int32_t L_24 = V_0;
		___currentPosition4 = ((int32_t)il2cpp_codegen_add(L_23, L_24));
		int32_t L_25 = ___currentPosition4;
		return L_25;
	}
}
// System.Int32 Nethereum.RLP.RLP::ProcessListBiggerThan55Bytes(System.Byte[],System.Int32,System.Int32,Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessListBiggerThan55Bytes_mC7E541CFD7E487A107C010B2801B6494B6024E31 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, int32_t ___level1, int32_t ___levelToIndex2, RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* ___rlpCollection3, int32_t ___currentPosition4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA778F5C4AAA949CABD16C601AED1A53CC5B8F759_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* V_4 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition4;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, ((int32_t)247))));
		uint8_t L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___msgData0;
		int32_t L_6 = ___currentPosition4;
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = RLP_CalculateLength_m4A165F189E10C601C4CFE15CEEC0B8EEC07550FE(L_4, L_5, L_6, NULL);
		V_1 = L_7;
		uint8_t L_8 = V_0;
		int32_t L_9 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_8, L_9)), 1));
		int32_t L_10 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_10);
		V_3 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___msgData0;
		int32_t L_13 = ___currentPosition4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_3;
		int32_t L_15 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 0, L_15, NULL);
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_16 = (RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6*)il2cpp_codegen_object_new(RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		RLPCollection__ctor_m8A7598E0D369DFF8E26985801DA566CBEC5C9BB7(L_16, NULL);
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_17 = L_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_3;
		NullCheck(L_17);
		RLPCollection_set_RLPData_mA63FEDE0C3835FF767DBE5D6F410EB738F5C2B9E_inline(L_17, L_18, NULL);
		V_4 = L_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___msgData0;
		int32_t L_20 = ___level1;
		int32_t L_21 = ___currentPosition4;
		uint8_t L_22 = V_0;
		int32_t L_23 = ___currentPosition4;
		int32_t L_24 = V_2;
		int32_t L_25 = ___levelToIndex2;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_26 = V_4;
		RLP_Decode_mCD3852A35EC763D0AFAA6E640A7E054BB944BA3B(L_19, ((int32_t)il2cpp_codegen_add(L_20, 1)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_21, (int32_t)L_22)), 1)), ((int32_t)il2cpp_codegen_add(L_23, L_24)), L_25, L_26, NULL);
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_27 = ___rlpCollection3;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_28 = V_4;
		NullCheck(L_27);
		List_1_Add_mA778F5C4AAA949CABD16C601AED1A53CC5B8F759_inline(L_27, L_28, List_1_Add_mA778F5C4AAA949CABD16C601AED1A53CC5B8F759_RuntimeMethod_var);
		int32_t L_29 = ___currentPosition4;
		int32_t L_30 = V_2;
		___currentPosition4 = ((int32_t)il2cpp_codegen_add(L_29, L_30));
		int32_t L_31 = ___currentPosition4;
		return L_31;
	}
}
// Nethereum.RLP.IRLPElement Nethereum.RLP.RLP::DecodeFirstElement(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RLP_DecodeFirstElement_m9C5E2212C6B87A2D996BCA61BE48E8D6921AC02E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, int32_t ___startPos1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* V_0 = NULL;
	{
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_0 = (RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6*)il2cpp_codegen_object_new(RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RLPCollection__ctor_m8A7598E0D369DFF8E26985801DA566CBEC5C9BB7(L_0, NULL);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___msgData0;
		int32_t L_2 = ___startPos1;
		int32_t L_3 = ___startPos1;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		RLP_Decode_mCD3852A35EC763D0AFAA6E640A7E054BB944BA3B(L_1, 0, L_2, ((int32_t)il2cpp_codegen_add(L_3, 1)), 1, L_4, NULL);
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_5, 0, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		return L_6;
	}
}
// System.Byte[] Nethereum.RLP.RLP::EncodeByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLP_EncodeByte_m3A516C2D6C3891E30E2128BD165865F52DDDF9AE (uint8_t ___singleByte0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = ___singleByte0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)128));
		return L_2;
	}

IL_0012:
	{
		uint8_t L_3 = ___singleByte0;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)127))))
		{
			goto IL_0022;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		uint8_t L_6 = ___singleByte0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_6);
		return L_5;
	}

IL_0022:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = L_7;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)129));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_8;
		uint8_t L_10 = ___singleByte0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_10);
		return L_9;
	}
}
// System.Byte[] Nethereum.RLP.RLP::EncodeElement(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___srcData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	int32_t V_6 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___srcData0;
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = RLP_IsNullOrZeroArray_m2F209F623CB7E375D2581787961302094EE88102(L_0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)128));
		return L_3;
	}

IL_0017:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___srcData0;
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = RLP_IsSingleZero_m2919B2D7291469E35BF152182CE804D2095036F2(L_4, NULL);
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___srcData0;
		return L_6;
	}

IL_0021:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___srcData0;
		NullCheck(L_7);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))) == ((uint32_t)1))))
		{
			goto IL_0033;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___srcData0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		uint8_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0033;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___srcData0;
		return L_11;
	}

IL_0033:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___srcData0;
		NullCheck(L_12);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) >= ((int32_t)((int32_t)56))))
		{
			goto IL_0062;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___srcData0;
		NullCheck(L_13);
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)128), ((int32_t)(((RuntimeArray*)L_13)->max_length)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___srcData0;
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_14)->max_length)), 1)));
		V_1 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___srcData0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___srcData0;
		NullCheck(L_18);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, 1, ((int32_t)(((RuntimeArray*)L_18)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_1;
		uint8_t L_20 = V_0;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_1;
		return L_21;
	}

IL_0062:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___srcData0;
		NullCheck(L_22);
		V_2 = ((int32_t)(((RuntimeArray*)L_22)->max_length));
		V_3 = (uint8_t)0;
		goto IL_0073;
	}

IL_006a:
	{
		uint8_t L_23 = V_3;
		V_3 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, 1)));
		int32_t L_24 = V_2;
		V_2 = ((int32_t)(L_24>>8));
	}

IL_0073:
	{
		int32_t L_25 = V_2;
		if (L_25)
		{
			goto IL_006a;
		}
	}
	{
		uint8_t L_26 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_26);
		V_4 = L_27;
		V_6 = 0;
		goto IL_009e;
	}

IL_0083:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_4;
		uint8_t L_29 = V_3;
		int32_t L_30 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___srcData0;
		NullCheck(L_31);
		int32_t L_32 = V_6;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_29, 1)), L_30))), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((RuntimeArray*)L_31)->max_length))>>((int32_t)(((int32_t)il2cpp_codegen_multiply(8, L_32))&((int32_t)31)))))));
		int32_t L_33 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_009e:
	{
		int32_t L_34 = V_6;
		uint8_t L_35 = V_3;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0083;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___srcData0;
		NullCheck(L_36);
		uint8_t L_37 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_36)->max_length)), 1)), (int32_t)L_37)));
		V_5 = L_38;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ___srcData0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_5;
		uint8_t L_41 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___srcData0;
		NullCheck(L_42);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, (RuntimeArray*)L_40, ((int32_t)il2cpp_codegen_add(1, (int32_t)L_41)), ((int32_t)(((RuntimeArray*)L_42)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_5;
		uint8_t L_44 = V_3;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)183), (int32_t)L_44))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = V_4;
		NullCheck(L_47);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_45, 0, (RuntimeArray*)L_46, 1, ((int32_t)(((RuntimeArray*)L_47)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_5;
		return L_48;
	}
}
// System.Byte[] Nethereum.RLP.RLP::EncodeDataItemsAsElementOrListAndCombineAsList(System.Byte[][],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLP_EncodeDataItemsAsElementOrListAndCombineAsList_m03BF5928F42FA0AE887AF871B1D36202A3A6D791 (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___dataItems0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indexOfListDataItems1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m62FB3DBA3F73FEBF64FEAD95645C625ADFB2B178_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m824CB55CF36C3F8666771B7E239506A69E9080A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m69ABAF9B9856F43579FBFCFD5EAEDC18422BC4B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___indexOfListDataItems1;
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_1 = ___dataItems0;
		Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6* L_2 = (Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6*)il2cpp_codegen_object_new(Func_2_t8B880504536D4B6C92D6AF9E5166D0562BED75E6_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Func_2__ctor_mD26A5AC8F9D1B72F4B75E06D44C6ABCA7BCDB4A0(L_2, NULL, (intptr_t)((void*)RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1_RuntimeMethod_var), NULL);
		RuntimeObject* L_3;
		L_3 = Enumerable_Select_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m824CB55CF36C3F8666771B7E239506A69E9080A3((RuntimeObject*)L_1, L_2, Enumerable_Select_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m824CB55CF36C3F8666771B7E239506A69E9080A3_RuntimeMethod_var);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_4;
		L_4 = Enumerable_ToArray_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m69ABAF9B9856F43579FBFCFD5EAEDC18422BC4B9(L_3, Enumerable_ToArray_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m69ABAF9B9856F43579FBFCFD5EAEDC18422BC4B9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = RLP_EncodeList_m2A2C2A6B4DDA95C331AECF96926B0D9C1B16FE05(L_4, NULL);
		return L_5;
	}

IL_0020:
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_6 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_6, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		V_0 = L_6;
		V_1 = 0;
		goto IL_0060;
	}

IL_002a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___indexOfListDataItems1;
		int32_t L_8 = V_1;
		bool L_9;
		L_9 = Enumerable_Contains_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m62FB3DBA3F73FEBF64FEAD95645C625ADFB2B178((RuntimeObject*)L_7, L_8, Enumerable_Contains_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m62FB3DBA3F73FEBF64FEAD95645C625ADFB2B178_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_10 = ___dataItems0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_2 = L_13;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_14 = V_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_15 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_16 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_2;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_17);
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = RLP_EncodeList_m2A2C2A6B4DDA95C331AECF96926B0D9C1B16FE05(L_16, NULL);
		NullCheck(L_14);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_14, L_18, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		goto IL_005c;
	}

IL_004e:
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_19 = V_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_20 = ___dataItems0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_23, NULL);
		NullCheck(L_19);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_19, L_24, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
	}

IL_005c:
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0060:
	{
		int32_t L_26 = V_1;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_27 = ___dataItems0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_002a;
		}
	}
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_28 = V_0;
		NullCheck(L_28);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_29;
		L_29 = List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A(L_28, List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30;
		L_30 = RLP_EncodeList_m2A2C2A6B4DDA95C331AECF96926B0D9C1B16FE05(L_29, NULL);
		return L_30;
	}
}
// System.Byte[] Nethereum.RLP.RLP::EncodeList(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLP_EncodeList_m2A2C2A6B4DDA95C331AECF96926B0D9C1B16FE05 (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___items0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint8_t V_5 = 0x0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	int32_t V_7 = 0;
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* V_8 = NULL;
	int32_t V_9 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_10 = NULL;
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = ___items0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_1 = ___items0;
		NullCheck(L_1);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_2 = ___items0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (L_4)
		{
			goto IL_001d;
		}
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)192));
		return L_6;
	}

IL_001d:
	{
		V_0 = 0;
		V_3 = 0;
		goto IL_002f;
	}

IL_0023:
	{
		int32_t L_7 = V_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_8 = ___items0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)(((RuntimeArray*)L_11)->max_length))));
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002f:
	{
		int32_t L_13 = V_3;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_14 = ___items0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)56))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(1, L_16)));
		V_1 = L_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)192), L_19))));
		V_2 = 1;
		goto IL_00cc;
	}

IL_0052:
	{
		int32_t L_20 = V_0;
		V_4 = L_20;
		V_5 = (uint8_t)0;
		goto IL_0067;
	}

IL_005a:
	{
		uint8_t L_21 = V_5;
		V_5 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, 1)));
		int32_t L_22 = V_4;
		V_4 = ((int32_t)(L_22>>8));
	}

IL_0067:
	{
		int32_t L_23 = V_4;
		if (L_23)
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_24 = V_0;
		V_4 = L_24;
		uint8_t L_25 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_25);
		V_6 = L_26;
		V_7 = 0;
		goto IL_0097;
	}

IL_007c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_6;
		uint8_t L_28 = V_5;
		int32_t L_29 = V_7;
		int32_t L_30 = V_4;
		int32_t L_31 = V_7;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_28, 1)), L_29))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_30>>((int32_t)(((int32_t)il2cpp_codegen_multiply(8, L_31))&((int32_t)31)))))));
		int32_t L_32 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0097:
	{
		int32_t L_33 = V_7;
		uint8_t L_34 = V_5;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_007c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_6;
		NullCheck(L_35);
		int32_t L_36 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(1, ((int32_t)(((RuntimeArray*)L_35)->max_length)))), L_36)));
		V_1 = L_37;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_1;
		uint8_t L_39 = V_5;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)247), (int32_t)L_39))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_6;
		NullCheck(L_42);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_40, 0, (RuntimeArray*)L_41, 1, ((int32_t)(((RuntimeArray*)L_42)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_6;
		NullCheck(L_43);
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_43)->max_length)), 1));
	}

IL_00cc:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_44 = ___items0;
		V_8 = L_44;
		V_9 = 0;
		goto IL_00f6;
	}

IL_00d4:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_45 = V_8;
		int32_t L_46 = V_9;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_10 = L_48;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = V_1;
		int32_t L_51 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_10;
		NullCheck(L_52);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_49, 0, (RuntimeArray*)L_50, L_51, ((int32_t)(((RuntimeArray*)L_52)->max_length)), NULL);
		int32_t L_53 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_10;
		NullCheck(L_54);
		V_2 = ((int32_t)il2cpp_codegen_add(L_53, ((int32_t)(((RuntimeArray*)L_54)->max_length))));
		int32_t L_55 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_00f6:
	{
		int32_t L_56 = V_9;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_57 = V_8;
		NullCheck(L_57);
		if ((((int32_t)L_56) < ((int32_t)((int32_t)(((RuntimeArray*)L_57)->max_length)))))
		{
			goto IL_00d4;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = V_1;
		return L_58;
	}
}
// System.Boolean Nethereum.RLP.RLP::IsNullOrZeroArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsNullOrZeroArray_m2F209F623CB7E375D2581787961302094EE88102 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___array0;
		NullCheck(L_1);
		return (bool)((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
	}

IL_0009:
	{
		return (bool)1;
	}
}
// System.Boolean Nethereum.RLP.RLP::IsSingleZero(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsSingleZero_m2919B2D7291469E35BF152182CE804D2095036F2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		NullCheck(L_0);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)1))))
		{
			goto IL_000d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_000d:
	{
		return (bool)0;
	}
}
// System.Int32 Nethereum.RLP.RLP::CalculateLength(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_CalculateLength_m4A165F189E10C601C4CFE15CEEC0B8EEC07550FE (int32_t ___lengthOfLength0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData1, int32_t ___pos2, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___lengthOfLength0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract(L_0, 1)));
		V_1 = 0;
		V_2 = 1;
		goto IL_0023;
	}

IL_000b:
	{
		int32_t L_1 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___msgData1;
		int32_t L_3 = ___pos2;
		int32_t L_4 = V_2;
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		uint8_t L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		uint8_t L_7 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)((int32_t)L_6<<((int32_t)(((int32_t)il2cpp_codegen_multiply(8, (int32_t)L_7))&((int32_t)31)))))));
		uint8_t L_8 = V_0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, 1)));
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0023:
	{
		int32_t L_10 = V_2;
		int32_t L_11 = ___lengthOfLength0;
		if ((((int32_t)L_10) <= ((int32_t)L_11)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_12 = V_1;
		return L_12;
	}
}
// System.Void Nethereum.RLP.RLP::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLP__ctor_mE52FF2490471BD5D57114FBE111B785D9E643401 (RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Nethereum.RLP.RLP::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLP__cctor_m9B340D21FA8094E6A10058C1F83F64BAFFD0AE9F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		((RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_StaticFields*)il2cpp_codegen_static_fields_for(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var))->___EMPTY_BYTE_ARRAY_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_StaticFields*)il2cpp_codegen_static_fields_for(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var))->___EMPTY_BYTE_ARRAY_5), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		((RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_StaticFields*)il2cpp_codegen_static_fields_for(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var))->___ZERO_BYTE_ARRAY_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_StaticFields*)il2cpp_codegen_static_fields_for(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var))->___ZERO_BYTE_ARRAY_6), (void*)L_1);
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
// System.Byte[] Nethereum.RLP.RLPCollection::get_RLPData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLPCollection_get_RLPData_mD2353EA499FFE1E9FEBDE7A9CE245CB6B6F70082 (RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CRLPDataU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Nethereum.RLP.RLPCollection::set_RLPData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPCollection_set_RLPData_mA63FEDE0C3835FF767DBE5D6F410EB738F5C2B9E (RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CRLPDataU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRLPDataU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.RLP.RLPCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPCollection__ctor_m8A7598E0D369DFF8E26985801DA566CBEC5C9BB7 (RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2EF3C1E452229C0DC88CBC75BD20C5706C238A25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8930E92CA3374D0394732F4FF2E0265B48828819_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(List_1_t8930E92CA3374D0394732F4FF2E0265B48828819_il2cpp_TypeInfo_var);
		List_1__ctor_m2EF3C1E452229C0DC88CBC75BD20C5706C238A25(__this, List_1__ctor_m2EF3C1E452229C0DC88CBC75BD20C5706C238A25_RuntimeMethod_var);
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
// System.Void Nethereum.RLP.RLPItem::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPItem__ctor_mAFC6111AA2DD006A0AE8B75714677E703FF0AA8E (RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rlpData0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___rlpData0;
		__this->____rlpData_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rlpData_0), (void*)L_0);
		return;
	}
}
// System.Byte[] Nethereum.RLP.RLPItem::get_RLPData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLPItem_get_RLPData_m07579B9881208343B9418E8FC74922BEDF77B11D (RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = RLPItem_GetRLPData_mDD448A4B6C4F81DBCD65430CC9319B40BD68CB23(__this, NULL);
		return L_0;
	}
}
// System.Byte[] Nethereum.RLP.RLPItem::GetRLPData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLPItem_GetRLPData_mDD448A4B6C4F81DBCD65430CC9319B40BD68CB23 (RLPItem_t6CF5B988DEA472014381BAE106BAAF7820D178BC* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____rlpData_0;
		NullCheck(L_0);
		if (!(((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0010;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____rlpData_0;
		return L_1;
	}

IL_0010:
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
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
// System.String Nethereum.RLP.RLPStringFormatter::Format(Nethereum.RLP.IRLPElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RLPStringFormatter_Format_mE7EE114CAE04DB977DEDC460D458662FB3811046 (RuntimeObject* ___element0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB3E5ABD0EBFF0D5435926AC1742BE2787DA3EDBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m972AD6DC207A4D3369326FD26869733B895511E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m01B4358E85EA55FCDB8E7D81F818B525A9BF7E5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB0DD2C91E1EE18AF0585CE424F50F5F98FC97904_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* V_1 = NULL;
	Enumerator_t50392BDDA51524CFB345E6E743C3052F6D54CA2D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___element0;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9E22D0F7A2F97DEE1B8F2A283E739C3B4560BA62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RLPStringFormatter_Format_mE7EE114CAE04DB977DEDC460D458662FB3811046_RuntimeMethod_var)));
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___element0;
		V_1 = ((RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6*)IsInstClass((RuntimeObject*)L_3, RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var));
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0067;
		}
	}
	{
		StringBuilder_t* L_5 = V_0;
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, NULL);
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_7 = V_1;
		NullCheck(L_7);
		Enumerator_t50392BDDA51524CFB345E6E743C3052F6D54CA2D L_8;
		L_8 = List_1_GetEnumerator_mB0DD2C91E1EE18AF0585CE424F50F5F98FC97904(L_7, List_1_GetEnumerator_mB0DD2C91E1EE18AF0585CE424F50F5F98FC97904_RuntimeMethod_var);
		V_2 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mB3E5ABD0EBFF0D5435926AC1742BE2787DA3EDBE((&V_2), Enumerator_Dispose_mB3E5ABD0EBFF0D5435926AC1742BE2787DA3EDBE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0040_1;
			}

IL_0033_1:
			{
				RuntimeObject* L_9;
				L_9 = Enumerator_get_Current_m01B4358E85EA55FCDB8E7D81F818B525A9BF7E5D_inline((&V_2), Enumerator_get_Current_m01B4358E85EA55FCDB8E7D81F818B525A9BF7E5D_RuntimeMethod_var);
				String_t* L_10;
				L_10 = RLPStringFormatter_Format_mE7EE114CAE04DB977DEDC460D458662FB3811046(L_9, NULL);
			}

IL_0040_1:
			{
				bool L_11;
				L_11 = Enumerator_MoveNext_m972AD6DC207A4D3369326FD26869733B895511E5((&V_2), Enumerator_MoveNext_m972AD6DC207A4D3369326FD26869733B895511E5_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0033_1;
				}
			}
			{
				goto IL_0059;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0059:
	{
		StringBuilder_t* L_12 = V_0;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		goto IL_0084;
	}

IL_0067:
	{
		StringBuilder_t* L_14 = V_0;
		RuntimeObject* L_15 = ___element0;
		NullCheck(L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_15);
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_17;
		L_17 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_16, (bool)0, NULL);
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_17, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_18, NULL);
	}

IL_0084:
	{
		StringBuilder_t* L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		return L_21;
	}
}
// System.Void Nethereum.RLP.RLPStringFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPStringFormatter__ctor_mEDE4A66B2520BE1DCEE28309FB2991F2709C44E6 (RLPStringFormatter_t94FC488A1E9E5E21E8E8E49A457D643CCF4E633B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RLPCollection_set_RLPData_mA63FEDE0C3835FF767DBE5D6F410EB738F5C2B9E_inline (RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CRLPDataU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRLPDataU3Ek__BackingField_6), (void*)L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
