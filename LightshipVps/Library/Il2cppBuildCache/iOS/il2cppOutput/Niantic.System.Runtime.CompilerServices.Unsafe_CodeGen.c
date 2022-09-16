#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 T System.Runtime.CompilerServices.Unsafe::ReadUnaligned(System.Byte&)
// 0x00000002 System.Void System.Runtime.CompilerServices.Unsafe::WriteUnaligned(System.Byte&,T)
// 0x00000003 System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf()
// 0x00000004 System.Void System.Runtime.CompilerServices.Unsafe::CopyBlock(System.Byte&,System.Byte&,System.UInt32)
extern void Unsafe_CopyBlock_mAA8ADC06AE9169C81248B328B69DE9EEB6F57B7B (void);
// 0x00000005 T System.Runtime.CompilerServices.Unsafe::As(System.Object)
// 0x00000006 T& System.Runtime.CompilerServices.Unsafe::AsRef(System.Void*)
// 0x00000007 TTo& System.Runtime.CompilerServices.Unsafe::As(TFrom&)
// 0x00000008 T& System.Runtime.CompilerServices.Unsafe::Add(T&,System.Int32)
// 0x00000009 T& System.Runtime.CompilerServices.Unsafe::Add(T&,System.IntPtr)
// 0x0000000A T& System.Runtime.CompilerServices.Unsafe::AddByteOffset(T&,System.IntPtr)
// 0x0000000B System.IntPtr System.Runtime.CompilerServices.Unsafe::ByteOffset(T&,T&)
// 0x0000000C System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame(T&,T&)
// 0x0000000D System.Void System.Runtime.Versioning.NonVersionableAttribute::.ctor()
extern void NonVersionableAttribute__ctor_mC41A413839FB1DE658BB595906A9327F13D222CB (void);
static Il2CppMethodPointer s_methodPointers[13] = 
{
	NULL,
	NULL,
	NULL,
	Unsafe_CopyBlock_mAA8ADC06AE9169C81248B328B69DE9EEB6F57B7B,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NonVersionableAttribute__ctor_mC41A413839FB1DE658BB595906A9327F13D222CB,
};
static const int32_t s_InvokerIndices[13] = 
{
	-1,
	-1,
	-1,
	4693,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	3692,
};
static const Il2CppTokenRangePair s_rgctxIndices[3] = 
{
	{ 0x06000003, { 0, 1 } },
	{ 0x06000008, { 1, 1 } },
	{ 0x06000009, { 2, 1 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[3] = 
{
	{ (Il2CppRGCTXDataType)2, 339 },
	{ (Il2CppRGCTXDataType)2, 344 },
	{ (Il2CppRGCTXDataType)2, 345 },
};
extern const CustomAttributesCacheGenerator g_Niantic_System_Runtime_CompilerServices_Unsafe_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Niantic_System_Runtime_CompilerServices_Unsafe_CodeGenModule;
const Il2CppCodeGenModule g_Niantic_System_Runtime_CompilerServices_Unsafe_CodeGenModule = 
{
	"Niantic.System.Runtime.CompilerServices.Unsafe.dll",
	13,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	3,
	s_rgctxIndices,
	3,
	s_rgctxValues,
	NULL,
	g_Niantic_System_Runtime_CompilerServices_Unsafe_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
