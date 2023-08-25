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

// System.Collections.Generic.IEnumerable`1<System.Byte[]>
struct IEnumerable_1_t21E2C2093877744709873DDCB2D3C8297821E513;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_tEE97FB3EBFE8765D0E2FC164B95E82BA5D0EAE86;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
// System.Collections.Generic.List`1<Nethereum.Model.AccessListItem>
struct List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC;
// System.Collections.Generic.List`1<Nethereum.RLP.IRLPElement>
struct List_1_t8930E92CA3374D0394732F4FF2E0265B48828819;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// Nethereum.Model.TransactionTypeEncoder`1<System.Object>
struct TransactionTypeEncoder_1_tCA5A25CDFDA186E3CD6FB79953C86982F509C190;
// Nethereum.Model.TransactionTypeEncoder`1<Nethereum.Model.Transaction1559>
struct TransactionTypeEncoder_1_t171D4067E527B7D87CB7C9663961F22C165080AA;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
// Nethereum.Model.AccessListItem[]
struct AccessListItemU5BU5D_tDBA701B5947DD90F356DD62308C207F6385F3C32;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
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
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// Nethereum.Model.AccessListItem
struct AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A;
// Nethereum.Model.AccessListRLPEncoderDecoder
struct AccessListRLPEncoderDecoder_t455694E3CCD3D5EEC37355AA89120754DF14D9A4;
// Nethereum.Model.Account
struct Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E;
// Nethereum.Model.AccountEncoder
struct AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9;
// Nethereum.Model.AccountStorage
struct AccountStorage_tB2733A97F532D5F96ADEA2D83A68375F955E098B;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Nethereum.Model.BlockHeader
struct BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F;
// Nethereum.Model.BlockHeaderEncoder
struct BlockHeaderEncoder_t164729660F29BD9778128CB2C0134D759C9390FF;
// Nethereum.Model.DefaultValues
struct DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Nethereum.RLP.IRLPElement
struct IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954;
// Nethereum.Model.ISignature
struct ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A;
// Nethereum.Model.ISignedTransaction
struct ISignedTransaction_t295449C3C8E5BAE1484CD45D4FC5C770D95534C8;
// Nethereum.Model.ITransactionTypeDecoder
struct ITransactionTypeDecoder_t67C178FBB0E7F6FB3CDDBA2021E82719CCBE9A20;
// Nethereum.Model.IndexedSignedTransaction
struct IndexedSignedTransaction_t1C7BAC78F6C1377A43EDDB85FAF38F2F5253123F;
// Nethereum.Model.LegacyTransaction
struct LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3;
// Nethereum.Model.LegacyTransactionChainId
struct LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7;
// Nethereum.Model.Log
struct Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2;
// Nethereum.Model.LogBloomFilter
struct LogBloomFilter_t045C197013D8F095751B16A60335761C456A7925;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// Nethereum.RLP.RLPCollection
struct RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6;
// Nethereum.Model.RLPSignedDataDecoder
struct RLPSignedDataDecoder_t524D0BCC632707E23310DD9AC302AF8AB1023806;
// Nethereum.Model.RLPSignedDataEncoder
struct RLPSignedDataEncoder_tDE834D43B0E4CA7BFCCA4C893DC0CBDD9A369E2E;
// Nethereum.Model.RLPSignedDataHashBuilder
struct RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Nethereum.Util.Sha3Keccack
struct Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6;
// Nethereum.Util.HashProviders.Sha3KeccackHashProvider
struct Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5;
// Nethereum.Model.Signature
struct Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999;
// Nethereum.Model.SignedData
struct SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F;
// Nethereum.Model.SignedLegacyTransaction
struct SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A;
// Nethereum.Model.SignedLegacyTransactionBase
struct SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F;
// Nethereum.Model.SignedTransaction
struct SignedTransaction_t397E604239E3BB0594398EFC6813192C24863818;
// Nethereum.Model.SignedTypeTransaction
struct SignedTypeTransaction_tE290AC7A95BAC7772CCC1FCDE1DEE730E316D70B;
// System.String
struct String_t;
// Nethereum.Model.Transaction1559
struct Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17;
// Nethereum.Model.Transaction1559Encoder
struct Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BlockHeaderEncoder_t164729660F29BD9778128CB2C0134D759C9390FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteUtil_t3970634EEB0967A65636D41F893596448593FE44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITransactionTypeDecoder_t67C178FBB0E7F6FB3CDDBA2021E82719CCBE9A20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransactionType_tE37EFD1623B44F5340629124DD2B25B2D67A9F8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2AB5535AF257A256354EDD3534BF558438FAA134;
IL2CPP_EXTERN_C String_t* _stringLiteral31C41112B7DD380345C2F6555DB2A970209CCB01;
IL2CPP_EXTERN_C String_t* _stringLiteral31C492654F7BDA35E825E667B801EDBCDA1ADABF;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral56CFF3F3D81F5D74264172D67648D4797F5747B9;
IL2CPP_EXTERN_C String_t* _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89;
IL2CPP_EXTERN_C String_t* _stringLiteral67587F339D6B440578008A9044D0F5DA43508EB5;
IL2CPP_EXTERN_C String_t* _stringLiteral8B1E24B4D727EDA78ED297F0CF28ED9026B51D02;
IL2CPP_EXTERN_C String_t* _stringLiteral95904989F0F4200EBCB3540A7E3A2E30BC8A4C04;
IL2CPP_EXTERN_C String_t* _stringLiteral98DA633D8982D07B9B6B488E1767152B942ED6CB;
IL2CPP_EXTERN_C String_t* _stringLiteral9D64FD021538BBCA256D783E52916EC66D2582E4;
IL2CPP_EXTERN_C String_t* _stringLiteralA4E2A76B9671BDD259F592403ABD44DDBCA55508;
IL2CPP_EXTERN_C String_t* _stringLiteralB58817C2B95943D974A08804A5B31197F83F4F7F;
IL2CPP_EXTERN_C String_t* _stringLiteralCB28DF552C232A54DAC36D5590A1B2F313A231DB;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE2333AB02EB7587F927A6E929CDA8F5DAE07F11D;
IL2CPP_EXTERN_C String_t* _stringLiteralEBFFF519309F724532ADFE795BE05E56940C1A9C;
IL2CPP_EXTERN_C String_t* _stringLiteralF0E0C429E93D94E33D5AA4C943CDFF123EB9FF31;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Take_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m0919EA050297104B260DB970151A823245F74A6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB314C07EA57C31C2E6917FE2F65042088C804324_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB3E5ABD0EBFF0D5435926AC1742BE2787DA3EDBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m972AD6DC207A4D3369326FD26869733B895511E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBF68EC84ACDB27C09479EF020E229E82D08315E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m01B4358E85EA55FCDB8E7D81F818B525A9BF7E5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mE3ADF8014B916CA0E0EE262BAC6A99AE4AD24C2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LegacyTransactionChainId_ValidateValidV_mB8399C19F1AA55DA973F518F51BB2D3662E7D7F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LegacyTransaction_ValidateValidV_m1F7CA2853B1FDF9442C57A4642CED69F4A4771D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m850E1C1D350B9CACB7C49218DFA8F1F0F6FC072D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCFB0510D50A31CEBE48FA5B0B05722CCBCD195E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6B1F2F4C1769A976C20858635DE37816494C6EF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB0DD2C91E1EE18AF0585CE424F50F5F98FC97904_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA705A95A8DF13538A2AD962CECFA9C4B351CFD8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0BB9CF9506246DC1E18A6833CC459D0CE5853907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mCBDA870B39CA8872AADBA32CF4EA47C07E67893D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m402A055BB8683375CFA1162E6BA94902F4F5D29C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mE1BD2EC3D88CCEF213FC050F3022BD301B857F61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_ToString_m920DDEC1CCF5F7B138DCFA3A06F490F290A91665_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m467AE36003E64D3A17BE8DEAE0617A8A91C4D299_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m5D4AFF8301193978BFBA2F1470C7BCF86A8BCCAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RLPSignedDataHashBuilder_IsVSignatureForChain_mFEA79AEADCE0D30CAE9FFF4D241BFA9BEEBA40A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransactionFactory_CreateTransaction_mC2B654494DAF69E773DFE2ECB23B1181CE3D6751_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransactionFactory_GetTransactionTypeDecoder_m596A3F6E656B3032549343230FFC372A4709CCAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransactionTypeEncoder_1_AddTypeToEncodedBytes_m631C1792AFBDAFD03A766A8EAF7E974BBACDACA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransactionTypeEncoder_1_GetBigIntegerForEncoding_mD9C51B6461CD721742082939AD636E87F007802E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransactionTypeEncoder_1__ctor_m699E9434D752911B41AA410BF4034A081B6FA4BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransactionTypeExtensions_ToTypedTransaction_m8DFB3DB15051223807B04257BF4D925E74B10881_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VRecoveryAndChainCalculations_GetRecIdFromV_m930CB9D6268213A7DA579AC28E1E0126F4231F34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TransactionType_tE37EFD1623B44F5340629124DD2B25B2D67A9F8D_0_0_0_var;
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
struct U3CModuleU3E_tCD5012A1716F5786C329A739B08FED02D7B9D46E 
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

// System.Collections.Generic.List`1<Nethereum.Model.AccessListItem>
struct List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AccessListItemU5BU5D_tDBA701B5947DD90F356DD62308C207F6385F3C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AccessListItemU5BU5D_tDBA701B5947DD90F356DD62308C207F6385F3C32* ___s_emptyArray_5;
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

// Nethereum.Model.TransactionTypeEncoder`1<Nethereum.Model.Transaction1559>
struct TransactionTypeEncoder_1_t171D4067E527B7D87CB7C9663961F22C165080AA  : public RuntimeObject
{
};

// Nethereum.Model.AccessListItem
struct AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A  : public RuntimeObject
{
	// System.String Nethereum.Model.AccessListItem::<Address>k__BackingField
	String_t* ___U3CAddressU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<System.Byte[]> Nethereum.Model.AccessListItem::<StorageKeys>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3CStorageKeysU3Ek__BackingField_1;
};

// Nethereum.Model.AccessListRLPEncoderDecoder
struct AccessListRLPEncoderDecoder_t455694E3CCD3D5EEC37355AA89120754DF14D9A4  : public RuntimeObject
{
};

// Nethereum.Model.AccountEncoder
struct AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9  : public RuntimeObject
{
};

struct AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9_StaticFields
{
	// Nethereum.Model.AccountEncoder Nethereum.Model.AccountEncoder::<Current>k__BackingField
	AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9* ___U3CCurrentU3Ek__BackingField_0;
};

// Nethereum.Model.AccountStorage
struct AccountStorage_tB2733A97F532D5F96ADEA2D83A68375F955E098B  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// Nethereum.Model.BlockHeaderEncoder
struct BlockHeaderEncoder_t164729660F29BD9778128CB2C0134D759C9390FF  : public RuntimeObject
{
};

struct BlockHeaderEncoder_t164729660F29BD9778128CB2C0134D759C9390FF_StaticFields
{
	// Nethereum.Model.BlockHeaderEncoder Nethereum.Model.BlockHeaderEncoder::<Current>k__BackingField
	BlockHeaderEncoder_t164729660F29BD9778128CB2C0134D759C9390FF* ___U3CCurrentU3Ek__BackingField_0;
};

// Nethereum.Model.DefaultValues
struct DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899  : public RuntimeObject
{
};

struct DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields
{
	// Nethereum.Model.DefaultValues Nethereum.Model.DefaultValues::<Current>k__BackingField
	DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899* ___U3CCurrentU3Ek__BackingField_0;
	// System.Byte[] Nethereum.Model.DefaultValues::EMPTY_BYTE_ARRAY
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___EMPTY_BYTE_ARRAY_1;
	// System.Byte[] Nethereum.Model.DefaultValues::ZERO_BYTE_ARRAY
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ZERO_BYTE_ARRAY_2;
	// System.Byte[] Nethereum.Model.DefaultValues::EMPTY_DATA_HASH
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___EMPTY_DATA_HASH_3;
	// System.Byte[] Nethereum.Model.DefaultValues::EMPTY_TRIE_HASH
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___EMPTY_TRIE_HASH_4;
};

// Nethereum.Model.Log
struct Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2  : public RuntimeObject
{
	// System.String Nethereum.Model.Log::<Address>k__BackingField
	String_t* ___U3CAddressU3Ek__BackingField_0;
	// System.Byte[] Nethereum.Model.Log::<Data>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CDataU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<System.Byte[]> Nethereum.Model.Log::<Topics>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3CTopicsU3Ek__BackingField_2;
};

// Nethereum.Model.LogBloomFilter
struct LogBloomFilter_t045C197013D8F095751B16A60335761C456A7925  : public RuntimeObject
{
	// System.Byte[] Nethereum.Model.LogBloomFilter::_data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____data_2;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Nethereum.Model.RLPSignedDataDecoder
struct RLPSignedDataDecoder_t524D0BCC632707E23310DD9AC302AF8AB1023806  : public RuntimeObject
{
};

// Nethereum.Model.RLPSignedDataEncoder
struct RLPSignedDataEncoder_tDE834D43B0E4CA7BFCCA4C893DC0CBDD9A369E2E  : public RuntimeObject
{
};

// Nethereum.Model.RLPSignedDataHashBuilder
struct RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4  : public RuntimeObject
{
	// System.Int32 Nethereum.Model.RLPSignedDataHashBuilder::numberOfEncodingElements
	int32_t ___numberOfEncodingElements_0;
	// System.Byte[] Nethereum.Model.RLPSignedDataHashBuilder::rlpSignedEncoded
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rlpSignedEncoded_1;
	// System.Byte[] Nethereum.Model.RLPSignedDataHashBuilder::rlpRawWithNoSignature
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rlpRawWithNoSignature_2;
	// Nethereum.Model.ISignature Nethereum.Model.RLPSignedDataHashBuilder::<Signature>k__BackingField
	RuntimeObject* ___U3CSignatureU3Ek__BackingField_3;
	// System.Byte[][] Nethereum.Model.RLPSignedDataHashBuilder::<Data>k__BackingField
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___U3CDataU3Ek__BackingField_4;
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

// Nethereum.Model.Signature
struct Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999  : public RuntimeObject
{
	// System.Byte[] Nethereum.Model.Signature::<R>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CRU3Ek__BackingField_0;
	// System.Byte[] Nethereum.Model.Signature::<S>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CSU3Ek__BackingField_1;
	// System.Byte[] Nethereum.Model.Signature::<V>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CVU3Ek__BackingField_2;
};

// Nethereum.Model.SignatureExtensions
struct SignatureExtensions_tDD409F4DE39AB525A9F0462A34311E6D67F4FA68  : public RuntimeObject
{
};

// Nethereum.Model.SignedData
struct SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F  : public RuntimeObject
{
	// System.Byte[][] Nethereum.Model.SignedData::<Data>k__BackingField
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___U3CDataU3Ek__BackingField_0;
	// System.Byte[] Nethereum.Model.SignedData::<V>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CVU3Ek__BackingField_1;
	// System.Byte[] Nethereum.Model.SignedData::<R>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CRU3Ek__BackingField_2;
	// System.Byte[] Nethereum.Model.SignedData::<S>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CSU3Ek__BackingField_3;
};

// Nethereum.Model.SignedTransaction
struct SignedTransaction_t397E604239E3BB0594398EFC6813192C24863818  : public RuntimeObject
{
	// Nethereum.Model.ISignature Nethereum.Model.SignedTransaction::<Signature>k__BackingField
	RuntimeObject* ___U3CSignatureU3Ek__BackingField_0;
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

// Nethereum.Model.TransactionFactory
struct TransactionFactory_t3D6FA246AFCBE887D37251874BD6A0B9CADE9B00  : public RuntimeObject
{
};

// Nethereum.Model.TransactionTypeExtensions
struct TransactionTypeExtensions_t2D5BED5B78852E389E1557FA62FE00E149FF79CF  : public RuntimeObject
{
};

// Nethereum.Model.VRecoveryAndChainCalculations
struct VRecoveryAndChainCalculations_t3996E4190BA3DCBD1EC8C2E85DC0644C1A73583C  : public RuntimeObject
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

// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
struct Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Nethereum.Model.AccessListItem>
struct Enumerator_tB31FE5AECD7B38818A46E896BEC743AD4D8CF096 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* ____current_3;
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

// System.Nullable`1<System.Byte>
struct Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	uint8_t ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
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

// Nethereum.Model.SignedLegacyTransactionBase
struct SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F  : public SignedTransaction_t397E604239E3BB0594398EFC6813192C24863818
{
	// Nethereum.Model.RLPSignedDataHashBuilder Nethereum.Model.SignedLegacyTransactionBase::<RlpSignerEncoder>k__BackingField
	RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* ___U3CRlpSignerEncoderU3Ek__BackingField_1;
};

// Nethereum.Model.SignedTypeTransaction
struct SignedTypeTransaction_tE290AC7A95BAC7772CCC1FCDE1DEE730E316D70B  : public SignedTransaction_t397E604239E3BB0594398EFC6813192C24863818
{
};

// Nethereum.Model.Transaction1559Encoder
struct Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E  : public TransactionTypeEncoder_1_t171D4067E527B7D87CB7C9663961F22C165080AA
{
	// System.Byte Nethereum.Model.Transaction1559Encoder::Type
	uint8_t ___Type_1;
};

struct Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_StaticFields
{
	// Nethereum.Model.Transaction1559Encoder Nethereum.Model.Transaction1559Encoder::<Current>k__BackingField
	Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* ___U3CCurrentU3Ek__BackingField_0;
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

// System.Nullable`1<System.Numerics.BigInteger>
struct Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value_1;
};

// Nethereum.Model.Account
struct Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E  : public RuntimeObject
{
	// System.Numerics.BigInteger Nethereum.Model.Account::<Nonce>k__BackingField
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___U3CNonceU3Ek__BackingField_0;
	// System.Numerics.BigInteger Nethereum.Model.Account::<Balance>k__BackingField
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___U3CBalanceU3Ek__BackingField_1;
	// System.Byte[] Nethereum.Model.Account::<StateRoot>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CStateRootU3Ek__BackingField_2;
	// System.Byte[] Nethereum.Model.Account::<CodeHash>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CCodeHashU3Ek__BackingField_3;
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

// Nethereum.Model.IndexedSignedTransaction
struct IndexedSignedTransaction_t1C7BAC78F6C1377A43EDDB85FAF38F2F5253123F  : public RuntimeObject
{
	// System.Numerics.BigInteger Nethereum.Model.IndexedSignedTransaction::<Index>k__BackingField
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___U3CIndexU3Ek__BackingField_0;
	// Nethereum.Model.ISignedTransaction Nethereum.Model.IndexedSignedTransaction::<SignedTransaction>k__BackingField
	RuntimeObject* ___U3CSignedTransactionU3Ek__BackingField_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Nethereum.Model.SignedLegacyTransaction
struct SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A  : public SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F
{
};

struct SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_StaticFields
{
	// System.Numerics.BigInteger Nethereum.Model.SignedLegacyTransaction::DEFAULT_GAS_PRICE
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___DEFAULT_GAS_PRICE_3;
	// System.Numerics.BigInteger Nethereum.Model.SignedLegacyTransaction::DEFAULT_GAS_LIMIT
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___DEFAULT_GAS_LIMIT_4;
};

// Nethereum.Model.BlockHeader
struct BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F  : public RuntimeObject
{
	// System.Byte[] Nethereum.Model.BlockHeader::<ParentHash>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CParentHashU3Ek__BackingField_0;
	// System.Byte[] Nethereum.Model.BlockHeader::<UnclesHash>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CUnclesHashU3Ek__BackingField_1;
	// System.String Nethereum.Model.BlockHeader::<Coinbase>k__BackingField
	String_t* ___U3CCoinbaseU3Ek__BackingField_2;
	// System.Byte[] Nethereum.Model.BlockHeader::<StateRoot>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CStateRootU3Ek__BackingField_3;
	// System.Byte[] Nethereum.Model.BlockHeader::<TransactionsHash>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CTransactionsHashU3Ek__BackingField_4;
	// System.Byte[] Nethereum.Model.BlockHeader::<ReceiptHash>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CReceiptHashU3Ek__BackingField_5;
	// System.Numerics.BigInteger Nethereum.Model.BlockHeader::<BlockNumber>k__BackingField
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___U3CBlockNumberU3Ek__BackingField_6;
	// System.Byte[] Nethereum.Model.BlockHeader::<LogsBloom>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CLogsBloomU3Ek__BackingField_7;
	// System.Numerics.BigInteger Nethereum.Model.BlockHeader::<Difficulty>k__BackingField
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___U3CDifficultyU3Ek__BackingField_8;
	// System.Int64 Nethereum.Model.BlockHeader::<Timestamp>k__BackingField
	int64_t ___U3CTimestampU3Ek__BackingField_9;
	// System.Int64 Nethereum.Model.BlockHeader::<GasLimit>k__BackingField
	int64_t ___U3CGasLimitU3Ek__BackingField_10;
	// System.Int64 Nethereum.Model.BlockHeader::<GasUsed>k__BackingField
	int64_t ___U3CGasUsedU3Ek__BackingField_11;
	// System.Byte[] Nethereum.Model.BlockHeader::<MixHash>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CMixHashU3Ek__BackingField_12;
	// System.Byte[] Nethereum.Model.BlockHeader::<ExtraData>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CExtraDataU3Ek__BackingField_13;
	// System.Byte[] Nethereum.Model.BlockHeader::<Nonce>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CNonceU3Ek__BackingField_14;
	// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Model.BlockHeader::<BaseFee>k__BackingField
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___U3CBaseFeeU3Ek__BackingField_15;
};

// Nethereum.Model.LegacyTransaction
struct LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3  : public SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A
{
};

// Nethereum.Model.LegacyTransactionChainId
struct LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7  : public SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A
{
};

struct LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_StaticFields
{
	// System.Byte[] Nethereum.Model.LegacyTransactionChainId::RHASH_DEFAULT
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___RHASH_DEFAULT_5;
	// System.Byte[] Nethereum.Model.LegacyTransactionChainId::SHASH_DEFAULT
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SHASH_DEFAULT_6;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Nethereum.Model.Transaction1559
struct Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17  : public SignedTypeTransaction_tE290AC7A95BAC7772CCC1FCDE1DEE730E316D70B
{
	// System.Numerics.BigInteger Nethereum.Model.Transaction1559::<ChainId>k__BackingField
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___U3CChainIdU3Ek__BackingField_1;
	// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Model.Transaction1559::<Nonce>k__BackingField
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___U3CNonceU3Ek__BackingField_2;
	// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Model.Transaction1559::<MaxPriorityFeePerGas>k__BackingField
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___U3CMaxPriorityFeePerGasU3Ek__BackingField_3;
	// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Model.Transaction1559::<MaxFeePerGas>k__BackingField
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___U3CMaxFeePerGasU3Ek__BackingField_4;
	// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Model.Transaction1559::<GasLimit>k__BackingField
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___U3CGasLimitU3Ek__BackingField_5;
	// System.String Nethereum.Model.Transaction1559::<ReceiverAddress>k__BackingField
	String_t* ___U3CReceiverAddressU3Ek__BackingField_6;
	// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Model.Transaction1559::<Amount>k__BackingField
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___U3CAmountU3Ek__BackingField_7;
	// System.String Nethereum.Model.Transaction1559::<Data>k__BackingField
	String_t* ___U3CDataU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<Nethereum.Model.AccessListItem> Nethereum.Model.Transaction1559::<AccessList>k__BackingField
	List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* ___U3CAccessListU3Ek__BackingField_9;
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

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Numerics.BigInteger>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_gshared_inline (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Take_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m0919EA050297104B260DB970151A823245F74A6D_gshared (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Numerics.BigInteger>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Nullable_1_get_Value_m5D4AFF8301193978BFBA2F1470C7BCF86A8BCCAE_gshared (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Numerics.BigInteger>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138_gshared (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.TransactionTypeEncoder`1<System.Object>::GetBigIntegerForEncoding(System.Nullable`1<System.Numerics.BigInteger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TransactionTypeEncoder_1_GetBigIntegerForEncoding_mCEF6F62DE74545014F39F1C7672A6DCEA8DCD847_gshared (TransactionTypeEncoder_1_tCA5A25CDFDA186E3CD6FB79953C86982F509C190* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___value0, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.TransactionTypeEncoder`1<System.Object>::AddTypeToEncodedBytes(System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TransactionTypeEncoder_1_AddTypeToEncodedBytes_mA8EB93FB234D48D5792133C3F2ECD1AE7439251A_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___encodedBytes0, uint8_t ___type1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Skip<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_gshared (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.TransactionTypeEncoder`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionTypeEncoder_1__ctor_mA2955FAFAC6D155378BAEF96B44772ECE9D34649_gshared (TransactionTypeEncoder_1_tCA5A25CDFDA186E3CD6FB79953C86982F509C190* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Numerics.BigInteger>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Nullable_1_GetValueOrDefault_m402A055BB8683375CFA1162E6BA94902F4F5D29C_gshared_inline (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Byte>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_gshared_inline (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Byte>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Nullable_1_GetValueOrDefault_mE1BD2EC3D88CCEF213FC050F3022BD301B857F61_gshared_inline (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.String System.Nullable`1<System.Byte>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Nullable_1_ToString_m920DDEC1CCF5F7B138DCFA3A06F490F290A91665_gshared (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Byte>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Nullable_1_get_Value_m467AE36003E64D3A17BE8DEAE0617A8A91C4D299_gshared (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
inline void List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4 (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Nethereum.Model.AccessListItem::set_StorageKeys(System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessListItem_set_StorageKeys_mC44001373EA02A97D0EBBD554AC47C58CF7C9D9A_inline (AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.AccessListItem::set_Address(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessListItem_set_Address_m02AC4A9672473673291EC9A307CF8B2B83951820_inline (AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Nethereum.Model.AccessListItem>::get_Count()
inline int32_t List_1_get_Count_m0BB9CF9506246DC1E18A6833CC459D0CE5853907_inline (List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Nethereum.Model.AccessListItem>::GetEnumerator()
inline Enumerator_tB31FE5AECD7B38818A46E896BEC743AD4D8CF096 List_1_GetEnumerator_m6B1F2F4C1769A976C20858635DE37816494C6EF1 (List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB31FE5AECD7B38818A46E896BEC743AD4D8CF096 (*) (List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Nethereum.Model.AccessListItem>::Dispose()
inline void Enumerator_Dispose_mB314C07EA57C31C2E6917FE2F65042088C804324 (Enumerator_tB31FE5AECD7B38818A46E896BEC743AD4D8CF096* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB31FE5AECD7B38818A46E896BEC743AD4D8CF096*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Nethereum.Model.AccessListItem>::get_Current()
inline AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* Enumerator_get_Current_mE3ADF8014B916CA0E0EE262BAC6A99AE4AD24C2F_inline (Enumerator_tB31FE5AECD7B38818A46E896BEC743AD4D8CF096* __this, const RuntimeMethod* method)
{
	return ((  AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* (*) (Enumerator_tB31FE5AECD7B38818A46E896BEC743AD4D8CF096*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.String Nethereum.Model.AccessListItem::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessListItem_get_Address_m34B6C0590AEBD642BC0A156609AB18A4B8BE01F8_inline (AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::HexToByteArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE (String_t* ___value0, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.RLP.RLP::EncodeElement(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___srcData0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
inline void List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.List`1<System.Byte[]> Nethereum.Model.AccessListItem::get_StorageKeys()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* AccessListItem_get_StorageKeys_m67B0C1F73D53C01564E9D6799DC9AAE6F34584F5_inline (AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
inline Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Byte[]>::Dispose()
inline void Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Byte[]>::get_Current()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_inline (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Byte[]>::MoveNext()
inline bool Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4 (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// T[] System.Collections.Generic.List`1<System.Byte[]>::ToArray()
inline ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Byte[] Nethereum.RLP.RLP::EncodeList(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLP_EncodeList_m2A2C2A6B4DDA95C331AECF96926B0D9C1B16FE05 (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___items0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Nethereum.Model.AccessListItem>::MoveNext()
inline bool Enumerator_MoveNext_mBF68EC84ACDB27C09479EF020E229E82D08315E8 (Enumerator_tB31FE5AECD7B38818A46E896BEC743AD4D8CF096* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB31FE5AECD7B38818A46E896BEC743AD4D8CF096*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// Nethereum.RLP.IRLPElement Nethereum.RLP.RLP::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RLP_Decode_m25755DBDC9A4DD532BC45B2C9BBBB03E00FA0C33 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Nethereum.Model.AccessListItem>::.ctor()
inline void List_1__ctor_mA705A95A8DF13538A2AD962CECFA9C4B351CFD8D (List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
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
// System.Void Nethereum.Model.AccessListItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessListItem__ctor_m9445470FF3EBC4C4A2C830406E6F5010F88B726A (AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Nethereum.RLP.IRLPElement>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349 (List_1_t8930E92CA3374D0394732F4FF2E0265B48828819* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t8930E92CA3374D0394732F4FF2E0265B48828819*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::ToHex(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, bool ___prefix1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Nethereum.RLP.IRLPElement>::MoveNext()
inline bool Enumerator_MoveNext_m972AD6DC207A4D3369326FD26869733B895511E5 (Enumerator_t50392BDDA51524CFB345E6E743C3052F6D54CA2D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t50392BDDA51524CFB345E6E743C3052F6D54CA2D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Nethereum.Model.AccessListItem>::Add(T)
inline void List_1_Add_mCFB0510D50A31CEBE48FA5B0B05722CCBCD195E1_inline (List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* __this, AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC*, AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Byte[] Nethereum.Util.ByteUtil::PadTo32Bytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteUtil_PadTo32Bytes_mA9517B3EA8C0CFEC22F531524A26013E5D8F9F4B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytesToPad0, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Util.HashProviders.Sha3KeccackHashProvider::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Sha3KeccackHashProvider_ComputeHash_m358C5EE615F4FC68C40C040A2E0A0E9A59D952CD (Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Numerics.BigInteger Nethereum.Model.Account::get_Nonce()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Account_get_Nonce_m7A627E28D7F7629FAB6196916B1FA4EDAEDA5219_inline (Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesForRLPEncoding(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___bigInteger0, const RuntimeMethod* method) ;
// System.Numerics.BigInteger Nethereum.Model.Account::get_Balance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Account_get_Balance_m72FC1090ACBB3A710F25E485628B6FD996847A23_inline (Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.Account::get_StateRoot()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Account_get_StateRoot_mB52D66E701BE1FBD4E68A48C71A2B2ACB9EDEA5E_inline (Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.Account::get_CodeHash()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Account_get_CodeHash_mA002CB1FAC603EFBC31CC3D18F032EA70BD99708_inline (Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.RLP.RLP::EncodeDataItemsAsElementOrListAndCombineAsList(System.Byte[][],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLP_EncodeDataItemsAsElementOrListAndCombineAsList_m03BF5928F42FA0AE887AF871B1D36202A3A6D791 (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___dataItems0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indexOfListDataItems1, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.Account::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account__ctor_mFBC9C5F2215B6B4E77DBA4A042780A7BC840D7CB (Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* __this, const RuntimeMethod* method) ;
// System.Numerics.BigInteger Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBigIntegerFromRLPDecoded(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mAD7F985D3961A7070872967A541A414B9B5D13ED (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.Account::set_Nonce(System.Numerics.BigInteger)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Account_set_Nonce_mF78539118A7B9C0534BC429CBEE300D933EBD42A_inline (Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.Account::set_Balance(System.Numerics.BigInteger)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Account_set_Balance_m63367A3C6513073461E4D78A8DBA23A5573F62AD_inline (Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.Account::set_StateRoot(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Account_set_StateRoot_m407565197BD4B050E841032EFB12089420582637_inline (Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.Account::set_CodeHash(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Account_set_CodeHash_mFB21C64C3CBEA71FAD10B9460B96805785C2E09C_inline (Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.AccountEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountEncoder__ctor_mFAACA3386FD4E175254A424CC480419230F4F11A (AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Sha3Keccack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha3Keccack__ctor_m1A1B72B31D347C8FEEAB51607616A6C4992DE7D0 (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.BlockHeaderEncoder::EncodeCliqueSigHeader(Nethereum.Model.BlockHeader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeaderEncoder_EncodeCliqueSigHeader_m61CCF3B3493EB7AA7C1AF330A3094F8455AA9F21 (BlockHeaderEncoder_t164729660F29BD9778128CB2C0134D759C9390FF* __this, BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* ___header0, bool ___legacyMode1, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Util.Sha3Keccack::CalculateHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Sha3Keccack_CalculateHash_mE94324F2BF9D80A18C59A08CF5F0735B78ECAAA0 (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Model.BlockHeader::get_BaseFee()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 BlockHeader_get_BaseFee_m4A4473059F978BE88F48490A63865313A3D27BF8_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Numerics.BigInteger>::get_HasValue()
inline bool Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_inline (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72*, const RuntimeMethod*))Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_gshared_inline)(__this, method);
}
// System.Byte[] Nethereum.Model.BlockHeader::get_ParentHash()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeader_get_ParentHash_mD09AFC6B6C0A59D14BAA739047EE9187485033B2_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.BlockHeader::get_UnclesHash()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeader_get_UnclesHash_mC369A310077A836F8C7813A81E7152D7EBEBBCC7_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) ;
// System.String Nethereum.Model.BlockHeader::get_Coinbase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BlockHeader_get_Coinbase_m5382AA5D7520BAA1F29E856950F113BB5A695A05_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.BlockHeader::get_StateRoot()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeader_get_StateRoot_mB49452F2707E51BEFA3098C765CC07B212EA1BFD_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.BlockHeader::get_TransactionsHash()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeader_get_TransactionsHash_mA14ED72B316456A7DA70674CFA45FB614BE6D052_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.BlockHeader::get_ReceiptHash()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeader_get_ReceiptHash_m601349219B610EA247E77C71989580827E9D6155_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.BlockHeader::get_LogsBloom()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeader_get_LogsBloom_m8ECB925ACF13C4B08366C8BD7D1DB7AD79587CC2_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) ;
// System.Numerics.BigInteger Nethereum.Model.BlockHeader::get_Difficulty()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BlockHeader_get_Difficulty_m3FB7AC6E712CECA3AC8AE8AA889BD5096645560C_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) ;
// System.Numerics.BigInteger Nethereum.Model.BlockHeader::get_BlockNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BlockHeader_get_BlockNumber_m0DC83E04F6F0F2819D602E42C8AA586F89981B89_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) ;
// System.Int64 Nethereum.Model.BlockHeader::get_GasLimit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BlockHeader_get_GasLimit_mB3CABF0F4F03B6FDA626CAC59B5A549E84455062_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesForRLPEncoding(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_m6AD343E741D49F00EF0AB8F671EF6582DFDCEAA4 (int64_t ___number0, const RuntimeMethod* method) ;
// System.Int64 Nethereum.Model.BlockHeader::get_GasUsed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BlockHeader_get_GasUsed_mDFD81A5827A38B40429AAC2265998EBF568C558B_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) ;
// System.Int64 Nethereum.Model.BlockHeader::get_Timestamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BlockHeader_get_Timestamp_m8BC5D0906E650F8218B340228F36609DA1F792CA_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.BlockHeader::get_ExtraData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeader_get_ExtraData_m8BE7E056B3401DE5E987EBD9D0BCD5A7D4599900_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline RuntimeObject* Enumerable_Take_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m0919EA050297104B260DB970151A823245F74A6D (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Take_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m0919EA050297104B260DB970151A823245F74A6D_gshared)(___source0, ___count1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_gshared)(___source0, method);
}
// System.Byte[] Nethereum.Model.BlockHeader::get_MixHash()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeader_get_MixHash_m31F008787399E24AE508492F3B48E38404605774_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.BlockHeader::get_Nonce()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeader_get_Nonce_mE68FEFB68F47B6DA1F527BC99CA3AF123E37F972_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Numerics.BigInteger>::get_Value()
inline BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Nullable_1_get_Value_m5D4AFF8301193978BFBA2F1470C7BCF86A8BCCAE (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72* __this, const RuntimeMethod* method)
{
	return ((  BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F (*) (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72*, const RuntimeMethod*))Nullable_1_get_Value_m5D4AFF8301193978BFBA2F1470C7BCF86A8BCCAE_gshared)(__this, method);
}
// System.Void Nethereum.Model.BlockHeader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockHeader__ctor_m22DF377A4C8EA8D9DE920E0F745FF19141001424 (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.BlockHeader::set_ParentHash(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_ParentHash_m3544C8D5C367E7D5C0BF971BECF75364E2A449E0_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.BlockHeader::set_UnclesHash(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_UnclesHash_m4BFB158D24853CB73F74E049DEBC9BDCAE010711_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.BlockHeader::set_Coinbase(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_Coinbase_m6A4E6DBD82B66997878DEAFCC0A4A79297C65343_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.BlockHeader::set_StateRoot(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_StateRoot_m44264C1F32131C34F88F20A86EA95AB3E93906C8_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.BlockHeader::set_TransactionsHash(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_TransactionsHash_mB0FBEB59E6219F2575BE2A132695C2651EBC110F_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.BlockHeader::set_ReceiptHash(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_ReceiptHash_m008A4438451481B963F925C22CFB1BBCF10816F8_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.BlockHeader::set_LogsBloom(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_LogsBloom_m36794ED0B4FB02FE67805DE4F8DCD8EF2F76D429_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.BlockHeader::set_Difficulty(System.Numerics.BigInteger)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_Difficulty_mDBC375C45A9753448B08188FAF275455DCB86911_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.BlockHeader::set_BlockNumber(System.Numerics.BigInteger)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_BlockNumber_m20C1879A0E9C8051E908608C9C58584ED46A0CB7_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) ;
// System.Int64 Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToLongFromRLPDecoded(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ConvertorForRLPEncodingExtensions_ToLongFromRLPDecoded_m115B1AFCE51801BF5551ADA984EFCF3EAFFF17B7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.BlockHeader::set_GasLimit(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_GasLimit_m5D124AC1B06BEA9A6F5158439B7A08B23DFBC1A1_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.BlockHeader::set_GasUsed(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_GasUsed_mD15EFF3F1EB909E2FB43E34E624B96BE31CC8A6C_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.BlockHeader::set_Timestamp(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_Timestamp_mAAB7D498005A69025A0E8088C80D4F5B7459CE92_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.BlockHeader::set_ExtraData(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_ExtraData_m803FEC4A93D5203511EC702AD6C3D2358D0CBC62_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.BlockHeader::set_MixHash(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_MixHash_mB28EC358A7C54B981C16209505AEFF98DE3B185D_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.BlockHeader::set_Nonce(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_Nonce_m8ABAD0FF0F65C698FF383A31999311B050762157_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Numerics.BigInteger>::.ctor(T)
inline void Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138 (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72*, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F, const RuntimeMethod*))Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138_gshared)(__this, ___value0, method);
}
// System.Void Nethereum.Model.BlockHeader::set_BaseFee(System.Nullable`1<System.Numerics.BigInteger>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_BaseFee_m53937185E9CA21B70B27FBD716A24364677D7954_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.BlockHeaderEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockHeaderEncoder__ctor_m5C937027351C817A5BC2A96CDA0DC3B01FC0E164 (BlockHeaderEncoder_t164729660F29BD9778128CB2C0134D759C9390FF* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.DefaultValues::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultValues__ctor_m8E30C8E47A736CD667A25ED969352CB5F510DA7A (DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899* __this, const RuntimeMethod* method) ;
// Nethereum.Util.Sha3Keccack Nethereum.Util.Sha3Keccack::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* Sha3Keccack_get_Current_mD6FFC538783F0A2C61503A659F979F136C302D91_inline (const RuntimeMethod* method) ;
// System.Void Nethereum.Model.SignedLegacyTransaction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedLegacyTransaction__ctor_m0492AFCCAAC52C94D70CC576615EC469B9392B07 (SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.RLPSignedDataHashBuilder::.ctor(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder__ctor_m9A316BB70554992BF4F8925D854F9128F612D3A3 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawData0, int32_t ___numberOfEncodingElements1, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.SignedLegacyTransactionBase::set_RlpSignerEncoder(Nethereum.Model.RLPSignedDataHashBuilder)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignedLegacyTransactionBase_set_RlpSignerEncoder_m2E48E16936EF5766F77818F30F38D403947405C5_inline (SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F* __this, RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* ___value0, const RuntimeMethod* method) ;
// Nethereum.Model.RLPSignedDataHashBuilder Nethereum.Model.SignedLegacyTransactionBase::get_RlpSignerEncoder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline (SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.LegacyTransaction::ValidateValidV(Nethereum.Model.RLPSignedDataHashBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransaction_ValidateValidV_m1F7CA2853B1FDF9442C57A4642CED69F4A4771D8 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* ___rlpSigner0, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Model.RLPSignedDataHashBuilder::IsVSignatureForChain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLPSignedDataHashBuilder_IsVSignatureForChain_mFEA79AEADCE0D30CAE9FFF4D241BFA9BEEBA40A2 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Byte[][] Nethereum.Model.LegacyTransaction::GetElementsInOrder(System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* LegacyTransaction_GetElementsInOrder_m1DD527D9C3EEF9CBBFC10EEDA86FAB19D0961992 (LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___nonce0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___gasPrice1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___gasLimit2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___receiveAddress3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data5, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.RLPSignedDataHashBuilder::.ctor(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder__ctor_m8B68A14C93AA88885686C4F348A23EA597F51BCF (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___data0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.RLPSignedDataHashBuilder::.ctor(System.Byte[][],System.Byte[],System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder__ctor_m5FCCB2FD899F115BAF2557124655C4CFEED47E6D (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___data0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s2, uint8_t ___v3, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.LegacyTransaction::.ctor(System.String,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransaction__ctor_m8917B09254A9D60D70BEC838F4FA13989A6397FE (LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3* __this, String_t* ___to0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___amount1, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___nonce2, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___gasPrice3, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___gasLimit4, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.LegacyTransaction::.ctor(System.String,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransaction__ctor_m21E35DC359DCC692DAEB19FC6E1BDBAD64F9BBD2 (LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3* __this, String_t* ___to0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___amount1, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___nonce2, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___gasPrice3, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___gasLimit4, String_t* ___data5, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.LegacyTransaction::.ctor(System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransaction__ctor_m6A3F6E34074F98A7D88E242EFE77FB63AABBA329 (LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___nonce0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___gasPrice1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___gasLimit2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___receiveAddress3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data5, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.SignedLegacyTransaction::get_Nonce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedLegacyTransaction_get_Nonce_m09DCD71F3195BD18A6D0219663CF1CC4A0CAF411 (SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.SignedLegacyTransaction::get_GasPrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedLegacyTransaction_get_GasPrice_m9C6865A1E3106284986F0B2773AE52479A67208C (SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.SignedLegacyTransaction::get_GasLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedLegacyTransaction_get_GasLimit_mDDE3E33D0C1D3FA32782C292EAFB928A60163A40 (SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.SignedLegacyTransaction::get_ReceiveAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedLegacyTransaction_get_ReceiveAddress_mA2D05DA97B5EFA87E87C53969C2DA651AD1E6B82 (SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.SignedLegacyTransaction::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedLegacyTransaction_get_Value_mB54148EACF4CFA332AAEB85B65FDA0073D381549 (SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.SignedLegacyTransaction::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedLegacyTransaction_get_Data_m0AEBA5B694F5E81BE631AA2A86379108D0D563B8 (SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A* __this, const RuntimeMethod* method) ;
// System.String Nethereum.Model.SignedLegacyTransactionBase::ToHex(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SignedLegacyTransactionBase_ToHex_m58933B6818C70EA253C26F1C6EB108679FF735F8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.LegacyTransactionChainId::ValidateValidV(Nethereum.Model.RLPSignedDataHashBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransactionChainId_ValidateValidV_mB8399C19F1AA55DA973F518F51BB2D3662E7D7F9 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* ___rlpSigner0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.LegacyTransactionChainId::AppendDataForHashRecovery(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransactionChainId_AppendDataForHashRecovery_m0A24AA639B8653F216A16EE032BC6F3A8F03C273 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___chainId0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.LegacyTransactionChainId::GetChainIdFromVAndAppendDataForHashRecovery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransactionChainId_GetChainIdFromVAndAppendDataForHashRecovery_m87A8B07BCD9B7FE3F2140471758EE331B06EAB20 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, const RuntimeMethod* method) ;
// System.Numerics.BigInteger Nethereum.Model.LegacyTransactionChainId::GetChainFromVChain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F LegacyTransactionChainId_GetChainFromVChain_m8FC35318DAAF9CD327FC693CF316B37A130A2980 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.RLPSignedDataHashBuilder::AppendData(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder_AppendData_mEFBAC31FD073282C468737FDD4CA93A8960C60D9 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___extraData0, const RuntimeMethod* method) ;
// System.Numerics.BigInteger Nethereum.Model.VRecoveryAndChainCalculations::GetChainFromVChain(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F VRecoveryAndChainCalculations_GetChainFromVChain_mE45A697CB197810E8874BF4617782E935C3C2D6D (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___vChain0, const RuntimeMethod* method) ;
// System.Byte[][] Nethereum.Model.LegacyTransactionChainId::GetElementsInOrder(System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* LegacyTransactionChainId_GetElementsInOrder_mB60AD855FEDE959652C6AD1194C08FE3CDAB6334 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___nonce0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___gasPrice1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___gasLimit2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___receiveAddress3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data5, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___chainId6, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.RLPSignedDataHashBuilder::.ctor(System.Byte[][],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder__ctor_m847B36519054299C9A34B9412FADF502F0A47B11 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___data0, int32_t ___numberOfEncodingElements1, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.RLPSignedDataHashBuilder::.ctor(System.Byte[][],System.Byte[],System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder__ctor_m8657B6E10FE92E8AA9DA990AAE9AFBC1114A525B (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___data0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___v3, int32_t ___numberOfEncodingElements4, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.LegacyTransactionChainId::.ctor(System.String,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransactionChainId__ctor_m9ACDACC037CB58544444D0B461F9C227555A6FF1 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, String_t* ___to0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___amount1, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___nonce2, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___gasPrice3, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___gasLimit4, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___chainId5, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.LegacyTransactionChainId::.ctor(System.String,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.String,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransactionChainId__ctor_m6D90F35D1C31B4D358FDEFCD83C3FD156E9A6A8B (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, String_t* ___to0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___amount1, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___nonce2, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___gasPrice3, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___gasLimit4, String_t* ___data5, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___chainId6, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.LegacyTransactionChainId::.ctor(System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransactionChainId__ctor_m1EF3F7B45328F9D2AD7E3EB31FC78219DFDA1806 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___nonce0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___gasPrice1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___gasLimit2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___receiveAddress3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data5, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___chainId6, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.LegacyTransactionChainId::get_ChainId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LegacyTransactionChainId_get_ChainId_mE15EC4FEE13CAF17C0A834AEE750CE37BC6001F3 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, const RuntimeMethod* method) ;
// System.Byte[][] Nethereum.Model.RLPSignedDataHashBuilder::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* RLPSignedDataHashBuilder_get_Data_m2904CB6BA451E29C691C9053D1CD2E66DDD2A904_inline (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.LegacyTransactionChainId::get_RHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LegacyTransactionChainId_get_RHash_mDCD8A147B2EC040008BD9093AD9CA1CB08BEF686 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.LegacyTransactionChainId::get_SHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LegacyTransactionChainId_get_SHash_m902B105786DA02B98668FAA07E340FB8288B53A8 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesForRLPEncoding(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mB8A2D4491D58D2CFEDB5F7086A4D41E2BA349811 (int32_t ___number0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.Log::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log__ctor_mA3585F4FD901EE62A3FD94594A53CD0D7154B040 (Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.Log::set_Data(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Log_set_Data_mD63ED2DB2693974C820D44396C0E7EC8D852D2C4_inline (Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.Log::set_Address(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Log_set_Address_m05D55D5AF6779099FBC150E7A8383B628A3BD32A_inline (Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Byte[]> Nethereum.Model.Log::get_Topics()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* Log_get_Topics_mFCD8D8F3F128E1E5B0E1464DC85B5BBC184CDE15_inline (Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte[]>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m850E1C1D350B9CACB7C49218DFA8F1F0F6FC072D (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// Nethereum.Model.Log Nethereum.Model.Log::Create(System.Byte[],System.String,System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2* Log_Create_mAFE837A3E0138D8ABD3FE87C883C186539F03C26 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, String_t* ___address1, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___topics2, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.LogBloomFilter::SetBit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogBloomFilter_SetBit_mC7A4401F4C59A7DE1D11AD829C2F92B744251E1B (LogBloomFilter_t045C197013D8F095751B16A60335761C456A7925* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String Nethereum.Model.Log::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Log_get_Address_m81F8BC5C2B100586D05555A684918DA177B7D9D7_inline (Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.LogBloomFilter::SetBits(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogBloomFilter_SetBits_mC6431BBAF9BB75951694E543620AD696A1B2796E (LogBloomFilter_t045C197013D8F095751B16A60335761C456A7925* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hashValue0, const RuntimeMethod* method) ;
// Nethereum.Model.Signature Nethereum.Model.RLPSignedDataDecoder::DecodeSignature(Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* RLPSignedDataDecoder_DecodeSignature_mD1D6AFF5447AA45CA7FD4A31CA03566086FCC00B (RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* ___decodedElements0, int32_t ___numberOfEncodingElements1, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.SignedData::.ctor(System.Byte[][],Nethereum.Model.ISignature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedData__ctor_m11E3AB4DBAD0E8CB950901ED4FD64C8FF0B2E611 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___data0, RuntimeObject* ___signature1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Nethereum.RLP.IRLPElement>::get_Count()
inline int32_t List_1_get_Count_mCBDA870B39CA8872AADBA32CF4EA47C07E67893D_inline (List_1_t8930E92CA3374D0394732F4FF2E0265B48828819* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8930E92CA3374D0394732F4FF2E0265B48828819*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void Nethereum.Model.Signature::.ctor(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Signature__ctor_m0105E56945CA0AD192175F0DB64661AF6AFCAC24 (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___v2, const RuntimeMethod* method) ;
// System.Byte[][] Nethereum.Model.SignedData::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* SignedData_get_Data_m0B4B3B958EDD8340E984A868C03F025552ED650B_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) ;
// Nethereum.Model.ISignature Nethereum.Model.SignedData::GetSignature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SignedData_GetSignature_m5BCFE6CA47DA7D778E78995CC18BBC9D50733C88 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.RLPSignedDataEncoder::AddSignatureToEncodedData(Nethereum.Model.ISignature,System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataEncoder_AddSignatureToEncodedData_m9A1FE50EE75C591B26BF48F7A6FBB6B30A8A97DA (RuntimeObject* ___signature0, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___encodedData1, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::TrimZeroBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConvertorForRLPEncodingExtensions_TrimZeroBytes_mEAF1B87C87761C26491C2F3106011097B4E6D99F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.RLPSignedDataHashBuilder::Decode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder_Decode_mF1CB14EC8244311EAE2644F8264FC6B841BAEE1C (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.RLPSignedDataHashBuilder::set_Data(System.Byte[][])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder_set_Data_mAB87DA8AC2B612D1A97F526ADAC70204B1551B9C_inline (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.RLPSignedDataHashBuilder::.ctor(System.Byte[][],System.Byte[],System.Byte[],System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder__ctor_m4DE4C697857C7978FEDDF4C83917B8C76658E4B5 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___data0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s2, uint8_t ___v3, int32_t ___numberOfEncodingElements4, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.RLPSignedDataHashBuilder::set_Signature(Nethereum.Model.ISignature)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder_set_Signature_mD3719D97D6BFEFBF79830FB803E52E276E1D8D0F_inline (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.RLPSignedDataHashBuilder::GetRLPEncodedRaw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLPSignedDataHashBuilder_GetRLPEncodedRaw_m18AA664C1D6005E7C133A7A25492B8D59BD492EF (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.RLPSignedDataHashBuilder::GetRLPEncoded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLPSignedDataHashBuilder_GetRLPEncoded_m75958043E912323BD3DB1B878556737C2A807B99 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) ;
// Nethereum.Model.ISignature Nethereum.Model.RLPSignedDataHashBuilder::get_Signature()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RLPSignedDataHashBuilder_get_Signature_m30DFAA97567C1D3B8B893DEB71F24F8FC4C89078_inline (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.RLPSignedDataEncoder::EncodeSigned(Nethereum.Model.SignedData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLPSignedDataEncoder_EncodeSigned_mDE2A2B39F05CCD1293D333689FCB4F4C93A05014 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* ___signedData0, int32_t ___numberOfElements1, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Model.SignatureExtensions::IsVSignedForChain(Nethereum.Model.ISignature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SignatureExtensions_IsVSignedForChain_m69DDB826D84F6645FACE71923AAE9CAB88297C56 (RuntimeObject* ___signature0, const RuntimeMethod* method) ;
// Nethereum.Model.SignedData Nethereum.Model.RLPSignedDataDecoder::DecodeSigned(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* RLPSignedDataDecoder_DecodeSigned_m9E99142C8C826B47123A783E0418388C0634AC25 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawdata0, int32_t ___numberOfEncodingElements1, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.Signature::set_R(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Signature_set_R_m261A6B7900366DC1E27C4AAA3EBFB341B0F3BF55_inline (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.Signature::set_S(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Signature_set_S_mD8491BE0225CF5FEC82804652442E023460B8393_inline (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.Signature::set_V(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Signature_set_V_m6727A9B12FE4BDA7D1F033B3A1B084C7320902BA_inline (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::op_GreaterThanOrEqual(System.Numerics.BigInteger,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThanOrEqual_mC867614569FD633E14E1F9AE662451AEEBA536CF (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, int64_t ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::op_Equality(System.Numerics.BigInteger,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_mC3E68AE3326F7FAC3441A5618537BFB24CD15248 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, int64_t ___right1, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Util.ByteUtil::Merge(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ByteUtil_Merge_m41BF242AC0F125479C873B4C98EEDC3FE7018A14 (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___arrays0, const RuntimeMethod* method) ;
// System.String System.String::PadLeft(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F (String_t* __this, int32_t ___totalWidth0, Il2CppChar ___paddingChar1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.SignedData::get_V()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedData_get_V_mBD8C626B8CF802E879880012D096186E9A1F27D3_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.SignedData::get_R()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedData_get_R_m8B6BD7ADAE981EAEE8B977D5BE43FEBCF56B3DD9_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.SignedData::get_S()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedData_get_S_mC99DA4526CE67078B602CFE1CD223AE9A10F065F_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.Signature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Signature__ctor_m380DD863FBD3F5C076A56B2A4BFC8384C1E3462E (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.SignedData::set_Data(System.Byte[][])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignedData_set_Data_m670AE6C57F16900FE9F2CFA653205C53E0A43DC3_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.SignedData::.ctor(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedData__ctor_m9F1519286F76AF2BF5F258F85E811C978E3889C3 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___data0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.SignedData::set_R(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignedData_set_R_m0297C2DE8C8DFB3926E03ABF77B43D7DEE39B007_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.SignedData::set_S(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignedData_set_S_mF7C601F54F3C18E7B6742E79ABC0674AEC104EA2_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.SignedData::set_V(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignedData_set_V_mF1C4CA0C6F3EA199E4E709B208F09B2DABBC98C5_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.SignedLegacyTransactionBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedLegacyTransactionBase__ctor_mDCA89E6B58A83587BC279ECD1B9C1ACC1E258161 (SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F* __this, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_Parse_m8C6FB2B62154E2EE7C46930C85C120BE977576C4 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.RLPSignedDataHashBuilder::get_RawHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLPSignedDataHashBuilder_get_RawHash_mBDE019C306B735B6FDE62E3A511F60218036EE07 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.RLPSignedDataHashBuilder::SetSignature(Nethereum.Model.ISignature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder_SetSignature_m4FD99F899D0A65D258BA7CFCD0BFCEC5F7CD7949 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, RuntimeObject* ___signature0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.SignedTransaction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedTransaction__ctor_m8D6922DA2F90B0283E10BE57C9BC936E0483EBA6 (SignedTransaction_t397E604239E3BB0594398EFC6813192C24863818* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.SignedTypeTransaction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedTypeTransaction__ctor_mEC60D942420AD0CB87E9DBC3DD0D87CCA1FC22EC (SignedTypeTransaction_tE290AC7A95BAC7772CCC1FCDE1DEE730E316D70B* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.Transaction1559::set_ChainId(System.Numerics.BigInteger)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_ChainId_m1A2B716F5FF9435E5AC12AB1CCF08C10177CE5B5_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.Transaction1559::set_Nonce(System.Nullable`1<System.Numerics.BigInteger>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_Nonce_m83586722A6150A78FDDAFBE06C05071106B6BB69_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.Transaction1559::set_MaxPriorityFeePerGas(System.Nullable`1<System.Numerics.BigInteger>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_MaxPriorityFeePerGas_m406383220249002ECEDDF724133A63329F9CAF72_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.Transaction1559::set_MaxFeePerGas(System.Nullable`1<System.Numerics.BigInteger>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_MaxFeePerGas_m1D1D1C7AC7FB647900838F4F40453A9D29FC0C69_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.Transaction1559::set_GasLimit(System.Nullable`1<System.Numerics.BigInteger>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_GasLimit_m089B2F56386EE6F11AEF2170A2E25F72928806CF_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.Transaction1559::set_ReceiverAddress(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_ReceiverAddress_mC3037E05445DC6D1424F9A47235C49A70AD34A18_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.Transaction1559::set_Amount(System.Nullable`1<System.Numerics.BigInteger>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_Amount_m98DF4CD67DBF0C3D870197371D1D626DA9C58AF1_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.Transaction1559::set_Data(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_Data_m84CAAE87C95387EE9E1656A2796C280E21671676_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.Transaction1559::set_AccessList(System.Collections.Generic.List`1<Nethereum.Model.AccessListItem>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_AccessList_m3813B46F053603B83700013005E7B3BF35D36DA7_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.Transaction1559::.ctor(System.Numerics.BigInteger,System.Nullable`1<System.Numerics.BigInteger>,System.Nullable`1<System.Numerics.BigInteger>,System.Nullable`1<System.Numerics.BigInteger>,System.Nullable`1<System.Numerics.BigInteger>,System.String,System.Nullable`1<System.Numerics.BigInteger>,System.String,System.Collections.Generic.List`1<Nethereum.Model.AccessListItem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559__ctor_mE0EFA1A36A81052017B7A5714C6B53E8836DC962 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___chainId0, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___nonce1, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___maxPriorityFeePerGas2, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___maxFeePerGas3, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___gasLimit4, String_t* ___receiverAddress5, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___amount6, String_t* ___data7, List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* ___accessList8, const RuntimeMethod* method) ;
// Nethereum.Model.Transaction1559Encoder Nethereum.Model.Transaction1559Encoder::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* Transaction1559Encoder_get_Current_m53D7B01460A85290C57CFA9BF2C8AC10476FDAA5_inline (const RuntimeMethod* method) ;
// System.Numerics.BigInteger Nethereum.Model.Transaction1559::get_ChainId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Transaction1559_get_ChainId_mFED7ACF2FED0435904F19950C6C7174DE0DAE1F0_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Model.Transaction1559::get_Nonce()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_Nonce_mFDF11934A2AFC5C084405A0F0FF354A4197EC2EE_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.TransactionTypeEncoder`1<Nethereum.Model.Transaction1559>::GetBigIntegerForEncoding(System.Nullable`1<System.Numerics.BigInteger>)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TransactionTypeEncoder_1_GetBigIntegerForEncoding_mD9C51B6461CD721742082939AD636E87F007802E (TransactionTypeEncoder_1_t171D4067E527B7D87CB7C9663961F22C165080AA* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___value0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (TransactionTypeEncoder_1_t171D4067E527B7D87CB7C9663961F22C165080AA*, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72, const RuntimeMethod*))TransactionTypeEncoder_1_GetBigIntegerForEncoding_mCEF6F62DE74545014F39F1C7672A6DCEA8DCD847_gshared)(__this, ___value0, method);
}
// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Model.Transaction1559::get_MaxPriorityFeePerGas()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_MaxPriorityFeePerGas_mF0DD4E81F8BF05DA24B5AADB86754A1EB239A0FF_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Model.Transaction1559::get_MaxFeePerGas()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_MaxFeePerGas_m76D66F7213EAD582458B2BBF0A03C74E1A99B91E_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Model.Transaction1559::get_GasLimit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_GasLimit_m16ADA6F6F4EE902B3E1226F6376548F31E4C675A_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) ;
// System.String Nethereum.Model.Transaction1559::get_ReceiverAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Transaction1559_get_ReceiverAddress_m3D7A87A2C2B8432E727A502B875C4B19426F9430_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Model.Transaction1559::get_Amount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_Amount_mBF2B1406D7644EC74F85B02A48659D053FDAEF37_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) ;
// System.String Nethereum.Model.Transaction1559::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Transaction1559_get_Data_m4BDA2DA7A2CD6AE69CD8B3E1B0DB9532DF7178D4_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Nethereum.Model.AccessListItem> Nethereum.Model.Transaction1559::get_AccessList()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* Transaction1559_get_AccessList_mC2540EB22043800C36ADD4BD03894507D9242E0D_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.AccessListRLPEncoderDecoder::EncodeAccessList(System.Collections.Generic.List`1<Nethereum.Model.AccessListItem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AccessListRLPEncoderDecoder_EncodeAccessList_m19721FDF07E68C23A8858E899BADC9206D5F9480 (List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* ___accessListItems0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Byte[]> Nethereum.Model.Transaction1559Encoder::GetEncodedElements(Nethereum.Model.Transaction1559)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* Transaction1559Encoder_GetEncodedElements_mBDB068C9A45E537384B69B5ED0D4A61AAE2B7F3F (Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* __this, Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* ___transaction0, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.TransactionTypeEncoder`1<Nethereum.Model.Transaction1559>::AddTypeToEncodedBytes(System.Byte[],System.Byte)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TransactionTypeEncoder_1_AddTypeToEncodedBytes_m631C1792AFBDAFD03A766A8EAF7E974BBACDACA5 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___encodedBytes0, uint8_t ___type1, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uint8_t, const RuntimeMethod*))TransactionTypeEncoder_1_AddTypeToEncodedBytes_mA8EB93FB234D48D5792133C3F2ECD1AE7439251A_gshared)(___encodedBytes0, ___type1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Skip<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline RuntimeObject* Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8 (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_gshared)(___source0, ___count1, method);
}
// System.Collections.Generic.List`1<Nethereum.Model.AccessListItem> Nethereum.Model.AccessListRLPEncoderDecoder::DecodeAccessList(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* AccessListRLPEncoderDecoder_DecodeAccessList_mBD199A722D1D8304BCD69B4E1EA3F53008164E73 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___accessListEncoded0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.Transaction1559::.ctor(System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.String,System.Numerics.BigInteger,System.String,System.Collections.Generic.List`1<Nethereum.Model.AccessListItem>,Nethereum.Model.Signature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559__ctor_m51E1FDA09EE68D2C4D1E4CB045F3AE3ABFF95383 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___chainId0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___nonce1, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___maxPriorityFeePerGas2, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___maxFeePerGas3, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___gasLimit4, String_t* ___receiverAddress5, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___amount6, String_t* ___data7, List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* ___accessList8, Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* ___signature9, const RuntimeMethod* method) ;
// System.Byte Nethereum.Model.TransactionTypeExtensions::AsByte(Nethereum.Model.TransactionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t TransactionTypeExtensions_AsByte_m6F28DCF90590ABCD9F4A1FC31047D7EDAD3AE4A1 (int32_t ___transactionType0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.TransactionTypeEncoder`1<Nethereum.Model.Transaction1559>::.ctor()
inline void TransactionTypeEncoder_1__ctor_m699E9434D752911B41AA410BF4034A081B6FA4BA (TransactionTypeEncoder_1_t171D4067E527B7D87CB7C9663961F22C165080AA* __this, const RuntimeMethod* method)
{
	((  void (*) (TransactionTypeEncoder_1_t171D4067E527B7D87CB7C9663961F22C165080AA*, const RuntimeMethod*))TransactionTypeEncoder_1__ctor_mA2955FAFAC6D155378BAEF96B44772ECE9D34649_gshared)(__this, method);
}
// System.Void Nethereum.Model.Transaction1559Encoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559Encoder__ctor_mBBF96D9C7FAEDF76E8AACF92C12F3BAC9E12135A (Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* __this, const RuntimeMethod* method) ;
// Nethereum.Model.ISignedTransaction Nethereum.Model.TransactionFactory::CreateTransaction(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransactionFactory_CreateTransaction_m45DE1C27BE57FD5AFC1AE4E03613AF93FE65CEC2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rlp0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_IsDefined_m1C9A0C4F54B0538351585FF563A01091A6FE2F28 (Type_t* ___enumType0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, RuntimeObject* ___actualValue1, String_t* ___message2, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Model.TransactionFactory::IsTypeTransaction(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransactionFactory_IsTypeTransaction_m2C8E70392669DAE927529FB507AEC0417D7ABEE8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) ;
// Nethereum.Model.ITransactionTypeDecoder Nethereum.Model.TransactionFactory::GetTransactionTypeDecoder(Nethereum.Model.TransactionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransactionFactory_GetTransactionTypeDecoder_m596A3F6E656B3032549343230FFC372A4709CCAB (int32_t ___transactionType0, const RuntimeMethod* method) ;
// Nethereum.Model.RLPSignedDataHashBuilder Nethereum.Model.SignedLegacyTransaction::CreateDefaultRLPSigner(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* SignedLegacyTransaction_CreateDefaultRLPSigner_m261513FD2424AE44770E3883F359B3B7D8E09FD6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawData0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.LegacyTransaction::.ctor(Nethereum.Model.RLPSignedDataHashBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransaction__ctor_mFEE6BE3FAF1108A23A532417C6D1FED11BE0B064 (LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3* __this, RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* ___rlpSigner0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.LegacyTransactionChainId::.ctor(Nethereum.Model.RLPSignedDataHashBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransactionChainId__ctor_mDD8AC4C8B9B56BFE3F4286A71BDFC50456FB914A (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* ___rlpSigner0, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.LegacyTransactionChainId::.ctor(System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransactionChainId__ctor_m8A14CAA852C74D37FB010A6085E3599C8CCEF839 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___nonce0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___gasPrice1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___gasLimit2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___receiveAddress3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data5, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___chainId6, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r7, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s8, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___v9, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.LegacyTransaction::.ctor(System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransaction__ctor_mDC12B3DF1ED58F1E5619B9E18085BEAD89C2B448 (LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___nonce0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___gasPrice1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___gasLimit2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___receiveAddress3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data5, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r6, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s7, uint8_t ___v8, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850 (int32_t ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Numerics.BigInteger>::GetValueOrDefault()
inline BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Nullable_1_GetValueOrDefault_m402A055BB8683375CFA1162E6BA94902F4F5D29C_inline (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72* __this, const RuntimeMethod* method)
{
	return ((  BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F (*) (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m402A055BB8683375CFA1162E6BA94902F4F5D29C_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Byte>::get_HasValue()
inline bool Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_inline (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505*, const RuntimeMethod*))Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Byte>::GetValueOrDefault()
inline uint8_t Nullable_1_GetValueOrDefault_mE1BD2EC3D88CCEF213FC050F3022BD301B857F61_inline (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mE1BD2EC3D88CCEF213FC050F3022BD301B857F61_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// Nethereum.Model.ISignedTransaction Nethereum.Model.TransactionFactory::Create1559Transaction(System.Nullable`1<System.Numerics.BigInteger>,System.Nullable`1<System.Numerics.BigInteger>,System.Nullable`1<System.Numerics.BigInteger>,System.Nullable`1<System.Numerics.BigInteger>,System.Nullable`1<System.Numerics.BigInteger>,System.String,System.Nullable`1<System.Numerics.BigInteger>,System.String,System.Collections.Generic.List`1<Nethereum.Model.AccessListItem>,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransactionFactory_Create1559Transaction_m9841DDDE0FC56892126113E2BB9B3FB909449EEA (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___chainId0, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___nonce1, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___maxPriorityFeePerGas2, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___maxFeePerGas3, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___gasLimit4, String_t* ___to5, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___amount6, String_t* ___data7, List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* ___accessList8, String_t* ___r9, String_t* ___s10, String_t* ___v11, const RuntimeMethod* method) ;
// Nethereum.Model.ISignedTransaction Nethereum.Model.TransactionFactory::CreateLegacyTransaction(System.String,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.String,System.Numerics.BigInteger,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransactionFactory_CreateLegacyTransaction_mA39960B7206C7920500B77C6D632865EEA18A71E (String_t* ___to0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___gas1, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___gasPrice2, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___amount3, String_t* ___data4, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___nonce5, String_t* ___r6, String_t* ___s7, String_t* ___v8, const RuntimeMethod* method) ;
// System.String System.Nullable`1<System.Byte>::ToString()
inline String_t* Nullable_1_ToString_m920DDEC1CCF5F7B138DCFA3A06F490F290A91665 (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505*, const RuntimeMethod*))Nullable_1_ToString_m920DDEC1CCF5F7B138DCFA3A06F490F290A91665_gshared)(__this, method);
}
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Model.TransactionTypeExtensions::IsTypedTransaction(System.Nullable`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransactionTypeExtensions_IsTypedTransaction_m9E42FD6CF9A540E292177F8A5199141644401F8F (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Byte>::get_Value()
inline uint8_t Nullable_1_get_Value_m467AE36003E64D3A17BE8DEAE0617A8A91C4D299 (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505*, const RuntimeMethod*))Nullable_1_get_Value_m467AE36003E64D3A17BE8DEAE0617A8A91C4D299_gshared)(__this, method);
}
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Int32 Nethereum.Model.VRecoveryAndChainCalculations::GetRecIdFromV(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VRecoveryAndChainCalculations_GetRecIdFromV_m930CB9D6268213A7DA579AC28E1E0126F4231F34 (uint8_t ___v0, const RuntimeMethod* method) ;
// System.String System.Byte::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4 (uint8_t* __this, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Multiply(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Multiply_m2AF82FA0B4750F56C6A5522A54FBFF2C84919EFE (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___right1, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Subtraction(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Subtraction_m91D2E4A4810792046B697F0500B8797F7645FF14 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___right1, const RuntimeMethod* method) ;
// System.Int32 System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_op_Explicit_m381F80B7F65BFEC7F2597DCDB24622F7F32E6848 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Modulus(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Modulus_m3224170883C73BCEC10BC5ACB8ED7C979E43A8CE (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___dividend0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___divisor1, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Division(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Division_mEABFC30E3B59FF3FF53F8CEB65F70D13CD2E64D5 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___dividend0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___divisor1, const RuntimeMethod* method) ;
// System.Int32 Nethereum.Model.VRecoveryAndChainCalculations::GetRecIdFromVChain(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VRecoveryAndChainCalculations_GetRecIdFromVChain_mFCD12CDC4F8AB86CBB82B98179CCB6022301706C (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___vChain0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___chainId1, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Addition(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Addition_m895A3ED96D07E1A6E4AD97483EDC256107A31B12 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___right1, const RuntimeMethod* method) ;
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
// System.String Nethereum.Model.AccessListItem::get_Address()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessListItem_get_Address_m34B6C0590AEBD642BC0A156609AB18A4B8BE01F8 (AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAddressU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.Model.AccessListItem::set_Address(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessListItem_set_Address_m02AC4A9672473673291EC9A307CF8B2B83951820 (AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CAddressU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAddressU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> Nethereum.Model.AccessListItem::get_StorageKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* AccessListItem_get_StorageKeys_m67B0C1F73D53C01564E9D6799DC9AAE6F34584F5 (AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3CStorageKeysU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.Model.AccessListItem::set_StorageKeys(System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessListItem_set_StorageKeys_mC44001373EA02A97D0EBBD554AC47C58CF7C9D9A (AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___value0, const RuntimeMethod* method) 
{
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___value0;
		__this->___U3CStorageKeysU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStorageKeysU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.Model.AccessListItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessListItem__ctor_m9445470FF3EBC4C4A2C830406E6F5010F88B726A (AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_0, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		AccessListItem_set_StorageKeys_mC44001373EA02A97D0EBBD554AC47C58CF7C9D9A_inline(__this, L_0, NULL);
		return;
	}
}
// System.Void Nethereum.Model.AccessListItem::.ctor(System.String,System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessListItem__ctor_m1D79FBF986E5D6B76A63085FDC731401E6C66A5B (AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* __this, String_t* ___address0, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___storageKeys1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___address0;
		AccessListItem_set_Address_m02AC4A9672473673291EC9A307CF8B2B83951820_inline(__this, L_0, NULL);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_1 = ___storageKeys1;
		AccessListItem_set_StorageKeys_mC44001373EA02A97D0EBBD554AC47C58CF7C9D9A_inline(__this, L_1, NULL);
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
// System.Byte[] Nethereum.Model.AccessListRLPEncoderDecoder::EncodeAccessList(System.Collections.Generic.List`1<Nethereum.Model.AccessListItem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AccessListRLPEncoderDecoder_EncodeAccessList_m19721FDF07E68C23A8858E899BADC9206D5F9480 (List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* ___accessListItems0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB314C07EA57C31C2E6917FE2F65042088C804324_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBF68EC84ACDB27C09479EF020E229E82D08315E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE3ADF8014B916CA0E0EE262BAC6A99AE4AD24C2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6B1F2F4C1769A976C20858635DE37816494C6EF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0BB9CF9506246DC1E18A6833CC459D0CE5853907_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* V_0 = NULL;
	Enumerator_tB31FE5AECD7B38818A46E896BEC743AD4D8CF096 V_1;
	memset((&V_1), 0, sizeof(V_1));
	AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* V_2 = NULL;
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* V_3 = NULL;
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* V_4 = NULL;
	Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC V_5;
	memset((&V_5), 0, sizeof(V_5));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	{
		List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* L_0 = ___accessListItems0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* L_1 = ___accessListItems0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m0BB9CF9506246DC1E18A6833CC459D0CE5853907_inline(L_1, List_1_get_Count_m0BB9CF9506246DC1E18A6833CC459D0CE5853907_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001a;
		}
	}

IL_000b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)192));
		return L_4;
	}

IL_001a:
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_5 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_5, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		V_0 = L_5;
		List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* L_6 = ___accessListItems0;
		NullCheck(L_6);
		Enumerator_tB31FE5AECD7B38818A46E896BEC743AD4D8CF096 L_7;
		L_7 = List_1_GetEnumerator_m6B1F2F4C1769A976C20858635DE37816494C6EF1(L_6, List_1_GetEnumerator_m6B1F2F4C1769A976C20858635DE37816494C6EF1_RuntimeMethod_var);
		V_1 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c7:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mB314C07EA57C31C2E6917FE2F65042088C804324((&V_1), Enumerator_Dispose_mB314C07EA57C31C2E6917FE2F65042088C804324_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00b9_1;
			}

IL_002c_1:
			{
				AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* L_8;
				L_8 = Enumerator_get_Current_mE3ADF8014B916CA0E0EE262BAC6A99AE4AD24C2F_inline((&V_1), Enumerator_get_Current_mE3ADF8014B916CA0E0EE262BAC6A99AE4AD24C2F_RuntimeMethod_var);
				V_2 = L_8;
				List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_9 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
				NullCheck(L_9);
				List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_9, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
				V_3 = L_9;
				List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_10 = V_3;
				AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* L_11 = V_2;
				NullCheck(L_11);
				String_t* L_12;
				L_12 = AccessListItem_get_Address_m34B6C0590AEBD642BC0A156609AB18A4B8BE01F8_inline(L_11, NULL);
				il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
				L_13 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_12, NULL);
				il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
				L_14 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_13, NULL);
				NullCheck(L_10);
				List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_10, L_14, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
				List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_15 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
				NullCheck(L_15);
				List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_15, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
				V_4 = L_15;
				AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* L_16 = V_2;
				NullCheck(L_16);
				List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_17;
				L_17 = AccessListItem_get_StorageKeys_m67B0C1F73D53C01564E9D6799DC9AAE6F34584F5_inline(L_16, NULL);
				NullCheck(L_17);
				Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC L_18;
				L_18 = List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D(L_17, List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var);
				V_5 = L_18;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0088_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F((&V_5), Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_007d_2;
					}

IL_0066_2:
					{
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
						L_19 = Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_inline((&V_5), Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var);
						V_6 = L_19;
						List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_20 = V_4;
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_6;
						il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
						L_22 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_21, NULL);
						NullCheck(L_20);
						List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_20, L_22, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
					}

IL_007d_2:
					{
						bool L_23;
						L_23 = Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4((&V_5), Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var);
						if (L_23)
						{
							goto IL_0066_2;
						}
					}
					{
						goto IL_0096_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0096_1:
			{
				List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_24 = V_3;
				List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_25 = V_4;
				NullCheck(L_25);
				ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_26;
				L_26 = List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A(L_25, List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
				L_27 = RLP_EncodeList_m2A2C2A6B4DDA95C331AECF96926B0D9C1B16FE05(L_26, NULL);
				NullCheck(L_24);
				List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_24, L_27, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
				List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_28 = V_0;
				List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_29 = V_3;
				NullCheck(L_29);
				ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_30;
				L_30 = List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A(L_29, List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31;
				L_31 = RLP_EncodeList_m2A2C2A6B4DDA95C331AECF96926B0D9C1B16FE05(L_30, NULL);
				NullCheck(L_28);
				List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_28, L_31, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
			}

IL_00b9_1:
			{
				bool L_32;
				L_32 = Enumerator_MoveNext_mBF68EC84ACDB27C09479EF020E229E82D08315E8((&V_1), Enumerator_MoveNext_mBF68EC84ACDB27C09479EF020E229E82D08315E8_RuntimeMethod_var);
				if (L_32)
				{
					goto IL_002c_1;
				}
			}
			{
				goto IL_00d5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d5:
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_33 = V_0;
		NullCheck(L_33);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_34;
		L_34 = List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A(L_33, List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35;
		L_35 = RLP_EncodeList_m2A2C2A6B4DDA95C331AECF96926B0D9C1B16FE05(L_34, NULL);
		return L_35;
	}
}
// System.Collections.Generic.List`1<Nethereum.Model.AccessListItem> Nethereum.Model.AccessListRLPEncoderDecoder::DecodeAccessList(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* AccessListRLPEncoderDecoder_DecodeAccessList_mBD199A722D1D8304BCD69B4E1EA3F53008164E73 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___accessListEncoded0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB3E5ABD0EBFF0D5435926AC1742BE2787DA3EDBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m972AD6DC207A4D3369326FD26869733B895511E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m01B4358E85EA55FCDB8E7D81F818B525A9BF7E5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCFB0510D50A31CEBE48FA5B0B05722CCBCD195E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB0DD2C91E1EE18AF0585CE424F50F5F98FC97904_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA705A95A8DF13538A2AD962CECFA9C4B351CFD8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* V_0 = NULL;
	Enumerator_t50392BDDA51524CFB345E6E743C3052F6D54CA2D V_1;
	memset((&V_1), 0, sizeof(V_1));
	RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* V_2 = NULL;
	AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* V_3 = NULL;
	Enumerator_t50392BDDA51524CFB345E6E743C3052F6D54CA2D V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___accessListEncoded0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___accessListEncoded0;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___accessListEncoded0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)192)))))
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC*)NULL;
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___accessListEncoded0;
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = RLP_Decode_m25755DBDC9A4DD532BC45B2C9BBBB03E00FA0C33(L_5, NULL);
		List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* L_7 = (List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC*)il2cpp_codegen_object_new(List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_mA705A95A8DF13538A2AD962CECFA9C4B351CFD8D(L_7, List_1__ctor_mA705A95A8DF13538A2AD962CECFA9C4B351CFD8D_RuntimeMethod_var);
		V_0 = L_7;
		NullCheck(((RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6*)CastclassClass((RuntimeObject*)L_6, RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var)));
		Enumerator_t50392BDDA51524CFB345E6E743C3052F6D54CA2D L_8;
		L_8 = List_1_GetEnumerator_mB0DD2C91E1EE18AF0585CE424F50F5F98FC97904(((RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6*)CastclassClass((RuntimeObject*)L_6, RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var)), List_1_GetEnumerator_mB0DD2C91E1EE18AF0585CE424F50F5F98FC97904_RuntimeMethod_var);
		V_1 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b5:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mB3E5ABD0EBFF0D5435926AC1742BE2787DA3EDBE((&V_1), Enumerator_Dispose_mB3E5ABD0EBFF0D5435926AC1742BE2787DA3EDBE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a7_1;
			}

IL_002c_1:
			{
				RuntimeObject* L_9;
				L_9 = Enumerator_get_Current_m01B4358E85EA55FCDB8E7D81F818B525A9BF7E5D_inline((&V_1), Enumerator_get_Current_m01B4358E85EA55FCDB8E7D81F818B525A9BF7E5D_RuntimeMethod_var);
				V_2 = ((RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6*)CastclassClass((RuntimeObject*)L_9, RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var));
				AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* L_10 = (AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A*)il2cpp_codegen_object_new(AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A_il2cpp_TypeInfo_var);
				NullCheck(L_10);
				AccessListItem__ctor_m9445470FF3EBC4C4A2C830406E6F5010F88B726A(L_10, NULL);
				V_3 = L_10;
				AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* L_11 = V_3;
				RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_12 = V_2;
				NullCheck(L_12);
				RuntimeObject* L_13;
				L_13 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_12, 0, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
				NullCheck(L_13);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
				L_14 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_13);
				il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
				String_t* L_15;
				L_15 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_14, (bool)0, NULL);
				NullCheck(L_11);
				AccessListItem_set_Address_m02AC4A9672473673291EC9A307CF8B2B83951820_inline(L_11, L_15, NULL);
				RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_16 = V_2;
				NullCheck(L_16);
				RuntimeObject* L_17;
				L_17 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_16, 1, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
				NullCheck(((RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6*)CastclassClass((RuntimeObject*)L_17, RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var)));
				Enumerator_t50392BDDA51524CFB345E6E743C3052F6D54CA2D L_18;
				L_18 = List_1_GetEnumerator_mB0DD2C91E1EE18AF0585CE424F50F5F98FC97904(((RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6*)CastclassClass((RuntimeObject*)L_17, RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var)), List_1_GetEnumerator_mB0DD2C91E1EE18AF0585CE424F50F5F98FC97904_RuntimeMethod_var);
				V_4 = L_18;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0092_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_mB3E5ABD0EBFF0D5435926AC1742BE2787DA3EDBE((&V_4), Enumerator_Dispose_mB3E5ABD0EBFF0D5435926AC1742BE2787DA3EDBE_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0087_2;
					}

IL_006c_2:
					{
						RuntimeObject* L_19;
						L_19 = Enumerator_get_Current_m01B4358E85EA55FCDB8E7D81F818B525A9BF7E5D_inline((&V_4), Enumerator_get_Current_m01B4358E85EA55FCDB8E7D81F818B525A9BF7E5D_RuntimeMethod_var);
						V_5 = L_19;
						AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* L_20 = V_3;
						NullCheck(L_20);
						List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_21;
						L_21 = AccessListItem_get_StorageKeys_m67B0C1F73D53C01564E9D6799DC9AAE6F34584F5_inline(L_20, NULL);
						RuntimeObject* L_22 = V_5;
						NullCheck(L_22);
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
						L_23 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_22);
						NullCheck(L_21);
						List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_21, L_23, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
					}

IL_0087_2:
					{
						bool L_24;
						L_24 = Enumerator_MoveNext_m972AD6DC207A4D3369326FD26869733B895511E5((&V_4), Enumerator_MoveNext_m972AD6DC207A4D3369326FD26869733B895511E5_RuntimeMethod_var);
						if (L_24)
						{
							goto IL_006c_2;
						}
					}
					{
						goto IL_00a0_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00a0_1:
			{
				List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* L_25 = V_0;
				AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* L_26 = V_3;
				NullCheck(L_25);
				List_1_Add_mCFB0510D50A31CEBE48FA5B0B05722CCBCD195E1_inline(L_25, L_26, List_1_Add_mCFB0510D50A31CEBE48FA5B0B05722CCBCD195E1_RuntimeMethod_var);
			}

IL_00a7_1:
			{
				bool L_27;
				L_27 = Enumerator_MoveNext_m972AD6DC207A4D3369326FD26869733B895511E5((&V_1), Enumerator_MoveNext_m972AD6DC207A4D3369326FD26869733B895511E5_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_002c_1;
				}
			}
			{
				goto IL_00c3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c3:
	{
		List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* L_28 = V_0;
		return L_28;
	}
}
// System.Void Nethereum.Model.AccessListRLPEncoderDecoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessListRLPEncoderDecoder__ctor_m72295EA6D7FB41822ABB2A1BC579C9EBE8033D83 (AccessListRLPEncoderDecoder_t455694E3CCD3D5EEC37355AA89120754DF14D9A4* __this, const RuntimeMethod* method) 
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
// System.Byte[] Nethereum.Model.AccountStorage::EncodeKeyForStorage(System.Byte[],Nethereum.Util.HashProviders.Sha3KeccackHashProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AccountStorage_EncodeKeyForStorage_mE3C073B63E9A4C37165D4DED4AA4AD4308B5FFCA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5* ___sha3Provider1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteUtil_t3970634EEB0967A65636D41F893596448593FE44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___key0;
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(ByteUtil_t3970634EEB0967A65636D41F893596448593FE44_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = ByteUtil_PadTo32Bytes_mA9517B3EA8C0CFEC22F531524A26013E5D8F9F4B(L_1, NULL);
		V_0 = L_2;
		Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5* L_3 = ___sha3Provider1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Sha3KeccackHashProvider_ComputeHash_m358C5EE615F4FC68C40C040A2E0A0E9A59D952CD(L_3, L_4, NULL);
		return L_5;
	}
}
// System.Byte[] Nethereum.Model.AccountStorage::EncodeValueForStorage(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AccountStorage_EncodeValueForStorage_m7BB76C1FD6B72C2577978174AACDCAFE723E55DA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_0, NULL);
		return L_1;
	}
}
// System.Void Nethereum.Model.AccountStorage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountStorage__ctor_m4362ED70FF76C5740C762D9EF9E279361F2E265E (AccountStorage_tB2733A97F532D5F96ADEA2D83A68375F955E098B* __this, const RuntimeMethod* method) 
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
// System.Numerics.BigInteger Nethereum.Model.Account::get_Nonce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Account_get_Nonce_m7A627E28D7F7629FAB6196916B1FA4EDAEDA5219 (Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->___U3CNonceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.Model.Account::set_Nonce(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account_set_Nonce_mF78539118A7B9C0534BC429CBEE300D933EBD42A (Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___value0;
		__this->___U3CNonceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CNonceU3Ek__BackingField_0))->____bits_1), (void*)NULL);
		return;
	}
}
// System.Numerics.BigInteger Nethereum.Model.Account::get_Balance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Account_get_Balance_m72FC1090ACBB3A710F25E485628B6FD996847A23 (Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->___U3CBalanceU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.Model.Account::set_Balance(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account_set_Balance_m63367A3C6513073461E4D78A8DBA23A5573F62AD (Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___value0;
		__this->___U3CBalanceU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CBalanceU3Ek__BackingField_1))->____bits_1), (void*)NULL);
		return;
	}
}
// System.Byte[] Nethereum.Model.Account::get_StateRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Account_get_StateRoot_mB52D66E701BE1FBD4E68A48C71A2B2ACB9EDEA5E (Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CStateRootU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Nethereum.Model.Account::set_StateRoot(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account_set_StateRoot_m407565197BD4B050E841032EFB12089420582637 (Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CStateRootU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStateRootU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Byte[] Nethereum.Model.Account::get_CodeHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Account_get_CodeHash_mA002CB1FAC603EFBC31CC3D18F032EA70BD99708 (Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CCodeHashU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Nethereum.Model.Account::set_CodeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account_set_CodeHash_mFB21C64C3CBEA71FAD10B9460B96805785C2E09C (Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CCodeHashU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCodeHashU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.Model.Account::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account__ctor_mFBC9C5F2215B6B4E77DBA4A042780A7BC840D7CB (Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_TRIE_HASH_4;
		__this->___U3CStateRootU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStateRootU3Ek__BackingField_2), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_DATA_HASH_3;
		__this->___U3CCodeHashU3Ek__BackingField_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCodeHashU3Ek__BackingField_3), (void*)L_1);
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
// Nethereum.Model.AccountEncoder Nethereum.Model.AccountEncoder::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9* AccountEncoder_get_Current_mEF4220F456C2F8A821B0AC9C767164FCC6AD2C61 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9_il2cpp_TypeInfo_var);
		AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9* L_0 = ((AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9_StaticFields*)il2cpp_codegen_static_fields_for(AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Byte[] Nethereum.Model.AccountEncoder::Encode(Nethereum.Model.Account)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AccountEncoder_Encode_m8B2D014BAC9C65F0F0CD6DA1021FDFC668444038 (AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9* __this, Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* ___account0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_1 = L_0;
		Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* L_2 = ___account0;
		NullCheck(L_2);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = Account_get_Nonce_m7A627E28D7F7629FAB6196916B1FA4EDAEDA5219_inline(L_2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_3, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_4);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_5 = L_1;
		Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* L_6 = ___account0;
		NullCheck(L_6);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7;
		L_7 = Account_get_Balance_m72FC1090ACBB3A710F25E485628B6FD996847A23_inline(L_6, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_7, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_8);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_9 = L_5;
		Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* L_10 = ___account0;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = Account_get_StateRoot_mB52D66E701BE1FBD4E68A48C71A2B2ACB9EDEA5E_inline(L_10, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_11);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_12 = L_9;
		Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* L_13 = ___account0;
		NullCheck(L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = Account_get_CodeHash_mA002CB1FAC603EFBC31CC3D18F032EA70BD99708_inline(L_13, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_14);
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = RLP_EncodeDataItemsAsElementOrListAndCombineAsList_m03BF5928F42FA0AE887AF871B1D36202A3A6D791(L_12, (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL, NULL);
		return L_15;
	}
}
// Nethereum.Model.Account Nethereum.Model.AccountEncoder::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* AccountEncoder_Decode_m4273270E42705813794429ED678F080C5684FE31 (AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawdata0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___rawdata0;
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = RLP_Decode_m25755DBDC9A4DD532BC45B2C9BBBB03E00FA0C33(L_0, NULL);
		V_0 = ((RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6*)CastclassClass((RuntimeObject*)L_1, RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var));
		Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* L_2 = (Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E*)il2cpp_codegen_object_new(Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Account__ctor_mFBC9C5F2215B6B4E77DBA4A042780A7BC840D7CB(L_2, NULL);
		Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* L_3 = L_2;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_4, 0, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_5);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7;
		L_7 = ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mAD7F985D3961A7070872967A541A414B9B5D13ED(L_6, NULL);
		NullCheck(L_3);
		Account_set_Nonce_mF78539118A7B9C0534BC429CBEE300D933EBD42A_inline(L_3, L_7, NULL);
		Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* L_8 = L_3;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_9, 1, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_10);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_12;
		L_12 = ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mAD7F985D3961A7070872967A541A414B9B5D13ED(L_11, NULL);
		NullCheck(L_8);
		Account_set_Balance_m63367A3C6513073461E4D78A8DBA23A5573F62AD_inline(L_8, L_12, NULL);
		Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* L_13 = L_8;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_14 = V_0;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_14, 2, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_13);
		Account_set_StateRoot_m407565197BD4B050E841032EFB12089420582637_inline(L_13, L_16, NULL);
		Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* L_17 = L_13;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_18 = V_0;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_18, 3, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_19);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
		L_20 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_19);
		NullCheck(L_17);
		Account_set_CodeHash_mFB21C64C3CBEA71FAD10B9460B96805785C2E09C_inline(L_17, L_20, NULL);
		return L_17;
	}
}
// System.Void Nethereum.Model.AccountEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountEncoder__ctor_mFAACA3386FD4E175254A424CC480419230F4F11A (AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Nethereum.Model.AccountEncoder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountEncoder__cctor_mE1862C0F3A8BA8B682B1EC54EA4402583FAF5409 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9* L_0 = (AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9*)il2cpp_codegen_object_new(AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AccountEncoder__ctor_mFAACA3386FD4E175254A424CC480419230F4F11A(L_0, NULL);
		((AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9_StaticFields*)il2cpp_codegen_static_fields_for(AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9_StaticFields*)il2cpp_codegen_static_fields_for(AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField_0), (void*)L_0);
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
// System.Byte[] Nethereum.Model.BlockHeader::get_ParentHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeader_get_ParentHash_mD09AFC6B6C0A59D14BAA739047EE9187485033B2 (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CParentHashU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.Model.BlockHeader::set_ParentHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockHeader_set_ParentHash_m3544C8D5C367E7D5C0BF971BECF75364E2A449E0 (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CParentHashU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParentHashU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Byte[] Nethereum.Model.BlockHeader::get_UnclesHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeader_get_UnclesHash_mC369A310077A836F8C7813A81E7152D7EBEBBCC7 (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CUnclesHashU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.Model.BlockHeader::set_UnclesHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockHeader_set_UnclesHash_m4BFB158D24853CB73F74E049DEBC9BDCAE010711 (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CUnclesHashU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUnclesHashU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Nethereum.Model.BlockHeader::get_Coinbase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BlockHeader_get_Coinbase_m5382AA5D7520BAA1F29E856950F113BB5A695A05 (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CCoinbaseU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Nethereum.Model.BlockHeader::set_Coinbase(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockHeader_set_Coinbase_m6A4E6DBD82B66997878DEAFCC0A4A79297C65343 (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CCoinbaseU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCoinbaseU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Byte[] Nethereum.Model.BlockHeader::get_StateRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeader_get_StateRoot_mB49452F2707E51BEFA3098C765CC07B212EA1BFD (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CStateRootU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Nethereum.Model.BlockHeader::set_StateRoot(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockHeader_set_StateRoot_m44264C1F32131C34F88F20A86EA95AB3E93906C8 (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CStateRootU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStateRootU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Byte[] Nethereum.Model.BlockHeader::get_TransactionsHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeader_get_TransactionsHash_mA14ED72B316456A7DA70674CFA45FB614BE6D052 (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CTransactionsHashU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Nethereum.Model.BlockHeader::set_TransactionsHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockHeader_set_TransactionsHash_mB0FBEB59E6219F2575BE2A132695C2651EBC110F (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CTransactionsHashU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTransactionsHashU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Byte[] Nethereum.Model.BlockHeader::get_ReceiptHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeader_get_ReceiptHash_m601349219B610EA247E77C71989580827E9D6155 (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CReceiptHashU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Nethereum.Model.BlockHeader::set_ReceiptHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockHeader_set_ReceiptHash_m008A4438451481B963F925C22CFB1BBCF10816F8 (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CReceiptHashU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReceiptHashU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Numerics.BigInteger Nethereum.Model.BlockHeader::get_BlockNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BlockHeader_get_BlockNumber_m0DC83E04F6F0F2819D602E42C8AA586F89981B89 (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->___U3CBlockNumberU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Nethereum.Model.BlockHeader::set_BlockNumber(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockHeader_set_BlockNumber_m20C1879A0E9C8051E908608C9C58584ED46A0CB7 (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___value0;
		__this->___U3CBlockNumberU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CBlockNumberU3Ek__BackingField_6))->____bits_1), (void*)NULL);
		return;
	}
}
// System.Byte[] Nethereum.Model.BlockHeader::get_LogsBloom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeader_get_LogsBloom_m8ECB925ACF13C4B08366C8BD7D1DB7AD79587CC2 (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CLogsBloomU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Nethereum.Model.BlockHeader::set_LogsBloom(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockHeader_set_LogsBloom_m36794ED0B4FB02FE67805DE4F8DCD8EF2F76D429 (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CLogsBloomU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLogsBloomU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Numerics.BigInteger Nethereum.Model.BlockHeader::get_Difficulty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BlockHeader_get_Difficulty_m3FB7AC6E712CECA3AC8AE8AA889BD5096645560C (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->___U3CDifficultyU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Nethereum.Model.BlockHeader::set_Difficulty(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockHeader_set_Difficulty_mDBC375C45A9753448B08188FAF275455DCB86911 (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___value0;
		__this->___U3CDifficultyU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CDifficultyU3Ek__BackingField_8))->____bits_1), (void*)NULL);
		return;
	}
}
// System.Int64 Nethereum.Model.BlockHeader::get_Timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BlockHeader_get_Timestamp_m8BC5D0906E650F8218B340228F36609DA1F792CA (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CTimestampU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Nethereum.Model.BlockHeader::set_Timestamp(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockHeader_set_Timestamp_mAAB7D498005A69025A0E8088C80D4F5B7459CE92 (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		__this->___U3CTimestampU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Int64 Nethereum.Model.BlockHeader::get_GasLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BlockHeader_get_GasLimit_mB3CABF0F4F03B6FDA626CAC59B5A549E84455062 (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CGasLimitU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Nethereum.Model.BlockHeader::set_GasLimit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockHeader_set_GasLimit_m5D124AC1B06BEA9A6F5158439B7A08B23DFBC1A1 (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		__this->___U3CGasLimitU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Int64 Nethereum.Model.BlockHeader::get_GasUsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BlockHeader_get_GasUsed_mDFD81A5827A38B40429AAC2265998EBF568C558B (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CGasUsedU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void Nethereum.Model.BlockHeader::set_GasUsed(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockHeader_set_GasUsed_mD15EFF3F1EB909E2FB43E34E624B96BE31CC8A6C (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		__this->___U3CGasUsedU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Byte[] Nethereum.Model.BlockHeader::get_MixHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeader_get_MixHash_m31F008787399E24AE508492F3B48E38404605774 (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CMixHashU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void Nethereum.Model.BlockHeader::set_MixHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockHeader_set_MixHash_mB28EC358A7C54B981C16209505AEFF98DE3B185D (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CMixHashU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMixHashU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
// System.Byte[] Nethereum.Model.BlockHeader::get_ExtraData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeader_get_ExtraData_m8BE7E056B3401DE5E987EBD9D0BCD5A7D4599900 (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CExtraDataU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Nethereum.Model.BlockHeader::set_ExtraData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockHeader_set_ExtraData_m803FEC4A93D5203511EC702AD6C3D2358D0CBC62 (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CExtraDataU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExtraDataU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
// System.Byte[] Nethereum.Model.BlockHeader::get_Nonce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeader_get_Nonce_mE68FEFB68F47B6DA1F527BC99CA3AF123E37F972 (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CNonceU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Void Nethereum.Model.BlockHeader::set_Nonce(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockHeader_set_Nonce_m8ABAD0FF0F65C698FF383A31999311B050762157 (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CNonceU3Ek__BackingField_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNonceU3Ek__BackingField_14), (void*)L_0);
		return;
	}
}
// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Model.BlockHeader::get_BaseFee()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 BlockHeader_get_BaseFee_m4A4473059F978BE88F48490A63865313A3D27BF8 (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = __this->___U3CBaseFeeU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void Nethereum.Model.BlockHeader::set_BaseFee(System.Nullable`1<System.Numerics.BigInteger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockHeader_set_BaseFee_m53937185E9CA21B70B27FBD716A24364677D7954 (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = ___value0;
		__this->___U3CBaseFeeU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CBaseFeeU3Ek__BackingField_15))->___value_1))->____bits_1), (void*)NULL);
		return;
	}
}
// System.Void Nethereum.Model.BlockHeader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockHeader__ctor_m22DF377A4C8EA8D9DE920E0F745FF19141001424 (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
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
// Nethereum.Model.BlockHeaderEncoder Nethereum.Model.BlockHeaderEncoder::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlockHeaderEncoder_t164729660F29BD9778128CB2C0134D759C9390FF* BlockHeaderEncoder_get_Current_mD7DA288A4F75D1289889103D337DC0D130B74AB7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlockHeaderEncoder_t164729660F29BD9778128CB2C0134D759C9390FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BlockHeaderEncoder_t164729660F29BD9778128CB2C0134D759C9390FF_il2cpp_TypeInfo_var);
		BlockHeaderEncoder_t164729660F29BD9778128CB2C0134D759C9390FF* L_0 = ((BlockHeaderEncoder_t164729660F29BD9778128CB2C0134D759C9390FF_StaticFields*)il2cpp_codegen_static_fields_for(BlockHeaderEncoder_t164729660F29BD9778128CB2C0134D759C9390FF_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Byte[] Nethereum.Model.BlockHeaderEncoder::EncodeCliqueSigHeaderAndHash(Nethereum.Model.BlockHeader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeaderEncoder_EncodeCliqueSigHeaderAndHash_m614E3494A8C027A765F9C8AFCD0A022920DB2593 (BlockHeaderEncoder_t164729660F29BD9778128CB2C0134D759C9390FF* __this, BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* ___header0, bool ___legacyMode1, const RuntimeMethod* method) 
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
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_1 = ___header0;
		bool L_2 = ___legacyMode1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = BlockHeaderEncoder_EncodeCliqueSigHeader_m61CCF3B3493EB7AA7C1AF330A3094F8455AA9F21(__this, L_1, L_2, NULL);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = Sha3Keccack_CalculateHash_mE94324F2BF9D80A18C59A08CF5F0735B78ECAAA0(L_0, L_3, NULL);
		return L_4;
	}
}
// System.Byte[] Nethereum.Model.BlockHeaderEncoder::EncodeCliqueSigHeader(Nethereum.Model.BlockHeader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeaderEncoder_EncodeCliqueSigHeader_m61CCF3B3493EB7AA7C1AF330A3094F8455AA9F21 (BlockHeaderEncoder_t164729660F29BD9778128CB2C0134D759C9390FF* __this, BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* ___header0, bool ___legacyMode1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Take_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m0919EA050297104B260DB970151A823245F74A6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m5D4AFF8301193978BFBA2F1470C7BCF86A8BCCAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0 = ___legacyMode1;
		if (L_0)
		{
			goto IL_00fe;
		}
	}
	{
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_1 = ___header0;
		NullCheck(L_1);
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_2;
		L_2 = BlockHeader_get_BaseFee_m4A4473059F978BE88F48490A63865313A3D27BF8_inline(L_1, NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_inline((&V_0), Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_00fe;
		}
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_4 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_5 = L_4;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_6 = ___header0;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = BlockHeader_get_ParentHash_mD09AFC6B6C0A59D14BAA739047EE9187485033B2_inline(L_6, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_7);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_8 = L_5;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_9 = ___header0;
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = BlockHeader_get_UnclesHash_mC369A310077A836F8C7813A81E7152D7EBEBBCC7_inline(L_9, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_10);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_11 = L_8;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_12 = ___header0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = BlockHeader_get_Coinbase_m5382AA5D7520BAA1F29E856950F113BB5A695A05_inline(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_13, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_14);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_15 = L_11;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_16 = ___header0;
		NullCheck(L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = BlockHeader_get_StateRoot_mB49452F2707E51BEFA3098C765CC07B212EA1BFD_inline(L_16, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_17);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_18 = L_15;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_19 = ___header0;
		NullCheck(L_19);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
		L_20 = BlockHeader_get_TransactionsHash_mA14ED72B316456A7DA70674CFA45FB614BE6D052_inline(L_19, NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_20);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_21 = L_18;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_22 = ___header0;
		NullCheck(L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = BlockHeader_get_ReceiptHash_m601349219B610EA247E77C71989580827E9D6155_inline(L_22, NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_23);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_24 = L_21;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_25 = ___header0;
		NullCheck(L_25);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
		L_26 = BlockHeader_get_LogsBloom_m8ECB925ACF13C4B08366C8BD7D1DB7AD79587CC2_inline(L_25, NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(6), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_26);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_27 = L_24;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_28 = ___header0;
		NullCheck(L_28);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_29;
		L_29 = BlockHeader_get_Difficulty_m3FB7AC6E712CECA3AC8AE8AA889BD5096645560C_inline(L_28, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30;
		L_30 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_29, NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(7), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_30);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_31 = L_27;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_32 = ___header0;
		NullCheck(L_32);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_33;
		L_33 = BlockHeader_get_BlockNumber_m0DC83E04F6F0F2819D602E42C8AA586F89981B89_inline(L_32, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34;
		L_34 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_33, NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_34);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(8), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_34);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_35 = L_31;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_36 = ___header0;
		NullCheck(L_36);
		int64_t L_37;
		L_37 = BlockHeader_get_GasLimit_mB3CABF0F4F03B6FDA626CAC59B5A549E84455062_inline(L_36, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38;
		L_38 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_m6AD343E741D49F00EF0AB8F671EF6582DFDCEAA4(L_37, NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_38);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_38);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_39 = L_35;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_40 = ___header0;
		NullCheck(L_40);
		int64_t L_41;
		L_41 = BlockHeader_get_GasUsed_mDFD81A5827A38B40429AAC2265998EBF568C558B_inline(L_40, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42;
		L_42 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_m6AD343E741D49F00EF0AB8F671EF6582DFDCEAA4(L_41, NULL);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_42);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_42);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_43 = L_39;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_44 = ___header0;
		NullCheck(L_44);
		int64_t L_45;
		L_45 = BlockHeader_get_Timestamp_m8BC5D0906E650F8218B340228F36609DA1F792CA_inline(L_44, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46;
		L_46 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_m6AD343E741D49F00EF0AB8F671EF6582DFDCEAA4(L_45, NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_46);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_46);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_47 = L_43;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_48 = ___header0;
		NullCheck(L_48);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49;
		L_49 = BlockHeader_get_ExtraData_m8BE7E056B3401DE5E987EBD9D0BCD5A7D4599900_inline(L_48, NULL);
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_50 = ___header0;
		NullCheck(L_50);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51;
		L_51 = BlockHeader_get_ExtraData_m8BE7E056B3401DE5E987EBD9D0BCD5A7D4599900_inline(L_50, NULL);
		NullCheck(L_51);
		RuntimeObject* L_52;
		L_52 = Enumerable_Take_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m0919EA050297104B260DB970151A823245F74A6D((RuntimeObject*)L_49, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_51)->max_length)), ((int32_t)65))), Enumerable_Take_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m0919EA050297104B260DB970151A823245F74A6D_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53;
		L_53 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_52, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_53);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_53);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_54 = L_47;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_55 = ___header0;
		NullCheck(L_55);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56;
		L_56 = BlockHeader_get_MixHash_m31F008787399E24AE508492F3B48E38404605774_inline(L_55, NULL);
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_56);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_56);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_57 = L_54;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_58 = ___header0;
		NullCheck(L_58);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59;
		L_59 = BlockHeader_get_Nonce_mE68FEFB68F47B6DA1F527BC99CA3AF123E37F972_inline(L_58, NULL);
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_59);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_59);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_60 = L_57;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_61 = ___header0;
		NullCheck(L_61);
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_62;
		L_62 = BlockHeader_get_BaseFee_m4A4473059F978BE88F48490A63865313A3D27BF8_inline(L_61, NULL);
		V_0 = L_62;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_63;
		L_63 = Nullable_1_get_Value_m5D4AFF8301193978BFBA2F1470C7BCF86A8BCCAE((&V_0), Nullable_1_get_Value_m5D4AFF8301193978BFBA2F1470C7BCF86A8BCCAE_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64;
		L_64 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_63, NULL);
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_64);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_64);
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65;
		L_65 = RLP_EncodeDataItemsAsElementOrListAndCombineAsList_m03BF5928F42FA0AE887AF871B1D36202A3A6D791(L_60, (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL, NULL);
		return L_65;
	}

IL_00fe:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_66 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_67 = L_66;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_68 = ___header0;
		NullCheck(L_68);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69;
		L_69 = BlockHeader_get_ParentHash_mD09AFC6B6C0A59D14BAA739047EE9187485033B2_inline(L_68, NULL);
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_69);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(0), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_69);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_70 = L_67;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_71 = ___header0;
		NullCheck(L_71);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72;
		L_72 = BlockHeader_get_UnclesHash_mC369A310077A836F8C7813A81E7152D7EBEBBCC7_inline(L_71, NULL);
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, L_72);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(1), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_72);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_73 = L_70;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_74 = ___header0;
		NullCheck(L_74);
		String_t* L_75;
		L_75 = BlockHeader_get_Coinbase_m5382AA5D7520BAA1F29E856950F113BB5A695A05_inline(L_74, NULL);
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76;
		L_76 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_75, NULL);
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, L_76);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(2), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_76);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_77 = L_73;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_78 = ___header0;
		NullCheck(L_78);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79;
		L_79 = BlockHeader_get_StateRoot_mB49452F2707E51BEFA3098C765CC07B212EA1BFD_inline(L_78, NULL);
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, L_79);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(3), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_79);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_80 = L_77;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_81 = ___header0;
		NullCheck(L_81);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82;
		L_82 = BlockHeader_get_TransactionsHash_mA14ED72B316456A7DA70674CFA45FB614BE6D052_inline(L_81, NULL);
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, L_82);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(4), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_82);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_83 = L_80;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_84 = ___header0;
		NullCheck(L_84);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85;
		L_85 = BlockHeader_get_ReceiptHash_m601349219B610EA247E77C71989580827E9D6155_inline(L_84, NULL);
		NullCheck(L_83);
		ArrayElementTypeCheck (L_83, L_85);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(5), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_85);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_86 = L_83;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_87 = ___header0;
		NullCheck(L_87);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88;
		L_88 = BlockHeader_get_LogsBloom_m8ECB925ACF13C4B08366C8BD7D1DB7AD79587CC2_inline(L_87, NULL);
		NullCheck(L_86);
		ArrayElementTypeCheck (L_86, L_88);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(6), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_88);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_89 = L_86;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_90 = ___header0;
		NullCheck(L_90);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_91;
		L_91 = BlockHeader_get_Difficulty_m3FB7AC6E712CECA3AC8AE8AA889BD5096645560C_inline(L_90, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92;
		L_92 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_91, NULL);
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, L_92);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(7), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_92);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_93 = L_89;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_94 = ___header0;
		NullCheck(L_94);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_95;
		L_95 = BlockHeader_get_BlockNumber_m0DC83E04F6F0F2819D602E42C8AA586F89981B89_inline(L_94, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96;
		L_96 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_95, NULL);
		NullCheck(L_93);
		ArrayElementTypeCheck (L_93, L_96);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(8), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_96);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_97 = L_93;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_98 = ___header0;
		NullCheck(L_98);
		int64_t L_99;
		L_99 = BlockHeader_get_GasLimit_mB3CABF0F4F03B6FDA626CAC59B5A549E84455062_inline(L_98, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100;
		L_100 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_m6AD343E741D49F00EF0AB8F671EF6582DFDCEAA4(L_99, NULL);
		NullCheck(L_97);
		ArrayElementTypeCheck (L_97, L_100);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_100);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_101 = L_97;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_102 = ___header0;
		NullCheck(L_102);
		int64_t L_103;
		L_103 = BlockHeader_get_GasUsed_mDFD81A5827A38B40429AAC2265998EBF568C558B_inline(L_102, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104;
		L_104 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_m6AD343E741D49F00EF0AB8F671EF6582DFDCEAA4(L_103, NULL);
		NullCheck(L_101);
		ArrayElementTypeCheck (L_101, L_104);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_104);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_105 = L_101;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_106 = ___header0;
		NullCheck(L_106);
		int64_t L_107;
		L_107 = BlockHeader_get_Timestamp_m8BC5D0906E650F8218B340228F36609DA1F792CA_inline(L_106, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_108;
		L_108 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_m6AD343E741D49F00EF0AB8F671EF6582DFDCEAA4(L_107, NULL);
		NullCheck(L_105);
		ArrayElementTypeCheck (L_105, L_108);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_108);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_109 = L_105;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_110 = ___header0;
		NullCheck(L_110);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_111;
		L_111 = BlockHeader_get_ExtraData_m8BE7E056B3401DE5E987EBD9D0BCD5A7D4599900_inline(L_110, NULL);
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_112 = ___header0;
		NullCheck(L_112);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_113;
		L_113 = BlockHeader_get_ExtraData_m8BE7E056B3401DE5E987EBD9D0BCD5A7D4599900_inline(L_112, NULL);
		NullCheck(L_113);
		RuntimeObject* L_114;
		L_114 = Enumerable_Take_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m0919EA050297104B260DB970151A823245F74A6D((RuntimeObject*)L_111, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_113)->max_length)), ((int32_t)65))), Enumerable_Take_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m0919EA050297104B260DB970151A823245F74A6D_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_115;
		L_115 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_114, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		NullCheck(L_109);
		ArrayElementTypeCheck (L_109, L_115);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_115);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_116 = L_109;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_117 = ___header0;
		NullCheck(L_117);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_118;
		L_118 = BlockHeader_get_MixHash_m31F008787399E24AE508492F3B48E38404605774_inline(L_117, NULL);
		NullCheck(L_116);
		ArrayElementTypeCheck (L_116, L_118);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_118);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_119 = L_116;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_120 = ___header0;
		NullCheck(L_120);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_121;
		L_121 = BlockHeader_get_Nonce_mE68FEFB68F47B6DA1F527BC99CA3AF123E37F972_inline(L_120, NULL);
		NullCheck(L_119);
		ArrayElementTypeCheck (L_119, L_121);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_121);
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_122;
		L_122 = RLP_EncodeDataItemsAsElementOrListAndCombineAsList_m03BF5928F42FA0AE887AF871B1D36202A3A6D791(L_119, (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL, NULL);
		return L_122;
	}
}
// System.Byte[] Nethereum.Model.BlockHeaderEncoder::Encode(Nethereum.Model.BlockHeader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeaderEncoder_Encode_m611F3E693A8B5A0E4138C3A06363B905CAB9FBCC (BlockHeaderEncoder_t164729660F29BD9778128CB2C0134D759C9390FF* __this, BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* ___header0, bool ___legacyMode1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m5D4AFF8301193978BFBA2F1470C7BCF86A8BCCAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0 = ___legacyMode1;
		if (L_0)
		{
			goto IL_00e9;
		}
	}
	{
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_1 = ___header0;
		NullCheck(L_1);
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_2;
		L_2 = BlockHeader_get_BaseFee_m4A4473059F978BE88F48490A63865313A3D27BF8_inline(L_1, NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_inline((&V_0), Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_00e9;
		}
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_4 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_5 = L_4;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_6 = ___header0;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = BlockHeader_get_ParentHash_mD09AFC6B6C0A59D14BAA739047EE9187485033B2_inline(L_6, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_7);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_8 = L_5;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_9 = ___header0;
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = BlockHeader_get_UnclesHash_mC369A310077A836F8C7813A81E7152D7EBEBBCC7_inline(L_9, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_10);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_11 = L_8;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_12 = ___header0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = BlockHeader_get_Coinbase_m5382AA5D7520BAA1F29E856950F113BB5A695A05_inline(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_13, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_14);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_15 = L_11;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_16 = ___header0;
		NullCheck(L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = BlockHeader_get_StateRoot_mB49452F2707E51BEFA3098C765CC07B212EA1BFD_inline(L_16, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_17);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_18 = L_15;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_19 = ___header0;
		NullCheck(L_19);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
		L_20 = BlockHeader_get_TransactionsHash_mA14ED72B316456A7DA70674CFA45FB614BE6D052_inline(L_19, NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_20);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_21 = L_18;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_22 = ___header0;
		NullCheck(L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = BlockHeader_get_ReceiptHash_m601349219B610EA247E77C71989580827E9D6155_inline(L_22, NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_23);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_24 = L_21;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_25 = ___header0;
		NullCheck(L_25);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
		L_26 = BlockHeader_get_LogsBloom_m8ECB925ACF13C4B08366C8BD7D1DB7AD79587CC2_inline(L_25, NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(6), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_26);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_27 = L_24;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_28 = ___header0;
		NullCheck(L_28);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_29;
		L_29 = BlockHeader_get_Difficulty_m3FB7AC6E712CECA3AC8AE8AA889BD5096645560C_inline(L_28, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30;
		L_30 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_29, NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(7), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_30);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_31 = L_27;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_32 = ___header0;
		NullCheck(L_32);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_33;
		L_33 = BlockHeader_get_BlockNumber_m0DC83E04F6F0F2819D602E42C8AA586F89981B89_inline(L_32, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34;
		L_34 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_33, NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_34);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(8), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_34);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_35 = L_31;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_36 = ___header0;
		NullCheck(L_36);
		int64_t L_37;
		L_37 = BlockHeader_get_GasLimit_mB3CABF0F4F03B6FDA626CAC59B5A549E84455062_inline(L_36, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38;
		L_38 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_m6AD343E741D49F00EF0AB8F671EF6582DFDCEAA4(L_37, NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_38);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_38);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_39 = L_35;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_40 = ___header0;
		NullCheck(L_40);
		int64_t L_41;
		L_41 = BlockHeader_get_GasUsed_mDFD81A5827A38B40429AAC2265998EBF568C558B_inline(L_40, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42;
		L_42 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_m6AD343E741D49F00EF0AB8F671EF6582DFDCEAA4(L_41, NULL);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_42);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_42);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_43 = L_39;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_44 = ___header0;
		NullCheck(L_44);
		int64_t L_45;
		L_45 = BlockHeader_get_Timestamp_m8BC5D0906E650F8218B340228F36609DA1F792CA_inline(L_44, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46;
		L_46 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_m6AD343E741D49F00EF0AB8F671EF6582DFDCEAA4(L_45, NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_46);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_46);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_47 = L_43;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_48 = ___header0;
		NullCheck(L_48);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49;
		L_49 = BlockHeader_get_ExtraData_m8BE7E056B3401DE5E987EBD9D0BCD5A7D4599900_inline(L_48, NULL);
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_49);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_49);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_50 = L_47;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_51 = ___header0;
		NullCheck(L_51);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52;
		L_52 = BlockHeader_get_MixHash_m31F008787399E24AE508492F3B48E38404605774_inline(L_51, NULL);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_52);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_52);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_53 = L_50;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_54 = ___header0;
		NullCheck(L_54);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55;
		L_55 = BlockHeader_get_Nonce_mE68FEFB68F47B6DA1F527BC99CA3AF123E37F972_inline(L_54, NULL);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_55);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_55);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_56 = L_53;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_57 = ___header0;
		NullCheck(L_57);
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_58;
		L_58 = BlockHeader_get_BaseFee_m4A4473059F978BE88F48490A63865313A3D27BF8_inline(L_57, NULL);
		V_0 = L_58;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_59;
		L_59 = Nullable_1_get_Value_m5D4AFF8301193978BFBA2F1470C7BCF86A8BCCAE((&V_0), Nullable_1_get_Value_m5D4AFF8301193978BFBA2F1470C7BCF86A8BCCAE_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60;
		L_60 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_59, NULL);
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_60);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_60);
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61;
		L_61 = RLP_EncodeDataItemsAsElementOrListAndCombineAsList_m03BF5928F42FA0AE887AF871B1D36202A3A6D791(L_56, (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL, NULL);
		return L_61;
	}

IL_00e9:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_62 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_63 = L_62;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_64 = ___header0;
		NullCheck(L_64);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65;
		L_65 = BlockHeader_get_ParentHash_mD09AFC6B6C0A59D14BAA739047EE9187485033B2_inline(L_64, NULL);
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_65);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_65);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_66 = L_63;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_67 = ___header0;
		NullCheck(L_67);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68;
		L_68 = BlockHeader_get_UnclesHash_mC369A310077A836F8C7813A81E7152D7EBEBBCC7_inline(L_67, NULL);
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_68);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_68);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_69 = L_66;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_70 = ___header0;
		NullCheck(L_70);
		String_t* L_71;
		L_71 = BlockHeader_get_Coinbase_m5382AA5D7520BAA1F29E856950F113BB5A695A05_inline(L_70, NULL);
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72;
		L_72 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_71, NULL);
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, L_72);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(2), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_72);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_73 = L_69;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_74 = ___header0;
		NullCheck(L_74);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75;
		L_75 = BlockHeader_get_StateRoot_mB49452F2707E51BEFA3098C765CC07B212EA1BFD_inline(L_74, NULL);
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, L_75);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(3), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_75);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_76 = L_73;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_77 = ___header0;
		NullCheck(L_77);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78;
		L_78 = BlockHeader_get_TransactionsHash_mA14ED72B316456A7DA70674CFA45FB614BE6D052_inline(L_77, NULL);
		NullCheck(L_76);
		ArrayElementTypeCheck (L_76, L_78);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(4), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_78);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_79 = L_76;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_80 = ___header0;
		NullCheck(L_80);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81;
		L_81 = BlockHeader_get_ReceiptHash_m601349219B610EA247E77C71989580827E9D6155_inline(L_80, NULL);
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, L_81);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(5), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_81);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_82 = L_79;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_83 = ___header0;
		NullCheck(L_83);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84;
		L_84 = BlockHeader_get_LogsBloom_m8ECB925ACF13C4B08366C8BD7D1DB7AD79587CC2_inline(L_83, NULL);
		NullCheck(L_82);
		ArrayElementTypeCheck (L_82, L_84);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(6), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_84);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_85 = L_82;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_86 = ___header0;
		NullCheck(L_86);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_87;
		L_87 = BlockHeader_get_Difficulty_m3FB7AC6E712CECA3AC8AE8AA889BD5096645560C_inline(L_86, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88;
		L_88 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_87, NULL);
		NullCheck(L_85);
		ArrayElementTypeCheck (L_85, L_88);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(7), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_88);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_89 = L_85;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_90 = ___header0;
		NullCheck(L_90);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_91;
		L_91 = BlockHeader_get_BlockNumber_m0DC83E04F6F0F2819D602E42C8AA586F89981B89_inline(L_90, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92;
		L_92 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_91, NULL);
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, L_92);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(8), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_92);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_93 = L_89;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_94 = ___header0;
		NullCheck(L_94);
		int64_t L_95;
		L_95 = BlockHeader_get_GasLimit_mB3CABF0F4F03B6FDA626CAC59B5A549E84455062_inline(L_94, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96;
		L_96 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_m6AD343E741D49F00EF0AB8F671EF6582DFDCEAA4(L_95, NULL);
		NullCheck(L_93);
		ArrayElementTypeCheck (L_93, L_96);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_96);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_97 = L_93;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_98 = ___header0;
		NullCheck(L_98);
		int64_t L_99;
		L_99 = BlockHeader_get_GasUsed_mDFD81A5827A38B40429AAC2265998EBF568C558B_inline(L_98, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100;
		L_100 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_m6AD343E741D49F00EF0AB8F671EF6582DFDCEAA4(L_99, NULL);
		NullCheck(L_97);
		ArrayElementTypeCheck (L_97, L_100);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_100);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_101 = L_97;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_102 = ___header0;
		NullCheck(L_102);
		int64_t L_103;
		L_103 = BlockHeader_get_Timestamp_m8BC5D0906E650F8218B340228F36609DA1F792CA_inline(L_102, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104;
		L_104 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_m6AD343E741D49F00EF0AB8F671EF6582DFDCEAA4(L_103, NULL);
		NullCheck(L_101);
		ArrayElementTypeCheck (L_101, L_104);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_104);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_105 = L_101;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_106 = ___header0;
		NullCheck(L_106);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107;
		L_107 = BlockHeader_get_ExtraData_m8BE7E056B3401DE5E987EBD9D0BCD5A7D4599900_inline(L_106, NULL);
		NullCheck(L_105);
		ArrayElementTypeCheck (L_105, L_107);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_107);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_108 = L_105;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_109 = ___header0;
		NullCheck(L_109);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_110;
		L_110 = BlockHeader_get_MixHash_m31F008787399E24AE508492F3B48E38404605774_inline(L_109, NULL);
		NullCheck(L_108);
		ArrayElementTypeCheck (L_108, L_110);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_110);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_111 = L_108;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_112 = ___header0;
		NullCheck(L_112);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_113;
		L_113 = BlockHeader_get_Nonce_mE68FEFB68F47B6DA1F527BC99CA3AF123E37F972_inline(L_112, NULL);
		NullCheck(L_111);
		ArrayElementTypeCheck (L_111, L_113);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_113);
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_114;
		L_114 = RLP_EncodeDataItemsAsElementOrListAndCombineAsList_m03BF5928F42FA0AE887AF871B1D36202A3A6D791(L_111, (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL, NULL);
		return L_114;
	}
}
// Nethereum.Model.BlockHeader Nethereum.Model.BlockHeaderEncoder::Decode(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* BlockHeaderEncoder_Decode_m2F1CCBF6FC797F96E14F2B89FB9279EE62C32CD5 (BlockHeaderEncoder_t164729660F29BD9778128CB2C0134D759C9390FF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawdata0, bool ___legacyMode1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* V_0 = NULL;
	BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___rawdata0;
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = RLP_Decode_m25755DBDC9A4DD532BC45B2C9BBBB03E00FA0C33(L_0, NULL);
		V_0 = ((RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6*)CastclassClass((RuntimeObject*)L_1, RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var));
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_2 = (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F*)il2cpp_codegen_object_new(BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BlockHeader__ctor_m22DF377A4C8EA8D9DE920E0F745FF19141001424(L_2, NULL);
		V_1 = L_2;
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_3 = V_1;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_4, 0, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_3);
		BlockHeader_set_ParentHash_m3544C8D5C367E7D5C0BF971BECF75364E2A449E0_inline(L_3, L_6, NULL);
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_7 = V_1;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_8, 1, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_7);
		BlockHeader_set_UnclesHash_m4BFB158D24853CB73F74E049DEBC9BDCAE010711_inline(L_7, L_10, NULL);
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_11 = V_1;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_12 = V_0;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_12, 2, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_13);
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_15;
		L_15 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_14, (bool)0, NULL);
		NullCheck(L_11);
		BlockHeader_set_Coinbase_m6A4E6DBD82B66997878DEAFCC0A4A79297C65343_inline(L_11, L_15, NULL);
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_16 = V_1;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_17 = V_0;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_17, 3, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_18);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
		L_19 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_18);
		NullCheck(L_16);
		BlockHeader_set_StateRoot_m44264C1F32131C34F88F20A86EA95AB3E93906C8_inline(L_16, L_19, NULL);
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_20 = V_1;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_21 = V_0;
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_21, 4, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_22);
		NullCheck(L_20);
		BlockHeader_set_TransactionsHash_mB0FBEB59E6219F2575BE2A132695C2651EBC110F_inline(L_20, L_23, NULL);
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_24 = V_1;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_25 = V_0;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_25, 5, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_26);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
		L_27 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_26);
		NullCheck(L_24);
		BlockHeader_set_ReceiptHash_m008A4438451481B963F925C22CFB1BBCF10816F8_inline(L_24, L_27, NULL);
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_28 = V_1;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_29 = V_0;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_29, 6, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31;
		L_31 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_30);
		NullCheck(L_28);
		BlockHeader_set_LogsBloom_m36794ED0B4FB02FE67805DE4F8DCD8EF2F76D429_inline(L_28, L_31, NULL);
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_32 = V_1;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_33 = V_0;
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_33, 7, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_34);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35;
		L_35 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_34);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_36;
		L_36 = ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mAD7F985D3961A7070872967A541A414B9B5D13ED(L_35, NULL);
		NullCheck(L_32);
		BlockHeader_set_Difficulty_mDBC375C45A9753448B08188FAF275455DCB86911_inline(L_32, L_36, NULL);
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_37 = V_1;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_38 = V_0;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_38, 8, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_39);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40;
		L_40 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_39);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_41;
		L_41 = ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mAD7F985D3961A7070872967A541A414B9B5D13ED(L_40, NULL);
		NullCheck(L_37);
		BlockHeader_set_BlockNumber_m20C1879A0E9C8051E908608C9C58584ED46A0CB7_inline(L_37, L_41, NULL);
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_42 = V_1;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_43 = V_0;
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_43, ((int32_t)9), List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_44);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45;
		L_45 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_44);
		int64_t L_46;
		L_46 = ConvertorForRLPEncodingExtensions_ToLongFromRLPDecoded_m115B1AFCE51801BF5551ADA984EFCF3EAFFF17B7(L_45, NULL);
		NullCheck(L_42);
		BlockHeader_set_GasLimit_m5D124AC1B06BEA9A6F5158439B7A08B23DFBC1A1_inline(L_42, L_46, NULL);
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_47 = V_1;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_48 = V_0;
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_48, ((int32_t)10), List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_49);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50;
		L_50 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_49);
		int64_t L_51;
		L_51 = ConvertorForRLPEncodingExtensions_ToLongFromRLPDecoded_m115B1AFCE51801BF5551ADA984EFCF3EAFFF17B7(L_50, NULL);
		NullCheck(L_47);
		BlockHeader_set_GasUsed_mD15EFF3F1EB909E2FB43E34E624B96BE31CC8A6C_inline(L_47, L_51, NULL);
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_52 = V_1;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_53 = V_0;
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_53, ((int32_t)11), List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_54);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55;
		L_55 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_54);
		int64_t L_56;
		L_56 = ConvertorForRLPEncodingExtensions_ToLongFromRLPDecoded_m115B1AFCE51801BF5551ADA984EFCF3EAFFF17B7(L_55, NULL);
		NullCheck(L_52);
		BlockHeader_set_Timestamp_mAAB7D498005A69025A0E8088C80D4F5B7459CE92_inline(L_52, L_56, NULL);
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_57 = V_1;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_58 = V_0;
		NullCheck(L_58);
		RuntimeObject* L_59;
		L_59 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_58, ((int32_t)12), List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_59);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60;
		L_60 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_59);
		NullCheck(L_57);
		BlockHeader_set_ExtraData_m803FEC4A93D5203511EC702AD6C3D2358D0CBC62_inline(L_57, L_60, NULL);
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_61 = V_1;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_62 = V_0;
		NullCheck(L_62);
		RuntimeObject* L_63;
		L_63 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_62, ((int32_t)13), List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_63);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64;
		L_64 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_63);
		NullCheck(L_61);
		BlockHeader_set_MixHash_mB28EC358A7C54B981C16209505AEFF98DE3B185D_inline(L_61, L_64, NULL);
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_65 = V_1;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_66 = V_0;
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_66, ((int32_t)14), List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_67);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68;
		L_68 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_67);
		NullCheck(L_65);
		BlockHeader_set_Nonce_m8ABAD0FF0F65C698FF383A31999311B050762157_inline(L_65, L_68, NULL);
		bool L_69 = ___legacyMode1;
		if (L_69)
		{
			goto IL_0165;
		}
	}
	{
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_70 = V_1;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_71 = V_0;
		NullCheck(L_71);
		RuntimeObject* L_72;
		L_72 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_71, ((int32_t)15), List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_72);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73;
		L_73 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_72);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_74;
		L_74 = ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mAD7F985D3961A7070872967A541A414B9B5D13ED(L_73, NULL);
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_75;
		memset((&L_75), 0, sizeof(L_75));
		Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138((&L_75), L_74, /*hidden argument*/Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138_RuntimeMethod_var);
		NullCheck(L_70);
		BlockHeader_set_BaseFee_m53937185E9CA21B70B27FBD716A24364677D7954_inline(L_70, L_75, NULL);
	}

IL_0165:
	{
		BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* L_76 = V_1;
		return L_76;
	}
}
// System.Void Nethereum.Model.BlockHeaderEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockHeaderEncoder__ctor_m5C937027351C817A5BC2A96CDA0DC3B01FC0E164 (BlockHeaderEncoder_t164729660F29BD9778128CB2C0134D759C9390FF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Nethereum.Model.BlockHeaderEncoder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockHeaderEncoder__cctor_m68B2BDB67E54F1DC4AE2C23F622968647F2B633F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlockHeaderEncoder_t164729660F29BD9778128CB2C0134D759C9390FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BlockHeaderEncoder_t164729660F29BD9778128CB2C0134D759C9390FF* L_0 = (BlockHeaderEncoder_t164729660F29BD9778128CB2C0134D759C9390FF*)il2cpp_codegen_object_new(BlockHeaderEncoder_t164729660F29BD9778128CB2C0134D759C9390FF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BlockHeaderEncoder__ctor_m5C937027351C817A5BC2A96CDA0DC3B01FC0E164(L_0, NULL);
		((BlockHeaderEncoder_t164729660F29BD9778128CB2C0134D759C9390FF_StaticFields*)il2cpp_codegen_static_fields_for(BlockHeaderEncoder_t164729660F29BD9778128CB2C0134D759C9390FF_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BlockHeaderEncoder_t164729660F29BD9778128CB2C0134D759C9390FF_StaticFields*)il2cpp_codegen_static_fields_for(BlockHeaderEncoder_t164729660F29BD9778128CB2C0134D759C9390FF_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField_0), (void*)L_0);
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
// Nethereum.Model.DefaultValues Nethereum.Model.DefaultValues::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899* DefaultValues_get_Current_mA5687EEAD2472DE610986749D87213EF2B286DD4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var);
		DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899* L_0 = ((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.Model.DefaultValues::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultValues__ctor_m8E30C8E47A736CD667A25ED969352CB5F510DA7A (DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Nethereum.Model.DefaultValues::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultValues__cctor_mDB3DAFD94FC8614D5EE0DB2CC19AB700FB02ABC8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899* L_0 = (DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899*)il2cpp_codegen_object_new(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DefaultValues__ctor_m8E30C8E47A736CD667A25ED969352CB5F510DA7A(L_0, NULL);
		((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField_0), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_BYTE_ARRAY_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_BYTE_ARRAY_1), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___ZERO_BYTE_ARRAY_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___ZERO_BYTE_ARRAY_2), (void*)L_2);
		il2cpp_codegen_runtime_class_init_inline(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_3;
		L_3 = Sha3Keccack_get_Current_mD6FFC538783F0A2C61503A659F979F136C302D91_inline(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_BYTE_ARRAY_1;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Sha3Keccack_CalculateHash_mE94324F2BF9D80A18C59A08CF5F0735B78ECAAA0(L_3, L_4, NULL);
		((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_DATA_HASH_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_DATA_HASH_3), (void*)L_5);
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_6;
		L_6 = Sha3Keccack_get_Current_mD6FFC538783F0A2C61503A659F979F136C302D91_inline(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_BYTE_ARRAY_1;
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_7, NULL);
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = Sha3Keccack_CalculateHash_mE94324F2BF9D80A18C59A08CF5F0735B78ECAAA0(L_6, L_8, NULL);
		((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_TRIE_HASH_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_TRIE_HASH_4), (void*)L_9);
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
// Nethereum.Model.TransactionType Nethereum.Model.LegacyTransaction::get_TransactionType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LegacyTransaction_get_TransactionType_mABD4B0F48A31BCE1EFBFB95AFA07B41C8B3ACABA (LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)((-1));
	}
}
// System.Void Nethereum.Model.LegacyTransaction::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransaction__ctor_m9DDED8115C7405DEF278EC1A26EFC05906D31C3E (LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		SignedLegacyTransaction__ctor_m0492AFCCAAC52C94D70CC576615EC469B9392B07(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___rawData0;
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_1 = (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4*)il2cpp_codegen_object_new(RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RLPSignedDataHashBuilder__ctor_m9A316BB70554992BF4F8925D854F9128F612D3A3(L_1, L_0, 6, NULL);
		SignedLegacyTransactionBase_set_RlpSignerEncoder_m2E48E16936EF5766F77818F30F38D403947405C5_inline(__this, L_1, NULL);
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_2;
		L_2 = SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline(__this, NULL);
		LegacyTransaction_ValidateValidV_m1F7CA2853B1FDF9442C57A4642CED69F4A4771D8(L_2, NULL);
		return;
	}
}
// System.Void Nethereum.Model.LegacyTransaction::.ctor(Nethereum.Model.RLPSignedDataHashBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransaction__ctor_mFEE6BE3FAF1108A23A532417C6D1FED11BE0B064 (LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3* __this, RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* ___rlpSigner0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		SignedLegacyTransaction__ctor_m0492AFCCAAC52C94D70CC576615EC469B9392B07(__this, NULL);
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0 = ___rlpSigner0;
		LegacyTransaction_ValidateValidV_m1F7CA2853B1FDF9442C57A4642CED69F4A4771D8(L_0, NULL);
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_1 = ___rlpSigner0;
		SignedLegacyTransactionBase_set_RlpSignerEncoder_m2E48E16936EF5766F77818F30F38D403947405C5_inline(__this, L_1, NULL);
		return;
	}
}
// System.Void Nethereum.Model.LegacyTransaction::ValidateValidV(Nethereum.Model.RLPSignedDataHashBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransaction_ValidateValidV_m1F7CA2853B1FDF9442C57A4642CED69F4A4771D8 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* ___rlpSigner0, const RuntimeMethod* method) 
{
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0 = ___rlpSigner0;
		NullCheck(L_0);
		bool L_1;
		L_1 = RLPSignedDataHashBuilder_IsVSignatureForChain_mFEA79AEADCE0D30CAE9FFF4D241BFA9BEEBA40A2(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral31C492654F7BDA35E825E667B801EDBCDA1ADABF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LegacyTransaction_ValidateValidV_m1F7CA2853B1FDF9442C57A4642CED69F4A4771D8_RuntimeMethod_var)));
	}

IL_0013:
	{
		return;
	}
}
// System.Void Nethereum.Model.LegacyTransaction::.ctor(System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransaction__ctor_m6A3F6E34074F98A7D88E242EFE77FB63AABBA329 (LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___nonce0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___gasPrice1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___gasLimit2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___receiveAddress3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		SignedLegacyTransaction__ctor_m0492AFCCAAC52C94D70CC576615EC469B9392B07(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___nonce0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___gasPrice1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___gasLimit2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___receiveAddress3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___value4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___data5;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_6;
		L_6 = LegacyTransaction_GetElementsInOrder_m1DD527D9C3EEF9CBBFC10EEDA86FAB19D0961992(__this, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_7 = (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4*)il2cpp_codegen_object_new(RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		RLPSignedDataHashBuilder__ctor_m8B68A14C93AA88885686C4F348A23EA597F51BCF(L_7, L_6, NULL);
		SignedLegacyTransactionBase_set_RlpSignerEncoder_m2E48E16936EF5766F77818F30F38D403947405C5_inline(__this, L_7, NULL);
		return;
	}
}
// System.Void Nethereum.Model.LegacyTransaction::.ctor(System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransaction__ctor_mDC12B3DF1ED58F1E5619B9E18085BEAD89C2B448 (LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___nonce0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___gasPrice1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___gasLimit2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___receiveAddress3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data5, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r6, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s7, uint8_t ___v8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		SignedLegacyTransaction__ctor_m0492AFCCAAC52C94D70CC576615EC469B9392B07(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___nonce0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___gasPrice1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___gasLimit2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___receiveAddress3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___value4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___data5;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_6;
		L_6 = LegacyTransaction_GetElementsInOrder_m1DD527D9C3EEF9CBBFC10EEDA86FAB19D0961992(__this, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___r6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___s7;
		uint8_t L_9 = ___v8;
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_10 = (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4*)il2cpp_codegen_object_new(RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		RLPSignedDataHashBuilder__ctor_m5FCCB2FD899F115BAF2557124655C4CFEED47E6D(L_10, L_6, L_7, L_8, L_9, NULL);
		SignedLegacyTransactionBase_set_RlpSignerEncoder_m2E48E16936EF5766F77818F30F38D403947405C5_inline(__this, L_10, NULL);
		return;
	}
}
// System.Void Nethereum.Model.LegacyTransaction::.ctor(System.String,System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransaction__ctor_m7A4333927499866D21FE69B8417A109690FDF218 (LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3* __this, String_t* ___to0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___amount1, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___nonce2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___to0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1 = ___amount1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = ___nonce2;
		il2cpp_codegen_runtime_class_init_inline(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3 = ((SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_StaticFields*)il2cpp_codegen_static_fields_for(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var))->___DEFAULT_GAS_PRICE_3;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4 = ((SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_StaticFields*)il2cpp_codegen_static_fields_for(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var))->___DEFAULT_GAS_LIMIT_4;
		LegacyTransaction__ctor_m8917B09254A9D60D70BEC838F4FA13989A6397FE(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void Nethereum.Model.LegacyTransaction::.ctor(System.String,System.Numerics.BigInteger,System.Numerics.BigInteger,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransaction__ctor_mEBC3D68764BF98D3FECD00D746A6326B767AA1A2 (LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3* __this, String_t* ___to0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___amount1, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___nonce2, String_t* ___data3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___to0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1 = ___amount1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = ___nonce2;
		il2cpp_codegen_runtime_class_init_inline(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3 = ((SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_StaticFields*)il2cpp_codegen_static_fields_for(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var))->___DEFAULT_GAS_PRICE_3;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4 = ((SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_StaticFields*)il2cpp_codegen_static_fields_for(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var))->___DEFAULT_GAS_LIMIT_4;
		String_t* L_5 = ___data3;
		LegacyTransaction__ctor_m21E35DC359DCC692DAEB19FC6E1BDBAD64F9BBD2(__this, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void Nethereum.Model.LegacyTransaction::.ctor(System.String,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransaction__ctor_m8917B09254A9D60D70BEC838F4FA13989A6397FE (LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3* __this, String_t* ___to0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___amount1, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___nonce2, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___gasPrice3, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___gasLimit4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___to0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1 = ___amount1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = ___nonce2;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3 = ___gasPrice3;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4 = ___gasLimit4;
		LegacyTransaction__ctor_m21E35DC359DCC692DAEB19FC6E1BDBAD64F9BBD2(__this, L_0, L_1, L_2, L_3, L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		return;
	}
}
// System.Void Nethereum.Model.LegacyTransaction::.ctor(System.String,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransaction__ctor_m21E35DC359DCC692DAEB19FC6E1BDBAD64F9BBD2 (LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3* __this, String_t* ___to0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___amount1, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___nonce2, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___gasPrice3, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___gasLimit4, String_t* ___data5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___nonce2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_0, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = ___gasPrice3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_2, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4 = ___gasLimit4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_4, NULL);
		String_t* L_6 = ___to0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_6, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_8 = ___amount1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_8, NULL);
		String_t* L_10 = ___data5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_10, NULL);
		LegacyTransaction__ctor_m6A3F6E34074F98A7D88E242EFE77FB63AABBA329(__this, L_1, L_3, L_5, L_7, L_9, L_11, NULL);
		return;
	}
}
// System.String Nethereum.Model.LegacyTransaction::ToJsonHex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LegacyTransaction_ToJsonHex_mEFE608C2EB621C7F4B9BE509AAAE6EA6524D6A88 (LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95904989F0F4200EBCB3540A7E3A2E30BC8A4C04);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = SignedLegacyTransaction_get_Nonce_m09DCD71F3195BD18A6D0219663CF1CC4A0CAF411(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_2, (bool)0, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = SignedLegacyTransaction_get_GasPrice_m9C6865A1E3106284986F0B2773AE52479A67208C(__this, NULL);
		String_t* L_6;
		L_6 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_5, (bool)0, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = SignedLegacyTransaction_get_GasLimit_mDDE3E33D0C1D3FA32782C292EAFB928A60163A40(__this, NULL);
		String_t* L_9;
		L_9 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_8, (bool)0, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = SignedLegacyTransaction_get_ReceiveAddress_mA2D05DA97B5EFA87E87C53969C2DA651AD1E6B82(__this, NULL);
		String_t* L_12;
		L_12 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_11, (bool)0, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = SignedLegacyTransaction_get_Value_mB54148EACF4CFA332AAEB85B65FDA0073D381549(__this, NULL);
		String_t* L_15;
		L_15 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_14, (bool)0, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = SignedLegacyTransaction_get_Data_m0AEBA5B694F5E81BE631AA2A86379108D0D563B8(__this, NULL);
		String_t* L_18;
		L_18 = SignedLegacyTransactionBase_ToHex_m58933B6818C70EA253C26F1C6EB108679FF735F8(L_17, NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_16;
		RuntimeObject* L_20;
		L_20 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(16 /* Nethereum.Model.ISignature Nethereum.Model.SignedTransaction::get_Signature() */, __this);
		NullCheck(L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21;
		L_21 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(2 /* System.Byte[] Nethereum.Model.ISignature::get_V() */, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_20);
		String_t* L_22;
		L_22 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_21, (bool)0, NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_19;
		RuntimeObject* L_24;
		L_24 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(16 /* Nethereum.Model.ISignature Nethereum.Model.SignedTransaction::get_Signature() */, __this);
		NullCheck(L_24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.Model.ISignature::get_R() */, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_24);
		String_t* L_26;
		L_26 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_25, (bool)0, NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_23;
		RuntimeObject* L_28;
		L_28 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(16 /* Nethereum.Model.ISignature Nethereum.Model.SignedTransaction::get_Signature() */, __this);
		NullCheck(L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29;
		L_29 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Byte[] Nethereum.Model.ISignature::get_S() */, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_28);
		String_t* L_30;
		L_30 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_29, (bool)0, NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_30);
		String_t* L_31;
		L_31 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral95904989F0F4200EBCB3540A7E3A2E30BC8A4C04, L_27, NULL);
		return L_31;
	}
}
// System.Byte[][] Nethereum.Model.LegacyTransaction::GetElementsInOrder(System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* LegacyTransaction_GetElementsInOrder_m1DD527D9C3EEF9CBBFC10EEDA86FAB19D0961992 (LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___nonce0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___gasPrice1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___gasLimit2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___receiveAddress3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___receiveAddress3;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_BYTE_ARRAY_1;
		___receiveAddress3 = L_1;
	}

IL_000b:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_2 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)6);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_3 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___nonce0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_4);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_5 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___gasPrice1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_6);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_7 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___gasLimit2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_8);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_9 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___receiveAddress3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_10);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_11 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___value4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_12);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_13 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___data5;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_14);
		return L_13;
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
// Nethereum.Model.TransactionType Nethereum.Model.LegacyTransactionChainId::get_TransactionType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LegacyTransactionChainId_get_TransactionType_m48BA20D5E44EB1404BA99CA933EB0B371DFBB03B (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(((int32_t)-2));
	}
}
// System.Void Nethereum.Model.LegacyTransactionChainId::.ctor(System.Byte[],System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransactionChainId__ctor_mABB313690875D144B9477722B75D5F9AFD8A1581 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawData0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___chainId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		SignedLegacyTransaction__ctor_m0492AFCCAAC52C94D70CC576615EC469B9392B07(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___rawData0;
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_1 = (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4*)il2cpp_codegen_object_new(RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RLPSignedDataHashBuilder__ctor_m9A316BB70554992BF4F8925D854F9128F612D3A3(L_1, L_0, 6, NULL);
		SignedLegacyTransactionBase_set_RlpSignerEncoder_m2E48E16936EF5766F77818F30F38D403947405C5_inline(__this, L_1, NULL);
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_2;
		L_2 = SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var);
		LegacyTransactionChainId_ValidateValidV_mB8399C19F1AA55DA973F518F51BB2D3662E7D7F9(L_2, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3 = ___chainId1;
		LegacyTransactionChainId_AppendDataForHashRecovery_m0A24AA639B8653F216A16EE032BC6F3A8F03C273(__this, L_3, NULL);
		return;
	}
}
// System.Void Nethereum.Model.LegacyTransactionChainId::.ctor(Nethereum.Model.RLPSignedDataHashBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransactionChainId__ctor_mDD8AC4C8B9B56BFE3F4286A71BDFC50456FB914A (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* ___rlpSigner0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		SignedLegacyTransaction__ctor_m0492AFCCAAC52C94D70CC576615EC469B9392B07(__this, NULL);
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0 = ___rlpSigner0;
		SignedLegacyTransactionBase_set_RlpSignerEncoder_m2E48E16936EF5766F77818F30F38D403947405C5_inline(__this, L_0, NULL);
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_1;
		L_1 = SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var);
		LegacyTransactionChainId_ValidateValidV_mB8399C19F1AA55DA973F518F51BB2D3662E7D7F9(L_1, NULL);
		LegacyTransactionChainId_GetChainIdFromVAndAppendDataForHashRecovery_m87A8B07BCD9B7FE3F2140471758EE331B06EAB20(__this, NULL);
		return;
	}
}
// System.Void Nethereum.Model.LegacyTransactionChainId::ValidateValidV(Nethereum.Model.RLPSignedDataHashBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransactionChainId_ValidateValidV_mB8399C19F1AA55DA973F518F51BB2D3662E7D7F9 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* ___rlpSigner0, const RuntimeMethod* method) 
{
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0 = ___rlpSigner0;
		NullCheck(L_0);
		bool L_1;
		L_1 = RLPSignedDataHashBuilder_IsVSignatureForChain_mFEA79AEADCE0D30CAE9FFF4D241BFA9BEEBA40A2(L_0, NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67587F339D6B440578008A9044D0F5DA43508EB5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LegacyTransactionChainId_ValidateValidV_mB8399C19F1AA55DA973F518F51BB2D3662E7D7F9_RuntimeMethod_var)));
	}

IL_0013:
	{
		return;
	}
}
// System.Void Nethereum.Model.LegacyTransactionChainId::GetChainIdFromVAndAppendDataForHashRecovery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransactionChainId_GetChainIdFromVAndAppendDataForHashRecovery_m87A8B07BCD9B7FE3F2140471758EE331B06EAB20 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, const RuntimeMethod* method) 
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0;
		L_0 = LegacyTransactionChainId_GetChainFromVChain_m8FC35318DAAF9CD327FC693CF316B37A130A2980(__this, NULL);
		V_0 = L_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1 = V_0;
		LegacyTransactionChainId_AppendDataForHashRecovery_m0A24AA639B8653F216A16EE032BC6F3A8F03C273(__this, L_1, NULL);
		return;
	}
}
// System.Void Nethereum.Model.LegacyTransactionChainId::AppendDataForHashRecovery(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransactionChainId_AppendDataForHashRecovery_m0A24AA639B8653F216A16EE032BC6F3A8F03C273 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___chainId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0;
		L_0 = SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline(__this, NULL);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_1 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_2 = L_1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3 = ___chainId0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_3, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_4);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_5 = L_2;
		il2cpp_codegen_runtime_class_init_inline(LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ((LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_StaticFields*)il2cpp_codegen_static_fields_for(LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var))->___RHASH_DEFAULT_5;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_6);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_7 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ((LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_StaticFields*)il2cpp_codegen_static_fields_for(LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var))->___SHASH_DEFAULT_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_8);
		NullCheck(L_0);
		RLPSignedDataHashBuilder_AppendData_mEFBAC31FD073282C468737FDD4CA93A8960C60D9(L_0, L_7, NULL);
		return;
	}
}
// System.Void Nethereum.Model.LegacyTransactionChainId::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransactionChainId__ctor_mE1C8E8C93B820E60D723C2E3BB90F9BE5BBA7954 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		SignedLegacyTransaction__ctor_m0492AFCCAAC52C94D70CC576615EC469B9392B07(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___rawData0;
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_1 = (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4*)il2cpp_codegen_object_new(RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RLPSignedDataHashBuilder__ctor_m9A316BB70554992BF4F8925D854F9128F612D3A3(L_1, L_0, 6, NULL);
		SignedLegacyTransactionBase_set_RlpSignerEncoder_m2E48E16936EF5766F77818F30F38D403947405C5_inline(__this, L_1, NULL);
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_2;
		L_2 = SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var);
		LegacyTransactionChainId_ValidateValidV_mB8399C19F1AA55DA973F518F51BB2D3662E7D7F9(L_2, NULL);
		LegacyTransactionChainId_GetChainIdFromVAndAppendDataForHashRecovery_m87A8B07BCD9B7FE3F2140471758EE331B06EAB20(__this, NULL);
		return;
	}
}
// System.Numerics.BigInteger Nethereum.Model.LegacyTransactionChainId::GetChainFromVChain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F LegacyTransactionChainId_GetChainFromVChain_m8FC35318DAAF9CD327FC693CF316B37A130A2980 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(16 /* Nethereum.Model.ISignature Nethereum.Model.SignedTransaction::get_Signature() */, __this);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(2 /* System.Byte[] Nethereum.Model.ISignature::get_V() */, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_0);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mAD7F985D3961A7070872967A541A414B9B5D13ED(L_1, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = VRecoveryAndChainCalculations_GetChainFromVChain_mE45A697CB197810E8874BF4617782E935C3C2D6D(L_2, NULL);
		return L_3;
	}
}
// System.Void Nethereum.Model.LegacyTransactionChainId::.ctor(System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransactionChainId__ctor_m1EF3F7B45328F9D2AD7E3EB31FC78219DFDA1806 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___nonce0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___gasPrice1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___gasLimit2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___receiveAddress3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data5, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___chainId6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		SignedLegacyTransaction__ctor_m0492AFCCAAC52C94D70CC576615EC469B9392B07(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___nonce0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___gasPrice1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___gasLimit2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___receiveAddress3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___value4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___data5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___chainId6;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_7;
		L_7 = LegacyTransactionChainId_GetElementsInOrder_mB60AD855FEDE959652C6AD1194C08FE3CDAB6334(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_8 = (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4*)il2cpp_codegen_object_new(RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		RLPSignedDataHashBuilder__ctor_m847B36519054299C9A34B9412FADF502F0A47B11(L_8, L_7, 6, NULL);
		SignedLegacyTransactionBase_set_RlpSignerEncoder_m2E48E16936EF5766F77818F30F38D403947405C5_inline(__this, L_8, NULL);
		return;
	}
}
// System.Void Nethereum.Model.LegacyTransactionChainId::.ctor(System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransactionChainId__ctor_m8A14CAA852C74D37FB010A6085E3599C8CCEF839 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___nonce0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___gasPrice1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___gasLimit2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___receiveAddress3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data5, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___chainId6, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r7, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s8, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___v9, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		SignedLegacyTransaction__ctor_m0492AFCCAAC52C94D70CC576615EC469B9392B07(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___nonce0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___gasPrice1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___gasLimit2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___receiveAddress3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___value4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___data5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___chainId6;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_7;
		L_7 = LegacyTransactionChainId_GetElementsInOrder_mB60AD855FEDE959652C6AD1194C08FE3CDAB6334(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___r7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___s8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___v9;
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_11 = (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4*)il2cpp_codegen_object_new(RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		RLPSignedDataHashBuilder__ctor_m8657B6E10FE92E8AA9DA990AAE9AFBC1114A525B(L_11, L_7, L_8, L_9, L_10, 6, NULL);
		SignedLegacyTransactionBase_set_RlpSignerEncoder_m2E48E16936EF5766F77818F30F38D403947405C5_inline(__this, L_11, NULL);
		return;
	}
}
// System.Void Nethereum.Model.LegacyTransactionChainId::.ctor(System.String,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransactionChainId__ctor_mE686D5FDF3D9C8E8A8899C42044975A3F026DDB1 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, String_t* ___to0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___amount1, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___nonce2, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___chainId3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___to0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1 = ___amount1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = ___nonce2;
		il2cpp_codegen_runtime_class_init_inline(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3 = ((SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_StaticFields*)il2cpp_codegen_static_fields_for(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var))->___DEFAULT_GAS_PRICE_3;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4 = ((SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_StaticFields*)il2cpp_codegen_static_fields_for(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var))->___DEFAULT_GAS_LIMIT_4;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5 = ___chainId3;
		LegacyTransactionChainId__ctor_m9ACDACC037CB58544444D0B461F9C227555A6FF1(__this, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void Nethereum.Model.LegacyTransactionChainId::.ctor(System.String,System.Numerics.BigInteger,System.Numerics.BigInteger,System.String,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransactionChainId__ctor_mEC7973ABA28FBC668629292989EA02D805A8B9AF (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, String_t* ___to0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___amount1, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___nonce2, String_t* ___data3, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___chainId4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___to0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1 = ___amount1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = ___nonce2;
		il2cpp_codegen_runtime_class_init_inline(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3 = ((SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_StaticFields*)il2cpp_codegen_static_fields_for(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var))->___DEFAULT_GAS_PRICE_3;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4 = ((SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_StaticFields*)il2cpp_codegen_static_fields_for(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var))->___DEFAULT_GAS_LIMIT_4;
		String_t* L_5 = ___data3;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6 = ___chainId4;
		LegacyTransactionChainId__ctor_m6D90F35D1C31B4D358FDEFCD83C3FD156E9A6A8B(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Void Nethereum.Model.LegacyTransactionChainId::.ctor(System.String,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransactionChainId__ctor_m9ACDACC037CB58544444D0B461F9C227555A6FF1 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, String_t* ___to0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___amount1, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___nonce2, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___gasPrice3, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___gasLimit4, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___chainId5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___to0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1 = ___amount1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = ___nonce2;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3 = ___gasPrice3;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4 = ___gasLimit4;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5 = ___chainId5;
		LegacyTransactionChainId__ctor_m6D90F35D1C31B4D358FDEFCD83C3FD156E9A6A8B(__this, L_0, L_1, L_2, L_3, L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_5, NULL);
		return;
	}
}
// System.Void Nethereum.Model.LegacyTransactionChainId::.ctor(System.String,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.String,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransactionChainId__ctor_m6D90F35D1C31B4D358FDEFCD83C3FD156E9A6A8B (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, String_t* ___to0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___amount1, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___nonce2, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___gasPrice3, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___gasLimit4, String_t* ___data5, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___chainId6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___nonce2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_0, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = ___gasPrice3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_2, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4 = ___gasLimit4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_4, NULL);
		String_t* L_6 = ___to0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_6, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_8 = ___amount1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_8, NULL);
		String_t* L_10 = ___data5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_10, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_12 = ___chainId6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_12, NULL);
		LegacyTransactionChainId__ctor_m1EF3F7B45328F9D2AD7E3EB31FC78219DFDA1806(__this, L_1, L_3, L_5, L_7, L_9, L_11, L_13, NULL);
		return;
	}
}
// System.Numerics.BigInteger Nethereum.Model.LegacyTransactionChainId::GetChainIdAsBigInteger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F LegacyTransactionChainId_GetChainIdAsBigInteger_mCCA8999D57B292F332D51A1A860C4F199862B00F (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = LegacyTransactionChainId_get_ChainId_mE15EC4FEE13CAF17C0A834AEE750CE37BC6001F3(__this, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mAD7F985D3961A7070872967A541A414B9B5D13ED(L_0, NULL);
		return L_1;
	}
}
// System.Byte[] Nethereum.Model.LegacyTransactionChainId::get_ChainId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LegacyTransactionChainId_get_ChainId_mE15EC4FEE13CAF17C0A834AEE750CE37BC6001F3 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, const RuntimeMethod* method) 
{
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0;
		L_0 = SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline(__this, NULL);
		NullCheck(L_0);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_1;
		L_1 = RLPSignedDataHashBuilder_get_Data_m2904CB6BA451E29C691C9053D1CD2E66DDD2A904_inline(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2 = 6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Byte[] Nethereum.Model.LegacyTransactionChainId::get_RHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LegacyTransactionChainId_get_RHash_mDCD8A147B2EC040008BD9093AD9CA1CB08BEF686 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, const RuntimeMethod* method) 
{
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0;
		L_0 = SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline(__this, NULL);
		NullCheck(L_0);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_1;
		L_1 = RLPSignedDataHashBuilder_get_Data_m2904CB6BA451E29C691C9053D1CD2E66DDD2A904_inline(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2 = 7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Byte[] Nethereum.Model.LegacyTransactionChainId::get_SHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LegacyTransactionChainId_get_SHash_m902B105786DA02B98668FAA07E340FB8288B53A8 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, const RuntimeMethod* method) 
{
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0;
		L_0 = SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline(__this, NULL);
		NullCheck(L_0);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_1;
		L_1 = RLPSignedDataHashBuilder_get_Data_m2904CB6BA451E29C691C9053D1CD2E66DDD2A904_inline(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2 = 8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.String Nethereum.Model.LegacyTransactionChainId::ToJsonHex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LegacyTransactionChainId_ToJsonHex_m78F8F996167D1062EC9B9A927D902E4AB029A59D (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AB5535AF257A256354EDD3534BF558438FAA134);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31C41112B7DD380345C2F6555DB2A970209CCB01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56CFF3F3D81F5D74264172D67648D4797F5747B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D64FD021538BBCA256D783E52916EC66D2582E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral9D64FD021538BBCA256D783E52916EC66D2582E4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9D64FD021538BBCA256D783E52916EC66D2582E4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = SignedLegacyTransaction_get_Nonce_m09DCD71F3195BD18A6D0219663CF1CC4A0CAF411(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_3, (bool)0, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral31C41112B7DD380345C2F6555DB2A970209CCB01);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral31C41112B7DD380345C2F6555DB2A970209CCB01);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = SignedLegacyTransaction_get_GasPrice_m9C6865A1E3106284986F0B2773AE52479A67208C(__this, NULL);
		String_t* L_8;
		L_8 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_7, (bool)0, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_6;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral31C41112B7DD380345C2F6555DB2A970209CCB01);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral31C41112B7DD380345C2F6555DB2A970209CCB01);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = SignedLegacyTransaction_get_GasLimit_mDDE3E33D0C1D3FA32782C292EAFB928A60163A40(__this, NULL);
		String_t* L_12;
		L_12 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_11, (bool)0, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_10;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral31C41112B7DD380345C2F6555DB2A970209CCB01);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral31C41112B7DD380345C2F6555DB2A970209CCB01);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = SignedLegacyTransaction_get_ReceiveAddress_mA2D05DA97B5EFA87E87C53969C2DA651AD1E6B82(__this, NULL);
		String_t* L_16;
		L_16 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_15, (bool)0, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_14;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral31C41112B7DD380345C2F6555DB2A970209CCB01);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral31C41112B7DD380345C2F6555DB2A970209CCB01);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
		L_19 = SignedLegacyTransaction_get_Value_mB54148EACF4CFA332AAEB85B65FDA0073D381549(__this, NULL);
		String_t* L_20;
		L_20 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_19, (bool)0, NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_18;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral31C41112B7DD380345C2F6555DB2A970209CCB01);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral31C41112B7DD380345C2F6555DB2A970209CCB01);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = SignedLegacyTransaction_get_Data_m0AEBA5B694F5E81BE631AA2A86379108D0D563B8(__this, NULL);
		String_t* L_24;
		L_24 = SignedLegacyTransactionBase_ToHex_m58933B6818C70EA253C26F1C6EB108679FF735F8(L_23, NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_24);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_22;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral31C41112B7DD380345C2F6555DB2A970209CCB01);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral31C41112B7DD380345C2F6555DB2A970209CCB01);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
		L_27 = LegacyTransactionChainId_get_ChainId_mE15EC4FEE13CAF17C0A834AEE750CE37BC6001F3(__this, NULL);
		String_t* L_28;
		L_28 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_27, (bool)0, NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)L_28);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_26;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral31C41112B7DD380345C2F6555DB2A970209CCB01);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral31C41112B7DD380345C2F6555DB2A970209CCB01);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_29;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31;
		L_31 = LegacyTransactionChainId_get_RHash_mDCD8A147B2EC040008BD9093AD9CA1CB08BEF686(__this, NULL);
		String_t* L_32;
		L_32 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_31, (bool)0, NULL);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_32);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)L_32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_30;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral31C41112B7DD380345C2F6555DB2A970209CCB01);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteral31C41112B7DD380345C2F6555DB2A970209CCB01);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35;
		L_35 = LegacyTransactionChainId_get_SHash_m902B105786DA02B98668FAA07E340FB8288B53A8(__this, NULL);
		String_t* L_36;
		L_36 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_35, (bool)0, NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_36);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)L_36);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_34;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		String_t* L_38;
		L_38 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_37, NULL);
		V_0 = L_38;
		RuntimeObject* L_39;
		L_39 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(16 /* Nethereum.Model.ISignature Nethereum.Model.SignedTransaction::get_Signature() */, __this);
		if (!L_39)
		{
			goto IL_0161;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_40;
		String_t* L_42 = V_0;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_42);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_41;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, _stringLiteral2AB5535AF257A256354EDD3534BF558438FAA134);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2AB5535AF257A256354EDD3534BF558438FAA134);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = L_43;
		RuntimeObject* L_45;
		L_45 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(16 /* Nethereum.Model.ISignature Nethereum.Model.SignedTransaction::get_Signature() */, __this);
		NullCheck(L_45);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46;
		L_46 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(2 /* System.Byte[] Nethereum.Model.ISignature::get_V() */, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_45);
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_47;
		L_47 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_46, (bool)0, NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_47);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_47);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = L_44;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, _stringLiteral56CFF3F3D81F5D74264172D67648D4797F5747B9);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral56CFF3F3D81F5D74264172D67648D4797F5747B9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = L_48;
		RuntimeObject* L_50;
		L_50 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(16 /* Nethereum.Model.ISignature Nethereum.Model.SignedTransaction::get_Signature() */, __this);
		NullCheck(L_50);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51;
		L_51 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.Model.ISignature::get_R() */, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_50);
		String_t* L_52;
		L_52 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_51, (bool)0, NULL);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_52);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_52);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = L_49;
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, _stringLiteral56CFF3F3D81F5D74264172D67648D4797F5747B9);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral56CFF3F3D81F5D74264172D67648D4797F5747B9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_54 = L_53;
		RuntimeObject* L_55;
		L_55 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(16 /* Nethereum.Model.ISignature Nethereum.Model.SignedTransaction::get_Signature() */, __this);
		NullCheck(L_55);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56;
		L_56 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Byte[] Nethereum.Model.ISignature::get_S() */, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_55);
		String_t* L_57;
		L_57 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_56, (bool)0, NULL);
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_57);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_57);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = L_54;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		String_t* L_59;
		L_59 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_58, NULL);
		V_0 = L_59;
	}

IL_0161:
	{
		String_t* L_60 = V_0;
		String_t* L_61;
		L_61 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_60, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		return L_61;
	}
}
// System.Byte[][] Nethereum.Model.LegacyTransactionChainId::GetElementsInOrder(System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* LegacyTransactionChainId_GetElementsInOrder_mB60AD855FEDE959652C6AD1194C08FE3CDAB6334 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___nonce0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___gasPrice1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___gasLimit2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___receiveAddress3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data5, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___chainId6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___receiveAddress3;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_BYTE_ARRAY_1;
		___receiveAddress3 = L_1;
	}

IL_000b:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_2 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_3 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___nonce0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_4);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_5 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___gasPrice1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_6);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_7 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___gasLimit2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_8);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_9 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___receiveAddress3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_10);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_11 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___value4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_12);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_13 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___data5;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_14);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_15 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___chainId6;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(6), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_16);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_17 = L_15;
		il2cpp_codegen_runtime_class_init_inline(LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ((LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_StaticFields*)il2cpp_codegen_static_fields_for(LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var))->___RHASH_DEFAULT_5;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(7), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_18);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_19 = L_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ((LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_StaticFields*)il2cpp_codegen_static_fields_for(LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var))->___SHASH_DEFAULT_6;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(8), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_20);
		return L_19;
	}
}
// System.Void Nethereum.Model.LegacyTransactionChainId::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransactionChainId__cctor_m1732926F6B1990F1E8E6F257C4F5A36E6F4AFEBF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mB8A2D4491D58D2CFEDB5F7086A4D41E2BA349811(0, NULL);
		((LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_StaticFields*)il2cpp_codegen_static_fields_for(LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var))->___RHASH_DEFAULT_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_StaticFields*)il2cpp_codegen_static_fields_for(LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var))->___RHASH_DEFAULT_5), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mB8A2D4491D58D2CFEDB5F7086A4D41E2BA349811(0, NULL);
		((LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_StaticFields*)il2cpp_codegen_static_fields_for(LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var))->___SHASH_DEFAULT_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_StaticFields*)il2cpp_codegen_static_fields_for(LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var))->___SHASH_DEFAULT_6), (void*)L_1);
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
// System.String Nethereum.Model.Log::get_Address()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Log_get_Address_m81F8BC5C2B100586D05555A684918DA177B7D9D7 (Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAddressU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.Model.Log::set_Address(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_set_Address_m05D55D5AF6779099FBC150E7A8383B628A3BD32A (Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CAddressU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAddressU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Byte[] Nethereum.Model.Log::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Log_get_Data_mA7F9644C2428E8D5DBDDA58C3D0EF22B7CA9D0AB (Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CDataU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.Model.Log::set_Data(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_set_Data_mD63ED2DB2693974C820D44396C0E7EC8D852D2C4 (Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CDataU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> Nethereum.Model.Log::get_Topics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* Log_get_Topics_mFCD8D8F3F128E1E5B0E1464DC85B5BBC184CDE15 (Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2* __this, const RuntimeMethod* method) 
{
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3CTopicsU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Nethereum.Model.Log::set_Topics(System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_set_Topics_m337309D56AA5905ADC79C988BB7AB61C89E30E20 (Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___value0, const RuntimeMethod* method) 
{
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___value0;
		__this->___U3CTopicsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTopicsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// Nethereum.Model.Log Nethereum.Model.Log::Create(System.Byte[],System.String,System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2* Log_Create_mAFE837A3E0138D8ABD3FE87C883C186539F03C26 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, String_t* ___address1, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___topics2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m850E1C1D350B9CACB7C49218DFA8F1F0F6FC072D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2* L_0 = (Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2*)il2cpp_codegen_object_new(Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Log__ctor_mA3585F4FD901EE62A3FD94594A53CD0D7154B040(L_0, NULL);
		Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2* L_1 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___data0;
		NullCheck(L_1);
		Log_set_Data_mD63ED2DB2693974C820D44396C0E7EC8D852D2C4_inline(L_1, L_2, NULL);
		Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2* L_3 = L_1;
		String_t* L_4 = ___address1;
		NullCheck(L_3);
		Log_set_Address_m05D55D5AF6779099FBC150E7A8383B628A3BD32A_inline(L_3, L_4, NULL);
		Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2* L_5 = L_3;
		NullCheck(L_5);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_6;
		L_6 = Log_get_Topics_mFCD8D8F3F128E1E5B0E1464DC85B5BBC184CDE15_inline(L_5, NULL);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_7 = ___topics2;
		NullCheck(L_6);
		List_1_AddRange_m850E1C1D350B9CACB7C49218DFA8F1F0F6FC072D(L_6, (RuntimeObject*)L_7, List_1_AddRange_m850E1C1D350B9CACB7C49218DFA8F1F0F6FC072D_RuntimeMethod_var);
		return L_5;
	}
}
// Nethereum.Model.Log Nethereum.Model.Log::Create(System.String,System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2* Log_Create_m47EA17F602ABD1E5EBF01423A9F082F703D97827 (String_t* ___address0, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___topics1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___address0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_1 = ___topics1;
		Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2* L_2;
		L_2 = Log_Create_mAFE837A3E0138D8ABD3FE87C883C186539F03C26((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void Nethereum.Model.Log::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log__ctor_mA3585F4FD901EE62A3FD94594A53CD0D7154B040 (Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_0, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		__this->___U3CTopicsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTopicsU3Ek__BackingField_2), (void*)L_0);
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
// System.Byte[] Nethereum.Model.LogBloomFilter::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LogBloomFilter_get_Data_m39F6927C8F2C682C5D00639171D121BE83941643 (LogBloomFilter_t045C197013D8F095751B16A60335761C456A7925* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_2;
		return L_0;
	}
}
// System.Void Nethereum.Model.LogBloomFilter::SetBits(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogBloomFilter_SetBits_mC6431BBAF9BB75951694E543620AD696A1B2796E (LogBloomFilter_t045C197013D8F095751B16A60335761C456A7925* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hashValue0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0023;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___hashValue0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___hashValue0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_3&7))<<8)), ((int32_t)((int32_t)L_7&((int32_t)255)))));
		int32_t L_8 = V_1;
		LogBloomFilter_SetBit_mC7A4401F4C59A7DE1D11AD829C2F92B744251E1B(__this, L_8, NULL);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 2));
	}

IL_0023:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) < ((int32_t)6)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Nethereum.Model.LogBloomFilter::SetBit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogBloomFilter_SetBit_mC7A4401F4C59A7DE1D11AD829C2F92B744251E1B (LogBloomFilter_t045C197013D8F095751B16A60335761C456A7925* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___index0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)255), ((int32_t)(L_0/8))));
		int32_t L_1 = ___index0;
		V_1 = ((int32_t)(L_1%8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____data_2;
		int32_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____data_2;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = V_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_7|((int32_t)(1<<((int32_t)(L_8&((int32_t)31)))))))));
		return;
	}
}
// System.Void Nethereum.Model.LogBloomFilter::AddLog(Nethereum.Model.Log)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogBloomFilter_AddLog_mB26EAF07F9FCDD58B3783BEFFDB7CB601524D053 (LogBloomFilter_t045C197013D8F095751B16A60335761C456A7925* __this, Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2* ___log0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* V_0 = NULL;
	Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_0;
		L_0 = Sha3Keccack_get_Current_mD6FFC538783F0A2C61503A659F979F136C302D91_inline(NULL);
		V_0 = L_0;
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_1 = V_0;
		Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2* L_2 = ___log0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Log_get_Address_m81F8BC5C2B100586D05555A684918DA177B7D9D7_inline(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_3, NULL);
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Sha3Keccack_CalculateHash_mE94324F2BF9D80A18C59A08CF5F0735B78ECAAA0(L_1, L_4, NULL);
		LogBloomFilter_SetBits_mC6431BBAF9BB75951694E543620AD696A1B2796E(__this, L_5, NULL);
		Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2* L_6 = ___log0;
		NullCheck(L_6);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_7;
		L_7 = Log_get_Topics_mFCD8D8F3F128E1E5B0E1464DC85B5BBC184CDE15_inline(L_6, NULL);
		NullCheck(L_7);
		Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC L_8;
		L_8 = List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D(L_7, List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var);
		V_1 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F((&V_1), Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0040_1;
			}

IL_002b_1:
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
				L_9 = Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_inline((&V_1), Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var);
				V_2 = L_9;
				Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_10 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_2;
				NullCheck(L_10);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
				L_12 = Sha3Keccack_CalculateHash_mE94324F2BF9D80A18C59A08CF5F0735B78ECAAA0(L_10, L_11, NULL);
				LogBloomFilter_SetBits_mC6431BBAF9BB75951694E543620AD696A1B2796E(__this, L_12, NULL);
			}

IL_0040_1:
			{
				bool L_13;
				L_13 = Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4((&V_1), Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_002b_1;
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
		return;
	}
}
// System.Void Nethereum.Model.LogBloomFilter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogBloomFilter__ctor_m20EDADBC82761B2134EA537DCEA6603453406B17 (LogBloomFilter_t045C197013D8F095751B16A60335761C456A7925* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->____data_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_2), (void*)L_0);
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
// Nethereum.Model.SignedData Nethereum.Model.RLPSignedDataDecoder::DecodeSigned(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* RLPSignedDataDecoder_DecodeSigned_m9E99142C8C826B47123A783E0418388C0634AC25 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawdata0, int32_t ___numberOfEncodingElements1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* V_0 = NULL;
	RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* V_1 = NULL;
	Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* V_2 = NULL;
	int32_t V_3 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___rawdata0;
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = RLP_Decode_m25755DBDC9A4DD532BC45B2C9BBBB03E00FA0C33(L_0, NULL);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_2 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_2, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		V_0 = L_2;
		V_1 = ((RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6*)CastclassClass((RuntimeObject*)L_1, RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var));
		V_3 = 0;
		goto IL_002c;
	}

IL_0016:
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_3 = V_0;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_4 = V_1;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_4, L_5, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_3);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_3, L_7, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		int32_t L_8 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002c:
	{
		int32_t L_9 = V_3;
		int32_t L_10 = ___numberOfEncodingElements1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0016;
		}
	}
	{
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_11 = V_1;
		int32_t L_12 = ___numberOfEncodingElements1;
		Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* L_13;
		L_13 = RLPSignedDataDecoder_DecodeSignature_mD1D6AFF5447AA45CA7FD4A31CA03566086FCC00B(L_11, L_12, NULL);
		V_2 = L_13;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_14 = V_0;
		NullCheck(L_14);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_15;
		L_15 = List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A(L_14, List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* L_16 = V_2;
		SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* L_17 = (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F*)il2cpp_codegen_object_new(SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		SignedData__ctor_m11E3AB4DBAD0E8CB950901ED4FD64C8FF0B2E611(L_17, L_15, L_16, NULL);
		return L_17;
	}
}
// Nethereum.Model.Signature Nethereum.Model.RLPSignedDataDecoder::DecodeSignature(Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* RLPSignedDataDecoder_DecodeSignature_mD1D6AFF5447AA45CA7FD4A31CA03566086FCC00B (RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* ___decodedElements0, int32_t ___numberOfEncodingElements1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mCBDA870B39CA8872AADBA32CF4EA47C07E67893D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		V_0 = (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999*)NULL;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_0 = ___decodedElements0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mCBDA870B39CA8872AADBA32CF4EA47C07E67893D_inline(L_0, List_1_get_Count_mCBDA870B39CA8872AADBA32CF4EA47C07E67893D_RuntimeMethod_var);
		int32_t L_2 = ___numberOfEncodingElements1;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0062;
		}
	}
	{
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_3 = ___decodedElements0;
		int32_t L_4 = ___numberOfEncodingElements1;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_3, ((int32_t)il2cpp_codegen_add(L_4, 1)), List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_5);
		if (!L_6)
		{
			goto IL_0062;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		V_1 = L_7;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_8 = ___decodedElements0;
		int32_t L_9 = ___numberOfEncodingElements1;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_8, L_9, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_10);
		if (!L_11)
		{
			goto IL_003d;
		}
	}
	{
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_12 = ___decodedElements0;
		int32_t L_13 = ___numberOfEncodingElements1;
		NullCheck(L_12);
		RuntimeObject* L_14;
		L_14 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_12, L_13, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_14);
		V_1 = L_15;
	}

IL_003d:
	{
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_16 = ___decodedElements0;
		int32_t L_17 = ___numberOfEncodingElements1;
		NullCheck(L_16);
		RuntimeObject* L_18;
		L_18 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_16, ((int32_t)il2cpp_codegen_add(L_17, 1)), List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_18);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
		L_19 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_18);
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_20 = ___decodedElements0;
		int32_t L_21 = ___numberOfEncodingElements1;
		NullCheck(L_20);
		RuntimeObject* L_22;
		L_22 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_20, ((int32_t)il2cpp_codegen_add(L_21, 2)), List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_22);
		V_2 = L_23;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_1;
		Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* L_26 = (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999*)il2cpp_codegen_object_new(Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Signature__ctor_m0105E56945CA0AD192175F0DB64661AF6AFCAC24(L_26, L_19, L_24, L_25, NULL);
		V_0 = L_26;
	}

IL_0062:
	{
		Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* L_27 = V_0;
		return L_27;
	}
}
// System.Void Nethereum.Model.RLPSignedDataDecoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataDecoder__ctor_m8C01E08441CC9F64861A0A389615FA719CF60485 (RLPSignedDataDecoder_t524D0BCC632707E23310DD9AC302AF8AB1023806* __this, const RuntimeMethod* method) 
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
// System.Byte[] Nethereum.Model.RLPSignedDataEncoder::EncodeSigned(Nethereum.Model.SignedData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLPSignedDataEncoder_EncodeSigned_mDE2A2B39F05CCD1293D333689FCB4F4C93A05014 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* ___signedData0, int32_t ___numberOfElements1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* V_0 = NULL;
	int32_t V_1 = 0;
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_0, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0021;
	}

IL_000a:
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_1 = V_0;
		SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* L_2 = ___signedData0;
		NullCheck(L_2);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_3;
		L_3 = SignedData_get_Data_m0B4B3B958EDD8340E984A868C03F025552ED650B_inline(L_2, NULL);
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_6, NULL);
		NullCheck(L_1);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_1, L_7, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0021:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = ___numberOfElements1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000a;
		}
	}
	{
		SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* L_11 = ___signedData0;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = SignedData_GetSignature_m5BCFE6CA47DA7D778E78995CC18BBC9D50733C88(L_11, NULL);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_13 = V_0;
		RLPSignedDataEncoder_AddSignatureToEncodedData_m9A1FE50EE75C591B26BF48F7A6FBB6B30A8A97DA(L_12, L_13, NULL);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_14 = V_0;
		NullCheck(L_14);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_15;
		L_15 = List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A(L_14, List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = RLP_EncodeList_m2A2C2A6B4DDA95C331AECF96926B0D9C1B16FE05(L_15, NULL);
		return L_16;
	}
}
// System.Void Nethereum.Model.RLPSignedDataEncoder::AddSignatureToEncodedData(Nethereum.Model.ISignature,System.Collections.Generic.List`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataEncoder_AddSignatureToEncodedData_m9A1FE50EE75C591B26BF48F7A6FBB6B30A8A97DA (RuntimeObject* ___signature0, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___encodedData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___signature0;
		if (!L_0)
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_1 = ___signature0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(2 /* System.Byte[] Nethereum.Model.ISignature::get_V() */, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_3 = ___signature0;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(2 /* System.Byte[] Nethereum.Model.ISignature::get_V() */, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		if (!(((RuntimeArray*)L_4)->max_length))
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_5 = ___signature0;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(2 /* System.Byte[] Nethereum.Model.ISignature::get_V() */, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		int32_t L_7 = 0;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if (L_8)
		{
			goto IL_0026;
		}
	}

IL_001e:
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_BYTE_ARRAY_1;
		V_0 = L_9;
		goto IL_002d;
	}

IL_0026:
	{
		RuntimeObject* L_10 = ___signature0;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(2 /* System.Byte[] Nethereum.Model.ISignature::get_V() */, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_10);
		V_0 = L_11;
	}

IL_002d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_12, NULL);
		V_0 = L_13;
		RuntimeObject* L_14 = ___signature0;
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.Model.ISignature::get_R() */, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = ConvertorForRLPEncodingExtensions_TrimZeroBytes_mEAF1B87C87761C26491C2F3106011097B4E6D99F(L_15, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_16, NULL);
		V_1 = L_17;
		RuntimeObject* L_18 = ___signature0;
		NullCheck(L_18);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
		L_19 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Byte[] Nethereum.Model.ISignature::get_S() */, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_18);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
		L_20 = ConvertorForRLPEncodingExtensions_TrimZeroBytes_mEAF1B87C87761C26491C2F3106011097B4E6D99F(L_19, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21;
		L_21 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_20, NULL);
		V_2 = L_21;
		goto IL_0079;
	}

IL_0058:
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_BYTE_ARRAY_1;
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_22, NULL);
		V_0 = L_23;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_BYTE_ARRAY_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_24, NULL);
		V_1 = L_25;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_BYTE_ARRAY_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
		L_27 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_26, NULL);
		V_2 = L_27;
	}

IL_0079:
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_28 = ___encodedData1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_0;
		NullCheck(L_28);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_28, L_29, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_30 = ___encodedData1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_1;
		NullCheck(L_30);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_30, L_31, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_32 = ___encodedData1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_2;
		NullCheck(L_32);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_32, L_33, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		return;
	}
}
// System.Void Nethereum.Model.RLPSignedDataEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataEncoder__ctor_mE69C00370EBEC4252E915246E76ABB8842A3981E (RLPSignedDataEncoder_tDE834D43B0E4CA7BFCCA4C893DC0CBDD9A369E2E* __this, const RuntimeMethod* method) 
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
// Nethereum.Model.ISignature Nethereum.Model.RLPSignedDataHashBuilder::get_Signature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RLPSignedDataHashBuilder_get_Signature_m30DFAA97567C1D3B8B893DEB71F24F8FC4C89078 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CSignatureU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Nethereum.Model.RLPSignedDataHashBuilder::set_Signature(Nethereum.Model.ISignature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder_set_Signature_mD3719D97D6BFEFBF79830FB803E52E276E1D8D0F (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CSignatureU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSignatureU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.Model.RLPSignedDataHashBuilder::.ctor(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder__ctor_m9A316BB70554992BF4F8925D854F9128F612D3A3 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawData0, int32_t ___numberOfEncodingElements1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___rawData0;
		__this->___rlpSignedEncoded_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rlpSignedEncoded_1), (void*)L_0);
		int32_t L_1 = ___numberOfEncodingElements1;
		__this->___numberOfEncodingElements_0 = L_1;
		RLPSignedDataHashBuilder_Decode_mF1CB14EC8244311EAE2644F8264FC6B841BAEE1C(__this, NULL);
		return;
	}
}
// System.Void Nethereum.Model.RLPSignedDataHashBuilder::.ctor(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder__ctor_m8B68A14C93AA88885686C4F348A23EA597F51BCF (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___data0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = ___data0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_1 = ___data0;
		NullCheck(L_1);
		RLPSignedDataHashBuilder__ctor_m847B36519054299C9A34B9412FADF502F0A47B11(__this, L_0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		return;
	}
}
// System.Void Nethereum.Model.RLPSignedDataHashBuilder::.ctor(System.Byte[][],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder__ctor_m847B36519054299C9A34B9412FADF502F0A47B11 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___data0, int32_t ___numberOfEncodingElements1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___numberOfEncodingElements1;
		__this->___numberOfEncodingElements_0 = L_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_1 = ___data0;
		RLPSignedDataHashBuilder_set_Data_mAB87DA8AC2B612D1A97F526ADAC70204B1551B9C_inline(__this, L_1, NULL);
		return;
	}
}
// System.Void Nethereum.Model.RLPSignedDataHashBuilder::.ctor(System.Byte[][],System.Byte[],System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder__ctor_m5FCCB2FD899F115BAF2557124655C4CFEED47E6D (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___data0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s2, uint8_t ___v3, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = ___data0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___r1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___s2;
		uint8_t L_3 = ___v3;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_4 = ___data0;
		NullCheck(L_4);
		RLPSignedDataHashBuilder__ctor_m4DE4C697857C7978FEDDF4C83917B8C76658E4B5(__this, L_0, L_1, L_2, L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		return;
	}
}
// System.Void Nethereum.Model.RLPSignedDataHashBuilder::.ctor(System.Byte[][],System.Byte[],System.Byte[],System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder__ctor_m4DE4C697857C7978FEDDF4C83917B8C76658E4B5 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___data0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s2, uint8_t ___v3, int32_t ___numberOfEncodingElements4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___numberOfEncodingElements4;
		__this->___numberOfEncodingElements_0 = L_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_1 = ___data0;
		RLPSignedDataHashBuilder_set_Data_mAB87DA8AC2B612D1A97F526ADAC70204B1551B9C_inline(__this, L_1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___r1;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___s2;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___r1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___s2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6;
		uint8_t L_8 = ___v3;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_8);
		Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* L_9 = (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999*)il2cpp_codegen_object_new(Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Signature__ctor_m0105E56945CA0AD192175F0DB64661AF6AFCAC24(L_9, L_4, L_5, L_7, NULL);
		RLPSignedDataHashBuilder_set_Signature_mD3719D97D6BFEFBF79830FB803E52E276E1D8D0F_inline(__this, L_9, NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void Nethereum.Model.RLPSignedDataHashBuilder::.ctor(System.Byte[][],System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder__ctor_m245F2E7E2CFD6770A0FEAFBBD8FA85B9855C3B4E (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___data0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___v3, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = ___data0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___r1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___s2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___v3;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_4 = ___data0;
		NullCheck(L_4);
		RLPSignedDataHashBuilder__ctor_m8657B6E10FE92E8AA9DA990AAE9AFBC1114A525B(__this, L_0, L_1, L_2, L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		return;
	}
}
// System.Void Nethereum.Model.RLPSignedDataHashBuilder::.ctor(System.Byte[][],System.Byte[],System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder__ctor_m8657B6E10FE92E8AA9DA990AAE9AFBC1114A525B (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___data0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___v3, int32_t ___numberOfEncodingElements4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___numberOfEncodingElements4;
		__this->___numberOfEncodingElements_0 = L_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_1 = ___data0;
		RLPSignedDataHashBuilder_set_Data_mAB87DA8AC2B612D1A97F526ADAC70204B1551B9C_inline(__this, L_1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___r1;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___s2;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___v3;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___r1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___s2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___v3;
		Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* L_8 = (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999*)il2cpp_codegen_object_new(Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Signature__ctor_m0105E56945CA0AD192175F0DB64661AF6AFCAC24(L_8, L_5, L_6, L_7, NULL);
		RLPSignedDataHashBuilder_set_Signature_mD3719D97D6BFEFBF79830FB803E52E276E1D8D0F_inline(__this, L_8, NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Byte[] Nethereum.Model.RLPSignedDataHashBuilder::get_RawHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLPSignedDataHashBuilder_get_RawHash_mBDE019C306B735B6FDE62E3A511F60218036EE07 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = RLPSignedDataHashBuilder_GetRLPEncodedRaw_m18AA664C1D6005E7C133A7A25492B8D59BD492EF(__this, NULL);
		V_0 = L_0;
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_1 = (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6*)il2cpp_codegen_object_new(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Sha3Keccack__ctor_m1A1B72B31D347C8FEEAB51607616A6C4992DE7D0(L_1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = Sha3Keccack_CalculateHash_mE94324F2BF9D80A18C59A08CF5F0735B78ECAAA0(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Byte[] Nethereum.Model.RLPSignedDataHashBuilder::get_Hash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLPSignedDataHashBuilder_get_Hash_m3795C1C98DFB1020A3D228940C84AB552EAF44C3 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = RLPSignedDataHashBuilder_GetRLPEncoded_m75958043E912323BD3DB1B878556737C2A807B99(__this, NULL);
		V_0 = L_0;
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_1 = (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6*)il2cpp_codegen_object_new(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Sha3Keccack__ctor_m1A1B72B31D347C8FEEAB51607616A6C4992DE7D0(L_1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = Sha3Keccack_CalculateHash_mE94324F2BF9D80A18C59A08CF5F0735B78ECAAA0(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Byte[][] Nethereum.Model.RLPSignedDataHashBuilder::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* RLPSignedDataHashBuilder_get_Data_m2904CB6BA451E29C691C9053D1CD2E66DDD2A904 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = __this->___U3CDataU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Nethereum.Model.RLPSignedDataHashBuilder::set_Data(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder_set_Data_mAB87DA8AC2B612D1A97F526ADAC70204B1551B9C (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = ___value0;
		__this->___U3CDataU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Byte[] Nethereum.Model.RLPSignedDataHashBuilder::GetRLPEncoded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLPSignedDataHashBuilder_GetRLPEncoded_m75958043E912323BD3DB1B878556737C2A807B99 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___rlpSignedEncoded_1;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___rlpSignedEncoded_1;
		return L_1;
	}

IL_000f:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_2;
		L_2 = RLPSignedDataHashBuilder_get_Data_m2904CB6BA451E29C691C9053D1CD2E66DDD2A904_inline(__this, NULL);
		RuntimeObject* L_3;
		L_3 = RLPSignedDataHashBuilder_get_Signature_m30DFAA97567C1D3B8B893DEB71F24F8FC4C89078_inline(__this, NULL);
		SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* L_4 = (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F*)il2cpp_codegen_object_new(SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SignedData__ctor_m11E3AB4DBAD0E8CB950901ED4FD64C8FF0B2E611(L_4, L_2, L_3, NULL);
		int32_t L_5 = __this->___numberOfEncodingElements_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = RLPSignedDataEncoder_EncodeSigned_mDE2A2B39F05CCD1293D333689FCB4F4C93A05014(L_4, L_5, NULL);
		__this->___rlpSignedEncoded_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rlpSignedEncoded_1), (void*)L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___rlpSignedEncoded_1;
		return L_7;
	}
}
// System.Byte[] Nethereum.Model.RLPSignedDataHashBuilder::GetRLPEncodedRaw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLPSignedDataHashBuilder_GetRLPEncodedRaw_m18AA664C1D6005E7C133A7A25492B8D59BD492EF (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0;
		L_0 = RLPSignedDataHashBuilder_get_Data_m2904CB6BA451E29C691C9053D1CD2E66DDD2A904_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = RLP_EncodeDataItemsAsElementOrListAndCombineAsList_m03BF5928F42FA0AE887AF871B1D36202A3A6D791(L_0, (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL, NULL);
		__this->___rlpRawWithNoSignature_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rlpRawWithNoSignature_2), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___rlpRawWithNoSignature_2;
		return L_2;
	}
}
// System.Void Nethereum.Model.RLPSignedDataHashBuilder::AppendData(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder_AppendData_mEFBAC31FD073282C468737FDD4CA93A8960C60D9 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___extraData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m850E1C1D350B9CACB7C49218DFA8F1F0F6FC072D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* V_0 = NULL;
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_0, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_1 = V_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_2;
		L_2 = RLPSignedDataHashBuilder_get_Data_m2904CB6BA451E29C691C9053D1CD2E66DDD2A904_inline(__this, NULL);
		NullCheck(L_1);
		List_1_AddRange_m850E1C1D350B9CACB7C49218DFA8F1F0F6FC072D(L_1, (RuntimeObject*)L_2, List_1_AddRange_m850E1C1D350B9CACB7C49218DFA8F1F0F6FC072D_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_3 = V_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_4 = ___extraData0;
		NullCheck(L_3);
		List_1_AddRange_m850E1C1D350B9CACB7C49218DFA8F1F0F6FC072D(L_3, (RuntimeObject*)L_4, List_1_AddRange_m850E1C1D350B9CACB7C49218DFA8F1F0F6FC072D_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_5 = V_0;
		NullCheck(L_5);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_6;
		L_6 = List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A(L_5, List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		RLPSignedDataHashBuilder_set_Data_mAB87DA8AC2B612D1A97F526ADAC70204B1551B9C_inline(__this, L_6, NULL);
		return;
	}
}
// System.Void Nethereum.Model.RLPSignedDataHashBuilder::SetSignature(Nethereum.Model.ISignature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder_SetSignature_m4FD99F899D0A65D258BA7CFCD0BFCEC5F7CD7949 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, RuntimeObject* ___signature0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___signature0;
		RLPSignedDataHashBuilder_set_Signature_mD3719D97D6BFEFBF79830FB803E52E276E1D8D0F_inline(__this, L_0, NULL);
		__this->___rlpSignedEncoded_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rlpSignedEncoded_1), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		return;
	}
}
// System.Boolean Nethereum.Model.RLPSignedDataHashBuilder::IsVSignatureForChain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLPSignedDataHashBuilder_IsVSignatureForChain_mFEA79AEADCE0D30CAE9FFF4D241BFA9BEEBA40A2 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = RLPSignedDataHashBuilder_get_Signature_m30DFAA97567C1D3B8B893DEB71F24F8FC4C89078_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB58817C2B95943D974A08804A5B31197F83F4F7F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RLPSignedDataHashBuilder_IsVSignatureForChain_mFEA79AEADCE0D30CAE9FFF4D241BFA9BEEBA40A2_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2;
		L_2 = RLPSignedDataHashBuilder_get_Signature_m30DFAA97567C1D3B8B893DEB71F24F8FC4C89078_inline(__this, NULL);
		bool L_3;
		L_3 = SignatureExtensions_IsVSignedForChain_m69DDB826D84F6645FACE71923AAE9CAB88297C56(L_2, NULL);
		return L_3;
	}
}
// System.Void Nethereum.Model.RLPSignedDataHashBuilder::Decode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder_Decode_mF1CB14EC8244311EAE2644F8264FC6B841BAEE1C (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) 
{
	SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___rlpSignedEncoded_1;
		int32_t L_1 = __this->___numberOfEncodingElements_0;
		SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* L_2;
		L_2 = RLPSignedDataDecoder_DecodeSigned_m9E99142C8C826B47123A783E0418388C0634AC25(L_0, L_1, NULL);
		V_0 = L_2;
		SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* L_3 = V_0;
		NullCheck(L_3);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_4;
		L_4 = SignedData_get_Data_m0B4B3B958EDD8340E984A868C03F025552ED650B_inline(L_3, NULL);
		RLPSignedDataHashBuilder_set_Data_mAB87DA8AC2B612D1A97F526ADAC70204B1551B9C_inline(__this, L_4, NULL);
		SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = SignedData_GetSignature_m5BCFE6CA47DA7D778E78995CC18BBC9D50733C88(L_5, NULL);
		RLPSignedDataHashBuilder_set_Signature_mD3719D97D6BFEFBF79830FB803E52E276E1D8D0F_inline(__this, L_6, NULL);
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
// System.Void Nethereum.Model.Signature::.ctor(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Signature__ctor_m0105E56945CA0AD192175F0DB64661AF6AFCAC24 (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___v2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___r0;
		Signature_set_R_m261A6B7900366DC1E27C4AAA3EBFB341B0F3BF55_inline(__this, L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___s1;
		Signature_set_S_mD8491BE0225CF5FEC82804652442E023460B8393_inline(__this, L_1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___v2;
		Signature_set_V_m6727A9B12FE4BDA7D1F033B3A1B084C7320902BA_inline(__this, L_2, NULL);
		return;
	}
}
// System.Void Nethereum.Model.Signature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Signature__ctor_m380DD863FBD3F5C076A56B2A4BFC8384C1E3462E (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Byte[] Nethereum.Model.Signature::get_R()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Signature_get_R_mA7D7770AB9F63885830C2EBFB81BE35503DC9AFD (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CRU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.Model.Signature::set_R(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Signature_set_R_m261A6B7900366DC1E27C4AAA3EBFB341B0F3BF55 (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CRU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Byte[] Nethereum.Model.Signature::get_S()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Signature_get_S_m1709E5CA9B9EDA3F3747117834A622CEF9CE96BF (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CSU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.Model.Signature::set_S(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Signature_set_S_mD8491BE0225CF5FEC82804652442E023460B8393 (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CSU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Byte[] Nethereum.Model.Signature::get_V()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Signature_get_V_m38057C8BA3E63CB9DAE239B700DC22A1396D195E (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CVU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Nethereum.Model.Signature::set_V(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Signature_set_V_m6727A9B12FE4BDA7D1F033B3A1B084C7320902BA (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CVU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CVU3Ek__BackingField_2), (void*)L_0);
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
// System.Boolean Nethereum.Model.SignatureExtensions::IsVSignedForChain(Nethereum.Model.ISignature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SignatureExtensions_IsVSignedForChain_m69DDB826D84F6645FACE71923AAE9CAB88297C56 (RuntimeObject* ___signature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___signature0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(2 /* System.Byte[] Nethereum.Model.ISignature::get_V() */, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_0);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mAD7F985D3961A7070872967A541A414B9B5D13ED(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BigInteger_op_GreaterThanOrEqual_mC867614569FD633E14E1F9AE662451AEEBA536CF(L_2, ((int64_t)((int32_t)35)), NULL);
		return L_3;
	}
}
// System.Boolean Nethereum.Model.SignatureExtensions::IsVSignedForLegacy(Nethereum.Model.ISignature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SignatureExtensions_IsVSignedForLegacy_mD64739169868D12E6C87367D00209DCD39BD92F3 (RuntimeObject* ___signature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___signature0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(2 /* System.Byte[] Nethereum.Model.ISignature::get_V() */, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_0);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mAD7F985D3961A7070872967A541A414B9B5D13ED(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BigInteger_op_GreaterThanOrEqual_mC867614569FD633E14E1F9AE662451AEEBA536CF(L_2, ((int64_t)((int32_t)27)), NULL);
		return L_3;
	}
}
// System.Boolean Nethereum.Model.SignatureExtensions::IsVSignedForYParity(Nethereum.Model.ISignature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SignatureExtensions_IsVSignedForYParity_mBF990AA89129EAA4EF71543EC0896CD8CFD0E533 (RuntimeObject* ___signature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___signature0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(2 /* System.Byte[] Nethereum.Model.ISignature::get_V() */, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_0);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mAD7F985D3961A7070872967A541A414B9B5D13ED(L_1, NULL);
		V_0 = L_2;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = BigInteger_op_Equality_mC3E68AE3326F7FAC3441A5618537BFB24CD15248(L_3, ((int64_t)0), NULL);
		if (L_4)
		{
			goto IL_001f;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = BigInteger_op_Equality_mC3E68AE3326F7FAC3441A5618537BFB24CD15248(L_5, ((int64_t)1), NULL);
		return L_6;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// System.Byte[] Nethereum.Model.SignatureExtensions::To64ByteArray(Nethereum.Model.ISignature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignatureExtensions_To64ByteArray_mE109D478807B732F5319F3BFB1CF18200B55B450 (RuntimeObject* ___signature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteUtil_t3970634EEB0967A65636D41F893596448593FE44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_0 = L_0;
		RuntimeObject* L_1 = ___signature0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.Model.ISignature::get_R() */, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = ___signature0;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.Model.ISignature::get_R() */, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		RuntimeObject* L_7 = ___signature0;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.Model.ISignature::get_R() */, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), ((int32_t)(((RuntimeArray*)L_6)->max_length)))), ((int32_t)(((RuntimeArray*)L_8)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_1 = L_9;
		RuntimeObject* L_10 = ___signature0;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Byte[] Nethereum.Model.ISignature::get_S() */, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		NullCheck(L_13);
		RuntimeObject* L_14 = ___signature0;
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Byte[] Nethereum.Model.ISignature::get_S() */, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_14);
		NullCheck(L_15);
		RuntimeObject* L_16 = ___signature0;
		NullCheck(L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Byte[] Nethereum.Model.ISignature::get_S() */, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_16);
		NullCheck(L_17);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, 0, (RuntimeArray*)L_12, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), ((int32_t)(((RuntimeArray*)L_15)->max_length)))), ((int32_t)(((RuntimeArray*)L_17)->max_length)), NULL);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_18 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_19 = L_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_0;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_20);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_21 = L_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_1;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_22);
		il2cpp_codegen_runtime_class_init_inline(ByteUtil_t3970634EEB0967A65636D41F893596448593FE44_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = ByteUtil_Merge_m41BF242AC0F125479C873B4C98EEDC3FE7018A14(L_21, NULL);
		return L_23;
	}
}
// System.String Nethereum.Model.SignatureExtensions::CreateStringSignature(Nethereum.Model.ISignature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SignatureExtensions_CreateStringSignature_mCC07C991DD1B2C3116BE9F27F157032316FED075 (RuntimeObject* ___signature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___signature0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.Model.ISignature::get_R() */, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_0);
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_1, (bool)0, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F(L_2, ((int32_t)64), ((int32_t)48), NULL);
		RuntimeObject* L_4 = ___signature0;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Byte[] Nethereum.Model.ISignature::get_S() */, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_4);
		String_t* L_6;
		L_6 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_5, (bool)0, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F(L_6, ((int32_t)64), ((int32_t)48), NULL);
		RuntimeObject* L_8 = ___signature0;
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(2 /* System.Byte[] Nethereum.Model.ISignature::get_V() */, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_8);
		String_t* L_10;
		L_10 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_9, (bool)0, NULL);
		String_t* L_11;
		L_11 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89, L_3, L_7, L_10, NULL);
		return L_11;
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
// System.Byte[][] Nethereum.Model.SignedData::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* SignedData_get_Data_m0B4B3B958EDD8340E984A868C03F025552ED650B (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = __this->___U3CDataU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.Model.SignedData::set_Data(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedData_set_Data_m670AE6C57F16900FE9F2CFA653205C53E0A43DC3 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = ___value0;
		__this->___U3CDataU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Byte[] Nethereum.Model.SignedData::get_V()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedData_get_V_mBD8C626B8CF802E879880012D096186E9A1F27D3 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CVU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.Model.SignedData::set_V(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedData_set_V_mF1C4CA0C6F3EA199E4E709B208F09B2DABBC98C5 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CVU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CVU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Byte[] Nethereum.Model.SignedData::get_R()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedData_get_R_m8B6BD7ADAE981EAEE8B977D5BE43FEBCF56B3DD9 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CRU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Nethereum.Model.SignedData::set_R(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedData_set_R_m0297C2DE8C8DFB3926E03ABF77B43D7DEE39B007 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CRU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Byte[] Nethereum.Model.SignedData::get_S()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedData_get_S_mC99DA4526CE67078B602CFE1CD223AE9A10F065F (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CSU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Nethereum.Model.SignedData::set_S(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedData_set_S_mF7C601F54F3C18E7B6742E79ABC0674AEC104EA2 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CSU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Boolean Nethereum.Model.SignedData::IsSigned()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SignedData_IsSigned_m7A14466D686C79E711C980E7D46051322587B31B (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = SignedData_get_V_mBD8C626B8CF802E879880012D096186E9A1F27D3_inline(__this, NULL);
		return (bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Nethereum.Model.ISignature Nethereum.Model.SignedData::GetSignature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SignedData_GetSignature_m5BCFE6CA47DA7D778E78995CC18BBC9D50733C88 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = SignedData_get_R_m8B6BD7ADAE981EAEE8B977D5BE43FEBCF56B3DD9_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = SignedData_get_S_mC99DA4526CE67078B602CFE1CD223AE9A10F065F_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* L_2 = (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999*)il2cpp_codegen_object_new(Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Signature__ctor_m380DD863FBD3F5C076A56B2A4BFC8384C1E3462E(L_2, NULL);
		Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* L_3 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = SignedData_get_R_m8B6BD7ADAE981EAEE8B977D5BE43FEBCF56B3DD9_inline(__this, NULL);
		NullCheck(L_3);
		Signature_set_R_m261A6B7900366DC1E27C4AAA3EBFB341B0F3BF55_inline(L_3, L_4, NULL);
		Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* L_5 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = SignedData_get_S_mC99DA4526CE67078B602CFE1CD223AE9A10F065F_inline(__this, NULL);
		NullCheck(L_5);
		Signature_set_S_mD8491BE0225CF5FEC82804652442E023460B8393_inline(L_5, L_6, NULL);
		Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* L_7 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = SignedData_get_V_mBD8C626B8CF802E879880012D096186E9A1F27D3_inline(__this, NULL);
		NullCheck(L_7);
		Signature_set_V_m6727A9B12FE4BDA7D1F033B3A1B084C7320902BA_inline(L_7, L_8, NULL);
		return L_7;
	}

IL_003a:
	{
		return (RuntimeObject*)NULL;
	}
}
// System.Void Nethereum.Model.SignedData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedData__ctor_m355EF9908FE800C3A2608BE84CE8A6E39E7EC198 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Nethereum.Model.SignedData::.ctor(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedData__ctor_m9F1519286F76AF2BF5F258F85E811C978E3889C3 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___data0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = ___data0;
		SignedData_set_Data_m670AE6C57F16900FE9F2CFA653205C53E0A43DC3_inline(__this, L_0, NULL);
		return;
	}
}
// System.Void Nethereum.Model.SignedData::.ctor(System.Byte[][],Nethereum.Model.ISignature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedData__ctor_m11E3AB4DBAD0E8CB950901ED4FD64C8FF0B2E611 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___data0, RuntimeObject* ___signature1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = ___data0;
		SignedData__ctor_m9F1519286F76AF2BF5F258F85E811C978E3889C3(__this, L_0, NULL);
		RuntimeObject* L_1 = ___signature1;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		RuntimeObject* L_2 = ___signature1;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.Model.ISignature::get_R() */, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_2);
		SignedData_set_R_m0297C2DE8C8DFB3926E03ABF77B43D7DEE39B007_inline(__this, L_3, NULL);
		RuntimeObject* L_4 = ___signature1;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Byte[] Nethereum.Model.ISignature::get_S() */, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_4);
		SignedData_set_S_mF7C601F54F3C18E7B6742E79ABC0674AEC104EA2_inline(__this, L_5, NULL);
		RuntimeObject* L_6 = ___signature1;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(2 /* System.Byte[] Nethereum.Model.ISignature::get_V() */, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_6);
		SignedData_set_V_mF1C4CA0C6F3EA199E4E709B208F09B2DABBC98C5_inline(__this, L_7, NULL);
	}

IL_002e:
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
// Nethereum.Model.RLPSignedDataHashBuilder Nethereum.Model.SignedLegacyTransaction::CreateDefaultRLPSigner(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* SignedLegacyTransaction_CreateDefaultRLPSigner_m261513FD2424AE44770E3883F359B3B7D8E09FD6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___rawData0;
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_1 = (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4*)il2cpp_codegen_object_new(RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RLPSignedDataHashBuilder__ctor_m9A316BB70554992BF4F8925D854F9128F612D3A3(L_1, L_0, 6, NULL);
		return L_1;
	}
}
// System.Byte[] Nethereum.Model.SignedLegacyTransaction::get_Nonce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedLegacyTransaction_get_Nonce_m09DCD71F3195BD18A6D0219663CF1CC4A0CAF411 (SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_0 = NULL;
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0;
		L_0 = SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline(__this, NULL);
		NullCheck(L_0);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_1;
		L_1 = RLPSignedDataHashBuilder_get_Data_m2904CB6BA451E29C691C9053D1CD2E66DDD2A904_inline(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___ZERO_BYTE_ARRAY_2;
		G_B2_0 = L_5;
	}

IL_0016:
	{
		return G_B2_0;
	}
}
// System.Byte[] Nethereum.Model.SignedLegacyTransaction::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedLegacyTransaction_get_Value_mB54148EACF4CFA332AAEB85B65FDA0073D381549 (SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_0 = NULL;
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0;
		L_0 = SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline(__this, NULL);
		NullCheck(L_0);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_1;
		L_1 = RLPSignedDataHashBuilder_get_Data_m2904CB6BA451E29C691C9053D1CD2E66DDD2A904_inline(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2 = 4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___ZERO_BYTE_ARRAY_2;
		G_B2_0 = L_5;
	}

IL_0016:
	{
		return G_B2_0;
	}
}
// System.Byte[] Nethereum.Model.SignedLegacyTransaction::get_ReceiveAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedLegacyTransaction_get_ReceiveAddress_mA2D05DA97B5EFA87E87C53969C2DA651AD1E6B82 (SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A* __this, const RuntimeMethod* method) 
{
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0;
		L_0 = SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline(__this, NULL);
		NullCheck(L_0);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_1;
		L_1 = RLPSignedDataHashBuilder_get_Data_m2904CB6BA451E29C691C9053D1CD2E66DDD2A904_inline(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2 = 3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Byte[] Nethereum.Model.SignedLegacyTransaction::get_GasPrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedLegacyTransaction_get_GasPrice_m9C6865A1E3106284986F0B2773AE52479A67208C (SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_0 = NULL;
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0;
		L_0 = SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline(__this, NULL);
		NullCheck(L_0);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_1;
		L_1 = RLPSignedDataHashBuilder_get_Data_m2904CB6BA451E29C691C9053D1CD2E66DDD2A904_inline(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2 = 1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___ZERO_BYTE_ARRAY_2;
		G_B2_0 = L_5;
	}

IL_0016:
	{
		return G_B2_0;
	}
}
// System.Byte[] Nethereum.Model.SignedLegacyTransaction::get_GasLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedLegacyTransaction_get_GasLimit_mDDE3E33D0C1D3FA32782C292EAFB928A60163A40 (SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A* __this, const RuntimeMethod* method) 
{
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0;
		L_0 = SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline(__this, NULL);
		NullCheck(L_0);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_1;
		L_1 = RLPSignedDataHashBuilder_get_Data_m2904CB6BA451E29C691C9053D1CD2E66DDD2A904_inline(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2 = 2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Byte[] Nethereum.Model.SignedLegacyTransaction::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedLegacyTransaction_get_Data_m0AEBA5B694F5E81BE631AA2A86379108D0D563B8 (SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A* __this, const RuntimeMethod* method) 
{
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0;
		L_0 = SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline(__this, NULL);
		NullCheck(L_0);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_1;
		L_1 = RLPSignedDataHashBuilder_get_Data_m2904CB6BA451E29C691C9053D1CD2E66DDD2A904_inline(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2 = 5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Void Nethereum.Model.SignedLegacyTransaction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedLegacyTransaction__ctor_m0492AFCCAAC52C94D70CC576615EC469B9392B07 (SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A* __this, const RuntimeMethod* method) 
{
	{
		SignedLegacyTransactionBase__ctor_mDCA89E6B58A83587BC279ECD1B9C1ACC1E258161(__this, NULL);
		return;
	}
}
// System.Void Nethereum.Model.SignedLegacyTransaction::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedLegacyTransaction__cctor_m70153129661C0B036E77FBF5A2E9B243B62EFDF8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98DA633D8982D07B9B6B488E1767152B942ED6CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0E0C429E93D94E33D5AA4C943CDFF123EB9FF31);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0;
		L_0 = BigInteger_Parse_m8C6FB2B62154E2EE7C46930C85C120BE977576C4(_stringLiteral98DA633D8982D07B9B6B488E1767152B942ED6CB, NULL);
		((SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_StaticFields*)il2cpp_codegen_static_fields_for(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var))->___DEFAULT_GAS_PRICE_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&((SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_StaticFields*)il2cpp_codegen_static_fields_for(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var))->___DEFAULT_GAS_PRICE_3))->____bits_1), (void*)NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = BigInteger_Parse_m8C6FB2B62154E2EE7C46930C85C120BE977576C4(_stringLiteralF0E0C429E93D94E33D5AA4C943CDFF123EB9FF31, NULL);
		((SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_StaticFields*)il2cpp_codegen_static_fields_for(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var))->___DEFAULT_GAS_LIMIT_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&((SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_StaticFields*)il2cpp_codegen_static_fields_for(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var))->___DEFAULT_GAS_LIMIT_4))->____bits_1), (void*)NULL);
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
// System.Numerics.BigInteger Nethereum.Model.IndexedSignedTransaction::get_Index()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F IndexedSignedTransaction_get_Index_mC949CF8D45D4E522341B4E56B4143AD58F8E61DF (IndexedSignedTransaction_t1C7BAC78F6C1377A43EDDB85FAF38F2F5253123F* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->___U3CIndexU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.Model.IndexedSignedTransaction::set_Index(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSignedTransaction_set_Index_m947B96A687DD0813469C7B945EE0B4CAC6714933 (IndexedSignedTransaction_t1C7BAC78F6C1377A43EDDB85FAF38F2F5253123F* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___value0;
		__this->___U3CIndexU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CIndexU3Ek__BackingField_0))->____bits_1), (void*)NULL);
		return;
	}
}
// Nethereum.Model.ISignedTransaction Nethereum.Model.IndexedSignedTransaction::get_SignedTransaction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IndexedSignedTransaction_get_SignedTransaction_mC9C34468883D8BEA52BB92EADFA046A52905D395 (IndexedSignedTransaction_t1C7BAC78F6C1377A43EDDB85FAF38F2F5253123F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CSignedTransactionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.Model.IndexedSignedTransaction::set_SignedTransaction(Nethereum.Model.ISignedTransaction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSignedTransaction_set_SignedTransaction_m8CB7B6AED80D2F2C780EC0F4A39F7E7E8DAFB995 (IndexedSignedTransaction_t1C7BAC78F6C1377A43EDDB85FAF38F2F5253123F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CSignedTransactionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSignedTransactionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.Model.IndexedSignedTransaction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSignedTransaction__ctor_mD4EEE10028AB68A18DB76743DFC4C9E381A2C087 (IndexedSignedTransaction_t1C7BAC78F6C1377A43EDDB85FAF38F2F5253123F* __this, const RuntimeMethod* method) 
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
// System.Byte[] Nethereum.Model.SignedTransaction::get_RawHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedTransaction_get_RawHash_m4A1175A258E3F115529450CBBCEC3FF5EB175618 (SignedTransaction_t397E604239E3BB0594398EFC6813192C24863818* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(15 /* System.Byte[] Nethereum.Model.SignedTransaction::GetRLPEncodedRaw() */, __this);
		V_0 = L_0;
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_1 = (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6*)il2cpp_codegen_object_new(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Sha3Keccack__ctor_m1A1B72B31D347C8FEEAB51607616A6C4992DE7D0(L_1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = Sha3Keccack_CalculateHash_mE94324F2BF9D80A18C59A08CF5F0735B78ECAAA0(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Byte[] Nethereum.Model.SignedTransaction::get_Hash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedTransaction_get_Hash_m7B484F4D1326144402222DB0E8FB87352ADB6B93 (SignedTransaction_t397E604239E3BB0594398EFC6813192C24863818* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(14 /* System.Byte[] Nethereum.Model.SignedTransaction::GetRLPEncoded() */, __this);
		V_0 = L_0;
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_1 = (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6*)il2cpp_codegen_object_new(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Sha3Keccack__ctor_m1A1B72B31D347C8FEEAB51607616A6C4992DE7D0(L_1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = Sha3Keccack_CalculateHash_mE94324F2BF9D80A18C59A08CF5F0735B78ECAAA0(L_1, L_2, NULL);
		return L_3;
	}
}
// Nethereum.Model.ISignature Nethereum.Model.SignedTransaction::get_Signature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SignedTransaction_get_Signature_m641D35B543E5655526A6125FFED32C9715795AE9 (SignedTransaction_t397E604239E3BB0594398EFC6813192C24863818* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CSignatureU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.Model.SignedTransaction::set_Signature(Nethereum.Model.ISignature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedTransaction_set_Signature_m1643DAD232E6B11C9E1C67398B3FA268DC6C1416 (SignedTransaction_t397E604239E3BB0594398EFC6813192C24863818* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CSignatureU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSignatureU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.Model.SignedTransaction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedTransaction__ctor_m8D6922DA2F90B0283E10BE57C9BC936E0483EBA6 (SignedTransaction_t397E604239E3BB0594398EFC6813192C24863818* __this, const RuntimeMethod* method) 
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
// Nethereum.Model.RLPSignedDataHashBuilder Nethereum.Model.SignedLegacyTransactionBase::get_RlpSignerEncoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA (SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F* __this, const RuntimeMethod* method) 
{
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0 = __this->___U3CRlpSignerEncoderU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.Model.SignedLegacyTransactionBase::set_RlpSignerEncoder(Nethereum.Model.RLPSignedDataHashBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedLegacyTransactionBase_set_RlpSignerEncoder_m2E48E16936EF5766F77818F30F38D403947405C5 (SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F* __this, RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* ___value0, const RuntimeMethod* method) 
{
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0 = ___value0;
		__this->___U3CRlpSignerEncoderU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRlpSignerEncoderU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Byte[] Nethereum.Model.SignedLegacyTransactionBase::get_RawHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedLegacyTransactionBase_get_RawHash_mCCD974B4B052C19C025EBB2E7A79F85720D57FB9 (SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F* __this, const RuntimeMethod* method) 
{
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0;
		L_0 = SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline(__this, NULL);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = RLPSignedDataHashBuilder_get_RawHash_mBDE019C306B735B6FDE62E3A511F60218036EE07(L_0, NULL);
		return L_1;
	}
}
// Nethereum.Model.ISignature Nethereum.Model.SignedLegacyTransactionBase::get_Signature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SignedLegacyTransactionBase_get_Signature_mBDA650A6280E4C884F0232EF8041E32CE08C51E9 (SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F* __this, const RuntimeMethod* method) 
{
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0;
		L_0 = SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = RLPSignedDataHashBuilder_get_Signature_m30DFAA97567C1D3B8B893DEB71F24F8FC4C89078_inline(L_0, NULL);
		return L_1;
	}
}
// System.Byte[] Nethereum.Model.SignedLegacyTransactionBase::GetRLPEncoded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedLegacyTransactionBase_GetRLPEncoded_mFD945B8CA3E4E5AC568B20E6DBE34A8358C59E29 (SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F* __this, const RuntimeMethod* method) 
{
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0;
		L_0 = SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline(__this, NULL);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = RLPSignedDataHashBuilder_GetRLPEncoded_m75958043E912323BD3DB1B878556737C2A807B99(L_0, NULL);
		return L_1;
	}
}
// System.Byte[] Nethereum.Model.SignedLegacyTransactionBase::GetRLPEncodedRaw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedLegacyTransactionBase_GetRLPEncodedRaw_m94FAB7B17075A6B42C11ACCE246AC0459B99813F (SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F* __this, const RuntimeMethod* method) 
{
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0;
		L_0 = SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline(__this, NULL);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = RLPSignedDataHashBuilder_GetRLPEncodedRaw_m18AA664C1D6005E7C133A7A25492B8D59BD492EF(L_0, NULL);
		return L_1;
	}
}
// System.String Nethereum.Model.SignedLegacyTransactionBase::ToHex(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SignedLegacyTransactionBase_ToHex_m58933B6818C70EA253C26F1C6EB108679FF735F8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___x0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89;
	}

IL_0009:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_1, (bool)0, NULL);
		return L_2;
	}
}
// System.Void Nethereum.Model.SignedLegacyTransactionBase::SetSignature(Nethereum.Model.ISignature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedLegacyTransactionBase_SetSignature_m135CE4F22D59E7A8F1249B7601CA799779C76A87 (SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F* __this, RuntimeObject* ___signature0, const RuntimeMethod* method) 
{
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0;
		L_0 = SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline(__this, NULL);
		RuntimeObject* L_1 = ___signature0;
		NullCheck(L_0);
		RLPSignedDataHashBuilder_SetSignature_m4FD99F899D0A65D258BA7CFCD0BFCEC5F7CD7949(L_0, L_1, NULL);
		return;
	}
}
// System.Void Nethereum.Model.SignedLegacyTransactionBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedLegacyTransactionBase__ctor_mDCA89E6B58A83587BC279ECD1B9C1ACC1E258161 (SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F* __this, const RuntimeMethod* method) 
{
	{
		SignedTransaction__ctor_m8D6922DA2F90B0283E10BE57C9BC936E0483EBA6(__this, NULL);
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
// System.Void Nethereum.Model.SignedTypeTransaction::SetSignature(Nethereum.Model.ISignature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedTypeTransaction_SetSignature_m9B656823A7AC88D2F82B77DAE419BF39A407968B (SignedTypeTransaction_tE290AC7A95BAC7772CCC1FCDE1DEE730E316D70B* __this, RuntimeObject* ___signature0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___signature0;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(17 /* System.Void Nethereum.Model.SignedTransaction::set_Signature(Nethereum.Model.ISignature) */, __this, L_0);
		return;
	}
}
// System.Void Nethereum.Model.SignedTypeTransaction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedTypeTransaction__ctor_mEC60D942420AD0CB87E9DBC3DD0D87CCA1FC22EC (SignedTypeTransaction_tE290AC7A95BAC7772CCC1FCDE1DEE730E316D70B* __this, const RuntimeMethod* method) 
{
	{
		SignedTransaction__ctor_m8D6922DA2F90B0283E10BE57C9BC936E0483EBA6(__this, NULL);
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
// System.Void Nethereum.Model.Transaction1559::.ctor(System.Numerics.BigInteger,System.Nullable`1<System.Numerics.BigInteger>,System.Nullable`1<System.Numerics.BigInteger>,System.Nullable`1<System.Numerics.BigInteger>,System.Nullable`1<System.Numerics.BigInteger>,System.String,System.Nullable`1<System.Numerics.BigInteger>,System.String,System.Collections.Generic.List`1<Nethereum.Model.AccessListItem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559__ctor_mE0EFA1A36A81052017B7A5714C6B53E8836DC962 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___chainId0, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___nonce1, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___maxPriorityFeePerGas2, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___maxFeePerGas3, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___gasLimit4, String_t* ___receiverAddress5, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___amount6, String_t* ___data7, List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* ___accessList8, const RuntimeMethod* method) 
{
	{
		SignedTypeTransaction__ctor_mEC60D942420AD0CB87E9DBC3DD0D87CCA1FC22EC(__this, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___chainId0;
		Transaction1559_set_ChainId_m1A2B716F5FF9435E5AC12AB1CCF08C10177CE5B5_inline(__this, L_0, NULL);
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_1 = ___nonce1;
		Transaction1559_set_Nonce_m83586722A6150A78FDDAFBE06C05071106B6BB69_inline(__this, L_1, NULL);
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_2 = ___maxPriorityFeePerGas2;
		Transaction1559_set_MaxPriorityFeePerGas_m406383220249002ECEDDF724133A63329F9CAF72_inline(__this, L_2, NULL);
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_3 = ___maxFeePerGas3;
		Transaction1559_set_MaxFeePerGas_m1D1D1C7AC7FB647900838F4F40453A9D29FC0C69_inline(__this, L_3, NULL);
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_4 = ___gasLimit4;
		Transaction1559_set_GasLimit_m089B2F56386EE6F11AEF2170A2E25F72928806CF_inline(__this, L_4, NULL);
		String_t* L_5 = ___receiverAddress5;
		Transaction1559_set_ReceiverAddress_mC3037E05445DC6D1424F9A47235C49A70AD34A18_inline(__this, L_5, NULL);
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_6 = ___amount6;
		Transaction1559_set_Amount_m98DF4CD67DBF0C3D870197371D1D626DA9C58AF1_inline(__this, L_6, NULL);
		String_t* L_7 = ___data7;
		Transaction1559_set_Data_m84CAAE87C95387EE9E1656A2796C280E21671676_inline(__this, L_7, NULL);
		List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* L_8 = ___accessList8;
		Transaction1559_set_AccessList_m3813B46F053603B83700013005E7B3BF35D36DA7_inline(__this, L_8, NULL);
		return;
	}
}
// System.Void Nethereum.Model.Transaction1559::.ctor(System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.String,System.Numerics.BigInteger,System.String,System.Collections.Generic.List`1<Nethereum.Model.AccessListItem>,Nethereum.Model.Signature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559__ctor_m51E1FDA09EE68D2C4D1E4CB045F3AE3ABFF95383 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___chainId0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___nonce1, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___maxPriorityFeePerGas2, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___maxFeePerGas3, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___gasLimit4, String_t* ___receiverAddress5, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___amount6, String_t* ___data7, List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* ___accessList8, Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* ___signature9, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___chainId0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1 = ___nonce1;
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138((&L_2), L_1, /*hidden argument*/Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138_RuntimeMethod_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3 = ___maxPriorityFeePerGas2;
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138_RuntimeMethod_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5 = ___maxFeePerGas3;
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138((&L_6), L_5, /*hidden argument*/Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138_RuntimeMethod_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7 = ___gasLimit4;
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138((&L_8), L_7, /*hidden argument*/Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138_RuntimeMethod_var);
		String_t* L_9 = ___receiverAddress5;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_10 = ___amount6;
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138((&L_11), L_10, /*hidden argument*/Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138_RuntimeMethod_var);
		String_t* L_12 = ___data7;
		List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* L_13 = ___accessList8;
		Transaction1559__ctor_mE0EFA1A36A81052017B7A5714C6B53E8836DC962(__this, L_0, L_2, L_4, L_6, L_8, L_9, L_11, L_12, L_13, NULL);
		Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* L_14 = ___signature9;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(17 /* System.Void Nethereum.Model.SignedTransaction::set_Signature(Nethereum.Model.ISignature) */, __this, L_14);
		return;
	}
}
// System.Numerics.BigInteger Nethereum.Model.Transaction1559::get_ChainId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Transaction1559_get_ChainId_mFED7ACF2FED0435904F19950C6C7174DE0DAE1F0 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->___U3CChainIdU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.Model.Transaction1559::set_ChainId(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559_set_ChainId_m1A2B716F5FF9435E5AC12AB1CCF08C10177CE5B5 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___value0;
		__this->___U3CChainIdU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CChainIdU3Ek__BackingField_1))->____bits_1), (void*)NULL);
		return;
	}
}
// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Model.Transaction1559::get_Nonce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_Nonce_mFDF11934A2AFC5C084405A0F0FF354A4197EC2EE (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = __this->___U3CNonceU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Nethereum.Model.Transaction1559::set_Nonce(System.Nullable`1<System.Numerics.BigInteger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559_set_Nonce_m83586722A6150A78FDDAFBE06C05071106B6BB69 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = ___value0;
		__this->___U3CNonceU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CNonceU3Ek__BackingField_2))->___value_1))->____bits_1), (void*)NULL);
		return;
	}
}
// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Model.Transaction1559::get_MaxPriorityFeePerGas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_MaxPriorityFeePerGas_mF0DD4E81F8BF05DA24B5AADB86754A1EB239A0FF (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = __this->___U3CMaxPriorityFeePerGasU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Nethereum.Model.Transaction1559::set_MaxPriorityFeePerGas(System.Nullable`1<System.Numerics.BigInteger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559_set_MaxPriorityFeePerGas_m406383220249002ECEDDF724133A63329F9CAF72 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = ___value0;
		__this->___U3CMaxPriorityFeePerGasU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CMaxPriorityFeePerGasU3Ek__BackingField_3))->___value_1))->____bits_1), (void*)NULL);
		return;
	}
}
// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Model.Transaction1559::get_MaxFeePerGas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_MaxFeePerGas_m76D66F7213EAD582458B2BBF0A03C74E1A99B91E (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = __this->___U3CMaxFeePerGasU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Nethereum.Model.Transaction1559::set_MaxFeePerGas(System.Nullable`1<System.Numerics.BigInteger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559_set_MaxFeePerGas_m1D1D1C7AC7FB647900838F4F40453A9D29FC0C69 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = ___value0;
		__this->___U3CMaxFeePerGasU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CMaxFeePerGasU3Ek__BackingField_4))->___value_1))->____bits_1), (void*)NULL);
		return;
	}
}
// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Model.Transaction1559::get_GasLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_GasLimit_m16ADA6F6F4EE902B3E1226F6376548F31E4C675A (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = __this->___U3CGasLimitU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Nethereum.Model.Transaction1559::set_GasLimit(System.Nullable`1<System.Numerics.BigInteger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559_set_GasLimit_m089B2F56386EE6F11AEF2170A2E25F72928806CF (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = ___value0;
		__this->___U3CGasLimitU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CGasLimitU3Ek__BackingField_5))->___value_1))->____bits_1), (void*)NULL);
		return;
	}
}
// System.String Nethereum.Model.Transaction1559::get_ReceiverAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Transaction1559_get_ReceiverAddress_m3D7A87A2C2B8432E727A502B875C4B19426F9430 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CReceiverAddressU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Nethereum.Model.Transaction1559::set_ReceiverAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559_set_ReceiverAddress_mC3037E05445DC6D1424F9A47235C49A70AD34A18 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CReceiverAddressU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReceiverAddressU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Model.Transaction1559::get_Amount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_Amount_mBF2B1406D7644EC74F85B02A48659D053FDAEF37 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = __this->___U3CAmountU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Nethereum.Model.Transaction1559::set_Amount(System.Nullable`1<System.Numerics.BigInteger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559_set_Amount_m98DF4CD67DBF0C3D870197371D1D626DA9C58AF1 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = ___value0;
		__this->___U3CAmountU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CAmountU3Ek__BackingField_7))->___value_1))->____bits_1), (void*)NULL);
		return;
	}
}
// System.String Nethereum.Model.Transaction1559::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Transaction1559_get_Data_m4BDA2DA7A2CD6AE69CD8B3E1B0DB9532DF7178D4 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDataU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Nethereum.Model.Transaction1559::set_Data(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559_set_Data_m84CAAE87C95387EE9E1656A2796C280E21671676 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CDataU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Nethereum.Model.AccessListItem> Nethereum.Model.Transaction1559::get_AccessList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* Transaction1559_get_AccessList_mC2540EB22043800C36ADD4BD03894507D9242E0D (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* L_0 = __this->___U3CAccessListU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Nethereum.Model.Transaction1559::set_AccessList(System.Collections.Generic.List`1<Nethereum.Model.AccessListItem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559_set_AccessList_m3813B46F053603B83700013005E7B3BF35D36DA7 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* ___value0, const RuntimeMethod* method) 
{
	{
		List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* L_0 = ___value0;
		__this->___U3CAccessListU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAccessListU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// Nethereum.Model.TransactionType Nethereum.Model.Transaction1559::get_TransactionType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transaction1559_get_TransactionType_mD00AF98CC98351F9A88BBAB3D9C2F8026B0E5185 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(2);
	}
}
// System.Byte[] Nethereum.Model.Transaction1559::GetRLPEncoded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Transaction1559_GetRLPEncoded_m7478EA2A0C32FC9740E8317C3FBA4146718D0C7B (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var);
		Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* L_0;
		L_0 = Transaction1559Encoder_get_Current_m53D7B01460A85290C57CFA9BF2C8AC10476FDAA5_inline(NULL);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* >::Invoke(6 /* System.Byte[] Nethereum.Model.TransactionTypeEncoder`1<Nethereum.Model.Transaction1559>::Encode(T) */, L_0, __this);
		return L_1;
	}
}
// System.Byte[] Nethereum.Model.Transaction1559::GetRLPEncodedRaw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Transaction1559_GetRLPEncodedRaw_mD92187472E9CF0E57D29291A446211AF6AFD1123 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var);
		Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* L_0;
		L_0 = Transaction1559Encoder_get_Current_m53D7B01460A85290C57CFA9BF2C8AC10476FDAA5_inline(NULL);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* >::Invoke(7 /* System.Byte[] Nethereum.Model.TransactionTypeEncoder`1<Nethereum.Model.Transaction1559>::EncodeRaw(T) */, L_0, __this);
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
// Nethereum.Model.Transaction1559Encoder Nethereum.Model.Transaction1559Encoder::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* Transaction1559Encoder_get_Current_m53D7B01460A85290C57CFA9BF2C8AC10476FDAA5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var);
		Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* L_0 = ((Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_StaticFields*)il2cpp_codegen_static_fields_for(Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> Nethereum.Model.Transaction1559Encoder::GetEncodedElements(Nethereum.Model.Transaction1559)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* Transaction1559Encoder_GetEncodedElements_mBDB068C9A45E537384B69B5ED0D4A61AAE2B7F3F (Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* __this, Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* ___transaction0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionTypeEncoder_1_GetBigIntegerForEncoding_mD9C51B6461CD721742082939AD636E87F007802E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_0, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_1 = L_0;
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_2 = ___transaction0;
		NullCheck(L_2);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = Transaction1559_get_ChainId_mFED7ACF2FED0435904F19950C6C7174DE0DAE1F0_inline(L_2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_4, NULL);
		NullCheck(L_1);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_1, L_5, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_6 = L_1;
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_7 = ___transaction0;
		NullCheck(L_7);
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_8;
		L_8 = Transaction1559_get_Nonce_mFDF11934A2AFC5C084405A0F0FF354A4197EC2EE_inline(L_7, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = TransactionTypeEncoder_1_GetBigIntegerForEncoding_mD9C51B6461CD721742082939AD636E87F007802E(__this, L_8, TransactionTypeEncoder_1_GetBigIntegerForEncoding_mD9C51B6461CD721742082939AD636E87F007802E_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_9, NULL);
		NullCheck(L_6);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_6, L_10, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_11 = L_6;
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_12 = ___transaction0;
		NullCheck(L_12);
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_13;
		L_13 = Transaction1559_get_MaxPriorityFeePerGas_mF0DD4E81F8BF05DA24B5AADB86754A1EB239A0FF_inline(L_12, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = TransactionTypeEncoder_1_GetBigIntegerForEncoding_mD9C51B6461CD721742082939AD636E87F007802E(__this, L_13, TransactionTypeEncoder_1_GetBigIntegerForEncoding_mD9C51B6461CD721742082939AD636E87F007802E_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_14, NULL);
		NullCheck(L_11);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_11, L_15, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_16 = L_11;
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_17 = ___transaction0;
		NullCheck(L_17);
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_18;
		L_18 = Transaction1559_get_MaxFeePerGas_m76D66F7213EAD582458B2BBF0A03C74E1A99B91E_inline(L_17, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
		L_19 = TransactionTypeEncoder_1_GetBigIntegerForEncoding_mD9C51B6461CD721742082939AD636E87F007802E(__this, L_18, TransactionTypeEncoder_1_GetBigIntegerForEncoding_mD9C51B6461CD721742082939AD636E87F007802E_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
		L_20 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_19, NULL);
		NullCheck(L_16);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_16, L_20, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_21 = L_16;
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_22 = ___transaction0;
		NullCheck(L_22);
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_23;
		L_23 = Transaction1559_get_GasLimit_m16ADA6F6F4EE902B3E1226F6376548F31E4C675A_inline(L_22, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = TransactionTypeEncoder_1_GetBigIntegerForEncoding_mD9C51B6461CD721742082939AD636E87F007802E(__this, L_23, TransactionTypeEncoder_1_GetBigIntegerForEncoding_mD9C51B6461CD721742082939AD636E87F007802E_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_24, NULL);
		NullCheck(L_21);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_21, L_25, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_26 = L_21;
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_27 = ___transaction0;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = Transaction1559_get_ReceiverAddress_m3D7A87A2C2B8432E727A502B875C4B19426F9430_inline(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29;
		L_29 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_28, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30;
		L_30 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_29, NULL);
		NullCheck(L_26);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_26, L_30, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_31 = L_26;
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_32 = ___transaction0;
		NullCheck(L_32);
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_33;
		L_33 = Transaction1559_get_Amount_mBF2B1406D7644EC74F85B02A48659D053FDAEF37_inline(L_32, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34;
		L_34 = TransactionTypeEncoder_1_GetBigIntegerForEncoding_mD9C51B6461CD721742082939AD636E87F007802E(__this, L_33, TransactionTypeEncoder_1_GetBigIntegerForEncoding_mD9C51B6461CD721742082939AD636E87F007802E_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35;
		L_35 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_34, NULL);
		NullCheck(L_31);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_31, L_35, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_36 = L_31;
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_37 = ___transaction0;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = Transaction1559_get_Data_m4BDA2DA7A2CD6AE69CD8B3E1B0DB9532DF7178D4_inline(L_37, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39;
		L_39 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_38, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40;
		L_40 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_39, NULL);
		NullCheck(L_36);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_36, L_40, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_41 = L_36;
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_42 = ___transaction0;
		NullCheck(L_42);
		List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* L_43;
		L_43 = Transaction1559_get_AccessList_mC2540EB22043800C36ADD4BD03894507D9242E0D_inline(L_42, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44;
		L_44 = AccessListRLPEncoderDecoder_EncodeAccessList_m19721FDF07E68C23A8858E899BADC9206D5F9480(L_43, NULL);
		NullCheck(L_41);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_41, L_44, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		return L_41;
	}
}
// System.Byte[] Nethereum.Model.Transaction1559Encoder::EncodeRaw(Nethereum.Model.Transaction1559)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Transaction1559Encoder_EncodeRaw_m7BFBF782F6599167E286BB7A3D752D604062D433 (Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* __this, Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* ___transaction0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionTypeEncoder_1_AddTypeToEncodedBytes_m631C1792AFBDAFD03A766A8EAF7E974BBACDACA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_0 = ___transaction0;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_1;
		L_1 = Transaction1559Encoder_GetEncodedElements_mBDB068C9A45E537384B69B5ED0D4A61AAE2B7F3F(__this, L_0, NULL);
		NullCheck(L_1);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_2;
		L_2 = List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A(L_1, List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = RLP_EncodeList_m2A2C2A6B4DDA95C331AECF96926B0D9C1B16FE05(L_2, NULL);
		uint8_t L_4 = __this->___Type_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = TransactionTypeEncoder_1_AddTypeToEncodedBytes_m631C1792AFBDAFD03A766A8EAF7E974BBACDACA5(L_3, L_4, TransactionTypeEncoder_1_AddTypeToEncodedBytes_m631C1792AFBDAFD03A766A8EAF7E974BBACDACA5_RuntimeMethod_var);
		return L_5;
	}
}
// System.Byte[] Nethereum.Model.Transaction1559Encoder::Encode(Nethereum.Model.Transaction1559)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Transaction1559Encoder_Encode_m694952F5CE6469E535F21CC84EE636F4E9AF28EC (Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* __this, Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* ___transaction0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionTypeEncoder_1_AddTypeToEncodedBytes_m631C1792AFBDAFD03A766A8EAF7E974BBACDACA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* V_0 = NULL;
	{
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_0 = ___transaction0;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_1;
		L_1 = Transaction1559Encoder_GetEncodedElements_mBDB068C9A45E537384B69B5ED0D4A61AAE2B7F3F(__this, L_0, NULL);
		V_0 = L_1;
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_2 = ___transaction0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(16 /* Nethereum.Model.ISignature Nethereum.Model.SignedTransaction::get_Signature() */, L_2);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_4 = V_0;
		RLPSignedDataEncoder_AddSignatureToEncodedData_m9A1FE50EE75C591B26BF48F7A6FBB6B30A8A97DA(L_3, L_4, NULL);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_5 = V_0;
		NullCheck(L_5);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_6;
		L_6 = List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A(L_5, List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = RLP_EncodeList_m2A2C2A6B4DDA95C331AECF96926B0D9C1B16FE05(L_6, NULL);
		uint8_t L_8 = __this->___Type_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = TransactionTypeEncoder_1_AddTypeToEncodedBytes_m631C1792AFBDAFD03A766A8EAF7E974BBACDACA5(L_7, L_8, TransactionTypeEncoder_1_AddTypeToEncodedBytes_m631C1792AFBDAFD03A766A8EAF7E974BBACDACA5_RuntimeMethod_var);
		return L_9;
	}
}
// Nethereum.Model.Transaction1559 Nethereum.Model.Transaction1559Encoder::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* Transaction1559Encoder_Decode_m94E0430EFE0766594A3ACCF3E458BF1182A8E88A (Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rplData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_1;
	memset((&V_1), 0, sizeof(V_1));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_2;
	memset((&V_2), 0, sizeof(V_2));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_3;
	memset((&V_3), 0, sizeof(V_3));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_4;
	memset((&V_4), 0, sizeof(V_4));
	String_t* V_5 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_6;
	memset((&V_6), 0, sizeof(V_6));
	String_t* V_7 = NULL;
	List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* V_8 = NULL;
	Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* V_9 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B4_0 = NULL;
	RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* G_B4_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_0 = NULL;
	RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* G_B5_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B7_0 = NULL;
	RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* G_B7_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B6_0 = NULL;
	RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* G_B6_1 = NULL;
	String_t* G_B8_0 = NULL;
	RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* G_B8_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___rplData0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		uint8_t L_3 = __this->___Type_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0019;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___rplData0;
		RuntimeObject* L_5;
		L_5 = Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8((RuntimeObject*)L_4, 1, Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_5, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		___rplData0 = L_6;
	}

IL_0019:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___rplData0;
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		RuntimeObject* L_8;
		L_8 = RLP_Decode_m25755DBDC9A4DD532BC45B2C9BBBB03E00FA0C33(L_7, NULL);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_9 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_9, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_10 = ((RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6*)CastclassClass((RuntimeObject*)L_8, RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var));
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_10, 0, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_11);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_13;
		L_13 = ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mAD7F985D3961A7070872967A541A414B9B5D13ED(L_12, NULL);
		V_0 = L_13;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_14 = L_10;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_14, 1, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_15);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_17;
		L_17 = ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mAD7F985D3961A7070872967A541A414B9B5D13ED(L_16, NULL);
		V_1 = L_17;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_18 = L_14;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_18, 2, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_19);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
		L_20 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_19);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_21;
		L_21 = ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mAD7F985D3961A7070872967A541A414B9B5D13ED(L_20, NULL);
		V_2 = L_21;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_22 = L_18;
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_22, 3, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_23);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_23);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_25;
		L_25 = ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mAD7F985D3961A7070872967A541A414B9B5D13ED(L_24, NULL);
		V_3 = L_25;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_26 = L_22;
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_26, 4, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_27);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28;
		L_28 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_27);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_29;
		L_29 = ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mAD7F985D3961A7070872967A541A414B9B5D13ED(L_28, NULL);
		V_4 = L_29;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_30 = L_26;
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_30, 5, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_31);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32;
		L_32 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_31);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = L_32;
		G_B3_0 = L_33;
		G_B3_1 = L_30;
		if (L_33)
		{
			G_B4_0 = L_33;
			G_B4_1 = L_30;
			goto IL_0098;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_009e;
	}

IL_0098:
	{
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_34;
		L_34 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(G_B4_0, (bool)1, NULL);
		G_B5_0 = L_34;
		G_B5_1 = G_B4_1;
	}

IL_009e:
	{
		V_5 = G_B5_0;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_35 = G_B5_1;
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_35, 6, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_36);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37;
		L_37 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_36);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_38;
		L_38 = ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mAD7F985D3961A7070872967A541A414B9B5D13ED(L_37, NULL);
		V_6 = L_38;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_39 = L_35;
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_39, 7, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_40);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41;
		L_41 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_40);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = L_41;
		G_B6_0 = L_42;
		G_B6_1 = L_39;
		if (L_42)
		{
			G_B7_0 = L_42;
			G_B7_1 = L_39;
			goto IL_00c6;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		goto IL_00cc;
	}

IL_00c6:
	{
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_43;
		L_43 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(G_B7_0, (bool)1, NULL);
		G_B8_0 = L_43;
		G_B8_1 = G_B7_1;
	}

IL_00cc:
	{
		V_7 = G_B8_0;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_44 = G_B8_1;
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_44, 8, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_45);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46;
		L_46 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_45);
		List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* L_47;
		L_47 = AccessListRLPEncoderDecoder_DecodeAccessList_mBD199A722D1D8304BCD69B4E1EA3F53008164E73(L_46, NULL);
		V_8 = L_47;
		Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* L_48;
		L_48 = RLPSignedDataDecoder_DecodeSignature_mD1D6AFF5447AA45CA7FD4A31CA03566086FCC00B(L_44, ((int32_t)9), NULL);
		V_9 = L_48;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_49 = V_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_50 = V_1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_51 = V_2;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_52 = V_3;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_53 = V_4;
		String_t* L_54 = V_5;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_55 = V_6;
		String_t* L_56 = V_7;
		List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* L_57 = V_8;
		Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* L_58 = V_9;
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_59 = (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17*)il2cpp_codegen_object_new(Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		Transaction1559__ctor_m51E1FDA09EE68D2C4D1E4CB045F3AE3ABFF95383(L_59, L_49, L_50, L_51, L_52, L_53, L_54, L_55, L_56, L_57, L_58, NULL);
		return L_59;
	}
}
// System.Void Nethereum.Model.Transaction1559Encoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559Encoder__ctor_mBBF96D9C7FAEDF76E8AACF92C12F3BAC9E12135A (Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionTypeEncoder_1__ctor_m699E9434D752911B41AA410BF4034A081B6FA4BA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0;
		L_0 = TransactionTypeExtensions_AsByte_m6F28DCF90590ABCD9F4A1FC31047D7EDAD3AE4A1(2, NULL);
		__this->___Type_1 = L_0;
		TransactionTypeEncoder_1__ctor_m699E9434D752911B41AA410BF4034A081B6FA4BA(__this, TransactionTypeEncoder_1__ctor_m699E9434D752911B41AA410BF4034A081B6FA4BA_RuntimeMethod_var);
		return;
	}
}
// System.Void Nethereum.Model.Transaction1559Encoder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559Encoder__cctor_m9393CB3C81A3F26DBAF7041BB424033E0C412607 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* L_0 = (Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E*)il2cpp_codegen_object_new(Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Transaction1559Encoder__ctor_mBBF96D9C7FAEDF76E8AACF92C12F3BAC9E12135A(L_0, NULL);
		((Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_StaticFields*)il2cpp_codegen_static_fields_for(Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_StaticFields*)il2cpp_codegen_static_fields_for(Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField_0), (void*)L_0);
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
// Nethereum.Model.ISignedTransaction Nethereum.Model.TransactionFactory::CreateTransaction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransactionFactory_CreateTransaction_m7E6677B03303379F742C2D2DE3E54BF9BB019E0D (String_t* ___rlpHex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___rlpHex0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_0, NULL);
		RuntimeObject* L_2;
		L_2 = TransactionFactory_CreateTransaction_m45DE1C27BE57FD5AFC1AE4E03613AF93FE65CEC2(L_1, NULL);
		return L_2;
	}
}
// System.Boolean Nethereum.Model.TransactionFactory::IsTypeTransaction(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransactionFactory_IsTypeTransaction_m2C8E70392669DAE927529FB507AEC0417D7ABEE8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionType_tE37EFD1623B44F5340629124DD2B25B2D67A9F8D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (TransactionType_tE37EFD1623B44F5340629124DD2B25B2D67A9F8D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bytes0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		int32_t L_5 = ((int32_t)L_4);
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Enum_IsDefined_m1C9A0C4F54B0538351585FF563A01091A6FE2F28(L_1, L_6, NULL);
		if (!L_7)
		{
			goto IL_0028;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___bytes0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		uint8_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___bytes0;
		NullCheck(L_11);
		int32_t L_12 = 0;
		uint8_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if ((((int32_t)L_13) > ((int32_t)((int32_t)127))))
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		return (bool)0;
	}
}
// Nethereum.Model.ITransactionTypeDecoder Nethereum.Model.TransactionFactory::GetTransactionTypeDecoder(Nethereum.Model.TransactionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransactionFactory_GetTransactionTypeDecoder_m596A3F6E656B3032549343230FFC372A4709CCAB (int32_t ___transactionType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___transactionType0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, ((int32_t)-2)))) > ((uint32_t)1))))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___transactionType0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0018;
		}
	}
	{
		goto IL_001e;
	}

IL_000d:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_2 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB28DF552C232A54DAC36D5590A1B2F313A231DB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransactionFactory_GetTransactionTypeDecoder_m596A3F6E656B3032549343230FFC372A4709CCAB_RuntimeMethod_var)));
	}

IL_0018:
	{
		Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* L_3 = (Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E*)il2cpp_codegen_object_new(Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Transaction1559Encoder__ctor_mBBF96D9C7FAEDF76E8AACF92C12F3BAC9E12135A(L_3, NULL);
		return L_3;
	}

IL_001e:
	{
		int32_t L_4 = ___transactionType0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransactionType_tE37EFD1623B44F5340629124DD2B25B2D67A9F8D_il2cpp_TypeInfo_var)), &L_5);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEBFFF519309F724532ADFE795BE05E56940C1A9C)), L_6, (String_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransactionFactory_GetTransactionTypeDecoder_m596A3F6E656B3032549343230FFC372A4709CCAB_RuntimeMethod_var)));
	}
}
// Nethereum.Model.ISignedTransaction Nethereum.Model.TransactionFactory::CreateTransaction(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransactionFactory_CreateTransaction_m45DE1C27BE57FD5AFC1AE4E03613AF93FE65CEC2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rlp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITransactionTypeDecoder_t67C178FBB0E7F6FB3CDDBA2021E82719CCBE9A20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___rlp0;
		bool L_1;
		L_1 = TransactionFactory_IsTypeTransaction_m2C8E70392669DAE927529FB507AEC0417D7ABEE8(L_0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___rlp0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		RuntimeObject* L_5;
		L_5 = TransactionFactory_GetTransactionTypeDecoder_m596A3F6E656B3032549343230FFC372A4709CCAB(L_4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___rlp0;
		NullCheck(L_5);
		SignedTypeTransaction_tE290AC7A95BAC7772CCC1FCDE1DEE730E316D70B* L_7;
		L_7 = InterfaceFuncInvoker1< SignedTypeTransaction_tE290AC7A95BAC7772CCC1FCDE1DEE730E316D70B*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* Nethereum.Model.SignedTypeTransaction Nethereum.Model.ITransactionTypeDecoder::DecodeAsGeneric(System.Byte[]) */, ITransactionTypeDecoder_t67C178FBB0E7F6FB3CDDBA2021E82719CCBE9A20_il2cpp_TypeInfo_var, L_5, L_6);
		return L_7;
	}

IL_0017:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___rlp0;
		il2cpp_codegen_runtime_class_init_inline(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_9;
		L_9 = SignedLegacyTransaction_CreateDefaultRLPSigner_m261513FD2424AE44770E3883F359B3B7D8E09FD6(L_8, NULL);
		V_0 = L_9;
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_10 = V_0;
		NullCheck(L_10);
		bool L_11;
		L_11 = RLPSignedDataHashBuilder_IsVSignatureForChain_mFEA79AEADCE0D30CAE9FFF4D241BFA9BEEBA40A2(L_10, NULL);
		if (L_11)
		{
			goto IL_002d;
		}
	}
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_12 = V_0;
		LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3* L_13 = (LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3*)il2cpp_codegen_object_new(LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		LegacyTransaction__ctor_mFEE6BE3FAF1108A23A532417C6D1FED11BE0B064(L_13, L_12, NULL);
		return L_13;
	}

IL_002d:
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_14 = V_0;
		LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* L_15 = (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7*)il2cpp_codegen_object_new(LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		LegacyTransactionChainId__ctor_mDD8AC4C8B9B56BFE3F4286A71BDFC50456FB914A(L_15, L_14, NULL);
		return L_15;
	}
}
// Nethereum.Model.ISignedTransaction Nethereum.Model.TransactionFactory::CreateLegacyTransaction(System.String,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.String,System.Numerics.BigInteger,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransactionFactory_CreateLegacyTransaction_mA39960B7206C7920500B77C6D632865EEA18A71E (String_t* ___to0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___gas1, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___gasPrice2, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___amount3, String_t* ___data4, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___nonce5, String_t* ___r6, String_t* ___s7, String_t* ___v8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		String_t* L_0 = ___r6;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = ___s7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_2, NULL);
		V_1 = L_3;
		String_t* L_4 = ___v8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_4, NULL);
		V_2 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_2;
		Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* L_9 = (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999*)il2cpp_codegen_object_new(Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Signature__ctor_m0105E56945CA0AD192175F0DB64661AF6AFCAC24(L_9, L_6, L_7, L_8, NULL);
		bool L_10;
		L_10 = SignatureExtensions_IsVSignedForChain_m69DDB826D84F6645FACE71923AAE9CAB88297C56(L_9, NULL);
		if (!L_10)
		{
			goto IL_0068;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_2;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_12;
		L_12 = ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mAD7F985D3961A7070872967A541A414B9B5D13ED(L_11, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_13;
		L_13 = VRecoveryAndChainCalculations_GetChainFromVChain_mE45A697CB197810E8874BF4617782E935C3C2D6D(L_12, NULL);
		V_3 = L_13;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_14 = ___nonce5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_14, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_16 = ___gasPrice2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_16, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_18 = ___gas1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
		L_19 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_18, NULL);
		String_t* L_20 = ___to0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21;
		L_21 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_20, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_22 = ___amount3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_22, NULL);
		String_t* L_24 = ___data4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_24, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_26 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
		L_27 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_26, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_2;
		LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* L_31 = (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7*)il2cpp_codegen_object_new(LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		LegacyTransactionChainId__ctor_m8A14CAA852C74D37FB010A6085E3599C8CCEF839(L_31, L_15, L_17, L_19, L_21, L_23, L_25, L_27, L_28, L_29, L_30, NULL);
		return L_31;
	}

IL_0068:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_32 = ___nonce5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_32, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_34 = ___gasPrice2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35;
		L_35 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_34, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_36 = ___gas1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37;
		L_37 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_36, NULL);
		String_t* L_38 = ___to0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39;
		L_39 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_38, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_40 = ___amount3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41;
		L_41 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_40, NULL);
		String_t* L_42 = ___data4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43;
		L_43 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_42, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_2;
		NullCheck(L_46);
		int32_t L_47 = 0;
		uint8_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3* L_49 = (LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3*)il2cpp_codegen_object_new(LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		LegacyTransaction__ctor_mDC12B3DF1ED58F1E5619B9E18085BEAD89C2B448(L_49, L_33, L_35, L_37, L_39, L_41, L_43, L_44, L_45, L_48, NULL);
		return L_49;
	}
}
// Nethereum.Model.ISignedTransaction Nethereum.Model.TransactionFactory::Create1559Transaction(System.Nullable`1<System.Numerics.BigInteger>,System.Nullable`1<System.Numerics.BigInteger>,System.Nullable`1<System.Numerics.BigInteger>,System.Nullable`1<System.Numerics.BigInteger>,System.Nullable`1<System.Numerics.BigInteger>,System.String,System.Nullable`1<System.Numerics.BigInteger>,System.String,System.Collections.Generic.List`1<Nethereum.Model.AccessListItem>,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransactionFactory_Create1559Transaction_m9841DDDE0FC56892126113E2BB9B3FB909449EEA (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___chainId0, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___nonce1, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___maxPriorityFeePerGas2, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___maxFeePerGas3, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___gasLimit4, String_t* ___to5, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___amount6, String_t* ___data7, List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* ___accessList8, String_t* ___r9, String_t* ___s10, String_t* ___v11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m402A055BB8683375CFA1162E6BA94902F4F5D29C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* V_2 = NULL;
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 V_3;
	memset((&V_3), 0, sizeof(V_3));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B6_1;
	memset((&G_B6_1), 0, sizeof(G_B6_1));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B8_1;
	memset((&G_B8_1), 0, sizeof(G_B8_1));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B7_1;
	memset((&G_B7_1), 0, sizeof(G_B7_1));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B9_1;
	memset((&G_B9_1), 0, sizeof(G_B9_1));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B9_2;
	memset((&G_B9_2), 0, sizeof(G_B9_2));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B11_1;
	memset((&G_B11_1), 0, sizeof(G_B11_1));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B11_2;
	memset((&G_B11_2), 0, sizeof(G_B11_2));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B10_1;
	memset((&G_B10_1), 0, sizeof(G_B10_1));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B10_2;
	memset((&G_B10_2), 0, sizeof(G_B10_2));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B12_1;
	memset((&G_B12_1), 0, sizeof(G_B12_1));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B12_2;
	memset((&G_B12_2), 0, sizeof(G_B12_2));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B12_3;
	memset((&G_B12_3), 0, sizeof(G_B12_3));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B14_0;
	memset((&G_B14_0), 0, sizeof(G_B14_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B14_1;
	memset((&G_B14_1), 0, sizeof(G_B14_1));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B14_2;
	memset((&G_B14_2), 0, sizeof(G_B14_2));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B14_3;
	memset((&G_B14_3), 0, sizeof(G_B14_3));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B13_0;
	memset((&G_B13_0), 0, sizeof(G_B13_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B13_1;
	memset((&G_B13_1), 0, sizeof(G_B13_1));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B13_2;
	memset((&G_B13_2), 0, sizeof(G_B13_2));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B13_3;
	memset((&G_B13_3), 0, sizeof(G_B13_3));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B15_0;
	memset((&G_B15_0), 0, sizeof(G_B15_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B15_1;
	memset((&G_B15_1), 0, sizeof(G_B15_1));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B15_2;
	memset((&G_B15_2), 0, sizeof(G_B15_2));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B15_3;
	memset((&G_B15_3), 0, sizeof(G_B15_3));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B15_4;
	memset((&G_B15_4), 0, sizeof(G_B15_4));
	String_t* G_B17_0 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B17_1;
	memset((&G_B17_1), 0, sizeof(G_B17_1));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B17_2;
	memset((&G_B17_2), 0, sizeof(G_B17_2));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B17_3;
	memset((&G_B17_3), 0, sizeof(G_B17_3));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B17_4;
	memset((&G_B17_4), 0, sizeof(G_B17_4));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B17_5;
	memset((&G_B17_5), 0, sizeof(G_B17_5));
	String_t* G_B16_0 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B16_1;
	memset((&G_B16_1), 0, sizeof(G_B16_1));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B16_2;
	memset((&G_B16_2), 0, sizeof(G_B16_2));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B16_3;
	memset((&G_B16_3), 0, sizeof(G_B16_3));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B16_4;
	memset((&G_B16_4), 0, sizeof(G_B16_4));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B16_5;
	memset((&G_B16_5), 0, sizeof(G_B16_5));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B18_0;
	memset((&G_B18_0), 0, sizeof(G_B18_0));
	String_t* G_B18_1 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B18_2;
	memset((&G_B18_2), 0, sizeof(G_B18_2));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B18_3;
	memset((&G_B18_3), 0, sizeof(G_B18_3));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B18_4;
	memset((&G_B18_4), 0, sizeof(G_B18_4));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B18_5;
	memset((&G_B18_5), 0, sizeof(G_B18_5));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B18_6;
	memset((&G_B18_6), 0, sizeof(G_B18_6));
	{
		String_t* L_0 = ___r9;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_0, NULL);
		String_t* L_2 = ___s10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_2, NULL);
		V_0 = L_3;
		String_t* L_4 = ___v11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_4, NULL);
		V_1 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* L_8 = (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999*)il2cpp_codegen_object_new(Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Signature__ctor_m0105E56945CA0AD192175F0DB64661AF6AFCAC24(L_8, L_1, L_6, L_7, NULL);
		V_2 = L_8;
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_9 = ___chainId0;
		V_3 = L_9;
		bool L_10;
		L_10 = Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_inline((&V_3), Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_0032;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_11;
		L_11 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(0, NULL);
		G_B3_0 = L_11;
		goto IL_0039;
	}

IL_0032:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_12;
		L_12 = Nullable_1_GetValueOrDefault_m402A055BB8683375CFA1162E6BA94902F4F5D29C_inline((&V_3), Nullable_1_GetValueOrDefault_m402A055BB8683375CFA1162E6BA94902F4F5D29C_RuntimeMethod_var);
		G_B3_0 = L_12;
	}

IL_0039:
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_13 = ___nonce1;
		V_3 = L_13;
		bool L_14;
		L_14 = Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_inline((&V_3), Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_RuntimeMethod_var);
		G_B4_0 = G_B3_0;
		if (L_14)
		{
			G_B5_0 = G_B3_0;
			goto IL_004c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_15;
		L_15 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(0, NULL);
		G_B6_0 = L_15;
		G_B6_1 = G_B4_0;
		goto IL_0053;
	}

IL_004c:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_16;
		L_16 = Nullable_1_GetValueOrDefault_m402A055BB8683375CFA1162E6BA94902F4F5D29C_inline((&V_3), Nullable_1_GetValueOrDefault_m402A055BB8683375CFA1162E6BA94902F4F5D29C_RuntimeMethod_var);
		G_B6_0 = L_16;
		G_B6_1 = G_B5_0;
	}

IL_0053:
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_17 = ___maxPriorityFeePerGas2;
		V_3 = L_17;
		bool L_18;
		L_18 = Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_inline((&V_3), Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_RuntimeMethod_var);
		G_B7_0 = G_B6_0;
		G_B7_1 = G_B6_1;
		if (L_18)
		{
			G_B8_0 = G_B6_0;
			G_B8_1 = G_B6_1;
			goto IL_0066;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_19;
		L_19 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(0, NULL);
		G_B9_0 = L_19;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_006d;
	}

IL_0066:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_20;
		L_20 = Nullable_1_GetValueOrDefault_m402A055BB8683375CFA1162E6BA94902F4F5D29C_inline((&V_3), Nullable_1_GetValueOrDefault_m402A055BB8683375CFA1162E6BA94902F4F5D29C_RuntimeMethod_var);
		G_B9_0 = L_20;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_006d:
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_21 = ___maxFeePerGas3;
		V_3 = L_21;
		bool L_22;
		L_22 = Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_inline((&V_3), Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_RuntimeMethod_var);
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		if (L_22)
		{
			G_B11_0 = G_B9_0;
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			goto IL_0080;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_23;
		L_23 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(0, NULL);
		G_B12_0 = L_23;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		goto IL_0087;
	}

IL_0080:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_24;
		L_24 = Nullable_1_GetValueOrDefault_m402A055BB8683375CFA1162E6BA94902F4F5D29C_inline((&V_3), Nullable_1_GetValueOrDefault_m402A055BB8683375CFA1162E6BA94902F4F5D29C_RuntimeMethod_var);
		G_B12_0 = L_24;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
	}

IL_0087:
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_25 = ___gasLimit4;
		V_3 = L_25;
		bool L_26;
		L_26 = Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_inline((&V_3), Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_RuntimeMethod_var);
		G_B13_0 = G_B12_0;
		G_B13_1 = G_B12_1;
		G_B13_2 = G_B12_2;
		G_B13_3 = G_B12_3;
		if (L_26)
		{
			G_B14_0 = G_B12_0;
			G_B14_1 = G_B12_1;
			G_B14_2 = G_B12_2;
			G_B14_3 = G_B12_3;
			goto IL_009b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_27;
		L_27 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(0, NULL);
		G_B15_0 = L_27;
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		G_B15_3 = G_B13_2;
		G_B15_4 = G_B13_3;
		goto IL_00a2;
	}

IL_009b:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_28;
		L_28 = Nullable_1_GetValueOrDefault_m402A055BB8683375CFA1162E6BA94902F4F5D29C_inline((&V_3), Nullable_1_GetValueOrDefault_m402A055BB8683375CFA1162E6BA94902F4F5D29C_RuntimeMethod_var);
		G_B15_0 = L_28;
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
		G_B15_3 = G_B14_2;
		G_B15_4 = G_B14_3;
	}

IL_00a2:
	{
		String_t* L_29 = ___to5;
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_30 = ___amount6;
		V_3 = L_30;
		bool L_31;
		L_31 = Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_inline((&V_3), Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_RuntimeMethod_var);
		G_B16_0 = L_29;
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
		G_B16_3 = G_B15_2;
		G_B16_4 = G_B15_3;
		G_B16_5 = G_B15_4;
		if (L_31)
		{
			G_B17_0 = L_29;
			G_B17_1 = G_B15_0;
			G_B17_2 = G_B15_1;
			G_B17_3 = G_B15_2;
			G_B17_4 = G_B15_3;
			G_B17_5 = G_B15_4;
			goto IL_00b8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_32;
		L_32 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(0, NULL);
		G_B18_0 = L_32;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		G_B18_3 = G_B16_2;
		G_B18_4 = G_B16_3;
		G_B18_5 = G_B16_4;
		G_B18_6 = G_B16_5;
		goto IL_00bf;
	}

IL_00b8:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_33;
		L_33 = Nullable_1_GetValueOrDefault_m402A055BB8683375CFA1162E6BA94902F4F5D29C_inline((&V_3), Nullable_1_GetValueOrDefault_m402A055BB8683375CFA1162E6BA94902F4F5D29C_RuntimeMethod_var);
		G_B18_0 = L_33;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
		G_B18_4 = G_B17_3;
		G_B18_5 = G_B17_4;
		G_B18_6 = G_B17_5;
	}

IL_00bf:
	{
		String_t* L_34 = ___data7;
		List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* L_35 = ___accessList8;
		Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* L_36 = V_2;
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_37 = (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17*)il2cpp_codegen_object_new(Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		Transaction1559__ctor_m51E1FDA09EE68D2C4D1E4CB045F3AE3ABFF95383(L_37, G_B18_6, G_B18_5, G_B18_4, G_B18_3, G_B18_2, G_B18_1, G_B18_0, L_34, L_35, L_36, NULL);
		return L_37;
	}
}
// Nethereum.Model.ISignedTransaction Nethereum.Model.TransactionFactory::CreateTransaction(System.Nullable`1<System.Numerics.BigInteger>,System.Nullable`1<System.Byte>,System.Nullable`1<System.Numerics.BigInteger>,System.Nullable`1<System.Numerics.BigInteger>,System.Nullable`1<System.Numerics.BigInteger>,System.Nullable`1<System.Numerics.BigInteger>,System.Nullable`1<System.Numerics.BigInteger>,System.String,System.Nullable`1<System.Numerics.BigInteger>,System.String,System.Collections.Generic.List`1<Nethereum.Model.AccessListItem>,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransactionFactory_CreateTransaction_mC2B654494DAF69E773DFE2ECB23B1181CE3D6751 (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___chainId0, Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 ___transactionType1, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___nonce2, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___maxPriorityFeePerGas3, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___maxFeePerGas4, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___gasPrice5, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___gasLimit6, String_t* ___to7, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___amount8, String_t* ___data9, List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* ___accessList10, String_t* ___r11, String_t* ___s12, String_t* ___v13, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m402A055BB8683375CFA1162E6BA94902F4F5D29C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mE1BD2EC3D88CCEF213FC050F3022BD301B857F61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	String_t* G_B13_0 = NULL;
	String_t* G_B12_0 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B14_0;
	memset((&G_B14_0), 0, sizeof(G_B14_0));
	String_t* G_B14_1 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B16_0;
	memset((&G_B16_0), 0, sizeof(G_B16_0));
	String_t* G_B16_1 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B15_0;
	memset((&G_B15_0), 0, sizeof(G_B15_0));
	String_t* G_B15_1 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B17_0;
	memset((&G_B17_0), 0, sizeof(G_B17_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B17_1;
	memset((&G_B17_1), 0, sizeof(G_B17_1));
	String_t* G_B17_2 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B19_1;
	memset((&G_B19_1), 0, sizeof(G_B19_1));
	String_t* G_B19_2 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B18_0;
	memset((&G_B18_0), 0, sizeof(G_B18_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B18_1;
	memset((&G_B18_1), 0, sizeof(G_B18_1));
	String_t* G_B18_2 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B20_0;
	memset((&G_B20_0), 0, sizeof(G_B20_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B20_1;
	memset((&G_B20_1), 0, sizeof(G_B20_1));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B20_2;
	memset((&G_B20_2), 0, sizeof(G_B20_2));
	String_t* G_B20_3 = NULL;
	String_t* G_B22_0 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B22_1;
	memset((&G_B22_1), 0, sizeof(G_B22_1));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B22_2;
	memset((&G_B22_2), 0, sizeof(G_B22_2));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B22_3;
	memset((&G_B22_3), 0, sizeof(G_B22_3));
	String_t* G_B22_4 = NULL;
	String_t* G_B21_0 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B21_1;
	memset((&G_B21_1), 0, sizeof(G_B21_1));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B21_2;
	memset((&G_B21_2), 0, sizeof(G_B21_2));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B21_3;
	memset((&G_B21_3), 0, sizeof(G_B21_3));
	String_t* G_B21_4 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B23_0;
	memset((&G_B23_0), 0, sizeof(G_B23_0));
	String_t* G_B23_1 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B23_2;
	memset((&G_B23_2), 0, sizeof(G_B23_2));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B23_3;
	memset((&G_B23_3), 0, sizeof(G_B23_3));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B23_4;
	memset((&G_B23_4), 0, sizeof(G_B23_4));
	String_t* G_B23_5 = NULL;
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_inline((&___transactionType1), Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_005d;
		}
	}
	{
		Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_1 = ___transactionType1;
		V_2 = L_1;
		bool L_2;
		L_2 = Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_inline((&V_2), Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_3 = V_3;
		G_B4_0 = L_3;
		goto IL_002b;
	}

IL_001f:
	{
		uint8_t L_4;
		L_4 = Nullable_1_GetValueOrDefault_mE1BD2EC3D88CCEF213FC050F3022BD301B857F61_inline((&V_2), Nullable_1_GetValueOrDefault_mE1BD2EC3D88CCEF213FC050F3022BD301B857F61_RuntimeMethod_var);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_5), L_4, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		G_B4_0 = L_5;
	}

IL_002b:
	{
		V_0 = G_B4_0;
		V_1 = 2;
		int32_t L_6;
		L_6 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_0), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		int32_t L_7 = V_1;
		bool L_8;
		L_8 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_0), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!((int32_t)(((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0)&(int32_t)L_8)))
		{
			goto IL_005d;
		}
	}
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_9 = ___chainId0;
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_10 = ___nonce2;
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_11 = ___maxPriorityFeePerGas3;
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_12 = ___maxFeePerGas4;
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_13 = ___gasLimit6;
		String_t* L_14 = ___to7;
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_15 = ___amount8;
		String_t* L_16 = ___data9;
		List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* L_17 = ___accessList10;
		String_t* L_18 = ___r11;
		String_t* L_19 = ___s12;
		String_t* L_20 = ___v13;
		RuntimeObject* L_21;
		L_21 = TransactionFactory_Create1559Transaction_m9841DDDE0FC56892126113E2BB9B3FB909449EEA(L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, NULL);
		return L_21;
	}

IL_005d:
	{
		bool L_22;
		L_22 = Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_inline((&___transactionType1), Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_RuntimeMethod_var);
		if (!L_22)
		{
			goto IL_009f;
		}
	}
	{
		Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_23 = ___transactionType1;
		V_2 = L_23;
		bool L_24;
		L_24 = Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_inline((&V_2), Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_RuntimeMethod_var);
		if (L_24)
		{
			goto IL_007c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_25 = V_3;
		G_B10_0 = L_25;
		goto IL_0088;
	}

IL_007c:
	{
		uint8_t L_26;
		L_26 = Nullable_1_GetValueOrDefault_mE1BD2EC3D88CCEF213FC050F3022BD301B857F61_inline((&V_2), Nullable_1_GetValueOrDefault_mE1BD2EC3D88CCEF213FC050F3022BD301B857F61_RuntimeMethod_var);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_27), L_26, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		G_B10_0 = L_27;
	}

IL_0088:
	{
		V_0 = G_B10_0;
		V_1 = 0;
		int32_t L_28;
		L_28 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_0), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		int32_t L_29 = V_1;
		bool L_30;
		L_30 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_0), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!((int32_t)(((((int32_t)L_28) == ((int32_t)L_29))? 1 : 0)&(int32_t)L_30)))
		{
			goto IL_011e;
		}
	}

IL_009f:
	{
		String_t* L_31 = ___to7;
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_32 = ___gasLimit6;
		V_4 = L_32;
		bool L_33;
		L_33 = Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_inline((&V_4), Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_RuntimeMethod_var);
		G_B12_0 = L_31;
		if (L_33)
		{
			G_B13_0 = L_31;
			goto IL_00b6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_34;
		L_34 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(0, NULL);
		G_B14_0 = L_34;
		G_B14_1 = G_B12_0;
		goto IL_00bd;
	}

IL_00b6:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_35;
		L_35 = Nullable_1_GetValueOrDefault_m402A055BB8683375CFA1162E6BA94902F4F5D29C_inline((&V_4), Nullable_1_GetValueOrDefault_m402A055BB8683375CFA1162E6BA94902F4F5D29C_RuntimeMethod_var);
		G_B14_0 = L_35;
		G_B14_1 = G_B13_0;
	}

IL_00bd:
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_36 = ___gasPrice5;
		V_4 = L_36;
		bool L_37;
		L_37 = Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_inline((&V_4), Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_RuntimeMethod_var);
		G_B15_0 = G_B14_0;
		G_B15_1 = G_B14_1;
		if (L_37)
		{
			G_B16_0 = G_B14_0;
			G_B16_1 = G_B14_1;
			goto IL_00d2;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_38;
		L_38 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(0, NULL);
		G_B17_0 = L_38;
		G_B17_1 = G_B15_0;
		G_B17_2 = G_B15_1;
		goto IL_00d9;
	}

IL_00d2:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_39;
		L_39 = Nullable_1_GetValueOrDefault_m402A055BB8683375CFA1162E6BA94902F4F5D29C_inline((&V_4), Nullable_1_GetValueOrDefault_m402A055BB8683375CFA1162E6BA94902F4F5D29C_RuntimeMethod_var);
		G_B17_0 = L_39;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
	}

IL_00d9:
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_40 = ___amount8;
		V_4 = L_40;
		bool L_41;
		L_41 = Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_inline((&V_4), Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_RuntimeMethod_var);
		G_B18_0 = G_B17_0;
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		if (L_41)
		{
			G_B19_0 = G_B17_0;
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			goto IL_00ee;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_42;
		L_42 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(0, NULL);
		G_B20_0 = L_42;
		G_B20_1 = G_B18_0;
		G_B20_2 = G_B18_1;
		G_B20_3 = G_B18_2;
		goto IL_00f5;
	}

IL_00ee:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_43;
		L_43 = Nullable_1_GetValueOrDefault_m402A055BB8683375CFA1162E6BA94902F4F5D29C_inline((&V_4), Nullable_1_GetValueOrDefault_m402A055BB8683375CFA1162E6BA94902F4F5D29C_RuntimeMethod_var);
		G_B20_0 = L_43;
		G_B20_1 = G_B19_0;
		G_B20_2 = G_B19_1;
		G_B20_3 = G_B19_2;
	}

IL_00f5:
	{
		String_t* L_44 = ___data9;
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_45 = ___nonce2;
		V_4 = L_45;
		bool L_46;
		L_46 = Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_inline((&V_4), Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_RuntimeMethod_var);
		G_B21_0 = L_44;
		G_B21_1 = G_B20_0;
		G_B21_2 = G_B20_1;
		G_B21_3 = G_B20_2;
		G_B21_4 = G_B20_3;
		if (L_46)
		{
			G_B22_0 = L_44;
			G_B22_1 = G_B20_0;
			G_B22_2 = G_B20_1;
			G_B22_3 = G_B20_2;
			G_B22_4 = G_B20_3;
			goto IL_010b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_47;
		L_47 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(0, NULL);
		G_B23_0 = L_47;
		G_B23_1 = G_B21_0;
		G_B23_2 = G_B21_1;
		G_B23_3 = G_B21_2;
		G_B23_4 = G_B21_3;
		G_B23_5 = G_B21_4;
		goto IL_0112;
	}

IL_010b:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_48;
		L_48 = Nullable_1_GetValueOrDefault_m402A055BB8683375CFA1162E6BA94902F4F5D29C_inline((&V_4), Nullable_1_GetValueOrDefault_m402A055BB8683375CFA1162E6BA94902F4F5D29C_RuntimeMethod_var);
		G_B23_0 = L_48;
		G_B23_1 = G_B22_0;
		G_B23_2 = G_B22_1;
		G_B23_3 = G_B22_2;
		G_B23_4 = G_B22_3;
		G_B23_5 = G_B22_4;
	}

IL_0112:
	{
		String_t* L_49 = ___r11;
		String_t* L_50 = ___s12;
		String_t* L_51 = ___v13;
		RuntimeObject* L_52;
		L_52 = TransactionFactory_CreateLegacyTransaction_mA39960B7206C7920500B77C6D632865EEA18A71E(G_B23_5, G_B23_4, G_B23_3, G_B23_2, G_B23_1, G_B23_0, L_49, L_50, L_51, NULL);
		return L_52;
	}

IL_011e:
	{
		String_t* L_53;
		L_53 = Nullable_1_ToString_m920DDEC1CCF5F7B138DCFA3A06F490F290A91665((&___transactionType1), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Nullable_1_ToString_m920DDEC1CCF5F7B138DCFA3A06F490F290A91665_RuntimeMethod_var)));
		String_t* L_54;
		L_54 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2333AB02EB7587F927A6E929CDA8F5DAE07F11D)), L_53, NULL);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_55 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_55);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_55, L_54, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_55, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransactionFactory_CreateTransaction_mC2B654494DAF69E773DFE2ECB23B1181CE3D6751_RuntimeMethod_var)));
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
// System.Byte Nethereum.Model.TransactionTypeExtensions::AsByte(Nethereum.Model.TransactionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t TransactionTypeExtensions_AsByte_m6F28DCF90590ABCD9F4A1FC31047D7EDAD3AE4A1 (int32_t ___transactionType0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___transactionType0;
		return (uint8_t)((int32_t)(uint8_t)L_0);
	}
}
// Nethereum.Model.TransactionType Nethereum.Model.TransactionTypeExtensions::ToTypedTransaction(System.Nullable`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransactionTypeExtensions_ToTypedTransaction_m8DFB3DB15051223807B04257BF4D925E74B10881 (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m467AE36003E64D3A17BE8DEAE0617A8A91C4D299_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_0 = ___value0;
		bool L_1;
		L_1 = TransactionTypeExtensions_IsTypedTransaction_m9E42FD6CF9A540E292177F8A5199141644401F8F(L_0, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		uint8_t L_2;
		L_2 = Nullable_1_get_Value_m467AE36003E64D3A17BE8DEAE0617A8A91C4D299((&___value0), Nullable_1_get_Value_m467AE36003E64D3A17BE8DEAE0617A8A91C4D299_RuntimeMethod_var);
		return (int32_t)(L_2);
	}

IL_0010:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4E2A76B9671BDD259F592403ABD44DDBCA55508)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransactionTypeExtensions_ToTypedTransaction_m8DFB3DB15051223807B04257BF4D925E74B10881_RuntimeMethod_var)));
	}
}
// System.Boolean Nethereum.Model.TransactionTypeExtensions::IsTypedTransaction(System.Nullable`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransactionTypeExtensions_IsTypedTransaction_m9E42FD6CF9A540E292177F8A5199141644401F8F (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mE1BD2EC3D88CCEF213FC050F3022BD301B857F61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_inline((&___value0), Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0046;
		}
	}
	{
		Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_1 = ___value0;
		V_2 = L_1;
		bool L_2;
		L_2 = Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_inline((&V_2), Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_3 = V_3;
		G_B4_0 = L_3;
		goto IL_002b;
	}

IL_001f:
	{
		uint8_t L_4;
		L_4 = Nullable_1_GetValueOrDefault_mE1BD2EC3D88CCEF213FC050F3022BD301B857F61_inline((&V_2), Nullable_1_GetValueOrDefault_mE1BD2EC3D88CCEF213FC050F3022BD301B857F61_RuntimeMethod_var);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_5), L_4, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		G_B4_0 = L_5;
	}

IL_002b:
	{
		V_0 = G_B4_0;
		uint8_t L_6;
		L_6 = TransactionTypeExtensions_AsByte_m6F28DCF90590ABCD9F4A1FC31047D7EDAD3AE4A1(2, NULL);
		V_1 = L_6;
		int32_t L_7;
		L_7 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_0), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		int32_t L_8 = V_1;
		bool L_9;
		L_9 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_0), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		return (bool)((int32_t)(((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0)&(int32_t)L_9));
	}

IL_0046:
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
// System.Int32 Nethereum.Model.VRecoveryAndChainCalculations::GetRecIdFromV(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VRecoveryAndChainCalculations_GetRecIdFromV_m4A452B035B4B3E2849EA7207CA6147DA369F95C5 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___v0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___v0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		int32_t L_3;
		L_3 = VRecoveryAndChainCalculations_GetRecIdFromV_m930CB9D6268213A7DA579AC28E1E0126F4231F34(L_2, NULL);
		return L_3;
	}
}
// System.Int32 Nethereum.Model.VRecoveryAndChainCalculations::GetRecIdFromV(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VRecoveryAndChainCalculations_GetRecIdFromV_m930CB9D6268213A7DA579AC28E1E0126F4231F34 (uint8_t ___v0, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = ___v0;
		V_0 = L_0;
		uint8_t L_1 = V_0;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)27))))
		{
			goto IL_000c;
		}
	}
	{
		uint8_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)34))))
		{
			goto IL_0023;
		}
	}

IL_000c:
	{
		String_t* L_3;
		L_3 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8B1E24B4D727EDA78ED297F0CF28ED9026B51D02)), L_3, NULL);
		Exception_t* L_5 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VRecoveryAndChainCalculations_GetRecIdFromV_m930CB9D6268213A7DA579AC28E1E0126F4231F34_RuntimeMethod_var)));
	}

IL_0023:
	{
		uint8_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)31))))
		{
			goto IL_002d;
		}
	}
	{
		uint8_t L_7 = V_0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, 4)));
	}

IL_002d:
	{
		uint8_t L_8 = V_0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, ((int32_t)27)));
	}
}
// System.Int32 Nethereum.Model.VRecoveryAndChainCalculations::GetRecIdFromVChain(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VRecoveryAndChainCalculations_GetRecIdFromVChain_mFCD12CDC4F8AB86CBB82B98179CCB6022301706C (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___vChain0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___chainId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___vChain0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1 = ___chainId1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(2, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigInteger_op_Multiply_m2AF82FA0B4750F56C6A5522A54FBFF2C84919EFE(L_1, L_2, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = BigInteger_op_Subtraction_m91D2E4A4810792046B697F0500B8797F7645FF14(L_0, L_3, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(((int32_t)35), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6;
		L_6 = BigInteger_op_Subtraction_m91D2E4A4810792046B697F0500B8797F7645FF14(L_4, L_5, NULL);
		int32_t L_7;
		L_7 = BigInteger_op_Explicit_m381F80B7F65BFEC7F2597DCDB24622F7F32E6848(L_6, NULL);
		return L_7;
	}
}
// System.Numerics.BigInteger Nethereum.Model.VRecoveryAndChainCalculations::GetChainFromVChain(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F VRecoveryAndChainCalculations_GetChainFromVChain_mE45A697CB197810E8874BF4617782E935C3C2D6D (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___vChain0, const RuntimeMethod* method) 
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
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___vChain0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(((int32_t)35), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = BigInteger_op_Subtraction_m91D2E4A4810792046B697F0500B8797F7645FF14(L_0, L_1, NULL);
		V_0 = L_2;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3 = V_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(2, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = BigInteger_op_Modulus_m3224170883C73BCEC10BC5ACB8ED7C979E43A8CE(L_3, L_4, NULL);
		bool L_6;
		L_6 = BigInteger_op_Equality_mC3E68AE3326F7FAC3441A5618537BFB24CD15248(L_5, ((int64_t)0), NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_8;
		L_8 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(2, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_9;
		L_9 = BigInteger_op_Division_mEABFC30E3B59FF3FF53F8CEB65F70D13CD2E64D5(L_7, L_8, NULL);
		return L_9;
	}

IL_0030:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_11;
		L_11 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(1, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_12;
		L_12 = BigInteger_op_Subtraction_m91D2E4A4810792046B697F0500B8797F7645FF14(L_10, L_11, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_13;
		L_13 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(2, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_14;
		L_14 = BigInteger_op_Division_mEABFC30E3B59FF3FF53F8CEB65F70D13CD2E64D5(L_12, L_13, NULL);
		return L_14;
	}
}
// System.Int32 Nethereum.Model.VRecoveryAndChainCalculations::GetRecIdFromVChain(System.Byte[],System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VRecoveryAndChainCalculations_GetRecIdFromVChain_m77779E5635CCF8E65F582291508FF1DB6948CDFC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___vChain0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___chainId1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___vChain0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mAD7F985D3961A7070872967A541A414B9B5D13ED(L_0, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = ___chainId1;
		int32_t L_3;
		L_3 = VRecoveryAndChainCalculations_GetRecIdFromVChain_mFCD12CDC4F8AB86CBB82B98179CCB6022301706C(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Numerics.BigInteger Nethereum.Model.VRecoveryAndChainCalculations::CalculateV(System.Numerics.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F VRecoveryAndChainCalculations_CalculateV_mAC5B6F11BB74AFD4301066BF73E5FC64C048A930 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___chainId0, int32_t ___recId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___chainId0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(2, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = BigInteger_op_Multiply_m2AF82FA0B4750F56C6A5522A54FBFF2C84919EFE(L_0, L_1, NULL);
		int32_t L_3 = ___recId1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(L_3, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = BigInteger_op_Addition_m895A3ED96D07E1A6E4AD97483EDC256107A31B12(L_2, L_4, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6;
		L_6 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(((int32_t)35), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7;
		L_7 = BigInteger_op_Addition_m895A3ED96D07E1A6E4AD97483EDC256107A31B12(L_5, L_6, NULL);
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessListItem_set_StorageKeys_mC44001373EA02A97D0EBBD554AC47C58CF7C9D9A_inline (AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___value0, const RuntimeMethod* method) 
{
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___value0;
		__this->___U3CStorageKeysU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStorageKeysU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessListItem_set_Address_m02AC4A9672473673291EC9A307CF8B2B83951820_inline (AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CAddressU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAddressU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessListItem_get_Address_m34B6C0590AEBD642BC0A156609AB18A4B8BE01F8_inline (AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAddressU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* AccessListItem_get_StorageKeys_m67B0C1F73D53C01564E9D6799DC9AAE6F34584F5_inline (AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3CStorageKeysU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Account_get_Nonce_m7A627E28D7F7629FAB6196916B1FA4EDAEDA5219_inline (Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->___U3CNonceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Account_get_Balance_m72FC1090ACBB3A710F25E485628B6FD996847A23_inline (Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->___U3CBalanceU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Account_get_StateRoot_mB52D66E701BE1FBD4E68A48C71A2B2ACB9EDEA5E_inline (Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CStateRootU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Account_get_CodeHash_mA002CB1FAC603EFBC31CC3D18F032EA70BD99708_inline (Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CCodeHashU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Account_set_Nonce_mF78539118A7B9C0534BC429CBEE300D933EBD42A_inline (Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___value0;
		__this->___U3CNonceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CNonceU3Ek__BackingField_0))->____bits_1), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Account_set_Balance_m63367A3C6513073461E4D78A8DBA23A5573F62AD_inline (Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___value0;
		__this->___U3CBalanceU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CBalanceU3Ek__BackingField_1))->____bits_1), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Account_set_StateRoot_m407565197BD4B050E841032EFB12089420582637_inline (Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CStateRootU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStateRootU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Account_set_CodeHash_mFB21C64C3CBEA71FAD10B9460B96805785C2E09C_inline (Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CCodeHashU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCodeHashU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 BlockHeader_get_BaseFee_m4A4473059F978BE88F48490A63865313A3D27BF8_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = __this->___U3CBaseFeeU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeader_get_ParentHash_mD09AFC6B6C0A59D14BAA739047EE9187485033B2_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CParentHashU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeader_get_UnclesHash_mC369A310077A836F8C7813A81E7152D7EBEBBCC7_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CUnclesHashU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BlockHeader_get_Coinbase_m5382AA5D7520BAA1F29E856950F113BB5A695A05_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CCoinbaseU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeader_get_StateRoot_mB49452F2707E51BEFA3098C765CC07B212EA1BFD_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CStateRootU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeader_get_TransactionsHash_mA14ED72B316456A7DA70674CFA45FB614BE6D052_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CTransactionsHashU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeader_get_ReceiptHash_m601349219B610EA247E77C71989580827E9D6155_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CReceiptHashU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeader_get_LogsBloom_m8ECB925ACF13C4B08366C8BD7D1DB7AD79587CC2_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CLogsBloomU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BlockHeader_get_Difficulty_m3FB7AC6E712CECA3AC8AE8AA889BD5096645560C_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->___U3CDifficultyU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BlockHeader_get_BlockNumber_m0DC83E04F6F0F2819D602E42C8AA586F89981B89_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->___U3CBlockNumberU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BlockHeader_get_GasLimit_mB3CABF0F4F03B6FDA626CAC59B5A549E84455062_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CGasLimitU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BlockHeader_get_GasUsed_mDFD81A5827A38B40429AAC2265998EBF568C558B_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CGasUsedU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BlockHeader_get_Timestamp_m8BC5D0906E650F8218B340228F36609DA1F792CA_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CTimestampU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeader_get_ExtraData_m8BE7E056B3401DE5E987EBD9D0BCD5A7D4599900_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CExtraDataU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeader_get_MixHash_m31F008787399E24AE508492F3B48E38404605774_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CMixHashU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlockHeader_get_Nonce_mE68FEFB68F47B6DA1F527BC99CA3AF123E37F972_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CNonceU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_ParentHash_m3544C8D5C367E7D5C0BF971BECF75364E2A449E0_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CParentHashU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParentHashU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_UnclesHash_m4BFB158D24853CB73F74E049DEBC9BDCAE010711_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CUnclesHashU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUnclesHashU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_Coinbase_m6A4E6DBD82B66997878DEAFCC0A4A79297C65343_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CCoinbaseU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCoinbaseU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_StateRoot_m44264C1F32131C34F88F20A86EA95AB3E93906C8_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CStateRootU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStateRootU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_TransactionsHash_mB0FBEB59E6219F2575BE2A132695C2651EBC110F_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CTransactionsHashU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTransactionsHashU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_ReceiptHash_m008A4438451481B963F925C22CFB1BBCF10816F8_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CReceiptHashU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReceiptHashU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_LogsBloom_m36794ED0B4FB02FE67805DE4F8DCD8EF2F76D429_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CLogsBloomU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLogsBloomU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_Difficulty_mDBC375C45A9753448B08188FAF275455DCB86911_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___value0;
		__this->___U3CDifficultyU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CDifficultyU3Ek__BackingField_8))->____bits_1), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_BlockNumber_m20C1879A0E9C8051E908608C9C58584ED46A0CB7_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___value0;
		__this->___U3CBlockNumberU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CBlockNumberU3Ek__BackingField_6))->____bits_1), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_GasLimit_m5D124AC1B06BEA9A6F5158439B7A08B23DFBC1A1_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		__this->___U3CGasLimitU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_GasUsed_mD15EFF3F1EB909E2FB43E34E624B96BE31CC8A6C_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		__this->___U3CGasUsedU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_Timestamp_mAAB7D498005A69025A0E8088C80D4F5B7459CE92_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		__this->___U3CTimestampU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_ExtraData_m803FEC4A93D5203511EC702AD6C3D2358D0CBC62_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CExtraDataU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExtraDataU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_MixHash_mB28EC358A7C54B981C16209505AEFF98DE3B185D_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CMixHashU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMixHashU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_Nonce_m8ABAD0FF0F65C698FF383A31999311B050762157_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CNonceU3Ek__BackingField_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNonceU3Ek__BackingField_14), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockHeader_set_BaseFee_m53937185E9CA21B70B27FBD716A24364677D7954_inline (BlockHeader_t481A616ED44C1A48F365CBCBBC4D610D001D143F* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = ___value0;
		__this->___U3CBaseFeeU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CBaseFeeU3Ek__BackingField_15))->___value_1))->____bits_1), (void*)NULL);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignedLegacyTransactionBase_set_RlpSignerEncoder_m2E48E16936EF5766F77818F30F38D403947405C5_inline (SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F* __this, RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* ___value0, const RuntimeMethod* method) 
{
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0 = ___value0;
		__this->___U3CRlpSignerEncoderU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRlpSignerEncoderU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline (SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F* __this, const RuntimeMethod* method) 
{
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0 = __this->___U3CRlpSignerEncoderU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* RLPSignedDataHashBuilder_get_Data_m2904CB6BA451E29C691C9053D1CD2E66DDD2A904_inline (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = __this->___U3CDataU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Log_set_Data_mD63ED2DB2693974C820D44396C0E7EC8D852D2C4_inline (Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CDataU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Log_set_Address_m05D55D5AF6779099FBC150E7A8383B628A3BD32A_inline (Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CAddressU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAddressU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* Log_get_Topics_mFCD8D8F3F128E1E5B0E1464DC85B5BBC184CDE15_inline (Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2* __this, const RuntimeMethod* method) 
{
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3CTopicsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Log_get_Address_m81F8BC5C2B100586D05555A684918DA177B7D9D7_inline (Log_tBF7A8E1B70D61BBE13BE36ABAA311F388B143AC2* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAddressU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* SignedData_get_Data_m0B4B3B958EDD8340E984A868C03F025552ED650B_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = __this->___U3CDataU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder_set_Data_mAB87DA8AC2B612D1A97F526ADAC70204B1551B9C_inline (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = ___value0;
		__this->___U3CDataU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder_set_Signature_mD3719D97D6BFEFBF79830FB803E52E276E1D8D0F_inline (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CSignatureU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSignatureU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RLPSignedDataHashBuilder_get_Signature_m30DFAA97567C1D3B8B893DEB71F24F8FC4C89078_inline (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CSignatureU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Signature_set_R_m261A6B7900366DC1E27C4AAA3EBFB341B0F3BF55_inline (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CRU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Signature_set_S_mD8491BE0225CF5FEC82804652442E023460B8393_inline (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CSU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Signature_set_V_m6727A9B12FE4BDA7D1F033B3A1B084C7320902BA_inline (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CVU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CVU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedData_get_V_mBD8C626B8CF802E879880012D096186E9A1F27D3_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CVU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedData_get_R_m8B6BD7ADAE981EAEE8B977D5BE43FEBCF56B3DD9_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CRU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedData_get_S_mC99DA4526CE67078B602CFE1CD223AE9A10F065F_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CSU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignedData_set_Data_m670AE6C57F16900FE9F2CFA653205C53E0A43DC3_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = ___value0;
		__this->___U3CDataU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignedData_set_R_m0297C2DE8C8DFB3926E03ABF77B43D7DEE39B007_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CRU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignedData_set_S_mF7C601F54F3C18E7B6742E79ABC0674AEC104EA2_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CSU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignedData_set_V_mF1C4CA0C6F3EA199E4E709B208F09B2DABBC98C5_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CVU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CVU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_ChainId_m1A2B716F5FF9435E5AC12AB1CCF08C10177CE5B5_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___value0;
		__this->___U3CChainIdU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CChainIdU3Ek__BackingField_1))->____bits_1), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_Nonce_m83586722A6150A78FDDAFBE06C05071106B6BB69_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = ___value0;
		__this->___U3CNonceU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CNonceU3Ek__BackingField_2))->___value_1))->____bits_1), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_MaxPriorityFeePerGas_m406383220249002ECEDDF724133A63329F9CAF72_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = ___value0;
		__this->___U3CMaxPriorityFeePerGasU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CMaxPriorityFeePerGasU3Ek__BackingField_3))->___value_1))->____bits_1), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_MaxFeePerGas_m1D1D1C7AC7FB647900838F4F40453A9D29FC0C69_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = ___value0;
		__this->___U3CMaxFeePerGasU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CMaxFeePerGasU3Ek__BackingField_4))->___value_1))->____bits_1), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_GasLimit_m089B2F56386EE6F11AEF2170A2E25F72928806CF_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = ___value0;
		__this->___U3CGasLimitU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CGasLimitU3Ek__BackingField_5))->___value_1))->____bits_1), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_ReceiverAddress_mC3037E05445DC6D1424F9A47235C49A70AD34A18_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CReceiverAddressU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReceiverAddressU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_Amount_m98DF4CD67DBF0C3D870197371D1D626DA9C58AF1_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = ___value0;
		__this->___U3CAmountU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CAmountU3Ek__BackingField_7))->___value_1))->____bits_1), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_Data_m84CAAE87C95387EE9E1656A2796C280E21671676_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CDataU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_AccessList_m3813B46F053603B83700013005E7B3BF35D36DA7_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* ___value0, const RuntimeMethod* method) 
{
	{
		List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* L_0 = ___value0;
		__this->___U3CAccessListU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAccessListU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* Transaction1559Encoder_get_Current_m53D7B01460A85290C57CFA9BF2C8AC10476FDAA5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var);
		Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* L_0 = ((Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_StaticFields*)il2cpp_codegen_static_fields_for(Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Transaction1559_get_ChainId_mFED7ACF2FED0435904F19950C6C7174DE0DAE1F0_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->___U3CChainIdU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_Nonce_mFDF11934A2AFC5C084405A0F0FF354A4197EC2EE_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = __this->___U3CNonceU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_MaxPriorityFeePerGas_mF0DD4E81F8BF05DA24B5AADB86754A1EB239A0FF_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = __this->___U3CMaxPriorityFeePerGasU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_MaxFeePerGas_m76D66F7213EAD582458B2BBF0A03C74E1A99B91E_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = __this->___U3CMaxFeePerGasU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_GasLimit_m16ADA6F6F4EE902B3E1226F6376548F31E4C675A_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = __this->___U3CGasLimitU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Transaction1559_get_ReceiverAddress_m3D7A87A2C2B8432E727A502B875C4B19426F9430_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CReceiverAddressU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_Amount_mBF2B1406D7644EC74F85B02A48659D053FDAEF37_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = __this->___U3CAmountU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Transaction1559_get_Data_m4BDA2DA7A2CD6AE69CD8B3E1B0DB9532DF7178D4_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDataU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* Transaction1559_get_AccessList_mC2540EB22043800C36ADD4BD03894507D9242E0D_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* L_0 = __this->___U3CAccessListU3Ek__BackingField_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_gshared_inline (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Nullable_1_GetValueOrDefault_m402A055BB8683375CFA1162E6BA94902F4F5D29C_gshared_inline (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m9AD51B8683638748F2A5CA7F36143B5DA54C7D61_gshared_inline (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Nullable_1_GetValueOrDefault_mE1BD2EC3D88CCEF213FC050F3022BD301B857F61_gshared_inline (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = (uint8_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
