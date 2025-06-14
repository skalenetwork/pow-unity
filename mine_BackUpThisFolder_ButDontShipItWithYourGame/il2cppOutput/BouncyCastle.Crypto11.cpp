﻿#include "pch-cpp.hpp"

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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.UInt32[][]
struct UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// Org.BouncyCastle.Crypto.Engines.AesEngine
struct AesEngine_t32B9896124921DEBC2C9B180FF2875747BDC4835;
// Org.BouncyCastle.Crypto.Engines.AesFastEngine
struct AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168;
// Org.BouncyCastle.Crypto.Engines.AesLightEngine
struct AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6;
// Org.BouncyCastle.Crypto.Engines.AesWrapEngine
struct AesWrapEngine_t1B6395327BED98BBCB90047E9D12887CBEE0FB17;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// Org.BouncyCastle.Crypto.Engines.BlowfishEngine
struct BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A;
// Org.BouncyCastle.Crypto.Engines.CamelliaEngine
struct CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC;
// Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine
struct CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB;
// Org.BouncyCastle.Crypto.Engines.CamelliaWrapEngine
struct CamelliaWrapEngine_t9E9D45DF24F1AE26AC1D51273EDDFCC707971D75;
// Org.BouncyCastle.Crypto.Engines.Cast5Engine
struct Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737;
// Org.BouncyCastle.Crypto.DataLengthException
struct DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC;
// Org.BouncyCastle.Crypto.IBlockCipher
struct IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_tE4751F03244264E12A0669633A68076FD032E2CF;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Org.BouncyCastle.Crypto.InvalidCipherTextException
struct InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC;
// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV
struct ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1;
// Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom
struct ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5;
// Org.BouncyCastle.Crypto.Engines.Rfc3394WrapEngine
struct Rfc3394WrapEngine_tE66253E3F6CE7FCB5A19AC798C0127E99AEA14C1;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* AesEngine_t32B9896124921DEBC2C9B180FF2875747BDC4835_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D10_69_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D11_70_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D1_60_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D2_61_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D3_62_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D4_63_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D5_64_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D6_65_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D7_66_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D8_67_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D9_68_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001462U2D1_71_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001462U2D2_72_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001462U2D3_73_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001467U2D1_74_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001479U2D1_75_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001479U2D2_76_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001479U2D3_77_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001479U2D4_78_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001479U2D5_79_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600148eU2D1_80_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600148eU2D2_81_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600148eU2D3_82_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600148eU2D4_83_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600148eU2D5_84_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014a7U2D1_85_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014a7U2D2_86_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014baU2D1_87_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014baU2D2_88_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014baU2D3_89_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014baU2D4_90_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014baU2D5_91_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014baU2D6_92_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014baU2D7_93_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014baU2D8_94_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0D8AB86BB3A14340AEE7ADDA95FB6F1954525D80;
IL2CPP_EXTERN_C String_t* _stringLiteral1557AFFE8BBF6FF1C05CD38FC1CAB933607E374C;
IL2CPP_EXTERN_C String_t* _stringLiteral16234F4AE3AF3D5112D3AD14A33CEB4A928578E9;
IL2CPP_EXTERN_C String_t* _stringLiteral1E2FB89DD75EA7DEDFEA6B005895F82CFB64C914;
IL2CPP_EXTERN_C String_t* _stringLiteral2872CE200AF678DAC1BDABD521199451F3CC11FA;
IL2CPP_EXTERN_C String_t* _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2;
IL2CPP_EXTERN_C String_t* _stringLiteral3BD050D52C303D23C47B378731DC319F7A090D03;
IL2CPP_EXTERN_C String_t* _stringLiteral423ACA01AC170A50869ECDEF572CD96995576718;
IL2CPP_EXTERN_C String_t* _stringLiteral579B9E8AC72DCCF33BDD5B6409BA010A973A4FD4;
IL2CPP_EXTERN_C String_t* _stringLiteral5B3A022B03059BF4890370A8B7B5A3C7582D7BD5;
IL2CPP_EXTERN_C String_t* _stringLiteral6EEBA88C3345B7974D085AB9F6434EA20A2141E4;
IL2CPP_EXTERN_C String_t* _stringLiteral7DBDBA421AC8484BAFE52A917ED124C00D46DC9E;
IL2CPP_EXTERN_C String_t* _stringLiteralAD2236B405D5FA5F76EA2878B5A8698EE05BC73A;
IL2CPP_EXTERN_C String_t* _stringLiteralADD6D8A177ABA2127E8318877CAC012759A1B48C;
IL2CPP_EXTERN_C String_t* _stringLiteralB4657ACEBB30BB2C7CC8BF4DCADB523A4A64F625;
IL2CPP_EXTERN_C String_t* _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13;
IL2CPP_EXTERN_C String_t* _stringLiteralCCE27278E07FE7EB927EA4224AC3E0619FBEE6C5;
IL2CPP_EXTERN_C String_t* _stringLiteralCED4ECC4AE35D4EFF2458EF43A779BB25724C998;
IL2CPP_EXTERN_C String_t* _stringLiteralD4587DAEA872EB0581FD7E2ACC74AA38FE7E38A4;
IL2CPP_EXTERN_C String_t* _stringLiteralD8C227C1CB3EF4325170D0B3FA875C26BBAD3D24;
IL2CPP_EXTERN_C String_t* _stringLiteralDD95C75C9DCA72699FD9C918B9D3B4AF6395E2D7;
IL2CPP_EXTERN_C String_t* _stringLiteralE5A1473B3A7E855F5FB8736B5DE27173027D9DC3;
IL2CPP_EXTERN_C String_t* _stringLiteralF54C61EA654A453F853B81CE072DEC048FBB4991;
IL2CPP_EXTERN_C String_t* _stringLiteralFCEDA8A42E275C214506B6047B5D09353160F3FB;
IL2CPP_EXTERN_C const RuntimeMethod* AesFastEngine_GenerateWorkingKey_m32674BD104B3A76087CB4C552D5D127E65BD913D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AesFastEngine_Init_m47714D1C2256A431E3BF89A9BBAEE3C94922A9A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AesFastEngine_ProcessBlock_m859A1477D6C26154F03BEA8366BB88FEB0942049_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AesLightEngine_GenerateWorkingKey_mBBF1425BBAD6FCEAC6A2720058D72A85C020808D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AesLightEngine_Init_m3E51DEF584BBA33FA9ADFA3ACA4E16177B0FC511_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AesLightEngine_ProcessBlock_mB1A8A566F88C9516025E1F8D0D3325E7B17A68C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BlowfishEngine_Init_m176A33E0274D841EE3E8987C6F2D1E81152A852D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BlowfishEngine_ProcessBlock_m0B5B18CED10CE29A8B98DDAE078C5D9D0272BE61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CamelliaEngine_Init_m81DFB921F03F27C54CD28B7A3F962D2F39112D2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CamelliaEngine_ProcessBlock_mE5702A7E49E30DE4534C86F956AA64A5014F1103_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CamelliaEngine_setKey_m538527E8517868958D5A00C945D47D9ECD8FF852_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CamelliaLightEngine_Init_m95EE3A0FA345DC45CB9FD0E1941BE5AE6BF3B41D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CamelliaLightEngine_ProcessBlock_m71D4D76D3DFD549317B93495B12F752E47ECEAE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CamelliaLightEngine_setKey_mC51754299AB34F4E19835E8862660D1254E4041F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Cast5Engine_Init_m3B753396FA4BB7353FF3D4875C820429CC8D75A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Cast5Engine_ProcessBlock_mE67CB430ABD2C3BB130776487665E71415F46327_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rfc3394WrapEngine_Init_mB9DCCD40EA7161675978E81A30871C05831E2FEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rfc3394WrapEngine_Unwrap_m56318778A28D3053A3CA79C1C184F372BC05985D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rfc3394WrapEngine_Wrap_m7B051BC4DCBC06B92E92BD1BFEA002DEEF3DC7CF_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Engines.AesEngine
struct AesEngine_t32B9896124921DEBC2C9B180FF2875747BDC4835  : public RuntimeObject
{
	// System.Int32 Org.BouncyCastle.Crypto.Engines.AesEngine::ROUNDS
	int32_t ___ROUNDS_11;
	// System.UInt32[][] Org.BouncyCastle.Crypto.Engines.AesEngine::WorkingKey
	UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* ___WorkingKey_12;
	// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesEngine::C0
	uint32_t ___C0_13;
	// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesEngine::C1
	uint32_t ___C1_14;
	// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesEngine::C2
	uint32_t ___C2_15;
	// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesEngine::C3
	uint32_t ___C3_16;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.AesEngine::forEncryption
	bool ___forEncryption_17;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.AesEngine::s
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_18;
};

struct AesEngine_t32B9896124921DEBC2C9B180FF2875747BDC4835_StaticFields
{
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.AesEngine::S
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S_6;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.AesEngine::Si
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Si_7;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.AesEngine::rcon
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rcon_8;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.AesEngine::T0
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___T0_9;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.AesEngine::Tinv0
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___Tinv0_10;
};

// Org.BouncyCastle.Crypto.Engines.AesFastEngine
struct AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168  : public RuntimeObject
{
	// System.Int32 Org.BouncyCastle.Crypto.Engines.AesFastEngine::ROUNDS
	int32_t ___ROUNDS_17;
	// System.UInt32[][] Org.BouncyCastle.Crypto.Engines.AesFastEngine::WorkingKey
	UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* ___WorkingKey_18;
	// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesFastEngine::C0
	uint32_t ___C0_19;
	// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesFastEngine::C1
	uint32_t ___C1_20;
	// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesFastEngine::C2
	uint32_t ___C2_21;
	// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesFastEngine::C3
	uint32_t ___C3_22;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.AesFastEngine::forEncryption
	bool ___forEncryption_23;
};

struct AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields
{
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.AesFastEngine::S
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S_6;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.AesFastEngine::Si
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Si_7;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.AesFastEngine::rcon
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rcon_8;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.AesFastEngine::T0
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___T0_9;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.AesFastEngine::T1
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___T1_10;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.AesFastEngine::T2
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___T2_11;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.AesFastEngine::T3
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___T3_12;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.AesFastEngine::Tinv0
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___Tinv0_13;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.AesFastEngine::Tinv1
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___Tinv1_14;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.AesFastEngine::Tinv2
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___Tinv2_15;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.AesFastEngine::Tinv3
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___Tinv3_16;
};

// Org.BouncyCastle.Crypto.Engines.AesLightEngine
struct AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6  : public RuntimeObject
{
	// System.Int32 Org.BouncyCastle.Crypto.Engines.AesLightEngine::ROUNDS
	int32_t ___ROUNDS_9;
	// System.UInt32[][] Org.BouncyCastle.Crypto.Engines.AesLightEngine::WorkingKey
	UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* ___WorkingKey_10;
	// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesLightEngine::C0
	uint32_t ___C0_11;
	// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesLightEngine::C1
	uint32_t ___C1_12;
	// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesLightEngine::C2
	uint32_t ___C2_13;
	// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesLightEngine::C3
	uint32_t ___C3_14;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.AesLightEngine::forEncryption
	bool ___forEncryption_15;
};

struct AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields
{
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.AesLightEngine::S
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S_6;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.AesLightEngine::Si
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Si_7;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.AesLightEngine::rcon
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rcon_8;
};
struct Il2CppArrayBounds;

// Org.BouncyCastle.Crypto.Engines.BlowfishEngine
struct BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A  : public RuntimeObject
{
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.BlowfishEngine::S0
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___S0_9;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.BlowfishEngine::S1
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___S1_10;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.BlowfishEngine::S2
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___S2_11;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.BlowfishEngine::S3
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___S3_12;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.BlowfishEngine::P
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___P_13;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.BlowfishEngine::encrypting
	bool ___encrypting_14;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.BlowfishEngine::workingKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___workingKey_15;
};

struct BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields
{
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.BlowfishEngine::KP
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___KP_1;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.BlowfishEngine::KS0
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___KS0_2;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.BlowfishEngine::KS1
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___KS1_3;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.BlowfishEngine::KS2
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___KS2_4;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.BlowfishEngine::KS3
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___KS3_5;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.BlowfishEngine::ROUNDS
	int32_t ___ROUNDS_6;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.BlowfishEngine::SBOX_SK
	int32_t ___SBOX_SK_7;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.BlowfishEngine::P_SZ
	int32_t ___P_SZ_8;
};

// Org.BouncyCastle.Crypto.Engines.CamelliaEngine
struct CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC  : public RuntimeObject
{
	// System.Boolean Org.BouncyCastle.Crypto.Engines.CamelliaEngine::initialised
	bool ___initialised_1;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.CamelliaEngine::_keyIs128
	bool ____keyIs128_2;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.CamelliaEngine::subkey
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___subkey_3;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.CamelliaEngine::kw
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___kw_4;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.CamelliaEngine::ke
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ke_5;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.CamelliaEngine::state
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___state_6;
};

struct CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields
{
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.CamelliaEngine::SIGMA
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___SIGMA_7;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.CamelliaEngine::SBOX1_1110
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___SBOX1_1110_8;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.CamelliaEngine::SBOX4_4404
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___SBOX4_4404_9;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.CamelliaEngine::SBOX2_0222
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___SBOX2_0222_10;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.CamelliaEngine::SBOX3_3033
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___SBOX3_3033_11;
};

// Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine
struct CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB  : public RuntimeObject
{
	// System.Boolean Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::initialised
	bool ___initialised_1;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::_keyis128
	bool ____keyis128_2;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::subkey
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___subkey_3;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::kw
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___kw_4;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::ke
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ke_5;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::state
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___state_6;
};

struct CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_StaticFields
{
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::SIGMA
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___SIGMA_7;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::SBOX1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SBOX1_8;
};

// Org.BouncyCastle.Crypto.Engines.Cast5Engine
struct Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737  : public RuntimeObject
{
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.Cast5Engine::_Kr
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____Kr_11;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.Cast5Engine::_Km
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____Km_12;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.Cast5Engine::_encrypting
	bool ____encrypting_13;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.Cast5Engine::_workingKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____workingKey_14;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.Cast5Engine::_rounds
	int32_t ____rounds_15;
};

struct Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields
{
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.Cast5Engine::S1
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___S1_1;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.Cast5Engine::S2
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___S2_2;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.Cast5Engine::S3
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___S3_3;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.Cast5Engine::S4
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___S4_4;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.Cast5Engine::S5
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___S5_5;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.Cast5Engine::S6
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___S6_6;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.Cast5Engine::S7
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___S7_7;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.Cast5Engine::S8
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___S8_8;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.Cast5Engine::MAX_ROUNDS
	int32_t ___MAX_ROUNDS_9;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.Cast5Engine::RED_ROUNDS
	int32_t ___RED_ROUNDS_10;
};

// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KeyParameter::key
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key_0;
};

// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV
struct ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::parameters
	RuntimeObject* ___parameters_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::iv
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv_1;
};

// Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom
struct ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom::parameters
	RuntimeObject* ___parameters_0;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom::random
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___random_1;
};

// Org.BouncyCastle.Crypto.Engines.Rfc3394WrapEngine
struct Rfc3394WrapEngine_tE66253E3F6CE7FCB5A19AC798C0127E99AEA14C1  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Engines.Rfc3394WrapEngine::engine
	RuntimeObject* ___engine_0;
	// Org.BouncyCastle.Crypto.Parameters.KeyParameter Org.BouncyCastle.Crypto.Engines.Rfc3394WrapEngine::param
	KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* ___param_1;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.Rfc3394WrapEngine::forWrapping
	bool ___forWrapping_2;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.Rfc3394WrapEngine::iv
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv_3;
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

// Org.BouncyCastle.Crypto.Engines.AesWrapEngine
struct AesWrapEngine_t1B6395327BED98BBCB90047E9D12887CBEE0FB17  : public Rfc3394WrapEngine_tE66253E3F6CE7FCB5A19AC798C0127E99AEA14C1
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// Org.BouncyCastle.Crypto.Engines.CamelliaWrapEngine
struct CamelliaWrapEngine_t9E9D45DF24F1AE26AC1D51273EDDFCC707971D75  : public Rfc3394WrapEngine_tE66253E3F6CE7FCB5A19AC798C0127E99AEA14C1
{
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

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// Org.BouncyCastle.Crypto.CryptoException
struct CryptoException_t4AD3626BE1D22C083AB2877DC9E63B19B51F1D26  : public Exception_t
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

// Org.BouncyCastle.Crypto.DataLengthException
struct DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC  : public CryptoException_t4AD3626BE1D22C083AB2877DC9E63B19B51F1D26
{
};

// Org.BouncyCastle.Crypto.InvalidCipherTextException
struct InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB  : public CryptoException_t4AD3626BE1D22C083AB2877DC9E63B19B51F1D26
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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
// System.UInt32[][]
struct UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6  : public RuntimeArray
{
	ALIGN_FIELD (8) UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* m_Items[1];

	inline UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* value)
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



// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesFastEngine::Shift(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AesFastEngine_Shift_m6468BEB7C36C8EF64634A2328954A3B749851599 (uint32_t ___r0, int32_t ___shift1, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesFastEngine::FFmulX(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AesFastEngine_FFmulX_mB9D136B5AA91A0747DEDE2FDB218AFB445AF8031 (uint32_t ___x0, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesFastEngine::FFmulX2(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AesFastEngine_FFmulX2_m24BA32F0212345CB75D2212E685B46FD77EE22A2 (uint32_t ___x0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Utilities.Pack::LE_To_UInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesFastEngine::SubWord(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AesFastEngine_SubWord_mB5F97AA1C499B35DCE2B33DE31CA9371BA48F68C (uint32_t ___x0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesFastEngine::Inv_Mcol(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AesFastEngine_Inv_Mcol_mE3EACD60E4C0346AC4F12A40AB9DAA4F32AE1DB3 (uint32_t ___x0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String Org.BouncyCastle.Utilities.Platform::GetTypeName(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_GetTypeName_m9B04679202710BC6A96803803882849D0C5001FB (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KeyParameter::GetKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16 (KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* __this, const RuntimeMethod* method) ;
// System.UInt32[][] Org.BouncyCastle.Crypto.Engines.AesFastEngine::GenerateWorkingKey(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* AesFastEngine_GenerateWorkingKey_m32674BD104B3A76087CB4C552D5D127E65BD913D (AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, bool ___forEncryption1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Check::DataLength(System.Byte[],System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Check_DataLength_m4BEA4E45985CDB8967A7C3C71799B9036DDCC991 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, int32_t ___off1, int32_t ___len2, String_t* ___msg3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Check::OutputLength(System.Byte[],System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Check_OutputLength_mFBD480CE544E8B2C4EFAD3A12D1E105DC36FFA68 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, int32_t ___off1, int32_t ___len2, String_t* ___msg3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.AesFastEngine::UnPackBlock(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesFastEngine_UnPackBlock_mA618E0DBAB473E3FC5EB2F36E6F7347E5A01C65C (AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.AesFastEngine::EncryptBlock(System.UInt32[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesFastEngine_EncryptBlock_mCF14CC4F781EABE805B9C9B6B1A7344A58EC51F5 (AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168* __this, UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* ___KW0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.AesFastEngine::DecryptBlock(System.UInt32[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesFastEngine_DecryptBlock_m3D32CDFFEDEB675C2C6334065EEE9FB96FEB4DC4 (AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168* __this, UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* ___KW0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.AesFastEngine::PackBlock(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesFastEngine_PackBlock_mC620B6CDA5C9CB2C71F6B6B93526B18B67659E59 (AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::UInt32_To_LE(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_LE_m2499D0485ABBAB63E653F26941EE0AFA53508D18 (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesLightEngine::Shift(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AesLightEngine_Shift_m538356464C05F5E670A8772201F1E888FB21D100 (uint32_t ___r0, int32_t ___shift1, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesLightEngine::FFmulX(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AesLightEngine_FFmulX_m5FDB5D0E04B59CE6B68A6059D7F4569A86EF28D8 (uint32_t ___x0, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesLightEngine::FFmulX2(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AesLightEngine_FFmulX2_m71E49B68ED52AB2669892A8FEE3543514BB31800 (uint32_t ___x0, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesLightEngine::SubWord(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AesLightEngine_SubWord_mC11638BA9CD95867AF4BFED7523AC4BAE7BB1EEA (uint32_t ___x0, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesLightEngine::Inv_Mcol(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AesLightEngine_Inv_Mcol_mF826145B38FE4263C08F674FB60E21123CC63384 (uint32_t ___x0, const RuntimeMethod* method) ;
// System.UInt32[][] Org.BouncyCastle.Crypto.Engines.AesLightEngine::GenerateWorkingKey(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* AesLightEngine_GenerateWorkingKey_mBBF1425BBAD6FCEAC6A2720058D72A85C020808D (AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, bool ___forEncryption1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.AesLightEngine::UnPackBlock(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesLightEngine_UnPackBlock_m46A47463D5E4084028600BA7383D8997E10FD79D (AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.AesLightEngine::EncryptBlock(System.UInt32[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesLightEngine_EncryptBlock_mCC0A551495203B8764F92D8A1C6BB4D573A526E0 (AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6* __this, UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* ___KW0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.AesLightEngine::DecryptBlock(System.UInt32[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesLightEngine_DecryptBlock_m59D3EABE8F3BE7DCF2C0F28E87A4C6C37FA1480D (AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6* __this, UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* ___KW0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.AesLightEngine::PackBlock(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesLightEngine_PackBlock_mECFCA89B4C0F002E4CD683581CCDB3979781215A (AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___off1, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesLightEngine::Mcol(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AesLightEngine_Mcol_m583E5C6EE9BEA306524BC4B8886E3AD93A697836 (uint32_t ___x0, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithRandom_get_Parameters_mFED49C45204261ACF08DC4617FC59E9025C5DA8E_inline (ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* __this, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::GetIV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7 (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.DataLengthException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2 (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.InvalidCipherTextException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6 (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Utilities.Arrays::ConstantTimeAreEqual(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_ConstantTimeAreEqual_m5AF040D6BA657E1B8D8CB8CB68340FB2D86203C2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.AesEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesEngine__ctor_mD7D6897061CEE7B53E8338E1C696C0D1CAD34405 (AesEngine_t32B9896124921DEBC2C9B180FF2875747BDC4835* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.Rfc3394WrapEngine::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rfc3394WrapEngine__ctor_m12BC3AD127033F7EAC9006FDF30AFDBCBACCA604 (Rfc3394WrapEngine_tE66253E3F6CE7FCB5A19AC798C0127E99AEA14C1* __this, RuntimeObject* ___engine0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.BlowfishEngine::SetKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlowfishEngine_SetKey_m5E20BEA9840271E1648E897201C8A1C500541185 (BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.BlowfishEngine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlowfishEngine_EncryptBlock_m6E20F54EC811353C022EFB80B89F56C4E6DB1E51 (BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___srcIndex1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dst2, int32_t ___dstIndex3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.BlowfishEngine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlowfishEngine_DecryptBlock_m13E84A8FEF4B01FF6FC57EB07D917194BF24EBC8 (BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___srcIndex1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dst2, int32_t ___dstIndex3, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.BlowfishEngine::F(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BlowfishEngine_F_m5BDBDB7EC40BF7F507F551EDD7341C5FC8277177 (BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A* __this, uint32_t ___x0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.BlowfishEngine::ProcessTable(System.UInt32,System.UInt32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlowfishEngine_ProcessTable_mB40A43A5D62BC92EB9375C6C5467251CAEEDD903 (BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A* __this, uint32_t ___xl0, uint32_t ___xr1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___table2, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Utilities.Pack::BE_To_UInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_BE_To_UInt32_m6FD7E3B8014FC134F0CE2EA18C7DCD8C9EF64B63 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::UInt32_To_BE(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.CamelliaEngine::rightRotate(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CamelliaEngine_rightRotate_mA31434531A34FC058E04B8E56703E7661343625D (uint32_t ___x0, int32_t ___s1, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.CamelliaEngine::leftRotate(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CamelliaEngine_leftRotate_m018E89963B1AABC9FEF123EA0750858D0EF5936C (uint32_t ___x0, int32_t ___s1, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.CamelliaEngine::bytes2uint(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CamelliaEngine_bytes2uint_m425465AF25BA13E378B2A5F7DC15F5382D1D7411 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::camelliaF2(System.UInt32[],System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaEngine_camelliaF2_mDD60F9B6150A3A836920AC85472B8B79E08159AE (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___skey1, int32_t ___keyoff2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::roldq(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaEngine_roldq_m6EC38D7B8E75352052E223B3E6AA9CE328A4A5D4 (int32_t ___rot0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ki1, int32_t ___ioff2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ko3, int32_t ___ooff4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::roldqo32(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaEngine_roldqo32_m7F91A20A2D963CF6E1E5A6E3362A1BC59AA22950 (int32_t ___rot0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ki1, int32_t ___ioff2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ko3, int32_t ___ooff4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::decroldq(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaEngine_decroldq_mAF15E5EA07129A15F3C0ADC8D2D427428D1BDE0E (int32_t ___rot0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ki1, int32_t ___ioff2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ko3, int32_t ___ooff4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::decroldqo32(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaEngine_decroldqo32_m222BC2AD0C972CDC5BB40375AC459FB824952121 (int32_t ___rot0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ki1, int32_t ___ioff2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ko3, int32_t ___ooff4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::camelliaFLs(System.UInt32[],System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaEngine_camelliaFLs_m88A16D2F400657CF07C33D5125EDFAB17DA5C66B (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___fkey1, int32_t ___keyoff2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::uint2bytes(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaEngine_uint2bytes_mFFD7EB0D8A842004807B497F6FBE31448FC22B4B (uint32_t ___word0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dst1, int32_t ___offset2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::setKey(System.Boolean,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaEngine_setKey_m538527E8517868958D5A00C945D47D9ECD8FF852 (CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC* __this, bool ___forEncryption0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key1, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.CamelliaEngine::processBlock128(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CamelliaEngine_processBlock128_m770C16EC08516354E32F8444449FB998D5CE6696 (CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.CamelliaEngine::processBlock192or256(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CamelliaEngine_processBlock192or256_m89FF22F64C9A931FDA83B26BEA2C7AC18393D93E (CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) ;
// System.Byte Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::lRot8(System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t CamelliaLightEngine_lRot8_m5292C896712507F8983FB42AC22C2C6F63A707C4 (CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB* __this, uint8_t ___v0, int32_t ___rot1, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::sbox4(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CamelliaLightEngine_sbox4_mC7213C6B87CEDEB83AB4A2C33893485E0CFA1FFC (CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB* __this, int32_t ___x0, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::sbox3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CamelliaLightEngine_sbox3_mA77DD1BCA4D1F96B998F012D6125DC8DF04B80E6 (CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB* __this, int32_t ___x0, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::sbox2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CamelliaLightEngine_sbox2_mBAB64E242D6CD9EE2C43A9A1621B39A829FE40BC (CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB* __this, int32_t ___x0, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::leftRotate(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CamelliaLightEngine_leftRotate_mFFB57A61F527C834F115A3DF68FBED52722AA118 (uint32_t ___x0, int32_t ___s1, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::rightRotate(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CamelliaLightEngine_rightRotate_m114E91A50E6FC263CA2332810AA381D7CE3EF379 (uint32_t ___x0, int32_t ___s1, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::bytes2uint(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CamelliaLightEngine_bytes2uint_m76B73628E1B86B47C01717D31D7BD0F17544E558 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::camelliaF2(System.UInt32[],System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaLightEngine_camelliaF2_m894C5E787FA3F7C63B37B8864F2068A9274459BA (CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___skey1, int32_t ___keyoff2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::roldq(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaLightEngine_roldq_m11A672CD8914B888F6F2C8F37822747ABB2DBCE5 (int32_t ___rot0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ki1, int32_t ___ioff2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ko3, int32_t ___ooff4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::roldqo32(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaLightEngine_roldqo32_mD0E8CA083C828A419D430B18A82BC4D2069F0E34 (int32_t ___rot0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ki1, int32_t ___ioff2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ko3, int32_t ___ooff4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::decroldq(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaLightEngine_decroldq_mF8CA06D4374279F348798E104F0E0853C6FCA9C5 (int32_t ___rot0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ki1, int32_t ___ioff2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ko3, int32_t ___ooff4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::decroldqo32(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaLightEngine_decroldqo32_mF08EC8BBFFFBACADA6B807E72765040427F2DA99 (int32_t ___rot0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ki1, int32_t ___ioff2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ko3, int32_t ___ooff4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::camelliaFLs(System.UInt32[],System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaLightEngine_camelliaFLs_m2D4140DE2425BDA0E3FCF9F47F5691ECE1E37750 (CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___fkey1, int32_t ___keyoff2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::uint2bytes(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaLightEngine_uint2bytes_mA864409013435FD254509902EFC184D32B4DC5F5 (uint32_t ___word0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dst1, int32_t ___offset2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::setKey(System.Boolean,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaLightEngine_setKey_mC51754299AB34F4E19835E8862660D1254E4041F (CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB* __this, bool ___forEncryption0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key1, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::processBlock128(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CamelliaLightEngine_processBlock128_mCAA039A6D8A1A203DEF56822B3E442804A7808C3 (CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::processBlock192or256(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CamelliaLightEngine_processBlock192or256_m68AA6E55A22956830B3709BF75817CFA811F14EF (CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaEngine__ctor_m9A6E8F4B4AC416B5D563A8FBA4DF275604075B73 (CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.Cast5Engine::IntsTo32bits(System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___b0, int32_t ___i1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.Cast5Engine::Bits32ToInts(System.UInt32,System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D (uint32_t ___inData0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___b1, int32_t ___offset2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.Cast5Engine::CAST_Encipher(System.UInt32,System.UInt32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cast5Engine_CAST_Encipher_m38647357AA50987D7A9E1D74E7DD88DB6680A362 (Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737* __this, uint32_t ___L00, uint32_t ___R01, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___result2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.Cast5Engine::CAST_Decipher(System.UInt32,System.UInt32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cast5Engine_CAST_Decipher_mC8F7960AF21682AD1C78E1217916BB74AFE398FA (Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737* __this, uint32_t ___L160, uint32_t ___R161, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___result2, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.Cast5Engine::F1(System.UInt32,System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Cast5Engine_F1_mDA65D662E6D6BF3C23D568B805C809FD04825932 (uint32_t ___D0, uint32_t ___Kmi1, int32_t ___Kri2, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.Cast5Engine::F2(System.UInt32,System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Cast5Engine_F2_mC03412716E3D493D770A20BCEE07A3B1F91379BE (uint32_t ___D0, uint32_t ___Kmi1, int32_t ___Kri2, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.Cast5Engine::F3(System.UInt32,System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Cast5Engine_F3_m63C90C64DB2A089116D10610F5619CD669209A8A (uint32_t ___D0, uint32_t ___Kmi1, int32_t ___Kri2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesFastEngine::Shift(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AesFastEngine_Shift_m6468BEB7C36C8EF64634A2328954A3B749851599 (uint32_t ___r0, int32_t ___shift1, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___r0;
		int32_t L_1 = ___shift1;
		uint32_t L_2 = ___r0;
		int32_t L_3 = ___shift1;
		return ((int32_t)(((int32_t)((uint32_t)L_0>>((int32_t)(L_1&((int32_t)31)))))|((int32_t)((int32_t)L_2<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_3))&((int32_t)31)))))));
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesFastEngine::FFmulX(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AesFastEngine_FFmulX_mB9D136B5AA91A0747DEDE2FDB218AFB445AF8031 (uint32_t ___x0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___x0;
		uint32_t L_1 = ___x0;
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_0&((int32_t)2139062143)))<<1))^((int32_t)il2cpp_codegen_multiply(((int32_t)((uint32_t)((int32_t)((int32_t)L_1&((int32_t)-2139062144)))>>7)), ((int32_t)27)))));
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesFastEngine::FFmulX2(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AesFastEngine_FFmulX2_m24BA32F0212345CB75D2212E685B46FD77EE22A2 (uint32_t ___x0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___x0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_0&((int32_t)1061109567)))<<2));
		uint32_t L_1 = ___x0;
		V_1 = ((int32_t)((int32_t)L_1&((int32_t)-1061109568)));
		uint32_t L_2 = V_1;
		uint32_t L_3 = V_1;
		V_1 = ((int32_t)((int32_t)L_2^((int32_t)((uint32_t)L_3>>1))));
		uint32_t L_4 = V_0;
		uint32_t L_5 = V_1;
		uint32_t L_6 = V_1;
		return ((int32_t)(((int32_t)((int32_t)L_4^((int32_t)((uint32_t)L_5>>2))))^((int32_t)((uint32_t)L_6>>5))));
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesFastEngine::Inv_Mcol(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AesFastEngine_Inv_Mcol_mE3EACD60E4C0346AC4F12A40AB9DAA4F32AE1DB3 (uint32_t ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___x0;
		V_0 = L_0;
		uint32_t L_1 = V_0;
		uint32_t L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var);
		uint32_t L_3;
		L_3 = AesFastEngine_Shift_m6468BEB7C36C8EF64634A2328954A3B749851599(L_2, 8, NULL);
		V_1 = ((int32_t)((int32_t)L_1^(int32_t)L_3));
		uint32_t L_4 = V_0;
		uint32_t L_5 = V_1;
		uint32_t L_6;
		L_6 = AesFastEngine_FFmulX_mB9D136B5AA91A0747DEDE2FDB218AFB445AF8031(L_5, NULL);
		V_0 = ((int32_t)((int32_t)L_4^(int32_t)L_6));
		uint32_t L_7 = V_1;
		uint32_t L_8 = V_0;
		uint32_t L_9;
		L_9 = AesFastEngine_FFmulX2_m24BA32F0212345CB75D2212E685B46FD77EE22A2(L_8, NULL);
		V_1 = ((int32_t)((int32_t)L_7^(int32_t)L_9));
		uint32_t L_10 = V_0;
		uint32_t L_11 = V_1;
		uint32_t L_12 = V_1;
		uint32_t L_13;
		L_13 = AesFastEngine_Shift_m6468BEB7C36C8EF64634A2328954A3B749851599(L_12, ((int32_t)16), NULL);
		V_0 = ((int32_t)((int32_t)L_10^((int32_t)((int32_t)L_11^(int32_t)L_13))));
		uint32_t L_14 = V_0;
		return L_14;
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesFastEngine::SubWord(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AesFastEngine_SubWord_mB5F97AA1C499B35DCE2B33DE31CA9371BA48F68C (uint32_t ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_1 = ___x0;
		NullCheck(L_0);
		uintptr_t L_2 = ((uintptr_t)((int32_t)((int32_t)L_1&((int32_t)255))));
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_5 = ___x0;
		NullCheck(L_4);
		uintptr_t L_6 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_5>>8))&((int32_t)255))));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_9 = ___x0;
		NullCheck(L_8);
		uintptr_t L_10 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_9>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_13 = ___x0;
		NullCheck(L_12);
		uintptr_t L_14 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_13>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_3|((int32_t)((int32_t)L_7<<8))))|((int32_t)((int32_t)L_11<<((int32_t)16)))))|((int32_t)((int32_t)L_15<<((int32_t)24)))));
	}
}
// System.UInt32[][] Org.BouncyCastle.Crypto.Engines.AesFastEngine::GenerateWorkingKey(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* AesFastEngine_GenerateWorkingKey_m32674BD104B3A76087CB4C552D5D127E65BD913D (AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, bool ___forEncryption1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* V_2 = NULL;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	uint32_t V_16 = 0;
	uint32_t V_17 = 0;
	int32_t V_18 = 0;
	uint32_t V_19 = 0;
	uint32_t V_20 = 0;
	uint32_t V_21 = 0;
	uint32_t V_22 = 0;
	uint32_t V_23 = 0;
	uint32_t V_24 = 0;
	uint32_t V_25 = 0;
	uint32_t V_26 = 0;
	uint32_t V_27 = 0;
	uint32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_31 = NULL;
	int32_t V_32 = 0;
	int32_t V_33 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___key0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)16))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)32))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		if (!((int32_t)(L_3&7)))
		{
			goto IL_001e;
		}
	}

IL_0013:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD4587DAEA872EB0581FD7E2ACC74AA38FE7E38A4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AesFastEngine_GenerateWorkingKey_m32674BD104B3A76087CB4C552D5D127E65BD913D_RuntimeMethod_var)));
	}

IL_001e:
	{
		int32_t L_5 = V_0;
		V_1 = ((int32_t)(L_5>>2));
		int32_t L_6 = V_1;
		__this->___ROUNDS_17 = ((int32_t)il2cpp_codegen_add(L_6, 6));
		int32_t L_7 = __this->___ROUNDS_17;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_8 = (UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6*)(UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6*)SZArrayNew(UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_7, 1)));
		V_2 = L_8;
		V_3 = 0;
		goto IL_004a;
	}

IL_003d:
	{
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_9 = V_2;
		int32_t L_10 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)L_11);
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004a:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->___ROUNDS_17;
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_15 = V_1;
		V_33 = L_15;
		int32_t L_16 = V_33;
		switch (((int32_t)il2cpp_codegen_subtract(L_16, 4)))
		{
			case 0:
			{
				goto IL_0078;
			}
			case 1:
			{
				goto IL_04e5;
			}
			case 2:
			{
				goto IL_0125;
			}
			case 3:
			{
				goto IL_04e5;
			}
			case 4:
			{
				goto IL_0355;
			}
		}
	}
	{
		goto IL_04e5;
	}

IL_0078:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___key0;
		uint32_t L_18;
		L_18 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_17, 0, NULL);
		V_4 = L_18;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_19 = V_2;
		NullCheck(L_19);
		int32_t L_20 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		uint32_t L_22 = V_4;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___key0;
		uint32_t L_24;
		L_24 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_23, 4, NULL);
		V_5 = L_24;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_25 = V_2;
		NullCheck(L_25);
		int32_t L_26 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		uint32_t L_28 = V_5;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___key0;
		uint32_t L_30;
		L_30 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_29, 8, NULL);
		V_6 = L_30;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		uint32_t L_34 = V_6;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_34);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ___key0;
		uint32_t L_36;
		L_36 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_35, ((int32_t)12), NULL);
		V_7 = L_36;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_37 = V_2;
		NullCheck(L_37);
		int32_t L_38 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		uint32_t L_40 = V_7;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_40);
		V_8 = 1;
		goto IL_011a;
	}

IL_00be:
	{
		uint32_t L_41 = V_7;
		il2cpp_codegen_runtime_class_init_inline(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var);
		uint32_t L_42;
		L_42 = AesFastEngine_Shift_m6468BEB7C36C8EF64634A2328954A3B749851599(L_41, 8, NULL);
		uint32_t L_43;
		L_43 = AesFastEngine_SubWord_mB5F97AA1C499B35DCE2B33DE31CA9371BA48F68C(L_42, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___rcon_8;
		int32_t L_45 = V_8;
		NullCheck(L_44);
		int32_t L_46 = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
		uint8_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_9 = ((int32_t)((int32_t)L_43^(int32_t)L_47));
		uint32_t L_48 = V_4;
		uint32_t L_49 = V_9;
		V_4 = ((int32_t)((int32_t)L_48^(int32_t)L_49));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_50 = V_2;
		int32_t L_51 = V_8;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		uint32_t L_54 = V_4;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_54);
		uint32_t L_55 = V_5;
		uint32_t L_56 = V_4;
		V_5 = ((int32_t)((int32_t)L_55^(int32_t)L_56));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_57 = V_2;
		int32_t L_58 = V_8;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		uint32_t L_61 = V_5;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_61);
		uint32_t L_62 = V_6;
		uint32_t L_63 = V_5;
		V_6 = ((int32_t)((int32_t)L_62^(int32_t)L_63));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_64 = V_2;
		int32_t L_65 = V_8;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		uint32_t L_68 = V_6;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_68);
		uint32_t L_69 = V_7;
		uint32_t L_70 = V_6;
		V_7 = ((int32_t)((int32_t)L_69^(int32_t)L_70));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_71 = V_2;
		int32_t L_72 = V_8;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		uint32_t L_75 = V_7;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_75);
		int32_t L_76 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_011a:
	{
		int32_t L_77 = V_8;
		if ((((int32_t)L_77) <= ((int32_t)((int32_t)10))))
		{
			goto IL_00be;
		}
	}
	{
		goto IL_04f0;
	}

IL_0125:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = ___key0;
		uint32_t L_79;
		L_79 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_78, 0, NULL);
		V_10 = L_79;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_80 = V_2;
		NullCheck(L_80);
		int32_t L_81 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_82 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		uint32_t L_83 = V_10;
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_83);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84 = ___key0;
		uint32_t L_85;
		L_85 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_84, 4, NULL);
		V_11 = L_85;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_86 = V_2;
		NullCheck(L_86);
		int32_t L_87 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		uint32_t L_89 = V_11;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_89);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = ___key0;
		uint32_t L_91;
		L_91 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_90, 8, NULL);
		V_12 = L_91;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_92 = V_2;
		NullCheck(L_92);
		int32_t L_93 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		uint32_t L_95 = V_12;
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_95);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = ___key0;
		uint32_t L_97;
		L_97 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_96, ((int32_t)12), NULL);
		V_13 = L_97;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_98 = V_2;
		NullCheck(L_98);
		int32_t L_99 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_100 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		uint32_t L_101 = V_13;
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_101);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_102 = ___key0;
		uint32_t L_103;
		L_103 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_102, ((int32_t)16), NULL);
		V_14 = L_103;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_104 = V_2;
		NullCheck(L_104);
		int32_t L_105 = 1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_106 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		uint32_t L_107 = V_14;
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_107);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_108 = ___key0;
		uint32_t L_109;
		L_109 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_108, ((int32_t)20), NULL);
		V_15 = L_109;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_110 = V_2;
		NullCheck(L_110);
		int32_t L_111 = 1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_112 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		uint32_t L_113 = V_15;
		NullCheck(L_112);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_113);
		V_16 = 1;
		uint32_t L_114 = V_15;
		il2cpp_codegen_runtime_class_init_inline(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var);
		uint32_t L_115;
		L_115 = AesFastEngine_Shift_m6468BEB7C36C8EF64634A2328954A3B749851599(L_114, 8, NULL);
		uint32_t L_116;
		L_116 = AesFastEngine_SubWord_mB5F97AA1C499B35DCE2B33DE31CA9371BA48F68C(L_115, NULL);
		uint32_t L_117 = V_16;
		V_17 = ((int32_t)((int32_t)L_116^(int32_t)L_117));
		uint32_t L_118 = V_16;
		V_16 = ((int32_t)((int32_t)L_118<<1));
		uint32_t L_119 = V_10;
		uint32_t L_120 = V_17;
		V_10 = ((int32_t)((int32_t)L_119^(int32_t)L_120));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_121 = V_2;
		NullCheck(L_121);
		int32_t L_122 = 1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_123 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		uint32_t L_124 = V_10;
		NullCheck(L_123);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_124);
		uint32_t L_125 = V_11;
		uint32_t L_126 = V_10;
		V_11 = ((int32_t)((int32_t)L_125^(int32_t)L_126));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_127 = V_2;
		NullCheck(L_127);
		int32_t L_128 = 1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_129 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		uint32_t L_130 = V_11;
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_130);
		uint32_t L_131 = V_12;
		uint32_t L_132 = V_11;
		V_12 = ((int32_t)((int32_t)L_131^(int32_t)L_132));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_133 = V_2;
		NullCheck(L_133);
		int32_t L_134 = 2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		uint32_t L_136 = V_12;
		NullCheck(L_135);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_136);
		uint32_t L_137 = V_13;
		uint32_t L_138 = V_12;
		V_13 = ((int32_t)((int32_t)L_137^(int32_t)L_138));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_139 = V_2;
		NullCheck(L_139);
		int32_t L_140 = 2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_141 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		uint32_t L_142 = V_13;
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_142);
		uint32_t L_143 = V_14;
		uint32_t L_144 = V_13;
		V_14 = ((int32_t)((int32_t)L_143^(int32_t)L_144));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_145 = V_2;
		NullCheck(L_145);
		int32_t L_146 = 2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_147 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		uint32_t L_148 = V_14;
		NullCheck(L_147);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_148);
		uint32_t L_149 = V_15;
		uint32_t L_150 = V_14;
		V_15 = ((int32_t)((int32_t)L_149^(int32_t)L_150));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_151 = V_2;
		NullCheck(L_151);
		int32_t L_152 = 2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_153 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		uint32_t L_154 = V_15;
		NullCheck(L_153);
		(L_153)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_154);
		V_18 = 3;
		goto IL_02f9;
	}

IL_01ff:
	{
		uint32_t L_155 = V_15;
		il2cpp_codegen_runtime_class_init_inline(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var);
		uint32_t L_156;
		L_156 = AesFastEngine_Shift_m6468BEB7C36C8EF64634A2328954A3B749851599(L_155, 8, NULL);
		uint32_t L_157;
		L_157 = AesFastEngine_SubWord_mB5F97AA1C499B35DCE2B33DE31CA9371BA48F68C(L_156, NULL);
		uint32_t L_158 = V_16;
		V_17 = ((int32_t)((int32_t)L_157^(int32_t)L_158));
		uint32_t L_159 = V_16;
		V_16 = ((int32_t)((int32_t)L_159<<1));
		uint32_t L_160 = V_10;
		uint32_t L_161 = V_17;
		V_10 = ((int32_t)((int32_t)L_160^(int32_t)L_161));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_162 = V_2;
		int32_t L_163 = V_18;
		NullCheck(L_162);
		int32_t L_164 = L_163;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_165 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		uint32_t L_166 = V_10;
		NullCheck(L_165);
		(L_165)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_166);
		uint32_t L_167 = V_11;
		uint32_t L_168 = V_10;
		V_11 = ((int32_t)((int32_t)L_167^(int32_t)L_168));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_169 = V_2;
		int32_t L_170 = V_18;
		NullCheck(L_169);
		int32_t L_171 = L_170;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_172 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_171));
		uint32_t L_173 = V_11;
		NullCheck(L_172);
		(L_172)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_173);
		uint32_t L_174 = V_12;
		uint32_t L_175 = V_11;
		V_12 = ((int32_t)((int32_t)L_174^(int32_t)L_175));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_176 = V_2;
		int32_t L_177 = V_18;
		NullCheck(L_176);
		int32_t L_178 = L_177;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_179 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		uint32_t L_180 = V_12;
		NullCheck(L_179);
		(L_179)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_180);
		uint32_t L_181 = V_13;
		uint32_t L_182 = V_12;
		V_13 = ((int32_t)((int32_t)L_181^(int32_t)L_182));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_183 = V_2;
		int32_t L_184 = V_18;
		NullCheck(L_183);
		int32_t L_185 = L_184;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_186 = (L_183)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		uint32_t L_187 = V_13;
		NullCheck(L_186);
		(L_186)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_187);
		uint32_t L_188 = V_14;
		uint32_t L_189 = V_13;
		V_14 = ((int32_t)((int32_t)L_188^(int32_t)L_189));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_190 = V_2;
		int32_t L_191 = V_18;
		NullCheck(L_190);
		int32_t L_192 = ((int32_t)il2cpp_codegen_add(L_191, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_193 = (L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_192));
		uint32_t L_194 = V_14;
		NullCheck(L_193);
		(L_193)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_194);
		uint32_t L_195 = V_15;
		uint32_t L_196 = V_14;
		V_15 = ((int32_t)((int32_t)L_195^(int32_t)L_196));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_197 = V_2;
		int32_t L_198 = V_18;
		NullCheck(L_197);
		int32_t L_199 = ((int32_t)il2cpp_codegen_add(L_198, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_200 = (L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		uint32_t L_201 = V_15;
		NullCheck(L_200);
		(L_200)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_201);
		uint32_t L_202 = V_15;
		uint32_t L_203;
		L_203 = AesFastEngine_Shift_m6468BEB7C36C8EF64634A2328954A3B749851599(L_202, 8, NULL);
		uint32_t L_204;
		L_204 = AesFastEngine_SubWord_mB5F97AA1C499B35DCE2B33DE31CA9371BA48F68C(L_203, NULL);
		uint32_t L_205 = V_16;
		V_17 = ((int32_t)((int32_t)L_204^(int32_t)L_205));
		uint32_t L_206 = V_16;
		V_16 = ((int32_t)((int32_t)L_206<<1));
		uint32_t L_207 = V_10;
		uint32_t L_208 = V_17;
		V_10 = ((int32_t)((int32_t)L_207^(int32_t)L_208));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_209 = V_2;
		int32_t L_210 = V_18;
		NullCheck(L_209);
		int32_t L_211 = ((int32_t)il2cpp_codegen_add(L_210, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_212 = (L_209)->GetAt(static_cast<il2cpp_array_size_t>(L_211));
		uint32_t L_213 = V_10;
		NullCheck(L_212);
		(L_212)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_213);
		uint32_t L_214 = V_11;
		uint32_t L_215 = V_10;
		V_11 = ((int32_t)((int32_t)L_214^(int32_t)L_215));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_216 = V_2;
		int32_t L_217 = V_18;
		NullCheck(L_216);
		int32_t L_218 = ((int32_t)il2cpp_codegen_add(L_217, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_219 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		uint32_t L_220 = V_11;
		NullCheck(L_219);
		(L_219)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_220);
		uint32_t L_221 = V_12;
		uint32_t L_222 = V_11;
		V_12 = ((int32_t)((int32_t)L_221^(int32_t)L_222));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_223 = V_2;
		int32_t L_224 = V_18;
		NullCheck(L_223);
		int32_t L_225 = ((int32_t)il2cpp_codegen_add(L_224, 2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_226 = (L_223)->GetAt(static_cast<il2cpp_array_size_t>(L_225));
		uint32_t L_227 = V_12;
		NullCheck(L_226);
		(L_226)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_227);
		uint32_t L_228 = V_13;
		uint32_t L_229 = V_12;
		V_13 = ((int32_t)((int32_t)L_228^(int32_t)L_229));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_230 = V_2;
		int32_t L_231 = V_18;
		NullCheck(L_230);
		int32_t L_232 = ((int32_t)il2cpp_codegen_add(L_231, 2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_233 = (L_230)->GetAt(static_cast<il2cpp_array_size_t>(L_232));
		uint32_t L_234 = V_13;
		NullCheck(L_233);
		(L_233)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_234);
		uint32_t L_235 = V_14;
		uint32_t L_236 = V_13;
		V_14 = ((int32_t)((int32_t)L_235^(int32_t)L_236));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_237 = V_2;
		int32_t L_238 = V_18;
		NullCheck(L_237);
		int32_t L_239 = ((int32_t)il2cpp_codegen_add(L_238, 2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_240 = (L_237)->GetAt(static_cast<il2cpp_array_size_t>(L_239));
		uint32_t L_241 = V_14;
		NullCheck(L_240);
		(L_240)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_241);
		uint32_t L_242 = V_15;
		uint32_t L_243 = V_14;
		V_15 = ((int32_t)((int32_t)L_242^(int32_t)L_243));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_244 = V_2;
		int32_t L_245 = V_18;
		NullCheck(L_244);
		int32_t L_246 = ((int32_t)il2cpp_codegen_add(L_245, 2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_247 = (L_244)->GetAt(static_cast<il2cpp_array_size_t>(L_246));
		uint32_t L_248 = V_15;
		NullCheck(L_247);
		(L_247)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_248);
		int32_t L_249 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_249, 3));
	}

IL_02f9:
	{
		int32_t L_250 = V_18;
		if ((((int32_t)L_250) < ((int32_t)((int32_t)12))))
		{
			goto IL_01ff;
		}
	}
	{
		uint32_t L_251 = V_15;
		il2cpp_codegen_runtime_class_init_inline(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var);
		uint32_t L_252;
		L_252 = AesFastEngine_Shift_m6468BEB7C36C8EF64634A2328954A3B749851599(L_251, 8, NULL);
		uint32_t L_253;
		L_253 = AesFastEngine_SubWord_mB5F97AA1C499B35DCE2B33DE31CA9371BA48F68C(L_252, NULL);
		uint32_t L_254 = V_16;
		V_17 = ((int32_t)((int32_t)L_253^(int32_t)L_254));
		uint32_t L_255 = V_10;
		uint32_t L_256 = V_17;
		V_10 = ((int32_t)((int32_t)L_255^(int32_t)L_256));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_257 = V_2;
		NullCheck(L_257);
		int32_t L_258 = ((int32_t)12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_259 = (L_257)->GetAt(static_cast<il2cpp_array_size_t>(L_258));
		uint32_t L_260 = V_10;
		NullCheck(L_259);
		(L_259)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_260);
		uint32_t L_261 = V_11;
		uint32_t L_262 = V_10;
		V_11 = ((int32_t)((int32_t)L_261^(int32_t)L_262));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_263 = V_2;
		NullCheck(L_263);
		int32_t L_264 = ((int32_t)12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_265 = (L_263)->GetAt(static_cast<il2cpp_array_size_t>(L_264));
		uint32_t L_266 = V_11;
		NullCheck(L_265);
		(L_265)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_266);
		uint32_t L_267 = V_12;
		uint32_t L_268 = V_11;
		V_12 = ((int32_t)((int32_t)L_267^(int32_t)L_268));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_269 = V_2;
		NullCheck(L_269);
		int32_t L_270 = ((int32_t)12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_271 = (L_269)->GetAt(static_cast<il2cpp_array_size_t>(L_270));
		uint32_t L_272 = V_12;
		NullCheck(L_271);
		(L_271)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_272);
		uint32_t L_273 = V_13;
		uint32_t L_274 = V_12;
		V_13 = ((int32_t)((int32_t)L_273^(int32_t)L_274));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_275 = V_2;
		NullCheck(L_275);
		int32_t L_276 = ((int32_t)12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_277 = (L_275)->GetAt(static_cast<il2cpp_array_size_t>(L_276));
		uint32_t L_278 = V_13;
		NullCheck(L_277);
		(L_277)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_278);
		goto IL_04f0;
	}

IL_0355:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_279 = ___key0;
		uint32_t L_280;
		L_280 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_279, 0, NULL);
		V_19 = L_280;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_281 = V_2;
		NullCheck(L_281);
		int32_t L_282 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_283 = (L_281)->GetAt(static_cast<il2cpp_array_size_t>(L_282));
		uint32_t L_284 = V_19;
		NullCheck(L_283);
		(L_283)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_284);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_285 = ___key0;
		uint32_t L_286;
		L_286 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_285, 4, NULL);
		V_20 = L_286;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_287 = V_2;
		NullCheck(L_287);
		int32_t L_288 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_289 = (L_287)->GetAt(static_cast<il2cpp_array_size_t>(L_288));
		uint32_t L_290 = V_20;
		NullCheck(L_289);
		(L_289)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_290);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_291 = ___key0;
		uint32_t L_292;
		L_292 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_291, 8, NULL);
		V_21 = L_292;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_293 = V_2;
		NullCheck(L_293);
		int32_t L_294 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_295 = (L_293)->GetAt(static_cast<il2cpp_array_size_t>(L_294));
		uint32_t L_296 = V_21;
		NullCheck(L_295);
		(L_295)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_296);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_297 = ___key0;
		uint32_t L_298;
		L_298 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_297, ((int32_t)12), NULL);
		V_22 = L_298;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_299 = V_2;
		NullCheck(L_299);
		int32_t L_300 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_301 = (L_299)->GetAt(static_cast<il2cpp_array_size_t>(L_300));
		uint32_t L_302 = V_22;
		NullCheck(L_301);
		(L_301)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_302);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_303 = ___key0;
		uint32_t L_304;
		L_304 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_303, ((int32_t)16), NULL);
		V_23 = L_304;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_305 = V_2;
		NullCheck(L_305);
		int32_t L_306 = 1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_307 = (L_305)->GetAt(static_cast<il2cpp_array_size_t>(L_306));
		uint32_t L_308 = V_23;
		NullCheck(L_307);
		(L_307)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_308);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_309 = ___key0;
		uint32_t L_310;
		L_310 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_309, ((int32_t)20), NULL);
		V_24 = L_310;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_311 = V_2;
		NullCheck(L_311);
		int32_t L_312 = 1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_313 = (L_311)->GetAt(static_cast<il2cpp_array_size_t>(L_312));
		uint32_t L_314 = V_24;
		NullCheck(L_313);
		(L_313)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_314);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_315 = ___key0;
		uint32_t L_316;
		L_316 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_315, ((int32_t)24), NULL);
		V_25 = L_316;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_317 = V_2;
		NullCheck(L_317);
		int32_t L_318 = 1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_319 = (L_317)->GetAt(static_cast<il2cpp_array_size_t>(L_318));
		uint32_t L_320 = V_25;
		NullCheck(L_319);
		(L_319)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_320);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_321 = ___key0;
		uint32_t L_322;
		L_322 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_321, ((int32_t)28), NULL);
		V_26 = L_322;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_323 = V_2;
		NullCheck(L_323);
		int32_t L_324 = 1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_325 = (L_323)->GetAt(static_cast<il2cpp_array_size_t>(L_324));
		uint32_t L_326 = V_26;
		NullCheck(L_325);
		(L_325)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_326);
		V_28 = 1;
		V_29 = 2;
		goto IL_048c;
	}

IL_03e5:
	{
		uint32_t L_327 = V_26;
		il2cpp_codegen_runtime_class_init_inline(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var);
		uint32_t L_328;
		L_328 = AesFastEngine_Shift_m6468BEB7C36C8EF64634A2328954A3B749851599(L_327, 8, NULL);
		uint32_t L_329;
		L_329 = AesFastEngine_SubWord_mB5F97AA1C499B35DCE2B33DE31CA9371BA48F68C(L_328, NULL);
		uint32_t L_330 = V_28;
		V_27 = ((int32_t)((int32_t)L_329^(int32_t)L_330));
		uint32_t L_331 = V_28;
		V_28 = ((int32_t)((int32_t)L_331<<1));
		uint32_t L_332 = V_19;
		uint32_t L_333 = V_27;
		V_19 = ((int32_t)((int32_t)L_332^(int32_t)L_333));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_334 = V_2;
		int32_t L_335 = V_29;
		NullCheck(L_334);
		int32_t L_336 = L_335;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_337 = (L_334)->GetAt(static_cast<il2cpp_array_size_t>(L_336));
		uint32_t L_338 = V_19;
		NullCheck(L_337);
		(L_337)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_338);
		uint32_t L_339 = V_20;
		uint32_t L_340 = V_19;
		V_20 = ((int32_t)((int32_t)L_339^(int32_t)L_340));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_341 = V_2;
		int32_t L_342 = V_29;
		NullCheck(L_341);
		int32_t L_343 = L_342;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_344 = (L_341)->GetAt(static_cast<il2cpp_array_size_t>(L_343));
		uint32_t L_345 = V_20;
		NullCheck(L_344);
		(L_344)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_345);
		uint32_t L_346 = V_21;
		uint32_t L_347 = V_20;
		V_21 = ((int32_t)((int32_t)L_346^(int32_t)L_347));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_348 = V_2;
		int32_t L_349 = V_29;
		NullCheck(L_348);
		int32_t L_350 = L_349;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_351 = (L_348)->GetAt(static_cast<il2cpp_array_size_t>(L_350));
		uint32_t L_352 = V_21;
		NullCheck(L_351);
		(L_351)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_352);
		uint32_t L_353 = V_22;
		uint32_t L_354 = V_21;
		V_22 = ((int32_t)((int32_t)L_353^(int32_t)L_354));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_355 = V_2;
		int32_t L_356 = V_29;
		NullCheck(L_355);
		int32_t L_357 = L_356;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_358 = (L_355)->GetAt(static_cast<il2cpp_array_size_t>(L_357));
		uint32_t L_359 = V_22;
		NullCheck(L_358);
		(L_358)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_359);
		uint32_t L_360 = V_22;
		uint32_t L_361;
		L_361 = AesFastEngine_SubWord_mB5F97AA1C499B35DCE2B33DE31CA9371BA48F68C(L_360, NULL);
		V_27 = L_361;
		uint32_t L_362 = V_23;
		uint32_t L_363 = V_27;
		V_23 = ((int32_t)((int32_t)L_362^(int32_t)L_363));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_364 = V_2;
		int32_t L_365 = V_29;
		NullCheck(L_364);
		int32_t L_366 = ((int32_t)il2cpp_codegen_add(L_365, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_367 = (L_364)->GetAt(static_cast<il2cpp_array_size_t>(L_366));
		uint32_t L_368 = V_23;
		NullCheck(L_367);
		(L_367)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_368);
		uint32_t L_369 = V_24;
		uint32_t L_370 = V_23;
		V_24 = ((int32_t)((int32_t)L_369^(int32_t)L_370));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_371 = V_2;
		int32_t L_372 = V_29;
		NullCheck(L_371);
		int32_t L_373 = ((int32_t)il2cpp_codegen_add(L_372, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_374 = (L_371)->GetAt(static_cast<il2cpp_array_size_t>(L_373));
		uint32_t L_375 = V_24;
		NullCheck(L_374);
		(L_374)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_375);
		uint32_t L_376 = V_25;
		uint32_t L_377 = V_24;
		V_25 = ((int32_t)((int32_t)L_376^(int32_t)L_377));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_378 = V_2;
		int32_t L_379 = V_29;
		NullCheck(L_378);
		int32_t L_380 = ((int32_t)il2cpp_codegen_add(L_379, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_381 = (L_378)->GetAt(static_cast<il2cpp_array_size_t>(L_380));
		uint32_t L_382 = V_25;
		NullCheck(L_381);
		(L_381)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_382);
		uint32_t L_383 = V_26;
		uint32_t L_384 = V_25;
		V_26 = ((int32_t)((int32_t)L_383^(int32_t)L_384));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_385 = V_2;
		int32_t L_386 = V_29;
		NullCheck(L_385);
		int32_t L_387 = ((int32_t)il2cpp_codegen_add(L_386, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_388 = (L_385)->GetAt(static_cast<il2cpp_array_size_t>(L_387));
		uint32_t L_389 = V_26;
		NullCheck(L_388);
		(L_388)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_389);
		int32_t L_390 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add(L_390, 2));
	}

IL_048c:
	{
		int32_t L_391 = V_29;
		if ((((int32_t)L_391) < ((int32_t)((int32_t)14))))
		{
			goto IL_03e5;
		}
	}
	{
		uint32_t L_392 = V_26;
		il2cpp_codegen_runtime_class_init_inline(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var);
		uint32_t L_393;
		L_393 = AesFastEngine_Shift_m6468BEB7C36C8EF64634A2328954A3B749851599(L_392, 8, NULL);
		uint32_t L_394;
		L_394 = AesFastEngine_SubWord_mB5F97AA1C499B35DCE2B33DE31CA9371BA48F68C(L_393, NULL);
		uint32_t L_395 = V_28;
		V_27 = ((int32_t)((int32_t)L_394^(int32_t)L_395));
		uint32_t L_396 = V_19;
		uint32_t L_397 = V_27;
		V_19 = ((int32_t)((int32_t)L_396^(int32_t)L_397));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_398 = V_2;
		NullCheck(L_398);
		int32_t L_399 = ((int32_t)14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_400 = (L_398)->GetAt(static_cast<il2cpp_array_size_t>(L_399));
		uint32_t L_401 = V_19;
		NullCheck(L_400);
		(L_400)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_401);
		uint32_t L_402 = V_20;
		uint32_t L_403 = V_19;
		V_20 = ((int32_t)((int32_t)L_402^(int32_t)L_403));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_404 = V_2;
		NullCheck(L_404);
		int32_t L_405 = ((int32_t)14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_406 = (L_404)->GetAt(static_cast<il2cpp_array_size_t>(L_405));
		uint32_t L_407 = V_20;
		NullCheck(L_406);
		(L_406)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_407);
		uint32_t L_408 = V_21;
		uint32_t L_409 = V_20;
		V_21 = ((int32_t)((int32_t)L_408^(int32_t)L_409));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_410 = V_2;
		NullCheck(L_410);
		int32_t L_411 = ((int32_t)14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_412 = (L_410)->GetAt(static_cast<il2cpp_array_size_t>(L_411));
		uint32_t L_413 = V_21;
		NullCheck(L_412);
		(L_412)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_413);
		uint32_t L_414 = V_22;
		uint32_t L_415 = V_21;
		V_22 = ((int32_t)((int32_t)L_414^(int32_t)L_415));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_416 = V_2;
		NullCheck(L_416);
		int32_t L_417 = ((int32_t)14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_418 = (L_416)->GetAt(static_cast<il2cpp_array_size_t>(L_417));
		uint32_t L_419 = V_22;
		NullCheck(L_418);
		(L_418)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_419);
		goto IL_04f0;
	}

IL_04e5:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_420 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_420);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_420, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7DBDBA421AC8484BAFE52A917ED124C00D46DC9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_420, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AesFastEngine_GenerateWorkingKey_m32674BD104B3A76087CB4C552D5D127E65BD913D_RuntimeMethod_var)));
	}

IL_04f0:
	{
		bool L_421 = ___forEncryption1;
		if (L_421)
		{
			goto IL_052d;
		}
	}
	{
		V_30 = 1;
		goto IL_0523;
	}

IL_04f8:
	{
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_422 = V_2;
		int32_t L_423 = V_30;
		NullCheck(L_422);
		int32_t L_424 = L_423;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_425 = (L_422)->GetAt(static_cast<il2cpp_array_size_t>(L_424));
		V_31 = L_425;
		V_32 = 0;
		goto IL_0518;
	}

IL_0503:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_426 = V_31;
		int32_t L_427 = V_32;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_428 = V_31;
		int32_t L_429 = V_32;
		NullCheck(L_428);
		int32_t L_430 = L_429;
		uint32_t L_431 = (L_428)->GetAt(static_cast<il2cpp_array_size_t>(L_430));
		il2cpp_codegen_runtime_class_init_inline(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var);
		uint32_t L_432;
		L_432 = AesFastEngine_Inv_Mcol_mE3EACD60E4C0346AC4F12A40AB9DAA4F32AE1DB3(L_431, NULL);
		NullCheck(L_426);
		(L_426)->SetAt(static_cast<il2cpp_array_size_t>(L_427), (uint32_t)L_432);
		int32_t L_433 = V_32;
		V_32 = ((int32_t)il2cpp_codegen_add(L_433, 1));
	}

IL_0518:
	{
		int32_t L_434 = V_32;
		if ((((int32_t)L_434) < ((int32_t)4)))
		{
			goto IL_0503;
		}
	}
	{
		int32_t L_435 = V_30;
		V_30 = ((int32_t)il2cpp_codegen_add(L_435, 1));
	}

IL_0523:
	{
		int32_t L_436 = V_30;
		int32_t L_437 = __this->___ROUNDS_17;
		if ((((int32_t)L_436) < ((int32_t)L_437)))
		{
			goto IL_04f8;
		}
	}

IL_052d:
	{
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_438 = V_2;
		return L_438;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.AesFastEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesFastEngine__ctor_m42101E7050D67871F3B98FC9BE1BB230C307D253 (AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.AesFastEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesFastEngine_Init_m47714D1C2256A431E3BF89A9BBAEE3C94922A9A5 (AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___parameters1;
		V_0 = ((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_0, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var));
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_2 = ___parameters1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var)));
		String_t* L_3;
		L_3 = Platform_GetTypeName_m9B04679202710BC6A96803803882849D0C5001FB(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCED4ECC4AE35D4EFF2458EF43A779BB25724C998)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AesFastEngine_Init_m47714D1C2256A431E3BF89A9BBAEE3C94922A9A5_RuntimeMethod_var)));
	}

IL_0020:
	{
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_6 = V_0;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(L_6, NULL);
		bool L_8 = ___forEncryption0;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_9;
		L_9 = AesFastEngine_GenerateWorkingKey_m32674BD104B3A76087CB4C552D5D127E65BD913D(__this, L_7, L_8, NULL);
		__this->___WorkingKey_18 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WorkingKey_18), (void*)L_9);
		bool L_10 = ___forEncryption0;
		__this->___forEncryption_23 = L_10;
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Engines.AesFastEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AesFastEngine_get_AlgorithmName_mC51E74A9892552A5A2BCA7A5F697540DC9C0697E (AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral423ACA01AC170A50869ECDEF572CD96995576718);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral423ACA01AC170A50869ECDEF572CD96995576718;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Engines.AesFastEngine::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AesFastEngine_get_IsPartialBlockOkay_m00CADA0E46BEA372905DFB223AA992C232ADF131 (AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.AesFastEngine::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AesFastEngine_GetBlockSize_m3628C1806BAD3FC54ABD894F1A408FD870D49901 (AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)16);
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.AesFastEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AesFastEngine_ProcessBlock_m859A1477D6C26154F03BEA8366BB88FEB0942049 (AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_0 = __this->___WorkingKey_18;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1557AFFE8BBF6FF1C05CD38FC1CAB933607E374C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AesFastEngine_ProcessBlock_m859A1477D6C26154F03BEA8366BB88FEB0942049_RuntimeMethod_var)));
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		int32_t L_3 = ___inOff1;
		Check_DataLength_m4BEA4E45985CDB8967A7C3C71799B9036DDCC991(L_2, L_3, ((int32_t)16), _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output2;
		int32_t L_5 = ___outOff3;
		Check_OutputLength_mFBD480CE544E8B2C4EFAD3A12D1E105DC36FFA68(L_4, L_5, ((int32_t)16), _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___input0;
		int32_t L_7 = ___inOff1;
		AesFastEngine_UnPackBlock_mA618E0DBAB473E3FC5EB2F36E6F7347E5A01C65C(__this, L_6, L_7, NULL);
		bool L_8 = __this->___forEncryption_23;
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_9 = __this->___WorkingKey_18;
		AesFastEngine_EncryptBlock_mCF14CC4F781EABE805B9C9B6B1A7344A58EC51F5(__this, L_9, NULL);
		goto IL_005a;
	}

IL_004e:
	{
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_10 = __this->___WorkingKey_18;
		AesFastEngine_DecryptBlock_m3D32CDFFEDEB675C2C6334065EEE9FB96FEB4DC4(__this, L_10, NULL);
	}

IL_005a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___output2;
		int32_t L_12 = ___outOff3;
		AesFastEngine_PackBlock_mC620B6CDA5C9CB2C71F6B6B93526B18B67659E59(__this, L_11, L_12, NULL);
		return ((int32_t)16);
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.AesFastEngine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesFastEngine_Reset_m97BC8359E76E9E6BD26C484F8F6817590D2FB1EA (AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.AesFastEngine::UnPackBlock(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesFastEngine_UnPackBlock_mA618E0DBAB473E3FC5EB2F36E6F7347E5A01C65C (AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___off1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		int32_t L_1 = ___off1;
		uint32_t L_2;
		L_2 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_0, L_1, NULL);
		__this->___C0_19 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bytes0;
		int32_t L_4 = ___off1;
		uint32_t L_5;
		L_5 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		__this->___C1_20 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___bytes0;
		int32_t L_7 = ___off1;
		uint32_t L_8;
		L_8 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_6, ((int32_t)il2cpp_codegen_add(L_7, 8)), NULL);
		__this->___C2_21 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___bytes0;
		int32_t L_10 = ___off1;
		uint32_t L_11;
		L_11 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_9, ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)12))), NULL);
		__this->___C3_22 = L_11;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.AesFastEngine::PackBlock(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesFastEngine_PackBlock_mC620B6CDA5C9CB2C71F6B6B93526B18B67659E59 (AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___off1, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___C0_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bytes0;
		int32_t L_2 = ___off1;
		Pack_UInt32_To_LE_m2499D0485ABBAB63E653F26941EE0AFA53508D18(L_0, L_1, L_2, NULL);
		uint32_t L_3 = __this->___C1_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___bytes0;
		int32_t L_5 = ___off1;
		Pack_UInt32_To_LE_m2499D0485ABBAB63E653F26941EE0AFA53508D18(L_3, L_4, ((int32_t)il2cpp_codegen_add(L_5, 4)), NULL);
		uint32_t L_6 = __this->___C2_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___bytes0;
		int32_t L_8 = ___off1;
		Pack_UInt32_To_LE_m2499D0485ABBAB63E653F26941EE0AFA53508D18(L_6, L_7, ((int32_t)il2cpp_codegen_add(L_8, 8)), NULL);
		uint32_t L_9 = __this->___C3_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___bytes0;
		int32_t L_11 = ___off1;
		Pack_UInt32_To_LE_m2499D0485ABBAB63E653F26941EE0AFA53508D18(L_9, L_10, ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)12))), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.AesFastEngine::EncryptBlock(System.UInt32[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesFastEngine_EncryptBlock_mCF14CC4F781EABE805B9C9B6B1A7344A58EC51F5 (AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168* __this, UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* ___KW0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_0 = ___KW0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		uint32_t L_3 = __this->___C0_19;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = ((int32_t)((int32_t)L_3^(int32_t)L_6));
		uint32_t L_7 = __this->___C1_20;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 1;
		uint32_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = ((int32_t)((int32_t)L_7^(int32_t)L_10));
		uint32_t L_11 = __this->___C2_21;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 2;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_3 = ((int32_t)((int32_t)L_11^(int32_t)L_14));
		uint32_t L_15 = __this->___C3_22;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = 3;
		uint32_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_7 = ((int32_t)((int32_t)L_15^(int32_t)L_18));
		V_8 = 1;
		goto IL_0276;
	}

IL_0039:
	{
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_19 = ___KW0;
		int32_t L_20 = V_8;
		int32_t L_21 = L_20;
		V_8 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		NullCheck(L_19);
		int32_t L_22 = L_21;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_0 = L_23;
		il2cpp_codegen_runtime_class_init_inline(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T0_9;
		uint32_t L_25 = V_1;
		NullCheck(L_24);
		uintptr_t L_26 = ((uintptr_t)((int32_t)((int32_t)L_25&((int32_t)255))));
		uint32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T1_10;
		uint32_t L_29 = V_2;
		NullCheck(L_28);
		uintptr_t L_30 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_29>>8))&((int32_t)255))));
		uint32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T2_11;
		uint32_t L_33 = V_3;
		NullCheck(L_32);
		uintptr_t L_34 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_33>>((int32_t)16)))&((int32_t)255))));
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T3_12;
		uint32_t L_37 = V_7;
		NullCheck(L_36);
		uintptr_t L_38 = ((uintptr_t)((int32_t)((uint32_t)L_37>>((int32_t)24))));
		uint32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = V_0;
		NullCheck(L_40);
		int32_t L_41 = 0;
		uint32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_4 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_27^(int32_t)L_31))^(int32_t)L_35))^(int32_t)L_39))^(int32_t)L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T0_9;
		uint32_t L_44 = V_2;
		NullCheck(L_43);
		uintptr_t L_45 = ((uintptr_t)((int32_t)((int32_t)L_44&((int32_t)255))));
		uint32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T1_10;
		uint32_t L_48 = V_3;
		NullCheck(L_47);
		uintptr_t L_49 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_48>>8))&((int32_t)255))));
		uint32_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T2_11;
		uint32_t L_52 = V_7;
		NullCheck(L_51);
		uintptr_t L_53 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_52>>((int32_t)16)))&((int32_t)255))));
		uint32_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T3_12;
		uint32_t L_56 = V_1;
		NullCheck(L_55);
		uintptr_t L_57 = ((uintptr_t)((int32_t)((uint32_t)L_56>>((int32_t)24))));
		uint32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = V_0;
		NullCheck(L_59);
		int32_t L_60 = 1;
		uint32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_5 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_46^(int32_t)L_50))^(int32_t)L_54))^(int32_t)L_58))^(int32_t)L_61));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T0_9;
		uint32_t L_63 = V_3;
		NullCheck(L_62);
		uintptr_t L_64 = ((uintptr_t)((int32_t)((int32_t)L_63&((int32_t)255))));
		uint32_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T1_10;
		uint32_t L_67 = V_7;
		NullCheck(L_66);
		uintptr_t L_68 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_67>>8))&((int32_t)255))));
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T2_11;
		uint32_t L_71 = V_1;
		NullCheck(L_70);
		uintptr_t L_72 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_71>>((int32_t)16)))&((int32_t)255))));
		uint32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T3_12;
		uint32_t L_75 = V_2;
		NullCheck(L_74);
		uintptr_t L_76 = ((uintptr_t)((int32_t)((uint32_t)L_75>>((int32_t)24))));
		uint32_t L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_78 = V_0;
		NullCheck(L_78);
		int32_t L_79 = 2;
		uint32_t L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		V_6 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_65^(int32_t)L_69))^(int32_t)L_73))^(int32_t)L_77))^(int32_t)L_80));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T0_9;
		uint32_t L_82 = V_7;
		NullCheck(L_81);
		uintptr_t L_83 = ((uintptr_t)((int32_t)((int32_t)L_82&((int32_t)255))));
		uint32_t L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T1_10;
		uint32_t L_86 = V_1;
		NullCheck(L_85);
		uintptr_t L_87 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_86>>8))&((int32_t)255))));
		uint32_t L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_89 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T2_11;
		uint32_t L_90 = V_2;
		NullCheck(L_89);
		uintptr_t L_91 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_90>>((int32_t)16)))&((int32_t)255))));
		uint32_t L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_93 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T3_12;
		uint32_t L_94 = V_3;
		NullCheck(L_93);
		uintptr_t L_95 = ((uintptr_t)((int32_t)((uint32_t)L_94>>((int32_t)24))));
		uint32_t L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_97 = V_0;
		NullCheck(L_97);
		int32_t L_98 = 3;
		uint32_t L_99 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		V_7 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_84^(int32_t)L_88))^(int32_t)L_92))^(int32_t)L_96))^(int32_t)L_99));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_100 = ___KW0;
		int32_t L_101 = V_8;
		int32_t L_102 = L_101;
		V_8 = ((int32_t)il2cpp_codegen_add(L_102, 1));
		NullCheck(L_100);
		int32_t L_103 = L_102;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_104 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		V_0 = L_104;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_105 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T0_9;
		uint32_t L_106 = V_4;
		NullCheck(L_105);
		uintptr_t L_107 = ((uintptr_t)((int32_t)((int32_t)L_106&((int32_t)255))));
		uint32_t L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_109 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T1_10;
		uint32_t L_110 = V_5;
		NullCheck(L_109);
		uintptr_t L_111 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_110>>8))&((int32_t)255))));
		uint32_t L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_113 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T2_11;
		uint32_t L_114 = V_6;
		NullCheck(L_113);
		uintptr_t L_115 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_114>>((int32_t)16)))&((int32_t)255))));
		uint32_t L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_117 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T3_12;
		uint32_t L_118 = V_7;
		NullCheck(L_117);
		uintptr_t L_119 = ((uintptr_t)((int32_t)((uint32_t)L_118>>((int32_t)24))));
		uint32_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_121 = V_0;
		NullCheck(L_121);
		int32_t L_122 = 0;
		uint32_t L_123 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		V_1 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_108^(int32_t)L_112))^(int32_t)L_116))^(int32_t)L_120))^(int32_t)L_123));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_124 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T0_9;
		uint32_t L_125 = V_5;
		NullCheck(L_124);
		uintptr_t L_126 = ((uintptr_t)((int32_t)((int32_t)L_125&((int32_t)255))));
		uint32_t L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_128 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T1_10;
		uint32_t L_129 = V_6;
		NullCheck(L_128);
		uintptr_t L_130 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_129>>8))&((int32_t)255))));
		uint32_t L_131 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_132 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T2_11;
		uint32_t L_133 = V_7;
		NullCheck(L_132);
		uintptr_t L_134 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_133>>((int32_t)16)))&((int32_t)255))));
		uint32_t L_135 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_136 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T3_12;
		uint32_t L_137 = V_4;
		NullCheck(L_136);
		uintptr_t L_138 = ((uintptr_t)((int32_t)((uint32_t)L_137>>((int32_t)24))));
		uint32_t L_139 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_140 = V_0;
		NullCheck(L_140);
		int32_t L_141 = 1;
		uint32_t L_142 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		V_2 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_127^(int32_t)L_131))^(int32_t)L_135))^(int32_t)L_139))^(int32_t)L_142));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_143 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T0_9;
		uint32_t L_144 = V_6;
		NullCheck(L_143);
		uintptr_t L_145 = ((uintptr_t)((int32_t)((int32_t)L_144&((int32_t)255))));
		uint32_t L_146 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_147 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T1_10;
		uint32_t L_148 = V_7;
		NullCheck(L_147);
		uintptr_t L_149 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_148>>8))&((int32_t)255))));
		uint32_t L_150 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_151 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T2_11;
		uint32_t L_152 = V_4;
		NullCheck(L_151);
		uintptr_t L_153 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_152>>((int32_t)16)))&((int32_t)255))));
		uint32_t L_154 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_155 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T3_12;
		uint32_t L_156 = V_5;
		NullCheck(L_155);
		uintptr_t L_157 = ((uintptr_t)((int32_t)((uint32_t)L_156>>((int32_t)24))));
		uint32_t L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_159 = V_0;
		NullCheck(L_159);
		int32_t L_160 = 2;
		uint32_t L_161 = (L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		V_3 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_146^(int32_t)L_150))^(int32_t)L_154))^(int32_t)L_158))^(int32_t)L_161));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_162 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T0_9;
		uint32_t L_163 = V_7;
		NullCheck(L_162);
		uintptr_t L_164 = ((uintptr_t)((int32_t)((int32_t)L_163&((int32_t)255))));
		uint32_t L_165 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_166 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T1_10;
		uint32_t L_167 = V_4;
		NullCheck(L_166);
		uintptr_t L_168 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_167>>8))&((int32_t)255))));
		uint32_t L_169 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_170 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T2_11;
		uint32_t L_171 = V_5;
		NullCheck(L_170);
		uintptr_t L_172 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_171>>((int32_t)16)))&((int32_t)255))));
		uint32_t L_173 = (L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_174 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T3_12;
		uint32_t L_175 = V_6;
		NullCheck(L_174);
		uintptr_t L_176 = ((uintptr_t)((int32_t)((uint32_t)L_175>>((int32_t)24))));
		uint32_t L_177 = (L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_178 = V_0;
		NullCheck(L_178);
		int32_t L_179 = 3;
		uint32_t L_180 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		V_7 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_165^(int32_t)L_169))^(int32_t)L_173))^(int32_t)L_177))^(int32_t)L_180));
	}

IL_0276:
	{
		int32_t L_181 = V_8;
		int32_t L_182 = __this->___ROUNDS_17;
		if ((((int32_t)L_181) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_182, 1)))))
		{
			goto IL_0039;
		}
	}
	{
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_183 = ___KW0;
		int32_t L_184 = V_8;
		int32_t L_185 = L_184;
		V_8 = ((int32_t)il2cpp_codegen_add(L_185, 1));
		NullCheck(L_183);
		int32_t L_186 = L_185;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_187 = (L_183)->GetAt(static_cast<il2cpp_array_size_t>(L_186));
		V_0 = L_187;
		il2cpp_codegen_runtime_class_init_inline(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_188 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T0_9;
		uint32_t L_189 = V_1;
		NullCheck(L_188);
		uintptr_t L_190 = ((uintptr_t)((int32_t)((int32_t)L_189&((int32_t)255))));
		uint32_t L_191 = (L_188)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_192 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T1_10;
		uint32_t L_193 = V_2;
		NullCheck(L_192);
		uintptr_t L_194 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_193>>8))&((int32_t)255))));
		uint32_t L_195 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_194));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_196 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T2_11;
		uint32_t L_197 = V_3;
		NullCheck(L_196);
		uintptr_t L_198 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_197>>((int32_t)16)))&((int32_t)255))));
		uint32_t L_199 = (L_196)->GetAt(static_cast<il2cpp_array_size_t>(L_198));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_200 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T3_12;
		uint32_t L_201 = V_7;
		NullCheck(L_200);
		uintptr_t L_202 = ((uintptr_t)((int32_t)((uint32_t)L_201>>((int32_t)24))));
		uint32_t L_203 = (L_200)->GetAt(static_cast<il2cpp_array_size_t>(L_202));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_204 = V_0;
		NullCheck(L_204);
		int32_t L_205 = 0;
		uint32_t L_206 = (L_204)->GetAt(static_cast<il2cpp_array_size_t>(L_205));
		V_4 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_191^(int32_t)L_195))^(int32_t)L_199))^(int32_t)L_203))^(int32_t)L_206));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_207 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T0_9;
		uint32_t L_208 = V_2;
		NullCheck(L_207);
		uintptr_t L_209 = ((uintptr_t)((int32_t)((int32_t)L_208&((int32_t)255))));
		uint32_t L_210 = (L_207)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_211 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T1_10;
		uint32_t L_212 = V_3;
		NullCheck(L_211);
		uintptr_t L_213 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_212>>8))&((int32_t)255))));
		uint32_t L_214 = (L_211)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_215 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T2_11;
		uint32_t L_216 = V_7;
		NullCheck(L_215);
		uintptr_t L_217 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_216>>((int32_t)16)))&((int32_t)255))));
		uint32_t L_218 = (L_215)->GetAt(static_cast<il2cpp_array_size_t>(L_217));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_219 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T3_12;
		uint32_t L_220 = V_1;
		NullCheck(L_219);
		uintptr_t L_221 = ((uintptr_t)((int32_t)((uint32_t)L_220>>((int32_t)24))));
		uint32_t L_222 = (L_219)->GetAt(static_cast<il2cpp_array_size_t>(L_221));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_223 = V_0;
		NullCheck(L_223);
		int32_t L_224 = 1;
		uint32_t L_225 = (L_223)->GetAt(static_cast<il2cpp_array_size_t>(L_224));
		V_5 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_210^(int32_t)L_214))^(int32_t)L_218))^(int32_t)L_222))^(int32_t)L_225));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_226 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T0_9;
		uint32_t L_227 = V_3;
		NullCheck(L_226);
		uintptr_t L_228 = ((uintptr_t)((int32_t)((int32_t)L_227&((int32_t)255))));
		uint32_t L_229 = (L_226)->GetAt(static_cast<il2cpp_array_size_t>(L_228));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_230 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T1_10;
		uint32_t L_231 = V_7;
		NullCheck(L_230);
		uintptr_t L_232 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_231>>8))&((int32_t)255))));
		uint32_t L_233 = (L_230)->GetAt(static_cast<il2cpp_array_size_t>(L_232));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_234 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T2_11;
		uint32_t L_235 = V_1;
		NullCheck(L_234);
		uintptr_t L_236 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_235>>((int32_t)16)))&((int32_t)255))));
		uint32_t L_237 = (L_234)->GetAt(static_cast<il2cpp_array_size_t>(L_236));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_238 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T3_12;
		uint32_t L_239 = V_2;
		NullCheck(L_238);
		uintptr_t L_240 = ((uintptr_t)((int32_t)((uint32_t)L_239>>((int32_t)24))));
		uint32_t L_241 = (L_238)->GetAt(static_cast<il2cpp_array_size_t>(L_240));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_242 = V_0;
		NullCheck(L_242);
		int32_t L_243 = 2;
		uint32_t L_244 = (L_242)->GetAt(static_cast<il2cpp_array_size_t>(L_243));
		V_6 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_229^(int32_t)L_233))^(int32_t)L_237))^(int32_t)L_241))^(int32_t)L_244));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_245 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T0_9;
		uint32_t L_246 = V_7;
		NullCheck(L_245);
		uintptr_t L_247 = ((uintptr_t)((int32_t)((int32_t)L_246&((int32_t)255))));
		uint32_t L_248 = (L_245)->GetAt(static_cast<il2cpp_array_size_t>(L_247));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_249 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T1_10;
		uint32_t L_250 = V_1;
		NullCheck(L_249);
		uintptr_t L_251 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_250>>8))&((int32_t)255))));
		uint32_t L_252 = (L_249)->GetAt(static_cast<il2cpp_array_size_t>(L_251));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_253 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T2_11;
		uint32_t L_254 = V_2;
		NullCheck(L_253);
		uintptr_t L_255 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_254>>((int32_t)16)))&((int32_t)255))));
		uint32_t L_256 = (L_253)->GetAt(static_cast<il2cpp_array_size_t>(L_255));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_257 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T3_12;
		uint32_t L_258 = V_3;
		NullCheck(L_257);
		uintptr_t L_259 = ((uintptr_t)((int32_t)((uint32_t)L_258>>((int32_t)24))));
		uint32_t L_260 = (L_257)->GetAt(static_cast<il2cpp_array_size_t>(L_259));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_261 = V_0;
		NullCheck(L_261);
		int32_t L_262 = 3;
		uint32_t L_263 = (L_261)->GetAt(static_cast<il2cpp_array_size_t>(L_262));
		V_7 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_248^(int32_t)L_252))^(int32_t)L_256))^(int32_t)L_260))^(int32_t)L_263));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_264 = ___KW0;
		int32_t L_265 = V_8;
		NullCheck(L_264);
		int32_t L_266 = L_265;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_267 = (L_264)->GetAt(static_cast<il2cpp_array_size_t>(L_266));
		V_0 = L_267;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_268 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_269 = V_4;
		NullCheck(L_268);
		uintptr_t L_270 = ((uintptr_t)((int32_t)((int32_t)L_269&((int32_t)255))));
		uint8_t L_271 = (L_268)->GetAt(static_cast<il2cpp_array_size_t>(L_270));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_272 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_273 = V_5;
		NullCheck(L_272);
		uintptr_t L_274 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_273>>8))&((int32_t)255))));
		uint8_t L_275 = (L_272)->GetAt(static_cast<il2cpp_array_size_t>(L_274));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_276 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_277 = V_6;
		NullCheck(L_276);
		uintptr_t L_278 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_277>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_279 = (L_276)->GetAt(static_cast<il2cpp_array_size_t>(L_278));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_280 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_281 = V_7;
		NullCheck(L_280);
		uintptr_t L_282 = ((uintptr_t)((int32_t)((uint32_t)L_281>>((int32_t)24))));
		uint8_t L_283 = (L_280)->GetAt(static_cast<il2cpp_array_size_t>(L_282));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_284 = V_0;
		NullCheck(L_284);
		int32_t L_285 = 0;
		uint32_t L_286 = (L_284)->GetAt(static_cast<il2cpp_array_size_t>(L_285));
		__this->___C0_19 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_271^((int32_t)((int32_t)L_275<<8))))^((int32_t)((int32_t)L_279<<((int32_t)16)))))^((int32_t)((int32_t)L_283<<((int32_t)24)))))^(int32_t)L_286));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_287 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_288 = V_5;
		NullCheck(L_287);
		uintptr_t L_289 = ((uintptr_t)((int32_t)((int32_t)L_288&((int32_t)255))));
		uint8_t L_290 = (L_287)->GetAt(static_cast<il2cpp_array_size_t>(L_289));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_291 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_292 = V_6;
		NullCheck(L_291);
		uintptr_t L_293 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_292>>8))&((int32_t)255))));
		uint8_t L_294 = (L_291)->GetAt(static_cast<il2cpp_array_size_t>(L_293));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_295 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_296 = V_7;
		NullCheck(L_295);
		uintptr_t L_297 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_296>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_298 = (L_295)->GetAt(static_cast<il2cpp_array_size_t>(L_297));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_299 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_300 = V_4;
		NullCheck(L_299);
		uintptr_t L_301 = ((uintptr_t)((int32_t)((uint32_t)L_300>>((int32_t)24))));
		uint8_t L_302 = (L_299)->GetAt(static_cast<il2cpp_array_size_t>(L_301));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_303 = V_0;
		NullCheck(L_303);
		int32_t L_304 = 1;
		uint32_t L_305 = (L_303)->GetAt(static_cast<il2cpp_array_size_t>(L_304));
		__this->___C1_20 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_290^((int32_t)((int32_t)L_294<<8))))^((int32_t)((int32_t)L_298<<((int32_t)16)))))^((int32_t)((int32_t)L_302<<((int32_t)24)))))^(int32_t)L_305));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_306 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_307 = V_6;
		NullCheck(L_306);
		uintptr_t L_308 = ((uintptr_t)((int32_t)((int32_t)L_307&((int32_t)255))));
		uint8_t L_309 = (L_306)->GetAt(static_cast<il2cpp_array_size_t>(L_308));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_310 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_311 = V_7;
		NullCheck(L_310);
		uintptr_t L_312 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_311>>8))&((int32_t)255))));
		uint8_t L_313 = (L_310)->GetAt(static_cast<il2cpp_array_size_t>(L_312));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_314 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_315 = V_4;
		NullCheck(L_314);
		uintptr_t L_316 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_315>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_317 = (L_314)->GetAt(static_cast<il2cpp_array_size_t>(L_316));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_318 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_319 = V_5;
		NullCheck(L_318);
		uintptr_t L_320 = ((uintptr_t)((int32_t)((uint32_t)L_319>>((int32_t)24))));
		uint8_t L_321 = (L_318)->GetAt(static_cast<il2cpp_array_size_t>(L_320));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_322 = V_0;
		NullCheck(L_322);
		int32_t L_323 = 2;
		uint32_t L_324 = (L_322)->GetAt(static_cast<il2cpp_array_size_t>(L_323));
		__this->___C2_21 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_309^((int32_t)((int32_t)L_313<<8))))^((int32_t)((int32_t)L_317<<((int32_t)16)))))^((int32_t)((int32_t)L_321<<((int32_t)24)))))^(int32_t)L_324));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_325 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_326 = V_7;
		NullCheck(L_325);
		uintptr_t L_327 = ((uintptr_t)((int32_t)((int32_t)L_326&((int32_t)255))));
		uint8_t L_328 = (L_325)->GetAt(static_cast<il2cpp_array_size_t>(L_327));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_329 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_330 = V_4;
		NullCheck(L_329);
		uintptr_t L_331 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_330>>8))&((int32_t)255))));
		uint8_t L_332 = (L_329)->GetAt(static_cast<il2cpp_array_size_t>(L_331));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_333 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_334 = V_5;
		NullCheck(L_333);
		uintptr_t L_335 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_334>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_336 = (L_333)->GetAt(static_cast<il2cpp_array_size_t>(L_335));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_337 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_338 = V_6;
		NullCheck(L_337);
		uintptr_t L_339 = ((uintptr_t)((int32_t)((uint32_t)L_338>>((int32_t)24))));
		uint8_t L_340 = (L_337)->GetAt(static_cast<il2cpp_array_size_t>(L_339));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_341 = V_0;
		NullCheck(L_341);
		int32_t L_342 = 3;
		uint32_t L_343 = (L_341)->GetAt(static_cast<il2cpp_array_size_t>(L_342));
		__this->___C3_22 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_328^((int32_t)((int32_t)L_332<<8))))^((int32_t)((int32_t)L_336<<((int32_t)16)))))^((int32_t)((int32_t)L_340<<((int32_t)24)))))^(int32_t)L_343));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.AesFastEngine::DecryptBlock(System.UInt32[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesFastEngine_DecryptBlock_m3D32CDFFEDEB675C2C6334065EEE9FB96FEB4DC4 (AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168* __this, UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* ___KW0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_0 = ___KW0;
		int32_t L_1 = __this->___ROUNDS_17;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		uint32_t L_4 = __this->___C0_19;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		uint32_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = ((int32_t)((int32_t)L_4^(int32_t)L_7));
		uint32_t L_8 = __this->___C1_20;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 1;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = ((int32_t)((int32_t)L_8^(int32_t)L_11));
		uint32_t L_12 = __this->___C2_21;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = 2;
		uint32_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_3 = ((int32_t)((int32_t)L_12^(int32_t)L_15));
		uint32_t L_16 = __this->___C3_22;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = 3;
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = ((int32_t)((int32_t)L_16^(int32_t)L_19));
		int32_t L_20 = __this->___ROUNDS_17;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		goto IL_0282;
	}

IL_0045:
	{
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_21 = ___KW0;
		int32_t L_22 = V_8;
		int32_t L_23 = L_22;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		NullCheck(L_21);
		int32_t L_24 = L_23;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_0 = L_25;
		il2cpp_codegen_runtime_class_init_inline(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv0_13;
		uint32_t L_27 = V_1;
		NullCheck(L_26);
		uintptr_t L_28 = ((uintptr_t)((int32_t)((int32_t)L_27&((int32_t)255))));
		uint32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv1_14;
		uint32_t L_31 = V_7;
		NullCheck(L_30);
		uintptr_t L_32 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_31>>8))&((int32_t)255))));
		uint32_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv2_15;
		uint32_t L_35 = V_3;
		NullCheck(L_34);
		uintptr_t L_36 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_35>>((int32_t)16)))&((int32_t)255))));
		uint32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv3_16;
		uint32_t L_39 = V_2;
		NullCheck(L_38);
		uintptr_t L_40 = ((uintptr_t)((int32_t)((uint32_t)L_39>>((int32_t)24))));
		uint32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = V_0;
		NullCheck(L_42);
		int32_t L_43 = 0;
		uint32_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_4 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_29^(int32_t)L_33))^(int32_t)L_37))^(int32_t)L_41))^(int32_t)L_44));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv0_13;
		uint32_t L_46 = V_2;
		NullCheck(L_45);
		uintptr_t L_47 = ((uintptr_t)((int32_t)((int32_t)L_46&((int32_t)255))));
		uint32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv1_14;
		uint32_t L_50 = V_1;
		NullCheck(L_49);
		uintptr_t L_51 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_50>>8))&((int32_t)255))));
		uint32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv2_15;
		uint32_t L_54 = V_7;
		NullCheck(L_53);
		uintptr_t L_55 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_54>>((int32_t)16)))&((int32_t)255))));
		uint32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv3_16;
		uint32_t L_58 = V_3;
		NullCheck(L_57);
		uintptr_t L_59 = ((uintptr_t)((int32_t)((uint32_t)L_58>>((int32_t)24))));
		uint32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = V_0;
		NullCheck(L_61);
		int32_t L_62 = 1;
		uint32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_5 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_48^(int32_t)L_52))^(int32_t)L_56))^(int32_t)L_60))^(int32_t)L_63));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv0_13;
		uint32_t L_65 = V_3;
		NullCheck(L_64);
		uintptr_t L_66 = ((uintptr_t)((int32_t)((int32_t)L_65&((int32_t)255))));
		uint32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv1_14;
		uint32_t L_69 = V_2;
		NullCheck(L_68);
		uintptr_t L_70 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_69>>8))&((int32_t)255))));
		uint32_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv2_15;
		uint32_t L_73 = V_1;
		NullCheck(L_72);
		uintptr_t L_74 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_73>>((int32_t)16)))&((int32_t)255))));
		uint32_t L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv3_16;
		uint32_t L_77 = V_7;
		NullCheck(L_76);
		uintptr_t L_78 = ((uintptr_t)((int32_t)((uint32_t)L_77>>((int32_t)24))));
		uint32_t L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = V_0;
		NullCheck(L_80);
		int32_t L_81 = 2;
		uint32_t L_82 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		V_6 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_67^(int32_t)L_71))^(int32_t)L_75))^(int32_t)L_79))^(int32_t)L_82));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv0_13;
		uint32_t L_84 = V_7;
		NullCheck(L_83);
		uintptr_t L_85 = ((uintptr_t)((int32_t)((int32_t)L_84&((int32_t)255))));
		uint32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv1_14;
		uint32_t L_88 = V_3;
		NullCheck(L_87);
		uintptr_t L_89 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_88>>8))&((int32_t)255))));
		uint32_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_91 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv2_15;
		uint32_t L_92 = V_2;
		NullCheck(L_91);
		uintptr_t L_93 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_92>>((int32_t)16)))&((int32_t)255))));
		uint32_t L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_95 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv3_16;
		uint32_t L_96 = V_1;
		NullCheck(L_95);
		uintptr_t L_97 = ((uintptr_t)((int32_t)((uint32_t)L_96>>((int32_t)24))));
		uint32_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_99 = V_0;
		NullCheck(L_99);
		int32_t L_100 = 3;
		uint32_t L_101 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		V_7 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_86^(int32_t)L_90))^(int32_t)L_94))^(int32_t)L_98))^(int32_t)L_101));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_102 = ___KW0;
		int32_t L_103 = V_8;
		int32_t L_104 = L_103;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_104, 1));
		NullCheck(L_102);
		int32_t L_105 = L_104;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_106 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		V_0 = L_106;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_107 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv0_13;
		uint32_t L_108 = V_4;
		NullCheck(L_107);
		uintptr_t L_109 = ((uintptr_t)((int32_t)((int32_t)L_108&((int32_t)255))));
		uint32_t L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_111 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv1_14;
		uint32_t L_112 = V_7;
		NullCheck(L_111);
		uintptr_t L_113 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_112>>8))&((int32_t)255))));
		uint32_t L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_115 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv2_15;
		uint32_t L_116 = V_6;
		NullCheck(L_115);
		uintptr_t L_117 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_116>>((int32_t)16)))&((int32_t)255))));
		uint32_t L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_119 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv3_16;
		uint32_t L_120 = V_5;
		NullCheck(L_119);
		uintptr_t L_121 = ((uintptr_t)((int32_t)((uint32_t)L_120>>((int32_t)24))));
		uint32_t L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124 = 0;
		uint32_t L_125 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		V_1 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_110^(int32_t)L_114))^(int32_t)L_118))^(int32_t)L_122))^(int32_t)L_125));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_126 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv0_13;
		uint32_t L_127 = V_5;
		NullCheck(L_126);
		uintptr_t L_128 = ((uintptr_t)((int32_t)((int32_t)L_127&((int32_t)255))));
		uint32_t L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_130 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv1_14;
		uint32_t L_131 = V_4;
		NullCheck(L_130);
		uintptr_t L_132 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_131>>8))&((int32_t)255))));
		uint32_t L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_134 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv2_15;
		uint32_t L_135 = V_7;
		NullCheck(L_134);
		uintptr_t L_136 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_135>>((int32_t)16)))&((int32_t)255))));
		uint32_t L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_138 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv3_16;
		uint32_t L_139 = V_6;
		NullCheck(L_138);
		uintptr_t L_140 = ((uintptr_t)((int32_t)((uint32_t)L_139>>((int32_t)24))));
		uint32_t L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_142 = V_0;
		NullCheck(L_142);
		int32_t L_143 = 1;
		uint32_t L_144 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		V_2 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_129^(int32_t)L_133))^(int32_t)L_137))^(int32_t)L_141))^(int32_t)L_144));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_145 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv0_13;
		uint32_t L_146 = V_6;
		NullCheck(L_145);
		uintptr_t L_147 = ((uintptr_t)((int32_t)((int32_t)L_146&((int32_t)255))));
		uint32_t L_148 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_149 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv1_14;
		uint32_t L_150 = V_5;
		NullCheck(L_149);
		uintptr_t L_151 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_150>>8))&((int32_t)255))));
		uint32_t L_152 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_153 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv2_15;
		uint32_t L_154 = V_4;
		NullCheck(L_153);
		uintptr_t L_155 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_154>>((int32_t)16)))&((int32_t)255))));
		uint32_t L_156 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_155));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_157 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv3_16;
		uint32_t L_158 = V_7;
		NullCheck(L_157);
		uintptr_t L_159 = ((uintptr_t)((int32_t)((uint32_t)L_158>>((int32_t)24))));
		uint32_t L_160 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_161 = V_0;
		NullCheck(L_161);
		int32_t L_162 = 2;
		uint32_t L_163 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		V_3 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_148^(int32_t)L_152))^(int32_t)L_156))^(int32_t)L_160))^(int32_t)L_163));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_164 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv0_13;
		uint32_t L_165 = V_7;
		NullCheck(L_164);
		uintptr_t L_166 = ((uintptr_t)((int32_t)((int32_t)L_165&((int32_t)255))));
		uint32_t L_167 = (L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_166));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_168 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv1_14;
		uint32_t L_169 = V_6;
		NullCheck(L_168);
		uintptr_t L_170 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_169>>8))&((int32_t)255))));
		uint32_t L_171 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_172 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv2_15;
		uint32_t L_173 = V_5;
		NullCheck(L_172);
		uintptr_t L_174 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_173>>((int32_t)16)))&((int32_t)255))));
		uint32_t L_175 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_176 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv3_16;
		uint32_t L_177 = V_4;
		NullCheck(L_176);
		uintptr_t L_178 = ((uintptr_t)((int32_t)((uint32_t)L_177>>((int32_t)24))));
		uint32_t L_179 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_180 = V_0;
		NullCheck(L_180);
		int32_t L_181 = 3;
		uint32_t L_182 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		V_7 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_167^(int32_t)L_171))^(int32_t)L_175))^(int32_t)L_179))^(int32_t)L_182));
	}

IL_0282:
	{
		int32_t L_183 = V_8;
		if ((((int32_t)L_183) > ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_184 = ___KW0;
		NullCheck(L_184);
		int32_t L_185 = 1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_186 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		V_0 = L_186;
		il2cpp_codegen_runtime_class_init_inline(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_187 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv0_13;
		uint32_t L_188 = V_1;
		NullCheck(L_187);
		uintptr_t L_189 = ((uintptr_t)((int32_t)((int32_t)L_188&((int32_t)255))));
		uint32_t L_190 = (L_187)->GetAt(static_cast<il2cpp_array_size_t>(L_189));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_191 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv1_14;
		uint32_t L_192 = V_7;
		NullCheck(L_191);
		uintptr_t L_193 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_192>>8))&((int32_t)255))));
		uint32_t L_194 = (L_191)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_195 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv2_15;
		uint32_t L_196 = V_3;
		NullCheck(L_195);
		uintptr_t L_197 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_196>>((int32_t)16)))&((int32_t)255))));
		uint32_t L_198 = (L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_197));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_199 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv3_16;
		uint32_t L_200 = V_2;
		NullCheck(L_199);
		uintptr_t L_201 = ((uintptr_t)((int32_t)((uint32_t)L_200>>((int32_t)24))));
		uint32_t L_202 = (L_199)->GetAt(static_cast<il2cpp_array_size_t>(L_201));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_203 = V_0;
		NullCheck(L_203);
		int32_t L_204 = 0;
		uint32_t L_205 = (L_203)->GetAt(static_cast<il2cpp_array_size_t>(L_204));
		V_4 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_190^(int32_t)L_194))^(int32_t)L_198))^(int32_t)L_202))^(int32_t)L_205));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_206 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv0_13;
		uint32_t L_207 = V_2;
		NullCheck(L_206);
		uintptr_t L_208 = ((uintptr_t)((int32_t)((int32_t)L_207&((int32_t)255))));
		uint32_t L_209 = (L_206)->GetAt(static_cast<il2cpp_array_size_t>(L_208));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_210 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv1_14;
		uint32_t L_211 = V_1;
		NullCheck(L_210);
		uintptr_t L_212 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_211>>8))&((int32_t)255))));
		uint32_t L_213 = (L_210)->GetAt(static_cast<il2cpp_array_size_t>(L_212));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_214 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv2_15;
		uint32_t L_215 = V_7;
		NullCheck(L_214);
		uintptr_t L_216 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_215>>((int32_t)16)))&((int32_t)255))));
		uint32_t L_217 = (L_214)->GetAt(static_cast<il2cpp_array_size_t>(L_216));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_218 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv3_16;
		uint32_t L_219 = V_3;
		NullCheck(L_218);
		uintptr_t L_220 = ((uintptr_t)((int32_t)((uint32_t)L_219>>((int32_t)24))));
		uint32_t L_221 = (L_218)->GetAt(static_cast<il2cpp_array_size_t>(L_220));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_222 = V_0;
		NullCheck(L_222);
		int32_t L_223 = 1;
		uint32_t L_224 = (L_222)->GetAt(static_cast<il2cpp_array_size_t>(L_223));
		V_5 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_209^(int32_t)L_213))^(int32_t)L_217))^(int32_t)L_221))^(int32_t)L_224));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_225 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv0_13;
		uint32_t L_226 = V_3;
		NullCheck(L_225);
		uintptr_t L_227 = ((uintptr_t)((int32_t)((int32_t)L_226&((int32_t)255))));
		uint32_t L_228 = (L_225)->GetAt(static_cast<il2cpp_array_size_t>(L_227));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_229 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv1_14;
		uint32_t L_230 = V_2;
		NullCheck(L_229);
		uintptr_t L_231 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_230>>8))&((int32_t)255))));
		uint32_t L_232 = (L_229)->GetAt(static_cast<il2cpp_array_size_t>(L_231));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_233 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv2_15;
		uint32_t L_234 = V_1;
		NullCheck(L_233);
		uintptr_t L_235 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_234>>((int32_t)16)))&((int32_t)255))));
		uint32_t L_236 = (L_233)->GetAt(static_cast<il2cpp_array_size_t>(L_235));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_237 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv3_16;
		uint32_t L_238 = V_7;
		NullCheck(L_237);
		uintptr_t L_239 = ((uintptr_t)((int32_t)((uint32_t)L_238>>((int32_t)24))));
		uint32_t L_240 = (L_237)->GetAt(static_cast<il2cpp_array_size_t>(L_239));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_241 = V_0;
		NullCheck(L_241);
		int32_t L_242 = 2;
		uint32_t L_243 = (L_241)->GetAt(static_cast<il2cpp_array_size_t>(L_242));
		V_6 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_228^(int32_t)L_232))^(int32_t)L_236))^(int32_t)L_240))^(int32_t)L_243));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_244 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv0_13;
		uint32_t L_245 = V_7;
		NullCheck(L_244);
		uintptr_t L_246 = ((uintptr_t)((int32_t)((int32_t)L_245&((int32_t)255))));
		uint32_t L_247 = (L_244)->GetAt(static_cast<il2cpp_array_size_t>(L_246));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_248 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv1_14;
		uint32_t L_249 = V_3;
		NullCheck(L_248);
		uintptr_t L_250 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_249>>8))&((int32_t)255))));
		uint32_t L_251 = (L_248)->GetAt(static_cast<il2cpp_array_size_t>(L_250));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_252 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv2_15;
		uint32_t L_253 = V_2;
		NullCheck(L_252);
		uintptr_t L_254 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_253>>((int32_t)16)))&((int32_t)255))));
		uint32_t L_255 = (L_252)->GetAt(static_cast<il2cpp_array_size_t>(L_254));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_256 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv3_16;
		uint32_t L_257 = V_1;
		NullCheck(L_256);
		uintptr_t L_258 = ((uintptr_t)((int32_t)((uint32_t)L_257>>((int32_t)24))));
		uint32_t L_259 = (L_256)->GetAt(static_cast<il2cpp_array_size_t>(L_258));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_260 = V_0;
		NullCheck(L_260);
		int32_t L_261 = 3;
		uint32_t L_262 = (L_260)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		V_7 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_247^(int32_t)L_251))^(int32_t)L_255))^(int32_t)L_259))^(int32_t)L_262));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_263 = ___KW0;
		NullCheck(L_263);
		int32_t L_264 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_265 = (L_263)->GetAt(static_cast<il2cpp_array_size_t>(L_264));
		V_0 = L_265;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_266 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_267 = V_4;
		NullCheck(L_266);
		uintptr_t L_268 = ((uintptr_t)((int32_t)((int32_t)L_267&((int32_t)255))));
		uint8_t L_269 = (L_266)->GetAt(static_cast<il2cpp_array_size_t>(L_268));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_270 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_271 = V_7;
		NullCheck(L_270);
		uintptr_t L_272 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_271>>8))&((int32_t)255))));
		uint8_t L_273 = (L_270)->GetAt(static_cast<il2cpp_array_size_t>(L_272));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_274 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_275 = V_6;
		NullCheck(L_274);
		uintptr_t L_276 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_275>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_277 = (L_274)->GetAt(static_cast<il2cpp_array_size_t>(L_276));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_278 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_279 = V_5;
		NullCheck(L_278);
		uintptr_t L_280 = ((uintptr_t)((int32_t)((uint32_t)L_279>>((int32_t)24))));
		uint8_t L_281 = (L_278)->GetAt(static_cast<il2cpp_array_size_t>(L_280));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_282 = V_0;
		NullCheck(L_282);
		int32_t L_283 = 0;
		uint32_t L_284 = (L_282)->GetAt(static_cast<il2cpp_array_size_t>(L_283));
		__this->___C0_19 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_269^((int32_t)((int32_t)L_273<<8))))^((int32_t)((int32_t)L_277<<((int32_t)16)))))^((int32_t)((int32_t)L_281<<((int32_t)24)))))^(int32_t)L_284));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_285 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_286 = V_5;
		NullCheck(L_285);
		uintptr_t L_287 = ((uintptr_t)((int32_t)((int32_t)L_286&((int32_t)255))));
		uint8_t L_288 = (L_285)->GetAt(static_cast<il2cpp_array_size_t>(L_287));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_289 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_290 = V_4;
		NullCheck(L_289);
		uintptr_t L_291 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_290>>8))&((int32_t)255))));
		uint8_t L_292 = (L_289)->GetAt(static_cast<il2cpp_array_size_t>(L_291));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_293 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_294 = V_7;
		NullCheck(L_293);
		uintptr_t L_295 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_294>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_296 = (L_293)->GetAt(static_cast<il2cpp_array_size_t>(L_295));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_297 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_298 = V_6;
		NullCheck(L_297);
		uintptr_t L_299 = ((uintptr_t)((int32_t)((uint32_t)L_298>>((int32_t)24))));
		uint8_t L_300 = (L_297)->GetAt(static_cast<il2cpp_array_size_t>(L_299));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_301 = V_0;
		NullCheck(L_301);
		int32_t L_302 = 1;
		uint32_t L_303 = (L_301)->GetAt(static_cast<il2cpp_array_size_t>(L_302));
		__this->___C1_20 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_288^((int32_t)((int32_t)L_292<<8))))^((int32_t)((int32_t)L_296<<((int32_t)16)))))^((int32_t)((int32_t)L_300<<((int32_t)24)))))^(int32_t)L_303));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_304 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_305 = V_6;
		NullCheck(L_304);
		uintptr_t L_306 = ((uintptr_t)((int32_t)((int32_t)L_305&((int32_t)255))));
		uint8_t L_307 = (L_304)->GetAt(static_cast<il2cpp_array_size_t>(L_306));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_308 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_309 = V_5;
		NullCheck(L_308);
		uintptr_t L_310 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_309>>8))&((int32_t)255))));
		uint8_t L_311 = (L_308)->GetAt(static_cast<il2cpp_array_size_t>(L_310));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_312 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_313 = V_4;
		NullCheck(L_312);
		uintptr_t L_314 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_313>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_315 = (L_312)->GetAt(static_cast<il2cpp_array_size_t>(L_314));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_316 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_317 = V_7;
		NullCheck(L_316);
		uintptr_t L_318 = ((uintptr_t)((int32_t)((uint32_t)L_317>>((int32_t)24))));
		uint8_t L_319 = (L_316)->GetAt(static_cast<il2cpp_array_size_t>(L_318));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_320 = V_0;
		NullCheck(L_320);
		int32_t L_321 = 2;
		uint32_t L_322 = (L_320)->GetAt(static_cast<il2cpp_array_size_t>(L_321));
		__this->___C2_21 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_307^((int32_t)((int32_t)L_311<<8))))^((int32_t)((int32_t)L_315<<((int32_t)16)))))^((int32_t)((int32_t)L_319<<((int32_t)24)))))^(int32_t)L_322));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_323 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_324 = V_7;
		NullCheck(L_323);
		uintptr_t L_325 = ((uintptr_t)((int32_t)((int32_t)L_324&((int32_t)255))));
		uint8_t L_326 = (L_323)->GetAt(static_cast<il2cpp_array_size_t>(L_325));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_327 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_328 = V_6;
		NullCheck(L_327);
		uintptr_t L_329 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_328>>8))&((int32_t)255))));
		uint8_t L_330 = (L_327)->GetAt(static_cast<il2cpp_array_size_t>(L_329));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_331 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_332 = V_5;
		NullCheck(L_331);
		uintptr_t L_333 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_332>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_334 = (L_331)->GetAt(static_cast<il2cpp_array_size_t>(L_333));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_335 = ((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_336 = V_4;
		NullCheck(L_335);
		uintptr_t L_337 = ((uintptr_t)((int32_t)((uint32_t)L_336>>((int32_t)24))));
		uint8_t L_338 = (L_335)->GetAt(static_cast<il2cpp_array_size_t>(L_337));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_339 = V_0;
		NullCheck(L_339);
		int32_t L_340 = 3;
		uint32_t L_341 = (L_339)->GetAt(static_cast<il2cpp_array_size_t>(L_340));
		__this->___C3_22 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_326^((int32_t)((int32_t)L_330<<8))))^((int32_t)((int32_t)L_334<<((int32_t)16)))))^((int32_t)((int32_t)L_338<<((int32_t)24)))))^(int32_t)L_341));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.AesFastEngine::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesFastEngine__cctor_m97B9CF84DAAAD28269CC8E86A3EB94030366DBCE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D10_69_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D11_70_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D1_60_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D2_61_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D3_62_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D4_63_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D5_64_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D6_65_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D7_66_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D8_67_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D9_68_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D1_60_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___S_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___S_6), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D2_61_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Si_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Si_7), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D3_62_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_7, L_8, NULL);
		((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___rcon_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___rcon_8), (void*)L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D4_63_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_10, L_11, NULL);
		((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T0_9 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T0_9), (void*)L_10);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = L_12;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D5_64_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_13, L_14, NULL);
		((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T1_10 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T1_10), (void*)L_13);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = L_15;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D6_65_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_16, L_17, NULL);
		((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T2_11 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T2_11), (void*)L_16);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = L_18;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_20 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D7_66_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_19, L_20, NULL);
		((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T3_12 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___T3_12), (void*)L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = L_21;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_23 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D8_67_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_22, L_23, NULL);
		((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv0_13 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv0_13), (void*)L_22);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = L_24;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_26 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D9_68_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_25, L_26, NULL);
		((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv1_14 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv1_14), (void*)L_25);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = L_27;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_29 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D10_69_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_28, L_29, NULL);
		((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv2_15 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv2_15), (void*)L_28);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = L_30;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_32 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600144fU2D11_70_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_31, L_32, NULL);
		((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv3_16 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&((AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_StaticFields*)il2cpp_codegen_static_fields_for(AesFastEngine_t5AE4B3AE821444F03773B71EB480408F63E11168_il2cpp_TypeInfo_var))->___Tinv3_16), (void*)L_31);
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
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesLightEngine::Shift(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AesLightEngine_Shift_m538356464C05F5E670A8772201F1E888FB21D100 (uint32_t ___r0, int32_t ___shift1, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___r0;
		int32_t L_1 = ___shift1;
		uint32_t L_2 = ___r0;
		int32_t L_3 = ___shift1;
		return ((int32_t)(((int32_t)((uint32_t)L_0>>((int32_t)(L_1&((int32_t)31)))))|((int32_t)((int32_t)L_2<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_3))&((int32_t)31)))))));
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesLightEngine::FFmulX(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AesLightEngine_FFmulX_m5FDB5D0E04B59CE6B68A6059D7F4569A86EF28D8 (uint32_t ___x0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___x0;
		uint32_t L_1 = ___x0;
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_0&((int32_t)2139062143)))<<1))^((int32_t)il2cpp_codegen_multiply(((int32_t)((uint32_t)((int32_t)((int32_t)L_1&((int32_t)-2139062144)))>>7)), ((int32_t)27)))));
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesLightEngine::FFmulX2(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AesLightEngine_FFmulX2_m71E49B68ED52AB2669892A8FEE3543514BB31800 (uint32_t ___x0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___x0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_0&((int32_t)1061109567)))<<2));
		uint32_t L_1 = ___x0;
		V_1 = ((int32_t)((int32_t)L_1&((int32_t)-1061109568)));
		uint32_t L_2 = V_1;
		uint32_t L_3 = V_1;
		V_1 = ((int32_t)((int32_t)L_2^((int32_t)((uint32_t)L_3>>1))));
		uint32_t L_4 = V_0;
		uint32_t L_5 = V_1;
		uint32_t L_6 = V_1;
		return ((int32_t)(((int32_t)((int32_t)L_4^((int32_t)((uint32_t)L_5>>2))))^((int32_t)((uint32_t)L_6>>5))));
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesLightEngine::Mcol(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AesLightEngine_Mcol_m583E5C6EE9BEA306524BC4B8886E3AD93A697836 (uint32_t ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = AesLightEngine_Shift_m538356464C05F5E670A8772201F1E888FB21D100(L_0, 8, NULL);
		V_0 = L_1;
		uint32_t L_2 = ___x0;
		uint32_t L_3 = V_0;
		V_1 = ((int32_t)((int32_t)L_2^(int32_t)L_3));
		uint32_t L_4 = V_1;
		uint32_t L_5;
		L_5 = AesLightEngine_Shift_m538356464C05F5E670A8772201F1E888FB21D100(L_4, ((int32_t)16), NULL);
		uint32_t L_6 = V_0;
		uint32_t L_7 = V_1;
		uint32_t L_8;
		L_8 = AesLightEngine_FFmulX_m5FDB5D0E04B59CE6B68A6059D7F4569A86EF28D8(L_7, NULL);
		return ((int32_t)(((int32_t)((int32_t)L_5^(int32_t)L_6))^(int32_t)L_8));
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesLightEngine::Inv_Mcol(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AesLightEngine_Inv_Mcol_mF826145B38FE4263C08F674FB60E21123CC63384 (uint32_t ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___x0;
		V_0 = L_0;
		uint32_t L_1 = V_0;
		uint32_t L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var);
		uint32_t L_3;
		L_3 = AesLightEngine_Shift_m538356464C05F5E670A8772201F1E888FB21D100(L_2, 8, NULL);
		V_1 = ((int32_t)((int32_t)L_1^(int32_t)L_3));
		uint32_t L_4 = V_0;
		uint32_t L_5 = V_1;
		uint32_t L_6;
		L_6 = AesLightEngine_FFmulX_m5FDB5D0E04B59CE6B68A6059D7F4569A86EF28D8(L_5, NULL);
		V_0 = ((int32_t)((int32_t)L_4^(int32_t)L_6));
		uint32_t L_7 = V_1;
		uint32_t L_8 = V_0;
		uint32_t L_9;
		L_9 = AesLightEngine_FFmulX2_m71E49B68ED52AB2669892A8FEE3543514BB31800(L_8, NULL);
		V_1 = ((int32_t)((int32_t)L_7^(int32_t)L_9));
		uint32_t L_10 = V_0;
		uint32_t L_11 = V_1;
		uint32_t L_12 = V_1;
		uint32_t L_13;
		L_13 = AesLightEngine_Shift_m538356464C05F5E670A8772201F1E888FB21D100(L_12, ((int32_t)16), NULL);
		V_0 = ((int32_t)((int32_t)L_10^((int32_t)((int32_t)L_11^(int32_t)L_13))));
		uint32_t L_14 = V_0;
		return L_14;
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesLightEngine::SubWord(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AesLightEngine_SubWord_mC11638BA9CD95867AF4BFED7523AC4BAE7BB1EEA (uint32_t ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_1 = ___x0;
		NullCheck(L_0);
		uintptr_t L_2 = ((uintptr_t)((int32_t)((int32_t)L_1&((int32_t)255))));
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_5 = ___x0;
		NullCheck(L_4);
		uintptr_t L_6 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_5>>8))&((int32_t)255))));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_9 = ___x0;
		NullCheck(L_8);
		uintptr_t L_10 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_9>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_13 = ___x0;
		NullCheck(L_12);
		uintptr_t L_14 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_13>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_3|((int32_t)((int32_t)L_7<<8))))|((int32_t)((int32_t)L_11<<((int32_t)16)))))|((int32_t)((int32_t)L_15<<((int32_t)24)))));
	}
}
// System.UInt32[][] Org.BouncyCastle.Crypto.Engines.AesLightEngine::GenerateWorkingKey(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* AesLightEngine_GenerateWorkingKey_mBBF1425BBAD6FCEAC6A2720058D72A85C020808D (AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, bool ___forEncryption1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* V_2 = NULL;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	uint32_t V_16 = 0;
	uint32_t V_17 = 0;
	int32_t V_18 = 0;
	uint32_t V_19 = 0;
	uint32_t V_20 = 0;
	uint32_t V_21 = 0;
	uint32_t V_22 = 0;
	uint32_t V_23 = 0;
	uint32_t V_24 = 0;
	uint32_t V_25 = 0;
	uint32_t V_26 = 0;
	uint32_t V_27 = 0;
	uint32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_31 = NULL;
	int32_t V_32 = 0;
	int32_t V_33 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___key0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)16))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)32))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		if (!((int32_t)(L_3&7)))
		{
			goto IL_001e;
		}
	}

IL_0013:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD4587DAEA872EB0581FD7E2ACC74AA38FE7E38A4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AesLightEngine_GenerateWorkingKey_mBBF1425BBAD6FCEAC6A2720058D72A85C020808D_RuntimeMethod_var)));
	}

IL_001e:
	{
		int32_t L_5 = V_0;
		V_1 = ((int32_t)(L_5>>2));
		int32_t L_6 = V_1;
		__this->___ROUNDS_9 = ((int32_t)il2cpp_codegen_add(L_6, 6));
		int32_t L_7 = __this->___ROUNDS_9;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_8 = (UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6*)(UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6*)SZArrayNew(UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_7, 1)));
		V_2 = L_8;
		V_3 = 0;
		goto IL_004a;
	}

IL_003d:
	{
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_9 = V_2;
		int32_t L_10 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)L_11);
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004a:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->___ROUNDS_9;
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_15 = V_1;
		V_33 = L_15;
		int32_t L_16 = V_33;
		switch (((int32_t)il2cpp_codegen_subtract(L_16, 4)))
		{
			case 0:
			{
				goto IL_0078;
			}
			case 1:
			{
				goto IL_04e5;
			}
			case 2:
			{
				goto IL_0125;
			}
			case 3:
			{
				goto IL_04e5;
			}
			case 4:
			{
				goto IL_0355;
			}
		}
	}
	{
		goto IL_04e5;
	}

IL_0078:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___key0;
		uint32_t L_18;
		L_18 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_17, 0, NULL);
		V_4 = L_18;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_19 = V_2;
		NullCheck(L_19);
		int32_t L_20 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		uint32_t L_22 = V_4;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___key0;
		uint32_t L_24;
		L_24 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_23, 4, NULL);
		V_5 = L_24;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_25 = V_2;
		NullCheck(L_25);
		int32_t L_26 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		uint32_t L_28 = V_5;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___key0;
		uint32_t L_30;
		L_30 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_29, 8, NULL);
		V_6 = L_30;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		uint32_t L_34 = V_6;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_34);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ___key0;
		uint32_t L_36;
		L_36 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_35, ((int32_t)12), NULL);
		V_7 = L_36;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_37 = V_2;
		NullCheck(L_37);
		int32_t L_38 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		uint32_t L_40 = V_7;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_40);
		V_8 = 1;
		goto IL_011a;
	}

IL_00be:
	{
		uint32_t L_41 = V_7;
		il2cpp_codegen_runtime_class_init_inline(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var);
		uint32_t L_42;
		L_42 = AesLightEngine_Shift_m538356464C05F5E670A8772201F1E888FB21D100(L_41, 8, NULL);
		uint32_t L_43;
		L_43 = AesLightEngine_SubWord_mC11638BA9CD95867AF4BFED7523AC4BAE7BB1EEA(L_42, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___rcon_8;
		int32_t L_45 = V_8;
		NullCheck(L_44);
		int32_t L_46 = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
		uint8_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_9 = ((int32_t)((int32_t)L_43^(int32_t)L_47));
		uint32_t L_48 = V_4;
		uint32_t L_49 = V_9;
		V_4 = ((int32_t)((int32_t)L_48^(int32_t)L_49));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_50 = V_2;
		int32_t L_51 = V_8;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		uint32_t L_54 = V_4;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_54);
		uint32_t L_55 = V_5;
		uint32_t L_56 = V_4;
		V_5 = ((int32_t)((int32_t)L_55^(int32_t)L_56));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_57 = V_2;
		int32_t L_58 = V_8;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		uint32_t L_61 = V_5;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_61);
		uint32_t L_62 = V_6;
		uint32_t L_63 = V_5;
		V_6 = ((int32_t)((int32_t)L_62^(int32_t)L_63));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_64 = V_2;
		int32_t L_65 = V_8;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		uint32_t L_68 = V_6;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_68);
		uint32_t L_69 = V_7;
		uint32_t L_70 = V_6;
		V_7 = ((int32_t)((int32_t)L_69^(int32_t)L_70));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_71 = V_2;
		int32_t L_72 = V_8;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		uint32_t L_75 = V_7;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_75);
		int32_t L_76 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_011a:
	{
		int32_t L_77 = V_8;
		if ((((int32_t)L_77) <= ((int32_t)((int32_t)10))))
		{
			goto IL_00be;
		}
	}
	{
		goto IL_04f0;
	}

IL_0125:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = ___key0;
		uint32_t L_79;
		L_79 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_78, 0, NULL);
		V_10 = L_79;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_80 = V_2;
		NullCheck(L_80);
		int32_t L_81 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_82 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		uint32_t L_83 = V_10;
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_83);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84 = ___key0;
		uint32_t L_85;
		L_85 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_84, 4, NULL);
		V_11 = L_85;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_86 = V_2;
		NullCheck(L_86);
		int32_t L_87 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		uint32_t L_89 = V_11;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_89);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = ___key0;
		uint32_t L_91;
		L_91 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_90, 8, NULL);
		V_12 = L_91;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_92 = V_2;
		NullCheck(L_92);
		int32_t L_93 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		uint32_t L_95 = V_12;
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_95);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = ___key0;
		uint32_t L_97;
		L_97 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_96, ((int32_t)12), NULL);
		V_13 = L_97;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_98 = V_2;
		NullCheck(L_98);
		int32_t L_99 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_100 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		uint32_t L_101 = V_13;
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_101);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_102 = ___key0;
		uint32_t L_103;
		L_103 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_102, ((int32_t)16), NULL);
		V_14 = L_103;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_104 = V_2;
		NullCheck(L_104);
		int32_t L_105 = 1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_106 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		uint32_t L_107 = V_14;
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_107);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_108 = ___key0;
		uint32_t L_109;
		L_109 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_108, ((int32_t)20), NULL);
		V_15 = L_109;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_110 = V_2;
		NullCheck(L_110);
		int32_t L_111 = 1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_112 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		uint32_t L_113 = V_15;
		NullCheck(L_112);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_113);
		V_16 = 1;
		uint32_t L_114 = V_15;
		il2cpp_codegen_runtime_class_init_inline(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var);
		uint32_t L_115;
		L_115 = AesLightEngine_Shift_m538356464C05F5E670A8772201F1E888FB21D100(L_114, 8, NULL);
		uint32_t L_116;
		L_116 = AesLightEngine_SubWord_mC11638BA9CD95867AF4BFED7523AC4BAE7BB1EEA(L_115, NULL);
		uint32_t L_117 = V_16;
		V_17 = ((int32_t)((int32_t)L_116^(int32_t)L_117));
		uint32_t L_118 = V_16;
		V_16 = ((int32_t)((int32_t)L_118<<1));
		uint32_t L_119 = V_10;
		uint32_t L_120 = V_17;
		V_10 = ((int32_t)((int32_t)L_119^(int32_t)L_120));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_121 = V_2;
		NullCheck(L_121);
		int32_t L_122 = 1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_123 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		uint32_t L_124 = V_10;
		NullCheck(L_123);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_124);
		uint32_t L_125 = V_11;
		uint32_t L_126 = V_10;
		V_11 = ((int32_t)((int32_t)L_125^(int32_t)L_126));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_127 = V_2;
		NullCheck(L_127);
		int32_t L_128 = 1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_129 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		uint32_t L_130 = V_11;
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_130);
		uint32_t L_131 = V_12;
		uint32_t L_132 = V_11;
		V_12 = ((int32_t)((int32_t)L_131^(int32_t)L_132));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_133 = V_2;
		NullCheck(L_133);
		int32_t L_134 = 2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		uint32_t L_136 = V_12;
		NullCheck(L_135);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_136);
		uint32_t L_137 = V_13;
		uint32_t L_138 = V_12;
		V_13 = ((int32_t)((int32_t)L_137^(int32_t)L_138));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_139 = V_2;
		NullCheck(L_139);
		int32_t L_140 = 2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_141 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		uint32_t L_142 = V_13;
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_142);
		uint32_t L_143 = V_14;
		uint32_t L_144 = V_13;
		V_14 = ((int32_t)((int32_t)L_143^(int32_t)L_144));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_145 = V_2;
		NullCheck(L_145);
		int32_t L_146 = 2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_147 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		uint32_t L_148 = V_14;
		NullCheck(L_147);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_148);
		uint32_t L_149 = V_15;
		uint32_t L_150 = V_14;
		V_15 = ((int32_t)((int32_t)L_149^(int32_t)L_150));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_151 = V_2;
		NullCheck(L_151);
		int32_t L_152 = 2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_153 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		uint32_t L_154 = V_15;
		NullCheck(L_153);
		(L_153)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_154);
		V_18 = 3;
		goto IL_02f9;
	}

IL_01ff:
	{
		uint32_t L_155 = V_15;
		il2cpp_codegen_runtime_class_init_inline(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var);
		uint32_t L_156;
		L_156 = AesLightEngine_Shift_m538356464C05F5E670A8772201F1E888FB21D100(L_155, 8, NULL);
		uint32_t L_157;
		L_157 = AesLightEngine_SubWord_mC11638BA9CD95867AF4BFED7523AC4BAE7BB1EEA(L_156, NULL);
		uint32_t L_158 = V_16;
		V_17 = ((int32_t)((int32_t)L_157^(int32_t)L_158));
		uint32_t L_159 = V_16;
		V_16 = ((int32_t)((int32_t)L_159<<1));
		uint32_t L_160 = V_10;
		uint32_t L_161 = V_17;
		V_10 = ((int32_t)((int32_t)L_160^(int32_t)L_161));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_162 = V_2;
		int32_t L_163 = V_18;
		NullCheck(L_162);
		int32_t L_164 = L_163;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_165 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		uint32_t L_166 = V_10;
		NullCheck(L_165);
		(L_165)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_166);
		uint32_t L_167 = V_11;
		uint32_t L_168 = V_10;
		V_11 = ((int32_t)((int32_t)L_167^(int32_t)L_168));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_169 = V_2;
		int32_t L_170 = V_18;
		NullCheck(L_169);
		int32_t L_171 = L_170;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_172 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_171));
		uint32_t L_173 = V_11;
		NullCheck(L_172);
		(L_172)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_173);
		uint32_t L_174 = V_12;
		uint32_t L_175 = V_11;
		V_12 = ((int32_t)((int32_t)L_174^(int32_t)L_175));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_176 = V_2;
		int32_t L_177 = V_18;
		NullCheck(L_176);
		int32_t L_178 = L_177;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_179 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		uint32_t L_180 = V_12;
		NullCheck(L_179);
		(L_179)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_180);
		uint32_t L_181 = V_13;
		uint32_t L_182 = V_12;
		V_13 = ((int32_t)((int32_t)L_181^(int32_t)L_182));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_183 = V_2;
		int32_t L_184 = V_18;
		NullCheck(L_183);
		int32_t L_185 = L_184;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_186 = (L_183)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		uint32_t L_187 = V_13;
		NullCheck(L_186);
		(L_186)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_187);
		uint32_t L_188 = V_14;
		uint32_t L_189 = V_13;
		V_14 = ((int32_t)((int32_t)L_188^(int32_t)L_189));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_190 = V_2;
		int32_t L_191 = V_18;
		NullCheck(L_190);
		int32_t L_192 = ((int32_t)il2cpp_codegen_add(L_191, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_193 = (L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_192));
		uint32_t L_194 = V_14;
		NullCheck(L_193);
		(L_193)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_194);
		uint32_t L_195 = V_15;
		uint32_t L_196 = V_14;
		V_15 = ((int32_t)((int32_t)L_195^(int32_t)L_196));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_197 = V_2;
		int32_t L_198 = V_18;
		NullCheck(L_197);
		int32_t L_199 = ((int32_t)il2cpp_codegen_add(L_198, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_200 = (L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		uint32_t L_201 = V_15;
		NullCheck(L_200);
		(L_200)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_201);
		uint32_t L_202 = V_15;
		uint32_t L_203;
		L_203 = AesLightEngine_Shift_m538356464C05F5E670A8772201F1E888FB21D100(L_202, 8, NULL);
		uint32_t L_204;
		L_204 = AesLightEngine_SubWord_mC11638BA9CD95867AF4BFED7523AC4BAE7BB1EEA(L_203, NULL);
		uint32_t L_205 = V_16;
		V_17 = ((int32_t)((int32_t)L_204^(int32_t)L_205));
		uint32_t L_206 = V_16;
		V_16 = ((int32_t)((int32_t)L_206<<1));
		uint32_t L_207 = V_10;
		uint32_t L_208 = V_17;
		V_10 = ((int32_t)((int32_t)L_207^(int32_t)L_208));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_209 = V_2;
		int32_t L_210 = V_18;
		NullCheck(L_209);
		int32_t L_211 = ((int32_t)il2cpp_codegen_add(L_210, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_212 = (L_209)->GetAt(static_cast<il2cpp_array_size_t>(L_211));
		uint32_t L_213 = V_10;
		NullCheck(L_212);
		(L_212)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_213);
		uint32_t L_214 = V_11;
		uint32_t L_215 = V_10;
		V_11 = ((int32_t)((int32_t)L_214^(int32_t)L_215));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_216 = V_2;
		int32_t L_217 = V_18;
		NullCheck(L_216);
		int32_t L_218 = ((int32_t)il2cpp_codegen_add(L_217, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_219 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		uint32_t L_220 = V_11;
		NullCheck(L_219);
		(L_219)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_220);
		uint32_t L_221 = V_12;
		uint32_t L_222 = V_11;
		V_12 = ((int32_t)((int32_t)L_221^(int32_t)L_222));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_223 = V_2;
		int32_t L_224 = V_18;
		NullCheck(L_223);
		int32_t L_225 = ((int32_t)il2cpp_codegen_add(L_224, 2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_226 = (L_223)->GetAt(static_cast<il2cpp_array_size_t>(L_225));
		uint32_t L_227 = V_12;
		NullCheck(L_226);
		(L_226)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_227);
		uint32_t L_228 = V_13;
		uint32_t L_229 = V_12;
		V_13 = ((int32_t)((int32_t)L_228^(int32_t)L_229));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_230 = V_2;
		int32_t L_231 = V_18;
		NullCheck(L_230);
		int32_t L_232 = ((int32_t)il2cpp_codegen_add(L_231, 2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_233 = (L_230)->GetAt(static_cast<il2cpp_array_size_t>(L_232));
		uint32_t L_234 = V_13;
		NullCheck(L_233);
		(L_233)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_234);
		uint32_t L_235 = V_14;
		uint32_t L_236 = V_13;
		V_14 = ((int32_t)((int32_t)L_235^(int32_t)L_236));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_237 = V_2;
		int32_t L_238 = V_18;
		NullCheck(L_237);
		int32_t L_239 = ((int32_t)il2cpp_codegen_add(L_238, 2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_240 = (L_237)->GetAt(static_cast<il2cpp_array_size_t>(L_239));
		uint32_t L_241 = V_14;
		NullCheck(L_240);
		(L_240)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_241);
		uint32_t L_242 = V_15;
		uint32_t L_243 = V_14;
		V_15 = ((int32_t)((int32_t)L_242^(int32_t)L_243));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_244 = V_2;
		int32_t L_245 = V_18;
		NullCheck(L_244);
		int32_t L_246 = ((int32_t)il2cpp_codegen_add(L_245, 2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_247 = (L_244)->GetAt(static_cast<il2cpp_array_size_t>(L_246));
		uint32_t L_248 = V_15;
		NullCheck(L_247);
		(L_247)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_248);
		int32_t L_249 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_249, 3));
	}

IL_02f9:
	{
		int32_t L_250 = V_18;
		if ((((int32_t)L_250) < ((int32_t)((int32_t)12))))
		{
			goto IL_01ff;
		}
	}
	{
		uint32_t L_251 = V_15;
		il2cpp_codegen_runtime_class_init_inline(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var);
		uint32_t L_252;
		L_252 = AesLightEngine_Shift_m538356464C05F5E670A8772201F1E888FB21D100(L_251, 8, NULL);
		uint32_t L_253;
		L_253 = AesLightEngine_SubWord_mC11638BA9CD95867AF4BFED7523AC4BAE7BB1EEA(L_252, NULL);
		uint32_t L_254 = V_16;
		V_17 = ((int32_t)((int32_t)L_253^(int32_t)L_254));
		uint32_t L_255 = V_10;
		uint32_t L_256 = V_17;
		V_10 = ((int32_t)((int32_t)L_255^(int32_t)L_256));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_257 = V_2;
		NullCheck(L_257);
		int32_t L_258 = ((int32_t)12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_259 = (L_257)->GetAt(static_cast<il2cpp_array_size_t>(L_258));
		uint32_t L_260 = V_10;
		NullCheck(L_259);
		(L_259)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_260);
		uint32_t L_261 = V_11;
		uint32_t L_262 = V_10;
		V_11 = ((int32_t)((int32_t)L_261^(int32_t)L_262));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_263 = V_2;
		NullCheck(L_263);
		int32_t L_264 = ((int32_t)12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_265 = (L_263)->GetAt(static_cast<il2cpp_array_size_t>(L_264));
		uint32_t L_266 = V_11;
		NullCheck(L_265);
		(L_265)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_266);
		uint32_t L_267 = V_12;
		uint32_t L_268 = V_11;
		V_12 = ((int32_t)((int32_t)L_267^(int32_t)L_268));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_269 = V_2;
		NullCheck(L_269);
		int32_t L_270 = ((int32_t)12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_271 = (L_269)->GetAt(static_cast<il2cpp_array_size_t>(L_270));
		uint32_t L_272 = V_12;
		NullCheck(L_271);
		(L_271)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_272);
		uint32_t L_273 = V_13;
		uint32_t L_274 = V_12;
		V_13 = ((int32_t)((int32_t)L_273^(int32_t)L_274));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_275 = V_2;
		NullCheck(L_275);
		int32_t L_276 = ((int32_t)12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_277 = (L_275)->GetAt(static_cast<il2cpp_array_size_t>(L_276));
		uint32_t L_278 = V_13;
		NullCheck(L_277);
		(L_277)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_278);
		goto IL_04f0;
	}

IL_0355:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_279 = ___key0;
		uint32_t L_280;
		L_280 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_279, 0, NULL);
		V_19 = L_280;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_281 = V_2;
		NullCheck(L_281);
		int32_t L_282 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_283 = (L_281)->GetAt(static_cast<il2cpp_array_size_t>(L_282));
		uint32_t L_284 = V_19;
		NullCheck(L_283);
		(L_283)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_284);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_285 = ___key0;
		uint32_t L_286;
		L_286 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_285, 4, NULL);
		V_20 = L_286;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_287 = V_2;
		NullCheck(L_287);
		int32_t L_288 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_289 = (L_287)->GetAt(static_cast<il2cpp_array_size_t>(L_288));
		uint32_t L_290 = V_20;
		NullCheck(L_289);
		(L_289)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_290);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_291 = ___key0;
		uint32_t L_292;
		L_292 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_291, 8, NULL);
		V_21 = L_292;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_293 = V_2;
		NullCheck(L_293);
		int32_t L_294 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_295 = (L_293)->GetAt(static_cast<il2cpp_array_size_t>(L_294));
		uint32_t L_296 = V_21;
		NullCheck(L_295);
		(L_295)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_296);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_297 = ___key0;
		uint32_t L_298;
		L_298 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_297, ((int32_t)12), NULL);
		V_22 = L_298;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_299 = V_2;
		NullCheck(L_299);
		int32_t L_300 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_301 = (L_299)->GetAt(static_cast<il2cpp_array_size_t>(L_300));
		uint32_t L_302 = V_22;
		NullCheck(L_301);
		(L_301)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_302);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_303 = ___key0;
		uint32_t L_304;
		L_304 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_303, ((int32_t)16), NULL);
		V_23 = L_304;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_305 = V_2;
		NullCheck(L_305);
		int32_t L_306 = 1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_307 = (L_305)->GetAt(static_cast<il2cpp_array_size_t>(L_306));
		uint32_t L_308 = V_23;
		NullCheck(L_307);
		(L_307)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_308);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_309 = ___key0;
		uint32_t L_310;
		L_310 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_309, ((int32_t)20), NULL);
		V_24 = L_310;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_311 = V_2;
		NullCheck(L_311);
		int32_t L_312 = 1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_313 = (L_311)->GetAt(static_cast<il2cpp_array_size_t>(L_312));
		uint32_t L_314 = V_24;
		NullCheck(L_313);
		(L_313)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_314);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_315 = ___key0;
		uint32_t L_316;
		L_316 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_315, ((int32_t)24), NULL);
		V_25 = L_316;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_317 = V_2;
		NullCheck(L_317);
		int32_t L_318 = 1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_319 = (L_317)->GetAt(static_cast<il2cpp_array_size_t>(L_318));
		uint32_t L_320 = V_25;
		NullCheck(L_319);
		(L_319)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_320);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_321 = ___key0;
		uint32_t L_322;
		L_322 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_321, ((int32_t)28), NULL);
		V_26 = L_322;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_323 = V_2;
		NullCheck(L_323);
		int32_t L_324 = 1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_325 = (L_323)->GetAt(static_cast<il2cpp_array_size_t>(L_324));
		uint32_t L_326 = V_26;
		NullCheck(L_325);
		(L_325)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_326);
		V_28 = 1;
		V_29 = 2;
		goto IL_048c;
	}

IL_03e5:
	{
		uint32_t L_327 = V_26;
		il2cpp_codegen_runtime_class_init_inline(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var);
		uint32_t L_328;
		L_328 = AesLightEngine_Shift_m538356464C05F5E670A8772201F1E888FB21D100(L_327, 8, NULL);
		uint32_t L_329;
		L_329 = AesLightEngine_SubWord_mC11638BA9CD95867AF4BFED7523AC4BAE7BB1EEA(L_328, NULL);
		uint32_t L_330 = V_28;
		V_27 = ((int32_t)((int32_t)L_329^(int32_t)L_330));
		uint32_t L_331 = V_28;
		V_28 = ((int32_t)((int32_t)L_331<<1));
		uint32_t L_332 = V_19;
		uint32_t L_333 = V_27;
		V_19 = ((int32_t)((int32_t)L_332^(int32_t)L_333));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_334 = V_2;
		int32_t L_335 = V_29;
		NullCheck(L_334);
		int32_t L_336 = L_335;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_337 = (L_334)->GetAt(static_cast<il2cpp_array_size_t>(L_336));
		uint32_t L_338 = V_19;
		NullCheck(L_337);
		(L_337)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_338);
		uint32_t L_339 = V_20;
		uint32_t L_340 = V_19;
		V_20 = ((int32_t)((int32_t)L_339^(int32_t)L_340));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_341 = V_2;
		int32_t L_342 = V_29;
		NullCheck(L_341);
		int32_t L_343 = L_342;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_344 = (L_341)->GetAt(static_cast<il2cpp_array_size_t>(L_343));
		uint32_t L_345 = V_20;
		NullCheck(L_344);
		(L_344)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_345);
		uint32_t L_346 = V_21;
		uint32_t L_347 = V_20;
		V_21 = ((int32_t)((int32_t)L_346^(int32_t)L_347));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_348 = V_2;
		int32_t L_349 = V_29;
		NullCheck(L_348);
		int32_t L_350 = L_349;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_351 = (L_348)->GetAt(static_cast<il2cpp_array_size_t>(L_350));
		uint32_t L_352 = V_21;
		NullCheck(L_351);
		(L_351)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_352);
		uint32_t L_353 = V_22;
		uint32_t L_354 = V_21;
		V_22 = ((int32_t)((int32_t)L_353^(int32_t)L_354));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_355 = V_2;
		int32_t L_356 = V_29;
		NullCheck(L_355);
		int32_t L_357 = L_356;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_358 = (L_355)->GetAt(static_cast<il2cpp_array_size_t>(L_357));
		uint32_t L_359 = V_22;
		NullCheck(L_358);
		(L_358)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_359);
		uint32_t L_360 = V_22;
		uint32_t L_361;
		L_361 = AesLightEngine_SubWord_mC11638BA9CD95867AF4BFED7523AC4BAE7BB1EEA(L_360, NULL);
		V_27 = L_361;
		uint32_t L_362 = V_23;
		uint32_t L_363 = V_27;
		V_23 = ((int32_t)((int32_t)L_362^(int32_t)L_363));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_364 = V_2;
		int32_t L_365 = V_29;
		NullCheck(L_364);
		int32_t L_366 = ((int32_t)il2cpp_codegen_add(L_365, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_367 = (L_364)->GetAt(static_cast<il2cpp_array_size_t>(L_366));
		uint32_t L_368 = V_23;
		NullCheck(L_367);
		(L_367)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_368);
		uint32_t L_369 = V_24;
		uint32_t L_370 = V_23;
		V_24 = ((int32_t)((int32_t)L_369^(int32_t)L_370));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_371 = V_2;
		int32_t L_372 = V_29;
		NullCheck(L_371);
		int32_t L_373 = ((int32_t)il2cpp_codegen_add(L_372, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_374 = (L_371)->GetAt(static_cast<il2cpp_array_size_t>(L_373));
		uint32_t L_375 = V_24;
		NullCheck(L_374);
		(L_374)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_375);
		uint32_t L_376 = V_25;
		uint32_t L_377 = V_24;
		V_25 = ((int32_t)((int32_t)L_376^(int32_t)L_377));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_378 = V_2;
		int32_t L_379 = V_29;
		NullCheck(L_378);
		int32_t L_380 = ((int32_t)il2cpp_codegen_add(L_379, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_381 = (L_378)->GetAt(static_cast<il2cpp_array_size_t>(L_380));
		uint32_t L_382 = V_25;
		NullCheck(L_381);
		(L_381)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_382);
		uint32_t L_383 = V_26;
		uint32_t L_384 = V_25;
		V_26 = ((int32_t)((int32_t)L_383^(int32_t)L_384));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_385 = V_2;
		int32_t L_386 = V_29;
		NullCheck(L_385);
		int32_t L_387 = ((int32_t)il2cpp_codegen_add(L_386, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_388 = (L_385)->GetAt(static_cast<il2cpp_array_size_t>(L_387));
		uint32_t L_389 = V_26;
		NullCheck(L_388);
		(L_388)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_389);
		int32_t L_390 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add(L_390, 2));
	}

IL_048c:
	{
		int32_t L_391 = V_29;
		if ((((int32_t)L_391) < ((int32_t)((int32_t)14))))
		{
			goto IL_03e5;
		}
	}
	{
		uint32_t L_392 = V_26;
		il2cpp_codegen_runtime_class_init_inline(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var);
		uint32_t L_393;
		L_393 = AesLightEngine_Shift_m538356464C05F5E670A8772201F1E888FB21D100(L_392, 8, NULL);
		uint32_t L_394;
		L_394 = AesLightEngine_SubWord_mC11638BA9CD95867AF4BFED7523AC4BAE7BB1EEA(L_393, NULL);
		uint32_t L_395 = V_28;
		V_27 = ((int32_t)((int32_t)L_394^(int32_t)L_395));
		uint32_t L_396 = V_19;
		uint32_t L_397 = V_27;
		V_19 = ((int32_t)((int32_t)L_396^(int32_t)L_397));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_398 = V_2;
		NullCheck(L_398);
		int32_t L_399 = ((int32_t)14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_400 = (L_398)->GetAt(static_cast<il2cpp_array_size_t>(L_399));
		uint32_t L_401 = V_19;
		NullCheck(L_400);
		(L_400)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_401);
		uint32_t L_402 = V_20;
		uint32_t L_403 = V_19;
		V_20 = ((int32_t)((int32_t)L_402^(int32_t)L_403));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_404 = V_2;
		NullCheck(L_404);
		int32_t L_405 = ((int32_t)14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_406 = (L_404)->GetAt(static_cast<il2cpp_array_size_t>(L_405));
		uint32_t L_407 = V_20;
		NullCheck(L_406);
		(L_406)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_407);
		uint32_t L_408 = V_21;
		uint32_t L_409 = V_20;
		V_21 = ((int32_t)((int32_t)L_408^(int32_t)L_409));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_410 = V_2;
		NullCheck(L_410);
		int32_t L_411 = ((int32_t)14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_412 = (L_410)->GetAt(static_cast<il2cpp_array_size_t>(L_411));
		uint32_t L_413 = V_21;
		NullCheck(L_412);
		(L_412)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_413);
		uint32_t L_414 = V_22;
		uint32_t L_415 = V_21;
		V_22 = ((int32_t)((int32_t)L_414^(int32_t)L_415));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_416 = V_2;
		NullCheck(L_416);
		int32_t L_417 = ((int32_t)14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_418 = (L_416)->GetAt(static_cast<il2cpp_array_size_t>(L_417));
		uint32_t L_419 = V_22;
		NullCheck(L_418);
		(L_418)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_419);
		goto IL_04f0;
	}

IL_04e5:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_420 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_420);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_420, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7DBDBA421AC8484BAFE52A917ED124C00D46DC9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_420, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AesLightEngine_GenerateWorkingKey_mBBF1425BBAD6FCEAC6A2720058D72A85C020808D_RuntimeMethod_var)));
	}

IL_04f0:
	{
		bool L_421 = ___forEncryption1;
		if (L_421)
		{
			goto IL_052d;
		}
	}
	{
		V_30 = 1;
		goto IL_0523;
	}

IL_04f8:
	{
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_422 = V_2;
		int32_t L_423 = V_30;
		NullCheck(L_422);
		int32_t L_424 = L_423;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_425 = (L_422)->GetAt(static_cast<il2cpp_array_size_t>(L_424));
		V_31 = L_425;
		V_32 = 0;
		goto IL_0518;
	}

IL_0503:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_426 = V_31;
		int32_t L_427 = V_32;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_428 = V_31;
		int32_t L_429 = V_32;
		NullCheck(L_428);
		int32_t L_430 = L_429;
		uint32_t L_431 = (L_428)->GetAt(static_cast<il2cpp_array_size_t>(L_430));
		il2cpp_codegen_runtime_class_init_inline(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var);
		uint32_t L_432;
		L_432 = AesLightEngine_Inv_Mcol_mF826145B38FE4263C08F674FB60E21123CC63384(L_431, NULL);
		NullCheck(L_426);
		(L_426)->SetAt(static_cast<il2cpp_array_size_t>(L_427), (uint32_t)L_432);
		int32_t L_433 = V_32;
		V_32 = ((int32_t)il2cpp_codegen_add(L_433, 1));
	}

IL_0518:
	{
		int32_t L_434 = V_32;
		if ((((int32_t)L_434) < ((int32_t)4)))
		{
			goto IL_0503;
		}
	}
	{
		int32_t L_435 = V_30;
		V_30 = ((int32_t)il2cpp_codegen_add(L_435, 1));
	}

IL_0523:
	{
		int32_t L_436 = V_30;
		int32_t L_437 = __this->___ROUNDS_9;
		if ((((int32_t)L_436) < ((int32_t)L_437)))
		{
			goto IL_04f8;
		}
	}

IL_052d:
	{
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_438 = V_2;
		return L_438;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.AesLightEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesLightEngine__ctor_m4C48D8C1E960A2328EEF5A5286D9E62CFAF0DE76 (AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.AesLightEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesLightEngine_Init_m3E51DEF584BBA33FA9ADFA3ACA4E16177B0FC511 (AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___parameters1;
		V_0 = ((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_0, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var));
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_2 = ___parameters1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var)));
		String_t* L_3;
		L_3 = Platform_GetTypeName_m9B04679202710BC6A96803803882849D0C5001FB(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCED4ECC4AE35D4EFF2458EF43A779BB25724C998)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AesLightEngine_Init_m3E51DEF584BBA33FA9ADFA3ACA4E16177B0FC511_RuntimeMethod_var)));
	}

IL_0020:
	{
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_6 = V_0;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(L_6, NULL);
		bool L_8 = ___forEncryption0;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_9;
		L_9 = AesLightEngine_GenerateWorkingKey_mBBF1425BBAD6FCEAC6A2720058D72A85C020808D(__this, L_7, L_8, NULL);
		__this->___WorkingKey_10 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WorkingKey_10), (void*)L_9);
		bool L_10 = ___forEncryption0;
		__this->___forEncryption_15 = L_10;
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Engines.AesLightEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AesLightEngine_get_AlgorithmName_m25359883AE7F4ED64BE9946F2BE35BBBFBAA31DB (AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral423ACA01AC170A50869ECDEF572CD96995576718);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral423ACA01AC170A50869ECDEF572CD96995576718;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Engines.AesLightEngine::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AesLightEngine_get_IsPartialBlockOkay_m6A3266925F098DBD78E743BDB20445B6632B64FD (AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.AesLightEngine::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AesLightEngine_GetBlockSize_m0CA99528110748C367C9F8CDD956CC0A1C32374F (AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)16);
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.AesLightEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AesLightEngine_ProcessBlock_mB1A8A566F88C9516025E1F8D0D3325E7B17A68C9 (AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_0 = __this->___WorkingKey_10;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1557AFFE8BBF6FF1C05CD38FC1CAB933607E374C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AesLightEngine_ProcessBlock_mB1A8A566F88C9516025E1F8D0D3325E7B17A68C9_RuntimeMethod_var)));
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		int32_t L_3 = ___inOff1;
		Check_DataLength_m4BEA4E45985CDB8967A7C3C71799B9036DDCC991(L_2, L_3, ((int32_t)16), _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output2;
		int32_t L_5 = ___outOff3;
		Check_OutputLength_mFBD480CE544E8B2C4EFAD3A12D1E105DC36FFA68(L_4, L_5, ((int32_t)16), _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___input0;
		int32_t L_7 = ___inOff1;
		AesLightEngine_UnPackBlock_m46A47463D5E4084028600BA7383D8997E10FD79D(__this, L_6, L_7, NULL);
		bool L_8 = __this->___forEncryption_15;
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_9 = __this->___WorkingKey_10;
		AesLightEngine_EncryptBlock_mCC0A551495203B8764F92D8A1C6BB4D573A526E0(__this, L_9, NULL);
		goto IL_005a;
	}

IL_004e:
	{
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_10 = __this->___WorkingKey_10;
		AesLightEngine_DecryptBlock_m59D3EABE8F3BE7DCF2C0F28E87A4C6C37FA1480D(__this, L_10, NULL);
	}

IL_005a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___output2;
		int32_t L_12 = ___outOff3;
		AesLightEngine_PackBlock_mECFCA89B4C0F002E4CD683581CCDB3979781215A(__this, L_11, L_12, NULL);
		return ((int32_t)16);
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.AesLightEngine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesLightEngine_Reset_mBECAB0AC7CD7BA3854A0DFB325FD55972E87733E (AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.AesLightEngine::UnPackBlock(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesLightEngine_UnPackBlock_m46A47463D5E4084028600BA7383D8997E10FD79D (AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___off1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		int32_t L_1 = ___off1;
		uint32_t L_2;
		L_2 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_0, L_1, NULL);
		__this->___C0_11 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bytes0;
		int32_t L_4 = ___off1;
		uint32_t L_5;
		L_5 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		__this->___C1_12 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___bytes0;
		int32_t L_7 = ___off1;
		uint32_t L_8;
		L_8 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_6, ((int32_t)il2cpp_codegen_add(L_7, 8)), NULL);
		__this->___C2_13 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___bytes0;
		int32_t L_10 = ___off1;
		uint32_t L_11;
		L_11 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_9, ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)12))), NULL);
		__this->___C3_14 = L_11;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.AesLightEngine::PackBlock(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesLightEngine_PackBlock_mECFCA89B4C0F002E4CD683581CCDB3979781215A (AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___off1, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___C0_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bytes0;
		int32_t L_2 = ___off1;
		Pack_UInt32_To_LE_m2499D0485ABBAB63E653F26941EE0AFA53508D18(L_0, L_1, L_2, NULL);
		uint32_t L_3 = __this->___C1_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___bytes0;
		int32_t L_5 = ___off1;
		Pack_UInt32_To_LE_m2499D0485ABBAB63E653F26941EE0AFA53508D18(L_3, L_4, ((int32_t)il2cpp_codegen_add(L_5, 4)), NULL);
		uint32_t L_6 = __this->___C2_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___bytes0;
		int32_t L_8 = ___off1;
		Pack_UInt32_To_LE_m2499D0485ABBAB63E653F26941EE0AFA53508D18(L_6, L_7, ((int32_t)il2cpp_codegen_add(L_8, 8)), NULL);
		uint32_t L_9 = __this->___C3_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___bytes0;
		int32_t L_11 = ___off1;
		Pack_UInt32_To_LE_m2499D0485ABBAB63E653F26941EE0AFA53508D18(L_9, L_10, ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)12))), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.AesLightEngine::EncryptBlock(System.UInt32[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesLightEngine_EncryptBlock_mCC0A551495203B8764F92D8A1C6BB4D573A526E0 (AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6* __this, UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* ___KW0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_0 = ___KW0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		uint32_t L_3 = __this->___C0_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = ((int32_t)((int32_t)L_3^(int32_t)L_6));
		uint32_t L_7 = __this->___C1_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 1;
		uint32_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = ((int32_t)((int32_t)L_7^(int32_t)L_10));
		uint32_t L_11 = __this->___C2_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 2;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_3 = ((int32_t)((int32_t)L_11^(int32_t)L_14));
		uint32_t L_15 = __this->___C3_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = 3;
		uint32_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_7 = ((int32_t)((int32_t)L_15^(int32_t)L_18));
		V_8 = 1;
		goto IL_030e;
	}

IL_0039:
	{
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_19 = ___KW0;
		int32_t L_20 = V_8;
		int32_t L_21 = L_20;
		V_8 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		NullCheck(L_19);
		int32_t L_22 = L_21;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_0 = L_23;
		il2cpp_codegen_runtime_class_init_inline(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_25 = V_1;
		NullCheck(L_24);
		uintptr_t L_26 = ((uintptr_t)((int32_t)((int32_t)L_25&((int32_t)255))));
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_29 = V_2;
		NullCheck(L_28);
		uintptr_t L_30 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_29>>8))&((int32_t)255))));
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_33 = V_3;
		NullCheck(L_32);
		uintptr_t L_34 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_33>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_37 = V_7;
		NullCheck(L_36);
		uintptr_t L_38 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_37>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		uint32_t L_40;
		L_40 = AesLightEngine_Mcol_m583E5C6EE9BEA306524BC4B8886E3AD93A697836(((int32_t)(((int32_t)(((int32_t)((int32_t)L_27^((int32_t)((int32_t)L_31<<8))))^((int32_t)((int32_t)L_35<<((int32_t)16)))))^((int32_t)((int32_t)L_39<<((int32_t)24))))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = V_0;
		NullCheck(L_41);
		int32_t L_42 = 0;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_4 = ((int32_t)((int32_t)L_40^(int32_t)L_43));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_45 = V_2;
		NullCheck(L_44);
		uintptr_t L_46 = ((uintptr_t)((int32_t)((int32_t)L_45&((int32_t)255))));
		uint8_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_49 = V_3;
		NullCheck(L_48);
		uintptr_t L_50 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_49>>8))&((int32_t)255))));
		uint8_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_53 = V_7;
		NullCheck(L_52);
		uintptr_t L_54 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_53>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_57 = V_1;
		NullCheck(L_56);
		uintptr_t L_58 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_57>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		uint32_t L_60;
		L_60 = AesLightEngine_Mcol_m583E5C6EE9BEA306524BC4B8886E3AD93A697836(((int32_t)(((int32_t)(((int32_t)((int32_t)L_47^((int32_t)((int32_t)L_51<<8))))^((int32_t)((int32_t)L_55<<((int32_t)16)))))^((int32_t)((int32_t)L_59<<((int32_t)24))))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = V_0;
		NullCheck(L_61);
		int32_t L_62 = 1;
		uint32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_5 = ((int32_t)((int32_t)L_60^(int32_t)L_63));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_65 = V_3;
		NullCheck(L_64);
		uintptr_t L_66 = ((uintptr_t)((int32_t)((int32_t)L_65&((int32_t)255))));
		uint8_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_69 = V_7;
		NullCheck(L_68);
		uintptr_t L_70 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_69>>8))&((int32_t)255))));
		uint8_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_73 = V_1;
		NullCheck(L_72);
		uintptr_t L_74 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_73>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_77 = V_2;
		NullCheck(L_76);
		uintptr_t L_78 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_77>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		uint32_t L_80;
		L_80 = AesLightEngine_Mcol_m583E5C6EE9BEA306524BC4B8886E3AD93A697836(((int32_t)(((int32_t)(((int32_t)((int32_t)L_67^((int32_t)((int32_t)L_71<<8))))^((int32_t)((int32_t)L_75<<((int32_t)16)))))^((int32_t)((int32_t)L_79<<((int32_t)24))))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = V_0;
		NullCheck(L_81);
		int32_t L_82 = 2;
		uint32_t L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		V_6 = ((int32_t)((int32_t)L_80^(int32_t)L_83));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_85 = V_7;
		NullCheck(L_84);
		uintptr_t L_86 = ((uintptr_t)((int32_t)((int32_t)L_85&((int32_t)255))));
		uint8_t L_87 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_89 = V_1;
		NullCheck(L_88);
		uintptr_t L_90 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_89>>8))&((int32_t)255))));
		uint8_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_93 = V_2;
		NullCheck(L_92);
		uintptr_t L_94 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_93>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_97 = V_3;
		NullCheck(L_96);
		uintptr_t L_98 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_97>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		uint32_t L_100;
		L_100 = AesLightEngine_Mcol_m583E5C6EE9BEA306524BC4B8886E3AD93A697836(((int32_t)(((int32_t)(((int32_t)((int32_t)L_87^((int32_t)((int32_t)L_91<<8))))^((int32_t)((int32_t)L_95<<((int32_t)16)))))^((int32_t)((int32_t)L_99<<((int32_t)24))))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_101 = V_0;
		NullCheck(L_101);
		int32_t L_102 = 3;
		uint32_t L_103 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		V_7 = ((int32_t)((int32_t)L_100^(int32_t)L_103));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_104 = ___KW0;
		int32_t L_105 = V_8;
		int32_t L_106 = L_105;
		V_8 = ((int32_t)il2cpp_codegen_add(L_106, 1));
		NullCheck(L_104);
		int32_t L_107 = L_106;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		V_0 = L_108;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_109 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_110 = V_4;
		NullCheck(L_109);
		uintptr_t L_111 = ((uintptr_t)((int32_t)((int32_t)L_110&((int32_t)255))));
		uint8_t L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_113 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_114 = V_5;
		NullCheck(L_113);
		uintptr_t L_115 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_114>>8))&((int32_t)255))));
		uint8_t L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_117 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_118 = V_6;
		NullCheck(L_117);
		uintptr_t L_119 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_118>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_121 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_122 = V_7;
		NullCheck(L_121);
		uintptr_t L_123 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_122>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		uint32_t L_125;
		L_125 = AesLightEngine_Mcol_m583E5C6EE9BEA306524BC4B8886E3AD93A697836(((int32_t)(((int32_t)(((int32_t)((int32_t)L_112^((int32_t)((int32_t)L_116<<8))))^((int32_t)((int32_t)L_120<<((int32_t)16)))))^((int32_t)((int32_t)L_124<<((int32_t)24))))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_126 = V_0;
		NullCheck(L_126);
		int32_t L_127 = 0;
		uint32_t L_128 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		V_1 = ((int32_t)((int32_t)L_125^(int32_t)L_128));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_129 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_130 = V_5;
		NullCheck(L_129);
		uintptr_t L_131 = ((uintptr_t)((int32_t)((int32_t)L_130&((int32_t)255))));
		uint8_t L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_133 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_134 = V_6;
		NullCheck(L_133);
		uintptr_t L_135 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_134>>8))&((int32_t)255))));
		uint8_t L_136 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_137 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_138 = V_7;
		NullCheck(L_137);
		uintptr_t L_139 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_138>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_140 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_141 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_142 = V_4;
		NullCheck(L_141);
		uintptr_t L_143 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_142>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_144 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		uint32_t L_145;
		L_145 = AesLightEngine_Mcol_m583E5C6EE9BEA306524BC4B8886E3AD93A697836(((int32_t)(((int32_t)(((int32_t)((int32_t)L_132^((int32_t)((int32_t)L_136<<8))))^((int32_t)((int32_t)L_140<<((int32_t)16)))))^((int32_t)((int32_t)L_144<<((int32_t)24))))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_146 = V_0;
		NullCheck(L_146);
		int32_t L_147 = 1;
		uint32_t L_148 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		V_2 = ((int32_t)((int32_t)L_145^(int32_t)L_148));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_149 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_150 = V_6;
		NullCheck(L_149);
		uintptr_t L_151 = ((uintptr_t)((int32_t)((int32_t)L_150&((int32_t)255))));
		uint8_t L_152 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_153 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_154 = V_7;
		NullCheck(L_153);
		uintptr_t L_155 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_154>>8))&((int32_t)255))));
		uint8_t L_156 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_155));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_157 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_158 = V_4;
		NullCheck(L_157);
		uintptr_t L_159 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_158>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_160 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_161 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_162 = V_5;
		NullCheck(L_161);
		uintptr_t L_163 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_162>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_164 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		uint32_t L_165;
		L_165 = AesLightEngine_Mcol_m583E5C6EE9BEA306524BC4B8886E3AD93A697836(((int32_t)(((int32_t)(((int32_t)((int32_t)L_152^((int32_t)((int32_t)L_156<<8))))^((int32_t)((int32_t)L_160<<((int32_t)16)))))^((int32_t)((int32_t)L_164<<((int32_t)24))))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_166 = V_0;
		NullCheck(L_166);
		int32_t L_167 = 2;
		uint32_t L_168 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		V_3 = ((int32_t)((int32_t)L_165^(int32_t)L_168));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_169 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_170 = V_7;
		NullCheck(L_169);
		uintptr_t L_171 = ((uintptr_t)((int32_t)((int32_t)L_170&((int32_t)255))));
		uint8_t L_172 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_171));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_173 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_174 = V_4;
		NullCheck(L_173);
		uintptr_t L_175 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_174>>8))&((int32_t)255))));
		uint8_t L_176 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_177 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_178 = V_5;
		NullCheck(L_177);
		uintptr_t L_179 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_178>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_180 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_181 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_182 = V_6;
		NullCheck(L_181);
		uintptr_t L_183 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_182>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_184 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_183));
		uint32_t L_185;
		L_185 = AesLightEngine_Mcol_m583E5C6EE9BEA306524BC4B8886E3AD93A697836(((int32_t)(((int32_t)(((int32_t)((int32_t)L_172^((int32_t)((int32_t)L_176<<8))))^((int32_t)((int32_t)L_180<<((int32_t)16)))))^((int32_t)((int32_t)L_184<<((int32_t)24))))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_186 = V_0;
		NullCheck(L_186);
		int32_t L_187 = 3;
		uint32_t L_188 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_187));
		V_7 = ((int32_t)((int32_t)L_185^(int32_t)L_188));
	}

IL_030e:
	{
		int32_t L_189 = V_8;
		int32_t L_190 = __this->___ROUNDS_9;
		if ((((int32_t)L_189) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_190, 1)))))
		{
			goto IL_0039;
		}
	}
	{
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_191 = ___KW0;
		int32_t L_192 = V_8;
		int32_t L_193 = L_192;
		V_8 = ((int32_t)il2cpp_codegen_add(L_193, 1));
		NullCheck(L_191);
		int32_t L_194 = L_193;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_195 = (L_191)->GetAt(static_cast<il2cpp_array_size_t>(L_194));
		V_0 = L_195;
		il2cpp_codegen_runtime_class_init_inline(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_196 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_197 = V_1;
		NullCheck(L_196);
		uintptr_t L_198 = ((uintptr_t)((int32_t)((int32_t)L_197&((int32_t)255))));
		uint8_t L_199 = (L_196)->GetAt(static_cast<il2cpp_array_size_t>(L_198));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_200 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_201 = V_2;
		NullCheck(L_200);
		uintptr_t L_202 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_201>>8))&((int32_t)255))));
		uint8_t L_203 = (L_200)->GetAt(static_cast<il2cpp_array_size_t>(L_202));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_204 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_205 = V_3;
		NullCheck(L_204);
		uintptr_t L_206 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_205>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_207 = (L_204)->GetAt(static_cast<il2cpp_array_size_t>(L_206));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_208 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_209 = V_7;
		NullCheck(L_208);
		uintptr_t L_210 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_209>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_211 = (L_208)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		uint32_t L_212;
		L_212 = AesLightEngine_Mcol_m583E5C6EE9BEA306524BC4B8886E3AD93A697836(((int32_t)(((int32_t)(((int32_t)((int32_t)L_199^((int32_t)((int32_t)L_203<<8))))^((int32_t)((int32_t)L_207<<((int32_t)16)))))^((int32_t)((int32_t)L_211<<((int32_t)24))))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_213 = V_0;
		NullCheck(L_213);
		int32_t L_214 = 0;
		uint32_t L_215 = (L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_214));
		V_4 = ((int32_t)((int32_t)L_212^(int32_t)L_215));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_216 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_217 = V_2;
		NullCheck(L_216);
		uintptr_t L_218 = ((uintptr_t)((int32_t)((int32_t)L_217&((int32_t)255))));
		uint8_t L_219 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_220 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_221 = V_3;
		NullCheck(L_220);
		uintptr_t L_222 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_221>>8))&((int32_t)255))));
		uint8_t L_223 = (L_220)->GetAt(static_cast<il2cpp_array_size_t>(L_222));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_224 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_225 = V_7;
		NullCheck(L_224);
		uintptr_t L_226 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_225>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_227 = (L_224)->GetAt(static_cast<il2cpp_array_size_t>(L_226));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_228 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_229 = V_1;
		NullCheck(L_228);
		uintptr_t L_230 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_229>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_231 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_230));
		uint32_t L_232;
		L_232 = AesLightEngine_Mcol_m583E5C6EE9BEA306524BC4B8886E3AD93A697836(((int32_t)(((int32_t)(((int32_t)((int32_t)L_219^((int32_t)((int32_t)L_223<<8))))^((int32_t)((int32_t)L_227<<((int32_t)16)))))^((int32_t)((int32_t)L_231<<((int32_t)24))))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_233 = V_0;
		NullCheck(L_233);
		int32_t L_234 = 1;
		uint32_t L_235 = (L_233)->GetAt(static_cast<il2cpp_array_size_t>(L_234));
		V_5 = ((int32_t)((int32_t)L_232^(int32_t)L_235));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_236 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_237 = V_3;
		NullCheck(L_236);
		uintptr_t L_238 = ((uintptr_t)((int32_t)((int32_t)L_237&((int32_t)255))));
		uint8_t L_239 = (L_236)->GetAt(static_cast<il2cpp_array_size_t>(L_238));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_240 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_241 = V_7;
		NullCheck(L_240);
		uintptr_t L_242 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_241>>8))&((int32_t)255))));
		uint8_t L_243 = (L_240)->GetAt(static_cast<il2cpp_array_size_t>(L_242));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_244 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_245 = V_1;
		NullCheck(L_244);
		uintptr_t L_246 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_245>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_247 = (L_244)->GetAt(static_cast<il2cpp_array_size_t>(L_246));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_248 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_249 = V_2;
		NullCheck(L_248);
		uintptr_t L_250 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_249>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_251 = (L_248)->GetAt(static_cast<il2cpp_array_size_t>(L_250));
		uint32_t L_252;
		L_252 = AesLightEngine_Mcol_m583E5C6EE9BEA306524BC4B8886E3AD93A697836(((int32_t)(((int32_t)(((int32_t)((int32_t)L_239^((int32_t)((int32_t)L_243<<8))))^((int32_t)((int32_t)L_247<<((int32_t)16)))))^((int32_t)((int32_t)L_251<<((int32_t)24))))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_253 = V_0;
		NullCheck(L_253);
		int32_t L_254 = 2;
		uint32_t L_255 = (L_253)->GetAt(static_cast<il2cpp_array_size_t>(L_254));
		V_6 = ((int32_t)((int32_t)L_252^(int32_t)L_255));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_256 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_257 = V_7;
		NullCheck(L_256);
		uintptr_t L_258 = ((uintptr_t)((int32_t)((int32_t)L_257&((int32_t)255))));
		uint8_t L_259 = (L_256)->GetAt(static_cast<il2cpp_array_size_t>(L_258));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_260 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_261 = V_1;
		NullCheck(L_260);
		uintptr_t L_262 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_261>>8))&((int32_t)255))));
		uint8_t L_263 = (L_260)->GetAt(static_cast<il2cpp_array_size_t>(L_262));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_264 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_265 = V_2;
		NullCheck(L_264);
		uintptr_t L_266 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_265>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_267 = (L_264)->GetAt(static_cast<il2cpp_array_size_t>(L_266));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_268 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_269 = V_3;
		NullCheck(L_268);
		uintptr_t L_270 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_269>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_271 = (L_268)->GetAt(static_cast<il2cpp_array_size_t>(L_270));
		uint32_t L_272;
		L_272 = AesLightEngine_Mcol_m583E5C6EE9BEA306524BC4B8886E3AD93A697836(((int32_t)(((int32_t)(((int32_t)((int32_t)L_259^((int32_t)((int32_t)L_263<<8))))^((int32_t)((int32_t)L_267<<((int32_t)16)))))^((int32_t)((int32_t)L_271<<((int32_t)24))))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_273 = V_0;
		NullCheck(L_273);
		int32_t L_274 = 3;
		uint32_t L_275 = (L_273)->GetAt(static_cast<il2cpp_array_size_t>(L_274));
		V_7 = ((int32_t)((int32_t)L_272^(int32_t)L_275));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_276 = ___KW0;
		int32_t L_277 = V_8;
		NullCheck(L_276);
		int32_t L_278 = L_277;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_279 = (L_276)->GetAt(static_cast<il2cpp_array_size_t>(L_278));
		V_0 = L_279;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_280 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_281 = V_4;
		NullCheck(L_280);
		uintptr_t L_282 = ((uintptr_t)((int32_t)((int32_t)L_281&((int32_t)255))));
		uint8_t L_283 = (L_280)->GetAt(static_cast<il2cpp_array_size_t>(L_282));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_284 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_285 = V_5;
		NullCheck(L_284);
		uintptr_t L_286 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_285>>8))&((int32_t)255))));
		uint8_t L_287 = (L_284)->GetAt(static_cast<il2cpp_array_size_t>(L_286));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_288 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_289 = V_6;
		NullCheck(L_288);
		uintptr_t L_290 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_289>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_291 = (L_288)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_292 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_293 = V_7;
		NullCheck(L_292);
		uintptr_t L_294 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_293>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_295 = (L_292)->GetAt(static_cast<il2cpp_array_size_t>(L_294));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_296 = V_0;
		NullCheck(L_296);
		int32_t L_297 = 0;
		uint32_t L_298 = (L_296)->GetAt(static_cast<il2cpp_array_size_t>(L_297));
		__this->___C0_11 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_283^((int32_t)((int32_t)L_287<<8))))^((int32_t)((int32_t)L_291<<((int32_t)16)))))^((int32_t)((int32_t)L_295<<((int32_t)24)))))^(int32_t)L_298));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_299 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_300 = V_5;
		NullCheck(L_299);
		uintptr_t L_301 = ((uintptr_t)((int32_t)((int32_t)L_300&((int32_t)255))));
		uint8_t L_302 = (L_299)->GetAt(static_cast<il2cpp_array_size_t>(L_301));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_303 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_304 = V_6;
		NullCheck(L_303);
		uintptr_t L_305 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_304>>8))&((int32_t)255))));
		uint8_t L_306 = (L_303)->GetAt(static_cast<il2cpp_array_size_t>(L_305));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_307 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_308 = V_7;
		NullCheck(L_307);
		uintptr_t L_309 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_308>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_310 = (L_307)->GetAt(static_cast<il2cpp_array_size_t>(L_309));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_311 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_312 = V_4;
		NullCheck(L_311);
		uintptr_t L_313 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_312>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_314 = (L_311)->GetAt(static_cast<il2cpp_array_size_t>(L_313));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_315 = V_0;
		NullCheck(L_315);
		int32_t L_316 = 1;
		uint32_t L_317 = (L_315)->GetAt(static_cast<il2cpp_array_size_t>(L_316));
		__this->___C1_12 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_302^((int32_t)((int32_t)L_306<<8))))^((int32_t)((int32_t)L_310<<((int32_t)16)))))^((int32_t)((int32_t)L_314<<((int32_t)24)))))^(int32_t)L_317));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_318 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_319 = V_6;
		NullCheck(L_318);
		uintptr_t L_320 = ((uintptr_t)((int32_t)((int32_t)L_319&((int32_t)255))));
		uint8_t L_321 = (L_318)->GetAt(static_cast<il2cpp_array_size_t>(L_320));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_322 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_323 = V_7;
		NullCheck(L_322);
		uintptr_t L_324 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_323>>8))&((int32_t)255))));
		uint8_t L_325 = (L_322)->GetAt(static_cast<il2cpp_array_size_t>(L_324));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_326 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_327 = V_4;
		NullCheck(L_326);
		uintptr_t L_328 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_327>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_329 = (L_326)->GetAt(static_cast<il2cpp_array_size_t>(L_328));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_330 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_331 = V_5;
		NullCheck(L_330);
		uintptr_t L_332 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_331>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_333 = (L_330)->GetAt(static_cast<il2cpp_array_size_t>(L_332));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_334 = V_0;
		NullCheck(L_334);
		int32_t L_335 = 2;
		uint32_t L_336 = (L_334)->GetAt(static_cast<il2cpp_array_size_t>(L_335));
		__this->___C2_13 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_321^((int32_t)((int32_t)L_325<<8))))^((int32_t)((int32_t)L_329<<((int32_t)16)))))^((int32_t)((int32_t)L_333<<((int32_t)24)))))^(int32_t)L_336));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_337 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_338 = V_7;
		NullCheck(L_337);
		uintptr_t L_339 = ((uintptr_t)((int32_t)((int32_t)L_338&((int32_t)255))));
		uint8_t L_340 = (L_337)->GetAt(static_cast<il2cpp_array_size_t>(L_339));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_341 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_342 = V_4;
		NullCheck(L_341);
		uintptr_t L_343 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_342>>8))&((int32_t)255))));
		uint8_t L_344 = (L_341)->GetAt(static_cast<il2cpp_array_size_t>(L_343));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_345 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_346 = V_5;
		NullCheck(L_345);
		uintptr_t L_347 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_346>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_348 = (L_345)->GetAt(static_cast<il2cpp_array_size_t>(L_347));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_349 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6;
		uint32_t L_350 = V_6;
		NullCheck(L_349);
		uintptr_t L_351 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_350>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_352 = (L_349)->GetAt(static_cast<il2cpp_array_size_t>(L_351));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_353 = V_0;
		NullCheck(L_353);
		int32_t L_354 = 3;
		uint32_t L_355 = (L_353)->GetAt(static_cast<il2cpp_array_size_t>(L_354));
		__this->___C3_14 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_340^((int32_t)((int32_t)L_344<<8))))^((int32_t)((int32_t)L_348<<((int32_t)16)))))^((int32_t)((int32_t)L_352<<((int32_t)24)))))^(int32_t)L_355));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.AesLightEngine::DecryptBlock(System.UInt32[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesLightEngine_DecryptBlock_m59D3EABE8F3BE7DCF2C0F28E87A4C6C37FA1480D (AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6* __this, UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* ___KW0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_0 = ___KW0;
		int32_t L_1 = __this->___ROUNDS_9;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		uint32_t L_4 = __this->___C0_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		uint32_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = ((int32_t)((int32_t)L_4^(int32_t)L_7));
		uint32_t L_8 = __this->___C1_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 1;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = ((int32_t)((int32_t)L_8^(int32_t)L_11));
		uint32_t L_12 = __this->___C2_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = 2;
		uint32_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_3 = ((int32_t)((int32_t)L_12^(int32_t)L_15));
		uint32_t L_16 = __this->___C3_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = 3;
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = ((int32_t)((int32_t)L_16^(int32_t)L_19));
		int32_t L_20 = __this->___ROUNDS_9;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		goto IL_031a;
	}

IL_0045:
	{
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_21 = ___KW0;
		int32_t L_22 = V_8;
		int32_t L_23 = L_22;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		NullCheck(L_21);
		int32_t L_24 = L_23;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_0 = L_25;
		il2cpp_codegen_runtime_class_init_inline(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_27 = V_1;
		NullCheck(L_26);
		uintptr_t L_28 = ((uintptr_t)((int32_t)((int32_t)L_27&((int32_t)255))));
		uint8_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_31 = V_7;
		NullCheck(L_30);
		uintptr_t L_32 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_31>>8))&((int32_t)255))));
		uint8_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_35 = V_3;
		NullCheck(L_34);
		uintptr_t L_36 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_35>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_39 = V_2;
		NullCheck(L_38);
		uintptr_t L_40 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_39>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		uint32_t L_42;
		L_42 = AesLightEngine_Inv_Mcol_mF826145B38FE4263C08F674FB60E21123CC63384(((int32_t)(((int32_t)(((int32_t)((int32_t)L_29^((int32_t)((int32_t)L_33<<8))))^((int32_t)((int32_t)L_37<<((int32_t)16)))))^((int32_t)((int32_t)L_41<<((int32_t)24))))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = V_0;
		NullCheck(L_43);
		int32_t L_44 = 0;
		uint32_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_4 = ((int32_t)((int32_t)L_42^(int32_t)L_45));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_47 = V_2;
		NullCheck(L_46);
		uintptr_t L_48 = ((uintptr_t)((int32_t)((int32_t)L_47&((int32_t)255))));
		uint8_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_51 = V_1;
		NullCheck(L_50);
		uintptr_t L_52 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_51>>8))&((int32_t)255))));
		uint8_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_55 = V_7;
		NullCheck(L_54);
		uintptr_t L_56 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_55>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_59 = V_3;
		NullCheck(L_58);
		uintptr_t L_60 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_59>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		uint32_t L_62;
		L_62 = AesLightEngine_Inv_Mcol_mF826145B38FE4263C08F674FB60E21123CC63384(((int32_t)(((int32_t)(((int32_t)((int32_t)L_49^((int32_t)((int32_t)L_53<<8))))^((int32_t)((int32_t)L_57<<((int32_t)16)))))^((int32_t)((int32_t)L_61<<((int32_t)24))))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = V_0;
		NullCheck(L_63);
		int32_t L_64 = 1;
		uint32_t L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		V_5 = ((int32_t)((int32_t)L_62^(int32_t)L_65));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_67 = V_3;
		NullCheck(L_66);
		uintptr_t L_68 = ((uintptr_t)((int32_t)((int32_t)L_67&((int32_t)255))));
		uint8_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_71 = V_2;
		NullCheck(L_70);
		uintptr_t L_72 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_71>>8))&((int32_t)255))));
		uint8_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_75 = V_1;
		NullCheck(L_74);
		uintptr_t L_76 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_75>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_79 = V_7;
		NullCheck(L_78);
		uintptr_t L_80 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_79>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		uint32_t L_82;
		L_82 = AesLightEngine_Inv_Mcol_mF826145B38FE4263C08F674FB60E21123CC63384(((int32_t)(((int32_t)(((int32_t)((int32_t)L_69^((int32_t)((int32_t)L_73<<8))))^((int32_t)((int32_t)L_77<<((int32_t)16)))))^((int32_t)((int32_t)L_81<<((int32_t)24))))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = V_0;
		NullCheck(L_83);
		int32_t L_84 = 2;
		uint32_t L_85 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		V_6 = ((int32_t)((int32_t)L_82^(int32_t)L_85));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_87 = V_7;
		NullCheck(L_86);
		uintptr_t L_88 = ((uintptr_t)((int32_t)((int32_t)L_87&((int32_t)255))));
		uint8_t L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_91 = V_3;
		NullCheck(L_90);
		uintptr_t L_92 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_91>>8))&((int32_t)255))));
		uint8_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_95 = V_2;
		NullCheck(L_94);
		uintptr_t L_96 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_95>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_99 = V_1;
		NullCheck(L_98);
		uintptr_t L_100 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_99>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		uint32_t L_102;
		L_102 = AesLightEngine_Inv_Mcol_mF826145B38FE4263C08F674FB60E21123CC63384(((int32_t)(((int32_t)(((int32_t)((int32_t)L_89^((int32_t)((int32_t)L_93<<8))))^((int32_t)((int32_t)L_97<<((int32_t)16)))))^((int32_t)((int32_t)L_101<<((int32_t)24))))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_103 = V_0;
		NullCheck(L_103);
		int32_t L_104 = 3;
		uint32_t L_105 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		V_7 = ((int32_t)((int32_t)L_102^(int32_t)L_105));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_106 = ___KW0;
		int32_t L_107 = V_8;
		int32_t L_108 = L_107;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_108, 1));
		NullCheck(L_106);
		int32_t L_109 = L_108;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_110 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		V_0 = L_110;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_111 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_112 = V_4;
		NullCheck(L_111);
		uintptr_t L_113 = ((uintptr_t)((int32_t)((int32_t)L_112&((int32_t)255))));
		uint8_t L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_115 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_116 = V_7;
		NullCheck(L_115);
		uintptr_t L_117 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_116>>8))&((int32_t)255))));
		uint8_t L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_119 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_120 = V_6;
		NullCheck(L_119);
		uintptr_t L_121 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_120>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_123 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_124 = V_5;
		NullCheck(L_123);
		uintptr_t L_125 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_124>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		uint32_t L_127;
		L_127 = AesLightEngine_Inv_Mcol_mF826145B38FE4263C08F674FB60E21123CC63384(((int32_t)(((int32_t)(((int32_t)((int32_t)L_114^((int32_t)((int32_t)L_118<<8))))^((int32_t)((int32_t)L_122<<((int32_t)16)))))^((int32_t)((int32_t)L_126<<((int32_t)24))))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_128 = V_0;
		NullCheck(L_128);
		int32_t L_129 = 0;
		uint32_t L_130 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		V_1 = ((int32_t)((int32_t)L_127^(int32_t)L_130));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_131 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_132 = V_5;
		NullCheck(L_131);
		uintptr_t L_133 = ((uintptr_t)((int32_t)((int32_t)L_132&((int32_t)255))));
		uint8_t L_134 = (L_131)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_135 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_136 = V_4;
		NullCheck(L_135);
		uintptr_t L_137 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_136>>8))&((int32_t)255))));
		uint8_t L_138 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_139 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_140 = V_7;
		NullCheck(L_139);
		uintptr_t L_141 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_140>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_142 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_143 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_144 = V_6;
		NullCheck(L_143);
		uintptr_t L_145 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_144>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_146 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		uint32_t L_147;
		L_147 = AesLightEngine_Inv_Mcol_mF826145B38FE4263C08F674FB60E21123CC63384(((int32_t)(((int32_t)(((int32_t)((int32_t)L_134^((int32_t)((int32_t)L_138<<8))))^((int32_t)((int32_t)L_142<<((int32_t)16)))))^((int32_t)((int32_t)L_146<<((int32_t)24))))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_148 = V_0;
		NullCheck(L_148);
		int32_t L_149 = 1;
		uint32_t L_150 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		V_2 = ((int32_t)((int32_t)L_147^(int32_t)L_150));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_151 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_152 = V_6;
		NullCheck(L_151);
		uintptr_t L_153 = ((uintptr_t)((int32_t)((int32_t)L_152&((int32_t)255))));
		uint8_t L_154 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_155 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_156 = V_5;
		NullCheck(L_155);
		uintptr_t L_157 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_156>>8))&((int32_t)255))));
		uint8_t L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_159 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_160 = V_4;
		NullCheck(L_159);
		uintptr_t L_161 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_160>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_162 = (L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_163 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_164 = V_7;
		NullCheck(L_163);
		uintptr_t L_165 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_164>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_166 = (L_163)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		uint32_t L_167;
		L_167 = AesLightEngine_Inv_Mcol_mF826145B38FE4263C08F674FB60E21123CC63384(((int32_t)(((int32_t)(((int32_t)((int32_t)L_154^((int32_t)((int32_t)L_158<<8))))^((int32_t)((int32_t)L_162<<((int32_t)16)))))^((int32_t)((int32_t)L_166<<((int32_t)24))))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_168 = V_0;
		NullCheck(L_168);
		int32_t L_169 = 2;
		uint32_t L_170 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		V_3 = ((int32_t)((int32_t)L_167^(int32_t)L_170));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_171 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_172 = V_7;
		NullCheck(L_171);
		uintptr_t L_173 = ((uintptr_t)((int32_t)((int32_t)L_172&((int32_t)255))));
		uint8_t L_174 = (L_171)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_175 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_176 = V_6;
		NullCheck(L_175);
		uintptr_t L_177 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_176>>8))&((int32_t)255))));
		uint8_t L_178 = (L_175)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_179 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_180 = V_5;
		NullCheck(L_179);
		uintptr_t L_181 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_180>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_182 = (L_179)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_183 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_184 = V_4;
		NullCheck(L_183);
		uintptr_t L_185 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_184>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_186 = (L_183)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		uint32_t L_187;
		L_187 = AesLightEngine_Inv_Mcol_mF826145B38FE4263C08F674FB60E21123CC63384(((int32_t)(((int32_t)(((int32_t)((int32_t)L_174^((int32_t)((int32_t)L_178<<8))))^((int32_t)((int32_t)L_182<<((int32_t)16)))))^((int32_t)((int32_t)L_186<<((int32_t)24))))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_188 = V_0;
		NullCheck(L_188);
		int32_t L_189 = 3;
		uint32_t L_190 = (L_188)->GetAt(static_cast<il2cpp_array_size_t>(L_189));
		V_7 = ((int32_t)((int32_t)L_187^(int32_t)L_190));
	}

IL_031a:
	{
		int32_t L_191 = V_8;
		if ((((int32_t)L_191) > ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_192 = ___KW0;
		NullCheck(L_192);
		int32_t L_193 = 1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_194 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		V_0 = L_194;
		il2cpp_codegen_runtime_class_init_inline(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_195 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_196 = V_1;
		NullCheck(L_195);
		uintptr_t L_197 = ((uintptr_t)((int32_t)((int32_t)L_196&((int32_t)255))));
		uint8_t L_198 = (L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_197));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_199 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_200 = V_7;
		NullCheck(L_199);
		uintptr_t L_201 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_200>>8))&((int32_t)255))));
		uint8_t L_202 = (L_199)->GetAt(static_cast<il2cpp_array_size_t>(L_201));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_203 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_204 = V_3;
		NullCheck(L_203);
		uintptr_t L_205 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_204>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_206 = (L_203)->GetAt(static_cast<il2cpp_array_size_t>(L_205));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_207 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_208 = V_2;
		NullCheck(L_207);
		uintptr_t L_209 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_208>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_210 = (L_207)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		uint32_t L_211;
		L_211 = AesLightEngine_Inv_Mcol_mF826145B38FE4263C08F674FB60E21123CC63384(((int32_t)(((int32_t)(((int32_t)((int32_t)L_198^((int32_t)((int32_t)L_202<<8))))^((int32_t)((int32_t)L_206<<((int32_t)16)))))^((int32_t)((int32_t)L_210<<((int32_t)24))))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_212 = V_0;
		NullCheck(L_212);
		int32_t L_213 = 0;
		uint32_t L_214 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		V_4 = ((int32_t)((int32_t)L_211^(int32_t)L_214));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_215 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_216 = V_2;
		NullCheck(L_215);
		uintptr_t L_217 = ((uintptr_t)((int32_t)((int32_t)L_216&((int32_t)255))));
		uint8_t L_218 = (L_215)->GetAt(static_cast<il2cpp_array_size_t>(L_217));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_219 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_220 = V_1;
		NullCheck(L_219);
		uintptr_t L_221 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_220>>8))&((int32_t)255))));
		uint8_t L_222 = (L_219)->GetAt(static_cast<il2cpp_array_size_t>(L_221));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_223 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_224 = V_7;
		NullCheck(L_223);
		uintptr_t L_225 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_224>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_226 = (L_223)->GetAt(static_cast<il2cpp_array_size_t>(L_225));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_227 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_228 = V_3;
		NullCheck(L_227);
		uintptr_t L_229 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_228>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_230 = (L_227)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		uint32_t L_231;
		L_231 = AesLightEngine_Inv_Mcol_mF826145B38FE4263C08F674FB60E21123CC63384(((int32_t)(((int32_t)(((int32_t)((int32_t)L_218^((int32_t)((int32_t)L_222<<8))))^((int32_t)((int32_t)L_226<<((int32_t)16)))))^((int32_t)((int32_t)L_230<<((int32_t)24))))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_232 = V_0;
		NullCheck(L_232);
		int32_t L_233 = 1;
		uint32_t L_234 = (L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_233));
		V_5 = ((int32_t)((int32_t)L_231^(int32_t)L_234));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_235 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_236 = V_3;
		NullCheck(L_235);
		uintptr_t L_237 = ((uintptr_t)((int32_t)((int32_t)L_236&((int32_t)255))));
		uint8_t L_238 = (L_235)->GetAt(static_cast<il2cpp_array_size_t>(L_237));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_239 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_240 = V_2;
		NullCheck(L_239);
		uintptr_t L_241 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_240>>8))&((int32_t)255))));
		uint8_t L_242 = (L_239)->GetAt(static_cast<il2cpp_array_size_t>(L_241));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_243 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_244 = V_1;
		NullCheck(L_243);
		uintptr_t L_245 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_244>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_246 = (L_243)->GetAt(static_cast<il2cpp_array_size_t>(L_245));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_247 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_248 = V_7;
		NullCheck(L_247);
		uintptr_t L_249 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_248>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_250 = (L_247)->GetAt(static_cast<il2cpp_array_size_t>(L_249));
		uint32_t L_251;
		L_251 = AesLightEngine_Inv_Mcol_mF826145B38FE4263C08F674FB60E21123CC63384(((int32_t)(((int32_t)(((int32_t)((int32_t)L_238^((int32_t)((int32_t)L_242<<8))))^((int32_t)((int32_t)L_246<<((int32_t)16)))))^((int32_t)((int32_t)L_250<<((int32_t)24))))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_252 = V_0;
		NullCheck(L_252);
		int32_t L_253 = 2;
		uint32_t L_254 = (L_252)->GetAt(static_cast<il2cpp_array_size_t>(L_253));
		V_6 = ((int32_t)((int32_t)L_251^(int32_t)L_254));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_255 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_256 = V_7;
		NullCheck(L_255);
		uintptr_t L_257 = ((uintptr_t)((int32_t)((int32_t)L_256&((int32_t)255))));
		uint8_t L_258 = (L_255)->GetAt(static_cast<il2cpp_array_size_t>(L_257));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_259 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_260 = V_3;
		NullCheck(L_259);
		uintptr_t L_261 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_260>>8))&((int32_t)255))));
		uint8_t L_262 = (L_259)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_263 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_264 = V_2;
		NullCheck(L_263);
		uintptr_t L_265 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_264>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_266 = (L_263)->GetAt(static_cast<il2cpp_array_size_t>(L_265));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_267 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_268 = V_1;
		NullCheck(L_267);
		uintptr_t L_269 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_268>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_270 = (L_267)->GetAt(static_cast<il2cpp_array_size_t>(L_269));
		uint32_t L_271;
		L_271 = AesLightEngine_Inv_Mcol_mF826145B38FE4263C08F674FB60E21123CC63384(((int32_t)(((int32_t)(((int32_t)((int32_t)L_258^((int32_t)((int32_t)L_262<<8))))^((int32_t)((int32_t)L_266<<((int32_t)16)))))^((int32_t)((int32_t)L_270<<((int32_t)24))))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_272 = V_0;
		NullCheck(L_272);
		int32_t L_273 = 3;
		uint32_t L_274 = (L_272)->GetAt(static_cast<il2cpp_array_size_t>(L_273));
		V_7 = ((int32_t)((int32_t)L_271^(int32_t)L_274));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_275 = ___KW0;
		NullCheck(L_275);
		int32_t L_276 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_277 = (L_275)->GetAt(static_cast<il2cpp_array_size_t>(L_276));
		V_0 = L_277;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_278 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_279 = V_4;
		NullCheck(L_278);
		uintptr_t L_280 = ((uintptr_t)((int32_t)((int32_t)L_279&((int32_t)255))));
		uint8_t L_281 = (L_278)->GetAt(static_cast<il2cpp_array_size_t>(L_280));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_282 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_283 = V_7;
		NullCheck(L_282);
		uintptr_t L_284 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_283>>8))&((int32_t)255))));
		uint8_t L_285 = (L_282)->GetAt(static_cast<il2cpp_array_size_t>(L_284));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_286 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_287 = V_6;
		NullCheck(L_286);
		uintptr_t L_288 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_287>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_289 = (L_286)->GetAt(static_cast<il2cpp_array_size_t>(L_288));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_290 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_291 = V_5;
		NullCheck(L_290);
		uintptr_t L_292 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_291>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_293 = (L_290)->GetAt(static_cast<il2cpp_array_size_t>(L_292));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_294 = V_0;
		NullCheck(L_294);
		int32_t L_295 = 0;
		uint32_t L_296 = (L_294)->GetAt(static_cast<il2cpp_array_size_t>(L_295));
		__this->___C0_11 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_281^((int32_t)((int32_t)L_285<<8))))^((int32_t)((int32_t)L_289<<((int32_t)16)))))^((int32_t)((int32_t)L_293<<((int32_t)24)))))^(int32_t)L_296));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_297 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_298 = V_5;
		NullCheck(L_297);
		uintptr_t L_299 = ((uintptr_t)((int32_t)((int32_t)L_298&((int32_t)255))));
		uint8_t L_300 = (L_297)->GetAt(static_cast<il2cpp_array_size_t>(L_299));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_301 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_302 = V_4;
		NullCheck(L_301);
		uintptr_t L_303 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_302>>8))&((int32_t)255))));
		uint8_t L_304 = (L_301)->GetAt(static_cast<il2cpp_array_size_t>(L_303));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_305 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_306 = V_7;
		NullCheck(L_305);
		uintptr_t L_307 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_306>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_308 = (L_305)->GetAt(static_cast<il2cpp_array_size_t>(L_307));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_309 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_310 = V_6;
		NullCheck(L_309);
		uintptr_t L_311 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_310>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_312 = (L_309)->GetAt(static_cast<il2cpp_array_size_t>(L_311));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_313 = V_0;
		NullCheck(L_313);
		int32_t L_314 = 1;
		uint32_t L_315 = (L_313)->GetAt(static_cast<il2cpp_array_size_t>(L_314));
		__this->___C1_12 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_300^((int32_t)((int32_t)L_304<<8))))^((int32_t)((int32_t)L_308<<((int32_t)16)))))^((int32_t)((int32_t)L_312<<((int32_t)24)))))^(int32_t)L_315));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_316 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_317 = V_6;
		NullCheck(L_316);
		uintptr_t L_318 = ((uintptr_t)((int32_t)((int32_t)L_317&((int32_t)255))));
		uint8_t L_319 = (L_316)->GetAt(static_cast<il2cpp_array_size_t>(L_318));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_320 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_321 = V_5;
		NullCheck(L_320);
		uintptr_t L_322 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_321>>8))&((int32_t)255))));
		uint8_t L_323 = (L_320)->GetAt(static_cast<il2cpp_array_size_t>(L_322));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_324 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_325 = V_4;
		NullCheck(L_324);
		uintptr_t L_326 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_325>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_327 = (L_324)->GetAt(static_cast<il2cpp_array_size_t>(L_326));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_328 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_329 = V_7;
		NullCheck(L_328);
		uintptr_t L_330 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_329>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_331 = (L_328)->GetAt(static_cast<il2cpp_array_size_t>(L_330));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_332 = V_0;
		NullCheck(L_332);
		int32_t L_333 = 2;
		uint32_t L_334 = (L_332)->GetAt(static_cast<il2cpp_array_size_t>(L_333));
		__this->___C2_13 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_319^((int32_t)((int32_t)L_323<<8))))^((int32_t)((int32_t)L_327<<((int32_t)16)))))^((int32_t)((int32_t)L_331<<((int32_t)24)))))^(int32_t)L_334));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_335 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_336 = V_7;
		NullCheck(L_335);
		uintptr_t L_337 = ((uintptr_t)((int32_t)((int32_t)L_336&((int32_t)255))));
		uint8_t L_338 = (L_335)->GetAt(static_cast<il2cpp_array_size_t>(L_337));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_339 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_340 = V_6;
		NullCheck(L_339);
		uintptr_t L_341 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_340>>8))&((int32_t)255))));
		uint8_t L_342 = (L_339)->GetAt(static_cast<il2cpp_array_size_t>(L_341));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_343 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_344 = V_5;
		NullCheck(L_343);
		uintptr_t L_345 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_344>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_346 = (L_343)->GetAt(static_cast<il2cpp_array_size_t>(L_345));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_347 = ((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7;
		uint32_t L_348 = V_4;
		NullCheck(L_347);
		uintptr_t L_349 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_348>>((int32_t)24)))&((int32_t)255))));
		uint8_t L_350 = (L_347)->GetAt(static_cast<il2cpp_array_size_t>(L_349));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_351 = V_0;
		NullCheck(L_351);
		int32_t L_352 = 3;
		uint32_t L_353 = (L_351)->GetAt(static_cast<il2cpp_array_size_t>(L_352));
		__this->___C3_14 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_338^((int32_t)((int32_t)L_342<<8))))^((int32_t)((int32_t)L_346<<((int32_t)16)))))^((int32_t)((int32_t)L_350<<((int32_t)24)))))^(int32_t)L_353));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.AesLightEngine::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesLightEngine__cctor_mF5ADD1C0796D852F74064AA54D5DEA8C4BB1F31C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001462U2D1_71_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001462U2D2_72_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001462U2D3_73_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001462U2D1_71_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___S_6), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001462U2D2_72_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___Si_7), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001462U2D3_73_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_7, L_8, NULL);
		((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___rcon_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_StaticFields*)il2cpp_codegen_static_fields_for(AesLightEngine_t8696FF3C5104C60DEA1FD32209EBB5CF883C61A6_il2cpp_TypeInfo_var))->___rcon_8), (void*)L_7);
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
// System.Void Org.BouncyCastle.Crypto.Engines.Rfc3394WrapEngine::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rfc3394WrapEngine__ctor_m12BC3AD127033F7EAC9006FDF30AFDBCBACCA604 (Rfc3394WrapEngine_tE66253E3F6CE7FCB5A19AC798C0127E99AEA14C1* __this, RuntimeObject* ___engine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001467U2D1_74_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001467U2D1_74_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		__this->___iv_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___iv_3), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_3 = ___engine0;
		__this->___engine_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___engine_0), (void*)L_3);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.Rfc3394WrapEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rfc3394WrapEngine_Init_mB9DCCD40EA7161675978E81A30871C05831E2FEA (Rfc3394WrapEngine_tE66253E3F6CE7FCB5A19AC798C0127E99AEA14C1* __this, bool ___forWrapping0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		bool L_0 = ___forWrapping0;
		__this->___forWrapping_2 = L_0;
		RuntimeObject* L_1 = ___parameters1;
		if (!((ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5*)IsInstClass((RuntimeObject*)L_1, ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = ___parameters1;
		NullCheck(((ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5*)CastclassClass((RuntimeObject*)L_2, ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var)));
		RuntimeObject* L_3;
		L_3 = ParametersWithRandom_get_Parameters_mFED49C45204261ACF08DC4617FC59E9025C5DA8E_inline(((ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5*)CastclassClass((RuntimeObject*)L_2, ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var)), NULL);
		___parameters1 = L_3;
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___parameters1;
		if (!((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_4, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)))
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject* L_5 = ___parameters1;
		__this->___param_1 = ((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_5, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___param_1), (void*)((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_5, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)));
		return;
	}

IL_0031:
	{
		RuntimeObject* L_6 = ___parameters1;
		if (!((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_6, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)))
		{
			goto IL_0075;
		}
	}
	{
		RuntimeObject* L_7 = ___parameters1;
		V_0 = ((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_7, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var));
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_8 = V_0;
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))) == ((int32_t)8)))
		{
			goto IL_005d;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE5A1473B3A7E855F5FB8736B5DE27173027D9DC3)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Rfc3394WrapEngine_Init_mB9DCCD40EA7161675978E81A30871C05831E2FEA_RuntimeMethod_var)));
	}

IL_005d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		__this->___iv_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___iv_3), (void*)L_12);
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_13 = V_0;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_13, NULL);
		__this->___param_1 = ((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_14, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___param_1), (void*)((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_14, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)));
	}

IL_0075:
	{
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Engines.Rfc3394WrapEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rfc3394WrapEngine_get_AlgorithmName_m50FA8B6ED902A2BCD9DE3C44CC8ECC95FE241895 (Rfc3394WrapEngine_tE66253E3F6CE7FCB5A19AC798C0127E99AEA14C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___engine_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IBlockCipher::get_AlgorithmName() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Engines.Rfc3394WrapEngine::Wrap(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Rfc3394WrapEngine_Wrap_m7B051BC4DCBC06B92E92BD1BFEA002DEEF3DC7CF (Rfc3394WrapEngine_tE66253E3F6CE7FCB5A19AC798C0127E99AEA14C1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___inLen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint8_t V_7 = 0x0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_8 = NULL;
	intptr_t V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		bool L_0 = __this->___forWrapping_2;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B3A022B03059BF4890370A8B7B5A3C7582D7BD5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Rfc3394WrapEngine_Wrap_m7B051BC4DCBC06B92E92BD1BFEA002DEEF3DC7CF_RuntimeMethod_var)));
	}

IL_0013:
	{
		int32_t L_2 = ___inLen2;
		V_0 = ((int32_t)(L_2/8));
		int32_t L_3 = V_0;
		int32_t L_4 = ___inLen2;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(L_3, 8))) == ((int32_t)L_4)))
		{
			goto IL_0028;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_5 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0D8AB86BB3A14340AEE7ADDA95FB6F1954525D80)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Rfc3394WrapEngine_Wrap_m7B051BC4DCBC06B92E92BD1BFEA002DEEF3DC7CF_RuntimeMethod_var)));
	}

IL_0028:
	{
		int32_t L_6 = ___inLen2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___iv_3;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_6, ((int32_t)(((RuntimeArray*)L_7)->max_length)))));
		V_1 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___iv_3;
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(8, ((int32_t)(((RuntimeArray*)L_9)->max_length)))));
		V_2 = L_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___iv_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___iv_3;
		NullCheck(L_13);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, 0, (RuntimeArray*)L_12, 0, ((int32_t)(((RuntimeArray*)L_13)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___input0;
		int32_t L_15 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___iv_3;
		NullCheck(L_17);
		int32_t L_18 = ___inLen2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, L_15, (RuntimeArray*)L_16, ((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18, NULL);
		RuntimeObject* L_19 = __this->___engine_0;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_20 = __this->___param_1;
		NullCheck(L_19);
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_19, (bool)1, L_20);
		V_3 = 0;
		goto IL_012c;
	}

IL_0088:
	{
		V_4 = 1;
		goto IL_0120;
	}

IL_0090:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___iv_3;
		NullCheck(L_23);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_21, 0, (RuntimeArray*)L_22, 0, ((int32_t)(((RuntimeArray*)L_23)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_1;
		int32_t L_25 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = __this->___iv_3;
		NullCheck(L_27);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_multiply(8, L_25)), (RuntimeArray*)L_26, ((int32_t)(((RuntimeArray*)L_27)->max_length)), 8, NULL);
		RuntimeObject* L_28 = __this->___engine_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_2;
		NullCheck(L_28);
		int32_t L_31;
		L_31 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_28, L_29, 0, L_30, 0);
		int32_t L_32 = V_0;
		int32_t L_33 = V_3;
		int32_t L_34 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_32, L_33)), L_34));
		V_6 = 1;
		goto IL_00ff;
	}

IL_00d2:
	{
		int32_t L_35 = V_5;
		V_7 = (uint8_t)((int32_t)(uint8_t)L_35);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = L_36;
		V_8 = L_37;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = __this->___iv_3;
		NullCheck(L_38);
		int32_t L_39 = V_6;
		int32_t L_40 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_38)->max_length)), L_39));
		V_9 = L_40;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_8;
		intptr_t L_42 = V_9;
		NullCheck(L_41);
		intptr_t L_43 = L_42;
		uint8_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		uint8_t L_45 = V_7;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_44^(int32_t)L_45))));
		int32_t L_46 = V_5;
		V_5 = ((int32_t)((uint32_t)L_46>>8));
		int32_t L_47 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00ff:
	{
		int32_t L_48 = V_5;
		if (L_48)
		{
			goto IL_00d2;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_49, 0, (RuntimeArray*)L_50, 0, 8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_1;
		int32_t L_53 = V_4;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_51, 8, (RuntimeArray*)L_52, ((int32_t)il2cpp_codegen_multiply(8, L_53)), 8, NULL);
		int32_t L_54 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0120:
	{
		int32_t L_55 = V_4;
		int32_t L_56 = V_0;
		if ((((int32_t)L_55) <= ((int32_t)L_56)))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_57 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_012c:
	{
		int32_t L_58 = V_3;
		if ((!(((uint32_t)L_58) == ((uint32_t)6))))
		{
			goto IL_0088;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = V_1;
		return L_59;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Engines.Rfc3394WrapEngine::Unwrap(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Rfc3394WrapEngine_Unwrap_m56318778A28D3053A3CA79C1C184F372BC05985D (Rfc3394WrapEngine_tE66253E3F6CE7FCB5A19AC798C0127E99AEA14C1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___inLen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	uint8_t V_8 = 0x0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	intptr_t V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		bool L_0 = __this->___forWrapping_2;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCEDA8A42E275C214506B6047B5D09353160F3FB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Rfc3394WrapEngine_Unwrap_m56318778A28D3053A3CA79C1C184F372BC05985D_RuntimeMethod_var)));
	}

IL_0013:
	{
		int32_t L_2 = ___inLen2;
		V_0 = ((int32_t)(L_2/8));
		int32_t L_3 = V_0;
		int32_t L_4 = ___inLen2;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(L_3, 8))) == ((int32_t)L_4)))
		{
			goto IL_0028;
		}
	}
	{
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_5 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4657ACEBB30BB2C7CC8BF4DCADB523A4A64F625)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Rfc3394WrapEngine_Unwrap_m56318778A28D3053A3CA79C1C184F372BC05985D_RuntimeMethod_var)));
	}

IL_0028:
	{
		int32_t L_6 = ___inLen2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___iv_3;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(L_6, ((int32_t)(((RuntimeArray*)L_7)->max_length)))));
		V_1 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___iv_3;
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)));
		V_2 = L_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___iv_3;
		NullCheck(L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(8, ((int32_t)(((RuntimeArray*)L_11)->max_length)))));
		V_3 = L_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___input0;
		int32_t L_14 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___iv_3;
		NullCheck(L_16);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_13, L_14, (RuntimeArray*)L_15, 0, ((int32_t)(((RuntimeArray*)L_16)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___input0;
		int32_t L_18 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___iv_3;
		NullCheck(L_19);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_1;
		int32_t L_21 = ___inLen2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___iv_3;
		NullCheck(L_22);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)(((RuntimeArray*)L_19)->max_length)))), (RuntimeArray*)L_20, 0, ((int32_t)il2cpp_codegen_subtract(L_21, ((int32_t)(((RuntimeArray*)L_22)->max_length)))), NULL);
		RuntimeObject* L_23 = __this->___engine_0;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_24 = __this->___param_1;
		NullCheck(L_23);
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_23, (bool)0, L_24);
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
		V_4 = 5;
		goto IL_014c;
	}

IL_00a1:
	{
		int32_t L_26 = V_0;
		V_5 = L_26;
		goto IL_013e;
	}

IL_00a9:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___iv_3;
		NullCheck(L_29);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_27, 0, (RuntimeArray*)L_28, 0, ((int32_t)(((RuntimeArray*)L_29)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_1;
		int32_t L_31 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = __this->___iv_3;
		NullCheck(L_33);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_30, ((int32_t)il2cpp_codegen_multiply(8, ((int32_t)il2cpp_codegen_subtract(L_31, 1)))), (RuntimeArray*)L_32, ((int32_t)(((RuntimeArray*)L_33)->max_length)), 8, NULL);
		int32_t L_34 = V_0;
		int32_t L_35 = V_4;
		int32_t L_36 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_34, L_35)), L_36));
		V_7 = 1;
		goto IL_010b;
	}

IL_00de:
	{
		int32_t L_37 = V_6;
		V_8 = (uint8_t)((int32_t)(uint8_t)L_37);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = L_38;
		V_9 = L_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = __this->___iv_3;
		NullCheck(L_40);
		int32_t L_41 = V_7;
		int32_t L_42 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_40)->max_length)), L_41));
		V_10 = L_42;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_9;
		intptr_t L_44 = V_10;
		NullCheck(L_43);
		intptr_t L_45 = L_44;
		uint8_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		uint8_t L_47 = V_8;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_46^(int32_t)L_47))));
		int32_t L_48 = V_6;
		V_6 = ((int32_t)((uint32_t)L_48>>8));
		int32_t L_49 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_010b:
	{
		int32_t L_50 = V_6;
		if (L_50)
		{
			goto IL_00de;
		}
	}
	{
		RuntimeObject* L_51 = __this->___engine_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = V_3;
		NullCheck(L_51);
		int32_t L_54;
		L_54 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_51, L_52, 0, L_53, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_55, 0, (RuntimeArray*)L_56, 0, 8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = V_1;
		int32_t L_59 = V_5;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_57, 8, (RuntimeArray*)L_58, ((int32_t)il2cpp_codegen_multiply(8, ((int32_t)il2cpp_codegen_subtract(L_59, 1)))), 8, NULL);
		int32_t L_60 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_60, 1));
	}

IL_013e:
	{
		int32_t L_61 = V_5;
		if ((((int32_t)L_61) >= ((int32_t)1)))
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_62, 1));
	}

IL_014c:
	{
		int32_t L_63 = V_4;
		if ((((int32_t)L_63) >= ((int32_t)0)))
		{
			goto IL_00a1;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = __this->___iv_3;
		bool L_66;
		L_66 = Arrays_ConstantTimeAreEqual_m5AF040D6BA657E1B8D8CB8CB68340FB2D86203C2(L_64, L_65, NULL);
		if (L_66)
		{
			goto IL_016d;
		}
	}
	{
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_67 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		NullCheck(L_67);
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_67, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1E2FB89DD75EA7DEDFEA6B005895F82CFB64C914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_67, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Rfc3394WrapEngine_Unwrap_m56318778A28D3053A3CA79C1C184F372BC05985D_RuntimeMethod_var)));
	}

IL_016d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = V_1;
		return L_68;
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
// System.Void Org.BouncyCastle.Crypto.Engines.AesWrapEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesWrapEngine__ctor_m4ED1580E5D1D67692876975354F6793A335B45E6 (AesWrapEngine_t1B6395327BED98BBCB90047E9D12887CBEE0FB17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AesEngine_t32B9896124921DEBC2C9B180FF2875747BDC4835_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AesEngine_t32B9896124921DEBC2C9B180FF2875747BDC4835* L_0 = (AesEngine_t32B9896124921DEBC2C9B180FF2875747BDC4835*)il2cpp_codegen_object_new(AesEngine_t32B9896124921DEBC2C9B180FF2875747BDC4835_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AesEngine__ctor_mD7D6897061CEE7B53E8338E1C696C0D1CAD34405(L_0, NULL);
		Rfc3394WrapEngine__ctor_m12BC3AD127033F7EAC9006FDF30AFDBCBACCA604(__this, L_0, NULL);
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
// System.Void Org.BouncyCastle.Crypto.Engines.BlowfishEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlowfishEngine__ctor_m77A46FCA6BDBA3E343154EFE988D2714198E6349 (BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var);
		int32_t L_0 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___SBOX_SK_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___S0_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___S0_9), (void*)L_1);
		int32_t L_2 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___SBOX_SK_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->___S1_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___S1_10), (void*)L_3);
		int32_t L_4 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___SBOX_SK_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->___S2_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___S2_11), (void*)L_5);
		int32_t L_6 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___SBOX_SK_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___S3_12 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___S3_12), (void*)L_7);
		int32_t L_8 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___P_SZ_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->___P_13 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___P_13), (void*)L_9);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.BlowfishEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlowfishEngine_Init_m176A33E0274D841EE3E8987C6F2D1E81152A852D (BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___parameters1;
		if (((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_0, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)))
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_1 = ___parameters1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var)));
		String_t* L_2;
		L_2 = Platform_GetTypeName_m9B04679202710BC6A96803803882849D0C5001FB(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCCE27278E07FE7EB927EA4224AC3E0619FBEE6C5)), L_2, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BlowfishEngine_Init_m176A33E0274D841EE3E8987C6F2D1E81152A852D_RuntimeMethod_var)));
	}

IL_001e:
	{
		bool L_5 = ___forEncryption0;
		__this->___encrypting_14 = L_5;
		RuntimeObject* L_6 = ___parameters1;
		NullCheck(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_6, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_6, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)), NULL);
		__this->___workingKey_15 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___workingKey_15), (void*)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___workingKey_15;
		BlowfishEngine_SetKey_m5E20BEA9840271E1648E897201C8A1C500541185(__this, L_8, NULL);
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Engines.BlowfishEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BlowfishEngine_get_AlgorithmName_m6A29B532DD31EBB44D7871C0EC5FE70FF0A24160 (BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD2236B405D5FA5F76EA2878B5A8698EE05BC73A);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralAD2236B405D5FA5F76EA2878B5A8698EE05BC73A;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Engines.BlowfishEngine::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BlowfishEngine_get_IsPartialBlockOkay_m1ABF4C883EE1138B2706C2063270CF18A2E046F3 (BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.BlowfishEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BlowfishEngine_ProcessBlock_m0B5B18CED10CE29A8B98DDAE078C5D9D0272BE61 (BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___workingKey_15;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral16234F4AE3AF3D5112D3AD14A33CEB4A928578E9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BlowfishEngine_ProcessBlock_m0B5B18CED10CE29A8B98DDAE078C5D9D0272BE61_RuntimeMethod_var)));
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		int32_t L_3 = ___inOff1;
		Check_DataLength_m4BEA4E45985CDB8967A7C3C71799B9036DDCC991(L_2, L_3, 8, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output2;
		int32_t L_5 = ___outOff3;
		Check_OutputLength_mFBD480CE544E8B2C4EFAD3A12D1E105DC36FFA68(L_4, L_5, 8, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		bool L_6 = __this->___encrypting_14;
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___input0;
		int32_t L_8 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___output2;
		int32_t L_10 = ___outOff3;
		BlowfishEngine_EncryptBlock_m6E20F54EC811353C022EFB80B89F56C4E6DB1E51(__this, L_7, L_8, L_9, L_10, NULL);
		goto IL_004e;
	}

IL_0043:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___input0;
		int32_t L_12 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___output2;
		int32_t L_14 = ___outOff3;
		BlowfishEngine_DecryptBlock_m13E84A8FEF4B01FF6FC57EB07D917194BF24EBC8(__this, L_11, L_12, L_13, L_14, NULL);
	}

IL_004e:
	{
		return 8;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.BlowfishEngine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlowfishEngine_Reset_m7A7E0FCB6BABBF9148DFE11694A59D9747203A31 (BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.BlowfishEngine::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BlowfishEngine_GetBlockSize_m77D0F0E970AA076D617495F8B6BD1A9973CC2B11 (BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A* __this, const RuntimeMethod* method) 
{
	{
		return 8;
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Engines.BlowfishEngine::F(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BlowfishEngine_F_m5BDBDB7EC40BF7F507F551EDD7341C5FC8277177 (BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A* __this, uint32_t ___x0, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___S0_9;
		uint32_t L_1 = ___x0;
		NullCheck(L_0);
		uintptr_t L_2 = ((uintptr_t)((int32_t)((uint32_t)L_1>>((int32_t)24))));
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = __this->___S1_10;
		uint32_t L_5 = ___x0;
		NullCheck(L_4);
		uintptr_t L_6 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_5>>((int32_t)16)))&((int32_t)255))));
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = __this->___S2_11;
		uint32_t L_9 = ___x0;
		NullCheck(L_8);
		uintptr_t L_10 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_9>>8))&((int32_t)255))));
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = __this->___S3_12;
		uint32_t L_13 = ___x0;
		NullCheck(L_12);
		uintptr_t L_14 = ((uintptr_t)((int32_t)((int32_t)L_13&((int32_t)255))));
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_7))^(int32_t)L_11)), (int32_t)L_15));
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.BlowfishEngine::ProcessTable(System.UInt32,System.UInt32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlowfishEngine_ProcessTable_mB40A43A5D62BC92EB9375C6C5467251CAEEDD903 (BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A* __this, uint32_t ___xl0, uint32_t ___xr1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___table2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___table2;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		V_1 = 0;
		goto IL_0076;
	}

IL_0008:
	{
		uint32_t L_1 = ___xl0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___P_13;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint32_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		___xl0 = ((int32_t)((int32_t)L_1^(int32_t)L_4));
		V_2 = 1;
		goto IL_0046;
	}

IL_0018:
	{
		uint32_t L_5 = ___xr1;
		uint32_t L_6 = ___xl0;
		uint32_t L_7;
		L_7 = BlowfishEngine_F_m5BDBDB7EC40BF7F507F551EDD7341C5FC8277177(__this, L_6, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = __this->___P_13;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		___xr1 = ((int32_t)((int32_t)L_5^((int32_t)((int32_t)L_7^(int32_t)L_11))));
		uint32_t L_12 = ___xl0;
		uint32_t L_13 = ___xr1;
		uint32_t L_14;
		L_14 = BlowfishEngine_F_m5BDBDB7EC40BF7F507F551EDD7341C5FC8277177(__this, L_13, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = __this->___P_13;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		___xl0 = ((int32_t)((int32_t)L_12^((int32_t)((int32_t)L_14^(int32_t)L_18))));
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 2));
	}

IL_0046:
	{
		int32_t L_20 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var);
		int32_t L_21 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___ROUNDS_6;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0018;
		}
	}
	{
		uint32_t L_22 = ___xr1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = __this->___P_13;
		il2cpp_codegen_runtime_class_init_inline(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var);
		int32_t L_24 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___ROUNDS_6;
		NullCheck(L_23);
		int32_t L_25 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		uint32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		___xr1 = ((int32_t)((int32_t)L_22^(int32_t)L_26));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___table2;
		int32_t L_28 = V_1;
		uint32_t L_29 = ___xr1;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (uint32_t)L_29);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___table2;
		int32_t L_31 = V_1;
		uint32_t L_32 = ___xl0;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_31, 1))), (uint32_t)L_32);
		uint32_t L_33 = ___xl0;
		___xr1 = L_33;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___table2;
		int32_t L_35 = V_1;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		uint32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		___xl0 = L_37;
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_38, 2));
	}

IL_0076:
	{
		int32_t L_39 = V_1;
		int32_t L_40 = V_0;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.BlowfishEngine::SetKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlowfishEngine_SetKey_m5E20BEA9840271E1648E897201C8A1C500541185 (BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		il2cpp_codegen_runtime_class_init_inline(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___KS0_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->___S0_9;
		int32_t L_2 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___SBOX_SK_7;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, 0, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___KS1_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = __this->___S1_10;
		int32_t L_5 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___SBOX_SK_7;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___KS2_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = __this->___S2_11;
		int32_t L_8 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___SBOX_SK_7;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, 0, (RuntimeArray*)L_7, 0, L_8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___KS3_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->___S3_12;
		int32_t L_11 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___SBOX_SK_7;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___KP_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = __this->___P_13;
		int32_t L_14 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___P_SZ_8;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, 0, (RuntimeArray*)L_13, 0, L_14, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___key0;
		NullCheck(L_15);
		V_0 = ((int32_t)(((RuntimeArray*)L_15)->max_length));
		V_1 = 0;
		V_2 = 0;
		goto IL_00ba;
	}

IL_007d:
	{
		V_3 = 0;
		V_4 = 0;
		goto IL_009c;
	}

IL_0084:
	{
		uint32_t L_16 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___key0;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		NullCheck(L_17);
		int32_t L_20 = L_19;
		uint8_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_3 = ((int32_t)(((int32_t)((int32_t)L_16<<8))|(int32_t)L_21));
		int32_t L_22 = V_1;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0096;
		}
	}
	{
		V_1 = 0;
	}

IL_0096:
	{
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_009c:
	{
		int32_t L_25 = V_4;
		if ((((int32_t)L_25) < ((int32_t)4)))
		{
			goto IL_0084;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = __this->___P_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = L_26;
		V_5 = L_27;
		int32_t L_28 = V_2;
		int32_t L_29 = L_28;
		V_6 = L_29;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = V_5;
		intptr_t L_31 = V_6;
		NullCheck(L_30);
		intptr_t L_32 = L_31;
		uint32_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		uint32_t L_34 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (uint32_t)((int32_t)((int32_t)L_33^(int32_t)L_34)));
		int32_t L_35 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00ba:
	{
		int32_t L_36 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var);
		int32_t L_37 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___P_SZ_8;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_007d;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = __this->___P_13;
		BlowfishEngine_ProcessTable_mB40A43A5D62BC92EB9375C6C5467251CAEEDD903(__this, 0, 0, L_38, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = __this->___P_13;
		il2cpp_codegen_runtime_class_init_inline(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var);
		int32_t L_40 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___P_SZ_8;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_subtract(L_40, 2));
		uint32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = __this->___P_13;
		int32_t L_44 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___P_SZ_8;
		NullCheck(L_43);
		int32_t L_45 = ((int32_t)il2cpp_codegen_subtract(L_44, 1));
		uint32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = __this->___S0_9;
		BlowfishEngine_ProcessTable_mB40A43A5D62BC92EB9375C6C5467251CAEEDD903(__this, L_42, L_46, L_47, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = __this->___S0_9;
		int32_t L_49 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___SBOX_SK_7;
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)il2cpp_codegen_subtract(L_49, 2));
		uint32_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = __this->___S0_9;
		int32_t L_53 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___SBOX_SK_7;
		NullCheck(L_52);
		int32_t L_54 = ((int32_t)il2cpp_codegen_subtract(L_53, 1));
		uint32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = __this->___S1_10;
		BlowfishEngine_ProcessTable_mB40A43A5D62BC92EB9375C6C5467251CAEEDD903(__this, L_51, L_55, L_56, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = __this->___S1_10;
		int32_t L_58 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___SBOX_SK_7;
		NullCheck(L_57);
		int32_t L_59 = ((int32_t)il2cpp_codegen_subtract(L_58, 2));
		uint32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = __this->___S1_10;
		int32_t L_62 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___SBOX_SK_7;
		NullCheck(L_61);
		int32_t L_63 = ((int32_t)il2cpp_codegen_subtract(L_62, 1));
		uint32_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = __this->___S2_11;
		BlowfishEngine_ProcessTable_mB40A43A5D62BC92EB9375C6C5467251CAEEDD903(__this, L_60, L_64, L_65, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = __this->___S2_11;
		int32_t L_67 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___SBOX_SK_7;
		NullCheck(L_66);
		int32_t L_68 = ((int32_t)il2cpp_codegen_subtract(L_67, 2));
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = __this->___S2_11;
		int32_t L_71 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___SBOX_SK_7;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_subtract(L_71, 1));
		uint32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = __this->___S3_12;
		BlowfishEngine_ProcessTable_mB40A43A5D62BC92EB9375C6C5467251CAEEDD903(__this, L_69, L_73, L_74, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.BlowfishEngine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlowfishEngine_EncryptBlock_m6E20F54EC811353C022EFB80B89F56C4E6DB1E51 (BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___srcIndex1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dst2, int32_t ___dstIndex3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___src0;
		int32_t L_1 = ___srcIndex1;
		uint32_t L_2;
		L_2 = Pack_BE_To_UInt32_m6FD7E3B8014FC134F0CE2EA18C7DCD8C9EF64B63(L_0, L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___src0;
		int32_t L_4 = ___srcIndex1;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_m6FD7E3B8014FC134F0CE2EA18C7DCD8C9EF64B63(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		V_1 = L_5;
		uint32_t L_6 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = __this->___P_13;
		NullCheck(L_7);
		int32_t L_8 = 0;
		uint32_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int32_t)((int32_t)L_6^(int32_t)L_9));
		V_2 = 1;
		goto IL_004d;
	}

IL_0021:
	{
		uint32_t L_10 = V_1;
		uint32_t L_11 = V_0;
		uint32_t L_12;
		L_12 = BlowfishEngine_F_m5BDBDB7EC40BF7F507F551EDD7341C5FC8277177(__this, L_11, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = __this->___P_13;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		uint32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_1 = ((int32_t)((int32_t)L_10^((int32_t)((int32_t)L_12^(int32_t)L_16))));
		uint32_t L_17 = V_0;
		uint32_t L_18 = V_1;
		uint32_t L_19;
		L_19 = BlowfishEngine_F_m5BDBDB7EC40BF7F507F551EDD7341C5FC8277177(__this, L_18, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = __this->___P_13;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		uint32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_0 = ((int32_t)((int32_t)L_17^((int32_t)((int32_t)L_19^(int32_t)L_23))));
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 2));
	}

IL_004d:
	{
		int32_t L_25 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var);
		int32_t L_26 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___ROUNDS_6;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0021;
		}
	}
	{
		uint32_t L_27 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = __this->___P_13;
		il2cpp_codegen_runtime_class_init_inline(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var);
		int32_t L_29 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___ROUNDS_6;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		uint32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_1 = ((int32_t)((int32_t)L_27^(int32_t)L_31));
		uint32_t L_32 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ___dst2;
		int32_t L_34 = ___dstIndex3;
		Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB(L_32, L_33, L_34, NULL);
		uint32_t L_35 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___dst2;
		int32_t L_37 = ___dstIndex3;
		Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB(L_35, L_36, ((int32_t)il2cpp_codegen_add(L_37, 4)), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.BlowfishEngine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlowfishEngine_DecryptBlock_m13E84A8FEF4B01FF6FC57EB07D917194BF24EBC8 (BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___srcIndex1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dst2, int32_t ___dstIndex3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___src0;
		int32_t L_1 = ___srcIndex1;
		uint32_t L_2;
		L_2 = Pack_BE_To_UInt32_m6FD7E3B8014FC134F0CE2EA18C7DCD8C9EF64B63(L_0, L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___src0;
		int32_t L_4 = ___srcIndex1;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_m6FD7E3B8014FC134F0CE2EA18C7DCD8C9EF64B63(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		V_1 = L_5;
		uint32_t L_6 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = __this->___P_13;
		il2cpp_codegen_runtime_class_init_inline(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var);
		int32_t L_8 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___ROUNDS_6;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		uint32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = ((int32_t)((int32_t)L_6^(int32_t)L_10));
		int32_t L_11 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___ROUNDS_6;
		V_2 = L_11;
		goto IL_0057;
	}

IL_002b:
	{
		uint32_t L_12 = V_1;
		uint32_t L_13 = V_0;
		uint32_t L_14;
		L_14 = BlowfishEngine_F_m5BDBDB7EC40BF7F507F551EDD7341C5FC8277177(__this, L_13, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = __this->___P_13;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_1 = ((int32_t)((int32_t)L_12^((int32_t)((int32_t)L_14^(int32_t)L_18))));
		uint32_t L_19 = V_0;
		uint32_t L_20 = V_1;
		uint32_t L_21;
		L_21 = BlowfishEngine_F_m5BDBDB7EC40BF7F507F551EDD7341C5FC8277177(__this, L_20, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = __this->___P_13;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		uint32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_0 = ((int32_t)((int32_t)L_19^((int32_t)((int32_t)L_21^(int32_t)L_25))));
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_26, 2));
	}

IL_0057:
	{
		int32_t L_27 = V_2;
		if ((((int32_t)L_27) > ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		uint32_t L_28 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = __this->___P_13;
		NullCheck(L_29);
		int32_t L_30 = 0;
		uint32_t L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_1 = ((int32_t)((int32_t)L_28^(int32_t)L_31));
		uint32_t L_32 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ___dst2;
		int32_t L_34 = ___dstIndex3;
		Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB(L_32, L_33, L_34, NULL);
		uint32_t L_35 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___dst2;
		int32_t L_37 = ___dstIndex3;
		Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB(L_35, L_36, ((int32_t)il2cpp_codegen_add(L_37, 4)), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.BlowfishEngine::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlowfishEngine__cctor_mB32B62A9056A0B7E74ECDBE4B60A61BFDA150ED6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001479U2D1_75_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001479U2D2_76_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001479U2D3_77_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001479U2D4_78_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001479U2D5_79_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001479U2D1_75_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___KP_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___KP_1), (void*)L_1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001479U2D2_76_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___KS0_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___KS0_2), (void*)L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001479U2D3_77_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_7, L_8, NULL);
		((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___KS1_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___KS1_3), (void*)L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001479U2D4_78_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_10, L_11, NULL);
		((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___KS2_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___KS2_4), (void*)L_10);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = L_12;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001479U2D5_79_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_13, L_14, NULL);
		((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___KS3_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___KS3_5), (void*)L_13);
		((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___ROUNDS_6 = ((int32_t)16);
		((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___SBOX_SK_7 = ((int32_t)256);
		int32_t L_15 = ((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___ROUNDS_6;
		((BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_StaticFields*)il2cpp_codegen_static_fields_for(BlowfishEngine_tBAE5AEF4C53628B0E5E18593C318F42B9914913A_il2cpp_TypeInfo_var))->___P_SZ_8 = ((int32_t)il2cpp_codegen_add(L_15, 2));
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
// System.UInt32 Org.BouncyCastle.Crypto.Engines.CamelliaEngine::rightRotate(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CamelliaEngine_rightRotate_mA31434531A34FC058E04B8E56703E7661343625D (uint32_t ___x0, int32_t ___s1, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___x0;
		int32_t L_1 = ___s1;
		uint32_t L_2 = ___x0;
		int32_t L_3 = ___s1;
		return ((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)L_0>>((int32_t)(L_1&((int32_t)31))))), ((int32_t)((int32_t)L_2<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_3))&((int32_t)31)))))));
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Engines.CamelliaEngine::leftRotate(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CamelliaEngine_leftRotate_m018E89963B1AABC9FEF123EA0750858D0EF5936C (uint32_t ___x0, int32_t ___s1, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___x0;
		int32_t L_1 = ___s1;
		uint32_t L_2 = ___x0;
		int32_t L_3 = ___s1;
		return ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_0<<((int32_t)(L_1&((int32_t)31))))), ((int32_t)((uint32_t)L_2>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_3))&((int32_t)31)))))));
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::roldq(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaEngine_roldq_m6EC38D7B8E75352052E223B3E6AA9CE328A4A5D4 (int32_t ___rot0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ki1, int32_t ___ioff2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ko3, int32_t ___ooff4, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___ko3;
		int32_t L_1 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___ki1;
		int32_t L_3 = ___ioff2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___ki1;
		int32_t L_8 = ___ioff2;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(1, L_8));
		uint32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = ___rot0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)((int32_t)(((int32_t)((int32_t)L_5<<((int32_t)(L_6&((int32_t)31)))))|((int32_t)((uint32_t)L_10>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_11))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___ko3;
		int32_t L_13 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___ki1;
		int32_t L_15 = ___ioff2;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(1, L_15));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ___ki1;
		int32_t L_20 = ___ioff2;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(2, L_20));
		uint32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = ___rot0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(1, L_13))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_17<<((int32_t)(L_18&((int32_t)31)))))|((int32_t)((uint32_t)L_22>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_23))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___ko3;
		int32_t L_25 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = ___ki1;
		int32_t L_27 = ___ioff2;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(2, L_27));
		uint32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___ki1;
		int32_t L_32 = ___ioff2;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(3, L_32));
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = ___rot0;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(2, L_25))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_29<<((int32_t)(L_30&((int32_t)31)))))|((int32_t)((uint32_t)L_34>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_35))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___ko3;
		int32_t L_37 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = ___ki1;
		int32_t L_39 = ___ioff2;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(3, L_39));
		uint32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		int32_t L_42 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___ki1;
		int32_t L_44 = ___ioff2;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		uint32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		int32_t L_47 = ___rot0;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(3, L_37))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_41<<((int32_t)(L_42&((int32_t)31)))))|((int32_t)((uint32_t)L_46>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_47))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___ki1;
		int32_t L_49 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = ___ko3;
		int32_t L_51 = ___ooff4;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		uint32_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (uint32_t)L_53);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___ki1;
		int32_t L_55 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___ko3;
		int32_t L_57 = ___ooff4;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(1, L_57));
		uint32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(1, L_55))), (uint32_t)L_59);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___ki1;
		int32_t L_61 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___ko3;
		int32_t L_63 = ___ooff4;
		NullCheck(L_62);
		int32_t L_64 = ((int32_t)il2cpp_codegen_add(2, L_63));
		uint32_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(2, L_61))), (uint32_t)L_65);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___ki1;
		int32_t L_67 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = ___ko3;
		int32_t L_69 = ___ooff4;
		NullCheck(L_68);
		int32_t L_70 = ((int32_t)il2cpp_codegen_add(3, L_69));
		uint32_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(3, L_67))), (uint32_t)L_71);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::decroldq(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaEngine_decroldq_mAF15E5EA07129A15F3C0ADC8D2D427428D1BDE0E (int32_t ___rot0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ki1, int32_t ___ioff2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ko3, int32_t ___ooff4, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___ko3;
		int32_t L_1 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___ki1;
		int32_t L_3 = ___ioff2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___ki1;
		int32_t L_8 = ___ioff2;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(1, L_8));
		uint32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = ___rot0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(2, L_1))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_5<<((int32_t)(L_6&((int32_t)31)))))|((int32_t)((uint32_t)L_10>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_11))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___ko3;
		int32_t L_13 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___ki1;
		int32_t L_15 = ___ioff2;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(1, L_15));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ___ki1;
		int32_t L_20 = ___ioff2;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(2, L_20));
		uint32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = ___rot0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(3, L_13))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_17<<((int32_t)(L_18&((int32_t)31)))))|((int32_t)((uint32_t)L_22>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_23))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___ko3;
		int32_t L_25 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = ___ki1;
		int32_t L_27 = ___ioff2;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(2, L_27));
		uint32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___ki1;
		int32_t L_32 = ___ioff2;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(3, L_32));
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = ___rot0;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint32_t)((int32_t)(((int32_t)((int32_t)L_29<<((int32_t)(L_30&((int32_t)31)))))|((int32_t)((uint32_t)L_34>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_35))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___ko3;
		int32_t L_37 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = ___ki1;
		int32_t L_39 = ___ioff2;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(3, L_39));
		uint32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		int32_t L_42 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___ki1;
		int32_t L_44 = ___ioff2;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		uint32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		int32_t L_47 = ___rot0;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(1, L_37))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_41<<((int32_t)(L_42&((int32_t)31)))))|((int32_t)((uint32_t)L_46>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_47))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___ki1;
		int32_t L_49 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = ___ko3;
		int32_t L_51 = ___ooff4;
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add(2, L_51));
		uint32_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (uint32_t)L_53);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___ki1;
		int32_t L_55 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___ko3;
		int32_t L_57 = ___ooff4;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(3, L_57));
		uint32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(1, L_55))), (uint32_t)L_59);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___ki1;
		int32_t L_61 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___ko3;
		int32_t L_63 = ___ooff4;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		uint32_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(2, L_61))), (uint32_t)L_65);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___ki1;
		int32_t L_67 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = ___ko3;
		int32_t L_69 = ___ooff4;
		NullCheck(L_68);
		int32_t L_70 = ((int32_t)il2cpp_codegen_add(1, L_69));
		uint32_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(3, L_67))), (uint32_t)L_71);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::roldqo32(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaEngine_roldqo32_m7F91A20A2D963CF6E1E5A6E3362A1BC59AA22950 (int32_t ___rot0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ki1, int32_t ___ioff2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ko3, int32_t ___ooff4, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___ko3;
		int32_t L_1 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___ki1;
		int32_t L_3 = ___ioff2;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(1, L_3));
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___ki1;
		int32_t L_8 = ___ioff2;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(2, L_8));
		uint32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = ___rot0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)((int32_t)(((int32_t)((int32_t)L_5<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_6, ((int32_t)32)))&((int32_t)31)))))|((int32_t)((uint32_t)L_10>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_11))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___ko3;
		int32_t L_13 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___ki1;
		int32_t L_15 = ___ioff2;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(2, L_15));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ___ki1;
		int32_t L_20 = ___ioff2;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(3, L_20));
		uint32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = ___rot0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(1, L_13))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_17<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)32)))&((int32_t)31)))))|((int32_t)((uint32_t)L_22>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_23))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___ko3;
		int32_t L_25 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = ___ki1;
		int32_t L_27 = ___ioff2;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(3, L_27));
		uint32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___ki1;
		int32_t L_32 = ___ioff2;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = ___rot0;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(2, L_25))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_29<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_30, ((int32_t)32)))&((int32_t)31)))))|((int32_t)((uint32_t)L_34>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_35))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___ko3;
		int32_t L_37 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = ___ki1;
		int32_t L_39 = ___ioff2;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		uint32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		int32_t L_42 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___ki1;
		int32_t L_44 = ___ioff2;
		NullCheck(L_43);
		int32_t L_45 = ((int32_t)il2cpp_codegen_add(1, L_44));
		uint32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		int32_t L_47 = ___rot0;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(3, L_37))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_41<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_42, ((int32_t)32)))&((int32_t)31)))))|((int32_t)((uint32_t)L_46>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_47))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___ki1;
		int32_t L_49 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = ___ko3;
		int32_t L_51 = ___ooff4;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		uint32_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (uint32_t)L_53);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___ki1;
		int32_t L_55 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___ko3;
		int32_t L_57 = ___ooff4;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(1, L_57));
		uint32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(1, L_55))), (uint32_t)L_59);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___ki1;
		int32_t L_61 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___ko3;
		int32_t L_63 = ___ooff4;
		NullCheck(L_62);
		int32_t L_64 = ((int32_t)il2cpp_codegen_add(2, L_63));
		uint32_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(2, L_61))), (uint32_t)L_65);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___ki1;
		int32_t L_67 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = ___ko3;
		int32_t L_69 = ___ooff4;
		NullCheck(L_68);
		int32_t L_70 = ((int32_t)il2cpp_codegen_add(3, L_69));
		uint32_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(3, L_67))), (uint32_t)L_71);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::decroldqo32(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaEngine_decroldqo32_m222BC2AD0C972CDC5BB40375AC459FB824952121 (int32_t ___rot0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ki1, int32_t ___ioff2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ko3, int32_t ___ooff4, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___ko3;
		int32_t L_1 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___ki1;
		int32_t L_3 = ___ioff2;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(1, L_3));
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___ki1;
		int32_t L_8 = ___ioff2;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(2, L_8));
		uint32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = ___rot0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(2, L_1))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_5<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_6, ((int32_t)32)))&((int32_t)31)))))|((int32_t)((uint32_t)L_10>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_11))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___ko3;
		int32_t L_13 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___ki1;
		int32_t L_15 = ___ioff2;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(2, L_15));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ___ki1;
		int32_t L_20 = ___ioff2;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(3, L_20));
		uint32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = ___rot0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(3, L_13))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_17<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)32)))&((int32_t)31)))))|((int32_t)((uint32_t)L_22>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_23))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___ko3;
		int32_t L_25 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = ___ki1;
		int32_t L_27 = ___ioff2;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(3, L_27));
		uint32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___ki1;
		int32_t L_32 = ___ioff2;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = ___rot0;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint32_t)((int32_t)(((int32_t)((int32_t)L_29<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_30, ((int32_t)32)))&((int32_t)31)))))|((int32_t)((uint32_t)L_34>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_35))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___ko3;
		int32_t L_37 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = ___ki1;
		int32_t L_39 = ___ioff2;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		uint32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		int32_t L_42 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___ki1;
		int32_t L_44 = ___ioff2;
		NullCheck(L_43);
		int32_t L_45 = ((int32_t)il2cpp_codegen_add(1, L_44));
		uint32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		int32_t L_47 = ___rot0;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(1, L_37))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_41<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_42, ((int32_t)32)))&((int32_t)31)))))|((int32_t)((uint32_t)L_46>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_47))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___ki1;
		int32_t L_49 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = ___ko3;
		int32_t L_51 = ___ooff4;
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add(2, L_51));
		uint32_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (uint32_t)L_53);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___ki1;
		int32_t L_55 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___ko3;
		int32_t L_57 = ___ooff4;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(3, L_57));
		uint32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(1, L_55))), (uint32_t)L_59);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___ki1;
		int32_t L_61 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___ko3;
		int32_t L_63 = ___ooff4;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		uint32_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(2, L_61))), (uint32_t)L_65);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___ki1;
		int32_t L_67 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = ___ko3;
		int32_t L_69 = ___ooff4;
		NullCheck(L_68);
		int32_t L_70 = ((int32_t)il2cpp_codegen_add(1, L_69));
		uint32_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(3, L_67))), (uint32_t)L_71);
		return;
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Engines.CamelliaEngine::bytes2uint(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CamelliaEngine_bytes2uint_m425465AF25BA13E378B2A5F7DC15F5382D1D7411 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___offset1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0014;
	}

IL_0006:
	{
		uint32_t L_0 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___src0;
		int32_t L_2 = V_1;
		int32_t L_3 = ___offset1;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		uint8_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_0<<8)), (int32_t)L_5));
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0014:
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) < ((int32_t)4)))
		{
			goto IL_0006;
		}
	}
	{
		uint32_t L_8 = V_0;
		return L_8;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::uint2bytes(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaEngine_uint2bytes_mFFD7EB0D8A842004807B497F6FBE31448FC22B4B (uint32_t ___word0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dst1, int32_t ___offset2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___dst1;
		int32_t L_1 = V_0;
		int32_t L_2 = ___offset2;
		uint32_t L_3 = ___word0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(3, L_1)), L_2))), (uint8_t)((int32_t)(uint8_t)L_3));
		uint32_t L_4 = ___word0;
		___word0 = ((int32_t)((uint32_t)L_4>>8));
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0016:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)4)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::camelliaF2(System.UInt32[],System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaEngine_camelliaF2_mDD60F9B6150A3A836920AC85472B8B79E08159AE (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___skey1, int32_t ___keyoff2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___s0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___skey1;
		int32_t L_4 = ___keyoff2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int32_t)((int32_t)L_2^(int32_t)L_6));
		il2cpp_codegen_runtime_class_init_inline(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SBOX4_4404_9;
		uint32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)(uint8_t)L_8);
		uint32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = L_10;
		uint32_t L_11 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SBOX3_3033_11;
		uint32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)(uint8_t)((int32_t)((uint32_t)L_13>>8)));
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_2 = ((int32_t)((int32_t)L_11^(int32_t)L_15));
		uint32_t L_16 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SBOX2_0222_10;
		uint32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)(uint8_t)((int32_t)((uint32_t)L_18>>((int32_t)16))));
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_2 = ((int32_t)((int32_t)L_16^(int32_t)L_20));
		uint32_t L_21 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SBOX1_1110_8;
		uint32_t L_23 = V_0;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)(uint8_t)((int32_t)((uint32_t)L_23>>((int32_t)24))));
		uint32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_2 = ((int32_t)((int32_t)L_21^(int32_t)L_25));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = ___s0;
		NullCheck(L_26);
		int32_t L_27 = 1;
		uint32_t L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = ___skey1;
		int32_t L_30 = ___keyoff2;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(1, L_30));
		uint32_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_1 = ((int32_t)((int32_t)L_28^(int32_t)L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SBOX1_1110_8;
		uint32_t L_34 = V_1;
		NullCheck(L_33);
		int32_t L_35 = ((int32_t)(uint8_t)L_34);
		uint32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_3 = L_36;
		uint32_t L_37 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = ((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SBOX4_4404_9;
		uint32_t L_39 = V_1;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)(uint8_t)((int32_t)((uint32_t)L_39>>8)));
		uint32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_3 = ((int32_t)((int32_t)L_37^(int32_t)L_41));
		uint32_t L_42 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SBOX3_3033_11;
		uint32_t L_44 = V_1;
		NullCheck(L_43);
		int32_t L_45 = ((int32_t)(uint8_t)((int32_t)((uint32_t)L_44>>((int32_t)16))));
		uint32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_3 = ((int32_t)((int32_t)L_42^(int32_t)L_46));
		uint32_t L_47 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SBOX2_0222_10;
		uint32_t L_49 = V_1;
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)(uint8_t)((int32_t)((uint32_t)L_49>>((int32_t)24))));
		uint32_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_3 = ((int32_t)((int32_t)L_47^(int32_t)L_51));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = ___s0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = L_52;
		V_4 = L_53;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = V_4;
		NullCheck(L_54);
		int32_t L_55 = 2;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		uint32_t L_57 = V_2;
		uint32_t L_58 = V_3;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)((int32_t)L_56^((int32_t)((int32_t)L_57^(int32_t)L_58)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ___s0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = L_59;
		V_4 = L_60;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = V_4;
		NullCheck(L_61);
		int32_t L_62 = 3;
		uint32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		uint32_t L_64 = V_2;
		uint32_t L_65 = V_3;
		uint32_t L_66 = V_2;
		uint32_t L_67;
		L_67 = CamelliaEngine_rightRotate_mA31434531A34FC058E04B8E56703E7661343625D(L_66, 8, NULL);
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)((int32_t)L_63^((int32_t)(((int32_t)((int32_t)L_64^(int32_t)L_65))^(int32_t)L_67)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = ___s0;
		NullCheck(L_68);
		int32_t L_69 = 2;
		uint32_t L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = ___skey1;
		int32_t L_72 = ___keyoff2;
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_add(2, L_72));
		uint32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		V_0 = ((int32_t)((int32_t)L_70^(int32_t)L_74));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SBOX4_4404_9;
		uint32_t L_76 = V_0;
		NullCheck(L_75);
		int32_t L_77 = ((int32_t)(uint8_t)L_76);
		uint32_t L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		V_2 = L_78;
		uint32_t L_79 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = ((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SBOX3_3033_11;
		uint32_t L_81 = V_0;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)(uint8_t)((int32_t)((uint32_t)L_81>>8)));
		uint32_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		V_2 = ((int32_t)((int32_t)L_79^(int32_t)L_83));
		uint32_t L_84 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = ((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SBOX2_0222_10;
		uint32_t L_86 = V_0;
		NullCheck(L_85);
		int32_t L_87 = ((int32_t)(uint8_t)((int32_t)((uint32_t)L_86>>((int32_t)16))));
		uint32_t L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_2 = ((int32_t)((int32_t)L_84^(int32_t)L_88));
		uint32_t L_89 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_90 = ((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SBOX1_1110_8;
		uint32_t L_91 = V_0;
		NullCheck(L_90);
		int32_t L_92 = ((int32_t)(uint8_t)((int32_t)((uint32_t)L_91>>((int32_t)24))));
		uint32_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		V_2 = ((int32_t)((int32_t)L_89^(int32_t)L_93));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_94 = ___s0;
		NullCheck(L_94);
		int32_t L_95 = 3;
		uint32_t L_96 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_97 = ___skey1;
		int32_t L_98 = ___keyoff2;
		NullCheck(L_97);
		int32_t L_99 = ((int32_t)il2cpp_codegen_add(3, L_98));
		uint32_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		V_1 = ((int32_t)((int32_t)L_96^(int32_t)L_100));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_101 = ((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SBOX1_1110_8;
		uint32_t L_102 = V_1;
		NullCheck(L_101);
		int32_t L_103 = ((int32_t)(uint8_t)L_102);
		uint32_t L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		V_3 = L_104;
		uint32_t L_105 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_106 = ((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SBOX4_4404_9;
		uint32_t L_107 = V_1;
		NullCheck(L_106);
		int32_t L_108 = ((int32_t)(uint8_t)((int32_t)((uint32_t)L_107>>8)));
		uint32_t L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		V_3 = ((int32_t)((int32_t)L_105^(int32_t)L_109));
		uint32_t L_110 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_111 = ((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SBOX3_3033_11;
		uint32_t L_112 = V_1;
		NullCheck(L_111);
		int32_t L_113 = ((int32_t)(uint8_t)((int32_t)((uint32_t)L_112>>((int32_t)16))));
		uint32_t L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		V_3 = ((int32_t)((int32_t)L_110^(int32_t)L_114));
		uint32_t L_115 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_116 = ((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SBOX2_0222_10;
		uint32_t L_117 = V_1;
		NullCheck(L_116);
		int32_t L_118 = ((int32_t)(uint8_t)((int32_t)((uint32_t)L_117>>((int32_t)24))));
		uint32_t L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		V_3 = ((int32_t)((int32_t)L_115^(int32_t)L_119));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_120 = ___s0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_121 = L_120;
		V_4 = L_121;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_122 = V_4;
		NullCheck(L_122);
		int32_t L_123 = 0;
		uint32_t L_124 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		uint32_t L_125 = V_2;
		uint32_t L_126 = V_3;
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)((int32_t)L_124^((int32_t)((int32_t)L_125^(int32_t)L_126)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_127 = ___s0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_128 = L_127;
		V_4 = L_128;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_129 = V_4;
		NullCheck(L_129);
		int32_t L_130 = 1;
		uint32_t L_131 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		uint32_t L_132 = V_2;
		uint32_t L_133 = V_3;
		uint32_t L_134 = V_2;
		uint32_t L_135;
		L_135 = CamelliaEngine_rightRotate_mA31434531A34FC058E04B8E56703E7661343625D(L_134, 8, NULL);
		NullCheck(L_128);
		(L_128)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)((int32_t)L_131^((int32_t)(((int32_t)((int32_t)L_132^(int32_t)L_133))^(int32_t)L_135)))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::camelliaFLs(System.UInt32[],System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaEngine_camelliaFLs_m88A16D2F400657CF07C33D5125EDFAB17DA5C66B (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___fkey1, int32_t ___keyoff2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___s0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		V_0 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = 1;
		uint32_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___s0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		uint32_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___fkey1;
		int32_t L_9 = ___keyoff2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		il2cpp_codegen_runtime_class_init_inline(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var);
		uint32_t L_12;
		L_12 = CamelliaEngine_leftRotate_m018E89963B1AABC9FEF123EA0750858D0EF5936C(((int32_t)((int32_t)L_7&(int32_t)L_11)), 1, NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)((int32_t)L_4^(int32_t)L_12)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___s0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = L_13;
		V_0 = L_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = 0;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___fkey1;
		int32_t L_19 = ___keyoff2;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(1, L_19));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___s0;
		NullCheck(L_22);
		int32_t L_23 = 1;
		uint32_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)((int32_t)L_17^((int32_t)((int32_t)L_21|(int32_t)L_24)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___s0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = L_25;
		V_0 = L_26;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = 2;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___fkey1;
		int32_t L_31 = ___keyoff2;
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add(3, L_31));
		uint32_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___s0;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)((int32_t)L_29^((int32_t)((int32_t)L_33|(int32_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___s0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = L_37;
		V_0 = L_38;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = V_0;
		NullCheck(L_39);
		int32_t L_40 = 3;
		uint32_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = ___fkey1;
		int32_t L_43 = ___keyoff2;
		NullCheck(L_42);
		int32_t L_44 = ((int32_t)il2cpp_codegen_add(2, L_43));
		uint32_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___s0;
		NullCheck(L_46);
		int32_t L_47 = 2;
		uint32_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		uint32_t L_49;
		L_49 = CamelliaEngine_leftRotate_m018E89963B1AABC9FEF123EA0750858D0EF5936C(((int32_t)((int32_t)L_45&(int32_t)L_48)), 1, NULL);
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)((int32_t)L_41^(int32_t)L_49)));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::setKey(System.Boolean,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaEngine_setKey_m538527E8517868958D5A00C945D47D9ECD8FF852 (CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC* __this, bool ___forEncryption0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	uint32_t V_8 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_9 = NULL;
	intptr_t V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		V_2 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		V_3 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___key1;
		NullCheck(L_4);
		V_7 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		int32_t L_5 = V_7;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)16))))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_6 = V_7;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)24))))
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_7 = V_7;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)32))))
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_0140;
	}

IL_003b:
	{
		__this->____keyIs128_2 = (bool)1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___key1;
		il2cpp_codegen_runtime_class_init_inline(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var);
		uint32_t L_10;
		L_10 = CamelliaEngine_bytes2uint_m425465AF25BA13E378B2A5F7DC15F5382D1D7411(L_9, 0, NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_10);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___key1;
		uint32_t L_13;
		L_13 = CamelliaEngine_bytes2uint_m425465AF25BA13E378B2A5F7DC15F5382D1D7411(L_12, 4, NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_13);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___key1;
		uint32_t L_16;
		L_16 = CamelliaEngine_bytes2uint_m425465AF25BA13E378B2A5F7DC15F5382D1D7411(L_15, 8, NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_16);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___key1;
		uint32_t L_19;
		L_19 = CamelliaEngine_bytes2uint_m425465AF25BA13E378B2A5F7DC15F5382D1D7411(L_18, ((int32_t)12), NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_0;
		int32_t L_24 = 0;
		V_8 = L_24;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)L_24);
		uint32_t L_25 = V_8;
		uint32_t L_26 = L_25;
		V_8 = L_26;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)L_26);
		uint32_t L_27 = V_8;
		uint32_t L_28 = L_27;
		V_8 = L_28;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)L_28);
		uint32_t L_29 = V_8;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)L_29);
		goto IL_014b;
	}

IL_008c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___key1;
		il2cpp_codegen_runtime_class_init_inline(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var);
		uint32_t L_32;
		L_32 = CamelliaEngine_bytes2uint_m425465AF25BA13E378B2A5F7DC15F5382D1D7411(L_31, 0, NULL);
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_32);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___key1;
		uint32_t L_35;
		L_35 = CamelliaEngine_bytes2uint_m425465AF25BA13E378B2A5F7DC15F5382D1D7411(L_34, 4, NULL);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_35);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ___key1;
		uint32_t L_38;
		L_38 = CamelliaEngine_bytes2uint_m425465AF25BA13E378B2A5F7DC15F5382D1D7411(L_37, 8, NULL);
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_38);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___key1;
		uint32_t L_41;
		L_41 = CamelliaEngine_bytes2uint_m425465AF25BA13E378B2A5F7DC15F5382D1D7411(L_40, ((int32_t)12), NULL);
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_41);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ___key1;
		uint32_t L_44;
		L_44 = CamelliaEngine_bytes2uint_m425465AF25BA13E378B2A5F7DC15F5382D1D7411(L_43, ((int32_t)16), NULL);
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)L_44);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ___key1;
		uint32_t L_47;
		L_47 = CamelliaEngine_bytes2uint_m425465AF25BA13E378B2A5F7DC15F5382D1D7411(L_46, ((int32_t)20), NULL);
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)L_47);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = V_0;
		NullCheck(L_49);
		int32_t L_50 = 4;
		uint32_t L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((~L_51)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = V_0;
		NullCheck(L_53);
		int32_t L_54 = 5;
		uint32_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((~L_55)));
		__this->____keyIs128_2 = (bool)0;
		goto IL_014b;
	}

IL_00e2:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = ___key1;
		il2cpp_codegen_runtime_class_init_inline(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var);
		uint32_t L_58;
		L_58 = CamelliaEngine_bytes2uint_m425465AF25BA13E378B2A5F7DC15F5382D1D7411(L_57, 0, NULL);
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_58);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = ___key1;
		uint32_t L_61;
		L_61 = CamelliaEngine_bytes2uint_m425465AF25BA13E378B2A5F7DC15F5382D1D7411(L_60, 4, NULL);
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_61);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = ___key1;
		uint32_t L_64;
		L_64 = CamelliaEngine_bytes2uint_m425465AF25BA13E378B2A5F7DC15F5382D1D7411(L_63, 8, NULL);
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_64);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = ___key1;
		uint32_t L_67;
		L_67 = CamelliaEngine_bytes2uint_m425465AF25BA13E378B2A5F7DC15F5382D1D7411(L_66, ((int32_t)12), NULL);
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_67);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = ___key1;
		uint32_t L_70;
		L_70 = CamelliaEngine_bytes2uint_m425465AF25BA13E378B2A5F7DC15F5382D1D7411(L_69, ((int32_t)16), NULL);
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)L_70);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = ___key1;
		uint32_t L_73;
		L_73 = CamelliaEngine_bytes2uint_m425465AF25BA13E378B2A5F7DC15F5382D1D7411(L_72, ((int32_t)20), NULL);
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)L_73);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = ___key1;
		uint32_t L_76;
		L_76 = CamelliaEngine_bytes2uint_m425465AF25BA13E378B2A5F7DC15F5382D1D7411(L_75, ((int32_t)24), NULL);
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)L_76);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = ___key1;
		uint32_t L_79;
		L_79 = CamelliaEngine_bytes2uint_m425465AF25BA13E378B2A5F7DC15F5382D1D7411(L_78, ((int32_t)28), NULL);
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)L_79);
		__this->____keyIs128_2 = (bool)0;
		goto IL_014b;
	}

IL_0140:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_80 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_80);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_80, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3BD050D52C303D23C47B378731DC319F7A090D03)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_80, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CamelliaEngine_setKey_m538527E8517868958D5A00C945D47D9ECD8FF852_RuntimeMethod_var)));
	}

IL_014b:
	{
		V_4 = 0;
		goto IL_0165;
	}

IL_0150:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = V_1;
		int32_t L_82 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = V_0;
		int32_t L_84 = V_4;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		uint32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = V_0;
		int32_t L_88 = V_4;
		NullCheck(L_87);
		int32_t L_89 = ((int32_t)il2cpp_codegen_add(L_88, 4));
		uint32_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(L_82), (uint32_t)((int32_t)((int32_t)L_86^(int32_t)L_90)));
		int32_t L_91 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_91, 1));
	}

IL_0165:
	{
		int32_t L_92 = V_4;
		if ((((int32_t)L_92) < ((int32_t)4)))
		{
			goto IL_0150;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_93 = V_1;
		il2cpp_codegen_runtime_class_init_inline(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_94 = ((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SIGMA_7;
		CamelliaEngine_camelliaF2_mDD60F9B6150A3A836920AC85472B8B79E08159AE(L_93, L_94, 0, NULL);
		V_5 = 0;
		goto IL_0195;
	}

IL_017b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_95 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_96 = L_95;
		V_9 = L_96;
		int32_t L_97 = V_5;
		int32_t L_98 = L_97;
		V_10 = L_98;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_99 = V_9;
		intptr_t L_100 = V_10;
		NullCheck(L_99);
		intptr_t L_101 = L_100;
		uint32_t L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_103 = V_0;
		int32_t L_104 = V_5;
		NullCheck(L_103);
		int32_t L_105 = L_104;
		uint32_t L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		NullCheck(L_96);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(L_98), (uint32_t)((int32_t)((int32_t)L_102^(int32_t)L_106)));
		int32_t L_107 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_107, 1));
	}

IL_0195:
	{
		int32_t L_108 = V_5;
		if ((((int32_t)L_108) < ((int32_t)4)))
		{
			goto IL_017b;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_109 = V_1;
		il2cpp_codegen_runtime_class_init_inline(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_110 = ((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SIGMA_7;
		CamelliaEngine_camelliaF2_mDD60F9B6150A3A836920AC85472B8B79E08159AE(L_109, L_110, 4, NULL);
		bool L_111 = __this->____keyIs128_2;
		if (!L_111)
		{
			goto IL_0442;
		}
	}
	{
		bool L_112 = ___forEncryption0;
		if (!L_112)
		{
			goto IL_02fb;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_113 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_114 = V_0;
		NullCheck(L_114);
		int32_t L_115 = 0;
		uint32_t L_116 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		NullCheck(L_113);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_116);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_117 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_118 = V_0;
		NullCheck(L_118);
		int32_t L_119 = 1;
		uint32_t L_120 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		NullCheck(L_117);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_120);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_121 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_122 = V_0;
		NullCheck(L_122);
		int32_t L_123 = 2;
		uint32_t L_124 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_124);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_125 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_126 = V_0;
		NullCheck(L_126);
		int32_t L_127 = 3;
		uint32_t L_128 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		NullCheck(L_125);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_128);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_129 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_130 = __this->___subkey_3;
		il2cpp_codegen_runtime_class_init_inline(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var);
		CamelliaEngine_roldq_m6EC38D7B8E75352052E223B3E6AA9CE328A4A5D4(((int32_t)15), L_129, 0, L_130, 4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_131 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_132 = __this->___subkey_3;
		CamelliaEngine_roldq_m6EC38D7B8E75352052E223B3E6AA9CE328A4A5D4(((int32_t)30), L_131, 0, L_132, ((int32_t)12), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_133 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_134 = V_3;
		CamelliaEngine_roldq_m6EC38D7B8E75352052E223B3E6AA9CE328A4A5D4(((int32_t)15), L_133, 0, L_134, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_135 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_136 = V_3;
		NullCheck(L_136);
		int32_t L_137 = 2;
		uint32_t L_138 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		NullCheck(L_135);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (uint32_t)L_138);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_139 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_140 = V_3;
		NullCheck(L_140);
		int32_t L_141 = 3;
		uint32_t L_142 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		NullCheck(L_139);
		(L_139)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (uint32_t)L_142);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_143 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_144 = __this->___ke_5;
		CamelliaEngine_roldq_m6EC38D7B8E75352052E223B3E6AA9CE328A4A5D4(((int32_t)17), L_143, 0, L_144, 4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_145 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_146 = __this->___subkey_3;
		CamelliaEngine_roldq_m6EC38D7B8E75352052E223B3E6AA9CE328A4A5D4(((int32_t)17), L_145, 0, L_146, ((int32_t)24), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_147 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_148 = __this->___subkey_3;
		CamelliaEngine_roldq_m6EC38D7B8E75352052E223B3E6AA9CE328A4A5D4(((int32_t)17), L_147, 0, L_148, ((int32_t)32), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_149 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_150 = V_1;
		NullCheck(L_150);
		int32_t L_151 = 0;
		uint32_t L_152 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		NullCheck(L_149);
		(L_149)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_152);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_153 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_154 = V_1;
		NullCheck(L_154);
		int32_t L_155 = 1;
		uint32_t L_156 = (L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_155));
		NullCheck(L_153);
		(L_153)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_156);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_157 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_158 = V_1;
		NullCheck(L_158);
		int32_t L_159 = 2;
		uint32_t L_160 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		NullCheck(L_157);
		(L_157)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_160);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_161 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_162 = V_1;
		NullCheck(L_162);
		int32_t L_163 = 3;
		uint32_t L_164 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		NullCheck(L_161);
		(L_161)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_164);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_165 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_166 = __this->___subkey_3;
		CamelliaEngine_roldq_m6EC38D7B8E75352052E223B3E6AA9CE328A4A5D4(((int32_t)15), L_165, 0, L_166, 8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_167 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_168 = __this->___ke_5;
		CamelliaEngine_roldq_m6EC38D7B8E75352052E223B3E6AA9CE328A4A5D4(((int32_t)15), L_167, 0, L_168, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_169 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_170 = V_3;
		CamelliaEngine_roldq_m6EC38D7B8E75352052E223B3E6AA9CE328A4A5D4(((int32_t)15), L_169, 0, L_170, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_171 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_172 = V_3;
		NullCheck(L_172);
		int32_t L_173 = 0;
		uint32_t L_174 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		NullCheck(L_171);
		(L_171)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (uint32_t)L_174);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_175 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_176 = V_3;
		NullCheck(L_176);
		int32_t L_177 = 1;
		uint32_t L_178 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		NullCheck(L_175);
		(L_175)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (uint32_t)L_178);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_179 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_180 = __this->___subkey_3;
		CamelliaEngine_roldq_m6EC38D7B8E75352052E223B3E6AA9CE328A4A5D4(((int32_t)15), L_179, 0, L_180, ((int32_t)20), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_181 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_182 = __this->___subkey_3;
		CamelliaEngine_roldqo32_m7F91A20A2D963CF6E1E5A6E3362A1BC59AA22950(((int32_t)34), L_181, 0, L_182, ((int32_t)28), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_183 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_184 = __this->___kw_4;
		CamelliaEngine_roldq_m6EC38D7B8E75352052E223B3E6AA9CE328A4A5D4(((int32_t)17), L_183, 0, L_184, 4, NULL);
		return;
	}

IL_02fb:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_185 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_186 = V_0;
		NullCheck(L_186);
		int32_t L_187 = 0;
		uint32_t L_188 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_187));
		NullCheck(L_185);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)L_188);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_189 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_190 = V_0;
		NullCheck(L_190);
		int32_t L_191 = 1;
		uint32_t L_192 = (L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_191));
		NullCheck(L_189);
		(L_189)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)L_192);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_193 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_194 = V_0;
		NullCheck(L_194);
		int32_t L_195 = 2;
		uint32_t L_196 = (L_194)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		NullCheck(L_193);
		(L_193)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)L_196);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_197 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_198 = V_0;
		NullCheck(L_198);
		int32_t L_199 = 3;
		uint32_t L_200 = (L_198)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		NullCheck(L_197);
		(L_197)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)L_200);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_201 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_202 = __this->___subkey_3;
		il2cpp_codegen_runtime_class_init_inline(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var);
		CamelliaEngine_decroldq_mAF15E5EA07129A15F3C0ADC8D2D427428D1BDE0E(((int32_t)15), L_201, 0, L_202, ((int32_t)28), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_203 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_204 = __this->___subkey_3;
		CamelliaEngine_decroldq_mAF15E5EA07129A15F3C0ADC8D2D427428D1BDE0E(((int32_t)30), L_203, 0, L_204, ((int32_t)20), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_205 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_206 = V_3;
		CamelliaEngine_decroldq_mAF15E5EA07129A15F3C0ADC8D2D427428D1BDE0E(((int32_t)15), L_205, 0, L_206, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_207 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_208 = V_3;
		NullCheck(L_208);
		int32_t L_209 = 0;
		uint32_t L_210 = (L_208)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		NullCheck(L_207);
		(L_207)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (uint32_t)L_210);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_211 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_212 = V_3;
		NullCheck(L_212);
		int32_t L_213 = 1;
		uint32_t L_214 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		NullCheck(L_211);
		(L_211)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (uint32_t)L_214);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_215 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_216 = __this->___ke_5;
		CamelliaEngine_decroldq_mAF15E5EA07129A15F3C0ADC8D2D427428D1BDE0E(((int32_t)17), L_215, 0, L_216, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_217 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_218 = __this->___subkey_3;
		CamelliaEngine_decroldq_mAF15E5EA07129A15F3C0ADC8D2D427428D1BDE0E(((int32_t)17), L_217, 0, L_218, 8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_219 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_220 = __this->___subkey_3;
		CamelliaEngine_decroldq_mAF15E5EA07129A15F3C0ADC8D2D427428D1BDE0E(((int32_t)17), L_219, 0, L_220, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_221 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_222 = V_1;
		NullCheck(L_222);
		int32_t L_223 = 0;
		uint32_t L_224 = (L_222)->GetAt(static_cast<il2cpp_array_size_t>(L_223));
		NullCheck(L_221);
		(L_221)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)34)), (uint32_t)L_224);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_225 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_226 = V_1;
		NullCheck(L_226);
		int32_t L_227 = 1;
		uint32_t L_228 = (L_226)->GetAt(static_cast<il2cpp_array_size_t>(L_227));
		NullCheck(L_225);
		(L_225)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)35)), (uint32_t)L_228);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_229 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_230 = V_1;
		NullCheck(L_230);
		int32_t L_231 = 2;
		uint32_t L_232 = (L_230)->GetAt(static_cast<il2cpp_array_size_t>(L_231));
		NullCheck(L_229);
		(L_229)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (uint32_t)L_232);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_233 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_234 = V_1;
		NullCheck(L_234);
		int32_t L_235 = 3;
		uint32_t L_236 = (L_234)->GetAt(static_cast<il2cpp_array_size_t>(L_235));
		NullCheck(L_233);
		(L_233)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)33)), (uint32_t)L_236);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_237 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_238 = __this->___subkey_3;
		CamelliaEngine_decroldq_mAF15E5EA07129A15F3C0ADC8D2D427428D1BDE0E(((int32_t)15), L_237, 0, L_238, ((int32_t)24), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_239 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_240 = __this->___ke_5;
		CamelliaEngine_decroldq_mAF15E5EA07129A15F3C0ADC8D2D427428D1BDE0E(((int32_t)15), L_239, 0, L_240, 4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_241 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_242 = V_3;
		CamelliaEngine_decroldq_mAF15E5EA07129A15F3C0ADC8D2D427428D1BDE0E(((int32_t)15), L_241, 0, L_242, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_243 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_244 = V_3;
		NullCheck(L_244);
		int32_t L_245 = 2;
		uint32_t L_246 = (L_244)->GetAt(static_cast<il2cpp_array_size_t>(L_245));
		NullCheck(L_243);
		(L_243)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (uint32_t)L_246);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_247 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_248 = V_3;
		NullCheck(L_248);
		int32_t L_249 = 3;
		uint32_t L_250 = (L_248)->GetAt(static_cast<il2cpp_array_size_t>(L_249));
		NullCheck(L_247);
		(L_247)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (uint32_t)L_250);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_251 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_252 = __this->___subkey_3;
		CamelliaEngine_decroldq_mAF15E5EA07129A15F3C0ADC8D2D427428D1BDE0E(((int32_t)15), L_251, 0, L_252, ((int32_t)12), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_253 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_254 = __this->___subkey_3;
		CamelliaEngine_decroldqo32_m222BC2AD0C972CDC5BB40375AC459FB824952121(((int32_t)34), L_253, 0, L_254, 4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_255 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_256 = __this->___kw_4;
		CamelliaEngine_roldq_m6EC38D7B8E75352052E223B3E6AA9CE328A4A5D4(((int32_t)17), L_255, 0, L_256, 0, NULL);
		return;
	}

IL_0442:
	{
		V_6 = 0;
		goto IL_045c;
	}

IL_0447:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_257 = V_2;
		int32_t L_258 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_259 = V_1;
		int32_t L_260 = V_6;
		NullCheck(L_259);
		int32_t L_261 = L_260;
		uint32_t L_262 = (L_259)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_263 = V_0;
		int32_t L_264 = V_6;
		NullCheck(L_263);
		int32_t L_265 = ((int32_t)il2cpp_codegen_add(L_264, 4));
		uint32_t L_266 = (L_263)->GetAt(static_cast<il2cpp_array_size_t>(L_265));
		NullCheck(L_257);
		(L_257)->SetAt(static_cast<il2cpp_array_size_t>(L_258), (uint32_t)((int32_t)((int32_t)L_262^(int32_t)L_266)));
		int32_t L_267 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_267, 1));
	}

IL_045c:
	{
		int32_t L_268 = V_6;
		if ((((int32_t)L_268) < ((int32_t)4)))
		{
			goto IL_0447;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_269 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_270 = ((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SIGMA_7;
		CamelliaEngine_camelliaF2_mDD60F9B6150A3A836920AC85472B8B79E08159AE(L_269, L_270, 8, NULL);
		bool L_271 = ___forEncryption0;
		if (!L_271)
		{
			goto IL_05e4;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_272 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_273 = V_0;
		NullCheck(L_273);
		int32_t L_274 = 0;
		uint32_t L_275 = (L_273)->GetAt(static_cast<il2cpp_array_size_t>(L_274));
		NullCheck(L_272);
		(L_272)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_275);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_276 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_277 = V_0;
		NullCheck(L_277);
		int32_t L_278 = 1;
		uint32_t L_279 = (L_277)->GetAt(static_cast<il2cpp_array_size_t>(L_278));
		NullCheck(L_276);
		(L_276)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_279);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_280 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_281 = V_0;
		NullCheck(L_281);
		int32_t L_282 = 2;
		uint32_t L_283 = (L_281)->GetAt(static_cast<il2cpp_array_size_t>(L_282));
		NullCheck(L_280);
		(L_280)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_283);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_284 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_285 = V_0;
		NullCheck(L_285);
		int32_t L_286 = 3;
		uint32_t L_287 = (L_285)->GetAt(static_cast<il2cpp_array_size_t>(L_286));
		NullCheck(L_284);
		(L_284)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_287);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_288 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_289 = __this->___subkey_3;
		il2cpp_codegen_runtime_class_init_inline(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var);
		CamelliaEngine_roldqo32_m7F91A20A2D963CF6E1E5A6E3362A1BC59AA22950(((int32_t)45), L_288, 0, L_289, ((int32_t)16), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_290 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_291 = __this->___ke_5;
		CamelliaEngine_roldq_m6EC38D7B8E75352052E223B3E6AA9CE328A4A5D4(((int32_t)15), L_290, 0, L_291, 4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_292 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_293 = __this->___subkey_3;
		CamelliaEngine_roldq_m6EC38D7B8E75352052E223B3E6AA9CE328A4A5D4(((int32_t)17), L_292, 0, L_293, ((int32_t)32), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_294 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_295 = __this->___subkey_3;
		CamelliaEngine_roldqo32_m7F91A20A2D963CF6E1E5A6E3362A1BC59AA22950(((int32_t)34), L_294, 0, L_295, ((int32_t)44), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_296 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_297 = __this->___subkey_3;
		CamelliaEngine_roldq_m6EC38D7B8E75352052E223B3E6AA9CE328A4A5D4(((int32_t)15), L_296, 4, L_297, 4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_298 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_299 = __this->___ke_5;
		CamelliaEngine_roldq_m6EC38D7B8E75352052E223B3E6AA9CE328A4A5D4(((int32_t)15), L_298, 4, L_299, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_300 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_301 = __this->___subkey_3;
		CamelliaEngine_roldq_m6EC38D7B8E75352052E223B3E6AA9CE328A4A5D4(((int32_t)30), L_300, 4, L_301, ((int32_t)24), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_302 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_303 = __this->___subkey_3;
		CamelliaEngine_roldqo32_m7F91A20A2D963CF6E1E5A6E3362A1BC59AA22950(((int32_t)34), L_302, 4, L_303, ((int32_t)36), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_304 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_305 = __this->___subkey_3;
		CamelliaEngine_roldq_m6EC38D7B8E75352052E223B3E6AA9CE328A4A5D4(((int32_t)15), L_304, 0, L_305, 8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_306 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_307 = __this->___subkey_3;
		CamelliaEngine_roldq_m6EC38D7B8E75352052E223B3E6AA9CE328A4A5D4(((int32_t)30), L_306, 0, L_307, ((int32_t)20), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_308 = __this->___ke_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_309 = V_1;
		NullCheck(L_309);
		int32_t L_310 = 1;
		uint32_t L_311 = (L_309)->GetAt(static_cast<il2cpp_array_size_t>(L_310));
		NullCheck(L_308);
		(L_308)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint32_t)L_311);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_312 = __this->___ke_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_313 = V_1;
		NullCheck(L_313);
		int32_t L_314 = 2;
		uint32_t L_315 = (L_313)->GetAt(static_cast<il2cpp_array_size_t>(L_314));
		NullCheck(L_312);
		(L_312)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint32_t)L_315);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_316 = __this->___ke_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_317 = V_1;
		NullCheck(L_317);
		int32_t L_318 = 3;
		uint32_t L_319 = (L_317)->GetAt(static_cast<il2cpp_array_size_t>(L_318));
		NullCheck(L_316);
		(L_316)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint32_t)L_319);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_320 = __this->___ke_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_321 = V_1;
		NullCheck(L_321);
		int32_t L_322 = 0;
		uint32_t L_323 = (L_321)->GetAt(static_cast<il2cpp_array_size_t>(L_322));
		NullCheck(L_320);
		(L_320)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint32_t)L_323);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_324 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_325 = __this->___subkey_3;
		CamelliaEngine_roldqo32_m7F91A20A2D963CF6E1E5A6E3362A1BC59AA22950(((int32_t)49), L_324, 0, L_325, ((int32_t)40), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_326 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_327 = V_2;
		NullCheck(L_327);
		int32_t L_328 = 0;
		uint32_t L_329 = (L_327)->GetAt(static_cast<il2cpp_array_size_t>(L_328));
		NullCheck(L_326);
		(L_326)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_329);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_330 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_331 = V_2;
		NullCheck(L_331);
		int32_t L_332 = 1;
		uint32_t L_333 = (L_331)->GetAt(static_cast<il2cpp_array_size_t>(L_332));
		NullCheck(L_330);
		(L_330)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_333);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_334 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_335 = V_2;
		NullCheck(L_335);
		int32_t L_336 = 2;
		uint32_t L_337 = (L_335)->GetAt(static_cast<il2cpp_array_size_t>(L_336));
		NullCheck(L_334);
		(L_334)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_337);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_338 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_339 = V_2;
		NullCheck(L_339);
		int32_t L_340 = 3;
		uint32_t L_341 = (L_339)->GetAt(static_cast<il2cpp_array_size_t>(L_340));
		NullCheck(L_338);
		(L_338)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_341);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_342 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_343 = __this->___subkey_3;
		CamelliaEngine_roldq_m6EC38D7B8E75352052E223B3E6AA9CE328A4A5D4(((int32_t)30), L_342, 0, L_343, ((int32_t)12), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_344 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_345 = __this->___subkey_3;
		CamelliaEngine_roldq_m6EC38D7B8E75352052E223B3E6AA9CE328A4A5D4(((int32_t)30), L_344, 0, L_345, ((int32_t)28), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_346 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_347 = __this->___kw_4;
		CamelliaEngine_roldqo32_m7F91A20A2D963CF6E1E5A6E3362A1BC59AA22950(((int32_t)51), L_346, 0, L_347, 4, NULL);
		return;
	}

IL_05e4:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_348 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_349 = V_0;
		NullCheck(L_349);
		int32_t L_350 = 0;
		uint32_t L_351 = (L_349)->GetAt(static_cast<il2cpp_array_size_t>(L_350));
		NullCheck(L_348);
		(L_348)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)L_351);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_352 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_353 = V_0;
		NullCheck(L_353);
		int32_t L_354 = 1;
		uint32_t L_355 = (L_353)->GetAt(static_cast<il2cpp_array_size_t>(L_354));
		NullCheck(L_352);
		(L_352)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)L_355);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_356 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_357 = V_0;
		NullCheck(L_357);
		int32_t L_358 = 2;
		uint32_t L_359 = (L_357)->GetAt(static_cast<il2cpp_array_size_t>(L_358));
		NullCheck(L_356);
		(L_356)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)L_359);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_360 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_361 = V_0;
		NullCheck(L_361);
		int32_t L_362 = 3;
		uint32_t L_363 = (L_361)->GetAt(static_cast<il2cpp_array_size_t>(L_362));
		NullCheck(L_360);
		(L_360)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)L_363);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_364 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_365 = __this->___subkey_3;
		il2cpp_codegen_runtime_class_init_inline(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var);
		CamelliaEngine_decroldqo32_m222BC2AD0C972CDC5BB40375AC459FB824952121(((int32_t)45), L_364, 0, L_365, ((int32_t)28), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_366 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_367 = __this->___ke_5;
		CamelliaEngine_decroldq_mAF15E5EA07129A15F3C0ADC8D2D427428D1BDE0E(((int32_t)15), L_366, 0, L_367, 4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_368 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_369 = __this->___subkey_3;
		CamelliaEngine_decroldq_mAF15E5EA07129A15F3C0ADC8D2D427428D1BDE0E(((int32_t)17), L_368, 0, L_369, ((int32_t)12), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_370 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_371 = __this->___subkey_3;
		CamelliaEngine_decroldqo32_m222BC2AD0C972CDC5BB40375AC459FB824952121(((int32_t)34), L_370, 0, L_371, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_372 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_373 = __this->___subkey_3;
		CamelliaEngine_decroldq_mAF15E5EA07129A15F3C0ADC8D2D427428D1BDE0E(((int32_t)15), L_372, 4, L_373, ((int32_t)40), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_374 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_375 = __this->___ke_5;
		CamelliaEngine_decroldq_mAF15E5EA07129A15F3C0ADC8D2D427428D1BDE0E(((int32_t)15), L_374, 4, L_375, 8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_376 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_377 = __this->___subkey_3;
		CamelliaEngine_decroldq_mAF15E5EA07129A15F3C0ADC8D2D427428D1BDE0E(((int32_t)30), L_376, 4, L_377, ((int32_t)20), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_378 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_379 = __this->___subkey_3;
		CamelliaEngine_decroldqo32_m222BC2AD0C972CDC5BB40375AC459FB824952121(((int32_t)34), L_378, 4, L_379, 8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_380 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_381 = __this->___subkey_3;
		CamelliaEngine_decroldq_mAF15E5EA07129A15F3C0ADC8D2D427428D1BDE0E(((int32_t)15), L_380, 0, L_381, ((int32_t)36), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_382 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_383 = __this->___subkey_3;
		CamelliaEngine_decroldq_mAF15E5EA07129A15F3C0ADC8D2D427428D1BDE0E(((int32_t)30), L_382, 0, L_383, ((int32_t)24), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_384 = __this->___ke_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_385 = V_1;
		NullCheck(L_385);
		int32_t L_386 = 1;
		uint32_t L_387 = (L_385)->GetAt(static_cast<il2cpp_array_size_t>(L_386));
		NullCheck(L_384);
		(L_384)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_387);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_388 = __this->___ke_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_389 = V_1;
		NullCheck(L_389);
		int32_t L_390 = 2;
		uint32_t L_391 = (L_389)->GetAt(static_cast<il2cpp_array_size_t>(L_390));
		NullCheck(L_388);
		(L_388)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_391);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_392 = __this->___ke_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_393 = V_1;
		NullCheck(L_393);
		int32_t L_394 = 3;
		uint32_t L_395 = (L_393)->GetAt(static_cast<il2cpp_array_size_t>(L_394));
		NullCheck(L_392);
		(L_392)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_395);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_396 = __this->___ke_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_397 = V_1;
		NullCheck(L_397);
		int32_t L_398 = 0;
		uint32_t L_399 = (L_397)->GetAt(static_cast<il2cpp_array_size_t>(L_398));
		NullCheck(L_396);
		(L_396)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_399);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_400 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_401 = __this->___subkey_3;
		CamelliaEngine_decroldqo32_m222BC2AD0C972CDC5BB40375AC459FB824952121(((int32_t)49), L_400, 0, L_401, 4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_402 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_403 = V_2;
		NullCheck(L_403);
		int32_t L_404 = 0;
		uint32_t L_405 = (L_403)->GetAt(static_cast<il2cpp_array_size_t>(L_404));
		NullCheck(L_402);
		(L_402)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)46)), (uint32_t)L_405);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_406 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_407 = V_2;
		NullCheck(L_407);
		int32_t L_408 = 1;
		uint32_t L_409 = (L_407)->GetAt(static_cast<il2cpp_array_size_t>(L_408));
		NullCheck(L_406);
		(L_406)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)47)), (uint32_t)L_409);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_410 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_411 = V_2;
		NullCheck(L_411);
		int32_t L_412 = 2;
		uint32_t L_413 = (L_411)->GetAt(static_cast<il2cpp_array_size_t>(L_412));
		NullCheck(L_410);
		(L_410)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)44)), (uint32_t)L_413);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_414 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_415 = V_2;
		NullCheck(L_415);
		int32_t L_416 = 3;
		uint32_t L_417 = (L_415)->GetAt(static_cast<il2cpp_array_size_t>(L_416));
		NullCheck(L_414);
		(L_414)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)45)), (uint32_t)L_417);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_418 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_419 = __this->___subkey_3;
		CamelliaEngine_decroldq_mAF15E5EA07129A15F3C0ADC8D2D427428D1BDE0E(((int32_t)30), L_418, 0, L_419, ((int32_t)32), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_420 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_421 = __this->___subkey_3;
		CamelliaEngine_decroldq_mAF15E5EA07129A15F3C0ADC8D2D427428D1BDE0E(((int32_t)30), L_420, 0, L_421, ((int32_t)16), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_422 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_423 = __this->___kw_4;
		CamelliaEngine_roldqo32_m7F91A20A2D963CF6E1E5A6E3362A1BC59AA22950(((int32_t)51), L_422, 0, L_423, 0, NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.CamelliaEngine::processBlock128(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CamelliaEngine_processBlock128_m770C16EC08516354E32F8444449FB998D5CE6696 (CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___state_6;
		int32_t L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		int32_t L_3 = ___inOff1;
		int32_t L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var);
		uint32_t L_5;
		L_5 = CamelliaEngine_bytes2uint_m425465AF25BA13E378B2A5F7DC15F5382D1D7411(L_2, ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)il2cpp_codegen_multiply(L_4, 4)))), NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6;
		V_1 = L_7;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		V_2 = L_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_1;
		intptr_t L_11 = V_2;
		NullCheck(L_10);
		intptr_t L_12 = L_11;
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = __this->___kw_4;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint32_t)((int32_t)((int32_t)L_13^(int32_t)L_17)));
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0033:
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) < ((int32_t)4)))
		{
			goto IL_0004;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = __this->___subkey_3;
		il2cpp_codegen_runtime_class_init_inline(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var);
		CamelliaEngine_camelliaF2_mDD60F9B6150A3A836920AC85472B8B79E08159AE(L_20, L_21, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = __this->___subkey_3;
		CamelliaEngine_camelliaF2_mDD60F9B6150A3A836920AC85472B8B79E08159AE(L_22, L_23, 4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = __this->___subkey_3;
		CamelliaEngine_camelliaF2_mDD60F9B6150A3A836920AC85472B8B79E08159AE(L_24, L_25, 8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = __this->___ke_5;
		CamelliaEngine_camelliaFLs_m88A16D2F400657CF07C33D5125EDFAB17DA5C66B(L_26, L_27, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = __this->___subkey_3;
		CamelliaEngine_camelliaF2_mDD60F9B6150A3A836920AC85472B8B79E08159AE(L_28, L_29, ((int32_t)12), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = __this->___subkey_3;
		CamelliaEngine_camelliaF2_mDD60F9B6150A3A836920AC85472B8B79E08159AE(L_30, L_31, ((int32_t)16), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = __this->___subkey_3;
		CamelliaEngine_camelliaF2_mDD60F9B6150A3A836920AC85472B8B79E08159AE(L_32, L_33, ((int32_t)20), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = __this->___ke_5;
		CamelliaEngine_camelliaFLs_m88A16D2F400657CF07C33D5125EDFAB17DA5C66B(L_34, L_35, 4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = __this->___subkey_3;
		CamelliaEngine_camelliaF2_mDD60F9B6150A3A836920AC85472B8B79E08159AE(L_36, L_37, ((int32_t)24), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = __this->___subkey_3;
		CamelliaEngine_camelliaF2_mDD60F9B6150A3A836920AC85472B8B79E08159AE(L_38, L_39, ((int32_t)28), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = __this->___subkey_3;
		CamelliaEngine_camelliaF2_mDD60F9B6150A3A836920AC85472B8B79E08159AE(L_40, L_41, ((int32_t)32), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = L_42;
		V_1 = L_43;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_1;
		NullCheck(L_44);
		int32_t L_45 = 2;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = __this->___kw_4;
		NullCheck(L_47);
		int32_t L_48 = 4;
		uint32_t L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)((int32_t)L_46^(int32_t)L_49)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = L_50;
		V_1 = L_51;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = V_1;
		NullCheck(L_52);
		int32_t L_53 = 3;
		uint32_t L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = __this->___kw_4;
		NullCheck(L_55);
		int32_t L_56 = 5;
		uint32_t L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)((int32_t)L_54^(int32_t)L_57)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = L_58;
		V_1 = L_59;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = V_1;
		NullCheck(L_60);
		int32_t L_61 = 0;
		uint32_t L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = __this->___kw_4;
		NullCheck(L_63);
		int32_t L_64 = 6;
		uint32_t L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)((int32_t)L_62^(int32_t)L_65)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = L_66;
		V_1 = L_67;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = V_1;
		NullCheck(L_68);
		int32_t L_69 = 1;
		uint32_t L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = __this->___kw_4;
		NullCheck(L_71);
		int32_t L_72 = 7;
		uint32_t L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)((int32_t)L_70^(int32_t)L_73)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = __this->___state_6;
		NullCheck(L_74);
		int32_t L_75 = 2;
		uint32_t L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = ___output2;
		int32_t L_78 = ___outOff3;
		CamelliaEngine_uint2bytes_mFFD7EB0D8A842004807B497F6FBE31448FC22B4B(L_76, L_77, L_78, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = __this->___state_6;
		NullCheck(L_79);
		int32_t L_80 = 3;
		uint32_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = ___output2;
		int32_t L_83 = ___outOff3;
		CamelliaEngine_uint2bytes_mFFD7EB0D8A842004807B497F6FBE31448FC22B4B(L_81, L_82, ((int32_t)il2cpp_codegen_add(L_83, 4)), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = __this->___state_6;
		NullCheck(L_84);
		int32_t L_85 = 0;
		uint32_t L_86 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_87 = ___output2;
		int32_t L_88 = ___outOff3;
		CamelliaEngine_uint2bytes_mFFD7EB0D8A842004807B497F6FBE31448FC22B4B(L_86, L_87, ((int32_t)il2cpp_codegen_add(L_88, 8)), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_89 = __this->___state_6;
		NullCheck(L_89);
		int32_t L_90 = 1;
		uint32_t L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = ___output2;
		int32_t L_93 = ___outOff3;
		CamelliaEngine_uint2bytes_mFFD7EB0D8A842004807B497F6FBE31448FC22B4B(L_91, L_92, ((int32_t)il2cpp_codegen_add(L_93, ((int32_t)12))), NULL);
		return ((int32_t)16);
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.CamelliaEngine::processBlock192or256(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CamelliaEngine_processBlock192or256_m89FF22F64C9A931FDA83B26BEA2C7AC18393D93E (CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___state_6;
		int32_t L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		int32_t L_3 = ___inOff1;
		int32_t L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var);
		uint32_t L_5;
		L_5 = CamelliaEngine_bytes2uint_m425465AF25BA13E378B2A5F7DC15F5382D1D7411(L_2, ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)il2cpp_codegen_multiply(L_4, 4)))), NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6;
		V_1 = L_7;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		V_2 = L_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_1;
		intptr_t L_11 = V_2;
		NullCheck(L_10);
		intptr_t L_12 = L_11;
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = __this->___kw_4;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint32_t)((int32_t)((int32_t)L_13^(int32_t)L_17)));
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0033:
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) < ((int32_t)4)))
		{
			goto IL_0004;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = __this->___subkey_3;
		il2cpp_codegen_runtime_class_init_inline(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var);
		CamelliaEngine_camelliaF2_mDD60F9B6150A3A836920AC85472B8B79E08159AE(L_20, L_21, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = __this->___subkey_3;
		CamelliaEngine_camelliaF2_mDD60F9B6150A3A836920AC85472B8B79E08159AE(L_22, L_23, 4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = __this->___subkey_3;
		CamelliaEngine_camelliaF2_mDD60F9B6150A3A836920AC85472B8B79E08159AE(L_24, L_25, 8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = __this->___ke_5;
		CamelliaEngine_camelliaFLs_m88A16D2F400657CF07C33D5125EDFAB17DA5C66B(L_26, L_27, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = __this->___subkey_3;
		CamelliaEngine_camelliaF2_mDD60F9B6150A3A836920AC85472B8B79E08159AE(L_28, L_29, ((int32_t)12), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = __this->___subkey_3;
		CamelliaEngine_camelliaF2_mDD60F9B6150A3A836920AC85472B8B79E08159AE(L_30, L_31, ((int32_t)16), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = __this->___subkey_3;
		CamelliaEngine_camelliaF2_mDD60F9B6150A3A836920AC85472B8B79E08159AE(L_32, L_33, ((int32_t)20), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = __this->___ke_5;
		CamelliaEngine_camelliaFLs_m88A16D2F400657CF07C33D5125EDFAB17DA5C66B(L_34, L_35, 4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = __this->___subkey_3;
		CamelliaEngine_camelliaF2_mDD60F9B6150A3A836920AC85472B8B79E08159AE(L_36, L_37, ((int32_t)24), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = __this->___subkey_3;
		CamelliaEngine_camelliaF2_mDD60F9B6150A3A836920AC85472B8B79E08159AE(L_38, L_39, ((int32_t)28), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = __this->___subkey_3;
		CamelliaEngine_camelliaF2_mDD60F9B6150A3A836920AC85472B8B79E08159AE(L_40, L_41, ((int32_t)32), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = __this->___ke_5;
		CamelliaEngine_camelliaFLs_m88A16D2F400657CF07C33D5125EDFAB17DA5C66B(L_42, L_43, 8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = __this->___subkey_3;
		CamelliaEngine_camelliaF2_mDD60F9B6150A3A836920AC85472B8B79E08159AE(L_44, L_45, ((int32_t)36), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = __this->___subkey_3;
		CamelliaEngine_camelliaF2_mDD60F9B6150A3A836920AC85472B8B79E08159AE(L_46, L_47, ((int32_t)40), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = __this->___subkey_3;
		CamelliaEngine_camelliaF2_mDD60F9B6150A3A836920AC85472B8B79E08159AE(L_48, L_49, ((int32_t)44), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = L_50;
		V_1 = L_51;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = V_1;
		NullCheck(L_52);
		int32_t L_53 = 2;
		uint32_t L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = __this->___kw_4;
		NullCheck(L_55);
		int32_t L_56 = 4;
		uint32_t L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)((int32_t)L_54^(int32_t)L_57)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = L_58;
		V_1 = L_59;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = V_1;
		NullCheck(L_60);
		int32_t L_61 = 3;
		uint32_t L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = __this->___kw_4;
		NullCheck(L_63);
		int32_t L_64 = 5;
		uint32_t L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)((int32_t)L_62^(int32_t)L_65)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = L_66;
		V_1 = L_67;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = V_1;
		NullCheck(L_68);
		int32_t L_69 = 0;
		uint32_t L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = __this->___kw_4;
		NullCheck(L_71);
		int32_t L_72 = 6;
		uint32_t L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)((int32_t)L_70^(int32_t)L_73)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = L_74;
		V_1 = L_75;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = V_1;
		NullCheck(L_76);
		int32_t L_77 = 1;
		uint32_t L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = __this->___kw_4;
		NullCheck(L_79);
		int32_t L_80 = 7;
		uint32_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)((int32_t)L_78^(int32_t)L_81)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_82 = __this->___state_6;
		NullCheck(L_82);
		int32_t L_83 = 2;
		uint32_t L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = ___output2;
		int32_t L_86 = ___outOff3;
		CamelliaEngine_uint2bytes_mFFD7EB0D8A842004807B497F6FBE31448FC22B4B(L_84, L_85, L_86, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = __this->___state_6;
		NullCheck(L_87);
		int32_t L_88 = 3;
		uint32_t L_89 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = ___output2;
		int32_t L_91 = ___outOff3;
		CamelliaEngine_uint2bytes_mFFD7EB0D8A842004807B497F6FBE31448FC22B4B(L_89, L_90, ((int32_t)il2cpp_codegen_add(L_91, 4)), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_92 = __this->___state_6;
		NullCheck(L_92);
		int32_t L_93 = 0;
		uint32_t L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = ___output2;
		int32_t L_96 = ___outOff3;
		CamelliaEngine_uint2bytes_mFFD7EB0D8A842004807B497F6FBE31448FC22B4B(L_94, L_95, ((int32_t)il2cpp_codegen_add(L_96, 8)), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_97 = __this->___state_6;
		NullCheck(L_97);
		int32_t L_98 = 1;
		uint32_t L_99 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = ___output2;
		int32_t L_101 = ___outOff3;
		CamelliaEngine_uint2bytes_mFFD7EB0D8A842004807B497F6FBE31448FC22B4B(L_99, L_100, ((int32_t)il2cpp_codegen_add(L_101, ((int32_t)12))), NULL);
		return ((int32_t)16);
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaEngine__ctor_m9A6E8F4B4AC416B5D563A8FBA4DF275604075B73 (CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___initialised_1 = (bool)0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)96));
		__this->___subkey_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___subkey_3), (void*)L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___kw_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kw_4), (void*)L_1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		__this->___ke_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ke_5), (void*)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___state_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___state_6), (void*)L_3);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaEngine_Init_m81DFB921F03F27C54CD28B7A3F962D2F39112D2E (CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___parameters1;
		if (((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_0, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDD95C75C9DCA72699FD9C918B9D3B4AF6395E2D7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CamelliaEngine_Init_m81DFB921F03F27C54CD28B7A3F962D2F39112D2E_RuntimeMethod_var)));
	}

IL_0013:
	{
		bool L_2 = ___forEncryption0;
		RuntimeObject* L_3 = ___parameters1;
		NullCheck(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_3, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_3, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)), NULL);
		CamelliaEngine_setKey_m538527E8517868958D5A00C945D47D9ECD8FF852(__this, L_2, L_4, NULL);
		__this->___initialised_1 = (bool)1;
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Engines.CamelliaEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CamelliaEngine_get_AlgorithmName_mFC691EC6155F31C9366787AFD8B4A962FEABBC5E (CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADD6D8A177ABA2127E8318877CAC012759A1B48C);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralADD6D8A177ABA2127E8318877CAC012759A1B48C;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Engines.CamelliaEngine::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CamelliaEngine_get_IsPartialBlockOkay_mD6962CCE56528CF3955B138341DD9A54387A8C62 (CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.CamelliaEngine::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CamelliaEngine_GetBlockSize_mBDD645E3EA5CE27DF836AD51A6B05F53F5929BF4 (CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)16);
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.CamelliaEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CamelliaEngine_ProcessBlock_mE5702A7E49E30DE4534C86F956AA64A5014F1103 (CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___initialised_1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD8C227C1CB3EF4325170D0B3FA875C26BBAD3D24)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CamelliaEngine_ProcessBlock_mE5702A7E49E30DE4534C86F956AA64A5014F1103_RuntimeMethod_var)));
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		int32_t L_3 = ___inOff1;
		Check_DataLength_m4BEA4E45985CDB8967A7C3C71799B9036DDCC991(L_2, L_3, ((int32_t)16), _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output2;
		int32_t L_5 = ___outOff3;
		Check_OutputLength_mFBD480CE544E8B2C4EFAD3A12D1E105DC36FFA68(L_4, L_5, ((int32_t)16), _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		bool L_6 = __this->____keyIs128_2;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___input0;
		int32_t L_8 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___output2;
		int32_t L_10 = ___outOff3;
		int32_t L_11;
		L_11 = CamelliaEngine_processBlock128_m770C16EC08516354E32F8444449FB998D5CE6696(__this, L_7, L_8, L_9, L_10, NULL);
		return L_11;
	}

IL_0044:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___input0;
		int32_t L_13 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___output2;
		int32_t L_15 = ___outOff3;
		int32_t L_16;
		L_16 = CamelliaEngine_processBlock192or256_m89FF22F64C9A931FDA83B26BEA2C7AC18393D93E(__this, L_12, L_13, L_14, L_15, NULL);
		return L_16;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaEngine_Reset_m3F6E00EA387FC4076F694C8CE629B300F97E3708 (CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaEngine__cctor_m5806844FA972D6A945975FAC8D031138A9250B85 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600148eU2D1_80_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600148eU2D2_81_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600148eU2D3_82_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600148eU2D4_83_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600148eU2D5_84_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600148eU2D1_80_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SIGMA_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SIGMA_7), (void*)L_1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600148eU2D2_81_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SBOX1_1110_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SBOX1_1110_8), (void*)L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600148eU2D3_82_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_7, L_8, NULL);
		((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SBOX4_4404_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SBOX4_4404_9), (void*)L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600148eU2D4_83_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_10, L_11, NULL);
		((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SBOX2_0222_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SBOX2_0222_10), (void*)L_10);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = L_12;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600148eU2D5_84_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_13, L_14, NULL);
		((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SBOX3_3033_11 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var))->___SBOX3_3033_11), (void*)L_13);
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
// System.UInt32 Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::rightRotate(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CamelliaLightEngine_rightRotate_m114E91A50E6FC263CA2332810AA381D7CE3EF379 (uint32_t ___x0, int32_t ___s1, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___x0;
		int32_t L_1 = ___s1;
		uint32_t L_2 = ___x0;
		int32_t L_3 = ___s1;
		return ((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)L_0>>((int32_t)(L_1&((int32_t)31))))), ((int32_t)((int32_t)L_2<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_3))&((int32_t)31)))))));
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::leftRotate(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CamelliaLightEngine_leftRotate_mFFB57A61F527C834F115A3DF68FBED52722AA118 (uint32_t ___x0, int32_t ___s1, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___x0;
		int32_t L_1 = ___s1;
		uint32_t L_2 = ___x0;
		int32_t L_3 = ___s1;
		return ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_0<<((int32_t)(L_1&((int32_t)31))))), ((int32_t)((uint32_t)L_2>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_3))&((int32_t)31)))))));
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::roldq(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaLightEngine_roldq_m11A672CD8914B888F6F2C8F37822747ABB2DBCE5 (int32_t ___rot0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ki1, int32_t ___ioff2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ko3, int32_t ___ooff4, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___ko3;
		int32_t L_1 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___ki1;
		int32_t L_3 = ___ioff2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___ki1;
		int32_t L_8 = ___ioff2;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(1, L_8));
		uint32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = ___rot0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)((int32_t)(((int32_t)((int32_t)L_5<<((int32_t)(L_6&((int32_t)31)))))|((int32_t)((uint32_t)L_10>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_11))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___ko3;
		int32_t L_13 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___ki1;
		int32_t L_15 = ___ioff2;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(1, L_15));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ___ki1;
		int32_t L_20 = ___ioff2;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(2, L_20));
		uint32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = ___rot0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(1, L_13))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_17<<((int32_t)(L_18&((int32_t)31)))))|((int32_t)((uint32_t)L_22>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_23))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___ko3;
		int32_t L_25 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = ___ki1;
		int32_t L_27 = ___ioff2;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(2, L_27));
		uint32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___ki1;
		int32_t L_32 = ___ioff2;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(3, L_32));
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = ___rot0;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(2, L_25))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_29<<((int32_t)(L_30&((int32_t)31)))))|((int32_t)((uint32_t)L_34>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_35))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___ko3;
		int32_t L_37 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = ___ki1;
		int32_t L_39 = ___ioff2;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(3, L_39));
		uint32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		int32_t L_42 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___ki1;
		int32_t L_44 = ___ioff2;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		uint32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		int32_t L_47 = ___rot0;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(3, L_37))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_41<<((int32_t)(L_42&((int32_t)31)))))|((int32_t)((uint32_t)L_46>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_47))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___ki1;
		int32_t L_49 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = ___ko3;
		int32_t L_51 = ___ooff4;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		uint32_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (uint32_t)L_53);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___ki1;
		int32_t L_55 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___ko3;
		int32_t L_57 = ___ooff4;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(1, L_57));
		uint32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(1, L_55))), (uint32_t)L_59);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___ki1;
		int32_t L_61 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___ko3;
		int32_t L_63 = ___ooff4;
		NullCheck(L_62);
		int32_t L_64 = ((int32_t)il2cpp_codegen_add(2, L_63));
		uint32_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(2, L_61))), (uint32_t)L_65);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___ki1;
		int32_t L_67 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = ___ko3;
		int32_t L_69 = ___ooff4;
		NullCheck(L_68);
		int32_t L_70 = ((int32_t)il2cpp_codegen_add(3, L_69));
		uint32_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(3, L_67))), (uint32_t)L_71);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::decroldq(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaLightEngine_decroldq_mF8CA06D4374279F348798E104F0E0853C6FCA9C5 (int32_t ___rot0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ki1, int32_t ___ioff2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ko3, int32_t ___ooff4, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___ko3;
		int32_t L_1 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___ki1;
		int32_t L_3 = ___ioff2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___ki1;
		int32_t L_8 = ___ioff2;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(1, L_8));
		uint32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = ___rot0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(2, L_1))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_5<<((int32_t)(L_6&((int32_t)31)))))|((int32_t)((uint32_t)L_10>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_11))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___ko3;
		int32_t L_13 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___ki1;
		int32_t L_15 = ___ioff2;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(1, L_15));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ___ki1;
		int32_t L_20 = ___ioff2;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(2, L_20));
		uint32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = ___rot0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(3, L_13))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_17<<((int32_t)(L_18&((int32_t)31)))))|((int32_t)((uint32_t)L_22>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_23))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___ko3;
		int32_t L_25 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = ___ki1;
		int32_t L_27 = ___ioff2;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(2, L_27));
		uint32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___ki1;
		int32_t L_32 = ___ioff2;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(3, L_32));
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = ___rot0;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint32_t)((int32_t)(((int32_t)((int32_t)L_29<<((int32_t)(L_30&((int32_t)31)))))|((int32_t)((uint32_t)L_34>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_35))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___ko3;
		int32_t L_37 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = ___ki1;
		int32_t L_39 = ___ioff2;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(3, L_39));
		uint32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		int32_t L_42 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___ki1;
		int32_t L_44 = ___ioff2;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		uint32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		int32_t L_47 = ___rot0;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(1, L_37))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_41<<((int32_t)(L_42&((int32_t)31)))))|((int32_t)((uint32_t)L_46>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_47))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___ki1;
		int32_t L_49 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = ___ko3;
		int32_t L_51 = ___ooff4;
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add(2, L_51));
		uint32_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (uint32_t)L_53);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___ki1;
		int32_t L_55 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___ko3;
		int32_t L_57 = ___ooff4;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(3, L_57));
		uint32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(1, L_55))), (uint32_t)L_59);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___ki1;
		int32_t L_61 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___ko3;
		int32_t L_63 = ___ooff4;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		uint32_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(2, L_61))), (uint32_t)L_65);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___ki1;
		int32_t L_67 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = ___ko3;
		int32_t L_69 = ___ooff4;
		NullCheck(L_68);
		int32_t L_70 = ((int32_t)il2cpp_codegen_add(1, L_69));
		uint32_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(3, L_67))), (uint32_t)L_71);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::roldqo32(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaLightEngine_roldqo32_mD0E8CA083C828A419D430B18A82BC4D2069F0E34 (int32_t ___rot0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ki1, int32_t ___ioff2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ko3, int32_t ___ooff4, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___ko3;
		int32_t L_1 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___ki1;
		int32_t L_3 = ___ioff2;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(1, L_3));
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___ki1;
		int32_t L_8 = ___ioff2;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(2, L_8));
		uint32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = ___rot0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)((int32_t)(((int32_t)((int32_t)L_5<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_6, ((int32_t)32)))&((int32_t)31)))))|((int32_t)((uint32_t)L_10>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_11))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___ko3;
		int32_t L_13 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___ki1;
		int32_t L_15 = ___ioff2;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(2, L_15));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ___ki1;
		int32_t L_20 = ___ioff2;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(3, L_20));
		uint32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = ___rot0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(1, L_13))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_17<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)32)))&((int32_t)31)))))|((int32_t)((uint32_t)L_22>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_23))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___ko3;
		int32_t L_25 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = ___ki1;
		int32_t L_27 = ___ioff2;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(3, L_27));
		uint32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___ki1;
		int32_t L_32 = ___ioff2;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = ___rot0;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(2, L_25))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_29<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_30, ((int32_t)32)))&((int32_t)31)))))|((int32_t)((uint32_t)L_34>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_35))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___ko3;
		int32_t L_37 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = ___ki1;
		int32_t L_39 = ___ioff2;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		uint32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		int32_t L_42 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___ki1;
		int32_t L_44 = ___ioff2;
		NullCheck(L_43);
		int32_t L_45 = ((int32_t)il2cpp_codegen_add(1, L_44));
		uint32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		int32_t L_47 = ___rot0;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(3, L_37))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_41<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_42, ((int32_t)32)))&((int32_t)31)))))|((int32_t)((uint32_t)L_46>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_47))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___ki1;
		int32_t L_49 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = ___ko3;
		int32_t L_51 = ___ooff4;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		uint32_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (uint32_t)L_53);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___ki1;
		int32_t L_55 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___ko3;
		int32_t L_57 = ___ooff4;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(1, L_57));
		uint32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(1, L_55))), (uint32_t)L_59);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___ki1;
		int32_t L_61 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___ko3;
		int32_t L_63 = ___ooff4;
		NullCheck(L_62);
		int32_t L_64 = ((int32_t)il2cpp_codegen_add(2, L_63));
		uint32_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(2, L_61))), (uint32_t)L_65);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___ki1;
		int32_t L_67 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = ___ko3;
		int32_t L_69 = ___ooff4;
		NullCheck(L_68);
		int32_t L_70 = ((int32_t)il2cpp_codegen_add(3, L_69));
		uint32_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(3, L_67))), (uint32_t)L_71);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::decroldqo32(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaLightEngine_decroldqo32_mF08EC8BBFFFBACADA6B807E72765040427F2DA99 (int32_t ___rot0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ki1, int32_t ___ioff2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ko3, int32_t ___ooff4, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___ko3;
		int32_t L_1 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___ki1;
		int32_t L_3 = ___ioff2;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(1, L_3));
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___ki1;
		int32_t L_8 = ___ioff2;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(2, L_8));
		uint32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = ___rot0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(2, L_1))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_5<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_6, ((int32_t)32)))&((int32_t)31)))))|((int32_t)((uint32_t)L_10>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_11))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___ko3;
		int32_t L_13 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___ki1;
		int32_t L_15 = ___ioff2;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(2, L_15));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ___ki1;
		int32_t L_20 = ___ioff2;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(3, L_20));
		uint32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = ___rot0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(3, L_13))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_17<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)32)))&((int32_t)31)))))|((int32_t)((uint32_t)L_22>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_23))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___ko3;
		int32_t L_25 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = ___ki1;
		int32_t L_27 = ___ioff2;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(3, L_27));
		uint32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___ki1;
		int32_t L_32 = ___ioff2;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = ___rot0;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint32_t)((int32_t)(((int32_t)((int32_t)L_29<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_30, ((int32_t)32)))&((int32_t)31)))))|((int32_t)((uint32_t)L_34>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_35))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___ko3;
		int32_t L_37 = ___ooff4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = ___ki1;
		int32_t L_39 = ___ioff2;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		uint32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		int32_t L_42 = ___rot0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___ki1;
		int32_t L_44 = ___ioff2;
		NullCheck(L_43);
		int32_t L_45 = ((int32_t)il2cpp_codegen_add(1, L_44));
		uint32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		int32_t L_47 = ___rot0;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(1, L_37))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_41<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_42, ((int32_t)32)))&((int32_t)31)))))|((int32_t)((uint32_t)L_46>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_47))&((int32_t)31))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___ki1;
		int32_t L_49 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = ___ko3;
		int32_t L_51 = ___ooff4;
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add(2, L_51));
		uint32_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (uint32_t)L_53);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___ki1;
		int32_t L_55 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___ko3;
		int32_t L_57 = ___ooff4;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(3, L_57));
		uint32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(1, L_55))), (uint32_t)L_59);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___ki1;
		int32_t L_61 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___ko3;
		int32_t L_63 = ___ooff4;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		uint32_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(2, L_61))), (uint32_t)L_65);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___ki1;
		int32_t L_67 = ___ioff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = ___ko3;
		int32_t L_69 = ___ooff4;
		NullCheck(L_68);
		int32_t L_70 = ((int32_t)il2cpp_codegen_add(1, L_69));
		uint32_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(3, L_67))), (uint32_t)L_71);
		return;
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::bytes2uint(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CamelliaLightEngine_bytes2uint_m76B73628E1B86B47C01717D31D7BD0F17544E558 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___offset1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0014;
	}

IL_0006:
	{
		uint32_t L_0 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___src0;
		int32_t L_2 = V_1;
		int32_t L_3 = ___offset1;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		uint8_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_0<<8)), (int32_t)L_5));
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0014:
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) < ((int32_t)4)))
		{
			goto IL_0006;
		}
	}
	{
		uint32_t L_8 = V_0;
		return L_8;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::uint2bytes(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaLightEngine_uint2bytes_mA864409013435FD254509902EFC184D32B4DC5F5 (uint32_t ___word0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dst1, int32_t ___offset2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___dst1;
		int32_t L_1 = V_0;
		int32_t L_2 = ___offset2;
		uint32_t L_3 = ___word0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(3, L_1)), L_2))), (uint8_t)((int32_t)(uint8_t)L_3));
		uint32_t L_4 = ___word0;
		___word0 = ((int32_t)((uint32_t)L_4>>8));
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0016:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)4)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Byte Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::lRot8(System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t CamelliaLightEngine_lRot8_m5292C896712507F8983FB42AC22C2C6F63A707C4 (CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB* __this, uint8_t ___v0, int32_t ___rot1, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___v0;
		int32_t L_1 = ___rot1;
		uint8_t L_2 = ___v0;
		int32_t L_3 = ___rot1;
		return (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_0<<((int32_t)(L_1&((int32_t)31)))))|((int32_t)((uint32_t)L_2>>((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_3))&((int32_t)31))))))));
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::sbox2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CamelliaLightEngine_sbox2_mBAB64E242D6CD9EE2C43A9A1621B39A829FE40BC (CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var))->___SBOX1_8;
		int32_t L_1 = ___x0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		uint8_t L_4;
		L_4 = CamelliaLightEngine_lRot8_m5292C896712507F8983FB42AC22C2C6F63A707C4(__this, L_3, 1, NULL);
		return L_4;
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::sbox3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CamelliaLightEngine_sbox3_mA77DD1BCA4D1F96B998F012D6125DC8DF04B80E6 (CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var))->___SBOX1_8;
		int32_t L_1 = ___x0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		uint8_t L_4;
		L_4 = CamelliaLightEngine_lRot8_m5292C896712507F8983FB42AC22C2C6F63A707C4(__this, L_3, 7, NULL);
		return L_4;
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::sbox4(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CamelliaLightEngine_sbox4_mC7213C6B87CEDEB83AB4A2C33893485E0CFA1FFC (CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var))->___SBOX1_8;
		int32_t L_1 = ___x0;
		uint8_t L_2;
		L_2 = CamelliaLightEngine_lRot8_m5292C896712507F8983FB42AC22C2C6F63A707C4(__this, (uint8_t)((int32_t)(uint8_t)L_1), 1, NULL);
		NullCheck(L_0);
		uint8_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::camelliaF2(System.UInt32[],System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaLightEngine_camelliaF2_m894C5E787FA3F7C63B37B8864F2068A9274459BA (CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___skey1, int32_t ___keyoff2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___s0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___skey1;
		int32_t L_4 = ___keyoff2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int32_t)((int32_t)L_2^(int32_t)L_6));
		uint32_t L_7 = V_0;
		uint32_t L_8;
		L_8 = CamelliaLightEngine_sbox4_mC7213C6B87CEDEB83AB4A2C33893485E0CFA1FFC(__this, ((int32_t)(uint8_t)L_7), NULL);
		V_2 = L_8;
		uint32_t L_9 = V_2;
		uint32_t L_10 = V_0;
		uint32_t L_11;
		L_11 = CamelliaLightEngine_sbox3_mA77DD1BCA4D1F96B998F012D6125DC8DF04B80E6(__this, ((int32_t)(uint8_t)((int32_t)((uint32_t)L_10>>8))), NULL);
		V_2 = ((int32_t)((int32_t)L_9|((int32_t)((int32_t)L_11<<8))));
		uint32_t L_12 = V_2;
		uint32_t L_13 = V_0;
		uint32_t L_14;
		L_14 = CamelliaLightEngine_sbox2_mBAB64E242D6CD9EE2C43A9A1621B39A829FE40BC(__this, ((int32_t)(uint8_t)((int32_t)((uint32_t)L_13>>((int32_t)16)))), NULL);
		V_2 = ((int32_t)((int32_t)L_12|((int32_t)((int32_t)L_14<<((int32_t)16)))));
		uint32_t L_15 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ((CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var))->___SBOX1_8;
		uint32_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)(uint8_t)((int32_t)((uint32_t)L_17>>((int32_t)24))));
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_2 = ((int32_t)((int32_t)L_15|((int32_t)((int32_t)L_19<<((int32_t)24)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___s0;
		NullCheck(L_20);
		int32_t L_21 = 1;
		uint32_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___skey1;
		int32_t L_24 = ___keyoff2;
		NullCheck(L_23);
		int32_t L_25 = ((int32_t)il2cpp_codegen_add(1, L_24));
		uint32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_1 = ((int32_t)((int32_t)L_22^(int32_t)L_26));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ((CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var))->___SBOX1_8;
		uint32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)(uint8_t)L_28);
		uint8_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_3 = L_30;
		uint32_t L_31 = V_3;
		uint32_t L_32 = V_1;
		uint32_t L_33;
		L_33 = CamelliaLightEngine_sbox4_mC7213C6B87CEDEB83AB4A2C33893485E0CFA1FFC(__this, ((int32_t)(uint8_t)((int32_t)((uint32_t)L_32>>8))), NULL);
		V_3 = ((int32_t)((int32_t)L_31|((int32_t)((int32_t)L_33<<8))));
		uint32_t L_34 = V_3;
		uint32_t L_35 = V_1;
		uint32_t L_36;
		L_36 = CamelliaLightEngine_sbox3_mA77DD1BCA4D1F96B998F012D6125DC8DF04B80E6(__this, ((int32_t)(uint8_t)((int32_t)((uint32_t)L_35>>((int32_t)16)))), NULL);
		V_3 = ((int32_t)((int32_t)L_34|((int32_t)((int32_t)L_36<<((int32_t)16)))));
		uint32_t L_37 = V_3;
		uint32_t L_38 = V_1;
		uint32_t L_39;
		L_39 = CamelliaLightEngine_sbox2_mBAB64E242D6CD9EE2C43A9A1621B39A829FE40BC(__this, ((int32_t)(uint8_t)((int32_t)((uint32_t)L_38>>((int32_t)24)))), NULL);
		V_3 = ((int32_t)((int32_t)L_37|((int32_t)((int32_t)L_39<<((int32_t)24)))));
		uint32_t L_40 = V_3;
		uint32_t L_41;
		L_41 = CamelliaLightEngine_leftRotate_mFFB57A61F527C834F115A3DF68FBED52722AA118(L_40, 8, NULL);
		V_3 = L_41;
		uint32_t L_42 = V_2;
		uint32_t L_43 = V_3;
		V_2 = ((int32_t)((int32_t)L_42^(int32_t)L_43));
		uint32_t L_44 = V_3;
		uint32_t L_45;
		L_45 = CamelliaLightEngine_leftRotate_mFFB57A61F527C834F115A3DF68FBED52722AA118(L_44, 8, NULL);
		uint32_t L_46 = V_2;
		V_3 = ((int32_t)((int32_t)L_45^(int32_t)L_46));
		uint32_t L_47 = V_2;
		uint32_t L_48;
		L_48 = CamelliaLightEngine_rightRotate_m114E91A50E6FC263CA2332810AA381D7CE3EF379(L_47, 8, NULL);
		uint32_t L_49 = V_3;
		V_2 = ((int32_t)((int32_t)L_48^(int32_t)L_49));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = ___s0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = L_50;
		V_4 = L_51;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = V_4;
		NullCheck(L_52);
		int32_t L_53 = 2;
		uint32_t L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		uint32_t L_55 = V_3;
		uint32_t L_56;
		L_56 = CamelliaLightEngine_leftRotate_mFFB57A61F527C834F115A3DF68FBED52722AA118(L_55, ((int32_t)16), NULL);
		uint32_t L_57 = V_2;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)((int32_t)L_54^((int32_t)((int32_t)L_56^(int32_t)L_57)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = ___s0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = L_58;
		V_4 = L_59;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = V_4;
		NullCheck(L_60);
		int32_t L_61 = 3;
		uint32_t L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		uint32_t L_63 = V_2;
		uint32_t L_64;
		L_64 = CamelliaLightEngine_leftRotate_mFFB57A61F527C834F115A3DF68FBED52722AA118(L_63, 8, NULL);
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)((int32_t)L_62^(int32_t)L_64)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = ___s0;
		NullCheck(L_65);
		int32_t L_66 = 2;
		uint32_t L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = ___skey1;
		int32_t L_69 = ___keyoff2;
		NullCheck(L_68);
		int32_t L_70 = ((int32_t)il2cpp_codegen_add(2, L_69));
		uint32_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		V_0 = ((int32_t)((int32_t)L_67^(int32_t)L_71));
		uint32_t L_72 = V_0;
		uint32_t L_73;
		L_73 = CamelliaLightEngine_sbox4_mC7213C6B87CEDEB83AB4A2C33893485E0CFA1FFC(__this, ((int32_t)(uint8_t)L_72), NULL);
		V_2 = L_73;
		uint32_t L_74 = V_2;
		uint32_t L_75 = V_0;
		uint32_t L_76;
		L_76 = CamelliaLightEngine_sbox3_mA77DD1BCA4D1F96B998F012D6125DC8DF04B80E6(__this, ((int32_t)(uint8_t)((int32_t)((uint32_t)L_75>>8))), NULL);
		V_2 = ((int32_t)((int32_t)L_74|((int32_t)((int32_t)L_76<<8))));
		uint32_t L_77 = V_2;
		uint32_t L_78 = V_0;
		uint32_t L_79;
		L_79 = CamelliaLightEngine_sbox2_mBAB64E242D6CD9EE2C43A9A1621B39A829FE40BC(__this, ((int32_t)(uint8_t)((int32_t)((uint32_t)L_78>>((int32_t)16)))), NULL);
		V_2 = ((int32_t)((int32_t)L_77|((int32_t)((int32_t)L_79<<((int32_t)16)))));
		uint32_t L_80 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = ((CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var))->___SBOX1_8;
		uint32_t L_82 = V_0;
		NullCheck(L_81);
		int32_t L_83 = ((int32_t)(uint8_t)((int32_t)((uint32_t)L_82>>((int32_t)24))));
		uint8_t L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		V_2 = ((int32_t)((int32_t)L_80|((int32_t)((int32_t)L_84<<((int32_t)24)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = ___s0;
		NullCheck(L_85);
		int32_t L_86 = 3;
		uint32_t L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = ___skey1;
		int32_t L_89 = ___keyoff2;
		NullCheck(L_88);
		int32_t L_90 = ((int32_t)il2cpp_codegen_add(3, L_89));
		uint32_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		V_1 = ((int32_t)((int32_t)L_87^(int32_t)L_91));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = ((CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var))->___SBOX1_8;
		uint32_t L_93 = V_1;
		NullCheck(L_92);
		int32_t L_94 = ((int32_t)(uint8_t)L_93);
		uint8_t L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		V_3 = L_95;
		uint32_t L_96 = V_3;
		uint32_t L_97 = V_1;
		uint32_t L_98;
		L_98 = CamelliaLightEngine_sbox4_mC7213C6B87CEDEB83AB4A2C33893485E0CFA1FFC(__this, ((int32_t)(uint8_t)((int32_t)((uint32_t)L_97>>8))), NULL);
		V_3 = ((int32_t)((int32_t)L_96|((int32_t)((int32_t)L_98<<8))));
		uint32_t L_99 = V_3;
		uint32_t L_100 = V_1;
		uint32_t L_101;
		L_101 = CamelliaLightEngine_sbox3_mA77DD1BCA4D1F96B998F012D6125DC8DF04B80E6(__this, ((int32_t)(uint8_t)((int32_t)((uint32_t)L_100>>((int32_t)16)))), NULL);
		V_3 = ((int32_t)((int32_t)L_99|((int32_t)((int32_t)L_101<<((int32_t)16)))));
		uint32_t L_102 = V_3;
		uint32_t L_103 = V_1;
		uint32_t L_104;
		L_104 = CamelliaLightEngine_sbox2_mBAB64E242D6CD9EE2C43A9A1621B39A829FE40BC(__this, ((int32_t)(uint8_t)((int32_t)((uint32_t)L_103>>((int32_t)24)))), NULL);
		V_3 = ((int32_t)((int32_t)L_102|((int32_t)((int32_t)L_104<<((int32_t)24)))));
		uint32_t L_105 = V_3;
		uint32_t L_106;
		L_106 = CamelliaLightEngine_leftRotate_mFFB57A61F527C834F115A3DF68FBED52722AA118(L_105, 8, NULL);
		V_3 = L_106;
		uint32_t L_107 = V_2;
		uint32_t L_108 = V_3;
		V_2 = ((int32_t)((int32_t)L_107^(int32_t)L_108));
		uint32_t L_109 = V_3;
		uint32_t L_110;
		L_110 = CamelliaLightEngine_leftRotate_mFFB57A61F527C834F115A3DF68FBED52722AA118(L_109, 8, NULL);
		uint32_t L_111 = V_2;
		V_3 = ((int32_t)((int32_t)L_110^(int32_t)L_111));
		uint32_t L_112 = V_2;
		uint32_t L_113;
		L_113 = CamelliaLightEngine_rightRotate_m114E91A50E6FC263CA2332810AA381D7CE3EF379(L_112, 8, NULL);
		uint32_t L_114 = V_3;
		V_2 = ((int32_t)((int32_t)L_113^(int32_t)L_114));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_115 = ___s0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_116 = L_115;
		V_4 = L_116;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_117 = V_4;
		NullCheck(L_117);
		int32_t L_118 = 0;
		uint32_t L_119 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		uint32_t L_120 = V_3;
		uint32_t L_121;
		L_121 = CamelliaLightEngine_leftRotate_mFFB57A61F527C834F115A3DF68FBED52722AA118(L_120, ((int32_t)16), NULL);
		uint32_t L_122 = V_2;
		NullCheck(L_116);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)((int32_t)L_119^((int32_t)((int32_t)L_121^(int32_t)L_122)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_123 = ___s0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_124 = L_123;
		V_4 = L_124;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_125 = V_4;
		NullCheck(L_125);
		int32_t L_126 = 1;
		uint32_t L_127 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		uint32_t L_128 = V_2;
		uint32_t L_129;
		L_129 = CamelliaLightEngine_leftRotate_mFFB57A61F527C834F115A3DF68FBED52722AA118(L_128, 8, NULL);
		NullCheck(L_124);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)((int32_t)L_127^(int32_t)L_129)));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::camelliaFLs(System.UInt32[],System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaLightEngine_camelliaFLs_m2D4140DE2425BDA0E3FCF9F47F5691ECE1E37750 (CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___fkey1, int32_t ___keyoff2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___s0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		V_0 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = 1;
		uint32_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___s0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		uint32_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___fkey1;
		int32_t L_9 = ___keyoff2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		il2cpp_codegen_runtime_class_init_inline(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var);
		uint32_t L_12;
		L_12 = CamelliaLightEngine_leftRotate_mFFB57A61F527C834F115A3DF68FBED52722AA118(((int32_t)((int32_t)L_7&(int32_t)L_11)), 1, NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)((int32_t)L_4^(int32_t)L_12)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___s0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = L_13;
		V_0 = L_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = 0;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___fkey1;
		int32_t L_19 = ___keyoff2;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(1, L_19));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___s0;
		NullCheck(L_22);
		int32_t L_23 = 1;
		uint32_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)((int32_t)L_17^((int32_t)((int32_t)L_21|(int32_t)L_24)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___s0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = L_25;
		V_0 = L_26;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = 2;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___fkey1;
		int32_t L_31 = ___keyoff2;
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add(3, L_31));
		uint32_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___s0;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)((int32_t)L_29^((int32_t)((int32_t)L_33|(int32_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___s0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = L_37;
		V_0 = L_38;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = V_0;
		NullCheck(L_39);
		int32_t L_40 = 3;
		uint32_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = ___fkey1;
		int32_t L_43 = ___keyoff2;
		NullCheck(L_42);
		int32_t L_44 = ((int32_t)il2cpp_codegen_add(2, L_43));
		uint32_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___s0;
		NullCheck(L_46);
		int32_t L_47 = 2;
		uint32_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		uint32_t L_49;
		L_49 = CamelliaLightEngine_leftRotate_mFFB57A61F527C834F115A3DF68FBED52722AA118(((int32_t)((int32_t)L_45&(int32_t)L_48)), 1, NULL);
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)((int32_t)L_41^(int32_t)L_49)));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::setKey(System.Boolean,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaLightEngine_setKey_mC51754299AB34F4E19835E8862660D1254E4041F (CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB* __this, bool ___forEncryption0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	uint32_t V_8 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_9 = NULL;
	intptr_t V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		V_2 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		V_3 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___key1;
		NullCheck(L_4);
		V_7 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		int32_t L_5 = V_7;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)16))))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_6 = V_7;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)24))))
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_7 = V_7;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)32))))
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_0140;
	}

IL_003b:
	{
		__this->____keyis128_2 = (bool)1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___key1;
		il2cpp_codegen_runtime_class_init_inline(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var);
		uint32_t L_10;
		L_10 = CamelliaLightEngine_bytes2uint_m76B73628E1B86B47C01717D31D7BD0F17544E558(L_9, 0, NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_10);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___key1;
		uint32_t L_13;
		L_13 = CamelliaLightEngine_bytes2uint_m76B73628E1B86B47C01717D31D7BD0F17544E558(L_12, 4, NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_13);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___key1;
		uint32_t L_16;
		L_16 = CamelliaLightEngine_bytes2uint_m76B73628E1B86B47C01717D31D7BD0F17544E558(L_15, 8, NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_16);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___key1;
		uint32_t L_19;
		L_19 = CamelliaLightEngine_bytes2uint_m76B73628E1B86B47C01717D31D7BD0F17544E558(L_18, ((int32_t)12), NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_0;
		int32_t L_24 = 0;
		V_8 = L_24;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)L_24);
		uint32_t L_25 = V_8;
		uint32_t L_26 = L_25;
		V_8 = L_26;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)L_26);
		uint32_t L_27 = V_8;
		uint32_t L_28 = L_27;
		V_8 = L_28;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)L_28);
		uint32_t L_29 = V_8;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)L_29);
		goto IL_014b;
	}

IL_008c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___key1;
		il2cpp_codegen_runtime_class_init_inline(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var);
		uint32_t L_32;
		L_32 = CamelliaLightEngine_bytes2uint_m76B73628E1B86B47C01717D31D7BD0F17544E558(L_31, 0, NULL);
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_32);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___key1;
		uint32_t L_35;
		L_35 = CamelliaLightEngine_bytes2uint_m76B73628E1B86B47C01717D31D7BD0F17544E558(L_34, 4, NULL);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_35);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ___key1;
		uint32_t L_38;
		L_38 = CamelliaLightEngine_bytes2uint_m76B73628E1B86B47C01717D31D7BD0F17544E558(L_37, 8, NULL);
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_38);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___key1;
		uint32_t L_41;
		L_41 = CamelliaLightEngine_bytes2uint_m76B73628E1B86B47C01717D31D7BD0F17544E558(L_40, ((int32_t)12), NULL);
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_41);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ___key1;
		uint32_t L_44;
		L_44 = CamelliaLightEngine_bytes2uint_m76B73628E1B86B47C01717D31D7BD0F17544E558(L_43, ((int32_t)16), NULL);
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)L_44);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ___key1;
		uint32_t L_47;
		L_47 = CamelliaLightEngine_bytes2uint_m76B73628E1B86B47C01717D31D7BD0F17544E558(L_46, ((int32_t)20), NULL);
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)L_47);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = V_0;
		NullCheck(L_49);
		int32_t L_50 = 4;
		uint32_t L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((~L_51)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = V_0;
		NullCheck(L_53);
		int32_t L_54 = 5;
		uint32_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((~L_55)));
		__this->____keyis128_2 = (bool)0;
		goto IL_014b;
	}

IL_00e2:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = ___key1;
		il2cpp_codegen_runtime_class_init_inline(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var);
		uint32_t L_58;
		L_58 = CamelliaLightEngine_bytes2uint_m76B73628E1B86B47C01717D31D7BD0F17544E558(L_57, 0, NULL);
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_58);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = ___key1;
		uint32_t L_61;
		L_61 = CamelliaLightEngine_bytes2uint_m76B73628E1B86B47C01717D31D7BD0F17544E558(L_60, 4, NULL);
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_61);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = ___key1;
		uint32_t L_64;
		L_64 = CamelliaLightEngine_bytes2uint_m76B73628E1B86B47C01717D31D7BD0F17544E558(L_63, 8, NULL);
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_64);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = ___key1;
		uint32_t L_67;
		L_67 = CamelliaLightEngine_bytes2uint_m76B73628E1B86B47C01717D31D7BD0F17544E558(L_66, ((int32_t)12), NULL);
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_67);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = ___key1;
		uint32_t L_70;
		L_70 = CamelliaLightEngine_bytes2uint_m76B73628E1B86B47C01717D31D7BD0F17544E558(L_69, ((int32_t)16), NULL);
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)L_70);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = ___key1;
		uint32_t L_73;
		L_73 = CamelliaLightEngine_bytes2uint_m76B73628E1B86B47C01717D31D7BD0F17544E558(L_72, ((int32_t)20), NULL);
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)L_73);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = ___key1;
		uint32_t L_76;
		L_76 = CamelliaLightEngine_bytes2uint_m76B73628E1B86B47C01717D31D7BD0F17544E558(L_75, ((int32_t)24), NULL);
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)L_76);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = ___key1;
		uint32_t L_79;
		L_79 = CamelliaLightEngine_bytes2uint_m76B73628E1B86B47C01717D31D7BD0F17544E558(L_78, ((int32_t)28), NULL);
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)L_79);
		__this->____keyis128_2 = (bool)0;
		goto IL_014b;
	}

IL_0140:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_80 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_80);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_80, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3BD050D52C303D23C47B378731DC319F7A090D03)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_80, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CamelliaLightEngine_setKey_mC51754299AB34F4E19835E8862660D1254E4041F_RuntimeMethod_var)));
	}

IL_014b:
	{
		V_4 = 0;
		goto IL_0165;
	}

IL_0150:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = V_1;
		int32_t L_82 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = V_0;
		int32_t L_84 = V_4;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		uint32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = V_0;
		int32_t L_88 = V_4;
		NullCheck(L_87);
		int32_t L_89 = ((int32_t)il2cpp_codegen_add(L_88, 4));
		uint32_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(L_82), (uint32_t)((int32_t)((int32_t)L_86^(int32_t)L_90)));
		int32_t L_91 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_91, 1));
	}

IL_0165:
	{
		int32_t L_92 = V_4;
		if ((((int32_t)L_92) < ((int32_t)4)))
		{
			goto IL_0150;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_93 = V_1;
		il2cpp_codegen_runtime_class_init_inline(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_94 = ((CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var))->___SIGMA_7;
		CamelliaLightEngine_camelliaF2_m894C5E787FA3F7C63B37B8864F2068A9274459BA(__this, L_93, L_94, 0, NULL);
		V_5 = 0;
		goto IL_0196;
	}

IL_017c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_95 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_96 = L_95;
		V_9 = L_96;
		int32_t L_97 = V_5;
		int32_t L_98 = L_97;
		V_10 = L_98;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_99 = V_9;
		intptr_t L_100 = V_10;
		NullCheck(L_99);
		intptr_t L_101 = L_100;
		uint32_t L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_103 = V_0;
		int32_t L_104 = V_5;
		NullCheck(L_103);
		int32_t L_105 = L_104;
		uint32_t L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		NullCheck(L_96);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(L_98), (uint32_t)((int32_t)((int32_t)L_102^(int32_t)L_106)));
		int32_t L_107 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_107, 1));
	}

IL_0196:
	{
		int32_t L_108 = V_5;
		if ((((int32_t)L_108) < ((int32_t)4)))
		{
			goto IL_017c;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_109 = V_1;
		il2cpp_codegen_runtime_class_init_inline(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_110 = ((CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var))->___SIGMA_7;
		CamelliaLightEngine_camelliaF2_m894C5E787FA3F7C63B37B8864F2068A9274459BA(__this, L_109, L_110, 4, NULL);
		bool L_111 = __this->____keyis128_2;
		if (!L_111)
		{
			goto IL_0444;
		}
	}
	{
		bool L_112 = ___forEncryption0;
		if (!L_112)
		{
			goto IL_02fd;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_113 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_114 = V_0;
		NullCheck(L_114);
		int32_t L_115 = 0;
		uint32_t L_116 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		NullCheck(L_113);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_116);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_117 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_118 = V_0;
		NullCheck(L_118);
		int32_t L_119 = 1;
		uint32_t L_120 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		NullCheck(L_117);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_120);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_121 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_122 = V_0;
		NullCheck(L_122);
		int32_t L_123 = 2;
		uint32_t L_124 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_124);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_125 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_126 = V_0;
		NullCheck(L_126);
		int32_t L_127 = 3;
		uint32_t L_128 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		NullCheck(L_125);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_128);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_129 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_130 = __this->___subkey_3;
		il2cpp_codegen_runtime_class_init_inline(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var);
		CamelliaLightEngine_roldq_m11A672CD8914B888F6F2C8F37822747ABB2DBCE5(((int32_t)15), L_129, 0, L_130, 4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_131 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_132 = __this->___subkey_3;
		CamelliaLightEngine_roldq_m11A672CD8914B888F6F2C8F37822747ABB2DBCE5(((int32_t)30), L_131, 0, L_132, ((int32_t)12), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_133 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_134 = V_3;
		CamelliaLightEngine_roldq_m11A672CD8914B888F6F2C8F37822747ABB2DBCE5(((int32_t)15), L_133, 0, L_134, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_135 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_136 = V_3;
		NullCheck(L_136);
		int32_t L_137 = 2;
		uint32_t L_138 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		NullCheck(L_135);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (uint32_t)L_138);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_139 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_140 = V_3;
		NullCheck(L_140);
		int32_t L_141 = 3;
		uint32_t L_142 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		NullCheck(L_139);
		(L_139)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (uint32_t)L_142);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_143 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_144 = __this->___ke_5;
		CamelliaLightEngine_roldq_m11A672CD8914B888F6F2C8F37822747ABB2DBCE5(((int32_t)17), L_143, 0, L_144, 4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_145 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_146 = __this->___subkey_3;
		CamelliaLightEngine_roldq_m11A672CD8914B888F6F2C8F37822747ABB2DBCE5(((int32_t)17), L_145, 0, L_146, ((int32_t)24), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_147 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_148 = __this->___subkey_3;
		CamelliaLightEngine_roldq_m11A672CD8914B888F6F2C8F37822747ABB2DBCE5(((int32_t)17), L_147, 0, L_148, ((int32_t)32), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_149 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_150 = V_1;
		NullCheck(L_150);
		int32_t L_151 = 0;
		uint32_t L_152 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		NullCheck(L_149);
		(L_149)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_152);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_153 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_154 = V_1;
		NullCheck(L_154);
		int32_t L_155 = 1;
		uint32_t L_156 = (L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_155));
		NullCheck(L_153);
		(L_153)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_156);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_157 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_158 = V_1;
		NullCheck(L_158);
		int32_t L_159 = 2;
		uint32_t L_160 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		NullCheck(L_157);
		(L_157)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_160);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_161 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_162 = V_1;
		NullCheck(L_162);
		int32_t L_163 = 3;
		uint32_t L_164 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		NullCheck(L_161);
		(L_161)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_164);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_165 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_166 = __this->___subkey_3;
		CamelliaLightEngine_roldq_m11A672CD8914B888F6F2C8F37822747ABB2DBCE5(((int32_t)15), L_165, 0, L_166, 8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_167 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_168 = __this->___ke_5;
		CamelliaLightEngine_roldq_m11A672CD8914B888F6F2C8F37822747ABB2DBCE5(((int32_t)15), L_167, 0, L_168, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_169 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_170 = V_3;
		CamelliaLightEngine_roldq_m11A672CD8914B888F6F2C8F37822747ABB2DBCE5(((int32_t)15), L_169, 0, L_170, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_171 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_172 = V_3;
		NullCheck(L_172);
		int32_t L_173 = 0;
		uint32_t L_174 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		NullCheck(L_171);
		(L_171)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (uint32_t)L_174);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_175 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_176 = V_3;
		NullCheck(L_176);
		int32_t L_177 = 1;
		uint32_t L_178 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		NullCheck(L_175);
		(L_175)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (uint32_t)L_178);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_179 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_180 = __this->___subkey_3;
		CamelliaLightEngine_roldq_m11A672CD8914B888F6F2C8F37822747ABB2DBCE5(((int32_t)15), L_179, 0, L_180, ((int32_t)20), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_181 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_182 = __this->___subkey_3;
		CamelliaLightEngine_roldqo32_mD0E8CA083C828A419D430B18A82BC4D2069F0E34(((int32_t)34), L_181, 0, L_182, ((int32_t)28), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_183 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_184 = __this->___kw_4;
		CamelliaLightEngine_roldq_m11A672CD8914B888F6F2C8F37822747ABB2DBCE5(((int32_t)17), L_183, 0, L_184, 4, NULL);
		return;
	}

IL_02fd:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_185 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_186 = V_0;
		NullCheck(L_186);
		int32_t L_187 = 0;
		uint32_t L_188 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_187));
		NullCheck(L_185);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)L_188);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_189 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_190 = V_0;
		NullCheck(L_190);
		int32_t L_191 = 1;
		uint32_t L_192 = (L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_191));
		NullCheck(L_189);
		(L_189)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)L_192);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_193 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_194 = V_0;
		NullCheck(L_194);
		int32_t L_195 = 2;
		uint32_t L_196 = (L_194)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		NullCheck(L_193);
		(L_193)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)L_196);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_197 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_198 = V_0;
		NullCheck(L_198);
		int32_t L_199 = 3;
		uint32_t L_200 = (L_198)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		NullCheck(L_197);
		(L_197)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)L_200);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_201 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_202 = __this->___subkey_3;
		il2cpp_codegen_runtime_class_init_inline(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var);
		CamelliaLightEngine_decroldq_mF8CA06D4374279F348798E104F0E0853C6FCA9C5(((int32_t)15), L_201, 0, L_202, ((int32_t)28), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_203 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_204 = __this->___subkey_3;
		CamelliaLightEngine_decroldq_mF8CA06D4374279F348798E104F0E0853C6FCA9C5(((int32_t)30), L_203, 0, L_204, ((int32_t)20), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_205 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_206 = V_3;
		CamelliaLightEngine_decroldq_mF8CA06D4374279F348798E104F0E0853C6FCA9C5(((int32_t)15), L_205, 0, L_206, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_207 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_208 = V_3;
		NullCheck(L_208);
		int32_t L_209 = 0;
		uint32_t L_210 = (L_208)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		NullCheck(L_207);
		(L_207)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (uint32_t)L_210);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_211 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_212 = V_3;
		NullCheck(L_212);
		int32_t L_213 = 1;
		uint32_t L_214 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		NullCheck(L_211);
		(L_211)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (uint32_t)L_214);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_215 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_216 = __this->___ke_5;
		CamelliaLightEngine_decroldq_mF8CA06D4374279F348798E104F0E0853C6FCA9C5(((int32_t)17), L_215, 0, L_216, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_217 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_218 = __this->___subkey_3;
		CamelliaLightEngine_decroldq_mF8CA06D4374279F348798E104F0E0853C6FCA9C5(((int32_t)17), L_217, 0, L_218, 8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_219 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_220 = __this->___subkey_3;
		CamelliaLightEngine_decroldq_mF8CA06D4374279F348798E104F0E0853C6FCA9C5(((int32_t)17), L_219, 0, L_220, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_221 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_222 = V_1;
		NullCheck(L_222);
		int32_t L_223 = 0;
		uint32_t L_224 = (L_222)->GetAt(static_cast<il2cpp_array_size_t>(L_223));
		NullCheck(L_221);
		(L_221)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)34)), (uint32_t)L_224);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_225 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_226 = V_1;
		NullCheck(L_226);
		int32_t L_227 = 1;
		uint32_t L_228 = (L_226)->GetAt(static_cast<il2cpp_array_size_t>(L_227));
		NullCheck(L_225);
		(L_225)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)35)), (uint32_t)L_228);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_229 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_230 = V_1;
		NullCheck(L_230);
		int32_t L_231 = 2;
		uint32_t L_232 = (L_230)->GetAt(static_cast<il2cpp_array_size_t>(L_231));
		NullCheck(L_229);
		(L_229)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (uint32_t)L_232);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_233 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_234 = V_1;
		NullCheck(L_234);
		int32_t L_235 = 3;
		uint32_t L_236 = (L_234)->GetAt(static_cast<il2cpp_array_size_t>(L_235));
		NullCheck(L_233);
		(L_233)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)33)), (uint32_t)L_236);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_237 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_238 = __this->___subkey_3;
		CamelliaLightEngine_decroldq_mF8CA06D4374279F348798E104F0E0853C6FCA9C5(((int32_t)15), L_237, 0, L_238, ((int32_t)24), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_239 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_240 = __this->___ke_5;
		CamelliaLightEngine_decroldq_mF8CA06D4374279F348798E104F0E0853C6FCA9C5(((int32_t)15), L_239, 0, L_240, 4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_241 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_242 = V_3;
		CamelliaLightEngine_decroldq_mF8CA06D4374279F348798E104F0E0853C6FCA9C5(((int32_t)15), L_241, 0, L_242, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_243 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_244 = V_3;
		NullCheck(L_244);
		int32_t L_245 = 2;
		uint32_t L_246 = (L_244)->GetAt(static_cast<il2cpp_array_size_t>(L_245));
		NullCheck(L_243);
		(L_243)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (uint32_t)L_246);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_247 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_248 = V_3;
		NullCheck(L_248);
		int32_t L_249 = 3;
		uint32_t L_250 = (L_248)->GetAt(static_cast<il2cpp_array_size_t>(L_249));
		NullCheck(L_247);
		(L_247)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (uint32_t)L_250);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_251 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_252 = __this->___subkey_3;
		CamelliaLightEngine_decroldq_mF8CA06D4374279F348798E104F0E0853C6FCA9C5(((int32_t)15), L_251, 0, L_252, ((int32_t)12), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_253 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_254 = __this->___subkey_3;
		CamelliaLightEngine_decroldqo32_mF08EC8BBFFFBACADA6B807E72765040427F2DA99(((int32_t)34), L_253, 0, L_254, 4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_255 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_256 = __this->___kw_4;
		CamelliaLightEngine_roldq_m11A672CD8914B888F6F2C8F37822747ABB2DBCE5(((int32_t)17), L_255, 0, L_256, 0, NULL);
		return;
	}

IL_0444:
	{
		V_6 = 0;
		goto IL_045e;
	}

IL_0449:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_257 = V_2;
		int32_t L_258 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_259 = V_1;
		int32_t L_260 = V_6;
		NullCheck(L_259);
		int32_t L_261 = L_260;
		uint32_t L_262 = (L_259)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_263 = V_0;
		int32_t L_264 = V_6;
		NullCheck(L_263);
		int32_t L_265 = ((int32_t)il2cpp_codegen_add(L_264, 4));
		uint32_t L_266 = (L_263)->GetAt(static_cast<il2cpp_array_size_t>(L_265));
		NullCheck(L_257);
		(L_257)->SetAt(static_cast<il2cpp_array_size_t>(L_258), (uint32_t)((int32_t)((int32_t)L_262^(int32_t)L_266)));
		int32_t L_267 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_267, 1));
	}

IL_045e:
	{
		int32_t L_268 = V_6;
		if ((((int32_t)L_268) < ((int32_t)4)))
		{
			goto IL_0449;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_269 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_270 = ((CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var))->___SIGMA_7;
		CamelliaLightEngine_camelliaF2_m894C5E787FA3F7C63B37B8864F2068A9274459BA(__this, L_269, L_270, 8, NULL);
		bool L_271 = ___forEncryption0;
		if (!L_271)
		{
			goto IL_05e7;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_272 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_273 = V_0;
		NullCheck(L_273);
		int32_t L_274 = 0;
		uint32_t L_275 = (L_273)->GetAt(static_cast<il2cpp_array_size_t>(L_274));
		NullCheck(L_272);
		(L_272)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_275);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_276 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_277 = V_0;
		NullCheck(L_277);
		int32_t L_278 = 1;
		uint32_t L_279 = (L_277)->GetAt(static_cast<il2cpp_array_size_t>(L_278));
		NullCheck(L_276);
		(L_276)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_279);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_280 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_281 = V_0;
		NullCheck(L_281);
		int32_t L_282 = 2;
		uint32_t L_283 = (L_281)->GetAt(static_cast<il2cpp_array_size_t>(L_282));
		NullCheck(L_280);
		(L_280)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_283);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_284 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_285 = V_0;
		NullCheck(L_285);
		int32_t L_286 = 3;
		uint32_t L_287 = (L_285)->GetAt(static_cast<il2cpp_array_size_t>(L_286));
		NullCheck(L_284);
		(L_284)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_287);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_288 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_289 = __this->___subkey_3;
		il2cpp_codegen_runtime_class_init_inline(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var);
		CamelliaLightEngine_roldqo32_mD0E8CA083C828A419D430B18A82BC4D2069F0E34(((int32_t)45), L_288, 0, L_289, ((int32_t)16), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_290 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_291 = __this->___ke_5;
		CamelliaLightEngine_roldq_m11A672CD8914B888F6F2C8F37822747ABB2DBCE5(((int32_t)15), L_290, 0, L_291, 4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_292 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_293 = __this->___subkey_3;
		CamelliaLightEngine_roldq_m11A672CD8914B888F6F2C8F37822747ABB2DBCE5(((int32_t)17), L_292, 0, L_293, ((int32_t)32), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_294 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_295 = __this->___subkey_3;
		CamelliaLightEngine_roldqo32_mD0E8CA083C828A419D430B18A82BC4D2069F0E34(((int32_t)34), L_294, 0, L_295, ((int32_t)44), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_296 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_297 = __this->___subkey_3;
		CamelliaLightEngine_roldq_m11A672CD8914B888F6F2C8F37822747ABB2DBCE5(((int32_t)15), L_296, 4, L_297, 4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_298 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_299 = __this->___ke_5;
		CamelliaLightEngine_roldq_m11A672CD8914B888F6F2C8F37822747ABB2DBCE5(((int32_t)15), L_298, 4, L_299, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_300 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_301 = __this->___subkey_3;
		CamelliaLightEngine_roldq_m11A672CD8914B888F6F2C8F37822747ABB2DBCE5(((int32_t)30), L_300, 4, L_301, ((int32_t)24), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_302 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_303 = __this->___subkey_3;
		CamelliaLightEngine_roldqo32_mD0E8CA083C828A419D430B18A82BC4D2069F0E34(((int32_t)34), L_302, 4, L_303, ((int32_t)36), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_304 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_305 = __this->___subkey_3;
		CamelliaLightEngine_roldq_m11A672CD8914B888F6F2C8F37822747ABB2DBCE5(((int32_t)15), L_304, 0, L_305, 8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_306 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_307 = __this->___subkey_3;
		CamelliaLightEngine_roldq_m11A672CD8914B888F6F2C8F37822747ABB2DBCE5(((int32_t)30), L_306, 0, L_307, ((int32_t)20), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_308 = __this->___ke_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_309 = V_1;
		NullCheck(L_309);
		int32_t L_310 = 1;
		uint32_t L_311 = (L_309)->GetAt(static_cast<il2cpp_array_size_t>(L_310));
		NullCheck(L_308);
		(L_308)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint32_t)L_311);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_312 = __this->___ke_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_313 = V_1;
		NullCheck(L_313);
		int32_t L_314 = 2;
		uint32_t L_315 = (L_313)->GetAt(static_cast<il2cpp_array_size_t>(L_314));
		NullCheck(L_312);
		(L_312)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint32_t)L_315);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_316 = __this->___ke_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_317 = V_1;
		NullCheck(L_317);
		int32_t L_318 = 3;
		uint32_t L_319 = (L_317)->GetAt(static_cast<il2cpp_array_size_t>(L_318));
		NullCheck(L_316);
		(L_316)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint32_t)L_319);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_320 = __this->___ke_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_321 = V_1;
		NullCheck(L_321);
		int32_t L_322 = 0;
		uint32_t L_323 = (L_321)->GetAt(static_cast<il2cpp_array_size_t>(L_322));
		NullCheck(L_320);
		(L_320)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint32_t)L_323);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_324 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_325 = __this->___subkey_3;
		CamelliaLightEngine_roldqo32_mD0E8CA083C828A419D430B18A82BC4D2069F0E34(((int32_t)49), L_324, 0, L_325, ((int32_t)40), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_326 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_327 = V_2;
		NullCheck(L_327);
		int32_t L_328 = 0;
		uint32_t L_329 = (L_327)->GetAt(static_cast<il2cpp_array_size_t>(L_328));
		NullCheck(L_326);
		(L_326)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_329);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_330 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_331 = V_2;
		NullCheck(L_331);
		int32_t L_332 = 1;
		uint32_t L_333 = (L_331)->GetAt(static_cast<il2cpp_array_size_t>(L_332));
		NullCheck(L_330);
		(L_330)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_333);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_334 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_335 = V_2;
		NullCheck(L_335);
		int32_t L_336 = 2;
		uint32_t L_337 = (L_335)->GetAt(static_cast<il2cpp_array_size_t>(L_336));
		NullCheck(L_334);
		(L_334)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_337);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_338 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_339 = V_2;
		NullCheck(L_339);
		int32_t L_340 = 3;
		uint32_t L_341 = (L_339)->GetAt(static_cast<il2cpp_array_size_t>(L_340));
		NullCheck(L_338);
		(L_338)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_341);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_342 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_343 = __this->___subkey_3;
		CamelliaLightEngine_roldq_m11A672CD8914B888F6F2C8F37822747ABB2DBCE5(((int32_t)30), L_342, 0, L_343, ((int32_t)12), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_344 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_345 = __this->___subkey_3;
		CamelliaLightEngine_roldq_m11A672CD8914B888F6F2C8F37822747ABB2DBCE5(((int32_t)30), L_344, 0, L_345, ((int32_t)28), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_346 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_347 = __this->___kw_4;
		CamelliaLightEngine_roldqo32_mD0E8CA083C828A419D430B18A82BC4D2069F0E34(((int32_t)51), L_346, 0, L_347, 4, NULL);
		return;
	}

IL_05e7:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_348 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_349 = V_0;
		NullCheck(L_349);
		int32_t L_350 = 0;
		uint32_t L_351 = (L_349)->GetAt(static_cast<il2cpp_array_size_t>(L_350));
		NullCheck(L_348);
		(L_348)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)L_351);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_352 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_353 = V_0;
		NullCheck(L_353);
		int32_t L_354 = 1;
		uint32_t L_355 = (L_353)->GetAt(static_cast<il2cpp_array_size_t>(L_354));
		NullCheck(L_352);
		(L_352)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)L_355);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_356 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_357 = V_0;
		NullCheck(L_357);
		int32_t L_358 = 2;
		uint32_t L_359 = (L_357)->GetAt(static_cast<il2cpp_array_size_t>(L_358));
		NullCheck(L_356);
		(L_356)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)L_359);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_360 = __this->___kw_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_361 = V_0;
		NullCheck(L_361);
		int32_t L_362 = 3;
		uint32_t L_363 = (L_361)->GetAt(static_cast<il2cpp_array_size_t>(L_362));
		NullCheck(L_360);
		(L_360)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)L_363);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_364 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_365 = __this->___subkey_3;
		il2cpp_codegen_runtime_class_init_inline(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var);
		CamelliaLightEngine_decroldqo32_mF08EC8BBFFFBACADA6B807E72765040427F2DA99(((int32_t)45), L_364, 0, L_365, ((int32_t)28), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_366 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_367 = __this->___ke_5;
		CamelliaLightEngine_decroldq_mF8CA06D4374279F348798E104F0E0853C6FCA9C5(((int32_t)15), L_366, 0, L_367, 4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_368 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_369 = __this->___subkey_3;
		CamelliaLightEngine_decroldq_mF8CA06D4374279F348798E104F0E0853C6FCA9C5(((int32_t)17), L_368, 0, L_369, ((int32_t)12), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_370 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_371 = __this->___subkey_3;
		CamelliaLightEngine_decroldqo32_mF08EC8BBFFFBACADA6B807E72765040427F2DA99(((int32_t)34), L_370, 0, L_371, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_372 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_373 = __this->___subkey_3;
		CamelliaLightEngine_decroldq_mF8CA06D4374279F348798E104F0E0853C6FCA9C5(((int32_t)15), L_372, 4, L_373, ((int32_t)40), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_374 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_375 = __this->___ke_5;
		CamelliaLightEngine_decroldq_mF8CA06D4374279F348798E104F0E0853C6FCA9C5(((int32_t)15), L_374, 4, L_375, 8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_376 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_377 = __this->___subkey_3;
		CamelliaLightEngine_decroldq_mF8CA06D4374279F348798E104F0E0853C6FCA9C5(((int32_t)30), L_376, 4, L_377, ((int32_t)20), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_378 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_379 = __this->___subkey_3;
		CamelliaLightEngine_decroldqo32_mF08EC8BBFFFBACADA6B807E72765040427F2DA99(((int32_t)34), L_378, 4, L_379, 8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_380 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_381 = __this->___subkey_3;
		CamelliaLightEngine_decroldq_mF8CA06D4374279F348798E104F0E0853C6FCA9C5(((int32_t)15), L_380, 0, L_381, ((int32_t)36), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_382 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_383 = __this->___subkey_3;
		CamelliaLightEngine_decroldq_mF8CA06D4374279F348798E104F0E0853C6FCA9C5(((int32_t)30), L_382, 0, L_383, ((int32_t)24), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_384 = __this->___ke_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_385 = V_1;
		NullCheck(L_385);
		int32_t L_386 = 1;
		uint32_t L_387 = (L_385)->GetAt(static_cast<il2cpp_array_size_t>(L_386));
		NullCheck(L_384);
		(L_384)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_387);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_388 = __this->___ke_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_389 = V_1;
		NullCheck(L_389);
		int32_t L_390 = 2;
		uint32_t L_391 = (L_389)->GetAt(static_cast<il2cpp_array_size_t>(L_390));
		NullCheck(L_388);
		(L_388)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_391);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_392 = __this->___ke_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_393 = V_1;
		NullCheck(L_393);
		int32_t L_394 = 3;
		uint32_t L_395 = (L_393)->GetAt(static_cast<il2cpp_array_size_t>(L_394));
		NullCheck(L_392);
		(L_392)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_395);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_396 = __this->___ke_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_397 = V_1;
		NullCheck(L_397);
		int32_t L_398 = 0;
		uint32_t L_399 = (L_397)->GetAt(static_cast<il2cpp_array_size_t>(L_398));
		NullCheck(L_396);
		(L_396)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_399);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_400 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_401 = __this->___subkey_3;
		CamelliaLightEngine_decroldqo32_mF08EC8BBFFFBACADA6B807E72765040427F2DA99(((int32_t)49), L_400, 0, L_401, 4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_402 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_403 = V_2;
		NullCheck(L_403);
		int32_t L_404 = 0;
		uint32_t L_405 = (L_403)->GetAt(static_cast<il2cpp_array_size_t>(L_404));
		NullCheck(L_402);
		(L_402)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)46)), (uint32_t)L_405);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_406 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_407 = V_2;
		NullCheck(L_407);
		int32_t L_408 = 1;
		uint32_t L_409 = (L_407)->GetAt(static_cast<il2cpp_array_size_t>(L_408));
		NullCheck(L_406);
		(L_406)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)47)), (uint32_t)L_409);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_410 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_411 = V_2;
		NullCheck(L_411);
		int32_t L_412 = 2;
		uint32_t L_413 = (L_411)->GetAt(static_cast<il2cpp_array_size_t>(L_412));
		NullCheck(L_410);
		(L_410)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)44)), (uint32_t)L_413);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_414 = __this->___subkey_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_415 = V_2;
		NullCheck(L_415);
		int32_t L_416 = 3;
		uint32_t L_417 = (L_415)->GetAt(static_cast<il2cpp_array_size_t>(L_416));
		NullCheck(L_414);
		(L_414)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)45)), (uint32_t)L_417);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_418 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_419 = __this->___subkey_3;
		CamelliaLightEngine_decroldq_mF8CA06D4374279F348798E104F0E0853C6FCA9C5(((int32_t)30), L_418, 0, L_419, ((int32_t)32), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_420 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_421 = __this->___subkey_3;
		CamelliaLightEngine_decroldq_mF8CA06D4374279F348798E104F0E0853C6FCA9C5(((int32_t)30), L_420, 0, L_421, ((int32_t)16), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_422 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_423 = __this->___kw_4;
		CamelliaLightEngine_roldqo32_mD0E8CA083C828A419D430B18A82BC4D2069F0E34(((int32_t)51), L_422, 0, L_423, 0, NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::processBlock128(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CamelliaLightEngine_processBlock128_mCAA039A6D8A1A203DEF56822B3E442804A7808C3 (CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___state_6;
		int32_t L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		int32_t L_3 = ___inOff1;
		int32_t L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var);
		uint32_t L_5;
		L_5 = CamelliaLightEngine_bytes2uint_m76B73628E1B86B47C01717D31D7BD0F17544E558(L_2, ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)il2cpp_codegen_multiply(L_4, 4)))), NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6;
		V_1 = L_7;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		V_2 = L_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_1;
		intptr_t L_11 = V_2;
		NullCheck(L_10);
		intptr_t L_12 = L_11;
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = __this->___kw_4;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint32_t)((int32_t)((int32_t)L_13^(int32_t)L_17)));
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0033:
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) < ((int32_t)4)))
		{
			goto IL_0004;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = __this->___subkey_3;
		CamelliaLightEngine_camelliaF2_m894C5E787FA3F7C63B37B8864F2068A9274459BA(__this, L_20, L_21, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = __this->___subkey_3;
		CamelliaLightEngine_camelliaF2_m894C5E787FA3F7C63B37B8864F2068A9274459BA(__this, L_22, L_23, 4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = __this->___subkey_3;
		CamelliaLightEngine_camelliaF2_m894C5E787FA3F7C63B37B8864F2068A9274459BA(__this, L_24, L_25, 8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = __this->___ke_5;
		CamelliaLightEngine_camelliaFLs_m2D4140DE2425BDA0E3FCF9F47F5691ECE1E37750(__this, L_26, L_27, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = __this->___subkey_3;
		CamelliaLightEngine_camelliaF2_m894C5E787FA3F7C63B37B8864F2068A9274459BA(__this, L_28, L_29, ((int32_t)12), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = __this->___subkey_3;
		CamelliaLightEngine_camelliaF2_m894C5E787FA3F7C63B37B8864F2068A9274459BA(__this, L_30, L_31, ((int32_t)16), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = __this->___subkey_3;
		CamelliaLightEngine_camelliaF2_m894C5E787FA3F7C63B37B8864F2068A9274459BA(__this, L_32, L_33, ((int32_t)20), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = __this->___ke_5;
		CamelliaLightEngine_camelliaFLs_m2D4140DE2425BDA0E3FCF9F47F5691ECE1E37750(__this, L_34, L_35, 4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = __this->___subkey_3;
		CamelliaLightEngine_camelliaF2_m894C5E787FA3F7C63B37B8864F2068A9274459BA(__this, L_36, L_37, ((int32_t)24), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = __this->___subkey_3;
		CamelliaLightEngine_camelliaF2_m894C5E787FA3F7C63B37B8864F2068A9274459BA(__this, L_38, L_39, ((int32_t)28), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = __this->___subkey_3;
		CamelliaLightEngine_camelliaF2_m894C5E787FA3F7C63B37B8864F2068A9274459BA(__this, L_40, L_41, ((int32_t)32), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = L_42;
		V_1 = L_43;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_1;
		NullCheck(L_44);
		int32_t L_45 = 2;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = __this->___kw_4;
		NullCheck(L_47);
		int32_t L_48 = 4;
		uint32_t L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)((int32_t)L_46^(int32_t)L_49)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = L_50;
		V_1 = L_51;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = V_1;
		NullCheck(L_52);
		int32_t L_53 = 3;
		uint32_t L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = __this->___kw_4;
		NullCheck(L_55);
		int32_t L_56 = 5;
		uint32_t L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)((int32_t)L_54^(int32_t)L_57)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = L_58;
		V_1 = L_59;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = V_1;
		NullCheck(L_60);
		int32_t L_61 = 0;
		uint32_t L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = __this->___kw_4;
		NullCheck(L_63);
		int32_t L_64 = 6;
		uint32_t L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)((int32_t)L_62^(int32_t)L_65)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = L_66;
		V_1 = L_67;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = V_1;
		NullCheck(L_68);
		int32_t L_69 = 1;
		uint32_t L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = __this->___kw_4;
		NullCheck(L_71);
		int32_t L_72 = 7;
		uint32_t L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)((int32_t)L_70^(int32_t)L_73)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = __this->___state_6;
		NullCheck(L_74);
		int32_t L_75 = 2;
		uint32_t L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = ___output2;
		int32_t L_78 = ___outOff3;
		il2cpp_codegen_runtime_class_init_inline(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var);
		CamelliaLightEngine_uint2bytes_mA864409013435FD254509902EFC184D32B4DC5F5(L_76, L_77, L_78, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = __this->___state_6;
		NullCheck(L_79);
		int32_t L_80 = 3;
		uint32_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = ___output2;
		int32_t L_83 = ___outOff3;
		CamelliaLightEngine_uint2bytes_mA864409013435FD254509902EFC184D32B4DC5F5(L_81, L_82, ((int32_t)il2cpp_codegen_add(L_83, 4)), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = __this->___state_6;
		NullCheck(L_84);
		int32_t L_85 = 0;
		uint32_t L_86 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_87 = ___output2;
		int32_t L_88 = ___outOff3;
		CamelliaLightEngine_uint2bytes_mA864409013435FD254509902EFC184D32B4DC5F5(L_86, L_87, ((int32_t)il2cpp_codegen_add(L_88, 8)), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_89 = __this->___state_6;
		NullCheck(L_89);
		int32_t L_90 = 1;
		uint32_t L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = ___output2;
		int32_t L_93 = ___outOff3;
		CamelliaLightEngine_uint2bytes_mA864409013435FD254509902EFC184D32B4DC5F5(L_91, L_92, ((int32_t)il2cpp_codegen_add(L_93, ((int32_t)12))), NULL);
		return ((int32_t)16);
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::processBlock192or256(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CamelliaLightEngine_processBlock192or256_m68AA6E55A22956830B3709BF75817CFA811F14EF (CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___state_6;
		int32_t L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		int32_t L_3 = ___inOff1;
		int32_t L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var);
		uint32_t L_5;
		L_5 = CamelliaLightEngine_bytes2uint_m76B73628E1B86B47C01717D31D7BD0F17544E558(L_2, ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)il2cpp_codegen_multiply(L_4, 4)))), NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6;
		V_1 = L_7;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		V_2 = L_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_1;
		intptr_t L_11 = V_2;
		NullCheck(L_10);
		intptr_t L_12 = L_11;
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = __this->___kw_4;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint32_t)((int32_t)((int32_t)L_13^(int32_t)L_17)));
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0033:
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) < ((int32_t)4)))
		{
			goto IL_0004;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = __this->___subkey_3;
		CamelliaLightEngine_camelliaF2_m894C5E787FA3F7C63B37B8864F2068A9274459BA(__this, L_20, L_21, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = __this->___subkey_3;
		CamelliaLightEngine_camelliaF2_m894C5E787FA3F7C63B37B8864F2068A9274459BA(__this, L_22, L_23, 4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = __this->___subkey_3;
		CamelliaLightEngine_camelliaF2_m894C5E787FA3F7C63B37B8864F2068A9274459BA(__this, L_24, L_25, 8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = __this->___ke_5;
		CamelliaLightEngine_camelliaFLs_m2D4140DE2425BDA0E3FCF9F47F5691ECE1E37750(__this, L_26, L_27, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = __this->___subkey_3;
		CamelliaLightEngine_camelliaF2_m894C5E787FA3F7C63B37B8864F2068A9274459BA(__this, L_28, L_29, ((int32_t)12), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = __this->___subkey_3;
		CamelliaLightEngine_camelliaF2_m894C5E787FA3F7C63B37B8864F2068A9274459BA(__this, L_30, L_31, ((int32_t)16), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = __this->___subkey_3;
		CamelliaLightEngine_camelliaF2_m894C5E787FA3F7C63B37B8864F2068A9274459BA(__this, L_32, L_33, ((int32_t)20), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = __this->___ke_5;
		CamelliaLightEngine_camelliaFLs_m2D4140DE2425BDA0E3FCF9F47F5691ECE1E37750(__this, L_34, L_35, 4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = __this->___subkey_3;
		CamelliaLightEngine_camelliaF2_m894C5E787FA3F7C63B37B8864F2068A9274459BA(__this, L_36, L_37, ((int32_t)24), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = __this->___subkey_3;
		CamelliaLightEngine_camelliaF2_m894C5E787FA3F7C63B37B8864F2068A9274459BA(__this, L_38, L_39, ((int32_t)28), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = __this->___subkey_3;
		CamelliaLightEngine_camelliaF2_m894C5E787FA3F7C63B37B8864F2068A9274459BA(__this, L_40, L_41, ((int32_t)32), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = __this->___ke_5;
		CamelliaLightEngine_camelliaFLs_m2D4140DE2425BDA0E3FCF9F47F5691ECE1E37750(__this, L_42, L_43, 8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = __this->___subkey_3;
		CamelliaLightEngine_camelliaF2_m894C5E787FA3F7C63B37B8864F2068A9274459BA(__this, L_44, L_45, ((int32_t)36), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = __this->___subkey_3;
		CamelliaLightEngine_camelliaF2_m894C5E787FA3F7C63B37B8864F2068A9274459BA(__this, L_46, L_47, ((int32_t)40), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = __this->___subkey_3;
		CamelliaLightEngine_camelliaF2_m894C5E787FA3F7C63B37B8864F2068A9274459BA(__this, L_48, L_49, ((int32_t)44), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = L_50;
		V_1 = L_51;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = V_1;
		NullCheck(L_52);
		int32_t L_53 = 2;
		uint32_t L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = __this->___kw_4;
		NullCheck(L_55);
		int32_t L_56 = 4;
		uint32_t L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)((int32_t)L_54^(int32_t)L_57)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = L_58;
		V_1 = L_59;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = V_1;
		NullCheck(L_60);
		int32_t L_61 = 3;
		uint32_t L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = __this->___kw_4;
		NullCheck(L_63);
		int32_t L_64 = 5;
		uint32_t L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)((int32_t)L_62^(int32_t)L_65)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = L_66;
		V_1 = L_67;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = V_1;
		NullCheck(L_68);
		int32_t L_69 = 0;
		uint32_t L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = __this->___kw_4;
		NullCheck(L_71);
		int32_t L_72 = 6;
		uint32_t L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)((int32_t)L_70^(int32_t)L_73)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = __this->___state_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = L_74;
		V_1 = L_75;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = V_1;
		NullCheck(L_76);
		int32_t L_77 = 1;
		uint32_t L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = __this->___kw_4;
		NullCheck(L_79);
		int32_t L_80 = 7;
		uint32_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)((int32_t)L_78^(int32_t)L_81)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_82 = __this->___state_6;
		NullCheck(L_82);
		int32_t L_83 = 2;
		uint32_t L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = ___output2;
		int32_t L_86 = ___outOff3;
		il2cpp_codegen_runtime_class_init_inline(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var);
		CamelliaLightEngine_uint2bytes_mA864409013435FD254509902EFC184D32B4DC5F5(L_84, L_85, L_86, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = __this->___state_6;
		NullCheck(L_87);
		int32_t L_88 = 3;
		uint32_t L_89 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = ___output2;
		int32_t L_91 = ___outOff3;
		CamelliaLightEngine_uint2bytes_mA864409013435FD254509902EFC184D32B4DC5F5(L_89, L_90, ((int32_t)il2cpp_codegen_add(L_91, 4)), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_92 = __this->___state_6;
		NullCheck(L_92);
		int32_t L_93 = 0;
		uint32_t L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = ___output2;
		int32_t L_96 = ___outOff3;
		CamelliaLightEngine_uint2bytes_mA864409013435FD254509902EFC184D32B4DC5F5(L_94, L_95, ((int32_t)il2cpp_codegen_add(L_96, 8)), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_97 = __this->___state_6;
		NullCheck(L_97);
		int32_t L_98 = 1;
		uint32_t L_99 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = ___output2;
		int32_t L_101 = ___outOff3;
		CamelliaLightEngine_uint2bytes_mA864409013435FD254509902EFC184D32B4DC5F5(L_99, L_100, ((int32_t)il2cpp_codegen_add(L_101, ((int32_t)12))), NULL);
		return ((int32_t)16);
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaLightEngine__ctor_mF843EB55E5DBCCAB6BEF534FB6508C6C48292D27 (CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)96));
		__this->___subkey_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___subkey_3), (void*)L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___kw_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kw_4), (void*)L_1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		__this->___ke_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ke_5), (void*)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___state_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___state_6), (void*)L_3);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___initialised_1 = (bool)0;
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CamelliaLightEngine_get_AlgorithmName_mA78672BFA36DC617EB04D38D90FE3556A4354481 (CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADD6D8A177ABA2127E8318877CAC012759A1B48C);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralADD6D8A177ABA2127E8318877CAC012759A1B48C;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CamelliaLightEngine_get_IsPartialBlockOkay_mE3ED156B5A632471FBF5A9A88FD09CCF82452C9A (CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CamelliaLightEngine_GetBlockSize_mCA39D59920D9337A12A9DA2DD9EECD06B4094724 (CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)16);
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaLightEngine_Init_m95EE3A0FA345DC45CB9FD0E1941BE5AE6BF3B41D (CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___parameters1;
		if (((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_0, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDD95C75C9DCA72699FD9C918B9D3B4AF6395E2D7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CamelliaLightEngine_Init_m95EE3A0FA345DC45CB9FD0E1941BE5AE6BF3B41D_RuntimeMethod_var)));
	}

IL_0013:
	{
		bool L_2 = ___forEncryption0;
		RuntimeObject* L_3 = ___parameters1;
		NullCheck(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_3, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_3, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)), NULL);
		CamelliaLightEngine_setKey_mC51754299AB34F4E19835E8862660D1254E4041F(__this, L_2, L_4, NULL);
		__this->___initialised_1 = (bool)1;
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CamelliaLightEngine_ProcessBlock_m71D4D76D3DFD549317B93495B12F752E47ECEAE3 (CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___initialised_1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD8C227C1CB3EF4325170D0B3FA875C26BBAD3D24)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CamelliaLightEngine_ProcessBlock_m71D4D76D3DFD549317B93495B12F752E47ECEAE3_RuntimeMethod_var)));
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		int32_t L_3 = ___inOff1;
		Check_DataLength_m4BEA4E45985CDB8967A7C3C71799B9036DDCC991(L_2, L_3, ((int32_t)16), _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output2;
		int32_t L_5 = ___outOff3;
		Check_OutputLength_mFBD480CE544E8B2C4EFAD3A12D1E105DC36FFA68(L_4, L_5, ((int32_t)16), _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		bool L_6 = __this->____keyis128_2;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___input0;
		int32_t L_8 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___output2;
		int32_t L_10 = ___outOff3;
		int32_t L_11;
		L_11 = CamelliaLightEngine_processBlock128_mCAA039A6D8A1A203DEF56822B3E442804A7808C3(__this, L_7, L_8, L_9, L_10, NULL);
		return L_11;
	}

IL_0044:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___input0;
		int32_t L_13 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___output2;
		int32_t L_15 = ___outOff3;
		int32_t L_16;
		L_16 = CamelliaLightEngine_processBlock192or256_m68AA6E55A22956830B3709BF75817CFA811F14EF(__this, L_12, L_13, L_14, L_15, NULL);
		return L_16;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaLightEngine_Reset_mCE8E4E78D15A04D68B9E88E3975B5A020996FD86 (CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaLightEngine__cctor_m021F2A227CD83948081C9D958BD8A8FC29A5A21A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014a7U2D1_85_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014a7U2D2_86_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014a7U2D1_85_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var))->___SIGMA_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var))->___SIGMA_7), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014a7U2D2_86_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		((CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var))->___SBOX1_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_StaticFields*)il2cpp_codegen_static_fields_for(CamelliaLightEngine_tC9C687210243F623952EEDDBC34DB5DBDD0821CB_il2cpp_TypeInfo_var))->___SBOX1_8), (void*)L_4);
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
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaWrapEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamelliaWrapEngine__ctor_mCA277EB925DB1B6664D43043BDDE60B8EA8FE7B1 (CamelliaWrapEngine_t9E9D45DF24F1AE26AC1D51273EDDFCC707971D75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC* L_0 = (CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC*)il2cpp_codegen_object_new(CamelliaEngine_t20D52D8C44543E817B04621081042DAC7D1D66CC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CamelliaEngine__ctor_m9A6E8F4B4AC416B5D563A8FBA4DF275604075B73(L_0, NULL);
		Rfc3394WrapEngine__ctor_m12BC3AD127033F7EAC9006FDF30AFDBCBACCA604(__this, L_0, NULL);
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
// System.Void Org.BouncyCastle.Crypto.Engines.Cast5Engine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cast5Engine__ctor_m6858C2EB522C4626844FE38AE39C4AABAD2A55B8 (Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		__this->____Kr_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Kr_11), (void*)L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		__this->____Km_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Km_12), (void*)L_1);
		il2cpp_codegen_runtime_class_init_inline(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var);
		int32_t L_2 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___MAX_ROUNDS_9;
		__this->____rounds_15 = L_2;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.Cast5Engine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cast5Engine_Init_m3B753396FA4BB7353FF3D4875C820429CC8D75A7 (Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___parameters1;
		if (((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_0, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)))
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String Org.BouncyCastle.Crypto.Engines.Cast5Engine::get_AlgorithmName() */, __this);
		RuntimeObject* L_2 = ___parameters1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var)));
		String_t* L_3;
		L_3 = Platform_GetTypeName_m9B04679202710BC6A96803803882849D0C5001FB(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EEBA88C3345B7974D085AB9F6434EA20A2141E4)), L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2872CE200AF678DAC1BDABD521199451F3CC11FA)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Cast5Engine_Init_m3B753396FA4BB7353FF3D4875C820429CC8D75A7_RuntimeMethod_var)));
	}

IL_0029:
	{
		bool L_6 = ___forEncryption0;
		__this->____encrypting_13 = L_6;
		RuntimeObject* L_7 = ___parameters1;
		NullCheck(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_7, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_7, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)), NULL);
		__this->____workingKey_14 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____workingKey_14), (void*)L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->____workingKey_14;
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(16 /* System.Void Org.BouncyCastle.Crypto.Engines.Cast5Engine::SetKey(System.Byte[]) */, __this, L_9);
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Engines.Cast5Engine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cast5Engine_get_AlgorithmName_m55D01A9323680611D7E6333A26A3BAF06E4F3718 (Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral579B9E8AC72DCCF33BDD5B6409BA010A973A4FD4);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral579B9E8AC72DCCF33BDD5B6409BA010A973A4FD4;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Engines.Cast5Engine::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cast5Engine_get_IsPartialBlockOkay_mB9723B0EE1A1F03CC835E55020EC904130701192 (Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.Cast5Engine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cast5Engine_ProcessBlock_mE67CB430ABD2C3BB130776487665E71415F46327 (Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 Org.BouncyCastle.Crypto.Engines.Cast5Engine::GetBlockSize() */, __this);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____workingKey_14;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String Org.BouncyCastle.Crypto.Engines.Cast5Engine::get_AlgorithmName() */, __this);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF54C61EA654A453F853B81CE072DEC048FBB4991)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Cast5Engine_ProcessBlock_mE67CB430ABD2C3BB130776487665E71415F46327_RuntimeMethod_var)));
	}

IL_0025:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___input0;
		int32_t L_6 = ___inOff1;
		int32_t L_7 = V_0;
		Check_DataLength_m4BEA4E45985CDB8967A7C3C71799B9036DDCC991(L_5, L_6, L_7, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___output2;
		int32_t L_9 = ___outOff3;
		int32_t L_10 = V_0;
		Check_OutputLength_mFBD480CE544E8B2C4EFAD3A12D1E105DC36FFA68(L_8, L_9, L_10, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		bool L_11 = __this->____encrypting_13;
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___input0;
		int32_t L_13 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___output2;
		int32_t L_15 = ___outOff3;
		int32_t L_16;
		L_16 = VirtualFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(17 /* System.Int32 Org.BouncyCastle.Crypto.Engines.Cast5Engine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, __this, L_12, L_13, L_14, L_15);
		return L_16;
	}

IL_0054:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___input0;
		int32_t L_18 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___output2;
		int32_t L_20 = ___outOff3;
		int32_t L_21;
		L_21 = VirtualFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(18 /* System.Int32 Org.BouncyCastle.Crypto.Engines.Cast5Engine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, __this, L_17, L_18, L_19, L_20);
		return L_21;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.Cast5Engine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cast5Engine_Reset_m8811060D8E1063A231C5FA9CFF042379F696907B (Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.Cast5Engine::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cast5Engine_GetBlockSize_m2EE21F861D7A3B38218EB8719A6A56B45F2131DA (Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737* __this, const RuntimeMethod* method) 
{
	{
		return 8;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.Cast5Engine::SetKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cast5Engine_SetKey_m5F34F3538047629B9ADAA77F5A1CBB1A4B0780F1 (Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___key0;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)((int32_t)11))))
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___RED_ROUNDS_10;
		__this->____rounds_15 = L_1;
	}

IL_0012:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_1 = L_3;
		V_10 = 0;
		goto IL_003b;
	}

IL_0027:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_1;
		int32_t L_5 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___key0;
		int32_t L_7 = V_10;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (int32_t)((int32_t)((int32_t)L_9&((int32_t)255))));
		int32_t L_10 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003b:
	{
		int32_t L_11 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___key0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var);
		uint32_t L_14;
		L_14 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_13, 0, NULL);
		V_6 = L_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_1;
		uint32_t L_16;
		L_16 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_15, 4, NULL);
		V_7 = L_16;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_1;
		uint32_t L_18;
		L_18 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_17, 8, NULL);
		V_8 = L_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_1;
		uint32_t L_20;
		L_20 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_19, ((int32_t)12), NULL);
		V_9 = L_20;
		uint32_t L_21 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_1;
		NullCheck(L_23);
		int32_t L_24 = ((int32_t)13);
		int32_t L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_22);
		int32_t L_26 = L_25;
		uint32_t L_27 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = V_1;
		NullCheck(L_29);
		int32_t L_30 = ((int32_t)15);
		int32_t L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_28);
		int32_t L_32 = L_31;
		uint32_t L_33 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_1;
		NullCheck(L_35);
		int32_t L_36 = ((int32_t)12);
		int32_t L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_34);
		int32_t L_38 = L_37;
		uint32_t L_39 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_1;
		NullCheck(L_41);
		int32_t L_42 = ((int32_t)14);
		int32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_40);
		int32_t L_44 = L_43;
		uint32_t L_45 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = V_1;
		NullCheck(L_47);
		int32_t L_48 = 8;
		int32_t L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_46);
		int32_t L_50 = L_49;
		uint32_t L_51 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_2 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_21^(int32_t)L_27))^(int32_t)L_33))^(int32_t)L_39))^(int32_t)L_45))^(int32_t)L_51));
		uint32_t L_52 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_0;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_52, L_53, 0, NULL);
		uint32_t L_54 = V_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_0;
		NullCheck(L_56);
		int32_t L_57 = 0;
		int32_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_55);
		int32_t L_59 = L_58;
		uint32_t L_60 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = V_0;
		NullCheck(L_62);
		int32_t L_63 = 2;
		int32_t L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_61);
		int32_t L_65 = L_64;
		uint32_t L_66 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = V_0;
		NullCheck(L_68);
		int32_t L_69 = 1;
		int32_t L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_67);
		int32_t L_71 = L_70;
		uint32_t L_72 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = V_0;
		NullCheck(L_74);
		int32_t L_75 = 3;
		int32_t L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		NullCheck(L_73);
		int32_t L_77 = L_76;
		uint32_t L_78 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = V_1;
		NullCheck(L_80);
		int32_t L_81 = ((int32_t)10);
		int32_t L_82 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_79);
		int32_t L_83 = L_82;
		uint32_t L_84 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		V_3 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_54^(int32_t)L_60))^(int32_t)L_66))^(int32_t)L_72))^(int32_t)L_78))^(int32_t)L_84));
		uint32_t L_85 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_86 = V_0;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_85, L_86, 4, NULL);
		uint32_t L_87 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = V_0;
		NullCheck(L_89);
		int32_t L_90 = 7;
		int32_t L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		NullCheck(L_88);
		int32_t L_92 = L_91;
		uint32_t L_93 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_94 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_95 = V_0;
		NullCheck(L_95);
		int32_t L_96 = 6;
		int32_t L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		NullCheck(L_94);
		int32_t L_98 = L_97;
		uint32_t L_99 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_100 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = V_0;
		NullCheck(L_101);
		int32_t L_102 = 5;
		int32_t L_103 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		NullCheck(L_100);
		int32_t L_104 = L_103;
		uint32_t L_105 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_106 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_107 = V_0;
		NullCheck(L_107);
		int32_t L_108 = 4;
		int32_t L_109 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		NullCheck(L_106);
		int32_t L_110 = L_109;
		uint32_t L_111 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_112 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_113 = V_1;
		NullCheck(L_113);
		int32_t L_114 = ((int32_t)9);
		int32_t L_115 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		NullCheck(L_112);
		int32_t L_116 = L_115;
		uint32_t L_117 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		V_4 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_87^(int32_t)L_93))^(int32_t)L_99))^(int32_t)L_105))^(int32_t)L_111))^(int32_t)L_117));
		uint32_t L_118 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_119 = V_0;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_118, L_119, 8, NULL);
		uint32_t L_120 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_121 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_122 = V_0;
		NullCheck(L_122);
		int32_t L_123 = ((int32_t)10);
		int32_t L_124 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		NullCheck(L_121);
		int32_t L_125 = L_124;
		uint32_t L_126 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_127 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_128 = V_0;
		NullCheck(L_128);
		int32_t L_129 = ((int32_t)9);
		int32_t L_130 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		NullCheck(L_127);
		int32_t L_131 = L_130;
		uint32_t L_132 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_133 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_134 = V_0;
		NullCheck(L_134);
		int32_t L_135 = ((int32_t)11);
		int32_t L_136 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		NullCheck(L_133);
		int32_t L_137 = L_136;
		uint32_t L_138 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_139 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_140 = V_0;
		NullCheck(L_140);
		int32_t L_141 = 8;
		int32_t L_142 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		NullCheck(L_139);
		int32_t L_143 = L_142;
		uint32_t L_144 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_145 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_146 = V_1;
		NullCheck(L_146);
		int32_t L_147 = ((int32_t)11);
		int32_t L_148 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		NullCheck(L_145);
		int32_t L_149 = L_148;
		uint32_t L_150 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		V_5 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_120^(int32_t)L_126))^(int32_t)L_132))^(int32_t)L_138))^(int32_t)L_144))^(int32_t)L_150));
		uint32_t L_151 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_152 = V_0;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_151, L_152, ((int32_t)12), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_153 = __this->____Km_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_154 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_155 = V_0;
		NullCheck(L_155);
		int32_t L_156 = 8;
		int32_t L_157 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		NullCheck(L_154);
		int32_t L_158 = L_157;
		uint32_t L_159 = (L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_160 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_161 = V_0;
		NullCheck(L_161);
		int32_t L_162 = ((int32_t)9);
		int32_t L_163 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		NullCheck(L_160);
		int32_t L_164 = L_163;
		uint32_t L_165 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_166 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_167 = V_0;
		NullCheck(L_167);
		int32_t L_168 = 7;
		int32_t L_169 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		NullCheck(L_166);
		int32_t L_170 = L_169;
		uint32_t L_171 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_172 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_173 = V_0;
		NullCheck(L_173);
		int32_t L_174 = 6;
		int32_t L_175 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		NullCheck(L_172);
		int32_t L_176 = L_175;
		uint32_t L_177 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_178 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_179 = V_0;
		NullCheck(L_179);
		int32_t L_180 = 2;
		int32_t L_181 = (L_179)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		NullCheck(L_178);
		int32_t L_182 = L_181;
		uint32_t L_183 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		NullCheck(L_153);
		(L_153)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_159^(int32_t)L_165))^(int32_t)L_171))^(int32_t)L_177))^(int32_t)L_183)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_184 = __this->____Km_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_185 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_186 = V_0;
		NullCheck(L_186);
		int32_t L_187 = ((int32_t)10);
		int32_t L_188 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_187));
		NullCheck(L_185);
		int32_t L_189 = L_188;
		uint32_t L_190 = (L_185)->GetAt(static_cast<il2cpp_array_size_t>(L_189));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_191 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_192 = V_0;
		NullCheck(L_192);
		int32_t L_193 = ((int32_t)11);
		int32_t L_194 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		NullCheck(L_191);
		int32_t L_195 = L_194;
		uint32_t L_196 = (L_191)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_197 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_198 = V_0;
		NullCheck(L_198);
		int32_t L_199 = 5;
		int32_t L_200 = (L_198)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		NullCheck(L_197);
		int32_t L_201 = L_200;
		uint32_t L_202 = (L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_201));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_203 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_204 = V_0;
		NullCheck(L_204);
		int32_t L_205 = 4;
		int32_t L_206 = (L_204)->GetAt(static_cast<il2cpp_array_size_t>(L_205));
		NullCheck(L_203);
		int32_t L_207 = L_206;
		uint32_t L_208 = (L_203)->GetAt(static_cast<il2cpp_array_size_t>(L_207));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_209 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_210 = V_0;
		NullCheck(L_210);
		int32_t L_211 = 6;
		int32_t L_212 = (L_210)->GetAt(static_cast<il2cpp_array_size_t>(L_211));
		NullCheck(L_209);
		int32_t L_213 = L_212;
		uint32_t L_214 = (L_209)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		NullCheck(L_184);
		(L_184)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_190^(int32_t)L_196))^(int32_t)L_202))^(int32_t)L_208))^(int32_t)L_214)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_215 = __this->____Km_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_216 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_217 = V_0;
		NullCheck(L_217);
		int32_t L_218 = ((int32_t)12);
		int32_t L_219 = (L_217)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		NullCheck(L_216);
		int32_t L_220 = L_219;
		uint32_t L_221 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_220));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_222 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_223 = V_0;
		NullCheck(L_223);
		int32_t L_224 = ((int32_t)13);
		int32_t L_225 = (L_223)->GetAt(static_cast<il2cpp_array_size_t>(L_224));
		NullCheck(L_222);
		int32_t L_226 = L_225;
		uint32_t L_227 = (L_222)->GetAt(static_cast<il2cpp_array_size_t>(L_226));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_228 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_229 = V_0;
		NullCheck(L_229);
		int32_t L_230 = 3;
		int32_t L_231 = (L_229)->GetAt(static_cast<il2cpp_array_size_t>(L_230));
		NullCheck(L_228);
		int32_t L_232 = L_231;
		uint32_t L_233 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_232));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_234 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_235 = V_0;
		NullCheck(L_235);
		int32_t L_236 = 2;
		int32_t L_237 = (L_235)->GetAt(static_cast<il2cpp_array_size_t>(L_236));
		NullCheck(L_234);
		int32_t L_238 = L_237;
		uint32_t L_239 = (L_234)->GetAt(static_cast<il2cpp_array_size_t>(L_238));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_240 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_241 = V_0;
		NullCheck(L_241);
		int32_t L_242 = ((int32_t)9);
		int32_t L_243 = (L_241)->GetAt(static_cast<il2cpp_array_size_t>(L_242));
		NullCheck(L_240);
		int32_t L_244 = L_243;
		uint32_t L_245 = (L_240)->GetAt(static_cast<il2cpp_array_size_t>(L_244));
		NullCheck(L_215);
		(L_215)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_221^(int32_t)L_227))^(int32_t)L_233))^(int32_t)L_239))^(int32_t)L_245)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_246 = __this->____Km_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_247 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_248 = V_0;
		NullCheck(L_248);
		int32_t L_249 = ((int32_t)14);
		int32_t L_250 = (L_248)->GetAt(static_cast<il2cpp_array_size_t>(L_249));
		NullCheck(L_247);
		int32_t L_251 = L_250;
		uint32_t L_252 = (L_247)->GetAt(static_cast<il2cpp_array_size_t>(L_251));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_253 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_254 = V_0;
		NullCheck(L_254);
		int32_t L_255 = ((int32_t)15);
		int32_t L_256 = (L_254)->GetAt(static_cast<il2cpp_array_size_t>(L_255));
		NullCheck(L_253);
		int32_t L_257 = L_256;
		uint32_t L_258 = (L_253)->GetAt(static_cast<il2cpp_array_size_t>(L_257));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_259 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_260 = V_0;
		NullCheck(L_260);
		int32_t L_261 = 1;
		int32_t L_262 = (L_260)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		NullCheck(L_259);
		int32_t L_263 = L_262;
		uint32_t L_264 = (L_259)->GetAt(static_cast<il2cpp_array_size_t>(L_263));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_265 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_266 = V_0;
		NullCheck(L_266);
		int32_t L_267 = 0;
		int32_t L_268 = (L_266)->GetAt(static_cast<il2cpp_array_size_t>(L_267));
		NullCheck(L_265);
		int32_t L_269 = L_268;
		uint32_t L_270 = (L_265)->GetAt(static_cast<il2cpp_array_size_t>(L_269));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_271 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_272 = V_0;
		NullCheck(L_272);
		int32_t L_273 = ((int32_t)12);
		int32_t L_274 = (L_272)->GetAt(static_cast<il2cpp_array_size_t>(L_273));
		NullCheck(L_271);
		int32_t L_275 = L_274;
		uint32_t L_276 = (L_271)->GetAt(static_cast<il2cpp_array_size_t>(L_275));
		NullCheck(L_246);
		(L_246)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_252^(int32_t)L_258))^(int32_t)L_264))^(int32_t)L_270))^(int32_t)L_276)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_277 = V_0;
		uint32_t L_278;
		L_278 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_277, 0, NULL);
		V_2 = L_278;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_279 = V_0;
		uint32_t L_280;
		L_280 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_279, 4, NULL);
		V_3 = L_280;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_281 = V_0;
		uint32_t L_282;
		L_282 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_281, 8, NULL);
		V_4 = L_282;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_283 = V_0;
		uint32_t L_284;
		L_284 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_283, ((int32_t)12), NULL);
		V_5 = L_284;
		uint32_t L_285 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_286 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_287 = V_0;
		NullCheck(L_287);
		int32_t L_288 = 5;
		int32_t L_289 = (L_287)->GetAt(static_cast<il2cpp_array_size_t>(L_288));
		NullCheck(L_286);
		int32_t L_290 = L_289;
		uint32_t L_291 = (L_286)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_292 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_293 = V_0;
		NullCheck(L_293);
		int32_t L_294 = 7;
		int32_t L_295 = (L_293)->GetAt(static_cast<il2cpp_array_size_t>(L_294));
		NullCheck(L_292);
		int32_t L_296 = L_295;
		uint32_t L_297 = (L_292)->GetAt(static_cast<il2cpp_array_size_t>(L_296));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_298 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_299 = V_0;
		NullCheck(L_299);
		int32_t L_300 = 4;
		int32_t L_301 = (L_299)->GetAt(static_cast<il2cpp_array_size_t>(L_300));
		NullCheck(L_298);
		int32_t L_302 = L_301;
		uint32_t L_303 = (L_298)->GetAt(static_cast<il2cpp_array_size_t>(L_302));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_304 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_305 = V_0;
		NullCheck(L_305);
		int32_t L_306 = 6;
		int32_t L_307 = (L_305)->GetAt(static_cast<il2cpp_array_size_t>(L_306));
		NullCheck(L_304);
		int32_t L_308 = L_307;
		uint32_t L_309 = (L_304)->GetAt(static_cast<il2cpp_array_size_t>(L_308));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_310 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_311 = V_0;
		NullCheck(L_311);
		int32_t L_312 = 0;
		int32_t L_313 = (L_311)->GetAt(static_cast<il2cpp_array_size_t>(L_312));
		NullCheck(L_310);
		int32_t L_314 = L_313;
		uint32_t L_315 = (L_310)->GetAt(static_cast<il2cpp_array_size_t>(L_314));
		V_6 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_285^(int32_t)L_291))^(int32_t)L_297))^(int32_t)L_303))^(int32_t)L_309))^(int32_t)L_315));
		uint32_t L_316 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_317 = V_1;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_316, L_317, 0, NULL);
		uint32_t L_318 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_319 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_320 = V_1;
		NullCheck(L_320);
		int32_t L_321 = 0;
		int32_t L_322 = (L_320)->GetAt(static_cast<il2cpp_array_size_t>(L_321));
		NullCheck(L_319);
		int32_t L_323 = L_322;
		uint32_t L_324 = (L_319)->GetAt(static_cast<il2cpp_array_size_t>(L_323));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_325 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_326 = V_1;
		NullCheck(L_326);
		int32_t L_327 = 2;
		int32_t L_328 = (L_326)->GetAt(static_cast<il2cpp_array_size_t>(L_327));
		NullCheck(L_325);
		int32_t L_329 = L_328;
		uint32_t L_330 = (L_325)->GetAt(static_cast<il2cpp_array_size_t>(L_329));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_331 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_332 = V_1;
		NullCheck(L_332);
		int32_t L_333 = 1;
		int32_t L_334 = (L_332)->GetAt(static_cast<il2cpp_array_size_t>(L_333));
		NullCheck(L_331);
		int32_t L_335 = L_334;
		uint32_t L_336 = (L_331)->GetAt(static_cast<il2cpp_array_size_t>(L_335));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_337 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_338 = V_1;
		NullCheck(L_338);
		int32_t L_339 = 3;
		int32_t L_340 = (L_338)->GetAt(static_cast<il2cpp_array_size_t>(L_339));
		NullCheck(L_337);
		int32_t L_341 = L_340;
		uint32_t L_342 = (L_337)->GetAt(static_cast<il2cpp_array_size_t>(L_341));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_343 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_344 = V_0;
		NullCheck(L_344);
		int32_t L_345 = 2;
		int32_t L_346 = (L_344)->GetAt(static_cast<il2cpp_array_size_t>(L_345));
		NullCheck(L_343);
		int32_t L_347 = L_346;
		uint32_t L_348 = (L_343)->GetAt(static_cast<il2cpp_array_size_t>(L_347));
		V_7 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_318^(int32_t)L_324))^(int32_t)L_330))^(int32_t)L_336))^(int32_t)L_342))^(int32_t)L_348));
		uint32_t L_349 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_350 = V_1;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_349, L_350, 4, NULL);
		uint32_t L_351 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_352 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_353 = V_1;
		NullCheck(L_353);
		int32_t L_354 = 7;
		int32_t L_355 = (L_353)->GetAt(static_cast<il2cpp_array_size_t>(L_354));
		NullCheck(L_352);
		int32_t L_356 = L_355;
		uint32_t L_357 = (L_352)->GetAt(static_cast<il2cpp_array_size_t>(L_356));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_358 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_359 = V_1;
		NullCheck(L_359);
		int32_t L_360 = 6;
		int32_t L_361 = (L_359)->GetAt(static_cast<il2cpp_array_size_t>(L_360));
		NullCheck(L_358);
		int32_t L_362 = L_361;
		uint32_t L_363 = (L_358)->GetAt(static_cast<il2cpp_array_size_t>(L_362));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_364 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_365 = V_1;
		NullCheck(L_365);
		int32_t L_366 = 5;
		int32_t L_367 = (L_365)->GetAt(static_cast<il2cpp_array_size_t>(L_366));
		NullCheck(L_364);
		int32_t L_368 = L_367;
		uint32_t L_369 = (L_364)->GetAt(static_cast<il2cpp_array_size_t>(L_368));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_370 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_371 = V_1;
		NullCheck(L_371);
		int32_t L_372 = 4;
		int32_t L_373 = (L_371)->GetAt(static_cast<il2cpp_array_size_t>(L_372));
		NullCheck(L_370);
		int32_t L_374 = L_373;
		uint32_t L_375 = (L_370)->GetAt(static_cast<il2cpp_array_size_t>(L_374));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_376 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_377 = V_0;
		NullCheck(L_377);
		int32_t L_378 = 1;
		int32_t L_379 = (L_377)->GetAt(static_cast<il2cpp_array_size_t>(L_378));
		NullCheck(L_376);
		int32_t L_380 = L_379;
		uint32_t L_381 = (L_376)->GetAt(static_cast<il2cpp_array_size_t>(L_380));
		V_8 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_351^(int32_t)L_357))^(int32_t)L_363))^(int32_t)L_369))^(int32_t)L_375))^(int32_t)L_381));
		uint32_t L_382 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_383 = V_1;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_382, L_383, 8, NULL);
		uint32_t L_384 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_385 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_386 = V_1;
		NullCheck(L_386);
		int32_t L_387 = ((int32_t)10);
		int32_t L_388 = (L_386)->GetAt(static_cast<il2cpp_array_size_t>(L_387));
		NullCheck(L_385);
		int32_t L_389 = L_388;
		uint32_t L_390 = (L_385)->GetAt(static_cast<il2cpp_array_size_t>(L_389));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_391 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_392 = V_1;
		NullCheck(L_392);
		int32_t L_393 = ((int32_t)9);
		int32_t L_394 = (L_392)->GetAt(static_cast<il2cpp_array_size_t>(L_393));
		NullCheck(L_391);
		int32_t L_395 = L_394;
		uint32_t L_396 = (L_391)->GetAt(static_cast<il2cpp_array_size_t>(L_395));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_397 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_398 = V_1;
		NullCheck(L_398);
		int32_t L_399 = ((int32_t)11);
		int32_t L_400 = (L_398)->GetAt(static_cast<il2cpp_array_size_t>(L_399));
		NullCheck(L_397);
		int32_t L_401 = L_400;
		uint32_t L_402 = (L_397)->GetAt(static_cast<il2cpp_array_size_t>(L_401));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_403 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_404 = V_1;
		NullCheck(L_404);
		int32_t L_405 = 8;
		int32_t L_406 = (L_404)->GetAt(static_cast<il2cpp_array_size_t>(L_405));
		NullCheck(L_403);
		int32_t L_407 = L_406;
		uint32_t L_408 = (L_403)->GetAt(static_cast<il2cpp_array_size_t>(L_407));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_409 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_410 = V_0;
		NullCheck(L_410);
		int32_t L_411 = 3;
		int32_t L_412 = (L_410)->GetAt(static_cast<il2cpp_array_size_t>(L_411));
		NullCheck(L_409);
		int32_t L_413 = L_412;
		uint32_t L_414 = (L_409)->GetAt(static_cast<il2cpp_array_size_t>(L_413));
		V_9 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_384^(int32_t)L_390))^(int32_t)L_396))^(int32_t)L_402))^(int32_t)L_408))^(int32_t)L_414));
		uint32_t L_415 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_416 = V_1;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_415, L_416, ((int32_t)12), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_417 = __this->____Km_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_418 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_419 = V_1;
		NullCheck(L_419);
		int32_t L_420 = 3;
		int32_t L_421 = (L_419)->GetAt(static_cast<il2cpp_array_size_t>(L_420));
		NullCheck(L_418);
		int32_t L_422 = L_421;
		uint32_t L_423 = (L_418)->GetAt(static_cast<il2cpp_array_size_t>(L_422));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_424 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_425 = V_1;
		NullCheck(L_425);
		int32_t L_426 = 2;
		int32_t L_427 = (L_425)->GetAt(static_cast<il2cpp_array_size_t>(L_426));
		NullCheck(L_424);
		int32_t L_428 = L_427;
		uint32_t L_429 = (L_424)->GetAt(static_cast<il2cpp_array_size_t>(L_428));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_430 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_431 = V_1;
		NullCheck(L_431);
		int32_t L_432 = ((int32_t)12);
		int32_t L_433 = (L_431)->GetAt(static_cast<il2cpp_array_size_t>(L_432));
		NullCheck(L_430);
		int32_t L_434 = L_433;
		uint32_t L_435 = (L_430)->GetAt(static_cast<il2cpp_array_size_t>(L_434));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_436 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_437 = V_1;
		NullCheck(L_437);
		int32_t L_438 = ((int32_t)13);
		int32_t L_439 = (L_437)->GetAt(static_cast<il2cpp_array_size_t>(L_438));
		NullCheck(L_436);
		int32_t L_440 = L_439;
		uint32_t L_441 = (L_436)->GetAt(static_cast<il2cpp_array_size_t>(L_440));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_442 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_443 = V_1;
		NullCheck(L_443);
		int32_t L_444 = 8;
		int32_t L_445 = (L_443)->GetAt(static_cast<il2cpp_array_size_t>(L_444));
		NullCheck(L_442);
		int32_t L_446 = L_445;
		uint32_t L_447 = (L_442)->GetAt(static_cast<il2cpp_array_size_t>(L_446));
		NullCheck(L_417);
		(L_417)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_423^(int32_t)L_429))^(int32_t)L_435))^(int32_t)L_441))^(int32_t)L_447)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_448 = __this->____Km_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_449 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_450 = V_1;
		NullCheck(L_450);
		int32_t L_451 = 1;
		int32_t L_452 = (L_450)->GetAt(static_cast<il2cpp_array_size_t>(L_451));
		NullCheck(L_449);
		int32_t L_453 = L_452;
		uint32_t L_454 = (L_449)->GetAt(static_cast<il2cpp_array_size_t>(L_453));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_455 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_456 = V_1;
		NullCheck(L_456);
		int32_t L_457 = 0;
		int32_t L_458 = (L_456)->GetAt(static_cast<il2cpp_array_size_t>(L_457));
		NullCheck(L_455);
		int32_t L_459 = L_458;
		uint32_t L_460 = (L_455)->GetAt(static_cast<il2cpp_array_size_t>(L_459));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_461 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_462 = V_1;
		NullCheck(L_462);
		int32_t L_463 = ((int32_t)14);
		int32_t L_464 = (L_462)->GetAt(static_cast<il2cpp_array_size_t>(L_463));
		NullCheck(L_461);
		int32_t L_465 = L_464;
		uint32_t L_466 = (L_461)->GetAt(static_cast<il2cpp_array_size_t>(L_465));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_467 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_468 = V_1;
		NullCheck(L_468);
		int32_t L_469 = ((int32_t)15);
		int32_t L_470 = (L_468)->GetAt(static_cast<il2cpp_array_size_t>(L_469));
		NullCheck(L_467);
		int32_t L_471 = L_470;
		uint32_t L_472 = (L_467)->GetAt(static_cast<il2cpp_array_size_t>(L_471));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_473 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_474 = V_1;
		NullCheck(L_474);
		int32_t L_475 = ((int32_t)13);
		int32_t L_476 = (L_474)->GetAt(static_cast<il2cpp_array_size_t>(L_475));
		NullCheck(L_473);
		int32_t L_477 = L_476;
		uint32_t L_478 = (L_473)->GetAt(static_cast<il2cpp_array_size_t>(L_477));
		NullCheck(L_448);
		(L_448)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_454^(int32_t)L_460))^(int32_t)L_466))^(int32_t)L_472))^(int32_t)L_478)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_479 = __this->____Km_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_480 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_481 = V_1;
		NullCheck(L_481);
		int32_t L_482 = 7;
		int32_t L_483 = (L_481)->GetAt(static_cast<il2cpp_array_size_t>(L_482));
		NullCheck(L_480);
		int32_t L_484 = L_483;
		uint32_t L_485 = (L_480)->GetAt(static_cast<il2cpp_array_size_t>(L_484));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_486 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_487 = V_1;
		NullCheck(L_487);
		int32_t L_488 = 6;
		int32_t L_489 = (L_487)->GetAt(static_cast<il2cpp_array_size_t>(L_488));
		NullCheck(L_486);
		int32_t L_490 = L_489;
		uint32_t L_491 = (L_486)->GetAt(static_cast<il2cpp_array_size_t>(L_490));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_492 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_493 = V_1;
		NullCheck(L_493);
		int32_t L_494 = 8;
		int32_t L_495 = (L_493)->GetAt(static_cast<il2cpp_array_size_t>(L_494));
		NullCheck(L_492);
		int32_t L_496 = L_495;
		uint32_t L_497 = (L_492)->GetAt(static_cast<il2cpp_array_size_t>(L_496));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_498 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_499 = V_1;
		NullCheck(L_499);
		int32_t L_500 = ((int32_t)9);
		int32_t L_501 = (L_499)->GetAt(static_cast<il2cpp_array_size_t>(L_500));
		NullCheck(L_498);
		int32_t L_502 = L_501;
		uint32_t L_503 = (L_498)->GetAt(static_cast<il2cpp_array_size_t>(L_502));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_504 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_505 = V_1;
		NullCheck(L_505);
		int32_t L_506 = 3;
		int32_t L_507 = (L_505)->GetAt(static_cast<il2cpp_array_size_t>(L_506));
		NullCheck(L_504);
		int32_t L_508 = L_507;
		uint32_t L_509 = (L_504)->GetAt(static_cast<il2cpp_array_size_t>(L_508));
		NullCheck(L_479);
		(L_479)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_485^(int32_t)L_491))^(int32_t)L_497))^(int32_t)L_503))^(int32_t)L_509)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_510 = __this->____Km_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_511 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_512 = V_1;
		NullCheck(L_512);
		int32_t L_513 = 5;
		int32_t L_514 = (L_512)->GetAt(static_cast<il2cpp_array_size_t>(L_513));
		NullCheck(L_511);
		int32_t L_515 = L_514;
		uint32_t L_516 = (L_511)->GetAt(static_cast<il2cpp_array_size_t>(L_515));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_517 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_518 = V_1;
		NullCheck(L_518);
		int32_t L_519 = 4;
		int32_t L_520 = (L_518)->GetAt(static_cast<il2cpp_array_size_t>(L_519));
		NullCheck(L_517);
		int32_t L_521 = L_520;
		uint32_t L_522 = (L_517)->GetAt(static_cast<il2cpp_array_size_t>(L_521));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_523 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_524 = V_1;
		NullCheck(L_524);
		int32_t L_525 = ((int32_t)10);
		int32_t L_526 = (L_524)->GetAt(static_cast<il2cpp_array_size_t>(L_525));
		NullCheck(L_523);
		int32_t L_527 = L_526;
		uint32_t L_528 = (L_523)->GetAt(static_cast<il2cpp_array_size_t>(L_527));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_529 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_530 = V_1;
		NullCheck(L_530);
		int32_t L_531 = ((int32_t)11);
		int32_t L_532 = (L_530)->GetAt(static_cast<il2cpp_array_size_t>(L_531));
		NullCheck(L_529);
		int32_t L_533 = L_532;
		uint32_t L_534 = (L_529)->GetAt(static_cast<il2cpp_array_size_t>(L_533));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_535 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_536 = V_1;
		NullCheck(L_536);
		int32_t L_537 = 7;
		int32_t L_538 = (L_536)->GetAt(static_cast<il2cpp_array_size_t>(L_537));
		NullCheck(L_535);
		int32_t L_539 = L_538;
		uint32_t L_540 = (L_535)->GetAt(static_cast<il2cpp_array_size_t>(L_539));
		NullCheck(L_510);
		(L_510)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_516^(int32_t)L_522))^(int32_t)L_528))^(int32_t)L_534))^(int32_t)L_540)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_541 = V_1;
		uint32_t L_542;
		L_542 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_541, 0, NULL);
		V_6 = L_542;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_543 = V_1;
		uint32_t L_544;
		L_544 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_543, 4, NULL);
		V_7 = L_544;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_545 = V_1;
		uint32_t L_546;
		L_546 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_545, 8, NULL);
		V_8 = L_546;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_547 = V_1;
		uint32_t L_548;
		L_548 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_547, ((int32_t)12), NULL);
		V_9 = L_548;
		uint32_t L_549 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_550 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_551 = V_1;
		NullCheck(L_551);
		int32_t L_552 = ((int32_t)13);
		int32_t L_553 = (L_551)->GetAt(static_cast<il2cpp_array_size_t>(L_552));
		NullCheck(L_550);
		int32_t L_554 = L_553;
		uint32_t L_555 = (L_550)->GetAt(static_cast<il2cpp_array_size_t>(L_554));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_556 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_557 = V_1;
		NullCheck(L_557);
		int32_t L_558 = ((int32_t)15);
		int32_t L_559 = (L_557)->GetAt(static_cast<il2cpp_array_size_t>(L_558));
		NullCheck(L_556);
		int32_t L_560 = L_559;
		uint32_t L_561 = (L_556)->GetAt(static_cast<il2cpp_array_size_t>(L_560));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_562 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_563 = V_1;
		NullCheck(L_563);
		int32_t L_564 = ((int32_t)12);
		int32_t L_565 = (L_563)->GetAt(static_cast<il2cpp_array_size_t>(L_564));
		NullCheck(L_562);
		int32_t L_566 = L_565;
		uint32_t L_567 = (L_562)->GetAt(static_cast<il2cpp_array_size_t>(L_566));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_568 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_569 = V_1;
		NullCheck(L_569);
		int32_t L_570 = ((int32_t)14);
		int32_t L_571 = (L_569)->GetAt(static_cast<il2cpp_array_size_t>(L_570));
		NullCheck(L_568);
		int32_t L_572 = L_571;
		uint32_t L_573 = (L_568)->GetAt(static_cast<il2cpp_array_size_t>(L_572));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_574 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_575 = V_1;
		NullCheck(L_575);
		int32_t L_576 = 8;
		int32_t L_577 = (L_575)->GetAt(static_cast<il2cpp_array_size_t>(L_576));
		NullCheck(L_574);
		int32_t L_578 = L_577;
		uint32_t L_579 = (L_574)->GetAt(static_cast<il2cpp_array_size_t>(L_578));
		V_2 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_549^(int32_t)L_555))^(int32_t)L_561))^(int32_t)L_567))^(int32_t)L_573))^(int32_t)L_579));
		uint32_t L_580 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_581 = V_0;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_580, L_581, 0, NULL);
		uint32_t L_582 = V_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_583 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_584 = V_0;
		NullCheck(L_584);
		int32_t L_585 = 0;
		int32_t L_586 = (L_584)->GetAt(static_cast<il2cpp_array_size_t>(L_585));
		NullCheck(L_583);
		int32_t L_587 = L_586;
		uint32_t L_588 = (L_583)->GetAt(static_cast<il2cpp_array_size_t>(L_587));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_589 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_590 = V_0;
		NullCheck(L_590);
		int32_t L_591 = 2;
		int32_t L_592 = (L_590)->GetAt(static_cast<il2cpp_array_size_t>(L_591));
		NullCheck(L_589);
		int32_t L_593 = L_592;
		uint32_t L_594 = (L_589)->GetAt(static_cast<il2cpp_array_size_t>(L_593));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_595 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_596 = V_0;
		NullCheck(L_596);
		int32_t L_597 = 1;
		int32_t L_598 = (L_596)->GetAt(static_cast<il2cpp_array_size_t>(L_597));
		NullCheck(L_595);
		int32_t L_599 = L_598;
		uint32_t L_600 = (L_595)->GetAt(static_cast<il2cpp_array_size_t>(L_599));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_601 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_602 = V_0;
		NullCheck(L_602);
		int32_t L_603 = 3;
		int32_t L_604 = (L_602)->GetAt(static_cast<il2cpp_array_size_t>(L_603));
		NullCheck(L_601);
		int32_t L_605 = L_604;
		uint32_t L_606 = (L_601)->GetAt(static_cast<il2cpp_array_size_t>(L_605));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_607 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_608 = V_1;
		NullCheck(L_608);
		int32_t L_609 = ((int32_t)10);
		int32_t L_610 = (L_608)->GetAt(static_cast<il2cpp_array_size_t>(L_609));
		NullCheck(L_607);
		int32_t L_611 = L_610;
		uint32_t L_612 = (L_607)->GetAt(static_cast<il2cpp_array_size_t>(L_611));
		V_3 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_582^(int32_t)L_588))^(int32_t)L_594))^(int32_t)L_600))^(int32_t)L_606))^(int32_t)L_612));
		uint32_t L_613 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_614 = V_0;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_613, L_614, 4, NULL);
		uint32_t L_615 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_616 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_617 = V_0;
		NullCheck(L_617);
		int32_t L_618 = 7;
		int32_t L_619 = (L_617)->GetAt(static_cast<il2cpp_array_size_t>(L_618));
		NullCheck(L_616);
		int32_t L_620 = L_619;
		uint32_t L_621 = (L_616)->GetAt(static_cast<il2cpp_array_size_t>(L_620));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_622 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_623 = V_0;
		NullCheck(L_623);
		int32_t L_624 = 6;
		int32_t L_625 = (L_623)->GetAt(static_cast<il2cpp_array_size_t>(L_624));
		NullCheck(L_622);
		int32_t L_626 = L_625;
		uint32_t L_627 = (L_622)->GetAt(static_cast<il2cpp_array_size_t>(L_626));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_628 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_629 = V_0;
		NullCheck(L_629);
		int32_t L_630 = 5;
		int32_t L_631 = (L_629)->GetAt(static_cast<il2cpp_array_size_t>(L_630));
		NullCheck(L_628);
		int32_t L_632 = L_631;
		uint32_t L_633 = (L_628)->GetAt(static_cast<il2cpp_array_size_t>(L_632));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_634 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_635 = V_0;
		NullCheck(L_635);
		int32_t L_636 = 4;
		int32_t L_637 = (L_635)->GetAt(static_cast<il2cpp_array_size_t>(L_636));
		NullCheck(L_634);
		int32_t L_638 = L_637;
		uint32_t L_639 = (L_634)->GetAt(static_cast<il2cpp_array_size_t>(L_638));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_640 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_641 = V_1;
		NullCheck(L_641);
		int32_t L_642 = ((int32_t)9);
		int32_t L_643 = (L_641)->GetAt(static_cast<il2cpp_array_size_t>(L_642));
		NullCheck(L_640);
		int32_t L_644 = L_643;
		uint32_t L_645 = (L_640)->GetAt(static_cast<il2cpp_array_size_t>(L_644));
		V_4 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_615^(int32_t)L_621))^(int32_t)L_627))^(int32_t)L_633))^(int32_t)L_639))^(int32_t)L_645));
		uint32_t L_646 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_647 = V_0;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_646, L_647, 8, NULL);
		uint32_t L_648 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_649 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_650 = V_0;
		NullCheck(L_650);
		int32_t L_651 = ((int32_t)10);
		int32_t L_652 = (L_650)->GetAt(static_cast<il2cpp_array_size_t>(L_651));
		NullCheck(L_649);
		int32_t L_653 = L_652;
		uint32_t L_654 = (L_649)->GetAt(static_cast<il2cpp_array_size_t>(L_653));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_655 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_656 = V_0;
		NullCheck(L_656);
		int32_t L_657 = ((int32_t)9);
		int32_t L_658 = (L_656)->GetAt(static_cast<il2cpp_array_size_t>(L_657));
		NullCheck(L_655);
		int32_t L_659 = L_658;
		uint32_t L_660 = (L_655)->GetAt(static_cast<il2cpp_array_size_t>(L_659));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_661 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_662 = V_0;
		NullCheck(L_662);
		int32_t L_663 = ((int32_t)11);
		int32_t L_664 = (L_662)->GetAt(static_cast<il2cpp_array_size_t>(L_663));
		NullCheck(L_661);
		int32_t L_665 = L_664;
		uint32_t L_666 = (L_661)->GetAt(static_cast<il2cpp_array_size_t>(L_665));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_667 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_668 = V_0;
		NullCheck(L_668);
		int32_t L_669 = 8;
		int32_t L_670 = (L_668)->GetAt(static_cast<il2cpp_array_size_t>(L_669));
		NullCheck(L_667);
		int32_t L_671 = L_670;
		uint32_t L_672 = (L_667)->GetAt(static_cast<il2cpp_array_size_t>(L_671));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_673 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_674 = V_1;
		NullCheck(L_674);
		int32_t L_675 = ((int32_t)11);
		int32_t L_676 = (L_674)->GetAt(static_cast<il2cpp_array_size_t>(L_675));
		NullCheck(L_673);
		int32_t L_677 = L_676;
		uint32_t L_678 = (L_673)->GetAt(static_cast<il2cpp_array_size_t>(L_677));
		V_5 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_648^(int32_t)L_654))^(int32_t)L_660))^(int32_t)L_666))^(int32_t)L_672))^(int32_t)L_678));
		uint32_t L_679 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_680 = V_0;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_679, L_680, ((int32_t)12), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_681 = __this->____Km_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_682 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_683 = V_0;
		NullCheck(L_683);
		int32_t L_684 = 3;
		int32_t L_685 = (L_683)->GetAt(static_cast<il2cpp_array_size_t>(L_684));
		NullCheck(L_682);
		int32_t L_686 = L_685;
		uint32_t L_687 = (L_682)->GetAt(static_cast<il2cpp_array_size_t>(L_686));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_688 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_689 = V_0;
		NullCheck(L_689);
		int32_t L_690 = 2;
		int32_t L_691 = (L_689)->GetAt(static_cast<il2cpp_array_size_t>(L_690));
		NullCheck(L_688);
		int32_t L_692 = L_691;
		uint32_t L_693 = (L_688)->GetAt(static_cast<il2cpp_array_size_t>(L_692));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_694 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_695 = V_0;
		NullCheck(L_695);
		int32_t L_696 = ((int32_t)12);
		int32_t L_697 = (L_695)->GetAt(static_cast<il2cpp_array_size_t>(L_696));
		NullCheck(L_694);
		int32_t L_698 = L_697;
		uint32_t L_699 = (L_694)->GetAt(static_cast<il2cpp_array_size_t>(L_698));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_700 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_701 = V_0;
		NullCheck(L_701);
		int32_t L_702 = ((int32_t)13);
		int32_t L_703 = (L_701)->GetAt(static_cast<il2cpp_array_size_t>(L_702));
		NullCheck(L_700);
		int32_t L_704 = L_703;
		uint32_t L_705 = (L_700)->GetAt(static_cast<il2cpp_array_size_t>(L_704));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_706 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_707 = V_0;
		NullCheck(L_707);
		int32_t L_708 = ((int32_t)9);
		int32_t L_709 = (L_707)->GetAt(static_cast<il2cpp_array_size_t>(L_708));
		NullCheck(L_706);
		int32_t L_710 = L_709;
		uint32_t L_711 = (L_706)->GetAt(static_cast<il2cpp_array_size_t>(L_710));
		NullCheck(L_681);
		(L_681)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_687^(int32_t)L_693))^(int32_t)L_699))^(int32_t)L_705))^(int32_t)L_711)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_712 = __this->____Km_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_713 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_714 = V_0;
		NullCheck(L_714);
		int32_t L_715 = 1;
		int32_t L_716 = (L_714)->GetAt(static_cast<il2cpp_array_size_t>(L_715));
		NullCheck(L_713);
		int32_t L_717 = L_716;
		uint32_t L_718 = (L_713)->GetAt(static_cast<il2cpp_array_size_t>(L_717));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_719 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_720 = V_0;
		NullCheck(L_720);
		int32_t L_721 = 0;
		int32_t L_722 = (L_720)->GetAt(static_cast<il2cpp_array_size_t>(L_721));
		NullCheck(L_719);
		int32_t L_723 = L_722;
		uint32_t L_724 = (L_719)->GetAt(static_cast<il2cpp_array_size_t>(L_723));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_725 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_726 = V_0;
		NullCheck(L_726);
		int32_t L_727 = ((int32_t)14);
		int32_t L_728 = (L_726)->GetAt(static_cast<il2cpp_array_size_t>(L_727));
		NullCheck(L_725);
		int32_t L_729 = L_728;
		uint32_t L_730 = (L_725)->GetAt(static_cast<il2cpp_array_size_t>(L_729));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_731 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_732 = V_0;
		NullCheck(L_732);
		int32_t L_733 = ((int32_t)15);
		int32_t L_734 = (L_732)->GetAt(static_cast<il2cpp_array_size_t>(L_733));
		NullCheck(L_731);
		int32_t L_735 = L_734;
		uint32_t L_736 = (L_731)->GetAt(static_cast<il2cpp_array_size_t>(L_735));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_737 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_738 = V_0;
		NullCheck(L_738);
		int32_t L_739 = ((int32_t)12);
		int32_t L_740 = (L_738)->GetAt(static_cast<il2cpp_array_size_t>(L_739));
		NullCheck(L_737);
		int32_t L_741 = L_740;
		uint32_t L_742 = (L_737)->GetAt(static_cast<il2cpp_array_size_t>(L_741));
		NullCheck(L_712);
		(L_712)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_718^(int32_t)L_724))^(int32_t)L_730))^(int32_t)L_736))^(int32_t)L_742)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_743 = __this->____Km_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_744 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_745 = V_0;
		NullCheck(L_745);
		int32_t L_746 = 7;
		int32_t L_747 = (L_745)->GetAt(static_cast<il2cpp_array_size_t>(L_746));
		NullCheck(L_744);
		int32_t L_748 = L_747;
		uint32_t L_749 = (L_744)->GetAt(static_cast<il2cpp_array_size_t>(L_748));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_750 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_751 = V_0;
		NullCheck(L_751);
		int32_t L_752 = 6;
		int32_t L_753 = (L_751)->GetAt(static_cast<il2cpp_array_size_t>(L_752));
		NullCheck(L_750);
		int32_t L_754 = L_753;
		uint32_t L_755 = (L_750)->GetAt(static_cast<il2cpp_array_size_t>(L_754));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_756 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_757 = V_0;
		NullCheck(L_757);
		int32_t L_758 = 8;
		int32_t L_759 = (L_757)->GetAt(static_cast<il2cpp_array_size_t>(L_758));
		NullCheck(L_756);
		int32_t L_760 = L_759;
		uint32_t L_761 = (L_756)->GetAt(static_cast<il2cpp_array_size_t>(L_760));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_762 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_763 = V_0;
		NullCheck(L_763);
		int32_t L_764 = ((int32_t)9);
		int32_t L_765 = (L_763)->GetAt(static_cast<il2cpp_array_size_t>(L_764));
		NullCheck(L_762);
		int32_t L_766 = L_765;
		uint32_t L_767 = (L_762)->GetAt(static_cast<il2cpp_array_size_t>(L_766));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_768 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_769 = V_0;
		NullCheck(L_769);
		int32_t L_770 = 2;
		int32_t L_771 = (L_769)->GetAt(static_cast<il2cpp_array_size_t>(L_770));
		NullCheck(L_768);
		int32_t L_772 = L_771;
		uint32_t L_773 = (L_768)->GetAt(static_cast<il2cpp_array_size_t>(L_772));
		NullCheck(L_743);
		(L_743)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_749^(int32_t)L_755))^(int32_t)L_761))^(int32_t)L_767))^(int32_t)L_773)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_774 = __this->____Km_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_775 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_776 = V_0;
		NullCheck(L_776);
		int32_t L_777 = 5;
		int32_t L_778 = (L_776)->GetAt(static_cast<il2cpp_array_size_t>(L_777));
		NullCheck(L_775);
		int32_t L_779 = L_778;
		uint32_t L_780 = (L_775)->GetAt(static_cast<il2cpp_array_size_t>(L_779));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_781 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_782 = V_0;
		NullCheck(L_782);
		int32_t L_783 = 4;
		int32_t L_784 = (L_782)->GetAt(static_cast<il2cpp_array_size_t>(L_783));
		NullCheck(L_781);
		int32_t L_785 = L_784;
		uint32_t L_786 = (L_781)->GetAt(static_cast<il2cpp_array_size_t>(L_785));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_787 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_788 = V_0;
		NullCheck(L_788);
		int32_t L_789 = ((int32_t)10);
		int32_t L_790 = (L_788)->GetAt(static_cast<il2cpp_array_size_t>(L_789));
		NullCheck(L_787);
		int32_t L_791 = L_790;
		uint32_t L_792 = (L_787)->GetAt(static_cast<il2cpp_array_size_t>(L_791));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_793 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_794 = V_0;
		NullCheck(L_794);
		int32_t L_795 = ((int32_t)11);
		int32_t L_796 = (L_794)->GetAt(static_cast<il2cpp_array_size_t>(L_795));
		NullCheck(L_793);
		int32_t L_797 = L_796;
		uint32_t L_798 = (L_793)->GetAt(static_cast<il2cpp_array_size_t>(L_797));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_799 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_800 = V_0;
		NullCheck(L_800);
		int32_t L_801 = 6;
		int32_t L_802 = (L_800)->GetAt(static_cast<il2cpp_array_size_t>(L_801));
		NullCheck(L_799);
		int32_t L_803 = L_802;
		uint32_t L_804 = (L_799)->GetAt(static_cast<il2cpp_array_size_t>(L_803));
		NullCheck(L_774);
		(L_774)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_780^(int32_t)L_786))^(int32_t)L_792))^(int32_t)L_798))^(int32_t)L_804)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_805 = V_0;
		uint32_t L_806;
		L_806 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_805, 0, NULL);
		V_2 = L_806;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_807 = V_0;
		uint32_t L_808;
		L_808 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_807, 4, NULL);
		V_3 = L_808;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_809 = V_0;
		uint32_t L_810;
		L_810 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_809, 8, NULL);
		V_4 = L_810;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_811 = V_0;
		uint32_t L_812;
		L_812 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_811, ((int32_t)12), NULL);
		V_5 = L_812;
		uint32_t L_813 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_814 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_815 = V_0;
		NullCheck(L_815);
		int32_t L_816 = 5;
		int32_t L_817 = (L_815)->GetAt(static_cast<il2cpp_array_size_t>(L_816));
		NullCheck(L_814);
		int32_t L_818 = L_817;
		uint32_t L_819 = (L_814)->GetAt(static_cast<il2cpp_array_size_t>(L_818));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_820 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_821 = V_0;
		NullCheck(L_821);
		int32_t L_822 = 7;
		int32_t L_823 = (L_821)->GetAt(static_cast<il2cpp_array_size_t>(L_822));
		NullCheck(L_820);
		int32_t L_824 = L_823;
		uint32_t L_825 = (L_820)->GetAt(static_cast<il2cpp_array_size_t>(L_824));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_826 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_827 = V_0;
		NullCheck(L_827);
		int32_t L_828 = 4;
		int32_t L_829 = (L_827)->GetAt(static_cast<il2cpp_array_size_t>(L_828));
		NullCheck(L_826);
		int32_t L_830 = L_829;
		uint32_t L_831 = (L_826)->GetAt(static_cast<il2cpp_array_size_t>(L_830));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_832 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_833 = V_0;
		NullCheck(L_833);
		int32_t L_834 = 6;
		int32_t L_835 = (L_833)->GetAt(static_cast<il2cpp_array_size_t>(L_834));
		NullCheck(L_832);
		int32_t L_836 = L_835;
		uint32_t L_837 = (L_832)->GetAt(static_cast<il2cpp_array_size_t>(L_836));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_838 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_839 = V_0;
		NullCheck(L_839);
		int32_t L_840 = 0;
		int32_t L_841 = (L_839)->GetAt(static_cast<il2cpp_array_size_t>(L_840));
		NullCheck(L_838);
		int32_t L_842 = L_841;
		uint32_t L_843 = (L_838)->GetAt(static_cast<il2cpp_array_size_t>(L_842));
		V_6 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_813^(int32_t)L_819))^(int32_t)L_825))^(int32_t)L_831))^(int32_t)L_837))^(int32_t)L_843));
		uint32_t L_844 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_845 = V_1;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_844, L_845, 0, NULL);
		uint32_t L_846 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_847 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_848 = V_1;
		NullCheck(L_848);
		int32_t L_849 = 0;
		int32_t L_850 = (L_848)->GetAt(static_cast<il2cpp_array_size_t>(L_849));
		NullCheck(L_847);
		int32_t L_851 = L_850;
		uint32_t L_852 = (L_847)->GetAt(static_cast<il2cpp_array_size_t>(L_851));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_853 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_854 = V_1;
		NullCheck(L_854);
		int32_t L_855 = 2;
		int32_t L_856 = (L_854)->GetAt(static_cast<il2cpp_array_size_t>(L_855));
		NullCheck(L_853);
		int32_t L_857 = L_856;
		uint32_t L_858 = (L_853)->GetAt(static_cast<il2cpp_array_size_t>(L_857));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_859 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_860 = V_1;
		NullCheck(L_860);
		int32_t L_861 = 1;
		int32_t L_862 = (L_860)->GetAt(static_cast<il2cpp_array_size_t>(L_861));
		NullCheck(L_859);
		int32_t L_863 = L_862;
		uint32_t L_864 = (L_859)->GetAt(static_cast<il2cpp_array_size_t>(L_863));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_865 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_866 = V_1;
		NullCheck(L_866);
		int32_t L_867 = 3;
		int32_t L_868 = (L_866)->GetAt(static_cast<il2cpp_array_size_t>(L_867));
		NullCheck(L_865);
		int32_t L_869 = L_868;
		uint32_t L_870 = (L_865)->GetAt(static_cast<il2cpp_array_size_t>(L_869));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_871 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_872 = V_0;
		NullCheck(L_872);
		int32_t L_873 = 2;
		int32_t L_874 = (L_872)->GetAt(static_cast<il2cpp_array_size_t>(L_873));
		NullCheck(L_871);
		int32_t L_875 = L_874;
		uint32_t L_876 = (L_871)->GetAt(static_cast<il2cpp_array_size_t>(L_875));
		V_7 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_846^(int32_t)L_852))^(int32_t)L_858))^(int32_t)L_864))^(int32_t)L_870))^(int32_t)L_876));
		uint32_t L_877 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_878 = V_1;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_877, L_878, 4, NULL);
		uint32_t L_879 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_880 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_881 = V_1;
		NullCheck(L_881);
		int32_t L_882 = 7;
		int32_t L_883 = (L_881)->GetAt(static_cast<il2cpp_array_size_t>(L_882));
		NullCheck(L_880);
		int32_t L_884 = L_883;
		uint32_t L_885 = (L_880)->GetAt(static_cast<il2cpp_array_size_t>(L_884));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_886 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_887 = V_1;
		NullCheck(L_887);
		int32_t L_888 = 6;
		int32_t L_889 = (L_887)->GetAt(static_cast<il2cpp_array_size_t>(L_888));
		NullCheck(L_886);
		int32_t L_890 = L_889;
		uint32_t L_891 = (L_886)->GetAt(static_cast<il2cpp_array_size_t>(L_890));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_892 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_893 = V_1;
		NullCheck(L_893);
		int32_t L_894 = 5;
		int32_t L_895 = (L_893)->GetAt(static_cast<il2cpp_array_size_t>(L_894));
		NullCheck(L_892);
		int32_t L_896 = L_895;
		uint32_t L_897 = (L_892)->GetAt(static_cast<il2cpp_array_size_t>(L_896));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_898 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_899 = V_1;
		NullCheck(L_899);
		int32_t L_900 = 4;
		int32_t L_901 = (L_899)->GetAt(static_cast<il2cpp_array_size_t>(L_900));
		NullCheck(L_898);
		int32_t L_902 = L_901;
		uint32_t L_903 = (L_898)->GetAt(static_cast<il2cpp_array_size_t>(L_902));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_904 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_905 = V_0;
		NullCheck(L_905);
		int32_t L_906 = 1;
		int32_t L_907 = (L_905)->GetAt(static_cast<il2cpp_array_size_t>(L_906));
		NullCheck(L_904);
		int32_t L_908 = L_907;
		uint32_t L_909 = (L_904)->GetAt(static_cast<il2cpp_array_size_t>(L_908));
		V_8 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_879^(int32_t)L_885))^(int32_t)L_891))^(int32_t)L_897))^(int32_t)L_903))^(int32_t)L_909));
		uint32_t L_910 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_911 = V_1;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_910, L_911, 8, NULL);
		uint32_t L_912 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_913 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_914 = V_1;
		NullCheck(L_914);
		int32_t L_915 = ((int32_t)10);
		int32_t L_916 = (L_914)->GetAt(static_cast<il2cpp_array_size_t>(L_915));
		NullCheck(L_913);
		int32_t L_917 = L_916;
		uint32_t L_918 = (L_913)->GetAt(static_cast<il2cpp_array_size_t>(L_917));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_919 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_920 = V_1;
		NullCheck(L_920);
		int32_t L_921 = ((int32_t)9);
		int32_t L_922 = (L_920)->GetAt(static_cast<il2cpp_array_size_t>(L_921));
		NullCheck(L_919);
		int32_t L_923 = L_922;
		uint32_t L_924 = (L_919)->GetAt(static_cast<il2cpp_array_size_t>(L_923));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_925 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_926 = V_1;
		NullCheck(L_926);
		int32_t L_927 = ((int32_t)11);
		int32_t L_928 = (L_926)->GetAt(static_cast<il2cpp_array_size_t>(L_927));
		NullCheck(L_925);
		int32_t L_929 = L_928;
		uint32_t L_930 = (L_925)->GetAt(static_cast<il2cpp_array_size_t>(L_929));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_931 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_932 = V_1;
		NullCheck(L_932);
		int32_t L_933 = 8;
		int32_t L_934 = (L_932)->GetAt(static_cast<il2cpp_array_size_t>(L_933));
		NullCheck(L_931);
		int32_t L_935 = L_934;
		uint32_t L_936 = (L_931)->GetAt(static_cast<il2cpp_array_size_t>(L_935));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_937 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_938 = V_0;
		NullCheck(L_938);
		int32_t L_939 = 3;
		int32_t L_940 = (L_938)->GetAt(static_cast<il2cpp_array_size_t>(L_939));
		NullCheck(L_937);
		int32_t L_941 = L_940;
		uint32_t L_942 = (L_937)->GetAt(static_cast<il2cpp_array_size_t>(L_941));
		V_9 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_912^(int32_t)L_918))^(int32_t)L_924))^(int32_t)L_930))^(int32_t)L_936))^(int32_t)L_942));
		uint32_t L_943 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_944 = V_1;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_943, L_944, ((int32_t)12), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_945 = __this->____Km_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_946 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_947 = V_1;
		NullCheck(L_947);
		int32_t L_948 = 8;
		int32_t L_949 = (L_947)->GetAt(static_cast<il2cpp_array_size_t>(L_948));
		NullCheck(L_946);
		int32_t L_950 = L_949;
		uint32_t L_951 = (L_946)->GetAt(static_cast<il2cpp_array_size_t>(L_950));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_952 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_953 = V_1;
		NullCheck(L_953);
		int32_t L_954 = ((int32_t)9);
		int32_t L_955 = (L_953)->GetAt(static_cast<il2cpp_array_size_t>(L_954));
		NullCheck(L_952);
		int32_t L_956 = L_955;
		uint32_t L_957 = (L_952)->GetAt(static_cast<il2cpp_array_size_t>(L_956));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_958 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_959 = V_1;
		NullCheck(L_959);
		int32_t L_960 = 7;
		int32_t L_961 = (L_959)->GetAt(static_cast<il2cpp_array_size_t>(L_960));
		NullCheck(L_958);
		int32_t L_962 = L_961;
		uint32_t L_963 = (L_958)->GetAt(static_cast<il2cpp_array_size_t>(L_962));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_964 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_965 = V_1;
		NullCheck(L_965);
		int32_t L_966 = 6;
		int32_t L_967 = (L_965)->GetAt(static_cast<il2cpp_array_size_t>(L_966));
		NullCheck(L_964);
		int32_t L_968 = L_967;
		uint32_t L_969 = (L_964)->GetAt(static_cast<il2cpp_array_size_t>(L_968));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_970 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_971 = V_1;
		NullCheck(L_971);
		int32_t L_972 = 3;
		int32_t L_973 = (L_971)->GetAt(static_cast<il2cpp_array_size_t>(L_972));
		NullCheck(L_970);
		int32_t L_974 = L_973;
		uint32_t L_975 = (L_970)->GetAt(static_cast<il2cpp_array_size_t>(L_974));
		NullCheck(L_945);
		(L_945)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_951^(int32_t)L_957))^(int32_t)L_963))^(int32_t)L_969))^(int32_t)L_975)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_976 = __this->____Km_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_977 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_978 = V_1;
		NullCheck(L_978);
		int32_t L_979 = ((int32_t)10);
		int32_t L_980 = (L_978)->GetAt(static_cast<il2cpp_array_size_t>(L_979));
		NullCheck(L_977);
		int32_t L_981 = L_980;
		uint32_t L_982 = (L_977)->GetAt(static_cast<il2cpp_array_size_t>(L_981));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_983 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_984 = V_1;
		NullCheck(L_984);
		int32_t L_985 = ((int32_t)11);
		int32_t L_986 = (L_984)->GetAt(static_cast<il2cpp_array_size_t>(L_985));
		NullCheck(L_983);
		int32_t L_987 = L_986;
		uint32_t L_988 = (L_983)->GetAt(static_cast<il2cpp_array_size_t>(L_987));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_989 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_990 = V_1;
		NullCheck(L_990);
		int32_t L_991 = 5;
		int32_t L_992 = (L_990)->GetAt(static_cast<il2cpp_array_size_t>(L_991));
		NullCheck(L_989);
		int32_t L_993 = L_992;
		uint32_t L_994 = (L_989)->GetAt(static_cast<il2cpp_array_size_t>(L_993));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_995 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_996 = V_1;
		NullCheck(L_996);
		int32_t L_997 = 4;
		int32_t L_998 = (L_996)->GetAt(static_cast<il2cpp_array_size_t>(L_997));
		NullCheck(L_995);
		int32_t L_999 = L_998;
		uint32_t L_1000 = (L_995)->GetAt(static_cast<il2cpp_array_size_t>(L_999));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1001 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1002 = V_1;
		NullCheck(L_1002);
		int32_t L_1003 = 7;
		int32_t L_1004 = (L_1002)->GetAt(static_cast<il2cpp_array_size_t>(L_1003));
		NullCheck(L_1001);
		int32_t L_1005 = L_1004;
		uint32_t L_1006 = (L_1001)->GetAt(static_cast<il2cpp_array_size_t>(L_1005));
		NullCheck(L_976);
		(L_976)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_982^(int32_t)L_988))^(int32_t)L_994))^(int32_t)L_1000))^(int32_t)L_1006)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1007 = __this->____Km_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1008 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1009 = V_1;
		NullCheck(L_1009);
		int32_t L_1010 = ((int32_t)12);
		int32_t L_1011 = (L_1009)->GetAt(static_cast<il2cpp_array_size_t>(L_1010));
		NullCheck(L_1008);
		int32_t L_1012 = L_1011;
		uint32_t L_1013 = (L_1008)->GetAt(static_cast<il2cpp_array_size_t>(L_1012));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1014 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1015 = V_1;
		NullCheck(L_1015);
		int32_t L_1016 = ((int32_t)13);
		int32_t L_1017 = (L_1015)->GetAt(static_cast<il2cpp_array_size_t>(L_1016));
		NullCheck(L_1014);
		int32_t L_1018 = L_1017;
		uint32_t L_1019 = (L_1014)->GetAt(static_cast<il2cpp_array_size_t>(L_1018));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1020 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1021 = V_1;
		NullCheck(L_1021);
		int32_t L_1022 = 3;
		int32_t L_1023 = (L_1021)->GetAt(static_cast<il2cpp_array_size_t>(L_1022));
		NullCheck(L_1020);
		int32_t L_1024 = L_1023;
		uint32_t L_1025 = (L_1020)->GetAt(static_cast<il2cpp_array_size_t>(L_1024));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1026 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1027 = V_1;
		NullCheck(L_1027);
		int32_t L_1028 = 2;
		int32_t L_1029 = (L_1027)->GetAt(static_cast<il2cpp_array_size_t>(L_1028));
		NullCheck(L_1026);
		int32_t L_1030 = L_1029;
		uint32_t L_1031 = (L_1026)->GetAt(static_cast<il2cpp_array_size_t>(L_1030));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1032 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1033 = V_1;
		NullCheck(L_1033);
		int32_t L_1034 = 8;
		int32_t L_1035 = (L_1033)->GetAt(static_cast<il2cpp_array_size_t>(L_1034));
		NullCheck(L_1032);
		int32_t L_1036 = L_1035;
		uint32_t L_1037 = (L_1032)->GetAt(static_cast<il2cpp_array_size_t>(L_1036));
		NullCheck(L_1007);
		(L_1007)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1013^(int32_t)L_1019))^(int32_t)L_1025))^(int32_t)L_1031))^(int32_t)L_1037)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1038 = __this->____Km_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1039 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1040 = V_1;
		NullCheck(L_1040);
		int32_t L_1041 = ((int32_t)14);
		int32_t L_1042 = (L_1040)->GetAt(static_cast<il2cpp_array_size_t>(L_1041));
		NullCheck(L_1039);
		int32_t L_1043 = L_1042;
		uint32_t L_1044 = (L_1039)->GetAt(static_cast<il2cpp_array_size_t>(L_1043));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1045 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1046 = V_1;
		NullCheck(L_1046);
		int32_t L_1047 = ((int32_t)15);
		int32_t L_1048 = (L_1046)->GetAt(static_cast<il2cpp_array_size_t>(L_1047));
		NullCheck(L_1045);
		int32_t L_1049 = L_1048;
		uint32_t L_1050 = (L_1045)->GetAt(static_cast<il2cpp_array_size_t>(L_1049));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1051 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1052 = V_1;
		NullCheck(L_1052);
		int32_t L_1053 = 1;
		int32_t L_1054 = (L_1052)->GetAt(static_cast<il2cpp_array_size_t>(L_1053));
		NullCheck(L_1051);
		int32_t L_1055 = L_1054;
		uint32_t L_1056 = (L_1051)->GetAt(static_cast<il2cpp_array_size_t>(L_1055));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1057 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1058 = V_1;
		NullCheck(L_1058);
		int32_t L_1059 = 0;
		int32_t L_1060 = (L_1058)->GetAt(static_cast<il2cpp_array_size_t>(L_1059));
		NullCheck(L_1057);
		int32_t L_1061 = L_1060;
		uint32_t L_1062 = (L_1057)->GetAt(static_cast<il2cpp_array_size_t>(L_1061));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1063 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1064 = V_1;
		NullCheck(L_1064);
		int32_t L_1065 = ((int32_t)13);
		int32_t L_1066 = (L_1064)->GetAt(static_cast<il2cpp_array_size_t>(L_1065));
		NullCheck(L_1063);
		int32_t L_1067 = L_1066;
		uint32_t L_1068 = (L_1063)->GetAt(static_cast<il2cpp_array_size_t>(L_1067));
		NullCheck(L_1038);
		(L_1038)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1044^(int32_t)L_1050))^(int32_t)L_1056))^(int32_t)L_1062))^(int32_t)L_1068)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1069 = V_1;
		uint32_t L_1070;
		L_1070 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_1069, 0, NULL);
		V_6 = L_1070;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1071 = V_1;
		uint32_t L_1072;
		L_1072 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_1071, 4, NULL);
		V_7 = L_1072;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1073 = V_1;
		uint32_t L_1074;
		L_1074 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_1073, 8, NULL);
		V_8 = L_1074;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1075 = V_1;
		uint32_t L_1076;
		L_1076 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_1075, ((int32_t)12), NULL);
		V_9 = L_1076;
		uint32_t L_1077 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1078 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1079 = V_1;
		NullCheck(L_1079);
		int32_t L_1080 = ((int32_t)13);
		int32_t L_1081 = (L_1079)->GetAt(static_cast<il2cpp_array_size_t>(L_1080));
		NullCheck(L_1078);
		int32_t L_1082 = L_1081;
		uint32_t L_1083 = (L_1078)->GetAt(static_cast<il2cpp_array_size_t>(L_1082));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1084 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1085 = V_1;
		NullCheck(L_1085);
		int32_t L_1086 = ((int32_t)15);
		int32_t L_1087 = (L_1085)->GetAt(static_cast<il2cpp_array_size_t>(L_1086));
		NullCheck(L_1084);
		int32_t L_1088 = L_1087;
		uint32_t L_1089 = (L_1084)->GetAt(static_cast<il2cpp_array_size_t>(L_1088));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1090 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1091 = V_1;
		NullCheck(L_1091);
		int32_t L_1092 = ((int32_t)12);
		int32_t L_1093 = (L_1091)->GetAt(static_cast<il2cpp_array_size_t>(L_1092));
		NullCheck(L_1090);
		int32_t L_1094 = L_1093;
		uint32_t L_1095 = (L_1090)->GetAt(static_cast<il2cpp_array_size_t>(L_1094));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1096 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1097 = V_1;
		NullCheck(L_1097);
		int32_t L_1098 = ((int32_t)14);
		int32_t L_1099 = (L_1097)->GetAt(static_cast<il2cpp_array_size_t>(L_1098));
		NullCheck(L_1096);
		int32_t L_1100 = L_1099;
		uint32_t L_1101 = (L_1096)->GetAt(static_cast<il2cpp_array_size_t>(L_1100));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1102 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1103 = V_1;
		NullCheck(L_1103);
		int32_t L_1104 = 8;
		int32_t L_1105 = (L_1103)->GetAt(static_cast<il2cpp_array_size_t>(L_1104));
		NullCheck(L_1102);
		int32_t L_1106 = L_1105;
		uint32_t L_1107 = (L_1102)->GetAt(static_cast<il2cpp_array_size_t>(L_1106));
		V_2 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1077^(int32_t)L_1083))^(int32_t)L_1089))^(int32_t)L_1095))^(int32_t)L_1101))^(int32_t)L_1107));
		uint32_t L_1108 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1109 = V_0;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_1108, L_1109, 0, NULL);
		uint32_t L_1110 = V_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1111 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1112 = V_0;
		NullCheck(L_1112);
		int32_t L_1113 = 0;
		int32_t L_1114 = (L_1112)->GetAt(static_cast<il2cpp_array_size_t>(L_1113));
		NullCheck(L_1111);
		int32_t L_1115 = L_1114;
		uint32_t L_1116 = (L_1111)->GetAt(static_cast<il2cpp_array_size_t>(L_1115));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1117 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1118 = V_0;
		NullCheck(L_1118);
		int32_t L_1119 = 2;
		int32_t L_1120 = (L_1118)->GetAt(static_cast<il2cpp_array_size_t>(L_1119));
		NullCheck(L_1117);
		int32_t L_1121 = L_1120;
		uint32_t L_1122 = (L_1117)->GetAt(static_cast<il2cpp_array_size_t>(L_1121));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1123 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1124 = V_0;
		NullCheck(L_1124);
		int32_t L_1125 = 1;
		int32_t L_1126 = (L_1124)->GetAt(static_cast<il2cpp_array_size_t>(L_1125));
		NullCheck(L_1123);
		int32_t L_1127 = L_1126;
		uint32_t L_1128 = (L_1123)->GetAt(static_cast<il2cpp_array_size_t>(L_1127));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1129 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1130 = V_0;
		NullCheck(L_1130);
		int32_t L_1131 = 3;
		int32_t L_1132 = (L_1130)->GetAt(static_cast<il2cpp_array_size_t>(L_1131));
		NullCheck(L_1129);
		int32_t L_1133 = L_1132;
		uint32_t L_1134 = (L_1129)->GetAt(static_cast<il2cpp_array_size_t>(L_1133));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1135 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1136 = V_1;
		NullCheck(L_1136);
		int32_t L_1137 = ((int32_t)10);
		int32_t L_1138 = (L_1136)->GetAt(static_cast<il2cpp_array_size_t>(L_1137));
		NullCheck(L_1135);
		int32_t L_1139 = L_1138;
		uint32_t L_1140 = (L_1135)->GetAt(static_cast<il2cpp_array_size_t>(L_1139));
		V_3 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1110^(int32_t)L_1116))^(int32_t)L_1122))^(int32_t)L_1128))^(int32_t)L_1134))^(int32_t)L_1140));
		uint32_t L_1141 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1142 = V_0;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_1141, L_1142, 4, NULL);
		uint32_t L_1143 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1144 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1145 = V_0;
		NullCheck(L_1145);
		int32_t L_1146 = 7;
		int32_t L_1147 = (L_1145)->GetAt(static_cast<il2cpp_array_size_t>(L_1146));
		NullCheck(L_1144);
		int32_t L_1148 = L_1147;
		uint32_t L_1149 = (L_1144)->GetAt(static_cast<il2cpp_array_size_t>(L_1148));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1150 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1151 = V_0;
		NullCheck(L_1151);
		int32_t L_1152 = 6;
		int32_t L_1153 = (L_1151)->GetAt(static_cast<il2cpp_array_size_t>(L_1152));
		NullCheck(L_1150);
		int32_t L_1154 = L_1153;
		uint32_t L_1155 = (L_1150)->GetAt(static_cast<il2cpp_array_size_t>(L_1154));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1156 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1157 = V_0;
		NullCheck(L_1157);
		int32_t L_1158 = 5;
		int32_t L_1159 = (L_1157)->GetAt(static_cast<il2cpp_array_size_t>(L_1158));
		NullCheck(L_1156);
		int32_t L_1160 = L_1159;
		uint32_t L_1161 = (L_1156)->GetAt(static_cast<il2cpp_array_size_t>(L_1160));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1162 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1163 = V_0;
		NullCheck(L_1163);
		int32_t L_1164 = 4;
		int32_t L_1165 = (L_1163)->GetAt(static_cast<il2cpp_array_size_t>(L_1164));
		NullCheck(L_1162);
		int32_t L_1166 = L_1165;
		uint32_t L_1167 = (L_1162)->GetAt(static_cast<il2cpp_array_size_t>(L_1166));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1168 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1169 = V_1;
		NullCheck(L_1169);
		int32_t L_1170 = ((int32_t)9);
		int32_t L_1171 = (L_1169)->GetAt(static_cast<il2cpp_array_size_t>(L_1170));
		NullCheck(L_1168);
		int32_t L_1172 = L_1171;
		uint32_t L_1173 = (L_1168)->GetAt(static_cast<il2cpp_array_size_t>(L_1172));
		V_4 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1143^(int32_t)L_1149))^(int32_t)L_1155))^(int32_t)L_1161))^(int32_t)L_1167))^(int32_t)L_1173));
		uint32_t L_1174 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1175 = V_0;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_1174, L_1175, 8, NULL);
		uint32_t L_1176 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1177 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1178 = V_0;
		NullCheck(L_1178);
		int32_t L_1179 = ((int32_t)10);
		int32_t L_1180 = (L_1178)->GetAt(static_cast<il2cpp_array_size_t>(L_1179));
		NullCheck(L_1177);
		int32_t L_1181 = L_1180;
		uint32_t L_1182 = (L_1177)->GetAt(static_cast<il2cpp_array_size_t>(L_1181));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1183 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1184 = V_0;
		NullCheck(L_1184);
		int32_t L_1185 = ((int32_t)9);
		int32_t L_1186 = (L_1184)->GetAt(static_cast<il2cpp_array_size_t>(L_1185));
		NullCheck(L_1183);
		int32_t L_1187 = L_1186;
		uint32_t L_1188 = (L_1183)->GetAt(static_cast<il2cpp_array_size_t>(L_1187));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1189 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1190 = V_0;
		NullCheck(L_1190);
		int32_t L_1191 = ((int32_t)11);
		int32_t L_1192 = (L_1190)->GetAt(static_cast<il2cpp_array_size_t>(L_1191));
		NullCheck(L_1189);
		int32_t L_1193 = L_1192;
		uint32_t L_1194 = (L_1189)->GetAt(static_cast<il2cpp_array_size_t>(L_1193));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1195 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1196 = V_0;
		NullCheck(L_1196);
		int32_t L_1197 = 8;
		int32_t L_1198 = (L_1196)->GetAt(static_cast<il2cpp_array_size_t>(L_1197));
		NullCheck(L_1195);
		int32_t L_1199 = L_1198;
		uint32_t L_1200 = (L_1195)->GetAt(static_cast<il2cpp_array_size_t>(L_1199));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1201 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1202 = V_1;
		NullCheck(L_1202);
		int32_t L_1203 = ((int32_t)11);
		int32_t L_1204 = (L_1202)->GetAt(static_cast<il2cpp_array_size_t>(L_1203));
		NullCheck(L_1201);
		int32_t L_1205 = L_1204;
		uint32_t L_1206 = (L_1201)->GetAt(static_cast<il2cpp_array_size_t>(L_1205));
		V_5 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1176^(int32_t)L_1182))^(int32_t)L_1188))^(int32_t)L_1194))^(int32_t)L_1200))^(int32_t)L_1206));
		uint32_t L_1207 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1208 = V_0;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_1207, L_1208, ((int32_t)12), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1209 = __this->____Kr_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1210 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1211 = V_0;
		NullCheck(L_1211);
		int32_t L_1212 = 8;
		int32_t L_1213 = (L_1211)->GetAt(static_cast<il2cpp_array_size_t>(L_1212));
		NullCheck(L_1210);
		int32_t L_1214 = L_1213;
		uint32_t L_1215 = (L_1210)->GetAt(static_cast<il2cpp_array_size_t>(L_1214));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1216 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1217 = V_0;
		NullCheck(L_1217);
		int32_t L_1218 = ((int32_t)9);
		int32_t L_1219 = (L_1217)->GetAt(static_cast<il2cpp_array_size_t>(L_1218));
		NullCheck(L_1216);
		int32_t L_1220 = L_1219;
		uint32_t L_1221 = (L_1216)->GetAt(static_cast<il2cpp_array_size_t>(L_1220));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1222 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1223 = V_0;
		NullCheck(L_1223);
		int32_t L_1224 = 7;
		int32_t L_1225 = (L_1223)->GetAt(static_cast<il2cpp_array_size_t>(L_1224));
		NullCheck(L_1222);
		int32_t L_1226 = L_1225;
		uint32_t L_1227 = (L_1222)->GetAt(static_cast<il2cpp_array_size_t>(L_1226));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1228 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1229 = V_0;
		NullCheck(L_1229);
		int32_t L_1230 = 6;
		int32_t L_1231 = (L_1229)->GetAt(static_cast<il2cpp_array_size_t>(L_1230));
		NullCheck(L_1228);
		int32_t L_1232 = L_1231;
		uint32_t L_1233 = (L_1228)->GetAt(static_cast<il2cpp_array_size_t>(L_1232));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1234 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1235 = V_0;
		NullCheck(L_1235);
		int32_t L_1236 = 2;
		int32_t L_1237 = (L_1235)->GetAt(static_cast<il2cpp_array_size_t>(L_1236));
		NullCheck(L_1234);
		int32_t L_1238 = L_1237;
		uint32_t L_1239 = (L_1234)->GetAt(static_cast<il2cpp_array_size_t>(L_1238));
		NullCheck(L_1209);
		(L_1209)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1215^(int32_t)L_1221))^(int32_t)L_1227))^(int32_t)L_1233))^(int32_t)L_1239))&((int32_t)31))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1240 = __this->____Kr_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1241 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1242 = V_0;
		NullCheck(L_1242);
		int32_t L_1243 = ((int32_t)10);
		int32_t L_1244 = (L_1242)->GetAt(static_cast<il2cpp_array_size_t>(L_1243));
		NullCheck(L_1241);
		int32_t L_1245 = L_1244;
		uint32_t L_1246 = (L_1241)->GetAt(static_cast<il2cpp_array_size_t>(L_1245));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1247 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1248 = V_0;
		NullCheck(L_1248);
		int32_t L_1249 = ((int32_t)11);
		int32_t L_1250 = (L_1248)->GetAt(static_cast<il2cpp_array_size_t>(L_1249));
		NullCheck(L_1247);
		int32_t L_1251 = L_1250;
		uint32_t L_1252 = (L_1247)->GetAt(static_cast<il2cpp_array_size_t>(L_1251));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1253 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1254 = V_0;
		NullCheck(L_1254);
		int32_t L_1255 = 5;
		int32_t L_1256 = (L_1254)->GetAt(static_cast<il2cpp_array_size_t>(L_1255));
		NullCheck(L_1253);
		int32_t L_1257 = L_1256;
		uint32_t L_1258 = (L_1253)->GetAt(static_cast<il2cpp_array_size_t>(L_1257));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1259 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1260 = V_0;
		NullCheck(L_1260);
		int32_t L_1261 = 4;
		int32_t L_1262 = (L_1260)->GetAt(static_cast<il2cpp_array_size_t>(L_1261));
		NullCheck(L_1259);
		int32_t L_1263 = L_1262;
		uint32_t L_1264 = (L_1259)->GetAt(static_cast<il2cpp_array_size_t>(L_1263));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1265 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1266 = V_0;
		NullCheck(L_1266);
		int32_t L_1267 = 6;
		int32_t L_1268 = (L_1266)->GetAt(static_cast<il2cpp_array_size_t>(L_1267));
		NullCheck(L_1265);
		int32_t L_1269 = L_1268;
		uint32_t L_1270 = (L_1265)->GetAt(static_cast<il2cpp_array_size_t>(L_1269));
		NullCheck(L_1240);
		(L_1240)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1246^(int32_t)L_1252))^(int32_t)L_1258))^(int32_t)L_1264))^(int32_t)L_1270))&((int32_t)31))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1271 = __this->____Kr_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1272 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1273 = V_0;
		NullCheck(L_1273);
		int32_t L_1274 = ((int32_t)12);
		int32_t L_1275 = (L_1273)->GetAt(static_cast<il2cpp_array_size_t>(L_1274));
		NullCheck(L_1272);
		int32_t L_1276 = L_1275;
		uint32_t L_1277 = (L_1272)->GetAt(static_cast<il2cpp_array_size_t>(L_1276));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1278 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1279 = V_0;
		NullCheck(L_1279);
		int32_t L_1280 = ((int32_t)13);
		int32_t L_1281 = (L_1279)->GetAt(static_cast<il2cpp_array_size_t>(L_1280));
		NullCheck(L_1278);
		int32_t L_1282 = L_1281;
		uint32_t L_1283 = (L_1278)->GetAt(static_cast<il2cpp_array_size_t>(L_1282));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1284 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1285 = V_0;
		NullCheck(L_1285);
		int32_t L_1286 = 3;
		int32_t L_1287 = (L_1285)->GetAt(static_cast<il2cpp_array_size_t>(L_1286));
		NullCheck(L_1284);
		int32_t L_1288 = L_1287;
		uint32_t L_1289 = (L_1284)->GetAt(static_cast<il2cpp_array_size_t>(L_1288));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1290 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1291 = V_0;
		NullCheck(L_1291);
		int32_t L_1292 = 2;
		int32_t L_1293 = (L_1291)->GetAt(static_cast<il2cpp_array_size_t>(L_1292));
		NullCheck(L_1290);
		int32_t L_1294 = L_1293;
		uint32_t L_1295 = (L_1290)->GetAt(static_cast<il2cpp_array_size_t>(L_1294));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1296 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1297 = V_0;
		NullCheck(L_1297);
		int32_t L_1298 = ((int32_t)9);
		int32_t L_1299 = (L_1297)->GetAt(static_cast<il2cpp_array_size_t>(L_1298));
		NullCheck(L_1296);
		int32_t L_1300 = L_1299;
		uint32_t L_1301 = (L_1296)->GetAt(static_cast<il2cpp_array_size_t>(L_1300));
		NullCheck(L_1271);
		(L_1271)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1277^(int32_t)L_1283))^(int32_t)L_1289))^(int32_t)L_1295))^(int32_t)L_1301))&((int32_t)31))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1302 = __this->____Kr_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1303 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1304 = V_0;
		NullCheck(L_1304);
		int32_t L_1305 = ((int32_t)14);
		int32_t L_1306 = (L_1304)->GetAt(static_cast<il2cpp_array_size_t>(L_1305));
		NullCheck(L_1303);
		int32_t L_1307 = L_1306;
		uint32_t L_1308 = (L_1303)->GetAt(static_cast<il2cpp_array_size_t>(L_1307));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1309 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1310 = V_0;
		NullCheck(L_1310);
		int32_t L_1311 = ((int32_t)15);
		int32_t L_1312 = (L_1310)->GetAt(static_cast<il2cpp_array_size_t>(L_1311));
		NullCheck(L_1309);
		int32_t L_1313 = L_1312;
		uint32_t L_1314 = (L_1309)->GetAt(static_cast<il2cpp_array_size_t>(L_1313));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1315 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1316 = V_0;
		NullCheck(L_1316);
		int32_t L_1317 = 1;
		int32_t L_1318 = (L_1316)->GetAt(static_cast<il2cpp_array_size_t>(L_1317));
		NullCheck(L_1315);
		int32_t L_1319 = L_1318;
		uint32_t L_1320 = (L_1315)->GetAt(static_cast<il2cpp_array_size_t>(L_1319));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1321 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1322 = V_0;
		NullCheck(L_1322);
		int32_t L_1323 = 0;
		int32_t L_1324 = (L_1322)->GetAt(static_cast<il2cpp_array_size_t>(L_1323));
		NullCheck(L_1321);
		int32_t L_1325 = L_1324;
		uint32_t L_1326 = (L_1321)->GetAt(static_cast<il2cpp_array_size_t>(L_1325));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1327 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1328 = V_0;
		NullCheck(L_1328);
		int32_t L_1329 = ((int32_t)12);
		int32_t L_1330 = (L_1328)->GetAt(static_cast<il2cpp_array_size_t>(L_1329));
		NullCheck(L_1327);
		int32_t L_1331 = L_1330;
		uint32_t L_1332 = (L_1327)->GetAt(static_cast<il2cpp_array_size_t>(L_1331));
		NullCheck(L_1302);
		(L_1302)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1308^(int32_t)L_1314))^(int32_t)L_1320))^(int32_t)L_1326))^(int32_t)L_1332))&((int32_t)31))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1333 = V_0;
		uint32_t L_1334;
		L_1334 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_1333, 0, NULL);
		V_2 = L_1334;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1335 = V_0;
		uint32_t L_1336;
		L_1336 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_1335, 4, NULL);
		V_3 = L_1336;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1337 = V_0;
		uint32_t L_1338;
		L_1338 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_1337, 8, NULL);
		V_4 = L_1338;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1339 = V_0;
		uint32_t L_1340;
		L_1340 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_1339, ((int32_t)12), NULL);
		V_5 = L_1340;
		uint32_t L_1341 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1342 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1343 = V_0;
		NullCheck(L_1343);
		int32_t L_1344 = 5;
		int32_t L_1345 = (L_1343)->GetAt(static_cast<il2cpp_array_size_t>(L_1344));
		NullCheck(L_1342);
		int32_t L_1346 = L_1345;
		uint32_t L_1347 = (L_1342)->GetAt(static_cast<il2cpp_array_size_t>(L_1346));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1348 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1349 = V_0;
		NullCheck(L_1349);
		int32_t L_1350 = 7;
		int32_t L_1351 = (L_1349)->GetAt(static_cast<il2cpp_array_size_t>(L_1350));
		NullCheck(L_1348);
		int32_t L_1352 = L_1351;
		uint32_t L_1353 = (L_1348)->GetAt(static_cast<il2cpp_array_size_t>(L_1352));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1354 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1355 = V_0;
		NullCheck(L_1355);
		int32_t L_1356 = 4;
		int32_t L_1357 = (L_1355)->GetAt(static_cast<il2cpp_array_size_t>(L_1356));
		NullCheck(L_1354);
		int32_t L_1358 = L_1357;
		uint32_t L_1359 = (L_1354)->GetAt(static_cast<il2cpp_array_size_t>(L_1358));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1360 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1361 = V_0;
		NullCheck(L_1361);
		int32_t L_1362 = 6;
		int32_t L_1363 = (L_1361)->GetAt(static_cast<il2cpp_array_size_t>(L_1362));
		NullCheck(L_1360);
		int32_t L_1364 = L_1363;
		uint32_t L_1365 = (L_1360)->GetAt(static_cast<il2cpp_array_size_t>(L_1364));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1366 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1367 = V_0;
		NullCheck(L_1367);
		int32_t L_1368 = 0;
		int32_t L_1369 = (L_1367)->GetAt(static_cast<il2cpp_array_size_t>(L_1368));
		NullCheck(L_1366);
		int32_t L_1370 = L_1369;
		uint32_t L_1371 = (L_1366)->GetAt(static_cast<il2cpp_array_size_t>(L_1370));
		V_6 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1341^(int32_t)L_1347))^(int32_t)L_1353))^(int32_t)L_1359))^(int32_t)L_1365))^(int32_t)L_1371));
		uint32_t L_1372 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1373 = V_1;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_1372, L_1373, 0, NULL);
		uint32_t L_1374 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1375 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1376 = V_1;
		NullCheck(L_1376);
		int32_t L_1377 = 0;
		int32_t L_1378 = (L_1376)->GetAt(static_cast<il2cpp_array_size_t>(L_1377));
		NullCheck(L_1375);
		int32_t L_1379 = L_1378;
		uint32_t L_1380 = (L_1375)->GetAt(static_cast<il2cpp_array_size_t>(L_1379));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1381 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1382 = V_1;
		NullCheck(L_1382);
		int32_t L_1383 = 2;
		int32_t L_1384 = (L_1382)->GetAt(static_cast<il2cpp_array_size_t>(L_1383));
		NullCheck(L_1381);
		int32_t L_1385 = L_1384;
		uint32_t L_1386 = (L_1381)->GetAt(static_cast<il2cpp_array_size_t>(L_1385));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1387 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1388 = V_1;
		NullCheck(L_1388);
		int32_t L_1389 = 1;
		int32_t L_1390 = (L_1388)->GetAt(static_cast<il2cpp_array_size_t>(L_1389));
		NullCheck(L_1387);
		int32_t L_1391 = L_1390;
		uint32_t L_1392 = (L_1387)->GetAt(static_cast<il2cpp_array_size_t>(L_1391));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1393 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1394 = V_1;
		NullCheck(L_1394);
		int32_t L_1395 = 3;
		int32_t L_1396 = (L_1394)->GetAt(static_cast<il2cpp_array_size_t>(L_1395));
		NullCheck(L_1393);
		int32_t L_1397 = L_1396;
		uint32_t L_1398 = (L_1393)->GetAt(static_cast<il2cpp_array_size_t>(L_1397));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1399 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1400 = V_0;
		NullCheck(L_1400);
		int32_t L_1401 = 2;
		int32_t L_1402 = (L_1400)->GetAt(static_cast<il2cpp_array_size_t>(L_1401));
		NullCheck(L_1399);
		int32_t L_1403 = L_1402;
		uint32_t L_1404 = (L_1399)->GetAt(static_cast<il2cpp_array_size_t>(L_1403));
		V_7 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1374^(int32_t)L_1380))^(int32_t)L_1386))^(int32_t)L_1392))^(int32_t)L_1398))^(int32_t)L_1404));
		uint32_t L_1405 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1406 = V_1;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_1405, L_1406, 4, NULL);
		uint32_t L_1407 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1408 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1409 = V_1;
		NullCheck(L_1409);
		int32_t L_1410 = 7;
		int32_t L_1411 = (L_1409)->GetAt(static_cast<il2cpp_array_size_t>(L_1410));
		NullCheck(L_1408);
		int32_t L_1412 = L_1411;
		uint32_t L_1413 = (L_1408)->GetAt(static_cast<il2cpp_array_size_t>(L_1412));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1414 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1415 = V_1;
		NullCheck(L_1415);
		int32_t L_1416 = 6;
		int32_t L_1417 = (L_1415)->GetAt(static_cast<il2cpp_array_size_t>(L_1416));
		NullCheck(L_1414);
		int32_t L_1418 = L_1417;
		uint32_t L_1419 = (L_1414)->GetAt(static_cast<il2cpp_array_size_t>(L_1418));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1420 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1421 = V_1;
		NullCheck(L_1421);
		int32_t L_1422 = 5;
		int32_t L_1423 = (L_1421)->GetAt(static_cast<il2cpp_array_size_t>(L_1422));
		NullCheck(L_1420);
		int32_t L_1424 = L_1423;
		uint32_t L_1425 = (L_1420)->GetAt(static_cast<il2cpp_array_size_t>(L_1424));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1426 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1427 = V_1;
		NullCheck(L_1427);
		int32_t L_1428 = 4;
		int32_t L_1429 = (L_1427)->GetAt(static_cast<il2cpp_array_size_t>(L_1428));
		NullCheck(L_1426);
		int32_t L_1430 = L_1429;
		uint32_t L_1431 = (L_1426)->GetAt(static_cast<il2cpp_array_size_t>(L_1430));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1432 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1433 = V_0;
		NullCheck(L_1433);
		int32_t L_1434 = 1;
		int32_t L_1435 = (L_1433)->GetAt(static_cast<il2cpp_array_size_t>(L_1434));
		NullCheck(L_1432);
		int32_t L_1436 = L_1435;
		uint32_t L_1437 = (L_1432)->GetAt(static_cast<il2cpp_array_size_t>(L_1436));
		V_8 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1407^(int32_t)L_1413))^(int32_t)L_1419))^(int32_t)L_1425))^(int32_t)L_1431))^(int32_t)L_1437));
		uint32_t L_1438 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1439 = V_1;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_1438, L_1439, 8, NULL);
		uint32_t L_1440 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1441 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1442 = V_1;
		NullCheck(L_1442);
		int32_t L_1443 = ((int32_t)10);
		int32_t L_1444 = (L_1442)->GetAt(static_cast<il2cpp_array_size_t>(L_1443));
		NullCheck(L_1441);
		int32_t L_1445 = L_1444;
		uint32_t L_1446 = (L_1441)->GetAt(static_cast<il2cpp_array_size_t>(L_1445));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1447 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1448 = V_1;
		NullCheck(L_1448);
		int32_t L_1449 = ((int32_t)9);
		int32_t L_1450 = (L_1448)->GetAt(static_cast<il2cpp_array_size_t>(L_1449));
		NullCheck(L_1447);
		int32_t L_1451 = L_1450;
		uint32_t L_1452 = (L_1447)->GetAt(static_cast<il2cpp_array_size_t>(L_1451));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1453 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1454 = V_1;
		NullCheck(L_1454);
		int32_t L_1455 = ((int32_t)11);
		int32_t L_1456 = (L_1454)->GetAt(static_cast<il2cpp_array_size_t>(L_1455));
		NullCheck(L_1453);
		int32_t L_1457 = L_1456;
		uint32_t L_1458 = (L_1453)->GetAt(static_cast<il2cpp_array_size_t>(L_1457));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1459 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1460 = V_1;
		NullCheck(L_1460);
		int32_t L_1461 = 8;
		int32_t L_1462 = (L_1460)->GetAt(static_cast<il2cpp_array_size_t>(L_1461));
		NullCheck(L_1459);
		int32_t L_1463 = L_1462;
		uint32_t L_1464 = (L_1459)->GetAt(static_cast<il2cpp_array_size_t>(L_1463));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1465 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1466 = V_0;
		NullCheck(L_1466);
		int32_t L_1467 = 3;
		int32_t L_1468 = (L_1466)->GetAt(static_cast<il2cpp_array_size_t>(L_1467));
		NullCheck(L_1465);
		int32_t L_1469 = L_1468;
		uint32_t L_1470 = (L_1465)->GetAt(static_cast<il2cpp_array_size_t>(L_1469));
		V_9 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1440^(int32_t)L_1446))^(int32_t)L_1452))^(int32_t)L_1458))^(int32_t)L_1464))^(int32_t)L_1470));
		uint32_t L_1471 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1472 = V_1;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_1471, L_1472, ((int32_t)12), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1473 = __this->____Kr_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1474 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1475 = V_1;
		NullCheck(L_1475);
		int32_t L_1476 = 3;
		int32_t L_1477 = (L_1475)->GetAt(static_cast<il2cpp_array_size_t>(L_1476));
		NullCheck(L_1474);
		int32_t L_1478 = L_1477;
		uint32_t L_1479 = (L_1474)->GetAt(static_cast<il2cpp_array_size_t>(L_1478));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1480 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1481 = V_1;
		NullCheck(L_1481);
		int32_t L_1482 = 2;
		int32_t L_1483 = (L_1481)->GetAt(static_cast<il2cpp_array_size_t>(L_1482));
		NullCheck(L_1480);
		int32_t L_1484 = L_1483;
		uint32_t L_1485 = (L_1480)->GetAt(static_cast<il2cpp_array_size_t>(L_1484));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1486 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1487 = V_1;
		NullCheck(L_1487);
		int32_t L_1488 = ((int32_t)12);
		int32_t L_1489 = (L_1487)->GetAt(static_cast<il2cpp_array_size_t>(L_1488));
		NullCheck(L_1486);
		int32_t L_1490 = L_1489;
		uint32_t L_1491 = (L_1486)->GetAt(static_cast<il2cpp_array_size_t>(L_1490));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1492 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1493 = V_1;
		NullCheck(L_1493);
		int32_t L_1494 = ((int32_t)13);
		int32_t L_1495 = (L_1493)->GetAt(static_cast<il2cpp_array_size_t>(L_1494));
		NullCheck(L_1492);
		int32_t L_1496 = L_1495;
		uint32_t L_1497 = (L_1492)->GetAt(static_cast<il2cpp_array_size_t>(L_1496));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1498 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1499 = V_1;
		NullCheck(L_1499);
		int32_t L_1500 = 8;
		int32_t L_1501 = (L_1499)->GetAt(static_cast<il2cpp_array_size_t>(L_1500));
		NullCheck(L_1498);
		int32_t L_1502 = L_1501;
		uint32_t L_1503 = (L_1498)->GetAt(static_cast<il2cpp_array_size_t>(L_1502));
		NullCheck(L_1473);
		(L_1473)->SetAt(static_cast<il2cpp_array_size_t>(5), (int32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1479^(int32_t)L_1485))^(int32_t)L_1491))^(int32_t)L_1497))^(int32_t)L_1503))&((int32_t)31))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1504 = __this->____Kr_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1505 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1506 = V_1;
		NullCheck(L_1506);
		int32_t L_1507 = 1;
		int32_t L_1508 = (L_1506)->GetAt(static_cast<il2cpp_array_size_t>(L_1507));
		NullCheck(L_1505);
		int32_t L_1509 = L_1508;
		uint32_t L_1510 = (L_1505)->GetAt(static_cast<il2cpp_array_size_t>(L_1509));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1511 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1512 = V_1;
		NullCheck(L_1512);
		int32_t L_1513 = 0;
		int32_t L_1514 = (L_1512)->GetAt(static_cast<il2cpp_array_size_t>(L_1513));
		NullCheck(L_1511);
		int32_t L_1515 = L_1514;
		uint32_t L_1516 = (L_1511)->GetAt(static_cast<il2cpp_array_size_t>(L_1515));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1517 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1518 = V_1;
		NullCheck(L_1518);
		int32_t L_1519 = ((int32_t)14);
		int32_t L_1520 = (L_1518)->GetAt(static_cast<il2cpp_array_size_t>(L_1519));
		NullCheck(L_1517);
		int32_t L_1521 = L_1520;
		uint32_t L_1522 = (L_1517)->GetAt(static_cast<il2cpp_array_size_t>(L_1521));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1523 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1524 = V_1;
		NullCheck(L_1524);
		int32_t L_1525 = ((int32_t)15);
		int32_t L_1526 = (L_1524)->GetAt(static_cast<il2cpp_array_size_t>(L_1525));
		NullCheck(L_1523);
		int32_t L_1527 = L_1526;
		uint32_t L_1528 = (L_1523)->GetAt(static_cast<il2cpp_array_size_t>(L_1527));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1529 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1530 = V_1;
		NullCheck(L_1530);
		int32_t L_1531 = ((int32_t)13);
		int32_t L_1532 = (L_1530)->GetAt(static_cast<il2cpp_array_size_t>(L_1531));
		NullCheck(L_1529);
		int32_t L_1533 = L_1532;
		uint32_t L_1534 = (L_1529)->GetAt(static_cast<il2cpp_array_size_t>(L_1533));
		NullCheck(L_1504);
		(L_1504)->SetAt(static_cast<il2cpp_array_size_t>(6), (int32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1510^(int32_t)L_1516))^(int32_t)L_1522))^(int32_t)L_1528))^(int32_t)L_1534))&((int32_t)31))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1535 = __this->____Kr_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1536 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1537 = V_1;
		NullCheck(L_1537);
		int32_t L_1538 = 7;
		int32_t L_1539 = (L_1537)->GetAt(static_cast<il2cpp_array_size_t>(L_1538));
		NullCheck(L_1536);
		int32_t L_1540 = L_1539;
		uint32_t L_1541 = (L_1536)->GetAt(static_cast<il2cpp_array_size_t>(L_1540));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1542 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1543 = V_1;
		NullCheck(L_1543);
		int32_t L_1544 = 6;
		int32_t L_1545 = (L_1543)->GetAt(static_cast<il2cpp_array_size_t>(L_1544));
		NullCheck(L_1542);
		int32_t L_1546 = L_1545;
		uint32_t L_1547 = (L_1542)->GetAt(static_cast<il2cpp_array_size_t>(L_1546));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1548 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1549 = V_1;
		NullCheck(L_1549);
		int32_t L_1550 = 8;
		int32_t L_1551 = (L_1549)->GetAt(static_cast<il2cpp_array_size_t>(L_1550));
		NullCheck(L_1548);
		int32_t L_1552 = L_1551;
		uint32_t L_1553 = (L_1548)->GetAt(static_cast<il2cpp_array_size_t>(L_1552));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1554 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1555 = V_1;
		NullCheck(L_1555);
		int32_t L_1556 = ((int32_t)9);
		int32_t L_1557 = (L_1555)->GetAt(static_cast<il2cpp_array_size_t>(L_1556));
		NullCheck(L_1554);
		int32_t L_1558 = L_1557;
		uint32_t L_1559 = (L_1554)->GetAt(static_cast<il2cpp_array_size_t>(L_1558));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1560 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1561 = V_1;
		NullCheck(L_1561);
		int32_t L_1562 = 3;
		int32_t L_1563 = (L_1561)->GetAt(static_cast<il2cpp_array_size_t>(L_1562));
		NullCheck(L_1560);
		int32_t L_1564 = L_1563;
		uint32_t L_1565 = (L_1560)->GetAt(static_cast<il2cpp_array_size_t>(L_1564));
		NullCheck(L_1535);
		(L_1535)->SetAt(static_cast<il2cpp_array_size_t>(7), (int32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1541^(int32_t)L_1547))^(int32_t)L_1553))^(int32_t)L_1559))^(int32_t)L_1565))&((int32_t)31))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1566 = __this->____Kr_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1567 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1568 = V_1;
		NullCheck(L_1568);
		int32_t L_1569 = 5;
		int32_t L_1570 = (L_1568)->GetAt(static_cast<il2cpp_array_size_t>(L_1569));
		NullCheck(L_1567);
		int32_t L_1571 = L_1570;
		uint32_t L_1572 = (L_1567)->GetAt(static_cast<il2cpp_array_size_t>(L_1571));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1573 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1574 = V_1;
		NullCheck(L_1574);
		int32_t L_1575 = 4;
		int32_t L_1576 = (L_1574)->GetAt(static_cast<il2cpp_array_size_t>(L_1575));
		NullCheck(L_1573);
		int32_t L_1577 = L_1576;
		uint32_t L_1578 = (L_1573)->GetAt(static_cast<il2cpp_array_size_t>(L_1577));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1579 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1580 = V_1;
		NullCheck(L_1580);
		int32_t L_1581 = ((int32_t)10);
		int32_t L_1582 = (L_1580)->GetAt(static_cast<il2cpp_array_size_t>(L_1581));
		NullCheck(L_1579);
		int32_t L_1583 = L_1582;
		uint32_t L_1584 = (L_1579)->GetAt(static_cast<il2cpp_array_size_t>(L_1583));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1585 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1586 = V_1;
		NullCheck(L_1586);
		int32_t L_1587 = ((int32_t)11);
		int32_t L_1588 = (L_1586)->GetAt(static_cast<il2cpp_array_size_t>(L_1587));
		NullCheck(L_1585);
		int32_t L_1589 = L_1588;
		uint32_t L_1590 = (L_1585)->GetAt(static_cast<il2cpp_array_size_t>(L_1589));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1591 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1592 = V_1;
		NullCheck(L_1592);
		int32_t L_1593 = 7;
		int32_t L_1594 = (L_1592)->GetAt(static_cast<il2cpp_array_size_t>(L_1593));
		NullCheck(L_1591);
		int32_t L_1595 = L_1594;
		uint32_t L_1596 = (L_1591)->GetAt(static_cast<il2cpp_array_size_t>(L_1595));
		NullCheck(L_1566);
		(L_1566)->SetAt(static_cast<il2cpp_array_size_t>(8), (int32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1572^(int32_t)L_1578))^(int32_t)L_1584))^(int32_t)L_1590))^(int32_t)L_1596))&((int32_t)31))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1597 = V_1;
		uint32_t L_1598;
		L_1598 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_1597, 0, NULL);
		V_6 = L_1598;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1599 = V_1;
		uint32_t L_1600;
		L_1600 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_1599, 4, NULL);
		V_7 = L_1600;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1601 = V_1;
		uint32_t L_1602;
		L_1602 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_1601, 8, NULL);
		V_8 = L_1602;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1603 = V_1;
		uint32_t L_1604;
		L_1604 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_1603, ((int32_t)12), NULL);
		V_9 = L_1604;
		uint32_t L_1605 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1606 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1607 = V_1;
		NullCheck(L_1607);
		int32_t L_1608 = ((int32_t)13);
		int32_t L_1609 = (L_1607)->GetAt(static_cast<il2cpp_array_size_t>(L_1608));
		NullCheck(L_1606);
		int32_t L_1610 = L_1609;
		uint32_t L_1611 = (L_1606)->GetAt(static_cast<il2cpp_array_size_t>(L_1610));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1612 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1613 = V_1;
		NullCheck(L_1613);
		int32_t L_1614 = ((int32_t)15);
		int32_t L_1615 = (L_1613)->GetAt(static_cast<il2cpp_array_size_t>(L_1614));
		NullCheck(L_1612);
		int32_t L_1616 = L_1615;
		uint32_t L_1617 = (L_1612)->GetAt(static_cast<il2cpp_array_size_t>(L_1616));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1618 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1619 = V_1;
		NullCheck(L_1619);
		int32_t L_1620 = ((int32_t)12);
		int32_t L_1621 = (L_1619)->GetAt(static_cast<il2cpp_array_size_t>(L_1620));
		NullCheck(L_1618);
		int32_t L_1622 = L_1621;
		uint32_t L_1623 = (L_1618)->GetAt(static_cast<il2cpp_array_size_t>(L_1622));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1624 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1625 = V_1;
		NullCheck(L_1625);
		int32_t L_1626 = ((int32_t)14);
		int32_t L_1627 = (L_1625)->GetAt(static_cast<il2cpp_array_size_t>(L_1626));
		NullCheck(L_1624);
		int32_t L_1628 = L_1627;
		uint32_t L_1629 = (L_1624)->GetAt(static_cast<il2cpp_array_size_t>(L_1628));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1630 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1631 = V_1;
		NullCheck(L_1631);
		int32_t L_1632 = 8;
		int32_t L_1633 = (L_1631)->GetAt(static_cast<il2cpp_array_size_t>(L_1632));
		NullCheck(L_1630);
		int32_t L_1634 = L_1633;
		uint32_t L_1635 = (L_1630)->GetAt(static_cast<il2cpp_array_size_t>(L_1634));
		V_2 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1605^(int32_t)L_1611))^(int32_t)L_1617))^(int32_t)L_1623))^(int32_t)L_1629))^(int32_t)L_1635));
		uint32_t L_1636 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1637 = V_0;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_1636, L_1637, 0, NULL);
		uint32_t L_1638 = V_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1639 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1640 = V_0;
		NullCheck(L_1640);
		int32_t L_1641 = 0;
		int32_t L_1642 = (L_1640)->GetAt(static_cast<il2cpp_array_size_t>(L_1641));
		NullCheck(L_1639);
		int32_t L_1643 = L_1642;
		uint32_t L_1644 = (L_1639)->GetAt(static_cast<il2cpp_array_size_t>(L_1643));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1645 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1646 = V_0;
		NullCheck(L_1646);
		int32_t L_1647 = 2;
		int32_t L_1648 = (L_1646)->GetAt(static_cast<il2cpp_array_size_t>(L_1647));
		NullCheck(L_1645);
		int32_t L_1649 = L_1648;
		uint32_t L_1650 = (L_1645)->GetAt(static_cast<il2cpp_array_size_t>(L_1649));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1651 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1652 = V_0;
		NullCheck(L_1652);
		int32_t L_1653 = 1;
		int32_t L_1654 = (L_1652)->GetAt(static_cast<il2cpp_array_size_t>(L_1653));
		NullCheck(L_1651);
		int32_t L_1655 = L_1654;
		uint32_t L_1656 = (L_1651)->GetAt(static_cast<il2cpp_array_size_t>(L_1655));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1657 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1658 = V_0;
		NullCheck(L_1658);
		int32_t L_1659 = 3;
		int32_t L_1660 = (L_1658)->GetAt(static_cast<il2cpp_array_size_t>(L_1659));
		NullCheck(L_1657);
		int32_t L_1661 = L_1660;
		uint32_t L_1662 = (L_1657)->GetAt(static_cast<il2cpp_array_size_t>(L_1661));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1663 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1664 = V_1;
		NullCheck(L_1664);
		int32_t L_1665 = ((int32_t)10);
		int32_t L_1666 = (L_1664)->GetAt(static_cast<il2cpp_array_size_t>(L_1665));
		NullCheck(L_1663);
		int32_t L_1667 = L_1666;
		uint32_t L_1668 = (L_1663)->GetAt(static_cast<il2cpp_array_size_t>(L_1667));
		V_3 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1638^(int32_t)L_1644))^(int32_t)L_1650))^(int32_t)L_1656))^(int32_t)L_1662))^(int32_t)L_1668));
		uint32_t L_1669 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1670 = V_0;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_1669, L_1670, 4, NULL);
		uint32_t L_1671 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1672 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1673 = V_0;
		NullCheck(L_1673);
		int32_t L_1674 = 7;
		int32_t L_1675 = (L_1673)->GetAt(static_cast<il2cpp_array_size_t>(L_1674));
		NullCheck(L_1672);
		int32_t L_1676 = L_1675;
		uint32_t L_1677 = (L_1672)->GetAt(static_cast<il2cpp_array_size_t>(L_1676));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1678 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1679 = V_0;
		NullCheck(L_1679);
		int32_t L_1680 = 6;
		int32_t L_1681 = (L_1679)->GetAt(static_cast<il2cpp_array_size_t>(L_1680));
		NullCheck(L_1678);
		int32_t L_1682 = L_1681;
		uint32_t L_1683 = (L_1678)->GetAt(static_cast<il2cpp_array_size_t>(L_1682));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1684 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1685 = V_0;
		NullCheck(L_1685);
		int32_t L_1686 = 5;
		int32_t L_1687 = (L_1685)->GetAt(static_cast<il2cpp_array_size_t>(L_1686));
		NullCheck(L_1684);
		int32_t L_1688 = L_1687;
		uint32_t L_1689 = (L_1684)->GetAt(static_cast<il2cpp_array_size_t>(L_1688));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1690 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1691 = V_0;
		NullCheck(L_1691);
		int32_t L_1692 = 4;
		int32_t L_1693 = (L_1691)->GetAt(static_cast<il2cpp_array_size_t>(L_1692));
		NullCheck(L_1690);
		int32_t L_1694 = L_1693;
		uint32_t L_1695 = (L_1690)->GetAt(static_cast<il2cpp_array_size_t>(L_1694));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1696 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1697 = V_1;
		NullCheck(L_1697);
		int32_t L_1698 = ((int32_t)9);
		int32_t L_1699 = (L_1697)->GetAt(static_cast<il2cpp_array_size_t>(L_1698));
		NullCheck(L_1696);
		int32_t L_1700 = L_1699;
		uint32_t L_1701 = (L_1696)->GetAt(static_cast<il2cpp_array_size_t>(L_1700));
		V_4 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1671^(int32_t)L_1677))^(int32_t)L_1683))^(int32_t)L_1689))^(int32_t)L_1695))^(int32_t)L_1701));
		uint32_t L_1702 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1703 = V_0;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_1702, L_1703, 8, NULL);
		uint32_t L_1704 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1705 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1706 = V_0;
		NullCheck(L_1706);
		int32_t L_1707 = ((int32_t)10);
		int32_t L_1708 = (L_1706)->GetAt(static_cast<il2cpp_array_size_t>(L_1707));
		NullCheck(L_1705);
		int32_t L_1709 = L_1708;
		uint32_t L_1710 = (L_1705)->GetAt(static_cast<il2cpp_array_size_t>(L_1709));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1711 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1712 = V_0;
		NullCheck(L_1712);
		int32_t L_1713 = ((int32_t)9);
		int32_t L_1714 = (L_1712)->GetAt(static_cast<il2cpp_array_size_t>(L_1713));
		NullCheck(L_1711);
		int32_t L_1715 = L_1714;
		uint32_t L_1716 = (L_1711)->GetAt(static_cast<il2cpp_array_size_t>(L_1715));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1717 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1718 = V_0;
		NullCheck(L_1718);
		int32_t L_1719 = ((int32_t)11);
		int32_t L_1720 = (L_1718)->GetAt(static_cast<il2cpp_array_size_t>(L_1719));
		NullCheck(L_1717);
		int32_t L_1721 = L_1720;
		uint32_t L_1722 = (L_1717)->GetAt(static_cast<il2cpp_array_size_t>(L_1721));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1723 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1724 = V_0;
		NullCheck(L_1724);
		int32_t L_1725 = 8;
		int32_t L_1726 = (L_1724)->GetAt(static_cast<il2cpp_array_size_t>(L_1725));
		NullCheck(L_1723);
		int32_t L_1727 = L_1726;
		uint32_t L_1728 = (L_1723)->GetAt(static_cast<il2cpp_array_size_t>(L_1727));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1729 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1730 = V_1;
		NullCheck(L_1730);
		int32_t L_1731 = ((int32_t)11);
		int32_t L_1732 = (L_1730)->GetAt(static_cast<il2cpp_array_size_t>(L_1731));
		NullCheck(L_1729);
		int32_t L_1733 = L_1732;
		uint32_t L_1734 = (L_1729)->GetAt(static_cast<il2cpp_array_size_t>(L_1733));
		V_5 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1704^(int32_t)L_1710))^(int32_t)L_1716))^(int32_t)L_1722))^(int32_t)L_1728))^(int32_t)L_1734));
		uint32_t L_1735 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1736 = V_0;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_1735, L_1736, ((int32_t)12), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1737 = __this->____Kr_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1738 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1739 = V_0;
		NullCheck(L_1739);
		int32_t L_1740 = 3;
		int32_t L_1741 = (L_1739)->GetAt(static_cast<il2cpp_array_size_t>(L_1740));
		NullCheck(L_1738);
		int32_t L_1742 = L_1741;
		uint32_t L_1743 = (L_1738)->GetAt(static_cast<il2cpp_array_size_t>(L_1742));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1744 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1745 = V_0;
		NullCheck(L_1745);
		int32_t L_1746 = 2;
		int32_t L_1747 = (L_1745)->GetAt(static_cast<il2cpp_array_size_t>(L_1746));
		NullCheck(L_1744);
		int32_t L_1748 = L_1747;
		uint32_t L_1749 = (L_1744)->GetAt(static_cast<il2cpp_array_size_t>(L_1748));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1750 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1751 = V_0;
		NullCheck(L_1751);
		int32_t L_1752 = ((int32_t)12);
		int32_t L_1753 = (L_1751)->GetAt(static_cast<il2cpp_array_size_t>(L_1752));
		NullCheck(L_1750);
		int32_t L_1754 = L_1753;
		uint32_t L_1755 = (L_1750)->GetAt(static_cast<il2cpp_array_size_t>(L_1754));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1756 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1757 = V_0;
		NullCheck(L_1757);
		int32_t L_1758 = ((int32_t)13);
		int32_t L_1759 = (L_1757)->GetAt(static_cast<il2cpp_array_size_t>(L_1758));
		NullCheck(L_1756);
		int32_t L_1760 = L_1759;
		uint32_t L_1761 = (L_1756)->GetAt(static_cast<il2cpp_array_size_t>(L_1760));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1762 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1763 = V_0;
		NullCheck(L_1763);
		int32_t L_1764 = ((int32_t)9);
		int32_t L_1765 = (L_1763)->GetAt(static_cast<il2cpp_array_size_t>(L_1764));
		NullCheck(L_1762);
		int32_t L_1766 = L_1765;
		uint32_t L_1767 = (L_1762)->GetAt(static_cast<il2cpp_array_size_t>(L_1766));
		NullCheck(L_1737);
		(L_1737)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (int32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1743^(int32_t)L_1749))^(int32_t)L_1755))^(int32_t)L_1761))^(int32_t)L_1767))&((int32_t)31))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1768 = __this->____Kr_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1769 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1770 = V_0;
		NullCheck(L_1770);
		int32_t L_1771 = 1;
		int32_t L_1772 = (L_1770)->GetAt(static_cast<il2cpp_array_size_t>(L_1771));
		NullCheck(L_1769);
		int32_t L_1773 = L_1772;
		uint32_t L_1774 = (L_1769)->GetAt(static_cast<il2cpp_array_size_t>(L_1773));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1775 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1776 = V_0;
		NullCheck(L_1776);
		int32_t L_1777 = 0;
		int32_t L_1778 = (L_1776)->GetAt(static_cast<il2cpp_array_size_t>(L_1777));
		NullCheck(L_1775);
		int32_t L_1779 = L_1778;
		uint32_t L_1780 = (L_1775)->GetAt(static_cast<il2cpp_array_size_t>(L_1779));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1781 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1782 = V_0;
		NullCheck(L_1782);
		int32_t L_1783 = ((int32_t)14);
		int32_t L_1784 = (L_1782)->GetAt(static_cast<il2cpp_array_size_t>(L_1783));
		NullCheck(L_1781);
		int32_t L_1785 = L_1784;
		uint32_t L_1786 = (L_1781)->GetAt(static_cast<il2cpp_array_size_t>(L_1785));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1787 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1788 = V_0;
		NullCheck(L_1788);
		int32_t L_1789 = ((int32_t)15);
		int32_t L_1790 = (L_1788)->GetAt(static_cast<il2cpp_array_size_t>(L_1789));
		NullCheck(L_1787);
		int32_t L_1791 = L_1790;
		uint32_t L_1792 = (L_1787)->GetAt(static_cast<il2cpp_array_size_t>(L_1791));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1793 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1794 = V_0;
		NullCheck(L_1794);
		int32_t L_1795 = ((int32_t)12);
		int32_t L_1796 = (L_1794)->GetAt(static_cast<il2cpp_array_size_t>(L_1795));
		NullCheck(L_1793);
		int32_t L_1797 = L_1796;
		uint32_t L_1798 = (L_1793)->GetAt(static_cast<il2cpp_array_size_t>(L_1797));
		NullCheck(L_1768);
		(L_1768)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (int32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1774^(int32_t)L_1780))^(int32_t)L_1786))^(int32_t)L_1792))^(int32_t)L_1798))&((int32_t)31))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1799 = __this->____Kr_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1800 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1801 = V_0;
		NullCheck(L_1801);
		int32_t L_1802 = 7;
		int32_t L_1803 = (L_1801)->GetAt(static_cast<il2cpp_array_size_t>(L_1802));
		NullCheck(L_1800);
		int32_t L_1804 = L_1803;
		uint32_t L_1805 = (L_1800)->GetAt(static_cast<il2cpp_array_size_t>(L_1804));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1806 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1807 = V_0;
		NullCheck(L_1807);
		int32_t L_1808 = 6;
		int32_t L_1809 = (L_1807)->GetAt(static_cast<il2cpp_array_size_t>(L_1808));
		NullCheck(L_1806);
		int32_t L_1810 = L_1809;
		uint32_t L_1811 = (L_1806)->GetAt(static_cast<il2cpp_array_size_t>(L_1810));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1812 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1813 = V_0;
		NullCheck(L_1813);
		int32_t L_1814 = 8;
		int32_t L_1815 = (L_1813)->GetAt(static_cast<il2cpp_array_size_t>(L_1814));
		NullCheck(L_1812);
		int32_t L_1816 = L_1815;
		uint32_t L_1817 = (L_1812)->GetAt(static_cast<il2cpp_array_size_t>(L_1816));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1818 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1819 = V_0;
		NullCheck(L_1819);
		int32_t L_1820 = ((int32_t)9);
		int32_t L_1821 = (L_1819)->GetAt(static_cast<il2cpp_array_size_t>(L_1820));
		NullCheck(L_1818);
		int32_t L_1822 = L_1821;
		uint32_t L_1823 = (L_1818)->GetAt(static_cast<il2cpp_array_size_t>(L_1822));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1824 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1825 = V_0;
		NullCheck(L_1825);
		int32_t L_1826 = 2;
		int32_t L_1827 = (L_1825)->GetAt(static_cast<il2cpp_array_size_t>(L_1826));
		NullCheck(L_1824);
		int32_t L_1828 = L_1827;
		uint32_t L_1829 = (L_1824)->GetAt(static_cast<il2cpp_array_size_t>(L_1828));
		NullCheck(L_1799);
		(L_1799)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (int32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1805^(int32_t)L_1811))^(int32_t)L_1817))^(int32_t)L_1823))^(int32_t)L_1829))&((int32_t)31))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1830 = __this->____Kr_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1831 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1832 = V_0;
		NullCheck(L_1832);
		int32_t L_1833 = 5;
		int32_t L_1834 = (L_1832)->GetAt(static_cast<il2cpp_array_size_t>(L_1833));
		NullCheck(L_1831);
		int32_t L_1835 = L_1834;
		uint32_t L_1836 = (L_1831)->GetAt(static_cast<il2cpp_array_size_t>(L_1835));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1837 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1838 = V_0;
		NullCheck(L_1838);
		int32_t L_1839 = 4;
		int32_t L_1840 = (L_1838)->GetAt(static_cast<il2cpp_array_size_t>(L_1839));
		NullCheck(L_1837);
		int32_t L_1841 = L_1840;
		uint32_t L_1842 = (L_1837)->GetAt(static_cast<il2cpp_array_size_t>(L_1841));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1843 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1844 = V_0;
		NullCheck(L_1844);
		int32_t L_1845 = ((int32_t)10);
		int32_t L_1846 = (L_1844)->GetAt(static_cast<il2cpp_array_size_t>(L_1845));
		NullCheck(L_1843);
		int32_t L_1847 = L_1846;
		uint32_t L_1848 = (L_1843)->GetAt(static_cast<il2cpp_array_size_t>(L_1847));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1849 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1850 = V_0;
		NullCheck(L_1850);
		int32_t L_1851 = ((int32_t)11);
		int32_t L_1852 = (L_1850)->GetAt(static_cast<il2cpp_array_size_t>(L_1851));
		NullCheck(L_1849);
		int32_t L_1853 = L_1852;
		uint32_t L_1854 = (L_1849)->GetAt(static_cast<il2cpp_array_size_t>(L_1853));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1855 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1856 = V_0;
		NullCheck(L_1856);
		int32_t L_1857 = 6;
		int32_t L_1858 = (L_1856)->GetAt(static_cast<il2cpp_array_size_t>(L_1857));
		NullCheck(L_1855);
		int32_t L_1859 = L_1858;
		uint32_t L_1860 = (L_1855)->GetAt(static_cast<il2cpp_array_size_t>(L_1859));
		NullCheck(L_1830);
		(L_1830)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (int32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1836^(int32_t)L_1842))^(int32_t)L_1848))^(int32_t)L_1854))^(int32_t)L_1860))&((int32_t)31))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1861 = V_0;
		uint32_t L_1862;
		L_1862 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_1861, 0, NULL);
		V_2 = L_1862;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1863 = V_0;
		uint32_t L_1864;
		L_1864 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_1863, 4, NULL);
		V_3 = L_1864;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1865 = V_0;
		uint32_t L_1866;
		L_1866 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_1865, 8, NULL);
		V_4 = L_1866;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1867 = V_0;
		uint32_t L_1868;
		L_1868 = Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7(L_1867, ((int32_t)12), NULL);
		V_5 = L_1868;
		uint32_t L_1869 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1870 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1871 = V_0;
		NullCheck(L_1871);
		int32_t L_1872 = 5;
		int32_t L_1873 = (L_1871)->GetAt(static_cast<il2cpp_array_size_t>(L_1872));
		NullCheck(L_1870);
		int32_t L_1874 = L_1873;
		uint32_t L_1875 = (L_1870)->GetAt(static_cast<il2cpp_array_size_t>(L_1874));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1876 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1877 = V_0;
		NullCheck(L_1877);
		int32_t L_1878 = 7;
		int32_t L_1879 = (L_1877)->GetAt(static_cast<il2cpp_array_size_t>(L_1878));
		NullCheck(L_1876);
		int32_t L_1880 = L_1879;
		uint32_t L_1881 = (L_1876)->GetAt(static_cast<il2cpp_array_size_t>(L_1880));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1882 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1883 = V_0;
		NullCheck(L_1883);
		int32_t L_1884 = 4;
		int32_t L_1885 = (L_1883)->GetAt(static_cast<il2cpp_array_size_t>(L_1884));
		NullCheck(L_1882);
		int32_t L_1886 = L_1885;
		uint32_t L_1887 = (L_1882)->GetAt(static_cast<il2cpp_array_size_t>(L_1886));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1888 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1889 = V_0;
		NullCheck(L_1889);
		int32_t L_1890 = 6;
		int32_t L_1891 = (L_1889)->GetAt(static_cast<il2cpp_array_size_t>(L_1890));
		NullCheck(L_1888);
		int32_t L_1892 = L_1891;
		uint32_t L_1893 = (L_1888)->GetAt(static_cast<il2cpp_array_size_t>(L_1892));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1894 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1895 = V_0;
		NullCheck(L_1895);
		int32_t L_1896 = 0;
		int32_t L_1897 = (L_1895)->GetAt(static_cast<il2cpp_array_size_t>(L_1896));
		NullCheck(L_1894);
		int32_t L_1898 = L_1897;
		uint32_t L_1899 = (L_1894)->GetAt(static_cast<il2cpp_array_size_t>(L_1898));
		V_6 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1869^(int32_t)L_1875))^(int32_t)L_1881))^(int32_t)L_1887))^(int32_t)L_1893))^(int32_t)L_1899));
		uint32_t L_1900 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1901 = V_1;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_1900, L_1901, 0, NULL);
		uint32_t L_1902 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1903 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1904 = V_1;
		NullCheck(L_1904);
		int32_t L_1905 = 0;
		int32_t L_1906 = (L_1904)->GetAt(static_cast<il2cpp_array_size_t>(L_1905));
		NullCheck(L_1903);
		int32_t L_1907 = L_1906;
		uint32_t L_1908 = (L_1903)->GetAt(static_cast<il2cpp_array_size_t>(L_1907));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1909 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1910 = V_1;
		NullCheck(L_1910);
		int32_t L_1911 = 2;
		int32_t L_1912 = (L_1910)->GetAt(static_cast<il2cpp_array_size_t>(L_1911));
		NullCheck(L_1909);
		int32_t L_1913 = L_1912;
		uint32_t L_1914 = (L_1909)->GetAt(static_cast<il2cpp_array_size_t>(L_1913));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1915 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1916 = V_1;
		NullCheck(L_1916);
		int32_t L_1917 = 1;
		int32_t L_1918 = (L_1916)->GetAt(static_cast<il2cpp_array_size_t>(L_1917));
		NullCheck(L_1915);
		int32_t L_1919 = L_1918;
		uint32_t L_1920 = (L_1915)->GetAt(static_cast<il2cpp_array_size_t>(L_1919));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1921 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1922 = V_1;
		NullCheck(L_1922);
		int32_t L_1923 = 3;
		int32_t L_1924 = (L_1922)->GetAt(static_cast<il2cpp_array_size_t>(L_1923));
		NullCheck(L_1921);
		int32_t L_1925 = L_1924;
		uint32_t L_1926 = (L_1921)->GetAt(static_cast<il2cpp_array_size_t>(L_1925));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1927 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1928 = V_0;
		NullCheck(L_1928);
		int32_t L_1929 = 2;
		int32_t L_1930 = (L_1928)->GetAt(static_cast<il2cpp_array_size_t>(L_1929));
		NullCheck(L_1927);
		int32_t L_1931 = L_1930;
		uint32_t L_1932 = (L_1927)->GetAt(static_cast<il2cpp_array_size_t>(L_1931));
		V_7 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1902^(int32_t)L_1908))^(int32_t)L_1914))^(int32_t)L_1920))^(int32_t)L_1926))^(int32_t)L_1932));
		uint32_t L_1933 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1934 = V_1;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_1933, L_1934, 4, NULL);
		uint32_t L_1935 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1936 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1937 = V_1;
		NullCheck(L_1937);
		int32_t L_1938 = 7;
		int32_t L_1939 = (L_1937)->GetAt(static_cast<il2cpp_array_size_t>(L_1938));
		NullCheck(L_1936);
		int32_t L_1940 = L_1939;
		uint32_t L_1941 = (L_1936)->GetAt(static_cast<il2cpp_array_size_t>(L_1940));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1942 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1943 = V_1;
		NullCheck(L_1943);
		int32_t L_1944 = 6;
		int32_t L_1945 = (L_1943)->GetAt(static_cast<il2cpp_array_size_t>(L_1944));
		NullCheck(L_1942);
		int32_t L_1946 = L_1945;
		uint32_t L_1947 = (L_1942)->GetAt(static_cast<il2cpp_array_size_t>(L_1946));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1948 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1949 = V_1;
		NullCheck(L_1949);
		int32_t L_1950 = 5;
		int32_t L_1951 = (L_1949)->GetAt(static_cast<il2cpp_array_size_t>(L_1950));
		NullCheck(L_1948);
		int32_t L_1952 = L_1951;
		uint32_t L_1953 = (L_1948)->GetAt(static_cast<il2cpp_array_size_t>(L_1952));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1954 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1955 = V_1;
		NullCheck(L_1955);
		int32_t L_1956 = 4;
		int32_t L_1957 = (L_1955)->GetAt(static_cast<il2cpp_array_size_t>(L_1956));
		NullCheck(L_1954);
		int32_t L_1958 = L_1957;
		uint32_t L_1959 = (L_1954)->GetAt(static_cast<il2cpp_array_size_t>(L_1958));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1960 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1961 = V_0;
		NullCheck(L_1961);
		int32_t L_1962 = 1;
		int32_t L_1963 = (L_1961)->GetAt(static_cast<il2cpp_array_size_t>(L_1962));
		NullCheck(L_1960);
		int32_t L_1964 = L_1963;
		uint32_t L_1965 = (L_1960)->GetAt(static_cast<il2cpp_array_size_t>(L_1964));
		V_8 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1935^(int32_t)L_1941))^(int32_t)L_1947))^(int32_t)L_1953))^(int32_t)L_1959))^(int32_t)L_1965));
		uint32_t L_1966 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1967 = V_1;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_1966, L_1967, 8, NULL);
		uint32_t L_1968 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1969 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1970 = V_1;
		NullCheck(L_1970);
		int32_t L_1971 = ((int32_t)10);
		int32_t L_1972 = (L_1970)->GetAt(static_cast<il2cpp_array_size_t>(L_1971));
		NullCheck(L_1969);
		int32_t L_1973 = L_1972;
		uint32_t L_1974 = (L_1969)->GetAt(static_cast<il2cpp_array_size_t>(L_1973));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1975 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1976 = V_1;
		NullCheck(L_1976);
		int32_t L_1977 = ((int32_t)9);
		int32_t L_1978 = (L_1976)->GetAt(static_cast<il2cpp_array_size_t>(L_1977));
		NullCheck(L_1975);
		int32_t L_1979 = L_1978;
		uint32_t L_1980 = (L_1975)->GetAt(static_cast<il2cpp_array_size_t>(L_1979));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1981 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1982 = V_1;
		NullCheck(L_1982);
		int32_t L_1983 = ((int32_t)11);
		int32_t L_1984 = (L_1982)->GetAt(static_cast<il2cpp_array_size_t>(L_1983));
		NullCheck(L_1981);
		int32_t L_1985 = L_1984;
		uint32_t L_1986 = (L_1981)->GetAt(static_cast<il2cpp_array_size_t>(L_1985));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1987 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1988 = V_1;
		NullCheck(L_1988);
		int32_t L_1989 = 8;
		int32_t L_1990 = (L_1988)->GetAt(static_cast<il2cpp_array_size_t>(L_1989));
		NullCheck(L_1987);
		int32_t L_1991 = L_1990;
		uint32_t L_1992 = (L_1987)->GetAt(static_cast<il2cpp_array_size_t>(L_1991));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1993 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1994 = V_0;
		NullCheck(L_1994);
		int32_t L_1995 = 3;
		int32_t L_1996 = (L_1994)->GetAt(static_cast<il2cpp_array_size_t>(L_1995));
		NullCheck(L_1993);
		int32_t L_1997 = L_1996;
		uint32_t L_1998 = (L_1993)->GetAt(static_cast<il2cpp_array_size_t>(L_1997));
		V_9 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_1968^(int32_t)L_1974))^(int32_t)L_1980))^(int32_t)L_1986))^(int32_t)L_1992))^(int32_t)L_1998));
		uint32_t L_1999 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2000 = V_1;
		Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D(L_1999, L_2000, ((int32_t)12), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2001 = __this->____Kr_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2002 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2003 = V_1;
		NullCheck(L_2003);
		int32_t L_2004 = 8;
		int32_t L_2005 = (L_2003)->GetAt(static_cast<il2cpp_array_size_t>(L_2004));
		NullCheck(L_2002);
		int32_t L_2006 = L_2005;
		uint32_t L_2007 = (L_2002)->GetAt(static_cast<il2cpp_array_size_t>(L_2006));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2008 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2009 = V_1;
		NullCheck(L_2009);
		int32_t L_2010 = ((int32_t)9);
		int32_t L_2011 = (L_2009)->GetAt(static_cast<il2cpp_array_size_t>(L_2010));
		NullCheck(L_2008);
		int32_t L_2012 = L_2011;
		uint32_t L_2013 = (L_2008)->GetAt(static_cast<il2cpp_array_size_t>(L_2012));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2014 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2015 = V_1;
		NullCheck(L_2015);
		int32_t L_2016 = 7;
		int32_t L_2017 = (L_2015)->GetAt(static_cast<il2cpp_array_size_t>(L_2016));
		NullCheck(L_2014);
		int32_t L_2018 = L_2017;
		uint32_t L_2019 = (L_2014)->GetAt(static_cast<il2cpp_array_size_t>(L_2018));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2020 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2021 = V_1;
		NullCheck(L_2021);
		int32_t L_2022 = 6;
		int32_t L_2023 = (L_2021)->GetAt(static_cast<il2cpp_array_size_t>(L_2022));
		NullCheck(L_2020);
		int32_t L_2024 = L_2023;
		uint32_t L_2025 = (L_2020)->GetAt(static_cast<il2cpp_array_size_t>(L_2024));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2026 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2027 = V_1;
		NullCheck(L_2027);
		int32_t L_2028 = 3;
		int32_t L_2029 = (L_2027)->GetAt(static_cast<il2cpp_array_size_t>(L_2028));
		NullCheck(L_2026);
		int32_t L_2030 = L_2029;
		uint32_t L_2031 = (L_2026)->GetAt(static_cast<il2cpp_array_size_t>(L_2030));
		NullCheck(L_2001);
		(L_2001)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (int32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_2007^(int32_t)L_2013))^(int32_t)L_2019))^(int32_t)L_2025))^(int32_t)L_2031))&((int32_t)31))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2032 = __this->____Kr_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2033 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2034 = V_1;
		NullCheck(L_2034);
		int32_t L_2035 = ((int32_t)10);
		int32_t L_2036 = (L_2034)->GetAt(static_cast<il2cpp_array_size_t>(L_2035));
		NullCheck(L_2033);
		int32_t L_2037 = L_2036;
		uint32_t L_2038 = (L_2033)->GetAt(static_cast<il2cpp_array_size_t>(L_2037));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2039 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2040 = V_1;
		NullCheck(L_2040);
		int32_t L_2041 = ((int32_t)11);
		int32_t L_2042 = (L_2040)->GetAt(static_cast<il2cpp_array_size_t>(L_2041));
		NullCheck(L_2039);
		int32_t L_2043 = L_2042;
		uint32_t L_2044 = (L_2039)->GetAt(static_cast<il2cpp_array_size_t>(L_2043));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2045 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2046 = V_1;
		NullCheck(L_2046);
		int32_t L_2047 = 5;
		int32_t L_2048 = (L_2046)->GetAt(static_cast<il2cpp_array_size_t>(L_2047));
		NullCheck(L_2045);
		int32_t L_2049 = L_2048;
		uint32_t L_2050 = (L_2045)->GetAt(static_cast<il2cpp_array_size_t>(L_2049));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2051 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2052 = V_1;
		NullCheck(L_2052);
		int32_t L_2053 = 4;
		int32_t L_2054 = (L_2052)->GetAt(static_cast<il2cpp_array_size_t>(L_2053));
		NullCheck(L_2051);
		int32_t L_2055 = L_2054;
		uint32_t L_2056 = (L_2051)->GetAt(static_cast<il2cpp_array_size_t>(L_2055));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2057 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2058 = V_1;
		NullCheck(L_2058);
		int32_t L_2059 = 7;
		int32_t L_2060 = (L_2058)->GetAt(static_cast<il2cpp_array_size_t>(L_2059));
		NullCheck(L_2057);
		int32_t L_2061 = L_2060;
		uint32_t L_2062 = (L_2057)->GetAt(static_cast<il2cpp_array_size_t>(L_2061));
		NullCheck(L_2032);
		(L_2032)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (int32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_2038^(int32_t)L_2044))^(int32_t)L_2050))^(int32_t)L_2056))^(int32_t)L_2062))&((int32_t)31))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2063 = __this->____Kr_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2064 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2065 = V_1;
		NullCheck(L_2065);
		int32_t L_2066 = ((int32_t)12);
		int32_t L_2067 = (L_2065)->GetAt(static_cast<il2cpp_array_size_t>(L_2066));
		NullCheck(L_2064);
		int32_t L_2068 = L_2067;
		uint32_t L_2069 = (L_2064)->GetAt(static_cast<il2cpp_array_size_t>(L_2068));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2070 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2071 = V_1;
		NullCheck(L_2071);
		int32_t L_2072 = ((int32_t)13);
		int32_t L_2073 = (L_2071)->GetAt(static_cast<il2cpp_array_size_t>(L_2072));
		NullCheck(L_2070);
		int32_t L_2074 = L_2073;
		uint32_t L_2075 = (L_2070)->GetAt(static_cast<il2cpp_array_size_t>(L_2074));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2076 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2077 = V_1;
		NullCheck(L_2077);
		int32_t L_2078 = 3;
		int32_t L_2079 = (L_2077)->GetAt(static_cast<il2cpp_array_size_t>(L_2078));
		NullCheck(L_2076);
		int32_t L_2080 = L_2079;
		uint32_t L_2081 = (L_2076)->GetAt(static_cast<il2cpp_array_size_t>(L_2080));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2082 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2083 = V_1;
		NullCheck(L_2083);
		int32_t L_2084 = 2;
		int32_t L_2085 = (L_2083)->GetAt(static_cast<il2cpp_array_size_t>(L_2084));
		NullCheck(L_2082);
		int32_t L_2086 = L_2085;
		uint32_t L_2087 = (L_2082)->GetAt(static_cast<il2cpp_array_size_t>(L_2086));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2088 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2089 = V_1;
		NullCheck(L_2089);
		int32_t L_2090 = 8;
		int32_t L_2091 = (L_2089)->GetAt(static_cast<il2cpp_array_size_t>(L_2090));
		NullCheck(L_2088);
		int32_t L_2092 = L_2091;
		uint32_t L_2093 = (L_2088)->GetAt(static_cast<il2cpp_array_size_t>(L_2092));
		NullCheck(L_2063);
		(L_2063)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (int32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_2069^(int32_t)L_2075))^(int32_t)L_2081))^(int32_t)L_2087))^(int32_t)L_2093))&((int32_t)31))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2094 = __this->____Kr_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2095 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2096 = V_1;
		NullCheck(L_2096);
		int32_t L_2097 = ((int32_t)14);
		int32_t L_2098 = (L_2096)->GetAt(static_cast<il2cpp_array_size_t>(L_2097));
		NullCheck(L_2095);
		int32_t L_2099 = L_2098;
		uint32_t L_2100 = (L_2095)->GetAt(static_cast<il2cpp_array_size_t>(L_2099));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2101 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2102 = V_1;
		NullCheck(L_2102);
		int32_t L_2103 = ((int32_t)15);
		int32_t L_2104 = (L_2102)->GetAt(static_cast<il2cpp_array_size_t>(L_2103));
		NullCheck(L_2101);
		int32_t L_2105 = L_2104;
		uint32_t L_2106 = (L_2101)->GetAt(static_cast<il2cpp_array_size_t>(L_2105));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2107 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2108 = V_1;
		NullCheck(L_2108);
		int32_t L_2109 = 1;
		int32_t L_2110 = (L_2108)->GetAt(static_cast<il2cpp_array_size_t>(L_2109));
		NullCheck(L_2107);
		int32_t L_2111 = L_2110;
		uint32_t L_2112 = (L_2107)->GetAt(static_cast<il2cpp_array_size_t>(L_2111));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2113 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2114 = V_1;
		NullCheck(L_2114);
		int32_t L_2115 = 0;
		int32_t L_2116 = (L_2114)->GetAt(static_cast<il2cpp_array_size_t>(L_2115));
		NullCheck(L_2113);
		int32_t L_2117 = L_2116;
		uint32_t L_2118 = (L_2113)->GetAt(static_cast<il2cpp_array_size_t>(L_2117));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2119 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2120 = V_1;
		NullCheck(L_2120);
		int32_t L_2121 = ((int32_t)13);
		int32_t L_2122 = (L_2120)->GetAt(static_cast<il2cpp_array_size_t>(L_2121));
		NullCheck(L_2119);
		int32_t L_2123 = L_2122;
		uint32_t L_2124 = (L_2119)->GetAt(static_cast<il2cpp_array_size_t>(L_2123));
		NullCheck(L_2094);
		(L_2094)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (int32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_2100^(int32_t)L_2106))^(int32_t)L_2112))^(int32_t)L_2118))^(int32_t)L_2124))&((int32_t)31))));
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.Cast5Engine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cast5Engine_EncryptBlock_m0B7565E8589400C1AFDCA66B8E64FFD2E57468D1 (Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___srcIndex1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dst2, int32_t ___dstIndex3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___src0;
		int32_t L_1 = ___srcIndex1;
		uint32_t L_2;
		L_2 = Pack_BE_To_UInt32_m6FD7E3B8014FC134F0CE2EA18C7DCD8C9EF64B63(L_0, L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___src0;
		int32_t L_4 = ___srcIndex1;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_m6FD7E3B8014FC134F0CE2EA18C7DCD8C9EF64B63(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		V_1 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)2);
		V_2 = L_6;
		uint32_t L_7 = V_0;
		uint32_t L_8 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_2;
		Cast5Engine_CAST_Encipher_m38647357AA50987D7A9E1D74E7DD88DB6680A362(__this, L_7, L_8, L_9, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11 = 0;
		uint32_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___dst2;
		int32_t L_14 = ___dstIndex3;
		Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB(L_12, L_13, L_14, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = 1;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___dst2;
		int32_t L_19 = ___dstIndex3;
		Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB(L_17, L_18, ((int32_t)il2cpp_codegen_add(L_19, 4)), NULL);
		return 8;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.Cast5Engine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cast5Engine_DecryptBlock_m043A4249A5618097FB6A52DE6439BD0879C46B22 (Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___srcIndex1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dst2, int32_t ___dstIndex3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___src0;
		int32_t L_1 = ___srcIndex1;
		uint32_t L_2;
		L_2 = Pack_BE_To_UInt32_m6FD7E3B8014FC134F0CE2EA18C7DCD8C9EF64B63(L_0, L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___src0;
		int32_t L_4 = ___srcIndex1;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_m6FD7E3B8014FC134F0CE2EA18C7DCD8C9EF64B63(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		V_1 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)2);
		V_2 = L_6;
		uint32_t L_7 = V_0;
		uint32_t L_8 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_2;
		Cast5Engine_CAST_Decipher_mC8F7960AF21682AD1C78E1217916BB74AFE398FA(__this, L_7, L_8, L_9, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11 = 0;
		uint32_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___dst2;
		int32_t L_14 = ___dstIndex3;
		Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB(L_12, L_13, L_14, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = 1;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___dst2;
		int32_t L_19 = ___dstIndex3;
		Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB(L_17, L_18, ((int32_t)il2cpp_codegen_add(L_19, 4)), NULL);
		return 8;
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Engines.Cast5Engine::F1(System.UInt32,System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Cast5Engine_F1_mDA65D662E6D6BF3C23D568B805C809FD04825932 (uint32_t ___D0, uint32_t ___Kmi1, int32_t ___Kri2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___Kmi1;
		uint32_t L_1 = ___D0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		uint32_t L_2 = V_0;
		int32_t L_3 = ___Kri2;
		uint32_t L_4 = V_0;
		int32_t L_5 = ___Kri2;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_2<<((int32_t)(L_3&((int32_t)31)))))|((int32_t)((uint32_t)L_4>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_5))&((int32_t)31)))))));
		il2cpp_codegen_runtime_class_init_inline(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S1_1;
		uint32_t L_7 = V_0;
		NullCheck(L_6);
		uintptr_t L_8 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_7>>((int32_t)24)))&((int32_t)255))));
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S2_2;
		uint32_t L_11 = V_0;
		NullCheck(L_10);
		uintptr_t L_12 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_11>>((int32_t)16)))&((int32_t)255))));
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S3_3;
		uint32_t L_15 = V_0;
		NullCheck(L_14);
		uintptr_t L_16 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_15>>8))&((int32_t)255))));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S4_4;
		uint32_t L_19 = V_0;
		NullCheck(L_18);
		uintptr_t L_20 = ((uintptr_t)((int32_t)((int32_t)L_19&((int32_t)255))));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(((int32_t)((int32_t)L_9^(int32_t)L_13)), (int32_t)L_17)), (int32_t)L_21));
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Engines.Cast5Engine::F2(System.UInt32,System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Cast5Engine_F2_mC03412716E3D493D770A20BCEE07A3B1F91379BE (uint32_t ___D0, uint32_t ___Kmi1, int32_t ___Kri2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___Kmi1;
		uint32_t L_1 = ___D0;
		V_0 = ((int32_t)((int32_t)L_0^(int32_t)L_1));
		uint32_t L_2 = V_0;
		int32_t L_3 = ___Kri2;
		uint32_t L_4 = V_0;
		int32_t L_5 = ___Kri2;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_2<<((int32_t)(L_3&((int32_t)31)))))|((int32_t)((uint32_t)L_4>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_5))&((int32_t)31)))))));
		il2cpp_codegen_runtime_class_init_inline(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S1_1;
		uint32_t L_7 = V_0;
		NullCheck(L_6);
		uintptr_t L_8 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_7>>((int32_t)24)))&((int32_t)255))));
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S2_2;
		uint32_t L_11 = V_0;
		NullCheck(L_10);
		uintptr_t L_12 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_11>>((int32_t)16)))&((int32_t)255))));
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S3_3;
		uint32_t L_15 = V_0;
		NullCheck(L_14);
		uintptr_t L_16 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_15>>8))&((int32_t)255))));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S4_4;
		uint32_t L_19 = V_0;
		NullCheck(L_18);
		uintptr_t L_20 = ((uintptr_t)((int32_t)((int32_t)L_19&((int32_t)255))));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		return ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)L_13)), (int32_t)L_17))^(int32_t)L_21));
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Engines.Cast5Engine::F3(System.UInt32,System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Cast5Engine_F3_m63C90C64DB2A089116D10610F5619CD669209A8A (uint32_t ___D0, uint32_t ___Kmi1, int32_t ___Kri2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___Kmi1;
		uint32_t L_1 = ___D0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		uint32_t L_2 = V_0;
		int32_t L_3 = ___Kri2;
		uint32_t L_4 = V_0;
		int32_t L_5 = ___Kri2;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_2<<((int32_t)(L_3&((int32_t)31)))))|((int32_t)((uint32_t)L_4>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_5))&((int32_t)31)))))));
		il2cpp_codegen_runtime_class_init_inline(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S1_1;
		uint32_t L_7 = V_0;
		NullCheck(L_6);
		uintptr_t L_8 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_7>>((int32_t)24)))&((int32_t)255))));
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S2_2;
		uint32_t L_11 = V_0;
		NullCheck(L_10);
		uintptr_t L_12 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_11>>((int32_t)16)))&((int32_t)255))));
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S3_3;
		uint32_t L_15 = V_0;
		NullCheck(L_14);
		uintptr_t L_16 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_15>>8))&((int32_t)255))));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S4_4;
		uint32_t L_19 = V_0;
		NullCheck(L_18);
		uintptr_t L_20 = ((uintptr_t)((int32_t)((int32_t)L_19&((int32_t)255))));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		return ((int32_t)il2cpp_codegen_subtract(((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_13))^(int32_t)L_17)), (int32_t)L_21));
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.Cast5Engine::CAST_Encipher(System.UInt32,System.UInt32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cast5Engine_CAST_Encipher_m38647357AA50987D7A9E1D74E7DD88DB6680A362 (Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737* __this, uint32_t ___L00, uint32_t ___R01, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___result2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		uint32_t L_0 = ___L00;
		V_0 = L_0;
		uint32_t L_1 = ___R01;
		V_1 = L_1;
		uint32_t L_2 = ___L00;
		V_2 = L_2;
		uint32_t L_3 = ___R01;
		V_3 = L_3;
		V_4 = 1;
		goto IL_00c0;
	}

IL_0010:
	{
		uint32_t L_4 = V_2;
		V_0 = L_4;
		uint32_t L_5 = V_3;
		V_1 = L_5;
		uint32_t L_6 = V_1;
		V_2 = L_6;
		int32_t L_7 = V_4;
		V_5 = L_7;
		int32_t L_8 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract(L_8, 1)))
		{
			case 0:
			{
				goto IL_0065;
			}
			case 1:
			{
				goto IL_0082;
			}
			case 2:
			{
				goto IL_009f;
			}
			case 3:
			{
				goto IL_0065;
			}
			case 4:
			{
				goto IL_0082;
			}
			case 5:
			{
				goto IL_009f;
			}
			case 6:
			{
				goto IL_0065;
			}
			case 7:
			{
				goto IL_0082;
			}
			case 8:
			{
				goto IL_009f;
			}
			case 9:
			{
				goto IL_0065;
			}
			case 10:
			{
				goto IL_0082;
			}
			case 11:
			{
				goto IL_009f;
			}
			case 12:
			{
				goto IL_0065;
			}
			case 13:
			{
				goto IL_0082;
			}
			case 14:
			{
				goto IL_009f;
			}
			case 15:
			{
				goto IL_0065;
			}
		}
	}
	{
		goto IL_00ba;
	}

IL_0065:
	{
		uint32_t L_9 = V_0;
		uint32_t L_10 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = __this->____Km_12;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____Kr_11;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		int32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		il2cpp_codegen_runtime_class_init_inline(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var);
		uint32_t L_19;
		L_19 = Cast5Engine_F1_mDA65D662E6D6BF3C23D568B805C809FD04825932(L_10, L_14, L_18, NULL);
		V_3 = ((int32_t)((int32_t)L_9^(int32_t)L_19));
		goto IL_00ba;
	}

IL_0082:
	{
		uint32_t L_20 = V_0;
		uint32_t L_21 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = __this->____Km_12;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = __this->____Kr_11;
		int32_t L_27 = V_4;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		il2cpp_codegen_runtime_class_init_inline(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var);
		uint32_t L_30;
		L_30 = Cast5Engine_F2_mC03412716E3D493D770A20BCEE07A3B1F91379BE(L_21, L_25, L_29, NULL);
		V_3 = ((int32_t)((int32_t)L_20^(int32_t)L_30));
		goto IL_00ba;
	}

IL_009f:
	{
		uint32_t L_31 = V_0;
		uint32_t L_32 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = __this->____Km_12;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		uint32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = __this->____Kr_11;
		int32_t L_38 = V_4;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		int32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		il2cpp_codegen_runtime_class_init_inline(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var);
		uint32_t L_41;
		L_41 = Cast5Engine_F3_m63C90C64DB2A089116D10610F5619CD669209A8A(L_32, L_36, L_40, NULL);
		V_3 = ((int32_t)((int32_t)L_31^(int32_t)L_41));
	}

IL_00ba:
	{
		int32_t L_42 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00c0:
	{
		int32_t L_43 = V_4;
		int32_t L_44 = __this->____rounds_15;
		if ((((int32_t)L_43) <= ((int32_t)L_44)))
		{
			goto IL_0010;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___result2;
		uint32_t L_46 = V_3;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_46);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___result2;
		uint32_t L_48 = V_2;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_48);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.Cast5Engine::CAST_Decipher(System.UInt32,System.UInt32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cast5Engine_CAST_Decipher_mC8F7960AF21682AD1C78E1217916BB74AFE398FA (Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737* __this, uint32_t ___L160, uint32_t ___R161, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___result2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		uint32_t L_0 = ___L160;
		V_0 = L_0;
		uint32_t L_1 = ___R161;
		V_1 = L_1;
		uint32_t L_2 = ___L160;
		V_2 = L_2;
		uint32_t L_3 = ___R161;
		V_3 = L_3;
		int32_t L_4 = __this->____rounds_15;
		V_4 = L_4;
		goto IL_00c5;
	}

IL_0015:
	{
		uint32_t L_5 = V_2;
		V_0 = L_5;
		uint32_t L_6 = V_3;
		V_1 = L_6;
		uint32_t L_7 = V_1;
		V_2 = L_7;
		int32_t L_8 = V_4;
		V_5 = L_8;
		int32_t L_9 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract(L_9, 1)))
		{
			case 0:
			{
				goto IL_006a;
			}
			case 1:
			{
				goto IL_0087;
			}
			case 2:
			{
				goto IL_00a4;
			}
			case 3:
			{
				goto IL_006a;
			}
			case 4:
			{
				goto IL_0087;
			}
			case 5:
			{
				goto IL_00a4;
			}
			case 6:
			{
				goto IL_006a;
			}
			case 7:
			{
				goto IL_0087;
			}
			case 8:
			{
				goto IL_00a4;
			}
			case 9:
			{
				goto IL_006a;
			}
			case 10:
			{
				goto IL_0087;
			}
			case 11:
			{
				goto IL_00a4;
			}
			case 12:
			{
				goto IL_006a;
			}
			case 13:
			{
				goto IL_0087;
			}
			case 14:
			{
				goto IL_00a4;
			}
			case 15:
			{
				goto IL_006a;
			}
		}
	}
	{
		goto IL_00bf;
	}

IL_006a:
	{
		uint32_t L_10 = V_0;
		uint32_t L_11 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = __this->____Km_12;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->____Kr_11;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		il2cpp_codegen_runtime_class_init_inline(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var);
		uint32_t L_20;
		L_20 = Cast5Engine_F1_mDA65D662E6D6BF3C23D568B805C809FD04825932(L_11, L_15, L_19, NULL);
		V_3 = ((int32_t)((int32_t)L_10^(int32_t)L_20));
		goto IL_00bf;
	}

IL_0087:
	{
		uint32_t L_21 = V_0;
		uint32_t L_22 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = __this->____Km_12;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		uint32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = __this->____Kr_11;
		int32_t L_28 = V_4;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		int32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		il2cpp_codegen_runtime_class_init_inline(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var);
		uint32_t L_31;
		L_31 = Cast5Engine_F2_mC03412716E3D493D770A20BCEE07A3B1F91379BE(L_22, L_26, L_30, NULL);
		V_3 = ((int32_t)((int32_t)L_21^(int32_t)L_31));
		goto IL_00bf;
	}

IL_00a4:
	{
		uint32_t L_32 = V_0;
		uint32_t L_33 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = __this->____Km_12;
		int32_t L_35 = V_4;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		uint32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____Kr_11;
		int32_t L_39 = V_4;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		int32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		il2cpp_codegen_runtime_class_init_inline(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var);
		uint32_t L_42;
		L_42 = Cast5Engine_F3_m63C90C64DB2A089116D10610F5619CD669209A8A(L_33, L_37, L_41, NULL);
		V_3 = ((int32_t)((int32_t)L_32^(int32_t)L_42));
	}

IL_00bf:
	{
		int32_t L_43 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_43, 1));
	}

IL_00c5:
	{
		int32_t L_44 = V_4;
		if ((((int32_t)L_44) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___result2;
		uint32_t L_46 = V_3;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_46);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___result2;
		uint32_t L_48 = V_2;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_48);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.Cast5Engine::Bits32ToInts(System.UInt32,System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cast5Engine_Bits32ToInts_mCFBBEDE15C365006FA760F83CB229057AB53520D (uint32_t ___inData0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___b1, int32_t ___offset2, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___b1;
		int32_t L_1 = ___offset2;
		uint32_t L_2 = ___inData0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, 3))), (int32_t)((int32_t)((int32_t)L_2&((int32_t)255))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___b1;
		int32_t L_4 = ___offset2;
		uint32_t L_5 = ___inData0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 2))), (int32_t)((int32_t)(((int32_t)((uint32_t)L_5>>8))&((int32_t)255))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___b1;
		int32_t L_7 = ___offset2;
		uint32_t L_8 = ___inData0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (int32_t)((int32_t)(((int32_t)((uint32_t)L_8>>((int32_t)16)))&((int32_t)255))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ___b1;
		int32_t L_10 = ___offset2;
		uint32_t L_11 = ___inData0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (int32_t)((int32_t)(((int32_t)((uint32_t)L_11>>((int32_t)24)))&((int32_t)255))));
		return;
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Engines.Cast5Engine::IntsTo32bits(System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Cast5Engine_IntsTo32bits_m717D38F22B0907AEB963580592BB0AE79297D6B7 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___b0, int32_t ___i1, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___b0;
		int32_t L_1 = ___i1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___b0;
		int32_t L_5 = ___i1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___b0;
		int32_t L_9 = ___i1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___b0;
		int32_t L_13 = ___i1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_3&((int32_t)255)))<<((int32_t)24)))|((int32_t)(((int32_t)(L_7&((int32_t)255)))<<((int32_t)16)))))|((int32_t)(((int32_t)(L_11&((int32_t)255)))<<8))))|((int32_t)(L_15&((int32_t)255)))));
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.Cast5Engine::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cast5Engine__cctor_mB03A8DADF6045F4D1075F13DFF7CE19EB530B186 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014baU2D1_87_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014baU2D2_88_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014baU2D3_89_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014baU2D4_90_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014baU2D5_91_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014baU2D6_92_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014baU2D7_93_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014baU2D8_94_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014baU2D1_87_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S1_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S1_1), (void*)L_1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014baU2D2_88_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S2_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S2_2), (void*)L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014baU2D3_89_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_7, L_8, NULL);
		((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S3_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S3_3), (void*)L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014baU2D4_90_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_10, L_11, NULL);
		((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S4_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S4_4), (void*)L_10);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = L_12;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014baU2D5_91_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_13, L_14, NULL);
		((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S5_5), (void*)L_13);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = L_15;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014baU2D6_92_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_16, L_17, NULL);
		((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S6_6), (void*)L_16);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = L_18;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_20 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014baU2D7_93_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_19, L_20, NULL);
		((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S7_7), (void*)L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = L_21;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_23 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60014baU2D8_94_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_22, L_23, NULL);
		((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___S8_8), (void*)L_22);
		((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___MAX_ROUNDS_9 = ((int32_t)16);
		((Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_StaticFields*)il2cpp_codegen_static_fields_for(Cast5Engine_t88CA6808EC7BA1F61028EE4B6D91028298266737_il2cpp_TypeInfo_var))->___RED_ROUNDS_10 = ((int32_t)12);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithRandom_get_Parameters_mFED49C45204261ACF08DC4617FC59E9025C5DA8E_inline (ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___parameters_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___parameters_0;
		return L_0;
	}
}
