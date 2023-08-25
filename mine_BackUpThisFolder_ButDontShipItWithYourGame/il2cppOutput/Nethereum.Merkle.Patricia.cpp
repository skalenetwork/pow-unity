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

// System.Collections.Generic.Dictionary`2<System.Byte[],System.Byte[]>
struct Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.IEnumerable`1<System.Byte[]>
struct IEnumerable_1_t21E2C2093877744709873DDCB2D3C8297821E513;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_tEE97FB3EBFE8765D0E2FC164B95E82BA5D0EAE86;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<System.Byte[]>
struct IEqualityComparer_1_tED581F2C423FD1B93E069AFE7AA4483EF32AF8DB;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte[],System.Byte[]>
struct KeyCollection_tCDA45F0ACFF996C8FAB70B495A53375A8148710F;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B;
// System.Collections.Generic.List`1<Nethereum.RLP.IRLPElement>
struct List_1_t8930E92CA3374D0394732F4FF2E0265B48828819;
// System.Collections.Generic.List`1<Nethereum.Model.IndexedSignedTransaction>
struct List_1_t1F5B5FC3791046F89BD12C22C62A6D309982A09C;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte[],System.Byte[]>
struct ValueCollection_t8388BD7E008F5C43CE58E72A7D2F1E1851D713C3;
// System.Collections.Generic.Dictionary`2/Entry<System.Byte[],System.Byte[]>[]
struct EntryU5BU5D_t7BC5864D1B16CD7164B4251CA49D9F29281F4DA2;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// Nethereum.RLP.IRLPElement[]
struct IRLPElementU5BU5D_tDF03CD04296E80AE35187FDB06324897EDEA8C66;
// Nethereum.Model.IndexedSignedTransaction[]
struct IndexedSignedTransactionU5BU5D_t60677D38CF53CB4434A6DA2AB21BE6DB5950F34B;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Nethereum.Merkle.Patricia.Node[]
struct NodeU5BU5D_tB05665DCA9FA6C7C1BA79FA5E029D66BA3478607;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// Nethereum.Model.Account
struct Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E;
// Nethereum.Model.AccountEncoder
struct AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9;
// Nethereum.Merkle.Patricia.BranchNode
struct BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2;
// Nethereum.Util.ByteArrayComparer
struct ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9;
// Nethereum.Merkle.Patricia.EmptyNode
struct EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666;
// System.Exception
struct Exception_t;
// Nethereum.Merkle.Patricia.ExtendedNode
struct ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A;
// Nethereum.Merkle.Patricia.HashNode
struct HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Nethereum.Util.HashProviders.IHashProvider
struct IHashProvider_tF63936D6765C651DE941637B412487D422A15637;
// Nethereum.RLP.IRLPElement
struct IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954;
// Nethereum.Model.ISignedTransaction
struct ISignedTransaction_t295449C3C8E5BAE1484CD45D4FC5C770D95534C8;
// Nethereum.Merkle.Patricia.ITrieStorage
struct ITrieStorage_tF3311169FFCDFB3BB327465BBE3DD27302BC91E8;
// Nethereum.Merkle.Patricia.InMemoryTrieStorage
struct InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC;
// Nethereum.Model.IndexedSignedTransaction
struct IndexedSignedTransaction_t1C7BAC78F6C1377A43EDDB85FAF38F2F5253123F;
// Nethereum.Merkle.Patricia.LeafNode
struct LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC;
// Nethereum.Merkle.Patricia.Node
struct Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F;
// Nethereum.Merkle.Patricia.NodeDecoder
struct NodeDecoder_tB48C4A163D2AB91862EF8117500F402E7AEA73C1;
// Nethereum.Merkle.Patricia.PatriciaTrie
struct PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00;
// Nethereum.RLP.RLPCollection
struct RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Nethereum.Util.HashProviders.Sha3KeccackHashProvider
struct Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t21E2C2093877744709873DDCB2D3C8297821E513_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t1E268397CD739ED7EB63601E159FAA7D40A6F44A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHashProvider_tF63936D6765C651DE941637B412487D422A15637_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISignedTransaction_t295449C3C8E5BAE1484CD45D4FC5C770D95534C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITrieStorage_tF3311169FFCDFB3BB327465BBE3DD27302BC91E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeDecoder_tB48C4A163D2AB91862EF8117500F402E7AEA73C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeU5BU5D_tB05665DCA9FA6C7C1BA79FA5E029D66BA3478607_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralE1BFB89383EBC8E95B58859363BDD8BA43CBC8D5;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m15CE6818A1A600D9591F35C476E801D67B1DCE6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m1DB967EEBA9CAE85C3AA3E32BF56CCFD4F1F5140_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m9C12F337B8F3B7E4623C387AEFE4E636FDFFD25B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCA3076AA860062504B4FB87B39751B6907FAE7EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m835793E1A4192B9B87D8D532EFBEE33288F2C207_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mB3B9DDFFE24AE97EE3605925F98B8D1EEB6CEB49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mC523A6E6730550614CCB6EF067D6F034D77EE297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0E99C6CFB0643FFD90F5D73B8ED415E42B21D919_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m09B67058C12BE89CAF1F03C1C49544085D8CE2FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFF0569557F506312F32746E8129C602476373874_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashNode_GetHash_mF41C00564FE1DA59ED23D3BB79371A0CD6882446_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mE32CF73DD0005916BADC472ECF7506D1E968963E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mCBDA870B39CA8872AADBA32CF4EA47C07E67893D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct NodeU5BU5D_tB05665DCA9FA6C7C1BA79FA5E029D66BA3478607;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF962D4699FBA2050C6C4EFBB5FC7CC79533B7C3F 
{
};

// System.Collections.Generic.Dictionary`2<System.Byte[],System.Byte[]>
struct Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7BC5864D1B16CD7164B4251CA49D9F29281F4DA2* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tCDA45F0ACFF996C8FAB70B495A53375A8148710F* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t8388BD7E008F5C43CE58E72A7D2F1E1851D713C3* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
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

// System.Collections.Generic.List`1<Nethereum.Model.IndexedSignedTransaction>
struct List_1_t1F5B5FC3791046F89BD12C22C62A6D309982A09C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IndexedSignedTransactionU5BU5D_t60677D38CF53CB4434A6DA2AB21BE6DB5950F34B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1F5B5FC3791046F89BD12C22C62A6D309982A09C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IndexedSignedTransactionU5BU5D_t60677D38CF53CB4434A6DA2AB21BE6DB5950F34B* ___s_emptyArray_5;
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

// Nethereum.Model.AccountEncoder
struct AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9  : public RuntimeObject
{
};

struct AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9_StaticFields
{
	// Nethereum.Model.AccountEncoder Nethereum.Model.AccountEncoder::<Current>k__BackingField
	AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9* ___U3CCurrentU3Ek__BackingField_0;
};

// Nethereum.Merkle.Patricia.AccountProofVerification
struct AccountProofVerification_t0E4017ADBB71B07BED5A057E2B37E7E8EF1F3E8A  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// Nethereum.Util.ByteArrayComparer
struct ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9  : public RuntimeObject
{
};

struct ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9_StaticFields
{
	// Nethereum.Util.ByteArrayComparer Nethereum.Util.ByteArrayComparer::Current
	ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9* ___Current_0;
};

// Nethereum.Merkle.Patricia.InMemoryTrieStorage
struct InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Byte[],System.Byte[]> Nethereum.Merkle.Patricia.InMemoryTrieStorage::<_storage>k__BackingField
	Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB* ___U3C_storageU3Ek__BackingField_0;
};

// Nethereum.Merkle.Patricia.NiblesBytesExtension
struct NiblesBytesExtension_t8D7E09031100F5F28FC17164CA260313B1F39B54  : public RuntimeObject
{
};

// Nethereum.Merkle.Patricia.Node
struct Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F  : public RuntimeObject
{
	// Nethereum.Util.HashProviders.IHashProvider Nethereum.Merkle.Patricia.Node::<HashProvider>k__BackingField
	RuntimeObject* ___U3CHashProviderU3Ek__BackingField_0;
};

// Nethereum.Merkle.Patricia.NodeDecoder
struct NodeDecoder_tB48C4A163D2AB91862EF8117500F402E7AEA73C1  : public RuntimeObject
{
};

// Nethereum.Merkle.Patricia.PatriciaTrie
struct PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00  : public RuntimeObject
{
	// Nethereum.Util.HashProviders.IHashProvider Nethereum.Merkle.Patricia.PatriciaTrie::<HashProvider>k__BackingField
	RuntimeObject* ___U3CHashProviderU3Ek__BackingField_0;
	// Nethereum.Merkle.Patricia.Node Nethereum.Merkle.Patricia.PatriciaTrie::<Root>k__BackingField
	Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* ___U3CRootU3Ek__BackingField_1;
};

// Nethereum.Util.HashProviders.Sha3KeccackHashProvider
struct Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5  : public RuntimeObject
{
};

// Nethereum.Merkle.Patricia.StorageProofVerification
struct StorageProofVerification_t83FAC749253A07E6535E21B8304E008F3076B340  : public RuntimeObject
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

// Nethereum.Merkle.Patricia.TransactionProofVerification
struct TransactionProofVerification_t32353AD2216D50353875F2F5155431F8A5A05416  : public RuntimeObject
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

// System.Collections.Generic.List`1/Enumerator<Nethereum.Model.IndexedSignedTransaction>
struct Enumerator_t7EE9A54B083C59E8C0A7DB9E2C05864EE8B49025 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t1F5B5FC3791046F89BD12C22C62A6D309982A09C* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	IndexedSignedTransaction_t1C7BAC78F6C1377A43EDDB85FAF38F2F5253123F* ____current_3;
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

// Nethereum.Merkle.Patricia.BranchNode
struct BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2  : public Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F
{
	// Nethereum.Merkle.Patricia.Node[] Nethereum.Merkle.Patricia.BranchNode::<Children>k__BackingField
	NodeU5BU5D_tB05665DCA9FA6C7C1BA79FA5E029D66BA3478607* ___U3CChildrenU3Ek__BackingField_1;
	// System.Byte[] Nethereum.Merkle.Patricia.BranchNode::<Value>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CValueU3Ek__BackingField_2;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// Nethereum.Merkle.Patricia.EmptyNode
struct EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666  : public Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F
{
};

// Nethereum.Merkle.Patricia.ExtendedNode
struct ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A  : public Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F
{
	// System.Byte[] Nethereum.Merkle.Patricia.ExtendedNode::<Nibbles>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CNibblesU3Ek__BackingField_1;
	// Nethereum.Merkle.Patricia.Node Nethereum.Merkle.Patricia.ExtendedNode::<InnerNode>k__BackingField
	Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* ___U3CInnerNodeU3Ek__BackingField_2;
};

// Nethereum.Merkle.Patricia.HashNode
struct HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC  : public Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F
{
	// System.Byte[] Nethereum.Merkle.Patricia.HashNode::<Hash>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CHashU3Ek__BackingField_1;
	// Nethereum.Merkle.Patricia.Node Nethereum.Merkle.Patricia.HashNode::<InnerNode>k__BackingField
	Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* ___U3CInnerNodeU3Ek__BackingField_2;
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

// Nethereum.Merkle.Patricia.LeafNode
struct LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC  : public Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F
{
	// System.Byte[] Nethereum.Merkle.Patricia.LeafNode::<Nibbles>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CNibblesU3Ek__BackingField_1;
	// System.Byte[] Nethereum.Merkle.Patricia.LeafNode::<Value>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CValueU3Ek__BackingField_2;
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
// Nethereum.Merkle.Patricia.Node[]
struct NodeU5BU5D_tB05665DCA9FA6C7C1BA79FA5E029D66BA3478607  : public RuntimeArray
{
	ALIGN_FIELD (8) Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* m_Items[1];

	inline Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB2760A703784902BE10E873BC760166EC9693D63_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Skip<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_gshared (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
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

// System.Void Nethereum.Model.AccountEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountEncoder__ctor_mFAACA3386FD4E175254A424CC480419230F4F11A (AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.AccountEncoder::Encode(Nethereum.Model.Account)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AccountEncoder_Encode_m8B2D014BAC9C65F0F0CD6DA1021FDFC668444038 (AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9* __this, Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* ___account0, const RuntimeMethod* method) ;
// System.Void Nethereum.Merkle.Patricia.PatriciaTrie::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PatriciaTrie__ctor_m575A0017560EC7DD2BA0791B189A5A8F986C7D25 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hashRoot0, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.HashProviders.Sha3KeccackHashProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha3KeccackHashProvider__ctor_mBBD08D9177EC57F999D617D6F9628CDBB368E9DD (Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Merkle.Patricia.InMemoryTrieStorage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InMemoryTrieStorage__ctor_mB67FB3F526E927A946ED880E5C18060A28E9933F (InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Util.HashProviders.Sha3KeccackHashProvider::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Sha3KeccackHashProvider_ComputeHash_m358C5EE615F4FC68C40C040A2E0A0E9A59D952CD (Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Void Nethereum.Merkle.Patricia.InMemoryTrieStorage::Put(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InMemoryTrieStorage_Put_m0E7E1874BBF788B89EAA7EC7CC34F87E3C9C97B5 (InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::HexToByteArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE (String_t* ___value0, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Merkle.Patricia.PatriciaTrie::Get(System.Byte[],Nethereum.Merkle.Patricia.ITrieStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PatriciaTrie_Get_mBCCB7E69547FFBDC36AECA7A264C4BA36C6BE6F6 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, RuntimeObject* ___storage1, const RuntimeMethod* method) ;
// Nethereum.Merkle.Patricia.Node Nethereum.Merkle.Patricia.PatriciaTrie::get_Root()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* PatriciaTrie_get_Root_mA472DB2AC8A1ACA84AC6B3ABC7C735D8A92BB111_inline (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Merkle.Patricia.NiblesBytesExtension::AreTheSame(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NiblesBytesExtension_AreTheSame_m6B201B050AB7376DD170E81C6CA445EDFF98D49F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, const RuntimeMethod* method) ;
// System.Void Nethereum.Merkle.Patricia.BranchNode::.ctor(Nethereum.Util.HashProviders.IHashProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BranchNode__ctor_m1A9C27073F3EC72B6F631A80052063EDD76E8203 (BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* __this, RuntimeObject* ___hashProvider0, const RuntimeMethod* method) ;
// System.Void Nethereum.Merkle.Patricia.Node::.ctor(Nethereum.Util.HashProviders.IHashProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m54D24E3635D575CACE45B124CC0971CFD89BFDFB (Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* __this, RuntimeObject* ___hashProvider0, const RuntimeMethod* method) ;
// System.Void Nethereum.Merkle.Patricia.BranchNode::set_Value(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BranchNode_set_Value_mAA551F3490DCD7D176B8901B8573E282D9287B84_inline (BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// Nethereum.Merkle.Patricia.Node[] Nethereum.Merkle.Patricia.BranchNode::get_Children()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NodeU5BU5D_tB05665DCA9FA6C7C1BA79FA5E029D66BA3478607* BranchNode_get_Children_m371C78510FF6B91199CA0BDB7D2C4B93DCF4B9B2_inline (BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
inline void List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4 (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Nethereum.Merkle.Patricia.EmptyNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyNode__ctor_mC69E365F7E061A5DF5E3A753DB4EFFCA8CA5190F (EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
inline void List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Byte[] Nethereum.RLP.RLP::EncodeElement(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___srcData0, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Merkle.Patricia.BranchNode::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BranchNode_get_Value_m69ED4759CB30ACB44E808F61CE17E53095C507EF_inline (BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Byte[]>::ToArray()
inline ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Byte[] Nethereum.RLP.RLP::EncodeList(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLP_EncodeList_m2A2C2A6B4DDA95C331AECF96926B0D9C1B16FE05 (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___items0, const RuntimeMethod* method) ;
// System.Void Nethereum.Merkle.Patricia.ExtendedNode::.ctor(Nethereum.Util.HashProviders.IHashProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendedNode__ctor_m67C30C616FFDFC545F049F64BD1D2BAB62916CEE (ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* __this, RuntimeObject* ___hashProvider0, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Merkle.Patricia.ExtendedNode::GetPrefixedNibbles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ExtendedNode_GetPrefixedNibbles_mA1D26E789EC62B43FA42EF40A19CD9AFF6E9E3AB (ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Merkle.Patricia.NiblesBytesExtension::ConvertFromNibbles(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NiblesBytesExtension_ConvertFromNibbles_mB101E43D9FA078C2BF30015E429B84D84C0904A4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___values0, const RuntimeMethod* method) ;
// Nethereum.Merkle.Patricia.Node Nethereum.Merkle.Patricia.ExtendedNode::get_InnerNode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* ExtendedNode_get_InnerNode_mA2250ADD4D6EAAD1C85691C74FB4C8E604DC3D76_inline (ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
inline void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared)(__this, method);
}
// System.Byte[] Nethereum.Merkle.Patricia.ExtendedNode::get_Nibbles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ExtendedNode_get_Nibbles_mE69CC371BC9220A5606C93BF13482FE6AAFD9A7D_inline (ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
inline void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, uint8_t, const RuntimeMethod*))List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_gshared)(__this, ___collection0, method);
}
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared)(__this, method);
}
// System.Void Nethereum.Merkle.Patricia.HashNode::.ctor(Nethereum.Util.HashProviders.IHashProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashNode__ctor_m0B2AB096E0A8E9CB9940B1BAB1281D36799B562A (HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* __this, RuntimeObject* ___hashProvider0, const RuntimeMethod* method) ;
// Nethereum.Merkle.Patricia.Node Nethereum.Merkle.Patricia.HashNode::get_InnerNode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* HashNode_get_InnerNode_m2B9F522AAABDF05F248408E1AAFA34AECF1F3F4E_inline (HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Merkle.Patricia.HashNode::get_Hash()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashNode_get_Hash_m88E4036B8A738AE6154BF6938D016EAA276FBF37_inline (HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Nethereum.Merkle.Patricia.NodeDecoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeDecoder__ctor_m90E2804451D8C58911B89BA93BF8BD3EDD6F7C6E (NodeDecoder_tB48C4A163D2AB91862EF8117500F402E7AEA73C1* __this, const RuntimeMethod* method) ;
// Nethereum.Merkle.Patricia.Node Nethereum.Merkle.Patricia.NodeDecoder::DecodeNode(System.Byte[],System.Boolean,Nethereum.Merkle.Patricia.ITrieStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* NodeDecoder_DecodeNode_mF1396B76D3E533D386DD1B0E9214C39FD5458238 (NodeDecoder_tB48C4A163D2AB91862EF8117500F402E7AEA73C1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hash0, bool ___decodeHashNodes1, RuntimeObject* ___storage2, const RuntimeMethod* method) ;
// System.Void Nethereum.Merkle.Patricia.HashNode::set_InnerNode(Nethereum.Merkle.Patricia.Node)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HashNode_set_InnerNode_m0B3F43D1861CFF3AE27DA973E314FD7B54E217DF_inline (HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* __this, Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Byte[],System.Byte[]> Nethereum.Merkle.Patricia.InMemoryTrieStorage::get__storage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB* InMemoryTrieStorage_get__storage_m779F5BDF8833A35FF9C3749D9F41E8B4901D824F_inline (InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.ByteArrayComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArrayComparer__ctor_m5621A85A161658F80BE49C560193CFFB54776CC4 (ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Byte[],System.Byte[]>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
inline void Dictionary_2__ctor_mCA3076AA860062504B4FB87B39751B6907FAE7EC (Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mB2760A703784902BE10E873BC760166EC9693D63_gshared)(__this, ___comparer0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte[],System.Byte[]>::Remove(TKey)
inline bool Dictionary_2_Remove_m9C12F337B8F3B7E4623C387AEFE4E636FDFFD25B (Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte[],System.Byte[]>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m1DB967EEBA9CAE85C3AA3E32BF56CCFD4F1F5140 (Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Byte[],System.Byte[]>::get_Item(TKey)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Dictionary_2_get_Item_m835793E1A4192B9B87D8D532EFBEE33288F2C207 (Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Byte[],System.Byte[]>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mB3B9DDFFE24AE97EE3605925F98B8D1EEB6CEB49 (Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Byte[],System.Byte[]>::Add(TKey,TValue)
inline void Dictionary_2_Add_m15CE6818A1A600D9591F35C476E801D67B1DCE6E (Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Nethereum.Merkle.Patricia.LeafNode::.ctor(Nethereum.Util.HashProviders.IHashProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeafNode__ctor_m6919E28455E2BDAC2046D8CA99AB30E5EA4316BD (LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* __this, RuntimeObject* ___hashProvider0, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Merkle.Patricia.LeafNode::GetPrefixedNibbles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LeafNode_GetPrefixedNibbles_m15DBB20E100AB8BA0F00EA46D06BF51822D0CBC8 (LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Merkle.Patricia.LeafNode::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LeafNode_get_Value_mCA947E6EC6B168D0A5FF5C00993B57F1357BBCEE_inline (LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Merkle.Patricia.LeafNode::get_Nibbles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LeafNode_get_Nibbles_m60B6E95A3DB4EDA4E6B13AB76ACE348DD447D310_inline (LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* __this, const RuntimeMethod* method) ;
// System.Byte Nethereum.Merkle.Patricia.NiblesBytesExtension::GetHighNibble(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t NiblesBytesExtension_GetHighNibble_m07D1E2475D07CB387796FD28185DE675EB56F2E8 (uint8_t ___value0, const RuntimeMethod* method) ;
// System.Byte Nethereum.Merkle.Patricia.NiblesBytesExtension::GetLowNibble(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t NiblesBytesExtension_GetLowNibble_mD8623636FBA0A25AB6B23C9DE5E2B60D8458A8E2 (uint8_t ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Merkle.Patricia.Node::set_HashProvider(Nethereum.Util.HashProviders.IHashProvider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Node_set_HashProvider_mF88F7495DD59A9630C17FC3FE07D5CDE52DC11AC_inline (Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// Nethereum.Util.HashProviders.IHashProvider Nethereum.Merkle.Patricia.Node::get_HashProvider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Node_get_HashProvider_m8B76C56C9644BCC4DCAAD90BBFBCAA253DB203A1_inline (Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* __this, const RuntimeMethod* method) ;
// Nethereum.Merkle.Patricia.Node Nethereum.Merkle.Patricia.NodeDecoder::DecodeNodeFromRlpData(System.Byte[],System.Boolean,Nethereum.Merkle.Patricia.ITrieStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* NodeDecoder_DecodeNodeFromRlpData_m9465E70FE6D551DA5EB6DEE53EB56630EE187FD3 (NodeDecoder_tB48C4A163D2AB91862EF8117500F402E7AEA73C1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___currentData0, bool ___decodeHashNodes1, RuntimeObject* ___storage2, const RuntimeMethod* method) ;
// System.Void Nethereum.Merkle.Patricia.HashNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashNode__ctor_m69BDF3048FBBCD53FBA9B8D348CCE28557E2242B (HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Merkle.Patricia.HashNode::set_Hash(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HashNode_set_Hash_m96C51491A78A067FF3096216A0697316BF438FFC_inline (HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// Nethereum.RLP.IRLPElement Nethereum.RLP.RLP::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RLP_Decode_m25755DBDC9A4DD532BC45B2C9BBBB03E00FA0C33 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Nethereum.RLP.IRLPElement>::get_Count()
inline int32_t List_1_get_Count_mCBDA870B39CA8872AADBA32CF4EA47C07E67893D_inline (List_1_t8930E92CA3374D0394732F4FF2E0265B48828819* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8930E92CA3374D0394732F4FF2E0265B48828819*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Nethereum.RLP.IRLPElement>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349 (List_1_t8930E92CA3374D0394732F4FF2E0265B48828819* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t8930E92CA3374D0394732F4FF2E0265B48828819*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Byte[] Nethereum.Merkle.Patricia.NiblesBytesExtension::ConvertToNibbles(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NiblesBytesExtension_ConvertToNibbles_mB2B4D25FB507E1EAA7FE2A95C71F0256C72F310D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___values0, const RuntimeMethod* method) ;
// System.Void Nethereum.Merkle.Patricia.LeafNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeafNode__ctor_m6B2BD626807C4DB8C5D3AA08DB64EBED7A103257 (LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* __this, const RuntimeMethod* method) ;
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
// System.Void Nethereum.Merkle.Patricia.LeafNode::set_Nibbles(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LeafNode_set_Nibbles_m9C418C15A793D722C75E45165C1124062B792402_inline (LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Merkle.Patricia.LeafNode::set_Value(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LeafNode_set_Value_mF368CDC59A03297378BEA1C1BE662E3B5704E2C3_inline (LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Merkle.Patricia.ExtendedNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendedNode__ctor_mAF9D68DF08EEFCCB507019267DF2534440E63DD6 (ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Merkle.Patricia.ExtendedNode::set_Nibbles(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExtendedNode_set_Nibbles_m46259B2045B4CE512A76C238425720DE354BC235_inline (ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Merkle.Patricia.ExtendedNode::set_InnerNode(Nethereum.Merkle.Patricia.Node)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExtendedNode_set_InnerNode_m6762B1A005B07D339C8B136187E581F9247F0E1D_inline (ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* __this, Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* ___value0, const RuntimeMethod* method) ;
// Nethereum.Merkle.Patricia.BranchNode Nethereum.Merkle.Patricia.NodeDecoder::DecodeBranchNode(Nethereum.RLP.RLPCollection,System.Boolean,Nethereum.Merkle.Patricia.ITrieStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* NodeDecoder_DecodeBranchNode_m296D92D6922BD06B5F42BE835AC4C4B459AA6BDA (NodeDecoder_tB48C4A163D2AB91862EF8117500F402E7AEA73C1* __this, RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* ___rlpCollection0, bool ___decodeHashNodes1, RuntimeObject* ___storage2, const RuntimeMethod* method) ;
// System.Void Nethereum.Merkle.Patricia.BranchNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BranchNode__ctor_m3552D08D9ADC6D723DE1C6B121E89232E558D3D0 (BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Merkle.Patricia.BranchNode::SetChild(System.Int32,Nethereum.Merkle.Patricia.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BranchNode_SetChild_mC50C60FC392506226FC60E0C75A1D7672173C5A7 (BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* __this, int32_t ___nibble0, Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* ___node1, const RuntimeMethod* method) ;
// System.Void Nethereum.Merkle.Patricia.PatriciaTrie::set_Root(Nethereum.Merkle.Patricia.Node)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PatriciaTrie_set_Root_mF9112BA3E5243CF70611237B4ABED86FC5C6C218_inline (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Merkle.Patricia.PatriciaTrie::.ctor(System.Byte[],Nethereum.Util.HashProviders.IHashProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PatriciaTrie__ctor_mB2654D8B631C98BC668B8BF35E9EDD6E71A0D70E (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hashRoot0, RuntimeObject* ___hashProvider1, const RuntimeMethod* method) ;
// System.Void Nethereum.Merkle.Patricia.PatriciaTrie::.ctor(Nethereum.Util.HashProviders.IHashProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PatriciaTrie__ctor_mAE62D49D7846473D59CEA4159845F01418D59601 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, RuntimeObject* ___hashProvider0, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Merkle.Patricia.PatriciaTrie::Get(Nethereum.Merkle.Patricia.Node,System.Byte[],Nethereum.Merkle.Patricia.ITrieStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PatriciaTrie_Get_m128B74E859CB56DBB6765B8E47E1BCE5EBD991E6 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* ___node0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyAsNibbles1, RuntimeObject* ___storage2, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Merkle.Patricia.PatriciaTrie::GetFromLeafNode(Nethereum.Merkle.Patricia.LeafNode,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PatriciaTrie_GetFromLeafNode_mBC6089A5BFF95B5A617406698A94945D045A2BD4 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* ___currentNode0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyAsNibbles1, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Merkle.Patricia.PatriciaTrie::GetFromBranchNode(Nethereum.Merkle.Patricia.BranchNode,System.Byte[],Nethereum.Merkle.Patricia.ITrieStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PatriciaTrie_GetFromBranchNode_m2C476804E01AE4FE2B4D1190FD223E95EA433547 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* ___currentNode0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyAsNibbles1, RuntimeObject* ___storage2, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Merkle.Patricia.PatriciaTrie::GetFromExtendedNode(Nethereum.Merkle.Patricia.ExtendedNode,System.Byte[],Nethereum.Merkle.Patricia.ITrieStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PatriciaTrie_GetFromExtendedNode_mEAFD8DE2F67C52F1117F3B9E150029F76DCAB58E (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* ___currentNode0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyAsNibbles1, RuntimeObject* ___storage2, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Merkle.Patricia.PatriciaTrie::GetFromHashNode(System.Byte[],Nethereum.Merkle.Patricia.ITrieStorage,Nethereum.Merkle.Patricia.HashNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PatriciaTrie_GetFromHashNode_m8EB5A91E2558412D738B5D614BF7C6033D2CBDA7 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyAsNibbles0, RuntimeObject* ___storage1, HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* ___hashNode2, const RuntimeMethod* method) ;
// System.Void Nethereum.Merkle.Patricia.HashNode::DecodeInnerNode(Nethereum.Merkle.Patricia.ITrieStorage,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashNode_DecodeInnerNode_mE265CFE412E537A1AB4CA10C7D958B9136231219 (HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* __this, RuntimeObject* ___storage0, bool ___decodeInnerHashNodes1, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Merkle.Patricia.NiblesBytesExtension::FindAllTheSameBytesFromTheStart(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NiblesBytesExtension_FindAllTheSameBytesFromTheStart_mA8AE8C3B05883F1538B93B3938D812C7C50CDC33 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, const RuntimeMethod* method) ;
// Nethereum.Merkle.Patricia.LeafNode Nethereum.Merkle.Patricia.PatriciaTrie::PutOnAnExistingEmptyNode(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* PatriciaTrie_PutOnAnExistingEmptyNode_mD181861163A22CE5D39D0C6AC34EAD4EB2C8809B (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyAsNibbles0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, const RuntimeMethod* method) ;
// Nethereum.Merkle.Patricia.Node Nethereum.Merkle.Patricia.PatriciaTrie::PutOnAnExistingLeafNode(Nethereum.Merkle.Patricia.LeafNode,System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* PatriciaTrie_PutOnAnExistingLeafNode_m07C2FB9C0B9E9863666EE1BC41681C47E9CC97E9 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* ___currentNode0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyAsNibbles1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value2, const RuntimeMethod* method) ;
// Nethereum.Merkle.Patricia.Node Nethereum.Merkle.Patricia.PatriciaTrie::PutOnAnExistingBranchNode(Nethereum.Merkle.Patricia.BranchNode,System.Byte[],System.Byte[],Nethereum.Merkle.Patricia.ITrieStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* PatriciaTrie_PutOnAnExistingBranchNode_mB8438BDC58551F77D6D0C14CE3A1D18A399E0A4E (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* ___currentNode0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyAsNibbles1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value2, RuntimeObject* ___storage3, const RuntimeMethod* method) ;
// Nethereum.Merkle.Patricia.Node Nethereum.Merkle.Patricia.PatriciaTrie::PutOnAnExistingExtendedNode(Nethereum.Merkle.Patricia.ExtendedNode,System.Byte[],System.Byte[],Nethereum.Merkle.Patricia.ITrieStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* PatriciaTrie_PutOnAnExistingExtendedNode_m6B68FB9BB43B5F7E99FC6F2FA580E2E2568A77B4 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* ___currentNode0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyAsNibbles1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value2, RuntimeObject* ___storage3, const RuntimeMethod* method) ;
// Nethereum.Merkle.Patricia.Node Nethereum.Merkle.Patricia.PatriciaTrie::PutOnAnExistingHashNode(Nethereum.Merkle.Patricia.HashNode,System.Byte[],System.Byte[],Nethereum.Merkle.Patricia.ITrieStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* PatriciaTrie_PutOnAnExistingHashNode_mDC318B983A4A5E6C9890C0ADCE3BD3E212D71026 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* ___hashNode0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyAsNibbles1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value2, RuntimeObject* ___storage3, const RuntimeMethod* method) ;
// Nethereum.Merkle.Patricia.Node Nethereum.Merkle.Patricia.PatriciaTrie::Put(Nethereum.Merkle.Patricia.Node,System.Byte[],System.Byte[],Nethereum.Merkle.Patricia.ITrieStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* PatriciaTrie_Put_mE3F509AECD50E3E8908DABECE000286B9396C490 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* ___node0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyAsNibbles1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value2, RuntimeObject* ___storage3, const RuntimeMethod* method) ;
// Nethereum.Util.HashProviders.IHashProvider Nethereum.Merkle.Patricia.PatriciaTrie::get_HashProvider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PatriciaTrie_get_HashProvider_m9E1B29A38F765942A79D4D79112F43A1F69FFC24_inline (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, const RuntimeMethod* method) ;
// Nethereum.Merkle.Patricia.InMemoryTrieStorage Nethereum.Merkle.Patricia.PatriciaTrie::GenerateProof(Nethereum.Merkle.Patricia.Node,System.Byte[],Nethereum.Merkle.Patricia.InMemoryTrieStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* PatriciaTrie_GenerateProof_m5D6E6D599334272248B93E2719254D0E3DED9EF9 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* ___currentNode0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyAsNibbles1, InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* ___storage2, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Byte[]>(System.Collections.Generic.IEnumerable`1<TSource>)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Enumerable_First_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mC523A6E6730550614CCB6EF067D6F034D77EE297 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_gshared)(___source0, method);
}
// System.Byte[] Nethereum.Model.AccountStorage::EncodeKeyForStorage(System.Byte[],Nethereum.Util.HashProviders.Sha3KeccackHashProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AccountStorage_EncodeKeyForStorage_mE3C073B63E9A4C37165D4DED4AA4AD4308B5FFCA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5* ___sha3Provider1, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Model.AccountStorage::EncodeValueForStorage(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AccountStorage_EncodeValueForStorage_m7BB76C1FD6B72C2577978174AACDCAFE723E55DA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Nethereum.Merkle.Patricia.PatriciaTrie::Put(System.Byte[],System.Byte[],Nethereum.Merkle.Patricia.ITrieStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PatriciaTrie_Put_m4736CDBA7672D37BC7B563EFD86F5179FBF52010 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, RuntimeObject* ___storage2, const RuntimeMethod* method) ;
// System.Void Nethereum.Merkle.Patricia.PatriciaTrie::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PatriciaTrie__ctor_m47AEE28955A219A1549CB5F00D850402D7E49FF4 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Nethereum.Model.IndexedSignedTransaction>::GetEnumerator()
inline Enumerator_t7EE9A54B083C59E8C0A7DB9E2C05864EE8B49025 List_1_GetEnumerator_mE32CF73DD0005916BADC472ECF7506D1E968963E (List_1_t1F5B5FC3791046F89BD12C22C62A6D309982A09C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7EE9A54B083C59E8C0A7DB9E2C05864EE8B49025 (*) (List_1_t1F5B5FC3791046F89BD12C22C62A6D309982A09C*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Nethereum.Model.IndexedSignedTransaction>::Dispose()
inline void Enumerator_Dispose_m0E99C6CFB0643FFD90F5D73B8ED415E42B21D919 (Enumerator_t7EE9A54B083C59E8C0A7DB9E2C05864EE8B49025* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7EE9A54B083C59E8C0A7DB9E2C05864EE8B49025*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Nethereum.Model.IndexedSignedTransaction>::get_Current()
inline IndexedSignedTransaction_t1C7BAC78F6C1377A43EDDB85FAF38F2F5253123F* Enumerator_get_Current_mFF0569557F506312F32746E8129C602476373874_inline (Enumerator_t7EE9A54B083C59E8C0A7DB9E2C05864EE8B49025* __this, const RuntimeMethod* method)
{
	return ((  IndexedSignedTransaction_t1C7BAC78F6C1377A43EDDB85FAF38F2F5253123F* (*) (Enumerator_t7EE9A54B083C59E8C0A7DB9E2C05864EE8B49025*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Numerics.BigInteger Nethereum.Model.IndexedSignedTransaction::get_Index()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F IndexedSignedTransaction_get_Index_mC949CF8D45D4E522341B4E56B4143AD58F8E61DF_inline (IndexedSignedTransaction_t1C7BAC78F6C1377A43EDDB85FAF38F2F5253123F* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesForRLPEncoding(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___bigInteger0, const RuntimeMethod* method) ;
// Nethereum.Model.ISignedTransaction Nethereum.Model.IndexedSignedTransaction::get_SignedTransaction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IndexedSignedTransaction_get_SignedTransaction_mC9C34468883D8BEA52BB92EADFA046A52905D395_inline (IndexedSignedTransaction_t1C7BAC78F6C1377A43EDDB85FAF38F2F5253123F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Nethereum.Model.IndexedSignedTransaction>::MoveNext()
inline bool Enumerator_MoveNext_m09B67058C12BE89CAF1F03C1C49544085D8CE2FC (Enumerator_t7EE9A54B083C59E8C0A7DB9E2C05864EE8B49025* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7EE9A54B083C59E8C0A7DB9E2C05864EE8B49025*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
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
// System.Boolean Nethereum.Merkle.Patricia.AccountProofVerification::VerifyAccountProofs(System.String,System.Byte[],System.Collections.Generic.IEnumerable`1<System.Byte[]>,Nethereum.Model.Account)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccountProofVerification_VerifyAccountProofs_mAA07C99D241BF2BEAE48178BA99EB09EDED8D495 (String_t* ___accountAddress0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___stateRoot1, RuntimeObject* ___rlpValueProofs2, Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* ___account3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t21E2C2093877744709873DDCB2D3C8297821E513_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t1E268397CD739ED7EB63601E159FAA7D40A6F44A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* V_1 = NULL;
	Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5* V_2 = NULL;
	InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	{
		AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9* L_0 = (AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9*)il2cpp_codegen_object_new(AccountEncoder_t6FD7FA9822AFD5512B577EC035E92BE98DC889D9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AccountEncoder__ctor_mFAACA3386FD4E175254A424CC480419230F4F11A(L_0, NULL);
		Account_t306AFB304C38E6CE2A6F53EF033CCA364F52665E* L_1 = ___account3;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = AccountEncoder_Encode_m8B2D014BAC9C65F0F0CD6DA1021FDFC668444038(L_0, L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___stateRoot1;
		PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* L_4 = (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00*)il2cpp_codegen_object_new(PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		PatriciaTrie__ctor_m575A0017560EC7DD2BA0791B189A5A8F986C7D25(L_4, L_3, NULL);
		V_1 = L_4;
		Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5* L_5 = (Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5*)il2cpp_codegen_object_new(Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Sha3KeccackHashProvider__ctor_mBBD08D9177EC57F999D617D6F9628CDBB368E9DD(L_5, NULL);
		V_2 = L_5;
		InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* L_6 = (InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC*)il2cpp_codegen_object_new(InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		InMemoryTrieStorage__ctor_mB67FB3F526E927A946ED880E5C18060A28E9933F(L_6, NULL);
		V_3 = L_6;
		RuntimeObject* L_7 = ___rlpValueProofs2;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Byte[]>::GetEnumerator() */, IEnumerable_1_t21E2C2093877744709873DDCB2D3C8297821E513_il2cpp_TypeInfo_var, L_7);
		V_5 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_9 = V_5;
					if (!L_9)
					{
						goto IL_0058;
					}
				}
				{
					RuntimeObject* L_10 = V_5;
					NullCheck(L_10);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_0058:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0042_1;
			}

IL_0029_1:
			{
				RuntimeObject* L_11 = V_5;
				NullCheck(L_11);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
				L_12 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Byte[]>::get_Current() */, IEnumerator_1_t1E268397CD739ED7EB63601E159FAA7D40A6F44A_il2cpp_TypeInfo_var, L_11);
				V_6 = L_12;
				InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* L_13 = V_3;
				Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5* L_14 = V_2;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_6;
				NullCheck(L_14);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
				L_16 = Sha3KeccackHashProvider_ComputeHash_m358C5EE615F4FC68C40C040A2E0A0E9A59D952CD(L_14, L_15, NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_6;
				NullCheck(L_13);
				InMemoryTrieStorage_Put_m0E7E1874BBF788B89EAA7EC7CC34F87E3C9C97B5(L_13, L_16, L_17, NULL);
			}

IL_0042_1:
			{
				RuntimeObject* L_18 = V_5;
				NullCheck(L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_18);
				if (L_19)
				{
					goto IL_0029_1;
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
		PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* L_20 = V_1;
		Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5* L_21 = V_2;
		String_t* L_22 = ___accountAddress0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_22, NULL);
		NullCheck(L_21);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = Sha3KeccackHashProvider_ComputeHash_m358C5EE615F4FC68C40C040A2E0A0E9A59D952CD(L_21, L_23, NULL);
		InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* L_25 = V_3;
		NullCheck(L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
		L_26 = PatriciaTrie_Get_mBCCB7E69547FFBDC36AECA7A264C4BA36C6BE6F6(L_20, L_24, L_25, NULL);
		V_4 = L_26;
		PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* L_27 = V_1;
		NullCheck(L_27);
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_28;
		L_28 = PatriciaTrie_get_Root_mA472DB2AC8A1ACA84AC6B3ABC7C735D8A92BB111_inline(L_27, NULL);
		NullCheck(L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29;
		L_29 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(5 /* System.Byte[] Nethereum.Merkle.Patricia.Node::GetHash() */, L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___stateRoot1;
		bool L_31;
		L_31 = NiblesBytesExtension_AreTheSame_m6B201B050AB7376DD170E81C6CA445EDFF98D49F(L_29, L_30, NULL);
		if (!L_31)
		{
			goto IL_008f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_4;
		bool L_34;
		L_34 = NiblesBytesExtension_AreTheSame_m6B201B050AB7376DD170E81C6CA445EDFF98D49F(L_32, L_33, NULL);
		if (!L_34)
		{
			goto IL_008d;
		}
	}
	{
		return (bool)1;
	}

IL_008d:
	{
		return (bool)0;
	}

IL_008f:
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
// System.Void Nethereum.Merkle.Patricia.BranchNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BranchNode__ctor_m3552D08D9ADC6D723DE1C6B121E89232E558D3D0 (BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5* L_0 = (Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5*)il2cpp_codegen_object_new(Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Sha3KeccackHashProvider__ctor_mBBD08D9177EC57F999D617D6F9628CDBB368E9DD(L_0, NULL);
		BranchNode__ctor_m1A9C27073F3EC72B6F631A80052063EDD76E8203(__this, L_0, NULL);
		return;
	}
}
// System.Void Nethereum.Merkle.Patricia.BranchNode::.ctor(Nethereum.Util.HashProviders.IHashProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BranchNode__ctor_m1A9C27073F3EC72B6F631A80052063EDD76E8203 (BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* __this, RuntimeObject* ___hashProvider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeU5BU5D_tB05665DCA9FA6C7C1BA79FA5E029D66BA3478607_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___hashProvider0;
		Node__ctor_m54D24E3635D575CACE45B124CC0971CFD89BFDFB(__this, L_0, NULL);
		NodeU5BU5D_tB05665DCA9FA6C7C1BA79FA5E029D66BA3478607* L_1 = (NodeU5BU5D_tB05665DCA9FA6C7C1BA79FA5E029D66BA3478607*)(NodeU5BU5D_tB05665DCA9FA6C7C1BA79FA5E029D66BA3478607*)SZArrayNew(NodeU5BU5D_tB05665DCA9FA6C7C1BA79FA5E029D66BA3478607_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___U3CChildrenU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CChildrenU3Ek__BackingField_1), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		BranchNode_set_Value_mAA551F3490DCD7D176B8901B8573E282D9287B84_inline(__this, L_2, NULL);
		return;
	}
}
// System.Void Nethereum.Merkle.Patricia.BranchNode::SetChild(System.Int32,Nethereum.Merkle.Patricia.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BranchNode_SetChild_mC50C60FC392506226FC60E0C75A1D7672173C5A7 (BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* __this, int32_t ___nibble0, Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* ___node1, const RuntimeMethod* method) 
{
	{
		NodeU5BU5D_tB05665DCA9FA6C7C1BA79FA5E029D66BA3478607* L_0;
		L_0 = BranchNode_get_Children_m371C78510FF6B91199CA0BDB7D2C4B93DCF4B9B2_inline(__this, NULL);
		int32_t L_1 = ___nibble0;
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_2 = ___node1;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_2);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F*)L_2);
		return;
	}
}
// System.Void Nethereum.Merkle.Patricia.BranchNode::RemoveChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BranchNode_RemoveChild_mA26BDF80C07064257C38F74E2BEE2857DF358896 (BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* __this, int32_t ___nibble0, const RuntimeMethod* method) 
{
	{
		NodeU5BU5D_tB05665DCA9FA6C7C1BA79FA5E029D66BA3478607* L_0;
		L_0 = BranchNode_get_Children_m371C78510FF6B91199CA0BDB7D2C4B93DCF4B9B2_inline(__this, NULL);
		int32_t L_1 = ___nibble0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, NULL);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F*)NULL);
		return;
	}
}
// Nethereum.Merkle.Patricia.Node[] Nethereum.Merkle.Patricia.BranchNode::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodeU5BU5D_tB05665DCA9FA6C7C1BA79FA5E029D66BA3478607* BranchNode_get_Children_m371C78510FF6B91199CA0BDB7D2C4B93DCF4B9B2 (BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* __this, const RuntimeMethod* method) 
{
	{
		NodeU5BU5D_tB05665DCA9FA6C7C1BA79FA5E029D66BA3478607* L_0 = __this->___U3CChildrenU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Byte[] Nethereum.Merkle.Patricia.BranchNode::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BranchNode_get_Value_m69ED4759CB30ACB44E808F61CE17E53095C507EF (BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CValueU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Nethereum.Merkle.Patricia.BranchNode::set_Value(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BranchNode_set_Value_mAA551F3490DCD7D176B8901B8573E282D9287B84 (BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Byte[] Nethereum.Merkle.Patricia.BranchNode::GetRLPEncodedData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BranchNode_GetRLPEncodedData_mE3B0257DE107A5AC7D979F70A338649DEC6A9A62 (BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* V_0 = NULL;
	NodeU5BU5D_tB05665DCA9FA6C7C1BA79FA5E029D66BA3478607* V_1 = NULL;
	int32_t V_2 = 0;
	Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_0, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		V_0 = L_0;
		NodeU5BU5D_tB05665DCA9FA6C7C1BA79FA5E029D66BA3478607* L_1;
		L_1 = BranchNode_get_Children_m371C78510FF6B91199CA0BDB7D2C4B93DCF4B9B2_inline(__this, NULL);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0059;
	}

IL_0011:
	{
		NodeU5BU5D_tB05665DCA9FA6C7C1BA79FA5E029D66BA3478607* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_6 = V_3;
		if (L_6)
		{
			goto IL_002a;
		}
	}
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_7 = V_0;
		EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666* L_8 = (EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666*)il2cpp_codegen_object_new(EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		EmptyNode__ctor_mC69E365F7E061A5DF5E3A753DB4EFFCA8CA5190F(L_8, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Byte[] Nethereum.Merkle.Patricia.Node::GetRLPEncodedData() */, L_8);
		NullCheck(L_7);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_7, L_9, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		goto IL_0055;
	}

IL_002a:
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_10 = V_3;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Byte[] Nethereum.Merkle.Patricia.Node::GetRLPEncodedData() */, L_10);
		V_4 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_4;
		NullCheck(L_12);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) < ((int32_t)((int32_t)32))))
		{
			goto IL_004d;
		}
	}
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_13 = V_0;
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_14 = V_3;
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(5 /* System.Byte[] Nethereum.Merkle.Patricia.Node::GetHash() */, L_14);
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_15, NULL);
		NullCheck(L_13);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_13, L_16, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		goto IL_0055;
	}

IL_004d:
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_17 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_4;
		NullCheck(L_17);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_17, L_18, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
	}

IL_0055:
	{
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0059:
	{
		int32_t L_20 = V_2;
		NodeU5BU5D_tB05665DCA9FA6C7C1BA79FA5E029D66BA3478607* L_21 = V_1;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_22 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = BranchNode_get_Value_m69ED4759CB30ACB44E808F61CE17E53095C507EF_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_23, NULL);
		NullCheck(L_22);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_22, L_24, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_25 = V_0;
		NullCheck(L_25);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_26;
		L_26 = List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A(L_25, List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
		L_27 = RLP_EncodeList_m2A2C2A6B4DDA95C331AECF96926B0D9C1B16FE05(L_26, NULL);
		return L_27;
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
// System.Void Nethereum.Merkle.Patricia.EmptyNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyNode__ctor_mC69E365F7E061A5DF5E3A753DB4EFFCA8CA5190F (EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5* L_0 = (Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5*)il2cpp_codegen_object_new(Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Sha3KeccackHashProvider__ctor_mBBD08D9177EC57F999D617D6F9628CDBB368E9DD(L_0, NULL);
		Node__ctor_m54D24E3635D575CACE45B124CC0971CFD89BFDFB(__this, L_0, NULL);
		return;
	}
}
// System.Void Nethereum.Merkle.Patricia.EmptyNode::.ctor(Nethereum.Util.HashProviders.IHashProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyNode__ctor_m23F4AB016E5A9A6684761F466F8016C8E31F5EAA (EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666* __this, RuntimeObject* ___hashProvider0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___hashProvider0;
		Node__ctor_m54D24E3635D575CACE45B124CC0971CFD89BFDFB(__this, L_0, NULL);
		return;
	}
}
// System.Byte[] Nethereum.Merkle.Patricia.EmptyNode::GetRLPEncodedData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* EmptyNode_GetRLPEncodedData_mF39AC6AF093E217BA0B79784548759A64A70FADC (EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_0, NULL);
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
// System.Byte[] Nethereum.Merkle.Patricia.ExtendedNode::get_Nibbles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ExtendedNode_get_Nibbles_mE69CC371BC9220A5606C93BF13482FE6AAFD9A7D (ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CNibblesU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.Merkle.Patricia.ExtendedNode::set_Nibbles(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendedNode_set_Nibbles_m46259B2045B4CE512A76C238425720DE354BC235 (ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CNibblesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNibblesU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Nethereum.Merkle.Patricia.Node Nethereum.Merkle.Patricia.ExtendedNode::get_InnerNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* ExtendedNode_get_InnerNode_mA2250ADD4D6EAAD1C85691C74FB4C8E604DC3D76 (ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* __this, const RuntimeMethod* method) 
{
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_0 = __this->___U3CInnerNodeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Nethereum.Merkle.Patricia.ExtendedNode::set_InnerNode(Nethereum.Merkle.Patricia.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendedNode_set_InnerNode_m6762B1A005B07D339C8B136187E581F9247F0E1D (ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* __this, Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* ___value0, const RuntimeMethod* method) 
{
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_0 = ___value0;
		__this->___U3CInnerNodeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInnerNodeU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.Merkle.Patricia.ExtendedNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendedNode__ctor_mAF9D68DF08EEFCCB507019267DF2534440E63DD6 (ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5* L_0 = (Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5*)il2cpp_codegen_object_new(Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Sha3KeccackHashProvider__ctor_mBBD08D9177EC57F999D617D6F9628CDBB368E9DD(L_0, NULL);
		ExtendedNode__ctor_m67C30C616FFDFC545F049F64BD1D2BAB62916CEE(__this, L_0, NULL);
		return;
	}
}
// System.Void Nethereum.Merkle.Patricia.ExtendedNode::.ctor(Nethereum.Util.HashProviders.IHashProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendedNode__ctor_m67C30C616FFDFC545F049F64BD1D2BAB62916CEE (ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* __this, RuntimeObject* ___hashProvider0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___hashProvider0;
		Node__ctor_m54D24E3635D575CACE45B124CC0971CFD89BFDFB(__this, L_0, NULL);
		return;
	}
}
// System.Byte[] Nethereum.Merkle.Patricia.ExtendedNode::GetRLPEncodedData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ExtendedNode_GetRLPEncodedData_mD8790E04933A55B59CAF04BE12CFA21C079FE8A8 (ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* __this, const RuntimeMethod* method) 
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
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_0, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = ExtendedNode_GetPrefixedNibbles_mA1D26E789EC62B43FA42EF40A19CD9AFF6E9E3AB(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = NiblesBytesExtension_ConvertFromNibbles_mB101E43D9FA078C2BF30015E429B84D84C0904A4(L_1, NULL);
		V_1 = L_2;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_4, NULL);
		NullCheck(L_3);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_3, L_5, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_6;
		L_6 = ExtendedNode_get_InnerNode_mA2250ADD4D6EAAD1C85691C74FB4C8E604DC3D76_inline(__this, NULL);
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Byte[] Nethereum.Merkle.Patricia.Node::GetRLPEncodedData() */, L_6);
		V_2 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_2;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) < ((int32_t)((int32_t)32))))
		{
			goto IL_0049;
		}
	}
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_9 = V_0;
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_10;
		L_10 = ExtendedNode_get_InnerNode_mA2250ADD4D6EAAD1C85691C74FB4C8E604DC3D76_inline(__this, NULL);
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(5 /* System.Byte[] Nethereum.Merkle.Patricia.Node::GetHash() */, L_10);
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_11, NULL);
		NullCheck(L_9);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_9, L_12, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		goto IL_0050;
	}

IL_0049:
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		NullCheck(L_13);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_13, L_14, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
	}

IL_0050:
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_15 = V_0;
		NullCheck(L_15);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_16;
		L_16 = List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A(L_15, List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = RLP_EncodeList_m2A2C2A6B4DDA95C331AECF96926B0D9C1B16FE05(L_16, NULL);
		return L_17;
	}
}
// System.Byte[] Nethereum.Merkle.Patricia.ExtendedNode::GetPrefixedNibbles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ExtendedNode_GetPrefixedNibbles_mA1D26E789EC62B43FA42EF40A19CD9AFF6E9E3AB (ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_0 = NULL;
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9(L_0, List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = ExtendedNode_get_Nibbles_mE69CC371BC9220A5606C93BF13482FE6AAFD9A7D_inline(__this, NULL);
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_1)->max_length))%2))) <= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_2 = V_0;
		NullCheck(L_2);
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_2, (uint8_t)1, List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		goto IL_002a;
	}

IL_001c:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_3 = V_0;
		NullCheck(L_3);
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_3, (uint8_t)0, List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_4 = V_0;
		NullCheck(L_4);
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_4, (uint8_t)0, List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
	}

IL_002a:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = ExtendedNode_get_Nibbles_mE69CC371BC9220A5606C93BF13482FE6AAFD9A7D_inline(__this, NULL);
		NullCheck(L_5);
		List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_5, (RuntimeObject*)L_6, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_7 = V_0;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_7, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
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
// System.Void Nethereum.Merkle.Patricia.HashNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashNode__ctor_m69BDF3048FBBCD53FBA9B8D348CCE28557E2242B (HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5* L_0 = (Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5*)il2cpp_codegen_object_new(Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Sha3KeccackHashProvider__ctor_mBBD08D9177EC57F999D617D6F9628CDBB368E9DD(L_0, NULL);
		HashNode__ctor_m0B2AB096E0A8E9CB9940B1BAB1281D36799B562A(__this, L_0, NULL);
		return;
	}
}
// System.Void Nethereum.Merkle.Patricia.HashNode::.ctor(Nethereum.Util.HashProviders.IHashProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashNode__ctor_m0B2AB096E0A8E9CB9940B1BAB1281D36799B562A (HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* __this, RuntimeObject* ___hashProvider0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___hashProvider0;
		Node__ctor_m54D24E3635D575CACE45B124CC0971CFD89BFDFB(__this, L_0, NULL);
		return;
	}
}
// System.Byte[] Nethereum.Merkle.Patricia.HashNode::get_Hash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashNode_get_Hash_m88E4036B8A738AE6154BF6938D016EAA276FBF37 (HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CHashU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.Merkle.Patricia.HashNode::set_Hash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashNode_set_Hash_m96C51491A78A067FF3096216A0697316BF438FFC (HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CHashU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHashU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Nethereum.Merkle.Patricia.Node Nethereum.Merkle.Patricia.HashNode::get_InnerNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* HashNode_get_InnerNode_m2B9F522AAABDF05F248408E1AAFA34AECF1F3F4E (HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* __this, const RuntimeMethod* method) 
{
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_0 = __this->___U3CInnerNodeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Nethereum.Merkle.Patricia.HashNode::set_InnerNode(Nethereum.Merkle.Patricia.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashNode_set_InnerNode_m0B3F43D1861CFF3AE27DA973E314FD7B54E217DF (HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* __this, Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* ___value0, const RuntimeMethod* method) 
{
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_0 = ___value0;
		__this->___U3CInnerNodeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInnerNodeU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Byte[] Nethereum.Merkle.Patricia.HashNode::GetHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashNode_GetHash_mF41C00564FE1DA59ED23D3BB79371A0CD6882446 (HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_0;
		L_0 = HashNode_get_InnerNode_m2B9F522AAABDF05F248408E1AAFA34AECF1F3F4E_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = HashNode_get_Hash_m88E4036B8A738AE6154BF6938D016EAA276FBF37_inline(__this, NULL);
		return L_1;
	}

IL_000f:
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_2;
		L_2 = HashNode_get_InnerNode_m2B9F522AAABDF05F248408E1AAFA34AECF1F3F4E_inline(__this, NULL);
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(5 /* System.Byte[] Nethereum.Merkle.Patricia.Node::GetHash() */, L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = HashNode_get_Hash_m88E4036B8A738AE6154BF6938D016EAA276FBF37_inline(__this, NULL);
		bool L_5;
		L_5 = NiblesBytesExtension_AreTheSame_m6B201B050AB7376DD170E81C6CA445EDFF98D49F(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = HashNode_get_Hash_m88E4036B8A738AE6154BF6938D016EAA276FBF37_inline(__this, NULL);
		return L_6;
	}

IL_002e:
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_7;
		L_7 = HashNode_get_InnerNode_m2B9F522AAABDF05F248408E1AAFA34AECF1F3F4E_inline(__this, NULL);
		if (!((EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666*)IsInstClass((RuntimeObject*)L_7, EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666_il2cpp_TypeInfo_var)))
		{
			goto IL_0042;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = HashNode_get_Hash_m88E4036B8A738AE6154BF6938D016EAA276FBF37_inline(__this, NULL);
		return L_8;
	}

IL_0042:
	{
		Exception_t* L_9 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE1BFB89383EBC8E95B58859363BDD8BA43CBC8D5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashNode_GetHash_mF41C00564FE1DA59ED23D3BB79371A0CD6882446_RuntimeMethod_var)));
	}
}
// System.Void Nethereum.Merkle.Patricia.HashNode::DecodeInnerNode(Nethereum.Merkle.Patricia.ITrieStorage,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashNode_DecodeInnerNode_mE265CFE412E537A1AB4CA10C7D958B9136231219 (HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* __this, RuntimeObject* ___storage0, bool ___decodeInnerHashNodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeDecoder_tB48C4A163D2AB91862EF8117500F402E7AEA73C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* V_0 = NULL;
	{
		NodeDecoder_tB48C4A163D2AB91862EF8117500F402E7AEA73C1* L_0 = (NodeDecoder_tB48C4A163D2AB91862EF8117500F402E7AEA73C1*)il2cpp_codegen_object_new(NodeDecoder_tB48C4A163D2AB91862EF8117500F402E7AEA73C1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NodeDecoder__ctor_m90E2804451D8C58911B89BA93BF8BD3EDD6F7C6E(L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = HashNode_get_Hash_m88E4036B8A738AE6154BF6938D016EAA276FBF37_inline(__this, NULL);
		bool L_2 = ___decodeInnerHashNodes1;
		RuntimeObject* L_3 = ___storage0;
		NullCheck(L_0);
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_4;
		L_4 = NodeDecoder_DecodeNode_mF1396B76D3E533D386DD1B0E9214C39FD5458238(L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_5 = V_0;
		HashNode_set_InnerNode_m0B3F43D1861CFF3AE27DA973E314FD7B54E217DF_inline(__this, L_5, NULL);
		return;
	}
}
// System.Byte[] Nethereum.Merkle.Patricia.HashNode::GetRLPEncodedData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashNode_GetRLPEncodedData_m138268D797518ABCE0D902A6B172BFB1EBB1A1BE (HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_0;
		L_0 = HashNode_get_InnerNode_m2B9F522AAABDF05F248408E1AAFA34AECF1F3F4E_inline(__this, NULL);
		if (!((EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666*)IsInstClass((RuntimeObject*)L_0, EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666_il2cpp_TypeInfo_var)))
		{
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = HashNode_get_Hash_m88E4036B8A738AE6154BF6938D016EAA276FBF37_inline(__this, NULL);
		return L_1;
	}

IL_0014:
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_2;
		L_2 = HashNode_get_InnerNode_m2B9F522AAABDF05F248408E1AAFA34AECF1F3F4E_inline(__this, NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_3;
		L_3 = HashNode_get_InnerNode_m2B9F522AAABDF05F248408E1AAFA34AECF1F3F4E_inline(__this, NULL);
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Byte[] Nethereum.Merkle.Patricia.Node::GetRLPEncodedData() */, L_3);
		return L_4;
	}

IL_0028:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = HashNode_get_Hash_m88E4036B8A738AE6154BF6938D016EAA276FBF37_inline(__this, NULL);
		return L_5;
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
// System.Collections.Generic.Dictionary`2<System.Byte[],System.Byte[]> Nethereum.Merkle.Patricia.InMemoryTrieStorage::get__storage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB* InMemoryTrieStorage_get__storage_m779F5BDF8833A35FF9C3749D9F41E8B4901D824F (InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB* L_0 = __this->___U3C_storageU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.Byte[],System.Byte[]> Nethereum.Merkle.Patricia.InMemoryTrieStorage::get_Storage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB* InMemoryTrieStorage_get_Storage_mDFF4A181C5D05E73992AA7D5C14B112FF4A02596 (InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB* L_0;
		L_0 = InMemoryTrieStorage_get__storage_m779F5BDF8833A35FF9C3749D9F41E8B4901D824F_inline(__this, NULL);
		return L_0;
	}
}
// System.Void Nethereum.Merkle.Patricia.InMemoryTrieStorage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InMemoryTrieStorage__ctor_mB67FB3F526E927A946ED880E5C18060A28E9933F (InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCA3076AA860062504B4FB87B39751B6907FAE7EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9* L_0 = (ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9*)il2cpp_codegen_object_new(ByteArrayComparer_t4A8A81C8D1357292D1D62266D350F73353741ED9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ByteArrayComparer__ctor_m5621A85A161658F80BE49C560193CFFB54776CC4(L_0, NULL);
		Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB* L_1 = (Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB*)il2cpp_codegen_object_new(Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mCA3076AA860062504B4FB87B39751B6907FAE7EC(L_1, L_0, Dictionary_2__ctor_mCA3076AA860062504B4FB87B39751B6907FAE7EC_RuntimeMethod_var);
		__this->___U3C_storageU3Ek__BackingField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_storageU3Ek__BackingField_0), (void*)L_1);
		return;
	}
}
// System.Void Nethereum.Merkle.Patricia.InMemoryTrieStorage::Delete(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InMemoryTrieStorage_Delete_m03A020B43C9DE5DB44495680026A6909275B5A41 (InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m9C12F337B8F3B7E4623C387AEFE4E636FDFFD25B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB* L_0;
		L_0 = InMemoryTrieStorage_get__storage_m779F5BDF8833A35FF9C3749D9F41E8B4901D824F_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_Remove_m9C12F337B8F3B7E4623C387AEFE4E636FDFFD25B(L_0, L_1, Dictionary_2_Remove_m9C12F337B8F3B7E4623C387AEFE4E636FDFFD25B_RuntimeMethod_var);
		return;
	}
}
// System.Byte[] Nethereum.Merkle.Patricia.InMemoryTrieStorage::Get(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* InMemoryTrieStorage_Get_mAC6BD3195F94598DF680C1D5F95850CBFA2BBA21 (InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1DB967EEBA9CAE85C3AA3E32BF56CCFD4F1F5140_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m835793E1A4192B9B87D8D532EFBEE33288F2C207_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB* L_0;
		L_0 = InMemoryTrieStorage_get__storage_m779F5BDF8833A35FF9C3749D9F41E8B4901D824F_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m1DB967EEBA9CAE85C3AA3E32BF56CCFD4F1F5140(L_0, L_1, Dictionary_2_ContainsKey_m1DB967EEBA9CAE85C3AA3E32BF56CCFD4F1F5140_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB* L_3;
		L_3 = InMemoryTrieStorage_get__storage_m779F5BDF8833A35FF9C3749D9F41E8B4901D824F_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___key0;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Dictionary_2_get_Item_m835793E1A4192B9B87D8D532EFBEE33288F2C207(L_3, L_4, Dictionary_2_get_Item_m835793E1A4192B9B87D8D532EFBEE33288F2C207_RuntimeMethod_var);
		return L_5;
	}

IL_001b:
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}
}
// System.Void Nethereum.Merkle.Patricia.InMemoryTrieStorage::Put(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InMemoryTrieStorage_Put_m0E7E1874BBF788B89EAA7EC7CC34F87E3C9C97B5 (InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m15CE6818A1A600D9591F35C476E801D67B1DCE6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1DB967EEBA9CAE85C3AA3E32BF56CCFD4F1F5140_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mB3B9DDFFE24AE97EE3605925F98B8D1EEB6CEB49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB* L_0;
		L_0 = InMemoryTrieStorage_get__storage_m779F5BDF8833A35FF9C3749D9F41E8B4901D824F_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m1DB967EEBA9CAE85C3AA3E32BF56CCFD4F1F5140(L_0, L_1, Dictionary_2_ContainsKey_m1DB967EEBA9CAE85C3AA3E32BF56CCFD4F1F5140_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB* L_3;
		L_3 = InMemoryTrieStorage_get__storage_m779F5BDF8833A35FF9C3749D9F41E8B4901D824F_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___key0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___value1;
		NullCheck(L_3);
		Dictionary_2_set_Item_mB3B9DDFFE24AE97EE3605925F98B8D1EEB6CEB49(L_3, L_4, L_5, Dictionary_2_set_Item_mB3B9DDFFE24AE97EE3605925F98B8D1EEB6CEB49_RuntimeMethod_var);
	}

IL_001b:
	{
		Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB* L_6;
		L_6 = InMemoryTrieStorage_get__storage_m779F5BDF8833A35FF9C3749D9F41E8B4901D824F_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___key0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___value1;
		NullCheck(L_6);
		Dictionary_2_Add_m15CE6818A1A600D9591F35C476E801D67B1DCE6E(L_6, L_7, L_8, Dictionary_2_Add_m15CE6818A1A600D9591F35C476E801D67B1DCE6E_RuntimeMethod_var);
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
// System.Void Nethereum.Merkle.Patricia.LeafNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeafNode__ctor_m6B2BD626807C4DB8C5D3AA08DB64EBED7A103257 (LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5* L_0 = (Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5*)il2cpp_codegen_object_new(Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Sha3KeccackHashProvider__ctor_mBBD08D9177EC57F999D617D6F9628CDBB368E9DD(L_0, NULL);
		LeafNode__ctor_m6919E28455E2BDAC2046D8CA99AB30E5EA4316BD(__this, L_0, NULL);
		return;
	}
}
// System.Void Nethereum.Merkle.Patricia.LeafNode::.ctor(Nethereum.Util.HashProviders.IHashProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeafNode__ctor_m6919E28455E2BDAC2046D8CA99AB30E5EA4316BD (LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* __this, RuntimeObject* ___hashProvider0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___hashProvider0;
		Node__ctor_m54D24E3635D575CACE45B124CC0971CFD89BFDFB(__this, L_0, NULL);
		return;
	}
}
// System.Byte[] Nethereum.Merkle.Patricia.LeafNode::get_Nibbles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LeafNode_get_Nibbles_m60B6E95A3DB4EDA4E6B13AB76ACE348DD447D310 (LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CNibblesU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.Merkle.Patricia.LeafNode::set_Nibbles(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeafNode_set_Nibbles_m9C418C15A793D722C75E45165C1124062B792402 (LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CNibblesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNibblesU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Byte[] Nethereum.Merkle.Patricia.LeafNode::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LeafNode_get_Value_mCA947E6EC6B168D0A5FF5C00993B57F1357BBCEE (LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CValueU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Nethereum.Merkle.Patricia.LeafNode::set_Value(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeafNode_set_Value_mF368CDC59A03297378BEA1C1BE662E3B5704E2C3 (LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Byte[] Nethereum.Merkle.Patricia.LeafNode::GetRLPEncodedData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LeafNode_GetRLPEncodedData_mC5C5AB9595FCE052C118DF4E9293060921B02C04 (LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* __this, const RuntimeMethod* method) 
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
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_0, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = LeafNode_GetPrefixedNibbles_m15DBB20E100AB8BA0F00EA46D06BF51822D0CBC8(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = NiblesBytesExtension_ConvertFromNibbles_mB101E43D9FA078C2BF30015E429B84D84C0904A4(L_1, NULL);
		V_0 = L_2;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_3 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_4, NULL);
		NullCheck(L_3);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_3, L_5, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_6 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = LeafNode_get_Value_mCA947E6EC6B168D0A5FF5C00993B57F1357BBCEE_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_7, NULL);
		NullCheck(L_6);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_6, L_8, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		NullCheck(L_6);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_9;
		L_9 = List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A(L_6, List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = RLP_EncodeList_m2A2C2A6B4DDA95C331AECF96926B0D9C1B16FE05(L_9, NULL);
		return L_10;
	}
}
// System.Byte[] Nethereum.Merkle.Patricia.LeafNode::GetPrefixedNibbles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LeafNode_GetPrefixedNibbles_m15DBB20E100AB8BA0F00EA46D06BF51822D0CBC8 (LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_0 = NULL;
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9(L_0, List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = LeafNode_get_Nibbles_m60B6E95A3DB4EDA4E6B13AB76ACE348DD447D310_inline(__this, NULL);
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_1)->max_length))%2))) <= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_2 = V_0;
		NullCheck(L_2);
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_2, (uint8_t)3, List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		goto IL_002a;
	}

IL_001c:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_3 = V_0;
		NullCheck(L_3);
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_3, (uint8_t)2, List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_4 = V_0;
		NullCheck(L_4);
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_4, (uint8_t)0, List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
	}

IL_002a:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = LeafNode_get_Nibbles_m60B6E95A3DB4EDA4E6B13AB76ACE348DD447D310_inline(__this, NULL);
		NullCheck(L_5);
		List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_5, (RuntimeObject*)L_6, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_7 = V_0;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_7, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
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
// System.Byte Nethereum.Merkle.Patricia.NiblesBytesExtension::GetHighNibble(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t NiblesBytesExtension_GetHighNibble_m07D1E2475D07CB387796FD28185DE675EB56F2E8 (uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___value0;
		return (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_0>>4))&((int32_t)15))));
	}
}
// System.Byte Nethereum.Merkle.Patricia.NiblesBytesExtension::GetLowNibble(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t NiblesBytesExtension_GetLowNibble_mD8623636FBA0A25AB6B23C9DE5E2B60D8458A8E2 (uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___value0;
		return (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_0&((int32_t)15))));
	}
}
// System.Byte[] Nethereum.Merkle.Patricia.NiblesBytesExtension::ConvertToNibbles(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NiblesBytesExtension_ConvertToNibbles_mB2B4D25FB507E1EAA7FE2A95C71F0256C72F310D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___values0, const RuntimeMethod* method) 
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
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9(L_0, List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___values0;
		V_1 = L_1;
		V_2 = 0;
		goto IL_002c;
	}

IL_000c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_6 = V_0;
		uint8_t L_7 = V_3;
		uint8_t L_8;
		L_8 = NiblesBytesExtension_GetHighNibble_m07D1E2475D07CB387796FD28185DE675EB56F2E8(L_7, NULL);
		NullCheck(L_6);
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_6, L_8, List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_9 = V_0;
		uint8_t L_10 = V_3;
		uint8_t L_11;
		L_11 = NiblesBytesExtension_GetLowNibble_mD8623636FBA0A25AB6B23C9DE5E2B60D8458A8E2(L_10, NULL);
		NullCheck(L_9);
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_9, L_11, List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002c:
	{
		int32_t L_13 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_15 = V_0;
		NullCheck(L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_15, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		return L_16;
	}
}
// System.Byte[] Nethereum.Merkle.Patricia.NiblesBytesExtension::FindAllTheSameBytesFromTheStart(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NiblesBytesExtension_FindAllTheSameBytesFromTheStart_mA8AE8C3B05883F1538B93B3938D812C7C50CDC33 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, const RuntimeMethod* method) 
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
	int32_t V_0 = 0;
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___a0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___a0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___b1;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___b1;
		NullCheck(L_3);
		V_0 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
	}

IL_0010:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_4 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9(L_4, List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		V_1 = L_4;
		V_2 = 0;
		goto IL_0038;
	}

IL_001a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___a0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___b1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		if ((!(((uint32_t)L_8) == ((uint32_t)L_12))))
		{
			goto IL_002d;
		}
	}
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___a0;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_13);
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_13, L_17, List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		goto IL_0034;
	}

IL_002d:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_18 = V_1;
		NullCheck(L_18);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
		L_19 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_18, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		return L_19;
	}

IL_0034:
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0038:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_001a;
		}
	}
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_23 = V_1;
		NullCheck(L_23);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_23, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		return L_24;
	}
}
// System.Boolean Nethereum.Merkle.Patricia.NiblesBytesExtension::AreTheSame(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NiblesBytesExtension_AreTheSame_m6B201B050AB7376DD170E81C6CA445EDFF98D49F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___a0;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___b1;
		if (L_1)
		{
			goto IL_0008;
		}
	}

IL_0006:
	{
		return (bool)1;
	}

IL_0008:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___a0;
		if (L_2)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___b1;
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___a0;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___b1;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		return (bool)0;
	}

IL_001c:
	{
		V_0 = 0;
		goto IL_002e;
	}

IL_0020:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___a0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___b1;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if ((((int32_t)L_9) == ((int32_t)L_13)))
		{
			goto IL_002a;
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_002e:
	{
		int32_t L_15 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___a0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean Nethereum.Merkle.Patricia.NiblesBytesExtension::AreAllTheSameAsTheStartOf(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NiblesBytesExtension_AreAllTheSameAsTheStartOf_mCAAA0D656DB81DB84E525940BFABCFB8CC8020FC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___b1;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___a0;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_0022;
		}
	}
	{
		V_0 = 0;
		goto IL_001a;
	}

IL_000c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___a0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___b1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if ((((int32_t)L_5) == ((int32_t)L_9)))
		{
			goto IL_0016;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_001a:
	{
		int32_t L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___a0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}

IL_0022:
	{
		return (bool)0;
	}
}
// System.Int32 Nethereum.Merkle.Patricia.NiblesBytesExtension::HowManyBytesStartTheSame(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NiblesBytesExtension_HowManyBytesStartTheSame_mCEBD153DADE042C763969F327C5202D4C124E732 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0016;
	}

IL_0006:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___a0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___b1;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((!(((uint32_t)L_3) == ((uint32_t)L_7))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0016:
	{
		int32_t L_10 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___a0;
		NullCheck(L_11);
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_12 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___b1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0006;
		}
	}

IL_0022:
	{
		int32_t L_14 = V_0;
		return L_14;
	}
}
// System.Byte[] Nethereum.Merkle.Patricia.NiblesBytesExtension::ConvertFromNibbles(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NiblesBytesExtension_ConvertFromNibbles_mB101E43D9FA078C2BF30015E429B84D84C0904A4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___values0, const RuntimeMethod* method) 
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
	int32_t V_1 = 0;
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9(L_0, List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0020;
	}

IL_000a:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___values0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___values0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_1);
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_1, (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_5<<4))|(int32_t)L_9))), List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 2));
	}

IL_0020:
	{
		int32_t L_11 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___values0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_13 = V_0;
		NullCheck(L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_13, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
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
// Nethereum.Util.HashProviders.IHashProvider Nethereum.Merkle.Patricia.Node::get_HashProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Node_get_HashProvider_m8B76C56C9644BCC4DCAAD90BBFBCAA253DB203A1 (Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CHashProviderU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.Merkle.Patricia.Node::set_HashProvider(Nethereum.Util.HashProviders.IHashProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_set_HashProvider_mF88F7495DD59A9630C17FC3FE07D5CDE52DC11AC (Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CHashProviderU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHashProviderU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.Merkle.Patricia.Node::.ctor(Nethereum.Util.HashProviders.IHashProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m54D24E3635D575CACE45B124CC0971CFD89BFDFB (Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* __this, RuntimeObject* ___hashProvider0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___hashProvider0;
		Node_set_HashProvider_mF88F7495DD59A9630C17FC3FE07D5CDE52DC11AC_inline(__this, L_0, NULL);
		return;
	}
}
// System.Byte[] Nethereum.Merkle.Patricia.Node::GetHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Node_GetHash_m08396A271CD36B0AD912D7E23C46582907B7480D (Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHashProvider_tF63936D6765C651DE941637B412487D422A15637_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = Node_get_HashProvider_m8B76C56C9644BCC4DCAAD90BBFBCAA253DB203A1_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Byte[] Nethereum.Merkle.Patricia.Node::GetRLPEncodedData() */, __this);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = InterfaceFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.Util.HashProviders.IHashProvider::ComputeHash(System.Byte[]) */, IHashProvider_tF63936D6765C651DE941637B412487D422A15637_il2cpp_TypeInfo_var, L_0, L_1);
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
// Nethereum.Merkle.Patricia.Node Nethereum.Merkle.Patricia.NodeDecoder::DecodeNode(System.Byte[],System.Boolean,Nethereum.Merkle.Patricia.ITrieStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* NodeDecoder_DecodeNode_mF1396B76D3E533D386DD1B0E9214C39FD5458238 (NodeDecoder_tB48C4A163D2AB91862EF8117500F402E7AEA73C1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hash0, bool ___decodeHashNodes1, RuntimeObject* ___storage2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITrieStorage_tF3311169FFCDFB3BB327465BBE3DD27302BC91E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___storage2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___hash0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = InterfaceFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Byte[] Nethereum.Merkle.Patricia.ITrieStorage::Get(System.Byte[]) */, ITrieStorage_tF3311169FFCDFB3BB327465BBE3DD27302BC91E8_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		bool L_4 = ___decodeHashNodes1;
		RuntimeObject* L_5 = ___storage2;
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_6;
		L_6 = NodeDecoder_DecodeNodeFromRlpData_m9465E70FE6D551DA5EB6DEE53EB56630EE187FD3(__this, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// Nethereum.Merkle.Patricia.Node Nethereum.Merkle.Patricia.NodeDecoder::DecodeNodeFromRlpData(System.Byte[],System.Boolean,Nethereum.Merkle.Patricia.ITrieStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* NodeDecoder_DecodeNodeFromRlpData_m9465E70FE6D551DA5EB6DEE53EB56630EE187FD3 (NodeDecoder_tB48C4A163D2AB91862EF8117500F402E7AEA73C1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___currentData0, bool ___decodeHashNodes1, RuntimeObject* ___storage2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mCBDA870B39CA8872AADBA32CF4EA47C07E67893D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* V_2 = NULL;
	ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___currentData0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___currentData0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_000d;
		}
	}

IL_0007:
	{
		EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666* L_2 = (EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666*)il2cpp_codegen_object_new(EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		EmptyNode__ctor_mC69E365F7E061A5DF5E3A753DB4EFFCA8CA5190F(L_2, NULL);
		return L_2;
	}

IL_000d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___currentData0;
		NullCheck(L_3);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0040;
		}
	}
	{
		bool L_4 = ___decodeHashNodes1;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* L_5 = (HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC*)il2cpp_codegen_object_new(HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		HashNode__ctor_m69BDF3048FBBCD53FBA9B8D348CCE28557E2242B(L_5, NULL);
		HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* L_6 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___currentData0;
		NullCheck(L_6);
		HashNode_set_Hash_m96C51491A78A067FF3096216A0697316BF438FFC_inline(L_6, L_7, NULL);
		HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* L_8 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___currentData0;
		bool L_10 = ___decodeHashNodes1;
		RuntimeObject* L_11 = ___storage2;
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_12;
		L_12 = NodeDecoder_DecodeNode_mF1396B76D3E533D386DD1B0E9214C39FD5458238(__this, L_9, L_10, L_11, NULL);
		NullCheck(L_8);
		HashNode_set_InnerNode_m0B3F43D1861CFF3AE27DA973E314FD7B54E217DF_inline(L_8, L_12, NULL);
		return L_8;
	}

IL_0033:
	{
		HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* L_13 = (HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC*)il2cpp_codegen_object_new(HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		HashNode__ctor_m69BDF3048FBBCD53FBA9B8D348CCE28557E2242B(L_13, NULL);
		HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* L_14 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___currentData0;
		NullCheck(L_14);
		HashNode_set_Hash_m96C51491A78A067FF3096216A0697316BF438FFC_inline(L_14, L_15, NULL);
		return L_14;
	}

IL_0040:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___currentData0;
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		RuntimeObject* L_17;
		L_17 = RLP_Decode_m25755DBDC9A4DD532BC45B2C9BBBB03E00FA0C33(L_16, NULL);
		V_0 = ((RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6*)IsInstClass((RuntimeObject*)L_17, RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6_il2cpp_TypeInfo_var));
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_18 = V_0;
		if (!L_18)
		{
			goto IL_012e;
		}
	}
	{
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_mCBDA870B39CA8872AADBA32CF4EA47C07E67893D_inline(L_19, List_1_get_Count_mCBDA870B39CA8872AADBA32CF4EA47C07E67893D_RuntimeMethod_var);
		if ((!(((uint32_t)L_20) == ((uint32_t)2))))
		{
			goto IL_011a;
		}
	}
	{
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_21 = V_0;
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_21, 0, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = NiblesBytesExtension_ConvertToNibbles_mB2B4D25FB507E1EAA7FE2A95C71F0256C72F310D(L_23, NULL);
		V_1 = L_24;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = 0;
		uint8_t L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		if ((((int32_t)L_27) == ((int32_t)2)))
		{
			goto IL_007c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29 = 0;
		uint8_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		if ((!(((uint32_t)L_30) == ((uint32_t)3))))
		{
			goto IL_00c2;
		}
	}

IL_007c:
	{
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_31 = (LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC*)il2cpp_codegen_object_new(LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		LeafNode__ctor_m6B2BD626807C4DB8C5D3AA08DB64EBED7A103257(L_31, NULL);
		V_2 = L_31;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_1;
		NullCheck(L_32);
		int32_t L_33 = 0;
		uint8_t L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_009c;
		}
	}
	{
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_35 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8((RuntimeObject*)L_36, 2, Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38;
		L_38 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_37, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		NullCheck(L_35);
		LeafNode_set_Nibbles_m9C418C15A793D722C75E45165C1124062B792402_inline(L_35, L_38, NULL);
		goto IL_00ae;
	}

IL_009c:
	{
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_39 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_1;
		RuntimeObject* L_41;
		L_41 = Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8((RuntimeObject*)L_40, 1, Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42;
		L_42 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_41, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		NullCheck(L_39);
		LeafNode_set_Nibbles_m9C418C15A793D722C75E45165C1124062B792402_inline(L_39, L_42, NULL);
	}

IL_00ae:
	{
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_43 = V_2;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_44 = V_0;
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_44, 1, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_45);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46;
		L_46 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_45);
		NullCheck(L_43);
		LeafNode_set_Value_mF368CDC59A03297378BEA1C1BE662E3B5704E2C3_inline(L_43, L_46, NULL);
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_47 = V_2;
		return L_47;
	}

IL_00c2:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_1;
		NullCheck(L_48);
		int32_t L_49 = 0;
		uint8_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		if (!L_50)
		{
			goto IL_00cd;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_1;
		NullCheck(L_51);
		int32_t L_52 = 0;
		uint8_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		if ((!(((uint32_t)L_53) == ((uint32_t)1))))
		{
			goto IL_011a;
		}
	}

IL_00cd:
	{
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_54 = (ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A*)il2cpp_codegen_object_new(ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		ExtendedNode__ctor_mAF9D68DF08EEFCCB507019267DF2534440E63DD6(L_54, NULL);
		V_3 = L_54;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = V_1;
		NullCheck(L_55);
		int32_t L_56 = 0;
		uint8_t L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		if (L_57)
		{
			goto IL_00ec;
		}
	}
	{
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_58 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = V_1;
		RuntimeObject* L_60;
		L_60 = Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8((RuntimeObject*)L_59, 2, Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61;
		L_61 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_60, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		NullCheck(L_58);
		ExtendedNode_set_Nibbles_m46259B2045B4CE512A76C238425720DE354BC235_inline(L_58, L_61, NULL);
		goto IL_00fe;
	}

IL_00ec:
	{
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_62 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8((RuntimeObject*)L_63, 1, Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65;
		L_65 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_64, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		NullCheck(L_62);
		ExtendedNode_set_Nibbles_m46259B2045B4CE512A76C238425720DE354BC235_inline(L_62, L_65, NULL);
	}

IL_00fe:
	{
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_66 = V_3;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_67 = V_0;
		NullCheck(L_67);
		RuntimeObject* L_68;
		L_68 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_67, 1, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_68);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69;
		L_69 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_68);
		bool L_70 = ___decodeHashNodes1;
		RuntimeObject* L_71 = ___storage2;
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_72;
		L_72 = NodeDecoder_DecodeNodeFromRlpData_m9465E70FE6D551DA5EB6DEE53EB56630EE187FD3(__this, L_69, L_70, L_71, NULL);
		NullCheck(L_66);
		ExtendedNode_set_InnerNode_m6762B1A005B07D339C8B136187E581F9247F0E1D_inline(L_66, L_72, NULL);
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_73 = V_3;
		return L_73;
	}

IL_011a:
	{
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_74 = V_0;
		NullCheck(L_74);
		int32_t L_75;
		L_75 = List_1_get_Count_mCBDA870B39CA8872AADBA32CF4EA47C07E67893D_inline(L_74, List_1_get_Count_mCBDA870B39CA8872AADBA32CF4EA47C07E67893D_RuntimeMethod_var);
		if ((!(((uint32_t)L_75) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_012e;
		}
	}
	{
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_76 = V_0;
		bool L_77 = ___decodeHashNodes1;
		RuntimeObject* L_78 = ___storage2;
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_79;
		L_79 = NodeDecoder_DecodeBranchNode_m296D92D6922BD06B5F42BE835AC4C4B459AA6BDA(__this, L_76, L_77, L_78, NULL);
		return L_79;
	}

IL_012e:
	{
		return (Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F*)NULL;
	}
}
// Nethereum.Merkle.Patricia.BranchNode Nethereum.Merkle.Patricia.NodeDecoder::DecodeBranchNode(Nethereum.RLP.RLPCollection,System.Boolean,Nethereum.Merkle.Patricia.ITrieStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* NodeDecoder_DecodeBranchNode_m296D92D6922BD06B5F42BE835AC4C4B459AA6BDA (NodeDecoder_tB48C4A163D2AB91862EF8117500F402E7AEA73C1* __this, RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* ___rlpCollection0, bool ___decodeHashNodes1, RuntimeObject* ___storage2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_0 = (BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2*)il2cpp_codegen_object_new(BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BranchNode__ctor_m3552D08D9ADC6D723DE1C6B121E89232E558D3D0(L_0, NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003c;
	}

IL_000a:
	{
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_1 = ___rlpCollection0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_1, L_2, List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		V_2 = L_3;
		RuntimeObject* L_4 = V_2;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_4);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject* L_6 = V_2;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_7);
		if (!(((RuntimeArray*)L_7)->max_length))
		{
			goto IL_0038;
		}
	}
	{
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_8 = V_0;
		int32_t L_9 = V_1;
		RuntimeObject* L_10 = V_2;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_10);
		bool L_12 = ___decodeHashNodes1;
		RuntimeObject* L_13 = ___storage2;
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_14;
		L_14 = NodeDecoder_DecodeNodeFromRlpData_m9465E70FE6D551DA5EB6DEE53EB56630EE187FD3(__this, L_11, L_12, L_13, NULL);
		NullCheck(L_8);
		BranchNode_SetChild_mC50C60FC392506226FC60E0C75A1D7672173C5A7(L_8, L_9, L_14, NULL);
	}

IL_0038:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003c:
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)16))))
		{
			goto IL_000a;
		}
	}
	{
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_17 = ___rlpCollection0;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_17, ((int32_t)16), List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		if (!L_18)
		{
			goto IL_006d;
		}
	}
	{
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_19 = ___rlpCollection0;
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_19, ((int32_t)16), List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21;
		L_21 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_20);
		if (!L_21)
		{
			goto IL_006d;
		}
	}
	{
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_22 = V_0;
		RLPCollection_tECDE20E2A5CA29E13D8EF624C981734E9515FCD6* L_23 = ___rlpCollection0;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349(L_23, ((int32_t)16), List_1_get_Item_m9C07C5966B3216361095F302A95DF4C3F5B89349_RuntimeMethod_var);
		NullCheck(L_24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tB26A5C2B7404396E215F4002DD15E00DBD24A954_il2cpp_TypeInfo_var, L_24);
		NullCheck(L_22);
		BranchNode_set_Value_mAA551F3490DCD7D176B8901B8573E282D9287B84_inline(L_22, L_25, NULL);
	}

IL_006d:
	{
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_26 = V_0;
		return L_26;
	}
}
// System.Void Nethereum.Merkle.Patricia.NodeDecoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeDecoder__ctor_m90E2804451D8C58911B89BA93BF8BD3EDD6F7C6E (NodeDecoder_tB48C4A163D2AB91862EF8117500F402E7AEA73C1* __this, const RuntimeMethod* method) 
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
// System.Void Nethereum.Merkle.Patricia.PatriciaTrie::.ctor(Nethereum.Util.HashProviders.IHashProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PatriciaTrie__ctor_mAE62D49D7846473D59CEA4159845F01418D59601 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, RuntimeObject* ___hashProvider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___hashProvider0;
		__this->___U3CHashProviderU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHashProviderU3Ek__BackingField_0), (void*)L_0);
		EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666* L_1 = (EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666*)il2cpp_codegen_object_new(EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EmptyNode__ctor_mC69E365F7E061A5DF5E3A753DB4EFFCA8CA5190F(L_1, NULL);
		PatriciaTrie_set_Root_mF9112BA3E5243CF70611237B4ABED86FC5C6C218_inline(__this, L_1, NULL);
		return;
	}
}
// System.Void Nethereum.Merkle.Patricia.PatriciaTrie::.ctor(System.Byte[],Nethereum.Util.HashProviders.IHashProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PatriciaTrie__ctor_mB2654D8B631C98BC668B8BF35E9EDD6E71A0D70E (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hashRoot0, RuntimeObject* ___hashProvider1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___hashProvider1;
		__this->___U3CHashProviderU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHashProviderU3Ek__BackingField_0), (void*)L_0);
		RuntimeObject* L_1 = ___hashProvider1;
		HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* L_2 = (HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC*)il2cpp_codegen_object_new(HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HashNode__ctor_m0B2AB096E0A8E9CB9940B1BAB1281D36799B562A(L_2, L_1, NULL);
		HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* L_3 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___hashRoot0;
		NullCheck(L_3);
		HashNode_set_Hash_m96C51491A78A067FF3096216A0697316BF438FFC_inline(L_3, L_4, NULL);
		PatriciaTrie_set_Root_mF9112BA3E5243CF70611237B4ABED86FC5C6C218_inline(__this, L_3, NULL);
		return;
	}
}
// System.Void Nethereum.Merkle.Patricia.PatriciaTrie::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PatriciaTrie__ctor_m575A0017560EC7DD2BA0791B189A5A8F986C7D25 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hashRoot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___hashRoot0;
		Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5* L_1 = (Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5*)il2cpp_codegen_object_new(Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Sha3KeccackHashProvider__ctor_mBBD08D9177EC57F999D617D6F9628CDBB368E9DD(L_1, NULL);
		PatriciaTrie__ctor_mB2654D8B631C98BC668B8BF35E9EDD6E71A0D70E(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Nethereum.Merkle.Patricia.PatriciaTrie::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PatriciaTrie__ctor_m47AEE28955A219A1549CB5F00D850402D7E49FF4 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5* L_0 = (Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5*)il2cpp_codegen_object_new(Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Sha3KeccackHashProvider__ctor_mBBD08D9177EC57F999D617D6F9628CDBB368E9DD(L_0, NULL);
		PatriciaTrie__ctor_mAE62D49D7846473D59CEA4159845F01418D59601(__this, L_0, NULL);
		return;
	}
}
// Nethereum.Util.HashProviders.IHashProvider Nethereum.Merkle.Patricia.PatriciaTrie::get_HashProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PatriciaTrie_get_HashProvider_m9E1B29A38F765942A79D4D79112F43A1F69FFC24 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CHashProviderU3Ek__BackingField_0;
		return L_0;
	}
}
// Nethereum.Merkle.Patricia.Node Nethereum.Merkle.Patricia.PatriciaTrie::get_Root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* PatriciaTrie_get_Root_mA472DB2AC8A1ACA84AC6B3ABC7C735D8A92BB111 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, const RuntimeMethod* method) 
{
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_0 = __this->___U3CRootU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.Merkle.Patricia.PatriciaTrie::set_Root(Nethereum.Merkle.Patricia.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PatriciaTrie_set_Root_mF9112BA3E5243CF70611237B4ABED86FC5C6C218 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* ___value0, const RuntimeMethod* method) 
{
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_0 = ___value0;
		__this->___U3CRootU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRootU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Byte[] Nethereum.Merkle.Patricia.PatriciaTrie::Get(System.Byte[],Nethereum.Merkle.Patricia.ITrieStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PatriciaTrie_Get_mBCCB7E69547FFBDC36AECA7A264C4BA36C6BE6F6 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, RuntimeObject* ___storage1, const RuntimeMethod* method) 
{
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_0;
		L_0 = PatriciaTrie_get_Root_mA472DB2AC8A1ACA84AC6B3ABC7C735D8A92BB111_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___key0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = NiblesBytesExtension_ConvertToNibbles_mB2B4D25FB507E1EAA7FE2A95C71F0256C72F310D(L_1, NULL);
		RuntimeObject* L_3 = ___storage1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = PatriciaTrie_Get_m128B74E859CB56DBB6765B8E47E1BCE5EBD991E6(__this, L_0, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Byte[] Nethereum.Merkle.Patricia.PatriciaTrie::Get(Nethereum.Merkle.Patricia.Node,System.Byte[],Nethereum.Merkle.Patricia.ITrieStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PatriciaTrie_Get_m128B74E859CB56DBB6765B8E47E1BCE5EBD991E6 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* ___node0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyAsNibbles1, RuntimeObject* ___storage2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* V_0 = NULL;
	BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* V_1 = NULL;
	ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* V_2 = NULL;
	HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* V_3 = NULL;
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_0 = ___node0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_1 = ___node0;
		if (!((EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666*)IsInstClass((RuntimeObject*)L_1, EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_000d:
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_2 = ___node0;
		V_0 = ((LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC*)IsInstClass((RuntimeObject*)L_2, LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC_il2cpp_TypeInfo_var));
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___keyAsNibbles1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = PatriciaTrie_GetFromLeafNode_mBC6089A5BFF95B5A617406698A94945D045A2BD4(__this, L_4, L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_7 = ___node0;
		V_1 = ((BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2*)IsInstClass((RuntimeObject*)L_7, BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2_il2cpp_TypeInfo_var));
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0034;
		}
	}
	{
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_9 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___keyAsNibbles1;
		RuntimeObject* L_11 = ___storage2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = PatriciaTrie_GetFromBranchNode_m2C476804E01AE4FE2B4D1190FD223E95EA433547(__this, L_9, L_10, L_11, NULL);
		return L_12;
	}

IL_0034:
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_13 = ___node0;
		V_2 = ((ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A*)IsInstClass((RuntimeObject*)L_13, ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A_il2cpp_TypeInfo_var));
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_14 = V_2;
		if (!L_14)
		{
			goto IL_0048;
		}
	}
	{
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_15 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___keyAsNibbles1;
		RuntimeObject* L_17 = ___storage2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = PatriciaTrie_GetFromExtendedNode_mEAFD8DE2F67C52F1117F3B9E150029F76DCAB58E(__this, L_15, L_16, L_17, NULL);
		return L_18;
	}

IL_0048:
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_19 = ___node0;
		V_3 = ((HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC*)IsInstClass((RuntimeObject*)L_19, HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC_il2cpp_TypeInfo_var));
		HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* L_20 = V_3;
		if (!L_20)
		{
			goto IL_005c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___keyAsNibbles1;
		RuntimeObject* L_22 = ___storage2;
		HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* L_23 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = PatriciaTrie_GetFromHashNode_m8EB5A91E2558412D738B5D614BF7C6033D2CBDA7(__this, L_21, L_22, L_23, NULL);
		return L_24;
	}

IL_005c:
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}
}
// System.Byte[] Nethereum.Merkle.Patricia.PatriciaTrie::GetFromHashNode(System.Byte[],Nethereum.Merkle.Patricia.ITrieStorage,Nethereum.Merkle.Patricia.HashNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PatriciaTrie_GetFromHashNode_m8EB5A91E2558412D738B5D614BF7C6033D2CBDA7 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyAsNibbles0, RuntimeObject* ___storage1, HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* ___hashNode2, const RuntimeMethod* method) 
{
	{
		HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* L_0 = ___hashNode2;
		NullCheck(L_0);
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_1;
		L_1 = HashNode_get_InnerNode_m2B9F522AAABDF05F248408E1AAFA34AECF1F3F4E_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* L_2 = ___hashNode2;
		RuntimeObject* L_3 = ___storage1;
		NullCheck(L_2);
		HashNode_DecodeInnerNode_mE265CFE412E537A1AB4CA10C7D958B9136231219(L_2, L_3, (bool)0, NULL);
	}

IL_0010:
	{
		HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* L_4 = ___hashNode2;
		NullCheck(L_4);
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_5;
		L_5 = HashNode_get_InnerNode_m2B9F522AAABDF05F248408E1AAFA34AECF1F3F4E_inline(L_4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___keyAsNibbles0;
		RuntimeObject* L_7 = ___storage1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = PatriciaTrie_Get_m128B74E859CB56DBB6765B8E47E1BCE5EBD991E6(__this, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
// System.Byte[] Nethereum.Merkle.Patricia.PatriciaTrie::GetFromExtendedNode(Nethereum.Merkle.Patricia.ExtendedNode,System.Byte[],Nethereum.Merkle.Patricia.ITrieStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PatriciaTrie_GetFromExtendedNode_mEAFD8DE2F67C52F1117F3B9E150029F76DCAB58E (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* ___currentNode0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyAsNibbles1, RuntimeObject* ___storage2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_0 = ___currentNode0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = ExtendedNode_get_Nibbles_mE69CC371BC9220A5606C93BF13482FE6AAFD9A7D_inline(L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___keyAsNibbles1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = NiblesBytesExtension_FindAllTheSameBytesFromTheStart_mA8AE8C3B05883F1538B93B3938D812C7C50CDC33(L_1, L_2, NULL);
		V_0 = L_3;
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_4 = ___currentNode0;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = ExtendedNode_get_Nibbles_mE69CC371BC9220A5606C93BF13482FE6AAFD9A7D_inline(L_4, NULL);
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_001c:
	{
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_7 = ___currentNode0;
		NullCheck(L_7);
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_8;
		L_8 = ExtendedNode_get_InnerNode_mA2250ADD4D6EAAD1C85691C74FB4C8E604DC3D76_inline(L_7, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___keyAsNibbles1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8((RuntimeObject*)L_9, ((int32_t)(((RuntimeArray*)L_10)->max_length)), Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_11, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		RuntimeObject* L_13 = ___storage2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = PatriciaTrie_Get_m128B74E859CB56DBB6765B8E47E1BCE5EBD991E6(__this, L_8, L_12, L_13, NULL);
		return L_14;
	}
}
// System.Byte[] Nethereum.Merkle.Patricia.PatriciaTrie::GetFromLeafNode(Nethereum.Merkle.Patricia.LeafNode,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PatriciaTrie_GetFromLeafNode_mBC6089A5BFF95B5A617406698A94945D045A2BD4 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* ___currentNode0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyAsNibbles1, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_0 = ___currentNode0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = LeafNode_get_Nibbles_m60B6E95A3DB4EDA4E6B13AB76ACE348DD447D310_inline(L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___keyAsNibbles1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = NiblesBytesExtension_FindAllTheSameBytesFromTheStart_mA8AE8C3B05883F1538B93B3938D812C7C50CDC33(L_1, L_2, NULL);
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_5 = ___currentNode0;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = LeafNode_get_Nibbles_m60B6E95A3DB4EDA4E6B13AB76ACE348DD447D310_inline(L_5, NULL);
		NullCheck(L_6);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___keyAsNibbles1;
		NullCheck(L_8);
		G_B3_0 = ((((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
	}

IL_0025:
	{
		if (!G_B3_0)
		{
			goto IL_002e;
		}
	}
	{
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_9 = ___currentNode0;
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = LeafNode_get_Value_mCA947E6EC6B168D0A5FF5C00993B57F1357BBCEE_inline(L_9, NULL);
		return L_10;
	}

IL_002e:
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}
}
// System.Byte[] Nethereum.Merkle.Patricia.PatriciaTrie::GetFromBranchNode(Nethereum.Merkle.Patricia.BranchNode,System.Byte[],Nethereum.Merkle.Patricia.ITrieStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PatriciaTrie_GetFromBranchNode_m2C476804E01AE4FE2B4D1190FD223E95EA433547 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* ___currentNode0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyAsNibbles1, RuntimeObject* ___storage2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___keyAsNibbles1;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___keyAsNibbles1;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_000e;
		}
	}

IL_0007:
	{
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_2 = ___currentNode0;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = BranchNode_get_Value_m69ED4759CB30ACB44E808F61CE17E53095C507EF_inline(L_2, NULL);
		return L_3;
	}

IL_000e:
	{
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_4 = ___currentNode0;
		NullCheck(L_4);
		NodeU5BU5D_tB05665DCA9FA6C7C1BA79FA5E029D66BA3478607* L_5;
		L_5 = BranchNode_get_Children_m371C78510FF6B91199CA0BDB7D2C4B93DCF4B9B2_inline(L_4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___keyAsNibbles1;
		NullCheck(L_6);
		int32_t L_7 = 0;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_5);
		uint8_t L_9 = L_8;
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_10 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___keyAsNibbles1;
		RuntimeObject* L_12;
		L_12 = Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8((RuntimeObject*)L_11, 1, Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_12, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		RuntimeObject* L_14 = ___storage2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = PatriciaTrie_Get_m128B74E859CB56DBB6765B8E47E1BCE5EBD991E6(__this, L_10, L_13, L_14, NULL);
		return L_15;
	}
}
// Nethereum.Merkle.Patricia.Node Nethereum.Merkle.Patricia.PatriciaTrie::Put(Nethereum.Merkle.Patricia.Node,System.Byte[],System.Byte[],Nethereum.Merkle.Patricia.ITrieStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* PatriciaTrie_Put_mE3F509AECD50E3E8908DABECE000286B9396C490 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* ___node0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyAsNibbles1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value2, RuntimeObject* ___storage3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* V_0 = NULL;
	BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* V_1 = NULL;
	ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* V_2 = NULL;
	HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* V_3 = NULL;
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_0 = ___node0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_1 = ___node0;
		if (!((EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666*)IsInstClass((RuntimeObject*)L_1, EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666_il2cpp_TypeInfo_var)))
		{
			goto IL_0014;
		}
	}

IL_000b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___keyAsNibbles1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___value2;
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_4;
		L_4 = PatriciaTrie_PutOnAnExistingEmptyNode_mD181861163A22CE5D39D0C6AC34EAD4EB2C8809B(__this, L_2, L_3, NULL);
		return L_4;
	}

IL_0014:
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_5 = ___node0;
		V_0 = ((LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC*)IsInstClass((RuntimeObject*)L_5, LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC_il2cpp_TypeInfo_var));
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___keyAsNibbles1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___value2;
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_10;
		L_10 = PatriciaTrie_PutOnAnExistingLeafNode_m07C2FB9C0B9E9863666EE1BC41681C47E9CC97E9(__this, L_7, L_8, L_9, NULL);
		return L_10;
	}

IL_0028:
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_11 = ___node0;
		V_1 = ((BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2*)IsInstClass((RuntimeObject*)L_11, BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2_il2cpp_TypeInfo_var));
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_12 = V_1;
		if (!L_12)
		{
			goto IL_003e;
		}
	}
	{
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___keyAsNibbles1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___value2;
		RuntimeObject* L_16 = ___storage3;
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_17;
		L_17 = PatriciaTrie_PutOnAnExistingBranchNode_mB8438BDC58551F77D6D0C14CE3A1D18A399E0A4E(__this, L_13, L_14, L_15, L_16, NULL);
		return L_17;
	}

IL_003e:
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_18 = ___node0;
		V_2 = ((ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A*)IsInstClass((RuntimeObject*)L_18, ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A_il2cpp_TypeInfo_var));
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_19 = V_2;
		if (!L_19)
		{
			goto IL_0054;
		}
	}
	{
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_20 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___keyAsNibbles1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___value2;
		RuntimeObject* L_23 = ___storage3;
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_24;
		L_24 = PatriciaTrie_PutOnAnExistingExtendedNode_m6B68FB9BB43B5F7E99FC6F2FA580E2E2568A77B4(__this, L_20, L_21, L_22, L_23, NULL);
		return L_24;
	}

IL_0054:
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_25 = ___node0;
		V_3 = ((HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC*)IsInstClass((RuntimeObject*)L_25, HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC_il2cpp_TypeInfo_var));
		HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* L_26 = V_3;
		if (!L_26)
		{
			goto IL_006a;
		}
	}
	{
		HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* L_27 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___keyAsNibbles1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___value2;
		RuntimeObject* L_30 = ___storage3;
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_31;
		L_31 = PatriciaTrie_PutOnAnExistingHashNode_mDC318B983A4A5E6C9890C0ADCE3BD3E212D71026(__this, L_27, L_28, L_29, L_30, NULL);
		return L_31;
	}

IL_006a:
	{
		return (Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F*)NULL;
	}
}
// Nethereum.Merkle.Patricia.Node Nethereum.Merkle.Patricia.PatriciaTrie::PutOnAnExistingHashNode(Nethereum.Merkle.Patricia.HashNode,System.Byte[],System.Byte[],Nethereum.Merkle.Patricia.ITrieStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* PatriciaTrie_PutOnAnExistingHashNode_mDC318B983A4A5E6C9890C0ADCE3BD3E212D71026 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* ___hashNode0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyAsNibbles1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value2, RuntimeObject* ___storage3, const RuntimeMethod* method) 
{
	{
		HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* L_0 = ___hashNode0;
		NullCheck(L_0);
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_1;
		L_1 = HashNode_get_InnerNode_m2B9F522AAABDF05F248408E1AAFA34AECF1F3F4E_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* L_2 = ___hashNode0;
		RuntimeObject* L_3 = ___storage3;
		NullCheck(L_2);
		HashNode_DecodeInnerNode_mE265CFE412E537A1AB4CA10C7D958B9136231219(L_2, L_3, (bool)0, NULL);
	}

IL_0011:
	{
		HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* L_4 = ___hashNode0;
		HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* L_5 = ___hashNode0;
		NullCheck(L_5);
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_6;
		L_6 = HashNode_get_InnerNode_m2B9F522AAABDF05F248408E1AAFA34AECF1F3F4E_inline(L_5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___keyAsNibbles1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___value2;
		RuntimeObject* L_9 = ___storage3;
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_10;
		L_10 = PatriciaTrie_Put_mE3F509AECD50E3E8908DABECE000286B9396C490(__this, L_6, L_7, L_8, L_9, NULL);
		NullCheck(L_4);
		HashNode_set_InnerNode_m0B3F43D1861CFF3AE27DA973E314FD7B54E217DF_inline(L_4, L_10, NULL);
		HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* L_11 = ___hashNode0;
		return L_11;
	}
}
// Nethereum.Merkle.Patricia.Node Nethereum.Merkle.Patricia.PatriciaTrie::PutOnAnExistingExtendedNode(Nethereum.Merkle.Patricia.ExtendedNode,System.Byte[],System.Byte[],Nethereum.Merkle.Patricia.ITrieStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* PatriciaTrie_PutOnAnExistingExtendedNode_m6B68FB9BB43B5F7E99FC6F2FA580E2E2568A77B4 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* ___currentNode0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyAsNibbles1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value2, RuntimeObject* ___storage3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* V_3 = NULL;
	ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* V_4 = NULL;
	uint8_t V_5 = 0x0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* V_7 = NULL;
	{
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_0 = ___currentNode0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = ExtendedNode_get_Nibbles_mE69CC371BC9220A5606C93BF13482FE6AAFD9A7D_inline(L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___keyAsNibbles1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = NiblesBytesExtension_FindAllTheSameBytesFromTheStart_mA8AE8C3B05883F1538B93B3938D812C7C50CDC33(L_1, L_2, NULL);
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_5 = ___currentNode0;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = ExtendedNode_get_Nibbles_mE69CC371BC9220A5606C93BF13482FE6AAFD9A7D_inline(L_5, NULL);
		NullCheck(L_6);
		if (!((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))? 1 : 0))
		{
			goto IL_0102;
		}
	}
	{
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_7 = ___currentNode0;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = ExtendedNode_get_Nibbles_mE69CC371BC9220A5606C93BF13482FE6AAFD9A7D_inline(L_7, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)(((RuntimeArray*)L_9)->max_length));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = L_11;
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_12 = ___currentNode0;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = ExtendedNode_get_Nibbles_mE69CC371BC9220A5606C93BF13482FE6AAFD9A7D_inline(L_12, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8((RuntimeObject*)L_13, ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_14)->max_length)), 1)), Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_15, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		V_2 = L_16;
		RuntimeObject* L_17;
		L_17 = PatriciaTrie_get_HashProvider_m9E1B29A38F765942A79D4D79112F43A1F69FFC24_inline(__this, NULL);
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_18 = (BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2*)il2cpp_codegen_object_new(BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		BranchNode__ctor_m1A9C27073F3EC72B6F631A80052063EDD76E8203(L_18, L_17, NULL);
		V_3 = L_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_2;
		NullCheck(L_19);
		if (!(((RuntimeArray*)L_19)->max_length))
		{
			goto IL_0077;
		}
	}
	{
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_20 = (ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A*)il2cpp_codegen_object_new(ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		ExtendedNode__ctor_mAF9D68DF08EEFCCB507019267DF2534440E63DD6(L_20, NULL);
		V_4 = L_20;
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_21 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_2;
		NullCheck(L_21);
		ExtendedNode_set_Nibbles_m46259B2045B4CE512A76C238425720DE354BC235_inline(L_21, L_22, NULL);
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_23 = V_4;
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_24 = ___currentNode0;
		NullCheck(L_24);
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_25;
		L_25 = ExtendedNode_get_InnerNode_mA2250ADD4D6EAAD1C85691C74FB4C8E604DC3D76_inline(L_24, NULL);
		NullCheck(L_23);
		ExtendedNode_set_InnerNode_m6762B1A005B07D339C8B136187E581F9247F0E1D_inline(L_23, L_25, NULL);
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_26 = V_3;
		uint8_t L_27 = V_1;
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_28 = V_4;
		NullCheck(L_26);
		BranchNode_SetChild_mC50C60FC392506226FC60E0C75A1D7672173C5A7(L_26, L_27, L_28, NULL);
		goto IL_0084;
	}

IL_0077:
	{
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_29 = V_3;
		uint8_t L_30 = V_1;
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_31 = ___currentNode0;
		NullCheck(L_31);
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_32;
		L_32 = ExtendedNode_get_InnerNode_mA2250ADD4D6EAAD1C85691C74FB4C8E604DC3D76_inline(L_31, NULL);
		NullCheck(L_29);
		BranchNode_SetChild_mC50C60FC392506226FC60E0C75A1D7672173C5A7(L_29, L_30, L_32, NULL);
	}

IL_0084:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_0;
		NullCheck(L_33);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___keyAsNibbles1;
		NullCheck(L_34);
		if (!((((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))))? 1 : 0))
		{
			goto IL_00d1;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ___keyAsNibbles1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_0;
		NullCheck(L_36);
		NullCheck(L_35);
		int32_t L_37 = ((int32_t)(((RuntimeArray*)L_36)->max_length));
		uint8_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_5 = L_38;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ___keyAsNibbles1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_0;
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8((RuntimeObject*)L_39, ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_40)->max_length)), 1)), Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42;
		L_42 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_41, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		V_6 = L_42;
		RuntimeObject* L_43;
		L_43 = PatriciaTrie_get_HashProvider_m9E1B29A38F765942A79D4D79112F43A1F69FFC24_inline(__this, NULL);
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_44 = (LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC*)il2cpp_codegen_object_new(LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		LeafNode__ctor_m6919E28455E2BDAC2046D8CA99AB30E5EA4316BD(L_44, L_43, NULL);
		V_7 = L_44;
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_45 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ___value2;
		NullCheck(L_45);
		LeafNode_set_Value_mF368CDC59A03297378BEA1C1BE662E3B5704E2C3_inline(L_45, L_46, NULL);
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_47 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_6;
		NullCheck(L_47);
		LeafNode_set_Nibbles_m9C418C15A793D722C75E45165C1124062B792402_inline(L_47, L_48, NULL);
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_49 = V_3;
		uint8_t L_50 = V_5;
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_51 = V_7;
		NullCheck(L_49);
		BranchNode_SetChild_mC50C60FC392506226FC60E0C75A1D7672173C5A7(L_49, L_50, L_51, NULL);
		goto IL_00e2;
	}

IL_00d1:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_0;
		NullCheck(L_52);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = ___keyAsNibbles1;
		NullCheck(L_53);
		if (!((((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length))))? 1 : 0))
		{
			goto IL_00e2;
		}
	}
	{
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_54 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = ___value2;
		NullCheck(L_54);
		BranchNode_set_Value_mAA551F3490DCD7D176B8901B8573E282D9287B84_inline(L_54, L_55, NULL);
	}

IL_00e2:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_0;
		NullCheck(L_56);
		if ((((RuntimeArray*)L_56)->max_length))
		{
			goto IL_00e8;
		}
	}
	{
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_57 = V_3;
		return L_57;
	}

IL_00e8:
	{
		RuntimeObject* L_58;
		L_58 = PatriciaTrie_get_HashProvider_m9E1B29A38F765942A79D4D79112F43A1F69FFC24_inline(__this, NULL);
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_59 = (ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A*)il2cpp_codegen_object_new(ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		ExtendedNode__ctor_m67C30C616FFDFC545F049F64BD1D2BAB62916CEE(L_59, L_58, NULL);
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_60 = L_59;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = V_0;
		NullCheck(L_60);
		ExtendedNode_set_Nibbles_m46259B2045B4CE512A76C238425720DE354BC235_inline(L_60, L_61, NULL);
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_62 = L_60;
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_63 = V_3;
		NullCheck(L_62);
		ExtendedNode_set_InnerNode_m6762B1A005B07D339C8B136187E581F9247F0E1D_inline(L_62, L_63, NULL);
		return L_62;
	}

IL_0102:
	{
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_64 = ___currentNode0;
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_65 = ___currentNode0;
		NullCheck(L_65);
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_66;
		L_66 = ExtendedNode_get_InnerNode_mA2250ADD4D6EAAD1C85691C74FB4C8E604DC3D76_inline(L_65, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = ___keyAsNibbles1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = V_0;
		NullCheck(L_68);
		RuntimeObject* L_69;
		L_69 = Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8((RuntimeObject*)L_67, ((int32_t)(((RuntimeArray*)L_68)->max_length)), Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70;
		L_70 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_69, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = ___value2;
		RuntimeObject* L_72 = ___storage3;
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_73;
		L_73 = PatriciaTrie_Put_mE3F509AECD50E3E8908DABECE000286B9396C490(__this, L_66, L_70, L_71, L_72, NULL);
		NullCheck(L_64);
		ExtendedNode_set_InnerNode_m6762B1A005B07D339C8B136187E581F9247F0E1D_inline(L_64, L_73, NULL);
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_74 = ___currentNode0;
		return L_74;
	}
}
// Nethereum.Merkle.Patricia.Node Nethereum.Merkle.Patricia.PatriciaTrie::PutOnAnExistingBranchNode(Nethereum.Merkle.Patricia.BranchNode,System.Byte[],System.Byte[],Nethereum.Merkle.Patricia.ITrieStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* PatriciaTrie_PutOnAnExistingBranchNode_mB8438BDC58551F77D6D0C14CE3A1D18A399E0A4E (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* ___currentNode0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyAsNibbles1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value2, RuntimeObject* ___storage3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___keyAsNibbles1;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___keyAsNibbles1;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0010;
		}
	}

IL_0007:
	{
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_2 = ___currentNode0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___value2;
		NullCheck(L_2);
		BranchNode_set_Value_mAA551F3490DCD7D176B8901B8573E282D9287B84_inline(L_2, L_3, NULL);
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_4 = ___currentNode0;
		return L_4;
	}

IL_0010:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___keyAsNibbles1;
		NullCheck(L_5);
		int32_t L_6 = 0;
		uint8_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_8 = ___currentNode0;
		NullCheck(L_8);
		NodeU5BU5D_tB05665DCA9FA6C7C1BA79FA5E029D66BA3478607* L_9;
		L_9 = BranchNode_get_Children_m371C78510FF6B91199CA0BDB7D2C4B93DCF4B9B2_inline(L_8, NULL);
		uint8_t L_10 = V_0;
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_11 = ___currentNode0;
		NullCheck(L_11);
		NodeU5BU5D_tB05665DCA9FA6C7C1BA79FA5E029D66BA3478607* L_12;
		L_12 = BranchNode_get_Children_m371C78510FF6B91199CA0BDB7D2C4B93DCF4B9B2_inline(L_11, NULL);
		uint8_t L_13 = V_0;
		NullCheck(L_12);
		uint8_t L_14 = L_13;
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___keyAsNibbles1;
		RuntimeObject* L_17;
		L_17 = Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8((RuntimeObject*)L_16, 1, Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_17, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___value2;
		RuntimeObject* L_20 = ___storage3;
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_21;
		L_21 = PatriciaTrie_Put_mE3F509AECD50E3E8908DABECE000286B9396C490(__this, L_15, L_18, L_19, L_20, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_21);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F*)L_21);
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_22 = ___currentNode0;
		return L_22;
	}
}
// Nethereum.Merkle.Patricia.Node Nethereum.Merkle.Patricia.PatriciaTrie::PutOnAnExistingLeafNode(Nethereum.Merkle.Patricia.LeafNode,System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* PatriciaTrie_PutOnAnExistingLeafNode_m07C2FB9C0B9E9863666EE1BC41681C47E9CC97E9 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* ___currentNode0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyAsNibbles1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	bool V_1 = false;
	BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* V_5 = NULL;
	LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* V_6 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B14_0 = 0;
	{
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_0 = ___currentNode0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = LeafNode_get_Nibbles_m60B6E95A3DB4EDA4E6B13AB76ACE348DD447D310_inline(L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___keyAsNibbles1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = NiblesBytesExtension_FindAllTheSameBytesFromTheStart_mA8AE8C3B05883F1538B93B3938D812C7C50CDC33(L_1, L_2, NULL);
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_5 = ___currentNode0;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = LeafNode_get_Nibbles_m60B6E95A3DB4EDA4E6B13AB76ACE348DD447D310_inline(L_5, NULL);
		NullCheck(L_6);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___keyAsNibbles1;
		NullCheck(L_8);
		G_B3_0 = ((((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
	}

IL_0025:
	{
		V_1 = (bool)G_B3_0;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0032;
		}
	}
	{
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_10 = ___currentNode0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___value2;
		NullCheck(L_10);
		LeafNode_set_Value_mF368CDC59A03297378BEA1C1BE662E3B5704E2C3_inline(L_10, L_11, NULL);
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_12 = ___currentNode0;
		return L_12;
	}

IL_0032:
	{
		RuntimeObject* L_13;
		L_13 = PatriciaTrie_get_HashProvider_m9E1B29A38F765942A79D4D79112F43A1F69FFC24_inline(__this, NULL);
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_14 = (BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2*)il2cpp_codegen_object_new(BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		BranchNode__ctor_m1A9C27073F3EC72B6F631A80052063EDD76E8203(L_14, L_13, NULL);
		V_2 = L_14;
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_15 = ___currentNode0;
		NullCheck(L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = LeafNode_get_Nibbles_m60B6E95A3DB4EDA4E6B13AB76ACE348DD447D310_inline(L_15, NULL);
		NullCheck(L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_0;
		NullCheck(L_17);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))) == ((uint32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_0051;
		}
	}
	{
		bool L_18 = V_1;
		G_B8_0 = ((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		goto IL_0052;
	}

IL_0051:
	{
		G_B8_0 = 0;
	}

IL_0052:
	{
		V_3 = (bool)G_B8_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___keyAsNibbles1;
		NullCheck(L_19);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_0;
		NullCheck(L_20);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))) == ((uint32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_0061;
		}
	}
	{
		bool L_21 = V_1;
		G_B11_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_0062;
	}

IL_0061:
	{
		G_B11_0 = 0;
	}

IL_0062:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___keyAsNibbles1;
		NullCheck(L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_0;
		NullCheck(L_23);
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_24 = ___currentNode0;
		NullCheck(L_24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = LeafNode_get_Nibbles_m60B6E95A3DB4EDA4E6B13AB76ACE348DD447D310_inline(L_24, NULL);
		NullCheck(L_25);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_0;
		NullCheck(L_26);
		V_4 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))) > ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))))? 1 : 0);
		bool L_27 = V_3;
		G_B12_0 = ((((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))) > ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))? 1 : 0);
		G_B12_1 = G_B11_0;
		if (!L_27)
		{
			G_B13_0 = ((((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))) > ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))? 1 : 0);
			G_B13_1 = G_B11_0;
			goto IL_0088;
		}
	}
	{
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_28 = V_2;
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_29 = ___currentNode0;
		NullCheck(L_29);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30;
		L_30 = LeafNode_get_Value_mCA947E6EC6B168D0A5FF5C00993B57F1357BBCEE_inline(L_29, NULL);
		NullCheck(L_28);
		BranchNode_set_Value_mAA551F3490DCD7D176B8901B8573E282D9287B84_inline(L_28, L_30, NULL);
		G_B13_0 = G_B12_0;
		G_B13_1 = G_B12_1;
	}

IL_0088:
	{
		G_B14_0 = G_B13_1;
		if (!G_B13_0)
		{
			G_B15_0 = G_B13_1;
			goto IL_00c3;
		}
	}
	{
		RuntimeObject* L_31;
		L_31 = PatriciaTrie_get_HashProvider_m9E1B29A38F765942A79D4D79112F43A1F69FFC24_inline(__this, NULL);
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_32 = (LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC*)il2cpp_codegen_object_new(LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		LeafNode__ctor_m6919E28455E2BDAC2046D8CA99AB30E5EA4316BD(L_32, L_31, NULL);
		V_5 = L_32;
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_33 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___value2;
		NullCheck(L_33);
		LeafNode_set_Value_mF368CDC59A03297378BEA1C1BE662E3B5704E2C3_inline(L_33, L_34, NULL);
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_35 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___keyAsNibbles1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_0;
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8((RuntimeObject*)L_36, ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_37)->max_length)), 1)), Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39;
		L_39 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_38, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		NullCheck(L_35);
		LeafNode_set_Nibbles_m9C418C15A793D722C75E45165C1124062B792402_inline(L_35, L_39, NULL);
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_40 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ___keyAsNibbles1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_0;
		NullCheck(L_42);
		NullCheck(L_41);
		int32_t L_43 = ((int32_t)(((RuntimeArray*)L_42)->max_length));
		uint8_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_45 = V_5;
		NullCheck(L_40);
		BranchNode_SetChild_mC50C60FC392506226FC60E0C75A1D7672173C5A7(L_40, L_44, L_45, NULL);
		G_B15_0 = G_B14_0;
	}

IL_00c3:
	{
		if (!G_B15_0)
		{
			goto IL_00cc;
		}
	}
	{
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_46 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = ___value2;
		NullCheck(L_46);
		BranchNode_set_Value_mAA551F3490DCD7D176B8901B8573E282D9287B84_inline(L_46, L_47, NULL);
	}

IL_00cc:
	{
		bool L_48 = V_4;
		if (!L_48)
		{
			goto IL_0118;
		}
	}
	{
		RuntimeObject* L_49;
		L_49 = PatriciaTrie_get_HashProvider_m9E1B29A38F765942A79D4D79112F43A1F69FFC24_inline(__this, NULL);
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_50 = (LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC*)il2cpp_codegen_object_new(LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		LeafNode__ctor_m6919E28455E2BDAC2046D8CA99AB30E5EA4316BD(L_50, L_49, NULL);
		V_6 = L_50;
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_51 = V_6;
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_52 = ___currentNode0;
		NullCheck(L_52);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53;
		L_53 = LeafNode_get_Value_mCA947E6EC6B168D0A5FF5C00993B57F1357BBCEE_inline(L_52, NULL);
		NullCheck(L_51);
		LeafNode_set_Value_mF368CDC59A03297378BEA1C1BE662E3B5704E2C3_inline(L_51, L_53, NULL);
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_54 = V_6;
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_55 = ___currentNode0;
		NullCheck(L_55);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56;
		L_56 = LeafNode_get_Nibbles_m60B6E95A3DB4EDA4E6B13AB76ACE348DD447D310_inline(L_55, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = V_0;
		NullCheck(L_57);
		RuntimeObject* L_58;
		L_58 = Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8((RuntimeObject*)L_56, ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_57)->max_length)), 1)), Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59;
		L_59 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_58, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		NullCheck(L_54);
		LeafNode_set_Nibbles_m9C418C15A793D722C75E45165C1124062B792402_inline(L_54, L_59, NULL);
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_60 = V_2;
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_61 = ___currentNode0;
		NullCheck(L_61);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62;
		L_62 = LeafNode_get_Nibbles_m60B6E95A3DB4EDA4E6B13AB76ACE348DD447D310_inline(L_61, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = V_0;
		NullCheck(L_63);
		NullCheck(L_62);
		int32_t L_64 = ((int32_t)(((RuntimeArray*)L_63)->max_length));
		uint8_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_66 = V_6;
		NullCheck(L_60);
		BranchNode_SetChild_mC50C60FC392506226FC60E0C75A1D7672173C5A7(L_60, L_65, L_66, NULL);
	}

IL_0118:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = V_0;
		NullCheck(L_67);
		if (!(((RuntimeArray*)L_67)->max_length))
		{
			goto IL_0136;
		}
	}
	{
		RuntimeObject* L_68;
		L_68 = PatriciaTrie_get_HashProvider_m9E1B29A38F765942A79D4D79112F43A1F69FFC24_inline(__this, NULL);
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_69 = (ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A*)il2cpp_codegen_object_new(ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A_il2cpp_TypeInfo_var);
		NullCheck(L_69);
		ExtendedNode__ctor_m67C30C616FFDFC545F049F64BD1D2BAB62916CEE(L_69, L_68, NULL);
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_70 = L_69;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = V_0;
		NullCheck(L_70);
		ExtendedNode_set_Nibbles_m46259B2045B4CE512A76C238425720DE354BC235_inline(L_70, L_71, NULL);
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_72 = L_70;
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_73 = V_2;
		NullCheck(L_72);
		ExtendedNode_set_InnerNode_m6762B1A005B07D339C8B136187E581F9247F0E1D_inline(L_72, L_73, NULL);
		return L_72;
	}

IL_0136:
	{
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_74 = V_2;
		return L_74;
	}
}
// Nethereum.Merkle.Patricia.LeafNode Nethereum.Merkle.Patricia.PatriciaTrie::PutOnAnExistingEmptyNode(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* PatriciaTrie_PutOnAnExistingEmptyNode_mD181861163A22CE5D39D0C6AC34EAD4EB2C8809B (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyAsNibbles0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = PatriciaTrie_get_HashProvider_m9E1B29A38F765942A79D4D79112F43A1F69FFC24_inline(__this, NULL);
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_1 = (LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC*)il2cpp_codegen_object_new(LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		LeafNode__ctor_m6919E28455E2BDAC2046D8CA99AB30E5EA4316BD(L_1, L_0, NULL);
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_2 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___keyAsNibbles0;
		NullCheck(L_2);
		LeafNode_set_Nibbles_m9C418C15A793D722C75E45165C1124062B792402_inline(L_2, L_3, NULL);
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_4 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___value1;
		NullCheck(L_4);
		LeafNode_set_Value_mF368CDC59A03297378BEA1C1BE662E3B5704E2C3_inline(L_4, L_5, NULL);
		return L_4;
	}
}
// System.Void Nethereum.Merkle.Patricia.PatriciaTrie::Put(System.Byte[],System.Byte[],Nethereum.Merkle.Patricia.ITrieStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PatriciaTrie_Put_m4736CDBA7672D37BC7B563EFD86F5179FBF52010 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, RuntimeObject* ___storage2, const RuntimeMethod* method) 
{
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_0;
		L_0 = PatriciaTrie_get_Root_mA472DB2AC8A1ACA84AC6B3ABC7C735D8A92BB111_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___key0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = NiblesBytesExtension_ConvertToNibbles_mB2B4D25FB507E1EAA7FE2A95C71F0256C72F310D(L_1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___value1;
		RuntimeObject* L_4 = ___storage2;
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_5;
		L_5 = PatriciaTrie_Put_mE3F509AECD50E3E8908DABECE000286B9396C490(__this, L_0, L_2, L_3, L_4, NULL);
		PatriciaTrie_set_Root_mF9112BA3E5243CF70611237B4ABED86FC5C6C218_inline(__this, L_5, NULL);
		return;
	}
}
// Nethereum.Merkle.Patricia.InMemoryTrieStorage Nethereum.Merkle.Patricia.PatriciaTrie::GenerateProof(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* PatriciaTrie_GenerateProof_m35872705E597FA689838325AB80CA9C04B7115C6 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_0;
		L_0 = PatriciaTrie_get_Root_mA472DB2AC8A1ACA84AC6B3ABC7C735D8A92BB111_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___key0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = NiblesBytesExtension_ConvertToNibbles_mB2B4D25FB507E1EAA7FE2A95C71F0256C72F310D(L_1, NULL);
		InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* L_3 = (InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC*)il2cpp_codegen_object_new(InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		InMemoryTrieStorage__ctor_mB67FB3F526E927A946ED880E5C18060A28E9933F(L_3, NULL);
		InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* L_4;
		L_4 = PatriciaTrie_GenerateProof_m5D6E6D599334272248B93E2719254D0E3DED9EF9(__this, L_0, L_2, L_3, NULL);
		return L_4;
	}
}
// Nethereum.Merkle.Patricia.InMemoryTrieStorage Nethereum.Merkle.Patricia.PatriciaTrie::GenerateProof(Nethereum.Merkle.Patricia.Node,System.Byte[],Nethereum.Merkle.Patricia.InMemoryTrieStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* PatriciaTrie_GenerateProof_m5D6E6D599334272248B93E2719254D0E3DED9EF9 (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* ___currentNode0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyAsNibbles1, InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* ___storage2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* V_0 = NULL;
	BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* V_1 = NULL;
	ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	{
		InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* L_0 = ___storage2;
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_1 = ___currentNode0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(5 /* System.Byte[] Nethereum.Merkle.Patricia.Node::GetHash() */, L_1);
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_3 = ___currentNode0;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Byte[] Nethereum.Merkle.Patricia.Node::GetRLPEncodedData() */, L_3);
		NullCheck(L_0);
		InMemoryTrieStorage_Put_m0E7E1874BBF788B89EAA7EC7CC34F87E3C9C97B5(L_0, L_2, L_4, NULL);
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_5 = ___currentNode0;
		if (((EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666*)IsInstClass((RuntimeObject*)L_5, EmptyNode_t1338A51F4318B50307A7655E233E11943DDCF666_il2cpp_TypeInfo_var)))
		{
			goto IL_001d;
		}
	}
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_6 = ___currentNode0;
		if (L_6)
		{
			goto IL_001f;
		}
	}

IL_001d:
	{
		return (InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC*)NULL;
	}

IL_001f:
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_7 = ___currentNode0;
		V_0 = ((LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC*)IsInstClass((RuntimeObject*)L_7, LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC_il2cpp_TypeInfo_var));
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_8 = V_0;
		if (!L_8)
		{
			goto IL_004f;
		}
	}
	{
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_9 = V_0;
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = LeafNode_get_Nibbles_m60B6E95A3DB4EDA4E6B13AB76ACE348DD447D310_inline(L_9, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___keyAsNibbles1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = NiblesBytesExtension_FindAllTheSameBytesFromTheStart_mA8AE8C3B05883F1538B93B3938D812C7C50CDC33(L_10, L_11, NULL);
		V_3 = L_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_3;
		NullCheck(L_13);
		LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* L_14 = V_0;
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = LeafNode_get_Nibbles_m60B6E95A3DB4EDA4E6B13AB76ACE348DD447D310_inline(L_14, NULL);
		NullCheck(L_15);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))) == ((uint32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_3;
		NullCheck(L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___keyAsNibbles1;
		NullCheck(L_17);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_004d;
		}
	}

IL_004b:
	{
		return (InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC*)NULL;
	}

IL_004d:
	{
		InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* L_18 = ___storage2;
		return L_18;
	}

IL_004f:
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_19 = ___currentNode0;
		V_1 = ((BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2*)IsInstClass((RuntimeObject*)L_19, BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2_il2cpp_TypeInfo_var));
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_20 = V_1;
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___keyAsNibbles1;
		NullCheck(L_21);
		if ((((RuntimeArray*)L_21)->max_length))
		{
			goto IL_0069;
		}
	}
	{
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_22 = V_1;
		NullCheck(L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = BranchNode_get_Value_m69ED4759CB30ACB44E808F61CE17E53095C507EF_inline(L_22, NULL);
		if (L_23)
		{
			goto IL_0067;
		}
	}
	{
		return (InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC*)NULL;
	}

IL_0067:
	{
		InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* L_24 = ___storage2;
		return L_24;
	}

IL_0069:
	{
		BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* L_25 = V_1;
		NullCheck(L_25);
		NodeU5BU5D_tB05665DCA9FA6C7C1BA79FA5E029D66BA3478607* L_26;
		L_26 = BranchNode_get_Children_m371C78510FF6B91199CA0BDB7D2C4B93DCF4B9B2_inline(L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___keyAsNibbles1;
		NullCheck(L_27);
		int32_t L_28 = 0;
		uint8_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_26);
		uint8_t L_30 = L_29;
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_31 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___keyAsNibbles1;
		RuntimeObject* L_33;
		L_33 = Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8((RuntimeObject*)L_32, 1, Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34;
		L_34 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_33, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* L_35 = ___storage2;
		InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* L_36;
		L_36 = PatriciaTrie_GenerateProof_m5D6E6D599334272248B93E2719254D0E3DED9EF9(__this, L_31, L_34, L_35, NULL);
		return L_36;
	}

IL_0087:
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_37 = ___currentNode0;
		V_2 = ((ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A*)IsInstClass((RuntimeObject*)L_37, ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A_il2cpp_TypeInfo_var));
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_38 = V_2;
		if (!L_38)
		{
			goto IL_00cc;
		}
	}
	{
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_39 = V_2;
		NullCheck(L_39);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40;
		L_40 = ExtendedNode_get_Nibbles_mE69CC371BC9220A5606C93BF13482FE6AAFD9A7D_inline(L_39, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ___keyAsNibbles1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42;
		L_42 = NiblesBytesExtension_FindAllTheSameBytesFromTheStart_mA8AE8C3B05883F1538B93B3938D812C7C50CDC33(L_40, L_41, NULL);
		V_4 = L_42;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_4;
		NullCheck(L_43);
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_44 = V_2;
		NullCheck(L_44);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45;
		L_45 = ExtendedNode_get_Nibbles_mE69CC371BC9220A5606C93BF13482FE6AAFD9A7D_inline(L_44, NULL);
		NullCheck(L_45);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length))) >= ((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length)))))
		{
			goto IL_00af;
		}
	}
	{
		return (InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC*)NULL;
	}

IL_00af:
	{
		ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* L_46 = V_2;
		NullCheck(L_46);
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_47;
		L_47 = ExtendedNode_get_InnerNode_mA2250ADD4D6EAAD1C85691C74FB4C8E604DC3D76_inline(L_46, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = ___keyAsNibbles1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_4;
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8((RuntimeObject*)L_48, ((int32_t)(((RuntimeArray*)L_49)->max_length)), Enumerable_Skip_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86A20EE69036802B70ADE637FE24A9E189328FF8_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51;
		L_51 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_50, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* L_52 = ___storage2;
		InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* L_53;
		L_53 = PatriciaTrie_GenerateProof_m5D6E6D599334272248B93E2719254D0E3DED9EF9(__this, L_47, L_51, L_52, NULL);
		return L_53;
	}

IL_00cc:
	{
		InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* L_54 = ___storage2;
		return L_54;
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
// System.Boolean Nethereum.Merkle.Patricia.StorageProofVerification::ValidateValueFromStorageProof(System.Byte[],System.Byte[],System.Collections.Generic.IEnumerable`1<System.Byte[]>,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StorageProofVerification_ValidateValueFromStorageProof_mFADED10317CA79BD00A4522EAB595171DB8737DE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, RuntimeObject* ___proofs2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___stateRoot3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mC523A6E6730550614CCB6EF067D6F034D77EE297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t21E2C2093877744709873DDCB2D3C8297821E513_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t1E268397CD739ED7EB63601E159FAA7D40A6F44A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5* V_0 = NULL;
	PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* V_1 = NULL;
	InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	{
		Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5* L_0 = (Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5*)il2cpp_codegen_object_new(Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Sha3KeccackHashProvider__ctor_mBBD08D9177EC57F999D617D6F9628CDBB368E9DD(L_0, NULL);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___stateRoot3;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5* L_2 = V_0;
		RuntimeObject* L_3 = ___proofs2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = Enumerable_First_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mC523A6E6730550614CCB6EF067D6F034D77EE297(L_3, Enumerable_First_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mC523A6E6730550614CCB6EF067D6F034D77EE297_RuntimeMethod_var);
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Sha3KeccackHashProvider_ComputeHash_m358C5EE615F4FC68C40C040A2E0A0E9A59D952CD(L_2, L_4, NULL);
		___stateRoot3 = L_5;
	}

IL_0017:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___stateRoot3;
		PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* L_7 = (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00*)il2cpp_codegen_object_new(PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		PatriciaTrie__ctor_m575A0017560EC7DD2BA0791B189A5A8F986C7D25(L_7, L_6, NULL);
		V_1 = L_7;
		InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* L_8 = (InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC*)il2cpp_codegen_object_new(InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		InMemoryTrieStorage__ctor_mB67FB3F526E927A946ED880E5C18060A28E9933F(L_8, NULL);
		V_2 = L_8;
		RuntimeObject* L_9 = ___proofs2;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Byte[]>::GetEnumerator() */, IEnumerable_1_t21E2C2093877744709873DDCB2D3C8297821E513_il2cpp_TypeInfo_var, L_9);
		V_6 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_11 = V_6;
					if (!L_11)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_12 = V_6;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0047_1;
			}

IL_002e_1:
			{
				RuntimeObject* L_13 = V_6;
				NullCheck(L_13);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
				L_14 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Byte[]>::get_Current() */, IEnumerator_1_t1E268397CD739ED7EB63601E159FAA7D40A6F44A_il2cpp_TypeInfo_var, L_13);
				V_7 = L_14;
				InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* L_15 = V_2;
				Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5* L_16 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_7;
				NullCheck(L_16);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
				L_18 = Sha3KeccackHashProvider_ComputeHash_m358C5EE615F4FC68C40C040A2E0A0E9A59D952CD(L_16, L_17, NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_7;
				NullCheck(L_15);
				InMemoryTrieStorage_Put_m0E7E1874BBF788B89EAA7EC7CC34F87E3C9C97B5(L_15, L_18, L_19, NULL);
			}

IL_0047_1:
			{
				RuntimeObject* L_20 = V_6;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_002e_1;
				}
			}
			{
				goto IL_005e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___key0;
		Sha3KeccackHashProvider_tD39105D3D78D3DAA3CA059E4E51EB7E779148AC5* L_23 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = AccountStorage_EncodeKeyForStorage_mE3C073B63E9A4C37165D4DED4AA4AD4308B5FFCA(L_22, L_23, NULL);
		V_3 = L_24;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___value1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
		L_26 = AccountStorage_EncodeValueForStorage_m7BB76C1FD6B72C2577978174AACDCAFE723E55DA(L_25, NULL);
		V_4 = L_26;
		PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* L_27 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_3;
		InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* L_29 = V_2;
		NullCheck(L_27);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30;
		L_30 = PatriciaTrie_Get_mBCCB7E69547FFBDC36AECA7A264C4BA36C6BE6F6(L_27, L_28, L_29, NULL);
		V_5 = L_30;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_5;
		if (L_31)
		{
			goto IL_009b;
		}
	}
	{
		PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* L_32 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_4;
		InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* L_35 = V_2;
		NullCheck(L_32);
		PatriciaTrie_Put_m4736CDBA7672D37BC7B563EFD86F5179FBF52010(L_32, L_33, L_34, L_35, NULL);
		PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* L_36 = V_1;
		NullCheck(L_36);
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_37;
		L_37 = PatriciaTrie_get_Root_mA472DB2AC8A1ACA84AC6B3ABC7C735D8A92BB111_inline(L_36, NULL);
		NullCheck(L_37);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38;
		L_38 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(5 /* System.Byte[] Nethereum.Merkle.Patricia.Node::GetHash() */, L_37);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ___stateRoot3;
		bool L_40;
		L_40 = NiblesBytesExtension_AreTheSame_m6B201B050AB7376DD170E81C6CA445EDFF98D49F(L_38, L_39, NULL);
		if (!L_40)
		{
			goto IL_009b;
		}
	}
	{
		return (bool)1;
	}

IL_009b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_4;
		bool L_43;
		L_43 = NiblesBytesExtension_AreTheSame_m6B201B050AB7376DD170E81C6CA445EDFF98D49F(L_41, L_42, NULL);
		if (!L_43)
		{
			goto IL_00bb;
		}
	}
	{
		PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* L_44 = V_1;
		NullCheck(L_44);
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_45;
		L_45 = PatriciaTrie_get_Root_mA472DB2AC8A1ACA84AC6B3ABC7C735D8A92BB111_inline(L_44, NULL);
		NullCheck(L_45);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46;
		L_46 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(5 /* System.Byte[] Nethereum.Merkle.Patricia.Node::GetHash() */, L_45);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = ___stateRoot3;
		bool L_48;
		L_48 = NiblesBytesExtension_AreTheSame_m6B201B050AB7376DD170E81C6CA445EDFF98D49F(L_46, L_47, NULL);
		if (!L_48)
		{
			goto IL_00bb;
		}
	}
	{
		return (bool)1;
	}

IL_00bb:
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
// System.Boolean Nethereum.Merkle.Patricia.TransactionProofVerification::ValidateTransactions(System.String,System.Collections.Generic.List`1<Nethereum.Model.IndexedSignedTransaction>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransactionProofVerification_ValidateTransactions_mE9842D40A0CCFC2F8BB8ECF66F2EC50D516706EF (String_t* ___transactionsRoot0, List_1_t1F5B5FC3791046F89BD12C22C62A6D309982A09C* ___transactions1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0E99C6CFB0643FFD90F5D73B8ED415E42B21D919_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m09B67058C12BE89CAF1F03C1C49544085D8CE2FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFF0569557F506312F32746E8129C602476373874_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignedTransaction_t295449C3C8E5BAE1484CD45D4FC5C770D95534C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE32CF73DD0005916BADC472ECF7506D1E968963E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* V_0 = NULL;
	Enumerator_t7EE9A54B083C59E8C0A7DB9E2C05864EE8B49025 V_1;
	memset((&V_1), 0, sizeof(V_1));
	IndexedSignedTransaction_t1C7BAC78F6C1377A43EDDB85FAF38F2F5253123F* V_2 = NULL;
	{
		PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* L_0 = (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00*)il2cpp_codegen_object_new(PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PatriciaTrie__ctor_m47AEE28955A219A1549CB5F00D850402D7E49FF4(L_0, NULL);
		V_0 = L_0;
		List_1_t1F5B5FC3791046F89BD12C22C62A6D309982A09C* L_1 = ___transactions1;
		NullCheck(L_1);
		Enumerator_t7EE9A54B083C59E8C0A7DB9E2C05864EE8B49025 L_2;
		L_2 = List_1_GetEnumerator_mE32CF73DD0005916BADC472ECF7506D1E968963E(L_1, List_1_GetEnumerator_mE32CF73DD0005916BADC472ECF7506D1E968963E_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0E99C6CFB0643FFD90F5D73B8ED415E42B21D919((&V_1), Enumerator_Dispose_m0E99C6CFB0643FFD90F5D73B8ED415E42B21D919_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0039_1;
			}

IL_000f_1:
			{
				IndexedSignedTransaction_t1C7BAC78F6C1377A43EDDB85FAF38F2F5253123F* L_3;
				L_3 = Enumerator_get_Current_mFF0569557F506312F32746E8129C602476373874_inline((&V_1), Enumerator_get_Current_mFF0569557F506312F32746E8129C602476373874_RuntimeMethod_var);
				V_2 = L_3;
				PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* L_4 = V_0;
				IndexedSignedTransaction_t1C7BAC78F6C1377A43EDDB85FAF38F2F5253123F* L_5 = V_2;
				NullCheck(L_5);
				BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6;
				L_6 = IndexedSignedTransaction_get_Index_mC949CF8D45D4E522341B4E56B4143AD58F8E61DF_inline(L_5, NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
				L_7 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_6, NULL);
				il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
				L_8 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_7, NULL);
				IndexedSignedTransaction_t1C7BAC78F6C1377A43EDDB85FAF38F2F5253123F* L_9 = V_2;
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = IndexedSignedTransaction_get_SignedTransaction_mC9C34468883D8BEA52BB92EADFA046A52905D395_inline(L_9, NULL);
				NullCheck(L_10);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
				L_11 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Byte[] Nethereum.Model.ISignedTransaction::GetRLPEncoded() */, ISignedTransaction_t295449C3C8E5BAE1484CD45D4FC5C770D95534C8_il2cpp_TypeInfo_var, L_10);
				NullCheck(L_4);
				PatriciaTrie_Put_m4736CDBA7672D37BC7B563EFD86F5179FBF52010(L_4, L_8, L_11, (RuntimeObject*)NULL, NULL);
			}

IL_0039_1:
			{
				bool L_12;
				L_12 = Enumerator_MoveNext_m09B67058C12BE89CAF1F03C1C49544085D8CE2FC((&V_1), Enumerator_MoveNext_m09B67058C12BE89CAF1F03C1C49544085D8CE2FC_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0052;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0052:
	{
		PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* L_13 = V_0;
		NullCheck(L_13);
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_14;
		L_14 = PatriciaTrie_get_Root_mA472DB2AC8A1ACA84AC6B3ABC7C735D8A92BB111_inline(L_13, NULL);
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(5 /* System.Byte[] Nethereum.Merkle.Patricia.Node::GetHash() */, L_14);
		String_t* L_16 = ___transactionsRoot0;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_16, NULL);
		bool L_18;
		L_18 = NiblesBytesExtension_AreTheSame_m6B201B050AB7376DD170E81C6CA445EDFF98D49F(L_15, L_17, NULL);
		return L_18;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* PatriciaTrie_get_Root_mA472DB2AC8A1ACA84AC6B3ABC7C735D8A92BB111_inline (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, const RuntimeMethod* method) 
{
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_0 = __this->___U3CRootU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BranchNode_set_Value_mAA551F3490DCD7D176B8901B8573E282D9287B84_inline (BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NodeU5BU5D_tB05665DCA9FA6C7C1BA79FA5E029D66BA3478607* BranchNode_get_Children_m371C78510FF6B91199CA0BDB7D2C4B93DCF4B9B2_inline (BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* __this, const RuntimeMethod* method) 
{
	{
		NodeU5BU5D_tB05665DCA9FA6C7C1BA79FA5E029D66BA3478607* L_0 = __this->___U3CChildrenU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BranchNode_get_Value_m69ED4759CB30ACB44E808F61CE17E53095C507EF_inline (BranchNode_tF274EF9BBFF37CE27B94C2CE4FA1CA55AAD3CBF2* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CValueU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* ExtendedNode_get_InnerNode_mA2250ADD4D6EAAD1C85691C74FB4C8E604DC3D76_inline (ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* __this, const RuntimeMethod* method) 
{
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_0 = __this->___U3CInnerNodeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ExtendedNode_get_Nibbles_mE69CC371BC9220A5606C93BF13482FE6AAFD9A7D_inline (ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CNibblesU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* HashNode_get_InnerNode_m2B9F522AAABDF05F248408E1AAFA34AECF1F3F4E_inline (HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* __this, const RuntimeMethod* method) 
{
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_0 = __this->___U3CInnerNodeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashNode_get_Hash_m88E4036B8A738AE6154BF6938D016EAA276FBF37_inline (HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CHashU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HashNode_set_InnerNode_m0B3F43D1861CFF3AE27DA973E314FD7B54E217DF_inline (HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* __this, Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* ___value0, const RuntimeMethod* method) 
{
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_0 = ___value0;
		__this->___U3CInnerNodeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInnerNodeU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB* InMemoryTrieStorage_get__storage_m779F5BDF8833A35FF9C3749D9F41E8B4901D824F_inline (InMemoryTrieStorage_t440E03AA1944D53EE718DCD80A7D345CE91ABCCC* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_tF32B5D282F56DD322E147B4BFDCA7234EB1425DB* L_0 = __this->___U3C_storageU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LeafNode_get_Value_mCA947E6EC6B168D0A5FF5C00993B57F1357BBCEE_inline (LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CValueU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LeafNode_get_Nibbles_m60B6E95A3DB4EDA4E6B13AB76ACE348DD447D310_inline (LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CNibblesU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Node_set_HashProvider_mF88F7495DD59A9630C17FC3FE07D5CDE52DC11AC_inline (Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CHashProviderU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHashProviderU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Node_get_HashProvider_m8B76C56C9644BCC4DCAAD90BBFBCAA253DB203A1_inline (Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CHashProviderU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HashNode_set_Hash_m96C51491A78A067FF3096216A0697316BF438FFC_inline (HashNode_tC438B906E6E9E1544DAA2A752AC80DCB6AAF32DC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CHashU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHashU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LeafNode_set_Nibbles_m9C418C15A793D722C75E45165C1124062B792402_inline (LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CNibblesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNibblesU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LeafNode_set_Value_mF368CDC59A03297378BEA1C1BE662E3B5704E2C3_inline (LeafNode_t73F8AECB54CEBE2DF6133274ACDB5445943861BC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExtendedNode_set_Nibbles_m46259B2045B4CE512A76C238425720DE354BC235_inline (ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CNibblesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNibblesU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExtendedNode_set_InnerNode_m6762B1A005B07D339C8B136187E581F9247F0E1D_inline (ExtendedNode_t7E4D19E582C3B12D7D7BC5AED374437B8C9F596A* __this, Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* ___value0, const RuntimeMethod* method) 
{
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_0 = ___value0;
		__this->___U3CInnerNodeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInnerNodeU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PatriciaTrie_set_Root_mF9112BA3E5243CF70611237B4ABED86FC5C6C218_inline (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* ___value0, const RuntimeMethod* method) 
{
	{
		Node_t02491A103E46CEA6C424DE3E0607B6A1188CB10F* L_0 = ___value0;
		__this->___U3CRootU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRootU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PatriciaTrie_get_HashProvider_m9E1B29A38F765942A79D4D79112F43A1F69FFC24_inline (PatriciaTrie_t5B0021EA0345809ABFFD21ED3E970C23B15EDB00* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CHashProviderU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F IndexedSignedTransaction_get_Index_mC949CF8D45D4E522341B4E56B4143AD58F8E61DF_inline (IndexedSignedTransaction_t1C7BAC78F6C1377A43EDDB85FAF38F2F5253123F* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->___U3CIndexU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IndexedSignedTransaction_get_SignedTransaction_mC9C34468883D8BEA52BB92EADFA046A52905D395_inline (IndexedSignedTransaction_t1C7BAC78F6C1377A43EDDB85FAF38F2F5253123F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CSignedTransactionU3Ek__BackingField_1;
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
