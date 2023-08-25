#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.IDictionary`2<System.String,Nethereum.ABI.EIP712.MemberDescription[]>
struct IDictionary_2_tFCD351BF188FF5E6FF9C60DB0FB5F23709718F2A;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// Nethereum.ABI.EIP712.MemberValue[]
struct MemberValueU5BU5D_tE64DEF14E2FB5DF8E579321E889361BD80AD547E;
// Nethereum.ABI.ABIEncode
struct ABIEncode_t95CFC96B6E0E5D79DC62FF6969A0768A6C90C5CD;
// Nethereum.Signer.Crypto.ECDSASignature
struct ECDSASignature_tA046F191FBB0BF15D9F0DC8F1BDCEE1C5B7C127C;
// Nethereum.Signer.Crypto.ECKey
struct ECKey_t15179DA21C4FF3FC07AB170ED70B8D9BD23729BB;
// Nethereum.ABI.EIP712.Eip712TypedDataEncoder
struct Eip712TypedDataEncoder_tD05CA96DEC12D23410A484CFE938C4C59FB8E436;
// Nethereum.Signer.EIP712.Eip712TypedDataSigner
struct Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8;
// Nethereum.Signer.EthECDSASignature
struct EthECDSASignature_tB10E880040705856539FB98EFEEC6BF42FAD4E1F;
// Nethereum.Signer.EthECKey
struct EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A;
// Nethereum.Signer.EthereumMessageSigner
struct EthereumMessageSigner_tF481F829C030ABE15FB5B16F2A3E5441E9300745;
// Nethereum.Signer.MessageSigner
struct MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A;
// Nethereum.ABI.FunctionEncoding.ParametersEncoder
struct ParametersEncoder_tFBB4314DD829C12C931094E7B88E1323250A8F95;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076;
// Nethereum.Util.Sha3Keccack
struct Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6;
// System.String
struct String_t;
// Nethereum.ABI.EIP712.TypedDataRaw
struct TypedDataRaw_t8FC56374E3DB3D1DD5FAF68BFCEB7CC1EEF21172;

IL2CPP_EXTERN_C RuntimeClass* Eip712TypedDataEncoder_tD05CA96DEC12D23410A484CFE938C4C59FB8E436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EthereumMessageSigner_tF481F829C030ABE15FB5B16F2A3E5441E9300745_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t1785D7CF495BD71D0C5AC261DCAEA25FFC80E736 
{
};
struct Il2CppArrayBounds;

// Nethereum.ABI.EIP712.Eip712TypedDataEncoder
struct Eip712TypedDataEncoder_tD05CA96DEC12D23410A484CFE938C4C59FB8E436  : public RuntimeObject
{
	// Nethereum.ABI.ABIEncode Nethereum.ABI.EIP712.Eip712TypedDataEncoder::_abiEncode
	ABIEncode_t95CFC96B6E0E5D79DC62FF6969A0768A6C90C5CD* ____abiEncode_0;
	// Nethereum.ABI.FunctionEncoding.ParametersEncoder Nethereum.ABI.EIP712.Eip712TypedDataEncoder::_parametersEncoder
	ParametersEncoder_tFBB4314DD829C12C931094E7B88E1323250A8F95* ____parametersEncoder_2;
};

struct Eip712TypedDataEncoder_tD05CA96DEC12D23410A484CFE938C4C59FB8E436_StaticFields
{
	// Nethereum.ABI.EIP712.Eip712TypedDataEncoder Nethereum.ABI.EIP712.Eip712TypedDataEncoder::<Current>k__BackingField
	Eip712TypedDataEncoder_tD05CA96DEC12D23410A484CFE938C4C59FB8E436* ___U3CCurrentU3Ek__BackingField_1;
};

// Nethereum.Signer.EIP712.Eip712TypedDataSigner
struct Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8  : public RuntimeObject
{
	// Nethereum.Signer.EthereumMessageSigner Nethereum.Signer.EIP712.Eip712TypedDataSigner::_signer
	EthereumMessageSigner_tF481F829C030ABE15FB5B16F2A3E5441E9300745* ____signer_0;
};

struct Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8_StaticFields
{
	// Nethereum.Signer.EIP712.Eip712TypedDataSigner Nethereum.Signer.EIP712.Eip712TypedDataSigner::<Current>k__BackingField
	Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8* ___U3CCurrentU3Ek__BackingField_1;
};

// Nethereum.Signer.EthECDSASignature
struct EthECDSASignature_tB10E880040705856539FB98EFEEC6BF42FAD4E1F  : public RuntimeObject
{
	// Nethereum.Signer.Crypto.ECDSASignature Nethereum.Signer.EthECDSASignature::<ECDSASignature>k__BackingField
	ECDSASignature_tA046F191FBB0BF15D9F0DC8F1BDCEE1C5B7C127C* ___U3CECDSASignatureU3Ek__BackingField_0;
};

// Nethereum.Signer.EthECKey
struct EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A  : public RuntimeObject
{
	// Nethereum.Signer.Crypto.ECKey Nethereum.Signer.EthECKey::_ecKey
	ECKey_t15179DA21C4FF3FC07AB170ED70B8D9BD23729BB* ____ecKey_2;
	// System.Byte[] Nethereum.Signer.EthECKey::_publicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____publicKey_3;
	// System.Byte[] Nethereum.Signer.EthECKey::_publicKeyCompressed
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____publicKeyCompressed_4;
	// System.Byte[] Nethereum.Signer.EthECKey::_publicKeyNoPrefix
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____publicKeyNoPrefix_5;
	// System.Byte[] Nethereum.Signer.EthECKey::_publicKeyNoPrefixCompressed
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____publicKeyNoPrefixCompressed_6;
	// System.String Nethereum.Signer.EthECKey::_ethereumAddress
	String_t* ____ethereumAddress_7;
	// System.Byte[] Nethereum.Signer.EthECKey::_privateKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____privateKey_8;
	// System.String Nethereum.Signer.EthECKey::_privateKeyHex
	String_t* ____privateKeyHex_9;
};

struct EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A_StaticFields
{
	// Org.BouncyCastle.Security.SecureRandom Nethereum.Signer.EthECKey::SecureRandom
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___SecureRandom_0;
	// System.Byte Nethereum.Signer.EthECKey::DEFAULT_PREFIX
	uint8_t ___DEFAULT_PREFIX_1;
};

// Nethereum.Signer.MessageSigner
struct MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A  : public RuntimeObject
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

// Nethereum.ABI.EIP712.TypedDataRaw
struct TypedDataRaw_t8FC56374E3DB3D1DD5FAF68BFCEB7CC1EEF21172  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.String,Nethereum.ABI.EIP712.MemberDescription[]> Nethereum.ABI.EIP712.TypedDataRaw::<Types>k__BackingField
	RuntimeObject* ___U3CTypesU3Ek__BackingField_0;
	// System.String Nethereum.ABI.EIP712.TypedDataRaw::<PrimaryType>k__BackingField
	String_t* ___U3CPrimaryTypeU3Ek__BackingField_1;
	// Nethereum.ABI.EIP712.MemberValue[] Nethereum.ABI.EIP712.TypedDataRaw::<Message>k__BackingField
	MemberValueU5BU5D_tE64DEF14E2FB5DF8E579321E889361BD80AD547E* ___U3CMessageU3Ek__BackingField_2;
	// Nethereum.ABI.EIP712.MemberValue[] Nethereum.ABI.EIP712.TypedDataRaw::<DomainRawValues>k__BackingField
	MemberValueU5BU5D_tE64DEF14E2FB5DF8E579321E889361BD80AD547E* ___U3CDomainRawValuesU3Ek__BackingField_3;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// Nethereum.Signer.EthereumMessageSigner
struct EthereumMessageSigner_tF481F829C030ABE15FB5B16F2A3E5441E9300745  : public MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A
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



// System.Byte[] Nethereum.Signer.EIP712.Eip712TypedDataSigner::EncodeTypedData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Eip712TypedDataSigner_EncodeTypedData_m15C64A77778B02F9A925092828532FD317AADB33 (Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8* __this, String_t* ___json0, const RuntimeMethod* method) ;
// Nethereum.Util.Sha3Keccack Nethereum.Util.Sha3Keccack::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* Sha3Keccack_get_Current_mD6FFC538783F0A2C61503A659F979F136C302D91_inline (const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Util.Sha3Keccack::CalculateHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Sha3Keccack_CalculateHash_mE94324F2BF9D80A18C59A08CF5F0735B78ECAAA0 (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// Nethereum.Signer.EthECDSASignature Nethereum.Signer.EthECKey::SignAndCalculateV(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EthECDSASignature_tB10E880040705856539FB98EFEEC6BF42FAD4E1F* EthECKey_SignAndCalculateV_mED717951378503C254E2F51DA4C0DB29CDDEB7DB (EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hash0, const RuntimeMethod* method) ;
// System.String Nethereum.Signer.EthECDSASignature::CreateStringSignature(Nethereum.Signer.EthECDSASignature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EthECDSASignature_CreateStringSignature_m3495F324D764444CDF5EEDF2947DB91F4B26A6C0 (EthECDSASignature_tB10E880040705856539FB98EFEEC6BF42FAD4E1F* ___signature0, const RuntimeMethod* method) ;
// System.Void Nethereum.Signer.MessageSigner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSigner__ctor_m67B284E6F6BABE98BB71F7B701A47D93F8DC3AC9 (MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A* __this, const RuntimeMethod* method) ;
// Nethereum.ABI.EIP712.Eip712TypedDataEncoder Nethereum.ABI.EIP712.Eip712TypedDataEncoder::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Eip712TypedDataEncoder_tD05CA96DEC12D23410A484CFE938C4C59FB8E436* Eip712TypedDataEncoder_get_Current_m184699ED962D51A0E7A19DAD4C5D19558ED6CF97_inline (const RuntimeMethod* method) ;
// System.Byte[] Nethereum.ABI.EIP712.Eip712TypedDataEncoder::EncodeTypedDataRaw(Nethereum.ABI.EIP712.TypedDataRaw)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Eip712TypedDataEncoder_EncodeTypedDataRaw_m5F1BA3085EB59CD028A72D07388FF92E28A6CFF7 (Eip712TypedDataEncoder_tD05CA96DEC12D23410A484CFE938C4C59FB8E436* __this, TypedDataRaw_t8FC56374E3DB3D1DD5FAF68BFCEB7CC1EEF21172* ___typedData0, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.ABI.EIP712.Eip712TypedDataEncoder::EncodeTypedData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Eip712TypedDataEncoder_EncodeTypedData_m656CC1DF4ED698947535D964D1507B4CFC56CDCB (Eip712TypedDataEncoder_tD05CA96DEC12D23410A484CFE938C4C59FB8E436* __this, String_t* ___json0, const RuntimeMethod* method) ;
// System.Void Nethereum.Signer.EthereumMessageSigner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EthereumMessageSigner__ctor_mF80566B1FA116EDE2BE4993DAF88D8B6DB493D0E (EthereumMessageSigner_tF481F829C030ABE15FB5B16F2A3E5441E9300745* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Signer.EIP712.Eip712TypedDataSigner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Eip712TypedDataSigner__ctor_m7768A14F01B00256A9768DEC1A7F4041729363EC (Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8* __this, const RuntimeMethod* method) ;
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
// Nethereum.Signer.EIP712.Eip712TypedDataSigner Nethereum.Signer.EIP712.Eip712TypedDataSigner::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8* Eip712TypedDataSigner_get_Current_mB55F482DB4582AFD6BE5F9185AAC8CE986A15B43 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8_il2cpp_TypeInfo_var);
		Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8* L_0 = ((Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8_StaticFields*)il2cpp_codegen_static_fields_for(Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField_1;
		return L_0;
	}
}
// System.String Nethereum.Signer.EIP712.Eip712TypedDataSigner::SignTypedDataV4(System.String,Nethereum.Signer.EthECKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Eip712TypedDataSigner_SignTypedDataV4_m6FCA6F5CE3A4F44C81BEE26532D8FA198D8034E6 (Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8* __this, String_t* ___json0, EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* ___key1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		String_t* L_0 = ___json0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Eip712TypedDataSigner_EncodeTypedData_m15C64A77778B02F9A925092828532FD317AADB33(__this, L_0, NULL);
		V_0 = L_1;
		EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* L_2 = ___key1;
		il2cpp_codegen_runtime_class_init_inline(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_3;
		L_3 = Sha3Keccack_get_Current_mD6FFC538783F0A2C61503A659F979F136C302D91_inline(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Sha3Keccack_CalculateHash_mE94324F2BF9D80A18C59A08CF5F0735B78ECAAA0(L_3, L_4, NULL);
		NullCheck(L_2);
		EthECDSASignature_tB10E880040705856539FB98EFEEC6BF42FAD4E1F* L_6;
		L_6 = EthECKey_SignAndCalculateV_mED717951378503C254E2F51DA4C0DB29CDDEB7DB(L_2, L_5, NULL);
		String_t* L_7;
		L_7 = EthECDSASignature_CreateStringSignature_m3495F324D764444CDF5EEDF2947DB91F4B26A6C0(L_6, NULL);
		return L_7;
	}
}
// System.String Nethereum.Signer.EIP712.Eip712TypedDataSigner::RecoverFromSignatureV4(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Eip712TypedDataSigner_RecoverFromSignatureV4_mA1F27FA52E2C8BB0A2A73934D6317875B99CE53A (Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8* __this, String_t* ___json0, String_t* ___signature1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		String_t* L_0 = ___json0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Eip712TypedDataSigner_EncodeTypedData_m15C64A77778B02F9A925092828532FD317AADB33(__this, L_0, NULL);
		V_0 = L_1;
		MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A* L_2 = (MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A*)il2cpp_codegen_object_new(MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MessageSigner__ctor_m67B284E6F6BABE98BB71F7B701A47D93F8DC3AC9(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_3;
		L_3 = Sha3Keccack_get_Current_mD6FFC538783F0A2C61503A659F979F136C302D91_inline(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Sha3Keccack_CalculateHash_mE94324F2BF9D80A18C59A08CF5F0735B78ECAAA0(L_3, L_4, NULL);
		String_t* L_6 = ___signature1;
		NullCheck(L_2);
		String_t* L_7;
		L_7 = VirtualFuncInvoker2< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(4 /* System.String Nethereum.Signer.MessageSigner::EcRecover(System.Byte[],System.String) */, L_2, L_5, L_6);
		return L_7;
	}
}
// System.String Nethereum.Signer.EIP712.Eip712TypedDataSigner::RecoverFromSignatureV4(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Eip712TypedDataSigner_RecoverFromSignatureV4_m777698A982DA7D666199080AC8D19E8C6CAFE7FC (Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___encodedData0, String_t* ___signature1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A* L_0 = (MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A*)il2cpp_codegen_object_new(MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MessageSigner__ctor_m67B284E6F6BABE98BB71F7B701A47D93F8DC3AC9(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_1;
		L_1 = Sha3Keccack_get_Current_mD6FFC538783F0A2C61503A659F979F136C302D91_inline(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___encodedData0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = Sha3Keccack_CalculateHash_mE94324F2BF9D80A18C59A08CF5F0735B78ECAAA0(L_1, L_2, NULL);
		String_t* L_4 = ___signature1;
		NullCheck(L_0);
		String_t* L_5;
		L_5 = VirtualFuncInvoker2< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(4 /* System.String Nethereum.Signer.MessageSigner::EcRecover(System.Byte[],System.String) */, L_0, L_3, L_4);
		return L_5;
	}
}
// System.String Nethereum.Signer.EIP712.Eip712TypedDataSigner::RecoverFromSignatureHashV4(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Eip712TypedDataSigner_RecoverFromSignatureHashV4_mFF1DC68BBF52ECB0DE9020621E10B42700EA32A6 (Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hash0, String_t* ___signature1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A* L_0 = (MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A*)il2cpp_codegen_object_new(MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MessageSigner__ctor_m67B284E6F6BABE98BB71F7B701A47D93F8DC3AC9(L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___hash0;
		String_t* L_2 = ___signature1;
		NullCheck(L_0);
		String_t* L_3;
		L_3 = VirtualFuncInvoker2< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(4 /* System.String Nethereum.Signer.MessageSigner::EcRecover(System.Byte[],System.String) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Byte[] Nethereum.Signer.EIP712.Eip712TypedDataSigner::EncodeTypedDataRaw(Nethereum.ABI.EIP712.TypedDataRaw)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Eip712TypedDataSigner_EncodeTypedDataRaw_m867F8D1FB62ECDE0CF1661DD9D8F3ABA01B240D0 (Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8* __this, TypedDataRaw_t8FC56374E3DB3D1DD5FAF68BFCEB7CC1EEF21172* ___typedData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Eip712TypedDataEncoder_tD05CA96DEC12D23410A484CFE938C4C59FB8E436_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Eip712TypedDataEncoder_tD05CA96DEC12D23410A484CFE938C4C59FB8E436_il2cpp_TypeInfo_var);
		Eip712TypedDataEncoder_tD05CA96DEC12D23410A484CFE938C4C59FB8E436* L_0;
		L_0 = Eip712TypedDataEncoder_get_Current_m184699ED962D51A0E7A19DAD4C5D19558ED6CF97_inline(NULL);
		TypedDataRaw_t8FC56374E3DB3D1DD5FAF68BFCEB7CC1EEF21172* L_1 = ___typedData0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Eip712TypedDataEncoder_EncodeTypedDataRaw_m5F1BA3085EB59CD028A72D07388FF92E28A6CFF7(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Byte[] Nethereum.Signer.EIP712.Eip712TypedDataSigner::EncodeTypedData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Eip712TypedDataSigner_EncodeTypedData_m15C64A77778B02F9A925092828532FD317AADB33 (Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8* __this, String_t* ___json0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Eip712TypedDataEncoder_tD05CA96DEC12D23410A484CFE938C4C59FB8E436_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Eip712TypedDataEncoder_tD05CA96DEC12D23410A484CFE938C4C59FB8E436_il2cpp_TypeInfo_var);
		Eip712TypedDataEncoder_tD05CA96DEC12D23410A484CFE938C4C59FB8E436* L_0;
		L_0 = Eip712TypedDataEncoder_get_Current_m184699ED962D51A0E7A19DAD4C5D19558ED6CF97_inline(NULL);
		String_t* L_1 = ___json0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Eip712TypedDataEncoder_EncodeTypedData_m656CC1DF4ED698947535D964D1507B4CFC56CDCB(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void Nethereum.Signer.EIP712.Eip712TypedDataSigner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Eip712TypedDataSigner__ctor_m7768A14F01B00256A9768DEC1A7F4041729363EC (Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EthereumMessageSigner_tF481F829C030ABE15FB5B16F2A3E5441E9300745_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EthereumMessageSigner_tF481F829C030ABE15FB5B16F2A3E5441E9300745* L_0 = (EthereumMessageSigner_tF481F829C030ABE15FB5B16F2A3E5441E9300745*)il2cpp_codegen_object_new(EthereumMessageSigner_tF481F829C030ABE15FB5B16F2A3E5441E9300745_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		EthereumMessageSigner__ctor_mF80566B1FA116EDE2BE4993DAF88D8B6DB493D0E(L_0, NULL);
		__this->____signer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____signer_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Nethereum.Signer.EIP712.Eip712TypedDataSigner::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Eip712TypedDataSigner__cctor_mE4E1EF8694DEF90A7D12FC9BB500D4327B176383 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8* L_0 = (Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8*)il2cpp_codegen_object_new(Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Eip712TypedDataSigner__ctor_m7768A14F01B00256A9768DEC1A7F4041729363EC(L_0, NULL);
		((Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8_StaticFields*)il2cpp_codegen_static_fields_for(Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8_StaticFields*)il2cpp_codegen_static_fields_for(Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Eip712TypedDataEncoder_tD05CA96DEC12D23410A484CFE938C4C59FB8E436* Eip712TypedDataEncoder_get_Current_m184699ED962D51A0E7A19DAD4C5D19558ED6CF97_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Eip712TypedDataEncoder_tD05CA96DEC12D23410A484CFE938C4C59FB8E436_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Eip712TypedDataEncoder_tD05CA96DEC12D23410A484CFE938C4C59FB8E436_il2cpp_TypeInfo_var);
		Eip712TypedDataEncoder_tD05CA96DEC12D23410A484CFE938C4C59FB8E436* L_0 = ((Eip712TypedDataEncoder_tD05CA96DEC12D23410A484CFE938C4C59FB8E436_StaticFields*)il2cpp_codegen_static_fields_for(Eip712TypedDataEncoder_tD05CA96DEC12D23410A484CFE938C4C59FB8E436_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField_1;
		return L_0;
	}
}
