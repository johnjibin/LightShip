#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>
struct Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E;
// System.Pinnable`1<System.Byte>
struct Pinnable_1_t8B3EAE5BC489BEE218C03F2D7C9BDB31EF0056FD;
// System.Pinnable`1<System.Char>
struct Pinnable_1_t0BBB916DE7483A3E704D129D1CEB8F647945EFDE;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.ArrayTypeMismatchException
struct ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784;
// System.Reflection.Assembly
struct Assembly_t;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tE58F103FA6A0842466B1EEC63506777E246D609F;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Resources.IResourceGroveler
struct IResourceGroveler_tD738FE6B83F63AC66FDD73BCD3193016FDEBFAB0;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Runtime.CompilerServices.IsByRefLikeAttribute
struct IsByRefLikeAttribute_tD87A30ADD21F922E1D63B800E7983076797A6179;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t1CB347F95A0004CB0C5AE22D84CBFBFCF9A5F373;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Resources.ResourceManager
struct ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A;
// System.Reflection.RuntimeAssembly
struct RuntimeAssembly_t799877C849878A70E10D25C690D7B0476DAF0B56;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.TypeInfo
struct TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F;
// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Resources.ResourceManager/CultureNameResourceSetPair
struct CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgument_t00DCBB0F0819C553694C772003B02840C3AF6B5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_tBDA4D9230F4225CDB6E4FFDAD4D73D42271459CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t0DF027D1C7415CBB03F663A5D5ACE52D29226059_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t620905184FE92C7CD2128B5FE4079C455117C4B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryExtensions_tCBF4BE8784F6BAC4D3C79E2C5069159F319ADCD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingManifestResourceException_tAC74F21ADC46CCB2BCC710464434E3B97F72FACB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
IL2CPP_EXTERN_C String_t* _stringLiteral44B6E521D3C115CEA4878E4F981B5C2ACC1C885A;
IL2CPP_EXTERN_C String_t* _stringLiteral4CC20FA775B7CE5630588715DBC10889D01DC6F1;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral819CA64A4459548685C67A2CD1C9D5E94F49CCD5;
IL2CPP_EXTERN_C String_t* _stringLiteral89BF668EA220E1F9C98F61872576447AF8F92A3F;
IL2CPP_EXTERN_C String_t* _stringLiteralD47A3426BF2C027AE854619E7EAB1FEB5E8491AD;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB36A7827C4BC5E4F9552256997C3EC855D2FDE05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mE806AAF0979C31DD5322C12D79E0C889C7386F4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Read_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mBB533DF56B0405E2EFA2048F66CA1ADB46160594_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Write_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mCD67041291E7BFA54C7D8C2E25AB1645357F593E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Write_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mFD6B2C3214FE27F6309A4B5A09616C985BB65453_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyMemory_1__ctor_m43E3FBEB023D5620B54E4805C068D6CA1EFFA363_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySequence_1_TryGetString_m91897FD4F916F57D7C84FD45B0CB1A56CE05B7C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_mBE644F1617274428AD9DC42DC42198B97333CCB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m1BD0982F8A577242AAFBB58E3960AF4550512E78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m64D656C1E24D68D90E296A217B2A3BD15FE93673_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentException_DestinationTooShort_m93E60D12B9B073ADBA74A9EA13692365D0950F09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m1E81A6DA3EE9ED361A393F94DCBF0D6C237923C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentNullException_mC3B9B6444F069F23A716B27AE2BECA57B19BC082_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentOutOfRangeException_m2373E82E45B766DD1D0B5EEBC9EAB68EB787F05C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentOutOfRangeException_m4F98B73AA41519B450FFCCD1E97C2DA8F1CC14FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArrayTypeMismatchException_m3D0F2AFE70BE5200FF916F4D901DA8993C17D45D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowIndexOutOfRangeException_m23B88CE48288320C2171592A2D6FFE8F87E7EAD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowInvalidOperationException_EndPositionNotReached_mE7C0C3E7C18D36F2C24A92B76BD7C545F9865D6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21792A067D720CFF0BFCCC4AFE7E17D916DFD3F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_AreSame_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mFC5681897A28ACE4F4CC26DC9552366E45AED7D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_AsRef_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mEC707D7DB383D32316E6098FCD68588EC1A98AFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_As_TisPinnable_1_t0BBB916DE7483A3E704D129D1CEB8F647945EFDE_m8340DA2B38CFC7F3E7C4AD2F8DD32994B3C6BBDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_ByteOffset_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mA8C78756EDF0A5CE73217949F4FBB4627C03DD29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_get_Count_mBCD0997C4DF6691469D09BD74D45014A78B056C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_op_Equality_m8D447425CEE4ED8947D3F00FBCEE8CF5E45FA7C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_op_Inequality_mEA379E06566B02A57C3DF20988F7D3C2A7A20080_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* SR_t87A91EF268900761D47CBA9EF7307BF57A070504_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t3D3783F85E8E227092FD51E0A311224BED398654 
{
public:

public:
};


// System.Object


// System.Pinnable`1<System.Char>
struct Pinnable_1_t0BBB916DE7483A3E704D129D1CEB8F647945EFDE  : public RuntimeObject
{
public:
	// T System.Pinnable`1::Data
	Il2CppChar ___Data_0;

public:
	inline static int32_t get_offset_of_Data_0() { return static_cast<int32_t>(offsetof(Pinnable_1_t0BBB916DE7483A3E704D129D1CEB8F647945EFDE, ___Data_0)); }
	inline Il2CppChar get_Data_0() const { return ___Data_0; }
	inline Il2CppChar* get_address_of_Data_0() { return &___Data_0; }
	inline void set_Data_0(Il2CppChar value)
	{
		___Data_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Buffers.Binary.BinaryPrimitives
struct BinaryPrimitives_t8D280886CD35815BEE64575500E0265256E932BB  : public RuntimeObject
{
public:

public:
};


// System.BitConverter
struct BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654  : public RuntimeObject
{
public:

public:
};

struct BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields
{
public:
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_0;

public:
	inline static int32_t get_offset_of_IsLittleEndian_0() { return static_cast<int32_t>(offsetof(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields, ___IsLittleEndian_0)); }
	inline bool get_IsLittleEndian_0() const { return ___IsLittleEndian_0; }
	inline bool* get_address_of_IsLittleEndian_0() { return &___IsLittleEndian_0; }
	inline void set_IsLittleEndian_0(bool value)
	{
		___IsLittleEndian_0 = value;
	}
};


// System.Buffers.BuffersExtensions
struct BuffersExtensions_tFA32A1189162741EE564B93A8D844845D3E22BBB  : public RuntimeObject
{
public:

public:
};


// System.Numerics.Hashing.HashHelpers
struct HashHelpers_tBDA4D9230F4225CDB6E4FFDAD4D73D42271459CB  : public RuntimeObject
{
public:

public:
};

struct HashHelpers_tBDA4D9230F4225CDB6E4FFDAD4D73D42271459CB_StaticFields
{
public:
	// System.Int32 System.Numerics.Hashing.HashHelpers::RandomSeed
	int32_t ___RandomSeed_0;

public:
	inline static int32_t get_offset_of_RandomSeed_0() { return static_cast<int32_t>(offsetof(HashHelpers_tBDA4D9230F4225CDB6E4FFDAD4D73D42271459CB_StaticFields, ___RandomSeed_0)); }
	inline int32_t get_RandomSeed_0() const { return ___RandomSeed_0; }
	inline int32_t* get_address_of_RandomSeed_0() { return &___RandomSeed_0; }
	inline void set_RandomSeed_0(int32_t value)
	{
		___RandomSeed_0 = value;
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.InteropServices.MemoryMarshal
struct MemoryMarshal_t629D58E5BE082419F51C8AABF12DE62F077EC82F  : public RuntimeObject
{
public:

public:
};


// System.Buffers.ReadOnlySequence
struct ReadOnlySequence_tF41AE7FF8FC2876B613CC4287DFB82288326AA06  : public RuntimeObject
{
public:

public:
};


// FxResources.System.Memory.SR
struct SR_t87A91EF268900761D47CBA9EF7307BF57A070504  : public RuntimeObject
{
public:

public:
};


// System.SR
struct SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E  : public RuntimeObject
{
public:

public:
};

struct SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_StaticFields
{
public:
	// System.Resources.ResourceManager System.SR::s_resourceManager
	ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * ___s_resourceManager_0;
	// System.Type System.SR::<ResourceType>k__BackingField
	Type_t * ___U3CResourceTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_s_resourceManager_0() { return static_cast<int32_t>(offsetof(SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_StaticFields, ___s_resourceManager_0)); }
	inline ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * get_s_resourceManager_0() const { return ___s_resourceManager_0; }
	inline ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A ** get_address_of_s_resourceManager_0() { return &___s_resourceManager_0; }
	inline void set_s_resourceManager_0(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * value)
	{
		___s_resourceManager_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_resourceManager_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResourceTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_StaticFields, ___U3CResourceTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CResourceTypeU3Ek__BackingField_1() const { return ___U3CResourceTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CResourceTypeU3Ek__BackingField_1() { return &___U3CResourceTypeU3Ek__BackingField_1; }
	inline void set_U3CResourceTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CResourceTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResourceTypeU3Ek__BackingField_1), (void*)value);
	}
};


// System.Runtime.InteropServices.SequenceMarshal
struct SequenceMarshal_t6657B84D37DF0BC26C70892B969A61D39125C71E  : public RuntimeObject
{
public:

public:
};


// System.SpanHelpers
struct SpanHelpers_t05FAAEC4ABE4F84E60441C0E9FD91350C0366378  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ThrowHelper
struct ThrowHelper_t26EDCC0C3C34893BCD2CE17F1351BFF45D49685B  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.ReadOnlyMemory`1<System.Char>
struct ReadOnlyMemory_1_t4371295666DCEA58DF106E5857800DED705F94AC 
{
public:
	// System.Object System.ReadOnlyMemory`1::_object
	RuntimeObject * ____object_0;
	// System.Int32 System.ReadOnlyMemory`1::_index
	int32_t ____index_1;
	// System.Int32 System.ReadOnlyMemory`1::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__object_0() { return static_cast<int32_t>(offsetof(ReadOnlyMemory_1_t4371295666DCEA58DF106E5857800DED705F94AC, ____object_0)); }
	inline RuntimeObject * get__object_0() const { return ____object_0; }
	inline RuntimeObject ** get_address_of__object_0() { return &____object_0; }
	inline void set__object_0(RuntimeObject * value)
	{
		____object_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____object_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(ReadOnlyMemory_1_t4371295666DCEA58DF106E5857800DED705F94AC, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(ReadOnlyMemory_1_t4371295666DCEA58DF106E5857800DED705F94AC, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};

// Native definition for P/Invoke marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_tAD2EB9B78579D01A572BB888AE7B84CA2654AD28_marshaled_pinvoke_define
#define ReadOnlyMemory_1_tAD2EB9B78579D01A572BB888AE7B84CA2654AD28_marshaled_pinvoke_define
struct ReadOnlyMemory_1_tAD2EB9B78579D01A572BB888AE7B84CA2654AD28_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_tAD2EB9B78579D01A572BB888AE7B84CA2654AD28_marshaled_com_define
#define ReadOnlyMemory_1_tAD2EB9B78579D01A572BB888AE7B84CA2654AD28_marshaled_com_define
struct ReadOnlyMemory_1_tAD2EB9B78579D01A572BB888AE7B84CA2654AD28_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tE58F103FA6A0842466B1EEC63506777E246D609F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Runtime.CompilerServices.IsByRefLikeAttribute
struct IsByRefLikeAttribute_tD87A30ADD21F922E1D63B800E7983076797A6179  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t1CB347F95A0004CB0C5AE22D84CBFBFCF9A5F373  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.NUInt
struct NUInt_t406BD8A487DEDAC571390BC16847E098DF802EEE 
{
public:
	// System.Void* System.NUInt::_value
	void* ____value_0;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(NUInt_t406BD8A487DEDAC571390BC16847E098DF802EEE, ____value_0)); }
	inline void* get__value_0() const { return ____value_0; }
	inline void** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(void* value)
	{
		____value_0 = value;
	}
};


// System.Numerics.Register
struct Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte System.Numerics.Register::byte_0
			uint8_t ___byte_0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_1_OffsetPadding[1];
			// System.Byte System.Numerics.Register::byte_1
			uint8_t ___byte_1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_2_OffsetPadding[2];
			// System.Byte System.Numerics.Register::byte_2
			uint8_t ___byte_2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_3_OffsetPadding[3];
			// System.Byte System.Numerics.Register::byte_3
			uint8_t ___byte_3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_4_OffsetPadding[4];
			// System.Byte System.Numerics.Register::byte_4
			uint8_t ___byte_4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_5_OffsetPadding[5];
			// System.Byte System.Numerics.Register::byte_5
			uint8_t ___byte_5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_6_OffsetPadding[6];
			// System.Byte System.Numerics.Register::byte_6
			uint8_t ___byte_6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_7_OffsetPadding[7];
			// System.Byte System.Numerics.Register::byte_7
			uint8_t ___byte_7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_8_OffsetPadding[8];
			// System.Byte System.Numerics.Register::byte_8
			uint8_t ___byte_8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_9_OffsetPadding[9];
			// System.Byte System.Numerics.Register::byte_9
			uint8_t ___byte_9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_10_OffsetPadding[10];
			// System.Byte System.Numerics.Register::byte_10
			uint8_t ___byte_10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_11_OffsetPadding[11];
			// System.Byte System.Numerics.Register::byte_11
			uint8_t ___byte_11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_12_OffsetPadding[12];
			// System.Byte System.Numerics.Register::byte_12
			uint8_t ___byte_12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_13_OffsetPadding[13];
			// System.Byte System.Numerics.Register::byte_13
			uint8_t ___byte_13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_14_OffsetPadding[14];
			// System.Byte System.Numerics.Register::byte_14
			uint8_t ___byte_14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_15_OffsetPadding[15];
			// System.Byte System.Numerics.Register::byte_15
			uint8_t ___byte_15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte System.Numerics.Register::sbyte_0
			int8_t ___sbyte_0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_17_OffsetPadding[1];
			// System.SByte System.Numerics.Register::sbyte_1
			int8_t ___sbyte_1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_17_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_18_OffsetPadding[2];
			// System.SByte System.Numerics.Register::sbyte_2
			int8_t ___sbyte_2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_18_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_19_OffsetPadding[3];
			// System.SByte System.Numerics.Register::sbyte_3
			int8_t ___sbyte_3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_19_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_20_OffsetPadding[4];
			// System.SByte System.Numerics.Register::sbyte_4
			int8_t ___sbyte_4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_20_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_21_OffsetPadding[5];
			// System.SByte System.Numerics.Register::sbyte_5
			int8_t ___sbyte_5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_21_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_22_OffsetPadding[6];
			// System.SByte System.Numerics.Register::sbyte_6
			int8_t ___sbyte_6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_22_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_23_OffsetPadding[7];
			// System.SByte System.Numerics.Register::sbyte_7
			int8_t ___sbyte_7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_23_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_24_OffsetPadding[8];
			// System.SByte System.Numerics.Register::sbyte_8
			int8_t ___sbyte_8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_24_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_25_OffsetPadding[9];
			// System.SByte System.Numerics.Register::sbyte_9
			int8_t ___sbyte_9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_25_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_26_OffsetPadding[10];
			// System.SByte System.Numerics.Register::sbyte_10
			int8_t ___sbyte_10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_26_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_27_OffsetPadding[11];
			// System.SByte System.Numerics.Register::sbyte_11
			int8_t ___sbyte_11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_27_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_28_OffsetPadding[12];
			// System.SByte System.Numerics.Register::sbyte_12
			int8_t ___sbyte_12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_28_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_29_OffsetPadding[13];
			// System.SByte System.Numerics.Register::sbyte_13
			int8_t ___sbyte_13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_29_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_30_OffsetPadding[14];
			// System.SByte System.Numerics.Register::sbyte_14
			int8_t ___sbyte_14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_30_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_31_OffsetPadding[15];
			// System.SByte System.Numerics.Register::sbyte_15
			int8_t ___sbyte_15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_31_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 System.Numerics.Register::uint16_0
			uint16_t ___uint16_0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_33_OffsetPadding[2];
			// System.UInt16 System.Numerics.Register::uint16_1
			uint16_t ___uint16_1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_33_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_34_OffsetPadding[4];
			// System.UInt16 System.Numerics.Register::uint16_2
			uint16_t ___uint16_2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_34_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_35_OffsetPadding[6];
			// System.UInt16 System.Numerics.Register::uint16_3
			uint16_t ___uint16_3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_35_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_36_OffsetPadding[8];
			// System.UInt16 System.Numerics.Register::uint16_4
			uint16_t ___uint16_4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_36_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_37_OffsetPadding[10];
			// System.UInt16 System.Numerics.Register::uint16_5
			uint16_t ___uint16_5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_37_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_38_OffsetPadding[12];
			// System.UInt16 System.Numerics.Register::uint16_6
			uint16_t ___uint16_6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_38_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_39_OffsetPadding[14];
			// System.UInt16 System.Numerics.Register::uint16_7
			uint16_t ___uint16_7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_39_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 System.Numerics.Register::int16_0
			int16_t ___int16_0_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_41_OffsetPadding[2];
			// System.Int16 System.Numerics.Register::int16_1
			int16_t ___int16_1_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_41_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_42_OffsetPadding[4];
			// System.Int16 System.Numerics.Register::int16_2
			int16_t ___int16_2_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_42_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_43_OffsetPadding[6];
			// System.Int16 System.Numerics.Register::int16_3
			int16_t ___int16_3_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_43_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_44_OffsetPadding[8];
			// System.Int16 System.Numerics.Register::int16_4
			int16_t ___int16_4_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_44_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_45_OffsetPadding[10];
			// System.Int16 System.Numerics.Register::int16_5
			int16_t ___int16_5_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_45_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_46_OffsetPadding[12];
			// System.Int16 System.Numerics.Register::int16_6
			int16_t ___int16_6_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_46_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_47_OffsetPadding[14];
			// System.Int16 System.Numerics.Register::int16_7
			int16_t ___int16_7_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_47_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 System.Numerics.Register::uint32_0
			uint32_t ___uint32_0_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_49_OffsetPadding[4];
			// System.UInt32 System.Numerics.Register::uint32_1
			uint32_t ___uint32_1_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_49_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_50_OffsetPadding[8];
			// System.UInt32 System.Numerics.Register::uint32_2
			uint32_t ___uint32_2_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_50_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_51_OffsetPadding[12];
			// System.UInt32 System.Numerics.Register::uint32_3
			uint32_t ___uint32_3_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_51_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Numerics.Register::int32_0
			int32_t ___int32_0_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_53_OffsetPadding[4];
			// System.Int32 System.Numerics.Register::int32_1
			int32_t ___int32_1_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_53_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_54_OffsetPadding[8];
			// System.Int32 System.Numerics.Register::int32_2
			int32_t ___int32_2_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_54_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_55_OffsetPadding[12];
			// System.Int32 System.Numerics.Register::int32_3
			int32_t ___int32_3_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_55_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 System.Numerics.Register::uint64_0
			uint64_t ___uint64_0_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_57_OffsetPadding[8];
			// System.UInt64 System.Numerics.Register::uint64_1
			uint64_t ___uint64_1_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_57_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 System.Numerics.Register::int64_0
			int64_t ___int64_0_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_59_OffsetPadding[8];
			// System.Int64 System.Numerics.Register::int64_1
			int64_t ___int64_1_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_59_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single System.Numerics.Register::single_0
			float ___single_0_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_61_OffsetPadding[4];
			// System.Single System.Numerics.Register::single_1
			float ___single_1_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_61_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_62_OffsetPadding[8];
			// System.Single System.Numerics.Register::single_2
			float ___single_2_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_62_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_63_OffsetPadding[12];
			// System.Single System.Numerics.Register::single_3
			float ___single_3_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_63_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double System.Numerics.Register::double_0
			double ___double_0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_65_OffsetPadding[8];
			// System.Double System.Numerics.Register::double_1
			double ___double_1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_65_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_65_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_byte_0_0() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___byte_0_0)); }
	inline uint8_t get_byte_0_0() const { return ___byte_0_0; }
	inline uint8_t* get_address_of_byte_0_0() { return &___byte_0_0; }
	inline void set_byte_0_0(uint8_t value)
	{
		___byte_0_0 = value;
	}

	inline static int32_t get_offset_of_byte_1_1() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___byte_1_1)); }
	inline uint8_t get_byte_1_1() const { return ___byte_1_1; }
	inline uint8_t* get_address_of_byte_1_1() { return &___byte_1_1; }
	inline void set_byte_1_1(uint8_t value)
	{
		___byte_1_1 = value;
	}

	inline static int32_t get_offset_of_byte_2_2() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___byte_2_2)); }
	inline uint8_t get_byte_2_2() const { return ___byte_2_2; }
	inline uint8_t* get_address_of_byte_2_2() { return &___byte_2_2; }
	inline void set_byte_2_2(uint8_t value)
	{
		___byte_2_2 = value;
	}

	inline static int32_t get_offset_of_byte_3_3() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___byte_3_3)); }
	inline uint8_t get_byte_3_3() const { return ___byte_3_3; }
	inline uint8_t* get_address_of_byte_3_3() { return &___byte_3_3; }
	inline void set_byte_3_3(uint8_t value)
	{
		___byte_3_3 = value;
	}

	inline static int32_t get_offset_of_byte_4_4() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___byte_4_4)); }
	inline uint8_t get_byte_4_4() const { return ___byte_4_4; }
	inline uint8_t* get_address_of_byte_4_4() { return &___byte_4_4; }
	inline void set_byte_4_4(uint8_t value)
	{
		___byte_4_4 = value;
	}

	inline static int32_t get_offset_of_byte_5_5() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___byte_5_5)); }
	inline uint8_t get_byte_5_5() const { return ___byte_5_5; }
	inline uint8_t* get_address_of_byte_5_5() { return &___byte_5_5; }
	inline void set_byte_5_5(uint8_t value)
	{
		___byte_5_5 = value;
	}

	inline static int32_t get_offset_of_byte_6_6() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___byte_6_6)); }
	inline uint8_t get_byte_6_6() const { return ___byte_6_6; }
	inline uint8_t* get_address_of_byte_6_6() { return &___byte_6_6; }
	inline void set_byte_6_6(uint8_t value)
	{
		___byte_6_6 = value;
	}

	inline static int32_t get_offset_of_byte_7_7() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___byte_7_7)); }
	inline uint8_t get_byte_7_7() const { return ___byte_7_7; }
	inline uint8_t* get_address_of_byte_7_7() { return &___byte_7_7; }
	inline void set_byte_7_7(uint8_t value)
	{
		___byte_7_7 = value;
	}

	inline static int32_t get_offset_of_byte_8_8() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___byte_8_8)); }
	inline uint8_t get_byte_8_8() const { return ___byte_8_8; }
	inline uint8_t* get_address_of_byte_8_8() { return &___byte_8_8; }
	inline void set_byte_8_8(uint8_t value)
	{
		___byte_8_8 = value;
	}

	inline static int32_t get_offset_of_byte_9_9() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___byte_9_9)); }
	inline uint8_t get_byte_9_9() const { return ___byte_9_9; }
	inline uint8_t* get_address_of_byte_9_9() { return &___byte_9_9; }
	inline void set_byte_9_9(uint8_t value)
	{
		___byte_9_9 = value;
	}

	inline static int32_t get_offset_of_byte_10_10() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___byte_10_10)); }
	inline uint8_t get_byte_10_10() const { return ___byte_10_10; }
	inline uint8_t* get_address_of_byte_10_10() { return &___byte_10_10; }
	inline void set_byte_10_10(uint8_t value)
	{
		___byte_10_10 = value;
	}

	inline static int32_t get_offset_of_byte_11_11() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___byte_11_11)); }
	inline uint8_t get_byte_11_11() const { return ___byte_11_11; }
	inline uint8_t* get_address_of_byte_11_11() { return &___byte_11_11; }
	inline void set_byte_11_11(uint8_t value)
	{
		___byte_11_11 = value;
	}

	inline static int32_t get_offset_of_byte_12_12() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___byte_12_12)); }
	inline uint8_t get_byte_12_12() const { return ___byte_12_12; }
	inline uint8_t* get_address_of_byte_12_12() { return &___byte_12_12; }
	inline void set_byte_12_12(uint8_t value)
	{
		___byte_12_12 = value;
	}

	inline static int32_t get_offset_of_byte_13_13() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___byte_13_13)); }
	inline uint8_t get_byte_13_13() const { return ___byte_13_13; }
	inline uint8_t* get_address_of_byte_13_13() { return &___byte_13_13; }
	inline void set_byte_13_13(uint8_t value)
	{
		___byte_13_13 = value;
	}

	inline static int32_t get_offset_of_byte_14_14() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___byte_14_14)); }
	inline uint8_t get_byte_14_14() const { return ___byte_14_14; }
	inline uint8_t* get_address_of_byte_14_14() { return &___byte_14_14; }
	inline void set_byte_14_14(uint8_t value)
	{
		___byte_14_14 = value;
	}

	inline static int32_t get_offset_of_byte_15_15() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___byte_15_15)); }
	inline uint8_t get_byte_15_15() const { return ___byte_15_15; }
	inline uint8_t* get_address_of_byte_15_15() { return &___byte_15_15; }
	inline void set_byte_15_15(uint8_t value)
	{
		___byte_15_15 = value;
	}

	inline static int32_t get_offset_of_sbyte_0_16() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___sbyte_0_16)); }
	inline int8_t get_sbyte_0_16() const { return ___sbyte_0_16; }
	inline int8_t* get_address_of_sbyte_0_16() { return &___sbyte_0_16; }
	inline void set_sbyte_0_16(int8_t value)
	{
		___sbyte_0_16 = value;
	}

	inline static int32_t get_offset_of_sbyte_1_17() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___sbyte_1_17)); }
	inline int8_t get_sbyte_1_17() const { return ___sbyte_1_17; }
	inline int8_t* get_address_of_sbyte_1_17() { return &___sbyte_1_17; }
	inline void set_sbyte_1_17(int8_t value)
	{
		___sbyte_1_17 = value;
	}

	inline static int32_t get_offset_of_sbyte_2_18() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___sbyte_2_18)); }
	inline int8_t get_sbyte_2_18() const { return ___sbyte_2_18; }
	inline int8_t* get_address_of_sbyte_2_18() { return &___sbyte_2_18; }
	inline void set_sbyte_2_18(int8_t value)
	{
		___sbyte_2_18 = value;
	}

	inline static int32_t get_offset_of_sbyte_3_19() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___sbyte_3_19)); }
	inline int8_t get_sbyte_3_19() const { return ___sbyte_3_19; }
	inline int8_t* get_address_of_sbyte_3_19() { return &___sbyte_3_19; }
	inline void set_sbyte_3_19(int8_t value)
	{
		___sbyte_3_19 = value;
	}

	inline static int32_t get_offset_of_sbyte_4_20() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___sbyte_4_20)); }
	inline int8_t get_sbyte_4_20() const { return ___sbyte_4_20; }
	inline int8_t* get_address_of_sbyte_4_20() { return &___sbyte_4_20; }
	inline void set_sbyte_4_20(int8_t value)
	{
		___sbyte_4_20 = value;
	}

	inline static int32_t get_offset_of_sbyte_5_21() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___sbyte_5_21)); }
	inline int8_t get_sbyte_5_21() const { return ___sbyte_5_21; }
	inline int8_t* get_address_of_sbyte_5_21() { return &___sbyte_5_21; }
	inline void set_sbyte_5_21(int8_t value)
	{
		___sbyte_5_21 = value;
	}

	inline static int32_t get_offset_of_sbyte_6_22() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___sbyte_6_22)); }
	inline int8_t get_sbyte_6_22() const { return ___sbyte_6_22; }
	inline int8_t* get_address_of_sbyte_6_22() { return &___sbyte_6_22; }
	inline void set_sbyte_6_22(int8_t value)
	{
		___sbyte_6_22 = value;
	}

	inline static int32_t get_offset_of_sbyte_7_23() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___sbyte_7_23)); }
	inline int8_t get_sbyte_7_23() const { return ___sbyte_7_23; }
	inline int8_t* get_address_of_sbyte_7_23() { return &___sbyte_7_23; }
	inline void set_sbyte_7_23(int8_t value)
	{
		___sbyte_7_23 = value;
	}

	inline static int32_t get_offset_of_sbyte_8_24() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___sbyte_8_24)); }
	inline int8_t get_sbyte_8_24() const { return ___sbyte_8_24; }
	inline int8_t* get_address_of_sbyte_8_24() { return &___sbyte_8_24; }
	inline void set_sbyte_8_24(int8_t value)
	{
		___sbyte_8_24 = value;
	}

	inline static int32_t get_offset_of_sbyte_9_25() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___sbyte_9_25)); }
	inline int8_t get_sbyte_9_25() const { return ___sbyte_9_25; }
	inline int8_t* get_address_of_sbyte_9_25() { return &___sbyte_9_25; }
	inline void set_sbyte_9_25(int8_t value)
	{
		___sbyte_9_25 = value;
	}

	inline static int32_t get_offset_of_sbyte_10_26() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___sbyte_10_26)); }
	inline int8_t get_sbyte_10_26() const { return ___sbyte_10_26; }
	inline int8_t* get_address_of_sbyte_10_26() { return &___sbyte_10_26; }
	inline void set_sbyte_10_26(int8_t value)
	{
		___sbyte_10_26 = value;
	}

	inline static int32_t get_offset_of_sbyte_11_27() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___sbyte_11_27)); }
	inline int8_t get_sbyte_11_27() const { return ___sbyte_11_27; }
	inline int8_t* get_address_of_sbyte_11_27() { return &___sbyte_11_27; }
	inline void set_sbyte_11_27(int8_t value)
	{
		___sbyte_11_27 = value;
	}

	inline static int32_t get_offset_of_sbyte_12_28() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___sbyte_12_28)); }
	inline int8_t get_sbyte_12_28() const { return ___sbyte_12_28; }
	inline int8_t* get_address_of_sbyte_12_28() { return &___sbyte_12_28; }
	inline void set_sbyte_12_28(int8_t value)
	{
		___sbyte_12_28 = value;
	}

	inline static int32_t get_offset_of_sbyte_13_29() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___sbyte_13_29)); }
	inline int8_t get_sbyte_13_29() const { return ___sbyte_13_29; }
	inline int8_t* get_address_of_sbyte_13_29() { return &___sbyte_13_29; }
	inline void set_sbyte_13_29(int8_t value)
	{
		___sbyte_13_29 = value;
	}

	inline static int32_t get_offset_of_sbyte_14_30() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___sbyte_14_30)); }
	inline int8_t get_sbyte_14_30() const { return ___sbyte_14_30; }
	inline int8_t* get_address_of_sbyte_14_30() { return &___sbyte_14_30; }
	inline void set_sbyte_14_30(int8_t value)
	{
		___sbyte_14_30 = value;
	}

	inline static int32_t get_offset_of_sbyte_15_31() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___sbyte_15_31)); }
	inline int8_t get_sbyte_15_31() const { return ___sbyte_15_31; }
	inline int8_t* get_address_of_sbyte_15_31() { return &___sbyte_15_31; }
	inline void set_sbyte_15_31(int8_t value)
	{
		___sbyte_15_31 = value;
	}

	inline static int32_t get_offset_of_uint16_0_32() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___uint16_0_32)); }
	inline uint16_t get_uint16_0_32() const { return ___uint16_0_32; }
	inline uint16_t* get_address_of_uint16_0_32() { return &___uint16_0_32; }
	inline void set_uint16_0_32(uint16_t value)
	{
		___uint16_0_32 = value;
	}

	inline static int32_t get_offset_of_uint16_1_33() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___uint16_1_33)); }
	inline uint16_t get_uint16_1_33() const { return ___uint16_1_33; }
	inline uint16_t* get_address_of_uint16_1_33() { return &___uint16_1_33; }
	inline void set_uint16_1_33(uint16_t value)
	{
		___uint16_1_33 = value;
	}

	inline static int32_t get_offset_of_uint16_2_34() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___uint16_2_34)); }
	inline uint16_t get_uint16_2_34() const { return ___uint16_2_34; }
	inline uint16_t* get_address_of_uint16_2_34() { return &___uint16_2_34; }
	inline void set_uint16_2_34(uint16_t value)
	{
		___uint16_2_34 = value;
	}

	inline static int32_t get_offset_of_uint16_3_35() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___uint16_3_35)); }
	inline uint16_t get_uint16_3_35() const { return ___uint16_3_35; }
	inline uint16_t* get_address_of_uint16_3_35() { return &___uint16_3_35; }
	inline void set_uint16_3_35(uint16_t value)
	{
		___uint16_3_35 = value;
	}

	inline static int32_t get_offset_of_uint16_4_36() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___uint16_4_36)); }
	inline uint16_t get_uint16_4_36() const { return ___uint16_4_36; }
	inline uint16_t* get_address_of_uint16_4_36() { return &___uint16_4_36; }
	inline void set_uint16_4_36(uint16_t value)
	{
		___uint16_4_36 = value;
	}

	inline static int32_t get_offset_of_uint16_5_37() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___uint16_5_37)); }
	inline uint16_t get_uint16_5_37() const { return ___uint16_5_37; }
	inline uint16_t* get_address_of_uint16_5_37() { return &___uint16_5_37; }
	inline void set_uint16_5_37(uint16_t value)
	{
		___uint16_5_37 = value;
	}

	inline static int32_t get_offset_of_uint16_6_38() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___uint16_6_38)); }
	inline uint16_t get_uint16_6_38() const { return ___uint16_6_38; }
	inline uint16_t* get_address_of_uint16_6_38() { return &___uint16_6_38; }
	inline void set_uint16_6_38(uint16_t value)
	{
		___uint16_6_38 = value;
	}

	inline static int32_t get_offset_of_uint16_7_39() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___uint16_7_39)); }
	inline uint16_t get_uint16_7_39() const { return ___uint16_7_39; }
	inline uint16_t* get_address_of_uint16_7_39() { return &___uint16_7_39; }
	inline void set_uint16_7_39(uint16_t value)
	{
		___uint16_7_39 = value;
	}

	inline static int32_t get_offset_of_int16_0_40() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___int16_0_40)); }
	inline int16_t get_int16_0_40() const { return ___int16_0_40; }
	inline int16_t* get_address_of_int16_0_40() { return &___int16_0_40; }
	inline void set_int16_0_40(int16_t value)
	{
		___int16_0_40 = value;
	}

	inline static int32_t get_offset_of_int16_1_41() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___int16_1_41)); }
	inline int16_t get_int16_1_41() const { return ___int16_1_41; }
	inline int16_t* get_address_of_int16_1_41() { return &___int16_1_41; }
	inline void set_int16_1_41(int16_t value)
	{
		___int16_1_41 = value;
	}

	inline static int32_t get_offset_of_int16_2_42() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___int16_2_42)); }
	inline int16_t get_int16_2_42() const { return ___int16_2_42; }
	inline int16_t* get_address_of_int16_2_42() { return &___int16_2_42; }
	inline void set_int16_2_42(int16_t value)
	{
		___int16_2_42 = value;
	}

	inline static int32_t get_offset_of_int16_3_43() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___int16_3_43)); }
	inline int16_t get_int16_3_43() const { return ___int16_3_43; }
	inline int16_t* get_address_of_int16_3_43() { return &___int16_3_43; }
	inline void set_int16_3_43(int16_t value)
	{
		___int16_3_43 = value;
	}

	inline static int32_t get_offset_of_int16_4_44() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___int16_4_44)); }
	inline int16_t get_int16_4_44() const { return ___int16_4_44; }
	inline int16_t* get_address_of_int16_4_44() { return &___int16_4_44; }
	inline void set_int16_4_44(int16_t value)
	{
		___int16_4_44 = value;
	}

	inline static int32_t get_offset_of_int16_5_45() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___int16_5_45)); }
	inline int16_t get_int16_5_45() const { return ___int16_5_45; }
	inline int16_t* get_address_of_int16_5_45() { return &___int16_5_45; }
	inline void set_int16_5_45(int16_t value)
	{
		___int16_5_45 = value;
	}

	inline static int32_t get_offset_of_int16_6_46() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___int16_6_46)); }
	inline int16_t get_int16_6_46() const { return ___int16_6_46; }
	inline int16_t* get_address_of_int16_6_46() { return &___int16_6_46; }
	inline void set_int16_6_46(int16_t value)
	{
		___int16_6_46 = value;
	}

	inline static int32_t get_offset_of_int16_7_47() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___int16_7_47)); }
	inline int16_t get_int16_7_47() const { return ___int16_7_47; }
	inline int16_t* get_address_of_int16_7_47() { return &___int16_7_47; }
	inline void set_int16_7_47(int16_t value)
	{
		___int16_7_47 = value;
	}

	inline static int32_t get_offset_of_uint32_0_48() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___uint32_0_48)); }
	inline uint32_t get_uint32_0_48() const { return ___uint32_0_48; }
	inline uint32_t* get_address_of_uint32_0_48() { return &___uint32_0_48; }
	inline void set_uint32_0_48(uint32_t value)
	{
		___uint32_0_48 = value;
	}

	inline static int32_t get_offset_of_uint32_1_49() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___uint32_1_49)); }
	inline uint32_t get_uint32_1_49() const { return ___uint32_1_49; }
	inline uint32_t* get_address_of_uint32_1_49() { return &___uint32_1_49; }
	inline void set_uint32_1_49(uint32_t value)
	{
		___uint32_1_49 = value;
	}

	inline static int32_t get_offset_of_uint32_2_50() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___uint32_2_50)); }
	inline uint32_t get_uint32_2_50() const { return ___uint32_2_50; }
	inline uint32_t* get_address_of_uint32_2_50() { return &___uint32_2_50; }
	inline void set_uint32_2_50(uint32_t value)
	{
		___uint32_2_50 = value;
	}

	inline static int32_t get_offset_of_uint32_3_51() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___uint32_3_51)); }
	inline uint32_t get_uint32_3_51() const { return ___uint32_3_51; }
	inline uint32_t* get_address_of_uint32_3_51() { return &___uint32_3_51; }
	inline void set_uint32_3_51(uint32_t value)
	{
		___uint32_3_51 = value;
	}

	inline static int32_t get_offset_of_int32_0_52() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___int32_0_52)); }
	inline int32_t get_int32_0_52() const { return ___int32_0_52; }
	inline int32_t* get_address_of_int32_0_52() { return &___int32_0_52; }
	inline void set_int32_0_52(int32_t value)
	{
		___int32_0_52 = value;
	}

	inline static int32_t get_offset_of_int32_1_53() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___int32_1_53)); }
	inline int32_t get_int32_1_53() const { return ___int32_1_53; }
	inline int32_t* get_address_of_int32_1_53() { return &___int32_1_53; }
	inline void set_int32_1_53(int32_t value)
	{
		___int32_1_53 = value;
	}

	inline static int32_t get_offset_of_int32_2_54() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___int32_2_54)); }
	inline int32_t get_int32_2_54() const { return ___int32_2_54; }
	inline int32_t* get_address_of_int32_2_54() { return &___int32_2_54; }
	inline void set_int32_2_54(int32_t value)
	{
		___int32_2_54 = value;
	}

	inline static int32_t get_offset_of_int32_3_55() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___int32_3_55)); }
	inline int32_t get_int32_3_55() const { return ___int32_3_55; }
	inline int32_t* get_address_of_int32_3_55() { return &___int32_3_55; }
	inline void set_int32_3_55(int32_t value)
	{
		___int32_3_55 = value;
	}

	inline static int32_t get_offset_of_uint64_0_56() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___uint64_0_56)); }
	inline uint64_t get_uint64_0_56() const { return ___uint64_0_56; }
	inline uint64_t* get_address_of_uint64_0_56() { return &___uint64_0_56; }
	inline void set_uint64_0_56(uint64_t value)
	{
		___uint64_0_56 = value;
	}

	inline static int32_t get_offset_of_uint64_1_57() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___uint64_1_57)); }
	inline uint64_t get_uint64_1_57() const { return ___uint64_1_57; }
	inline uint64_t* get_address_of_uint64_1_57() { return &___uint64_1_57; }
	inline void set_uint64_1_57(uint64_t value)
	{
		___uint64_1_57 = value;
	}

	inline static int32_t get_offset_of_int64_0_58() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___int64_0_58)); }
	inline int64_t get_int64_0_58() const { return ___int64_0_58; }
	inline int64_t* get_address_of_int64_0_58() { return &___int64_0_58; }
	inline void set_int64_0_58(int64_t value)
	{
		___int64_0_58 = value;
	}

	inline static int32_t get_offset_of_int64_1_59() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___int64_1_59)); }
	inline int64_t get_int64_1_59() const { return ___int64_1_59; }
	inline int64_t* get_address_of_int64_1_59() { return &___int64_1_59; }
	inline void set_int64_1_59(int64_t value)
	{
		___int64_1_59 = value;
	}

	inline static int32_t get_offset_of_single_0_60() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___single_0_60)); }
	inline float get_single_0_60() const { return ___single_0_60; }
	inline float* get_address_of_single_0_60() { return &___single_0_60; }
	inline void set_single_0_60(float value)
	{
		___single_0_60 = value;
	}

	inline static int32_t get_offset_of_single_1_61() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___single_1_61)); }
	inline float get_single_1_61() const { return ___single_1_61; }
	inline float* get_address_of_single_1_61() { return &___single_1_61; }
	inline void set_single_1_61(float value)
	{
		___single_1_61 = value;
	}

	inline static int32_t get_offset_of_single_2_62() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___single_2_62)); }
	inline float get_single_2_62() const { return ___single_2_62; }
	inline float* get_address_of_single_2_62() { return &___single_2_62; }
	inline void set_single_2_62(float value)
	{
		___single_2_62 = value;
	}

	inline static int32_t get_offset_of_single_3_63() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___single_3_63)); }
	inline float get_single_3_63() const { return ___single_3_63; }
	inline float* get_address_of_single_3_63() { return &___single_3_63; }
	inline void set_single_3_63(float value)
	{
		___single_3_63 = value;
	}

	inline static int32_t get_offset_of_double_0_64() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___double_0_64)); }
	inline double get_double_0_64() const { return ___double_0_64; }
	inline double* get_address_of_double_0_64() { return &___double_0_64; }
	inline void set_double_0_64(double value)
	{
		___double_0_64 = value;
	}

	inline static int32_t get_offset_of_double_1_65() { return static_cast<int32_t>(offsetof(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138, ___double_1_65)); }
	inline double get_double_1_65() const { return ___double_1_65; }
	inline double* get_address_of_double_1_65() { return &___double_1_65; }
	inline void set_double_1_65(double value)
	{
		___double_1_65 = value;
	}
};


// System.SequencePosition
struct SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F 
{
public:
	// System.Object System.SequencePosition::_object
	RuntimeObject * ____object_0;
	// System.Int32 System.SequencePosition::_integer
	int32_t ____integer_1;

public:
	inline static int32_t get_offset_of__object_0() { return static_cast<int32_t>(offsetof(SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F, ____object_0)); }
	inline RuntimeObject * get__object_0() const { return ____object_0; }
	inline RuntimeObject ** get_address_of__object_0() { return &____object_0; }
	inline void set__object_0(RuntimeObject * value)
	{
		____object_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____object_0), (void*)value);
	}

	inline static int32_t get_offset_of__integer_1() { return static_cast<int32_t>(offsetof(SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F, ____integer_1)); }
	inline int32_t get__integer_1() const { return ____integer_1; }
	inline int32_t* get_address_of__integer_1() { return &____integer_1; }
	inline void set__integer_1(int32_t value)
	{
		____integer_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.SequencePosition
struct SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____integer_1;
};
// Native definition for COM marshalling of System.SequencePosition
struct SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____integer_1;
};

// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.UIntPtr
struct UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Buffers.ReadOnlySequence`1<System.Char>
struct ReadOnlySequence_1_t1CA47D16AEAC242B3518C691BE0A2B5991F46B81 
{
public:
	// System.SequencePosition System.Buffers.ReadOnlySequence`1::_sequenceStart
	SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F  ____sequenceStart_0;
	// System.SequencePosition System.Buffers.ReadOnlySequence`1::_sequenceEnd
	SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F  ____sequenceEnd_1;

public:
	inline static int32_t get_offset_of__sequenceStart_0() { return static_cast<int32_t>(offsetof(ReadOnlySequence_1_t1CA47D16AEAC242B3518C691BE0A2B5991F46B81, ____sequenceStart_0)); }
	inline SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F  get__sequenceStart_0() const { return ____sequenceStart_0; }
	inline SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F * get_address_of__sequenceStart_0() { return &____sequenceStart_0; }
	inline void set__sequenceStart_0(SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F  value)
	{
		____sequenceStart_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____sequenceStart_0))->____object_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__sequenceEnd_1() { return static_cast<int32_t>(offsetof(ReadOnlySequence_1_t1CA47D16AEAC242B3518C691BE0A2B5991F46B81, ____sequenceEnd_1)); }
	inline SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F  get__sequenceEnd_1() const { return ____sequenceEnd_1; }
	inline SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F * get_address_of__sequenceEnd_1() { return &____sequenceEnd_1; }
	inline void set__sequenceEnd_1(SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F  value)
	{
		____sequenceEnd_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____sequenceEnd_1))->____object_0), (void*)NULL);
	}
};

struct ReadOnlySequence_1_t1CA47D16AEAC242B3518C691BE0A2B5991F46B81_StaticFields
{
public:
	// System.Buffers.ReadOnlySequence`1<T> System.Buffers.ReadOnlySequence`1::Empty
	ReadOnlySequence_1_t1CA47D16AEAC242B3518C691BE0A2B5991F46B81  ___Empty_2;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(ReadOnlySequence_1_t1CA47D16AEAC242B3518C691BE0A2B5991F46B81_StaticFields, ___Empty_2)); }
	inline ReadOnlySequence_1_t1CA47D16AEAC242B3518C691BE0A2B5991F46B81  get_Empty_2() const { return ___Empty_2; }
	inline ReadOnlySequence_1_t1CA47D16AEAC242B3518C691BE0A2B5991F46B81 * get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(ReadOnlySequence_1_t1CA47D16AEAC242B3518C691BE0A2B5991F46B81  value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Empty_2))->____sequenceStart_0))->____object_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Empty_2))->____sequenceEnd_1))->____object_0), (void*)NULL);
		#endif
	}
};


// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_t84EFFCCB4E1285C25BD39C89683ECD46BB8B322E 
{
public:
	// System.Pinnable`1<T> System.ReadOnlySpan`1::_pinnable
	Pinnable_1_t8B3EAE5BC489BEE218C03F2D7C9BDB31EF0056FD * ____pinnable_0;
	// System.IntPtr System.ReadOnlySpan`1::_byteOffset
	intptr_t ____byteOffset_1;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__pinnable_0() { return static_cast<int32_t>(offsetof(ReadOnlySpan_1_t84EFFCCB4E1285C25BD39C89683ECD46BB8B322E, ____pinnable_0)); }
	inline Pinnable_1_t8B3EAE5BC489BEE218C03F2D7C9BDB31EF0056FD * get__pinnable_0() const { return ____pinnable_0; }
	inline Pinnable_1_t8B3EAE5BC489BEE218C03F2D7C9BDB31EF0056FD ** get_address_of__pinnable_0() { return &____pinnable_0; }
	inline void set__pinnable_0(Pinnable_1_t8B3EAE5BC489BEE218C03F2D7C9BDB31EF0056FD * value)
	{
		____pinnable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pinnable_0), (void*)value);
	}

	inline static int32_t get_offset_of__byteOffset_1() { return static_cast<int32_t>(offsetof(ReadOnlySpan_1_t84EFFCCB4E1285C25BD39C89683ECD46BB8B322E, ____byteOffset_1)); }
	inline intptr_t get__byteOffset_1() const { return ____byteOffset_1; }
	inline intptr_t* get_address_of__byteOffset_1() { return &____byteOffset_1; }
	inline void set__byteOffset_1(intptr_t value)
	{
		____byteOffset_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(ReadOnlySpan_1_t84EFFCCB4E1285C25BD39C89683ECD46BB8B322E, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};


// System.ReadOnlySpan`1<System.Char>
struct ReadOnlySpan_1_t4652F86343E7C4D6B3A202A16FF45FBE534496D0 
{
public:
	// System.Pinnable`1<T> System.ReadOnlySpan`1::_pinnable
	Pinnable_1_t0BBB916DE7483A3E704D129D1CEB8F647945EFDE * ____pinnable_0;
	// System.IntPtr System.ReadOnlySpan`1::_byteOffset
	intptr_t ____byteOffset_1;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__pinnable_0() { return static_cast<int32_t>(offsetof(ReadOnlySpan_1_t4652F86343E7C4D6B3A202A16FF45FBE534496D0, ____pinnable_0)); }
	inline Pinnable_1_t0BBB916DE7483A3E704D129D1CEB8F647945EFDE * get__pinnable_0() const { return ____pinnable_0; }
	inline Pinnable_1_t0BBB916DE7483A3E704D129D1CEB8F647945EFDE ** get_address_of__pinnable_0() { return &____pinnable_0; }
	inline void set__pinnable_0(Pinnable_1_t0BBB916DE7483A3E704D129D1CEB8F647945EFDE * value)
	{
		____pinnable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pinnable_0), (void*)value);
	}

	inline static int32_t get_offset_of__byteOffset_1() { return static_cast<int32_t>(offsetof(ReadOnlySpan_1_t4652F86343E7C4D6B3A202A16FF45FBE534496D0, ____byteOffset_1)); }
	inline intptr_t get__byteOffset_1() const { return ____byteOffset_1; }
	inline intptr_t* get_address_of__byteOffset_1() { return &____byteOffset_1; }
	inline void set__byteOffset_1(intptr_t value)
	{
		____byteOffset_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(ReadOnlySpan_1_t4652F86343E7C4D6B3A202A16FF45FBE534496D0, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};


// System.Span`1<System.Byte>
struct Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182 
{
public:
	// System.Pinnable`1<T> System.Span`1::_pinnable
	Pinnable_1_t8B3EAE5BC489BEE218C03F2D7C9BDB31EF0056FD * ____pinnable_0;
	// System.IntPtr System.Span`1::_byteOffset
	intptr_t ____byteOffset_1;
	// System.Int32 System.Span`1::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__pinnable_0() { return static_cast<int32_t>(offsetof(Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182, ____pinnable_0)); }
	inline Pinnable_1_t8B3EAE5BC489BEE218C03F2D7C9BDB31EF0056FD * get__pinnable_0() const { return ____pinnable_0; }
	inline Pinnable_1_t8B3EAE5BC489BEE218C03F2D7C9BDB31EF0056FD ** get_address_of__pinnable_0() { return &____pinnable_0; }
	inline void set__pinnable_0(Pinnable_1_t8B3EAE5BC489BEE218C03F2D7C9BDB31EF0056FD * value)
	{
		____pinnable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pinnable_0), (void*)value);
	}

	inline static int32_t get_offset_of__byteOffset_1() { return static_cast<int32_t>(offsetof(Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182, ____byteOffset_1)); }
	inline intptr_t get__byteOffset_1() const { return ____byteOffset_1; }
	inline intptr_t* get_address_of__byteOffset_1() { return &____byteOffset_1; }
	inline void set__byteOffset_1(intptr_t value)
	{
		____byteOffset_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};


// System.Numerics.Vector`1<System.Byte>
struct Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383 
{
public:
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138  ___register_0;

public:
	inline static int32_t get_offset_of_register_0() { return static_cast<int32_t>(offsetof(Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383, ___register_0)); }
	inline Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138  get_register_0() const { return ___register_0; }
	inline Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138 * get_address_of_register_0() { return &___register_0; }
	inline void set_register_0(Register_t111D5BBD3DD72D805E1D3D53AD88BA2CC916D138  value)
	{
		___register_0 = value;
	}
};

struct Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383_StaticFields
{
public:
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::zero
	Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  ___zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::one
	Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  ___one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::allOnes
	Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  ___allOnes_4;

public:
	inline static int32_t get_offset_of_s_count_1() { return static_cast<int32_t>(offsetof(Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383_StaticFields, ___s_count_1)); }
	inline int32_t get_s_count_1() const { return ___s_count_1; }
	inline int32_t* get_address_of_s_count_1() { return &___s_count_1; }
	inline void set_s_count_1(int32_t value)
	{
		___s_count_1 = value;
	}

	inline static int32_t get_offset_of_zero_2() { return static_cast<int32_t>(offsetof(Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383_StaticFields, ___zero_2)); }
	inline Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  get_zero_2() const { return ___zero_2; }
	inline Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383 * get_address_of_zero_2() { return &___zero_2; }
	inline void set_zero_2(Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  value)
	{
		___zero_2 = value;
	}

	inline static int32_t get_offset_of_one_3() { return static_cast<int32_t>(offsetof(Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383_StaticFields, ___one_3)); }
	inline Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  get_one_3() const { return ___one_3; }
	inline Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383 * get_address_of_one_3() { return &___one_3; }
	inline void set_one_3(Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  value)
	{
		___one_3 = value;
	}

	inline static int32_t get_offset_of_allOnes_4() { return static_cast<int32_t>(offsetof(Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383_StaticFields, ___allOnes_4)); }
	inline Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  get_allOnes_4() const { return ___allOnes_4; }
	inline Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383 * get_address_of_allOnes_4() { return &___allOnes_4; }
	inline void set_allOnes_4(Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  value)
	{
		___allOnes_4 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.ExceptionArgument
struct ExceptionArgument_t00DCBB0F0819C553694C772003B02840C3AF6B5C 
{
public:
	// System.Int32 System.ExceptionArgument::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionArgument_t00DCBB0F0819C553694C772003B02840C3AF6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MemoryExtensions
struct MemoryExtensions_tCBF4BE8784F6BAC4D3C79E2C5069159F319ADCD7  : public RuntimeObject
{
public:

public:
};

struct MemoryExtensions_tCBF4BE8784F6BAC4D3C79E2C5069159F319ADCD7_StaticFields
{
public:
	// System.IntPtr System.MemoryExtensions::StringAdjustment
	intptr_t ___StringAdjustment_0;

public:
	inline static int32_t get_offset_of_StringAdjustment_0() { return static_cast<int32_t>(offsetof(MemoryExtensions_tCBF4BE8784F6BAC4D3C79E2C5069159F319ADCD7_StaticFields, ___StringAdjustment_0)); }
	inline intptr_t get_StringAdjustment_0() const { return ___StringAdjustment_0; }
	inline intptr_t* get_address_of_StringAdjustment_0() { return &___StringAdjustment_0; }
	inline void set_StringAdjustment_0(intptr_t value)
	{
		___StringAdjustment_0 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.StringComparison
struct StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Resources.UltimateResourceFallbackLocation
struct UltimateResourceFallbackLocation_tA4EBEA627CD0C386314EBB60D7A4225C435D0F0B 
{
public:
	// System.Int32 System.Resources.UltimateResourceFallbackLocation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UltimateResourceFallbackLocation_tA4EBEA627CD0C386314EBB60D7A4225C435D0F0B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Resources.ResourceManager
struct ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A  : public RuntimeObject
{
public:
	// System.String System.Resources.ResourceManager::BaseNameField
	String_t* ___BaseNameField_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceSets
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___ResourceSets_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> System.Resources.ResourceManager::_resourceSets
	Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E * ____resourceSets_2;
	// System.String System.Resources.ResourceManager::moduleDir
	String_t* ___moduleDir_3;
	// System.Reflection.Assembly System.Resources.ResourceManager::MainAssembly
	Assembly_t * ___MainAssembly_4;
	// System.Type System.Resources.ResourceManager::_locationInfo
	Type_t * ____locationInfo_5;
	// System.Type System.Resources.ResourceManager::_userResourceSet
	Type_t * ____userResourceSet_6;
	// System.Globalization.CultureInfo System.Resources.ResourceManager::_neutralResourcesCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ____neutralResourcesCulture_7;
	// System.Resources.ResourceManager/CultureNameResourceSetPair System.Resources.ResourceManager::_lastUsedResourceCache
	CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84 * ____lastUsedResourceCache_8;
	// System.Boolean System.Resources.ResourceManager::_ignoreCase
	bool ____ignoreCase_9;
	// System.Boolean System.Resources.ResourceManager::UseManifest
	bool ___UseManifest_10;
	// System.Boolean System.Resources.ResourceManager::UseSatelliteAssem
	bool ___UseSatelliteAssem_11;
	// System.Resources.UltimateResourceFallbackLocation System.Resources.ResourceManager::_fallbackLoc
	int32_t ____fallbackLoc_12;
	// System.Version System.Resources.ResourceManager::_satelliteContractVersion
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ____satelliteContractVersion_13;
	// System.Boolean System.Resources.ResourceManager::_lookedForSatelliteContractVersion
	bool ____lookedForSatelliteContractVersion_14;
	// System.Reflection.Assembly System.Resources.ResourceManager::_callingAssembly
	Assembly_t * ____callingAssembly_15;
	// System.Reflection.RuntimeAssembly System.Resources.ResourceManager::m_callingAssembly
	RuntimeAssembly_t799877C849878A70E10D25C690D7B0476DAF0B56 * ___m_callingAssembly_16;
	// System.Resources.IResourceGroveler System.Resources.ResourceManager::resourceGroveler
	RuntimeObject* ___resourceGroveler_17;

public:
	inline static int32_t get_offset_of_BaseNameField_0() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___BaseNameField_0)); }
	inline String_t* get_BaseNameField_0() const { return ___BaseNameField_0; }
	inline String_t** get_address_of_BaseNameField_0() { return &___BaseNameField_0; }
	inline void set_BaseNameField_0(String_t* value)
	{
		___BaseNameField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BaseNameField_0), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceSets_1() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___ResourceSets_1)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_ResourceSets_1() const { return ___ResourceSets_1; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_ResourceSets_1() { return &___ResourceSets_1; }
	inline void set_ResourceSets_1(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___ResourceSets_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResourceSets_1), (void*)value);
	}

	inline static int32_t get_offset_of__resourceSets_2() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____resourceSets_2)); }
	inline Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E * get__resourceSets_2() const { return ____resourceSets_2; }
	inline Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E ** get_address_of__resourceSets_2() { return &____resourceSets_2; }
	inline void set__resourceSets_2(Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E * value)
	{
		____resourceSets_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____resourceSets_2), (void*)value);
	}

	inline static int32_t get_offset_of_moduleDir_3() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___moduleDir_3)); }
	inline String_t* get_moduleDir_3() const { return ___moduleDir_3; }
	inline String_t** get_address_of_moduleDir_3() { return &___moduleDir_3; }
	inline void set_moduleDir_3(String_t* value)
	{
		___moduleDir_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moduleDir_3), (void*)value);
	}

	inline static int32_t get_offset_of_MainAssembly_4() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___MainAssembly_4)); }
	inline Assembly_t * get_MainAssembly_4() const { return ___MainAssembly_4; }
	inline Assembly_t ** get_address_of_MainAssembly_4() { return &___MainAssembly_4; }
	inline void set_MainAssembly_4(Assembly_t * value)
	{
		___MainAssembly_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MainAssembly_4), (void*)value);
	}

	inline static int32_t get_offset_of__locationInfo_5() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____locationInfo_5)); }
	inline Type_t * get__locationInfo_5() const { return ____locationInfo_5; }
	inline Type_t ** get_address_of__locationInfo_5() { return &____locationInfo_5; }
	inline void set__locationInfo_5(Type_t * value)
	{
		____locationInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____locationInfo_5), (void*)value);
	}

	inline static int32_t get_offset_of__userResourceSet_6() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____userResourceSet_6)); }
	inline Type_t * get__userResourceSet_6() const { return ____userResourceSet_6; }
	inline Type_t ** get_address_of__userResourceSet_6() { return &____userResourceSet_6; }
	inline void set__userResourceSet_6(Type_t * value)
	{
		____userResourceSet_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____userResourceSet_6), (void*)value);
	}

	inline static int32_t get_offset_of__neutralResourcesCulture_7() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____neutralResourcesCulture_7)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get__neutralResourcesCulture_7() const { return ____neutralResourcesCulture_7; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of__neutralResourcesCulture_7() { return &____neutralResourcesCulture_7; }
	inline void set__neutralResourcesCulture_7(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		____neutralResourcesCulture_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____neutralResourcesCulture_7), (void*)value);
	}

	inline static int32_t get_offset_of__lastUsedResourceCache_8() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____lastUsedResourceCache_8)); }
	inline CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84 * get__lastUsedResourceCache_8() const { return ____lastUsedResourceCache_8; }
	inline CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84 ** get_address_of__lastUsedResourceCache_8() { return &____lastUsedResourceCache_8; }
	inline void set__lastUsedResourceCache_8(CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84 * value)
	{
		____lastUsedResourceCache_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastUsedResourceCache_8), (void*)value);
	}

	inline static int32_t get_offset_of__ignoreCase_9() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____ignoreCase_9)); }
	inline bool get__ignoreCase_9() const { return ____ignoreCase_9; }
	inline bool* get_address_of__ignoreCase_9() { return &____ignoreCase_9; }
	inline void set__ignoreCase_9(bool value)
	{
		____ignoreCase_9 = value;
	}

	inline static int32_t get_offset_of_UseManifest_10() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___UseManifest_10)); }
	inline bool get_UseManifest_10() const { return ___UseManifest_10; }
	inline bool* get_address_of_UseManifest_10() { return &___UseManifest_10; }
	inline void set_UseManifest_10(bool value)
	{
		___UseManifest_10 = value;
	}

	inline static int32_t get_offset_of_UseSatelliteAssem_11() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___UseSatelliteAssem_11)); }
	inline bool get_UseSatelliteAssem_11() const { return ___UseSatelliteAssem_11; }
	inline bool* get_address_of_UseSatelliteAssem_11() { return &___UseSatelliteAssem_11; }
	inline void set_UseSatelliteAssem_11(bool value)
	{
		___UseSatelliteAssem_11 = value;
	}

	inline static int32_t get_offset_of__fallbackLoc_12() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____fallbackLoc_12)); }
	inline int32_t get__fallbackLoc_12() const { return ____fallbackLoc_12; }
	inline int32_t* get_address_of__fallbackLoc_12() { return &____fallbackLoc_12; }
	inline void set__fallbackLoc_12(int32_t value)
	{
		____fallbackLoc_12 = value;
	}

	inline static int32_t get_offset_of__satelliteContractVersion_13() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____satelliteContractVersion_13)); }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * get__satelliteContractVersion_13() const { return ____satelliteContractVersion_13; }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** get_address_of__satelliteContractVersion_13() { return &____satelliteContractVersion_13; }
	inline void set__satelliteContractVersion_13(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * value)
	{
		____satelliteContractVersion_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____satelliteContractVersion_13), (void*)value);
	}

	inline static int32_t get_offset_of__lookedForSatelliteContractVersion_14() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____lookedForSatelliteContractVersion_14)); }
	inline bool get__lookedForSatelliteContractVersion_14() const { return ____lookedForSatelliteContractVersion_14; }
	inline bool* get_address_of__lookedForSatelliteContractVersion_14() { return &____lookedForSatelliteContractVersion_14; }
	inline void set__lookedForSatelliteContractVersion_14(bool value)
	{
		____lookedForSatelliteContractVersion_14 = value;
	}

	inline static int32_t get_offset_of__callingAssembly_15() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____callingAssembly_15)); }
	inline Assembly_t * get__callingAssembly_15() const { return ____callingAssembly_15; }
	inline Assembly_t ** get_address_of__callingAssembly_15() { return &____callingAssembly_15; }
	inline void set__callingAssembly_15(Assembly_t * value)
	{
		____callingAssembly_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____callingAssembly_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_callingAssembly_16() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___m_callingAssembly_16)); }
	inline RuntimeAssembly_t799877C849878A70E10D25C690D7B0476DAF0B56 * get_m_callingAssembly_16() const { return ___m_callingAssembly_16; }
	inline RuntimeAssembly_t799877C849878A70E10D25C690D7B0476DAF0B56 ** get_address_of_m_callingAssembly_16() { return &___m_callingAssembly_16; }
	inline void set_m_callingAssembly_16(RuntimeAssembly_t799877C849878A70E10D25C690D7B0476DAF0B56 * value)
	{
		___m_callingAssembly_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_callingAssembly_16), (void*)value);
	}

	inline static int32_t get_offset_of_resourceGroveler_17() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___resourceGroveler_17)); }
	inline RuntimeObject* get_resourceGroveler_17() const { return ___resourceGroveler_17; }
	inline RuntimeObject** get_address_of_resourceGroveler_17() { return &___resourceGroveler_17; }
	inline void set_resourceGroveler_17(RuntimeObject* value)
	{
		___resourceGroveler_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resourceGroveler_17), (void*)value);
	}
};

struct ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields
{
public:
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_18;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_19;
	// System.Type System.Resources.ResourceManager::_minResourceSet
	Type_t * ____minResourceSet_20;
	// System.String System.Resources.ResourceManager::ResReaderTypeName
	String_t* ___ResReaderTypeName_21;
	// System.String System.Resources.ResourceManager::ResSetTypeName
	String_t* ___ResSetTypeName_22;
	// System.String System.Resources.ResourceManager::MscorlibName
	String_t* ___MscorlibName_23;
	// System.Int32 System.Resources.ResourceManager::DEBUG
	int32_t ___DEBUG_24;

public:
	inline static int32_t get_offset_of_MagicNumber_18() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___MagicNumber_18)); }
	inline int32_t get_MagicNumber_18() const { return ___MagicNumber_18; }
	inline int32_t* get_address_of_MagicNumber_18() { return &___MagicNumber_18; }
	inline void set_MagicNumber_18(int32_t value)
	{
		___MagicNumber_18 = value;
	}

	inline static int32_t get_offset_of_HeaderVersionNumber_19() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___HeaderVersionNumber_19)); }
	inline int32_t get_HeaderVersionNumber_19() const { return ___HeaderVersionNumber_19; }
	inline int32_t* get_address_of_HeaderVersionNumber_19() { return &___HeaderVersionNumber_19; }
	inline void set_HeaderVersionNumber_19(int32_t value)
	{
		___HeaderVersionNumber_19 = value;
	}

	inline static int32_t get_offset_of__minResourceSet_20() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ____minResourceSet_20)); }
	inline Type_t * get__minResourceSet_20() const { return ____minResourceSet_20; }
	inline Type_t ** get_address_of__minResourceSet_20() { return &____minResourceSet_20; }
	inline void set__minResourceSet_20(Type_t * value)
	{
		____minResourceSet_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minResourceSet_20), (void*)value);
	}

	inline static int32_t get_offset_of_ResReaderTypeName_21() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___ResReaderTypeName_21)); }
	inline String_t* get_ResReaderTypeName_21() const { return ___ResReaderTypeName_21; }
	inline String_t** get_address_of_ResReaderTypeName_21() { return &___ResReaderTypeName_21; }
	inline void set_ResReaderTypeName_21(String_t* value)
	{
		___ResReaderTypeName_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResReaderTypeName_21), (void*)value);
	}

	inline static int32_t get_offset_of_ResSetTypeName_22() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___ResSetTypeName_22)); }
	inline String_t* get_ResSetTypeName_22() const { return ___ResSetTypeName_22; }
	inline String_t** get_address_of_ResSetTypeName_22() { return &___ResSetTypeName_22; }
	inline void set_ResSetTypeName_22(String_t* value)
	{
		___ResSetTypeName_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResSetTypeName_22), (void*)value);
	}

	inline static int32_t get_offset_of_MscorlibName_23() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___MscorlibName_23)); }
	inline String_t* get_MscorlibName_23() const { return ___MscorlibName_23; }
	inline String_t** get_address_of_MscorlibName_23() { return &___MscorlibName_23; }
	inline void set_MscorlibName_23(String_t* value)
	{
		___MscorlibName_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MscorlibName_23), (void*)value);
	}

	inline static int32_t get_offset_of_DEBUG_24() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___DEBUG_24)); }
	inline int32_t get_DEBUG_24() const { return ___DEBUG_24; }
	inline int32_t* get_address_of_DEBUG_24() { return &___DEBUG_24; }
	inline void set_DEBUG_24(int32_t value)
	{
		___DEBUG_24 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.ArrayTypeMismatchException
struct ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Resources.MissingManifestResourceException
struct MissingManifestResourceException_tAC74F21ADC46CCB2BCC710464434E3B97F72FACB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Reflection.TypeInfo
struct TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F  : public Type_t
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T System.Runtime.InteropServices.MemoryMarshal::Read<System.UInt64>(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t MemoryMarshal_Read_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mBB533DF56B0405E2EFA2048F66CA1ADB46160594_gshared_inline (ReadOnlySpan_1_t84EFFCCB4E1285C25BD39C89683ECD46BB8B322E  ___source0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.MemoryMarshal::Write<System.UInt32>(System.Span`1<System.Byte>,T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mCD67041291E7BFA54C7D8C2E25AB1645357F593E_gshared_inline (Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182  ___destination0, uint32_t* ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.MemoryMarshal::Write<System.UInt64>(System.Span`1<System.Byte>,T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mFD6B2C3214FE27F6309A4B5A09616C985BB65453_gshared_inline (Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182  ___destination0, uint64_t* ___value1, const RuntimeMethod* method);
// !!0 System.Runtime.CompilerServices.Unsafe::As<System.Object>(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Unsafe_As_TisRuntimeObject_m49DCD5A352E5546A5A2B36BFF07BBEFD11071CC0_gshared_inline (RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(System.Pinnable`1<T>,System.IntPtr,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mBE644F1617274428AD9DC42DC42198B97333CCB5_gshared_inline (ReadOnlySpan_1_t4652F86343E7C4D6B3A202A16FF45FBE534496D0 * __this, Pinnable_1_t0BBB916DE7483A3E704D129D1CEB8F647945EFDE * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.ReadOnlyMemory`1<System.Char>::.ctor(System.Object,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlyMemory_1__ctor_m43E3FBEB023D5620B54E4805C068D6CA1EFFA363_gshared_inline (ReadOnlyMemory_1_t4371295666DCEA58DF106E5857800DED705F94AC * __this, RuntimeObject * ___obj0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method);
// !!0& System.Runtime.CompilerServices.Unsafe::AsRef<System.Char>(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_AsRef_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mEC707D7DB383D32316E6098FCD68588EC1A98AFC_gshared_inline (void* ___source0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.CompilerServices.Unsafe::ByteOffset<System.Char>(!!0&,!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t Unsafe_ByteOffset_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mA8C78756EDF0A5CE73217949F4FBB4627C03DD29_gshared_inline (Il2CppChar* ___origin0, Il2CppChar* ___target1, const RuntimeMethod* method);
// System.Boolean System.Buffers.ReadOnlySequence`1<System.Char>::TryGetString(System.String&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySequence_1_TryGetString_m91897FD4F916F57D7C84FD45B0CB1A56CE05B7C6_gshared (ReadOnlySequence_1_t1CA47D16AEAC242B3518C691BE0A2B5991F46B81 * __this, String_t** ___text0, int32_t* ___start1, int32_t* ___length2, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame<System.Byte>(!!0&,!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mFC5681897A28ACE4F4CC26DC9552366E45AED7D7_gshared_inline (uint8_t* ___left0, uint8_t* ___right1, const RuntimeMethod* method);
// System.Int32 System.Numerics.Vector`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_mBCD0997C4DF6691469D09BD74D45014A78B056C5_gshared_inline (const RuntimeMethod* method);
// !!0& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.Byte>(!!0&,System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21792A067D720CFF0BFCCC4AFE7E17D916DFD3F5_gshared_inline (uint8_t* ___source0, intptr_t ___byteOffset1, const RuntimeMethod* method);
// System.Boolean System.Numerics.Vector`1<System.Byte>::op_Inequality(System.Numerics.Vector`1<!0>,System.Numerics.Vector`1<!0>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Inequality_mEA379E06566B02A57C3DF20988F7D3C2A7A20080_gshared_inline (Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  ___left0, Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  ___right1, const RuntimeMethod* method);
// System.Boolean System.Numerics.Vector`1<System.Byte>::op_Equality(System.Numerics.Vector`1<!0>,System.Numerics.Vector`1<!0>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_m8D447425CEE4ED8947D3F00FBCEE8CF5E45FA7C7_gshared_inline (Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  ___left0, Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  ___right1, const RuntimeMethod* method);
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m1BD0982F8A577242AAFBB58E3960AF4550512E78_gshared_inline (ReadOnlySpan_1_t84EFFCCB4E1285C25BD39C89683ECD46BB8B322E * __this, const RuntimeMethod* method);
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB36A7827C4BC5E4F9552256997C3EC855D2FDE05_gshared (ReadOnlySpan_1_t84EFFCCB4E1285C25BD39C89683ECD46BB8B322E  ___span0, const RuntimeMethod* method);
// System.Int32 System.Span`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m64D656C1E24D68D90E296A217B2A3BD15FE93673_gshared_inline (Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182 * __this, const RuntimeMethod* method);
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mE806AAF0979C31DD5322C12D79E0C889C7386F4A_gshared (Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182  ___span0, const RuntimeMethod* method);
// System.Boolean System.Numerics.Vector`1<System.Byte>::Equals(System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_mD3F6337841B584C86C6EEEF30CA41092919BAD63_gshared (Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383 * __this, Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  ___other0, const RuntimeMethod* method);

// System.UInt32 System.Buffers.Binary.BinaryPrimitives::ReverseEndianness(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_m1EA04BA58FBE4F1A6D1711F72B27F279BF7485F2_inline (uint32_t ___value0, const RuntimeMethod* method);
// T System.Runtime.InteropServices.MemoryMarshal::Read<System.UInt64>(System.ReadOnlySpan`1<System.Byte>)
inline uint64_t MemoryMarshal_Read_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mBB533DF56B0405E2EFA2048F66CA1ADB46160594_inline (ReadOnlySpan_1_t84EFFCCB4E1285C25BD39C89683ECD46BB8B322E  ___source0, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (ReadOnlySpan_1_t84EFFCCB4E1285C25BD39C89683ECD46BB8B322E , const RuntimeMethod*))MemoryMarshal_Read_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mBB533DF56B0405E2EFA2048F66CA1ADB46160594_gshared_inline)(___source0, method);
}
// System.UInt64 System.Buffers.Binary.BinaryPrimitives::ReverseEndianness(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t BinaryPrimitives_ReverseEndianness_m6E340888BBA9A15C68EFC298EFC93F45EB8349C9_inline (uint64_t ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.MemoryMarshal::Write<System.UInt32>(System.Span`1<System.Byte>,T&)
inline void MemoryMarshal_Write_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mCD67041291E7BFA54C7D8C2E25AB1645357F593E_inline (Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182  ___destination0, uint32_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182 , uint32_t*, const RuntimeMethod*))MemoryMarshal_Write_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mCD67041291E7BFA54C7D8C2E25AB1645357F593E_gshared_inline)(___destination0, ___value1, method);
}
// System.Void System.Runtime.InteropServices.MemoryMarshal::Write<System.UInt64>(System.Span`1<System.Byte>,T&)
inline void MemoryMarshal_Write_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mFD6B2C3214FE27F6309A4B5A09616C985BB65453_inline (Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182  ___destination0, uint64_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182 , uint64_t*, const RuntimeMethod*))MemoryMarshal_Write_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mFD6B2C3214FE27F6309A4B5A09616C985BB65453_gshared_inline)(___destination0, ___value1, method);
}
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0 (const RuntimeMethod* method);
// System.Int32 System.Guid::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_GetHashCode_mD32F5054E937C98B3D082594B3849808F1E92AE7 (Guid_t * __this, const RuntimeMethod* method);
// !!0 System.Runtime.CompilerServices.Unsafe::As<System.Pinnable`1<System.Char>>(System.Object)
inline Pinnable_1_t0BBB916DE7483A3E704D129D1CEB8F647945EFDE * Unsafe_As_TisPinnable_1_t0BBB916DE7483A3E704D129D1CEB8F647945EFDE_m8340DA2B38CFC7F3E7C4AD2F8DD32994B3C6BBDE_inline (RuntimeObject * ___o0, const RuntimeMethod* method)
{
	return ((  Pinnable_1_t0BBB916DE7483A3E704D129D1CEB8F647945EFDE * (*) (RuntimeObject *, const RuntimeMethod*))Unsafe_As_TisRuntimeObject_m49DCD5A352E5546A5A2B36BFF07BBEFD11071CC0_gshared_inline)(___o0, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(System.Pinnable`1<T>,System.IntPtr,System.Int32)
inline void ReadOnlySpan_1__ctor_mBE644F1617274428AD9DC42DC42198B97333CCB5_inline (ReadOnlySpan_1_t4652F86343E7C4D6B3A202A16FF45FBE534496D0 * __this, Pinnable_1_t0BBB916DE7483A3E704D129D1CEB8F647945EFDE * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t4652F86343E7C4D6B3A202A16FF45FBE534496D0 *, Pinnable_1_t0BBB916DE7483A3E704D129D1CEB8F647945EFDE *, intptr_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mBE644F1617274428AD9DC42DC42198B97333CCB5_gshared_inline)(__this, ___pinnable0, ___byteOffset1, ___length2, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m2373E82E45B766DD1D0B5EEBC9EAB68EB787F05C (int32_t ___argument0, const RuntimeMethod* method);
// System.Void System.ReadOnlyMemory`1<System.Char>::.ctor(System.Object,System.Int32,System.Int32)
inline void ReadOnlyMemory_1__ctor_m43E3FBEB023D5620B54E4805C068D6CA1EFFA363_inline (ReadOnlyMemory_1_t4371295666DCEA58DF106E5857800DED705F94AC * __this, RuntimeObject * ___obj0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyMemory_1_t4371295666DCEA58DF106E5857800DED705F94AC *, RuntimeObject *, int32_t, int32_t, const RuntimeMethod*))ReadOnlyMemory_1__ctor_m43E3FBEB023D5620B54E4805C068D6CA1EFFA363_gshared_inline)(__this, ___obj0, ___start1, ___length2, method);
}
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42 (const RuntimeMethod* method);
// !!0& System.Runtime.CompilerServices.Unsafe::AsRef<System.Char>(System.Void*)
inline Il2CppChar* Unsafe_AsRef_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mEC707D7DB383D32316E6098FCD68588EC1A98AFC_inline (void* ___source0, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (void*, const RuntimeMethod*))Unsafe_AsRef_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mEC707D7DB383D32316E6098FCD68588EC1A98AFC_gshared_inline)(___source0, method);
}
// System.IntPtr System.Runtime.CompilerServices.Unsafe::ByteOffset<System.Char>(!!0&,!!0&)
inline intptr_t Unsafe_ByteOffset_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mA8C78756EDF0A5CE73217949F4FBB4627C03DD29_inline (Il2CppChar* ___origin0, Il2CppChar* ___target1, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (Il2CppChar*, Il2CppChar*, const RuntimeMethod*))Unsafe_ByteOffset_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mA8C78756EDF0A5CE73217949F4FBB4627C03DD29_gshared_inline)(___origin0, ___target1, method);
}
// System.IntPtr System.MemoryExtensions::MeasureStringAdjustment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MemoryExtensions_MeasureStringAdjustment_m8DB02085F84EB01FABE00EDD73BF674877E3E4F2 (const RuntimeMethod* method);
// System.Void System.NUInt::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NUInt__ctor_m80F190866A3430F555E7930DDBBA8ECFCBE5A9FD (NUInt_t406BD8A487DEDAC571390BC16847E098DF802EEE * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void System.NUInt::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NUInt__ctor_mE23F28776716D16378569C1A81912640B3841E1C (NUInt_t406BD8A487DEDAC571390BC16847E098DF802EEE * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Type System.SR::get_ResourceType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * SR_get_ResourceType_m15579724A45C4709FA13DE13C0476AD6B49B2490_inline (const RuntimeMethod* method);
// System.Void System.Resources.ResourceManager::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ResourceManager__ctor_mC8A203D5697A2FAD2B336CF3534C21276918BD25 (ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * __this, Type_t * ___resourceSource0, const RuntimeMethod* method);
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * SR_get_ResourceManager_m2606ACFED1D6737B1FDC1FB40D0942A0561E2756 (const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m62F0586691097AA2EE48F1596A130170BCFBF7F6 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m43EFD1EFC0838BAE554A47D8413716290B71918E (const RuntimeMethod* method);
// System.String System.String::Join(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m7BEA4678919FD9393062F8E8B5328A4DBB1A95E5 (String_t* ___separator0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_mAF61BCAFF41F7A4BDE151DB4124E6E5ABF18B022 (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Buffers.ReadOnlySequence`1<System.Char>::TryGetString(System.String&,System.Int32&,System.Int32&)
inline bool ReadOnlySequence_1_TryGetString_m91897FD4F916F57D7C84FD45B0CB1A56CE05B7C6 (ReadOnlySequence_1_t1CA47D16AEAC242B3518C691BE0A2B5991F46B81 * __this, String_t** ___text0, int32_t* ___start1, int32_t* ___length2, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySequence_1_t1CA47D16AEAC242B3518C691BE0A2B5991F46B81 *, String_t**, int32_t*, int32_t*, const RuntimeMethod*))ReadOnlySequence_1_TryGetString_m91897FD4F916F57D7C84FD45B0CB1A56CE05B7C6_gshared)(__this, ___text0, ___start1, ___length2, method);
}
// System.Void System.SequencePosition::.ctor(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequencePosition__ctor_m9734A27EB20AD6A3264FA9FC7C15CFDEDCB5268A (SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F * __this, RuntimeObject * ___object0, int32_t ___integer1, const RuntimeMethod* method);
// System.Object System.SequencePosition::GetObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SequencePosition_GetObject_m8CA3A87AB194F4C959B952CD2426D306ADA14945_inline (SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F * __this, const RuntimeMethod* method);
// System.Int32 System.SequencePosition::GetInteger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SequencePosition_GetInteger_m6FF2DBD1C24C3BDE367A36A697A2A7EFD38918FA_inline (SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F * __this, const RuntimeMethod* method);
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053 (RuntimeObject * ___objA0, RuntimeObject * ___objB1, const RuntimeMethod* method);
// System.Boolean System.SequencePosition::Equals(System.SequencePosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequencePosition_Equals_m7CC387808C8091E7E1B1909E0A037BC6210C74C8 (SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F * __this, SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F  ___other0, const RuntimeMethod* method);
// System.Boolean System.SequencePosition::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequencePosition_Equals_m6D96603126F4308326E0EBE267C3DF75BA6E4348 (SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Numerics.Hashing.HashHelpers::Combine(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_Combine_m2949BCBDB20182A72C74C7AC70E773500B7AA1EF (int32_t ___h10, int32_t ___h21, const RuntimeMethod* method);
// System.Int32 System.SequencePosition::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SequencePosition_GetHashCode_mCCA35B16C95BB0719BB4B3A44EFF5711D69C94E0 (SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame<System.Byte>(!!0&,!!0&)
inline bool Unsafe_AreSame_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mFC5681897A28ACE4F4CC26DC9552366E45AED7D7_inline (uint8_t* ___left0, uint8_t* ___right1, const RuntimeMethod* method)
{
	return ((  bool (*) (uint8_t*, uint8_t*, const RuntimeMethod*))Unsafe_AreSame_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mFC5681897A28ACE4F4CC26DC9552366E45AED7D7_gshared_inline)(___left0, ___right1, method);
}
// System.IntPtr System.IntPtr::op_Explicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m9092E57CE669E7B9CCDCF5ADD6DFB758D6545FBF (int32_t ___value0, const RuntimeMethod* method);
// System.Void* System.NUInt::op_Explicit(System.NUInt)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NUInt_op_Explicit_m5AFE090A166318ADC004279C16853A93F2BFB7E6_inline (NUInt_t406BD8A487DEDAC571390BC16847E098DF802EEE  ___value0, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495 (void* ___value0, const RuntimeMethod* method);
// System.Boolean System.Numerics.Vector::get_IsHardwareAccelerated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_get_IsHardwareAccelerated_m740478D572780E5447E24E0D9DEDE6EFF43A63FE (const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD (intptr_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Numerics.Vector`1<System.Byte>::get_Count()
inline int32_t Vector_1_get_Count_mBCD0997C4DF6691469D09BD74D45014A78B056C5_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))Vector_1_get_Count_mBCD0997C4DF6691469D09BD74D45014A78B056C5_gshared_inline)(method);
}
// System.IntPtr System.IntPtr::op_Subtraction(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Subtraction_m02F3295A959F0DF44F66D04D88F3EE66DFC4BFD9 (intptr_t ___pointer0, int32_t ___offset1, const RuntimeMethod* method);
// !!0& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.Byte>(!!0&,System.IntPtr)
inline uint8_t* Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21792A067D720CFF0BFCCC4AFE7E17D916DFD3F5_inline (uint8_t* ___source0, intptr_t ___byteOffset1, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (uint8_t*, intptr_t, const RuntimeMethod*))Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21792A067D720CFF0BFCCC4AFE7E17D916DFD3F5_gshared_inline)(___source0, ___byteOffset1, method);
}
// System.Boolean System.Numerics.Vector`1<System.Byte>::op_Inequality(System.Numerics.Vector`1<!0>,System.Numerics.Vector`1<!0>)
inline bool Vector_1_op_Inequality_mEA379E06566B02A57C3DF20988F7D3C2A7A20080_inline (Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  ___left0, Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  ___right1, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383 , Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383 , const RuntimeMethod*))Vector_1_op_Inequality_mEA379E06566B02A57C3DF20988F7D3C2A7A20080_gshared_inline)(___left0, ___right1, method);
}
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD (intptr_t ___pointer0, int32_t ___offset1, const RuntimeMethod* method);
// System.Boolean System.Numerics.Vector`1<System.Byte>::op_Equality(System.Numerics.Vector`1<!0>,System.Numerics.Vector`1<!0>)
inline bool Vector_1_op_Equality_m8D447425CEE4ED8947D3F00FBCEE8CF5E45FA7C7_inline (Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  ___left0, Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  ___right1, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383 , Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383 , const RuntimeMethod*))Vector_1_op_Equality_m8D447425CEE4ED8947D3F00FBCEE8CF5E45FA7C7_gshared_inline)(___left0, ___right1, method);
}
// System.Boolean System.UIntPtr::op_Inequality(System.UIntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIntPtr_op_Inequality_m7D22151019093F083240F615DA4B70CE2CF494B4 (uintptr_t ___value10, uintptr_t ___value21, const RuntimeMethod* method);
// System.Boolean System.UIntPtr::op_Equality(System.UIntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIntPtr_op_Equality_mA909564C1AAE89E5119A6BD536C1A1B260625A5D (uintptr_t ___value10, uintptr_t ___value21, const RuntimeMethod* method);
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636 (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB (Type_t * __this, const RuntimeMethod* method);
// System.Type System.Nullable::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629 (Type_t * ___nullableType0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsStatic_mE36F3A5B2DFF613C704AA56989D90D72760391EB (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean System.SpanHelpers::IsReferenceOrContainsReferencesCore(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferencesCore_m7C3948248C6FD894C589A59F144D2511884B2B16 (Type_t * ___type0, const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentNullException_mE49F9BB640A18BFF813EB326A42B9D55532ECEF2 (int32_t ___argument0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateArrayTypeMismatchException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArrayTypeMismatchException_m044D1C60A98EBDEB447254FF61B6F1295ED19060 (const RuntimeMethod* method);
// System.Void System.ArrayTypeMismatchException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayTypeMismatchException__ctor_m76932588D9A980CDB675D12B0479F8EAC2D5E96D (ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784 * __this, const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateArgumentException_InvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentException_InvalidTypeWithPointersNotSupported_m124B343C5CB43B677ABC4CF37E107C51482FD7B1 (Type_t * ___type0, const RuntimeMethod* method);
// System.String System.SR::get_Argument_InvalidTypeWithPointersNotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_InvalidTypeWithPointersNotSupported_mE96E8BFFD8E20501B8FD4053B314A5783D621C96 (const RuntimeMethod* method);
// System.String System.SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m91AB7EEF3BB0D4BCB00E98A04B56D8F4A0E18365 (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateArgumentException_DestinationTooShort()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentException_DestinationTooShort_mAE3C46E51D92C2DD624F5751BAD13B935E0CAF83 (const RuntimeMethod* method);
// System.String System.SR::get_Argument_DestinationTooShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_DestinationTooShort_mED675B92FD55A6DE1EDF9A89CDAF1B1440E5DF4D (const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateIndexOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateIndexOutOfRangeException_m841E01AF5B87D8C6112D5330ED526C6E868DABE1 (const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523 (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * __this, const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentOutOfRangeException_mCCFB89982213B1F9ABC9EE26E8130D4A105C0CAF (const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m81CEEF1FCB5EFBBAA39071F48BCFBC16AED0C915 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentOutOfRangeException_mDD900C9DFE7047B18EE5F4BF49DA755ABD32BFE5 (int32_t ___argument0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Exception System.ThrowHelper::CreateInvalidOperationException_EndPositionNotReached()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateInvalidOperationException_EndPositionNotReached_m9262C7184C213697CC6725AE20DE2E84C77583BC (const RuntimeMethod* method);
// System.String System.SR::get_EndPositionNotReached()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_EndPositionNotReached_m416D55E66917D22BD1EC0A0E3A3F2E400813C9C5 (const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentException_InvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m1E81A6DA3EE9ED361A393F94DCBF0D6C237923C7 (Type_t * ___type0, const RuntimeMethod* method);
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m1BD0982F8A577242AAFBB58E3960AF4550512E78_inline (ReadOnlySpan_1_t84EFFCCB4E1285C25BD39C89683ECD46BB8B322E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t84EFFCCB4E1285C25BD39C89683ECD46BB8B322E *, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m1BD0982F8A577242AAFBB58E3960AF4550512E78_gshared_inline)(__this, method);
}
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.ReadOnlySpan`1<T>)
inline uint8_t* MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB36A7827C4BC5E4F9552256997C3EC855D2FDE05 (ReadOnlySpan_1_t84EFFCCB4E1285C25BD39C89683ECD46BB8B322E  ___span0, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_t84EFFCCB4E1285C25BD39C89683ECD46BB8B322E , const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB36A7827C4BC5E4F9552256997C3EC855D2FDE05_gshared)(___span0, method);
}
// System.Int32 System.Span`1<System.Byte>::get_Length()
inline int32_t Span_1_get_Length_m64D656C1E24D68D90E296A217B2A3BD15FE93673_inline (Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182 *, const RuntimeMethod*))Span_1_get_Length_m64D656C1E24D68D90E296A217B2A3BD15FE93673_gshared_inline)(__this, method);
}
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.Span`1<T>)
inline uint8_t* MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mE806AAF0979C31DD5322C12D79E0C889C7386F4A (Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182  ___span0, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182 , const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mE806AAF0979C31DD5322C12D79E0C889C7386F4A_gshared)(___span0, method);
}
// System.Boolean System.Numerics.Vector`1<System.Byte>::Equals(System.Numerics.Vector`1<T>)
inline bool Vector_1_Equals_mD3F6337841B584C86C6EEEF30CA41092919BAD63 (Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383 * __this, Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383 *, Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383 , const RuntimeMethod*))Vector_1_Equals_mD3F6337841B584C86C6EEEF30CA41092919BAD63_gshared)(__this, ___other0, method);
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
// System.UInt32 System.Buffers.Binary.BinaryPrimitives::ReverseEndianness(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_m1EA04BA58FBE4F1A6D1711F72B27F279BF7485F2 (uint32_t ___value0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___value0;
		V_0 = ((int32_t)((int32_t)L_0&(int32_t)((int32_t)16711935)));
		uint32_t L_1 = ___value0;
		V_1 = ((int32_t)((int32_t)L_1&(int32_t)((int32_t)-16711936)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = V_1;
		uint32_t L_5 = V_1;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_2>>8))|(int32_t)((int32_t)((int32_t)L_3<<(int32_t)((int32_t)24))))), (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4<<(int32_t)8))|(int32_t)((int32_t)((uint32_t)L_5>>((int32_t)24)))))));
	}
}
// System.UInt64 System.Buffers.Binary.BinaryPrimitives::ReverseEndianness(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t BinaryPrimitives_ReverseEndianness_m6E340888BBA9A15C68EFC298EFC93F45EB8349C9 (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		uint32_t L_1;
		L_1 = BinaryPrimitives_ReverseEndianness_m1EA04BA58FBE4F1A6D1711F72B27F279BF7485F2_inline(((int32_t)((uint32_t)L_0)), /*hidden argument*/NULL);
		uint64_t L_2 = ___value0;
		uint32_t L_3;
		L_3 = BinaryPrimitives_ReverseEndianness_m1EA04BA58FBE4F1A6D1711F72B27F279BF7485F2_inline(((int32_t)((uint32_t)((int64_t)((uint64_t)L_2>>((int32_t)32))))), /*hidden argument*/NULL);
		return ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_1))<<(int32_t)((int32_t)32))), (int64_t)((int64_t)((uint64_t)L_3))));
	}
}
// System.UInt64 System.Buffers.Binary.BinaryPrimitives::ReadUInt64LittleEndian(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t BinaryPrimitives_ReadUInt64LittleEndian_m317E02A6C00229BB1A779CF946DA0E5A669D351E (ReadOnlySpan_1_t84EFFCCB4E1285C25BD39C89683ECD46BB8B322E  ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Read_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mBB533DF56B0405E2EFA2048F66CA1ADB46160594_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		ReadOnlySpan_1_t84EFFCCB4E1285C25BD39C89683ECD46BB8B322E  L_0 = ___source0;
		uint64_t L_1;
		L_1 = MemoryMarshal_Read_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mBB533DF56B0405E2EFA2048F66CA1ADB46160594_inline(L_0, /*hidden argument*/MemoryMarshal_Read_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mBB533DF56B0405E2EFA2048F66CA1ADB46160594_RuntimeMethod_var);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		bool L_2 = ((BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		uint64_t L_3 = V_0;
		uint64_t L_4;
		L_4 = BinaryPrimitives_ReverseEndianness_m6E340888BBA9A15C68EFC298EFC93F45EB8349C9_inline(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_0015:
	{
		uint64_t L_5 = V_0;
		return L_5;
	}
}
// System.Void System.Buffers.Binary.BinaryPrimitives::WriteUInt32LittleEndian(System.Span`1<System.Byte>,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryPrimitives_WriteUInt32LittleEndian_m6D9697C07CA021F14C771EF5631AFBC550129237 (Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182  ___destination0, uint32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Write_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mCD67041291E7BFA54C7D8C2E25AB1645357F593E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		uint32_t L_1 = ___value1;
		uint32_t L_2;
		L_2 = BinaryPrimitives_ReverseEndianness_m1EA04BA58FBE4F1A6D1711F72B27F279BF7485F2_inline(L_1, /*hidden argument*/NULL);
		___value1 = L_2;
	}

IL_000f:
	{
		Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182  L_3 = ___destination0;
		MemoryMarshal_Write_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mCD67041291E7BFA54C7D8C2E25AB1645357F593E_inline(L_3, (uint32_t*)(&___value1), /*hidden argument*/MemoryMarshal_Write_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mCD67041291E7BFA54C7D8C2E25AB1645357F593E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Buffers.Binary.BinaryPrimitives::WriteUInt64LittleEndian(System.Span`1<System.Byte>,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryPrimitives_WriteUInt64LittleEndian_m1A8E4BD67636277651CA9105A4CC77897916FB82 (Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182  ___destination0, uint64_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Write_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mFD6B2C3214FE27F6309A4B5A09616C985BB65453_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		uint64_t L_1 = ___value1;
		uint64_t L_2;
		L_2 = BinaryPrimitives_ReverseEndianness_m6E340888BBA9A15C68EFC298EFC93F45EB8349C9_inline(L_1, /*hidden argument*/NULL);
		___value1 = L_2;
	}

IL_000f:
	{
		Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182  L_3 = ___destination0;
		MemoryMarshal_Write_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mFD6B2C3214FE27F6309A4B5A09616C985BB65453_inline(L_3, (uint64_t*)(&___value1), /*hidden argument*/MemoryMarshal_Write_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mFD6B2C3214FE27F6309A4B5A09616C985BB65453_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m7ADBC0CC795155F3A58C4EB0B37A5D3BDDC91C24 (EmbeddedAttribute_tE58F103FA6A0842466B1EEC63506777E246D609F * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 System.Numerics.Hashing.HashHelpers::Combine(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_Combine_m2949BCBDB20182A72C74C7AC70E773500B7AA1EF (int32_t ___h10, int32_t ___h21, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___h10;
		int32_t L_1 = ___h10;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0<<(int32_t)5))|(int32_t)((int32_t)((uint32_t)L_1>>((int32_t)27)))));
		uint32_t L_2 = V_0;
		int32_t L_3 = ___h10;
		int32_t L_4 = ___h21;
		return ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3))^(int32_t)L_4));
	}
}
// System.Void System.Numerics.Hashing.HashHelpers::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashHelpers__cctor_m434EE7C76EB10A25F2630E40D195BD97472CF649 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_tBDA4D9230F4225CDB6E4FFDAD4D73D42271459CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0;
		L_0 = Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Guid_GetHashCode_mD32F5054E937C98B3D082594B3849808F1E92AE7((Guid_t *)(&V_0), /*hidden argument*/NULL);
		((HashHelpers_tBDA4D9230F4225CDB6E4FFDAD4D73D42271459CB_StaticFields*)il2cpp_codegen_static_fields_for(HashHelpers_tBDA4D9230F4225CDB6E4FFDAD4D73D42271459CB_il2cpp_TypeInfo_var))->set_RandomSeed_0(L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsByRefLikeAttribute__ctor_m03F2FAAE369F29D729B4C567D00CE4D78EF51AF2 (IsByRefLikeAttribute_tD87A30ADD21F922E1D63B800E7983076797A6179 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m9383636E820B195C6C24348D1A47F9715734BBF2 (IsReadOnlyAttribute_t1CB347F95A0004CB0C5AE22D84CBFBFCF9A5F373 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.ReadOnlySpan`1<System.Char> System.MemoryExtensions::AsSpan(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t4652F86343E7C4D6B3A202A16FF45FBE534496D0  MemoryExtensions_AsSpan_mB64DA5469C25F2C36A315160ED4FDCE7987A954B (String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_tCBF4BE8784F6BAC4D3C79E2C5069159F319ADCD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_mBE644F1617274428AD9DC42DC42198B97333CCB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisPinnable_1_t0BBB916DE7483A3E704D129D1CEB8F647945EFDE_m8340DA2B38CFC7F3E7C4AD2F8DD32994B3C6BBDE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t4652F86343E7C4D6B3A202A16FF45FBE534496D0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_t4652F86343E7C4D6B3A202A16FF45FBE534496D0 ));
		ReadOnlySpan_1_t4652F86343E7C4D6B3A202A16FF45FBE534496D0  L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		String_t* L_2 = ___text0;
		Pinnable_1_t0BBB916DE7483A3E704D129D1CEB8F647945EFDE * L_3;
		L_3 = Unsafe_As_TisPinnable_1_t0BBB916DE7483A3E704D129D1CEB8F647945EFDE_m8340DA2B38CFC7F3E7C4AD2F8DD32994B3C6BBDE_inline(L_2, /*hidden argument*/Unsafe_As_TisPinnable_1_t0BBB916DE7483A3E704D129D1CEB8F647945EFDE_m8340DA2B38CFC7F3E7C4AD2F8DD32994B3C6BBDE_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(MemoryExtensions_tCBF4BE8784F6BAC4D3C79E2C5069159F319ADCD7_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((MemoryExtensions_tCBF4BE8784F6BAC4D3C79E2C5069159F319ADCD7_StaticFields*)il2cpp_codegen_static_fields_for(MemoryExtensions_tCBF4BE8784F6BAC4D3C79E2C5069159F319ADCD7_il2cpp_TypeInfo_var))->get_StringAdjustment_0();
		String_t* L_5 = ___text0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_5, /*hidden argument*/NULL);
		ReadOnlySpan_1_t4652F86343E7C4D6B3A202A16FF45FBE534496D0  L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlySpan_1__ctor_mBE644F1617274428AD9DC42DC42198B97333CCB5_inline((&L_7), L_3, (intptr_t)L_4, L_6, /*hidden argument*/ReadOnlySpan_1__ctor_mBE644F1617274428AD9DC42DC42198B97333CCB5_RuntimeMethod_var);
		return L_7;
	}
}
// System.ReadOnlyMemory`1<System.Char> System.MemoryExtensions::AsMemory(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_t4371295666DCEA58DF106E5857800DED705F94AC  MemoryExtensions_AsMemory_m088CB21EACA739966AC4A17AB9ED68EDAFA32208 (String_t* ___text0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1__ctor_m43E3FBEB023D5620B54E4805C068D6CA1EFFA363_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlyMemory_1_t4371295666DCEA58DF106E5857800DED705F94AC  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_0019;
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
			goto IL_000f;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m2373E82E45B766DD1D0B5EEBC9EAB68EB787F05C(1, /*hidden argument*/NULL);
	}

IL_000f:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlyMemory_1_t4371295666DCEA58DF106E5857800DED705F94AC ));
		ReadOnlyMemory_1_t4371295666DCEA58DF106E5857800DED705F94AC  L_3 = V_0;
		return L_3;
	}

IL_0019:
	{
		int32_t L_4 = ___start1;
		String_t* L_5 = ___text0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = ___length2;
		String_t* L_8 = ___text0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___start1;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)L_10))))))
		{
			goto IL_0033;
		}
	}

IL_002d:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m2373E82E45B766DD1D0B5EEBC9EAB68EB787F05C(1, /*hidden argument*/NULL);
	}

IL_0033:
	{
		String_t* L_11 = ___text0;
		int32_t L_12 = ___start1;
		int32_t L_13 = ___length2;
		ReadOnlyMemory_1_t4371295666DCEA58DF106E5857800DED705F94AC  L_14;
		memset((&L_14), 0, sizeof(L_14));
		ReadOnlyMemory_1__ctor_m43E3FBEB023D5620B54E4805C068D6CA1EFFA363_inline((&L_14), L_11, L_12, L_13, /*hidden argument*/ReadOnlyMemory_1__ctor_m43E3FBEB023D5620B54E4805C068D6CA1EFFA363_RuntimeMethod_var);
		return L_14;
	}
}
// System.IntPtr System.MemoryExtensions::MeasureStringAdjustment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MemoryExtensions_MeasureStringAdjustment_m8DB02085F84EB01FABE00EDD73BF674877E3E4F2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_AsRef_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mEC707D7DB383D32316E6098FCD68588EC1A98AFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisPinnable_1_t0BBB916DE7483A3E704D129D1CEB8F647945EFDE_m8340DA2B38CFC7F3E7C4AD2F8DD32994B3C6BBDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_ByteOffset_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mA8C78756EDF0A5CE73217949F4FBB4627C03DD29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Il2CppChar* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		V_0 = _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
		String_t* L_0 = V_0;
		V_2 = L_0;
		String_t* L_1 = V_2;
		V_1 = (Il2CppChar*)((uintptr_t)L_1);
		Il2CppChar* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		Il2CppChar* L_3 = V_1;
		int32_t L_4;
		L_4 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_1 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_3, (int32_t)L_4));
	}

IL_0016:
	{
		String_t* L_5 = V_0;
		Pinnable_1_t0BBB916DE7483A3E704D129D1CEB8F647945EFDE * L_6;
		L_6 = Unsafe_As_TisPinnable_1_t0BBB916DE7483A3E704D129D1CEB8F647945EFDE_m8340DA2B38CFC7F3E7C4AD2F8DD32994B3C6BBDE_inline(L_5, /*hidden argument*/Unsafe_As_TisPinnable_1_t0BBB916DE7483A3E704D129D1CEB8F647945EFDE_m8340DA2B38CFC7F3E7C4AD2F8DD32994B3C6BBDE_RuntimeMethod_var);
		NullCheck(L_6);
		Il2CppChar* L_7 = L_6->get_address_of_Data_0();
		Il2CppChar* L_8 = V_1;
		Il2CppChar* L_9;
		L_9 = Unsafe_AsRef_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mEC707D7DB383D32316E6098FCD68588EC1A98AFC_inline((void*)(void*)L_8, /*hidden argument*/Unsafe_AsRef_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mEC707D7DB383D32316E6098FCD68588EC1A98AFC_RuntimeMethod_var);
		intptr_t L_10;
		L_10 = Unsafe_ByteOffset_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mA8C78756EDF0A5CE73217949F4FBB4627C03DD29_inline((Il2CppChar*)L_7, (Il2CppChar*)L_9, /*hidden argument*/Unsafe_ByteOffset_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mA8C78756EDF0A5CE73217949F4FBB4627C03DD29_RuntimeMethod_var);
		return (intptr_t)L_10;
	}
}
// System.Void System.MemoryExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryExtensions__cctor_m4B7CFDAAAD7E6550F0BAA8040A56D6EFF8C79A1C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_tCBF4BE8784F6BAC4D3C79E2C5069159F319ADCD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0;
		L_0 = MemoryExtensions_MeasureStringAdjustment_m8DB02085F84EB01FABE00EDD73BF674877E3E4F2(/*hidden argument*/NULL);
		((MemoryExtensions_tCBF4BE8784F6BAC4D3C79E2C5069159F319ADCD7_StaticFields*)il2cpp_codegen_static_fields_for(MemoryExtensions_tCBF4BE8784F6BAC4D3C79E2C5069159F319ADCD7_il2cpp_TypeInfo_var))->set_StringAdjustment_0((intptr_t)L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.NUInt::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NUInt__ctor_m80F190866A3430F555E7930DDBBA8ECFCBE5A9FD (NUInt_t406BD8A487DEDAC571390BC16847E098DF802EEE * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		__this->set__value_0((void*)((uintptr_t)L_0));
		return;
	}
}
IL2CPP_EXTERN_C  void NUInt__ctor_m80F190866A3430F555E7930DDBBA8ECFCBE5A9FD_AdjustorThunk (RuntimeObject * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NUInt_t406BD8A487DEDAC571390BC16847E098DF802EEE * _thisAdjusted = reinterpret_cast<NUInt_t406BD8A487DEDAC571390BC16847E098DF802EEE *>(__this + _offset);
	NUInt__ctor_m80F190866A3430F555E7930DDBBA8ECFCBE5A9FD(_thisAdjusted, ___value0, method);
}
// System.Void System.NUInt::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NUInt__ctor_mE23F28776716D16378569C1A81912640B3841E1C (NUInt_t406BD8A487DEDAC571390BC16847E098DF802EEE * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		__this->set__value_0((void*)((uintptr_t)L_0));
		return;
	}
}
IL2CPP_EXTERN_C  void NUInt__ctor_mE23F28776716D16378569C1A81912640B3841E1C_AdjustorThunk (RuntimeObject * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NUInt_t406BD8A487DEDAC571390BC16847E098DF802EEE * _thisAdjusted = reinterpret_cast<NUInt_t406BD8A487DEDAC571390BC16847E098DF802EEE *>(__this + _offset);
	NUInt__ctor_mE23F28776716D16378569C1A81912640B3841E1C(_thisAdjusted, ___value0, method);
}
// System.NUInt System.NUInt::op_Explicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NUInt_t406BD8A487DEDAC571390BC16847E098DF802EEE  NUInt_op_Explicit_m4399B7C0A2C38926B4B0B6907D1EF51D55BA45C5 (int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		NUInt_t406BD8A487DEDAC571390BC16847E098DF802EEE  L_1;
		memset((&L_1), 0, sizeof(L_1));
		NUInt__ctor_m80F190866A3430F555E7930DDBBA8ECFCBE5A9FD((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void* System.NUInt::op_Explicit(System.NUInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NUInt_op_Explicit_m5AFE090A166318ADC004279C16853A93F2BFB7E6 (NUInt_t406BD8A487DEDAC571390BC16847E098DF802EEE  ___value0, const RuntimeMethod* method)
{
	{
		NUInt_t406BD8A487DEDAC571390BC16847E098DF802EEE  L_0 = ___value0;
		void* L_1 = L_0.get__value_0();
		return (void*)(L_1);
	}
}
// System.NUInt System.NUInt::op_Multiply(System.NUInt,System.NUInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NUInt_t406BD8A487DEDAC571390BC16847E098DF802EEE  NUInt_op_Multiply_mD8161E8C1CD220AFA17106FE5ADD2D8A2ECE58F5 (NUInt_t406BD8A487DEDAC571390BC16847E098DF802EEE  ___left0, NUInt_t406BD8A487DEDAC571390BC16847E098DF802EEE  ___right1, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_001e;
		}
	}
	{
		NUInt_t406BD8A487DEDAC571390BC16847E098DF802EEE  L_1 = ___left0;
		void* L_2 = L_1.get__value_0();
		NUInt_t406BD8A487DEDAC571390BC16847E098DF802EEE  L_3 = ___right1;
		void* L_4 = L_3.get__value_0();
		NUInt_t406BD8A487DEDAC571390BC16847E098DF802EEE  L_5;
		memset((&L_5), 0, sizeof(L_5));
		NUInt__ctor_mE23F28776716D16378569C1A81912640B3841E1C((&L_5), ((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)(intptr_t)L_2)), (int64_t)((int64_t)((uint64_t)(intptr_t)L_4)))), /*hidden argument*/NULL);
		return L_5;
	}

IL_001e:
	{
		NUInt_t406BD8A487DEDAC571390BC16847E098DF802EEE  L_6 = ___left0;
		void* L_7 = L_6.get__value_0();
		NUInt_t406BD8A487DEDAC571390BC16847E098DF802EEE  L_8 = ___right1;
		void* L_9 = L_8.get__value_0();
		NUInt_t406BD8A487DEDAC571390BC16847E098DF802EEE  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NUInt__ctor_m80F190866A3430F555E7930DDBBA8ECFCBE5A9FD((&L_10), ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((uint32_t)(intptr_t)L_7)), (int32_t)((int32_t)((uint32_t)(intptr_t)L_9)))), /*hidden argument*/NULL);
		return L_10;
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
// System.Int32 System.Buffers.ReadOnlySequence::ArrayToSequenceStart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySequence_ArrayToSequenceStart_mA277AD6467A1AE2420F6B6F76F953E68A70C3EA5 (int32_t ___startIndex0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___startIndex0;
		return ((int32_t)((int32_t)L_0|(int32_t)0));
	}
}
// System.Int32 System.Buffers.ReadOnlySequence::ArrayToSequenceEnd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySequence_ArrayToSequenceEnd_m8DBBE07605C61827982105BB725DA9E3298C270C (int32_t ___endIndex0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___endIndex0;
		return ((int32_t)((int32_t)L_0|(int32_t)((int32_t)-2147483648LL)));
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
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * SR_get_ResourceManager_m2606ACFED1D6737B1FDC1FB40D0942A0561E2756 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * G_B2_0 = NULL;
	ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var);
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_0 = ((SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_StaticFields*)il2cpp_codegen_static_fields_for(SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var))->get_s_resourceManager_0();
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = SR_get_ResourceType_m15579724A45C4709FA13DE13C0476AD6B49B2490_inline(/*hidden argument*/NULL);
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_3 = (ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A *)il2cpp_codegen_object_new(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_il2cpp_TypeInfo_var);
		ResourceManager__ctor_mC8A203D5697A2FAD2B336CF3534C21276918BD25(L_3, L_2, /*hidden argument*/NULL);
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_4 = L_3;
		((SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_StaticFields*)il2cpp_codegen_static_fields_for(SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var))->set_s_resourceManager_0(L_4);
		G_B2_0 = L_4;
	}

IL_0019:
	{
		return G_B2_0;
	}
}
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m43EFD1EFC0838BAE554A47D8413716290B71918E (const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_mAF61BCAFF41F7A4BDE151DB4124E6E5ABF18B022 (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		V_0 = (String_t*)NULL;
	}

IL_0002:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var);
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_0;
		L_0 = SR_get_ResourceManager_m2606ACFED1D6737B1FDC1FB40D0942A0561E2756(/*hidden argument*/NULL);
		String_t* L_1 = ___resourceKey0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(7 /* System.String System.Resources.ResourceManager::GetString(System.String) */, L_0, L_1);
		V_0 = L_2;
		goto IL_0013;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingManifestResourceException_tAC74F21ADC46CCB2BCC710464434E3B97F72FACB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0010;
		}
		throw e;
	}

CATCH_0010:
	{ // begin catch(System.Resources.MissingManifestResourceException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0013;
	} // end catch (depth: 1)

IL_0013:
	{
		String_t* L_3 = ___defaultString1;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_4 = ___resourceKey0;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = String_Equals_m62F0586691097AA2EE48F1596A130170BCFBF7F6(L_4, L_5, 4, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_7 = ___defaultString1;
		return L_7;
	}

IL_0022:
	{
		String_t* L_8 = V_0;
		return L_8;
	}
}
// System.String System.SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m91AB7EEF3BB0D4BCB00E98A04B56D8F4A0E18365 (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_m43EFD1EFC0838BAE554A47D8413716290B71918E(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___resourceFormat0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		RuntimeObject * L_5 = ___p11;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = String_Join_m7BEA4678919FD9393062F8E8B5328A4DBB1A95E5(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_4, /*hidden argument*/NULL);
		return L_6;
	}

IL_0020:
	{
		String_t* L_7 = ___resourceFormat0;
		RuntimeObject * L_8 = ___p11;
		String_t* L_9;
		L_9 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Type System.SR::get_ResourceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * SR_get_ResourceType_m15579724A45C4709FA13DE13C0476AD6B49B2490 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var);
		Type_t * L_0 = ((SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_StaticFields*)il2cpp_codegen_static_fields_for(SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var))->get_U3CResourceTypeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.String System.SR::get_NotSupported_CannotCallEqualsOnSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_NotSupported_CannotCallEqualsOnSpan_mAE51DC7A6F1002C9C5A05D711F778DBE4BC74B71 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89BF668EA220E1F9C98F61872576447AF8F92A3F);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_mAF61BCAFF41F7A4BDE151DB4124E6E5ABF18B022(_stringLiteral89BF668EA220E1F9C98F61872576447AF8F92A3F, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_NotSupported_CannotCallGetHashCodeOnSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_NotSupported_CannotCallGetHashCodeOnSpan_m6B37711ACE019059D68CEDAFADEDAF7798D6F7B5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral819CA64A4459548685C67A2CD1C9D5E94F49CCD5);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_mAF61BCAFF41F7A4BDE151DB4124E6E5ABF18B022(_stringLiteral819CA64A4459548685C67A2CD1C9D5E94F49CCD5, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_Argument_InvalidTypeWithPointersNotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_InvalidTypeWithPointersNotSupported_mE96E8BFFD8E20501B8FD4053B314A5783D621C96 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CC20FA775B7CE5630588715DBC10889D01DC6F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_mAF61BCAFF41F7A4BDE151DB4124E6E5ABF18B022(_stringLiteral4CC20FA775B7CE5630588715DBC10889D01DC6F1, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_Argument_DestinationTooShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_DestinationTooShort_mED675B92FD55A6DE1EDF9A89CDAF1B1440E5DF4D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44B6E521D3C115CEA4878E4F981B5C2ACC1C885A);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_mAF61BCAFF41F7A4BDE151DB4124E6E5ABF18B022(_stringLiteral44B6E521D3C115CEA4878E4F981B5C2ACC1C885A, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_EndPositionNotReached()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_EndPositionNotReached_m416D55E66917D22BD1EC0A0E3A3F2E400813C9C5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD47A3426BF2C027AE854619E7EAB1FEB5E8491AD);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_mAF61BCAFF41F7A4BDE151DB4124E6E5ABF18B022(_stringLiteralD47A3426BF2C027AE854619E7EAB1FEB5E8491AD, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.SR::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SR__cctor_m53BC06C8E54C69DC7734205B344AE44ECA6E8319 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t87A91EF268900761D47CBA9EF7307BF57A070504_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (SR_t87A91EF268900761D47CBA9EF7307BF57A070504_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		((SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_StaticFields*)il2cpp_codegen_static_fields_for(SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var))->set_U3CResourceTypeU3Ek__BackingField_1(L_1);
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
// System.Boolean System.Runtime.InteropServices.SequenceMarshal::TryGetString(System.Buffers.ReadOnlySequence`1<System.Char>,System.String&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequenceMarshal_TryGetString_m9090B396EAFBBA733090336D3481132E9CDAA1B6 (ReadOnlySequence_1_t1CA47D16AEAC242B3518C691BE0A2B5991F46B81  ___sequence0, String_t** ___text1, int32_t* ___start2, int32_t* ___length3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequence_1_TryGetString_m91897FD4F916F57D7C84FD45B0CB1A56CE05B7C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t** L_0 = ___text1;
		int32_t* L_1 = ___start2;
		int32_t* L_2 = ___length3;
		bool L_3;
		L_3 = ReadOnlySequence_1_TryGetString_m91897FD4F916F57D7C84FD45B0CB1A56CE05B7C6((ReadOnlySequence_1_t1CA47D16AEAC242B3518C691BE0A2B5991F46B81 *)(&___sequence0), (String_t**)L_0, (int32_t*)L_1, (int32_t*)L_2, /*hidden argument*/ReadOnlySequence_1_TryGetString_m91897FD4F916F57D7C84FD45B0CB1A56CE05B7C6_RuntimeMethod_var);
		return L_3;
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
// Conversion methods for marshalling of: System.SequencePosition
IL2CPP_EXTERN_C void SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F_marshal_pinvoke(const SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F& unmarshaled, SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get__object_0() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__object_0()))
		{
			marshaled.____object_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get__object_0()));
			(marshaled.____object_0)->AddRef();
		}
		else
		{
			marshaled.____object_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get__object_0());
		}
	}
	else
	{
		marshaled.____object_0 = NULL;
	}
	marshaled.____integer_1 = unmarshaled.get__integer_1();
}
IL2CPP_EXTERN_C void SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F_marshal_pinvoke_back(const SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F_marshaled_pinvoke& marshaled, SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____object_0 != NULL)
	{
		unmarshaled.set__object_0(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____object_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__object_0()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get__object_0()), Il2CppIUnknown::IID, marshaled.____object_0);
		}
	}
	else
	{
		unmarshaled.set__object_0(NULL);
	}
	int32_t unmarshaled__integer_temp_1 = 0;
	unmarshaled__integer_temp_1 = marshaled.____integer_1;
	unmarshaled.set__integer_1(unmarshaled__integer_temp_1);
}
// Conversion method for clean up from marshalling of: System.SequencePosition
IL2CPP_EXTERN_C void SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F_marshal_pinvoke_cleanup(SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F_marshaled_pinvoke& marshaled)
{
	if (marshaled.____object_0 != NULL)
	{
		(marshaled.____object_0)->Release();
		marshaled.____object_0 = NULL;
	}
}
// Conversion methods for marshalling of: System.SequencePosition
IL2CPP_EXTERN_C void SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F_marshal_com(const SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F& unmarshaled, SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F_marshaled_com& marshaled)
{
	if (unmarshaled.get__object_0() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__object_0()))
		{
			marshaled.____object_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get__object_0()));
			(marshaled.____object_0)->AddRef();
		}
		else
		{
			marshaled.____object_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get__object_0());
		}
	}
	else
	{
		marshaled.____object_0 = NULL;
	}
	marshaled.____integer_1 = unmarshaled.get__integer_1();
}
IL2CPP_EXTERN_C void SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F_marshal_com_back(const SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F_marshaled_com& marshaled, SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____object_0 != NULL)
	{
		unmarshaled.set__object_0(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____object_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__object_0()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get__object_0()), Il2CppIUnknown::IID, marshaled.____object_0);
		}
	}
	else
	{
		unmarshaled.set__object_0(NULL);
	}
	int32_t unmarshaled__integer_temp_1 = 0;
	unmarshaled__integer_temp_1 = marshaled.____integer_1;
	unmarshaled.set__integer_1(unmarshaled__integer_temp_1);
}
// Conversion method for clean up from marshalling of: System.SequencePosition
IL2CPP_EXTERN_C void SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F_marshal_com_cleanup(SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F_marshaled_com& marshaled)
{
	if (marshaled.____object_0 != NULL)
	{
		(marshaled.____object_0)->Release();
		marshaled.____object_0 = NULL;
	}
}
// System.Void System.SequencePosition::.ctor(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequencePosition__ctor_m9734A27EB20AD6A3264FA9FC7C15CFDEDCB5268A (SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F * __this, RuntimeObject * ___object0, int32_t ___integer1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___object0;
		__this->set__object_0(L_0);
		int32_t L_1 = ___integer1;
		__this->set__integer_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void SequencePosition__ctor_m9734A27EB20AD6A3264FA9FC7C15CFDEDCB5268A_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___object0, int32_t ___integer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F * _thisAdjusted = reinterpret_cast<SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F *>(__this + _offset);
	SequencePosition__ctor_m9734A27EB20AD6A3264FA9FC7C15CFDEDCB5268A(_thisAdjusted, ___object0, ___integer1, method);
}
// System.Object System.SequencePosition::GetObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SequencePosition_GetObject_m8CA3A87AB194F4C959B952CD2426D306ADA14945 (SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__object_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * SequencePosition_GetObject_m8CA3A87AB194F4C959B952CD2426D306ADA14945_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F * _thisAdjusted = reinterpret_cast<SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F *>(__this + _offset);
	RuntimeObject * _returnValue;
	_returnValue = SequencePosition_GetObject_m8CA3A87AB194F4C959B952CD2426D306ADA14945_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.SequencePosition::GetInteger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SequencePosition_GetInteger_m6FF2DBD1C24C3BDE367A36A697A2A7EFD38918FA (SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__integer_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t SequencePosition_GetInteger_m6FF2DBD1C24C3BDE367A36A697A2A7EFD38918FA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F * _thisAdjusted = reinterpret_cast<SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SequencePosition_GetInteger_m6FF2DBD1C24C3BDE367A36A697A2A7EFD38918FA_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.SequencePosition::Equals(System.SequencePosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequencePosition_Equals_m7CC387808C8091E7E1B1909E0A037BC6210C74C8 (SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F * __this, SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F  ___other0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__integer_1();
		SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F  L_1 = ___other0;
		int32_t L_2 = L_1.get__integer_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject * L_3 = __this->get__object_0();
		SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F  L_4 = ___other0;
		RuntimeObject * L_5 = L_4.get__object_0();
		bool L_6;
		L_6 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0020:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool SequencePosition_Equals_m7CC387808C8091E7E1B1909E0A037BC6210C74C8_AdjustorThunk (RuntimeObject * __this, SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F * _thisAdjusted = reinterpret_cast<SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F *>(__this + _offset);
	bool _returnValue;
	_returnValue = SequencePosition_Equals_m7CC387808C8091E7E1B1909E0A037BC6210C74C8(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean System.SequencePosition::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequencePosition_Equals_m6D96603126F4308326E0EBE267C3DF75BA6E4348 (SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		RuntimeObject * L_1 = L_0;
		V_1 = L_1;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject * L_2 = V_1;
		V_0 = ((*(SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F *)((SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F *)UnBox(L_2, SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F_il2cpp_TypeInfo_var))));
		SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F  L_3 = V_0;
		bool L_4;
		L_4 = SequencePosition_Equals_m7CC387808C8091E7E1B1909E0A037BC6210C74C8((SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F *)__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0019:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool SequencePosition_Equals_m6D96603126F4308326E0EBE267C3DF75BA6E4348_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F * _thisAdjusted = reinterpret_cast<SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F *>(__this + _offset);
	bool _returnValue;
	_returnValue = SequencePosition_Equals_m6D96603126F4308326E0EBE267C3DF75BA6E4348(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 System.SequencePosition::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SequencePosition_GetHashCode_mCCA35B16C95BB0719BB4B3A44EFF5711D69C94E0 (SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_tBDA4D9230F4225CDB6E4FFDAD4D73D42271459CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = __this->get__object_0();
		RuntimeObject * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		int32_t L_3 = __this->get__integer_1();
		IL2CPP_RUNTIME_CLASS_INIT(HashHelpers_tBDA4D9230F4225CDB6E4FFDAD4D73D42271459CB_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = HashHelpers_Combine_m2949BCBDB20182A72C74C7AC70E773500B7AA1EF(G_B3_0, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t SequencePosition_GetHashCode_mCCA35B16C95BB0719BB4B3A44EFF5711D69C94E0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F * _thisAdjusted = reinterpret_cast<SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SequencePosition_GetHashCode_mCCA35B16C95BB0719BB4B3A44EFF5711D69C94E0(_thisAdjusted, method);
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
// System.Boolean System.SpanHelpers::SequenceEqual(System.Byte&,System.Byte&,System.NUInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_mA00CD21F5F55E00093AD8BCEDACEFCF16DCCFE04 (uint8_t* ___first0, uint8_t* ___second1, NUInt_t406BD8A487DEDAC571390BC16847E098DF802EEE  ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21792A067D720CFF0BFCCC4AFE7E17D916DFD3F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_AreSame_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mFC5681897A28ACE4F4CC26DC9552366E45AED7D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_get_Count_mBCD0997C4DF6691469D09BD74D45014A78B056C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_op_Equality_m8D447425CEE4ED8947D3F00FBCEE8CF5E45FA7C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_op_Inequality_mEA379E06566B02A57C3DF20988F7D3C2A7A20080_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		uint8_t* L_0 = ___first0;
		uint8_t* L_1 = ___second1;
		bool L_2;
		L_2 = Unsafe_AreSame_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mFC5681897A28ACE4F4CC26DC9552366E45AED7D7_inline((uint8_t*)L_0, (uint8_t*)L_1, /*hidden argument*/Unsafe_AreSame_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mFC5681897A28ACE4F4CC26DC9552366E45AED7D7_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_013d;
		}
	}
	{
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_m9092E57CE669E7B9CCDCF5ADD6DFB758D6545FBF(0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		NUInt_t406BD8A487DEDAC571390BC16847E098DF802EEE  L_4 = ___length2;
		void* L_5;
		L_5 = NUInt_op_Explicit_m5AFE090A166318ADC004279C16853A93F2BFB7E6_inline(L_4, /*hidden argument*/NULL);
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495((void*)(void*)L_5, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_6;
		bool L_7;
		L_7 = Vector_get_IsHardwareAccelerated_m740478D572780E5447E24E0D9DEDE6EFF43A63FE(/*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_009c;
		}
	}
	{
		intptr_t L_8 = V_1;
		void* L_9;
		L_9 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = Vector_1_get_Count_mBCD0997C4DF6691469D09BD74D45014A78B056C5_inline(/*hidden argument*/Vector_1_get_Count_mBCD0997C4DF6691469D09BD74D45014A78B056C5_RuntimeMethod_var);
		if ((!(((uintptr_t)L_9) >= ((uintptr_t)((intptr_t)L_10)))))
		{
			goto IL_009c;
		}
	}
	{
		intptr_t L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = Vector_1_get_Count_mBCD0997C4DF6691469D09BD74D45014A78B056C5_inline(/*hidden argument*/Vector_1_get_Count_mBCD0997C4DF6691469D09BD74D45014A78B056C5_RuntimeMethod_var);
		intptr_t L_13;
		L_13 = IntPtr_op_Subtraction_m02F3295A959F0DF44F66D04D88F3EE66DFC4BFD9((intptr_t)L_11, L_12, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_13;
		goto IL_0070;
	}

IL_0042:
	{
		uint8_t* L_14 = ___first0;
		intptr_t L_15 = V_0;
		uint8_t* L_16;
		L_16 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21792A067D720CFF0BFCCC4AFE7E17D916DFD3F5_inline((uint8_t*)L_14, (intptr_t)L_15, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21792A067D720CFF0BFCCC4AFE7E17D916DFD3F5_RuntimeMethod_var);
		Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  L_17;
		L_17 = IL2CPP_UNSAFE_READ_UNALIGNED(Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383 , (uint8_t*)L_16);
		uint8_t* L_18 = ___second1;
		intptr_t L_19 = V_0;
		uint8_t* L_20;
		L_20 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21792A067D720CFF0BFCCC4AFE7E17D916DFD3F5_inline((uint8_t*)L_18, (intptr_t)L_19, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21792A067D720CFF0BFCCC4AFE7E17D916DFD3F5_RuntimeMethod_var);
		Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  L_21;
		L_21 = IL2CPP_UNSAFE_READ_UNALIGNED(Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383 , (uint8_t*)L_20);
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Vector_1_op_Inequality_mEA379E06566B02A57C3DF20988F7D3C2A7A20080_inline(L_17, L_21, /*hidden argument*/Vector_1_op_Inequality_mEA379E06566B02A57C3DF20988F7D3C2A7A20080_RuntimeMethod_var);
		if (L_22)
		{
			goto IL_013f;
		}
	}
	{
		intptr_t L_23 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383_il2cpp_TypeInfo_var);
		int32_t L_24;
		L_24 = Vector_1_get_Count_mBCD0997C4DF6691469D09BD74D45014A78B056C5_inline(/*hidden argument*/Vector_1_get_Count_mBCD0997C4DF6691469D09BD74D45014A78B056C5_RuntimeMethod_var);
		intptr_t L_25;
		L_25 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_23, L_24, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_25;
	}

IL_0070:
	{
		intptr_t L_26 = V_1;
		void* L_27;
		L_27 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_26, /*hidden argument*/NULL);
		intptr_t L_28 = V_0;
		void* L_29;
		L_29 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_28, /*hidden argument*/NULL);
		if ((!(((uintptr_t)L_27) <= ((uintptr_t)L_29))))
		{
			goto IL_0042;
		}
	}
	{
		uint8_t* L_30 = ___first0;
		intptr_t L_31 = V_1;
		uint8_t* L_32;
		L_32 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21792A067D720CFF0BFCCC4AFE7E17D916DFD3F5_inline((uint8_t*)L_30, (intptr_t)L_31, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21792A067D720CFF0BFCCC4AFE7E17D916DFD3F5_RuntimeMethod_var);
		Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  L_33;
		L_33 = IL2CPP_UNSAFE_READ_UNALIGNED(Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383 , (uint8_t*)L_32);
		uint8_t* L_34 = ___second1;
		intptr_t L_35 = V_1;
		uint8_t* L_36;
		L_36 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21792A067D720CFF0BFCCC4AFE7E17D916DFD3F5_inline((uint8_t*)L_34, (intptr_t)L_35, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21792A067D720CFF0BFCCC4AFE7E17D916DFD3F5_RuntimeMethod_var);
		Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  L_37;
		L_37 = IL2CPP_UNSAFE_READ_UNALIGNED(Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383 , (uint8_t*)L_36);
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Vector_1_op_Equality_m8D447425CEE4ED8947D3F00FBCEE8CF5E45FA7C7_inline(L_33, L_37, /*hidden argument*/Vector_1_op_Equality_m8D447425CEE4ED8947D3F00FBCEE8CF5E45FA7C7_RuntimeMethod_var);
		return L_38;
	}

IL_009c:
	{
		intptr_t L_39 = V_1;
		void* L_40;
		L_40 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_39, /*hidden argument*/NULL);
		uint32_t L_41 = sizeof(uintptr_t);
		if ((!(((uintptr_t)L_40) >= ((uintptr_t)((intptr_t)L_41)))))
		{
			goto IL_012f;
		}
	}
	{
		intptr_t L_42 = V_1;
		uint32_t L_43 = sizeof(uintptr_t);
		intptr_t L_44;
		L_44 = IntPtr_op_Subtraction_m02F3295A959F0DF44F66D04D88F3EE66DFC4BFD9((intptr_t)L_42, L_43, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_44;
		goto IL_00e9;
	}

IL_00bd:
	{
		uint8_t* L_45 = ___first0;
		intptr_t L_46 = V_0;
		uint8_t* L_47;
		L_47 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21792A067D720CFF0BFCCC4AFE7E17D916DFD3F5_inline((uint8_t*)L_45, (intptr_t)L_46, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21792A067D720CFF0BFCCC4AFE7E17D916DFD3F5_RuntimeMethod_var);
		uintptr_t L_48;
		L_48 = IL2CPP_UNSAFE_READ_UNALIGNED(uintptr_t, (uint8_t*)L_47);
		uint8_t* L_49 = ___second1;
		intptr_t L_50 = V_0;
		uint8_t* L_51;
		L_51 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21792A067D720CFF0BFCCC4AFE7E17D916DFD3F5_inline((uint8_t*)L_49, (intptr_t)L_50, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21792A067D720CFF0BFCCC4AFE7E17D916DFD3F5_RuntimeMethod_var);
		uintptr_t L_52;
		L_52 = IL2CPP_UNSAFE_READ_UNALIGNED(uintptr_t, (uint8_t*)L_51);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = UIntPtr_op_Inequality_m7D22151019093F083240F615DA4B70CE2CF494B4(L_48, L_52, /*hidden argument*/NULL);
		if (L_53)
		{
			goto IL_013f;
		}
	}
	{
		intptr_t L_54 = V_0;
		uint32_t L_55 = sizeof(uintptr_t);
		intptr_t L_56;
		L_56 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_54, L_55, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_56;
	}

IL_00e9:
	{
		intptr_t L_57 = V_1;
		void* L_58;
		L_58 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_57, /*hidden argument*/NULL);
		intptr_t L_59 = V_0;
		void* L_60;
		L_60 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_59, /*hidden argument*/NULL);
		if ((!(((uintptr_t)L_58) <= ((uintptr_t)L_60))))
		{
			goto IL_00bd;
		}
	}
	{
		uint8_t* L_61 = ___first0;
		intptr_t L_62 = V_1;
		uint8_t* L_63;
		L_63 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21792A067D720CFF0BFCCC4AFE7E17D916DFD3F5_inline((uint8_t*)L_61, (intptr_t)L_62, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21792A067D720CFF0BFCCC4AFE7E17D916DFD3F5_RuntimeMethod_var);
		uintptr_t L_64;
		L_64 = IL2CPP_UNSAFE_READ_UNALIGNED(uintptr_t, (uint8_t*)L_63);
		uint8_t* L_65 = ___second1;
		intptr_t L_66 = V_1;
		uint8_t* L_67;
		L_67 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21792A067D720CFF0BFCCC4AFE7E17D916DFD3F5_inline((uint8_t*)L_65, (intptr_t)L_66, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21792A067D720CFF0BFCCC4AFE7E17D916DFD3F5_RuntimeMethod_var);
		uintptr_t L_68;
		L_68 = IL2CPP_UNSAFE_READ_UNALIGNED(uintptr_t, (uint8_t*)L_67);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		bool L_69;
		L_69 = UIntPtr_op_Equality_mA909564C1AAE89E5119A6BD536C1A1B260625A5D(L_64, L_68, /*hidden argument*/NULL);
		return L_69;
	}

IL_0115:
	{
		uint8_t* L_70 = ___first0;
		intptr_t L_71 = V_0;
		uint8_t* L_72;
		L_72 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21792A067D720CFF0BFCCC4AFE7E17D916DFD3F5_inline((uint8_t*)L_70, (intptr_t)L_71, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21792A067D720CFF0BFCCC4AFE7E17D916DFD3F5_RuntimeMethod_var);
		int32_t L_73 = *((uint8_t*)L_72);
		uint8_t* L_74 = ___second1;
		intptr_t L_75 = V_0;
		uint8_t* L_76;
		L_76 = Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21792A067D720CFF0BFCCC4AFE7E17D916DFD3F5_inline((uint8_t*)L_74, (intptr_t)L_75, /*hidden argument*/Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21792A067D720CFF0BFCCC4AFE7E17D916DFD3F5_RuntimeMethod_var);
		int32_t L_77 = *((uint8_t*)L_76);
		if ((!(((uint32_t)L_73) == ((uint32_t)L_77))))
		{
			goto IL_013f;
		}
	}
	{
		intptr_t L_78 = V_0;
		intptr_t L_79;
		L_79 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_78, 1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_79;
	}

IL_012f:
	{
		intptr_t L_80 = V_1;
		void* L_81;
		L_81 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_80, /*hidden argument*/NULL);
		intptr_t L_82 = V_0;
		void* L_83;
		L_83 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_82, /*hidden argument*/NULL);
		if ((!(((uintptr_t)L_81) <= ((uintptr_t)L_83))))
		{
			goto IL_0115;
		}
	}

IL_013d:
	{
		return (bool)1;
	}

IL_013f:
	{
		return (bool)0;
	}
}
// System.Boolean System.SpanHelpers::IsReferenceOrContainsReferencesCore(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferencesCore_m7C3948248C6FD894C589A59F144D2511884B2B16 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t0DF027D1C7415CBB03F663A5D5ACE52D29226059_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t620905184FE92C7CD2128B5FE4079C455117C4B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	FieldInfo_t * V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		Type_t * L_0 = ___type0;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		Type_t * L_3 = ___type0;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_4;
		L_4 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		Type_t * L_6 = ___type0;
		Type_t * L_7;
		L_7 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Type_t * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_8, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0031;
		}
	}
	{
		Type_t * L_10 = V_0;
		___type0 = L_10;
	}

IL_0031:
	{
		Type_t * L_11 = ___type0;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_12;
		L_12 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, L_12);
		if (!L_13)
		{
			goto IL_0040;
		}
	}
	{
		return (bool)0;
	}

IL_0040:
	{
		Type_t * L_14 = ___type0;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_15;
		L_15 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = VirtFuncInvoker0< RuntimeObject* >::Invoke(113 /* System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> System.Reflection.TypeInfo::get_DeclaredFields() */, L_15);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator() */, IEnumerable_1_t0DF027D1C7415CBB03F663A5D5ACE52D29226059_il2cpp_TypeInfo_var, L_16);
		V_1 = L_17;
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0073;
		}

IL_0053:
		{
			RuntimeObject* L_18 = V_1;
			NullCheck(L_18);
			FieldInfo_t * L_19;
			L_19 = InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current() */, IEnumerator_1_t620905184FE92C7CD2128B5FE4079C455117C4B8_il2cpp_TypeInfo_var, L_18);
			V_2 = L_19;
			FieldInfo_t * L_20 = V_2;
			NullCheck(L_20);
			bool L_21;
			L_21 = FieldInfo_get_IsStatic_mE36F3A5B2DFF613C704AA56989D90D72760391EB(L_20, /*hidden argument*/NULL);
			if (L_21)
			{
				goto IL_0073;
			}
		}

IL_0062:
		{
			FieldInfo_t * L_22 = V_2;
			NullCheck(L_22);
			Type_t * L_23;
			L_23 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_22);
			bool L_24;
			L_24 = SpanHelpers_IsReferenceOrContainsReferencesCore_m7C3948248C6FD894C589A59F144D2511884B2B16(L_23, /*hidden argument*/NULL);
			if (!L_24)
			{
				goto IL_0073;
			}
		}

IL_006f:
		{
			V_3 = (bool)1;
			IL2CPP_LEAVE(0x89, FINALLY_007d);
		}

IL_0073:
		{
			RuntimeObject* L_25 = V_1;
			NullCheck(L_25);
			bool L_26;
			L_26 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_0053;
			}
		}

IL_007b:
		{
			IL2CPP_LEAVE(0x87, FINALLY_007d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_27 = V_1;
			if (!L_27)
			{
				goto IL_0086;
			}
		}

IL_0080:
		{
			RuntimeObject* L_28 = V_1;
			NullCheck(L_28);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_28);
		}

IL_0086:
		{
			IL2CPP_END_FINALLY(125)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x89, IL_0089)
		IL2CPP_JUMP_TBL(0x87, IL_0087)
	}

IL_0087:
	{
		return (bool)0;
	}

IL_0089:
	{
		bool L_29 = V_3;
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
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_mC3B9B6444F069F23A716B27AE2BECA57B19BC082 (int32_t ___argument0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___argument0;
		Exception_t * L_1;
		L_1 = ThrowHelper_CreateArgumentNullException_mE49F9BB640A18BFF813EB326A42B9D55532ECEF2(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentNullException_mC3B9B6444F069F23A716B27AE2BECA57B19BC082_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentNullException_mE49F9BB640A18BFF813EB326A42B9D55532ECEF2 (int32_t ___argument0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgument_t00DCBB0F0819C553694C772003B02840C3AF6B5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = Box(ExceptionArgument_t00DCBB0F0819C553694C772003B02840C3AF6B5C_il2cpp_TypeInfo_var, (&___argument0));
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___argument0 = *(int32_t*)UnBox(L_0);
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.ThrowHelper::ThrowArrayTypeMismatchException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_m3D0F2AFE70BE5200FF916F4D901DA8993C17D45D (const RuntimeMethod* method)
{
	{
		Exception_t * L_0;
		L_0 = ThrowHelper_CreateArrayTypeMismatchException_m044D1C60A98EBDEB447254FF61B6F1295ED19060(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArrayTypeMismatchException_m3D0F2AFE70BE5200FF916F4D901DA8993C17D45D_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateArrayTypeMismatchException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArrayTypeMismatchException_m044D1C60A98EBDEB447254FF61B6F1295ED19060 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784 * L_0 = (ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784 *)il2cpp_codegen_object_new(ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var);
		ArrayTypeMismatchException__ctor_m76932588D9A980CDB675D12B0479F8EAC2D5E96D(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.ThrowHelper::ThrowArgumentException_InvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m1E81A6DA3EE9ED361A393F94DCBF0D6C237923C7 (Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		Exception_t * L_1;
		L_1 = ThrowHelper_CreateArgumentException_InvalidTypeWithPointersNotSupported_m124B343C5CB43B677ABC4CF37E107C51482FD7B1(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m1E81A6DA3EE9ED361A393F94DCBF0D6C237923C7_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateArgumentException_InvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentException_InvalidTypeWithPointersNotSupported_m124B343C5CB43B677ABC4CF37E107C51482FD7B1 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_get_Argument_InvalidTypeWithPointersNotSupported_mE96E8BFFD8E20501B8FD4053B314A5783D621C96(/*hidden argument*/NULL);
		Type_t * L_1 = ___type0;
		String_t* L_2;
		L_2 = SR_Format_m91AB7EEF3BB0D4BCB00E98A04B56D8F4A0E18365(L_0, L_1, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void System.ThrowHelper::ThrowArgumentException_DestinationTooShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_DestinationTooShort_m93E60D12B9B073ADBA74A9EA13692365D0950F09 (const RuntimeMethod* method)
{
	{
		Exception_t * L_0;
		L_0 = ThrowHelper_CreateArgumentException_DestinationTooShort_mAE3C46E51D92C2DD624F5751BAD13B935E0CAF83(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentException_DestinationTooShort_m93E60D12B9B073ADBA74A9EA13692365D0950F09_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateArgumentException_DestinationTooShort()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentException_DestinationTooShort_mAE3C46E51D92C2DD624F5751BAD13B935E0CAF83 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_get_Argument_DestinationTooShort_mED675B92FD55A6DE1EDF9A89CDAF1B1440E5DF4D(/*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_1 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.ThrowHelper::ThrowIndexOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m23B88CE48288320C2171592A2D6FFE8F87E7EAD1 (const RuntimeMethod* method)
{
	{
		Exception_t * L_0;
		L_0 = ThrowHelper_CreateIndexOutOfRangeException_m841E01AF5B87D8C6112D5330ED526C6E868DABE1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowIndexOutOfRangeException_m23B88CE48288320C2171592A2D6FFE8F87E7EAD1_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateIndexOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateIndexOutOfRangeException_m841E01AF5B87D8C6112D5330ED526C6E868DABE1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_0 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4F98B73AA41519B450FFCCD1E97C2DA8F1CC14FA (const RuntimeMethod* method)
{
	{
		Exception_t * L_0;
		L_0 = ThrowHelper_CreateArgumentOutOfRangeException_mCCFB89982213B1F9ABC9EE26E8130D4A105C0CAF(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentOutOfRangeException_m4F98B73AA41519B450FFCCD1E97C2DA8F1CC14FA_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentOutOfRangeException_mCCFB89982213B1F9ABC9EE26E8130D4A105C0CAF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_0 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m81CEEF1FCB5EFBBAA39071F48BCFBC16AED0C915(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m2373E82E45B766DD1D0B5EEBC9EAB68EB787F05C (int32_t ___argument0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___argument0;
		Exception_t * L_1;
		L_1 = ThrowHelper_CreateArgumentOutOfRangeException_mDD900C9DFE7047B18EE5F4BF49DA755ABD32BFE5(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentOutOfRangeException_m2373E82E45B766DD1D0B5EEBC9EAB68EB787F05C_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateArgumentOutOfRangeException_mDD900C9DFE7047B18EE5F4BF49DA755ABD32BFE5 (int32_t ___argument0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgument_t00DCBB0F0819C553694C772003B02840C3AF6B5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = Box(ExceptionArgument_t00DCBB0F0819C553694C772003B02840C3AF6B5C_il2cpp_TypeInfo_var, (&___argument0));
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___argument0 = *(int32_t*)UnBox(L_0);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.ThrowHelper::ThrowInvalidOperationException_EndPositionNotReached()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_EndPositionNotReached_mE7C0C3E7C18D36F2C24A92B76BD7C545F9865D6F (const RuntimeMethod* method)
{
	{
		Exception_t * L_0;
		L_0 = ThrowHelper_CreateInvalidOperationException_EndPositionNotReached_m9262C7184C213697CC6725AE20DE2E84C77583BC(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowInvalidOperationException_EndPositionNotReached_mE7C0C3E7C18D36F2C24A92B76BD7C545F9865D6F_RuntimeMethod_var)));
	}
}
// System.Exception System.ThrowHelper::CreateInvalidOperationException_EndPositionNotReached()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t * ThrowHelper_CreateInvalidOperationException_EndPositionNotReached_m9262C7184C213697CC6725AE20DE2E84C77583BC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_get_EndPositionNotReached_m416D55E66917D22BD1EC0A0E3A3F2E400813C9C5(/*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_m1EA04BA58FBE4F1A6D1711F72B27F279BF7485F2_inline (uint32_t ___value0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___value0;
		V_0 = ((int32_t)((int32_t)L_0&(int32_t)((int32_t)16711935)));
		uint32_t L_1 = ___value0;
		V_1 = ((int32_t)((int32_t)L_1&(int32_t)((int32_t)-16711936)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = V_1;
		uint32_t L_5 = V_1;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_2>>8))|(int32_t)((int32_t)((int32_t)L_3<<(int32_t)((int32_t)24))))), (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4<<(int32_t)8))|(int32_t)((int32_t)((uint32_t)L_5>>((int32_t)24)))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t BinaryPrimitives_ReverseEndianness_m6E340888BBA9A15C68EFC298EFC93F45EB8349C9_inline (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		uint32_t L_1;
		L_1 = BinaryPrimitives_ReverseEndianness_m1EA04BA58FBE4F1A6D1711F72B27F279BF7485F2_inline(((int32_t)((uint32_t)L_0)), /*hidden argument*/NULL);
		uint64_t L_2 = ___value0;
		uint32_t L_3;
		L_3 = BinaryPrimitives_ReverseEndianness_m1EA04BA58FBE4F1A6D1711F72B27F279BF7485F2_inline(((int32_t)((uint32_t)((int64_t)((uint64_t)L_2>>((int32_t)32))))), /*hidden argument*/NULL);
		return ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_1))<<(int32_t)((int32_t)32))), (int64_t)((int64_t)((uint64_t)L_3))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * SR_get_ResourceType_m15579724A45C4709FA13DE13C0476AD6B49B2490_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var);
		Type_t * L_0 = ((SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_StaticFields*)il2cpp_codegen_static_fields_for(SR_t74447049BE0FAF51BDB15471D7650472C00ACE1E_il2cpp_TypeInfo_var))->get_U3CResourceTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SequencePosition_GetObject_m8CA3A87AB194F4C959B952CD2426D306ADA14945_inline (SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__object_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SequencePosition_GetInteger_m6FF2DBD1C24C3BDE367A36A697A2A7EFD38918FA_inline (SequencePosition_tF211E0E8321C75713DF3FC1E988CEF89697F3B6F * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__integer_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NUInt_op_Explicit_m5AFE090A166318ADC004279C16853A93F2BFB7E6_inline (NUInt_t406BD8A487DEDAC571390BC16847E098DF802EEE  ___value0, const RuntimeMethod* method)
{
	{
		NUInt_t406BD8A487DEDAC571390BC16847E098DF802EEE  L_0 = ___value0;
		void* L_1 = L_0.get__value_0();
		return (void*)(L_1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t MemoryMarshal_Read_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mBB533DF56B0405E2EFA2048F66CA1ADB46160594_gshared_inline (ReadOnlySpan_1_t84EFFCCB4E1285C25BD39C89683ECD46BB8B322E  ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB36A7827C4BC5E4F9552256997C3EC855D2FDE05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m1BD0982F8A577242AAFBB58E3960AF4550512E78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = ((  bool (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m1E81A6DA3EE9ED361A393F94DCBF0D6C237923C7((Type_t *)L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m1BD0982F8A577242AAFBB58E3960AF4550512E78_inline((ReadOnlySpan_1_t84EFFCCB4E1285C25BD39C89683ECD46BB8B322E *)(ReadOnlySpan_1_t84EFFCCB4E1285C25BD39C89683ECD46BB8B322E *)(&___source0), /*hidden argument*/ReadOnlySpan_1_get_Length_m1BD0982F8A577242AAFBB58E3960AF4550512E78_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_002a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m2373E82E45B766DD1D0B5EEBC9EAB68EB787F05C((int32_t)0, /*hidden argument*/NULL);
	}

IL_002a:
	{
		ReadOnlySpan_1_t84EFFCCB4E1285C25BD39C89683ECD46BB8B322E  L_5 = ___source0;
		uint8_t* L_6;
		L_6 = MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB36A7827C4BC5E4F9552256997C3EC855D2FDE05((ReadOnlySpan_1_t84EFFCCB4E1285C25BD39C89683ECD46BB8B322E )L_5, /*hidden argument*/MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB36A7827C4BC5E4F9552256997C3EC855D2FDE05_RuntimeMethod_var);
		uint64_t L_7;
		L_7 = IL2CPP_UNSAFE_READ_UNALIGNED(uint64_t, (uint8_t*)(uint8_t*)L_6);
		return (uint64_t)L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mCD67041291E7BFA54C7D8C2E25AB1645357F593E_gshared_inline (Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182  ___destination0, uint32_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mE806AAF0979C31DD5322C12D79E0C889C7386F4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m64D656C1E24D68D90E296A217B2A3BD15FE93673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = ((  bool (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m1E81A6DA3EE9ED361A393F94DCBF0D6C237923C7((Type_t *)L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		int32_t L_4;
		L_4 = Span_1_get_Length_m64D656C1E24D68D90E296A217B2A3BD15FE93673_inline((Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182 *)(Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182 *)(&___destination0), /*hidden argument*/Span_1_get_Length_m64D656C1E24D68D90E296A217B2A3BD15FE93673_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) > ((uint32_t)L_4))))
		{
			goto IL_002a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m2373E82E45B766DD1D0B5EEBC9EAB68EB787F05C((int32_t)0, /*hidden argument*/NULL);
	}

IL_002a:
	{
		Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182  L_5 = ___destination0;
		uint8_t* L_6;
		L_6 = MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mE806AAF0979C31DD5322C12D79E0C889C7386F4A((Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182 )L_5, /*hidden argument*/MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mE806AAF0979C31DD5322C12D79E0C889C7386F4A_RuntimeMethod_var);
		uint32_t* L_7 = ___value1;
		uint32_t L_8 = (*(uint32_t*)L_7);
		il2cpp_unsafe_write_unaligned((uint8_t*)(uint8_t*)L_6, (uint32_t)L_8);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mFD6B2C3214FE27F6309A4B5A09616C985BB65453_gshared_inline (Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182  ___destination0, uint64_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mE806AAF0979C31DD5322C12D79E0C889C7386F4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m64D656C1E24D68D90E296A217B2A3BD15FE93673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = ((  bool (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_m1E81A6DA3EE9ED361A393F94DCBF0D6C237923C7((Type_t *)L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		int32_t L_4;
		L_4 = Span_1_get_Length_m64D656C1E24D68D90E296A217B2A3BD15FE93673_inline((Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182 *)(Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182 *)(&___destination0), /*hidden argument*/Span_1_get_Length_m64D656C1E24D68D90E296A217B2A3BD15FE93673_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) > ((uint32_t)L_4))))
		{
			goto IL_002a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m2373E82E45B766DD1D0B5EEBC9EAB68EB787F05C((int32_t)0, /*hidden argument*/NULL);
	}

IL_002a:
	{
		Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182  L_5 = ___destination0;
		uint8_t* L_6;
		L_6 = MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mE806AAF0979C31DD5322C12D79E0C889C7386F4A((Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182 )L_5, /*hidden argument*/MemoryMarshal_GetReference_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mE806AAF0979C31DD5322C12D79E0C889C7386F4A_RuntimeMethod_var);
		uint64_t* L_7 = ___value1;
		uint64_t L_8 = (*(uint64_t*)L_7);
		il2cpp_unsafe_write_unaligned((uint8_t*)(uint8_t*)L_6, (uint64_t)L_8);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Unsafe_As_TisRuntimeObject_m49DCD5A352E5546A5A2B36BFF07BBEFD11071CC0_gshared_inline (RuntimeObject * ___o0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___o0;
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mBE644F1617274428AD9DC42DC42198B97333CCB5_gshared_inline (ReadOnlySpan_1_t4652F86343E7C4D6B3A202A16FF45FBE534496D0 * __this, Pinnable_1_t0BBB916DE7483A3E704D129D1CEB8F647945EFDE * ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___length2;
		__this->set__length_2(L_0);
		Pinnable_1_t0BBB916DE7483A3E704D129D1CEB8F647945EFDE * L_1 = ___pinnable0;
		__this->set__pinnable_0(L_1);
		intptr_t L_2 = ___byteOffset1;
		__this->set__byteOffset_1((intptr_t)L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlyMemory_1__ctor_m43E3FBEB023D5620B54E4805C068D6CA1EFFA363_gshared_inline (ReadOnlyMemory_1_t4371295666DCEA58DF106E5857800DED705F94AC * __this, RuntimeObject * ___obj0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		__this->set__object_0(L_0);
		int32_t L_1 = ___start1;
		__this->set__index_1(L_1);
		int32_t L_2 = ___length2;
		__this->set__length_2(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_AsRef_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mEC707D7DB383D32316E6098FCD68588EC1A98AFC_gshared_inline (void* ___source0, const RuntimeMethod* method)
{
	int32_t* V_0 = NULL;
	{
		void* L_0 = ___source0;
		V_0 = (int32_t*)L_0;
		int32_t* L_1 = V_0;
		return (Il2CppChar*)(L_1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t Unsafe_ByteOffset_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mA8C78756EDF0A5CE73217949F4FBB4627C03DD29_gshared_inline (Il2CppChar* ___origin0, Il2CppChar* ___target1, const RuntimeMethod* method)
{
	{
		Il2CppChar* L_0 = ___target1;
		Il2CppChar* L_1 = ___origin0;
		return (intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_0, (intptr_t)L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mFC5681897A28ACE4F4CC26DC9552366E45AED7D7_gshared_inline (uint8_t* ___left0, uint8_t* ___right1, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = ___left0;
		uint8_t* L_1 = ___right1;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_mBCD0997C4DF6691469D09BD74D45014A78B056C5_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_0 = ((Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_s_count_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Unsafe_AddByteOffset_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m21792A067D720CFF0BFCCC4AFE7E17D916DFD3F5_gshared_inline (uint8_t* ___source0, intptr_t ___byteOffset1, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = ___source0;
		intptr_t L_1 = ___byteOffset1;
		return (uint8_t*)(((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)L_1)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Inequality_mEA379E06566B02A57C3DF20988F7D3C2A7A20080_gshared_inline (Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  ___left0, Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  ___right1, const RuntimeMethod* method)
{
	{
		Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  L_0 = ___left0;
		Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  L_1 = ___right1;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_2;
		L_2 = ((  bool (*) (Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383 , Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9)->methodPointer)((Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383 )L_0, (Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_m8D447425CEE4ED8947D3F00FBCEE8CF5E45FA7C7_gshared_inline (Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  ___left0, Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  ___right1, const RuntimeMethod* method)
{
	{
		Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383  L_0 = ___right1;
		bool L_1;
		L_1 = Vector_1_Equals_mD3F6337841B584C86C6EEEF30CA41092919BAD63((Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383 *)(Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383 *)(&___left0), (Vector_1_t232DC566F23EF51B09E6CA39A0953F7D5468F383 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		return (bool)L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m1BD0982F8A577242AAFBB58E3960AF4550512E78_gshared_inline (ReadOnlySpan_1_t84EFFCCB4E1285C25BD39C89683ECD46BB8B322E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__length_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m64D656C1E24D68D90E296A217B2A3BD15FE93673_gshared_inline (Span_1_tFBCC6882127027B5BABE8B6AA55AFC7B178A4182 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__length_2();
		return (int32_t)L_0;
	}
}
