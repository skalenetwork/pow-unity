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

// Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>
struct CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71;
// Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.Pbkdf2Params>
struct CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8;
// Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>
struct CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_t1447BF8E1A962EF1787C1E07658EB94E72BA2CEF;
// Nethereum.KeyStore.KeyStoreServiceBase`1<System.Object>
struct KeyStoreServiceBase_1_tAA205757F5772BB1467212A323C7EB74B028149B;
// Nethereum.KeyStore.KeyStoreServiceBase`1<Nethereum.KeyStore.Model.Pbkdf2Params>
struct KeyStoreServiceBase_1_tA19093FFDF21CC23402CF786E1996BE7DF5182AE;
// Nethereum.KeyStore.KeyStoreServiceBase`1<Nethereum.KeyStore.Model.ScryptParams>
struct KeyStoreServiceBase_1_t83E72AC62855C439A5D01F4E5A00BB6BCA2150D0;
// Nethereum.KeyStore.Model.KeyStore`1<System.Object>
struct KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017;
// Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params>
struct KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2;
// Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>
struct KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E;
// System.Array[]
struct ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// System.ComponentModel.AddingNewEventHandler
struct AddingNewEventHandler_tD9BAC60F604446ED14967643F63A83CE2A5C3701;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// Nethereum.KeyStore.Model.CipherParams
struct CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0;
// Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO
struct CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase
struct CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65;
// Nethereum.KeyStore.JsonDeserialisation.CryptoInfoPbkdf2DTO
struct CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF;
// Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO
struct CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// Nethereum.KeyStore.Crypto.DecryptionException
struct DecryptionException_t475B93777EFB780713433EEB8305E4BDCCF42738;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// Org.BouncyCastle.Crypto.Digests.GeneralDigest
struct GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7;
// Org.BouncyCastle.Crypto.Macs.HMac
struct HMac_t6F0768FC92486A4BB51A39C74FBAB8B4B8CFB607;
// Org.BouncyCastle.Crypto.IBufferedCipher
struct IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_tE4751F03244264E12A0669633A68076FD032E2CF;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1;
// Org.BouncyCastle.Crypto.IMac
struct IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992;
// Org.BouncyCastle.Utilities.IMemoable
struct IMemoable_t6C000683C46B891FF54A73DA7A2D54E1E2169615;
// Nethereum.KeyStore.Crypto.IRandomBytesGenerator
struct IRandomBytesGenerator_t1F462553AFAA1536F25BD0E9056E28C8D88BA68B;
// Org.BouncyCastle.Crypto.Prng.IRandomGenerator
struct IRandomGenerator_t50CA6B7268CF1B6ED0762EB5808373C32743C8F1;
// Nethereum.KeyStore.InvalidKdfException
struct InvalidKdfException_tEAC1417FAC4A1456AEEA8B11D856B90CFB886566;
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
// Nethereum.KeyStore.JsonDeserialisation.JsonKeyStorePbkdf2Serialiser
struct JsonKeyStorePbkdf2Serialiser_tECC64368072DF1BDC844FC5CBBEBBFAB3190F564;
// Nethereum.KeyStore.JsonDeserialisation.JsonKeyStoreScryptSerialiser
struct JsonKeyStoreScryptSerialiser_t527A36BD8AB4E3C5573349D68CCC35AC56B7A6FC;
// Nethereum.KeyStore.Model.KdfParams
struct KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB;
// Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO
struct KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13;
// Org.BouncyCastle.Crypto.Digests.KeccakDigest
struct KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8;
// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC;
// Nethereum.KeyStore.Crypto.KeyStoreCrypto
struct KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E;
// Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase
struct KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958;
// Nethereum.KeyStore.KeyStoreKdfChecker
struct KeyStoreKdfChecker_t5660B10F5A8CC515511DA8EFA8144ED60F71271E;
// Nethereum.KeyStore.JsonDeserialisation.KeyStorePbkdf2DTO
struct KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3;
// Nethereum.KeyStore.KeyStorePbkdf2Service
struct KeyStorePbkdf2Service_t1705604F58CEC838C65896E38A3234F41E32D5F3;
// Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO
struct KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367;
// Nethereum.KeyStore.KeyStoreScryptService
struct KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D;
// Nethereum.KeyStore.KeyStoreService
struct KeyStoreService_t24579F556F75E7309588A4D7766978E16F2FC519;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_tDBF36F3E2C6B7538106878E1D5A7553C5EA77616;
// System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF;
// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV
struct ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1;
// Nethereum.KeyStore.Model.Pbkdf2Params
struct Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D;
// Nethereum.KeyStore.JsonDeserialisation.Pbkdf2ParamsDTO
struct Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323;
// Org.BouncyCastle.Crypto.Generators.Pkcs5S2ParametersGenerator
struct Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_tF293724DEA588C35A7E94C4F4413AEE6438FE9CD;
// Nethereum.KeyStore.Crypto.RandomBytesGenerator
struct RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B;
// Nethereum.KeyStore.Crypto.SCrypt
struct SCrypt_tE0173A944FB440DA9B0A3E25F78D57AB1B0D9205;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Nethereum.KeyStore.Crypto.ScryptNet
struct ScryptNet_t51830A58E0C438BED96AEFA18ACA6EE151F48727;
// Nethereum.KeyStore.Model.ScryptParams
struct ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779;
// Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO
struct ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076;
// Org.BouncyCastle.Crypto.Digests.Sha256Digest
struct Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CipherUtilities_tDA37832A133C3F502C98888EA1477FBA0EF5F8F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DecryptionException_t475B93777EFB780713433EEB8305E4BDCCF42738_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HMac_t6F0768FC92486A4BB51A39C74FBAB8B4B8CFB607_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidKdfException_tEAC1417FAC4A1456AEEA8B11D856B90CFB886566_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyStoreKdfChecker_t5660B10F5A8CC515511DA8EFA8144ED60F71271E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyStorePbkdf2Service_t1705604F58CEC838C65896E38A3234F41E32D5F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterUtilities_t2330968701206F630234AD4A65667E7CAEE14EAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1B48258DC45DFC48F3BEAEEED4F14D3D02CD6284;
IL2CPP_EXTERN_C String_t* _stringLiteral24B0B97B3E8D6A36FF26BD81423363B53D42F503;
IL2CPP_EXTERN_C String_t* _stringLiteral360E03A53F5747D93B8189B7381BEE32B8FA7B92;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral423ACA01AC170A50869ECDEF572CD96995576718;
IL2CPP_EXTERN_C String_t* _stringLiteral43187C90BBB5DFB063A95733C9BD65ECD25A2E84;
IL2CPP_EXTERN_C String_t* _stringLiteral4E0503318E1A14504625530B9F599F412D4836F7;
IL2CPP_EXTERN_C String_t* _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89;
IL2CPP_EXTERN_C String_t* _stringLiteral60757E0E886B3E5AD238A705880BB6B426E6C79E;
IL2CPP_EXTERN_C String_t* _stringLiteral64921811D855C15C143C69730203C46A3CDA8284;
IL2CPP_EXTERN_C String_t* _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA;
IL2CPP_EXTERN_C String_t* _stringLiteral728977F71296CFAFD99E1AB9556CDB5900C1F9C7;
IL2CPP_EXTERN_C String_t* _stringLiteral8676D8187D181726BD8AAA348EEB4B7B5BFF4873;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057;
IL2CPP_EXTERN_C String_t* _stringLiteral90AF97DD8EF1877A399A4D1D1AF32DE07CB7CA27;
IL2CPP_EXTERN_C String_t* _stringLiteral95F3766D0CF42886D188B849706C91FF07DA6543;
IL2CPP_EXTERN_C String_t* _stringLiteral964A115C9844FDC3CAB0DA4CB724F1C996223905;
IL2CPP_EXTERN_C String_t* _stringLiteral99C165894B2900048144F5DEF682937FE73CA541;
IL2CPP_EXTERN_C String_t* _stringLiteral9CBB35F28A07682E1B5EF20C0A52D591F38201CB;
IL2CPP_EXTERN_C String_t* _stringLiteralA3400C8DC0F81D38A7B6E87AE8E044D15A824F75;
IL2CPP_EXTERN_C String_t* _stringLiteralA73E504C90D10B8D3135BBF7D950BEF1D5E4D3EC;
IL2CPP_EXTERN_C String_t* _stringLiteralAC78E78B6EC5C50ADC67D977E0F4C67424995CE6;
IL2CPP_EXTERN_C String_t* _stringLiteralAF0B57767B7A63DA8A8147EF8F559BA08A1B4B1D;
IL2CPP_EXTERN_C String_t* _stringLiteralB144512DA9AA6B91993CE8E07E163EA3FF0A440A;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB7248681F5E1332CF3625028F368C8C55C58D51C;
IL2CPP_EXTERN_C String_t* _stringLiteralC51A5D2429A53879F5ACA73F837658D236EE3E4F;
IL2CPP_EXTERN_C String_t* _stringLiteralC5C871F485807C4DC72F10C59B4C2BC67AEAAD47;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDEF710A7FE8B1F687BE0C4888B5002E9635CE519;
IL2CPP_EXTERN_C String_t* _stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1__ctor_m032DF032DB563EE333F936B18490F15E5857964A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1__ctor_m64E73FFB1ABC084EE66863619596CAFC447DC32A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_get_CipherParams_mA907221C1FBFA60C8B7594E33B18EFFB464C74AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_get_CipherParams_mCE5052AB3E08620D0675291DD4A9F0B453F1DC37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_get_CipherText_m0D0D495D51ACCBD21C7BA3075D96E6E9E4A6BE0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_get_CipherText_m52A772F5318629770218E77F43791D3CBF6FC3FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_get_Cipher_m389BD6EBD628F8C61EF4C2B8F0D78B9E10EE2C3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_get_Cipher_m7BA1B867E8E4C8833CEE05C3143DE335A621F2A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_get_Kdf_m8BD42AAD2649B9838B73DAE6DA950652AFAAE4D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_get_Kdf_mAB4E9A63B906AD0CEDA894E615BF3CAB540B80D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_get_Kdfparams_m581A8A3832F579C51A44AADA45E502A89D50C19D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_get_Mac_m397668EA83950C2D02123C4FCBC665015AD1ACD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_get_Mac_m80EF43FB854AA550B53D0032F728DF0146193A9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_set_CipherParams_mBF3B77965FA6773A82D4D4F9DB6353DA465D30E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_set_CipherParams_mE008C30F61B193220181F8571E9B22669BC1C7E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_set_CipherText_m1829083C1D5065BD7FF9D9B0A1E69AF81F824A90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_set_CipherText_mAB2EA2B19CDD9767567825024156FC1357581C78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_set_Cipher_m3A8287A23B23E90E4D269C6BAB72FD92C7AD59FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_set_Cipher_mAEC03B77AAD2E0515D155A0375F5818E2A64D8EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_set_Kdf_m0C4E02ABBCF8451EB2BF614406EA26EEAC81A166_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_set_Kdf_m2F4F184EA3A7B6112EF18F1FBA70CFF2140270E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_set_Kdfparams_m31F4A35D15A0ABDD36F4246C0B5A3BCB8843041E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_set_Kdfparams_m496DF4ECF94CFBFC730A619DFF35E8536275BFAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_set_Mac_m57B69D5B6017597A4263D7C4130DF4E5E81AE667_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_set_Mac_mFC2C15194B9E7F00795C290647877D9EE344FAC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisKeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3_m230A31371FA064FF77AECC89F1D8B9FE967AE7D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisKeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367_mC72C249C6450475F026EE89BE5DFFEEF5045F885_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreCrypto_GenerateDerivedScryptKey_mD84A7413EE9B46393273F5D0B8E928AFFDD4F372_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreCrypto_ValidateMac_m50D46430C5F2BF65B89B4AA49C96E62788EC5D01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreKdfChecker_GetKeyStoreKdfType_mA3319D63885770AF51B6A09257DFFE7504A89528_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStorePbkdf2Service_DecryptKeyStore_mF3218093BBCDFC273D07974126FB8D9C0897335D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreScryptService_DecryptKeyStore_m97CE221D0D9D9ED305FD4B0843F9D62209E72909_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreServiceBase_1_DecryptKeyStoreFromJson_m21337304B9D3DD06B25C3FC306D0850E5D9D4EF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreServiceBase_1_DecryptKeyStoreFromJson_m402CAF8FA7C06395F841F59F24C27AF4BA050C7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreServiceBase_1_EncryptAndGenerateKeyStoreAsJson_m5D1F86C4AC4FB0F3AEF7AAE097FED970100A2DA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreServiceBase_1__ctor_m1DBE46B208189092A8D3C1548EF21969F6920922_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreServiceBase_1__ctor_m2B9317BDD047080C586C77EA337CF831C48EEDB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreServiceBase_1__ctor_m3215CD0F957EBA11B41991F44742028C01549BF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreServiceBase_1__ctor_m53322BC91A0B7B2702DA1706BA86057D58F93763_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreServiceBase_1__ctor_mB7F663CB0CB174D0462D71405E7196CF2DF3F89C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreServiceBase_1__ctor_mC65EE87EA26D2528D1E835882E37EB9364A1B93E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreService_DecryptKeyStoreFromJson_mAA38D24725757DAE8326E6E04E7B09A5E619435F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreService_EncryptAndGenerateDefaultKeyStoreAsJson_m5FCE405D589A3ED2AEBF0DA7559C15535BFFE751_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreService_GenerateUTCFileName_m2122563B05C43DF0515DB2C0E5A1CF07EB3CFC54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreService_GetAddressFromKeyStore_mC7C96A6B89A463F6B7F9FBBD97DB7D35A2853D6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1__ctor_m2ECFC2CB0B05408465002F720B7142EA3F0E6B17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1__ctor_mBBD3CCEBD5299044209243B9F23E1743D00D3CB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1_get_Address_m2BD758087730CB1C5A6D149E0C7A1C1A88904161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1_get_Address_mF86FC3E973AF8F67AD841BCEE124C323A1D64C71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1_get_Id_m73314A33D0C1499A6F003AB49AE0B5CD3D8FEEAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1_get_Id_mB084F9AF1D51C89CFC94FC9F4F1BD68173BA4A4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1_get_Version_m7CB98BC1EA8EFDDCF0E321BABA5C7B5CF071DE41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1_get_Version_mC58350AE7F50E7EF46D94FCDD702B34039265C35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1_set_Address_m06D4182B667F0FA9DBB10640DF9FED69E2E61140_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1_set_Address_m09CDE5CBD4792C93B0E7BE75DE8C1E3004F99F3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1_set_Crypto_m6C695CA8B0703EF97A90EAFE827F14ECE34A2BF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1_set_Crypto_mE619CF2F3C0B9C38C9E88BC29B1B59CFF8DCD787_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1_set_Id_m92CDF3EC870F842CA05952E5FD4D276B9F5DFCA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1_set_Id_m9F9D3D789C8BEFD5EF221C06A2512457D5598B49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1_set_Version_m0D3C2AFEEE3CB168E2967C180CCBDF9277A37519_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1_set_Version_mCC41748FB655953DC784DEDAF0A9F1D7C9C915E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SCrypt_Generate_mFCD04767126BB8C9C73ECCAF8C050A25AC7788D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SCrypt_SalsaCore_m9C56F73A9F4A62F39690A912714BCD5BD0CCC5E6_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6;
struct ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t98C2BB310ADDE387BEBAB023CDCD1CFDAD43BEDA 
{
};

// Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>
struct CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71  : public RuntimeObject
{
	// System.String Nethereum.KeyStore.Model.CryptoInfo`1::<Cipher>k__BackingField
	String_t* ___U3CCipherU3Ek__BackingField_0;
	// System.String Nethereum.KeyStore.Model.CryptoInfo`1::<CipherText>k__BackingField
	String_t* ___U3CCipherTextU3Ek__BackingField_1;
	// Nethereum.KeyStore.Model.CipherParams Nethereum.KeyStore.Model.CryptoInfo`1::<CipherParams>k__BackingField
	CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* ___U3CCipherParamsU3Ek__BackingField_2;
	// System.String Nethereum.KeyStore.Model.CryptoInfo`1::<Kdf>k__BackingField
	String_t* ___U3CKdfU3Ek__BackingField_3;
	// System.String Nethereum.KeyStore.Model.CryptoInfo`1::<Mac>k__BackingField
	String_t* ___U3CMacU3Ek__BackingField_4;
	// TKdfParams Nethereum.KeyStore.Model.CryptoInfo`1::<Kdfparams>k__BackingField
	RuntimeObject* ___U3CKdfparamsU3Ek__BackingField_5;
};

// Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.Pbkdf2Params>
struct CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8  : public RuntimeObject
{
	// System.String Nethereum.KeyStore.Model.CryptoInfo`1::<Cipher>k__BackingField
	String_t* ___U3CCipherU3Ek__BackingField_0;
	// System.String Nethereum.KeyStore.Model.CryptoInfo`1::<CipherText>k__BackingField
	String_t* ___U3CCipherTextU3Ek__BackingField_1;
	// Nethereum.KeyStore.Model.CipherParams Nethereum.KeyStore.Model.CryptoInfo`1::<CipherParams>k__BackingField
	CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* ___U3CCipherParamsU3Ek__BackingField_2;
	// System.String Nethereum.KeyStore.Model.CryptoInfo`1::<Kdf>k__BackingField
	String_t* ___U3CKdfU3Ek__BackingField_3;
	// System.String Nethereum.KeyStore.Model.CryptoInfo`1::<Mac>k__BackingField
	String_t* ___U3CMacU3Ek__BackingField_4;
	// TKdfParams Nethereum.KeyStore.Model.CryptoInfo`1::<Kdfparams>k__BackingField
	Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* ___U3CKdfparamsU3Ek__BackingField_5;
};

// Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>
struct CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C  : public RuntimeObject
{
	// System.String Nethereum.KeyStore.Model.CryptoInfo`1::<Cipher>k__BackingField
	String_t* ___U3CCipherU3Ek__BackingField_0;
	// System.String Nethereum.KeyStore.Model.CryptoInfo`1::<CipherText>k__BackingField
	String_t* ___U3CCipherTextU3Ek__BackingField_1;
	// Nethereum.KeyStore.Model.CipherParams Nethereum.KeyStore.Model.CryptoInfo`1::<CipherParams>k__BackingField
	CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* ___U3CCipherParamsU3Ek__BackingField_2;
	// System.String Nethereum.KeyStore.Model.CryptoInfo`1::<Kdf>k__BackingField
	String_t* ___U3CKdfU3Ek__BackingField_3;
	// System.String Nethereum.KeyStore.Model.CryptoInfo`1::<Mac>k__BackingField
	String_t* ___U3CMacU3Ek__BackingField_4;
	// TKdfParams Nethereum.KeyStore.Model.CryptoInfo`1::<Kdfparams>k__BackingField
	ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* ___U3CKdfparamsU3Ek__BackingField_5;
};

// Nethereum.KeyStore.KeyStoreServiceBase`1<Nethereum.KeyStore.Model.Pbkdf2Params>
struct KeyStoreServiceBase_1_tA19093FFDF21CC23402CF786E1996BE7DF5182AE  : public RuntimeObject
{
	// Nethereum.KeyStore.Crypto.KeyStoreCrypto Nethereum.KeyStore.KeyStoreServiceBase`1::KeyStoreCrypto
	KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* ___KeyStoreCrypto_1;
	// Nethereum.KeyStore.Crypto.IRandomBytesGenerator Nethereum.KeyStore.KeyStoreServiceBase`1::RandomBytesGenerator
	RuntimeObject* ___RandomBytesGenerator_2;
};

// Nethereum.KeyStore.KeyStoreServiceBase`1<Nethereum.KeyStore.Model.ScryptParams>
struct KeyStoreServiceBase_1_t83E72AC62855C439A5D01F4E5A00BB6BCA2150D0  : public RuntimeObject
{
	// Nethereum.KeyStore.Crypto.KeyStoreCrypto Nethereum.KeyStore.KeyStoreServiceBase`1::KeyStoreCrypto
	KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* ___KeyStoreCrypto_1;
	// Nethereum.KeyStore.Crypto.IRandomBytesGenerator Nethereum.KeyStore.KeyStoreServiceBase`1::RandomBytesGenerator
	RuntimeObject* ___RandomBytesGenerator_2;
};

// Nethereum.KeyStore.Model.KeyStore`1<System.Object>
struct KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017  : public RuntimeObject
{
	// Nethereum.KeyStore.Model.CryptoInfo`1<TKdfParams> Nethereum.KeyStore.Model.KeyStore`1::<Crypto>k__BackingField
	CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* ___U3CCryptoU3Ek__BackingField_0;
	// System.String Nethereum.KeyStore.Model.KeyStore`1::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_1;
	// System.String Nethereum.KeyStore.Model.KeyStore`1::<Address>k__BackingField
	String_t* ___U3CAddressU3Ek__BackingField_2;
	// System.Int32 Nethereum.KeyStore.Model.KeyStore`1::<Version>k__BackingField
	int32_t ___U3CVersionU3Ek__BackingField_3;
};

// Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params>
struct KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2  : public RuntimeObject
{
	// Nethereum.KeyStore.Model.CryptoInfo`1<TKdfParams> Nethereum.KeyStore.Model.KeyStore`1::<Crypto>k__BackingField
	CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* ___U3CCryptoU3Ek__BackingField_0;
	// System.String Nethereum.KeyStore.Model.KeyStore`1::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_1;
	// System.String Nethereum.KeyStore.Model.KeyStore`1::<Address>k__BackingField
	String_t* ___U3CAddressU3Ek__BackingField_2;
	// System.Int32 Nethereum.KeyStore.Model.KeyStore`1::<Version>k__BackingField
	int32_t ___U3CVersionU3Ek__BackingField_3;
};

// Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>
struct KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E  : public RuntimeObject
{
	// Nethereum.KeyStore.Model.CryptoInfo`1<TKdfParams> Nethereum.KeyStore.Model.KeyStore`1::<Crypto>k__BackingField
	CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* ___U3CCryptoU3Ek__BackingField_0;
	// System.String Nethereum.KeyStore.Model.KeyStore`1::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_1;
	// System.String Nethereum.KeyStore.Model.KeyStore`1::<Address>k__BackingField
	String_t* ___U3CAddressU3Ek__BackingField_2;
	// System.Int32 Nethereum.KeyStore.Model.KeyStore`1::<Version>k__BackingField
	int32_t ___U3CVersionU3Ek__BackingField_3;
};
struct Il2CppArrayBounds;

// Nethereum.KeyStore.Model.CipherParams
struct CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0  : public RuntimeObject
{
	// System.String Nethereum.KeyStore.Model.CipherParams::<Iv>k__BackingField
	String_t* ___U3CIvU3Ek__BackingField_0;
};

// Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO
struct CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C  : public RuntimeObject
{
	// System.String Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO::<iv>k__BackingField
	String_t* ___U3CivU3Ek__BackingField_0;
};

// Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase
struct CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65  : public RuntimeObject
{
	// System.String Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::<cipher>k__BackingField
	String_t* ___U3CcipherU3Ek__BackingField_0;
	// System.String Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::<cipherText>k__BackingField
	String_t* ___U3CcipherTextU3Ek__BackingField_1;
	// Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::<cipherparams>k__BackingField
	CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* ___U3CcipherparamsU3Ek__BackingField_2;
	// System.String Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::<kdf>k__BackingField
	String_t* ___U3CkdfU3Ek__BackingField_3;
	// System.String Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::<mac>k__BackingField
	String_t* ___U3CmacU3Ek__BackingField_4;
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

// Org.BouncyCastle.Crypto.Digests.GeneralDigest
struct GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.GeneralDigest::xBuf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___xBuf_1;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.GeneralDigest::xBufOff
	int32_t ___xBufOff_2;
	// System.Int64 Org.BouncyCastle.Crypto.Digests.GeneralDigest::byteCount
	int64_t ___byteCount_3;
};

// Org.BouncyCastle.Crypto.Macs.HMac
struct HMac_t6F0768FC92486A4BB51A39C74FBAB8B4B8CFB607  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Macs.HMac::digest
	RuntimeObject* ___digest_2;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.HMac::digestSize
	int32_t ___digestSize_3;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.HMac::blockLength
	int32_t ___blockLength_4;
	// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Macs.HMac::ipadState
	RuntimeObject* ___ipadState_5;
	// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Macs.HMac::opadState
	RuntimeObject* ___opadState_6;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.HMac::inputPad
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inputPad_7;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.HMac::outputBuf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outputBuf_8;
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

// Nethereum.KeyStore.JsonDeserialisation.JsonKeyStorePbkdf2Serialiser
struct JsonKeyStorePbkdf2Serialiser_tECC64368072DF1BDC844FC5CBBEBBFAB3190F564  : public RuntimeObject
{
};

// Nethereum.KeyStore.JsonDeserialisation.JsonKeyStoreScryptSerialiser
struct JsonKeyStoreScryptSerialiser_t527A36BD8AB4E3C5573349D68CCC35AC56B7A6FC  : public RuntimeObject
{
};

// Nethereum.KeyStore.Model.KdfParams
struct KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB  : public RuntimeObject
{
	// System.Int32 Nethereum.KeyStore.Model.KdfParams::<Dklen>k__BackingField
	int32_t ___U3CDklenU3Ek__BackingField_0;
	// System.String Nethereum.KeyStore.Model.KdfParams::<Salt>k__BackingField
	String_t* ___U3CSaltU3Ek__BackingField_1;
};

// Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO
struct KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13  : public RuntimeObject
{
	// System.Int32 Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::<dklen>k__BackingField
	int32_t ___U3CdklenU3Ek__BackingField_0;
	// System.String Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::<salt>k__BackingField
	String_t* ___U3CsaltU3Ek__BackingField_1;
};

// Org.BouncyCastle.Crypto.Digests.KeccakDigest
struct KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8  : public RuntimeObject
{
	// System.UInt64[] Org.BouncyCastle.Crypto.Digests.KeccakDigest::state
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___state_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.KeccakDigest::dataQueue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dataQueue_4;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::rate
	int32_t ___rate_5;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::bitsInQueue
	int32_t ___bitsInQueue_6;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::fixedOutputLength
	int32_t ___fixedOutputLength_7;
	// System.Boolean Org.BouncyCastle.Crypto.Digests.KeccakDigest::squeezing
	bool ___squeezing_8;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::bitsAvailableForSqueezing
	int32_t ___bitsAvailableForSqueezing_9;
};

struct KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_StaticFields
{
	// System.UInt64[] Org.BouncyCastle.Crypto.Digests.KeccakDigest::KeccakRoundConstants
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___KeccakRoundConstants_0;
	// System.Int32[] Org.BouncyCastle.Crypto.Digests.KeccakDigest::KeccakRhoOffsets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___KeccakRhoOffsets_1;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::STATE_LENGTH
	int32_t ___STATE_LENGTH_2;
};

// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KeyParameter::key
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key_0;
};

// Nethereum.KeyStore.Crypto.KeyStoreCrypto
struct KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E  : public RuntimeObject
{
};

// Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase
struct KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958  : public RuntimeObject
{
	// System.String Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.String Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::<address>k__BackingField
	String_t* ___U3CaddressU3Ek__BackingField_1;
	// System.Int32 Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::<version>k__BackingField
	int32_t ___U3CversionU3Ek__BackingField_2;
};

// Nethereum.KeyStore.KeyStoreKdfChecker
struct KeyStoreKdfChecker_t5660B10F5A8CC515511DA8EFA8144ED60F71271E  : public RuntimeObject
{
};

// Nethereum.KeyStore.KeyStoreService
struct KeyStoreService_t24579F556F75E7309588A4D7766978E16F2FC519  : public RuntimeObject
{
	// Nethereum.KeyStore.KeyStoreKdfChecker Nethereum.KeyStore.KeyStoreService::_keyStoreKdfChecker
	KeyStoreKdfChecker_t5660B10F5A8CC515511DA8EFA8144ED60F71271E* ____keyStoreKdfChecker_0;
	// Nethereum.KeyStore.KeyStoreScryptService Nethereum.KeyStore.KeyStoreService::_keyStoreScryptService
	KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D* ____keyStoreScryptService_1;
	// Nethereum.KeyStore.KeyStorePbkdf2Service Nethereum.KeyStore.KeyStoreService::_keyStorePbkdf2Service
	KeyStorePbkdf2Service_t1705604F58CEC838C65896E38A3234F41E32D5F3* ____keyStorePbkdf2Service_2;
};

// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV
struct ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::parameters
	RuntimeObject* ___parameters_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::iv
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv_1;
};

// Org.BouncyCastle.Crypto.PbeParametersGenerator
struct PbeParametersGenerator_t52F4B2C45D5DF5393DAF81BA17BA7CE1BA770D9E  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.PbeParametersGenerator::mPassword
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mPassword_0;
	// System.Byte[] Org.BouncyCastle.Crypto.PbeParametersGenerator::mSalt
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mSalt_1;
	// System.Int32 Org.BouncyCastle.Crypto.PbeParametersGenerator::mIterationCount
	int32_t ___mIterationCount_2;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
};

// Nethereum.KeyStore.Crypto.RandomBytesGenerator
struct RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B  : public RuntimeObject
{
};

struct RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B_StaticFields
{
	// Org.BouncyCastle.Security.SecureRandom Nethereum.KeyStore.Crypto.RandomBytesGenerator::Random
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___Random_0;
};

// Nethereum.KeyStore.Crypto.SCrypt
struct SCrypt_tE0173A944FB440DA9B0A3E25F78D57AB1B0D9205  : public RuntimeObject
{
};

// Nethereum.KeyStore.Crypto.ScryptNet
struct ScryptNet_t51830A58E0C438BED96AEFA18ACA6EE151F48727  : public RuntimeObject
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

// Nethereum.KeyStore.JsonDeserialisation.CryptoInfoPbkdf2DTO
struct CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF  : public CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65
{
	// Nethereum.KeyStore.JsonDeserialisation.Pbkdf2ParamsDTO Nethereum.KeyStore.JsonDeserialisation.CryptoInfoPbkdf2DTO::<kdfparams>k__BackingField
	Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* ___U3CkdfparamsU3Ek__BackingField_5;
};

// Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO
struct CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B  : public CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65
{
	// Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO::<kdfparams>k__BackingField
	ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* ___U3CkdfparamsU3Ek__BackingField_5;
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

// Nethereum.KeyStore.JsonDeserialisation.KeyStorePbkdf2DTO
struct KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3  : public KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958
{
	// Nethereum.KeyStore.JsonDeserialisation.CryptoInfoPbkdf2DTO Nethereum.KeyStore.JsonDeserialisation.KeyStorePbkdf2DTO::<crypto>k__BackingField
	CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* ___U3CcryptoU3Ek__BackingField_3;
};

// Nethereum.KeyStore.KeyStorePbkdf2Service
struct KeyStorePbkdf2Service_t1705604F58CEC838C65896E38A3234F41E32D5F3  : public KeyStoreServiceBase_1_tA19093FFDF21CC23402CF786E1996BE7DF5182AE
{
};

// Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO
struct KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367  : public KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958
{
	// Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO::<crypto>k__BackingField
	CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* ___U3CcryptoU3Ek__BackingField_3;
};

// Nethereum.KeyStore.KeyStoreScryptService
struct KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D  : public KeyStoreServiceBase_1_t83E72AC62855C439A5D01F4E5A00BB6BCA2150D0
{
};

// Nethereum.KeyStore.Model.Pbkdf2Params
struct Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D  : public KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB
{
	// System.Int32 Nethereum.KeyStore.Model.Pbkdf2Params::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_2;
	// System.String Nethereum.KeyStore.Model.Pbkdf2Params::<Prf>k__BackingField
	String_t* ___U3CPrfU3Ek__BackingField_3;
};

// Nethereum.KeyStore.JsonDeserialisation.Pbkdf2ParamsDTO
struct Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323  : public KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13
{
	// System.Int32 Nethereum.KeyStore.JsonDeserialisation.Pbkdf2ParamsDTO::<c>k__BackingField
	int32_t ___U3CcU3Ek__BackingField_2;
	// System.String Nethereum.KeyStore.JsonDeserialisation.Pbkdf2ParamsDTO::<prf>k__BackingField
	String_t* ___U3CprfU3Ek__BackingField_3;
};

// Org.BouncyCastle.Crypto.Generators.Pkcs5S2ParametersGenerator
struct Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D  : public PbeParametersGenerator_t52F4B2C45D5DF5393DAF81BA17BA7CE1BA770D9E
{
	// Org.BouncyCastle.Crypto.IMac Org.BouncyCastle.Crypto.Generators.Pkcs5S2ParametersGenerator::hMac
	RuntimeObject* ___hMac_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Generators.Pkcs5S2ParametersGenerator::state
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___state_4;
};

// Nethereum.KeyStore.Model.ScryptParams
struct ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779  : public KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB
{
	// System.Int32 Nethereum.KeyStore.Model.ScryptParams::<N>k__BackingField
	int32_t ___U3CNU3Ek__BackingField_2;
	// System.Int32 Nethereum.KeyStore.Model.ScryptParams::<R>k__BackingField
	int32_t ___U3CRU3Ek__BackingField_3;
	// System.Int32 Nethereum.KeyStore.Model.ScryptParams::<P>k__BackingField
	int32_t ___U3CPU3Ek__BackingField_4;
};

// Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO
struct ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61  : public KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13
{
	// System.Int32 Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::<n>k__BackingField
	int32_t ___U3CnU3Ek__BackingField_2;
	// System.Int32 Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::<r>k__BackingField
	int32_t ___U3CrU3Ek__BackingField_3;
	// System.Int32 Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::<p>k__BackingField
	int32_t ___U3CpU3Ek__BackingField_4;
};

// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076  : public Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8
{
	// Org.BouncyCastle.Crypto.Prng.IRandomGenerator Org.BouncyCastle.Security.SecureRandom::generator
	RuntimeObject* ___generator_7;
};

struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_StaticFields
{
	// System.Int64 Org.BouncyCastle.Security.SecureRandom::counter
	int64_t ___counter_5;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Security.SecureRandom::master
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___master_6;
	// System.Double Org.BouncyCastle.Security.SecureRandom::DoubleScale
	double ___DoubleScale_8;
};

// Org.BouncyCastle.Crypto.Digests.Sha256Digest
struct Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A  : public GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7
{
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::H1
	uint32_t ___H1_5;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::H2
	uint32_t ___H2_6;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::H3
	uint32_t ___H3_7;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::H4
	uint32_t ___H4_8;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::H5
	uint32_t ___H5_9;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::H6
	uint32_t ___H6_10;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::H7
	uint32_t ___H7_11;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::H8
	uint32_t ___H8_12;
	// System.UInt32[] Org.BouncyCastle.Crypto.Digests.Sha256Digest::X
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___X_13;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::xOff
	int32_t ___xOff_14;
};

struct Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A_StaticFields
{
	// System.UInt32[] Org.BouncyCastle.Crypto.Digests.Sha256Digest::K
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___K_15;
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

// Nethereum.KeyStore.Crypto.DecryptionException
struct DecryptionException_t475B93777EFB780713433EEB8305E4BDCCF42738  : public Exception_t
{
};

// Nethereum.KeyStore.InvalidKdfException
struct InvalidKdfException_tEAC1417FAC4A1456AEEA8B11D856B90CFB886566  : public Exception_t
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
// System.Array[]
struct ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeArray* m_Items[1];

	inline RuntimeArray* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeArray** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeArray* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeArray* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeArray** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeArray* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// U Newtonsoft.Json.Linq.Extensions::Value<System.Object>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Extensions_Value_TisRuntimeObject_m5571042D842EA6EC5B6318C825B1D5D317EB3215_gshared (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.KeyStoreServiceBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreServiceBase_1__ctor_m36A9B780F55EDC9AC4A3344AF79E02500B3AB7E0_gshared (KeyStoreServiceBase_1_tAA205757F5772BB1467212A323C7EB74B028149B* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.KeyStoreServiceBase`1<System.Object>::.ctor(Nethereum.KeyStore.Crypto.IRandomBytesGenerator,Nethereum.KeyStore.Crypto.KeyStoreCrypto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreServiceBase_1__ctor_mBE8A3D4DB7A3019F102BDF7619264F88378FA6E7_gshared (KeyStoreServiceBase_1_tAA205757F5772BB1467212A323C7EB74B028149B* __this, RuntimeObject* ___randomBytesGenerator0, KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* ___keyStoreCrypto1, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.KeyStoreServiceBase`1<System.Object>::.ctor(Nethereum.KeyStore.Crypto.IRandomBytesGenerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreServiceBase_1__ctor_m56176B62B2DBE955FA16B9B40DE681048D38F392_gshared (KeyStoreServiceBase_1_tAA205757F5772BB1467212A323C7EB74B028149B* __this, RuntimeObject* ___randomBytesGenerator0, const RuntimeMethod* method) ;
// Nethereum.KeyStore.Model.CryptoInfo`1<TKdfParams> Nethereum.KeyStore.Model.KeyStore`1<System.Object>::get_Crypto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* KeyStore_1_get_Crypto_m362D6AF9A7BF2BF3B219D424C1032FA41E8E6C38_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>::get_Mac()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfo_1_get_Mac_m055A7202D58A9C26ACE8916AA09E61188A5DDECD_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, const RuntimeMethod* method) ;
// Nethereum.KeyStore.Model.CipherParams Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>::get_CipherParams()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* CryptoInfo_1_get_CipherParams_mEFD7BECC8575B9293B4AED072809D6633279DACF_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>::get_CipherText()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfo_1_get_CipherText_m8420F5C90CAE65A1937800647E74C598DAB22A8A_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, const RuntimeMethod* method) ;
// TKdfParams Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>::get_Kdfparams()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CryptoInfo_1_get_Kdfparams_m5E9AD76074E8F4BFBA54C9536B34974011401AC9_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.KeyStore.KeyStoreServiceBase`1<System.Object>::DecryptKeyStoreFromJson(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreServiceBase_1_DecryptKeyStoreFromJson_m61B7125DC1D35932AB090AEEEF3505D1C887193F_gshared (KeyStoreServiceBase_1_tAA205757F5772BB1467212A323C7EB74B028149B* __this, String_t* ___password0, String_t* ___json1, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.KeyStoreServiceBase`1<System.Object>::EncryptAndGenerateKeyStoreAsJson(System.String,System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyStoreServiceBase_1_EncryptAndGenerateKeyStoreAsJson_mF653B4442CE26F27CFA558C4AB3AA5D46436323E_gshared (KeyStoreServiceBase_1_tAA205757F5772BB1467212A323C7EB74B028149B* __this, String_t* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___privateKey1, String_t* ___addresss2, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared (String_t* ___value0, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.Model.KeyStore`1<System.Object>::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KeyStore_1_get_Address_m5F5EA6C9152DC138F05852DB6B99403272396FA9_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.Model.KeyStore`1<System.Object>::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KeyStore_1_get_Id_mA2BB933706FD75C2E8C1B9F68E7A69B95C90E8BE_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, const RuntimeMethod* method) ;
// System.Int32 Nethereum.KeyStore.Model.KeyStore`1<System.Object>::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyStore_1_get_Version_mD84F708EDB5D57EE21AC2D13ACDDE79797ECF8D9_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>::get_Cipher()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfo_1_get_Cipher_m9B49A00BF1810DCCCB16A7B10F530B3D7497E002_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>::get_Kdf()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfo_1_get_Kdf_m2D86721BF4AD889D24466A95184E47CDB2A57DC2_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.KeyStore`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStore_1__ctor_mE7E4BA95341698B0C1612BC2A25F3745126A66D5_gshared (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.KeyStore`1<System.Object>::set_Address(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStore_1_set_Address_mA07ED729404AE5235478AD487878BA0E586F17C1_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.KeyStore`1<System.Object>::set_Id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStore_1_set_Id_m3420C8176B12F55B174C71505E14F217DD006A09_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.KeyStore`1<System.Object>::set_Version(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStore_1_set_Version_mBCC01AB392E374F30A4C64911F11270F953CDFD7_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoInfo_1__ctor_m260289CE9EE4D93680D7C93DD53A131AA0E62955_gshared (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.KeyStore`1<System.Object>::set_Crypto(Nethereum.KeyStore.Model.CryptoInfo`1<TKdfParams>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStore_1_set_Crypto_mEB8BE7B51499176BE67A3A002F266A770B50259E_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>::set_Cipher(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfo_1_set_Cipher_m04CD908F1C173EA7292CC67031546B4A15AA4186_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>::set_CipherText(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfo_1_set_CipherText_m76F538CAC717AE7BC894683B6DA9EAAA9DB6FE96_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>::set_Kdf(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfo_1_set_Kdf_mF7677CA999DA927074A8807A8C0F33AC03242CEA_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>::set_Mac(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfo_1_set_Mac_mB9D282B2388CFEABBCF79168151FC856FD0A87DE_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>::set_Kdfparams(TKdfParams)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfo_1_set_Kdfparams_mCF71DADA258CB5683877958BB3500389739E05A2_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>::set_CipherParams(Nethereum.KeyStore.Model.CipherParams)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfo_1_set_CipherParams_m61BF691E694BFDFD0D0943CF2EB9A2D8BF8BD4F0_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* ___value0, const RuntimeMethod* method) ;

// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* JObject_Parse_mBC884661DD2708BA92BCE45E8C104924542A2D43 (String_t* ___json0, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::GetValue(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* JObject_GetValue_m163EB7BE77699B79CB53035D84874159EBBBFE6F (JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* __this, String_t* ___propertyName0, int32_t ___comparison1, const RuntimeMethod* method) ;
// U Newtonsoft.Json.Linq.Extensions::Value<System.String>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
inline String_t* Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, const RuntimeMethod*))Extensions_Value_TisRuntimeObject_m5571042D842EA6EC5B6318C825B1D5D317EB3215_gshared)(___value0, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.InvalidKdfException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidKdfException__ctor_mCB1602A9FA69439AEE3CA2CD0046C72E7DB5C6D9 (InvalidKdfException_tEAC1417FAC4A1456AEEA8B11D856B90CFB886566* __this, String_t* ___kdf0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.KeyStoreServiceBase`1<Nethereum.KeyStore.Model.Pbkdf2Params>::.ctor()
inline void KeyStoreServiceBase_1__ctor_m2B9317BDD047080C586C77EA337CF831C48EEDB7 (KeyStoreServiceBase_1_tA19093FFDF21CC23402CF786E1996BE7DF5182AE* __this, const RuntimeMethod* method)
{
	((  void (*) (KeyStoreServiceBase_1_tA19093FFDF21CC23402CF786E1996BE7DF5182AE*, const RuntimeMethod*))KeyStoreServiceBase_1__ctor_m36A9B780F55EDC9AC4A3344AF79E02500B3AB7E0_gshared)(__this, method);
}
// System.Void Nethereum.KeyStore.KeyStoreServiceBase`1<Nethereum.KeyStore.Model.Pbkdf2Params>::.ctor(Nethereum.KeyStore.Crypto.IRandomBytesGenerator,Nethereum.KeyStore.Crypto.KeyStoreCrypto)
inline void KeyStoreServiceBase_1__ctor_mB7F663CB0CB174D0462D71405E7196CF2DF3F89C (KeyStoreServiceBase_1_tA19093FFDF21CC23402CF786E1996BE7DF5182AE* __this, RuntimeObject* ___randomBytesGenerator0, KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* ___keyStoreCrypto1, const RuntimeMethod* method)
{
	((  void (*) (KeyStoreServiceBase_1_tA19093FFDF21CC23402CF786E1996BE7DF5182AE*, RuntimeObject*, KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E*, const RuntimeMethod*))KeyStoreServiceBase_1__ctor_mBE8A3D4DB7A3019F102BDF7619264F88378FA6E7_gshared)(__this, ___randomBytesGenerator0, ___keyStoreCrypto1, method);
}
// System.Void Nethereum.KeyStore.KeyStoreServiceBase`1<Nethereum.KeyStore.Model.Pbkdf2Params>::.ctor(Nethereum.KeyStore.Crypto.IRandomBytesGenerator)
inline void KeyStoreServiceBase_1__ctor_mC65EE87EA26D2528D1E835882E37EB9364A1B93E (KeyStoreServiceBase_1_tA19093FFDF21CC23402CF786E1996BE7DF5182AE* __this, RuntimeObject* ___randomBytesGenerator0, const RuntimeMethod* method)
{
	((  void (*) (KeyStoreServiceBase_1_tA19093FFDF21CC23402CF786E1996BE7DF5182AE*, RuntimeObject*, const RuntimeMethod*))KeyStoreServiceBase_1__ctor_m56176B62B2DBE955FA16B9B40DE681048D38F392_gshared)(__this, ___randomBytesGenerator0, method);
}
// System.Int32 Nethereum.KeyStore.Model.Pbkdf2Params::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Pbkdf2Params_get_Count_mC11B0427876CC79A0979C88487915DFA8960E03A_inline (Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* __this, const RuntimeMethod* method) ;
// System.Int32 Nethereum.KeyStore.Model.KdfParams::get_Dklen()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KdfParams_get_Dklen_m1E5547E75FFAD02C826CFDC8CD09AC6EAEEBDB14_inline (KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::GeneratePbkdf2Sha256DerivedKey(System.String,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GeneratePbkdf2Sha256DerivedKey_m6A66CF985ECAAC09F48F5A23B62D3EDFE918BB05 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, String_t* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt1, int32_t ___count2, int32_t ___dklen3, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.Pbkdf2Params::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pbkdf2Params__ctor_mFF835BB78C590FD34736CC991A9F375DEB02919A (Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.KdfParams::set_Dklen(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KdfParams_set_Dklen_m8873AE7294C28118FDADC3F76AB3FCCA12ED0A9E_inline (KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.Pbkdf2Params::set_Count(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pbkdf2Params_set_Count_mF6B58E39489D4C7F5E7B0D46282913C817BC95B2_inline (Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.Pbkdf2Params::set_Prf(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pbkdf2Params_set_Prf_mC7BE10C0C3A3D9D57247516A9A435067FE1F3242_inline (Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params> Nethereum.KeyStore.JsonDeserialisation.JsonKeyStorePbkdf2Serialiser::DeserialisePbkdf2(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* JsonKeyStorePbkdf2Serialiser_DeserialisePbkdf2_mCB032E6DDD55BEEEFCBE93C0763D73702D269D4D (String_t* ___json0, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.JsonDeserialisation.JsonKeyStorePbkdf2Serialiser::SerialisePbkdf2(Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonKeyStorePbkdf2Serialiser_SerialisePbkdf2_m8922669ED62A520D7B2D3F5274BA257E7BDA6E32 (KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* ___pbdk2KeyStore0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// Nethereum.KeyStore.Model.CryptoInfo`1<TKdfParams> Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params>::get_Crypto()
inline CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_inline (KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* __this, const RuntimeMethod* method)
{
	return ((  CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* (*) (KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2*, const RuntimeMethod*))KeyStore_1_get_Crypto_m362D6AF9A7BF2BF3B219D424C1032FA41E8E6C38_gshared_inline)(__this, method);
}
// System.String Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.Pbkdf2Params>::get_Mac()
inline String_t* CryptoInfo_1_get_Mac_m80EF43FB854AA550B53D0032F728DF0146193A9D_inline (CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8*, const RuntimeMethod*))CryptoInfo_1_get_Mac_m055A7202D58A9C26ACE8916AA09E61188A5DDECD_gshared_inline)(__this, method);
}
// System.Byte[] Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::HexToByteArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE (String_t* ___value0, const RuntimeMethod* method) ;
// Nethereum.KeyStore.Model.CipherParams Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.Pbkdf2Params>::get_CipherParams()
inline CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* CryptoInfo_1_get_CipherParams_mA907221C1FBFA60C8B7594E33B18EFFB464C74AC_inline (CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* __this, const RuntimeMethod* method)
{
	return ((  CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* (*) (CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8*, const RuntimeMethod*))CryptoInfo_1_get_CipherParams_mEFD7BECC8575B9293B4AED072809D6633279DACF_gshared_inline)(__this, method);
}
// System.String Nethereum.KeyStore.Model.CipherParams::get_Iv()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CipherParams_get_Iv_mACA12BCFA8DA0C8DF791A05028119A5A14F4CBC4_inline (CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* __this, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.Pbkdf2Params>::get_CipherText()
inline String_t* CryptoInfo_1_get_CipherText_m52A772F5318629770218E77F43791D3CBF6FC3FA_inline (CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8*, const RuntimeMethod*))CryptoInfo_1_get_CipherText_m8420F5C90CAE65A1937800647E74C598DAB22A8A_gshared_inline)(__this, method);
}
// TKdfParams Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.Pbkdf2Params>::get_Kdfparams()
inline Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* CryptoInfo_1_get_Kdfparams_m581A8A3832F579C51A44AADA45E502A89D50C19D_inline (CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* __this, const RuntimeMethod* method)
{
	return ((  Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* (*) (CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8*, const RuntimeMethod*))CryptoInfo_1_get_Kdfparams_m5E9AD76074E8F4BFBA54C9536B34974011401AC9_gshared_inline)(__this, method);
}
// System.String Nethereum.KeyStore.Model.KdfParams::get_Salt()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KdfParams_get_Salt_mBC1DA50823694582BA754AAAB3F2C098C024205B_inline (KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::DecryptPbkdf2Sha256(System.String,System.Byte[],System.Byte[],System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_DecryptPbkdf2Sha256_m463E4D366891F0379AEF5AB08590E45DC666A228 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, String_t* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mac1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cipherText3, int32_t ___c4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt5, int32_t ___dklen6, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.KeyStoreServiceBase`1<Nethereum.KeyStore.Model.ScryptParams>::.ctor()
inline void KeyStoreServiceBase_1__ctor_m1DBE46B208189092A8D3C1548EF21969F6920922 (KeyStoreServiceBase_1_t83E72AC62855C439A5D01F4E5A00BB6BCA2150D0* __this, const RuntimeMethod* method)
{
	((  void (*) (KeyStoreServiceBase_1_t83E72AC62855C439A5D01F4E5A00BB6BCA2150D0*, const RuntimeMethod*))KeyStoreServiceBase_1__ctor_m36A9B780F55EDC9AC4A3344AF79E02500B3AB7E0_gshared)(__this, method);
}
// System.Void Nethereum.KeyStore.KeyStoreServiceBase`1<Nethereum.KeyStore.Model.ScryptParams>::.ctor(Nethereum.KeyStore.Crypto.IRandomBytesGenerator,Nethereum.KeyStore.Crypto.KeyStoreCrypto)
inline void KeyStoreServiceBase_1__ctor_m3215CD0F957EBA11B41991F44742028C01549BF8 (KeyStoreServiceBase_1_t83E72AC62855C439A5D01F4E5A00BB6BCA2150D0* __this, RuntimeObject* ___randomBytesGenerator0, KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* ___keyStoreCrypto1, const RuntimeMethod* method)
{
	((  void (*) (KeyStoreServiceBase_1_t83E72AC62855C439A5D01F4E5A00BB6BCA2150D0*, RuntimeObject*, KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E*, const RuntimeMethod*))KeyStoreServiceBase_1__ctor_mBE8A3D4DB7A3019F102BDF7619264F88378FA6E7_gshared)(__this, ___randomBytesGenerator0, ___keyStoreCrypto1, method);
}
// System.Void Nethereum.KeyStore.KeyStoreServiceBase`1<Nethereum.KeyStore.Model.ScryptParams>::.ctor(Nethereum.KeyStore.Crypto.IRandomBytesGenerator)
inline void KeyStoreServiceBase_1__ctor_m53322BC91A0B7B2702DA1706BA86057D58F93763 (KeyStoreServiceBase_1_t83E72AC62855C439A5D01F4E5A00BB6BCA2150D0* __this, RuntimeObject* ___randomBytesGenerator0, const RuntimeMethod* method)
{
	((  void (*) (KeyStoreServiceBase_1_t83E72AC62855C439A5D01F4E5A00BB6BCA2150D0*, RuntimeObject*, const RuntimeMethod*))KeyStoreServiceBase_1__ctor_m56176B62B2DBE955FA16B9B40DE681048D38F392_gshared)(__this, ___randomBytesGenerator0, method);
}
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::GetPasswordAsBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GetPasswordAsBytes_mA2E8301D37E8A83B376BAF88F222636728A9AF93 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, String_t* ___password0, const RuntimeMethod* method) ;
// System.Int32 Nethereum.KeyStore.Model.ScryptParams::get_N()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParams_get_N_mE57FDEFFC05A1BEE6E1D2AEC8E0768206BEE49E2_inline (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, const RuntimeMethod* method) ;
// System.Int32 Nethereum.KeyStore.Model.ScryptParams::get_R()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParams_get_R_mBBE1A0B0B5E9B5E32A3E798FAC0766775DDF186E_inline (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, const RuntimeMethod* method) ;
// System.Int32 Nethereum.KeyStore.Model.ScryptParams::get_P()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParams_get_P_mF431C35431D06FDC71DF89E3BCA31DB14A9C880E_inline (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::GenerateDerivedScryptKey(System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GenerateDerivedScryptKey_mD84A7413EE9B46393273F5D0B8E928AFFDD4F372 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt1, int32_t ___n2, int32_t ___r3, int32_t ___p4, int32_t ___dkLen5, bool ___checkRandN6, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.ScryptParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptParams__ctor_m5DC4BDC83AC01594CA6FCBED4B0AE865F33229FD (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.ScryptParams::set_N(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParams_set_N_mD7A43E5EAAB1D1C3D9AFE496F7ED17549AC7D670_inline (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.ScryptParams::set_R(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParams_set_R_m9AD9236A19430A9B44EFA3301D417E7F665FDAAE_inline (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.ScryptParams::set_P(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParams_set_P_m54B8987AEE116A5F01F276FB41F5B7BD6CE93FD7_inline (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, int32_t ___value0, const RuntimeMethod* method) ;
// Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams> Nethereum.KeyStore.JsonDeserialisation.JsonKeyStoreScryptSerialiser::DeserialiseScrypt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* JsonKeyStoreScryptSerialiser_DeserialiseScrypt_m444B7A8F3A8E09938DAF4264B6A809D3281F20FF (String_t* ___json0, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.JsonDeserialisation.JsonKeyStoreScryptSerialiser::SerialiseScrypt(Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonKeyStoreScryptSerialiser_SerialiseScrypt_m021A1C32895A9DB278D67F315F4ACBCBC2944944 (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* ___scryptKeyStore0, const RuntimeMethod* method) ;
// Nethereum.KeyStore.Model.CryptoInfo`1<TKdfParams> Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>::get_Crypto()
inline CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* __this, const RuntimeMethod* method)
{
	return ((  CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* (*) (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E*, const RuntimeMethod*))KeyStore_1_get_Crypto_m362D6AF9A7BF2BF3B219D424C1032FA41E8E6C38_gshared_inline)(__this, method);
}
// System.String Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>::get_Mac()
inline String_t* CryptoInfo_1_get_Mac_m397668EA83950C2D02123C4FCBC665015AD1ACD8_inline (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*, const RuntimeMethod*))CryptoInfo_1_get_Mac_m055A7202D58A9C26ACE8916AA09E61188A5DDECD_gshared_inline)(__this, method);
}
// Nethereum.KeyStore.Model.CipherParams Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>::get_CipherParams()
inline CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* CryptoInfo_1_get_CipherParams_mCE5052AB3E08620D0675291DD4A9F0B453F1DC37_inline (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* __this, const RuntimeMethod* method)
{
	return ((  CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* (*) (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*, const RuntimeMethod*))CryptoInfo_1_get_CipherParams_mEFD7BECC8575B9293B4AED072809D6633279DACF_gshared_inline)(__this, method);
}
// System.String Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>::get_CipherText()
inline String_t* CryptoInfo_1_get_CipherText_m0D0D495D51ACCBD21C7BA3075D96E6E9E4A6BE0B_inline (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*, const RuntimeMethod*))CryptoInfo_1_get_CipherText_m8420F5C90CAE65A1937800647E74C598DAB22A8A_gshared_inline)(__this, method);
}
// TKdfParams Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>::get_Kdfparams()
inline ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* __this, const RuntimeMethod* method)
{
	return ((  ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* (*) (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*, const RuntimeMethod*))CryptoInfo_1_get_Kdfparams_m5E9AD76074E8F4BFBA54C9536B34974011401AC9_gshared_inline)(__this, method);
}
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::DecryptScrypt(System.String,System.Byte[],System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_DecryptScrypt_m828C9ED4E8F3A128B449D0AA91CC498B2EBE6524 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, String_t* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mac1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cipherText3, int32_t ___n4, int32_t ___p5, int32_t ___r6, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt7, int32_t ___dklen8, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.KeyStoreKdfChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreKdfChecker__ctor_m3BA57A0DD4812D32648D34710EA0581DCF6100CA (KeyStoreKdfChecker_t5660B10F5A8CC515511DA8EFA8144ED60F71271E* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.KeyStorePbkdf2Service::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStorePbkdf2Service__ctor_m60CF3CF3AE63D8B5B4561B9DE729A9F7726C02B7 (KeyStorePbkdf2Service_t1705604F58CEC838C65896E38A3234F41E32D5F3* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.KeyStoreScryptService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreScryptService__ctor_mE569E0226BEA6594C280E2F2CE16C21C87C956E5 (KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* JObject_get_Item_m889A29E8FCEA531AF829407F208DD05F0108C50B (JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* __this, String_t* ___propertyName0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA (const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// Nethereum.KeyStore.KeyStoreKdfChecker/KdfType Nethereum.KeyStore.KeyStoreKdfChecker::GetKeyStoreKdfType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyStoreKdfChecker_GetKeyStoreKdfType_mA3319D63885770AF51B6A09257DFFE7504A89528 (KeyStoreKdfChecker_t5660B10F5A8CC515511DA8EFA8144ED60F71271E* __this, String_t* ___json0, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.KeyStore.KeyStoreServiceBase`1<Nethereum.KeyStore.Model.Pbkdf2Params>::DecryptKeyStoreFromJson(System.String,System.String)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreServiceBase_1_DecryptKeyStoreFromJson_m402CAF8FA7C06395F841F59F24C27AF4BA050C7E (KeyStoreServiceBase_1_tA19093FFDF21CC23402CF786E1996BE7DF5182AE* __this, String_t* ___password0, String_t* ___json1, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (KeyStoreServiceBase_1_tA19093FFDF21CC23402CF786E1996BE7DF5182AE*, String_t*, String_t*, const RuntimeMethod*))KeyStoreServiceBase_1_DecryptKeyStoreFromJson_m61B7125DC1D35932AB090AEEEF3505D1C887193F_gshared)(__this, ___password0, ___json1, method);
}
// System.Byte[] Nethereum.KeyStore.KeyStoreServiceBase`1<Nethereum.KeyStore.Model.ScryptParams>::DecryptKeyStoreFromJson(System.String,System.String)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreServiceBase_1_DecryptKeyStoreFromJson_m21337304B9D3DD06B25C3FC306D0850E5D9D4EF0 (KeyStoreServiceBase_1_t83E72AC62855C439A5D01F4E5A00BB6BCA2150D0* __this, String_t* ___password0, String_t* ___json1, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (KeyStoreServiceBase_1_t83E72AC62855C439A5D01F4E5A00BB6BCA2150D0*, String_t*, String_t*, const RuntimeMethod*))KeyStoreServiceBase_1_DecryptKeyStoreFromJson_m61B7125DC1D35932AB090AEEEF3505D1C887193F_gshared)(__this, ___password0, ___json1, method);
}
// System.String Nethereum.KeyStore.KeyStoreServiceBase`1<Nethereum.KeyStore.Model.ScryptParams>::EncryptAndGenerateKeyStoreAsJson(System.String,System.Byte[],System.String)
inline String_t* KeyStoreServiceBase_1_EncryptAndGenerateKeyStoreAsJson_m5D1F86C4AC4FB0F3AEF7AAE097FED970100A2DA8 (KeyStoreServiceBase_1_t83E72AC62855C439A5D01F4E5A00BB6BCA2150D0* __this, String_t* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___privateKey1, String_t* ___addresss2, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyStoreServiceBase_1_t83E72AC62855C439A5D01F4E5A00BB6BCA2150D0*, String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t*, const RuntimeMethod*))KeyStoreServiceBase_1_EncryptAndGenerateKeyStoreAsJson_mF653B4442CE26F27CFA558C4AB3AA5D46436323E_gshared)(__this, ___password0, ___privateKey1, ___addresss2, method);
}
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::ToHex(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, bool ___prefix1, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CipherParams::set_Iv(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CipherParams_set_Iv_mE77D6319BE01333E7B3F6F7F98453DABAE5BB6C6_inline (CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.KdfParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KdfParams__ctor_m39CCECF77A608644CB36BBBA3081362363BFF843 (KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherParamsDTO__ctor_m3A7C44114C8F04E69B34C05E366716D7C18066BB (CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::set_cipherparams(Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_cipherparams_mE014108E074C5803596A0CE491004920054A7A86_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoInfoDTOBase__ctor_m37903E098FB857B1E4AD7CF702F9B6ACA53A6789 (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.Pbkdf2ParamsDTO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pbkdf2ParamsDTO__ctor_m020C89B6B463C246BA058B1A93C7977FE6B376FE (Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoPbkdf2DTO::set_kdfparams(Nethereum.KeyStore.JsonDeserialisation.Pbkdf2ParamsDTO)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfoPbkdf2DTO_set_kdfparams_m164610BB3A75FEF212B50C70F5E842DB0941319F_inline (CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* __this, Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptParamsDTO__ctor_m44F6BFB85D6013B5CC771EF78AB158D283A58CDD (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO::set_kdfparams(Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfoScryptDTO_set_kdfparams_mD261CED055A2C04A72FAFF40AE3C420DFAC1483B_inline (CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* __this, ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* ___value0, const RuntimeMethod* method) ;
// Nethereum.KeyStore.JsonDeserialisation.KeyStorePbkdf2DTO Nethereum.KeyStore.JsonDeserialisation.JsonKeyStorePbkdf2Serialiser::MapModelToDTO(Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* JsonKeyStorePbkdf2Serialiser_MapModelToDTO_mCD248C7A7274DD20B28B9EC3BF06AB71DE49171D (KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* ___pbdk2KeyStore0, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_SerializeObject_m277670BD344964CB2A61751E5A3D62DB5B1321C7 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<Nethereum.KeyStore.JsonDeserialisation.KeyStorePbkdf2DTO>(System.String)
inline KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* JsonConvert_DeserializeObject_TisKeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3_m230A31371FA064FF77AECC89F1D8B9FE967AE7D3 (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* (*) (String_t*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared)(___value0, method);
}
// Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params> Nethereum.KeyStore.JsonDeserialisation.JsonKeyStorePbkdf2Serialiser::MapDTOToModel(Nethereum.KeyStore.JsonDeserialisation.KeyStorePbkdf2DTO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* JsonKeyStorePbkdf2Serialiser_MapDTOToModel_mFA69AC2602F974B6CA9B89B04B027DC93301AE0D (KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* ___dto0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStorePbkdf2DTO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStorePbkdf2DTO__ctor_m4887CBA5A3529DA8BA4DABD07C930880F935D1BD (KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* __this, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params>::get_Address()
inline String_t* KeyStore_1_get_Address_mF86FC3E973AF8F67AD841BCEE124C323A1D64C71_inline (KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2*, const RuntimeMethod*))KeyStore_1_get_Address_m5F5EA6C9152DC138F05852DB6B99403272396FA9_gshared_inline)(__this, method);
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::set_address(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStoreDTOBase_set_address_m4E71FF95A9D7900DD962E9C8EDA24D1053EC5C5D_inline (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params>::get_Id()
inline String_t* KeyStore_1_get_Id_m73314A33D0C1499A6F003AB49AE0B5CD3D8FEEAF_inline (KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2*, const RuntimeMethod*))KeyStore_1_get_Id_mA2BB933706FD75C2E8C1B9F68E7A69B95C90E8BE_gshared_inline)(__this, method);
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStoreDTOBase_set_id_m764A98BA5E66E066334464B230ED752BA37A1905_inline (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params>::get_Version()
inline int32_t KeyStore_1_get_Version_m7CB98BC1EA8EFDDCF0E321BABA5C7B5CF071DE41_inline (KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2*, const RuntimeMethod*))KeyStore_1_get_Version_mD84F708EDB5D57EE21AC2D13ACDDE79797ECF8D9_gshared_inline)(__this, method);
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::set_version(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStoreDTOBase_set_version_m8891C2744FDC8C814E198F4C66AF3F1E87F0180F_inline (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, int32_t ___value0, const RuntimeMethod* method) ;
// Nethereum.KeyStore.JsonDeserialisation.CryptoInfoPbkdf2DTO Nethereum.KeyStore.JsonDeserialisation.KeyStorePbkdf2DTO::get_crypto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* KeyStorePbkdf2DTO_get_crypto_mC816727DC3C94366BFED80AC35CAA2AA39CED861_inline (KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* __this, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.Pbkdf2Params>::get_Cipher()
inline String_t* CryptoInfo_1_get_Cipher_m389BD6EBD628F8C61EF4C2B8F0D78B9E10EE2C3A_inline (CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8*, const RuntimeMethod*))CryptoInfo_1_get_Cipher_m9B49A00BF1810DCCCB16A7B10F530B3D7497E002_gshared_inline)(__this, method);
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::set_cipher(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_cipher_m577997203D05BD47C1F03175A176CEE47468A563_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::set_cipherText(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_cipherText_m100CA8B4796B16C2C927A56C894D18F3B354DC03_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.Pbkdf2Params>::get_Kdf()
inline String_t* CryptoInfo_1_get_Kdf_m8BD42AAD2649B9838B73DAE6DA950652AFAAE4D3_inline (CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8*, const RuntimeMethod*))CryptoInfo_1_get_Kdf_m2D86721BF4AD889D24466A95184E47CDB2A57DC2_gshared_inline)(__this, method);
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::set_kdf(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_kdf_m0CE24ACCEAD963F6D649715EFAB53CE0B3BD7F54_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::set_mac(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_mac_m8C7197F81B08179424DDC30A8D72413D82D3CC54_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Nethereum.KeyStore.JsonDeserialisation.Pbkdf2ParamsDTO Nethereum.KeyStore.JsonDeserialisation.CryptoInfoPbkdf2DTO::get_kdfparams()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* CryptoInfoPbkdf2DTO_get_kdfparams_mF0404BA3404C382131A188BCD6544C68FFCFAD03_inline (CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.Pbkdf2ParamsDTO::set_c(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pbkdf2ParamsDTO_set_c_m4BA1D6942D9986166E02014DBB6843C5A25230FE_inline (Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.Model.Pbkdf2Params::get_Prf()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Pbkdf2Params_get_Prf_m452DEB151B6B91A6F85AB4335A1E9FE9792B97B0_inline (Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.Pbkdf2ParamsDTO::set_prf(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pbkdf2ParamsDTO_set_prf_m4E5CBB3B28E1A63DB33B64CBD240667842DFFBC5_inline (Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::set_dklen(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KdfParamsDTO_set_dklen_mA75B7F4B76A3E1E4D4D3F7C139F0CF15A097A0A6_inline (KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::set_salt(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KdfParamsDTO_set_salt_m1D5465724D0D2EC60A15AE7671FC6AC7266052F2_inline (KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::get_cipherparams()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* CryptoInfoDTOBase_get_cipherparams_mE9D29F3332F2FC754DE4C29BC8C183F08A389F77_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO::set_iv(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CipherParamsDTO_set_iv_mAA82EE8F95D570A32B28DDB5D137E452547E1447_inline (CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params>::.ctor()
inline void KeyStore_1__ctor_mBBD3CCEBD5299044209243B9F23E1743D00D3CB4 (KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* __this, const RuntimeMethod* method)
{
	((  void (*) (KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2*, const RuntimeMethod*))KeyStore_1__ctor_mE7E4BA95341698B0C1612BC2A25F3745126A66D5_gshared)(__this, method);
}
// System.String Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::get_address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KeyStoreDTOBase_get_address_m0134A1C538EC96FD7F883CF2B69E95EA0CAB0FD3_inline (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params>::set_Address(System.String)
inline void KeyStore_1_set_Address_m09CDE5CBD4792C93B0E7BE75DE8C1E3004F99F3B_inline (KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2*, String_t*, const RuntimeMethod*))KeyStore_1_set_Address_mA07ED729404AE5235478AD487878BA0E586F17C1_gshared_inline)(__this, ___value0, method);
}
// System.String Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KeyStoreDTOBase_get_id_mFDCD569677A39C6B99970D2C598D7587EFB2E77C_inline (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params>::set_Id(System.String)
inline void KeyStore_1_set_Id_m92CDF3EC870F842CA05952E5FD4D276B9F5DFCA7_inline (KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2*, String_t*, const RuntimeMethod*))KeyStore_1_set_Id_m3420C8176B12F55B174C71505E14F217DD006A09_gshared_inline)(__this, ___value0, method);
}
// System.Int32 Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::get_version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyStoreDTOBase_get_version_m7F00B43A9B900EE11DDA1E69DB08CCB03C5BE9ED_inline (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params>::set_Version(System.Int32)
inline void KeyStore_1_set_Version_m0D3C2AFEEE3CB168E2967C180CCBDF9277A37519_inline (KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2*, int32_t, const RuntimeMethod*))KeyStore_1_set_Version_mBCC01AB392E374F30A4C64911F11270F953CDFD7_gshared_inline)(__this, ___value0, method);
}
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.Pbkdf2Params>::.ctor()
inline void CryptoInfo_1__ctor_m64E73FFB1ABC084EE66863619596CAFC447DC32A (CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* __this, const RuntimeMethod* method)
{
	((  void (*) (CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8*, const RuntimeMethod*))CryptoInfo_1__ctor_m260289CE9EE4D93680D7C93DD53A131AA0E62955_gshared)(__this, method);
}
// System.Void Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params>::set_Crypto(Nethereum.KeyStore.Model.CryptoInfo`1<TKdfParams>)
inline void KeyStore_1_set_Crypto_mE619CF2F3C0B9C38C9E88BC29B1B59CFF8DCD787_inline (KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* __this, CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* ___value0, const RuntimeMethod* method)
{
	((  void (*) (KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2*, CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8*, const RuntimeMethod*))KeyStore_1_set_Crypto_mEB8BE7B51499176BE67A3A002F266A770B50259E_gshared_inline)(__this, ___value0, method);
}
// System.String Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::get_cipher()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfoDTOBase_get_cipher_mC2254AEF9DABAE8647851B32135596ED041004D7_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.Pbkdf2Params>::set_Cipher(System.String)
inline void CryptoInfo_1_set_Cipher_mAEC03B77AAD2E0515D155A0375F5818E2A64D8EC_inline (CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8*, String_t*, const RuntimeMethod*))CryptoInfo_1_set_Cipher_m04CD908F1C173EA7292CC67031546B4A15AA4186_gshared_inline)(__this, ___value0, method);
}
// System.String Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::get_cipherText()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfoDTOBase_get_cipherText_mCA4F7FEE19C44BB4E20FF7B4D06E6F9832CC2DEF_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.Pbkdf2Params>::set_CipherText(System.String)
inline void CryptoInfo_1_set_CipherText_m1829083C1D5065BD7FF9D9B0A1E69AF81F824A90_inline (CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8*, String_t*, const RuntimeMethod*))CryptoInfo_1_set_CipherText_m76F538CAC717AE7BC894683B6DA9EAAA9DB6FE96_gshared_inline)(__this, ___value0, method);
}
// System.String Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::get_kdf()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfoDTOBase_get_kdf_m37F91BCF553659BC936ACA04FBE68BAD0AD09703_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.Pbkdf2Params>::set_Kdf(System.String)
inline void CryptoInfo_1_set_Kdf_m0C4E02ABBCF8451EB2BF614406EA26EEAC81A166_inline (CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8*, String_t*, const RuntimeMethod*))CryptoInfo_1_set_Kdf_mF7677CA999DA927074A8807A8C0F33AC03242CEA_gshared_inline)(__this, ___value0, method);
}
// System.String Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::get_mac()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfoDTOBase_get_mac_m832D5DAE6B8D34645CB12D6C1EF621E8247053DB_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.Pbkdf2Params>::set_Mac(System.String)
inline void CryptoInfo_1_set_Mac_mFC2C15194B9E7F00795C290647877D9EE344FAC8_inline (CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8*, String_t*, const RuntimeMethod*))CryptoInfo_1_set_Mac_mB9D282B2388CFEABBCF79168151FC856FD0A87DE_gshared_inline)(__this, ___value0, method);
}
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.Pbkdf2Params>::set_Kdfparams(TKdfParams)
inline void CryptoInfo_1_set_Kdfparams_m31F4A35D15A0ABDD36F4246C0B5A3BCB8843041E_inline (CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* __this, Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* ___value0, const RuntimeMethod* method)
{
	((  void (*) (CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8*, Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D*, const RuntimeMethod*))CryptoInfo_1_set_Kdfparams_mCF71DADA258CB5683877958BB3500389739E05A2_gshared_inline)(__this, ___value0, method);
}
// System.Int32 Nethereum.KeyStore.JsonDeserialisation.Pbkdf2ParamsDTO::get_c()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Pbkdf2ParamsDTO_get_c_m3B13666602544BAA07A393358D4A7702A80FD03F_inline (Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* __this, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.JsonDeserialisation.Pbkdf2ParamsDTO::get_prf()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Pbkdf2ParamsDTO_get_prf_m9A05AF9E39269FB7A363F6744E0FC201B9CCFE04_inline (Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* __this, const RuntimeMethod* method) ;
// System.Int32 Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::get_dklen()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KdfParamsDTO_get_dklen_mF4F94F51F353F4A8CF43F2D9BD782FB90FF8142D_inline (KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13* __this, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::get_salt()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KdfParamsDTO_get_salt_m6238900E8629F7663690AD6E1E4C2FF99E8F35ED_inline (KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.KdfParams::set_Salt(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KdfParams_set_Salt_m578F3DA59E3C91B1C70F13793C6926210CE139F7_inline (KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CipherParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherParams__ctor_m6EF7551DAA09455A6D0CB9B5E98BA76CCD98072A (CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.Pbkdf2Params>::set_CipherParams(Nethereum.KeyStore.Model.CipherParams)
inline void CryptoInfo_1_set_CipherParams_mBF3B77965FA6773A82D4D4F9DB6353DA465D30E7_inline (CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* __this, CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* ___value0, const RuntimeMethod* method)
{
	((  void (*) (CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8*, CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0*, const RuntimeMethod*))CryptoInfo_1_set_CipherParams_m61BF691E694BFDFD0D0943CF2EB9A2D8BF8BD4F0_gshared_inline)(__this, ___value0, method);
}
// System.String Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO::get_iv()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CipherParamsDTO_get_iv_m9A9BB6EC013B70B8EE1542B30F8644D520FEE92C_inline (CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* __this, const RuntimeMethod* method) ;
// Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO Nethereum.KeyStore.JsonDeserialisation.JsonKeyStoreScryptSerialiser::MapModelToDTO(Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* JsonKeyStoreScryptSerialiser_MapModelToDTO_m74227D5A6398A22F0C248CE67F7B734EB2FCAFC8 (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* ___scryptKeyStore0, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO>(System.String)
inline KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* JsonConvert_DeserializeObject_TisKeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367_mC72C249C6450475F026EE89BE5DFFEEF5045F885 (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* (*) (String_t*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared)(___value0, method);
}
// Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams> Nethereum.KeyStore.JsonDeserialisation.JsonKeyStoreScryptSerialiser::MapDTOToModel(Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* JsonKeyStoreScryptSerialiser_MapDTOToModel_mA7AA3E2107425F4077076092C1DBBAA8F0690AF2 (KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* ___dto0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreScryptDTO__ctor_m92B3E01F3801D999CDFF37E7D28A10EA14421472 (KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* __this, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>::get_Address()
inline String_t* KeyStore_1_get_Address_m2BD758087730CB1C5A6D149E0C7A1C1A88904161_inline (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E*, const RuntimeMethod*))KeyStore_1_get_Address_m5F5EA6C9152DC138F05852DB6B99403272396FA9_gshared_inline)(__this, method);
}
// System.String Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>::get_Id()
inline String_t* KeyStore_1_get_Id_mB084F9AF1D51C89CFC94FC9F4F1BD68173BA4A4C_inline (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E*, const RuntimeMethod*))KeyStore_1_get_Id_mA2BB933706FD75C2E8C1B9F68E7A69B95C90E8BE_gshared_inline)(__this, method);
}
// System.Int32 Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>::get_Version()
inline int32_t KeyStore_1_get_Version_mC58350AE7F50E7EF46D94FCDD702B34039265C35_inline (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E*, const RuntimeMethod*))KeyStore_1_get_Version_mD84F708EDB5D57EE21AC2D13ACDDE79797ECF8D9_gshared_inline)(__this, method);
}
// Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO::get_crypto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline (KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* __this, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>::get_Cipher()
inline String_t* CryptoInfo_1_get_Cipher_m7BA1B867E8E4C8833CEE05C3143DE335A621F2A5_inline (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*, const RuntimeMethod*))CryptoInfo_1_get_Cipher_m9B49A00BF1810DCCCB16A7B10F530B3D7497E002_gshared_inline)(__this, method);
}
// System.String Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>::get_Kdf()
inline String_t* CryptoInfo_1_get_Kdf_mAB4E9A63B906AD0CEDA894E615BF3CAB540B80D1_inline (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*, const RuntimeMethod*))CryptoInfo_1_get_Kdf_m2D86721BF4AD889D24466A95184E47CDB2A57DC2_gshared_inline)(__this, method);
}
// Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO::get_kdfparams()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* CryptoInfoScryptDTO_get_kdfparams_m88558053C3D05D95A823EC4DB490A6F85518808A_inline (CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::set_r(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParamsDTO_set_r_m9EA349D301AF31CBC06A4204807852BC10B8772B_inline (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::set_n(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParamsDTO_set_n_mF43334DBC344EFF9F8DCED73543A5A25847A6A55_inline (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::set_p(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParamsDTO_set_p_m2A2C1324B4C9F90F65E916EB957EDB148865DF45_inline (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>::.ctor()
inline void KeyStore_1__ctor_m2ECFC2CB0B05408465002F720B7142EA3F0E6B17 (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* __this, const RuntimeMethod* method)
{
	((  void (*) (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E*, const RuntimeMethod*))KeyStore_1__ctor_mE7E4BA95341698B0C1612BC2A25F3745126A66D5_gshared)(__this, method);
}
// System.Void Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>::set_Address(System.String)
inline void KeyStore_1_set_Address_m06D4182B667F0FA9DBB10640DF9FED69E2E61140_inline (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E*, String_t*, const RuntimeMethod*))KeyStore_1_set_Address_mA07ED729404AE5235478AD487878BA0E586F17C1_gshared_inline)(__this, ___value0, method);
}
// System.Void Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>::set_Id(System.String)
inline void KeyStore_1_set_Id_m9F9D3D789C8BEFD5EF221C06A2512457D5598B49_inline (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E*, String_t*, const RuntimeMethod*))KeyStore_1_set_Id_m3420C8176B12F55B174C71505E14F217DD006A09_gshared_inline)(__this, ___value0, method);
}
// System.Void Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>::set_Version(System.Int32)
inline void KeyStore_1_set_Version_mCC41748FB655953DC784DEDAF0A9F1D7C9C915E8_inline (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E*, int32_t, const RuntimeMethod*))KeyStore_1_set_Version_mBCC01AB392E374F30A4C64911F11270F953CDFD7_gshared_inline)(__this, ___value0, method);
}
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>::.ctor()
inline void CryptoInfo_1__ctor_m032DF032DB563EE333F936B18490F15E5857964A (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* __this, const RuntimeMethod* method)
{
	((  void (*) (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*, const RuntimeMethod*))CryptoInfo_1__ctor_m260289CE9EE4D93680D7C93DD53A131AA0E62955_gshared)(__this, method);
}
// System.Void Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>::set_Crypto(Nethereum.KeyStore.Model.CryptoInfo`1<TKdfParams>)
inline void KeyStore_1_set_Crypto_m6C695CA8B0703EF97A90EAFE827F14ECE34A2BF0_inline (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* __this, CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* ___value0, const RuntimeMethod* method)
{
	((  void (*) (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E*, CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*, const RuntimeMethod*))KeyStore_1_set_Crypto_mEB8BE7B51499176BE67A3A002F266A770B50259E_gshared_inline)(__this, ___value0, method);
}
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>::set_Cipher(System.String)
inline void CryptoInfo_1_set_Cipher_m3A8287A23B23E90E4D269C6BAB72FD92C7AD59FF_inline (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*, String_t*, const RuntimeMethod*))CryptoInfo_1_set_Cipher_m04CD908F1C173EA7292CC67031546B4A15AA4186_gshared_inline)(__this, ___value0, method);
}
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>::set_CipherText(System.String)
inline void CryptoInfo_1_set_CipherText_mAB2EA2B19CDD9767567825024156FC1357581C78_inline (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*, String_t*, const RuntimeMethod*))CryptoInfo_1_set_CipherText_m76F538CAC717AE7BC894683B6DA9EAAA9DB6FE96_gshared_inline)(__this, ___value0, method);
}
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>::set_Kdf(System.String)
inline void CryptoInfo_1_set_Kdf_m2F4F184EA3A7B6112EF18F1FBA70CFF2140270E0_inline (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*, String_t*, const RuntimeMethod*))CryptoInfo_1_set_Kdf_mF7677CA999DA927074A8807A8C0F33AC03242CEA_gshared_inline)(__this, ___value0, method);
}
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>::set_Mac(System.String)
inline void CryptoInfo_1_set_Mac_m57B69D5B6017597A4263D7C4130DF4E5E81AE667_inline (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*, String_t*, const RuntimeMethod*))CryptoInfo_1_set_Mac_mB9D282B2388CFEABBCF79168151FC856FD0A87DE_gshared_inline)(__this, ___value0, method);
}
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>::set_Kdfparams(TKdfParams)
inline void CryptoInfo_1_set_Kdfparams_m496DF4ECF94CFBFC730A619DFF35E8536275BFAB_inline (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* __this, ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* ___value0, const RuntimeMethod* method)
{
	((  void (*) (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*, ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779*, const RuntimeMethod*))CryptoInfo_1_set_Kdfparams_mCF71DADA258CB5683877958BB3500389739E05A2_gshared_inline)(__this, ___value0, method);
}
// System.Int32 Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::get_r()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParamsDTO_get_r_mD2EED1B5689E035883BB29D9BD1A8B303412DF65_inline (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, const RuntimeMethod* method) ;
// System.Int32 Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::get_n()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParamsDTO_get_n_m3FF77C12A496BB3D66BDB6EDB8DAF21525CE2AB8_inline (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, const RuntimeMethod* method) ;
// System.Int32 Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::get_p()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParamsDTO_get_p_m19884391C68271FF5FB3BEF1CF2935DE29E834F1_inline (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>::set_CipherParams(Nethereum.KeyStore.Model.CipherParams)
inline void CryptoInfo_1_set_CipherParams_mE008C30F61B193220181F8571E9B22669BC1C7E4_inline (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* __this, CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* ___value0, const RuntimeMethod* method)
{
	((  void (*) (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*, CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0*, const RuntimeMethod*))CryptoInfo_1_set_CipherParams_m61BF691E694BFDFD0D0943CF2EB9A2D8BF8BD4F0_gshared_inline)(__this, ___value0, method);
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreDTOBase__ctor_m0D44032DCB424D46C0967E5AE492860854200F0F (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoPbkdf2DTO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoInfoPbkdf2DTO__ctor_mF09BE01088667CDB3633838BEC8D6C57C50F72AD (CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStorePbkdf2DTO::set_crypto(Nethereum.KeyStore.JsonDeserialisation.CryptoInfoPbkdf2DTO)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStorePbkdf2DTO_set_crypto_mBD64474DF76F8511397F3F8387859843E2F8D696_inline (KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* __this, CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoInfoScryptDTO__ctor_m4D5FE44A524F51AB6585157B0D17B6B135ECB074 (CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO::set_crypto(Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStoreScryptDTO_set_crypto_m6B338293B428CD65FBC9511AF668A777FDA99892_inline (KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* __this, CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KdfParamsDTO__ctor_m33FABA503A55656C7E129E3D0EBCC23D1C6348A3 (KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.KeyStore.Crypto.ScryptNet::CryptoScrypt(System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ScryptNet_CryptoScrypt_m5AAEB7E15BBC29209AB45FA6EB93C8602A7BF7F8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt1, int32_t ___N2, int32_t ___r3, int32_t ___p4, int32_t ___dkLen5, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___sourceArray0, RuntimeArray* ___destinationArray1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest__ctor_m1D83E44DC559F9E747241A63E130AF770D442FCF (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, int32_t ___bitLength0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha256Digest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha256Digest__ctor_m6A98252E0DAF748D5D1BDBCDA91042301B1657D8 (Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneralDigest_BlockUpdate_mC80B155521BF0C0099B078C6E36419687A11568F (GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.HMac::.ctor(Org.BouncyCastle.Crypto.IDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMac__ctor_m668C4136EFC2B472FC9300D118CE72D0C07F9D5B (HMac_t6F0768FC92486A4BB51A39C74FBAB8B4B8CFB607* __this, RuntimeObject* ___digest0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Parameters.KeyParameter::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyParameter__ctor_m178EFF09A4FE23B3FD358AB94605EC4528FBF093 (KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::CalculateKeccakHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_CalculateKeccakHash_mC8A981BED599BCAE5AC30BF291A2E96620C1B35B (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Generators.Pkcs5S2ParametersGenerator::.ctor(Org.BouncyCastle.Crypto.IDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pkcs5S2ParametersGenerator__ctor_m43D8AC42079DF38586045859373DF2C8825A6C71 (Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D* __this, RuntimeObject* ___digest0, const RuntimeMethod* method) ;
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.PbeParametersGenerator::Pkcs5PasswordToUtf8Bytes(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PbeParametersGenerator_Pkcs5PasswordToUtf8Bytes_mF4BE2279157A14D42D973D2C5A022922A6D552DA (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___password0, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KeyParameter::GetKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16 (KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.Parameters.KeyParameter Org.BouncyCastle.Security.ParameterUtilities::CreateKeyParameter(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* ParameterUtilities_CreateKeyParameter_m503070D02626F2E547CED69879BB7A359ED9ED19 (String_t* ___algorithm0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyBytes1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::.ctor(Org.BouncyCastle.Crypto.ICipherParameters,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParametersWithIV__ctor_mC1B4901D3CEBECE5903FE14597AA0701B7B7C994 (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* __this, RuntimeObject* ___parameters0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv1, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.IBufferedCipher Org.BouncyCastle.Security.CipherUtilities::GetCipher(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CipherUtilities_GetCipher_m120CBF0B698B4B035A827FF2E710AD7B170DC615 (String_t* ___algorithm0, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::Decrypt(System.Byte[],System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_Decrypt_m69545AE305F21FD8AEA6EB106CE35AF55812E0DA (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mac0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cipherText2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___derivedKey3, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Crypto.KeyStoreCrypto::ValidateMac(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreCrypto_ValidateMac_m50D46430C5F2BF65B89B4AA49C96E62788EC5D01 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mac0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cipherText1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___derivedKey2, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::GenerateAesCtrCipher(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GenerateAesCtrCipher_mAEAC7F39874147CD2A0A3E3FD499934FFAEA0991 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___encryptKey1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input2, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::GenerateMac(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GenerateMac_mC6C9A66E314C1298593041FE80E0037FB4ECAF99 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___derivedKey0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cipherText1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Crypto.DecryptionException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecryptionException__ctor_m77BC09FFF4E1BA18CF1E1F7CF0342BC72A274097 (DecryptionException_t475B93777EFB780713433EEB8305E4BDCCF42738* __this, String_t* ___msg0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Byte[] Nethereum.KeyStore.Crypto.RandomBytesGenerator::GenerateRandomBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RandomBytesGenerator_GenerateRandomBytes_m295AE07A9AEDFF1967610054AD8FC24EC08A7FA9 (RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B* __this, int32_t ___size0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Security.SecureRandom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureRandom__ctor_m1FB3C478CD5CC4CDF68C981D8F5F89FC8EF8CC68 (SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.KeyStore.Crypto.ScryptNet::SingleIterationPBKDF2(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ScryptNet_SingleIterationPBKDF2_m5C15EBEBF23B38F84C60D6690A18031F501F6790 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___P0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S1, int32_t ___dkLen2, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Crypto.ScryptNet::SMix(System.Byte*,System.Int32,System.Int32,System.UInt32*,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptNet_SMix_m14952E992EC6AEEB26E9D84AE1C6471C1546F246 (uint8_t* ___B0, int32_t ___r1, int32_t ___N2, uint32_t* ___V3, uint32_t* ___XY4, const RuntimeMethod* method) ;
// System.UInt32 Nethereum.KeyStore.Crypto.ScryptNet::R(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F (uint32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Crypto.ScryptNet::BulkCopy(System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptNet_BulkCopy_m02C41323623B15BE75F69BAF6CC1B679B5CFBC29 (void* ___dst0, void* ___src1, int32_t ___len2, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Crypto.ScryptNet::BulkXor(System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptNet_BulkXor_m605660F65DADB0766CF15C6AF95602335E0DB7BA (void* ___dst0, void* ___src1, int32_t ___len2, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Crypto.ScryptNet::Salsa208(System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptNet_Salsa208_m4646DF9B913D1A96DC008CCAABAF2B9300C9A512 (uint32_t* ___B0, const RuntimeMethod* method) ;
// System.UInt32 Nethereum.KeyStore.Crypto.ScryptNet::Decode32(System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ScryptNet_Decode32_m72CB0DD11562278FED4B6622F7819E3810D93B3E (uint8_t* ___p0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Crypto.ScryptNet::BlockMix(System.UInt32*,System.UInt32*,System.UInt32*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptNet_BlockMix_mE84FDFD2F76264C25F3C74C5EA9C89242C417798 (uint32_t* ___Bin0, uint32_t* ___Bout1, uint32_t* ___X2, int32_t ___r3, const RuntimeMethod* method) ;
// System.Int64 Nethereum.KeyStore.Crypto.ScryptNet::Integerify(System.UInt32*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ScryptNet_Integerify_m7CC0659FA5AED6CE8D42793C7D98F527E72B75B4 (uint32_t* ___B0, int32_t ___r1, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Crypto.ScryptNet::Encode32(System.Byte*,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptNet_Encode32_mE2F354CEBB2F7B991142868DA0B05DC287079389 (uint8_t* ___p0, uint32_t ___x1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, const RuntimeMethod* method) ;
// System.UInt32 Nethereum.KeyStore.Crypto.SCrypt::R(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178 (uint32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Crypto.SCrypt::UInt32_To_LE(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCrypt_UInt32_To_LE_m7F775F709D4E8963FC35E8C51139270BB8B742C8 (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Crypto.SCrypt::UInt32_To_LE(System.UInt32[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCrypt_UInt32_To_LE_m8E1D9C86A746128B910EE88AAB824E5E1C27FA07 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ns0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.UInt32 Nethereum.KeyStore.Crypto.SCrypt::LE_To_UInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SCrypt_LE_To_UInt32_m0DA25AFE1BC3B27FA3148655E2951E1953028CFD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Boolean Nethereum.KeyStore.Crypto.SCrypt::IsPowerOf2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SCrypt_IsPowerOf2_m1F0E4E4358CBA1753439B407014D8E7B2734D737 (int32_t ___x0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.KeyStore.Crypto.SCrypt::MFcrypt(System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SCrypt_MFcrypt_m021C5AF7838F770F1B6C64DC807AC845D3B1B4F2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___P0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S1, int32_t ___N2, int32_t ___r3, int32_t ___p4, int32_t ___dkLen5, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.KeyStore.Crypto.SCrypt::SingleIterationPBKDF2(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SCrypt_SingleIterationPBKDF2_m0FDFF5341EDC35908843D85409539CF7C8AFD189 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___P0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S1, int32_t ___dkLen2, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Crypto.SCrypt::ClearAll(System.Array[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCrypt_ClearAll_mD12D2C06BC3198D7B3E0071D986EADCE60DD396E (ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106* ___arrays0, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Crypto.SCrypt::LE_To_UInt32(System.Byte[],System.Int32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCrypt_LE_To_UInt32_m49A59044507027D95CA638CDF7C67442059CCF4D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ns2, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Crypto.SCrypt::SMix(System.UInt32[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCrypt_SMix_m6F36000A78DF0FBF6902B3B385B773BC7827982F (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___B0, int32_t ___BOff1, int32_t ___N2, int32_t ___r3, const RuntimeMethod* method) ;
// System.Object System.Array::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Crypto.SCrypt::BlockMix(System.UInt32[],System.UInt32[],System.UInt32[],System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCrypt_BlockMix_m5FCEA920F6897ADED9D5EE04C1D8E2E6ED4D86FB (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___B0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___X11, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___X22, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___Y3, int32_t ___r4, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Crypto.SCrypt::Xor(System.UInt32[],System.UInt32[],System.Int32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCrypt_Xor_m67CE628AF75EB4A985EE5B0F3AE6887E3EF47CC3 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___a0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___b1, int32_t ___bOff2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___output3, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Crypto.SCrypt::SalsaCore(System.Int32,System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCrypt_SalsaCore_m9C56F73A9F4A62F39690A912714BCD5BD0CCC5E6 (int32_t ___rounds0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___input1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x2, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Crypto.SCrypt::Clear(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCrypt_Clear_m9C8E80EB4E04EF3E6FB37ED6AA546C6369A91B9A (RuntimeArray* ___array0, const RuntimeMethod* method) ;
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
// System.Void Nethereum.KeyStore.InvalidKdfException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidKdfException__ctor_mCB1602A9FA69439AEE3CA2CD0046C72E7DB5C6D9 (InvalidKdfException_tEAC1417FAC4A1456AEEA8B11D856B90CFB886566* __this, String_t* ___kdf0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24B0B97B3E8D6A36FF26BD81423363B53D42F503);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___kdf0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral24B0B97B3E8D6A36FF26BD81423363B53D42F503, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_1, NULL);
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
// Nethereum.KeyStore.KeyStoreKdfChecker/KdfType Nethereum.KeyStore.KeyStoreKdfChecker::GetKeyStoreKdfType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyStoreKdfChecker_GetKeyStoreKdfType_mA3319D63885770AF51B6A09257DFFE7504A89528 (KeyStoreKdfChecker_t5660B10F5A8CC515511DA8EFA8144ED60F71271E* __this, String_t* ___json0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral964A115C9844FDC3CAB0DA4CB724F1C996223905);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3400C8DC0F81D38A7B6E87AE8E044D15A824F75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5C871F485807C4DC72F10C59B4C2BC67AEAAD47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEF710A7FE8B1F687BE0C4888B5002E9635CE519);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			String_t* L_0 = ___json0;
			JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_1;
			L_1 = JObject_Parse_mBC884661DD2708BA92BCE45E8C104924542A2D43(L_0, NULL);
			NullCheck(L_1);
			JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_2;
			L_2 = JObject_GetValue_m163EB7BE77699B79CB53035D84874159EBBBFE6F(L_1, _stringLiteralA3400C8DC0F81D38A7B6E87AE8E044D15A824F75, 5, NULL);
			NullCheck(L_2);
			JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_3;
			L_3 = VirtualFuncInvoker1< JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3*, RuntimeObject* >::Invoke(17 /* Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::get_Item(System.Object) */, L_2, _stringLiteral964A115C9844FDC3CAB0DA4CB724F1C996223905);
			String_t* L_4;
			L_4 = Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B(L_3, Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B_RuntimeMethod_var);
			V_0 = L_4;
			String_t* L_5 = V_0;
			bool L_6;
			L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteralC5C871F485807C4DC72F10C59B4C2BC67AEAAD47, NULL);
			if (!L_6)
			{
				goto IL_0032_1;
			}
		}
		{
			V_1 = 1;
			goto IL_0057;
		}

IL_0032_1:
		{
			String_t* L_7 = V_0;
			bool L_8;
			L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralDEF710A7FE8B1F687BE0C4888B5002E9635CE519, NULL);
			if (!L_8)
			{
				goto IL_0043_1;
			}
		}
		{
			V_1 = 0;
			goto IL_0057;
		}

IL_0043_1:
		{
			String_t* L_9 = V_0;
			InvalidKdfException_tEAC1417FAC4A1456AEEA8B11D856B90CFB886566* L_10 = (InvalidKdfException_tEAC1417FAC4A1456AEEA8B11D856B90CFB886566*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidKdfException_tEAC1417FAC4A1456AEEA8B11D856B90CFB886566_il2cpp_TypeInfo_var)));
			NullCheck(L_10);
			InvalidKdfException__ctor_mCB1602A9FA69439AEE3CA2CD0046C72E7DB5C6D9(L_10, L_9, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStoreKdfChecker_GetKeyStoreKdfType_mA3319D63885770AF51B6A09257DFFE7504A89528_RuntimeMethod_var)));
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004a;
		}
		throw e;
	}

CATCH_004a:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_11 = V_2;
		Exception_t* L_12 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4E0503318E1A14504625530B9F599F412D4836F7)), L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStoreKdfChecker_GetKeyStoreKdfType_mA3319D63885770AF51B6A09257DFFE7504A89528_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0057:
	{
		int32_t L_13 = V_1;
		return L_13;
	}
}
// System.Void Nethereum.KeyStore.KeyStoreKdfChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreKdfChecker__ctor_m3BA57A0DD4812D32648D34710EA0581DCF6100CA (KeyStoreKdfChecker_t5660B10F5A8CC515511DA8EFA8144ED60F71271E* __this, const RuntimeMethod* method) 
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
// System.Void Nethereum.KeyStore.KeyStorePbkdf2Service::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStorePbkdf2Service__ctor_m60CF3CF3AE63D8B5B4561B9DE729A9F7726C02B7 (KeyStorePbkdf2Service_t1705604F58CEC838C65896E38A3234F41E32D5F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStoreServiceBase_1__ctor_m2B9317BDD047080C586C77EA337CF831C48EEDB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyStoreServiceBase_1__ctor_m2B9317BDD047080C586C77EA337CF831C48EEDB7(__this, KeyStoreServiceBase_1__ctor_m2B9317BDD047080C586C77EA337CF831C48EEDB7_RuntimeMethod_var);
		return;
	}
}
// System.Void Nethereum.KeyStore.KeyStorePbkdf2Service::.ctor(Nethereum.KeyStore.Crypto.IRandomBytesGenerator,Nethereum.KeyStore.Crypto.KeyStoreCrypto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStorePbkdf2Service__ctor_m6473B68062575288229C9500D57490BEE0C21603 (KeyStorePbkdf2Service_t1705604F58CEC838C65896E38A3234F41E32D5F3* __this, RuntimeObject* ___randomBytesGenerator0, KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* ___keyStoreCrypto1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStoreServiceBase_1__ctor_mB7F663CB0CB174D0462D71405E7196CF2DF3F89C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___randomBytesGenerator0;
		KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* L_1 = ___keyStoreCrypto1;
		KeyStoreServiceBase_1__ctor_mB7F663CB0CB174D0462D71405E7196CF2DF3F89C(__this, L_0, L_1, KeyStoreServiceBase_1__ctor_mB7F663CB0CB174D0462D71405E7196CF2DF3F89C_RuntimeMethod_var);
		return;
	}
}
// System.Void Nethereum.KeyStore.KeyStorePbkdf2Service::.ctor(Nethereum.KeyStore.Crypto.IRandomBytesGenerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStorePbkdf2Service__ctor_m159A1C387AFAA0327B05B55760D3451DBD29B1E3 (KeyStorePbkdf2Service_t1705604F58CEC838C65896E38A3234F41E32D5F3* __this, RuntimeObject* ___randomBytesGenerator0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStoreServiceBase_1__ctor_mC65EE87EA26D2528D1E835882E37EB9364A1B93E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___randomBytesGenerator0;
		KeyStoreServiceBase_1__ctor_mC65EE87EA26D2528D1E835882E37EB9364A1B93E(__this, L_0, KeyStoreServiceBase_1__ctor_mC65EE87EA26D2528D1E835882E37EB9364A1B93E_RuntimeMethod_var);
		return;
	}
}
// System.Byte[] Nethereum.KeyStore.KeyStorePbkdf2Service::GenerateDerivedKey(System.String,System.Byte[],Nethereum.KeyStore.Model.Pbkdf2Params)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStorePbkdf2Service_GenerateDerivedKey_mD5D251BAB7776B7EA98FF925FC85D45F29307E13 (KeyStorePbkdf2Service_t1705604F58CEC838C65896E38A3234F41E32D5F3* __this, String_t* ___pasword0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt1, Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* ___kdfParams2, const RuntimeMethod* method) 
{
	{
		KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* L_0 = ((KeyStoreServiceBase_1_tA19093FFDF21CC23402CF786E1996BE7DF5182AE*)__this)->___KeyStoreCrypto_1;
		String_t* L_1 = ___pasword0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___salt1;
		Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* L_3 = ___kdfParams2;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Pbkdf2Params_get_Count_mC11B0427876CC79A0979C88487915DFA8960E03A_inline(L_3, NULL);
		Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* L_5 = ___kdfParams2;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = KdfParams_get_Dklen_m1E5547E75FFAD02C826CFDC8CD09AC6EAEEBDB14_inline(L_5, NULL);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = KeyStoreCrypto_GeneratePbkdf2Sha256DerivedKey_m6A66CF985ECAAC09F48F5A23B62D3EDFE918BB05(L_0, L_1, L_2, L_4, L_6, NULL);
		return L_7;
	}
}
// Nethereum.KeyStore.Model.Pbkdf2Params Nethereum.KeyStore.KeyStorePbkdf2Service::GetDefaultParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* KeyStorePbkdf2Service_GetDefaultParams_m1F66EB7CF3C985F481C933CF6614397C528284DA (KeyStorePbkdf2Service_t1705604F58CEC838C65896E38A3234F41E32D5F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral728977F71296CFAFD99E1AB9556CDB5900C1F9C7);
		s_Il2CppMethodInitialized = true;
	}
	{
		Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* L_0 = (Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D*)il2cpp_codegen_object_new(Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Pbkdf2Params__ctor_mFF835BB78C590FD34736CC991A9F375DEB02919A(L_0, NULL);
		Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* L_1 = L_0;
		NullCheck(L_1);
		KdfParams_set_Dklen_m8873AE7294C28118FDADC3F76AB3FCCA12ED0A9E_inline(L_1, ((int32_t)32), NULL);
		Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* L_2 = L_1;
		NullCheck(L_2);
		Pbkdf2Params_set_Count_mF6B58E39489D4C7F5E7B0D46282913C817BC95B2_inline(L_2, ((int32_t)262144), NULL);
		Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* L_3 = L_2;
		NullCheck(L_3);
		Pbkdf2Params_set_Prf_mC7BE10C0C3A3D9D57247516A9A435067FE1F3242_inline(L_3, _stringLiteral728977F71296CFAFD99E1AB9556CDB5900C1F9C7, NULL);
		return L_3;
	}
}
// Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params> Nethereum.KeyStore.KeyStorePbkdf2Service::DeserializeKeyStoreFromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* KeyStorePbkdf2Service_DeserializeKeyStoreFromJson_m10C016CFE5ABDA2E341EF96462BE1D89608D1B9B (KeyStorePbkdf2Service_t1705604F58CEC838C65896E38A3234F41E32D5F3* __this, String_t* ___json0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___json0;
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_1;
		L_1 = JsonKeyStorePbkdf2Serialiser_DeserialisePbkdf2_mCB032E6DDD55BEEEFCBE93C0763D73702D269D4D(L_0, NULL);
		return L_1;
	}
}
// System.String Nethereum.KeyStore.KeyStorePbkdf2Service::SerializeKeyStoreToJson(Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyStorePbkdf2Service_SerializeKeyStoreToJson_m48C5A8C3CFDDA3C7692352C603D45171188E0F91 (KeyStorePbkdf2Service_t1705604F58CEC838C65896E38A3234F41E32D5F3* __this, KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* ___keyStore0, const RuntimeMethod* method) 
{
	{
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_0 = ___keyStore0;
		String_t* L_1;
		L_1 = JsonKeyStorePbkdf2Serialiser_SerialisePbkdf2_m8922669ED62A520D7B2D3F5274BA257E7BDA6E32(L_0, NULL);
		return L_1;
	}
}
// System.Byte[] Nethereum.KeyStore.KeyStorePbkdf2Service::DecryptKeyStore(System.String,Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStorePbkdf2Service_DecryptKeyStore_mF3218093BBCDFC273D07974126FB8D9C0897335D (KeyStorePbkdf2Service_t1705604F58CEC838C65896E38A3234F41E32D5F3* __this, String_t* ___password0, KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* ___keyStore1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_CipherParams_mA907221C1FBFA60C8B7594E33B18EFFB464C74AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_CipherText_m52A772F5318629770218E77F43791D3CBF6FC3FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_Kdfparams_m581A8A3832F579C51A44AADA45E502A89D50C19D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_Mac_m80EF43FB854AA550B53D0032F728DF0146193A9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___password0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStorePbkdf2Service_DecryptKeyStore_mF3218093BBCDFC273D07974126FB8D9C0897335D_RuntimeMethod_var)));
	}

IL_000e:
	{
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_2 = ___keyStore1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB144512DA9AA6B91993CE8E07E163EA3FF0A440A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStorePbkdf2Service_DecryptKeyStore_mF3218093BBCDFC273D07974126FB8D9C0897335D_RuntimeMethod_var)));
	}

IL_001c:
	{
		KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* L_4 = ((KeyStoreServiceBase_1_tA19093FFDF21CC23402CF786E1996BE7DF5182AE*)__this)->___KeyStoreCrypto_1;
		String_t* L_5 = ___password0;
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_6 = ___keyStore1;
		NullCheck(L_6);
		CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* L_7;
		L_7 = KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_inline(L_6, KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = CryptoInfo_1_get_Mac_m80EF43FB854AA550B53D0032F728DF0146193A9D_inline(L_7, CryptoInfo_1_get_Mac_m80EF43FB854AA550B53D0032F728DF0146193A9D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_8, NULL);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_10 = ___keyStore1;
		NullCheck(L_10);
		CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* L_11;
		L_11 = KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_inline(L_10, KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		NullCheck(L_11);
		CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* L_12;
		L_12 = CryptoInfo_1_get_CipherParams_mA907221C1FBFA60C8B7594E33B18EFFB464C74AC_inline(L_11, CryptoInfo_1_get_CipherParams_mA907221C1FBFA60C8B7594E33B18EFFB464C74AC_RuntimeMethod_var);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = CipherParams_get_Iv_mACA12BCFA8DA0C8DF791A05028119A5A14F4CBC4_inline(L_12, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_13, NULL);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_15 = ___keyStore1;
		NullCheck(L_15);
		CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* L_16;
		L_16 = KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_inline(L_15, KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = CryptoInfo_1_get_CipherText_m52A772F5318629770218E77F43791D3CBF6FC3FA_inline(L_16, CryptoInfo_1_get_CipherText_m52A772F5318629770218E77F43791D3CBF6FC3FA_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_17, NULL);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_19 = ___keyStore1;
		NullCheck(L_19);
		CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* L_20;
		L_20 = KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_inline(L_19, KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		NullCheck(L_20);
		Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* L_21;
		L_21 = CryptoInfo_1_get_Kdfparams_m581A8A3832F579C51A44AADA45E502A89D50C19D_inline(L_20, CryptoInfo_1_get_Kdfparams_m581A8A3832F579C51A44AADA45E502A89D50C19D_RuntimeMethod_var);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = Pbkdf2Params_get_Count_mC11B0427876CC79A0979C88487915DFA8960E03A_inline(L_21, NULL);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_23 = ___keyStore1;
		NullCheck(L_23);
		CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* L_24;
		L_24 = KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_inline(L_23, KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		NullCheck(L_24);
		Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* L_25;
		L_25 = CryptoInfo_1_get_Kdfparams_m581A8A3832F579C51A44AADA45E502A89D50C19D_inline(L_24, CryptoInfo_1_get_Kdfparams_m581A8A3832F579C51A44AADA45E502A89D50C19D_RuntimeMethod_var);
		NullCheck(L_25);
		String_t* L_26;
		L_26 = KdfParams_get_Salt_mBC1DA50823694582BA754AAAB3F2C098C024205B_inline(L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
		L_27 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_26, NULL);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_28 = ___keyStore1;
		NullCheck(L_28);
		CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* L_29;
		L_29 = KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_inline(L_28, KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		NullCheck(L_29);
		Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* L_30;
		L_30 = CryptoInfo_1_get_Kdfparams_m581A8A3832F579C51A44AADA45E502A89D50C19D_inline(L_29, CryptoInfo_1_get_Kdfparams_m581A8A3832F579C51A44AADA45E502A89D50C19D_RuntimeMethod_var);
		NullCheck(L_30);
		int32_t L_31;
		L_31 = KdfParams_get_Dklen_m1E5547E75FFAD02C826CFDC8CD09AC6EAEEBDB14_inline(L_30, NULL);
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32;
		L_32 = KeyStoreCrypto_DecryptPbkdf2Sha256_m463E4D366891F0379AEF5AB08590E45DC666A228(L_4, L_5, L_9, L_14, L_18, L_22, L_27, L_31, NULL);
		return L_32;
	}
}
// System.String Nethereum.KeyStore.KeyStorePbkdf2Service::GetKdfType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyStorePbkdf2Service_GetKdfType_m667E5872AC46D31608654F30741AFDE70630B1D2 (KeyStorePbkdf2Service_t1705604F58CEC838C65896E38A3234F41E32D5F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5C871F485807C4DC72F10C59B4C2BC67AEAAD47);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralC5C871F485807C4DC72F10C59B4C2BC67AEAAD47;
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
// System.Void Nethereum.KeyStore.KeyStoreScryptService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreScryptService__ctor_mE569E0226BEA6594C280E2F2CE16C21C87C956E5 (KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStoreServiceBase_1__ctor_m1DBE46B208189092A8D3C1548EF21969F6920922_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyStoreServiceBase_1__ctor_m1DBE46B208189092A8D3C1548EF21969F6920922(__this, KeyStoreServiceBase_1__ctor_m1DBE46B208189092A8D3C1548EF21969F6920922_RuntimeMethod_var);
		return;
	}
}
// System.Void Nethereum.KeyStore.KeyStoreScryptService::.ctor(Nethereum.KeyStore.Crypto.IRandomBytesGenerator,Nethereum.KeyStore.Crypto.KeyStoreCrypto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreScryptService__ctor_m47C9FE8AC6F06430EC711162B88F08DDE96FA4E3 (KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D* __this, RuntimeObject* ___randomBytesGenerator0, KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* ___keyStoreCrypto1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStoreServiceBase_1__ctor_m3215CD0F957EBA11B41991F44742028C01549BF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___randomBytesGenerator0;
		KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* L_1 = ___keyStoreCrypto1;
		KeyStoreServiceBase_1__ctor_m3215CD0F957EBA11B41991F44742028C01549BF8(__this, L_0, L_1, KeyStoreServiceBase_1__ctor_m3215CD0F957EBA11B41991F44742028C01549BF8_RuntimeMethod_var);
		return;
	}
}
// System.Void Nethereum.KeyStore.KeyStoreScryptService::.ctor(Nethereum.KeyStore.Crypto.IRandomBytesGenerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreScryptService__ctor_m32CB67F6070BED367100C3788D6827BD29D73A90 (KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D* __this, RuntimeObject* ___randomBytesGenerator0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStoreServiceBase_1__ctor_m53322BC91A0B7B2702DA1706BA86057D58F93763_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___randomBytesGenerator0;
		KeyStoreServiceBase_1__ctor_m53322BC91A0B7B2702DA1706BA86057D58F93763(__this, L_0, KeyStoreServiceBase_1__ctor_m53322BC91A0B7B2702DA1706BA86057D58F93763_RuntimeMethod_var);
		return;
	}
}
// System.Byte[] Nethereum.KeyStore.KeyStoreScryptService::GenerateDerivedKey(System.String,System.Byte[],Nethereum.KeyStore.Model.ScryptParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreScryptService_GenerateDerivedKey_mA5067DA8F651D23C272DEA33D511463D9057FF40 (KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D* __this, String_t* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt1, ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* ___kdfParams2, const RuntimeMethod* method) 
{
	{
		KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* L_0 = ((KeyStoreServiceBase_1_t83E72AC62855C439A5D01F4E5A00BB6BCA2150D0*)__this)->___KeyStoreCrypto_1;
		KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* L_1 = ((KeyStoreServiceBase_1_t83E72AC62855C439A5D01F4E5A00BB6BCA2150D0*)__this)->___KeyStoreCrypto_1;
		String_t* L_2 = ___password0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = KeyStoreCrypto_GetPasswordAsBytes_mA2E8301D37E8A83B376BAF88F222636728A9AF93(L_1, L_2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___salt1;
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_5 = ___kdfParams2;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = ScryptParams_get_N_mE57FDEFFC05A1BEE6E1D2AEC8E0768206BEE49E2_inline(L_5, NULL);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_7 = ___kdfParams2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = ScryptParams_get_R_mBBE1A0B0B5E9B5E32A3E798FAC0766775DDF186E_inline(L_7, NULL);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_9 = ___kdfParams2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = ScryptParams_get_P_mF431C35431D06FDC71DF89E3BCA31DB14A9C880E_inline(L_9, NULL);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_11 = ___kdfParams2;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = KdfParams_get_Dklen_m1E5547E75FFAD02C826CFDC8CD09AC6EAEEBDB14_inline(L_11, NULL);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = KeyStoreCrypto_GenerateDerivedScryptKey_mD84A7413EE9B46393273F5D0B8E928AFFDD4F372(L_0, L_3, L_4, L_6, L_8, L_10, L_12, (bool)0, NULL);
		return L_13;
	}
}
// Nethereum.KeyStore.Model.ScryptParams Nethereum.KeyStore.KeyStoreScryptService::GetDefaultParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* KeyStoreScryptService_GetDefaultParams_m5C93B9C95AC2C4C1D9D2717BE0EFCCEF70E4AEF1 (KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_0 = (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779*)il2cpp_codegen_object_new(ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ScryptParams__ctor_m5DC4BDC83AC01594CA6FCBED4B0AE865F33229FD(L_0, NULL);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_1 = L_0;
		NullCheck(L_1);
		KdfParams_set_Dklen_m8873AE7294C28118FDADC3F76AB3FCCA12ED0A9E_inline(L_1, ((int32_t)32), NULL);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_2 = L_1;
		NullCheck(L_2);
		ScryptParams_set_N_mD7A43E5EAAB1D1C3D9AFE496F7ED17549AC7D670_inline(L_2, ((int32_t)262144), NULL);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_3 = L_2;
		NullCheck(L_3);
		ScryptParams_set_R_m9AD9236A19430A9B44EFA3301D417E7F665FDAAE_inline(L_3, 1, NULL);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_4 = L_3;
		NullCheck(L_4);
		ScryptParams_set_P_m54B8987AEE116A5F01F276FB41F5B7BD6CE93FD7_inline(L_4, 8, NULL);
		return L_4;
	}
}
// Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams> Nethereum.KeyStore.KeyStoreScryptService::DeserializeKeyStoreFromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* KeyStoreScryptService_DeserializeKeyStoreFromJson_mBF41D80D7E551C8750D75C84298C872ED83C36CA (KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D* __this, String_t* ___json0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___json0;
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_1;
		L_1 = JsonKeyStoreScryptSerialiser_DeserialiseScrypt_m444B7A8F3A8E09938DAF4264B6A809D3281F20FF(L_0, NULL);
		return L_1;
	}
}
// System.String Nethereum.KeyStore.KeyStoreScryptService::SerializeKeyStoreToJson(Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyStoreScryptService_SerializeKeyStoreToJson_m782AE252062D9372F3FB3AA790371C195D405E90 (KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D* __this, KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* ___keyStore0, const RuntimeMethod* method) 
{
	{
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_0 = ___keyStore0;
		String_t* L_1;
		L_1 = JsonKeyStoreScryptSerialiser_SerialiseScrypt_m021A1C32895A9DB278D67F315F4ACBCBC2944944(L_0, NULL);
		return L_1;
	}
}
// System.Byte[] Nethereum.KeyStore.KeyStoreScryptService::DecryptKeyStore(System.String,Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreScryptService_DecryptKeyStore_m97CE221D0D9D9ED305FD4B0843F9D62209E72909 (KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D* __this, String_t* ___password0, KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* ___keyStore1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_CipherParams_mCE5052AB3E08620D0675291DD4A9F0B453F1DC37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_CipherText_m0D0D495D51ACCBD21C7BA3075D96E6E9E4A6BE0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_Mac_m397668EA83950C2D02123C4FCBC665015AD1ACD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___password0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStoreScryptService_DecryptKeyStore_m97CE221D0D9D9ED305FD4B0843F9D62209E72909_RuntimeMethod_var)));
	}

IL_000e:
	{
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_2 = ___keyStore1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB144512DA9AA6B91993CE8E07E163EA3FF0A440A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStoreScryptService_DecryptKeyStore_m97CE221D0D9D9ED305FD4B0843F9D62209E72909_RuntimeMethod_var)));
	}

IL_001c:
	{
		KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* L_4 = ((KeyStoreServiceBase_1_t83E72AC62855C439A5D01F4E5A00BB6BCA2150D0*)__this)->___KeyStoreCrypto_1;
		String_t* L_5 = ___password0;
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_6 = ___keyStore1;
		NullCheck(L_6);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_7;
		L_7 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_6, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = CryptoInfo_1_get_Mac_m397668EA83950C2D02123C4FCBC665015AD1ACD8_inline(L_7, CryptoInfo_1_get_Mac_m397668EA83950C2D02123C4FCBC665015AD1ACD8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_8, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_10 = ___keyStore1;
		NullCheck(L_10);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_11;
		L_11 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_10, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		NullCheck(L_11);
		CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* L_12;
		L_12 = CryptoInfo_1_get_CipherParams_mCE5052AB3E08620D0675291DD4A9F0B453F1DC37_inline(L_11, CryptoInfo_1_get_CipherParams_mCE5052AB3E08620D0675291DD4A9F0B453F1DC37_RuntimeMethod_var);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = CipherParams_get_Iv_mACA12BCFA8DA0C8DF791A05028119A5A14F4CBC4_inline(L_12, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_13, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_15 = ___keyStore1;
		NullCheck(L_15);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_16;
		L_16 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_15, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = CryptoInfo_1_get_CipherText_m0D0D495D51ACCBD21C7BA3075D96E6E9E4A6BE0B_inline(L_16, CryptoInfo_1_get_CipherText_m0D0D495D51ACCBD21C7BA3075D96E6E9E4A6BE0B_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_17, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_19 = ___keyStore1;
		NullCheck(L_19);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_20;
		L_20 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_19, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		NullCheck(L_20);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_21;
		L_21 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_20, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = ScryptParams_get_N_mE57FDEFFC05A1BEE6E1D2AEC8E0768206BEE49E2_inline(L_21, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_23 = ___keyStore1;
		NullCheck(L_23);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_24;
		L_24 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_23, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		NullCheck(L_24);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_25;
		L_25 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_24, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		NullCheck(L_25);
		int32_t L_26;
		L_26 = ScryptParams_get_P_mF431C35431D06FDC71DF89E3BCA31DB14A9C880E_inline(L_25, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_27 = ___keyStore1;
		NullCheck(L_27);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_28;
		L_28 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_27, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		NullCheck(L_28);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_29;
		L_29 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_28, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		NullCheck(L_29);
		int32_t L_30;
		L_30 = ScryptParams_get_R_mBBE1A0B0B5E9B5E32A3E798FAC0766775DDF186E_inline(L_29, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_31 = ___keyStore1;
		NullCheck(L_31);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_32;
		L_32 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_31, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		NullCheck(L_32);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_33;
		L_33 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_32, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		NullCheck(L_33);
		String_t* L_34;
		L_34 = KdfParams_get_Salt_mBC1DA50823694582BA754AAAB3F2C098C024205B_inline(L_33, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35;
		L_35 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_34, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_36 = ___keyStore1;
		NullCheck(L_36);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_37;
		L_37 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_36, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		NullCheck(L_37);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_38;
		L_38 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_37, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		NullCheck(L_38);
		int32_t L_39;
		L_39 = KdfParams_get_Dklen_m1E5547E75FFAD02C826CFDC8CD09AC6EAEEBDB14_inline(L_38, NULL);
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40;
		L_40 = KeyStoreCrypto_DecryptScrypt_m828C9ED4E8F3A128B449D0AA91CC498B2EBE6524(L_4, L_5, L_9, L_14, L_18, L_22, L_26, L_30, L_35, L_39, NULL);
		return L_40;
	}
}
// System.String Nethereum.KeyStore.KeyStoreScryptService::GetKdfType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyStoreScryptService_GetKdfType_m8636618BBCB5C14E23C53B98FFE54644B5A455E7 (KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEF710A7FE8B1F687BE0C4888B5002E9635CE519);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralDEF710A7FE8B1F687BE0C4888B5002E9635CE519;
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
// System.Void Nethereum.KeyStore.KeyStoreService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreService__ctor_mAE53375369473A712AC46E824EB9099A0FED079F (KeyStoreService_t24579F556F75E7309588A4D7766978E16F2FC519* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStoreKdfChecker_t5660B10F5A8CC515511DA8EFA8144ED60F71271E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStorePbkdf2Service_t1705604F58CEC838C65896E38A3234F41E32D5F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		KeyStoreKdfChecker_t5660B10F5A8CC515511DA8EFA8144ED60F71271E* L_0 = (KeyStoreKdfChecker_t5660B10F5A8CC515511DA8EFA8144ED60F71271E*)il2cpp_codegen_object_new(KeyStoreKdfChecker_t5660B10F5A8CC515511DA8EFA8144ED60F71271E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		KeyStoreKdfChecker__ctor_m3BA57A0DD4812D32648D34710EA0581DCF6100CA(L_0, NULL);
		__this->____keyStoreKdfChecker_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyStoreKdfChecker_0), (void*)L_0);
		KeyStorePbkdf2Service_t1705604F58CEC838C65896E38A3234F41E32D5F3* L_1 = (KeyStorePbkdf2Service_t1705604F58CEC838C65896E38A3234F41E32D5F3*)il2cpp_codegen_object_new(KeyStorePbkdf2Service_t1705604F58CEC838C65896E38A3234F41E32D5F3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		KeyStorePbkdf2Service__ctor_m60CF3CF3AE63D8B5B4561B9DE729A9F7726C02B7(L_1, NULL);
		__this->____keyStorePbkdf2Service_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyStorePbkdf2Service_2), (void*)L_1);
		KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D* L_2 = (KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D*)il2cpp_codegen_object_new(KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		KeyStoreScryptService__ctor_mE569E0226BEA6594C280E2F2CE16C21C87C956E5(L_2, NULL);
		__this->____keyStoreScryptService_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyStoreScryptService_1), (void*)L_2);
		return;
	}
}
// System.Void Nethereum.KeyStore.KeyStoreService::.ctor(Nethereum.KeyStore.KeyStoreKdfChecker,Nethereum.KeyStore.KeyStoreScryptService,Nethereum.KeyStore.KeyStorePbkdf2Service)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreService__ctor_m69E88F370B4EFA99788B32DB7FED5CEBFB32E6E9 (KeyStoreService_t24579F556F75E7309588A4D7766978E16F2FC519* __this, KeyStoreKdfChecker_t5660B10F5A8CC515511DA8EFA8144ED60F71271E* ___keyStoreKdfChecker0, KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D* ___keyStoreScryptService1, KeyStorePbkdf2Service_t1705604F58CEC838C65896E38A3234F41E32D5F3* ___keyStorePbkdf2Service2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		KeyStoreKdfChecker_t5660B10F5A8CC515511DA8EFA8144ED60F71271E* L_0 = ___keyStoreKdfChecker0;
		__this->____keyStoreKdfChecker_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyStoreKdfChecker_0), (void*)L_0);
		KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D* L_1 = ___keyStoreScryptService1;
		__this->____keyStoreScryptService_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyStoreScryptService_1), (void*)L_1);
		KeyStorePbkdf2Service_t1705604F58CEC838C65896E38A3234F41E32D5F3* L_2 = ___keyStorePbkdf2Service2;
		__this->____keyStorePbkdf2Service_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyStorePbkdf2Service_2), (void*)L_2);
		return;
	}
}
// System.String Nethereum.KeyStore.KeyStoreService::GetAddressFromKeyStore(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyStoreService_GetAddressFromKeyStore_mC7C96A6B89A463F6B7F9FBBD97DB7D35A2853D6F (KeyStoreService_t24579F556F75E7309588A4D7766978E16F2FC519* __this, String_t* ___json0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___json0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral43187C90BBB5DFB063A95733C9BD65ECD25A2E84)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStoreService_GetAddressFromKeyStore_mC7C96A6B89A463F6B7F9FBBD97DB7D35A2853D6F_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___json0;
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_3;
		L_3 = JObject_Parse_mBC884661DD2708BA92BCE45E8C104924542A2D43(L_2, NULL);
		NullCheck(L_3);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_4;
		L_4 = JObject_get_Item_m889A29E8FCEA531AF829407F208DD05F0108C50B(L_3, _stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057, NULL);
		String_t* L_5;
		L_5 = Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B(L_4, Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B_RuntimeMethod_var);
		return L_5;
	}
}
// System.String Nethereum.KeyStore.KeyStoreService::GenerateUTCFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyStoreService_GenerateUTCFileName_m2122563B05C43DF0515DB2C0E5A1CF07EB3CFC54 (KeyStoreService_t24579F556F75E7309588A4D7766978E16F2FC519* __this, String_t* ___address0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B48258DC45DFC48F3BEAEEED4F14D3D02CD6284);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99C165894B2900048144F5DEF682937FE73CA541);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___address0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStoreService_GenerateUTCFileName_m2122563B05C43DF0515DB2C0E5A1CF07EB3CFC54_RuntimeMethod_var)));
	}

IL_000e:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_0), _stringLiteral99C165894B2900048144F5DEF682937FE73CA541, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_3, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, NULL);
		String_t* L_5 = ___address0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_5, _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		String_t* L_7;
		L_7 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral1B48258DC45DFC48F3BEAEEED4F14D3D02CD6284, L_4, _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA, L_6, NULL);
		return L_7;
	}
}
// System.Byte[] Nethereum.KeyStore.KeyStoreService::DecryptKeyStoreFromJson(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreService_DecryptKeyStoreFromJson_mAA38D24725757DAE8326E6E04E7B09A5E619435F (KeyStoreService_t24579F556F75E7309588A4D7766978E16F2FC519* __this, String_t* ___password0, String_t* ___json1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStoreServiceBase_1_DecryptKeyStoreFromJson_m21337304B9D3DD06B25C3FC306D0850E5D9D4EF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStoreServiceBase_1_DecryptKeyStoreFromJson_m402CAF8FA7C06395F841F59F24C27AF4BA050C7E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___password0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStoreService_DecryptKeyStoreFromJson_mAA38D24725757DAE8326E6E04E7B09A5E619435F_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___json1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral43187C90BBB5DFB063A95733C9BD65ECD25A2E84)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStoreService_DecryptKeyStoreFromJson_mAA38D24725757DAE8326E6E04E7B09A5E619435F_RuntimeMethod_var)));
	}

IL_001c:
	{
		KeyStoreKdfChecker_t5660B10F5A8CC515511DA8EFA8144ED60F71271E* L_4 = __this->____keyStoreKdfChecker_0;
		String_t* L_5 = ___json1;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = KeyStoreKdfChecker_GetKeyStoreKdfType_mA3319D63885770AF51B6A09257DFFE7504A89528(L_4, L_5, NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_003b;
		}
	}
	{
		KeyStorePbkdf2Service_t1705604F58CEC838C65896E38A3234F41E32D5F3* L_8 = __this->____keyStorePbkdf2Service_2;
		String_t* L_9 = ___password0;
		String_t* L_10 = ___json1;
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = KeyStoreServiceBase_1_DecryptKeyStoreFromJson_m402CAF8FA7C06395F841F59F24C27AF4BA050C7E(L_8, L_9, L_10, KeyStoreServiceBase_1_DecryptKeyStoreFromJson_m402CAF8FA7C06395F841F59F24C27AF4BA050C7E_RuntimeMethod_var);
		return L_11;
	}

IL_003b:
	{
		int32_t L_12 = V_0;
		if (L_12)
		{
			goto IL_004c;
		}
	}
	{
		KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D* L_13 = __this->____keyStoreScryptService_1;
		String_t* L_14 = ___password0;
		String_t* L_15 = ___json1;
		NullCheck(L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = KeyStoreServiceBase_1_DecryptKeyStoreFromJson_m21337304B9D3DD06B25C3FC306D0850E5D9D4EF0(L_13, L_14, L_15, KeyStoreServiceBase_1_DecryptKeyStoreFromJson_m21337304B9D3DD06B25C3FC306D0850E5D9D4EF0_RuntimeMethod_var);
		return L_16;
	}

IL_004c:
	{
		Exception_t* L_17 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9CBB35F28A07682E1B5EF20C0A52D591F38201CB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStoreService_DecryptKeyStoreFromJson_mAA38D24725757DAE8326E6E04E7B09A5E619435F_RuntimeMethod_var)));
	}
}
// System.String Nethereum.KeyStore.KeyStoreService::EncryptAndGenerateDefaultKeyStoreAsJson(System.String,System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyStoreService_EncryptAndGenerateDefaultKeyStoreAsJson_m5FCE405D589A3ED2AEBF0DA7559C15535BFFE751 (KeyStoreService_t24579F556F75E7309588A4D7766978E16F2FC519* __this, String_t* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key1, String_t* ___address2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStoreServiceBase_1_EncryptAndGenerateKeyStoreAsJson_m5D1F86C4AC4FB0F3AEF7AAE097FED970100A2DA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___password0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStoreService_EncryptAndGenerateDefaultKeyStoreAsJson_m5FCE405D589A3ED2AEBF0DA7559C15535BFFE751_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___address2;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStoreService_EncryptAndGenerateDefaultKeyStoreAsJson_m5FCE405D589A3ED2AEBF0DA7559C15535BFFE751_RuntimeMethod_var)));
	}

IL_001c:
	{
		KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D* L_4 = __this->____keyStoreScryptService_1;
		String_t* L_5 = ___password0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___key1;
		String_t* L_7 = ___address2;
		NullCheck(L_4);
		String_t* L_8;
		L_8 = KeyStoreServiceBase_1_EncryptAndGenerateKeyStoreAsJson_m5D1F86C4AC4FB0F3AEF7AAE097FED970100A2DA8(L_4, L_5, L_6, L_7, KeyStoreServiceBase_1_EncryptAndGenerateKeyStoreAsJson_m5D1F86C4AC4FB0F3AEF7AAE097FED970100A2DA8_RuntimeMethod_var);
		return L_8;
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
// System.Void Nethereum.KeyStore.Model.CipherParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherParams__ctor_m6EF7551DAA09455A6D0CB9B5E98BA76CCD98072A (CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Nethereum.KeyStore.Model.CipherParams::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherParams__ctor_mF3F9808A4E1C650EE3E5E10FB57455CC5FD5E58E (CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___iv0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_0, (bool)0, NULL);
		CipherParams_set_Iv_mE77D6319BE01333E7B3F6F7F98453DABAE5BB6C6_inline(__this, L_1, NULL);
		return;
	}
}
// System.String Nethereum.KeyStore.Model.CipherParams::get_Iv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CipherParams_get_Iv_mACA12BCFA8DA0C8DF791A05028119A5A14F4CBC4 (CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CIvU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.Model.CipherParams::set_Iv(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherParams_set_Iv_mE77D6319BE01333E7B3F6F7F98453DABAE5BB6C6 (CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CIvU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIvU3Ek__BackingField_0), (void*)L_0);
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
// System.Int32 Nethereum.KeyStore.Model.KdfParams::get_Dklen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KdfParams_get_Dklen_m1E5547E75FFAD02C826CFDC8CD09AC6EAEEBDB14 (KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDklenU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.Model.KdfParams::set_Dklen(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KdfParams_set_Dklen_m8873AE7294C28118FDADC3F76AB3FCCA12ED0A9E (KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CDklenU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String Nethereum.KeyStore.Model.KdfParams::get_Salt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KdfParams_get_Salt_mBC1DA50823694582BA754AAAB3F2C098C024205B (KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSaltU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.Model.KdfParams::set_Salt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KdfParams_set_Salt_m578F3DA59E3C91B1C70F13793C6926210CE139F7 (KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CSaltU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSaltU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.KeyStore.Model.KdfParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KdfParams__ctor_m39CCECF77A608644CB36BBBA3081362363BFF843 (KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB* __this, const RuntimeMethod* method) 
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
// System.Int32 Nethereum.KeyStore.Model.Pbkdf2Params::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pbkdf2Params_get_Count_mC11B0427876CC79A0979C88487915DFA8960E03A (Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCountU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.Model.Pbkdf2Params::set_Count(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pbkdf2Params_set_Count_mF6B58E39489D4C7F5E7B0D46282913C817BC95B2 (Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CCountU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String Nethereum.KeyStore.Model.Pbkdf2Params::get_Prf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Pbkdf2Params_get_Prf_m452DEB151B6B91A6F85AB4335A1E9FE9792B97B0 (Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPrfU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.Model.Pbkdf2Params::set_Prf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pbkdf2Params_set_Prf_mC7BE10C0C3A3D9D57247516A9A435067FE1F3242 (Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CPrfU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPrfU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.KeyStore.Model.Pbkdf2Params::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pbkdf2Params__ctor_mFF835BB78C590FD34736CC991A9F375DEB02919A (Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* __this, const RuntimeMethod* method) 
{
	{
		KdfParams__ctor_m39CCECF77A608644CB36BBBA3081362363BFF843(__this, NULL);
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
// System.Int32 Nethereum.KeyStore.Model.ScryptParams::get_N()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScryptParams_get_N_mE57FDEFFC05A1BEE6E1D2AEC8E0768206BEE49E2 (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CNU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.Model.ScryptParams::set_N(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptParams_set_N_mD7A43E5EAAB1D1C3D9AFE496F7ED17549AC7D670 (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CNU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 Nethereum.KeyStore.Model.ScryptParams::get_R()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScryptParams_get_R_mBBE1A0B0B5E9B5E32A3E798FAC0766775DDF186E (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CRU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.Model.ScryptParams::set_R(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptParams_set_R_m9AD9236A19430A9B44EFA3301D417E7F665FDAAE (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CRU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 Nethereum.KeyStore.Model.ScryptParams::get_P()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScryptParams_get_P_mF431C35431D06FDC71DF89E3BCA31DB14A9C880E (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CPU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.Model.ScryptParams::set_P(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptParams_set_P_m54B8987AEE116A5F01F276FB41F5B7BD6CE93FD7 (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CPU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void Nethereum.KeyStore.Model.ScryptParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptParams__ctor_m5DC4BDC83AC01594CA6FCBED4B0AE865F33229FD (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, const RuntimeMethod* method) 
{
	{
		KdfParams__ctor_m39CCECF77A608644CB36BBBA3081362363BFF843(__this, NULL);
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
// System.String Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO::get_iv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CipherParamsDTO_get_iv_m9A9BB6EC013B70B8EE1542B30F8644D520FEE92C (CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CivU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO::set_iv(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherParamsDTO_set_iv_mAA82EE8F95D570A32B28DDB5D137E452547E1447 (CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CivU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CivU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherParamsDTO__ctor_m3A7C44114C8F04E69B34C05E366716D7C18066BB (CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* __this, const RuntimeMethod* method) 
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
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoInfoDTOBase__ctor_m37903E098FB857B1E4AD7CF702F9B6ACA53A6789 (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* L_0 = (CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C*)il2cpp_codegen_object_new(CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CipherParamsDTO__ctor_m3A7C44114C8F04E69B34C05E366716D7C18066BB(L_0, NULL);
		CryptoInfoDTOBase_set_cipherparams_mE014108E074C5803596A0CE491004920054A7A86_inline(__this, L_0, NULL);
		return;
	}
}
// System.String Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::get_cipher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CryptoInfoDTOBase_get_cipher_mC2254AEF9DABAE8647851B32135596ED041004D7 (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CcipherU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::set_cipher(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_cipher_m577997203D05BD47C1F03175A176CEE47468A563 (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CcipherU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcipherU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::get_cipherText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CryptoInfoDTOBase_get_cipherText_mCA4F7FEE19C44BB4E20FF7B4D06E6F9832CC2DEF (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CcipherTextU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::set_cipherText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_cipherText_m100CA8B4796B16C2C927A56C894D18F3B354DC03 (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CcipherTextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcipherTextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::get_cipherparams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* CryptoInfoDTOBase_get_cipherparams_mE9D29F3332F2FC754DE4C29BC8C183F08A389F77 (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) 
{
	{
		CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* L_0 = __this->___U3CcipherparamsU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::set_cipherparams(Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_cipherparams_mE014108E074C5803596A0CE491004920054A7A86 (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* ___value0, const RuntimeMethod* method) 
{
	{
		CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* L_0 = ___value0;
		__this->___U3CcipherparamsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcipherparamsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::get_kdf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CryptoInfoDTOBase_get_kdf_m37F91BCF553659BC936ACA04FBE68BAD0AD09703 (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CkdfU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::set_kdf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_kdf_m0CE24ACCEAD963F6D649715EFAB53CE0B3BD7F54 (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CkdfU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CkdfU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::get_mac()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CryptoInfoDTOBase_get_mac_m832D5DAE6B8D34645CB12D6C1EF621E8247053DB (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CmacU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::set_mac(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_mac_m8C7197F81B08179424DDC30A8D72413D82D3CC54 (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CmacU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmacU3Ek__BackingField_4), (void*)L_0);
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
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoPbkdf2DTO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoInfoPbkdf2DTO__ctor_mF09BE01088667CDB3633838BEC8D6C57C50F72AD (CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CryptoInfoDTOBase__ctor_m37903E098FB857B1E4AD7CF702F9B6ACA53A6789(__this, NULL);
		Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* L_0 = (Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323*)il2cpp_codegen_object_new(Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Pbkdf2ParamsDTO__ctor_m020C89B6B463C246BA058B1A93C7977FE6B376FE(L_0, NULL);
		CryptoInfoPbkdf2DTO_set_kdfparams_m164610BB3A75FEF212B50C70F5E842DB0941319F_inline(__this, L_0, NULL);
		return;
	}
}
// Nethereum.KeyStore.JsonDeserialisation.Pbkdf2ParamsDTO Nethereum.KeyStore.JsonDeserialisation.CryptoInfoPbkdf2DTO::get_kdfparams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* CryptoInfoPbkdf2DTO_get_kdfparams_mF0404BA3404C382131A188BCD6544C68FFCFAD03 (CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* __this, const RuntimeMethod* method) 
{
	{
		Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* L_0 = __this->___U3CkdfparamsU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoPbkdf2DTO::set_kdfparams(Nethereum.KeyStore.JsonDeserialisation.Pbkdf2ParamsDTO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoInfoPbkdf2DTO_set_kdfparams_m164610BB3A75FEF212B50C70F5E842DB0941319F (CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* __this, Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* ___value0, const RuntimeMethod* method) 
{
	{
		Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* L_0 = ___value0;
		__this->___U3CkdfparamsU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CkdfparamsU3Ek__BackingField_5), (void*)L_0);
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
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoInfoScryptDTO__ctor_m4D5FE44A524F51AB6585157B0D17B6B135ECB074 (CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CryptoInfoDTOBase__ctor_m37903E098FB857B1E4AD7CF702F9B6ACA53A6789(__this, NULL);
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_0 = (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61*)il2cpp_codegen_object_new(ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ScryptParamsDTO__ctor_m44F6BFB85D6013B5CC771EF78AB158D283A58CDD(L_0, NULL);
		CryptoInfoScryptDTO_set_kdfparams_mD261CED055A2C04A72FAFF40AE3C420DFAC1483B_inline(__this, L_0, NULL);
		return;
	}
}
// Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO::get_kdfparams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* CryptoInfoScryptDTO_get_kdfparams_m88558053C3D05D95A823EC4DB490A6F85518808A (CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* __this, const RuntimeMethod* method) 
{
	{
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_0 = __this->___U3CkdfparamsU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO::set_kdfparams(Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoInfoScryptDTO_set_kdfparams_mD261CED055A2C04A72FAFF40AE3C420DFAC1483B (CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* __this, ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* ___value0, const RuntimeMethod* method) 
{
	{
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_0 = ___value0;
		__this->___U3CkdfparamsU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CkdfparamsU3Ek__BackingField_5), (void*)L_0);
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
// System.String Nethereum.KeyStore.JsonDeserialisation.JsonKeyStorePbkdf2Serialiser::SerialisePbkdf2(Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonKeyStorePbkdf2Serialiser_SerialisePbkdf2_m8922669ED62A520D7B2D3F5274BA257E7BDA6E32 (KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* ___pbdk2KeyStore0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_0 = ___pbdk2KeyStore0;
		KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* L_1;
		L_1 = JsonKeyStorePbkdf2Serialiser_MapModelToDTO_mCD248C7A7274DD20B28B9EC3BF06AB71DE49171D(L_0, NULL);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_2 = ___pbdk2KeyStore0;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonConvert_SerializeObject_m277670BD344964CB2A61751E5A3D62DB5B1321C7(L_2, NULL);
		return L_3;
	}
}
// Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params> Nethereum.KeyStore.JsonDeserialisation.JsonKeyStorePbkdf2Serialiser::DeserialisePbkdf2(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* JsonKeyStorePbkdf2Serialiser_DeserialisePbkdf2_mCB032E6DDD55BEEEFCBE93C0763D73702D269D4D (String_t* ___json0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisKeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3_m230A31371FA064FF77AECC89F1D8B9FE967AE7D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___json0;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* L_1;
		L_1 = JsonConvert_DeserializeObject_TisKeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3_m230A31371FA064FF77AECC89F1D8B9FE967AE7D3(L_0, JsonConvert_DeserializeObject_TisKeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3_m230A31371FA064FF77AECC89F1D8B9FE967AE7D3_RuntimeMethod_var);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_2;
		L_2 = JsonKeyStorePbkdf2Serialiser_MapDTOToModel_mFA69AC2602F974B6CA9B89B04B027DC93301AE0D(L_1, NULL);
		return L_2;
	}
}
// Nethereum.KeyStore.JsonDeserialisation.KeyStorePbkdf2DTO Nethereum.KeyStore.JsonDeserialisation.JsonKeyStorePbkdf2Serialiser::MapModelToDTO(Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* JsonKeyStorePbkdf2Serialiser_MapModelToDTO_mCD248C7A7274DD20B28B9EC3BF06AB71DE49171D (KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* ___pbdk2KeyStore0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_CipherParams_mA907221C1FBFA60C8B7594E33B18EFFB464C74AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_CipherText_m52A772F5318629770218E77F43791D3CBF6FC3FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_Cipher_m389BD6EBD628F8C61EF4C2B8F0D78B9E10EE2C3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_Kdf_m8BD42AAD2649B9838B73DAE6DA950652AFAAE4D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_Kdfparams_m581A8A3832F579C51A44AADA45E502A89D50C19D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_Mac_m80EF43FB854AA550B53D0032F728DF0146193A9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_get_Address_mF86FC3E973AF8F67AD841BCEE124C323A1D64C71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_get_Id_m73314A33D0C1499A6F003AB49AE0B5CD3D8FEEAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_get_Version_m7CB98BC1EA8EFDDCF0E321BABA5C7B5CF071DE41_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* L_0 = (KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3*)il2cpp_codegen_object_new(KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		KeyStorePbkdf2DTO__ctor_m4887CBA5A3529DA8BA4DABD07C930880F935D1BD(L_0, NULL);
		KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* L_1 = L_0;
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_2 = ___pbdk2KeyStore0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = KeyStore_1_get_Address_mF86FC3E973AF8F67AD841BCEE124C323A1D64C71_inline(L_2, KeyStore_1_get_Address_mF86FC3E973AF8F67AD841BCEE124C323A1D64C71_RuntimeMethod_var);
		NullCheck(L_1);
		KeyStoreDTOBase_set_address_m4E71FF95A9D7900DD962E9C8EDA24D1053EC5C5D_inline(L_1, L_3, NULL);
		KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* L_4 = L_1;
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_5 = ___pbdk2KeyStore0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = KeyStore_1_get_Id_m73314A33D0C1499A6F003AB49AE0B5CD3D8FEEAF_inline(L_5, KeyStore_1_get_Id_m73314A33D0C1499A6F003AB49AE0B5CD3D8FEEAF_RuntimeMethod_var);
		NullCheck(L_4);
		KeyStoreDTOBase_set_id_m764A98BA5E66E066334464B230ED752BA37A1905_inline(L_4, L_6, NULL);
		KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* L_7 = L_4;
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_8 = ___pbdk2KeyStore0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = KeyStore_1_get_Version_m7CB98BC1EA8EFDDCF0E321BABA5C7B5CF071DE41_inline(L_8, KeyStore_1_get_Version_m7CB98BC1EA8EFDDCF0E321BABA5C7B5CF071DE41_RuntimeMethod_var);
		NullCheck(L_7);
		KeyStoreDTOBase_set_version_m8891C2744FDC8C814E198F4C66AF3F1E87F0180F_inline(L_7, L_9, NULL);
		KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* L_10 = L_7;
		NullCheck(L_10);
		CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* L_11;
		L_11 = KeyStorePbkdf2DTO_get_crypto_mC816727DC3C94366BFED80AC35CAA2AA39CED861_inline(L_10, NULL);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_12 = ___pbdk2KeyStore0;
		NullCheck(L_12);
		CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* L_13;
		L_13 = KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_inline(L_12, KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = CryptoInfo_1_get_Cipher_m389BD6EBD628F8C61EF4C2B8F0D78B9E10EE2C3A_inline(L_13, CryptoInfo_1_get_Cipher_m389BD6EBD628F8C61EF4C2B8F0D78B9E10EE2C3A_RuntimeMethod_var);
		NullCheck(L_11);
		CryptoInfoDTOBase_set_cipher_m577997203D05BD47C1F03175A176CEE47468A563_inline(L_11, L_14, NULL);
		KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* L_15 = L_10;
		NullCheck(L_15);
		CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* L_16;
		L_16 = KeyStorePbkdf2DTO_get_crypto_mC816727DC3C94366BFED80AC35CAA2AA39CED861_inline(L_15, NULL);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_17 = ___pbdk2KeyStore0;
		NullCheck(L_17);
		CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* L_18;
		L_18 = KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_inline(L_17, KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = CryptoInfo_1_get_CipherText_m52A772F5318629770218E77F43791D3CBF6FC3FA_inline(L_18, CryptoInfo_1_get_CipherText_m52A772F5318629770218E77F43791D3CBF6FC3FA_RuntimeMethod_var);
		NullCheck(L_16);
		CryptoInfoDTOBase_set_cipherText_m100CA8B4796B16C2C927A56C894D18F3B354DC03_inline(L_16, L_19, NULL);
		KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* L_20 = L_15;
		NullCheck(L_20);
		CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* L_21;
		L_21 = KeyStorePbkdf2DTO_get_crypto_mC816727DC3C94366BFED80AC35CAA2AA39CED861_inline(L_20, NULL);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_22 = ___pbdk2KeyStore0;
		NullCheck(L_22);
		CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* L_23;
		L_23 = KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_inline(L_22, KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = CryptoInfo_1_get_Kdf_m8BD42AAD2649B9838B73DAE6DA950652AFAAE4D3_inline(L_23, CryptoInfo_1_get_Kdf_m8BD42AAD2649B9838B73DAE6DA950652AFAAE4D3_RuntimeMethod_var);
		NullCheck(L_21);
		CryptoInfoDTOBase_set_kdf_m0CE24ACCEAD963F6D649715EFAB53CE0B3BD7F54_inline(L_21, L_24, NULL);
		KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* L_25 = L_20;
		NullCheck(L_25);
		CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* L_26;
		L_26 = KeyStorePbkdf2DTO_get_crypto_mC816727DC3C94366BFED80AC35CAA2AA39CED861_inline(L_25, NULL);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_27 = ___pbdk2KeyStore0;
		NullCheck(L_27);
		CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* L_28;
		L_28 = KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_inline(L_27, KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		NullCheck(L_28);
		String_t* L_29;
		L_29 = CryptoInfo_1_get_Mac_m80EF43FB854AA550B53D0032F728DF0146193A9D_inline(L_28, CryptoInfo_1_get_Mac_m80EF43FB854AA550B53D0032F728DF0146193A9D_RuntimeMethod_var);
		NullCheck(L_26);
		CryptoInfoDTOBase_set_mac_m8C7197F81B08179424DDC30A8D72413D82D3CC54_inline(L_26, L_29, NULL);
		KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* L_30 = L_25;
		NullCheck(L_30);
		CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* L_31;
		L_31 = KeyStorePbkdf2DTO_get_crypto_mC816727DC3C94366BFED80AC35CAA2AA39CED861_inline(L_30, NULL);
		NullCheck(L_31);
		Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* L_32;
		L_32 = CryptoInfoPbkdf2DTO_get_kdfparams_mF0404BA3404C382131A188BCD6544C68FFCFAD03_inline(L_31, NULL);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_33 = ___pbdk2KeyStore0;
		NullCheck(L_33);
		CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* L_34;
		L_34 = KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_inline(L_33, KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		NullCheck(L_34);
		Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* L_35;
		L_35 = CryptoInfo_1_get_Kdfparams_m581A8A3832F579C51A44AADA45E502A89D50C19D_inline(L_34, CryptoInfo_1_get_Kdfparams_m581A8A3832F579C51A44AADA45E502A89D50C19D_RuntimeMethod_var);
		NullCheck(L_35);
		int32_t L_36;
		L_36 = Pbkdf2Params_get_Count_mC11B0427876CC79A0979C88487915DFA8960E03A_inline(L_35, NULL);
		NullCheck(L_32);
		Pbkdf2ParamsDTO_set_c_m4BA1D6942D9986166E02014DBB6843C5A25230FE_inline(L_32, L_36, NULL);
		KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* L_37 = L_30;
		NullCheck(L_37);
		CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* L_38;
		L_38 = KeyStorePbkdf2DTO_get_crypto_mC816727DC3C94366BFED80AC35CAA2AA39CED861_inline(L_37, NULL);
		NullCheck(L_38);
		Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* L_39;
		L_39 = CryptoInfoPbkdf2DTO_get_kdfparams_mF0404BA3404C382131A188BCD6544C68FFCFAD03_inline(L_38, NULL);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_40 = ___pbdk2KeyStore0;
		NullCheck(L_40);
		CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* L_41;
		L_41 = KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_inline(L_40, KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		NullCheck(L_41);
		Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* L_42;
		L_42 = CryptoInfo_1_get_Kdfparams_m581A8A3832F579C51A44AADA45E502A89D50C19D_inline(L_41, CryptoInfo_1_get_Kdfparams_m581A8A3832F579C51A44AADA45E502A89D50C19D_RuntimeMethod_var);
		NullCheck(L_42);
		String_t* L_43;
		L_43 = Pbkdf2Params_get_Prf_m452DEB151B6B91A6F85AB4335A1E9FE9792B97B0_inline(L_42, NULL);
		NullCheck(L_39);
		Pbkdf2ParamsDTO_set_prf_m4E5CBB3B28E1A63DB33B64CBD240667842DFFBC5_inline(L_39, L_43, NULL);
		KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* L_44 = L_37;
		NullCheck(L_44);
		CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* L_45;
		L_45 = KeyStorePbkdf2DTO_get_crypto_mC816727DC3C94366BFED80AC35CAA2AA39CED861_inline(L_44, NULL);
		NullCheck(L_45);
		Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* L_46;
		L_46 = CryptoInfoPbkdf2DTO_get_kdfparams_mF0404BA3404C382131A188BCD6544C68FFCFAD03_inline(L_45, NULL);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_47 = ___pbdk2KeyStore0;
		NullCheck(L_47);
		CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* L_48;
		L_48 = KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_inline(L_47, KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		NullCheck(L_48);
		Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* L_49;
		L_49 = CryptoInfo_1_get_Kdfparams_m581A8A3832F579C51A44AADA45E502A89D50C19D_inline(L_48, CryptoInfo_1_get_Kdfparams_m581A8A3832F579C51A44AADA45E502A89D50C19D_RuntimeMethod_var);
		NullCheck(L_49);
		int32_t L_50;
		L_50 = KdfParams_get_Dklen_m1E5547E75FFAD02C826CFDC8CD09AC6EAEEBDB14_inline(L_49, NULL);
		NullCheck(L_46);
		KdfParamsDTO_set_dklen_mA75B7F4B76A3E1E4D4D3F7C139F0CF15A097A0A6_inline(L_46, L_50, NULL);
		KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* L_51 = L_44;
		NullCheck(L_51);
		CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* L_52;
		L_52 = KeyStorePbkdf2DTO_get_crypto_mC816727DC3C94366BFED80AC35CAA2AA39CED861_inline(L_51, NULL);
		NullCheck(L_52);
		Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* L_53;
		L_53 = CryptoInfoPbkdf2DTO_get_kdfparams_mF0404BA3404C382131A188BCD6544C68FFCFAD03_inline(L_52, NULL);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_54 = ___pbdk2KeyStore0;
		NullCheck(L_54);
		CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* L_55;
		L_55 = KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_inline(L_54, KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		NullCheck(L_55);
		Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* L_56;
		L_56 = CryptoInfo_1_get_Kdfparams_m581A8A3832F579C51A44AADA45E502A89D50C19D_inline(L_55, CryptoInfo_1_get_Kdfparams_m581A8A3832F579C51A44AADA45E502A89D50C19D_RuntimeMethod_var);
		NullCheck(L_56);
		String_t* L_57;
		L_57 = KdfParams_get_Salt_mBC1DA50823694582BA754AAAB3F2C098C024205B_inline(L_56, NULL);
		NullCheck(L_53);
		KdfParamsDTO_set_salt_m1D5465724D0D2EC60A15AE7671FC6AC7266052F2_inline(L_53, L_57, NULL);
		KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* L_58 = L_51;
		NullCheck(L_58);
		CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* L_59;
		L_59 = KeyStorePbkdf2DTO_get_crypto_mC816727DC3C94366BFED80AC35CAA2AA39CED861_inline(L_58, NULL);
		NullCheck(L_59);
		CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* L_60;
		L_60 = CryptoInfoDTOBase_get_cipherparams_mE9D29F3332F2FC754DE4C29BC8C183F08A389F77_inline(L_59, NULL);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_61 = ___pbdk2KeyStore0;
		NullCheck(L_61);
		CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* L_62;
		L_62 = KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_inline(L_61, KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		NullCheck(L_62);
		CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* L_63;
		L_63 = CryptoInfo_1_get_CipherParams_mA907221C1FBFA60C8B7594E33B18EFFB464C74AC_inline(L_62, CryptoInfo_1_get_CipherParams_mA907221C1FBFA60C8B7594E33B18EFFB464C74AC_RuntimeMethod_var);
		NullCheck(L_63);
		String_t* L_64;
		L_64 = CipherParams_get_Iv_mACA12BCFA8DA0C8DF791A05028119A5A14F4CBC4_inline(L_63, NULL);
		NullCheck(L_60);
		CipherParamsDTO_set_iv_mAA82EE8F95D570A32B28DDB5D137E452547E1447_inline(L_60, L_64, NULL);
		return L_58;
	}
}
// Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params> Nethereum.KeyStore.JsonDeserialisation.JsonKeyStorePbkdf2Serialiser::MapDTOToModel(Nethereum.KeyStore.JsonDeserialisation.KeyStorePbkdf2DTO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* JsonKeyStorePbkdf2Serialiser_MapDTOToModel_mFA69AC2602F974B6CA9B89B04B027DC93301AE0D (KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* ___dto0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1__ctor_m64E73FFB1ABC084EE66863619596CAFC447DC32A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_CipherParams_mA907221C1FBFA60C8B7594E33B18EFFB464C74AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_Kdfparams_m581A8A3832F579C51A44AADA45E502A89D50C19D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_set_CipherParams_mBF3B77965FA6773A82D4D4F9DB6353DA465D30E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_set_CipherText_m1829083C1D5065BD7FF9D9B0A1E69AF81F824A90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_set_Cipher_mAEC03B77AAD2E0515D155A0375F5818E2A64D8EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_set_Kdf_m0C4E02ABBCF8451EB2BF614406EA26EEAC81A166_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_set_Kdfparams_m31F4A35D15A0ABDD36F4246C0B5A3BCB8843041E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_set_Mac_mFC2C15194B9E7F00795C290647877D9EE344FAC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1__ctor_mBBD3CCEBD5299044209243B9F23E1743D00D3CB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_set_Address_m09CDE5CBD4792C93B0E7BE75DE8C1E3004F99F3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_set_Crypto_mE619CF2F3C0B9C38C9E88BC29B1B59CFF8DCD787_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_set_Id_m92CDF3EC870F842CA05952E5FD4D276B9F5DFCA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_set_Version_m0D3C2AFEEE3CB168E2967C180CCBDF9277A37519_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_0 = (KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2*)il2cpp_codegen_object_new(KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		KeyStore_1__ctor_mBBD3CCEBD5299044209243B9F23E1743D00D3CB4(L_0, KeyStore_1__ctor_mBBD3CCEBD5299044209243B9F23E1743D00D3CB4_RuntimeMethod_var);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_1 = L_0;
		KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* L_2 = ___dto0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = KeyStoreDTOBase_get_address_m0134A1C538EC96FD7F883CF2B69E95EA0CAB0FD3_inline(L_2, NULL);
		NullCheck(L_1);
		KeyStore_1_set_Address_m09CDE5CBD4792C93B0E7BE75DE8C1E3004F99F3B_inline(L_1, L_3, KeyStore_1_set_Address_m09CDE5CBD4792C93B0E7BE75DE8C1E3004F99F3B_RuntimeMethod_var);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_4 = L_1;
		KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* L_5 = ___dto0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = KeyStoreDTOBase_get_id_mFDCD569677A39C6B99970D2C598D7587EFB2E77C_inline(L_5, NULL);
		NullCheck(L_4);
		KeyStore_1_set_Id_m92CDF3EC870F842CA05952E5FD4D276B9F5DFCA7_inline(L_4, L_6, KeyStore_1_set_Id_m92CDF3EC870F842CA05952E5FD4D276B9F5DFCA7_RuntimeMethod_var);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_7 = L_4;
		KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* L_8 = ___dto0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = KeyStoreDTOBase_get_version_m7F00B43A9B900EE11DDA1E69DB08CCB03C5BE9ED_inline(L_8, NULL);
		NullCheck(L_7);
		KeyStore_1_set_Version_m0D3C2AFEEE3CB168E2967C180CCBDF9277A37519_inline(L_7, L_9, KeyStore_1_set_Version_m0D3C2AFEEE3CB168E2967C180CCBDF9277A37519_RuntimeMethod_var);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_10 = L_7;
		CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* L_11 = (CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8*)il2cpp_codegen_object_new(CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		CryptoInfo_1__ctor_m64E73FFB1ABC084EE66863619596CAFC447DC32A(L_11, CryptoInfo_1__ctor_m64E73FFB1ABC084EE66863619596CAFC447DC32A_RuntimeMethod_var);
		NullCheck(L_10);
		KeyStore_1_set_Crypto_mE619CF2F3C0B9C38C9E88BC29B1B59CFF8DCD787_inline(L_10, L_11, KeyStore_1_set_Crypto_mE619CF2F3C0B9C38C9E88BC29B1B59CFF8DCD787_RuntimeMethod_var);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_12 = L_10;
		NullCheck(L_12);
		CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* L_13;
		L_13 = KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_inline(L_12, KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* L_14 = ___dto0;
		NullCheck(L_14);
		CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* L_15;
		L_15 = KeyStorePbkdf2DTO_get_crypto_mC816727DC3C94366BFED80AC35CAA2AA39CED861_inline(L_14, NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = CryptoInfoDTOBase_get_cipher_mC2254AEF9DABAE8647851B32135596ED041004D7_inline(L_15, NULL);
		NullCheck(L_13);
		CryptoInfo_1_set_Cipher_mAEC03B77AAD2E0515D155A0375F5818E2A64D8EC_inline(L_13, L_16, CryptoInfo_1_set_Cipher_mAEC03B77AAD2E0515D155A0375F5818E2A64D8EC_RuntimeMethod_var);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_17 = L_12;
		NullCheck(L_17);
		CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* L_18;
		L_18 = KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_inline(L_17, KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* L_19 = ___dto0;
		NullCheck(L_19);
		CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* L_20;
		L_20 = KeyStorePbkdf2DTO_get_crypto_mC816727DC3C94366BFED80AC35CAA2AA39CED861_inline(L_19, NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = CryptoInfoDTOBase_get_cipherText_mCA4F7FEE19C44BB4E20FF7B4D06E6F9832CC2DEF_inline(L_20, NULL);
		NullCheck(L_18);
		CryptoInfo_1_set_CipherText_m1829083C1D5065BD7FF9D9B0A1E69AF81F824A90_inline(L_18, L_21, CryptoInfo_1_set_CipherText_m1829083C1D5065BD7FF9D9B0A1E69AF81F824A90_RuntimeMethod_var);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_22 = L_17;
		NullCheck(L_22);
		CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* L_23;
		L_23 = KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_inline(L_22, KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* L_24 = ___dto0;
		NullCheck(L_24);
		CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* L_25;
		L_25 = KeyStorePbkdf2DTO_get_crypto_mC816727DC3C94366BFED80AC35CAA2AA39CED861_inline(L_24, NULL);
		NullCheck(L_25);
		String_t* L_26;
		L_26 = CryptoInfoDTOBase_get_kdf_m37F91BCF553659BC936ACA04FBE68BAD0AD09703_inline(L_25, NULL);
		NullCheck(L_23);
		CryptoInfo_1_set_Kdf_m0C4E02ABBCF8451EB2BF614406EA26EEAC81A166_inline(L_23, L_26, CryptoInfo_1_set_Kdf_m0C4E02ABBCF8451EB2BF614406EA26EEAC81A166_RuntimeMethod_var);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_27 = L_22;
		NullCheck(L_27);
		CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* L_28;
		L_28 = KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_inline(L_27, KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* L_29 = ___dto0;
		NullCheck(L_29);
		CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* L_30;
		L_30 = KeyStorePbkdf2DTO_get_crypto_mC816727DC3C94366BFED80AC35CAA2AA39CED861_inline(L_29, NULL);
		NullCheck(L_30);
		String_t* L_31;
		L_31 = CryptoInfoDTOBase_get_mac_m832D5DAE6B8D34645CB12D6C1EF621E8247053DB_inline(L_30, NULL);
		NullCheck(L_28);
		CryptoInfo_1_set_Mac_mFC2C15194B9E7F00795C290647877D9EE344FAC8_inline(L_28, L_31, CryptoInfo_1_set_Mac_mFC2C15194B9E7F00795C290647877D9EE344FAC8_RuntimeMethod_var);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_32 = L_27;
		NullCheck(L_32);
		CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* L_33;
		L_33 = KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_inline(L_32, KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* L_34 = (Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D*)il2cpp_codegen_object_new(Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		Pbkdf2Params__ctor_mFF835BB78C590FD34736CC991A9F375DEB02919A(L_34, NULL);
		NullCheck(L_33);
		CryptoInfo_1_set_Kdfparams_m31F4A35D15A0ABDD36F4246C0B5A3BCB8843041E_inline(L_33, L_34, CryptoInfo_1_set_Kdfparams_m31F4A35D15A0ABDD36F4246C0B5A3BCB8843041E_RuntimeMethod_var);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_35 = L_32;
		NullCheck(L_35);
		CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* L_36;
		L_36 = KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_inline(L_35, KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		NullCheck(L_36);
		Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* L_37;
		L_37 = CryptoInfo_1_get_Kdfparams_m581A8A3832F579C51A44AADA45E502A89D50C19D_inline(L_36, CryptoInfo_1_get_Kdfparams_m581A8A3832F579C51A44AADA45E502A89D50C19D_RuntimeMethod_var);
		KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* L_38 = ___dto0;
		NullCheck(L_38);
		CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* L_39;
		L_39 = KeyStorePbkdf2DTO_get_crypto_mC816727DC3C94366BFED80AC35CAA2AA39CED861_inline(L_38, NULL);
		NullCheck(L_39);
		Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* L_40;
		L_40 = CryptoInfoPbkdf2DTO_get_kdfparams_mF0404BA3404C382131A188BCD6544C68FFCFAD03_inline(L_39, NULL);
		NullCheck(L_40);
		int32_t L_41;
		L_41 = Pbkdf2ParamsDTO_get_c_m3B13666602544BAA07A393358D4A7702A80FD03F_inline(L_40, NULL);
		NullCheck(L_37);
		Pbkdf2Params_set_Count_mF6B58E39489D4C7F5E7B0D46282913C817BC95B2_inline(L_37, L_41, NULL);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_42 = L_35;
		NullCheck(L_42);
		CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* L_43;
		L_43 = KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_inline(L_42, KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		NullCheck(L_43);
		Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* L_44;
		L_44 = CryptoInfo_1_get_Kdfparams_m581A8A3832F579C51A44AADA45E502A89D50C19D_inline(L_43, CryptoInfo_1_get_Kdfparams_m581A8A3832F579C51A44AADA45E502A89D50C19D_RuntimeMethod_var);
		KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* L_45 = ___dto0;
		NullCheck(L_45);
		CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* L_46;
		L_46 = KeyStorePbkdf2DTO_get_crypto_mC816727DC3C94366BFED80AC35CAA2AA39CED861_inline(L_45, NULL);
		NullCheck(L_46);
		Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* L_47;
		L_47 = CryptoInfoPbkdf2DTO_get_kdfparams_mF0404BA3404C382131A188BCD6544C68FFCFAD03_inline(L_46, NULL);
		NullCheck(L_47);
		String_t* L_48;
		L_48 = Pbkdf2ParamsDTO_get_prf_m9A05AF9E39269FB7A363F6744E0FC201B9CCFE04_inline(L_47, NULL);
		NullCheck(L_44);
		Pbkdf2Params_set_Prf_mC7BE10C0C3A3D9D57247516A9A435067FE1F3242_inline(L_44, L_48, NULL);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_49 = L_42;
		NullCheck(L_49);
		CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* L_50;
		L_50 = KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_inline(L_49, KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		NullCheck(L_50);
		Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* L_51;
		L_51 = CryptoInfo_1_get_Kdfparams_m581A8A3832F579C51A44AADA45E502A89D50C19D_inline(L_50, CryptoInfo_1_get_Kdfparams_m581A8A3832F579C51A44AADA45E502A89D50C19D_RuntimeMethod_var);
		KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* L_52 = ___dto0;
		NullCheck(L_52);
		CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* L_53;
		L_53 = KeyStorePbkdf2DTO_get_crypto_mC816727DC3C94366BFED80AC35CAA2AA39CED861_inline(L_52, NULL);
		NullCheck(L_53);
		Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* L_54;
		L_54 = CryptoInfoPbkdf2DTO_get_kdfparams_mF0404BA3404C382131A188BCD6544C68FFCFAD03_inline(L_53, NULL);
		NullCheck(L_54);
		int32_t L_55;
		L_55 = KdfParamsDTO_get_dklen_mF4F94F51F353F4A8CF43F2D9BD782FB90FF8142D_inline(L_54, NULL);
		NullCheck(L_51);
		KdfParams_set_Dklen_m8873AE7294C28118FDADC3F76AB3FCCA12ED0A9E_inline(L_51, L_55, NULL);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_56 = L_49;
		NullCheck(L_56);
		CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* L_57;
		L_57 = KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_inline(L_56, KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		NullCheck(L_57);
		Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* L_58;
		L_58 = CryptoInfo_1_get_Kdfparams_m581A8A3832F579C51A44AADA45E502A89D50C19D_inline(L_57, CryptoInfo_1_get_Kdfparams_m581A8A3832F579C51A44AADA45E502A89D50C19D_RuntimeMethod_var);
		KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* L_59 = ___dto0;
		NullCheck(L_59);
		CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* L_60;
		L_60 = KeyStorePbkdf2DTO_get_crypto_mC816727DC3C94366BFED80AC35CAA2AA39CED861_inline(L_59, NULL);
		NullCheck(L_60);
		Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* L_61;
		L_61 = CryptoInfoPbkdf2DTO_get_kdfparams_mF0404BA3404C382131A188BCD6544C68FFCFAD03_inline(L_60, NULL);
		NullCheck(L_61);
		String_t* L_62;
		L_62 = KdfParamsDTO_get_salt_m6238900E8629F7663690AD6E1E4C2FF99E8F35ED_inline(L_61, NULL);
		NullCheck(L_58);
		KdfParams_set_Salt_m578F3DA59E3C91B1C70F13793C6926210CE139F7_inline(L_58, L_62, NULL);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_63 = L_56;
		NullCheck(L_63);
		CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* L_64;
		L_64 = KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_inline(L_63, KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* L_65 = (CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0*)il2cpp_codegen_object_new(CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0_il2cpp_TypeInfo_var);
		NullCheck(L_65);
		CipherParams__ctor_m6EF7551DAA09455A6D0CB9B5E98BA76CCD98072A(L_65, NULL);
		NullCheck(L_64);
		CryptoInfo_1_set_CipherParams_mBF3B77965FA6773A82D4D4F9DB6353DA465D30E7_inline(L_64, L_65, CryptoInfo_1_set_CipherParams_mBF3B77965FA6773A82D4D4F9DB6353DA465D30E7_RuntimeMethod_var);
		KeyStore_1_t931436EEE83517833D85E6997AC590D9D103DEE2* L_66 = L_63;
		NullCheck(L_66);
		CryptoInfo_1_t86A8457AE6EB667904751BA06FD2C383DE66E3E8* L_67;
		L_67 = KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_inline(L_66, KeyStore_1_get_Crypto_m4413226D005FFFF3EF9BC21B63D1E148F36EAA2F_RuntimeMethod_var);
		NullCheck(L_67);
		CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* L_68;
		L_68 = CryptoInfo_1_get_CipherParams_mA907221C1FBFA60C8B7594E33B18EFFB464C74AC_inline(L_67, CryptoInfo_1_get_CipherParams_mA907221C1FBFA60C8B7594E33B18EFFB464C74AC_RuntimeMethod_var);
		KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* L_69 = ___dto0;
		NullCheck(L_69);
		CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* L_70;
		L_70 = KeyStorePbkdf2DTO_get_crypto_mC816727DC3C94366BFED80AC35CAA2AA39CED861_inline(L_69, NULL);
		NullCheck(L_70);
		CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* L_71;
		L_71 = CryptoInfoDTOBase_get_cipherparams_mE9D29F3332F2FC754DE4C29BC8C183F08A389F77_inline(L_70, NULL);
		NullCheck(L_71);
		String_t* L_72;
		L_72 = CipherParamsDTO_get_iv_m9A9BB6EC013B70B8EE1542B30F8644D520FEE92C_inline(L_71, NULL);
		NullCheck(L_68);
		CipherParams_set_Iv_mE77D6319BE01333E7B3F6F7F98453DABAE5BB6C6_inline(L_68, L_72, NULL);
		return L_66;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.JsonKeyStorePbkdf2Serialiser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonKeyStorePbkdf2Serialiser__ctor_m1FCF97801AAC5B592BC1E45762733948AAD651DE (JsonKeyStorePbkdf2Serialiser_tECC64368072DF1BDC844FC5CBBEBBFAB3190F564* __this, const RuntimeMethod* method) 
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
// System.String Nethereum.KeyStore.JsonDeserialisation.JsonKeyStoreScryptSerialiser::SerialiseScrypt(Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonKeyStoreScryptSerialiser_SerialiseScrypt_m021A1C32895A9DB278D67F315F4ACBCBC2944944 (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* ___scryptKeyStore0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_0 = ___scryptKeyStore0;
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_1;
		L_1 = JsonKeyStoreScryptSerialiser_MapModelToDTO_m74227D5A6398A22F0C248CE67F7B734EB2FCAFC8(L_0, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_2 = ___scryptKeyStore0;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonConvert_SerializeObject_m277670BD344964CB2A61751E5A3D62DB5B1321C7(L_2, NULL);
		return L_3;
	}
}
// Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams> Nethereum.KeyStore.JsonDeserialisation.JsonKeyStoreScryptSerialiser::DeserialiseScrypt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* JsonKeyStoreScryptSerialiser_DeserialiseScrypt_m444B7A8F3A8E09938DAF4264B6A809D3281F20FF (String_t* ___json0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisKeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367_mC72C249C6450475F026EE89BE5DFFEEF5045F885_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___json0;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_1;
		L_1 = JsonConvert_DeserializeObject_TisKeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367_mC72C249C6450475F026EE89BE5DFFEEF5045F885(L_0, JsonConvert_DeserializeObject_TisKeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367_mC72C249C6450475F026EE89BE5DFFEEF5045F885_RuntimeMethod_var);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_2;
		L_2 = JsonKeyStoreScryptSerialiser_MapDTOToModel_mA7AA3E2107425F4077076092C1DBBAA8F0690AF2(L_1, NULL);
		return L_2;
	}
}
// Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO Nethereum.KeyStore.JsonDeserialisation.JsonKeyStoreScryptSerialiser::MapModelToDTO(Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* JsonKeyStoreScryptSerialiser_MapModelToDTO_m74227D5A6398A22F0C248CE67F7B734EB2FCAFC8 (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* ___scryptKeyStore0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_CipherParams_mCE5052AB3E08620D0675291DD4A9F0B453F1DC37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_CipherText_m0D0D495D51ACCBD21C7BA3075D96E6E9E4A6BE0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_Cipher_m7BA1B867E8E4C8833CEE05C3143DE335A621F2A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_Kdf_mAB4E9A63B906AD0CEDA894E615BF3CAB540B80D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_Mac_m397668EA83950C2D02123C4FCBC665015AD1ACD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_get_Address_m2BD758087730CB1C5A6D149E0C7A1C1A88904161_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_get_Id_mB084F9AF1D51C89CFC94FC9F4F1BD68173BA4A4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_get_Version_mC58350AE7F50E7EF46D94FCDD702B34039265C35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_0 = (KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367*)il2cpp_codegen_object_new(KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		KeyStoreScryptDTO__ctor_m92B3E01F3801D999CDFF37E7D28A10EA14421472(L_0, NULL);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_1 = L_0;
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_2 = ___scryptKeyStore0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = KeyStore_1_get_Address_m2BD758087730CB1C5A6D149E0C7A1C1A88904161_inline(L_2, KeyStore_1_get_Address_m2BD758087730CB1C5A6D149E0C7A1C1A88904161_RuntimeMethod_var);
		NullCheck(L_1);
		KeyStoreDTOBase_set_address_m4E71FF95A9D7900DD962E9C8EDA24D1053EC5C5D_inline(L_1, L_3, NULL);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_4 = L_1;
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_5 = ___scryptKeyStore0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = KeyStore_1_get_Id_mB084F9AF1D51C89CFC94FC9F4F1BD68173BA4A4C_inline(L_5, KeyStore_1_get_Id_mB084F9AF1D51C89CFC94FC9F4F1BD68173BA4A4C_RuntimeMethod_var);
		NullCheck(L_4);
		KeyStoreDTOBase_set_id_m764A98BA5E66E066334464B230ED752BA37A1905_inline(L_4, L_6, NULL);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_7 = L_4;
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_8 = ___scryptKeyStore0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = KeyStore_1_get_Version_mC58350AE7F50E7EF46D94FCDD702B34039265C35_inline(L_8, KeyStore_1_get_Version_mC58350AE7F50E7EF46D94FCDD702B34039265C35_RuntimeMethod_var);
		NullCheck(L_7);
		KeyStoreDTOBase_set_version_m8891C2744FDC8C814E198F4C66AF3F1E87F0180F_inline(L_7, L_9, NULL);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_10 = L_7;
		NullCheck(L_10);
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_11;
		L_11 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_10, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_12 = ___scryptKeyStore0;
		NullCheck(L_12);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_13;
		L_13 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_12, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = CryptoInfo_1_get_Cipher_m7BA1B867E8E4C8833CEE05C3143DE335A621F2A5_inline(L_13, CryptoInfo_1_get_Cipher_m7BA1B867E8E4C8833CEE05C3143DE335A621F2A5_RuntimeMethod_var);
		NullCheck(L_11);
		CryptoInfoDTOBase_set_cipher_m577997203D05BD47C1F03175A176CEE47468A563_inline(L_11, L_14, NULL);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_15 = L_10;
		NullCheck(L_15);
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_16;
		L_16 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_15, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_17 = ___scryptKeyStore0;
		NullCheck(L_17);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_18;
		L_18 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_17, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = CryptoInfo_1_get_CipherText_m0D0D495D51ACCBD21C7BA3075D96E6E9E4A6BE0B_inline(L_18, CryptoInfo_1_get_CipherText_m0D0D495D51ACCBD21C7BA3075D96E6E9E4A6BE0B_RuntimeMethod_var);
		NullCheck(L_16);
		CryptoInfoDTOBase_set_cipherText_m100CA8B4796B16C2C927A56C894D18F3B354DC03_inline(L_16, L_19, NULL);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_20 = L_15;
		NullCheck(L_20);
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_21;
		L_21 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_20, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_22 = ___scryptKeyStore0;
		NullCheck(L_22);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_23;
		L_23 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_22, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = CryptoInfo_1_get_Kdf_mAB4E9A63B906AD0CEDA894E615BF3CAB540B80D1_inline(L_23, CryptoInfo_1_get_Kdf_mAB4E9A63B906AD0CEDA894E615BF3CAB540B80D1_RuntimeMethod_var);
		NullCheck(L_21);
		CryptoInfoDTOBase_set_kdf_m0CE24ACCEAD963F6D649715EFAB53CE0B3BD7F54_inline(L_21, L_24, NULL);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_25 = L_20;
		NullCheck(L_25);
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_26;
		L_26 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_25, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_27 = ___scryptKeyStore0;
		NullCheck(L_27);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_28;
		L_28 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_27, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		NullCheck(L_28);
		String_t* L_29;
		L_29 = CryptoInfo_1_get_Mac_m397668EA83950C2D02123C4FCBC665015AD1ACD8_inline(L_28, CryptoInfo_1_get_Mac_m397668EA83950C2D02123C4FCBC665015AD1ACD8_RuntimeMethod_var);
		NullCheck(L_26);
		CryptoInfoDTOBase_set_mac_m8C7197F81B08179424DDC30A8D72413D82D3CC54_inline(L_26, L_29, NULL);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_30 = L_25;
		NullCheck(L_30);
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_31;
		L_31 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_30, NULL);
		NullCheck(L_31);
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_32;
		L_32 = CryptoInfoScryptDTO_get_kdfparams_m88558053C3D05D95A823EC4DB490A6F85518808A_inline(L_31, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_33 = ___scryptKeyStore0;
		NullCheck(L_33);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_34;
		L_34 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_33, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		NullCheck(L_34);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_35;
		L_35 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_34, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		NullCheck(L_35);
		int32_t L_36;
		L_36 = ScryptParams_get_R_mBBE1A0B0B5E9B5E32A3E798FAC0766775DDF186E_inline(L_35, NULL);
		NullCheck(L_32);
		ScryptParamsDTO_set_r_m9EA349D301AF31CBC06A4204807852BC10B8772B_inline(L_32, L_36, NULL);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_37 = L_30;
		NullCheck(L_37);
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_38;
		L_38 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_37, NULL);
		NullCheck(L_38);
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_39;
		L_39 = CryptoInfoScryptDTO_get_kdfparams_m88558053C3D05D95A823EC4DB490A6F85518808A_inline(L_38, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_40 = ___scryptKeyStore0;
		NullCheck(L_40);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_41;
		L_41 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_40, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		NullCheck(L_41);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_42;
		L_42 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_41, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		NullCheck(L_42);
		int32_t L_43;
		L_43 = ScryptParams_get_N_mE57FDEFFC05A1BEE6E1D2AEC8E0768206BEE49E2_inline(L_42, NULL);
		NullCheck(L_39);
		ScryptParamsDTO_set_n_mF43334DBC344EFF9F8DCED73543A5A25847A6A55_inline(L_39, L_43, NULL);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_44 = L_37;
		NullCheck(L_44);
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_45;
		L_45 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_44, NULL);
		NullCheck(L_45);
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_46;
		L_46 = CryptoInfoScryptDTO_get_kdfparams_m88558053C3D05D95A823EC4DB490A6F85518808A_inline(L_45, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_47 = ___scryptKeyStore0;
		NullCheck(L_47);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_48;
		L_48 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_47, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		NullCheck(L_48);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_49;
		L_49 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_48, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		NullCheck(L_49);
		int32_t L_50;
		L_50 = ScryptParams_get_P_mF431C35431D06FDC71DF89E3BCA31DB14A9C880E_inline(L_49, NULL);
		NullCheck(L_46);
		ScryptParamsDTO_set_p_m2A2C1324B4C9F90F65E916EB957EDB148865DF45_inline(L_46, L_50, NULL);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_51 = L_44;
		NullCheck(L_51);
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_52;
		L_52 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_51, NULL);
		NullCheck(L_52);
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_53;
		L_53 = CryptoInfoScryptDTO_get_kdfparams_m88558053C3D05D95A823EC4DB490A6F85518808A_inline(L_52, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_54 = ___scryptKeyStore0;
		NullCheck(L_54);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_55;
		L_55 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_54, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		NullCheck(L_55);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_56;
		L_56 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_55, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		NullCheck(L_56);
		int32_t L_57;
		L_57 = KdfParams_get_Dklen_m1E5547E75FFAD02C826CFDC8CD09AC6EAEEBDB14_inline(L_56, NULL);
		NullCheck(L_53);
		KdfParamsDTO_set_dklen_mA75B7F4B76A3E1E4D4D3F7C139F0CF15A097A0A6_inline(L_53, L_57, NULL);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_58 = L_51;
		NullCheck(L_58);
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_59;
		L_59 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_58, NULL);
		NullCheck(L_59);
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_60;
		L_60 = CryptoInfoScryptDTO_get_kdfparams_m88558053C3D05D95A823EC4DB490A6F85518808A_inline(L_59, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_61 = ___scryptKeyStore0;
		NullCheck(L_61);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_62;
		L_62 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_61, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		NullCheck(L_62);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_63;
		L_63 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_62, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		NullCheck(L_63);
		String_t* L_64;
		L_64 = KdfParams_get_Salt_mBC1DA50823694582BA754AAAB3F2C098C024205B_inline(L_63, NULL);
		NullCheck(L_60);
		KdfParamsDTO_set_salt_m1D5465724D0D2EC60A15AE7671FC6AC7266052F2_inline(L_60, L_64, NULL);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_65 = L_58;
		NullCheck(L_65);
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_66;
		L_66 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_65, NULL);
		NullCheck(L_66);
		CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* L_67;
		L_67 = CryptoInfoDTOBase_get_cipherparams_mE9D29F3332F2FC754DE4C29BC8C183F08A389F77_inline(L_66, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_68 = ___scryptKeyStore0;
		NullCheck(L_68);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_69;
		L_69 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_68, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		NullCheck(L_69);
		CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* L_70;
		L_70 = CryptoInfo_1_get_CipherParams_mCE5052AB3E08620D0675291DD4A9F0B453F1DC37_inline(L_69, CryptoInfo_1_get_CipherParams_mCE5052AB3E08620D0675291DD4A9F0B453F1DC37_RuntimeMethod_var);
		NullCheck(L_70);
		String_t* L_71;
		L_71 = CipherParams_get_Iv_mACA12BCFA8DA0C8DF791A05028119A5A14F4CBC4_inline(L_70, NULL);
		NullCheck(L_67);
		CipherParamsDTO_set_iv_mAA82EE8F95D570A32B28DDB5D137E452547E1447_inline(L_67, L_71, NULL);
		return L_65;
	}
}
// Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams> Nethereum.KeyStore.JsonDeserialisation.JsonKeyStoreScryptSerialiser::MapDTOToModel(Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* JsonKeyStoreScryptSerialiser_MapDTOToModel_mA7AA3E2107425F4077076092C1DBBAA8F0690AF2 (KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* ___dto0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1__ctor_m032DF032DB563EE333F936B18490F15E5857964A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_CipherParams_mCE5052AB3E08620D0675291DD4A9F0B453F1DC37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_set_CipherParams_mE008C30F61B193220181F8571E9B22669BC1C7E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_set_CipherText_mAB2EA2B19CDD9767567825024156FC1357581C78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_set_Cipher_m3A8287A23B23E90E4D269C6BAB72FD92C7AD59FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_set_Kdf_m2F4F184EA3A7B6112EF18F1FBA70CFF2140270E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_set_Kdfparams_m496DF4ECF94CFBFC730A619DFF35E8536275BFAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_set_Mac_m57B69D5B6017597A4263D7C4130DF4E5E81AE667_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1__ctor_m2ECFC2CB0B05408465002F720B7142EA3F0E6B17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_set_Address_m06D4182B667F0FA9DBB10640DF9FED69E2E61140_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_set_Crypto_m6C695CA8B0703EF97A90EAFE827F14ECE34A2BF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_set_Id_m9F9D3D789C8BEFD5EF221C06A2512457D5598B49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_set_Version_mCC41748FB655953DC784DEDAF0A9F1D7C9C915E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_0 = (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E*)il2cpp_codegen_object_new(KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		KeyStore_1__ctor_m2ECFC2CB0B05408465002F720B7142EA3F0E6B17(L_0, KeyStore_1__ctor_m2ECFC2CB0B05408465002F720B7142EA3F0E6B17_RuntimeMethod_var);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_1 = L_0;
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_2 = ___dto0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = KeyStoreDTOBase_get_address_m0134A1C538EC96FD7F883CF2B69E95EA0CAB0FD3_inline(L_2, NULL);
		NullCheck(L_1);
		KeyStore_1_set_Address_m06D4182B667F0FA9DBB10640DF9FED69E2E61140_inline(L_1, L_3, KeyStore_1_set_Address_m06D4182B667F0FA9DBB10640DF9FED69E2E61140_RuntimeMethod_var);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_4 = L_1;
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_5 = ___dto0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = KeyStoreDTOBase_get_id_mFDCD569677A39C6B99970D2C598D7587EFB2E77C_inline(L_5, NULL);
		NullCheck(L_4);
		KeyStore_1_set_Id_m9F9D3D789C8BEFD5EF221C06A2512457D5598B49_inline(L_4, L_6, KeyStore_1_set_Id_m9F9D3D789C8BEFD5EF221C06A2512457D5598B49_RuntimeMethod_var);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_7 = L_4;
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_8 = ___dto0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = KeyStoreDTOBase_get_version_m7F00B43A9B900EE11DDA1E69DB08CCB03C5BE9ED_inline(L_8, NULL);
		NullCheck(L_7);
		KeyStore_1_set_Version_mCC41748FB655953DC784DEDAF0A9F1D7C9C915E8_inline(L_7, L_9, KeyStore_1_set_Version_mCC41748FB655953DC784DEDAF0A9F1D7C9C915E8_RuntimeMethod_var);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_10 = L_7;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_11 = (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*)il2cpp_codegen_object_new(CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		CryptoInfo_1__ctor_m032DF032DB563EE333F936B18490F15E5857964A(L_11, CryptoInfo_1__ctor_m032DF032DB563EE333F936B18490F15E5857964A_RuntimeMethod_var);
		NullCheck(L_10);
		KeyStore_1_set_Crypto_m6C695CA8B0703EF97A90EAFE827F14ECE34A2BF0_inline(L_10, L_11, KeyStore_1_set_Crypto_m6C695CA8B0703EF97A90EAFE827F14ECE34A2BF0_RuntimeMethod_var);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_12 = L_10;
		NullCheck(L_12);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_13;
		L_13 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_12, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_14 = ___dto0;
		NullCheck(L_14);
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_15;
		L_15 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_14, NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = CryptoInfoDTOBase_get_cipher_mC2254AEF9DABAE8647851B32135596ED041004D7_inline(L_15, NULL);
		NullCheck(L_13);
		CryptoInfo_1_set_Cipher_m3A8287A23B23E90E4D269C6BAB72FD92C7AD59FF_inline(L_13, L_16, CryptoInfo_1_set_Cipher_m3A8287A23B23E90E4D269C6BAB72FD92C7AD59FF_RuntimeMethod_var);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_17 = L_12;
		NullCheck(L_17);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_18;
		L_18 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_17, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_19 = ___dto0;
		NullCheck(L_19);
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_20;
		L_20 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_19, NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = CryptoInfoDTOBase_get_cipherText_mCA4F7FEE19C44BB4E20FF7B4D06E6F9832CC2DEF_inline(L_20, NULL);
		NullCheck(L_18);
		CryptoInfo_1_set_CipherText_mAB2EA2B19CDD9767567825024156FC1357581C78_inline(L_18, L_21, CryptoInfo_1_set_CipherText_mAB2EA2B19CDD9767567825024156FC1357581C78_RuntimeMethod_var);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_22 = L_17;
		NullCheck(L_22);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_23;
		L_23 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_22, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_24 = ___dto0;
		NullCheck(L_24);
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_25;
		L_25 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_24, NULL);
		NullCheck(L_25);
		String_t* L_26;
		L_26 = CryptoInfoDTOBase_get_kdf_m37F91BCF553659BC936ACA04FBE68BAD0AD09703_inline(L_25, NULL);
		NullCheck(L_23);
		CryptoInfo_1_set_Kdf_m2F4F184EA3A7B6112EF18F1FBA70CFF2140270E0_inline(L_23, L_26, CryptoInfo_1_set_Kdf_m2F4F184EA3A7B6112EF18F1FBA70CFF2140270E0_RuntimeMethod_var);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_27 = L_22;
		NullCheck(L_27);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_28;
		L_28 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_27, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_29 = ___dto0;
		NullCheck(L_29);
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_30;
		L_30 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_29, NULL);
		NullCheck(L_30);
		String_t* L_31;
		L_31 = CryptoInfoDTOBase_get_mac_m832D5DAE6B8D34645CB12D6C1EF621E8247053DB_inline(L_30, NULL);
		NullCheck(L_28);
		CryptoInfo_1_set_Mac_m57B69D5B6017597A4263D7C4130DF4E5E81AE667_inline(L_28, L_31, CryptoInfo_1_set_Mac_m57B69D5B6017597A4263D7C4130DF4E5E81AE667_RuntimeMethod_var);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_32 = L_27;
		NullCheck(L_32);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_33;
		L_33 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_32, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_34 = (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779*)il2cpp_codegen_object_new(ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		ScryptParams__ctor_m5DC4BDC83AC01594CA6FCBED4B0AE865F33229FD(L_34, NULL);
		NullCheck(L_33);
		CryptoInfo_1_set_Kdfparams_m496DF4ECF94CFBFC730A619DFF35E8536275BFAB_inline(L_33, L_34, CryptoInfo_1_set_Kdfparams_m496DF4ECF94CFBFC730A619DFF35E8536275BFAB_RuntimeMethod_var);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_35 = L_32;
		NullCheck(L_35);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_36;
		L_36 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_35, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		NullCheck(L_36);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_37;
		L_37 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_36, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_38 = ___dto0;
		NullCheck(L_38);
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_39;
		L_39 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_38, NULL);
		NullCheck(L_39);
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_40;
		L_40 = CryptoInfoScryptDTO_get_kdfparams_m88558053C3D05D95A823EC4DB490A6F85518808A_inline(L_39, NULL);
		NullCheck(L_40);
		int32_t L_41;
		L_41 = ScryptParamsDTO_get_r_mD2EED1B5689E035883BB29D9BD1A8B303412DF65_inline(L_40, NULL);
		NullCheck(L_37);
		ScryptParams_set_R_m9AD9236A19430A9B44EFA3301D417E7F665FDAAE_inline(L_37, L_41, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_42 = L_35;
		NullCheck(L_42);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_43;
		L_43 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_42, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		NullCheck(L_43);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_44;
		L_44 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_43, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_45 = ___dto0;
		NullCheck(L_45);
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_46;
		L_46 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_45, NULL);
		NullCheck(L_46);
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_47;
		L_47 = CryptoInfoScryptDTO_get_kdfparams_m88558053C3D05D95A823EC4DB490A6F85518808A_inline(L_46, NULL);
		NullCheck(L_47);
		int32_t L_48;
		L_48 = ScryptParamsDTO_get_n_m3FF77C12A496BB3D66BDB6EDB8DAF21525CE2AB8_inline(L_47, NULL);
		NullCheck(L_44);
		ScryptParams_set_N_mD7A43E5EAAB1D1C3D9AFE496F7ED17549AC7D670_inline(L_44, L_48, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_49 = L_42;
		NullCheck(L_49);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_50;
		L_50 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_49, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		NullCheck(L_50);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_51;
		L_51 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_50, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_52 = ___dto0;
		NullCheck(L_52);
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_53;
		L_53 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_52, NULL);
		NullCheck(L_53);
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_54;
		L_54 = CryptoInfoScryptDTO_get_kdfparams_m88558053C3D05D95A823EC4DB490A6F85518808A_inline(L_53, NULL);
		NullCheck(L_54);
		int32_t L_55;
		L_55 = ScryptParamsDTO_get_p_m19884391C68271FF5FB3BEF1CF2935DE29E834F1_inline(L_54, NULL);
		NullCheck(L_51);
		ScryptParams_set_P_m54B8987AEE116A5F01F276FB41F5B7BD6CE93FD7_inline(L_51, L_55, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_56 = L_49;
		NullCheck(L_56);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_57;
		L_57 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_56, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		NullCheck(L_57);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_58;
		L_58 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_57, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_59 = ___dto0;
		NullCheck(L_59);
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_60;
		L_60 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_59, NULL);
		NullCheck(L_60);
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_61;
		L_61 = CryptoInfoScryptDTO_get_kdfparams_m88558053C3D05D95A823EC4DB490A6F85518808A_inline(L_60, NULL);
		NullCheck(L_61);
		int32_t L_62;
		L_62 = KdfParamsDTO_get_dklen_mF4F94F51F353F4A8CF43F2D9BD782FB90FF8142D_inline(L_61, NULL);
		NullCheck(L_58);
		KdfParams_set_Dklen_m8873AE7294C28118FDADC3F76AB3FCCA12ED0A9E_inline(L_58, L_62, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_63 = L_56;
		NullCheck(L_63);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_64;
		L_64 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_63, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		NullCheck(L_64);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_65;
		L_65 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_64, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_66 = ___dto0;
		NullCheck(L_66);
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_67;
		L_67 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_66, NULL);
		NullCheck(L_67);
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_68;
		L_68 = CryptoInfoScryptDTO_get_kdfparams_m88558053C3D05D95A823EC4DB490A6F85518808A_inline(L_67, NULL);
		NullCheck(L_68);
		String_t* L_69;
		L_69 = KdfParamsDTO_get_salt_m6238900E8629F7663690AD6E1E4C2FF99E8F35ED_inline(L_68, NULL);
		NullCheck(L_65);
		KdfParams_set_Salt_m578F3DA59E3C91B1C70F13793C6926210CE139F7_inline(L_65, L_69, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_70 = L_63;
		NullCheck(L_70);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_71;
		L_71 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_70, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* L_72 = (CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0*)il2cpp_codegen_object_new(CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0_il2cpp_TypeInfo_var);
		NullCheck(L_72);
		CipherParams__ctor_m6EF7551DAA09455A6D0CB9B5E98BA76CCD98072A(L_72, NULL);
		NullCheck(L_71);
		CryptoInfo_1_set_CipherParams_mE008C30F61B193220181F8571E9B22669BC1C7E4_inline(L_71, L_72, CryptoInfo_1_set_CipherParams_mE008C30F61B193220181F8571E9B22669BC1C7E4_RuntimeMethod_var);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_73 = L_70;
		NullCheck(L_73);
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_74;
		L_74 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_73, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		NullCheck(L_74);
		CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* L_75;
		L_75 = CryptoInfo_1_get_CipherParams_mCE5052AB3E08620D0675291DD4A9F0B453F1DC37_inline(L_74, CryptoInfo_1_get_CipherParams_mCE5052AB3E08620D0675291DD4A9F0B453F1DC37_RuntimeMethod_var);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_76 = ___dto0;
		NullCheck(L_76);
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_77;
		L_77 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_76, NULL);
		NullCheck(L_77);
		CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* L_78;
		L_78 = CryptoInfoDTOBase_get_cipherparams_mE9D29F3332F2FC754DE4C29BC8C183F08A389F77_inline(L_77, NULL);
		NullCheck(L_78);
		String_t* L_79;
		L_79 = CipherParamsDTO_get_iv_m9A9BB6EC013B70B8EE1542B30F8644D520FEE92C_inline(L_78, NULL);
		NullCheck(L_75);
		CipherParams_set_Iv_mE77D6319BE01333E7B3F6F7F98453DABAE5BB6C6_inline(L_75, L_79, NULL);
		return L_73;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.JsonKeyStoreScryptSerialiser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonKeyStoreScryptSerialiser__ctor_m75795A4A879132B329C995036EB0D5CDD696EDE0 (JsonKeyStoreScryptSerialiser_t527A36BD8AB4E3C5573349D68CCC35AC56B7A6FC* __this, const RuntimeMethod* method) 
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
// System.Int32 Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::get_dklen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KdfParamsDTO_get_dklen_mF4F94F51F353F4A8CF43F2D9BD782FB90FF8142D (KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CdklenU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::set_dklen(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KdfParamsDTO_set_dklen_mA75B7F4B76A3E1E4D4D3F7C139F0CF15A097A0A6 (KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CdklenU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::get_salt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KdfParamsDTO_get_salt_m6238900E8629F7663690AD6E1E4C2FF99E8F35ED (KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CsaltU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::set_salt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KdfParamsDTO_set_salt_m1D5465724D0D2EC60A15AE7671FC6AC7266052F2 (KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CsaltU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsaltU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KdfParamsDTO__ctor_m33FABA503A55656C7E129E3D0EBCC23D1C6348A3 (KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13* __this, const RuntimeMethod* method) 
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
// System.String Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyStoreDTOBase_get_id_mFDCD569677A39C6B99970D2C598D7587EFB2E77C (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreDTOBase_set_id_m764A98BA5E66E066334464B230ED752BA37A1905 (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::get_address()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyStoreDTOBase_get_address_m0134A1C538EC96FD7F883CF2B69E95EA0CAB0FD3 (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CaddressU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::set_address(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreDTOBase_set_address_m4E71FF95A9D7900DD962E9C8EDA24D1053EC5C5D (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CaddressU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaddressU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Int32 Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::get_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyStoreDTOBase_get_version_m7F00B43A9B900EE11DDA1E69DB08CCB03C5BE9ED (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CversionU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::set_version(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreDTOBase_set_version_m8891C2744FDC8C814E198F4C66AF3F1E87F0180F (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CversionU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreDTOBase__ctor_m0D44032DCB424D46C0967E5AE492860854200F0F (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, const RuntimeMethod* method) 
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
// System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStorePbkdf2DTO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStorePbkdf2DTO__ctor_m4887CBA5A3529DA8BA4DABD07C930880F935D1BD (KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyStoreDTOBase__ctor_m0D44032DCB424D46C0967E5AE492860854200F0F(__this, NULL);
		CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* L_0 = (CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF*)il2cpp_codegen_object_new(CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CryptoInfoPbkdf2DTO__ctor_mF09BE01088667CDB3633838BEC8D6C57C50F72AD(L_0, NULL);
		KeyStorePbkdf2DTO_set_crypto_mBD64474DF76F8511397F3F8387859843E2F8D696_inline(__this, L_0, NULL);
		return;
	}
}
// Nethereum.KeyStore.JsonDeserialisation.CryptoInfoPbkdf2DTO Nethereum.KeyStore.JsonDeserialisation.KeyStorePbkdf2DTO::get_crypto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* KeyStorePbkdf2DTO_get_crypto_mC816727DC3C94366BFED80AC35CAA2AA39CED861 (KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* __this, const RuntimeMethod* method) 
{
	{
		CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* L_0 = __this->___U3CcryptoU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStorePbkdf2DTO::set_crypto(Nethereum.KeyStore.JsonDeserialisation.CryptoInfoPbkdf2DTO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStorePbkdf2DTO_set_crypto_mBD64474DF76F8511397F3F8387859843E2F8D696 (KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* __this, CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* ___value0, const RuntimeMethod* method) 
{
	{
		CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* L_0 = ___value0;
		__this->___U3CcryptoU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcryptoU3Ek__BackingField_3), (void*)L_0);
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
// System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreScryptDTO__ctor_m92B3E01F3801D999CDFF37E7D28A10EA14421472 (KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyStoreDTOBase__ctor_m0D44032DCB424D46C0967E5AE492860854200F0F(__this, NULL);
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_0 = (CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B*)il2cpp_codegen_object_new(CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CryptoInfoScryptDTO__ctor_m4D5FE44A524F51AB6585157B0D17B6B135ECB074(L_0, NULL);
		KeyStoreScryptDTO_set_crypto_m6B338293B428CD65FBC9511AF668A777FDA99892_inline(__this, L_0, NULL);
		return;
	}
}
// Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO::get_crypto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B (KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* __this, const RuntimeMethod* method) 
{
	{
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_0 = __this->___U3CcryptoU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO::set_crypto(Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreScryptDTO_set_crypto_m6B338293B428CD65FBC9511AF668A777FDA99892 (KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* __this, CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* ___value0, const RuntimeMethod* method) 
{
	{
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_0 = ___value0;
		__this->___U3CcryptoU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcryptoU3Ek__BackingField_3), (void*)L_0);
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
// System.Int32 Nethereum.KeyStore.JsonDeserialisation.Pbkdf2ParamsDTO::get_c()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pbkdf2ParamsDTO_get_c_m3B13666602544BAA07A393358D4A7702A80FD03F (Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CcU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.Pbkdf2ParamsDTO::set_c(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pbkdf2ParamsDTO_set_c_m4BA1D6942D9986166E02014DBB6843C5A25230FE (Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CcU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String Nethereum.KeyStore.JsonDeserialisation.Pbkdf2ParamsDTO::get_prf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Pbkdf2ParamsDTO_get_prf_m9A05AF9E39269FB7A363F6744E0FC201B9CCFE04 (Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CprfU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.Pbkdf2ParamsDTO::set_prf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pbkdf2ParamsDTO_set_prf_m4E5CBB3B28E1A63DB33B64CBD240667842DFFBC5 (Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CprfU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CprfU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.Pbkdf2ParamsDTO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pbkdf2ParamsDTO__ctor_m020C89B6B463C246BA058B1A93C7977FE6B376FE (Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* __this, const RuntimeMethod* method) 
{
	{
		KdfParamsDTO__ctor_m33FABA503A55656C7E129E3D0EBCC23D1C6348A3(__this, NULL);
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
// System.Int32 Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::get_n()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScryptParamsDTO_get_n_m3FF77C12A496BB3D66BDB6EDB8DAF21525CE2AB8 (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CnU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::set_n(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptParamsDTO_set_n_mF43334DBC344EFF9F8DCED73543A5A25847A6A55 (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CnU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::get_r()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScryptParamsDTO_get_r_mD2EED1B5689E035883BB29D9BD1A8B303412DF65 (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CrU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::set_r(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptParamsDTO_set_r_m9EA349D301AF31CBC06A4204807852BC10B8772B (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CrU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::get_p()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScryptParamsDTO_get_p_m19884391C68271FF5FB3BEF1CF2935DE29E834F1 (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CpU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::set_p(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptParamsDTO_set_p_m2A2C1324B4C9F90F65E916EB957EDB148865DF45 (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CpU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptParamsDTO__ctor_m44F6BFB85D6013B5CC771EF78AB158D283A58CDD (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, const RuntimeMethod* method) 
{
	{
		KdfParamsDTO__ctor_m33FABA503A55656C7E129E3D0EBCC23D1C6348A3(__this, NULL);
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
// System.Void Nethereum.KeyStore.Crypto.DecryptionException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecryptionException__ctor_m77BC09FFF4E1BA18CF1E1F7CF0342BC72A274097 (DecryptionException_t475B93777EFB780713433EEB8305E4BDCCF42738* __this, String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___msg0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
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
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::GenerateDerivedScryptKey(System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GenerateDerivedScryptKey_mD84A7413EE9B46393273F5D0B8E928AFFDD4F372 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt1, int32_t ___n2, int32_t ___r3, int32_t ___p4, int32_t ___dkLen5, bool ___checkRandN6, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___checkRandN6;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = ___r3;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = ___n2;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)65536))))
		{
			goto IL_001c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral90AF97DD8EF1877A399A4D1D1AF32DE07CB7CA27)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStoreCrypto_GenerateDerivedScryptKey_mD84A7413EE9B46393273F5D0B8E928AFFDD4F372_RuntimeMethod_var)));
	}

IL_001c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___password0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___salt1;
		int32_t L_6 = ___n2;
		int32_t L_7 = ___r3;
		int32_t L_8 = ___p4;
		int32_t L_9 = ___dkLen5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = ScryptNet_CryptoScrypt_m5AAEB7E15BBC29209AB45FA6EB93C8602A7BF7F8(L_4, L_5, L_6, L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::GenerateCipherKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GenerateCipherKey_m343F6812E73E26C26D086556CCC3D0022D717864 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___derivedKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___derivedKey0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_1, (RuntimeArray*)L_2, ((int32_t)16), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		return L_3;
	}
}
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::CalculateKeccakHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_CalculateKeccakHash_mC8A981BED599BCAE5AC30BF291A2E96620C1B35B (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* L_0 = (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8*)il2cpp_codegen_object_new(KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		KeccakDigest__ctor_m1D83E44DC559F9E747241A63E130AF770D442FCF(L_0, ((int32_t)256), NULL);
		KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::GetDigestSize() */, L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* L_4 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___value0;
		NullCheck(L_6);
		NullCheck(L_4);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(16 /* System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, ((int32_t)(((RuntimeArray*)L_6)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_4);
		int32_t L_8;
		L_8 = VirtualFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(17 /* System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::DoFinal(System.Byte[],System.Int32) */, L_4, L_7, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		return L_9;
	}
}
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::CalculateSha256Hash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_CalculateSha256Hash_mD0A18CCEFAE525AE57F8A0084F63B8ACCE1257D3 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A* L_0 = (Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A*)il2cpp_codegen_object_new(Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Sha256Digest__ctor_m6A98252E0DAF748D5D1BDBCDA91042301B1657D8(L_0, NULL);
		Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 Org.BouncyCastle.Crypto.Digests.GeneralDigest::GetDigestSize() */, L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A* L_4 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___value0;
		NullCheck(L_6);
		NullCheck(L_4);
		GeneralDigest_BlockUpdate_mC80B155521BF0C0099B078C6E36419687A11568F(L_4, L_5, 0, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_4);
		int32_t L_8;
		L_8 = VirtualFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(19 /* System.Int32 Org.BouncyCastle.Crypto.Digests.GeneralDigest::DoFinal(System.Byte[],System.Int32) */, L_4, L_7, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		return L_9;
	}
}
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::HmacSha256(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_HmacSha256_mE10D382E5551781221692C6CC7F4AD0D5AA7ADBE (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HMac_t6F0768FC92486A4BB51A39C74FBAB8B4B8CFB607_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A* L_0 = (Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A*)il2cpp_codegen_object_new(Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Sha256Digest__ctor_m6A98252E0DAF748D5D1BDBCDA91042301B1657D8(L_0, NULL);
		HMac_t6F0768FC92486A4BB51A39C74FBAB8B4B8CFB607* L_1 = (HMac_t6F0768FC92486A4BB51A39C74FBAB8B4B8CFB607*)il2cpp_codegen_object_new(HMac_t6F0768FC92486A4BB51A39C74FBAB8B4B8CFB607_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HMac__ctor_m668C4136EFC2B472FC9300D118CE72D0C07F9D5B(L_1, L_0, NULL);
		HMac_t6F0768FC92486A4BB51A39C74FBAB8B4B8CFB607* L_2 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___key1;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_4 = (KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)il2cpp_codegen_object_new(KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		KeyParameter__ctor_m178EFF09A4FE23B3FD358AB94605EC4528FBF093(L_4, L_3, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(13 /* System.Void Org.BouncyCastle.Crypto.Macs.HMac::Init(Org.BouncyCastle.Crypto.ICipherParameters) */, L_2, L_4);
		HMac_t6F0768FC92486A4BB51A39C74FBAB8B4B8CFB607* L_5 = L_2;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 Org.BouncyCastle.Crypto.Macs.HMac::GetMacSize() */, L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_0 = L_7;
		HMac_t6F0768FC92486A4BB51A39C74FBAB8B4B8CFB607* L_8 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___data0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___data0;
		NullCheck(L_10);
		NullCheck(L_8);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(16 /* System.Void Org.BouncyCastle.Crypto.Macs.HMac::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, 0, ((int32_t)(((RuntimeArray*)L_10)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_8);
		int32_t L_12;
		L_12 = VirtualFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(17 /* System.Int32 Org.BouncyCastle.Crypto.Macs.HMac::DoFinal(System.Byte[],System.Int32) */, L_8, L_11, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		return L_13;
	}
}
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::GenerateMac(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GenerateMac_mC6C9A66E314C1298593041FE80E0037FB4ECAF99 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___derivedKey0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cipherText1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___cipherText1;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)16), ((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___derivedKey0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, ((int32_t)16), (RuntimeArray*)L_3, 0, ((int32_t)16), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___cipherText1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___cipherText1;
		NullCheck(L_6);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, ((int32_t)16), ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = KeyStoreCrypto_CalculateKeccakHash_mC8A981BED599BCAE5AC30BF291A2E96620C1B35B(__this, L_7, NULL);
		return L_8;
	}
}
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::GeneratePbkdf2Sha256DerivedKey(System.String,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GeneratePbkdf2Sha256DerivedKey_m6A66CF985ECAAC09F48F5A23B62D3EDFE918BB05 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, String_t* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt1, int32_t ___count2, int32_t ___dklen3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A* L_0 = (Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A*)il2cpp_codegen_object_new(Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Sha256Digest__ctor_m6A98252E0DAF748D5D1BDBCDA91042301B1657D8(L_0, NULL);
		Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D* L_1 = (Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D*)il2cpp_codegen_object_new(Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Pkcs5S2ParametersGenerator__ctor_m43D8AC42079DF38586045859373DF2C8825A6C71(L_1, L_0, NULL);
		Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D* L_2 = L_1;
		String_t* L_3 = ___password0;
		NullCheck(L_3);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4;
		L_4 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = PbeParametersGenerator_Pkcs5PasswordToUtf8Bytes_mF4BE2279157A14D42D973D2C5A022922A6D552DA(L_4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___salt1;
		int32_t L_7 = ___count2;
		NullCheck(L_2);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.PbeParametersGenerator::Init(System.Byte[],System.Byte[],System.Int32) */, L_2, L_5, L_6, L_7);
		int32_t L_8 = ___dklen3;
		NullCheck(L_2);
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(12 /* Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.PbeParametersGenerator::GenerateDerivedMacParameters(System.Int32) */, L_2, ((int32_t)il2cpp_codegen_multiply(8, L_8)));
		NullCheck(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_9, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_9, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)), NULL);
		return L_10;
	}
}
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::GenerateAesCtrCipher(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GenerateAesCtrCipher_mAEAC7F39874147CD2A0A3E3FD499934FFAEA0991 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___encryptKey1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CipherUtilities_tDA37832A133C3F502C98888EA1477FBA0EF5F8F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterUtilities_t2330968701206F630234AD4A65667E7CAEE14EAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral423ACA01AC170A50869ECDEF572CD96995576718);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC78E78B6EC5C50ADC67D977E0F4C67424995CE6);
		s_Il2CppMethodInitialized = true;
	}
	ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___encryptKey1;
		il2cpp_codegen_runtime_class_init_inline(ParameterUtilities_t2330968701206F630234AD4A65667E7CAEE14EAF_il2cpp_TypeInfo_var);
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_1;
		L_1 = ParameterUtilities_CreateKeyParameter_m503070D02626F2E547CED69879BB7A359ED9ED19(_stringLiteral423ACA01AC170A50869ECDEF572CD96995576718, L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___iv0;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_3 = (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)il2cpp_codegen_object_new(ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ParametersWithIV__ctor_mC1B4901D3CEBECE5903FE14597AA0701B7B7C994(L_3, L_1, L_2, NULL);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(CipherUtilities_tDA37832A133C3F502C98888EA1477FBA0EF5F8F8_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = CipherUtilities_GetCipher_m120CBF0B698B4B035A827FF2E710AD7B170DC615(_stringLiteralAC78E78B6EC5C50ADC67D977E0F4C67424995CE6, NULL);
		RuntimeObject* L_5 = L_4;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_6 = V_0;
		NullCheck(L_5);
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBufferedCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292_il2cpp_TypeInfo_var, L_5, (bool)1, L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___input2;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = InterfaceFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(12 /* System.Byte[] Org.BouncyCastle.Crypto.IBufferedCipher::DoFinal(System.Byte[]) */, IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292_il2cpp_TypeInfo_var, L_5, L_7);
		return L_8;
	}
}
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::GenerateAesCtrDeCipher(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GenerateAesCtrDeCipher_m8DC6546D8E8AA27918330315B9121A5E7C980736 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___encryptKey1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CipherUtilities_tDA37832A133C3F502C98888EA1477FBA0EF5F8F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterUtilities_t2330968701206F630234AD4A65667E7CAEE14EAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral423ACA01AC170A50869ECDEF572CD96995576718);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC78E78B6EC5C50ADC67D977E0F4C67424995CE6);
		s_Il2CppMethodInitialized = true;
	}
	ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___encryptKey1;
		il2cpp_codegen_runtime_class_init_inline(ParameterUtilities_t2330968701206F630234AD4A65667E7CAEE14EAF_il2cpp_TypeInfo_var);
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_1;
		L_1 = ParameterUtilities_CreateKeyParameter_m503070D02626F2E547CED69879BB7A359ED9ED19(_stringLiteral423ACA01AC170A50869ECDEF572CD96995576718, L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___iv0;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_3 = (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)il2cpp_codegen_object_new(ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ParametersWithIV__ctor_mC1B4901D3CEBECE5903FE14597AA0701B7B7C994(L_3, L_1, L_2, NULL);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(CipherUtilities_tDA37832A133C3F502C98888EA1477FBA0EF5F8F8_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = CipherUtilities_GetCipher_m120CBF0B698B4B035A827FF2E710AD7B170DC615(_stringLiteralAC78E78B6EC5C50ADC67D977E0F4C67424995CE6, NULL);
		RuntimeObject* L_5 = L_4;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_6 = V_0;
		NullCheck(L_5);
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBufferedCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292_il2cpp_TypeInfo_var, L_5, (bool)0, L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___input2;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = InterfaceFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(12 /* System.Byte[] Org.BouncyCastle.Crypto.IBufferedCipher::DoFinal(System.Byte[]) */, IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292_il2cpp_TypeInfo_var, L_5, L_7);
		return L_8;
	}
}
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::DecryptScrypt(System.String,System.Byte[],System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_DecryptScrypt_m828C9ED4E8F3A128B449D0AA91CC498B2EBE6524 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, String_t* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mac1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cipherText3, int32_t ___n4, int32_t ___p5, int32_t ___r6, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt7, int32_t ___dklen8, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		String_t* L_0 = ___password0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = KeyStoreCrypto_GetPasswordAsBytes_mA2E8301D37E8A83B376BAF88F222636728A9AF93(__this, L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___salt7;
		int32_t L_3 = ___n4;
		int32_t L_4 = ___r6;
		int32_t L_5 = ___p5;
		int32_t L_6 = ___dklen8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = KeyStoreCrypto_GenerateDerivedScryptKey_mD84A7413EE9B46393273F5D0B8E928AFFDD4F372(__this, L_1, L_2, L_3, L_4, L_5, L_6, (bool)0, NULL);
		V_0 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___mac1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___iv2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___cipherText3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = KeyStoreCrypto_Decrypt_m69545AE305F21FD8AEA6EB106CE35AF55812E0DA(__this, L_8, L_9, L_10, L_11, NULL);
		return L_12;
	}
}
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::DecryptPbkdf2Sha256(System.String,System.Byte[],System.Byte[],System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_DecryptPbkdf2Sha256_m463E4D366891F0379AEF5AB08590E45DC666A228 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, String_t* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mac1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cipherText3, int32_t ___c4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt5, int32_t ___dklen6, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		String_t* L_0 = ___password0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___salt5;
		int32_t L_2 = ___c4;
		int32_t L_3 = ___dklen6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = KeyStoreCrypto_GeneratePbkdf2Sha256DerivedKey_m6A66CF985ECAAC09F48F5A23B62D3EDFE918BB05(__this, L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___mac1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___iv2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___cipherText3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = KeyStoreCrypto_Decrypt_m69545AE305F21FD8AEA6EB106CE35AF55812E0DA(__this, L_5, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::Decrypt(System.Byte[],System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_Decrypt_m69545AE305F21FD8AEA6EB106CE35AF55812E0DA (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mac0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cipherText2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___derivedKey3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___mac0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___cipherText2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___derivedKey3;
		KeyStoreCrypto_ValidateMac_m50D46430C5F2BF65B89B4AA49C96E62788EC5D01(__this, L_0, L_1, L_2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___derivedKey3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_4, (RuntimeArray*)L_5, ((int32_t)16), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___iv1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___cipherText2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = KeyStoreCrypto_GenerateAesCtrCipher_mAEAC7F39874147CD2A0A3E3FD499934FFAEA0991(__this, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
// System.Void Nethereum.KeyStore.Crypto.KeyStoreCrypto::ValidateMac(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreCrypto_ValidateMac_m50D46430C5F2BF65B89B4AA49C96E62788EC5D01 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mac0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cipherText1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___derivedKey2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___derivedKey2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___cipherText1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = KeyStoreCrypto_GenerateMac_mC6C9A66E314C1298593041FE80E0037FB4ECAF99(__this, L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_2, (bool)0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___mac0;
		String_t* L_5;
		L_5 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_4, (bool)0, NULL);
		bool L_6;
		L_6 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_3, L_5, NULL);
		if (!L_6)
		{
			goto IL_0027;
		}
	}
	{
		DecryptionException_t475B93777EFB780713433EEB8305E4BDCCF42738* L_7 = (DecryptionException_t475B93777EFB780713433EEB8305E4BDCCF42738*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecryptionException_t475B93777EFB780713433EEB8305E4BDCCF42738_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		DecryptionException__ctor_m77BC09FFF4E1BA18CF1E1F7CF0342BC72A274097(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB7248681F5E1332CF3625028F368C8C55C58D51C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStoreCrypto_ValidateMac_m50D46430C5F2BF65B89B4AA49C96E62788EC5D01_RuntimeMethod_var)));
	}

IL_0027:
	{
		return;
	}
}
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::GetPasswordAsBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GetPasswordAsBytes_mA2E8301D37E8A83B376BAF88F222636728A9AF93 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, String_t* ___password0, const RuntimeMethod* method) 
{
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___password0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Nethereum.KeyStore.Crypto.KeyStoreCrypto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreCrypto__ctor_mCD1EE469A35D2E0310F6AA84268229B1BB8F8354 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, const RuntimeMethod* method) 
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
// System.Byte[] Nethereum.KeyStore.Crypto.RandomBytesGenerator::GenerateRandomInitialisationVector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RandomBytesGenerator_GenerateRandomInitialisationVector_m0F3A6A3E966BC2F7E8CD4F5AC11A995078E8A223 (RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = RandomBytesGenerator_GenerateRandomBytes_m295AE07A9AEDFF1967610054AD8FC24EC08A7FA9(__this, ((int32_t)16), NULL);
		return L_0;
	}
}
// System.Byte[] Nethereum.KeyStore.Crypto.RandomBytesGenerator::GenerateRandomSalt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RandomBytesGenerator_GenerateRandomSalt_m90B6D9D48D6302C09A213727920A2830FDB5E162 (RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = RandomBytesGenerator_GenerateRandomBytes_m295AE07A9AEDFF1967610054AD8FC24EC08A7FA9(__this, ((int32_t)32), NULL);
		return L_0;
	}
}
// System.Byte[] Nethereum.KeyStore.Crypto.RandomBytesGenerator::GenerateRandomBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RandomBytesGenerator_GenerateRandomBytes_m295AE07A9AEDFF1967610054AD8FC24EC08A7FA9 (RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B* __this, int32_t ___size0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		int32_t L_0 = ___size0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B_il2cpp_TypeInfo_var);
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_2 = ((RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B_StaticFields*)il2cpp_codegen_static_fields_for(RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B_il2cpp_TypeInfo_var))->___Random_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		NullCheck(L_2);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9 /* System.Void System.Random::NextBytes(System.Byte[]) */, L_2, L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		return L_4;
	}
}
// System.Void Nethereum.KeyStore.Crypto.RandomBytesGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomBytesGenerator__ctor_mB18EF14C65706EA148601B97467C13BA91F5345C (RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Nethereum.KeyStore.Crypto.RandomBytesGenerator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomBytesGenerator__cctor_mEEEC7489161C8F174027D07573589D55C9CE453F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_0 = (SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076*)il2cpp_codegen_object_new(SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SecureRandom__ctor_m1FB3C478CD5CC4CDF68C981D8F5F89FC8EF8CC68(L_0, NULL);
		((RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B_StaticFields*)il2cpp_codegen_static_fields_for(RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B_il2cpp_TypeInfo_var))->___Random_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B_StaticFields*)il2cpp_codegen_static_fields_for(RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B_il2cpp_TypeInfo_var))->___Random_0), (void*)L_0);
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
// System.Byte[] Nethereum.KeyStore.Crypto.ScryptNet::SingleIterationPBKDF2(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ScryptNet_SingleIterationPBKDF2_m5C15EBEBF23B38F84C60D6690A18031F501F6790 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___P0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S1, int32_t ___dkLen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A* L_0 = (Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A*)il2cpp_codegen_object_new(Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Sha256Digest__ctor_m6A98252E0DAF748D5D1BDBCDA91042301B1657D8(L_0, NULL);
		Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D* L_1 = (Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D*)il2cpp_codegen_object_new(Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Pkcs5S2ParametersGenerator__ctor_m43D8AC42079DF38586045859373DF2C8825A6C71(L_1, L_0, NULL);
		Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D* L_2 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___P0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___S1;
		NullCheck(L_2);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.PbeParametersGenerator::Init(System.Byte[],System.Byte[],System.Int32) */, L_2, L_3, L_4, 1);
		int32_t L_5 = ___dkLen2;
		NullCheck(L_2);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(12 /* Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.PbeParametersGenerator::GenerateDerivedMacParameters(System.Int32) */, L_2, ((int32_t)il2cpp_codegen_multiply(L_5, 8)));
		NullCheck(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_6, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_6, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)), NULL);
		return L_7;
	}
}
// System.Byte[] Nethereum.KeyStore.Crypto.ScryptNet::CryptoScrypt(System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ScryptNet_CryptoScrypt_m5AAEB7E15BBC29209AB45FA6EB93C8602A7BF7F8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt1, int32_t ___N2, int32_t ___r3, int32_t ___p4, int32_t ___dkLen5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	void* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	void* V_5 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	int32_t V_7 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B4_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B4_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B6_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B5_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B7_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B8_0 = NULL;
	{
		int32_t L_0 = ___r3;
		int32_t L_1 = ___p4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)128), L_0)), L_1)), ((int32_t)63))));
		V_0 = L_2;
		int32_t L_3 = ___r3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)256), L_3)), ((int32_t)63))));
		int32_t L_5 = ___r3;
		int32_t L_6 = ___N2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)128), L_5)), L_6)), ((int32_t)63))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___password0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___salt1;
		int32_t L_11 = ___p4;
		int32_t L_12 = ___r3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = ScryptNet_SingleIterationPBKDF2_m5C15EBEBF23B38F84C60D6690A18031F501F6790(L_9, L_10, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)128))), L_12)), NULL);
		V_0 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14;
		V_2 = L_15;
		G_B1_0 = L_7;
		G_B1_1 = L_4;
		if (!L_15)
		{
			G_B2_0 = L_7;
			G_B2_1 = L_4;
			goto IL_0057;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_2;
		NullCheck(L_16);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
		if (((int32_t)(((RuntimeArray*)L_16)->max_length)))
		{
			G_B3_0 = G_B1_0;
			G_B3_1 = G_B1_1;
			goto IL_005c;
		}
	}

IL_0057:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		G_B4_0 = G_B2_0;
		G_B4_1 = G_B2_1;
		goto IL_0065;
	}

IL_005c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_2;
		NullCheck(L_17);
		V_1 = (uint8_t*)((uintptr_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_0065:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = G_B4_0;
		V_4 = L_18;
		G_B5_0 = G_B4_1;
		if (!L_18)
		{
			G_B6_0 = G_B4_1;
			goto IL_0070;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_4;
		NullCheck(L_19);
		G_B6_0 = G_B5_0;
		if (((int32_t)(((RuntimeArray*)L_19)->max_length)))
		{
			G_B7_0 = G_B5_0;
			goto IL_0075;
		}
	}

IL_0070:
	{
		V_3 = (void*)((uintptr_t)0);
		G_B8_0 = G_B6_0;
		goto IL_007f;
	}

IL_0075:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_4;
		NullCheck(L_20);
		V_3 = (void*)((uintptr_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
		G_B8_0 = G_B7_0;
	}

IL_007f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = G_B8_0;
		V_6 = L_21;
		if (!L_21)
		{
			goto IL_008a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_6;
		NullCheck(L_22);
		if (((int32_t)(((RuntimeArray*)L_22)->max_length)))
		{
			goto IL_0090;
		}
	}

IL_008a:
	{
		V_5 = (void*)((uintptr_t)0);
		goto IL_009b;
	}

IL_0090:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_6;
		NullCheck(L_23);
		V_5 = (void*)((uintptr_t)((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_009b:
	{
		V_7 = 0;
		goto IL_00bd;
	}

IL_00a0:
	{
		uint8_t* L_24 = V_1;
		int32_t L_25 = V_7;
		int32_t L_26 = ___r3;
		int32_t L_27 = ___r3;
		int32_t L_28 = ___N2;
		void* L_29 = V_3;
		void* L_30 = V_5;
		ScryptNet_SMix_m14952E992EC6AEEB26E9D84AE1C6471C1546F246((uint8_t*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_24, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_25, ((int32_t)128))), L_26))))), L_27, L_28, (uint32_t*)L_29, (uint32_t*)L_30, NULL);
		int32_t L_31 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00bd:
	{
		int32_t L_32 = V_7;
		int32_t L_33 = ___p4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_00a0;
		}
	}
	{
		V_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		V_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		V_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___password0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_0;
		int32_t L_36 = ___dkLen5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37;
		L_37 = ScryptNet_SingleIterationPBKDF2_m5C15EBEBF23B38F84C60D6690A18031F501F6790(L_34, L_35, L_36, NULL);
		return L_37;
	}
}
// System.Void Nethereum.KeyStore.Crypto.ScryptNet::BulkCopy(System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptNet_BulkCopy_m02C41323623B15BE75F69BAF6CC1B679B5CFBC29 (void* ___dst0, void* ___src1, int32_t ___len2, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		void* L_0 = ___dst0;
		V_0 = (uint8_t*)L_0;
		void* L_1 = ___src1;
		V_1 = (uint8_t*)L_1;
		goto IL_0017;
	}

IL_0006:
	{
		uint8_t* L_2 = V_0;
		uint8_t* L_3 = V_1;
		int64_t L_4 = *((int64_t*)L_3);
		*((int64_t*)L_2) = (int64_t)L_4;
		uint8_t* L_5 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, 8));
		uint8_t* L_6 = V_1;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, 8));
		int32_t L_7 = ___len2;
		___len2 = ((int32_t)il2cpp_codegen_subtract(L_7, 8));
	}

IL_0017:
	{
		int32_t L_8 = ___len2;
		if ((((int32_t)L_8) >= ((int32_t)8)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_9 = ___len2;
		if ((((int32_t)L_9) < ((int32_t)4)))
		{
			goto IL_0030;
		}
	}
	{
		uint8_t* L_10 = V_0;
		uint8_t* L_11 = V_1;
		int32_t L_12 = *((uint32_t*)L_11);
		*((int32_t*)L_10) = (int32_t)L_12;
		uint8_t* L_13 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, 4));
		uint8_t* L_14 = V_1;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_14, 4));
		int32_t L_15 = ___len2;
		___len2 = ((int32_t)il2cpp_codegen_subtract(L_15, 4));
	}

IL_0030:
	{
		int32_t L_16 = ___len2;
		if ((((int32_t)L_16) < ((int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		uint8_t* L_17 = V_0;
		uint8_t* L_18 = V_1;
		int32_t L_19 = *((uint16_t*)L_18);
		*((int16_t*)L_17) = (int16_t)L_19;
		uint8_t* L_20 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, 2));
		uint8_t* L_21 = V_1;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_21, 2));
		int32_t L_22 = ___len2;
		___len2 = ((int32_t)il2cpp_codegen_subtract(L_22, 2));
	}

IL_0045:
	{
		int32_t L_23 = ___len2;
		if ((((int32_t)L_23) < ((int32_t)1)))
		{
			goto IL_004d;
		}
	}
	{
		uint8_t* L_24 = V_0;
		uint8_t* L_25 = V_1;
		int32_t L_26 = *((uint8_t*)L_25);
		*((int8_t*)L_24) = (int8_t)L_26;
	}

IL_004d:
	{
		return;
	}
}
// System.Void Nethereum.KeyStore.Crypto.ScryptNet::BulkXor(System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptNet_BulkXor_m605660F65DADB0766CF15C6AF95602335E0DB7BA (void* ___dst0, void* ___src1, int32_t ___len2, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		void* L_0 = ___dst0;
		V_0 = (uint8_t*)L_0;
		void* L_1 = ___src1;
		V_1 = (uint8_t*)L_1;
		goto IL_001a;
	}

IL_0006:
	{
		uint8_t* L_2 = V_0;
		uint8_t* L_3 = L_2;
		int64_t L_4 = *((int64_t*)L_3);
		uint8_t* L_5 = V_1;
		int64_t L_6 = *((int64_t*)L_5);
		*((int64_t*)L_3) = (int64_t)((int64_t)(L_4^L_6));
		uint8_t* L_7 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, 8));
		uint8_t* L_8 = V_1;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, 8));
		int32_t L_9 = ___len2;
		___len2 = ((int32_t)il2cpp_codegen_subtract(L_9, 8));
	}

IL_001a:
	{
		int32_t L_10 = ___len2;
		if ((((int32_t)L_10) >= ((int32_t)8)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_11 = ___len2;
		if ((((int32_t)L_11) < ((int32_t)4)))
		{
			goto IL_0036;
		}
	}
	{
		uint8_t* L_12 = V_0;
		uint8_t* L_13 = L_12;
		int32_t L_14 = *((uint32_t*)L_13);
		uint8_t* L_15 = V_1;
		int32_t L_16 = *((uint32_t*)L_15);
		*((int32_t*)L_13) = (int32_t)((int32_t)(L_14^L_16));
		uint8_t* L_17 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, 4));
		uint8_t* L_18 = V_1;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_18, 4));
		int32_t L_19 = ___len2;
		___len2 = ((int32_t)il2cpp_codegen_subtract(L_19, 4));
	}

IL_0036:
	{
		int32_t L_20 = ___len2;
		if ((((int32_t)L_20) < ((int32_t)2)))
		{
			goto IL_004f;
		}
	}
	{
		uint8_t* L_21 = V_0;
		uint8_t* L_22 = L_21;
		int32_t L_23 = *((uint16_t*)L_22);
		uint8_t* L_24 = V_1;
		int32_t L_25 = *((uint16_t*)L_24);
		*((int16_t*)L_22) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_23^L_25)));
		uint8_t* L_26 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_26, 2));
		uint8_t* L_27 = V_1;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_27, 2));
		int32_t L_28 = ___len2;
		___len2 = ((int32_t)il2cpp_codegen_subtract(L_28, 2));
	}

IL_004f:
	{
		int32_t L_29 = ___len2;
		if ((((int32_t)L_29) < ((int32_t)1)))
		{
			goto IL_005b;
		}
	}
	{
		uint8_t* L_30 = V_0;
		uint8_t* L_31 = L_30;
		int32_t L_32 = *((uint8_t*)L_31);
		uint8_t* L_33 = V_1;
		int32_t L_34 = *((uint8_t*)L_33);
		*((int8_t*)L_31) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_32^L_34)));
	}

IL_005b:
	{
		return;
	}
}
// System.Void Nethereum.KeyStore.Crypto.ScryptNet::Encode32(System.Byte*,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptNet_Encode32_mE2F354CEBB2F7B991142868DA0B05DC287079389 (uint8_t* ___p0, uint32_t ___x1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___p0;
		uint32_t L_1 = ___x1;
		*((int8_t*)L_0) = (int8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_1&((int32_t)255))));
		uint8_t* L_2 = ___p0;
		uint32_t L_3 = ___x1;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, 1))) = (int8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((uint32_t)L_3>>8))&((int32_t)255))));
		uint8_t* L_4 = ___p0;
		uint32_t L_5 = ___x1;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, 2))) = (int8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((uint32_t)L_5>>((int32_t)16)))&((int32_t)255))));
		uint8_t* L_6 = ___p0;
		uint32_t L_7 = ___x1;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, 3))) = (int8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((uint32_t)L_7>>((int32_t)24)))&((int32_t)255))));
		return;
	}
}
// System.UInt32 Nethereum.KeyStore.Crypto.ScryptNet::Decode32(System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ScryptNet_Decode32_m72CB0DD11562278FED4B6622F7819E3810D93B3E (uint8_t* ___p0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___p0;
		int32_t L_1 = *((uint8_t*)L_0);
		uint8_t* L_2 = ___p0;
		int32_t L_3 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, 1)));
		uint8_t* L_4 = ___p0;
		int32_t L_5 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, 2)));
		uint8_t* L_6 = ___p0;
		int32_t L_7 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, 3)));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1, ((int32_t)(L_3<<8)))), ((int32_t)(L_5<<((int32_t)16))))), ((int32_t)(L_7<<((int32_t)24)))));
	}
}
// System.Void Nethereum.KeyStore.Crypto.ScryptNet::Salsa208(System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptNet_Salsa208_m4646DF9B913D1A96DC008CCAABAF2B9300C9A512 (uint32_t* ___B0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	int32_t V_16 = 0;
	{
		uint32_t* L_0 = ___B0;
		int32_t L_1 = *((uint32_t*)L_0);
		V_0 = L_1;
		uint32_t* L_2 = ___B0;
		int32_t L_3 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_2, 4)));
		V_1 = L_3;
		uint32_t* L_4 = ___B0;
		int32_t L_5 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 4)))));
		V_2 = L_5;
		uint32_t* L_6 = ___B0;
		int32_t L_7 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 4)))));
		V_3 = L_7;
		uint32_t* L_8 = ___B0;
		int32_t L_9 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)4), 4)))));
		V_4 = L_9;
		uint32_t* L_10 = ___B0;
		int32_t L_11 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)5), 4)))));
		V_5 = L_11;
		uint32_t* L_12 = ___B0;
		int32_t L_13 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)6), 4)))));
		V_6 = L_13;
		uint32_t* L_14 = ___B0;
		int32_t L_15 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)7), 4)))));
		V_7 = L_15;
		uint32_t* L_16 = ___B0;
		int32_t L_17 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)8), 4)))));
		V_8 = L_17;
		uint32_t* L_18 = ___B0;
		int32_t L_19 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)9)), 4)))));
		V_9 = L_19;
		uint32_t* L_20 = ___B0;
		int32_t L_21 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)10)), 4)))));
		V_10 = L_21;
		uint32_t* L_22 = ___B0;
		int32_t L_23 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)11)), 4)))));
		V_11 = L_23;
		uint32_t* L_24 = ___B0;
		int32_t L_25 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)12)), 4)))));
		V_12 = L_25;
		uint32_t* L_26 = ___B0;
		int32_t L_27 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)13)), 4)))));
		V_13 = L_27;
		uint32_t* L_28 = ___B0;
		int32_t L_29 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)14)), 4)))));
		V_14 = L_29;
		uint32_t* L_30 = ___B0;
		int32_t L_31 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)15)), 4)))));
		V_15 = L_31;
		V_16 = 0;
		goto IL_0291;
	}

IL_0093:
	{
		uint32_t L_32 = V_4;
		uint32_t L_33 = V_0;
		uint32_t L_34 = V_12;
		uint32_t L_35;
		L_35 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)L_34)), 7, NULL);
		V_4 = ((int32_t)((int32_t)L_32^(int32_t)L_35));
		uint32_t L_36 = V_8;
		uint32_t L_37 = V_4;
		uint32_t L_38 = V_0;
		uint32_t L_39;
		L_39 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)L_38)), ((int32_t)9), NULL);
		V_8 = ((int32_t)((int32_t)L_36^(int32_t)L_39));
		uint32_t L_40 = V_12;
		uint32_t L_41 = V_8;
		uint32_t L_42 = V_4;
		uint32_t L_43;
		L_43 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)L_42)), ((int32_t)13), NULL);
		V_12 = ((int32_t)((int32_t)L_40^(int32_t)L_43));
		uint32_t L_44 = V_0;
		uint32_t L_45 = V_12;
		uint32_t L_46 = V_8;
		uint32_t L_47;
		L_47 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)L_46)), ((int32_t)18), NULL);
		V_0 = ((int32_t)((int32_t)L_44^(int32_t)L_47));
		uint32_t L_48 = V_9;
		uint32_t L_49 = V_5;
		uint32_t L_50 = V_1;
		uint32_t L_51;
		L_51 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)L_50)), 7, NULL);
		V_9 = ((int32_t)((int32_t)L_48^(int32_t)L_51));
		uint32_t L_52 = V_13;
		uint32_t L_53 = V_9;
		uint32_t L_54 = V_5;
		uint32_t L_55;
		L_55 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)L_54)), ((int32_t)9), NULL);
		V_13 = ((int32_t)((int32_t)L_52^(int32_t)L_55));
		uint32_t L_56 = V_1;
		uint32_t L_57 = V_13;
		uint32_t L_58 = V_9;
		uint32_t L_59;
		L_59 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)L_58)), ((int32_t)13), NULL);
		V_1 = ((int32_t)((int32_t)L_56^(int32_t)L_59));
		uint32_t L_60 = V_5;
		uint32_t L_61 = V_1;
		uint32_t L_62 = V_13;
		uint32_t L_63;
		L_63 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)L_62)), ((int32_t)18), NULL);
		V_5 = ((int32_t)((int32_t)L_60^(int32_t)L_63));
		uint32_t L_64 = V_14;
		uint32_t L_65 = V_10;
		uint32_t L_66 = V_6;
		uint32_t L_67;
		L_67 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)L_66)), 7, NULL);
		V_14 = ((int32_t)((int32_t)L_64^(int32_t)L_67));
		uint32_t L_68 = V_2;
		uint32_t L_69 = V_14;
		uint32_t L_70 = V_10;
		uint32_t L_71;
		L_71 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)L_70)), ((int32_t)9), NULL);
		V_2 = ((int32_t)((int32_t)L_68^(int32_t)L_71));
		uint32_t L_72 = V_6;
		uint32_t L_73 = V_2;
		uint32_t L_74 = V_14;
		uint32_t L_75;
		L_75 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)L_74)), ((int32_t)13), NULL);
		V_6 = ((int32_t)((int32_t)L_72^(int32_t)L_75));
		uint32_t L_76 = V_10;
		uint32_t L_77 = V_6;
		uint32_t L_78 = V_2;
		uint32_t L_79;
		L_79 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)L_78)), ((int32_t)18), NULL);
		V_10 = ((int32_t)((int32_t)L_76^(int32_t)L_79));
		uint32_t L_80 = V_3;
		uint32_t L_81 = V_15;
		uint32_t L_82 = V_11;
		uint32_t L_83;
		L_83 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)L_82)), 7, NULL);
		V_3 = ((int32_t)((int32_t)L_80^(int32_t)L_83));
		uint32_t L_84 = V_7;
		uint32_t L_85 = V_3;
		uint32_t L_86 = V_15;
		uint32_t L_87;
		L_87 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)L_86)), ((int32_t)9), NULL);
		V_7 = ((int32_t)((int32_t)L_84^(int32_t)L_87));
		uint32_t L_88 = V_11;
		uint32_t L_89 = V_7;
		uint32_t L_90 = V_3;
		uint32_t L_91;
		L_91 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)L_90)), ((int32_t)13), NULL);
		V_11 = ((int32_t)((int32_t)L_88^(int32_t)L_91));
		uint32_t L_92 = V_15;
		uint32_t L_93 = V_11;
		uint32_t L_94 = V_7;
		uint32_t L_95;
		L_95 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)L_94)), ((int32_t)18), NULL);
		V_15 = ((int32_t)((int32_t)L_92^(int32_t)L_95));
		uint32_t L_96 = V_1;
		uint32_t L_97 = V_0;
		uint32_t L_98 = V_3;
		uint32_t L_99;
		L_99 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)L_98)), 7, NULL);
		V_1 = ((int32_t)((int32_t)L_96^(int32_t)L_99));
		uint32_t L_100 = V_2;
		uint32_t L_101 = V_1;
		uint32_t L_102 = V_0;
		uint32_t L_103;
		L_103 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)L_102)), ((int32_t)9), NULL);
		V_2 = ((int32_t)((int32_t)L_100^(int32_t)L_103));
		uint32_t L_104 = V_3;
		uint32_t L_105 = V_2;
		uint32_t L_106 = V_1;
		uint32_t L_107;
		L_107 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)L_106)), ((int32_t)13), NULL);
		V_3 = ((int32_t)((int32_t)L_104^(int32_t)L_107));
		uint32_t L_108 = V_0;
		uint32_t L_109 = V_3;
		uint32_t L_110 = V_2;
		uint32_t L_111;
		L_111 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)L_110)), ((int32_t)18), NULL);
		V_0 = ((int32_t)((int32_t)L_108^(int32_t)L_111));
		uint32_t L_112 = V_6;
		uint32_t L_113 = V_5;
		uint32_t L_114 = V_4;
		uint32_t L_115;
		L_115 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_113, (int32_t)L_114)), 7, NULL);
		V_6 = ((int32_t)((int32_t)L_112^(int32_t)L_115));
		uint32_t L_116 = V_7;
		uint32_t L_117 = V_6;
		uint32_t L_118 = V_5;
		uint32_t L_119;
		L_119 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)L_118)), ((int32_t)9), NULL);
		V_7 = ((int32_t)((int32_t)L_116^(int32_t)L_119));
		uint32_t L_120 = V_4;
		uint32_t L_121 = V_7;
		uint32_t L_122 = V_6;
		uint32_t L_123;
		L_123 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_121, (int32_t)L_122)), ((int32_t)13), NULL);
		V_4 = ((int32_t)((int32_t)L_120^(int32_t)L_123));
		uint32_t L_124 = V_5;
		uint32_t L_125 = V_4;
		uint32_t L_126 = V_7;
		uint32_t L_127;
		L_127 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_125, (int32_t)L_126)), ((int32_t)18), NULL);
		V_5 = ((int32_t)((int32_t)L_124^(int32_t)L_127));
		uint32_t L_128 = V_11;
		uint32_t L_129 = V_10;
		uint32_t L_130 = V_9;
		uint32_t L_131;
		L_131 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_129, (int32_t)L_130)), 7, NULL);
		V_11 = ((int32_t)((int32_t)L_128^(int32_t)L_131));
		uint32_t L_132 = V_8;
		uint32_t L_133 = V_11;
		uint32_t L_134 = V_10;
		uint32_t L_135;
		L_135 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_133, (int32_t)L_134)), ((int32_t)9), NULL);
		V_8 = ((int32_t)((int32_t)L_132^(int32_t)L_135));
		uint32_t L_136 = V_9;
		uint32_t L_137 = V_8;
		uint32_t L_138 = V_11;
		uint32_t L_139;
		L_139 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_137, (int32_t)L_138)), ((int32_t)13), NULL);
		V_9 = ((int32_t)((int32_t)L_136^(int32_t)L_139));
		uint32_t L_140 = V_10;
		uint32_t L_141 = V_9;
		uint32_t L_142 = V_8;
		uint32_t L_143;
		L_143 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_141, (int32_t)L_142)), ((int32_t)18), NULL);
		V_10 = ((int32_t)((int32_t)L_140^(int32_t)L_143));
		uint32_t L_144 = V_12;
		uint32_t L_145 = V_15;
		uint32_t L_146 = V_14;
		uint32_t L_147;
		L_147 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_145, (int32_t)L_146)), 7, NULL);
		V_12 = ((int32_t)((int32_t)L_144^(int32_t)L_147));
		uint32_t L_148 = V_13;
		uint32_t L_149 = V_12;
		uint32_t L_150 = V_15;
		uint32_t L_151;
		L_151 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_149, (int32_t)L_150)), ((int32_t)9), NULL);
		V_13 = ((int32_t)((int32_t)L_148^(int32_t)L_151));
		uint32_t L_152 = V_14;
		uint32_t L_153 = V_13;
		uint32_t L_154 = V_12;
		uint32_t L_155;
		L_155 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_153, (int32_t)L_154)), ((int32_t)13), NULL);
		V_14 = ((int32_t)((int32_t)L_152^(int32_t)L_155));
		uint32_t L_156 = V_15;
		uint32_t L_157 = V_14;
		uint32_t L_158 = V_13;
		uint32_t L_159;
		L_159 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_157, (int32_t)L_158)), ((int32_t)18), NULL);
		V_15 = ((int32_t)((int32_t)L_156^(int32_t)L_159));
		int32_t L_160 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_160, 2));
	}

IL_0291:
	{
		int32_t L_161 = V_16;
		if ((((int32_t)L_161) < ((int32_t)8)))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t* L_162 = ___B0;
		uint32_t* L_163 = L_162;
		int32_t L_164 = *((uint32_t*)L_163);
		uint32_t L_165 = V_0;
		*((int32_t*)L_163) = (int32_t)((int32_t)il2cpp_codegen_add(L_164, (int32_t)L_165));
		uint32_t* L_166 = ___B0;
		uint32_t* L_167 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_166, 4));
		int32_t L_168 = *((uint32_t*)L_167);
		uint32_t L_169 = V_1;
		*((int32_t*)L_167) = (int32_t)((int32_t)il2cpp_codegen_add(L_168, (int32_t)L_169));
		uint32_t* L_170 = ___B0;
		uint32_t* L_171 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_170, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 4))));
		int32_t L_172 = *((uint32_t*)L_171);
		uint32_t L_173 = V_2;
		*((int32_t*)L_171) = (int32_t)((int32_t)il2cpp_codegen_add(L_172, (int32_t)L_173));
		uint32_t* L_174 = ___B0;
		uint32_t* L_175 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_174, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 4))));
		int32_t L_176 = *((uint32_t*)L_175);
		uint32_t L_177 = V_3;
		*((int32_t*)L_175) = (int32_t)((int32_t)il2cpp_codegen_add(L_176, (int32_t)L_177));
		uint32_t* L_178 = ___B0;
		uint32_t* L_179 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_178, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)4), 4))));
		int32_t L_180 = *((uint32_t*)L_179);
		uint32_t L_181 = V_4;
		*((int32_t*)L_179) = (int32_t)((int32_t)il2cpp_codegen_add(L_180, (int32_t)L_181));
		uint32_t* L_182 = ___B0;
		uint32_t* L_183 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_182, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)5), 4))));
		int32_t L_184 = *((uint32_t*)L_183);
		uint32_t L_185 = V_5;
		*((int32_t*)L_183) = (int32_t)((int32_t)il2cpp_codegen_add(L_184, (int32_t)L_185));
		uint32_t* L_186 = ___B0;
		uint32_t* L_187 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_186, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)6), 4))));
		int32_t L_188 = *((uint32_t*)L_187);
		uint32_t L_189 = V_6;
		*((int32_t*)L_187) = (int32_t)((int32_t)il2cpp_codegen_add(L_188, (int32_t)L_189));
		uint32_t* L_190 = ___B0;
		uint32_t* L_191 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_190, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)7), 4))));
		int32_t L_192 = *((uint32_t*)L_191);
		uint32_t L_193 = V_7;
		*((int32_t*)L_191) = (int32_t)((int32_t)il2cpp_codegen_add(L_192, (int32_t)L_193));
		uint32_t* L_194 = ___B0;
		uint32_t* L_195 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_194, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)8), 4))));
		int32_t L_196 = *((uint32_t*)L_195);
		uint32_t L_197 = V_8;
		*((int32_t*)L_195) = (int32_t)((int32_t)il2cpp_codegen_add(L_196, (int32_t)L_197));
		uint32_t* L_198 = ___B0;
		uint32_t* L_199 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_198, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)9)), 4))));
		int32_t L_200 = *((uint32_t*)L_199);
		uint32_t L_201 = V_9;
		*((int32_t*)L_199) = (int32_t)((int32_t)il2cpp_codegen_add(L_200, (int32_t)L_201));
		uint32_t* L_202 = ___B0;
		uint32_t* L_203 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_202, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)10)), 4))));
		int32_t L_204 = *((uint32_t*)L_203);
		uint32_t L_205 = V_10;
		*((int32_t*)L_203) = (int32_t)((int32_t)il2cpp_codegen_add(L_204, (int32_t)L_205));
		uint32_t* L_206 = ___B0;
		uint32_t* L_207 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_206, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)11)), 4))));
		int32_t L_208 = *((uint32_t*)L_207);
		uint32_t L_209 = V_11;
		*((int32_t*)L_207) = (int32_t)((int32_t)il2cpp_codegen_add(L_208, (int32_t)L_209));
		uint32_t* L_210 = ___B0;
		uint32_t* L_211 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_210, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)12)), 4))));
		int32_t L_212 = *((uint32_t*)L_211);
		uint32_t L_213 = V_12;
		*((int32_t*)L_211) = (int32_t)((int32_t)il2cpp_codegen_add(L_212, (int32_t)L_213));
		uint32_t* L_214 = ___B0;
		uint32_t* L_215 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_214, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)13)), 4))));
		int32_t L_216 = *((uint32_t*)L_215);
		uint32_t L_217 = V_13;
		*((int32_t*)L_215) = (int32_t)((int32_t)il2cpp_codegen_add(L_216, (int32_t)L_217));
		uint32_t* L_218 = ___B0;
		uint32_t* L_219 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_218, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)14)), 4))));
		int32_t L_220 = *((uint32_t*)L_219);
		uint32_t L_221 = V_14;
		*((int32_t*)L_219) = (int32_t)((int32_t)il2cpp_codegen_add(L_220, (int32_t)L_221));
		uint32_t* L_222 = ___B0;
		uint32_t* L_223 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_222, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)15)), 4))));
		int32_t L_224 = *((uint32_t*)L_223);
		uint32_t L_225 = V_15;
		*((int32_t*)L_223) = (int32_t)((int32_t)il2cpp_codegen_add(L_224, (int32_t)L_225));
		return;
	}
}
// System.UInt32 Nethereum.KeyStore.Crypto.ScryptNet::R(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F (uint32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		uint32_t L_2 = ___a0;
		int32_t L_3 = ___b1;
		return ((int32_t)(((int32_t)((int32_t)L_0<<((int32_t)(L_1&((int32_t)31)))))|((int32_t)((uint32_t)L_2>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_3))&((int32_t)31)))))));
	}
}
// System.Void Nethereum.KeyStore.Crypto.ScryptNet::BlockMix(System.UInt32*,System.UInt32*,System.UInt32*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptNet_BlockMix_mE84FDFD2F76264C25F3C74C5EA9C89242C417798 (uint32_t* ___Bin0, uint32_t* ___Bout1, uint32_t* ___X2, int32_t ___r3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t* L_0 = ___X2;
		uint32_t* L_1 = ___Bin0;
		int32_t L_2 = ___r3;
		ScryptNet_BulkCopy_m02C41323623B15BE75F69BAF6CC1B679B5CFBC29((void*)L_0, (void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_2)), 1)), ((int32_t)16)))), 4))))), ((int32_t)64), NULL);
		V_0 = 0;
		goto IL_0078;
	}

IL_001a:
	{
		uint32_t* L_3 = ___X2;
		uint32_t* L_4 = ___Bin0;
		int32_t L_5 = V_0;
		ScryptNet_BulkXor_m605660F65DADB0766CF15C6AF95602335E0DB7BA((void*)L_3, (void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)16)))), 4))))), ((int32_t)64), NULL);
		uint32_t* L_6 = ___X2;
		ScryptNet_Salsa208_m4646DF9B913D1A96DC008CCAABAF2B9300C9A512(L_6, NULL);
		uint32_t* L_7 = ___Bout1;
		int32_t L_8 = V_0;
		uint32_t* L_9 = ___X2;
		ScryptNet_BulkCopy_m02C41323623B15BE75F69BAF6CC1B679B5CFBC29((void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_8, 8))), 4))))), (void*)L_9, ((int32_t)64), NULL);
		uint32_t* L_10 = ___X2;
		uint32_t* L_11 = ___Bin0;
		int32_t L_12 = V_0;
		ScryptNet_BulkXor_m605660F65DADB0766CF15C6AF95602335E0DB7BA((void*)L_10, (void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16))), ((int32_t)16)))), 4))))), ((int32_t)64), NULL);
		uint32_t* L_13 = ___X2;
		ScryptNet_Salsa208_m4646DF9B913D1A96DC008CCAABAF2B9300C9A512(L_13, NULL);
		uint32_t* L_14 = ___Bout1;
		int32_t L_15 = V_0;
		int32_t L_16 = ___r3;
		uint32_t* L_17 = ___X2;
		ScryptNet_BulkCopy_m02C41323623B15BE75F69BAF6CC1B679B5CFBC29((void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_15, 8)), ((int32_t)il2cpp_codegen_multiply(L_16, ((int32_t)16)))))), 4))))), (void*)L_17, ((int32_t)64), NULL);
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 2));
	}

IL_0078:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = ___r3;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_20)))))
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
// System.Int64 Nethereum.KeyStore.Crypto.ScryptNet::Integerify(System.UInt32*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ScryptNet_Integerify_m7CC0659FA5AED6CE8D42793C7D98F527E72B75B4 (uint32_t* ___B0, int32_t ___r1, const RuntimeMethod* method) 
{
	uint32_t* V_0 = NULL;
	{
		uint32_t* L_0 = ___B0;
		int32_t L_1 = ___r1;
		V_0 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_1)), 1)), ((int32_t)64)))));
		uint32_t* L_2 = V_0;
		int32_t L_3 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_2, 4)));
		uint32_t* L_4 = V_0;
		int32_t L_5 = *((uint32_t*)L_4);
		return ((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)(uint64_t)((uint32_t)L_3))<<((int32_t)32))), ((int64_t)(uint64_t)((uint32_t)L_5))));
	}
}
// System.Void Nethereum.KeyStore.Crypto.ScryptNet::SMix(System.Byte*,System.Int32,System.Int32,System.UInt32*,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptNet_SMix_m14952E992EC6AEEB26E9D84AE1C6471C1546F246 (uint8_t* ___B0, int32_t ___r1, int32_t ___N2, uint32_t* ___V3, uint32_t* ___XY4, const RuntimeMethod* method) 
{
	uint32_t* V_0 = NULL;
	uint32_t* V_1 = NULL;
	uint32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int32_t V_7 = 0;
	{
		uint32_t* L_0 = ___XY4;
		V_0 = L_0;
		uint32_t* L_1 = ___XY4;
		int32_t L_2 = ___r1;
		V_1 = (uint32_t*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(((int32_t)32), L_2))), 4)))));
		uint32_t* L_3 = ___XY4;
		int32_t L_4 = ___r1;
		V_2 = (uint32_t*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(((int32_t)64), L_4))), 4)))));
		V_3 = 0;
		goto IL_0035;
	}

IL_001f:
	{
		uint32_t* L_5 = V_0;
		int32_t L_6 = V_3;
		uint8_t* L_7 = ___B0;
		int32_t L_8 = V_3;
		uint32_t L_9;
		L_9 = ScryptNet_Decode32_m72CB0DD11562278FED4B6622F7819E3810D93B3E((uint8_t*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, ((int32_t)il2cpp_codegen_multiply(4, L_8))))), NULL);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 4))))) = (int32_t)L_9;
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0035:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = ___r1;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)32), L_12)))))
		{
			goto IL_001f;
		}
	}
	{
		V_4 = ((int64_t)0);
		goto IL_0096;
	}

IL_0042:
	{
		uint32_t* L_13 = ___V3;
		int64_t L_14 = V_4;
		int32_t L_15 = ___r1;
		uint32_t* L_16 = V_0;
		int32_t L_17 = ___r1;
		ScryptNet_BulkCopy_m02C41323623B15BE75F69BAF6CC1B679B5CFBC29((void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_multiply(L_14, ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)32), L_15))))), ((int64_t)4))))))), (void*)L_16, ((int32_t)il2cpp_codegen_multiply(((int32_t)128), L_17)), NULL);
		uint32_t* L_18 = V_0;
		uint32_t* L_19 = V_1;
		uint32_t* L_20 = V_2;
		int32_t L_21 = ___r1;
		ScryptNet_BlockMix_mE84FDFD2F76264C25F3C74C5EA9C89242C417798(L_18, L_19, L_20, L_21, NULL);
		uint32_t* L_22 = ___V3;
		int64_t L_23 = V_4;
		int32_t L_24 = ___r1;
		uint32_t* L_25 = V_1;
		int32_t L_26 = ___r1;
		ScryptNet_BulkCopy_m02C41323623B15BE75F69BAF6CC1B679B5CFBC29((void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add(L_23, ((int64_t)1))), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)32), L_24))))), ((int64_t)4))))))), (void*)L_25, ((int32_t)il2cpp_codegen_multiply(((int32_t)128), L_26)), NULL);
		uint32_t* L_27 = V_1;
		uint32_t* L_28 = V_0;
		uint32_t* L_29 = V_2;
		int32_t L_30 = ___r1;
		ScryptNet_BlockMix_mE84FDFD2F76264C25F3C74C5EA9C89242C417798(L_27, L_28, L_29, L_30, NULL);
		int64_t L_31 = V_4;
		V_4 = ((int64_t)il2cpp_codegen_add(L_31, ((int64_t)2)));
	}

IL_0096:
	{
		int64_t L_32 = V_4;
		int32_t L_33 = ___N2;
		if ((((int64_t)L_32) < ((int64_t)((int64_t)L_33))))
		{
			goto IL_0042;
		}
	}
	{
		V_5 = 0;
		goto IL_010d;
	}

IL_00a1:
	{
		uint32_t* L_34 = V_0;
		int32_t L_35 = ___r1;
		int64_t L_36;
		L_36 = ScryptNet_Integerify_m7CC0659FA5AED6CE8D42793C7D98F527E72B75B4(L_34, L_35, NULL);
		int32_t L_37 = ___N2;
		V_6 = ((int64_t)(L_36&((int64_t)((int32_t)il2cpp_codegen_subtract(L_37, 1)))));
		uint32_t* L_38 = V_0;
		uint32_t* L_39 = ___V3;
		int64_t L_40 = V_6;
		int32_t L_41 = ___r1;
		int32_t L_42 = ___r1;
		ScryptNet_BulkXor_m605660F65DADB0766CF15C6AF95602335E0DB7BA((void*)L_38, (void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_multiply(L_40, ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)32), L_41))))), ((int64_t)4))))))), ((int32_t)il2cpp_codegen_multiply(((int32_t)128), L_42)), NULL);
		uint32_t* L_43 = V_0;
		uint32_t* L_44 = V_1;
		uint32_t* L_45 = V_2;
		int32_t L_46 = ___r1;
		ScryptNet_BlockMix_mE84FDFD2F76264C25F3C74C5EA9C89242C417798(L_43, L_44, L_45, L_46, NULL);
		uint32_t* L_47 = V_1;
		int32_t L_48 = ___r1;
		int64_t L_49;
		L_49 = ScryptNet_Integerify_m7CC0659FA5AED6CE8D42793C7D98F527E72B75B4(L_47, L_48, NULL);
		int32_t L_50 = ___N2;
		V_6 = ((int64_t)(L_49&((int64_t)((int32_t)il2cpp_codegen_subtract(L_50, 1)))));
		uint32_t* L_51 = V_1;
		uint32_t* L_52 = ___V3;
		int64_t L_53 = V_6;
		int32_t L_54 = ___r1;
		int32_t L_55 = ___r1;
		ScryptNet_BulkXor_m605660F65DADB0766CF15C6AF95602335E0DB7BA((void*)L_51, (void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_multiply(L_53, ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)32), L_54))))), ((int64_t)4))))))), ((int32_t)il2cpp_codegen_multiply(((int32_t)128), L_55)), NULL);
		uint32_t* L_56 = V_1;
		uint32_t* L_57 = V_0;
		uint32_t* L_58 = V_2;
		int32_t L_59 = ___r1;
		ScryptNet_BlockMix_mE84FDFD2F76264C25F3C74C5EA9C89242C417798(L_56, L_57, L_58, L_59, NULL);
		int32_t L_60 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_60, 2));
	}

IL_010d:
	{
		int32_t L_61 = V_5;
		int32_t L_62 = ___N2;
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_00a1;
		}
	}
	{
		V_7 = 0;
		goto IL_0131;
	}

IL_0117:
	{
		uint8_t* L_63 = ___B0;
		int32_t L_64 = V_7;
		uint32_t* L_65 = V_0;
		int32_t L_66 = V_7;
		int32_t L_67 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_65, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_66), 4)))));
		ScryptNet_Encode32_mE2F354CEBB2F7B991142868DA0B05DC287079389((uint8_t*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_63, ((int32_t)il2cpp_codegen_multiply(4, L_64))))), L_67, NULL);
		int32_t L_68 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_68, 1));
	}

IL_0131:
	{
		int32_t L_69 = V_7;
		int32_t L_70 = ___r1;
		if ((((int32_t)L_69) < ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)32), L_70)))))
		{
			goto IL_0117;
		}
	}
	{
		return;
	}
}
// System.Void Nethereum.KeyStore.Crypto.ScryptNet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptNet__ctor_m49319051EC0A6480AEA342C024D6EA83129CDC3F (ScryptNet_t51830A58E0C438BED96AEFA18ACA6EE151F48727* __this, const RuntimeMethod* method) 
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
// System.UInt32 Nethereum.KeyStore.Crypto.SCrypt::R(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178 (uint32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		uint32_t L_2 = ___x0;
		int32_t L_3 = ___y1;
		return ((int32_t)(((int32_t)((int32_t)L_0<<((int32_t)(L_1&((int32_t)31)))))|((int32_t)((uint32_t)L_2>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_3))&((int32_t)31)))))));
	}
}
// System.Void Nethereum.KeyStore.Crypto.SCrypt::SalsaCore(System.Int32,System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCrypt_SalsaCore_m9C56F73A9F4A62F39690A912714BCD5BD0CCC5E6 (int32_t ___rounds0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___input1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x2, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	int32_t V_16 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___input1;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)((int32_t)16))))
		{
			goto IL_000d;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SCrypt_SalsaCore_m9C56F73A9F4A62F39690A912714BCD5BD0CCC5E6_RuntimeMethod_var)));
	}

IL_000d:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___x2;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) == ((int32_t)((int32_t)16))))
		{
			goto IL_001a;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SCrypt_SalsaCore_m9C56F73A9F4A62F39690A912714BCD5BD0CCC5E6_RuntimeMethod_var)));
	}

IL_001a:
	{
		int32_t L_4 = ___rounds0;
		if (!((int32_t)(L_4%2)))
		{
			goto IL_002a;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA73E504C90D10B8D3135BBF7D950BEF1D5E4D3EC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SCrypt_SalsaCore_m9C56F73A9F4A62F39690A912714BCD5BD0CCC5E6_RuntimeMethod_var)));
	}

IL_002a:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___input1;
		NullCheck(L_6);
		int32_t L_7 = 0;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = L_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___input1;
		NullCheck(L_9);
		int32_t L_10 = 1;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = L_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___input1;
		NullCheck(L_12);
		int32_t L_13 = 2;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = L_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___input1;
		NullCheck(L_15);
		int32_t L_16 = 3;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_3 = L_17;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___input1;
		NullCheck(L_18);
		int32_t L_19 = 4;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_4 = L_20;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___input1;
		NullCheck(L_21);
		int32_t L_22 = 5;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_5 = L_23;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___input1;
		NullCheck(L_24);
		int32_t L_25 = 6;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_6 = L_26;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___input1;
		NullCheck(L_27);
		int32_t L_28 = 7;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_7 = L_29;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___input1;
		NullCheck(L_30);
		int32_t L_31 = 8;
		uint32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_8 = L_32;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___input1;
		NullCheck(L_33);
		int32_t L_34 = ((int32_t)9);
		uint32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_9 = L_35;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___input1;
		NullCheck(L_36);
		int32_t L_37 = ((int32_t)10);
		uint32_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_10 = L_38;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___input1;
		NullCheck(L_39);
		int32_t L_40 = ((int32_t)11);
		uint32_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_11 = L_41;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = ___input1;
		NullCheck(L_42);
		int32_t L_43 = ((int32_t)12);
		uint32_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_12 = L_44;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___input1;
		NullCheck(L_45);
		int32_t L_46 = ((int32_t)13);
		uint32_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_13 = L_47;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___input1;
		NullCheck(L_48);
		int32_t L_49 = ((int32_t)14);
		uint32_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_14 = L_50;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___input1;
		NullCheck(L_51);
		int32_t L_52 = ((int32_t)15);
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_15 = L_53;
		int32_t L_54 = ___rounds0;
		V_16 = L_54;
		goto IL_0283;
	}

IL_0085:
	{
		uint32_t L_55 = V_4;
		uint32_t L_56 = V_0;
		uint32_t L_57 = V_12;
		uint32_t L_58;
		L_58 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)L_57)), 7, NULL);
		V_4 = ((int32_t)((int32_t)L_55^(int32_t)L_58));
		uint32_t L_59 = V_8;
		uint32_t L_60 = V_4;
		uint32_t L_61 = V_0;
		uint32_t L_62;
		L_62 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)L_61)), ((int32_t)9), NULL);
		V_8 = ((int32_t)((int32_t)L_59^(int32_t)L_62));
		uint32_t L_63 = V_12;
		uint32_t L_64 = V_8;
		uint32_t L_65 = V_4;
		uint32_t L_66;
		L_66 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)L_65)), ((int32_t)13), NULL);
		V_12 = ((int32_t)((int32_t)L_63^(int32_t)L_66));
		uint32_t L_67 = V_0;
		uint32_t L_68 = V_12;
		uint32_t L_69 = V_8;
		uint32_t L_70;
		L_70 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)L_69)), ((int32_t)18), NULL);
		V_0 = ((int32_t)((int32_t)L_67^(int32_t)L_70));
		uint32_t L_71 = V_9;
		uint32_t L_72 = V_5;
		uint32_t L_73 = V_1;
		uint32_t L_74;
		L_74 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)L_73)), 7, NULL);
		V_9 = ((int32_t)((int32_t)L_71^(int32_t)L_74));
		uint32_t L_75 = V_13;
		uint32_t L_76 = V_9;
		uint32_t L_77 = V_5;
		uint32_t L_78;
		L_78 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)L_77)), ((int32_t)9), NULL);
		V_13 = ((int32_t)((int32_t)L_75^(int32_t)L_78));
		uint32_t L_79 = V_1;
		uint32_t L_80 = V_13;
		uint32_t L_81 = V_9;
		uint32_t L_82;
		L_82 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)L_81)), ((int32_t)13), NULL);
		V_1 = ((int32_t)((int32_t)L_79^(int32_t)L_82));
		uint32_t L_83 = V_5;
		uint32_t L_84 = V_1;
		uint32_t L_85 = V_13;
		uint32_t L_86;
		L_86 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)L_85)), ((int32_t)18), NULL);
		V_5 = ((int32_t)((int32_t)L_83^(int32_t)L_86));
		uint32_t L_87 = V_14;
		uint32_t L_88 = V_10;
		uint32_t L_89 = V_6;
		uint32_t L_90;
		L_90 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)L_89)), 7, NULL);
		V_14 = ((int32_t)((int32_t)L_87^(int32_t)L_90));
		uint32_t L_91 = V_2;
		uint32_t L_92 = V_14;
		uint32_t L_93 = V_10;
		uint32_t L_94;
		L_94 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)L_93)), ((int32_t)9), NULL);
		V_2 = ((int32_t)((int32_t)L_91^(int32_t)L_94));
		uint32_t L_95 = V_6;
		uint32_t L_96 = V_2;
		uint32_t L_97 = V_14;
		uint32_t L_98;
		L_98 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)L_97)), ((int32_t)13), NULL);
		V_6 = ((int32_t)((int32_t)L_95^(int32_t)L_98));
		uint32_t L_99 = V_10;
		uint32_t L_100 = V_6;
		uint32_t L_101 = V_2;
		uint32_t L_102;
		L_102 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)L_101)), ((int32_t)18), NULL);
		V_10 = ((int32_t)((int32_t)L_99^(int32_t)L_102));
		uint32_t L_103 = V_3;
		uint32_t L_104 = V_15;
		uint32_t L_105 = V_11;
		uint32_t L_106;
		L_106 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_104, (int32_t)L_105)), 7, NULL);
		V_3 = ((int32_t)((int32_t)L_103^(int32_t)L_106));
		uint32_t L_107 = V_7;
		uint32_t L_108 = V_3;
		uint32_t L_109 = V_15;
		uint32_t L_110;
		L_110 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)L_109)), ((int32_t)9), NULL);
		V_7 = ((int32_t)((int32_t)L_107^(int32_t)L_110));
		uint32_t L_111 = V_11;
		uint32_t L_112 = V_7;
		uint32_t L_113 = V_3;
		uint32_t L_114;
		L_114 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)L_113)), ((int32_t)13), NULL);
		V_11 = ((int32_t)((int32_t)L_111^(int32_t)L_114));
		uint32_t L_115 = V_15;
		uint32_t L_116 = V_11;
		uint32_t L_117 = V_7;
		uint32_t L_118;
		L_118 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)L_117)), ((int32_t)18), NULL);
		V_15 = ((int32_t)((int32_t)L_115^(int32_t)L_118));
		uint32_t L_119 = V_1;
		uint32_t L_120 = V_0;
		uint32_t L_121 = V_3;
		uint32_t L_122;
		L_122 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_120, (int32_t)L_121)), 7, NULL);
		V_1 = ((int32_t)((int32_t)L_119^(int32_t)L_122));
		uint32_t L_123 = V_2;
		uint32_t L_124 = V_1;
		uint32_t L_125 = V_0;
		uint32_t L_126;
		L_126 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_124, (int32_t)L_125)), ((int32_t)9), NULL);
		V_2 = ((int32_t)((int32_t)L_123^(int32_t)L_126));
		uint32_t L_127 = V_3;
		uint32_t L_128 = V_2;
		uint32_t L_129 = V_1;
		uint32_t L_130;
		L_130 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_128, (int32_t)L_129)), ((int32_t)13), NULL);
		V_3 = ((int32_t)((int32_t)L_127^(int32_t)L_130));
		uint32_t L_131 = V_0;
		uint32_t L_132 = V_3;
		uint32_t L_133 = V_2;
		uint32_t L_134;
		L_134 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_132, (int32_t)L_133)), ((int32_t)18), NULL);
		V_0 = ((int32_t)((int32_t)L_131^(int32_t)L_134));
		uint32_t L_135 = V_6;
		uint32_t L_136 = V_5;
		uint32_t L_137 = V_4;
		uint32_t L_138;
		L_138 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_136, (int32_t)L_137)), 7, NULL);
		V_6 = ((int32_t)((int32_t)L_135^(int32_t)L_138));
		uint32_t L_139 = V_7;
		uint32_t L_140 = V_6;
		uint32_t L_141 = V_5;
		uint32_t L_142;
		L_142 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_140, (int32_t)L_141)), ((int32_t)9), NULL);
		V_7 = ((int32_t)((int32_t)L_139^(int32_t)L_142));
		uint32_t L_143 = V_4;
		uint32_t L_144 = V_7;
		uint32_t L_145 = V_6;
		uint32_t L_146;
		L_146 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_144, (int32_t)L_145)), ((int32_t)13), NULL);
		V_4 = ((int32_t)((int32_t)L_143^(int32_t)L_146));
		uint32_t L_147 = V_5;
		uint32_t L_148 = V_4;
		uint32_t L_149 = V_7;
		uint32_t L_150;
		L_150 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_148, (int32_t)L_149)), ((int32_t)18), NULL);
		V_5 = ((int32_t)((int32_t)L_147^(int32_t)L_150));
		uint32_t L_151 = V_11;
		uint32_t L_152 = V_10;
		uint32_t L_153 = V_9;
		uint32_t L_154;
		L_154 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_152, (int32_t)L_153)), 7, NULL);
		V_11 = ((int32_t)((int32_t)L_151^(int32_t)L_154));
		uint32_t L_155 = V_8;
		uint32_t L_156 = V_11;
		uint32_t L_157 = V_10;
		uint32_t L_158;
		L_158 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_156, (int32_t)L_157)), ((int32_t)9), NULL);
		V_8 = ((int32_t)((int32_t)L_155^(int32_t)L_158));
		uint32_t L_159 = V_9;
		uint32_t L_160 = V_8;
		uint32_t L_161 = V_11;
		uint32_t L_162;
		L_162 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_160, (int32_t)L_161)), ((int32_t)13), NULL);
		V_9 = ((int32_t)((int32_t)L_159^(int32_t)L_162));
		uint32_t L_163 = V_10;
		uint32_t L_164 = V_9;
		uint32_t L_165 = V_8;
		uint32_t L_166;
		L_166 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_164, (int32_t)L_165)), ((int32_t)18), NULL);
		V_10 = ((int32_t)((int32_t)L_163^(int32_t)L_166));
		uint32_t L_167 = V_12;
		uint32_t L_168 = V_15;
		uint32_t L_169 = V_14;
		uint32_t L_170;
		L_170 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_168, (int32_t)L_169)), 7, NULL);
		V_12 = ((int32_t)((int32_t)L_167^(int32_t)L_170));
		uint32_t L_171 = V_13;
		uint32_t L_172 = V_12;
		uint32_t L_173 = V_15;
		uint32_t L_174;
		L_174 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_172, (int32_t)L_173)), ((int32_t)9), NULL);
		V_13 = ((int32_t)((int32_t)L_171^(int32_t)L_174));
		uint32_t L_175 = V_14;
		uint32_t L_176 = V_13;
		uint32_t L_177 = V_12;
		uint32_t L_178;
		L_178 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_176, (int32_t)L_177)), ((int32_t)13), NULL);
		V_14 = ((int32_t)((int32_t)L_175^(int32_t)L_178));
		uint32_t L_179 = V_15;
		uint32_t L_180 = V_14;
		uint32_t L_181 = V_13;
		uint32_t L_182;
		L_182 = SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178(((int32_t)il2cpp_codegen_add((int32_t)L_180, (int32_t)L_181)), ((int32_t)18), NULL);
		V_15 = ((int32_t)((int32_t)L_179^(int32_t)L_182));
		int32_t L_183 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_subtract(L_183, 2));
	}

IL_0283:
	{
		int32_t L_184 = V_16;
		if ((((int32_t)L_184) > ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_185 = ___x2;
		uint32_t L_186 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_187 = ___input1;
		NullCheck(L_187);
		int32_t L_188 = 0;
		uint32_t L_189 = (L_187)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		NullCheck(L_185);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_186, (int32_t)L_189)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_190 = ___x2;
		uint32_t L_191 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_192 = ___input1;
		NullCheck(L_192);
		int32_t L_193 = 1;
		uint32_t L_194 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		NullCheck(L_190);
		(L_190)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_191, (int32_t)L_194)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_195 = ___x2;
		uint32_t L_196 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_197 = ___input1;
		NullCheck(L_197);
		int32_t L_198 = 2;
		uint32_t L_199 = (L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_198));
		NullCheck(L_195);
		(L_195)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_196, (int32_t)L_199)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_200 = ___x2;
		uint32_t L_201 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_202 = ___input1;
		NullCheck(L_202);
		int32_t L_203 = 3;
		uint32_t L_204 = (L_202)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		NullCheck(L_200);
		(L_200)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_201, (int32_t)L_204)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_205 = ___x2;
		uint32_t L_206 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_207 = ___input1;
		NullCheck(L_207);
		int32_t L_208 = 4;
		uint32_t L_209 = (L_207)->GetAt(static_cast<il2cpp_array_size_t>(L_208));
		NullCheck(L_205);
		(L_205)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_206, (int32_t)L_209)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_210 = ___x2;
		uint32_t L_211 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_212 = ___input1;
		NullCheck(L_212);
		int32_t L_213 = 5;
		uint32_t L_214 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		NullCheck(L_210);
		(L_210)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_211, (int32_t)L_214)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_215 = ___x2;
		uint32_t L_216 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_217 = ___input1;
		NullCheck(L_217);
		int32_t L_218 = 6;
		uint32_t L_219 = (L_217)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		NullCheck(L_215);
		(L_215)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_216, (int32_t)L_219)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_220 = ___x2;
		uint32_t L_221 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_222 = ___input1;
		NullCheck(L_222);
		int32_t L_223 = 7;
		uint32_t L_224 = (L_222)->GetAt(static_cast<il2cpp_array_size_t>(L_223));
		NullCheck(L_220);
		(L_220)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_221, (int32_t)L_224)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_225 = ___x2;
		uint32_t L_226 = V_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_227 = ___input1;
		NullCheck(L_227);
		int32_t L_228 = 8;
		uint32_t L_229 = (L_227)->GetAt(static_cast<il2cpp_array_size_t>(L_228));
		NullCheck(L_225);
		(L_225)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_226, (int32_t)L_229)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_230 = ___x2;
		uint32_t L_231 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_232 = ___input1;
		NullCheck(L_232);
		int32_t L_233 = ((int32_t)9);
		uint32_t L_234 = (L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_233));
		NullCheck(L_230);
		(L_230)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_231, (int32_t)L_234)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_235 = ___x2;
		uint32_t L_236 = V_10;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_237 = ___input1;
		NullCheck(L_237);
		int32_t L_238 = ((int32_t)10);
		uint32_t L_239 = (L_237)->GetAt(static_cast<il2cpp_array_size_t>(L_238));
		NullCheck(L_235);
		(L_235)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_236, (int32_t)L_239)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_240 = ___x2;
		uint32_t L_241 = V_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_242 = ___input1;
		NullCheck(L_242);
		int32_t L_243 = ((int32_t)11);
		uint32_t L_244 = (L_242)->GetAt(static_cast<il2cpp_array_size_t>(L_243));
		NullCheck(L_240);
		(L_240)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_241, (int32_t)L_244)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_245 = ___x2;
		uint32_t L_246 = V_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_247 = ___input1;
		NullCheck(L_247);
		int32_t L_248 = ((int32_t)12);
		uint32_t L_249 = (L_247)->GetAt(static_cast<il2cpp_array_size_t>(L_248));
		NullCheck(L_245);
		(L_245)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_246, (int32_t)L_249)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_250 = ___x2;
		uint32_t L_251 = V_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_252 = ___input1;
		NullCheck(L_252);
		int32_t L_253 = ((int32_t)13);
		uint32_t L_254 = (L_252)->GetAt(static_cast<il2cpp_array_size_t>(L_253));
		NullCheck(L_250);
		(L_250)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_251, (int32_t)L_254)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_255 = ___x2;
		uint32_t L_256 = V_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_257 = ___input1;
		NullCheck(L_257);
		int32_t L_258 = ((int32_t)14);
		uint32_t L_259 = (L_257)->GetAt(static_cast<il2cpp_array_size_t>(L_258));
		NullCheck(L_255);
		(L_255)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_256, (int32_t)L_259)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_260 = ___x2;
		uint32_t L_261 = V_15;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_262 = ___input1;
		NullCheck(L_262);
		int32_t L_263 = ((int32_t)15);
		uint32_t L_264 = (L_262)->GetAt(static_cast<il2cpp_array_size_t>(L_263));
		NullCheck(L_260);
		(L_260)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_261, (int32_t)L_264)));
		return;
	}
}
// System.Byte[] Nethereum.KeyStore.Crypto.SCrypt::UInt32_To_LE(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SCrypt_UInt32_To_LE_m339A17D02ABC818693762164BCE7244EED27254E (uint32_t ___n0, const RuntimeMethod* method) 
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
		SCrypt_UInt32_To_LE_m7F775F709D4E8963FC35E8C51139270BB8B742C8(L_1, L_2, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		return L_3;
	}
}
// System.Void Nethereum.KeyStore.Crypto.SCrypt::UInt32_To_LE(System.UInt32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCrypt_UInt32_To_LE_m467029FC2C6F75765B81783C37F7581845D5775B (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, const RuntimeMethod* method) 
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
// System.Void Nethereum.KeyStore.Crypto.SCrypt::UInt32_To_LE(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCrypt_UInt32_To_LE_m7F775F709D4E8963FC35E8C51139270BB8B742C8 (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) 
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
// System.Byte[] Nethereum.KeyStore.Crypto.SCrypt::UInt32_To_LE(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SCrypt_UInt32_To_LE_mD31B9FADBCC22B2AEE2261660297321CA66538C4 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ns0, const RuntimeMethod* method) 
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
		SCrypt_UInt32_To_LE_m8E1D9C86A746128B910EE88AAB824E5E1C27FA07(L_2, L_3, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		return L_4;
	}
}
// System.Void Nethereum.KeyStore.Crypto.SCrypt::UInt32_To_LE(System.UInt32[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCrypt_UInt32_To_LE_m8E1D9C86A746128B910EE88AAB824E5E1C27FA07 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ns0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) 
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
		SCrypt_UInt32_To_LE_m7F775F709D4E8963FC35E8C51139270BB8B742C8(L_3, L_4, L_5, NULL);
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
// System.UInt32 Nethereum.KeyStore.Crypto.SCrypt::LE_To_UInt32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SCrypt_LE_To_UInt32_m5B1B48A380256017C594C242D08B6374ABC49FCA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, const RuntimeMethod* method) 
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
// System.UInt32 Nethereum.KeyStore.Crypto.SCrypt::LE_To_UInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SCrypt_LE_To_UInt32_m0DA25AFE1BC3B27FA3148655E2951E1953028CFD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) 
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
// System.Void Nethereum.KeyStore.Crypto.SCrypt::LE_To_UInt32(System.Byte[],System.Int32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCrypt_LE_To_UInt32_m49A59044507027D95CA638CDF7C67442059CCF4D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ns2, const RuntimeMethod* method) 
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
		L_4 = SCrypt_LE_To_UInt32_m0DA25AFE1BC3B27FA3148655E2951E1953028CFD(L_2, L_3, NULL);
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
// System.Void Nethereum.KeyStore.Crypto.SCrypt::LE_To_UInt32(System.Byte[],System.Int32,System.UInt32[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCrypt_LE_To_UInt32_m6E6A9549FB1F9BF35CA8C50E321EE8117FE151A1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___bOff1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ns2, int32_t ___nOff3, int32_t ___count4, const RuntimeMethod* method) 
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
		L_5 = SCrypt_LE_To_UInt32_m0DA25AFE1BC3B27FA3148655E2951E1953028CFD(L_3, L_4, NULL);
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
// System.UInt32[] Nethereum.KeyStore.Crypto.SCrypt::LE_To_UInt32(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* SCrypt_LE_To_UInt32_m12C9DB7C58472D2FEBFBB2976778D39F7AC4893A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, int32_t ___count2, const RuntimeMethod* method) 
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
		L_6 = SCrypt_LE_To_UInt32_m0DA25AFE1BC3B27FA3148655E2951E1953028CFD(L_4, L_5, NULL);
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
// System.Byte[] Nethereum.KeyStore.Crypto.SCrypt::Generate(System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SCrypt_Generate_mFCD04767126BB8C9C73ECCAF8C050A25AC7788D3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___P0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S1, int32_t ___N2, int32_t ___r3, int32_t ___p4, int32_t ___dkLen5, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___P0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral64921811D855C15C143C69730203C46A3CDA8284)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SCrypt_Generate_mFCD04767126BB8C9C73ECCAF8C050A25AC7788D3_RuntimeMethod_var)));
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___S1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC51A5D2429A53879F5ACA73F837658D236EE3E4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SCrypt_Generate_mFCD04767126BB8C9C73ECCAF8C050A25AC7788D3_RuntimeMethod_var)));
	}

IL_001c:
	{
		int32_t L_4 = ___N2;
		if ((((int32_t)L_4) <= ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___N2;
		bool L_6;
		L_6 = SCrypt_IsPowerOf2_m1F0E4E4358CBA1753439B407014D8E7B2734D737(L_5, NULL);
		if (L_6)
		{
			goto IL_0033;
		}
	}

IL_0028:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95F3766D0CF42886D188B849706C91FF07DA6543)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SCrypt_Generate_mFCD04767126BB8C9C73ECCAF8C050A25AC7788D3_RuntimeMethod_var)));
	}

IL_0033:
	{
		int32_t L_8 = ___r3;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_9 = ___N2;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)65536))))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_10 = ___r3;
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral360E03A53F5747D93B8189B7381BEE32B8FA7B92)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SCrypt_Generate_mFCD04767126BB8C9C73ECCAF8C050A25AC7788D3_RuntimeMethod_var)));
	}

IL_004e:
	{
		int32_t L_12 = ___r3;
		V_0 = ((int32_t)(((int32_t)2147483647LL)/((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)128), L_12)), 8))));
		int32_t L_13 = ___p4;
		if ((((int32_t)L_13) < ((int32_t)1)))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_14 = ___p4;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) <= ((int32_t)L_15)))
		{
			goto IL_00a5;
		}
	}

IL_0068:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8676D8187D181726BD8AAA348EEB4B7B5BFF4873)));
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8676D8187D181726BD8AAA348EEB4B7B5BFF4873)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_18;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral60757E0E886B3E5AD238A705880BB6B426E6C79E)));
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral60757E0E886B3E5AD238A705880BB6B426E6C79E)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		String_t* L_22;
		L_22 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___r3), NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_22);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_21;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)));
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)));
		String_t* L_24;
		L_24 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_23, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_25 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_25);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_25, L_24, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SCrypt_Generate_mFCD04767126BB8C9C73ECCAF8C050A25AC7788D3_RuntimeMethod_var)));
	}

IL_00a5:
	{
		int32_t L_26 = ___dkLen5;
		if ((((int32_t)L_26) >= ((int32_t)1)))
		{
			goto IL_00b5;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_27 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_27);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_27, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAF0B57767B7A63DA8A8147EF8F559BA08A1B4B1D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SCrypt_Generate_mFCD04767126BB8C9C73ECCAF8C050A25AC7788D3_RuntimeMethod_var)));
	}

IL_00b5:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___P0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___S1;
		int32_t L_30 = ___N2;
		int32_t L_31 = ___r3;
		int32_t L_32 = ___p4;
		int32_t L_33 = ___dkLen5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34;
		L_34 = SCrypt_MFcrypt_m021C5AF7838F770F1B6C64DC807AC845D3B1B4F2(L_28, L_29, L_30, L_31, L_32, L_33, NULL);
		return L_34;
	}
}
// System.Byte[] Nethereum.KeyStore.Crypto.SCrypt::MFcrypt(System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SCrypt_MFcrypt_m021C5AF7838F770F1B6C64DC807AC845D3B1B4F2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___P0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S1, int32_t ___N2, int32_t ___r3, int32_t ___p4, int32_t ___dkLen5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	{
		int32_t L_0 = ___r3;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)128)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___P0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___S1;
		int32_t L_3 = ___p4;
		int32_t L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = SCrypt_SingleIterationPBKDF2_m0FDFF5341EDC35908843D85409539CF7C8AFD189(L_1, L_2, ((int32_t)il2cpp_codegen_multiply(L_3, L_4)), NULL);
		V_1 = L_5;
		V_2 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0060:
			{// begin finally (depth: 1)
				ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106* L_6 = (ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106*)(ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106*)SZArrayNew(ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106_il2cpp_TypeInfo_var, (uint32_t)2);
				ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106* L_7 = L_6;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
				NullCheck(L_7);
				ArrayElementTypeCheck (L_7, L_8);
				(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeArray*)L_8);
				ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106* L_9 = L_7;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_2;
				NullCheck(L_9);
				ArrayElementTypeCheck (L_9, L_10);
				(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeArray*)L_10);
				SCrypt_ClearAll_mD12D2C06BC3198D7B3E0071D986EADCE60DD396E(L_9, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_1;
				NullCheck(L_11);
				V_3 = ((int32_t)(((int32_t)(((RuntimeArray*)L_11)->max_length))>>2));
				int32_t L_12 = V_3;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_12);
				V_2 = L_13;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_2;
				SCrypt_LE_To_UInt32_m49A59044507027D95CA638CDF7C67442059CCF4D(L_14, 0, L_15, NULL);
				int32_t L_16 = V_0;
				V_4 = ((int32_t)(L_16>>2));
				V_5 = 0;
				goto IL_0046_1;
			}

IL_0035_1:
			{
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_2;
				int32_t L_18 = V_5;
				int32_t L_19 = ___N2;
				int32_t L_20 = ___r3;
				SCrypt_SMix_m6F36000A78DF0FBF6902B3B385B773BC7827982F(L_17, L_18, L_19, L_20, NULL);
				int32_t L_21 = V_5;
				int32_t L_22 = V_4;
				V_5 = ((int32_t)il2cpp_codegen_add(L_21, L_22));
			}

IL_0046_1:
			{
				int32_t L_23 = V_5;
				int32_t L_24 = V_3;
				if ((((int32_t)L_23) < ((int32_t)L_24)))
				{
					goto IL_0035_1;
				}
			}
			{
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_2;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_1;
				SCrypt_UInt32_To_LE_m8E1D9C86A746128B910EE88AAB824E5E1C27FA07(L_25, L_26, 0, NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___P0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_1;
				int32_t L_29 = ___dkLen5;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30;
				L_30 = SCrypt_SingleIterationPBKDF2_m0FDFF5341EDC35908843D85409539CF7C8AFD189(L_27, L_28, L_29, NULL);
				V_6 = L_30;
				goto IL_0074;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0074:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_6;
		return L_31;
	}
}
// System.Byte[] Nethereum.KeyStore.Crypto.SCrypt::SingleIterationPBKDF2(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SCrypt_SingleIterationPBKDF2_m0FDFF5341EDC35908843D85409539CF7C8AFD189 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___P0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S1, int32_t ___dkLen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A* L_0 = (Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A*)il2cpp_codegen_object_new(Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Sha256Digest__ctor_m6A98252E0DAF748D5D1BDBCDA91042301B1657D8(L_0, NULL);
		Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D* L_1 = (Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D*)il2cpp_codegen_object_new(Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Pkcs5S2ParametersGenerator__ctor_m43D8AC42079DF38586045859373DF2C8825A6C71(L_1, L_0, NULL);
		Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D* L_2 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___P0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___S1;
		NullCheck(L_2);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.PbeParametersGenerator::Init(System.Byte[],System.Byte[],System.Int32) */, L_2, L_3, L_4, 1);
		int32_t L_5 = ___dkLen2;
		NullCheck(L_2);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(12 /* Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.PbeParametersGenerator::GenerateDerivedMacParameters(System.Int32) */, L_2, ((int32_t)il2cpp_codegen_multiply(L_5, 8)));
		NullCheck(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_6, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_6, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)), NULL);
		return L_7;
	}
}
// System.Void Nethereum.KeyStore.Crypto.SCrypt::SMix(System.UInt32[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCrypt_SMix_m6F36000A78DF0FBF6902B3B385B773BC7827982F (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___B0, int32_t ___BOff1, int32_t ___N2, int32_t ___r3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* V_5 = NULL;
	uint32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint32_t V_9 = 0;
	ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106* V_10 = NULL;
	{
		int32_t L_0 = ___r3;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_2 = L_2;
		int32_t L_3 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_3 = L_4;
		int32_t L_5 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_4 = L_6;
		int32_t L_7 = ___N2;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_8 = (UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6*)(UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6*)SZArrayNew(UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_5 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ab:
			{// begin finally (depth: 1)
				UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_9 = V_5;
				V_10 = (ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106*)L_9;
				ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106* L_10 = V_10;
				SCrypt_ClearAll_mD12D2C06BC3198D7B3E0071D986EADCE60DD396E(L_10, NULL);
				ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106* L_11 = (ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106*)(ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106*)SZArrayNew(ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106_il2cpp_TypeInfo_var, (uint32_t)4);
				ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106* L_12 = L_11;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_4;
				NullCheck(L_12);
				ArrayElementTypeCheck (L_12, L_13);
				(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeArray*)L_13);
				ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106* L_14 = L_12;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_1;
				NullCheck(L_14);
				ArrayElementTypeCheck (L_14, L_15);
				(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeArray*)L_15);
				ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106* L_16 = L_14;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_2;
				NullCheck(L_16);
				ArrayElementTypeCheck (L_16, L_17);
				(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeArray*)L_17);
				ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106* L_18 = L_16;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_3;
				NullCheck(L_18);
				ArrayElementTypeCheck (L_18, L_19);
				(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeArray*)L_19);
				SCrypt_ClearAll_mD12D2C06BC3198D7B3E0071D986EADCE60DD396E(L_18, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___B0;
				int32_t L_21 = ___BOff1;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_4;
				int32_t L_23 = V_0;
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, L_21, (RuntimeArray*)L_22, 0, L_23, NULL);
				V_7 = 0;
				goto IL_005e_1;
			}

IL_003c_1:
			{
				UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_24 = V_5;
				int32_t L_25 = V_7;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_4;
				NullCheck((RuntimeArray*)L_26);
				RuntimeObject* L_27;
				L_27 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_26, NULL);
				NullCheck(L_24);
				ArrayElementTypeCheck (L_24, ((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_27, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var)));
				(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_27, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var)));
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = V_4;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_1;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = V_2;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_3;
				int32_t L_32 = ___r3;
				SCrypt_BlockMix_m5FCEA920F6897ADED9D5EE04C1D8E2E6ED4D86FB(L_28, L_29, L_30, L_31, L_32, NULL);
				int32_t L_33 = V_7;
				V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
			}

IL_005e_1:
			{
				int32_t L_34 = V_7;
				int32_t L_35 = ___N2;
				if ((((int32_t)L_34) < ((int32_t)L_35)))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_36 = ___N2;
				V_6 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
				V_8 = 0;
				goto IL_0099_1;
			}

IL_006d_1:
			{
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = V_4;
				int32_t L_38 = V_0;
				NullCheck(L_37);
				int32_t L_39 = ((int32_t)il2cpp_codegen_subtract(L_38, ((int32_t)16)));
				uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
				uint32_t L_41 = V_6;
				V_9 = ((int32_t)((int32_t)L_40&(int32_t)L_41));
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = V_4;
				UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_43 = V_5;
				uint32_t L_44 = V_9;
				NullCheck(L_43);
				uint32_t L_45 = L_44;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = V_4;
				SCrypt_Xor_m67CE628AF75EB4A985EE5B0F3AE6887E3EF47CC3(L_42, L_46, 0, L_47, NULL);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = V_4;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = V_1;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = V_2;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = V_3;
				int32_t L_52 = ___r3;
				SCrypt_BlockMix_m5FCEA920F6897ADED9D5EE04C1D8E2E6ED4D86FB(L_48, L_49, L_50, L_51, L_52, NULL);
				int32_t L_53 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add(L_53, 1));
			}

IL_0099_1:
			{
				int32_t L_54 = V_8;
				int32_t L_55 = ___N2;
				if ((((int32_t)L_54) < ((int32_t)L_55)))
				{
					goto IL_006d_1;
				}
			}
			{
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = V_4;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___B0;
				int32_t L_58 = ___BOff1;
				int32_t L_59 = V_0;
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_56, 0, (RuntimeArray*)L_57, L_58, L_59, NULL);
				goto IL_00d3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d3:
	{
		return;
	}
}
// System.Void Nethereum.KeyStore.Crypto.SCrypt::BlockMix(System.UInt32[],System.UInt32[],System.UInt32[],System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCrypt_BlockMix_m5FCEA920F6897ADED9D5EE04C1D8E2E6ED4D86FB (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___B0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___X11, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___X22, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___Y3, int32_t ___r4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___B0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___B0;
		NullCheck(L_1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___X11;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), ((int32_t)16))), (RuntimeArray*)L_2, 0, ((int32_t)16), NULL);
		V_0 = 0;
		V_1 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___B0;
		NullCheck(L_3);
		V_2 = ((int32_t)(((int32_t)(((RuntimeArray*)L_3)->max_length))>>1));
		int32_t L_4 = ___r4;
		V_3 = ((int32_t)il2cpp_codegen_multiply(2, L_4));
		goto IL_004c;
	}

IL_0021:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___X11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___B0;
		int32_t L_7 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___X22;
		SCrypt_Xor_m67CE628AF75EB4A985EE5B0F3AE6887E3EF47CC3(L_5, L_6, L_7, L_8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___X22;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___X11;
		SCrypt_SalsaCore_m9C56F73A9F4A62F39690A912714BCD5BD0CCC5E6(8, L_9, L_10, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___X11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___Y3;
		int32_t L_13 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, 0, (RuntimeArray*)L_12, L_13, ((int32_t)16), NULL);
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16));
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, ((int32_t)16)));
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_004c:
	{
		int32_t L_19 = V_3;
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___Y3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___B0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___Y3;
		NullCheck(L_22);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, 0, ((int32_t)(((RuntimeArray*)L_22)->max_length)), NULL);
		return;
	}
}
// System.Void Nethereum.KeyStore.Crypto.SCrypt::Xor(System.UInt32[],System.UInt32[],System.Int32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCrypt_Xor_m67CE628AF75EB4A985EE5B0F3AE6887E3EF47CC3 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___a0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___b1, int32_t ___bOff2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___output3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___output3;
		NullCheck(L_0);
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), 1));
		goto IL_0018;
	}

IL_0008:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___output3;
		int32_t L_2 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___a0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___b1;
		int32_t L_8 = ___bOff2;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_8, L_9));
		uint32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint32_t)((int32_t)((int32_t)L_6^(int32_t)L_11)));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0018:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
// System.Void Nethereum.KeyStore.Crypto.SCrypt::Clear(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCrypt_Clear_m9C8E80EB4E04EF3E6FB37ED6AA546C6369A91B9A (RuntimeArray* ___array0, const RuntimeMethod* method) 
{
	{
		RuntimeArray* L_0 = ___array0;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		RuntimeArray* L_1 = ___array0;
		RuntimeArray* L_2 = ___array0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_2, NULL);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB(L_1, 0, L_3, NULL);
	}

IL_0010:
	{
		return;
	}
}
// System.Void Nethereum.KeyStore.Crypto.SCrypt::ClearAll(System.Array[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCrypt_ClearAll_mD12D2C06BC3198D7B3E0071D986EADCE60DD396E (ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106* ___arrays0, const RuntimeMethod* method) 
{
	ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106* L_0 = ___arrays0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0012;
	}

IL_0006:
	{
		ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeArray* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		SCrypt_Clear_m9C8E80EB4E04EF3E6FB37ED6AA546C6369A91B9A(L_4, NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0012:
	{
		int32_t L_6 = V_1;
		ArrayU5BU5D_t0A6F0DAB3365918634236B54AE84B9483F306106* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Boolean Nethereum.KeyStore.Crypto.SCrypt::IsPowerOf2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SCrypt_IsPowerOf2_m1F0E4E4358CBA1753439B407014D8E7B2734D737 (int32_t ___x0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___x0;
		return (bool)((((int32_t)((int32_t)(L_0&((int32_t)il2cpp_codegen_subtract(L_1, 1))))) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Nethereum.KeyStore.Crypto.SCrypt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCrypt__ctor_m0650F67A00DF352B684F993A0193A91DC1D7DE78 (SCrypt_tE0173A944FB440DA9B0A3E25F78D57AB1B0D9205* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Pbkdf2Params_get_Count_mC11B0427876CC79A0979C88487915DFA8960E03A_inline (Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCountU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KdfParams_get_Dklen_m1E5547E75FFAD02C826CFDC8CD09AC6EAEEBDB14_inline (KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDklenU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KdfParams_set_Dklen_m8873AE7294C28118FDADC3F76AB3FCCA12ED0A9E_inline (KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CDklenU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pbkdf2Params_set_Count_mF6B58E39489D4C7F5E7B0D46282913C817BC95B2_inline (Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CCountU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pbkdf2Params_set_Prf_mC7BE10C0C3A3D9D57247516A9A435067FE1F3242_inline (Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CPrfU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPrfU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CipherParams_get_Iv_mACA12BCFA8DA0C8DF791A05028119A5A14F4CBC4_inline (CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CIvU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KdfParams_get_Salt_mBC1DA50823694582BA754AAAB3F2C098C024205B_inline (KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSaltU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParams_get_N_mE57FDEFFC05A1BEE6E1D2AEC8E0768206BEE49E2_inline (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CNU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParams_get_R_mBBE1A0B0B5E9B5E32A3E798FAC0766775DDF186E_inline (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CRU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParams_get_P_mF431C35431D06FDC71DF89E3BCA31DB14A9C880E_inline (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CPU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParams_set_N_mD7A43E5EAAB1D1C3D9AFE496F7ED17549AC7D670_inline (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CNU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParams_set_R_m9AD9236A19430A9B44EFA3301D417E7F665FDAAE_inline (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CRU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParams_set_P_m54B8987AEE116A5F01F276FB41F5B7BD6CE93FD7_inline (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CPU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CipherParams_set_Iv_mE77D6319BE01333E7B3F6F7F98453DABAE5BB6C6_inline (CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CIvU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIvU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_cipherparams_mE014108E074C5803596A0CE491004920054A7A86_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* ___value0, const RuntimeMethod* method) 
{
	{
		CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* L_0 = ___value0;
		__this->___U3CcipherparamsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcipherparamsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfoPbkdf2DTO_set_kdfparams_m164610BB3A75FEF212B50C70F5E842DB0941319F_inline (CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* __this, Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* ___value0, const RuntimeMethod* method) 
{
	{
		Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* L_0 = ___value0;
		__this->___U3CkdfparamsU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CkdfparamsU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfoScryptDTO_set_kdfparams_mD261CED055A2C04A72FAFF40AE3C420DFAC1483B_inline (CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* __this, ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* ___value0, const RuntimeMethod* method) 
{
	{
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_0 = ___value0;
		__this->___U3CkdfparamsU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CkdfparamsU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStoreDTOBase_set_address_m4E71FF95A9D7900DD962E9C8EDA24D1053EC5C5D_inline (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CaddressU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaddressU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStoreDTOBase_set_id_m764A98BA5E66E066334464B230ED752BA37A1905_inline (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStoreDTOBase_set_version_m8891C2744FDC8C814E198F4C66AF3F1E87F0180F_inline (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CversionU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* KeyStorePbkdf2DTO_get_crypto_mC816727DC3C94366BFED80AC35CAA2AA39CED861_inline (KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* __this, const RuntimeMethod* method) 
{
	{
		CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* L_0 = __this->___U3CcryptoU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_cipher_m577997203D05BD47C1F03175A176CEE47468A563_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CcipherU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcipherU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_cipherText_m100CA8B4796B16C2C927A56C894D18F3B354DC03_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CcipherTextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcipherTextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_kdf_m0CE24ACCEAD963F6D649715EFAB53CE0B3BD7F54_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CkdfU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CkdfU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_mac_m8C7197F81B08179424DDC30A8D72413D82D3CC54_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CmacU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmacU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* CryptoInfoPbkdf2DTO_get_kdfparams_mF0404BA3404C382131A188BCD6544C68FFCFAD03_inline (CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* __this, const RuntimeMethod* method) 
{
	{
		Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* L_0 = __this->___U3CkdfparamsU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pbkdf2ParamsDTO_set_c_m4BA1D6942D9986166E02014DBB6843C5A25230FE_inline (Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CcU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Pbkdf2Params_get_Prf_m452DEB151B6B91A6F85AB4335A1E9FE9792B97B0_inline (Pbkdf2Params_t46AB110152013623F0E3001002441E03A31CCD7D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPrfU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pbkdf2ParamsDTO_set_prf_m4E5CBB3B28E1A63DB33B64CBD240667842DFFBC5_inline (Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CprfU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CprfU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KdfParamsDTO_set_dklen_mA75B7F4B76A3E1E4D4D3F7C139F0CF15A097A0A6_inline (KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CdklenU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KdfParamsDTO_set_salt_m1D5465724D0D2EC60A15AE7671FC6AC7266052F2_inline (KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CsaltU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsaltU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* CryptoInfoDTOBase_get_cipherparams_mE9D29F3332F2FC754DE4C29BC8C183F08A389F77_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) 
{
	{
		CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* L_0 = __this->___U3CcipherparamsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CipherParamsDTO_set_iv_mAA82EE8F95D570A32B28DDB5D137E452547E1447_inline (CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CivU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CivU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KeyStoreDTOBase_get_address_m0134A1C538EC96FD7F883CF2B69E95EA0CAB0FD3_inline (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CaddressU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KeyStoreDTOBase_get_id_mFDCD569677A39C6B99970D2C598D7587EFB2E77C_inline (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyStoreDTOBase_get_version_m7F00B43A9B900EE11DDA1E69DB08CCB03C5BE9ED_inline (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CversionU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfoDTOBase_get_cipher_mC2254AEF9DABAE8647851B32135596ED041004D7_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CcipherU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfoDTOBase_get_cipherText_mCA4F7FEE19C44BB4E20FF7B4D06E6F9832CC2DEF_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CcipherTextU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfoDTOBase_get_kdf_m37F91BCF553659BC936ACA04FBE68BAD0AD09703_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CkdfU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfoDTOBase_get_mac_m832D5DAE6B8D34645CB12D6C1EF621E8247053DB_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CmacU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Pbkdf2ParamsDTO_get_c_m3B13666602544BAA07A393358D4A7702A80FD03F_inline (Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CcU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Pbkdf2ParamsDTO_get_prf_m9A05AF9E39269FB7A363F6744E0FC201B9CCFE04_inline (Pbkdf2ParamsDTO_tB72E45E2EBB40DA526CB10DE6F9FF2135F4E0323* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CprfU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KdfParamsDTO_get_dklen_mF4F94F51F353F4A8CF43F2D9BD782FB90FF8142D_inline (KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CdklenU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KdfParamsDTO_get_salt_m6238900E8629F7663690AD6E1E4C2FF99E8F35ED_inline (KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CsaltU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KdfParams_set_Salt_m578F3DA59E3C91B1C70F13793C6926210CE139F7_inline (KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CSaltU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSaltU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CipherParamsDTO_get_iv_m9A9BB6EC013B70B8EE1542B30F8644D520FEE92C_inline (CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CivU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline (KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* __this, const RuntimeMethod* method) 
{
	{
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_0 = __this->___U3CcryptoU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* CryptoInfoScryptDTO_get_kdfparams_m88558053C3D05D95A823EC4DB490A6F85518808A_inline (CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* __this, const RuntimeMethod* method) 
{
	{
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_0 = __this->___U3CkdfparamsU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParamsDTO_set_r_m9EA349D301AF31CBC06A4204807852BC10B8772B_inline (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CrU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParamsDTO_set_n_mF43334DBC344EFF9F8DCED73543A5A25847A6A55_inline (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CnU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParamsDTO_set_p_m2A2C1324B4C9F90F65E916EB957EDB148865DF45_inline (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CpU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParamsDTO_get_r_mD2EED1B5689E035883BB29D9BD1A8B303412DF65_inline (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CrU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParamsDTO_get_n_m3FF77C12A496BB3D66BDB6EDB8DAF21525CE2AB8_inline (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CnU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParamsDTO_get_p_m19884391C68271FF5FB3BEF1CF2935DE29E834F1_inline (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CpU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStorePbkdf2DTO_set_crypto_mBD64474DF76F8511397F3F8387859843E2F8D696_inline (KeyStorePbkdf2DTO_t9743B4492C766AA9AFED1FFEF810FC7913B2CCB3* __this, CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* ___value0, const RuntimeMethod* method) 
{
	{
		CryptoInfoPbkdf2DTO_t0FD10C370040618846034C4AEFC27EF0899C94AF* L_0 = ___value0;
		__this->___U3CcryptoU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcryptoU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStoreScryptDTO_set_crypto_m6B338293B428CD65FBC9511AF668A777FDA99892_inline (KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* __this, CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* ___value0, const RuntimeMethod* method) 
{
	{
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_0 = ___value0;
		__this->___U3CcryptoU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcryptoU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* KeyStore_1_get_Crypto_m362D6AF9A7BF2BF3B219D424C1032FA41E8E6C38_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, const RuntimeMethod* method) 
{
	{
		CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* L_0 = (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71*)__this->___U3CCryptoU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfo_1_get_Mac_m055A7202D58A9C26ACE8916AA09E61188A5DDECD_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = (String_t*)__this->___U3CMacU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* CryptoInfo_1_get_CipherParams_mEFD7BECC8575B9293B4AED072809D6633279DACF_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, const RuntimeMethod* method) 
{
	{
		CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* L_0 = (CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0*)__this->___U3CCipherParamsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfo_1_get_CipherText_m8420F5C90CAE65A1937800647E74C598DAB22A8A_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = (String_t*)__this->___U3CCipherTextU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CryptoInfo_1_get_Kdfparams_m5E9AD76074E8F4BFBA54C9536B34974011401AC9_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CKdfparamsU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KeyStore_1_get_Address_m5F5EA6C9152DC138F05852DB6B99403272396FA9_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = (String_t*)__this->___U3CAddressU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KeyStore_1_get_Id_mA2BB933706FD75C2E8C1B9F68E7A69B95C90E8BE_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = (String_t*)__this->___U3CIdU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyStore_1_get_Version_mD84F708EDB5D57EE21AC2D13ACDDE79797ECF8D9_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___U3CVersionU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfo_1_get_Cipher_m9B49A00BF1810DCCCB16A7B10F530B3D7497E002_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = (String_t*)__this->___U3CCipherU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfo_1_get_Kdf_m2D86721BF4AD889D24466A95184E47CDB2A57DC2_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = (String_t*)__this->___U3CKdfU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStore_1_set_Address_mA07ED729404AE5235478AD487878BA0E586F17C1_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CAddressU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAddressU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStore_1_set_Id_m3420C8176B12F55B174C71505E14F217DD006A09_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStore_1_set_Version_mBCC01AB392E374F30A4C64911F11270F953CDFD7_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CVersionU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStore_1_set_Crypto_mEB8BE7B51499176BE67A3A002F266A770B50259E_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* ___value0, const RuntimeMethod* method) 
{
	{
		CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* L_0 = ___value0;
		__this->___U3CCryptoU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCryptoU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfo_1_set_Cipher_m04CD908F1C173EA7292CC67031546B4A15AA4186_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CCipherU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCipherU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfo_1_set_CipherText_m76F538CAC717AE7BC894683B6DA9EAAA9DB6FE96_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CCipherTextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCipherTextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfo_1_set_Kdf_mF7677CA999DA927074A8807A8C0F33AC03242CEA_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CKdfU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CKdfU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfo_1_set_Mac_mB9D282B2388CFEABBCF79168151FC856FD0A87DE_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CMacU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMacU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfo_1_set_Kdfparams_mCF71DADA258CB5683877958BB3500389739E05A2_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CKdfparamsU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CKdfparamsU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfo_1_set_CipherParams_m61BF691E694BFDFD0D0943CF2EB9A2D8BF8BD4F0_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* ___value0, const RuntimeMethod* method) 
{
	{
		CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* L_0 = ___value0;
		__this->___U3CCipherParamsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCipherParamsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
