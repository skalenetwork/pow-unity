#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Byte[] Nethereum.KeyStore.IKeyStoreService`1::DecryptKeyStore(System.String,Nethereum.KeyStore.Model.KeyStore`1<T>)
// 0x00000002 Nethereum.KeyStore.Model.KeyStore`1<T> Nethereum.KeyStore.IKeyStoreService`1::DeserializeKeyStoreFromJson(System.String)
// 0x00000003 Nethereum.KeyStore.Model.KeyStore`1<T> Nethereum.KeyStore.IKeyStoreService`1::EncryptAndGenerateKeyStore(System.String,System.Byte[],System.String)
// 0x00000004 System.String Nethereum.KeyStore.IKeyStoreService`1::EncryptAndGenerateKeyStoreAsJson(System.String,System.Byte[],System.String)
// 0x00000005 System.String Nethereum.KeyStore.IKeyStoreService`1::GetCipherType()
// 0x00000006 System.String Nethereum.KeyStore.IKeyStoreService`1::GetKdfType()
// 0x00000007 System.Void Nethereum.KeyStore.InvalidKdfException::.ctor(System.String)
extern void InvalidKdfException__ctor_mCB1602A9FA69439AEE3CA2CD0046C72E7DB5C6D9 (void);
// 0x00000008 Nethereum.KeyStore.KeyStoreKdfChecker/KdfType Nethereum.KeyStore.KeyStoreKdfChecker::GetKeyStoreKdfType(System.String)
extern void KeyStoreKdfChecker_GetKeyStoreKdfType_mA3319D63885770AF51B6A09257DFFE7504A89528 (void);
// 0x00000009 System.Void Nethereum.KeyStore.KeyStoreKdfChecker::.ctor()
extern void KeyStoreKdfChecker__ctor_m3BA57A0DD4812D32648D34710EA0581DCF6100CA (void);
// 0x0000000A System.Void Nethereum.KeyStore.KeyStorePbkdf2Service::.ctor()
extern void KeyStorePbkdf2Service__ctor_m60CF3CF3AE63D8B5B4561B9DE729A9F7726C02B7 (void);
// 0x0000000B System.Void Nethereum.KeyStore.KeyStorePbkdf2Service::.ctor(Nethereum.KeyStore.Crypto.IRandomBytesGenerator,Nethereum.KeyStore.Crypto.KeyStoreCrypto)
extern void KeyStorePbkdf2Service__ctor_m6473B68062575288229C9500D57490BEE0C21603 (void);
// 0x0000000C System.Void Nethereum.KeyStore.KeyStorePbkdf2Service::.ctor(Nethereum.KeyStore.Crypto.IRandomBytesGenerator)
extern void KeyStorePbkdf2Service__ctor_m159A1C387AFAA0327B05B55760D3451DBD29B1E3 (void);
// 0x0000000D System.Byte[] Nethereum.KeyStore.KeyStorePbkdf2Service::GenerateDerivedKey(System.String,System.Byte[],Nethereum.KeyStore.Model.Pbkdf2Params)
extern void KeyStorePbkdf2Service_GenerateDerivedKey_mD5D251BAB7776B7EA98FF925FC85D45F29307E13 (void);
// 0x0000000E Nethereum.KeyStore.Model.Pbkdf2Params Nethereum.KeyStore.KeyStorePbkdf2Service::GetDefaultParams()
extern void KeyStorePbkdf2Service_GetDefaultParams_m1F66EB7CF3C985F481C933CF6614397C528284DA (void);
// 0x0000000F Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params> Nethereum.KeyStore.KeyStorePbkdf2Service::DeserializeKeyStoreFromJson(System.String)
extern void KeyStorePbkdf2Service_DeserializeKeyStoreFromJson_m10C016CFE5ABDA2E341EF96462BE1D89608D1B9B (void);
// 0x00000010 System.String Nethereum.KeyStore.KeyStorePbkdf2Service::SerializeKeyStoreToJson(Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params>)
extern void KeyStorePbkdf2Service_SerializeKeyStoreToJson_m48C5A8C3CFDDA3C7692352C603D45171188E0F91 (void);
// 0x00000011 System.Byte[] Nethereum.KeyStore.KeyStorePbkdf2Service::DecryptKeyStore(System.String,Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params>)
extern void KeyStorePbkdf2Service_DecryptKeyStore_mF3218093BBCDFC273D07974126FB8D9C0897335D (void);
// 0x00000012 System.String Nethereum.KeyStore.KeyStorePbkdf2Service::GetKdfType()
extern void KeyStorePbkdf2Service_GetKdfType_m667E5872AC46D31608654F30741AFDE70630B1D2 (void);
// 0x00000013 System.Void Nethereum.KeyStore.KeyStoreScryptService::.ctor()
extern void KeyStoreScryptService__ctor_mE569E0226BEA6594C280E2F2CE16C21C87C956E5 (void);
// 0x00000014 System.Void Nethereum.KeyStore.KeyStoreScryptService::.ctor(Nethereum.KeyStore.Crypto.IRandomBytesGenerator,Nethereum.KeyStore.Crypto.KeyStoreCrypto)
extern void KeyStoreScryptService__ctor_m47C9FE8AC6F06430EC711162B88F08DDE96FA4E3 (void);
// 0x00000015 System.Void Nethereum.KeyStore.KeyStoreScryptService::.ctor(Nethereum.KeyStore.Crypto.IRandomBytesGenerator)
extern void KeyStoreScryptService__ctor_m32CB67F6070BED367100C3788D6827BD29D73A90 (void);
// 0x00000016 System.Byte[] Nethereum.KeyStore.KeyStoreScryptService::GenerateDerivedKey(System.String,System.Byte[],Nethereum.KeyStore.Model.ScryptParams)
extern void KeyStoreScryptService_GenerateDerivedKey_mA5067DA8F651D23C272DEA33D511463D9057FF40 (void);
// 0x00000017 Nethereum.KeyStore.Model.ScryptParams Nethereum.KeyStore.KeyStoreScryptService::GetDefaultParams()
extern void KeyStoreScryptService_GetDefaultParams_m5C93B9C95AC2C4C1D9D2717BE0EFCCEF70E4AEF1 (void);
// 0x00000018 Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams> Nethereum.KeyStore.KeyStoreScryptService::DeserializeKeyStoreFromJson(System.String)
extern void KeyStoreScryptService_DeserializeKeyStoreFromJson_mBF41D80D7E551C8750D75C84298C872ED83C36CA (void);
// 0x00000019 System.String Nethereum.KeyStore.KeyStoreScryptService::SerializeKeyStoreToJson(Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>)
extern void KeyStoreScryptService_SerializeKeyStoreToJson_m782AE252062D9372F3FB3AA790371C195D405E90 (void);
// 0x0000001A System.Byte[] Nethereum.KeyStore.KeyStoreScryptService::DecryptKeyStore(System.String,Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>)
extern void KeyStoreScryptService_DecryptKeyStore_m97CE221D0D9D9ED305FD4B0843F9D62209E72909 (void);
// 0x0000001B System.String Nethereum.KeyStore.KeyStoreScryptService::GetKdfType()
extern void KeyStoreScryptService_GetKdfType_m8636618BBCB5C14E23C53B98FFE54644B5A455E7 (void);
// 0x0000001C System.Void Nethereum.KeyStore.KeyStoreService::.ctor()
extern void KeyStoreService__ctor_mAE53375369473A712AC46E824EB9099A0FED079F (void);
// 0x0000001D System.Void Nethereum.KeyStore.KeyStoreService::.ctor(Nethereum.KeyStore.KeyStoreKdfChecker,Nethereum.KeyStore.KeyStoreScryptService,Nethereum.KeyStore.KeyStorePbkdf2Service)
extern void KeyStoreService__ctor_m69E88F370B4EFA99788B32DB7FED5CEBFB32E6E9 (void);
// 0x0000001E System.String Nethereum.KeyStore.KeyStoreService::GetAddressFromKeyStore(System.String)
extern void KeyStoreService_GetAddressFromKeyStore_mC7C96A6B89A463F6B7F9FBBD97DB7D35A2853D6F (void);
// 0x0000001F System.String Nethereum.KeyStore.KeyStoreService::GenerateUTCFileName(System.String)
extern void KeyStoreService_GenerateUTCFileName_m2122563B05C43DF0515DB2C0E5A1CF07EB3CFC54 (void);
// 0x00000020 System.Byte[] Nethereum.KeyStore.KeyStoreService::DecryptKeyStoreFromJson(System.String,System.String)
extern void KeyStoreService_DecryptKeyStoreFromJson_mAA38D24725757DAE8326E6E04E7B09A5E619435F (void);
// 0x00000021 System.String Nethereum.KeyStore.KeyStoreService::EncryptAndGenerateDefaultKeyStoreAsJson(System.String,System.Byte[],System.String)
extern void KeyStoreService_EncryptAndGenerateDefaultKeyStoreAsJson_m5FCE405D589A3ED2AEBF0DA7559C15535BFFE751 (void);
// 0x00000022 System.Void Nethereum.KeyStore.KeyStoreServiceBase`1::.ctor()
// 0x00000023 System.Void Nethereum.KeyStore.KeyStoreServiceBase`1::.ctor(Nethereum.KeyStore.Crypto.IRandomBytesGenerator,Nethereum.KeyStore.Crypto.KeyStoreCrypto)
// 0x00000024 System.Void Nethereum.KeyStore.KeyStoreServiceBase`1::.ctor(Nethereum.KeyStore.Crypto.IRandomBytesGenerator)
// 0x00000025 Nethereum.KeyStore.Model.KeyStore`1<T> Nethereum.KeyStore.KeyStoreServiceBase`1::EncryptAndGenerateKeyStore(System.String,System.Byte[],System.String)
// 0x00000026 System.String Nethereum.KeyStore.KeyStoreServiceBase`1::EncryptAndGenerateKeyStoreAsJson(System.String,System.Byte[],System.String)
// 0x00000027 Nethereum.KeyStore.Model.KeyStore`1<T> Nethereum.KeyStore.KeyStoreServiceBase`1::DeserializeKeyStoreFromJson(System.String)
// 0x00000028 System.String Nethereum.KeyStore.KeyStoreServiceBase`1::SerializeKeyStoreToJson(Nethereum.KeyStore.Model.KeyStore`1<T>)
// 0x00000029 System.Byte[] Nethereum.KeyStore.KeyStoreServiceBase`1::DecryptKeyStore(System.String,Nethereum.KeyStore.Model.KeyStore`1<T>)
// 0x0000002A System.String Nethereum.KeyStore.KeyStoreServiceBase`1::GetKdfType()
// 0x0000002B System.String Nethereum.KeyStore.KeyStoreServiceBase`1::GetCipherType()
// 0x0000002C Nethereum.KeyStore.Model.KeyStore`1<T> Nethereum.KeyStore.KeyStoreServiceBase`1::EncryptAndGenerateKeyStore(System.String,System.Byte[],System.String,T)
// 0x0000002D System.String Nethereum.KeyStore.KeyStoreServiceBase`1::EncryptAndGenerateKeyStoreAsJson(System.String,System.Byte[],System.String,T)
// 0x0000002E System.Byte[] Nethereum.KeyStore.KeyStoreServiceBase`1::DecryptKeyStoreFromJson(System.String,System.String)
// 0x0000002F System.Byte[] Nethereum.KeyStore.KeyStoreServiceBase`1::GenerateCipher(System.Byte[],System.Byte[],System.Byte[])
// 0x00000030 System.Byte[] Nethereum.KeyStore.KeyStoreServiceBase`1::GenerateDerivedKey(System.String,System.Byte[],T)
// 0x00000031 T Nethereum.KeyStore.KeyStoreServiceBase`1::GetDefaultParams()
// 0x00000032 System.Void Nethereum.KeyStore.Model.CipherParams::.ctor()
extern void CipherParams__ctor_m6EF7551DAA09455A6D0CB9B5E98BA76CCD98072A (void);
// 0x00000033 System.Void Nethereum.KeyStore.Model.CipherParams::.ctor(System.Byte[])
extern void CipherParams__ctor_mF3F9808A4E1C650EE3E5E10FB57455CC5FD5E58E (void);
// 0x00000034 System.String Nethereum.KeyStore.Model.CipherParams::get_Iv()
extern void CipherParams_get_Iv_mACA12BCFA8DA0C8DF791A05028119A5A14F4CBC4 (void);
// 0x00000035 System.Void Nethereum.KeyStore.Model.CipherParams::set_Iv(System.String)
extern void CipherParams_set_Iv_mE77D6319BE01333E7B3F6F7F98453DABAE5BB6C6 (void);
// 0x00000036 System.Void Nethereum.KeyStore.Model.CryptoInfo`1::.ctor()
// 0x00000037 System.Void Nethereum.KeyStore.Model.CryptoInfo`1::.ctor(System.String,System.Byte[],System.Byte[],System.Byte[],System.Byte[],TKdfParams,System.String)
// 0x00000038 System.String Nethereum.KeyStore.Model.CryptoInfo`1::get_Cipher()
// 0x00000039 System.Void Nethereum.KeyStore.Model.CryptoInfo`1::set_Cipher(System.String)
// 0x0000003A System.String Nethereum.KeyStore.Model.CryptoInfo`1::get_CipherText()
// 0x0000003B System.Void Nethereum.KeyStore.Model.CryptoInfo`1::set_CipherText(System.String)
// 0x0000003C Nethereum.KeyStore.Model.CipherParams Nethereum.KeyStore.Model.CryptoInfo`1::get_CipherParams()
// 0x0000003D System.Void Nethereum.KeyStore.Model.CryptoInfo`1::set_CipherParams(Nethereum.KeyStore.Model.CipherParams)
// 0x0000003E System.String Nethereum.KeyStore.Model.CryptoInfo`1::get_Kdf()
// 0x0000003F System.Void Nethereum.KeyStore.Model.CryptoInfo`1::set_Kdf(System.String)
// 0x00000040 System.String Nethereum.KeyStore.Model.CryptoInfo`1::get_Mac()
// 0x00000041 System.Void Nethereum.KeyStore.Model.CryptoInfo`1::set_Mac(System.String)
// 0x00000042 TKdfParams Nethereum.KeyStore.Model.CryptoInfo`1::get_Kdfparams()
// 0x00000043 System.Void Nethereum.KeyStore.Model.CryptoInfo`1::set_Kdfparams(TKdfParams)
// 0x00000044 System.Int32 Nethereum.KeyStore.Model.KdfParams::get_Dklen()
extern void KdfParams_get_Dklen_m1E5547E75FFAD02C826CFDC8CD09AC6EAEEBDB14 (void);
// 0x00000045 System.Void Nethereum.KeyStore.Model.KdfParams::set_Dklen(System.Int32)
extern void KdfParams_set_Dklen_m8873AE7294C28118FDADC3F76AB3FCCA12ED0A9E (void);
// 0x00000046 System.String Nethereum.KeyStore.Model.KdfParams::get_Salt()
extern void KdfParams_get_Salt_mBC1DA50823694582BA754AAAB3F2C098C024205B (void);
// 0x00000047 System.Void Nethereum.KeyStore.Model.KdfParams::set_Salt(System.String)
extern void KdfParams_set_Salt_m578F3DA59E3C91B1C70F13793C6926210CE139F7 (void);
// 0x00000048 System.Void Nethereum.KeyStore.Model.KdfParams::.ctor()
extern void KdfParams__ctor_m39CCECF77A608644CB36BBBA3081362363BFF843 (void);
// 0x00000049 Nethereum.KeyStore.Model.CryptoInfo`1<TKdfParams> Nethereum.KeyStore.Model.KeyStore`1::get_Crypto()
// 0x0000004A System.Void Nethereum.KeyStore.Model.KeyStore`1::set_Crypto(Nethereum.KeyStore.Model.CryptoInfo`1<TKdfParams>)
// 0x0000004B System.String Nethereum.KeyStore.Model.KeyStore`1::get_Id()
// 0x0000004C System.Void Nethereum.KeyStore.Model.KeyStore`1::set_Id(System.String)
// 0x0000004D System.String Nethereum.KeyStore.Model.KeyStore`1::get_Address()
// 0x0000004E System.Void Nethereum.KeyStore.Model.KeyStore`1::set_Address(System.String)
// 0x0000004F System.Int32 Nethereum.KeyStore.Model.KeyStore`1::get_Version()
// 0x00000050 System.Void Nethereum.KeyStore.Model.KeyStore`1::set_Version(System.Int32)
// 0x00000051 System.Void Nethereum.KeyStore.Model.KeyStore`1::.ctor()
// 0x00000052 System.Int32 Nethereum.KeyStore.Model.Pbkdf2Params::get_Count()
extern void Pbkdf2Params_get_Count_mC11B0427876CC79A0979C88487915DFA8960E03A (void);
// 0x00000053 System.Void Nethereum.KeyStore.Model.Pbkdf2Params::set_Count(System.Int32)
extern void Pbkdf2Params_set_Count_mF6B58E39489D4C7F5E7B0D46282913C817BC95B2 (void);
// 0x00000054 System.String Nethereum.KeyStore.Model.Pbkdf2Params::get_Prf()
extern void Pbkdf2Params_get_Prf_m452DEB151B6B91A6F85AB4335A1E9FE9792B97B0 (void);
// 0x00000055 System.Void Nethereum.KeyStore.Model.Pbkdf2Params::set_Prf(System.String)
extern void Pbkdf2Params_set_Prf_mC7BE10C0C3A3D9D57247516A9A435067FE1F3242 (void);
// 0x00000056 System.Void Nethereum.KeyStore.Model.Pbkdf2Params::.ctor()
extern void Pbkdf2Params__ctor_mFF835BB78C590FD34736CC991A9F375DEB02919A (void);
// 0x00000057 System.Int32 Nethereum.KeyStore.Model.ScryptParams::get_N()
extern void ScryptParams_get_N_mE57FDEFFC05A1BEE6E1D2AEC8E0768206BEE49E2 (void);
// 0x00000058 System.Void Nethereum.KeyStore.Model.ScryptParams::set_N(System.Int32)
extern void ScryptParams_set_N_mD7A43E5EAAB1D1C3D9AFE496F7ED17549AC7D670 (void);
// 0x00000059 System.Int32 Nethereum.KeyStore.Model.ScryptParams::get_R()
extern void ScryptParams_get_R_mBBE1A0B0B5E9B5E32A3E798FAC0766775DDF186E (void);
// 0x0000005A System.Void Nethereum.KeyStore.Model.ScryptParams::set_R(System.Int32)
extern void ScryptParams_set_R_m9AD9236A19430A9B44EFA3301D417E7F665FDAAE (void);
// 0x0000005B System.Int32 Nethereum.KeyStore.Model.ScryptParams::get_P()
extern void ScryptParams_get_P_mF431C35431D06FDC71DF89E3BCA31DB14A9C880E (void);
// 0x0000005C System.Void Nethereum.KeyStore.Model.ScryptParams::set_P(System.Int32)
extern void ScryptParams_set_P_m54B8987AEE116A5F01F276FB41F5B7BD6CE93FD7 (void);
// 0x0000005D System.Void Nethereum.KeyStore.Model.ScryptParams::.ctor()
extern void ScryptParams__ctor_m5DC4BDC83AC01594CA6FCBED4B0AE865F33229FD (void);
// 0x0000005E System.String Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO::get_iv()
extern void CipherParamsDTO_get_iv_m9A9BB6EC013B70B8EE1542B30F8644D520FEE92C (void);
// 0x0000005F System.Void Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO::set_iv(System.String)
extern void CipherParamsDTO_set_iv_mAA82EE8F95D570A32B28DDB5D137E452547E1447 (void);
// 0x00000060 System.Void Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO::.ctor()
extern void CipherParamsDTO__ctor_m3A7C44114C8F04E69B34C05E366716D7C18066BB (void);
// 0x00000061 System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::.ctor()
extern void CryptoInfoDTOBase__ctor_m37903E098FB857B1E4AD7CF702F9B6ACA53A6789 (void);
// 0x00000062 System.String Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::get_cipher()
extern void CryptoInfoDTOBase_get_cipher_mC2254AEF9DABAE8647851B32135596ED041004D7 (void);
// 0x00000063 System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::set_cipher(System.String)
extern void CryptoInfoDTOBase_set_cipher_m577997203D05BD47C1F03175A176CEE47468A563 (void);
// 0x00000064 System.String Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::get_cipherText()
extern void CryptoInfoDTOBase_get_cipherText_mCA4F7FEE19C44BB4E20FF7B4D06E6F9832CC2DEF (void);
// 0x00000065 System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::set_cipherText(System.String)
extern void CryptoInfoDTOBase_set_cipherText_m100CA8B4796B16C2C927A56C894D18F3B354DC03 (void);
// 0x00000066 Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::get_cipherparams()
extern void CryptoInfoDTOBase_get_cipherparams_mE9D29F3332F2FC754DE4C29BC8C183F08A389F77 (void);
// 0x00000067 System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::set_cipherparams(Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO)
extern void CryptoInfoDTOBase_set_cipherparams_mE014108E074C5803596A0CE491004920054A7A86 (void);
// 0x00000068 System.String Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::get_kdf()
extern void CryptoInfoDTOBase_get_kdf_m37F91BCF553659BC936ACA04FBE68BAD0AD09703 (void);
// 0x00000069 System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::set_kdf(System.String)
extern void CryptoInfoDTOBase_set_kdf_m0CE24ACCEAD963F6D649715EFAB53CE0B3BD7F54 (void);
// 0x0000006A System.String Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::get_mac()
extern void CryptoInfoDTOBase_get_mac_m832D5DAE6B8D34645CB12D6C1EF621E8247053DB (void);
// 0x0000006B System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::set_mac(System.String)
extern void CryptoInfoDTOBase_set_mac_m8C7197F81B08179424DDC30A8D72413D82D3CC54 (void);
// 0x0000006C System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoPbkdf2DTO::.ctor()
extern void CryptoInfoPbkdf2DTO__ctor_mF09BE01088667CDB3633838BEC8D6C57C50F72AD (void);
// 0x0000006D Nethereum.KeyStore.JsonDeserialisation.Pbkdf2ParamsDTO Nethereum.KeyStore.JsonDeserialisation.CryptoInfoPbkdf2DTO::get_kdfparams()
extern void CryptoInfoPbkdf2DTO_get_kdfparams_mF0404BA3404C382131A188BCD6544C68FFCFAD03 (void);
// 0x0000006E System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoPbkdf2DTO::set_kdfparams(Nethereum.KeyStore.JsonDeserialisation.Pbkdf2ParamsDTO)
extern void CryptoInfoPbkdf2DTO_set_kdfparams_m164610BB3A75FEF212B50C70F5E842DB0941319F (void);
// 0x0000006F System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO::.ctor()
extern void CryptoInfoScryptDTO__ctor_m4D5FE44A524F51AB6585157B0D17B6B135ECB074 (void);
// 0x00000070 Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO::get_kdfparams()
extern void CryptoInfoScryptDTO_get_kdfparams_m88558053C3D05D95A823EC4DB490A6F85518808A (void);
// 0x00000071 System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO::set_kdfparams(Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO)
extern void CryptoInfoScryptDTO_set_kdfparams_mD261CED055A2C04A72FAFF40AE3C420DFAC1483B (void);
// 0x00000072 System.String Nethereum.KeyStore.JsonDeserialisation.JsonKeyStorePbkdf2Serialiser::SerialisePbkdf2(Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params>)
extern void JsonKeyStorePbkdf2Serialiser_SerialisePbkdf2_m8922669ED62A520D7B2D3F5274BA257E7BDA6E32 (void);
// 0x00000073 Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params> Nethereum.KeyStore.JsonDeserialisation.JsonKeyStorePbkdf2Serialiser::DeserialisePbkdf2(System.String)
extern void JsonKeyStorePbkdf2Serialiser_DeserialisePbkdf2_mCB032E6DDD55BEEEFCBE93C0763D73702D269D4D (void);
// 0x00000074 Nethereum.KeyStore.JsonDeserialisation.KeyStorePbkdf2DTO Nethereum.KeyStore.JsonDeserialisation.JsonKeyStorePbkdf2Serialiser::MapModelToDTO(Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params>)
extern void JsonKeyStorePbkdf2Serialiser_MapModelToDTO_mCD248C7A7274DD20B28B9EC3BF06AB71DE49171D (void);
// 0x00000075 Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.Pbkdf2Params> Nethereum.KeyStore.JsonDeserialisation.JsonKeyStorePbkdf2Serialiser::MapDTOToModel(Nethereum.KeyStore.JsonDeserialisation.KeyStorePbkdf2DTO)
extern void JsonKeyStorePbkdf2Serialiser_MapDTOToModel_mFA69AC2602F974B6CA9B89B04B027DC93301AE0D (void);
// 0x00000076 System.Void Nethereum.KeyStore.JsonDeserialisation.JsonKeyStorePbkdf2Serialiser::.ctor()
extern void JsonKeyStorePbkdf2Serialiser__ctor_m1FCF97801AAC5B592BC1E45762733948AAD651DE (void);
// 0x00000077 System.String Nethereum.KeyStore.JsonDeserialisation.JsonKeyStoreScryptSerialiser::SerialiseScrypt(Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>)
extern void JsonKeyStoreScryptSerialiser_SerialiseScrypt_m021A1C32895A9DB278D67F315F4ACBCBC2944944 (void);
// 0x00000078 Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams> Nethereum.KeyStore.JsonDeserialisation.JsonKeyStoreScryptSerialiser::DeserialiseScrypt(System.String)
extern void JsonKeyStoreScryptSerialiser_DeserialiseScrypt_m444B7A8F3A8E09938DAF4264B6A809D3281F20FF (void);
// 0x00000079 Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO Nethereum.KeyStore.JsonDeserialisation.JsonKeyStoreScryptSerialiser::MapModelToDTO(Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>)
extern void JsonKeyStoreScryptSerialiser_MapModelToDTO_m74227D5A6398A22F0C248CE67F7B734EB2FCAFC8 (void);
// 0x0000007A Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams> Nethereum.KeyStore.JsonDeserialisation.JsonKeyStoreScryptSerialiser::MapDTOToModel(Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO)
extern void JsonKeyStoreScryptSerialiser_MapDTOToModel_mA7AA3E2107425F4077076092C1DBBAA8F0690AF2 (void);
// 0x0000007B System.Void Nethereum.KeyStore.JsonDeserialisation.JsonKeyStoreScryptSerialiser::.ctor()
extern void JsonKeyStoreScryptSerialiser__ctor_m75795A4A879132B329C995036EB0D5CDD696EDE0 (void);
// 0x0000007C System.Int32 Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::get_dklen()
extern void KdfParamsDTO_get_dklen_mF4F94F51F353F4A8CF43F2D9BD782FB90FF8142D (void);
// 0x0000007D System.Void Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::set_dklen(System.Int32)
extern void KdfParamsDTO_set_dklen_mA75B7F4B76A3E1E4D4D3F7C139F0CF15A097A0A6 (void);
// 0x0000007E System.String Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::get_salt()
extern void KdfParamsDTO_get_salt_m6238900E8629F7663690AD6E1E4C2FF99E8F35ED (void);
// 0x0000007F System.Void Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::set_salt(System.String)
extern void KdfParamsDTO_set_salt_m1D5465724D0D2EC60A15AE7671FC6AC7266052F2 (void);
// 0x00000080 System.Void Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::.ctor()
extern void KdfParamsDTO__ctor_m33FABA503A55656C7E129E3D0EBCC23D1C6348A3 (void);
// 0x00000081 System.String Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::get_id()
extern void KeyStoreDTOBase_get_id_mFDCD569677A39C6B99970D2C598D7587EFB2E77C (void);
// 0x00000082 System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::set_id(System.String)
extern void KeyStoreDTOBase_set_id_m764A98BA5E66E066334464B230ED752BA37A1905 (void);
// 0x00000083 System.String Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::get_address()
extern void KeyStoreDTOBase_get_address_m0134A1C538EC96FD7F883CF2B69E95EA0CAB0FD3 (void);
// 0x00000084 System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::set_address(System.String)
extern void KeyStoreDTOBase_set_address_m4E71FF95A9D7900DD962E9C8EDA24D1053EC5C5D (void);
// 0x00000085 System.Int32 Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::get_version()
extern void KeyStoreDTOBase_get_version_m7F00B43A9B900EE11DDA1E69DB08CCB03C5BE9ED (void);
// 0x00000086 System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::set_version(System.Int32)
extern void KeyStoreDTOBase_set_version_m8891C2744FDC8C814E198F4C66AF3F1E87F0180F (void);
// 0x00000087 System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::.ctor()
extern void KeyStoreDTOBase__ctor_m0D44032DCB424D46C0967E5AE492860854200F0F (void);
// 0x00000088 System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStorePbkdf2DTO::.ctor()
extern void KeyStorePbkdf2DTO__ctor_m4887CBA5A3529DA8BA4DABD07C930880F935D1BD (void);
// 0x00000089 Nethereum.KeyStore.JsonDeserialisation.CryptoInfoPbkdf2DTO Nethereum.KeyStore.JsonDeserialisation.KeyStorePbkdf2DTO::get_crypto()
extern void KeyStorePbkdf2DTO_get_crypto_mC816727DC3C94366BFED80AC35CAA2AA39CED861 (void);
// 0x0000008A System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStorePbkdf2DTO::set_crypto(Nethereum.KeyStore.JsonDeserialisation.CryptoInfoPbkdf2DTO)
extern void KeyStorePbkdf2DTO_set_crypto_mBD64474DF76F8511397F3F8387859843E2F8D696 (void);
// 0x0000008B System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO::.ctor()
extern void KeyStoreScryptDTO__ctor_m92B3E01F3801D999CDFF37E7D28A10EA14421472 (void);
// 0x0000008C Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO::get_crypto()
extern void KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B (void);
// 0x0000008D System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO::set_crypto(Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO)
extern void KeyStoreScryptDTO_set_crypto_m6B338293B428CD65FBC9511AF668A777FDA99892 (void);
// 0x0000008E System.Int32 Nethereum.KeyStore.JsonDeserialisation.Pbkdf2ParamsDTO::get_c()
extern void Pbkdf2ParamsDTO_get_c_m3B13666602544BAA07A393358D4A7702A80FD03F (void);
// 0x0000008F System.Void Nethereum.KeyStore.JsonDeserialisation.Pbkdf2ParamsDTO::set_c(System.Int32)
extern void Pbkdf2ParamsDTO_set_c_m4BA1D6942D9986166E02014DBB6843C5A25230FE (void);
// 0x00000090 System.String Nethereum.KeyStore.JsonDeserialisation.Pbkdf2ParamsDTO::get_prf()
extern void Pbkdf2ParamsDTO_get_prf_m9A05AF9E39269FB7A363F6744E0FC201B9CCFE04 (void);
// 0x00000091 System.Void Nethereum.KeyStore.JsonDeserialisation.Pbkdf2ParamsDTO::set_prf(System.String)
extern void Pbkdf2ParamsDTO_set_prf_m4E5CBB3B28E1A63DB33B64CBD240667842DFFBC5 (void);
// 0x00000092 System.Void Nethereum.KeyStore.JsonDeserialisation.Pbkdf2ParamsDTO::.ctor()
extern void Pbkdf2ParamsDTO__ctor_m020C89B6B463C246BA058B1A93C7977FE6B376FE (void);
// 0x00000093 System.Int32 Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::get_n()
extern void ScryptParamsDTO_get_n_m3FF77C12A496BB3D66BDB6EDB8DAF21525CE2AB8 (void);
// 0x00000094 System.Void Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::set_n(System.Int32)
extern void ScryptParamsDTO_set_n_mF43334DBC344EFF9F8DCED73543A5A25847A6A55 (void);
// 0x00000095 System.Int32 Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::get_r()
extern void ScryptParamsDTO_get_r_mD2EED1B5689E035883BB29D9BD1A8B303412DF65 (void);
// 0x00000096 System.Void Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::set_r(System.Int32)
extern void ScryptParamsDTO_set_r_m9EA349D301AF31CBC06A4204807852BC10B8772B (void);
// 0x00000097 System.Int32 Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::get_p()
extern void ScryptParamsDTO_get_p_m19884391C68271FF5FB3BEF1CF2935DE29E834F1 (void);
// 0x00000098 System.Void Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::set_p(System.Int32)
extern void ScryptParamsDTO_set_p_m2A2C1324B4C9F90F65E916EB957EDB148865DF45 (void);
// 0x00000099 System.Void Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::.ctor()
extern void ScryptParamsDTO__ctor_m44F6BFB85D6013B5CC771EF78AB158D283A58CDD (void);
// 0x0000009A System.Void Nethereum.KeyStore.Crypto.DecryptionException::.ctor(System.String)
extern void DecryptionException__ctor_m77BC09FFF4E1BA18CF1E1F7CF0342BC72A274097 (void);
// 0x0000009B System.Byte[] Nethereum.KeyStore.Crypto.IRandomBytesGenerator::GenerateRandomInitialisationVector()
// 0x0000009C System.Byte[] Nethereum.KeyStore.Crypto.IRandomBytesGenerator::GenerateRandomSalt()
// 0x0000009D System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::GenerateDerivedScryptKey(System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
extern void KeyStoreCrypto_GenerateDerivedScryptKey_mD84A7413EE9B46393273F5D0B8E928AFFDD4F372 (void);
// 0x0000009E System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::GenerateCipherKey(System.Byte[])
extern void KeyStoreCrypto_GenerateCipherKey_m343F6812E73E26C26D086556CCC3D0022D717864 (void);
// 0x0000009F System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::CalculateKeccakHash(System.Byte[])
extern void KeyStoreCrypto_CalculateKeccakHash_mC8A981BED599BCAE5AC30BF291A2E96620C1B35B (void);
// 0x000000A0 System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::CalculateSha256Hash(System.Byte[])
extern void KeyStoreCrypto_CalculateSha256Hash_mD0A18CCEFAE525AE57F8A0084F63B8ACCE1257D3 (void);
// 0x000000A1 System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::HmacSha256(System.Byte[],System.Byte[])
extern void KeyStoreCrypto_HmacSha256_mE10D382E5551781221692C6CC7F4AD0D5AA7ADBE (void);
// 0x000000A2 System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::GenerateMac(System.Byte[],System.Byte[])
extern void KeyStoreCrypto_GenerateMac_mC6C9A66E314C1298593041FE80E0037FB4ECAF99 (void);
// 0x000000A3 System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::GeneratePbkdf2Sha256DerivedKey(System.String,System.Byte[],System.Int32,System.Int32)
extern void KeyStoreCrypto_GeneratePbkdf2Sha256DerivedKey_m6A66CF985ECAAC09F48F5A23B62D3EDFE918BB05 (void);
// 0x000000A4 System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::GenerateAesCtrCipher(System.Byte[],System.Byte[],System.Byte[])
extern void KeyStoreCrypto_GenerateAesCtrCipher_mAEAC7F39874147CD2A0A3E3FD499934FFAEA0991 (void);
// 0x000000A5 System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::GenerateAesCtrDeCipher(System.Byte[],System.Byte[],System.Byte[])
extern void KeyStoreCrypto_GenerateAesCtrDeCipher_m8DC6546D8E8AA27918330315B9121A5E7C980736 (void);
// 0x000000A6 System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::DecryptScrypt(System.String,System.Byte[],System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32)
extern void KeyStoreCrypto_DecryptScrypt_m828C9ED4E8F3A128B449D0AA91CC498B2EBE6524 (void);
// 0x000000A7 System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::DecryptPbkdf2Sha256(System.String,System.Byte[],System.Byte[],System.Byte[],System.Int32,System.Byte[],System.Int32)
extern void KeyStoreCrypto_DecryptPbkdf2Sha256_m463E4D366891F0379AEF5AB08590E45DC666A228 (void);
// 0x000000A8 System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::Decrypt(System.Byte[],System.Byte[],System.Byte[],System.Byte[])
extern void KeyStoreCrypto_Decrypt_m69545AE305F21FD8AEA6EB106CE35AF55812E0DA (void);
// 0x000000A9 System.Void Nethereum.KeyStore.Crypto.KeyStoreCrypto::ValidateMac(System.Byte[],System.Byte[],System.Byte[])
extern void KeyStoreCrypto_ValidateMac_m50D46430C5F2BF65B89B4AA49C96E62788EC5D01 (void);
// 0x000000AA System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::GetPasswordAsBytes(System.String)
extern void KeyStoreCrypto_GetPasswordAsBytes_mA2E8301D37E8A83B376BAF88F222636728A9AF93 (void);
// 0x000000AB System.Void Nethereum.KeyStore.Crypto.KeyStoreCrypto::.ctor()
extern void KeyStoreCrypto__ctor_mCD1EE469A35D2E0310F6AA84268229B1BB8F8354 (void);
// 0x000000AC System.Byte[] Nethereum.KeyStore.Crypto.RandomBytesGenerator::GenerateRandomInitialisationVector()
extern void RandomBytesGenerator_GenerateRandomInitialisationVector_m0F3A6A3E966BC2F7E8CD4F5AC11A995078E8A223 (void);
// 0x000000AD System.Byte[] Nethereum.KeyStore.Crypto.RandomBytesGenerator::GenerateRandomSalt()
extern void RandomBytesGenerator_GenerateRandomSalt_m90B6D9D48D6302C09A213727920A2830FDB5E162 (void);
// 0x000000AE System.Byte[] Nethereum.KeyStore.Crypto.RandomBytesGenerator::GenerateRandomBytes(System.Int32)
extern void RandomBytesGenerator_GenerateRandomBytes_m295AE07A9AEDFF1967610054AD8FC24EC08A7FA9 (void);
// 0x000000AF System.Void Nethereum.KeyStore.Crypto.RandomBytesGenerator::.ctor()
extern void RandomBytesGenerator__ctor_mB18EF14C65706EA148601B97467C13BA91F5345C (void);
// 0x000000B0 System.Void Nethereum.KeyStore.Crypto.RandomBytesGenerator::.cctor()
extern void RandomBytesGenerator__cctor_mEEEC7489161C8F174027D07573589D55C9CE453F (void);
// 0x000000B1 System.Byte[] Nethereum.KeyStore.Crypto.ScryptNet::SingleIterationPBKDF2(System.Byte[],System.Byte[],System.Int32)
extern void ScryptNet_SingleIterationPBKDF2_m5C15EBEBF23B38F84C60D6690A18031F501F6790 (void);
// 0x000000B2 System.Byte[] Nethereum.KeyStore.Crypto.ScryptNet::CryptoScrypt(System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32)
extern void ScryptNet_CryptoScrypt_m5AAEB7E15BBC29209AB45FA6EB93C8602A7BF7F8 (void);
// 0x000000B3 System.Void Nethereum.KeyStore.Crypto.ScryptNet::BulkCopy(System.Void*,System.Void*,System.Int32)
extern void ScryptNet_BulkCopy_m02C41323623B15BE75F69BAF6CC1B679B5CFBC29 (void);
// 0x000000B4 System.Void Nethereum.KeyStore.Crypto.ScryptNet::BulkXor(System.Void*,System.Void*,System.Int32)
extern void ScryptNet_BulkXor_m605660F65DADB0766CF15C6AF95602335E0DB7BA (void);
// 0x000000B5 System.Void Nethereum.KeyStore.Crypto.ScryptNet::Encode32(System.Byte*,System.UInt32)
extern void ScryptNet_Encode32_mE2F354CEBB2F7B991142868DA0B05DC287079389 (void);
// 0x000000B6 System.UInt32 Nethereum.KeyStore.Crypto.ScryptNet::Decode32(System.Byte*)
extern void ScryptNet_Decode32_m72CB0DD11562278FED4B6622F7819E3810D93B3E (void);
// 0x000000B7 System.Void Nethereum.KeyStore.Crypto.ScryptNet::Salsa208(System.UInt32*)
extern void ScryptNet_Salsa208_m4646DF9B913D1A96DC008CCAABAF2B9300C9A512 (void);
// 0x000000B8 System.UInt32 Nethereum.KeyStore.Crypto.ScryptNet::R(System.UInt32,System.Int32)
extern void ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F (void);
// 0x000000B9 System.Void Nethereum.KeyStore.Crypto.ScryptNet::BlockMix(System.UInt32*,System.UInt32*,System.UInt32*,System.Int32)
extern void ScryptNet_BlockMix_mE84FDFD2F76264C25F3C74C5EA9C89242C417798 (void);
// 0x000000BA System.Int64 Nethereum.KeyStore.Crypto.ScryptNet::Integerify(System.UInt32*,System.Int32)
extern void ScryptNet_Integerify_m7CC0659FA5AED6CE8D42793C7D98F527E72B75B4 (void);
// 0x000000BB System.Void Nethereum.KeyStore.Crypto.ScryptNet::SMix(System.Byte*,System.Int32,System.Int32,System.UInt32*,System.UInt32*)
extern void ScryptNet_SMix_m14952E992EC6AEEB26E9D84AE1C6471C1546F246 (void);
// 0x000000BC System.Void Nethereum.KeyStore.Crypto.ScryptNet::.ctor()
extern void ScryptNet__ctor_m49319051EC0A6480AEA342C024D6EA83129CDC3F (void);
// 0x000000BD System.UInt32 Nethereum.KeyStore.Crypto.SCrypt::R(System.UInt32,System.Int32)
extern void SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178 (void);
// 0x000000BE System.Void Nethereum.KeyStore.Crypto.SCrypt::SalsaCore(System.Int32,System.UInt32[],System.UInt32[])
extern void SCrypt_SalsaCore_m9C56F73A9F4A62F39690A912714BCD5BD0CCC5E6 (void);
// 0x000000BF System.Byte[] Nethereum.KeyStore.Crypto.SCrypt::UInt32_To_LE(System.UInt32)
extern void SCrypt_UInt32_To_LE_m339A17D02ABC818693762164BCE7244EED27254E (void);
// 0x000000C0 System.Void Nethereum.KeyStore.Crypto.SCrypt::UInt32_To_LE(System.UInt32,System.Byte[])
extern void SCrypt_UInt32_To_LE_m467029FC2C6F75765B81783C37F7581845D5775B (void);
// 0x000000C1 System.Void Nethereum.KeyStore.Crypto.SCrypt::UInt32_To_LE(System.UInt32,System.Byte[],System.Int32)
extern void SCrypt_UInt32_To_LE_m7F775F709D4E8963FC35E8C51139270BB8B742C8 (void);
// 0x000000C2 System.Byte[] Nethereum.KeyStore.Crypto.SCrypt::UInt32_To_LE(System.UInt32[])
extern void SCrypt_UInt32_To_LE_mD31B9FADBCC22B2AEE2261660297321CA66538C4 (void);
// 0x000000C3 System.Void Nethereum.KeyStore.Crypto.SCrypt::UInt32_To_LE(System.UInt32[],System.Byte[],System.Int32)
extern void SCrypt_UInt32_To_LE_m8E1D9C86A746128B910EE88AAB824E5E1C27FA07 (void);
// 0x000000C4 System.UInt32 Nethereum.KeyStore.Crypto.SCrypt::LE_To_UInt32(System.Byte[])
extern void SCrypt_LE_To_UInt32_m5B1B48A380256017C594C242D08B6374ABC49FCA (void);
// 0x000000C5 System.UInt32 Nethereum.KeyStore.Crypto.SCrypt::LE_To_UInt32(System.Byte[],System.Int32)
extern void SCrypt_LE_To_UInt32_m0DA25AFE1BC3B27FA3148655E2951E1953028CFD (void);
// 0x000000C6 System.Void Nethereum.KeyStore.Crypto.SCrypt::LE_To_UInt32(System.Byte[],System.Int32,System.UInt32[])
extern void SCrypt_LE_To_UInt32_m49A59044507027D95CA638CDF7C67442059CCF4D (void);
// 0x000000C7 System.Void Nethereum.KeyStore.Crypto.SCrypt::LE_To_UInt32(System.Byte[],System.Int32,System.UInt32[],System.Int32,System.Int32)
extern void SCrypt_LE_To_UInt32_m6E6A9549FB1F9BF35CA8C50E321EE8117FE151A1 (void);
// 0x000000C8 System.UInt32[] Nethereum.KeyStore.Crypto.SCrypt::LE_To_UInt32(System.Byte[],System.Int32,System.Int32)
extern void SCrypt_LE_To_UInt32_m12C9DB7C58472D2FEBFBB2976778D39F7AC4893A (void);
// 0x000000C9 System.Byte[] Nethereum.KeyStore.Crypto.SCrypt::Generate(System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32)
extern void SCrypt_Generate_mFCD04767126BB8C9C73ECCAF8C050A25AC7788D3 (void);
// 0x000000CA System.Byte[] Nethereum.KeyStore.Crypto.SCrypt::MFcrypt(System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32)
extern void SCrypt_MFcrypt_m021C5AF7838F770F1B6C64DC807AC845D3B1B4F2 (void);
// 0x000000CB System.Byte[] Nethereum.KeyStore.Crypto.SCrypt::SingleIterationPBKDF2(System.Byte[],System.Byte[],System.Int32)
extern void SCrypt_SingleIterationPBKDF2_m0FDFF5341EDC35908843D85409539CF7C8AFD189 (void);
// 0x000000CC System.Void Nethereum.KeyStore.Crypto.SCrypt::SMix(System.UInt32[],System.Int32,System.Int32,System.Int32)
extern void SCrypt_SMix_m6F36000A78DF0FBF6902B3B385B773BC7827982F (void);
// 0x000000CD System.Void Nethereum.KeyStore.Crypto.SCrypt::BlockMix(System.UInt32[],System.UInt32[],System.UInt32[],System.UInt32[],System.Int32)
extern void SCrypt_BlockMix_m5FCEA920F6897ADED9D5EE04C1D8E2E6ED4D86FB (void);
// 0x000000CE System.Void Nethereum.KeyStore.Crypto.SCrypt::Xor(System.UInt32[],System.UInt32[],System.Int32,System.UInt32[])
extern void SCrypt_Xor_m67CE628AF75EB4A985EE5B0F3AE6887E3EF47CC3 (void);
// 0x000000CF System.Void Nethereum.KeyStore.Crypto.SCrypt::Clear(System.Array)
extern void SCrypt_Clear_m9C8E80EB4E04EF3E6FB37ED6AA546C6369A91B9A (void);
// 0x000000D0 System.Void Nethereum.KeyStore.Crypto.SCrypt::ClearAll(System.Array[])
extern void SCrypt_ClearAll_mD12D2C06BC3198D7B3E0071D986EADCE60DD396E (void);
// 0x000000D1 System.Boolean Nethereum.KeyStore.Crypto.SCrypt::IsPowerOf2(System.Int32)
extern void SCrypt_IsPowerOf2_m1F0E4E4358CBA1753439B407014D8E7B2734D737 (void);
// 0x000000D2 System.Void Nethereum.KeyStore.Crypto.SCrypt::.ctor()
extern void SCrypt__ctor_m0650F67A00DF352B684F993A0193A91DC1D7DE78 (void);
static Il2CppMethodPointer s_methodPointers[210] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	InvalidKdfException__ctor_mCB1602A9FA69439AEE3CA2CD0046C72E7DB5C6D9,
	KeyStoreKdfChecker_GetKeyStoreKdfType_mA3319D63885770AF51B6A09257DFFE7504A89528,
	KeyStoreKdfChecker__ctor_m3BA57A0DD4812D32648D34710EA0581DCF6100CA,
	KeyStorePbkdf2Service__ctor_m60CF3CF3AE63D8B5B4561B9DE729A9F7726C02B7,
	KeyStorePbkdf2Service__ctor_m6473B68062575288229C9500D57490BEE0C21603,
	KeyStorePbkdf2Service__ctor_m159A1C387AFAA0327B05B55760D3451DBD29B1E3,
	KeyStorePbkdf2Service_GenerateDerivedKey_mD5D251BAB7776B7EA98FF925FC85D45F29307E13,
	KeyStorePbkdf2Service_GetDefaultParams_m1F66EB7CF3C985F481C933CF6614397C528284DA,
	KeyStorePbkdf2Service_DeserializeKeyStoreFromJson_m10C016CFE5ABDA2E341EF96462BE1D89608D1B9B,
	KeyStorePbkdf2Service_SerializeKeyStoreToJson_m48C5A8C3CFDDA3C7692352C603D45171188E0F91,
	KeyStorePbkdf2Service_DecryptKeyStore_mF3218093BBCDFC273D07974126FB8D9C0897335D,
	KeyStorePbkdf2Service_GetKdfType_m667E5872AC46D31608654F30741AFDE70630B1D2,
	KeyStoreScryptService__ctor_mE569E0226BEA6594C280E2F2CE16C21C87C956E5,
	KeyStoreScryptService__ctor_m47C9FE8AC6F06430EC711162B88F08DDE96FA4E3,
	KeyStoreScryptService__ctor_m32CB67F6070BED367100C3788D6827BD29D73A90,
	KeyStoreScryptService_GenerateDerivedKey_mA5067DA8F651D23C272DEA33D511463D9057FF40,
	KeyStoreScryptService_GetDefaultParams_m5C93B9C95AC2C4C1D9D2717BE0EFCCEF70E4AEF1,
	KeyStoreScryptService_DeserializeKeyStoreFromJson_mBF41D80D7E551C8750D75C84298C872ED83C36CA,
	KeyStoreScryptService_SerializeKeyStoreToJson_m782AE252062D9372F3FB3AA790371C195D405E90,
	KeyStoreScryptService_DecryptKeyStore_m97CE221D0D9D9ED305FD4B0843F9D62209E72909,
	KeyStoreScryptService_GetKdfType_m8636618BBCB5C14E23C53B98FFE54644B5A455E7,
	KeyStoreService__ctor_mAE53375369473A712AC46E824EB9099A0FED079F,
	KeyStoreService__ctor_m69E88F370B4EFA99788B32DB7FED5CEBFB32E6E9,
	KeyStoreService_GetAddressFromKeyStore_mC7C96A6B89A463F6B7F9FBBD97DB7D35A2853D6F,
	KeyStoreService_GenerateUTCFileName_m2122563B05C43DF0515DB2C0E5A1CF07EB3CFC54,
	KeyStoreService_DecryptKeyStoreFromJson_mAA38D24725757DAE8326E6E04E7B09A5E619435F,
	KeyStoreService_EncryptAndGenerateDefaultKeyStoreAsJson_m5FCE405D589A3ED2AEBF0DA7559C15535BFFE751,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	CipherParams__ctor_m6EF7551DAA09455A6D0CB9B5E98BA76CCD98072A,
	CipherParams__ctor_mF3F9808A4E1C650EE3E5E10FB57455CC5FD5E58E,
	CipherParams_get_Iv_mACA12BCFA8DA0C8DF791A05028119A5A14F4CBC4,
	CipherParams_set_Iv_mE77D6319BE01333E7B3F6F7F98453DABAE5BB6C6,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	KdfParams_get_Dklen_m1E5547E75FFAD02C826CFDC8CD09AC6EAEEBDB14,
	KdfParams_set_Dklen_m8873AE7294C28118FDADC3F76AB3FCCA12ED0A9E,
	KdfParams_get_Salt_mBC1DA50823694582BA754AAAB3F2C098C024205B,
	KdfParams_set_Salt_m578F3DA59E3C91B1C70F13793C6926210CE139F7,
	KdfParams__ctor_m39CCECF77A608644CB36BBBA3081362363BFF843,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Pbkdf2Params_get_Count_mC11B0427876CC79A0979C88487915DFA8960E03A,
	Pbkdf2Params_set_Count_mF6B58E39489D4C7F5E7B0D46282913C817BC95B2,
	Pbkdf2Params_get_Prf_m452DEB151B6B91A6F85AB4335A1E9FE9792B97B0,
	Pbkdf2Params_set_Prf_mC7BE10C0C3A3D9D57247516A9A435067FE1F3242,
	Pbkdf2Params__ctor_mFF835BB78C590FD34736CC991A9F375DEB02919A,
	ScryptParams_get_N_mE57FDEFFC05A1BEE6E1D2AEC8E0768206BEE49E2,
	ScryptParams_set_N_mD7A43E5EAAB1D1C3D9AFE496F7ED17549AC7D670,
	ScryptParams_get_R_mBBE1A0B0B5E9B5E32A3E798FAC0766775DDF186E,
	ScryptParams_set_R_m9AD9236A19430A9B44EFA3301D417E7F665FDAAE,
	ScryptParams_get_P_mF431C35431D06FDC71DF89E3BCA31DB14A9C880E,
	ScryptParams_set_P_m54B8987AEE116A5F01F276FB41F5B7BD6CE93FD7,
	ScryptParams__ctor_m5DC4BDC83AC01594CA6FCBED4B0AE865F33229FD,
	CipherParamsDTO_get_iv_m9A9BB6EC013B70B8EE1542B30F8644D520FEE92C,
	CipherParamsDTO_set_iv_mAA82EE8F95D570A32B28DDB5D137E452547E1447,
	CipherParamsDTO__ctor_m3A7C44114C8F04E69B34C05E366716D7C18066BB,
	CryptoInfoDTOBase__ctor_m37903E098FB857B1E4AD7CF702F9B6ACA53A6789,
	CryptoInfoDTOBase_get_cipher_mC2254AEF9DABAE8647851B32135596ED041004D7,
	CryptoInfoDTOBase_set_cipher_m577997203D05BD47C1F03175A176CEE47468A563,
	CryptoInfoDTOBase_get_cipherText_mCA4F7FEE19C44BB4E20FF7B4D06E6F9832CC2DEF,
	CryptoInfoDTOBase_set_cipherText_m100CA8B4796B16C2C927A56C894D18F3B354DC03,
	CryptoInfoDTOBase_get_cipherparams_mE9D29F3332F2FC754DE4C29BC8C183F08A389F77,
	CryptoInfoDTOBase_set_cipherparams_mE014108E074C5803596A0CE491004920054A7A86,
	CryptoInfoDTOBase_get_kdf_m37F91BCF553659BC936ACA04FBE68BAD0AD09703,
	CryptoInfoDTOBase_set_kdf_m0CE24ACCEAD963F6D649715EFAB53CE0B3BD7F54,
	CryptoInfoDTOBase_get_mac_m832D5DAE6B8D34645CB12D6C1EF621E8247053DB,
	CryptoInfoDTOBase_set_mac_m8C7197F81B08179424DDC30A8D72413D82D3CC54,
	CryptoInfoPbkdf2DTO__ctor_mF09BE01088667CDB3633838BEC8D6C57C50F72AD,
	CryptoInfoPbkdf2DTO_get_kdfparams_mF0404BA3404C382131A188BCD6544C68FFCFAD03,
	CryptoInfoPbkdf2DTO_set_kdfparams_m164610BB3A75FEF212B50C70F5E842DB0941319F,
	CryptoInfoScryptDTO__ctor_m4D5FE44A524F51AB6585157B0D17B6B135ECB074,
	CryptoInfoScryptDTO_get_kdfparams_m88558053C3D05D95A823EC4DB490A6F85518808A,
	CryptoInfoScryptDTO_set_kdfparams_mD261CED055A2C04A72FAFF40AE3C420DFAC1483B,
	JsonKeyStorePbkdf2Serialiser_SerialisePbkdf2_m8922669ED62A520D7B2D3F5274BA257E7BDA6E32,
	JsonKeyStorePbkdf2Serialiser_DeserialisePbkdf2_mCB032E6DDD55BEEEFCBE93C0763D73702D269D4D,
	JsonKeyStorePbkdf2Serialiser_MapModelToDTO_mCD248C7A7274DD20B28B9EC3BF06AB71DE49171D,
	JsonKeyStorePbkdf2Serialiser_MapDTOToModel_mFA69AC2602F974B6CA9B89B04B027DC93301AE0D,
	JsonKeyStorePbkdf2Serialiser__ctor_m1FCF97801AAC5B592BC1E45762733948AAD651DE,
	JsonKeyStoreScryptSerialiser_SerialiseScrypt_m021A1C32895A9DB278D67F315F4ACBCBC2944944,
	JsonKeyStoreScryptSerialiser_DeserialiseScrypt_m444B7A8F3A8E09938DAF4264B6A809D3281F20FF,
	JsonKeyStoreScryptSerialiser_MapModelToDTO_m74227D5A6398A22F0C248CE67F7B734EB2FCAFC8,
	JsonKeyStoreScryptSerialiser_MapDTOToModel_mA7AA3E2107425F4077076092C1DBBAA8F0690AF2,
	JsonKeyStoreScryptSerialiser__ctor_m75795A4A879132B329C995036EB0D5CDD696EDE0,
	KdfParamsDTO_get_dklen_mF4F94F51F353F4A8CF43F2D9BD782FB90FF8142D,
	KdfParamsDTO_set_dklen_mA75B7F4B76A3E1E4D4D3F7C139F0CF15A097A0A6,
	KdfParamsDTO_get_salt_m6238900E8629F7663690AD6E1E4C2FF99E8F35ED,
	KdfParamsDTO_set_salt_m1D5465724D0D2EC60A15AE7671FC6AC7266052F2,
	KdfParamsDTO__ctor_m33FABA503A55656C7E129E3D0EBCC23D1C6348A3,
	KeyStoreDTOBase_get_id_mFDCD569677A39C6B99970D2C598D7587EFB2E77C,
	KeyStoreDTOBase_set_id_m764A98BA5E66E066334464B230ED752BA37A1905,
	KeyStoreDTOBase_get_address_m0134A1C538EC96FD7F883CF2B69E95EA0CAB0FD3,
	KeyStoreDTOBase_set_address_m4E71FF95A9D7900DD962E9C8EDA24D1053EC5C5D,
	KeyStoreDTOBase_get_version_m7F00B43A9B900EE11DDA1E69DB08CCB03C5BE9ED,
	KeyStoreDTOBase_set_version_m8891C2744FDC8C814E198F4C66AF3F1E87F0180F,
	KeyStoreDTOBase__ctor_m0D44032DCB424D46C0967E5AE492860854200F0F,
	KeyStorePbkdf2DTO__ctor_m4887CBA5A3529DA8BA4DABD07C930880F935D1BD,
	KeyStorePbkdf2DTO_get_crypto_mC816727DC3C94366BFED80AC35CAA2AA39CED861,
	KeyStorePbkdf2DTO_set_crypto_mBD64474DF76F8511397F3F8387859843E2F8D696,
	KeyStoreScryptDTO__ctor_m92B3E01F3801D999CDFF37E7D28A10EA14421472,
	KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B,
	KeyStoreScryptDTO_set_crypto_m6B338293B428CD65FBC9511AF668A777FDA99892,
	Pbkdf2ParamsDTO_get_c_m3B13666602544BAA07A393358D4A7702A80FD03F,
	Pbkdf2ParamsDTO_set_c_m4BA1D6942D9986166E02014DBB6843C5A25230FE,
	Pbkdf2ParamsDTO_get_prf_m9A05AF9E39269FB7A363F6744E0FC201B9CCFE04,
	Pbkdf2ParamsDTO_set_prf_m4E5CBB3B28E1A63DB33B64CBD240667842DFFBC5,
	Pbkdf2ParamsDTO__ctor_m020C89B6B463C246BA058B1A93C7977FE6B376FE,
	ScryptParamsDTO_get_n_m3FF77C12A496BB3D66BDB6EDB8DAF21525CE2AB8,
	ScryptParamsDTO_set_n_mF43334DBC344EFF9F8DCED73543A5A25847A6A55,
	ScryptParamsDTO_get_r_mD2EED1B5689E035883BB29D9BD1A8B303412DF65,
	ScryptParamsDTO_set_r_m9EA349D301AF31CBC06A4204807852BC10B8772B,
	ScryptParamsDTO_get_p_m19884391C68271FF5FB3BEF1CF2935DE29E834F1,
	ScryptParamsDTO_set_p_m2A2C1324B4C9F90F65E916EB957EDB148865DF45,
	ScryptParamsDTO__ctor_m44F6BFB85D6013B5CC771EF78AB158D283A58CDD,
	DecryptionException__ctor_m77BC09FFF4E1BA18CF1E1F7CF0342BC72A274097,
	NULL,
	NULL,
	KeyStoreCrypto_GenerateDerivedScryptKey_mD84A7413EE9B46393273F5D0B8E928AFFDD4F372,
	KeyStoreCrypto_GenerateCipherKey_m343F6812E73E26C26D086556CCC3D0022D717864,
	KeyStoreCrypto_CalculateKeccakHash_mC8A981BED599BCAE5AC30BF291A2E96620C1B35B,
	KeyStoreCrypto_CalculateSha256Hash_mD0A18CCEFAE525AE57F8A0084F63B8ACCE1257D3,
	KeyStoreCrypto_HmacSha256_mE10D382E5551781221692C6CC7F4AD0D5AA7ADBE,
	KeyStoreCrypto_GenerateMac_mC6C9A66E314C1298593041FE80E0037FB4ECAF99,
	KeyStoreCrypto_GeneratePbkdf2Sha256DerivedKey_m6A66CF985ECAAC09F48F5A23B62D3EDFE918BB05,
	KeyStoreCrypto_GenerateAesCtrCipher_mAEAC7F39874147CD2A0A3E3FD499934FFAEA0991,
	KeyStoreCrypto_GenerateAesCtrDeCipher_m8DC6546D8E8AA27918330315B9121A5E7C980736,
	KeyStoreCrypto_DecryptScrypt_m828C9ED4E8F3A128B449D0AA91CC498B2EBE6524,
	KeyStoreCrypto_DecryptPbkdf2Sha256_m463E4D366891F0379AEF5AB08590E45DC666A228,
	KeyStoreCrypto_Decrypt_m69545AE305F21FD8AEA6EB106CE35AF55812E0DA,
	KeyStoreCrypto_ValidateMac_m50D46430C5F2BF65B89B4AA49C96E62788EC5D01,
	KeyStoreCrypto_GetPasswordAsBytes_mA2E8301D37E8A83B376BAF88F222636728A9AF93,
	KeyStoreCrypto__ctor_mCD1EE469A35D2E0310F6AA84268229B1BB8F8354,
	RandomBytesGenerator_GenerateRandomInitialisationVector_m0F3A6A3E966BC2F7E8CD4F5AC11A995078E8A223,
	RandomBytesGenerator_GenerateRandomSalt_m90B6D9D48D6302C09A213727920A2830FDB5E162,
	RandomBytesGenerator_GenerateRandomBytes_m295AE07A9AEDFF1967610054AD8FC24EC08A7FA9,
	RandomBytesGenerator__ctor_mB18EF14C65706EA148601B97467C13BA91F5345C,
	RandomBytesGenerator__cctor_mEEEC7489161C8F174027D07573589D55C9CE453F,
	ScryptNet_SingleIterationPBKDF2_m5C15EBEBF23B38F84C60D6690A18031F501F6790,
	ScryptNet_CryptoScrypt_m5AAEB7E15BBC29209AB45FA6EB93C8602A7BF7F8,
	ScryptNet_BulkCopy_m02C41323623B15BE75F69BAF6CC1B679B5CFBC29,
	ScryptNet_BulkXor_m605660F65DADB0766CF15C6AF95602335E0DB7BA,
	ScryptNet_Encode32_mE2F354CEBB2F7B991142868DA0B05DC287079389,
	ScryptNet_Decode32_m72CB0DD11562278FED4B6622F7819E3810D93B3E,
	ScryptNet_Salsa208_m4646DF9B913D1A96DC008CCAABAF2B9300C9A512,
	ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F,
	ScryptNet_BlockMix_mE84FDFD2F76264C25F3C74C5EA9C89242C417798,
	ScryptNet_Integerify_m7CC0659FA5AED6CE8D42793C7D98F527E72B75B4,
	ScryptNet_SMix_m14952E992EC6AEEB26E9D84AE1C6471C1546F246,
	ScryptNet__ctor_m49319051EC0A6480AEA342C024D6EA83129CDC3F,
	SCrypt_R_mE1F5AFD5B5F7FD85F0F6932D090692D0A1BD6178,
	SCrypt_SalsaCore_m9C56F73A9F4A62F39690A912714BCD5BD0CCC5E6,
	SCrypt_UInt32_To_LE_m339A17D02ABC818693762164BCE7244EED27254E,
	SCrypt_UInt32_To_LE_m467029FC2C6F75765B81783C37F7581845D5775B,
	SCrypt_UInt32_To_LE_m7F775F709D4E8963FC35E8C51139270BB8B742C8,
	SCrypt_UInt32_To_LE_mD31B9FADBCC22B2AEE2261660297321CA66538C4,
	SCrypt_UInt32_To_LE_m8E1D9C86A746128B910EE88AAB824E5E1C27FA07,
	SCrypt_LE_To_UInt32_m5B1B48A380256017C594C242D08B6374ABC49FCA,
	SCrypt_LE_To_UInt32_m0DA25AFE1BC3B27FA3148655E2951E1953028CFD,
	SCrypt_LE_To_UInt32_m49A59044507027D95CA638CDF7C67442059CCF4D,
	SCrypt_LE_To_UInt32_m6E6A9549FB1F9BF35CA8C50E321EE8117FE151A1,
	SCrypt_LE_To_UInt32_m12C9DB7C58472D2FEBFBB2976778D39F7AC4893A,
	SCrypt_Generate_mFCD04767126BB8C9C73ECCAF8C050A25AC7788D3,
	SCrypt_MFcrypt_m021C5AF7838F770F1B6C64DC807AC845D3B1B4F2,
	SCrypt_SingleIterationPBKDF2_m0FDFF5341EDC35908843D85409539CF7C8AFD189,
	SCrypt_SMix_m6F36000A78DF0FBF6902B3B385B773BC7827982F,
	SCrypt_BlockMix_m5FCEA920F6897ADED9D5EE04C1D8E2E6ED4D86FB,
	SCrypt_Xor_m67CE628AF75EB4A985EE5B0F3AE6887E3EF47CC3,
	SCrypt_Clear_m9C8E80EB4E04EF3E6FB37ED6AA546C6369A91B9A,
	SCrypt_ClearAll_mD12D2C06BC3198D7B3E0071D986EADCE60DD396E,
	SCrypt_IsPowerOf2_m1F0E4E4358CBA1753439B407014D8E7B2734D737,
	SCrypt__ctor_m0650F67A00DF352B684F993A0193A91DC1D7DE78,
};
static const int32_t s_InvokerIndices[210] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	4916,
	4189,
	5928,
	5928,
	2952,
	4916,
	1495,
	5814,
	4408,
	4408,
	2397,
	5814,
	5928,
	2952,
	4916,
	1495,
	5814,
	4408,
	4408,
	2397,
	5814,
	5928,
	1762,
	4408,
	4408,
	2397,
	1495,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	5928,
	4916,
	5814,
	4916,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	5784,
	4889,
	5814,
	4916,
	5928,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	5784,
	4889,
	5814,
	4916,
	5928,
	5784,
	4889,
	5784,
	4889,
	5784,
	4889,
	5928,
	5814,
	4916,
	5928,
	5928,
	5814,
	4916,
	5814,
	4916,
	5814,
	4916,
	5814,
	4916,
	5814,
	4916,
	5928,
	5814,
	4916,
	5928,
	5814,
	4916,
	8653,
	8653,
	8653,
	8653,
	5928,
	8653,
	8653,
	8653,
	8653,
	5928,
	5784,
	4889,
	5814,
	4916,
	5928,
	5814,
	4916,
	5814,
	4916,
	5784,
	4889,
	5928,
	5928,
	5814,
	4916,
	5928,
	5814,
	4916,
	5784,
	4889,
	5814,
	4916,
	5928,
	5784,
	4889,
	5784,
	4889,
	5784,
	4889,
	5928,
	4916,
	0,
	0,
	205,
	4408,
	4408,
	4408,
	2397,
	2397,
	1031,
	1495,
	1495,
	69,
	206,
	1038,
	1762,
	4408,
	5928,
	5814,
	5814,
	4406,
	5928,
	9028,
	7422,
	6245,
	7543,
	7543,
	8207,
	8827,
	8874,
	8162,
	7056,
	7953,
	6601,
	5928,
	8162,
	7587,
	8665,
	8284,
	7661,
	8653,
	7641,
	8836,
	8159,
	7632,
	6649,
	7412,
	6245,
	6245,
	7422,
	7110,
	6663,
	7125,
	8883,
	8883,
	8439,
	5928,
};
static const Il2CppTokenRangePair s_rgctxIndices[3] = 
{
	{ 0x02000009, { 0, 21 } },
	{ 0x0200000B, { 21, 9 } },
	{ 0x0200000D, { 30, 2 } },
};
extern const uint32_t g_rgctx_KeyStoreServiceBase_1__ctor_m8B510DAB8E87C65595423949835B59A0BA8A8942;
extern const uint32_t g_rgctx_KeyStoreServiceBase_1_t2F8CCC4911DEDF8848AF5F120DA04FA89BD54073;
extern const uint32_t g_rgctx_KeyStoreServiceBase_1_GetDefaultParams_m05F82DE876B0BBCF2252C29B86CE038E2F4DC20D;
extern const uint32_t g_rgctx_T_tC3BF4E4E8753629D27028A2D87D53FF3611E7532;
extern const uint32_t g_rgctx_KeyStoreServiceBase_1_EncryptAndGenerateKeyStore_m3B8898F5FBE7C62684E21CD01FC05DFCEC7232D0;
extern const uint32_t g_rgctx_KeyStore_1_t27B84E0EC689A3582F7884D732098DE0A35606B7;
extern const uint32_t g_rgctx_KeyStoreServiceBase_1_EncryptAndGenerateKeyStore_m91796047F33667620C6BED80FA649A7663F9ED57;
extern const uint32_t g_rgctx_KeyStoreServiceBase_1_SerializeKeyStoreToJson_m20B2EB85ABD77EC81CD2FA913067BD5DAFAABF33;
extern const uint32_t g_rgctx_KeyStoreServiceBase_1_GenerateDerivedKey_mFC9F123C6941FC8D1FFB097A05C2893C138BA329;
extern const uint32_t g_rgctx_KeyStoreServiceBase_1_GenerateCipher_mA30588D6FE07CF07391E3120A8A6A2F7F7EE5107;
extern const uint32_t g_rgctx_KeyStoreServiceBase_1_GetCipherType_m07033BF66E9E3D857E0EF17193A25CAFC84EA83A;
extern const uint32_t g_rgctx_KeyStoreServiceBase_1_GetKdfType_m190348DE16DA046EBA2A6FE6528D2662B2676242;
extern const uint32_t g_rgctx_CryptoInfo_1_t179CF800352C93E5F30E6531E89DDFB0DB7DFAA4;
extern const uint32_t g_rgctx_CryptoInfo_1__ctor_mDD9C4A6F69D63108422B3C61D25DD01910351446;
extern const uint32_t g_rgctx_KeyStore_1__ctor_mE41E505B19A3BF52919E0B0461C330B2F4FB4030;
extern const uint32_t g_rgctx_KeyStore_1_set_Version_mCA8596A1A8DD34FD9F0A6D699C4A875943432B6E;
extern const uint32_t g_rgctx_KeyStore_1_set_Address_m3C2A4FDA78D900D2785EE66D73A903B68846A8C9;
extern const uint32_t g_rgctx_KeyStore_1_set_Id_m277BB440F678B010B9284F3124E810F4B13643D4;
extern const uint32_t g_rgctx_KeyStore_1_set_Crypto_m104143FEE2BC6FA9AE21BD976874536A05336E3E;
extern const uint32_t g_rgctx_KeyStoreServiceBase_1_DeserializeKeyStoreFromJson_m5AAAAB56B1DA5B1DF3B7A44626D55732594F335E;
extern const uint32_t g_rgctx_KeyStoreServiceBase_1_DecryptKeyStore_mDA1B88F69EC2A6E66538875AD204B7CB99B1419F;
extern const uint32_t g_rgctx_CryptoInfo_1_set_Cipher_m3825BA520A8C634FD07538AE5D2E8703153857F8;
extern const uint32_t g_rgctx_CryptoInfo_1_set_CipherText_mEFF238CF4EDF59E04E8968B15A7A2F03267BE1A7;
extern const uint32_t g_rgctx_CryptoInfo_1_set_Mac_m07EF08493F7C9B7E0F3E3EA1CFACDFDCCCACAE64;
extern const uint32_t g_rgctx_CryptoInfo_1_set_CipherParams_m91632FE04322E14AAFA4D55786E31667473404B2;
extern const uint32_t g_rgctx_TKdfParams_t689E0B019BC54B354D995B7A76F7CD27CF0B61C1;
extern const uint32_t g_rgctx_CryptoInfo_1_set_Kdfparams_m53688A4C15CC94133C36F27F4E8C4AA22AE3979E;
extern const uint32_t g_rgctx_CryptoInfo_1_get_Kdfparams_m8C4888A717554336B1158BD52F724680CBA2509F;
extern const uint32_t g_rgctx_CryptoInfo_1_set_Kdf_mA0363D854606B95759B53C589E7ED19C54F11650;
extern const uint32_t g_rgctx_CryptoInfo_1_tEF43DD3693221D954838FC4565AF6E3674E057DE;
extern const uint32_t g_rgctx_KeyStore_1_t7A4DEC0C48D56C75863869652947ABEB14119AFF;
extern const uint32_t g_rgctx_CryptoInfo_1_tB932566FA53BF134E70076CAF725B2EDE5340CA1;
static const Il2CppRGCTXDefinition s_rgctxValues[32] = 
{
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyStoreServiceBase_1__ctor_m8B510DAB8E87C65595423949835B59A0BA8A8942 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_KeyStoreServiceBase_1_t2F8CCC4911DEDF8848AF5F120DA04FA89BD54073 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyStoreServiceBase_1_GetDefaultParams_m05F82DE876B0BBCF2252C29B86CE038E2F4DC20D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tC3BF4E4E8753629D27028A2D87D53FF3611E7532 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyStoreServiceBase_1_EncryptAndGenerateKeyStore_m3B8898F5FBE7C62684E21CD01FC05DFCEC7232D0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_KeyStore_1_t27B84E0EC689A3582F7884D732098DE0A35606B7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyStoreServiceBase_1_EncryptAndGenerateKeyStore_m91796047F33667620C6BED80FA649A7663F9ED57 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyStoreServiceBase_1_SerializeKeyStoreToJson_m20B2EB85ABD77EC81CD2FA913067BD5DAFAABF33 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyStoreServiceBase_1_GenerateDerivedKey_mFC9F123C6941FC8D1FFB097A05C2893C138BA329 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyStoreServiceBase_1_GenerateCipher_mA30588D6FE07CF07391E3120A8A6A2F7F7EE5107 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyStoreServiceBase_1_GetCipherType_m07033BF66E9E3D857E0EF17193A25CAFC84EA83A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyStoreServiceBase_1_GetKdfType_m190348DE16DA046EBA2A6FE6528D2662B2676242 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_CryptoInfo_1_t179CF800352C93E5F30E6531E89DDFB0DB7DFAA4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_CryptoInfo_1__ctor_mDD9C4A6F69D63108422B3C61D25DD01910351446 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyStore_1__ctor_mE41E505B19A3BF52919E0B0461C330B2F4FB4030 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyStore_1_set_Version_mCA8596A1A8DD34FD9F0A6D699C4A875943432B6E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyStore_1_set_Address_m3C2A4FDA78D900D2785EE66D73A903B68846A8C9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyStore_1_set_Id_m277BB440F678B010B9284F3124E810F4B13643D4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyStore_1_set_Crypto_m104143FEE2BC6FA9AE21BD976874536A05336E3E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyStoreServiceBase_1_DeserializeKeyStoreFromJson_m5AAAAB56B1DA5B1DF3B7A44626D55732594F335E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyStoreServiceBase_1_DecryptKeyStore_mDA1B88F69EC2A6E66538875AD204B7CB99B1419F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_CryptoInfo_1_set_Cipher_m3825BA520A8C634FD07538AE5D2E8703153857F8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_CryptoInfo_1_set_CipherText_mEFF238CF4EDF59E04E8968B15A7A2F03267BE1A7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_CryptoInfo_1_set_Mac_m07EF08493F7C9B7E0F3E3EA1CFACDFDCCCACAE64 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_CryptoInfo_1_set_CipherParams_m91632FE04322E14AAFA4D55786E31667473404B2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TKdfParams_t689E0B019BC54B354D995B7A76F7CD27CF0B61C1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_CryptoInfo_1_set_Kdfparams_m53688A4C15CC94133C36F27F4E8C4AA22AE3979E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_CryptoInfo_1_get_Kdfparams_m8C4888A717554336B1158BD52F724680CBA2509F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_CryptoInfo_1_set_Kdf_mA0363D854606B95759B53C589E7ED19C54F11650 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_CryptoInfo_1_tEF43DD3693221D954838FC4565AF6E3674E057DE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_KeyStore_1_t7A4DEC0C48D56C75863869652947ABEB14119AFF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_CryptoInfo_1_tB932566FA53BF134E70076CAF725B2EDE5340CA1 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Nethereum_KeyStore_CodeGenModule;
const Il2CppCodeGenModule g_Nethereum_KeyStore_CodeGenModule = 
{
	"Nethereum.KeyStore.dll",
	210,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	3,
	s_rgctxIndices,
	32,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
