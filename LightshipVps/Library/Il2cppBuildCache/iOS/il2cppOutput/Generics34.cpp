#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Boolean>
struct BaseItemSerializer_1_t08F5BA999B41FC91E9459C9DDE808D68F21D7B48;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>
struct BaseItemSerializer_1_t4437CB081DD98887077F39A721F361BBEA872847;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Matrix4x4>
struct BaseItemSerializer_1_t33D3C64D9D4A48058D6E7EA3E851ACA5EEFC0A66;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.UInt32>
struct BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.WeakReference>
struct ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.WeakReference>
struct ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.WeakReference>
struct ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14;
// System.Collections.Concurrent.ConcurrentDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>
struct ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1;
// System.Collections.Generic.Dictionary`2<System.Type,Niantic.ARDK.Utilities.BinarySerialization.ISerializationContext>
struct Dictionary_2_tFA863E843FB30692E25F8E6C59A95CBD989F25F1;
// System.Func`2<System.Guid,System.Object>
struct Func_2_t6A121736FE14BF0AFCB3D3410B5EDD713E93F766;
// System.Func`2<System.Guid,System.WeakReference>
struct Func_2_t131CF46BB444770C3596452E27104AEA3E5E1315;
// System.Func`2<System.IntPtr,System.Object>
struct Func_2_tBAE19E72D7DA6A7039B9076A73522B08CCF10BAC;
// System.Func`2<System.IntPtr,System.WeakReference>
struct Func_2_t8A32AFA946F2C87D6E65587D692EE290673AD33F;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.Object,System.WeakReference>
struct Func_2_tF05B6390930504E1770237C3D8CD743603F0426F;
// System.Func`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>
struct Func_2_tA79C68D320B4C4833D5F5D391CD053D095BBA2E9;
// System.Func`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>
struct Func_2_t5C635761AE2CC537D55A62F7CF9A2C11E60B7835;
// System.Collections.Generic.HashSet`1<System.IO.Stream>
struct HashSet_1_t5486237562EF53A5A4A19E6740E9FBF066D210B1;
// System.Collections.Generic.ICollection`1<System.Guid>
struct ICollection_1_t640A927B1E8C4AF0868E9B4763E93FF04AAA948E;
// System.Collections.Generic.ICollection`1<System.Int32Enum>
struct ICollection_1_tB50CA7B2BBD3301BFC813B57B661A9AC13938614;
// System.Collections.Generic.ICollection`1<UnityEngine.Matrix4x4>
struct ICollection_1_t77237F3591E5BB3D7DFED73670F47A39952238A7;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t35488BE070734B4C5D136DC1A68CBC9CE507D488;
// System.Collections.Generic.IDictionary`2<System.Guid,System.Object>
struct IDictionary_2_t338B8939FBA5C3856512190564F59C6025EBC6D9;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32Enum>
struct IDictionary_2_t552D4975C3192AB8070909EE53AA8BD0D48C2780;
// System.Collections.Generic.IDictionary`2<System.Object,UnityEngine.Matrix4x4>
struct IDictionary_2_t41CFD02907FD04E4926FD6B98290B4993D34BABC;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_tC51B0D1CF3D0A1E45BBD8B79324FE5CEA1C1CB72;
// System.Collections.Generic.IEnumerable`1<System.Guid>
struct IEnumerable_1_tD5F1C2A9AD89EFC746AB92DB4B213421C98A691D;
// System.Collections.Generic.IEnumerable`1<System.Int32Enum>
struct IEnumerable_1_t28FB40D8E33C5846AB04F37C78130A4948569C7C;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Matrix4x4>
struct IEnumerable_1_t1D635210448E96C6C6C200C86AA4C18E2140040C;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>
struct IEnumerator_1_tF3C8B875CD9F5D3783BD9310E54C6B5DCE033EB1;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>>
struct IEnumerator_1_t1F990ABA8E033D98412D6B5CA57E225E7AB18C54;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Matrix4x4>>
struct IEnumerator_1_t080D3236B17C058EC3620C5D5BCFC6901E2A1E2C;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_tF437149CAED78D4A68294D431DE692A78F7D67B3;
// System.Collections.Generic.IEqualityComparer`1<System.Guid>
struct IEqualityComparer_1_t261B924C5A81BD7105A5798D8C188A0A50C456C5;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_t19B34EAD810249AF015A661D23DF1909EADEB101;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.IEqualityComparer`1<Niantic.ARDK.AR._CppAddressAndScale>
struct IEqualityComparer_1_tCD73650C3A662C73308408A736A4827F9773453B;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Guid,System.WeakReference>
struct Tables_t57AEAADFA637382296D4C95F4BD004F88D9E1DB2;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.IntPtr,System.WeakReference>
struct Tables_tE8151DF08C340585F5CB73B6B04CD455DF80AB75;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Object,System.WeakReference>
struct Tables_tE3493AD791A008CEBE0CFC67F850CB59D4ED6239;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>
struct Tables_t44486466486258B71E6173014CD0CBF3DC6ED5AA;
// Niantic.ARDK.Utilities._HttpResponse`1<System.Object>
struct _HttpResponse_1_t56F181460B2EEF1EC7060DC5AC7A5C5A2C3201C7;
// Niantic.ARDK.Networking.ARSim.ArmMessageStream/_MessageExecutor`1<System.Object>
struct _MessageExecutor_1_t9EDA4C5374B9ABFC202AEF573FEF695482ED1E66;
// Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_MessageExecutor`1<System.Object>
struct _MessageExecutor_1_t1A21FA6647FB13FB93438FC2001C3A559AB4EF11;
// Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>
struct _NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344;
// Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>
struct _NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7;
// Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>
struct _ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C;
// Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>
struct _ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165;
// Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>
struct _ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF;
// Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>
struct _ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8;
// Niantic.ARDK.Utilities._ReferenceComparer`1<System.Object>
struct _ReferenceComparer_1_t6114B4B2D587CEEAFD55C3F4179F7F3A2905F29E;
// Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.Single>
struct _SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5;
// Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.UInt32>
struct _SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070;
// Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.Single>
struct _SerializableAwarenessBufferSerializer_2_t1B3417ACE4FAE760A66B1389C0610A4D993B2A60;
// Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.UInt32>
struct _SerializableAwarenessBufferSerializer_2_t06F74E2000A4C28116FC25FE3F660214F9283216;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Int16>>
struct _UntypedToTypedSerializerAdapter_1_tB07C9C41E1D95B9F2E283515002C228F1D2F4DF8;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Single>>
struct _UntypedToTypedSerializerAdapter_1_t2CCF6C6EC9AE3D4AF136EDF677123BDF340B02FA;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Boolean>
struct _UntypedToTypedSerializerAdapter_1_t331BE62EEC4C8A6F3E19269ADB558F29A891B736;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Byte>
struct _UntypedToTypedSerializerAdapter_1_t4505FCEE266F5381A00CF635EE719E581C6596BA;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>
struct _UntypedToTypedSerializerAdapter_1_t1D3F3617406E7FF9F64A3714AA7865A032C106D1;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Color>
struct _UntypedToTypedSerializerAdapter_1_t64526C077763043882F30F8A1E2DB6F6AD50AD8E;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Double>
struct _UntypedToTypedSerializerAdapter_1_t1177CA338B712A842484AFC6BC0E79F8FEBDBE4E;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Guid>
struct _UntypedToTypedSerializerAdapter_1_t8F2359C483BE45BE43693415D13AB994BE4443BE;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int16>
struct _UntypedToTypedSerializerAdapter_1_t7D4110DAAF18469117036E5195BCF4B93613665C;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32>
struct _UntypedToTypedSerializerAdapter_1_tA61B62B868E1B45691E2FE12485D687413CDBDC7;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32Enum>
struct _UntypedToTypedSerializerAdapter_1_tBB9F7ABA47F8A021499E2C41EB5C4851F3A8344B;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int64>
struct _UntypedToTypedSerializerAdapter_1_t6CF744DFD85E32F98E7CBF053AC89BE26CCBF93E;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.IntPtr>
struct _UntypedToTypedSerializerAdapter_1_t70F378A3E73381BF2EB092BCA626283C22325578;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Matrix4x4>
struct _UntypedToTypedSerializerAdapter_1_tF3CED3BC46C2E7A9F210C76CECF2072860BB15F1;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Routing.NetworkId>
struct _UntypedToTypedSerializerAdapter_1_t200B0634F40D93B812AE92E6CC200052B4928377;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Object>
struct _UntypedToTypedSerializerAdapter_1_t236074F42658D122250E635E4DAB768F977242AD;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Quaternion>
struct _UntypedToTypedSerializerAdapter_1_t2A673367601D3F3F3253BFF2285B77C2B89177F0;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Resolution>
struct _UntypedToTypedSerializerAdapter_1_t8BCA1089B80C69AC6A81BCA6235F47F5F18BBAAF;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.SByte>
struct _UntypedToTypedSerializerAdapter_1_t295A3C32ADF22B30795C6C3E079E805F1B8C78D0;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Single>
struct _UntypedToTypedSerializerAdapter_1_t8EA0C276E7368DDC6F39A263C6AD73A14BA7B1D2;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt16>
struct _UntypedToTypedSerializerAdapter_1_t4C1C9369653009559A0B1E338AB4E0DA6F45CFC0;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt32>
struct _UntypedToTypedSerializerAdapter_1_tD7DB551655CE22E92F277512A343628E87BAFB19;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt64>
struct _UntypedToTypedSerializerAdapter_1_t282610B9A6AF4F105F366140071114ED305B0854;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector2>
struct _UntypedToTypedSerializerAdapter_1_t17167D6794DF0164C8BF891A27AF49D5CBF414F0;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector3>
struct _UntypedToTypedSerializerAdapter_1_t7C022E20832A3506C44B7FB257D7E25433752360;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector4>
struct _UntypedToTypedSerializerAdapter_1_t1EF5B49397051B5C8359B970B548EF24F2FEDBA0;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData>
struct _UntypedToTypedSerializerAdapter_1_tE110E7B7524D1A3107C32AB080C89C0E2404330E;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData>
struct _UntypedToTypedSerializerAdapter_1_tACABDF5D8489EB817A4E54F2799856FA1C3E78FC;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage>
struct _UntypedToTypedSerializerAdapter_1_tA1EEB9D2298471814FC8130462B0B0CD429EA37A;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform>
struct _UntypedToTypedSerializerAdapter_1_t5EB04269E4140B64C14434ADE88955698D639A78;
// Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>
struct _WeakValueDictionary_2_t911B1421F837504D8163F073210FC14DDCB92359;
// Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>
struct _WeakValueDictionary_2_t5FFE121F705DAFBFA3C08EC6AFD5CF4D0F922E5F;
// Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>
struct _WeakValueDictionary_2_tD06DE5465D7E4C3663B49E82C0B93BEAC4C2C493;
// Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>
struct _WeakValueDictionary_2_t5950A3E71EDD0D8F21F113FA011FDF6920F4D1BD;
// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>[]
struct KeyValuePair_2U5BU5D_t0BF7C6185BEFBB97D75B41C977593F6FA8E45F23;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>[]
struct KeyValuePair_2U5BU5D_tD14B63166B0AC62215EC442593AE6CA857F5AEE4;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Matrix4x4>[]
struct KeyValuePair_2U5BU5D_t95064707C6138735636A2862E599CBCBA88A2126;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer
struct BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B;
// Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer
struct BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer
struct IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.WeakReference
struct WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76;
// Niantic.ARDK.AR.Awareness._AwarenessBufferBase
struct _AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF;
// Niantic.ARDK.Utilities.BinarySerialization.Contexts._TypeDeserializationContext
struct _TypeDeserializationContext_t39C1ED8527DB516CD89EF229638F2E6CBDBE6444;
// Niantic.ARDK.Utilities.BinarySerialization.Contexts._TypeSerializationContext
struct _TypeSerializationContext_t060F650B96A30F0B6B6A85C56A55D548D7784D6E;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanSerializer_t334DA9746952A84A265834E52C290E7E4376A238_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraIntrinsicsSerializer_tDD3051847FC06942FB682D1952440E4BB77F0BBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4Serializer_t04609B7C66BAAA9BE14D3F444764BAB71386F24A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NARConversions_t759A8F4C7273684E6989896D285406468568FE21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GcObserver_t7023D6B65025CC628DA6EC7962BAE3B2B8E2FED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralC7BB1C7F529F538D622487DC7F7AA1CA62A05832;
IL2CPP_EXTERN_C String_t* _stringLiteralDE44EB699A6FE620517DE44E517245D1D8921D9D;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Deserialize_m25A18552A7D3081D6B21365982F3B2B13323391C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Deserialize_mE656780E6F2DD44BB9FBABD437580C79438D208C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Deserialize_mED86D8AB49810AA3BE145A9B875DAC6D166370F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Deserialize_mFCE6E3CF2B8CCCBB024614091FF77E49AE84837F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Serialize_m2D34BA57E4BCE8DD2120CA7B6B75930326B24D58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Serialize_m5814756252CB5C8E8B72A0EFAA24C89B9B3375E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Serialize_m8692958F30558F98C89D9A318F998029FB59A1EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Serialize_mF4E9F9FAA0AB963C2233A3121F3E4274EA8FFAAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m27466FD512E235FE817B24F8E6BB5F14A5E4FB2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m3B5B322F85CD96740371B7C75D9650148860D9A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m908F19A4CECB37AD0DED0172657C92276B5E4A59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m1B18301A178CB08EBBDF6BD338E5D43C076DD809_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mE04DEC4948A6ECCC16F70EDA9B8DE8DBC4C05B17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mD04F37C1139BFD4B9970E9F257817AF786584725_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _ReadOnlyDictionary_2_ThrowNotSupportedException_m23E575026983EEDEDFFF0FE9D20B043F59EBF891_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _ReadOnlyDictionary_2_ThrowNotSupportedException_m2CD1BFB36668F9DB50B833405376354825A23DDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _ReadOnlyDictionary_2_ThrowNotSupportedException_mCCBF3DB0CC7FFA424BAC7670A82C99C5153C7F95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _ReadOnlyDictionary_2_ThrowNotSupportedException_mE77DF51EDDA4C17633B85C46DABF94F0E2A3B367_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _ReadOnlyDictionary_2__ctor_m1A34D64F21BE38692A67B4AC06F27F27F6508D12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _ReadOnlyDictionary_2__ctor_m705F8396578BF38FE95B57F83330FD1699F79D42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _ReadOnlyDictionary_2__ctor_m891FDCC298156CADC7F5841A9BADEB27F22F709F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _ReadOnlyDictionary_2__ctor_mF13F88387097AA792A0E692126D738B63637261D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_GetOrAdd_m53E42488395339C898F9BD9EF21C79A973AC4F49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_GetOrAdd_m59D0D99214A566191AD2C2839966313F633139F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_GetOrAdd_mD1AC9A5BE2379A9309620CB0070485025529BA5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_GetOrAdd_mE6AD411558BAD4EA24B23262E36EB4F7F5BA35B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_Remove_m1813A1608677A67D09549A66012D922F394EB57A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_Remove_m737F7581CBAEAD51C7BADE571C0BBE9E41CB0B7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_Remove_m793BAE658F02D957A60F285B7FB53A9EE1C68B54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_Remove_m7A36371384F5970C23AD10D3AC850B759C1474CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryAdd_m22039B8A7E452816335950E3D57BC35D761B9636_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryAdd_mC039CDC4D093DED1EE41E8392FB6553B900391E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryAdd_mD4445991E0B99DF65A00DA158C2D21A603BF18D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryAdd_mE0E8685A6CD5FF46AA029F01D43FF0036B9123B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryGetValue_m162CCAFD6B1FFA41F70371A4CC76663D1CF1D2E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryGetValue_m3141FB4DB7E48CF44F013356B64AE94C6187B350_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryGetValue_m8A4C872775F5C4496C88964A48B130870187342C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WeakValueDictionary_2_TryGetValue_mE4A2DDD510D94F344B7B9DC3DF044FDFA9DA1101_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_t0BF7C6185BEFBB97D75B41C977593F6FA8E45F23;
struct KeyValuePair_2U5BU5D_tD14B63166B0AC62215EC442593AE6CA857F5AEE4;
struct KeyValuePair_2U5BU5D_t95064707C6138735636A2862E599CBCBA88A2126;
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<System.Guid,System.Object>
struct U3CU3Ec_t8CFD634201EF99D6851A554930DCE37CFD5785A4  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t8CFD634201EF99D6851A554930DCE37CFD5785A4_StaticFields
{
public:
	// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<TKey,TValue> Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c::<>9
	U3CU3Ec_t8CFD634201EF99D6851A554930DCE37CFD5785A4 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8CFD634201EF99D6851A554930DCE37CFD5785A4_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t8CFD634201EF99D6851A554930DCE37CFD5785A4 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t8CFD634201EF99D6851A554930DCE37CFD5785A4 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t8CFD634201EF99D6851A554930DCE37CFD5785A4 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<System.IntPtr,System.Object>
struct U3CU3Ec_t528652B518E0AE22F58D23BFE364E944DC9C2640  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t528652B518E0AE22F58D23BFE364E944DC9C2640_StaticFields
{
public:
	// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<TKey,TValue> Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c::<>9
	U3CU3Ec_t528652B518E0AE22F58D23BFE364E944DC9C2640 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t528652B518E0AE22F58D23BFE364E944DC9C2640_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t528652B518E0AE22F58D23BFE364E944DC9C2640 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t528652B518E0AE22F58D23BFE364E944DC9C2640 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t528652B518E0AE22F58D23BFE364E944DC9C2640 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<System.Object,System.Object>
struct U3CU3Ec_tF341995CCB814C6031FFF75D706EB8150506538D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF341995CCB814C6031FFF75D706EB8150506538D_StaticFields
{
public:
	// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<TKey,TValue> Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c::<>9
	U3CU3Ec_tF341995CCB814C6031FFF75D706EB8150506538D * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF341995CCB814C6031FFF75D706EB8150506538D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF341995CCB814C6031FFF75D706EB8150506538D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF341995CCB814C6031FFF75D706EB8150506538D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF341995CCB814C6031FFF75D706EB8150506538D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<Niantic.ARDK.AR._CppAddressAndScale,System.Object>
struct U3CU3Ec_t08D7CEDB0D53B80A4394C1A220E59DE31C49057D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t08D7CEDB0D53B80A4394C1A220E59DE31C49057D_StaticFields
{
public:
	// Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c<TKey,TValue> Niantic.ARDK.Utilities._WeakValueDictionary`2/<>c::<>9
	U3CU3Ec_t08D7CEDB0D53B80A4394C1A220E59DE31C49057D * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t08D7CEDB0D53B80A4394C1A220E59DE31C49057D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t08D7CEDB0D53B80A4394C1A220E59DE31C49057D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t08D7CEDB0D53B80A4394C1A220E59DE31C49057D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t08D7CEDB0D53B80A4394C1A220E59DE31C49057D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Unity.Collections.NativeArray`1<System.Int16>>
struct BaseItemSerializer_1_t45E4F833222B640FAE87D5EFE9A60412E3144E5F  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Unity.Collections.NativeArray`1<System.Single>>
struct BaseItemSerializer_1_t55A18EA76878C9DDC5AAD6CC9C63DB6206195640  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Boolean>
struct BaseItemSerializer_1_t08F5BA999B41FC91E9459C9DDE808D68F21D7B48  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Byte>
struct BaseItemSerializer_1_tAC96E077A096599814432F1A9A1E5FF3F65A36A4  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>
struct BaseItemSerializer_1_t4437CB081DD98887077F39A721F361BBEA872847  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Color>
struct BaseItemSerializer_1_t2ED020174AA8AD7ADCD4C5B80F1EFF29F44267DF  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Double>
struct BaseItemSerializer_1_t136AADD0BE63185FA914DE341804377A69B5E1D6  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Guid>
struct BaseItemSerializer_1_t61824B7087DD01950789F7DA9292858840DC7386  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Int16>
struct BaseItemSerializer_1_tCC0889E4D0CDCD8C3AAD4D8E73F2E259BD92B259  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Int32>
struct BaseItemSerializer_1_tCA056274B61BB1B788325B2D8E04676895AAA7B0  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Int32Enum>
struct BaseItemSerializer_1_t8E1224D2AE4A502C8B4C2DED2D66750B8AF2948C  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Int64>
struct BaseItemSerializer_1_tF68BA62EF82BFEFAE6C060567998792DB31C3283  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.IntPtr>
struct BaseItemSerializer_1_t8A1CB7628E484FFAB67B5577264FA02749D3E093  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Matrix4x4>
struct BaseItemSerializer_1_t33D3C64D9D4A48058D6E7EA3E851ACA5EEFC0A66  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.Networking.HLAPI.Routing.NetworkId>
struct BaseItemSerializer_1_t9E424146F6FBEE0ADF2A3F6BE204D000F0586927  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Object>
struct BaseItemSerializer_1_t3B73A93FC2B7755AFBFFE6322E84D24DB7F37F8F  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Quaternion>
struct BaseItemSerializer_1_t259B1F7172D40593E987E00D3CAE05E36076FE14  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Resolution>
struct BaseItemSerializer_1_t25950CBD2D435A56C7706C95DF7C90AED81EDA27  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.SByte>
struct BaseItemSerializer_1_t5D31C9022FE55E465433293FF7A15960E2383F44  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Single>
struct BaseItemSerializer_1_tBE2E41D5B73D31F45F68BE01F8B14A8741360498  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.UInt16>
struct BaseItemSerializer_1_tBE5F2F8D26B5BD07111849CBAAE56F80A1B2EDF6  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.UInt32>
struct BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.UInt64>
struct BaseItemSerializer_1_t872E3A292C0D48C2ABE12EC886C3AFBDDF077463  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Vector2>
struct BaseItemSerializer_1_t3876C9EE4FD05BBCF445498460670F429C5B7B26  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Vector3>
struct BaseItemSerializer_1_tE74345F47D9357E29966B2A32C87452A84C34449  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Vector4>
struct BaseItemSerializer_1_tA2638A1CB0CD1FC466D6D66B209D2BDD09D2123D  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData>
struct BaseItemSerializer_1_t8263500965A6A9165036809F43FF16B708B494BD  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData>
struct BaseItemSerializer_1_t10751672E010A3255A897F5EE859FFDC8B9DB643  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage>
struct BaseItemSerializer_1_t2CC1EE42BB59FC91F0290F706BC1C0B136DE6169  : public RuntimeObject
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform>
struct BaseItemSerializer_1_t5487BE579A8D8D71FAA95C9A6BF7F75CF9435337  : public RuntimeObject
{
public:

public:
};


// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.WeakReference>
struct ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t57AEAADFA637382296D4C95F4BD004F88D9E1DB2 * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1, ____tables_0)); }
	inline Tables_t57AEAADFA637382296D4C95F4BD004F88D9E1DB2 * get__tables_0() const { return ____tables_0; }
	inline Tables_t57AEAADFA637382296D4C95F4BD004F88D9E1DB2 ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_t57AEAADFA637382296D4C95F4BD004F88D9E1DB2 * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_4;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_4() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1_StaticFields, ___s_isValueWriteAtomic_4)); }
	inline bool get_s_isValueWriteAtomic_4() const { return ___s_isValueWriteAtomic_4; }
	inline bool* get_address_of_s_isValueWriteAtomic_4() { return &___s_isValueWriteAtomic_4; }
	inline void set_s_isValueWriteAtomic_4(bool value)
	{
		___s_isValueWriteAtomic_4 = value;
	}
};


// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.WeakReference>
struct ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tE8151DF08C340585F5CB73B6B04CD455DF80AB75 * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81, ____tables_0)); }
	inline Tables_tE8151DF08C340585F5CB73B6B04CD455DF80AB75 * get__tables_0() const { return ____tables_0; }
	inline Tables_tE8151DF08C340585F5CB73B6B04CD455DF80AB75 ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_tE8151DF08C340585F5CB73B6B04CD455DF80AB75 * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_4;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_4() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81_StaticFields, ___s_isValueWriteAtomic_4)); }
	inline bool get_s_isValueWriteAtomic_4() const { return ___s_isValueWriteAtomic_4; }
	inline bool* get_address_of_s_isValueWriteAtomic_4() { return &___s_isValueWriteAtomic_4; }
	inline void set_s_isValueWriteAtomic_4(bool value)
	{
		___s_isValueWriteAtomic_4 = value;
	}
};


// System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.WeakReference>
struct ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tE3493AD791A008CEBE0CFC67F850CB59D4ED6239 * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14, ____tables_0)); }
	inline Tables_tE3493AD791A008CEBE0CFC67F850CB59D4ED6239 * get__tables_0() const { return ____tables_0; }
	inline Tables_tE3493AD791A008CEBE0CFC67F850CB59D4ED6239 ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_tE3493AD791A008CEBE0CFC67F850CB59D4ED6239 * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_4;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_4() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14_StaticFields, ___s_isValueWriteAtomic_4)); }
	inline bool get_s_isValueWriteAtomic_4() const { return ___s_isValueWriteAtomic_4; }
	inline bool* get_address_of_s_isValueWriteAtomic_4() { return &___s_isValueWriteAtomic_4; }
	inline void set_s_isValueWriteAtomic_4(bool value)
	{
		___s_isValueWriteAtomic_4 = value;
	}
};


// System.Collections.Concurrent.ConcurrentDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>
struct ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t44486466486258B71E6173014CD0CBF3DC6ED5AA * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1, ____tables_0)); }
	inline Tables_t44486466486258B71E6173014CD0CBF3DC6ED5AA * get__tables_0() const { return ____tables_0; }
	inline Tables_t44486466486258B71E6173014CD0CBF3DC6ED5AA ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_t44486466486258B71E6173014CD0CBF3DC6ED5AA * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_4;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_4() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1_StaticFields, ___s_isValueWriteAtomic_4)); }
	inline bool get_s_isValueWriteAtomic_4() const { return ___s_isValueWriteAtomic_4; }
	inline bool* get_address_of_s_isValueWriteAtomic_4() { return &___s_isValueWriteAtomic_4; }
	inline void set_s_isValueWriteAtomic_4(bool value)
	{
		___s_isValueWriteAtomic_4 = value;
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>
struct List_1_tC130ABE0D3239F9A7589980E809A2AA709683896  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t0BF7C6185BEFBB97D75B41C977593F6FA8E45F23* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC130ABE0D3239F9A7589980E809A2AA709683896, ____items_1)); }
	inline KeyValuePair_2U5BU5D_t0BF7C6185BEFBB97D75B41C977593F6FA8E45F23* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_t0BF7C6185BEFBB97D75B41C977593F6FA8E45F23** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_t0BF7C6185BEFBB97D75B41C977593F6FA8E45F23* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC130ABE0D3239F9A7589980E809A2AA709683896, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC130ABE0D3239F9A7589980E809A2AA709683896, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC130ABE0D3239F9A7589980E809A2AA709683896, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC130ABE0D3239F9A7589980E809A2AA709683896_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_t0BF7C6185BEFBB97D75B41C977593F6FA8E45F23* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC130ABE0D3239F9A7589980E809A2AA709683896_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_t0BF7C6185BEFBB97D75B41C977593F6FA8E45F23* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_t0BF7C6185BEFBB97D75B41C977593F6FA8E45F23** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_t0BF7C6185BEFBB97D75B41C977593F6FA8E45F23* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>>
struct List_1_tEF17C82A723180F161E73AA55B16D16B7B40EDB5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_tD14B63166B0AC62215EC442593AE6CA857F5AEE4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tEF17C82A723180F161E73AA55B16D16B7B40EDB5, ____items_1)); }
	inline KeyValuePair_2U5BU5D_tD14B63166B0AC62215EC442593AE6CA857F5AEE4* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_tD14B63166B0AC62215EC442593AE6CA857F5AEE4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_tD14B63166B0AC62215EC442593AE6CA857F5AEE4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tEF17C82A723180F161E73AA55B16D16B7B40EDB5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tEF17C82A723180F161E73AA55B16D16B7B40EDB5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tEF17C82A723180F161E73AA55B16D16B7B40EDB5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tEF17C82A723180F161E73AA55B16D16B7B40EDB5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_tD14B63166B0AC62215EC442593AE6CA857F5AEE4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tEF17C82A723180F161E73AA55B16D16B7B40EDB5_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_tD14B63166B0AC62215EC442593AE6CA857F5AEE4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_tD14B63166B0AC62215EC442593AE6CA857F5AEE4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_tD14B63166B0AC62215EC442593AE6CA857F5AEE4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Matrix4x4>>
struct List_1_tD2A2AD4A175B56DEFD3E026C0C374B9DA1D4828F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t95064707C6138735636A2862E599CBCBA88A2126* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD2A2AD4A175B56DEFD3E026C0C374B9DA1D4828F, ____items_1)); }
	inline KeyValuePair_2U5BU5D_t95064707C6138735636A2862E599CBCBA88A2126* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_t95064707C6138735636A2862E599CBCBA88A2126** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_t95064707C6138735636A2862E599CBCBA88A2126* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD2A2AD4A175B56DEFD3E026C0C374B9DA1D4828F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD2A2AD4A175B56DEFD3E026C0C374B9DA1D4828F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD2A2AD4A175B56DEFD3E026C0C374B9DA1D4828F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD2A2AD4A175B56DEFD3E026C0C374B9DA1D4828F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_t95064707C6138735636A2862E599CBCBA88A2126* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD2A2AD4A175B56DEFD3E026C0C374B9DA1D4828F_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_t95064707C6138735636A2862E599CBCBA88A2126* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_t95064707C6138735636A2862E599CBCBA88A2126** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_t95064707C6138735636A2862E599CBCBA88A2126* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____items_1)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_MessageExecutor`1<System.Object>
struct _MessageExecutor_1_t1A21FA6647FB13FB93438FC2001C3A559AB4EF11  : public RuntimeObject
{
public:
	// System.Action`1<T> Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_MessageExecutor`1::_action
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____action_0;

public:
	inline static int32_t get_offset_of__action_0() { return static_cast<int32_t>(offsetof(_MessageExecutor_1_t1A21FA6647FB13FB93438FC2001C3A559AB4EF11, ____action_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__action_0() const { return ____action_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__action_0() { return &____action_0; }
	inline void set__action_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____action_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____action_0), (void*)value);
	}
};


// Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>
struct _ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2::_source
	RuntimeObject* ____source_0;
	// System.Object Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of__source_0() { return static_cast<int32_t>(offsetof(_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C, ____source_0)); }
	inline RuntimeObject* get__source_0() const { return ____source_0; }
	inline RuntimeObject** get_address_of__source_0() { return &____source_0; }
	inline void set__source_0(RuntimeObject* value)
	{
		____source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>
struct _ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2::_source
	RuntimeObject* ____source_0;
	// System.Object Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of__source_0() { return static_cast<int32_t>(offsetof(_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165, ____source_0)); }
	inline RuntimeObject* get__source_0() const { return ____source_0; }
	inline RuntimeObject** get_address_of__source_0() { return &____source_0; }
	inline void set__source_0(RuntimeObject* value)
	{
		____source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>
struct _ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2::_source
	RuntimeObject* ____source_0;
	// System.Object Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of__source_0() { return static_cast<int32_t>(offsetof(_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF, ____source_0)); }
	inline RuntimeObject* get__source_0() const { return ____source_0; }
	inline RuntimeObject** get_address_of__source_0() { return &____source_0; }
	inline void set__source_0(RuntimeObject* value)
	{
		____source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>
struct _ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2::_source
	RuntimeObject* ____source_0;
	// System.Object Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of__source_0() { return static_cast<int32_t>(offsetof(_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8, ____source_0)); }
	inline RuntimeObject* get__source_0() const { return ____source_0; }
	inline RuntimeObject** get_address_of__source_0() { return &____source_0; }
	inline void set__source_0(RuntimeObject* value)
	{
		____source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities._ReferenceComparer`1<System.Object>
struct _ReferenceComparer_1_t6114B4B2D587CEEAFD55C3F4179F7F3A2905F29E  : public RuntimeObject
{
public:

public:
};

struct _ReferenceComparer_1_t6114B4B2D587CEEAFD55C3F4179F7F3A2905F29E_StaticFields
{
public:
	// Niantic.ARDK.Utilities._ReferenceComparer`1<T> Niantic.ARDK.Utilities._ReferenceComparer`1::Instance
	_ReferenceComparer_1_t6114B4B2D587CEEAFD55C3F4179F7F3A2905F29E * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(_ReferenceComparer_1_t6114B4B2D587CEEAFD55C3F4179F7F3A2905F29E_StaticFields, ___Instance_0)); }
	inline _ReferenceComparer_1_t6114B4B2D587CEEAFD55C3F4179F7F3A2905F29E * get_Instance_0() const { return ___Instance_0; }
	inline _ReferenceComparer_1_t6114B4B2D587CEEAFD55C3F4179F7F3A2905F29E ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(_ReferenceComparer_1_t6114B4B2D587CEEAFD55C3F4179F7F3A2905F29E * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>
struct _WeakValueDictionary_2_t911B1421F837504D8163F073210FC14DDCB92359  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_innerDictionary
	ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 * ____innerDictionary_1;

public:
	inline static int32_t get_offset_of__innerDictionary_1() { return static_cast<int32_t>(offsetof(_WeakValueDictionary_2_t911B1421F837504D8163F073210FC14DDCB92359, ____innerDictionary_1)); }
	inline ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 * get__innerDictionary_1() const { return ____innerDictionary_1; }
	inline ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 ** get_address_of__innerDictionary_1() { return &____innerDictionary_1; }
	inline void set__innerDictionary_1(ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 * value)
	{
		____innerDictionary_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerDictionary_1), (void*)value);
	}
};

struct _WeakValueDictionary_2_t911B1421F837504D8163F073210FC14DDCB92359_StaticFields
{
public:
	// System.Func`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_createWeakReference
	Func_2_t131CF46BB444770C3596452E27104AEA3E5E1315 * ____createWeakReference_0;

public:
	inline static int32_t get_offset_of__createWeakReference_0() { return static_cast<int32_t>(offsetof(_WeakValueDictionary_2_t911B1421F837504D8163F073210FC14DDCB92359_StaticFields, ____createWeakReference_0)); }
	inline Func_2_t131CF46BB444770C3596452E27104AEA3E5E1315 * get__createWeakReference_0() const { return ____createWeakReference_0; }
	inline Func_2_t131CF46BB444770C3596452E27104AEA3E5E1315 ** get_address_of__createWeakReference_0() { return &____createWeakReference_0; }
	inline void set__createWeakReference_0(Func_2_t131CF46BB444770C3596452E27104AEA3E5E1315 * value)
	{
		____createWeakReference_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____createWeakReference_0), (void*)value);
	}
};


// Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>
struct _WeakValueDictionary_2_t5FFE121F705DAFBFA3C08EC6AFD5CF4D0F922E5F  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_innerDictionary
	ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 * ____innerDictionary_1;

public:
	inline static int32_t get_offset_of__innerDictionary_1() { return static_cast<int32_t>(offsetof(_WeakValueDictionary_2_t5FFE121F705DAFBFA3C08EC6AFD5CF4D0F922E5F, ____innerDictionary_1)); }
	inline ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 * get__innerDictionary_1() const { return ____innerDictionary_1; }
	inline ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 ** get_address_of__innerDictionary_1() { return &____innerDictionary_1; }
	inline void set__innerDictionary_1(ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 * value)
	{
		____innerDictionary_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerDictionary_1), (void*)value);
	}
};

struct _WeakValueDictionary_2_t5FFE121F705DAFBFA3C08EC6AFD5CF4D0F922E5F_StaticFields
{
public:
	// System.Func`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_createWeakReference
	Func_2_t8A32AFA946F2C87D6E65587D692EE290673AD33F * ____createWeakReference_0;

public:
	inline static int32_t get_offset_of__createWeakReference_0() { return static_cast<int32_t>(offsetof(_WeakValueDictionary_2_t5FFE121F705DAFBFA3C08EC6AFD5CF4D0F922E5F_StaticFields, ____createWeakReference_0)); }
	inline Func_2_t8A32AFA946F2C87D6E65587D692EE290673AD33F * get__createWeakReference_0() const { return ____createWeakReference_0; }
	inline Func_2_t8A32AFA946F2C87D6E65587D692EE290673AD33F ** get_address_of__createWeakReference_0() { return &____createWeakReference_0; }
	inline void set__createWeakReference_0(Func_2_t8A32AFA946F2C87D6E65587D692EE290673AD33F * value)
	{
		____createWeakReference_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____createWeakReference_0), (void*)value);
	}
};


// Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>
struct _WeakValueDictionary_2_tD06DE5465D7E4C3663B49E82C0B93BEAC4C2C493  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_innerDictionary
	ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 * ____innerDictionary_1;

public:
	inline static int32_t get_offset_of__innerDictionary_1() { return static_cast<int32_t>(offsetof(_WeakValueDictionary_2_tD06DE5465D7E4C3663B49E82C0B93BEAC4C2C493, ____innerDictionary_1)); }
	inline ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 * get__innerDictionary_1() const { return ____innerDictionary_1; }
	inline ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 ** get_address_of__innerDictionary_1() { return &____innerDictionary_1; }
	inline void set__innerDictionary_1(ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 * value)
	{
		____innerDictionary_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerDictionary_1), (void*)value);
	}
};

struct _WeakValueDictionary_2_tD06DE5465D7E4C3663B49E82C0B93BEAC4C2C493_StaticFields
{
public:
	// System.Func`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_createWeakReference
	Func_2_tF05B6390930504E1770237C3D8CD743603F0426F * ____createWeakReference_0;

public:
	inline static int32_t get_offset_of__createWeakReference_0() { return static_cast<int32_t>(offsetof(_WeakValueDictionary_2_tD06DE5465D7E4C3663B49E82C0B93BEAC4C2C493_StaticFields, ____createWeakReference_0)); }
	inline Func_2_tF05B6390930504E1770237C3D8CD743603F0426F * get__createWeakReference_0() const { return ____createWeakReference_0; }
	inline Func_2_tF05B6390930504E1770237C3D8CD743603F0426F ** get_address_of__createWeakReference_0() { return &____createWeakReference_0; }
	inline void set__createWeakReference_0(Func_2_tF05B6390930504E1770237C3D8CD743603F0426F * value)
	{
		____createWeakReference_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____createWeakReference_0), (void*)value);
	}
};


// Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>
struct _WeakValueDictionary_2_t5950A3E71EDD0D8F21F113FA011FDF6920F4D1BD  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_innerDictionary
	ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 * ____innerDictionary_1;

public:
	inline static int32_t get_offset_of__innerDictionary_1() { return static_cast<int32_t>(offsetof(_WeakValueDictionary_2_t5950A3E71EDD0D8F21F113FA011FDF6920F4D1BD, ____innerDictionary_1)); }
	inline ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 * get__innerDictionary_1() const { return ____innerDictionary_1; }
	inline ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 ** get_address_of__innerDictionary_1() { return &____innerDictionary_1; }
	inline void set__innerDictionary_1(ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 * value)
	{
		____innerDictionary_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerDictionary_1), (void*)value);
	}
};

struct _WeakValueDictionary_2_t5950A3E71EDD0D8F21F113FA011FDF6920F4D1BD_StaticFields
{
public:
	// System.Func`2<TKey,System.WeakReference> Niantic.ARDK.Utilities._WeakValueDictionary`2::_createWeakReference
	Func_2_t5C635761AE2CC537D55A62F7CF9A2C11E60B7835 * ____createWeakReference_0;

public:
	inline static int32_t get_offset_of__createWeakReference_0() { return static_cast<int32_t>(offsetof(_WeakValueDictionary_2_t5950A3E71EDD0D8F21F113FA011FDF6920F4D1BD_StaticFields, ____createWeakReference_0)); }
	inline Func_2_t5C635761AE2CC537D55A62F7CF9A2C11E60B7835 * get__createWeakReference_0() const { return ____createWeakReference_0; }
	inline Func_2_t5C635761AE2CC537D55A62F7CF9A2C11E60B7835 ** get_address_of__createWeakReference_0() { return &____createWeakReference_0; }
	inline void set__createWeakReference_0(Func_2_t5C635761AE2CC537D55A62F7CF9A2C11E60B7835 * value)
	{
		____createWeakReference_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____createWeakReference_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer
struct BinarySerializerOrDeserializer_t044DC8448D100DCE9608E198CEDE3C5006263D4C  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,Niantic.ARDK.Utilities.BinarySerialization.ISerializationContext> Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer::_contexts
	Dictionary_2_tFA863E843FB30692E25F8E6C59A95CBD989F25F1 * ____contexts_2;
	// System.IO.Stream Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer::<Stream>k__BackingField
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___U3CStreamU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of__contexts_2() { return static_cast<int32_t>(offsetof(BinarySerializerOrDeserializer_t044DC8448D100DCE9608E198CEDE3C5006263D4C, ____contexts_2)); }
	inline Dictionary_2_tFA863E843FB30692E25F8E6C59A95CBD989F25F1 * get__contexts_2() const { return ____contexts_2; }
	inline Dictionary_2_tFA863E843FB30692E25F8E6C59A95CBD989F25F1 ** get_address_of__contexts_2() { return &____contexts_2; }
	inline void set__contexts_2(Dictionary_2_tFA863E843FB30692E25F8E6C59A95CBD989F25F1 * value)
	{
		____contexts_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____contexts_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStreamU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BinarySerializerOrDeserializer_t044DC8448D100DCE9608E198CEDE3C5006263D4C, ___U3CStreamU3Ek__BackingField_4)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_U3CStreamU3Ek__BackingField_4() const { return ___U3CStreamU3Ek__BackingField_4; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_U3CStreamU3Ek__BackingField_4() { return &___U3CStreamU3Ek__BackingField_4; }
	inline void set_U3CStreamU3Ek__BackingField_4(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___U3CStreamU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStreamU3Ek__BackingField_4), (void*)value);
	}
};

struct BinarySerializerOrDeserializer_t044DC8448D100DCE9608E198CEDE3C5006263D4C_StaticFields
{
public:
	// System.Object Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer::_runningStreamsLock
	RuntimeObject * ____runningStreamsLock_0;
	// System.Collections.Generic.HashSet`1<System.IO.Stream> Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer::_runningStreams
	HashSet_1_t5486237562EF53A5A4A19E6740E9FBF066D210B1 * ____runningStreams_1;

public:
	inline static int32_t get_offset_of__runningStreamsLock_0() { return static_cast<int32_t>(offsetof(BinarySerializerOrDeserializer_t044DC8448D100DCE9608E198CEDE3C5006263D4C_StaticFields, ____runningStreamsLock_0)); }
	inline RuntimeObject * get__runningStreamsLock_0() const { return ____runningStreamsLock_0; }
	inline RuntimeObject ** get_address_of__runningStreamsLock_0() { return &____runningStreamsLock_0; }
	inline void set__runningStreamsLock_0(RuntimeObject * value)
	{
		____runningStreamsLock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____runningStreamsLock_0), (void*)value);
	}

	inline static int32_t get_offset_of__runningStreams_1() { return static_cast<int32_t>(offsetof(BinarySerializerOrDeserializer_t044DC8448D100DCE9608E198CEDE3C5006263D4C_StaticFields, ____runningStreams_1)); }
	inline HashSet_1_t5486237562EF53A5A4A19E6740E9FBF066D210B1 * get__runningStreams_1() const { return ____runningStreams_1; }
	inline HashSet_1_t5486237562EF53A5A4A19E6740E9FBF066D210B1 ** get_address_of__runningStreams_1() { return &____runningStreams_1; }
	inline void set__runningStreams_1(HashSet_1_t5486237562EF53A5A4A19E6740E9FBF066D210B1 * value)
	{
		____runningStreams_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____runningStreams_1), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// Niantic.ARDK.AR.Awareness._AwarenessBufferBase
struct _AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF  : public RuntimeObject
{
public:
	// System.Boolean Niantic.ARDK.AR.Awareness._AwarenessBufferBase::<IsKeyframe>k__BackingField
	bool ___U3CIsKeyframeU3Ek__BackingField_0;
	// System.UInt32 Niantic.ARDK.AR.Awareness._AwarenessBufferBase::<Width>k__BackingField
	uint32_t ___U3CWidthU3Ek__BackingField_1;
	// System.UInt32 Niantic.ARDK.AR.Awareness._AwarenessBufferBase::<Height>k__BackingField
	uint32_t ___U3CHeightU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CIsKeyframeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF, ___U3CIsKeyframeU3Ek__BackingField_0)); }
	inline bool get_U3CIsKeyframeU3Ek__BackingField_0() const { return ___U3CIsKeyframeU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsKeyframeU3Ek__BackingField_0() { return &___U3CIsKeyframeU3Ek__BackingField_0; }
	inline void set_U3CIsKeyframeU3Ek__BackingField_0(bool value)
	{
		___U3CIsKeyframeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CWidthU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF, ___U3CWidthU3Ek__BackingField_1)); }
	inline uint32_t get_U3CWidthU3Ek__BackingField_1() const { return ___U3CWidthU3Ek__BackingField_1; }
	inline uint32_t* get_address_of_U3CWidthU3Ek__BackingField_1() { return &___U3CWidthU3Ek__BackingField_1; }
	inline void set_U3CWidthU3Ek__BackingField_1(uint32_t value)
	{
		___U3CWidthU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CHeightU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF, ___U3CHeightU3Ek__BackingField_2)); }
	inline uint32_t get_U3CHeightU3Ek__BackingField_2() const { return ___U3CHeightU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CHeightU3Ek__BackingField_2() { return &___U3CHeightU3Ek__BackingField_2; }
	inline void set_U3CHeightU3Ek__BackingField_2(uint32_t value)
	{
		___U3CHeightU3Ek__BackingField_2 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.WeakReference>
struct KeyValuePair_2_tDB70CB08EDD9AC368147F64B26A736278DC2A0C0 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tDB70CB08EDD9AC368147F64B26A736278DC2A0C0, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tDB70CB08EDD9AC368147F64B26A736278DC2A0C0, ___value_1)); }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * get_value_1() const { return ___value_1; }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.Single>
struct _SerializableAwarenessBufferSerializer_2_t1B3417ACE4FAE760A66B1389C0610A4D993B2A60  : public BaseItemSerializer_1_t3B73A93FC2B7755AFBFFE6322E84D24DB7F37F8F
{
public:

public:
};


// Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.UInt32>
struct _SerializableAwarenessBufferSerializer_2_t06F74E2000A4C28116FC25FE3F660214F9283216  : public BaseItemSerializer_1_t3B73A93FC2B7755AFBFFE6322E84D24DB7F37F8F
{
public:

public:
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Int16>>
struct _UntypedToTypedSerializerAdapter_1_tB07C9C41E1D95B9F2E283515002C228F1D2F4DF8  : public BaseItemSerializer_1_t45E4F833222B640FAE87D5EFE9A60412E3144E5F
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_tB07C9C41E1D95B9F2E283515002C228F1D2F4DF8, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Single>>
struct _UntypedToTypedSerializerAdapter_1_t2CCF6C6EC9AE3D4AF136EDF677123BDF340B02FA  : public BaseItemSerializer_1_t55A18EA76878C9DDC5AAD6CC9C63DB6206195640
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_t2CCF6C6EC9AE3D4AF136EDF677123BDF340B02FA, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Boolean>
struct _UntypedToTypedSerializerAdapter_1_t331BE62EEC4C8A6F3E19269ADB558F29A891B736  : public BaseItemSerializer_1_t08F5BA999B41FC91E9459C9DDE808D68F21D7B48
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_t331BE62EEC4C8A6F3E19269ADB558F29A891B736, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Byte>
struct _UntypedToTypedSerializerAdapter_1_t4505FCEE266F5381A00CF635EE719E581C6596BA  : public BaseItemSerializer_1_tAC96E077A096599814432F1A9A1E5FF3F65A36A4
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_t4505FCEE266F5381A00CF635EE719E581C6596BA, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>
struct _UntypedToTypedSerializerAdapter_1_t1D3F3617406E7FF9F64A3714AA7865A032C106D1  : public BaseItemSerializer_1_t4437CB081DD98887077F39A721F361BBEA872847
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_t1D3F3617406E7FF9F64A3714AA7865A032C106D1, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Color>
struct _UntypedToTypedSerializerAdapter_1_t64526C077763043882F30F8A1E2DB6F6AD50AD8E  : public BaseItemSerializer_1_t2ED020174AA8AD7ADCD4C5B80F1EFF29F44267DF
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_t64526C077763043882F30F8A1E2DB6F6AD50AD8E, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Double>
struct _UntypedToTypedSerializerAdapter_1_t1177CA338B712A842484AFC6BC0E79F8FEBDBE4E  : public BaseItemSerializer_1_t136AADD0BE63185FA914DE341804377A69B5E1D6
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_t1177CA338B712A842484AFC6BC0E79F8FEBDBE4E, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Guid>
struct _UntypedToTypedSerializerAdapter_1_t8F2359C483BE45BE43693415D13AB994BE4443BE  : public BaseItemSerializer_1_t61824B7087DD01950789F7DA9292858840DC7386
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_t8F2359C483BE45BE43693415D13AB994BE4443BE, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int16>
struct _UntypedToTypedSerializerAdapter_1_t7D4110DAAF18469117036E5195BCF4B93613665C  : public BaseItemSerializer_1_tCC0889E4D0CDCD8C3AAD4D8E73F2E259BD92B259
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_t7D4110DAAF18469117036E5195BCF4B93613665C, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32>
struct _UntypedToTypedSerializerAdapter_1_tA61B62B868E1B45691E2FE12485D687413CDBDC7  : public BaseItemSerializer_1_tCA056274B61BB1B788325B2D8E04676895AAA7B0
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_tA61B62B868E1B45691E2FE12485D687413CDBDC7, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32Enum>
struct _UntypedToTypedSerializerAdapter_1_tBB9F7ABA47F8A021499E2C41EB5C4851F3A8344B  : public BaseItemSerializer_1_t8E1224D2AE4A502C8B4C2DED2D66750B8AF2948C
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_tBB9F7ABA47F8A021499E2C41EB5C4851F3A8344B, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int64>
struct _UntypedToTypedSerializerAdapter_1_t6CF744DFD85E32F98E7CBF053AC89BE26CCBF93E  : public BaseItemSerializer_1_tF68BA62EF82BFEFAE6C060567998792DB31C3283
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_t6CF744DFD85E32F98E7CBF053AC89BE26CCBF93E, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.IntPtr>
struct _UntypedToTypedSerializerAdapter_1_t70F378A3E73381BF2EB092BCA626283C22325578  : public BaseItemSerializer_1_t8A1CB7628E484FFAB67B5577264FA02749D3E093
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_t70F378A3E73381BF2EB092BCA626283C22325578, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Matrix4x4>
struct _UntypedToTypedSerializerAdapter_1_tF3CED3BC46C2E7A9F210C76CECF2072860BB15F1  : public BaseItemSerializer_1_t33D3C64D9D4A48058D6E7EA3E851ACA5EEFC0A66
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_tF3CED3BC46C2E7A9F210C76CECF2072860BB15F1, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Routing.NetworkId>
struct _UntypedToTypedSerializerAdapter_1_t200B0634F40D93B812AE92E6CC200052B4928377  : public BaseItemSerializer_1_t9E424146F6FBEE0ADF2A3F6BE204D000F0586927
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_t200B0634F40D93B812AE92E6CC200052B4928377, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Object>
struct _UntypedToTypedSerializerAdapter_1_t236074F42658D122250E635E4DAB768F977242AD  : public BaseItemSerializer_1_t3B73A93FC2B7755AFBFFE6322E84D24DB7F37F8F
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_t236074F42658D122250E635E4DAB768F977242AD, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Quaternion>
struct _UntypedToTypedSerializerAdapter_1_t2A673367601D3F3F3253BFF2285B77C2B89177F0  : public BaseItemSerializer_1_t259B1F7172D40593E987E00D3CAE05E36076FE14
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_t2A673367601D3F3F3253BFF2285B77C2B89177F0, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Resolution>
struct _UntypedToTypedSerializerAdapter_1_t8BCA1089B80C69AC6A81BCA6235F47F5F18BBAAF  : public BaseItemSerializer_1_t25950CBD2D435A56C7706C95DF7C90AED81EDA27
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_t8BCA1089B80C69AC6A81BCA6235F47F5F18BBAAF, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.SByte>
struct _UntypedToTypedSerializerAdapter_1_t295A3C32ADF22B30795C6C3E079E805F1B8C78D0  : public BaseItemSerializer_1_t5D31C9022FE55E465433293FF7A15960E2383F44
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_t295A3C32ADF22B30795C6C3E079E805F1B8C78D0, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Single>
struct _UntypedToTypedSerializerAdapter_1_t8EA0C276E7368DDC6F39A263C6AD73A14BA7B1D2  : public BaseItemSerializer_1_tBE2E41D5B73D31F45F68BE01F8B14A8741360498
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_t8EA0C276E7368DDC6F39A263C6AD73A14BA7B1D2, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt16>
struct _UntypedToTypedSerializerAdapter_1_t4C1C9369653009559A0B1E338AB4E0DA6F45CFC0  : public BaseItemSerializer_1_tBE5F2F8D26B5BD07111849CBAAE56F80A1B2EDF6
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_t4C1C9369653009559A0B1E338AB4E0DA6F45CFC0, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt32>
struct _UntypedToTypedSerializerAdapter_1_tD7DB551655CE22E92F277512A343628E87BAFB19  : public BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_tD7DB551655CE22E92F277512A343628E87BAFB19, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt64>
struct _UntypedToTypedSerializerAdapter_1_t282610B9A6AF4F105F366140071114ED305B0854  : public BaseItemSerializer_1_t872E3A292C0D48C2ABE12EC886C3AFBDDF077463
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_t282610B9A6AF4F105F366140071114ED305B0854, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector2>
struct _UntypedToTypedSerializerAdapter_1_t17167D6794DF0164C8BF891A27AF49D5CBF414F0  : public BaseItemSerializer_1_t3876C9EE4FD05BBCF445498460670F429C5B7B26
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_t17167D6794DF0164C8BF891A27AF49D5CBF414F0, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector3>
struct _UntypedToTypedSerializerAdapter_1_t7C022E20832A3506C44B7FB257D7E25433752360  : public BaseItemSerializer_1_tE74345F47D9357E29966B2A32C87452A84C34449
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_t7C022E20832A3506C44B7FB257D7E25433752360, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector4>
struct _UntypedToTypedSerializerAdapter_1_t1EF5B49397051B5C8359B970B548EF24F2FEDBA0  : public BaseItemSerializer_1_tA2638A1CB0CD1FC466D6D66B209D2BDD09D2123D
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_t1EF5B49397051B5C8359B970B548EF24F2FEDBA0, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData>
struct _UntypedToTypedSerializerAdapter_1_tE110E7B7524D1A3107C32AB080C89C0E2404330E  : public BaseItemSerializer_1_t8263500965A6A9165036809F43FF16B708B494BD
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_tE110E7B7524D1A3107C32AB080C89C0E2404330E, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData>
struct _UntypedToTypedSerializerAdapter_1_tACABDF5D8489EB817A4E54F2799856FA1C3E78FC  : public BaseItemSerializer_1_t10751672E010A3255A897F5EE859FFDC8B9DB643
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_tACABDF5D8489EB817A4E54F2799856FA1C3E78FC, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage>
struct _UntypedToTypedSerializerAdapter_1_tA1EEB9D2298471814FC8130462B0B0CD429EA37A  : public BaseItemSerializer_1_t2CC1EE42BB59FC91F0290F706BC1C0B136DE6169
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_tA1EEB9D2298471814FC8130462B0B0CD429EA37A, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform>
struct _UntypedToTypedSerializerAdapter_1_t5EB04269E4140B64C14434ADE88955698D639A78  : public BaseItemSerializer_1_t5487BE579A8D8D71FAA95C9A6BF7F75CF9435337
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1::_untypedSerializer
	RuntimeObject* ____untypedSerializer_1;

public:
	inline static int32_t get_offset_of__untypedSerializer_1() { return static_cast<int32_t>(offsetof(_UntypedToTypedSerializerAdapter_1_t5EB04269E4140B64C14434ADE88955698D639A78, ____untypedSerializer_1)); }
	inline RuntimeObject* get__untypedSerializer_1() const { return ____untypedSerializer_1; }
	inline RuntimeObject** get_address_of__untypedSerializer_1() { return &____untypedSerializer_1; }
	inline void set__untypedSerializer_1(RuntimeObject* value)
	{
		____untypedSerializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untypedSerializer_1), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer
struct BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B  : public BinarySerializerOrDeserializer_t044DC8448D100DCE9608E198CEDE3C5006263D4C
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.Contexts._TypeDeserializationContext Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer::_context
	_TypeDeserializationContext_t39C1ED8527DB516CD89EF229638F2E6CBDBE6444 * ____context_5;

public:
	inline static int32_t get_offset_of__context_5() { return static_cast<int32_t>(offsetof(BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B, ____context_5)); }
	inline _TypeDeserializationContext_t39C1ED8527DB516CD89EF229638F2E6CBDBE6444 * get__context_5() const { return ____context_5; }
	inline _TypeDeserializationContext_t39C1ED8527DB516CD89EF229638F2E6CBDBE6444 ** get_address_of__context_5() { return &____context_5; }
	inline void set__context_5(_TypeDeserializationContext_t39C1ED8527DB516CD89EF229638F2E6CBDBE6444 * value)
	{
		____context_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____context_5), (void*)value);
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer
struct BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA  : public BinarySerializerOrDeserializer_t044DC8448D100DCE9608E198CEDE3C5006263D4C
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.Contexts._TypeSerializationContext Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer::_context
	_TypeSerializationContext_t060F650B96A30F0B6B6A85C56A55D548D7784D6E * ____context_5;

public:
	inline static int32_t get_offset_of__context_5() { return static_cast<int32_t>(offsetof(BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA, ____context_5)); }
	inline _TypeSerializationContext_t060F650B96A30F0B6B6A85C56A55D548D7784D6E * get__context_5() const { return ____context_5; }
	inline _TypeSerializationContext_t060F650B96A30F0B6B6A85C56A55D548D7784D6E ** get_address_of__context_5() { return &____context_5; }
	inline void set__context_5(_TypeSerializationContext_t060F650B96A30F0B6B6A85C56A55D548D7784D6E * value)
	{
		____context_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____context_5), (void*)value);
	}
};


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


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BooleanSerializer
struct BooleanSerializer_t334DA9746952A84A265834E52C290E7E4376A238  : public BaseItemSerializer_1_t08F5BA999B41FC91E9459C9DDE808D68F21D7B48
{
public:

public:
};

struct BooleanSerializer_t334DA9746952A84A265834E52C290E7E4376A238_StaticFields
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BooleanSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BooleanSerializer::Instance
	BooleanSerializer_t334DA9746952A84A265834E52C290E7E4376A238 * ___Instance_1;

public:
	inline static int32_t get_offset_of_Instance_1() { return static_cast<int32_t>(offsetof(BooleanSerializer_t334DA9746952A84A265834E52C290E7E4376A238_StaticFields, ___Instance_1)); }
	inline BooleanSerializer_t334DA9746952A84A265834E52C290E7E4376A238 * get_Instance_1() const { return ___Instance_1; }
	inline BooleanSerializer_t334DA9746952A84A265834E52C290E7E4376A238 ** get_address_of_Instance_1() { return &___Instance_1; }
	inline void set_Instance_1(BooleanSerializer_t334DA9746952A84A265834E52C290E7E4376A238 * value)
	{
		___Instance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_1), (void*)value);
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


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.CameraIntrinsicsSerializer
struct CameraIntrinsicsSerializer_tDD3051847FC06942FB682D1952440E4BB77F0BBD  : public BaseItemSerializer_1_t4437CB081DD98887077F39A721F361BBEA872847
{
public:

public:
};

struct CameraIntrinsicsSerializer_tDD3051847FC06942FB682D1952440E4BB77F0BBD_StaticFields
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.CameraIntrinsicsSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.CameraIntrinsicsSerializer::Instance
	CameraIntrinsicsSerializer_tDD3051847FC06942FB682D1952440E4BB77F0BBD * ___Instance_1;

public:
	inline static int32_t get_offset_of_Instance_1() { return static_cast<int32_t>(offsetof(CameraIntrinsicsSerializer_tDD3051847FC06942FB682D1952440E4BB77F0BBD_StaticFields, ___Instance_1)); }
	inline CameraIntrinsicsSerializer_tDD3051847FC06942FB682D1952440E4BB77F0BBD * get_Instance_1() const { return ___Instance_1; }
	inline CameraIntrinsicsSerializer_tDD3051847FC06942FB682D1952440E4BB77F0BBD ** get_address_of_Instance_1() { return &___Instance_1; }
	inline void set_Instance_1(CameraIntrinsicsSerializer_tDD3051847FC06942FB682D1952440E4BB77F0BBD * value)
	{
		___Instance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_1), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.CompressedUInt32Serializer
struct CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174  : public BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D
{
public:

public:
};

struct CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174_StaticFields
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.CompressedUInt32Serializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.CompressedUInt32Serializer::Instance
	CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174 * ___Instance_1;

public:
	inline static int32_t get_offset_of_Instance_1() { return static_cast<int32_t>(offsetof(CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174_StaticFields, ___Instance_1)); }
	inline CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174 * get_Instance_1() const { return ___Instance_1; }
	inline CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174 ** get_address_of_Instance_1() { return &___Instance_1; }
	inline void set_Instance_1(CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174 * value)
	{
		___Instance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_1), (void*)value);
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
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


// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.Matrix4x4Serializer
struct Matrix4x4Serializer_t04609B7C66BAAA9BE14D3F444764BAB71386F24A  : public BaseItemSerializer_1_t33D3C64D9D4A48058D6E7EA3E851ACA5EEFC0A66
{
public:

public:
};

struct Matrix4x4Serializer_t04609B7C66BAAA9BE14D3F444764BAB71386F24A_StaticFields
{
public:
	// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.Matrix4x4Serializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.Matrix4x4Serializer::Instance
	Matrix4x4Serializer_t04609B7C66BAAA9BE14D3F444764BAB71386F24A * ___Instance_1;

public:
	inline static int32_t get_offset_of_Instance_1() { return static_cast<int32_t>(offsetof(Matrix4x4Serializer_t04609B7C66BAAA9BE14D3F444764BAB71386F24A_StaticFields, ___Instance_1)); }
	inline Matrix4x4Serializer_t04609B7C66BAAA9BE14D3F444764BAB71386F24A * get_Instance_1() const { return ___Instance_1; }
	inline Matrix4x4Serializer_t04609B7C66BAAA9BE14D3F444764BAB71386F24A ** get_address_of_Instance_1() { return &___Instance_1; }
	inline void set_Instance_1(Matrix4x4Serializer_t04609B7C66BAAA9BE14D3F444764BAB71386F24A * value)
	{
		___Instance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_1), (void*)value);
	}
};


// Niantic.ARDK.Networking.HLAPI.Routing.NetworkId
struct NetworkId_tE14700FB48791B12889DB4A00A00AF8E9135FA61 
{
public:
	// System.UInt64 Niantic.ARDK.Networking.HLAPI.Routing.NetworkId::_id
	uint64_t ____id_0;

public:
	inline static int32_t get_offset_of__id_0() { return static_cast<int32_t>(offsetof(NetworkId_tE14700FB48791B12889DB4A00A00AF8E9135FA61, ____id_0)); }
	inline uint64_t get__id_0() const { return ____id_0; }
	inline uint64_t* get_address_of__id_0() { return &____id_0; }
	inline void set__id_0(uint64_t value)
	{
		____id_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Resolution
struct Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 
{
public:
	// System.Int32 UnityEngine.Resolution::m_Width
	int32_t ___m_Width_0;
	// System.Int32 UnityEngine.Resolution::m_Height
	int32_t ___m_Height_1;
	// System.Int32 UnityEngine.Resolution::m_RefreshRate
	int32_t ___m_RefreshRate_2;

public:
	inline static int32_t get_offset_of_m_Width_0() { return static_cast<int32_t>(offsetof(Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767, ___m_Width_0)); }
	inline int32_t get_m_Width_0() const { return ___m_Width_0; }
	inline int32_t* get_address_of_m_Width_0() { return &___m_Width_0; }
	inline void set_m_Width_0(int32_t value)
	{
		___m_Width_0 = value;
	}

	inline static int32_t get_offset_of_m_Height_1() { return static_cast<int32_t>(offsetof(Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767, ___m_Height_1)); }
	inline int32_t get_m_Height_1() const { return ___m_Height_1; }
	inline int32_t* get_address_of_m_Height_1() { return &___m_Height_1; }
	inline void set_m_Height_1(int32_t value)
	{
		___m_Height_1 = value;
	}

	inline static int32_t get_offset_of_m_RefreshRate_2() { return static_cast<int32_t>(offsetof(Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767, ___m_RefreshRate_2)); }
	inline int32_t get_m_RefreshRate_2() const { return ___m_RefreshRate_2; }
	inline int32_t* get_address_of_m_RefreshRate_2() { return &___m_RefreshRate_2; }
	inline void set_m_RefreshRate_2(int32_t value)
	{
		___m_RefreshRate_2 = value;
	}
};


// System.SByte
struct SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
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


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData
struct _NetworkGroupData_tFD440FE32343F1FEC0FF7780582D1CFA8CCFD264 
{
public:
	// System.String Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData::_key
	String_t* ____key_0;
	// System.Object Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData::_data
	RuntimeObject * ____data_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(_NetworkGroupData_tFD440FE32343F1FEC0FF7780582D1CFA8CCFD264, ____key_0)); }
	inline String_t* get__key_0() const { return ____key_0; }
	inline String_t** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(String_t* value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____key_0), (void*)value);
	}

	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(_NetworkGroupData_tFD440FE32343F1FEC0FF7780582D1CFA8CCFD264, ____data_1)); }
	inline RuntimeObject * get__data_1() const { return ____data_1; }
	inline RuntimeObject ** get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(RuntimeObject * value)
	{
		____data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData
struct _NetworkGroupData_tFD440FE32343F1FEC0FF7780582D1CFA8CCFD264_marshaled_pinvoke
{
	char* ____key_0;
	Il2CppIUnknown* ____data_1;
};
// Native definition for COM marshalling of Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData
struct _NetworkGroupData_tFD440FE32343F1FEC0FF7780582D1CFA8CCFD264_marshaled_com
{
	Il2CppChar* ____key_0;
	Il2CppIUnknown* ____data_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>
struct KeyValuePair_2_t74D5C76BCA7D14D18A99E0FA9EC3584DBFB65F7F 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t74D5C76BCA7D14D18A99E0FA9EC3584DBFB65F7F, ___key_0)); }
	inline Guid_t  get_key_0() const { return ___key_0; }
	inline Guid_t * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Guid_t  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t74D5C76BCA7D14D18A99E0FA9EC3584DBFB65F7F, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Guid,System.WeakReference>
struct KeyValuePair_2_t2DD2ADB8375EB792B15593D6EC22586CBA0E52D6 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2DD2ADB8375EB792B15593D6EC22586CBA0E52D6, ___key_0)); }
	inline Guid_t  get_key_0() const { return ___key_0; }
	inline Guid_t * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Guid_t  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2DD2ADB8375EB792B15593D6EC22586CBA0E52D6, ___value_1)); }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * get_value_1() const { return ___value_1; }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>
struct KeyValuePair_2_t9929596D6B05353257A804D74C9405F53868F45F 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	intptr_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t9929596D6B05353257A804D74C9405F53868F45F, ___key_0)); }
	inline intptr_t get_key_0() const { return ___key_0; }
	inline intptr_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(intptr_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t9929596D6B05353257A804D74C9405F53868F45F, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.WeakReference>
struct KeyValuePair_2_tEADE5527AB5FCAE71705D641CCEC5B598079D344 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	intptr_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tEADE5527AB5FCAE71705D641CCEC5B598079D344, ___key_0)); }
	inline intptr_t get_key_0() const { return ___key_0; }
	inline intptr_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(intptr_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tEADE5527AB5FCAE71705D641CCEC5B598079D344, ___value_1)); }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * get_value_1() const { return ___value_1; }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Matrix4x4>
struct KeyValuePair_2_t16948AAAFBD1CC65CF6D5A707B831DF5685752CE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t16948AAAFBD1CC65CF6D5A707B831DF5685752CE, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t16948AAAFBD1CC65CF6D5A707B831DF5685752CE, ___value_1)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_value_1() const { return ___value_1; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___value_1 = value;
	}
};


// System.Nullable`1<UnityEngine.Matrix4x4>
struct Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E 
{
public:
	// T System.Nullable`1::value
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E, ___value_0)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_value_0() const { return ___value_0; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// Niantic.ARDK.AR.Camera.CameraIntrinsics
struct CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A 
{
public:
	// UnityEngine.Vector2 Niantic.ARDK.AR.Camera.CameraIntrinsics::<FocalLength>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CFocalLengthU3Ek__BackingField_0;
	// UnityEngine.Vector2 Niantic.ARDK.AR.Camera.CameraIntrinsics::<PrincipalPoint>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CPrincipalPointU3Ek__BackingField_1;
	// UnityEngine.Vector4 Niantic.ARDK.AR.Camera.CameraIntrinsics::_vector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ____vector_2;

public:
	inline static int32_t get_offset_of_U3CFocalLengthU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A, ___U3CFocalLengthU3Ek__BackingField_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CFocalLengthU3Ek__BackingField_0() const { return ___U3CFocalLengthU3Ek__BackingField_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CFocalLengthU3Ek__BackingField_0() { return &___U3CFocalLengthU3Ek__BackingField_0; }
	inline void set_U3CFocalLengthU3Ek__BackingField_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CFocalLengthU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CPrincipalPointU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A, ___U3CPrincipalPointU3Ek__BackingField_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CPrincipalPointU3Ek__BackingField_1() const { return ___U3CPrincipalPointU3Ek__BackingField_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CPrincipalPointU3Ek__BackingField_1() { return &___U3CPrincipalPointU3Ek__BackingField_1; }
	inline void set_U3CPrincipalPointU3Ek__BackingField_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CPrincipalPointU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of__vector_2() { return static_cast<int32_t>(offsetof(CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A, ____vector_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get__vector_2() const { return ____vector_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of__vector_2() { return &____vector_2; }
	inline void set__vector_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		____vector_2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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

// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Niantic.ARDK.VPSCoverage.ResponseStatus
struct ResponseStatus_t4D8A372948511F1339B53318D7EDA17542D2590B 
{
public:
	// System.Int32 Niantic.ARDK.VPSCoverage.ResponseStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResponseStatus_t4D8A372948511F1339B53318D7EDA17542D2590B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// Niantic.ARDK.Networking.HLAPI.Object.Unity.TransformPiece
struct TransformPiece_tF45420FD4B1DB5367D2D3F61963950A694EA1C1A 
{
public:
	// System.Int32 Niantic.ARDK.Networking.HLAPI.Object.Unity.TransformPiece::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TransformPiece_tF45420FD4B1DB5367D2D3F61963950A694EA1C1A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.WeakReference
struct WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76, ___gcHandle_1)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___gcHandle_1 = value;
	}
};


// Niantic.ARDK.AR._CppAddressAndScale
struct _CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731 
{
public:
	// System.IntPtr Niantic.ARDK.AR._CppAddressAndScale::_cppAddress
	intptr_t ____cppAddress_0;
	// System.Single Niantic.ARDK.AR._CppAddressAndScale::_scale
	float ____scale_1;

public:
	inline static int32_t get_offset_of__cppAddress_0() { return static_cast<int32_t>(offsetof(_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731, ____cppAddress_0)); }
	inline intptr_t get__cppAddress_0() const { return ____cppAddress_0; }
	inline intptr_t* get_address_of__cppAddress_0() { return &____cppAddress_0; }
	inline void set__cppAddress_0(intptr_t value)
	{
		____cppAddress_0 = value;
	}

	inline static int32_t get_offset_of__scale_1() { return static_cast<int32_t>(offsetof(_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731, ____scale_1)); }
	inline float get__scale_1() const { return ____scale_1; }
	inline float* get_address_of__scale_1() { return &____scale_1; }
	inline void set__scale_1(float value)
	{
		____scale_1 = value;
	}
};


// Niantic.ARDK.Networking.ARSim.ArmMessageStream/MessageSource
struct MessageSource_t8F650922A6C83EB340CA7691767A1B0A7CD3B539 
{
public:
	// System.UInt16 Niantic.ARDK.Networking.ARSim.ArmMessageStream/MessageSource::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MessageSource_t8F650922A6C83EB340CA7691767A1B0A7CD3B539, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData
struct _NetworkIdAndData_tCA053EC05E7A3E1155C4A0C0A257EA3F036D5E27 
{
public:
	// Niantic.ARDK.Networking.HLAPI.Routing.NetworkId Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData::_networkId
	NetworkId_tE14700FB48791B12889DB4A00A00AF8E9135FA61  ____networkId_0;
	// System.Object Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData::_data
	RuntimeObject * ____data_1;

public:
	inline static int32_t get_offset_of__networkId_0() { return static_cast<int32_t>(offsetof(_NetworkIdAndData_tCA053EC05E7A3E1155C4A0C0A257EA3F036D5E27, ____networkId_0)); }
	inline NetworkId_tE14700FB48791B12889DB4A00A00AF8E9135FA61  get__networkId_0() const { return ____networkId_0; }
	inline NetworkId_tE14700FB48791B12889DB4A00A00AF8E9135FA61 * get_address_of__networkId_0() { return &____networkId_0; }
	inline void set__networkId_0(NetworkId_tE14700FB48791B12889DB4A00A00AF8E9135FA61  value)
	{
		____networkId_0 = value;
	}

	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(_NetworkIdAndData_tCA053EC05E7A3E1155C4A0C0A257EA3F036D5E27, ____data_1)); }
	inline RuntimeObject * get__data_1() const { return ____data_1; }
	inline RuntimeObject ** get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(RuntimeObject * value)
	{
		____data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData
struct _NetworkIdAndData_tCA053EC05E7A3E1155C4A0C0A257EA3F036D5E27_marshaled_pinvoke
{
	NetworkId_tE14700FB48791B12889DB4A00A00AF8E9135FA61  ____networkId_0;
	Il2CppIUnknown* ____data_1;
};
// Native definition for COM marshalling of Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData
struct _NetworkIdAndData_tCA053EC05E7A3E1155C4A0C0A257EA3F036D5E27_marshaled_com
{
	NetworkId_tE14700FB48791B12889DB4A00A00AF8E9135FA61  ____networkId_0;
	Il2CppIUnknown* ____data_1;
};

// Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage
struct SpawnMessage_tAD71A12CFC6A3B559B88F18C10D3CD8CCFE2D094 
{
public:
	// Niantic.ARDK.Networking.HLAPI.Routing.NetworkId Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage::<PrefabId>k__BackingField
	NetworkId_tE14700FB48791B12889DB4A00A00AF8E9135FA61  ___U3CPrefabIdU3Ek__BackingField_0;
	// Niantic.ARDK.Networking.HLAPI.Routing.NetworkId Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage::<NewId>k__BackingField
	NetworkId_tE14700FB48791B12889DB4A00A00AF8E9135FA61  ___U3CNewIdU3Ek__BackingField_1;
	// UnityEngine.Vector3 Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage::<Location>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CLocationU3Ek__BackingField_2;
	// UnityEngine.Quaternion Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage::<Rotation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CRotationU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CPrefabIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SpawnMessage_tAD71A12CFC6A3B559B88F18C10D3CD8CCFE2D094, ___U3CPrefabIdU3Ek__BackingField_0)); }
	inline NetworkId_tE14700FB48791B12889DB4A00A00AF8E9135FA61  get_U3CPrefabIdU3Ek__BackingField_0() const { return ___U3CPrefabIdU3Ek__BackingField_0; }
	inline NetworkId_tE14700FB48791B12889DB4A00A00AF8E9135FA61 * get_address_of_U3CPrefabIdU3Ek__BackingField_0() { return &___U3CPrefabIdU3Ek__BackingField_0; }
	inline void set_U3CPrefabIdU3Ek__BackingField_0(NetworkId_tE14700FB48791B12889DB4A00A00AF8E9135FA61  value)
	{
		___U3CPrefabIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CNewIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SpawnMessage_tAD71A12CFC6A3B559B88F18C10D3CD8CCFE2D094, ___U3CNewIdU3Ek__BackingField_1)); }
	inline NetworkId_tE14700FB48791B12889DB4A00A00AF8E9135FA61  get_U3CNewIdU3Ek__BackingField_1() const { return ___U3CNewIdU3Ek__BackingField_1; }
	inline NetworkId_tE14700FB48791B12889DB4A00A00AF8E9135FA61 * get_address_of_U3CNewIdU3Ek__BackingField_1() { return &___U3CNewIdU3Ek__BackingField_1; }
	inline void set_U3CNewIdU3Ek__BackingField_1(NetworkId_tE14700FB48791B12889DB4A00A00AF8E9135FA61  value)
	{
		___U3CNewIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CLocationU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SpawnMessage_tAD71A12CFC6A3B559B88F18C10D3CD8CCFE2D094, ___U3CLocationU3Ek__BackingField_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CLocationU3Ek__BackingField_2() const { return ___U3CLocationU3Ek__BackingField_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CLocationU3Ek__BackingField_2() { return &___U3CLocationU3Ek__BackingField_2; }
	inline void set_U3CLocationU3Ek__BackingField_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CLocationU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CRotationU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SpawnMessage_tAD71A12CFC6A3B559B88F18C10D3CD8CCFE2D094, ___U3CRotationU3Ek__BackingField_3)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CRotationU3Ek__BackingField_3() const { return ___U3CRotationU3Ek__BackingField_3; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CRotationU3Ek__BackingField_3() { return &___U3CRotationU3Ek__BackingField_3; }
	inline void set_U3CRotationU3Ek__BackingField_3(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CRotationU3Ek__BackingField_3 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>
struct KeyValuePair_2_tD48B4CC7D124965F124FA06C6FE9827A1F6BE297 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD48B4CC7D124965F124FA06C6FE9827A1F6BE297, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD48B4CC7D124965F124FA06C6FE9827A1F6BE297, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>
struct KeyValuePair_2_t91051A57A082B61DB720888E2DC65EB60EE7882A 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t91051A57A082B61DB720888E2DC65EB60EE7882A, ___key_0)); }
	inline _CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731  get_key_0() const { return ___key_0; }
	inline _CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t91051A57A082B61DB720888E2DC65EB60EE7882A, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>
struct KeyValuePair_2_t7A56726DC229B6A4B142DF678829232995D82105 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t7A56726DC229B6A4B142DF678829232995D82105, ___key_0)); }
	inline _CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731  get_key_0() const { return ___key_0; }
	inline _CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t7A56726DC229B6A4B142DF678829232995D82105, ___value_1)); }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * get_value_1() const { return ___value_1; }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// Unity.Collections.NativeArray`1<System.Int16>
struct NativeArray_1_tBE0DA2AC61A9759A24D02AF71F14B6A057146CB5 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tBE0DA2AC61A9759A24D02AF71F14B6A057146CB5, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tBE0DA2AC61A9759A24D02AF71F14B6A057146CB5, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tBE0DA2AC61A9759A24D02AF71F14B6A057146CB5, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Single>
struct NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.UInt32>
struct NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// System.Nullable`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>
struct Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B 
{
public:
	// T System.Nullable`1::value
	CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B, ___value_0)); }
	inline CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  get_value_0() const { return ___value_0; }
	inline CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Niantic.ARDK.Utilities._HttpResponse`1<System.Object>
struct _HttpResponse_1_t56F181460B2EEF1EC7060DC5AC7A5C5A2C3201C7  : public RuntimeObject
{
public:
	// Niantic.ARDK.VPSCoverage.ResponseStatus Niantic.ARDK.Utilities._HttpResponse`1::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_0;
	// TResponse Niantic.ARDK.Utilities._HttpResponse`1::<Data>k__BackingField
	RuntimeObject * ___U3CDataU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CStatusU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(_HttpResponse_1_t56F181460B2EEF1EC7060DC5AC7A5C5A2C3201C7, ___U3CStatusU3Ek__BackingField_0)); }
	inline int32_t get_U3CStatusU3Ek__BackingField_0() const { return ___U3CStatusU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CStatusU3Ek__BackingField_0() { return &___U3CStatusU3Ek__BackingField_0; }
	inline void set_U3CStatusU3Ek__BackingField_0(int32_t value)
	{
		___U3CStatusU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(_HttpResponse_1_t56F181460B2EEF1EC7060DC5AC7A5C5A2C3201C7, ___U3CDataU3Ek__BackingField_1)); }
	inline RuntimeObject * get_U3CDataU3Ek__BackingField_1() const { return ___U3CDataU3Ek__BackingField_1; }
	inline RuntimeObject ** get_address_of_U3CDataU3Ek__BackingField_1() { return &___U3CDataU3Ek__BackingField_1; }
	inline void set_U3CDataU3Ek__BackingField_1(RuntimeObject * value)
	{
		___U3CDataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDataU3Ek__BackingField_1), (void*)value);
	}
};


// Niantic.ARDK.Networking.ARSim.ArmMessageStream/_MessageExecutor`1<System.Object>
struct _MessageExecutor_1_t9EDA4C5374B9ABFC202AEF573FEF695482ED1E66  : public RuntimeObject
{
public:
	// System.Action`1<T> Niantic.ARDK.Networking.ARSim.ArmMessageStream/_MessageExecutor`1::_action
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____action_0;
	// Niantic.ARDK.Networking.ARSim.ArmMessageStream/MessageSource Niantic.ARDK.Networking.ARSim.ArmMessageStream/_MessageExecutor`1::<Source>k__BackingField
	uint16_t ___U3CSourceU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of__action_0() { return static_cast<int32_t>(offsetof(_MessageExecutor_1_t9EDA4C5374B9ABFC202AEF573FEF695482ED1E66, ____action_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__action_0() const { return ____action_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__action_0() { return &____action_0; }
	inline void set__action_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____action_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____action_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(_MessageExecutor_1_t9EDA4C5374B9ABFC202AEF573FEF695482ED1E66, ___U3CSourceU3Ek__BackingField_1)); }
	inline uint16_t get_U3CSourceU3Ek__BackingField_1() const { return ___U3CSourceU3Ek__BackingField_1; }
	inline uint16_t* get_address_of_U3CSourceU3Ek__BackingField_1() { return &___U3CSourceU3Ek__BackingField_1; }
	inline void set_U3CSourceU3Ek__BackingField_1(uint16_t value)
	{
		___U3CSourceU3Ek__BackingField_1 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
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


// Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform
struct PackedTransform_t3F7E9D55B33D3C2540892C4436BEEFDB43472353 
{
public:
	// Niantic.ARDK.Networking.HLAPI.Object.Unity.TransformPiece Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform::_dirtyPieces
	int32_t ____dirtyPieces_0;
	// UnityEngine.Vector3 Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform::_position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____position_1;
	// UnityEngine.Quaternion Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform::_rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ____rotation_2;
	// UnityEngine.Vector3 Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform::_localScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____localScale_3;

public:
	inline static int32_t get_offset_of__dirtyPieces_0() { return static_cast<int32_t>(offsetof(PackedTransform_t3F7E9D55B33D3C2540892C4436BEEFDB43472353, ____dirtyPieces_0)); }
	inline int32_t get__dirtyPieces_0() const { return ____dirtyPieces_0; }
	inline int32_t* get_address_of__dirtyPieces_0() { return &____dirtyPieces_0; }
	inline void set__dirtyPieces_0(int32_t value)
	{
		____dirtyPieces_0 = value;
	}

	inline static int32_t get_offset_of__position_1() { return static_cast<int32_t>(offsetof(PackedTransform_t3F7E9D55B33D3C2540892C4436BEEFDB43472353, ____position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__position_1() const { return ____position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__position_1() { return &____position_1; }
	inline void set__position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____position_1 = value;
	}

	inline static int32_t get_offset_of__rotation_2() { return static_cast<int32_t>(offsetof(PackedTransform_t3F7E9D55B33D3C2540892C4436BEEFDB43472353, ____rotation_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get__rotation_2() const { return ____rotation_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of__rotation_2() { return &____rotation_2; }
	inline void set__rotation_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		____rotation_2 = value;
	}

	inline static int32_t get_offset_of__localScale_3() { return static_cast<int32_t>(offsetof(PackedTransform_t3F7E9D55B33D3C2540892C4436BEEFDB43472353, ____localScale_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__localScale_3() const { return ____localScale_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__localScale_3() { return &____localScale_3; }
	inline void set__localScale_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____localScale_3 = value;
	}
};


// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Guid,System.Object>
struct Func_2_t6A121736FE14BF0AFCB3D3410B5EDD713E93F766  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Guid,System.WeakReference>
struct Func_2_t131CF46BB444770C3596452E27104AEA3E5E1315  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.IntPtr,System.Object>
struct Func_2_tBAE19E72D7DA6A7039B9076A73522B08CCF10BAC  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.IntPtr,System.WeakReference>
struct Func_2_t8A32AFA946F2C87D6E65587D692EE290673AD33F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.WeakReference>
struct Func_2_tF05B6390930504E1770237C3D8CD743603F0426F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>
struct Func_2_tA79C68D320B4C4833D5F5D391CD053D095BBA2E9  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>
struct Func_2_t5C635761AE2CC537D55A62F7CF9A2C11E60B7835  : public MulticastDelegate_t
{
public:

public:
};


// Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>
struct _NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344  : public _AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF
{
public:
	// System.Single Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_worldScale
	float ____worldScale_3;
	// System.IntPtr Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_nativeHandle
	intptr_t ____nativeHandle_4;
	// System.Int64 Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_consumedUnmanagedMemory
	int64_t ____consumedUnmanagedMemory_5;
	// System.Nullable`1<UnityEngine.Matrix4x4> Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_cacheViewMatrix
	Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  ____cacheViewMatrix_6;
	// System.Nullable`1<Niantic.ARDK.AR.Camera.CameraIntrinsics> Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_cachedIntrinsics
	Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B  ____cachedIntrinsics_7;
	// Unity.Collections.NativeArray`1<T> Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_data
	NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  ____data_8;

public:
	inline static int32_t get_offset_of__worldScale_3() { return static_cast<int32_t>(offsetof(_NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344, ____worldScale_3)); }
	inline float get__worldScale_3() const { return ____worldScale_3; }
	inline float* get_address_of__worldScale_3() { return &____worldScale_3; }
	inline void set__worldScale_3(float value)
	{
		____worldScale_3 = value;
	}

	inline static int32_t get_offset_of__nativeHandle_4() { return static_cast<int32_t>(offsetof(_NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344, ____nativeHandle_4)); }
	inline intptr_t get__nativeHandle_4() const { return ____nativeHandle_4; }
	inline intptr_t* get_address_of__nativeHandle_4() { return &____nativeHandle_4; }
	inline void set__nativeHandle_4(intptr_t value)
	{
		____nativeHandle_4 = value;
	}

	inline static int32_t get_offset_of__consumedUnmanagedMemory_5() { return static_cast<int32_t>(offsetof(_NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344, ____consumedUnmanagedMemory_5)); }
	inline int64_t get__consumedUnmanagedMemory_5() const { return ____consumedUnmanagedMemory_5; }
	inline int64_t* get_address_of__consumedUnmanagedMemory_5() { return &____consumedUnmanagedMemory_5; }
	inline void set__consumedUnmanagedMemory_5(int64_t value)
	{
		____consumedUnmanagedMemory_5 = value;
	}

	inline static int32_t get_offset_of__cacheViewMatrix_6() { return static_cast<int32_t>(offsetof(_NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344, ____cacheViewMatrix_6)); }
	inline Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  get__cacheViewMatrix_6() const { return ____cacheViewMatrix_6; }
	inline Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E * get_address_of__cacheViewMatrix_6() { return &____cacheViewMatrix_6; }
	inline void set__cacheViewMatrix_6(Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  value)
	{
		____cacheViewMatrix_6 = value;
	}

	inline static int32_t get_offset_of__cachedIntrinsics_7() { return static_cast<int32_t>(offsetof(_NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344, ____cachedIntrinsics_7)); }
	inline Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B  get__cachedIntrinsics_7() const { return ____cachedIntrinsics_7; }
	inline Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B * get_address_of__cachedIntrinsics_7() { return &____cachedIntrinsics_7; }
	inline void set__cachedIntrinsics_7(Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B  value)
	{
		____cachedIntrinsics_7 = value;
	}

	inline static int32_t get_offset_of__data_8() { return static_cast<int32_t>(offsetof(_NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344, ____data_8)); }
	inline NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  get__data_8() const { return ____data_8; }
	inline NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 * get_address_of__data_8() { return &____data_8; }
	inline void set__data_8(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  value)
	{
		____data_8 = value;
	}
};


// Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>
struct _NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7  : public _AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF
{
public:
	// System.Single Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_worldScale
	float ____worldScale_3;
	// System.IntPtr Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_nativeHandle
	intptr_t ____nativeHandle_4;
	// System.Int64 Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_consumedUnmanagedMemory
	int64_t ____consumedUnmanagedMemory_5;
	// System.Nullable`1<UnityEngine.Matrix4x4> Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_cacheViewMatrix
	Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  ____cacheViewMatrix_6;
	// System.Nullable`1<Niantic.ARDK.AR.Camera.CameraIntrinsics> Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_cachedIntrinsics
	Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B  ____cachedIntrinsics_7;
	// Unity.Collections.NativeArray`1<T> Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1::_data
	NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  ____data_8;

public:
	inline static int32_t get_offset_of__worldScale_3() { return static_cast<int32_t>(offsetof(_NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7, ____worldScale_3)); }
	inline float get__worldScale_3() const { return ____worldScale_3; }
	inline float* get_address_of__worldScale_3() { return &____worldScale_3; }
	inline void set__worldScale_3(float value)
	{
		____worldScale_3 = value;
	}

	inline static int32_t get_offset_of__nativeHandle_4() { return static_cast<int32_t>(offsetof(_NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7, ____nativeHandle_4)); }
	inline intptr_t get__nativeHandle_4() const { return ____nativeHandle_4; }
	inline intptr_t* get_address_of__nativeHandle_4() { return &____nativeHandle_4; }
	inline void set__nativeHandle_4(intptr_t value)
	{
		____nativeHandle_4 = value;
	}

	inline static int32_t get_offset_of__consumedUnmanagedMemory_5() { return static_cast<int32_t>(offsetof(_NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7, ____consumedUnmanagedMemory_5)); }
	inline int64_t get__consumedUnmanagedMemory_5() const { return ____consumedUnmanagedMemory_5; }
	inline int64_t* get_address_of__consumedUnmanagedMemory_5() { return &____consumedUnmanagedMemory_5; }
	inline void set__consumedUnmanagedMemory_5(int64_t value)
	{
		____consumedUnmanagedMemory_5 = value;
	}

	inline static int32_t get_offset_of__cacheViewMatrix_6() { return static_cast<int32_t>(offsetof(_NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7, ____cacheViewMatrix_6)); }
	inline Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  get__cacheViewMatrix_6() const { return ____cacheViewMatrix_6; }
	inline Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E * get_address_of__cacheViewMatrix_6() { return &____cacheViewMatrix_6; }
	inline void set__cacheViewMatrix_6(Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  value)
	{
		____cacheViewMatrix_6 = value;
	}

	inline static int32_t get_offset_of__cachedIntrinsics_7() { return static_cast<int32_t>(offsetof(_NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7, ____cachedIntrinsics_7)); }
	inline Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B  get__cachedIntrinsics_7() const { return ____cachedIntrinsics_7; }
	inline Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B * get_address_of__cachedIntrinsics_7() { return &____cachedIntrinsics_7; }
	inline void set__cachedIntrinsics_7(Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B  value)
	{
		____cachedIntrinsics_7 = value;
	}

	inline static int32_t get_offset_of__data_8() { return static_cast<int32_t>(offsetof(_NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7, ____data_8)); }
	inline NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  get__data_8() const { return ____data_8; }
	inline NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A * get_address_of__data_8() { return &____data_8; }
	inline void set__data_8(NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  value)
	{
		____data_8 = value;
	}
};


// Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.Single>
struct _SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5  : public _AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF
{
public:
	// UnityEngine.Matrix4x4 Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::_viewMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ____viewMatrix_3;
	// System.Boolean Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::_disposed
	bool ____disposed_4;
	// System.Int64 Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::_consumedUnmanagedMemory
	int64_t ____consumedUnmanagedMemory_5;
	// Niantic.ARDK.AR.Camera.CameraIntrinsics Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::_intrinsics
	CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  ____intrinsics_6;
	// Unity.Collections.NativeArray`1<T> Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::<Data>k__BackingField
	NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  ___U3CDataU3Ek__BackingField_7;
	// System.Boolean Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::<IsRotatedToScreenOrientation>k__BackingField
	bool ___U3CIsRotatedToScreenOrientationU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of__viewMatrix_3() { return static_cast<int32_t>(offsetof(_SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5, ____viewMatrix_3)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get__viewMatrix_3() const { return ____viewMatrix_3; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of__viewMatrix_3() { return &____viewMatrix_3; }
	inline void set__viewMatrix_3(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		____viewMatrix_3 = value;
	}

	inline static int32_t get_offset_of__disposed_4() { return static_cast<int32_t>(offsetof(_SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5, ____disposed_4)); }
	inline bool get__disposed_4() const { return ____disposed_4; }
	inline bool* get_address_of__disposed_4() { return &____disposed_4; }
	inline void set__disposed_4(bool value)
	{
		____disposed_4 = value;
	}

	inline static int32_t get_offset_of__consumedUnmanagedMemory_5() { return static_cast<int32_t>(offsetof(_SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5, ____consumedUnmanagedMemory_5)); }
	inline int64_t get__consumedUnmanagedMemory_5() const { return ____consumedUnmanagedMemory_5; }
	inline int64_t* get_address_of__consumedUnmanagedMemory_5() { return &____consumedUnmanagedMemory_5; }
	inline void set__consumedUnmanagedMemory_5(int64_t value)
	{
		____consumedUnmanagedMemory_5 = value;
	}

	inline static int32_t get_offset_of__intrinsics_6() { return static_cast<int32_t>(offsetof(_SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5, ____intrinsics_6)); }
	inline CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  get__intrinsics_6() const { return ____intrinsics_6; }
	inline CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A * get_address_of__intrinsics_6() { return &____intrinsics_6; }
	inline void set__intrinsics_6(CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  value)
	{
		____intrinsics_6 = value;
	}

	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(_SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5, ___U3CDataU3Ek__BackingField_7)); }
	inline NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  get_U3CDataU3Ek__BackingField_7() const { return ___U3CDataU3Ek__BackingField_7; }
	inline NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 * get_address_of_U3CDataU3Ek__BackingField_7() { return &___U3CDataU3Ek__BackingField_7; }
	inline void set_U3CDataU3Ek__BackingField_7(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  value)
	{
		___U3CDataU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsRotatedToScreenOrientationU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(_SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5, ___U3CIsRotatedToScreenOrientationU3Ek__BackingField_8)); }
	inline bool get_U3CIsRotatedToScreenOrientationU3Ek__BackingField_8() const { return ___U3CIsRotatedToScreenOrientationU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsRotatedToScreenOrientationU3Ek__BackingField_8() { return &___U3CIsRotatedToScreenOrientationU3Ek__BackingField_8; }
	inline void set_U3CIsRotatedToScreenOrientationU3Ek__BackingField_8(bool value)
	{
		___U3CIsRotatedToScreenOrientationU3Ek__BackingField_8 = value;
	}
};


// Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.UInt32>
struct _SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070  : public _AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF
{
public:
	// UnityEngine.Matrix4x4 Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::_viewMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ____viewMatrix_3;
	// System.Boolean Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::_disposed
	bool ____disposed_4;
	// System.Int64 Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::_consumedUnmanagedMemory
	int64_t ____consumedUnmanagedMemory_5;
	// Niantic.ARDK.AR.Camera.CameraIntrinsics Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::_intrinsics
	CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  ____intrinsics_6;
	// Unity.Collections.NativeArray`1<T> Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::<Data>k__BackingField
	NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  ___U3CDataU3Ek__BackingField_7;
	// System.Boolean Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1::<IsRotatedToScreenOrientation>k__BackingField
	bool ___U3CIsRotatedToScreenOrientationU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of__viewMatrix_3() { return static_cast<int32_t>(offsetof(_SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070, ____viewMatrix_3)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get__viewMatrix_3() const { return ____viewMatrix_3; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of__viewMatrix_3() { return &____viewMatrix_3; }
	inline void set__viewMatrix_3(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		____viewMatrix_3 = value;
	}

	inline static int32_t get_offset_of__disposed_4() { return static_cast<int32_t>(offsetof(_SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070, ____disposed_4)); }
	inline bool get__disposed_4() const { return ____disposed_4; }
	inline bool* get_address_of__disposed_4() { return &____disposed_4; }
	inline void set__disposed_4(bool value)
	{
		____disposed_4 = value;
	}

	inline static int32_t get_offset_of__consumedUnmanagedMemory_5() { return static_cast<int32_t>(offsetof(_SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070, ____consumedUnmanagedMemory_5)); }
	inline int64_t get__consumedUnmanagedMemory_5() const { return ____consumedUnmanagedMemory_5; }
	inline int64_t* get_address_of__consumedUnmanagedMemory_5() { return &____consumedUnmanagedMemory_5; }
	inline void set__consumedUnmanagedMemory_5(int64_t value)
	{
		____consumedUnmanagedMemory_5 = value;
	}

	inline static int32_t get_offset_of__intrinsics_6() { return static_cast<int32_t>(offsetof(_SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070, ____intrinsics_6)); }
	inline CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  get__intrinsics_6() const { return ____intrinsics_6; }
	inline CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A * get_address_of__intrinsics_6() { return &____intrinsics_6; }
	inline void set__intrinsics_6(CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  value)
	{
		____intrinsics_6 = value;
	}

	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(_SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070, ___U3CDataU3Ek__BackingField_7)); }
	inline NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  get_U3CDataU3Ek__BackingField_7() const { return ___U3CDataU3Ek__BackingField_7; }
	inline NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A * get_address_of_U3CDataU3Ek__BackingField_7() { return &___U3CDataU3Ek__BackingField_7; }
	inline void set_U3CDataU3Ek__BackingField_7(NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  value)
	{
		___U3CDataU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsRotatedToScreenOrientationU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(_SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070, ___U3CIsRotatedToScreenOrientationU3Ek__BackingField_8)); }
	inline bool get_U3CIsRotatedToScreenOrientationU3Ek__BackingField_8() const { return ___U3CIsRotatedToScreenOrientationU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsRotatedToScreenOrientationU3Ek__BackingField_8() { return &___U3CIsRotatedToScreenOrientationU3Ek__BackingField_8; }
	inline void set_U3CIsRotatedToScreenOrientationU3Ek__BackingField_8(bool value)
	{
		___U3CIsRotatedToScreenOrientationU3Ek__BackingField_8 = value;
	}
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
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


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>[]
struct KeyValuePair_2U5BU5D_t0BF7C6185BEFBB97D75B41C977593F6FA8E45F23  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t74D5C76BCA7D14D18A99E0FA9EC3584DBFB65F7F  m_Items[1];

public:
	inline KeyValuePair_2_t74D5C76BCA7D14D18A99E0FA9EC3584DBFB65F7F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t74D5C76BCA7D14D18A99E0FA9EC3584DBFB65F7F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t74D5C76BCA7D14D18A99E0FA9EC3584DBFB65F7F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
	inline KeyValuePair_2_t74D5C76BCA7D14D18A99E0FA9EC3584DBFB65F7F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t74D5C76BCA7D14D18A99E0FA9EC3584DBFB65F7F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t74D5C76BCA7D14D18A99E0FA9EC3584DBFB65F7F  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>[]
struct KeyValuePair_2U5BU5D_tD14B63166B0AC62215EC442593AE6CA857F5AEE4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_tD48B4CC7D124965F124FA06C6FE9827A1F6BE297  m_Items[1];

public:
	inline KeyValuePair_2_tD48B4CC7D124965F124FA06C6FE9827A1F6BE297  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tD48B4CC7D124965F124FA06C6FE9827A1F6BE297 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tD48B4CC7D124965F124FA06C6FE9827A1F6BE297  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
	inline KeyValuePair_2_tD48B4CC7D124965F124FA06C6FE9827A1F6BE297  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tD48B4CC7D124965F124FA06C6FE9827A1F6BE297 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tD48B4CC7D124965F124FA06C6FE9827A1F6BE297  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Matrix4x4>[]
struct KeyValuePair_2U5BU5D_t95064707C6138735636A2862E599CBCBA88A2126  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t16948AAAFBD1CC65CF6D5A707B831DF5685752CE  m_Items[1];

public:
	inline KeyValuePair_2_t16948AAAFBD1CC65CF6D5A707B831DF5685752CE  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t16948AAAFBD1CC65CF6D5A707B831DF5685752CE * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t16948AAAFBD1CC65CF6D5A707B831DF5685752CE  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
	inline KeyValuePair_2_t16948AAAFBD1CC65CF6D5A707B831DF5685752CE  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t16948AAAFBD1CC65CF6D5A707B831DF5685752CE * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t16948AAAFBD1CC65CF6D5A707B831DF5685752CE  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  m_Items[1];

public:
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};


// System.Boolean Unity.Collections.NativeArray`1<System.Single>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m394E202D29B5488CB56139D346E1A64EBBDA2E9C_gshared (NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Matrix4x4>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m1B18301A178CB08EBBDF6BD338E5D43C076DD809_gshared_inline (Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.Matrix4x4>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m3B5B322F85CD96740371B7C75D9650148860D9A4_gshared (Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Matrix4x4>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Nullable_1_GetValueOrDefault_m27466FD512E235FE817B24F8E6BB5F14A5E4FB2D_gshared_inline (Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mE04DEC4948A6ECCC16F70EDA9B8DE8DBC4C05B17_gshared_inline (Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m908F19A4CECB37AD0DED0172657C92276B5E4A59_gshared (Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B * __this, CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  Nullable_1_get_Value_mD04F37C1139BFD4B9970E9F257817AF786584725_gshared (Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<System.UInt32>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m3B37A54D543C525751B889F68FB779C09E0B7FD3_gshared (NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Single>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mC03B89A2188FC84335036FA76CEB1925D7DC4294_gshared (NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.UInt32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m5E13FBBFF171004599F612D00587AD4EE7D79872_gshared (NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A * __this, const RuntimeMethod* method);
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.UInt32>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1_Serialize_mF4E9F9FAA0AB963C2233A3121F3E4274EA8FFAAB_gshared (BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, uint32_t ___item1, const RuntimeMethod* method);
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Boolean>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1_Serialize_m8692958F30558F98C89D9A318F998029FB59A1EC_gshared (BaseItemSerializer_1_t08F5BA999B41FC91E9459C9DDE808D68F21D7B48 * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, bool ___item1, const RuntimeMethod* method);
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Matrix4x4>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1_Serialize_m2D34BA57E4BCE8DD2120CA7B6B75930326B24D58_gshared (BaseItemSerializer_1_t33D3C64D9D4A48058D6E7EA3E851ACA5EEFC0A66 * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___item1, const RuntimeMethod* method);
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1_Serialize_m5814756252CB5C8E8B72A0EFAA24C89B9B3375E0_gshared (BaseItemSerializer_1_t4437CB081DD98887077F39A721F361BBEA872847 * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  ___item1, const RuntimeMethod* method);
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.UInt32>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BaseItemSerializer_1_Deserialize_mED86D8AB49810AA3BE145A9B875DAC6D166370F1_gshared (BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method);
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Boolean>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseItemSerializer_1_Deserialize_mE656780E6F2DD44BB9FBABD437580C79438D208C_gshared (BaseItemSerializer_1_t08F5BA999B41FC91E9459C9DDE808D68F21D7B48 * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method);
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Matrix4x4>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  BaseItemSerializer_1_Deserialize_m25A18552A7D3081D6B21365982F3B2B13323391C_gshared (BaseItemSerializer_1_t33D3C64D9D4A48058D6E7EA3E851ACA5EEFC0A66 * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method);
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  BaseItemSerializer_1_Deserialize_mFCE6E3CF2B8CCCBB024614091FF77E49AE84837F_gshared (BaseItemSerializer_1_t4437CB081DD98887077F39A721F361BBEA872847 * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mE47F3F438F816C36EF8D857CD4313EDE8E9BA71E_gshared_inline (KeyValuePair_2_t74D5C76BCA7D14D18A99E0FA9EC3584DBFB65F7F * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t  KeyValuePair_2_get_Key_mE03F9398C8279E092A6E54CA730BEB18E2CBBF53_gshared_inline (KeyValuePair_2_t74D5C76BCA7D14D18A99E0FA9EC3584DBFB65F7F * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m78A6E4C98E5CAA84620AF3E153D4838E81797F74_gshared_inline (KeyValuePair_2_t9929596D6B05353257A804D74C9405F53868F45F * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t KeyValuePair_2_get_Key_mC28669104EE444D50EEB65D2F80D07D0A90434B9_gshared_inline (KeyValuePair_2_t9929596D6B05353257A804D74C9405F53868F45F * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m118B63F6DB931EF71499AB539E0D3F4DBE79BC7A_gshared_inline (KeyValuePair_2_t91051A57A082B61DB720888E2DC65EB60EE7882A * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR _CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731  KeyValuePair_2_get_Key_m9C4B4457AB42865611A80F05385CC962E7F20528_gshared_inline (KeyValuePair_2_t91051A57A082B61DB720888E2DC65EB60EE7882A * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Niantic.ARDK.AR.Awareness._AwarenessBufferBase::.ctor(System.UInt32,System.UInt32,System.Boolean,Niantic.ARDK.AR.Camera.CameraIntrinsics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AwarenessBufferBase__ctor_mCBA110605321C6937BBFB5C821B1EE6152C86519 (_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF * __this, uint32_t ___width0, uint32_t ___height1, bool ___isKeyframe2, CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  ___intrinsics3, const RuntimeMethod* method);
// System.Void System.GC::AddMemoryPressure(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_AddMemoryPressure_m85340229E43D12052C25F55B3E239BFD19F18C42 (int64_t ___bytesAllocated0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<System.Single>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m394E202D29B5488CB56139D346E1A64EBBDA2E9C (NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 *, const RuntimeMethod*))NativeArray_1_get_IsCreated_m394E202D29B5488CB56139D346E1A64EBBDA2E9C_gshared)(__this, method);
}
// System.UInt32 Niantic.ARDK.AR.Awareness._AwarenessBufferBase::get_Width()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t _AwarenessBufferBase_get_Width_mA8E870CE200ECBF18C4FEDFAF0F052302BF42E63_inline (_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF * __this, const RuntimeMethod* method);
// System.UInt32 Niantic.ARDK.AR.Awareness._AwarenessBufferBase::get_Height()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t _AwarenessBufferBase_get_Height_mDAE1E876EE5B79EA91BAE047CCA75EBBD2BA17BC_inline (_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF * __this, const RuntimeMethod* method);
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline (intptr_t* __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Matrix4x4>::get_HasValue()
inline bool Nullable_1_get_HasValue_m1B18301A178CB08EBBDF6BD338E5D43C076DD809_inline (Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E *, const RuntimeMethod*))Nullable_1_get_HasValue_m1B18301A178CB08EBBDF6BD338E5D43C076DD809_gshared_inline)(__this, method);
}
// UnityEngine.Matrix4x4 Niantic.ARDK.AR._Convert::InternalToMatrix4x4(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  _Convert_InternalToMatrix4x4_mB2F9E55FB580C0FC6730BE0DE220F8F544D7DEDE (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___internalArray0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 Niantic.ARDK.Utilities.NARConversions::FromNARToUnity(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  NARConversions_FromNARToUnity_m350AE4C12AA16EB6EF52A27E54BDDE9A307D7121 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix0, const RuntimeMethod* method);
// System.Void Niantic.ARDK.AR._Convert::ApplyScale(UnityEngine.Matrix4x4&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Convert_ApplyScale_m18A179225423FF088CA9D03D8CC8C4092686B3ED (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * ___matrix0, float ___scale1, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.Matrix4x4>::.ctor(!0)
inline void Nullable_1__ctor_m3B5B322F85CD96740371B7C75D9650148860D9A4 (Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E *, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 , const RuntimeMethod*))Nullable_1__ctor_m3B5B322F85CD96740371B7C75D9650148860D9A4_gshared)(__this, ___value0, method);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596 (const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Matrix4x4>::GetValueOrDefault()
inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Nullable_1_GetValueOrDefault_m27466FD512E235FE817B24F8E6BB5F14A5E4FB2D_inline (Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E * __this, const RuntimeMethod* method)
{
	return ((  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  (*) (Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m27466FD512E235FE817B24F8E6BB5F14A5E4FB2D_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::get_HasValue()
inline bool Nullable_1_get_HasValue_mE04DEC4948A6ECCC16F70EDA9B8DE8DBC4C05B17_inline (Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B *, const RuntimeMethod*))Nullable_1_get_HasValue_mE04DEC4948A6ECCC16F70EDA9B8DE8DBC4C05B17_gshared_inline)(__this, method);
}
// System.Void Niantic.ARDK.AR.Camera.CameraIntrinsics::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraIntrinsics__ctor_m34EAC31F4DEE6315F89F8B35FF4AC99786E882B7 (CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A * __this, float ___fx0, float ___fy1, float ___px2, float ___py3, const RuntimeMethod* method);
// System.Void System.Nullable`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::.ctor(!0)
inline void Nullable_1__ctor_m908F19A4CECB37AD0DED0172657C92276B5E4A59 (Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B * __this, CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B *, CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A , const RuntimeMethod*))Nullable_1__ctor_m908F19A4CECB37AD0DED0172657C92276B5E4A59_gshared)(__this, ___value0, method);
}
// !0 System.Nullable`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::get_Value()
inline CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  Nullable_1_get_Value_mD04F37C1139BFD4B9970E9F257817AF786584725 (Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B * __this, const RuntimeMethod* method)
{
	return ((  CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  (*) (Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B *, const RuntimeMethod*))Nullable_1_get_Value_mD04F37C1139BFD4B9970E9F257817AF786584725_gshared)(__this, method);
}
// UnityEngine.Matrix4x4 Niantic.ARDK.Utilities.NARConversions::FromUnityToNAR(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  NARConversions_FromUnityToNAR_m851B2B1657AA79EA68AEF4795192E3EB463241E6 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix0, const RuntimeMethod* method);
// System.Single[] Niantic.ARDK.AR._Convert::Matrix4x4ToInternalArray(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* _Convert_Matrix4x4ToInternalArray_mE5180214C603A6388B0FAB1873E5F972B3C767D7 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix4x40, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.GC::RemoveMemoryPressure(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_RemoveMemoryPressure_mC086343A8797ADC5F9686B3CB0D8478456D2A632 (int64_t ___bytesAllocated0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_m5482D50095CD4ECFFE66778DDAB9173AD834E85A (Type_t * ___t0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<System.UInt32>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m3B37A54D543C525751B889F68FB779C09E0B7FD3 (NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A *, const RuntimeMethod*))NativeArray_1_get_IsCreated_m3B37A54D543C525751B889F68FB779C09E0B7FD3_gshared)(__this, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Object System.Threading.Interlocked::CompareExchange(System.Object&,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Interlocked_CompareExchange_mFAD09589A5DAFDBABB05C62A2D35CD5B92BC6961 (RuntimeObject ** ___location10, RuntimeObject * ___value1, RuntimeObject * ___comparand2, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_GetHashCode_mDA6691034E245B5F619B108F3597725FF7862DA1 (RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Single>::Dispose()
inline void NativeArray_1_Dispose_mC03B89A2188FC84335036FA76CEB1925D7DC4294 (NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 *, const RuntimeMethod*))NativeArray_1_Dispose_mC03B89A2188FC84335036FA76CEB1925D7DC4294_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<System.UInt32>::Dispose()
inline void NativeArray_1_Dispose_m5E13FBBFF171004599F612D00587AD4EE7D79872 (NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A *, const RuntimeMethod*))NativeArray_1_Dispose_m5E13FBBFF171004599F612D00587AD4EE7D79872_gshared)(__this, method);
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.UInt32>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
inline void BaseItemSerializer_1_Serialize_mF4E9F9FAA0AB963C2233A3121F3E4274EA8FFAAB (BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, uint32_t ___item1, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D *, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, uint32_t, const RuntimeMethod*))BaseItemSerializer_1_Serialize_mF4E9F9FAA0AB963C2233A3121F3E4274EA8FFAAB_gshared)(__this, ___serializer0, ___item1, method);
}
// System.Boolean Niantic.ARDK.AR.Awareness._AwarenessBufferBase::get_IsKeyframe()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool _AwarenessBufferBase_get_IsKeyframe_m4DB74F27C7A36F9556117A93CC6E0E876ABC9AB1_inline (_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF * __this, const RuntimeMethod* method);
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Boolean>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
inline void BaseItemSerializer_1_Serialize_m8692958F30558F98C89D9A318F998029FB59A1EC (BaseItemSerializer_1_t08F5BA999B41FC91E9459C9DDE808D68F21D7B48 * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, bool ___item1, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_t08F5BA999B41FC91E9459C9DDE808D68F21D7B48 *, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, bool, const RuntimeMethod*))BaseItemSerializer_1_Serialize_m8692958F30558F98C89D9A318F998029FB59A1EC_gshared)(__this, ___serializer0, ___item1, method);
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Matrix4x4>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
inline void BaseItemSerializer_1_Serialize_m2D34BA57E4BCE8DD2120CA7B6B75930326B24D58 (BaseItemSerializer_1_t33D3C64D9D4A48058D6E7EA3E851ACA5EEFC0A66 * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___item1, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_t33D3C64D9D4A48058D6E7EA3E851ACA5EEFC0A66 *, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 , const RuntimeMethod*))BaseItemSerializer_1_Serialize_m2D34BA57E4BCE8DD2120CA7B6B75930326B24D58_gshared)(__this, ___serializer0, ___item1, method);
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
inline void BaseItemSerializer_1_Serialize_m5814756252CB5C8E8B72A0EFAA24C89B9B3375E0 (BaseItemSerializer_1_t4437CB081DD98887077F39A721F361BBEA872847 * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  ___item1, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_t4437CB081DD98887077F39A721F361BBEA872847 *, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A , const RuntimeMethod*))BaseItemSerializer_1_Serialize_m5814756252CB5C8E8B72A0EFAA24C89B9B3375E0_gshared)(__this, ___serializer0, ___item1, method);
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.UInt32>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
inline uint32_t BaseItemSerializer_1_Deserialize_mED86D8AB49810AA3BE145A9B875DAC6D166370F1 (BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *, const RuntimeMethod*))BaseItemSerializer_1_Deserialize_mED86D8AB49810AA3BE145A9B875DAC6D166370F1_gshared)(__this, ___deserializer0, method);
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Boolean>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
inline bool BaseItemSerializer_1_Deserialize_mE656780E6F2DD44BB9FBABD437580C79438D208C (BaseItemSerializer_1_t08F5BA999B41FC91E9459C9DDE808D68F21D7B48 * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseItemSerializer_1_t08F5BA999B41FC91E9459C9DDE808D68F21D7B48 *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *, const RuntimeMethod*))BaseItemSerializer_1_Deserialize_mE656780E6F2DD44BB9FBABD437580C79438D208C_gshared)(__this, ___deserializer0, method);
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Matrix4x4>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  BaseItemSerializer_1_Deserialize_m25A18552A7D3081D6B21365982F3B2B13323391C (BaseItemSerializer_1_t33D3C64D9D4A48058D6E7EA3E851ACA5EEFC0A66 * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	return ((  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  (*) (BaseItemSerializer_1_t33D3C64D9D4A48058D6E7EA3E851ACA5EEFC0A66 *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *, const RuntimeMethod*))BaseItemSerializer_1_Deserialize_m25A18552A7D3081D6B21365982F3B2B13323391C_gshared)(__this, ___deserializer0, method);
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
inline CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  BaseItemSerializer_1_Deserialize_mFCE6E3CF2B8CCCBB024614091FF77E49AE84837F (BaseItemSerializer_1_t4437CB081DD98887077F39A721F361BBEA872847 * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	return ((  CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  (*) (BaseItemSerializer_1_t4437CB081DD98887077F39A721F361BBEA872847 *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *, const RuntimeMethod*))BaseItemSerializer_1_Deserialize_mFCE6E3CF2B8CCCBB024614091FF77E49AE84837F_gshared)(__this, ___deserializer0, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Niantic.ARDK.Utilities._GcObserver::add__GcHappened(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GcObserver_add__GcHappened_mC21FB543C49ED63EB07119B5D90427250041A075 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Void Niantic.ARDK.Utilities._GcObserver::remove__GcHappened(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GcObserver_remove__GcHappened_mDD67EE02D88F0FE7571EFC359B0B880E012CAC0D (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Guid,System.WeakReference>::get_Value()
inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * KeyValuePair_2_get_Value_m53B133E79E8E3F1AF0D659A5C9D3CFCE3B5443A7_inline (KeyValuePair_2_t2DD2ADB8375EB792B15593D6EC22586CBA0E52D6 * __this, const RuntimeMethod* method)
{
	return ((  WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * (*) (KeyValuePair_2_t2DD2ADB8375EB792B15593D6EC22586CBA0E52D6 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mE47F3F438F816C36EF8D857CD4313EDE8E9BA71E_gshared_inline)(__this, method);
}
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Guid,System.WeakReference>::get_Key()
inline Guid_t  KeyValuePair_2_get_Key_m0D034BC07982B9E2CCF633962770CFE8B6E998AD_inline (KeyValuePair_2_t2DD2ADB8375EB792B15593D6EC22586CBA0E52D6 * __this, const RuntimeMethod* method)
{
	return ((  Guid_t  (*) (KeyValuePair_2_t2DD2ADB8375EB792B15593D6EC22586CBA0E52D6 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mE03F9398C8279E092A6E54CA730BEB18E2CBBF53_gshared_inline)(__this, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.WeakReference>::get_Value()
inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * KeyValuePair_2_get_Value_mBA0CCF1B31C92068C8F82E4BE95105D85641BCCD_inline (KeyValuePair_2_tEADE5527AB5FCAE71705D641CCEC5B598079D344 * __this, const RuntimeMethod* method)
{
	return ((  WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * (*) (KeyValuePair_2_tEADE5527AB5FCAE71705D641CCEC5B598079D344 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m78A6E4C98E5CAA84620AF3E153D4838E81797F74_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.WeakReference>::get_Key()
inline intptr_t KeyValuePair_2_get_Key_mAC3D255E0FAEFDD8084F1D9DCE05A6FE7CD996E4_inline (KeyValuePair_2_tEADE5527AB5FCAE71705D641CCEC5B598079D344 * __this, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (KeyValuePair_2_tEADE5527AB5FCAE71705D641CCEC5B598079D344 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mC28669104EE444D50EEB65D2F80D07D0A90434B9_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.WeakReference>::get_Value()
inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * KeyValuePair_2_get_Value_m8A7340E13D07A5820B807E97A4BA53086558CCCF_inline (KeyValuePair_2_tDB70CB08EDD9AC368147F64B26A736278DC2A0C0 * __this, const RuntimeMethod* method)
{
	return ((  WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * (*) (KeyValuePair_2_tDB70CB08EDD9AC368147F64B26A736278DC2A0C0 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.WeakReference>::get_Key()
inline RuntimeObject * KeyValuePair_2_get_Key_m3184FADC65C07CE46034A6445725401C30EFA6FD_inline (KeyValuePair_2_tDB70CB08EDD9AC368147F64B26A736278DC2A0C0 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tDB70CB08EDD9AC368147F64B26A736278DC2A0C0 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>::get_Value()
inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * KeyValuePair_2_get_Value_mAE16A75CCA7D325827F86C95F9FD1F8081FE1416_inline (KeyValuePair_2_t7A56726DC229B6A4B142DF678829232995D82105 * __this, const RuntimeMethod* method)
{
	return ((  WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * (*) (KeyValuePair_2_t7A56726DC229B6A4B142DF678829232995D82105 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m118B63F6DB931EF71499AB539E0D3F4DBE79BC7A_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>::get_Key()
inline _CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731  KeyValuePair_2_get_Key_mD2BFA7CB31CF17A9C74B497776820C29240F0C22_inline (KeyValuePair_2_t7A56726DC229B6A4B142DF678829232995D82105 * __this, const RuntimeMethod* method)
{
	return ((  _CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731  (*) (KeyValuePair_2_t7A56726DC229B6A4B142DF678829232995D82105 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m9C4B4457AB42865611A80F05385CC962E7F20528_gshared_inline)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Niantic.ARDK.VPSCoverage.ResponseStatus Niantic.ARDK.Utilities._HttpResponse`1<System.Object>::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _HttpResponse_1_get_Status_m73B0CAC193B4841E1850C7F9081BE33D9C7E5054_gshared (_HttpResponse_1_t56F181460B2EEF1EC7060DC5AC7A5C5A2C3201C7 * __this, const RuntimeMethod* method)
{
	{
		// public ResponseStatus Status { get; set; }
		int32_t L_0 = (int32_t)__this->get_U3CStatusU3Ek__BackingField_0();
		return (int32_t)L_0;
	}
}
// System.Void Niantic.ARDK.Utilities._HttpResponse`1<System.Object>::set_Status(Niantic.ARDK.VPSCoverage.ResponseStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _HttpResponse_1_set_Status_m631B335A85AABECA4399E44529E4202DEA3498AC_gshared (_HttpResponse_1_t56F181460B2EEF1EC7060DC5AC7A5C5A2C3201C7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ResponseStatus Status { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStatusU3Ek__BackingField_0(L_0);
		return;
	}
}
// TResponse Niantic.ARDK.Utilities._HttpResponse`1<System.Object>::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _HttpResponse_1_get_Data_m205044EF7154937C86FCD6B7C95DBF91C3B5B6D8_gshared (_HttpResponse_1_t56F181460B2EEF1EC7060DC5AC7A5C5A2C3201C7 * __this, const RuntimeMethod* method)
{
	{
		// public TResponse Data { get; }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CDataU3Ek__BackingField_1();
		return (RuntimeObject *)L_0;
	}
}
// System.Void Niantic.ARDK.Utilities._HttpResponse`1<System.Object>::.ctor(Niantic.ARDK.VPSCoverage.ResponseStatus,TResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _HttpResponse_1__ctor_mBFC81691180C9DDCF42180731B83253A7BC3B7E2_gshared (_HttpResponse_1_t56F181460B2EEF1EC7060DC5AC7A5C5A2C3201C7 * __this, int32_t ___status0, RuntimeObject * ___data1, const RuntimeMethod* method)
{
	{
		// public _HttpResponse(ResponseStatus status, TResponse data)
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// Status = status;
		int32_t L_0 = ___status0;
		NullCheck((_HttpResponse_1_t56F181460B2EEF1EC7060DC5AC7A5C5A2C3201C7 *)__this);
		((  void (*) (_HttpResponse_1_t56F181460B2EEF1EC7060DC5AC7A5C5A2C3201C7 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((_HttpResponse_1_t56F181460B2EEF1EC7060DC5AC7A5C5A2C3201C7 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// Data = data;
		RuntimeObject * L_1 = ___data1;
		__this->set_U3CDataU3Ek__BackingField_1(L_1);
		// }
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
// System.Void Niantic.ARDK.Networking.ARSim.ArmMessageStream/_MessageExecutor`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _MessageExecutor_1__ctor_m942EDC88CFDED1D99660E6E0E26A9EBB24FAC8D1_gshared (_MessageExecutor_1_t9EDA4C5374B9ABFC202AEF573FEF695482ED1E66 * __this, const RuntimeMethod* method)
{
	{
		// private _MessageExecutor()
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Networking.ARSim.ArmMessageStream/_MessageExecutor`1<System.Object>::.ctor(System.Action`1<T>,Niantic.ARDK.Networking.ARSim.ArmMessageStream/MessageSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _MessageExecutor_1__ctor_m64457C0E16F2982FCE7ABB7F1BA4B570E3F43F63_gshared (_MessageExecutor_1_t9EDA4C5374B9ABFC202AEF573FEF695482ED1E66 * __this, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action0, uint16_t ___source1, const RuntimeMethod* method)
{
	{
		// : this()
		NullCheck((_MessageExecutor_1_t9EDA4C5374B9ABFC202AEF573FEF695482ED1E66 *)__this);
		((  void (*) (_MessageExecutor_1_t9EDA4C5374B9ABFC202AEF573FEF695482ED1E66 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((_MessageExecutor_1_t9EDA4C5374B9ABFC202AEF573FEF695482ED1E66 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _action = action;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_0 = ___action0;
		__this->set__action_0(L_0);
		// Source = source;
		uint16_t L_1 = ___source1;
		NullCheck((_MessageExecutor_1_t9EDA4C5374B9ABFC202AEF573FEF695482ED1E66 *)__this);
		((  void (*) (_MessageExecutor_1_t9EDA4C5374B9ABFC202AEF573FEF695482ED1E66 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((_MessageExecutor_1_t9EDA4C5374B9ABFC202AEF573FEF695482ED1E66 *)__this, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Networking.ARSim.ArmMessageStream/_MessageExecutor`1<System.Object>::Execute(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _MessageExecutor_1_Execute_mD5225967E86C4CACC62B3953E1D306E7CDCB34D0_gshared (_MessageExecutor_1_t9EDA4C5374B9ABFC202AEF573FEF695482ED1E66 * __this, RuntimeObject * ___message0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// T typedMessage = (T)message;
		RuntimeObject * L_0 = ___message0;
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)));
		// _action(typedMessage);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_1 = (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)__this->get__action_0();
		RuntimeObject * L_2 = V_0;
		NullCheck((Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_1);
		((  void (*) (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_1, (RuntimeObject *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// Niantic.ARDK.Networking.ARSim.ArmMessageStream/MessageSource Niantic.ARDK.Networking.ARSim.ArmMessageStream/_MessageExecutor`1<System.Object>::get_Source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t _MessageExecutor_1_get_Source_m23AB1E9031A7A675FBF826555C0DBEF7F11CDB98_gshared (_MessageExecutor_1_t9EDA4C5374B9ABFC202AEF573FEF695482ED1E66 * __this, const RuntimeMethod* method)
{
	{
		// get;
		uint16_t L_0 = (uint16_t)__this->get_U3CSourceU3Ek__BackingField_1();
		return (uint16_t)L_0;
	}
}
// System.Void Niantic.ARDK.Networking.ARSim.ArmMessageStream/_MessageExecutor`1<System.Object>::set_Source(Niantic.ARDK.Networking.ARSim.ArmMessageStream/MessageSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _MessageExecutor_1_set_Source_m1B44B9190B9AE4F820411A11D20DD0438AC926CD_gshared (_MessageExecutor_1_t9EDA4C5374B9ABFC202AEF573FEF695482ED1E66 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		// private set;
		uint16_t L_0 = ___value0;
		__this->set_U3CSourceU3Ek__BackingField_1(L_0);
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
// System.Void Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_MessageExecutor`1<System.Object>::.ctor(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _MessageExecutor_1__ctor_m8641A0384ED03DE49AC38DAA89761BF91008D229_gshared (_MessageExecutor_1_t1A21FA6647FB13FB93438FC2001C3A559AB4EF11 * __this, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action0, const RuntimeMethod* method)
{
	{
		// internal _MessageExecutor(Action<T> action)
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// _action = action;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_0 = ___action0;
		__this->set__action_0(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.VirtualStudio.Remote._EasyConnection/_MessageExecutor`1<System.Object>::Execute(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _MessageExecutor_1_Execute_mB1828E4D9D8A818188B6EDE66834956A1263705F_gshared (_MessageExecutor_1_t1A21FA6647FB13FB93438FC2001C3A559AB4EF11 * __this, RuntimeObject * ___message0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// T typedMessage = (T)message;
		RuntimeObject * L_0 = ___message0;
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		// _action(typedMessage);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_1 = (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)__this->get__action_0();
		RuntimeObject * L_2 = V_0;
		NullCheck((Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_1);
		((  void (*) (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_1, (RuntimeObject *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// }
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
// System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>::.ctor(System.IntPtr,System.Single,System.UInt32,System.UInt32,System.Boolean,Niantic.ARDK.AR.Camera.CameraIntrinsics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _NativeAwarenessBufferBase_1__ctor_m89D2428811A8BC2672F4DE835EB9DA8AF7503C28_gshared (_NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344 * __this, intptr_t ___handle0, float ___worldScale1, uint32_t ___width2, uint32_t ___height3, bool ___isKeyframe4, CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  ___intrinsics5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(width, height, isKeyframe, intrinsics)
		uint32_t L_0 = ___width2;
		uint32_t L_1 = ___height3;
		bool L_2 = ___isKeyframe4;
		CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  L_3 = ___intrinsics5;
		NullCheck((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this);
		_AwarenessBufferBase__ctor_mCBA110605321C6937BBFB5C821B1EE6152C86519((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this, (uint32_t)L_0, (uint32_t)L_1, (bool)L_2, (CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A )L_3, /*hidden argument*/NULL);
		// _worldScale = worldScale;
		float L_4 = ___worldScale1;
		__this->set__worldScale_3(L_4);
		// _nativeHandle = handle;
		intptr_t L_5 = ___handle0;
		__this->set__nativeHandle_4((intptr_t)L_5);
		// _consumedUnmanagedMemory = _CalculateConsumedMemory();
		NullCheck((_NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344 *)__this);
		int64_t L_6;
		L_6 = ((  int64_t (*) (_NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((_NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		__this->set__consumedUnmanagedMemory_5(L_6);
		// GC.AddMemoryPressure(_consumedUnmanagedMemory);
		int64_t L_7 = (int64_t)__this->get__consumedUnmanagedMemory_5();
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_AddMemoryPressure_m85340229E43D12052C25F55B3E239BFD19F18C42((int64_t)L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _NativeAwarenessBufferBase_1_Finalize_m768BB630F2BB722EE338D0777521D6EBFD77814E_gshared (_NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// Dispose();
		NullCheck((_NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344 *)__this);
		((  void (*) (_NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((_NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		IL2CPP_LEAVE(0xF, FINALLY_0008);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0008;
	}

FINALLY_0008:
	{ // begin finally (depth: 1)
		// }
		NullCheck((RuntimeObject *)__this);
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(8)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(8)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF, IL_000f)
	}

IL_000f:
	{
		// }
		return;
	}
}
// Unity.Collections.NativeArray`1<T> Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  _NativeAwarenessBufferBase_1_get_Data_mA6635C7A45B71CC829F602ECB10D55E3092C3967_gshared (_NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!_data.IsCreated)
		NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 * L_0 = (NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 *)__this->get_address_of__data_8();
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m394E202D29B5488CB56139D346E1A64EBBDA2E9C((NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 *)(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if (L_1)
		{
			goto IL_0036;
		}
	}
	{
		// UInt32 size = Width * Height;
		NullCheck((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this);
		uint32_t L_2;
		L_2 = _AwarenessBufferBase_get_Width_mA8E870CE200ECBF18C4FEDFAF0F052302BF42E63_inline((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this, /*hidden argument*/NULL);
		NullCheck((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this);
		uint32_t L_3;
		L_3 = _AwarenessBufferBase_get_Height_mDAE1E876EE5B79EA91BAE047CCA75EBBD2BA17BC_inline((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this, /*hidden argument*/NULL);
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3));
		// _data = NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<T>
		//   (_GetDataAddress().ToPointer(), (int)size, Allocator.None);
		NullCheck((_NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344 *)__this);
		intptr_t L_4;
		L_4 = VirtFuncInvoker0< intptr_t >::Invoke(17 /* System.IntPtr Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>::_GetDataAddress() */, (_NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344 *)__this);
		V_1 = (intptr_t)L_4;
		void* L_5;
		L_5 = IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline((intptr_t*)(intptr_t*)(&V_1), /*hidden argument*/NULL);
		uint32_t L_6 = V_0;
		NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  L_7;
		L_7 = ((  NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  (*) (void*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((void*)(void*)L_5, (int32_t)L_6, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set__data_8(L_7);
	}

IL_0036:
	{
		// return _data;
		NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  L_8 = (NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 )__this->get__data_8();
		return (NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 )L_8;
	}
}
// UnityEngine.Matrix4x4 Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>::get_ViewMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  _NativeAwarenessBufferBase_1_get_ViewMatrix_m5CBA2728EB563660F0CFA76432351169BC18DDCA_gshared (_NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NARConversions_t759A8F4C7273684E6989896D285406468568FE21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m27466FD512E235FE817B24F8E6BB5F14A5E4FB2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m3B5B322F85CD96740371B7C75D9650148860D9A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m1B18301A178CB08EBBDF6BD338E5D43C076DD809_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (_cacheViewMatrix == null)
		Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E * L_0 = (Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E *)__this->get_address_of__cacheViewMatrix_6();
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m1B18301A178CB08EBBDF6BD338E5D43C076DD809_inline((Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E *)(Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E *)L_0, /*hidden argument*/Nullable_1_get_HasValue_m1B18301A178CB08EBBDF6BD338E5D43C076DD809_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		// var nativeMatrix = new float[16];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_2;
		// _GetViewMatrix(nativeMatrix);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = V_0;
		NullCheck((_NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344 *)__this);
		VirtActionInvoker1< SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* >::Invoke(15 /* System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>::_GetViewMatrix(System.Single[]) */, (_NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344 *)__this, (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_3);
		// var viewMatrix = NARConversions.FromNARToUnity
		//   (_Convert.InternalToMatrix4x4(nativeMatrix));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_5;
		L_5 = _Convert_InternalToMatrix4x4_mB2F9E55FB580C0FC6730BE0DE220F8F544D7DEDE((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NARConversions_t759A8F4C7273684E6989896D285406468568FE21_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_6;
		L_6 = NARConversions_FromNARToUnity_m350AE4C12AA16EB6EF52A27E54BDDE9A307D7121((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_5, /*hidden argument*/NULL);
		V_1 = (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_6;
		// _Convert.ApplyScale(ref viewMatrix, _worldScale);
		float L_7 = (float)__this->get__worldScale_3();
		_Convert_ApplyScale_m18A179225423FF088CA9D03D8CC8C4092686B3ED((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_1), (float)L_7, /*hidden argument*/NULL);
		// _cacheViewMatrix = viewMatrix;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_8 = V_1;
		Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Nullable_1__ctor_m3B5B322F85CD96740371B7C75D9650148860D9A4((&L_9), (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_8, /*hidden argument*/Nullable_1__ctor_m3B5B322F85CD96740371B7C75D9650148860D9A4_RuntimeMethod_var);
		__this->set__cacheViewMatrix_6(L_9);
	}

IL_0041:
	{
		// return _cacheViewMatrix ?? Matrix4x4.identity;
		Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  L_10 = (Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E )__this->get__cacheViewMatrix_6();
		V_2 = (Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E )L_10;
		bool L_11;
		L_11 = Nullable_1_get_HasValue_m1B18301A178CB08EBBDF6BD338E5D43C076DD809_inline((Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E *)(Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_m1B18301A178CB08EBBDF6BD338E5D43C076DD809_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0057;
		}
	}
	{
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_12;
		L_12 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596(/*hidden argument*/NULL);
		return (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_12;
	}

IL_0057:
	{
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_13;
		L_13 = Nullable_1_GetValueOrDefault_m27466FD512E235FE817B24F8E6BB5F14A5E4FB2D_inline((Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E *)(Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E *)(&V_2), /*hidden argument*/Nullable_1_GetValueOrDefault_m27466FD512E235FE817B24F8E6BB5F14A5E4FB2D_RuntimeMethod_var);
		return (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_13;
	}
}
// Niantic.ARDK.AR.Camera.CameraIntrinsics Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>::get_Intrinsics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  _NativeAwarenessBufferBase_1_get_Intrinsics_m9FE884CF9415DCF2C46BB2DFFD023ED88E436C82_gshared (_NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m908F19A4CECB37AD0DED0172657C92276B5E4A59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mE04DEC4948A6ECCC16F70EDA9B8DE8DBC4C05B17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mD04F37C1139BFD4B9970E9F257817AF786584725_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	{
		// if (!_cachedIntrinsics.HasValue)
		Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B * L_0 = (Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B *)__this->get_address_of__cachedIntrinsics_7();
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mE04DEC4948A6ECCC16F70EDA9B8DE8DBC4C05B17_inline((Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B *)(Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B *)L_0, /*hidden argument*/Nullable_1_get_HasValue_mE04DEC4948A6ECCC16F70EDA9B8DE8DBC4C05B17_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		// var nativeVector = new float[4];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_2;
		// _GetIntrinsics(nativeVector);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = V_0;
		NullCheck((_NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344 *)__this);
		VirtActionInvoker1< SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* >::Invoke(16 /* System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>::_GetIntrinsics(System.Single[]) */, (_NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344 *)__this, (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_3);
		// _cachedIntrinsics =
		//   new CameraIntrinsics
		//   (
		//     nativeVector[0],
		//     nativeVector[1],
		//     nativeVector[2],
		//     nativeVector[3]
		//   );
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		float L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = 1;
		float L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 2;
		float L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = 3;
		float L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  L_16;
		memset((&L_16), 0, sizeof(L_16));
		CameraIntrinsics__ctor_m34EAC31F4DEE6315F89F8B35FF4AC99786E882B7((&L_16), (float)L_6, (float)L_9, (float)L_12, (float)L_15, /*hidden argument*/NULL);
		Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Nullable_1__ctor_m908F19A4CECB37AD0DED0172657C92276B5E4A59((&L_17), (CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A )L_16, /*hidden argument*/Nullable_1__ctor_m908F19A4CECB37AD0DED0172657C92276B5E4A59_RuntimeMethod_var);
		__this->set__cachedIntrinsics_7(L_17);
	}

IL_0037:
	{
		// return _cachedIntrinsics.Value;
		Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B * L_18 = (Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B *)__this->get_address_of__cachedIntrinsics_7();
		CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  L_19;
		L_19 = Nullable_1_get_Value_mD04F37C1139BFD4B9970E9F257817AF786584725((Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B *)(Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B *)L_18, /*hidden argument*/Nullable_1_get_Value_mD04F37C1139BFD4B9970E9F257817AF786584725_RuntimeMethod_var);
		return (CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A )L_19;
	}
}
// System.Single[] Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>::_UnityMatrixToNarArray(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* _NativeAwarenessBufferBase_1__UnityMatrixToNarArray_m27827949A94DA7D5592C3A0F9990FED7380842FD_gshared (_NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344 * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NARConversions_t759A8F4C7273684E6989896D285406468568FE21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _Convert.Matrix4x4ToInternalArray(NARConversions.FromUnityToNAR(matrix));
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0 = ___matrix0;
		IL2CPP_RUNTIME_CLASS_INIT(NARConversions_t759A8F4C7273684E6989896D285406468568FE21_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_1;
		L_1 = NARConversions_FromUnityToNAR_m851B2B1657AA79EA68AEF4795192E3EB463241E6((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_0, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2;
		L_2 = _Convert_Matrix4x4ToInternalArray_mE5180214C603A6388B0FAB1873E5F972B3C767D7((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_1, /*hidden argument*/NULL);
		return (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_2;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _NativeAwarenessBufferBase_1_Dispose_m1E4A1C0E964953003547318B7E588F5978FF871D_gshared (_NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_nativeHandle != IntPtr.Zero)
		intptr_t L_0 = (intptr_t)__this->get__nativeHandle_4();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		// _OnRelease();
		NullCheck((_NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344 *)__this);
		VirtActionInvoker0::Invoke(18 /* System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>::_OnRelease() */, (_NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344 *)__this);
		// GC.SuppressFinalize(this);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555((RuntimeObject *)__this, /*hidden argument*/NULL);
		// GC.RemoveMemoryPressure(_consumedUnmanagedMemory);
		int64_t L_2 = (int64_t)__this->get__consumedUnmanagedMemory_5();
		GC_RemoveMemoryPressure_mC086343A8797ADC5F9686B3CB0D8478456D2A632((int64_t)L_2, /*hidden argument*/NULL);
		// _nativeHandle = IntPtr.Zero;
		__this->set__nativeHandle_4((intptr_t)(0));
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Int64 Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.Single>::_CalculateConsumedMemory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _NativeAwarenessBufferBase_1__CalculateConsumedMemory_m3CCD8F3AA8BFF50C71FBAC76B13910786C3EB0D7_gshared (_NativeAwarenessBufferBase_1_t309BC2825BAFFAAA82A6DABDFB12271148246344 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Width * Height * Marshal.SizeOf(typeof(T));
		NullCheck((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this);
		uint32_t L_0;
		L_0 = _AwarenessBufferBase_get_Width_mA8E870CE200ECBF18C4FEDFAF0F052302BF42E63_inline((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this, /*hidden argument*/NULL);
		NullCheck((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this);
		uint32_t L_1;
		L_1 = _AwarenessBufferBase_get_Height_mDAE1E876EE5B79EA91BAE047CCA75EBBD2BA17BC_inline((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 8)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Marshal_SizeOf_m5482D50095CD4ECFFE66778DDAB9173AD834E85A((Type_t *)L_3, /*hidden argument*/NULL);
		return (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)))))), (int64_t)((int64_t)((int64_t)L_4))));
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
// System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>::.ctor(System.IntPtr,System.Single,System.UInt32,System.UInt32,System.Boolean,Niantic.ARDK.AR.Camera.CameraIntrinsics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _NativeAwarenessBufferBase_1__ctor_mA318B3270DBD3D1A63427FB15E0B2F5CBA5AFDC0_gshared (_NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7 * __this, intptr_t ___handle0, float ___worldScale1, uint32_t ___width2, uint32_t ___height3, bool ___isKeyframe4, CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  ___intrinsics5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(width, height, isKeyframe, intrinsics)
		uint32_t L_0 = ___width2;
		uint32_t L_1 = ___height3;
		bool L_2 = ___isKeyframe4;
		CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  L_3 = ___intrinsics5;
		NullCheck((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this);
		_AwarenessBufferBase__ctor_mCBA110605321C6937BBFB5C821B1EE6152C86519((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this, (uint32_t)L_0, (uint32_t)L_1, (bool)L_2, (CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A )L_3, /*hidden argument*/NULL);
		// _worldScale = worldScale;
		float L_4 = ___worldScale1;
		__this->set__worldScale_3(L_4);
		// _nativeHandle = handle;
		intptr_t L_5 = ___handle0;
		__this->set__nativeHandle_4((intptr_t)L_5);
		// _consumedUnmanagedMemory = _CalculateConsumedMemory();
		NullCheck((_NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7 *)__this);
		int64_t L_6;
		L_6 = ((  int64_t (*) (_NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((_NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		__this->set__consumedUnmanagedMemory_5(L_6);
		// GC.AddMemoryPressure(_consumedUnmanagedMemory);
		int64_t L_7 = (int64_t)__this->get__consumedUnmanagedMemory_5();
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_AddMemoryPressure_m85340229E43D12052C25F55B3E239BFD19F18C42((int64_t)L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _NativeAwarenessBufferBase_1_Finalize_mC43AEC91522F6145ED1E25CC465AB23E3D2DEAAD_gshared (_NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// Dispose();
		NullCheck((_NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7 *)__this);
		((  void (*) (_NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((_NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		IL2CPP_LEAVE(0xF, FINALLY_0008);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0008;
	}

FINALLY_0008:
	{ // begin finally (depth: 1)
		// }
		NullCheck((RuntimeObject *)__this);
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(8)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(8)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF, IL_000f)
	}

IL_000f:
	{
		// }
		return;
	}
}
// Unity.Collections.NativeArray`1<T> Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  _NativeAwarenessBufferBase_1_get_Data_m6880F40D3C78C97A1A5B7DEC6EB712AE9AD558A1_gshared (_NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!_data.IsCreated)
		NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A * L_0 = (NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A *)__this->get_address_of__data_8();
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m3B37A54D543C525751B889F68FB779C09E0B7FD3((NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A *)(NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if (L_1)
		{
			goto IL_0036;
		}
	}
	{
		// UInt32 size = Width * Height;
		NullCheck((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this);
		uint32_t L_2;
		L_2 = _AwarenessBufferBase_get_Width_mA8E870CE200ECBF18C4FEDFAF0F052302BF42E63_inline((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this, /*hidden argument*/NULL);
		NullCheck((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this);
		uint32_t L_3;
		L_3 = _AwarenessBufferBase_get_Height_mDAE1E876EE5B79EA91BAE047CCA75EBBD2BA17BC_inline((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this, /*hidden argument*/NULL);
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3));
		// _data = NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<T>
		//   (_GetDataAddress().ToPointer(), (int)size, Allocator.None);
		NullCheck((_NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7 *)__this);
		intptr_t L_4;
		L_4 = VirtFuncInvoker0< intptr_t >::Invoke(17 /* System.IntPtr Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>::_GetDataAddress() */, (_NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7 *)__this);
		V_1 = (intptr_t)L_4;
		void* L_5;
		L_5 = IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline((intptr_t*)(intptr_t*)(&V_1), /*hidden argument*/NULL);
		uint32_t L_6 = V_0;
		NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  L_7;
		L_7 = ((  NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  (*) (void*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((void*)(void*)L_5, (int32_t)L_6, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set__data_8(L_7);
	}

IL_0036:
	{
		// return _data;
		NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  L_8 = (NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A )__this->get__data_8();
		return (NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A )L_8;
	}
}
// UnityEngine.Matrix4x4 Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>::get_ViewMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  _NativeAwarenessBufferBase_1_get_ViewMatrix_m1AC869A368D0BFD821C14C0FBC9EFA89EFD32C60_gshared (_NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NARConversions_t759A8F4C7273684E6989896D285406468568FE21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m27466FD512E235FE817B24F8E6BB5F14A5E4FB2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m3B5B322F85CD96740371B7C75D9650148860D9A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m1B18301A178CB08EBBDF6BD338E5D43C076DD809_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (_cacheViewMatrix == null)
		Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E * L_0 = (Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E *)__this->get_address_of__cacheViewMatrix_6();
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m1B18301A178CB08EBBDF6BD338E5D43C076DD809_inline((Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E *)(Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E *)L_0, /*hidden argument*/Nullable_1_get_HasValue_m1B18301A178CB08EBBDF6BD338E5D43C076DD809_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		// var nativeMatrix = new float[16];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_2;
		// _GetViewMatrix(nativeMatrix);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = V_0;
		NullCheck((_NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7 *)__this);
		VirtActionInvoker1< SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* >::Invoke(15 /* System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>::_GetViewMatrix(System.Single[]) */, (_NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7 *)__this, (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_3);
		// var viewMatrix = NARConversions.FromNARToUnity
		//   (_Convert.InternalToMatrix4x4(nativeMatrix));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_5;
		L_5 = _Convert_InternalToMatrix4x4_mB2F9E55FB580C0FC6730BE0DE220F8F544D7DEDE((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NARConversions_t759A8F4C7273684E6989896D285406468568FE21_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_6;
		L_6 = NARConversions_FromNARToUnity_m350AE4C12AA16EB6EF52A27E54BDDE9A307D7121((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_5, /*hidden argument*/NULL);
		V_1 = (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_6;
		// _Convert.ApplyScale(ref viewMatrix, _worldScale);
		float L_7 = (float)__this->get__worldScale_3();
		_Convert_ApplyScale_m18A179225423FF088CA9D03D8CC8C4092686B3ED((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_1), (float)L_7, /*hidden argument*/NULL);
		// _cacheViewMatrix = viewMatrix;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_8 = V_1;
		Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Nullable_1__ctor_m3B5B322F85CD96740371B7C75D9650148860D9A4((&L_9), (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_8, /*hidden argument*/Nullable_1__ctor_m3B5B322F85CD96740371B7C75D9650148860D9A4_RuntimeMethod_var);
		__this->set__cacheViewMatrix_6(L_9);
	}

IL_0041:
	{
		// return _cacheViewMatrix ?? Matrix4x4.identity;
		Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  L_10 = (Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E )__this->get__cacheViewMatrix_6();
		V_2 = (Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E )L_10;
		bool L_11;
		L_11 = Nullable_1_get_HasValue_m1B18301A178CB08EBBDF6BD338E5D43C076DD809_inline((Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E *)(Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_m1B18301A178CB08EBBDF6BD338E5D43C076DD809_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0057;
		}
	}
	{
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_12;
		L_12 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596(/*hidden argument*/NULL);
		return (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_12;
	}

IL_0057:
	{
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_13;
		L_13 = Nullable_1_GetValueOrDefault_m27466FD512E235FE817B24F8E6BB5F14A5E4FB2D_inline((Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E *)(Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E *)(&V_2), /*hidden argument*/Nullable_1_GetValueOrDefault_m27466FD512E235FE817B24F8E6BB5F14A5E4FB2D_RuntimeMethod_var);
		return (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_13;
	}
}
// Niantic.ARDK.AR.Camera.CameraIntrinsics Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>::get_Intrinsics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  _NativeAwarenessBufferBase_1_get_Intrinsics_m77FD1C3F25BC1FC2A39BC4CA089E5BBF5F55FFA7_gshared (_NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m908F19A4CECB37AD0DED0172657C92276B5E4A59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mE04DEC4948A6ECCC16F70EDA9B8DE8DBC4C05B17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mD04F37C1139BFD4B9970E9F257817AF786584725_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	{
		// if (!_cachedIntrinsics.HasValue)
		Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B * L_0 = (Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B *)__this->get_address_of__cachedIntrinsics_7();
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mE04DEC4948A6ECCC16F70EDA9B8DE8DBC4C05B17_inline((Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B *)(Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B *)L_0, /*hidden argument*/Nullable_1_get_HasValue_mE04DEC4948A6ECCC16F70EDA9B8DE8DBC4C05B17_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		// var nativeVector = new float[4];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_2;
		// _GetIntrinsics(nativeVector);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = V_0;
		NullCheck((_NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7 *)__this);
		VirtActionInvoker1< SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* >::Invoke(16 /* System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>::_GetIntrinsics(System.Single[]) */, (_NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7 *)__this, (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_3);
		// _cachedIntrinsics =
		//   new CameraIntrinsics
		//   (
		//     nativeVector[0],
		//     nativeVector[1],
		//     nativeVector[2],
		//     nativeVector[3]
		//   );
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		float L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = 1;
		float L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 2;
		float L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = 3;
		float L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  L_16;
		memset((&L_16), 0, sizeof(L_16));
		CameraIntrinsics__ctor_m34EAC31F4DEE6315F89F8B35FF4AC99786E882B7((&L_16), (float)L_6, (float)L_9, (float)L_12, (float)L_15, /*hidden argument*/NULL);
		Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Nullable_1__ctor_m908F19A4CECB37AD0DED0172657C92276B5E4A59((&L_17), (CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A )L_16, /*hidden argument*/Nullable_1__ctor_m908F19A4CECB37AD0DED0172657C92276B5E4A59_RuntimeMethod_var);
		__this->set__cachedIntrinsics_7(L_17);
	}

IL_0037:
	{
		// return _cachedIntrinsics.Value;
		Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B * L_18 = (Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B *)__this->get_address_of__cachedIntrinsics_7();
		CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  L_19;
		L_19 = Nullable_1_get_Value_mD04F37C1139BFD4B9970E9F257817AF786584725((Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B *)(Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B *)L_18, /*hidden argument*/Nullable_1_get_Value_mD04F37C1139BFD4B9970E9F257817AF786584725_RuntimeMethod_var);
		return (CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A )L_19;
	}
}
// System.Single[] Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>::_UnityMatrixToNarArray(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* _NativeAwarenessBufferBase_1__UnityMatrixToNarArray_mF7C829267B4BE5DC8604F38FE00B76B3F9CA173D_gshared (_NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7 * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NARConversions_t759A8F4C7273684E6989896D285406468568FE21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _Convert.Matrix4x4ToInternalArray(NARConversions.FromUnityToNAR(matrix));
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0 = ___matrix0;
		IL2CPP_RUNTIME_CLASS_INIT(NARConversions_t759A8F4C7273684E6989896D285406468568FE21_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_1;
		L_1 = NARConversions_FromUnityToNAR_m851B2B1657AA79EA68AEF4795192E3EB463241E6((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_0, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2;
		L_2 = _Convert_Matrix4x4ToInternalArray_mE5180214C603A6388B0FAB1873E5F972B3C767D7((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_1, /*hidden argument*/NULL);
		return (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_2;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _NativeAwarenessBufferBase_1_Dispose_m46E2EBA3D66F22734341A2F7407FE9FD5130DD26_gshared (_NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_nativeHandle != IntPtr.Zero)
		intptr_t L_0 = (intptr_t)__this->get__nativeHandle_4();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		// _OnRelease();
		NullCheck((_NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7 *)__this);
		VirtActionInvoker0::Invoke(18 /* System.Void Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>::_OnRelease() */, (_NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7 *)__this);
		// GC.SuppressFinalize(this);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555((RuntimeObject *)__this, /*hidden argument*/NULL);
		// GC.RemoveMemoryPressure(_consumedUnmanagedMemory);
		int64_t L_2 = (int64_t)__this->get__consumedUnmanagedMemory_5();
		GC_RemoveMemoryPressure_mC086343A8797ADC5F9686B3CB0D8478456D2A632((int64_t)L_2, /*hidden argument*/NULL);
		// _nativeHandle = IntPtr.Zero;
		__this->set__nativeHandle_4((intptr_t)(0));
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Int64 Niantic.ARDK.AR.Awareness._NativeAwarenessBufferBase`1<System.UInt32>::_CalculateConsumedMemory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _NativeAwarenessBufferBase_1__CalculateConsumedMemory_m11BCD20649C30F7FB7D7446D5369555363A8114C_gshared (_NativeAwarenessBufferBase_1_t9EBEE4955208E2E4FE638CC2B0EC3D46CAF20EC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Width * Height * Marshal.SizeOf(typeof(T));
		NullCheck((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this);
		uint32_t L_0;
		L_0 = _AwarenessBufferBase_get_Width_mA8E870CE200ECBF18C4FEDFAF0F052302BF42E63_inline((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this, /*hidden argument*/NULL);
		NullCheck((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this);
		uint32_t L_1;
		L_1 = _AwarenessBufferBase_get_Height_mDAE1E876EE5B79EA91BAE047CCA75EBBD2BA17BC_inline((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 8)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Marshal_SizeOf_m5482D50095CD4ECFFE66778DDAB9173AD834E85A((Type_t *)L_3, /*hidden argument*/NULL);
		return (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)))))), (int64_t)((int64_t)((int64_t)L_4))));
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
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2__ctor_mF13F88387097AA792A0E692126D738B63637261D_gshared (_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C * __this, RuntimeObject* ___dictionaryToWrap0, const RuntimeMethod* method)
{
	{
		// public _ReadOnlyDictionary(IDictionary<TKey, TValue> dictionaryToWrap)
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// if (dictionaryToWrap == null)
		RuntimeObject* L_0 = ___dictionaryToWrap0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException(nameof(dictionaryToWrap));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7BB1C7F529F538D622487DC7F7AA1CA62A05832)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_ReadOnlyDictionary_2__ctor_mF13F88387097AA792A0E692126D738B63637261D_RuntimeMethod_var)));
	}

IL_0014:
	{
		// _source = dictionaryToWrap;
		RuntimeObject* L_2 = ___dictionaryToWrap0;
		__this->set__source_0(L_2);
		// }
		return;
	}
}
// System.Int32 Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _ReadOnlyDictionary_2_get_Count_m231E4B1B31F7895A0452AE34F5E89F5F0B50A13C_gshared (_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C * __this, const RuntimeMethod* method)
{
	{
		// get { return _source.Count; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>::get_Count() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_0);
		return (int32_t)L_1;
	}
}
// System.Collections.Generic.ICollection`1<TKey> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_get_Keys_m90B4538B37A543194341229755450681E6003FAC_gshared (_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C * __this, const RuntimeMethod* method)
{
	{
		// get { return _source.Keys; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.Guid,System.Object>::get_Keys() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Collections.Generic.ICollection`1<TValue> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_get_Values_m9BD6819D1E533AFAEECA0450857A27CED935E4D7_gshared (_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C * __this, const RuntimeMethod* method)
{
	{
		// get { return _source.Values; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.Guid,System.Object>::get_Values() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mFE5019BB22E47C2EBC260AB8490A9BA4889907BE_gshared (_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C * __this, const RuntimeMethod* method)
{
	{
		// get { return true; }
		return (bool)1;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.ICollection.get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_ICollection_get_IsSynchronized_mDEC1A6C8B65CF9A1114A06885826115CDDE231CC_gshared (_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C * __this, const RuntimeMethod* method)
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// System.Object Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _ReadOnlyDictionary_2_System_Collections_ICollection_get_SyncRoot_m867D7900734EABC0B37CE96D3B6CC09AF3D165AD_gshared (_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (_syncRoot != null)
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__syncRoot_1();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return _syncRoot;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get__syncRoot_1();
		return (RuntimeObject *)L_1;
	}

IL_000f:
	{
		// var collection = _source as ICollection;
		RuntimeObject* L_2 = (RuntimeObject*)__this->get__source_0();
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var));
		// if (collection != null)
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// _syncRoot = collection.SyncRoot;
		RuntimeObject* L_4 = V_0;
		NullCheck((RuntimeObject*)L_4);
		RuntimeObject * L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		__this->set__syncRoot_1(L_5);
		goto IL_003e;
	}

IL_002c:
	{
		// Interlocked.CompareExchange(ref _syncRoot, new object(), null);
		RuntimeObject ** L_6 = (RuntimeObject **)__this->get_address_of__syncRoot_1();
		RuntimeObject * L_7 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_7, /*hidden argument*/NULL);
		RuntimeObject * L_8;
		L_8 = Interlocked_CompareExchange_mFAD09589A5DAFDBABB05C62A2D35CD5B92BC6961((RuntimeObject **)(RuntimeObject **)L_6, (RuntimeObject *)L_7, (RuntimeObject *)NULL, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// return _syncRoot;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get__syncRoot_1();
		return (RuntimeObject *)L_9;
	}
}
// TValue Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _ReadOnlyDictionary_2_get_Item_m41958AE3E50A7DE283E11906A38D74D1DD323DFE_gshared (_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C * __this, Guid_t  ___key0, const RuntimeMethod* method)
{
	{
		// get { return _source[key]; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		Guid_t  L_1 = ___key0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, Guid_t  >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Guid,System.Object>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0, (Guid_t )L_1);
		return (RuntimeObject *)L_2;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_set_Item_m901513B562F7F57B7FC156B9A61428108BE7A3DB_gshared (_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C * __this, Guid_t  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		// set { ThrowNotSupportedException(); }
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// set { ThrowNotSupportedException(); }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Add_m0E91CEF85CA7EACAA317CE5798CD6BF31C0D5596_gshared (_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C * __this, Guid_t  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_ContainsKey_m0ED13E99C330044DA92202A6AB42067147673F6C_gshared (_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C * __this, Guid_t  ___key0, const RuntimeMethod* method)
{
	{
		// return _source.ContainsKey(key);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		Guid_t  L_1 = ___key0;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Guid_t  >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Guid,System.Object>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0, (Guid_t )L_1);
		return (bool)L_2;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Remove_m5B1581BF8BE7C5FBBE968A27F4C2C1E65846893A_gshared (_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C * __this, Guid_t  ___key0, const RuntimeMethod* method)
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_TryGetValue_m9C57CD3ED66814B379436DF9BDC45428DEF7AEAD_gshared (_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C * __this, Guid_t  ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method)
{
	{
		// return _source.TryGetValue(key, out value);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		Guid_t  L_1 = ___key0;
		RuntimeObject ** L_2 = ___value1;
		NullCheck((RuntimeObject*)L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, Guid_t , RuntimeObject ** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Guid,System.Object>::TryGetValue(!0,!1&) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0, (Guid_t )L_1, (RuntimeObject **)(RuntimeObject **)L_2);
		return (bool)L_3;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m863D28557948175FC6DB338F47FAAF278DEF1CA5_gshared (_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C * __this, KeyValuePair_2_t74D5C76BCA7D14D18A99E0FA9EC3584DBFB65F7F  ___item0, const RuntimeMethod* method)
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Clear_m430BF038574E916C66AE2C871FB5861A4134FA81_gshared (_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C * __this, const RuntimeMethod* method)
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m463E8310D1EDC4E25F340360B972C078F72CC611_gshared (_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C * __this, KeyValuePair_2_t74D5C76BCA7D14D18A99E0FA9EC3584DBFB65F7F  ___item0, const RuntimeMethod* method)
{
	{
		// ICollection<KeyValuePair<TKey, TValue>> collection = _source;
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		// return collection.Contains(item);
		KeyValuePair_2_t74D5C76BCA7D14D18A99E0FA9EC3584DBFB65F7F  L_1 = ___item0;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, KeyValuePair_2_t74D5C76BCA7D14D18A99E0FA9EC3584DBFB65F7F  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>::Contains(!0) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_0, (KeyValuePair_2_t74D5C76BCA7D14D18A99E0FA9EC3584DBFB65F7F )L_1);
		return (bool)L_2;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mBC2953B86B2399C934AC5AA30236A64723CBF866_gshared (_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C * __this, KeyValuePair_2U5BU5D_t0BF7C6185BEFBB97D75B41C977593F6FA8E45F23* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	{
		// ICollection<KeyValuePair<TKey, TValue>> collection = _source;
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		// collection.CopyTo(array, arrayIndex);
		KeyValuePair_2U5BU5D_t0BF7C6185BEFBB97D75B41C977593F6FA8E45F23* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t0BF7C6185BEFBB97D75B41C977593F6FA8E45F23*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>::CopyTo(!0[],System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_0, (KeyValuePair_2U5BU5D_t0BF7C6185BEFBB97D75B41C977593F6FA8E45F23*)L_1, (int32_t)L_2);
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m747D997D4759F539654025E2EADC3D12C5596193_gshared (_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C * __this, KeyValuePair_2_t74D5C76BCA7D14D18A99E0FA9EC3584DBFB65F7F  ___item0, const RuntimeMethod* method)
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// return false;
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m7CCD059EC2B098A7140330FB85E262610B75542D_gshared (_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C * __this, const RuntimeMethod* method)
{
	{
		// IEnumerable<KeyValuePair<TKey, TValue>> enumerator = _source;
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		// return enumerator.GetEnumerator();
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Collections.IEnumerator Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_IEnumerable_GetEnumerator_mA697BB3596A90858A824EA35D9979DC807C2F73A_gshared (_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C * __this, const RuntimeMethod* method)
{
	{
		// return _source.GetEnumerator();
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_ICollection_CopyTo_m1F79B48BB81CF8E9597DA7704FD267D29791C591_gshared (_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ICollection collection = new List<KeyValuePair<TKey, TValue>>(_source);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		List_1_tC130ABE0D3239F9A7589980E809A2AA709683896 * L_1 = (List_1_tC130ABE0D3239F9A7589980E809A2AA709683896 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5));
		((  void (*) (List_1_tC130ABE0D3239F9A7589980E809A2AA709683896 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(L_1, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		// collection.CopyTo(array, index);
		RuntimeArray * L_2 = ___array0;
		int32_t L_3 = ___index1;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker2< RuntimeArray *, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (RuntimeArray *)L_2, (int32_t)L_3);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<TKey> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_mDABBE7D0FA9960AE9A546CF73978058DC030D772_gshared (_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C * __this, const RuntimeMethod* method)
{
	{
		// get { return Keys; }
		NullCheck((_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C *)__this);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		return (RuntimeObject*)L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m5CAB5852821BA177F595A89B7B0083CAAA7EEF04_gshared (_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C * __this, const RuntimeMethod* method)
{
	{
		// get { return Values; }
		NullCheck((_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C *)__this);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((_ReadOnlyDictionary_2_tF87CC150C6361F9EF7CFCFCF24920E4121809E2C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_0;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Guid,System.Object>::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_ThrowNotSupportedException_mCCBF3DB0CC7FFA424BAC7670A82C99C5153C7F95_gshared (const RuntimeMethod* method)
{
	{
		// throw new NotSupportedException("This Dictionary is read-only");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDE44EB699A6FE620517DE44E517245D1D8921D9D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_ReadOnlyDictionary_2_ThrowNotSupportedException_mCCBF3DB0CC7FFA424BAC7670A82C99C5153C7F95_RuntimeMethod_var)));
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
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2__ctor_m705F8396578BF38FE95B57F83330FD1699F79D42_gshared (_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 * __this, RuntimeObject* ___dictionaryToWrap0, const RuntimeMethod* method)
{
	{
		// public _ReadOnlyDictionary(IDictionary<TKey, TValue> dictionaryToWrap)
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// if (dictionaryToWrap == null)
		RuntimeObject* L_0 = ___dictionaryToWrap0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException(nameof(dictionaryToWrap));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7BB1C7F529F538D622487DC7F7AA1CA62A05832)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_ReadOnlyDictionary_2__ctor_m705F8396578BF38FE95B57F83330FD1699F79D42_RuntimeMethod_var)));
	}

IL_0014:
	{
		// _source = dictionaryToWrap;
		RuntimeObject* L_2 = ___dictionaryToWrap0;
		__this->set__source_0(L_2);
		// }
		return;
	}
}
// System.Int32 Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _ReadOnlyDictionary_2_get_Count_mA1058704FD6D4A49DE1E551272E84006FBCBB618_gshared (_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 * __this, const RuntimeMethod* method)
{
	{
		// get { return _source.Count; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>>::get_Count() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_0);
		return (int32_t)L_1;
	}
}
// System.Collections.Generic.ICollection`1<TKey> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_get_Keys_m31C9562E28C89660A11E47446FD5004C262B525C_gshared (_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 * __this, const RuntimeMethod* method)
{
	{
		// get { return _source.Keys; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.Object,System.Int32Enum>::get_Keys() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Collections.Generic.ICollection`1<TValue> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_get_Values_m222DA4BD848BBB3B4F611D56CB8637151997D14F_gshared (_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 * __this, const RuntimeMethod* method)
{
	{
		// get { return _source.Values; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.Object,System.Int32Enum>::get_Values() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m299FD7ABEC9A3584F7371C6AD556E59B55524302_gshared (_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 * __this, const RuntimeMethod* method)
{
	{
		// get { return true; }
		return (bool)1;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.ICollection.get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_ICollection_get_IsSynchronized_mBC5603CB6E09BB60A4DF44594E239DC7D83BF50A_gshared (_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 * __this, const RuntimeMethod* method)
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// System.Object Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _ReadOnlyDictionary_2_System_Collections_ICollection_get_SyncRoot_mDD20DF42FA9DDCD8855AF0164F74559162273638_gshared (_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (_syncRoot != null)
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__syncRoot_1();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return _syncRoot;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get__syncRoot_1();
		return (RuntimeObject *)L_1;
	}

IL_000f:
	{
		// var collection = _source as ICollection;
		RuntimeObject* L_2 = (RuntimeObject*)__this->get__source_0();
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var));
		// if (collection != null)
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// _syncRoot = collection.SyncRoot;
		RuntimeObject* L_4 = V_0;
		NullCheck((RuntimeObject*)L_4);
		RuntimeObject * L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		__this->set__syncRoot_1(L_5);
		goto IL_003e;
	}

IL_002c:
	{
		// Interlocked.CompareExchange(ref _syncRoot, new object(), null);
		RuntimeObject ** L_6 = (RuntimeObject **)__this->get_address_of__syncRoot_1();
		RuntimeObject * L_7 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_7, /*hidden argument*/NULL);
		RuntimeObject * L_8;
		L_8 = Interlocked_CompareExchange_mFAD09589A5DAFDBABB05C62A2D35CD5B92BC6961((RuntimeObject **)(RuntimeObject **)L_6, (RuntimeObject *)L_7, (RuntimeObject *)NULL, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// return _syncRoot;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get__syncRoot_1();
		return (RuntimeObject *)L_9;
	}
}
// TValue Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _ReadOnlyDictionary_2_get_Item_mDED7597007AA7C3951DA46A7769D749A7C9864AF_gshared (_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	{
		// get { return _source[key]; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		RuntimeObject * L_1 = ___key0;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Object,System.Int32Enum>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		return (int32_t)L_2;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_set_Item_m6F6AEBEA5AD9A5FD2F8124ECB75989B95120B865_gshared (_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		// set { ThrowNotSupportedException(); }
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// set { ThrowNotSupportedException(); }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.Generic.IDictionary<TKey,TValue>.Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Add_m2EB252B248874E2D9FB79DC1B904E5EABAC8A409_gshared (_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_ContainsKey_m50B3E846D85EE2EDE942BB0535DE4F61570FCDAD_gshared (_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	{
		// return _source.ContainsKey(key);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		RuntimeObject * L_1 = ___key0;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int32Enum>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		return (bool)L_2;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.Generic.IDictionary<TKey,TValue>.Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Remove_m0A22AB876577640D8AA2D941E404BB1DF3A52BE0_gshared (_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_TryGetValue_mE83A53822DE2CF7554F3BD40AC28A39B13C21ED0_gshared (_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 * __this, RuntimeObject * ___key0, int32_t* ___value1, const RuntimeMethod* method)
{
	{
		// return _source.TryGetValue(key, out value);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		RuntimeObject * L_1 = ___key0;
		int32_t* L_2 = ___value1;
		NullCheck((RuntimeObject*)L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, RuntimeObject *, int32_t* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int32Enum>::TryGetValue(!0,!1&) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0, (RuntimeObject *)L_1, (int32_t*)(int32_t*)L_2);
		return (bool)L_3;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2B9B51F7A415B52C17ED12E13E5EB3F38DE630F9_gshared (_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 * __this, KeyValuePair_2_tD48B4CC7D124965F124FA06C6FE9827A1F6BE297  ___item0, const RuntimeMethod* method)
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Clear_m79781D7BF104D8D1EF83555D60BCA35AD1EBB075_gshared (_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 * __this, const RuntimeMethod* method)
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mE3E6293897FF4B61F6CAB1AE0325AA756FFA2D8A_gshared (_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 * __this, KeyValuePair_2_tD48B4CC7D124965F124FA06C6FE9827A1F6BE297  ___item0, const RuntimeMethod* method)
{
	{
		// ICollection<KeyValuePair<TKey, TValue>> collection = _source;
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		// return collection.Contains(item);
		KeyValuePair_2_tD48B4CC7D124965F124FA06C6FE9827A1F6BE297  L_1 = ___item0;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, KeyValuePair_2_tD48B4CC7D124965F124FA06C6FE9827A1F6BE297  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>>::Contains(!0) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_0, (KeyValuePair_2_tD48B4CC7D124965F124FA06C6FE9827A1F6BE297 )L_1);
		return (bool)L_2;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mAAC5E2E6DDE7B9D4130C8728AD99F50565F56A8F_gshared (_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 * __this, KeyValuePair_2U5BU5D_tD14B63166B0AC62215EC442593AE6CA857F5AEE4* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	{
		// ICollection<KeyValuePair<TKey, TValue>> collection = _source;
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		// collection.CopyTo(array, arrayIndex);
		KeyValuePair_2U5BU5D_tD14B63166B0AC62215EC442593AE6CA857F5AEE4* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_tD14B63166B0AC62215EC442593AE6CA857F5AEE4*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>>::CopyTo(!0[],System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_0, (KeyValuePair_2U5BU5D_tD14B63166B0AC62215EC442593AE6CA857F5AEE4*)L_1, (int32_t)L_2);
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m66665D0257A941D8355B7DAE752283EC5FFC7141_gshared (_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 * __this, KeyValuePair_2_tD48B4CC7D124965F124FA06C6FE9827A1F6BE297  ___item0, const RuntimeMethod* method)
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// return false;
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m5995DB84837D8491257FADB65CB8209BCD66658E_gshared (_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 * __this, const RuntimeMethod* method)
{
	{
		// IEnumerable<KeyValuePair<TKey, TValue>> enumerator = _source;
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		// return enumerator.GetEnumerator();
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Collections.IEnumerator Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_IEnumerable_GetEnumerator_m9DE9BD0134C406B187176A7EE16C5333DD0A989D_gshared (_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 * __this, const RuntimeMethod* method)
{
	{
		// return _source.GetEnumerator();
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_ICollection_CopyTo_m3F44AA686FB849FF0FF27BBC12A920BFA73F00D4_gshared (_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ICollection collection = new List<KeyValuePair<TKey, TValue>>(_source);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		List_1_tEF17C82A723180F161E73AA55B16D16B7B40EDB5 * L_1 = (List_1_tEF17C82A723180F161E73AA55B16D16B7B40EDB5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5));
		((  void (*) (List_1_tEF17C82A723180F161E73AA55B16D16B7B40EDB5 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(L_1, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		// collection.CopyTo(array, index);
		RuntimeArray * L_2 = ___array0;
		int32_t L_3 = ___index1;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker2< RuntimeArray *, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (RuntimeArray *)L_2, (int32_t)L_3);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<TKey> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m446FE51BCDBA5A6266D2A7240EB4D8ABAB686E05_gshared (_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 * __this, const RuntimeMethod* method)
{
	{
		// get { return Keys; }
		NullCheck((_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 *)__this);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		return (RuntimeObject*)L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mF800CB18823D3D32A888D7D9D832A014F7510915_gshared (_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 * __this, const RuntimeMethod* method)
{
	{
		// get { return Values; }
		NullCheck((_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 *)__this);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((_ReadOnlyDictionary_2_t30B18B19E34028856FBBBC6FC70A7130CB63A165 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_0;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Int32Enum>::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_ThrowNotSupportedException_m23E575026983EEDEDFFF0FE9D20B043F59EBF891_gshared (const RuntimeMethod* method)
{
	{
		// throw new NotSupportedException("This Dictionary is read-only");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDE44EB699A6FE620517DE44E517245D1D8921D9D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_ReadOnlyDictionary_2_ThrowNotSupportedException_m23E575026983EEDEDFFF0FE9D20B043F59EBF891_RuntimeMethod_var)));
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
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2__ctor_m891FDCC298156CADC7F5841A9BADEB27F22F709F_gshared (_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF * __this, RuntimeObject* ___dictionaryToWrap0, const RuntimeMethod* method)
{
	{
		// public _ReadOnlyDictionary(IDictionary<TKey, TValue> dictionaryToWrap)
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// if (dictionaryToWrap == null)
		RuntimeObject* L_0 = ___dictionaryToWrap0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException(nameof(dictionaryToWrap));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7BB1C7F529F538D622487DC7F7AA1CA62A05832)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_ReadOnlyDictionary_2__ctor_m891FDCC298156CADC7F5841A9BADEB27F22F709F_RuntimeMethod_var)));
	}

IL_0014:
	{
		// _source = dictionaryToWrap;
		RuntimeObject* L_2 = ___dictionaryToWrap0;
		__this->set__source_0(L_2);
		// }
		return;
	}
}
// System.Int32 Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _ReadOnlyDictionary_2_get_Count_m71DD276FC3721FC56F79DF354619D9E2F3BE0CB4_gshared (_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF * __this, const RuntimeMethod* method)
{
	{
		// get { return _source.Count; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Matrix4x4>>::get_Count() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_0);
		return (int32_t)L_1;
	}
}
// System.Collections.Generic.ICollection`1<TKey> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_get_Keys_mC316C373902AEE6E55B7B5BCB3F723ADED941714_gshared (_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF * __this, const RuntimeMethod* method)
{
	{
		// get { return _source.Keys; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.Object,UnityEngine.Matrix4x4>::get_Keys() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Collections.Generic.ICollection`1<TValue> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_get_Values_mF9CDB4AD905F9AE0BDC232CF7E47196B9B4B1523_gshared (_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF * __this, const RuntimeMethod* method)
{
	{
		// get { return _source.Values; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.Object,UnityEngine.Matrix4x4>::get_Values() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m6D7E05AB573D6B7A224AD31CEDCC398695D04FE2_gshared (_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF * __this, const RuntimeMethod* method)
{
	{
		// get { return true; }
		return (bool)1;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.ICollection.get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_ICollection_get_IsSynchronized_m8FE9A161506836B46DDDC0479375461F38C38B62_gshared (_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF * __this, const RuntimeMethod* method)
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// System.Object Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _ReadOnlyDictionary_2_System_Collections_ICollection_get_SyncRoot_mCE845D79DB596354B818B87ADC2AE534C0B22035_gshared (_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (_syncRoot != null)
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__syncRoot_1();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return _syncRoot;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get__syncRoot_1();
		return (RuntimeObject *)L_1;
	}

IL_000f:
	{
		// var collection = _source as ICollection;
		RuntimeObject* L_2 = (RuntimeObject*)__this->get__source_0();
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var));
		// if (collection != null)
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// _syncRoot = collection.SyncRoot;
		RuntimeObject* L_4 = V_0;
		NullCheck((RuntimeObject*)L_4);
		RuntimeObject * L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		__this->set__syncRoot_1(L_5);
		goto IL_003e;
	}

IL_002c:
	{
		// Interlocked.CompareExchange(ref _syncRoot, new object(), null);
		RuntimeObject ** L_6 = (RuntimeObject **)__this->get_address_of__syncRoot_1();
		RuntimeObject * L_7 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_7, /*hidden argument*/NULL);
		RuntimeObject * L_8;
		L_8 = Interlocked_CompareExchange_mFAD09589A5DAFDBABB05C62A2D35CD5B92BC6961((RuntimeObject **)(RuntimeObject **)L_6, (RuntimeObject *)L_7, (RuntimeObject *)NULL, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// return _syncRoot;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get__syncRoot_1();
		return (RuntimeObject *)L_9;
	}
}
// TValue Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  _ReadOnlyDictionary_2_get_Item_mBFCC3D335A127B621B6DE2CC36CF69662DDF776B_gshared (_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	{
		// get { return _source[key]; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		RuntimeObject * L_1 = ___key0;
		NullCheck((RuntimeObject*)L_0);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_2;
		L_2 = InterfaceFuncInvoker1< Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 , RuntimeObject * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Object,UnityEngine.Matrix4x4>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		return (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_2;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_set_Item_m12E27D5406C78A01EE8C3E2C7CEDFD7737F8F810_gshared (_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF * __this, RuntimeObject * ___key0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value1, const RuntimeMethod* method)
{
	{
		// set { ThrowNotSupportedException(); }
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// set { ThrowNotSupportedException(); }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.Generic.IDictionary<TKey,TValue>.Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Add_m4BC5E9129738E3E08D0DBEC12BEBDB33ED12767D_gshared (_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF * __this, RuntimeObject * ___key0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value1, const RuntimeMethod* method)
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_ContainsKey_m6312070651770159E13F24DEDF0A972273230093_gshared (_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	{
		// return _source.ContainsKey(key);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		RuntimeObject * L_1 = ___key0;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,UnityEngine.Matrix4x4>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		return (bool)L_2;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.Generic.IDictionary<TKey,TValue>.Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Remove_mEF27E895D853BE9C2D4FAAC3CABAE873A8A6FD82_gshared (_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_TryGetValue_mFA6476B2FA1C6EB35CC4800A092DFCB93948DBFB_gshared (_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF * __this, RuntimeObject * ___key0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * ___value1, const RuntimeMethod* method)
{
	{
		// return _source.TryGetValue(key, out value);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		RuntimeObject * L_1 = ___key0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_2 = ___value1;
		NullCheck((RuntimeObject*)L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, RuntimeObject *, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,UnityEngine.Matrix4x4>::TryGetValue(!0,!1&) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0, (RuntimeObject *)L_1, (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_2);
		return (bool)L_3;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m01DC240387628EF1226F236A04A2C67547853E62_gshared (_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF * __this, KeyValuePair_2_t16948AAAFBD1CC65CF6D5A707B831DF5685752CE  ___item0, const RuntimeMethod* method)
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Clear_mB6308E49C56CB461E9B02D4CB7D7A600EB23D13B_gshared (_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF * __this, const RuntimeMethod* method)
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mED5A64FFCC854A68227E3AAABF01123502D20AA0_gshared (_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF * __this, KeyValuePair_2_t16948AAAFBD1CC65CF6D5A707B831DF5685752CE  ___item0, const RuntimeMethod* method)
{
	{
		// ICollection<KeyValuePair<TKey, TValue>> collection = _source;
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		// return collection.Contains(item);
		KeyValuePair_2_t16948AAAFBD1CC65CF6D5A707B831DF5685752CE  L_1 = ___item0;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, KeyValuePair_2_t16948AAAFBD1CC65CF6D5A707B831DF5685752CE  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Matrix4x4>>::Contains(!0) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_0, (KeyValuePair_2_t16948AAAFBD1CC65CF6D5A707B831DF5685752CE )L_1);
		return (bool)L_2;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m7D6A267DAF0A4273A0B7B38A4002ABC1A6D5AF50_gshared (_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF * __this, KeyValuePair_2U5BU5D_t95064707C6138735636A2862E599CBCBA88A2126* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	{
		// ICollection<KeyValuePair<TKey, TValue>> collection = _source;
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		// collection.CopyTo(array, arrayIndex);
		KeyValuePair_2U5BU5D_t95064707C6138735636A2862E599CBCBA88A2126* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t95064707C6138735636A2862E599CBCBA88A2126*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Matrix4x4>>::CopyTo(!0[],System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_0, (KeyValuePair_2U5BU5D_t95064707C6138735636A2862E599CBCBA88A2126*)L_1, (int32_t)L_2);
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m6F35F0C41D077E083B8AAF43E3F8042354C6A764_gshared (_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF * __this, KeyValuePair_2_t16948AAAFBD1CC65CF6D5A707B831DF5685752CE  ___item0, const RuntimeMethod* method)
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// return false;
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mBEED368576AE4D1A527D6F5ED60D0FC1201F9F2A_gshared (_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF * __this, const RuntimeMethod* method)
{
	{
		// IEnumerable<KeyValuePair<TKey, TValue>> enumerator = _source;
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		// return enumerator.GetEnumerator();
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Matrix4x4>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Collections.IEnumerator Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_IEnumerable_GetEnumerator_mEDDAB0366042494F4349FAD2E8BE210254D0FA40_gshared (_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF * __this, const RuntimeMethod* method)
{
	{
		// return _source.GetEnumerator();
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Matrix4x4>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_ICollection_CopyTo_m58D24BC46EB761CF19F24663847A88402885EF91_gshared (_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ICollection collection = new List<KeyValuePair<TKey, TValue>>(_source);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		List_1_tD2A2AD4A175B56DEFD3E026C0C374B9DA1D4828F * L_1 = (List_1_tD2A2AD4A175B56DEFD3E026C0C374B9DA1D4828F *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5));
		((  void (*) (List_1_tD2A2AD4A175B56DEFD3E026C0C374B9DA1D4828F *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(L_1, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		// collection.CopyTo(array, index);
		RuntimeArray * L_2 = ___array0;
		int32_t L_3 = ___index1;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker2< RuntimeArray *, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (RuntimeArray *)L_2, (int32_t)L_3);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<TKey> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_mC22F149844AC1CDE509EDE0A37A792ABA2CE10BD_gshared (_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF * __this, const RuntimeMethod* method)
{
	{
		// get { return Keys; }
		NullCheck((_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF *)__this);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		return (RuntimeObject*)L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m18159253EB1361192C7D841A5CA9B26DCBC0F491_gshared (_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF * __this, const RuntimeMethod* method)
{
	{
		// get { return Values; }
		NullCheck((_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF *)__this);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((_ReadOnlyDictionary_2_tB7CE03B4CB1A300BE852B98D477ED60ABB78B8EF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_0;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,UnityEngine.Matrix4x4>::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_ThrowNotSupportedException_m2CD1BFB36668F9DB50B833405376354825A23DDF_gshared (const RuntimeMethod* method)
{
	{
		// throw new NotSupportedException("This Dictionary is read-only");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDE44EB699A6FE620517DE44E517245D1D8921D9D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_ReadOnlyDictionary_2_ThrowNotSupportedException_m2CD1BFB36668F9DB50B833405376354825A23DDF_RuntimeMethod_var)));
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
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2__ctor_m1A34D64F21BE38692A67B4AC06F27F27F6508D12_gshared (_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 * __this, RuntimeObject* ___dictionaryToWrap0, const RuntimeMethod* method)
{
	{
		// public _ReadOnlyDictionary(IDictionary<TKey, TValue> dictionaryToWrap)
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// if (dictionaryToWrap == null)
		RuntimeObject* L_0 = ___dictionaryToWrap0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException(nameof(dictionaryToWrap));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7BB1C7F529F538D622487DC7F7AA1CA62A05832)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_ReadOnlyDictionary_2__ctor_m1A34D64F21BE38692A67B4AC06F27F27F6508D12_RuntimeMethod_var)));
	}

IL_0014:
	{
		// _source = dictionaryToWrap;
		RuntimeObject* L_2 = ___dictionaryToWrap0;
		__this->set__source_0(L_2);
		// }
		return;
	}
}
// System.Int32 Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _ReadOnlyDictionary_2_get_Count_m64E087E8950E4DA5A0D975839E01897207B96F0F_gshared (_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 * __this, const RuntimeMethod* method)
{
	{
		// get { return _source.Count; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_0);
		return (int32_t)L_1;
	}
}
// System.Collections.Generic.ICollection`1<TKey> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_get_Keys_mCE0D60ABC0F212C5112BC79D9286BF11332967ED_gshared (_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 * __this, const RuntimeMethod* method)
{
	{
		// get { return _source.Keys; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.Object,System.Object>::get_Keys() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Collections.Generic.ICollection`1<TValue> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_get_Values_m0ABC258F9B6AABD041D0F4B91BDE2DFE091B09B1_gshared (_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 * __this, const RuntimeMethod* method)
{
	{
		// get { return _source.Values; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.Object,System.Object>::get_Values() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m40DF552F130F5002FBC13E0566E27E874190B573_gshared (_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 * __this, const RuntimeMethod* method)
{
	{
		// get { return true; }
		return (bool)1;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_ICollection_get_IsSynchronized_m4F51BA0F83343477EFE474E0665F22497CF37FBD_gshared (_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 * __this, const RuntimeMethod* method)
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// System.Object Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _ReadOnlyDictionary_2_System_Collections_ICollection_get_SyncRoot_mE6588FA24890A44E79376207FC6AC0E895C6B913_gshared (_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (_syncRoot != null)
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__syncRoot_1();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return _syncRoot;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get__syncRoot_1();
		return (RuntimeObject *)L_1;
	}

IL_000f:
	{
		// var collection = _source as ICollection;
		RuntimeObject* L_2 = (RuntimeObject*)__this->get__source_0();
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var));
		// if (collection != null)
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// _syncRoot = collection.SyncRoot;
		RuntimeObject* L_4 = V_0;
		NullCheck((RuntimeObject*)L_4);
		RuntimeObject * L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		__this->set__syncRoot_1(L_5);
		goto IL_003e;
	}

IL_002c:
	{
		// Interlocked.CompareExchange(ref _syncRoot, new object(), null);
		RuntimeObject ** L_6 = (RuntimeObject **)__this->get_address_of__syncRoot_1();
		RuntimeObject * L_7 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_7, /*hidden argument*/NULL);
		RuntimeObject * L_8;
		L_8 = Interlocked_CompareExchange_mFAD09589A5DAFDBABB05C62A2D35CD5B92BC6961((RuntimeObject **)(RuntimeObject **)L_6, (RuntimeObject *)L_7, (RuntimeObject *)NULL, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// return _syncRoot;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get__syncRoot_1();
		return (RuntimeObject *)L_9;
	}
}
// TValue Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _ReadOnlyDictionary_2_get_Item_mBF245CD91AB123D5FFC2CB3FCB0285B5466D4A79_gshared (_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	{
		// get { return _source[key]; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		RuntimeObject * L_1 = ___key0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Object,System.Object>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		return (RuntimeObject *)L_2;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_set_Item_mBBDAB6E60BDCF981A63DB519038A726624FC940A_gshared (_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		// set { ThrowNotSupportedException(); }
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// set { ThrowNotSupportedException(); }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Add_mBF9711EAA1FA150106436E5BDC0373DEEEAF678A_gshared (_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_ContainsKey_mADDF059575CBBF8A7643E4D4E0A340667549FFA7_gshared (_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	{
		// return _source.ContainsKey(key);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		RuntimeObject * L_1 = ___key0;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		return (bool)L_2;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Remove_m6F4116B69561B947EB71B23E8EA9147AE57C2593_gshared (_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_TryGetValue_mED8662C50650B6FBC096BEB7FE9EBFBF9BDF08A7_gshared (_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method)
{
	{
		// return _source.TryGetValue(key, out value);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		RuntimeObject * L_1 = ___key0;
		RuntimeObject ** L_2 = ___value1;
		NullCheck((RuntimeObject*)L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0, (RuntimeObject *)L_1, (RuntimeObject **)(RuntimeObject **)L_2);
		return (bool)L_3;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m990610FBDD668C82617385BBCE05B2129B53AF80_gshared (_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 * __this, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___item0, const RuntimeMethod* method)
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Clear_mA0DFA826CA8D7A5D9097523C011A6502EFCD1302_gshared (_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 * __this, const RuntimeMethod* method)
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19CBA492F525B913F3B739942531FE033D680B83_gshared (_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 * __this, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___item0, const RuntimeMethod* method)
{
	{
		// ICollection<KeyValuePair<TKey, TValue>> collection = _source;
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		// return collection.Contains(item);
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_1 = ___item0;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(!0) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_0, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_1);
		return (bool)L_2;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3D90B735851EC280C559135DA8E9F8BDD599DDB9_gshared (_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 * __this, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	{
		// ICollection<KeyValuePair<TKey, TValue>> collection = _source;
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		// collection.CopyTo(array, arrayIndex);
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(!0[],System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_0, (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)L_1, (int32_t)L_2);
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15287AEFEA3A816FAAC738BAC248A1E879D71BDB_gshared (_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 * __this, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___item0, const RuntimeMethod* method)
{
	{
		// ThrowNotSupportedException();
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// return false;
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m348AF5F3C2187B4AE99A06377F421EE60AD5D23A_gshared (_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 * __this, const RuntimeMethod* method)
{
	{
		// IEnumerable<KeyValuePair<TKey, TValue>> enumerator = _source;
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		// return enumerator.GetEnumerator();
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Collections.IEnumerator Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_IEnumerable_GetEnumerator_m2DCCB8132E6A3D5A0368321249A79DFFB5C4C8DC_gshared (_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 * __this, const RuntimeMethod* method)
{
	{
		// return _source.GetEnumerator();
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_System_Collections_ICollection_CopyTo_mA48EA2178CCC90C6C9345C3B28FFAD6983BE25E1_gshared (_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ICollection collection = new List<KeyValuePair<TKey, TValue>>(_source);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__source_0();
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_1 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5));
		((  void (*) (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(L_1, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		// collection.CopyTo(array, index);
		RuntimeArray * L_2 = ___array0;
		int32_t L_3 = ___index1;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker2< RuntimeArray *, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (RuntimeArray *)L_2, (int32_t)L_3);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<TKey> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_mAE916310EFB8D4EC21E6129F8FEF3A1B7A174290_gshared (_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 * __this, const RuntimeMethod* method)
{
	{
		// get { return Keys; }
		NullCheck((_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 *)__this);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		return (RuntimeObject*)L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ReadOnlyDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m9F712D40F5EBA14749262237A17CB98741C7F9B4_gshared (_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 * __this, const RuntimeMethod* method)
{
	{
		// get { return Values; }
		NullCheck((_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 *)__this);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((_ReadOnlyDictionary_2_t57DADFC2512CB6C4A578DC1250555E1A4754B3A8 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_0;
	}
}
// System.Void Niantic.ARDK.Utilities.Collections._ReadOnlyDictionary`2<System.Object,System.Object>::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReadOnlyDictionary_2_ThrowNotSupportedException_mE77DF51EDDA4C17633B85C46DABF94F0E2A3B367_gshared (const RuntimeMethod* method)
{
	{
		// throw new NotSupportedException("This Dictionary is read-only");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDE44EB699A6FE620517DE44E517245D1D8921D9D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_ReadOnlyDictionary_2_ThrowNotSupportedException_mE77DF51EDDA4C17633B85C46DABF94F0E2A3B367_RuntimeMethod_var)));
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
// System.Void Niantic.ARDK.Utilities._ReferenceComparer`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReferenceComparer_1__ctor_m08990FBC20713D5955CEA395CDC9B84642C5FD22_gshared (_ReferenceComparer_1_t6114B4B2D587CEEAFD55C3F4179F7F3A2905F29E * __this, const RuntimeMethod* method)
{
	{
		// private _ReferenceComparer()
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities._ReferenceComparer`1<System.Object>::Equals(T,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _ReferenceComparer_1_Equals_mBC5382D59EC52EC3001BE22A3283D91B88E8AF51_gshared (_ReferenceComparer_1_t6114B4B2D587CEEAFD55C3F4179F7F3A2905F29E * __this, RuntimeObject * ___a0, RuntimeObject * ___b1, const RuntimeMethod* method)
{
	{
		// return object.ReferenceEquals(a, b);
		RuntimeObject * L_0 = ___a0;
		RuntimeObject * L_1 = ___b1;
		return (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)L_1))? 1 : 0);
	}
}
// System.Int32 Niantic.ARDK.Utilities._ReferenceComparer`1<System.Object>::GetHashCode(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _ReferenceComparer_1_GetHashCode_mBDC402FADAF341F6B67EEB77A4FA1245E1A61CCA_gshared (_ReferenceComparer_1_t6114B4B2D587CEEAFD55C3F4179F7F3A2905F29E * __this, RuntimeObject * ___instance0, const RuntimeMethod* method)
{
	{
		// return RuntimeHelpers.GetHashCode(instance);
		RuntimeObject * L_0 = ___instance0;
		int32_t L_1;
		L_1 = RuntimeHelpers_GetHashCode_mDA6691034E245B5F619B108F3597725FF7862DA1((RuntimeObject *)L_0, /*hidden argument*/NULL);
		return (int32_t)L_1;
	}
}
// System.Void Niantic.ARDK.Utilities._ReferenceComparer`1<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ReferenceComparer_1__cctor_m214677B3C055646DD8FBC672A2B8C6323E98DE70_gshared (const RuntimeMethod* method)
{
	{
		// public static readonly _ReferenceComparer<T> Instance = new _ReferenceComparer<T>();
		_ReferenceComparer_1_t6114B4B2D587CEEAFD55C3F4179F7F3A2905F29E * L_0 = (_ReferenceComparer_1_t6114B4B2D587CEEAFD55C3F4179F7F3A2905F29E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((  void (*) (_ReferenceComparer_1_t6114B4B2D587CEEAFD55C3F4179F7F3A2905F29E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		((_ReferenceComparer_1_t6114B4B2D587CEEAFD55C3F4179F7F3A2905F29E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->set_Instance_0(L_0);
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
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.Single>::.ctor(System.UInt32,System.UInt32,System.Boolean,UnityEngine.Matrix4x4,Unity.Collections.NativeArray`1<T>,Niantic.ARDK.AR.Camera.CameraIntrinsics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferBase_1__ctor_m9734AF72A5A0E3721462C8B49B766F3DA6E4775A_gshared (_SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5 * __this, uint32_t ___width0, uint32_t ___height1, bool ___isKeyframe2, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___viewMatrix3, NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  ___data4, CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  ___intrinsics5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(width, height, isKeyframe, intrinsics)
		uint32_t L_0 = ___width0;
		uint32_t L_1 = ___height1;
		bool L_2 = ___isKeyframe2;
		CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  L_3 = ___intrinsics5;
		NullCheck((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this);
		_AwarenessBufferBase__ctor_mCBA110605321C6937BBFB5C821B1EE6152C86519((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this, (uint32_t)L_0, (uint32_t)L_1, (bool)L_2, (CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A )L_3, /*hidden argument*/NULL);
		// _viewMatrix = viewMatrix;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_4 = ___viewMatrix3;
		__this->set__viewMatrix_3(L_4);
		// _intrinsics = intrinsics;
		CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  L_5 = ___intrinsics5;
		__this->set__intrinsics_6(L_5);
		// Data = data;
		NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  L_6 = ___data4;
		__this->set_U3CDataU3Ek__BackingField_7(L_6);
		// _consumedUnmanagedMemory = _CalculateConsumedMemory();
		NullCheck((_SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5 *)__this);
		int64_t L_7;
		L_7 = ((  int64_t (*) (_SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((_SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		__this->set__consumedUnmanagedMemory_5(L_7);
		// GC.AddMemoryPressure(_consumedUnmanagedMemory);
		int64_t L_8 = (int64_t)__this->get__consumedUnmanagedMemory_5();
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_AddMemoryPressure_m85340229E43D12052C25F55B3E239BFD19F18C42((int64_t)L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.Single>::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferBase_1_Finalize_m9DB363A3F6F897D09DCD63415CC0712EE7030DFF_gshared (_SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// Dispose();
		NullCheck((_SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5 *)__this);
		((  void (*) (_SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((_SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		IL2CPP_LEAVE(0xF, FINALLY_0008);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0008;
	}

FINALLY_0008:
	{ // begin finally (depth: 1)
		// }
		NullCheck((RuntimeObject *)__this);
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(8)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(8)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF, IL_000f)
	}

IL_000f:
	{
		// }
		return;
	}
}
// UnityEngine.Matrix4x4 Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.Single>::get_ViewMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  _SerializableAwarenessBufferBase_1_get_ViewMatrix_m113F0C078920193131823B430D6FE065E8E94F2F_gshared (_SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5 * __this, const RuntimeMethod* method)
{
	{
		// return _viewMatrix;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0 = (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )__this->get__viewMatrix_3();
		return (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_0;
	}
}
// Niantic.ARDK.AR.Camera.CameraIntrinsics Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.Single>::get_Intrinsics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  _SerializableAwarenessBufferBase_1_get_Intrinsics_mC643B4348DC115CAFE158E20FDD6CC362694DE23_gshared (_SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5 * __this, const RuntimeMethod* method)
{
	{
		// return _intrinsics;
		CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  L_0 = (CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A )__this->get__intrinsics_6();
		return (CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A )L_0;
	}
}
// Unity.Collections.NativeArray`1<T> Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.Single>::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  _SerializableAwarenessBufferBase_1_get_Data_mEEF8F95E02B6B10D5BB58F2C8DAC7BB05D37E529_gshared (_SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> Data { get; }
		NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  L_0 = (NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 )__this->get_U3CDataU3Ek__BackingField_7();
		return (NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 )L_0;
	}
}
// System.Boolean Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.Single>::get_IsRotatedToScreenOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SerializableAwarenessBufferBase_1_get_IsRotatedToScreenOrientation_m83C618A8DA59931954CB12ACC20875448AC7F45E_gshared (_SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsRotatedToScreenOrientation { get; set; }
		bool L_0 = (bool)__this->get_U3CIsRotatedToScreenOrientationU3Ek__BackingField_8();
		return (bool)L_0;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.Single>::set_IsRotatedToScreenOrientation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferBase_1_set_IsRotatedToScreenOrientation_m90047CD97C07825B8DF5AF16D35E3A378CE6FA4D_gshared (_SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsRotatedToScreenOrientation { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CIsRotatedToScreenOrientationU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.Single>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferBase_1_Dispose_m6D885C10CA7ED1D8190D24318D8EE9CCF824086A_gshared (_SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_disposed)
		bool L_0 = (bool)__this->get__disposed_4();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (Data.IsCreated)
		NullCheck((_SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5 *)__this);
		NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  L_1;
		L_1 = ((  NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  (*) (_SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((_SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		V_0 = (NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 )L_1;
		bool L_2;
		L_2 = NativeArray_1_get_IsCreated_m394E202D29B5488CB56139D346E1A64EBBDA2E9C((NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 *)(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// Data.Dispose();
		NullCheck((_SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5 *)__this);
		NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  L_3;
		L_3 = ((  NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  (*) (_SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((_SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		V_0 = (NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 )L_3;
		NativeArray_1_Dispose_mC03B89A2188FC84335036FA76CEB1925D7DC4294((NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 *)(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
	}

IL_0027:
	{
		// GC.SuppressFinalize(this);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555((RuntimeObject *)__this, /*hidden argument*/NULL);
		// GC.RemoveMemoryPressure(_consumedUnmanagedMemory);
		int64_t L_4 = (int64_t)__this->get__consumedUnmanagedMemory_5();
		GC_RemoveMemoryPressure_mC086343A8797ADC5F9686B3CB0D8478456D2A632((int64_t)L_4, /*hidden argument*/NULL);
		// _disposed = true;
		__this->set__disposed_4((bool)1);
		// }
		return;
	}
}
// System.Int64 Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.Single>::_CalculateConsumedMemory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _SerializableAwarenessBufferBase_1__CalculateConsumedMemory_m4781FA4BFB38A439A283CAD821A3E4E8C4F21C48_gshared (_SerializableAwarenessBufferBase_1_tA1D15D4D10A4040DDCE1B9956E53B0FFFE001BA5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Width * Height * Marshal.SizeOf(typeof(T));
		NullCheck((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this);
		uint32_t L_0;
		L_0 = _AwarenessBufferBase_get_Width_mA8E870CE200ECBF18C4FEDFAF0F052302BF42E63_inline((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this, /*hidden argument*/NULL);
		NullCheck((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this);
		uint32_t L_1;
		L_1 = _AwarenessBufferBase_get_Height_mDAE1E876EE5B79EA91BAE047CCA75EBBD2BA17BC_inline((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 5)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Marshal_SizeOf_m5482D50095CD4ECFFE66778DDAB9173AD834E85A((Type_t *)L_3, /*hidden argument*/NULL);
		return (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)))))), (int64_t)((int64_t)((int64_t)L_4))));
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
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.UInt32>::.ctor(System.UInt32,System.UInt32,System.Boolean,UnityEngine.Matrix4x4,Unity.Collections.NativeArray`1<T>,Niantic.ARDK.AR.Camera.CameraIntrinsics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferBase_1__ctor_m6454184086DF571D0D35F0FF78D4DE8BAE1323FC_gshared (_SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070 * __this, uint32_t ___width0, uint32_t ___height1, bool ___isKeyframe2, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___viewMatrix3, NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  ___data4, CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  ___intrinsics5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(width, height, isKeyframe, intrinsics)
		uint32_t L_0 = ___width0;
		uint32_t L_1 = ___height1;
		bool L_2 = ___isKeyframe2;
		CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  L_3 = ___intrinsics5;
		NullCheck((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this);
		_AwarenessBufferBase__ctor_mCBA110605321C6937BBFB5C821B1EE6152C86519((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this, (uint32_t)L_0, (uint32_t)L_1, (bool)L_2, (CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A )L_3, /*hidden argument*/NULL);
		// _viewMatrix = viewMatrix;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_4 = ___viewMatrix3;
		__this->set__viewMatrix_3(L_4);
		// _intrinsics = intrinsics;
		CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  L_5 = ___intrinsics5;
		__this->set__intrinsics_6(L_5);
		// Data = data;
		NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  L_6 = ___data4;
		__this->set_U3CDataU3Ek__BackingField_7(L_6);
		// _consumedUnmanagedMemory = _CalculateConsumedMemory();
		NullCheck((_SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070 *)__this);
		int64_t L_7;
		L_7 = ((  int64_t (*) (_SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((_SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		__this->set__consumedUnmanagedMemory_5(L_7);
		// GC.AddMemoryPressure(_consumedUnmanagedMemory);
		int64_t L_8 = (int64_t)__this->get__consumedUnmanagedMemory_5();
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_AddMemoryPressure_m85340229E43D12052C25F55B3E239BFD19F18C42((int64_t)L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.UInt32>::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferBase_1_Finalize_m5552EDCA19BB7301ECCD44D9AB23B93DA58161D6_gshared (_SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// Dispose();
		NullCheck((_SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070 *)__this);
		((  void (*) (_SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((_SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		IL2CPP_LEAVE(0xF, FINALLY_0008);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0008;
	}

FINALLY_0008:
	{ // begin finally (depth: 1)
		// }
		NullCheck((RuntimeObject *)__this);
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(8)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(8)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF, IL_000f)
	}

IL_000f:
	{
		// }
		return;
	}
}
// UnityEngine.Matrix4x4 Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.UInt32>::get_ViewMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  _SerializableAwarenessBufferBase_1_get_ViewMatrix_mBEC76ED8FCCE1773CD6B6D0FF95CA10F5018A4A5_gshared (_SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070 * __this, const RuntimeMethod* method)
{
	{
		// return _viewMatrix;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0 = (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )__this->get__viewMatrix_3();
		return (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_0;
	}
}
// Niantic.ARDK.AR.Camera.CameraIntrinsics Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.UInt32>::get_Intrinsics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  _SerializableAwarenessBufferBase_1_get_Intrinsics_mA351AFD0A4F451D5FCA9BA343F6DBF81C2ACF25F_gshared (_SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070 * __this, const RuntimeMethod* method)
{
	{
		// return _intrinsics;
		CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  L_0 = (CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A )__this->get__intrinsics_6();
		return (CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A )L_0;
	}
}
// Unity.Collections.NativeArray`1<T> Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.UInt32>::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  _SerializableAwarenessBufferBase_1_get_Data_m19321FA0FCD82B19584E144D38ED586AD969102F_gshared (_SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> Data { get; }
		NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  L_0 = (NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A )__this->get_U3CDataU3Ek__BackingField_7();
		return (NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A )L_0;
	}
}
// System.Boolean Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.UInt32>::get_IsRotatedToScreenOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SerializableAwarenessBufferBase_1_get_IsRotatedToScreenOrientation_m64A068DC1F79146D4AA11F9ECDB290F5A31C31D3_gshared (_SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsRotatedToScreenOrientation { get; set; }
		bool L_0 = (bool)__this->get_U3CIsRotatedToScreenOrientationU3Ek__BackingField_8();
		return (bool)L_0;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.UInt32>::set_IsRotatedToScreenOrientation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferBase_1_set_IsRotatedToScreenOrientation_mEE654792211039FE69D620F9704C1FDC7198E6DB_gshared (_SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsRotatedToScreenOrientation { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CIsRotatedToScreenOrientationU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.UInt32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferBase_1_Dispose_m1C0E57F369F67D7750C8734CD5E865A01826838F_gshared (_SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_disposed)
		bool L_0 = (bool)__this->get__disposed_4();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (Data.IsCreated)
		NullCheck((_SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070 *)__this);
		NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  L_1;
		L_1 = ((  NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  (*) (_SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((_SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		V_0 = (NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A )L_1;
		bool L_2;
		L_2 = NativeArray_1_get_IsCreated_m3B37A54D543C525751B889F68FB779C09E0B7FD3((NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A *)(NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// Data.Dispose();
		NullCheck((_SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070 *)__this);
		NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  L_3;
		L_3 = ((  NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  (*) (_SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((_SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		V_0 = (NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A )L_3;
		NativeArray_1_Dispose_m5E13FBBFF171004599F612D00587AD4EE7D79872((NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A *)(NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
	}

IL_0027:
	{
		// GC.SuppressFinalize(this);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555((RuntimeObject *)__this, /*hidden argument*/NULL);
		// GC.RemoveMemoryPressure(_consumedUnmanagedMemory);
		int64_t L_4 = (int64_t)__this->get__consumedUnmanagedMemory_5();
		GC_RemoveMemoryPressure_mC086343A8797ADC5F9686B3CB0D8478456D2A632((int64_t)L_4, /*hidden argument*/NULL);
		// _disposed = true;
		__this->set__disposed_4((bool)1);
		// }
		return;
	}
}
// System.Int64 Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferBase`1<System.UInt32>::_CalculateConsumedMemory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _SerializableAwarenessBufferBase_1__CalculateConsumedMemory_m7C246B2C97AFF3BC7DE3C0B2A94C4C13037E70C6_gshared (_SerializableAwarenessBufferBase_1_tA40A03FA1A2F2F3432801E7354AC140225405070 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Width * Height * Marshal.SizeOf(typeof(T));
		NullCheck((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this);
		uint32_t L_0;
		L_0 = _AwarenessBufferBase_get_Width_mA8E870CE200ECBF18C4FEDFAF0F052302BF42E63_inline((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this, /*hidden argument*/NULL);
		NullCheck((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this);
		uint32_t L_1;
		L_1 = _AwarenessBufferBase_get_Height_mDAE1E876EE5B79EA91BAE047CCA75EBBD2BA17BC_inline((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 5)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Marshal_SizeOf_m5482D50095CD4ECFFE66778DDAB9173AD834E85A((Type_t *)L_3, /*hidden argument*/NULL);
		return (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)))))), (int64_t)((int64_t)((int64_t)L_4))));
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
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.Single>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,TBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferSerializer_2_DoSerialize_m345B7FF6D5CD1B933026ECBDF4A8E151CAB17D46_gshared (_SerializableAwarenessBufferSerializer_2_t1B3417ACE4FAE760A66B1389C0610A4D993B2A60 * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, RuntimeObject * ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_m2D34BA57E4BCE8DD2120CA7B6B75930326B24D58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_m5814756252CB5C8E8B72A0EFAA24C89B9B3375E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_m8692958F30558F98C89D9A318F998029FB59A1EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_mF4E9F9FAA0AB963C2233A3121F3E4274EA8FFAAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanSerializer_t334DA9746952A84A265834E52C290E7E4376A238_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraIntrinsicsSerializer_tDD3051847FC06942FB682D1952440E4BB77F0BBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4Serializer_t04609B7C66BAAA9BE14D3F444764BAB71386F24A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var uint32Serializer = CompressedUInt32Serializer.Instance;
		IL2CPP_RUNTIME_CLASS_INIT(CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174_il2cpp_TypeInfo_var);
		CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174 * L_0 = ((CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174_StaticFields*)il2cpp_codegen_static_fields_for(CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174_il2cpp_TypeInfo_var))->get_Instance_1();
		// uint32Serializer.Serialize(serializer, item.Width);
		CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174 * L_1 = (CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174 *)L_0;
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_2 = ___serializer0;
		RuntimeObject * L_3 = ___item1;
		NullCheck((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)L_3);
		uint32_t L_4;
		L_4 = _AwarenessBufferBase_get_Width_mA8E870CE200ECBF18C4FEDFAF0F052302BF42E63_inline((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)L_3, /*hidden argument*/NULL);
		NullCheck((BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D *)L_1);
		BaseItemSerializer_1_Serialize_mF4E9F9FAA0AB963C2233A3121F3E4274EA8FFAAB((BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D *)L_1, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_2, (uint32_t)L_4, /*hidden argument*/BaseItemSerializer_1_Serialize_mF4E9F9FAA0AB963C2233A3121F3E4274EA8FFAAB_RuntimeMethod_var);
		// uint32Serializer.Serialize(serializer, item.Height);
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_5 = ___serializer0;
		RuntimeObject * L_6 = ___item1;
		NullCheck((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)L_6);
		uint32_t L_7;
		L_7 = _AwarenessBufferBase_get_Height_mDAE1E876EE5B79EA91BAE047CCA75EBBD2BA17BC_inline((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)L_6, /*hidden argument*/NULL);
		NullCheck((BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D *)L_1);
		BaseItemSerializer_1_Serialize_mF4E9F9FAA0AB963C2233A3121F3E4274EA8FFAAB((BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D *)L_1, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_5, (uint32_t)L_7, /*hidden argument*/BaseItemSerializer_1_Serialize_mF4E9F9FAA0AB963C2233A3121F3E4274EA8FFAAB_RuntimeMethod_var);
		// BooleanSerializer.Instance.Serialize(serializer, item.IsKeyframe);
		IL2CPP_RUNTIME_CLASS_INIT(BooleanSerializer_t334DA9746952A84A265834E52C290E7E4376A238_il2cpp_TypeInfo_var);
		BooleanSerializer_t334DA9746952A84A265834E52C290E7E4376A238 * L_8 = ((BooleanSerializer_t334DA9746952A84A265834E52C290E7E4376A238_StaticFields*)il2cpp_codegen_static_fields_for(BooleanSerializer_t334DA9746952A84A265834E52C290E7E4376A238_il2cpp_TypeInfo_var))->get_Instance_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_9 = ___serializer0;
		RuntimeObject * L_10 = ___item1;
		NullCheck((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)L_10);
		bool L_11;
		L_11 = _AwarenessBufferBase_get_IsKeyframe_m4DB74F27C7A36F9556117A93CC6E0E876ABC9AB1_inline((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)L_10, /*hidden argument*/NULL);
		NullCheck((BaseItemSerializer_1_t08F5BA999B41FC91E9459C9DDE808D68F21D7B48 *)L_8);
		BaseItemSerializer_1_Serialize_m8692958F30558F98C89D9A318F998029FB59A1EC((BaseItemSerializer_1_t08F5BA999B41FC91E9459C9DDE808D68F21D7B48 *)L_8, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_9, (bool)L_11, /*hidden argument*/BaseItemSerializer_1_Serialize_m8692958F30558F98C89D9A318F998029FB59A1EC_RuntimeMethod_var);
		// Matrix4x4Serializer.Instance.Serialize(serializer, item.ViewMatrix);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4Serializer_t04609B7C66BAAA9BE14D3F444764BAB71386F24A_il2cpp_TypeInfo_var);
		Matrix4x4Serializer_t04609B7C66BAAA9BE14D3F444764BAB71386F24A * L_12 = ((Matrix4x4Serializer_t04609B7C66BAAA9BE14D3F444764BAB71386F24A_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4Serializer_t04609B7C66BAAA9BE14D3F444764BAB71386F24A_il2cpp_TypeInfo_var))->get_Instance_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_13 = ___serializer0;
		RuntimeObject * L_14 = ___item1;
		NullCheck((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)L_14);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_15;
		L_15 = VirtFuncInvoker0< Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  >::Invoke(11 /* UnityEngine.Matrix4x4 Niantic.ARDK.AR.Awareness._AwarenessBufferBase::get_ViewMatrix() */, (_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)L_14);
		NullCheck((BaseItemSerializer_1_t33D3C64D9D4A48058D6E7EA3E851ACA5EEFC0A66 *)L_12);
		BaseItemSerializer_1_Serialize_m2D34BA57E4BCE8DD2120CA7B6B75930326B24D58((BaseItemSerializer_1_t33D3C64D9D4A48058D6E7EA3E851ACA5EEFC0A66 *)L_12, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_13, (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_15, /*hidden argument*/BaseItemSerializer_1_Serialize_m2D34BA57E4BCE8DD2120CA7B6B75930326B24D58_RuntimeMethod_var);
		// CameraIntrinsicsSerializer.Instance.Serialize(serializer, item.Intrinsics);
		IL2CPP_RUNTIME_CLASS_INIT(CameraIntrinsicsSerializer_tDD3051847FC06942FB682D1952440E4BB77F0BBD_il2cpp_TypeInfo_var);
		CameraIntrinsicsSerializer_tDD3051847FC06942FB682D1952440E4BB77F0BBD * L_16 = ((CameraIntrinsicsSerializer_tDD3051847FC06942FB682D1952440E4BB77F0BBD_StaticFields*)il2cpp_codegen_static_fields_for(CameraIntrinsicsSerializer_tDD3051847FC06942FB682D1952440E4BB77F0BBD_il2cpp_TypeInfo_var))->get_Instance_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_17 = ___serializer0;
		RuntimeObject * L_18 = ___item1;
		NullCheck((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)L_18);
		CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  L_19;
		L_19 = VirtFuncInvoker0< CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  >::Invoke(12 /* Niantic.ARDK.AR.Camera.CameraIntrinsics Niantic.ARDK.AR.Awareness._AwarenessBufferBase::get_Intrinsics() */, (_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)L_18);
		NullCheck((BaseItemSerializer_1_t4437CB081DD98887077F39A721F361BBEA872847 *)L_16);
		BaseItemSerializer_1_Serialize_m5814756252CB5C8E8B72A0EFAA24C89B9B3375E0((BaseItemSerializer_1_t4437CB081DD98887077F39A721F361BBEA872847 *)L_16, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_17, (CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A )L_19, /*hidden argument*/BaseItemSerializer_1_Serialize_m5814756252CB5C8E8B72A0EFAA24C89B9B3375E0_RuntimeMethod_var);
		// }
		return;
	}
}
// TBuffer Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.Single>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _SerializableAwarenessBufferSerializer_2_DoDeserialize_m8D31614E9DD5D15CA721710493AD1DBC7C8A27B2_gshared (_SerializableAwarenessBufferSerializer_2_t1B3417ACE4FAE760A66B1389C0610A4D993B2A60 * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_m25A18552A7D3081D6B21365982F3B2B13323391C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_mE656780E6F2DD44BB9FBABD437580C79438D208C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_mED86D8AB49810AA3BE145A9B875DAC6D166370F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_mFCE6E3CF2B8CCCBB024614091FF77E49AE84837F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanSerializer_t334DA9746952A84A265834E52C290E7E4376A238_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraIntrinsicsSerializer_tDD3051847FC06942FB682D1952440E4BB77F0BBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4Serializer_t04609B7C66BAAA9BE14D3F444764BAB71386F24A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	bool V_2 = false;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_3;
	memset((&V_3), 0, sizeof(V_3));
	CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var uint32Serializer = CompressedUInt32Serializer.Instance;
		IL2CPP_RUNTIME_CLASS_INIT(CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174_il2cpp_TypeInfo_var);
		CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174 * L_0 = ((CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174_StaticFields*)il2cpp_codegen_static_fields_for(CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174_il2cpp_TypeInfo_var))->get_Instance_1();
		// uint width = uint32Serializer.Deserialize(deserializer);
		CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174 * L_1 = (CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174 *)L_0;
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_2 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D *)L_1);
		uint32_t L_3;
		L_3 = BaseItemSerializer_1_Deserialize_mED86D8AB49810AA3BE145A9B875DAC6D166370F1((BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D *)L_1, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_2, /*hidden argument*/BaseItemSerializer_1_Deserialize_mED86D8AB49810AA3BE145A9B875DAC6D166370F1_RuntimeMethod_var);
		V_0 = (uint32_t)L_3;
		// uint height = uint32Serializer.Deserialize(deserializer);
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_4 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D *)L_1);
		uint32_t L_5;
		L_5 = BaseItemSerializer_1_Deserialize_mED86D8AB49810AA3BE145A9B875DAC6D166370F1((BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D *)L_1, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_4, /*hidden argument*/BaseItemSerializer_1_Deserialize_mED86D8AB49810AA3BE145A9B875DAC6D166370F1_RuntimeMethod_var);
		V_1 = (uint32_t)L_5;
		// var isKeyFrame = BooleanSerializer.Instance.Deserialize(deserializer);
		IL2CPP_RUNTIME_CLASS_INIT(BooleanSerializer_t334DA9746952A84A265834E52C290E7E4376A238_il2cpp_TypeInfo_var);
		BooleanSerializer_t334DA9746952A84A265834E52C290E7E4376A238 * L_6 = ((BooleanSerializer_t334DA9746952A84A265834E52C290E7E4376A238_StaticFields*)il2cpp_codegen_static_fields_for(BooleanSerializer_t334DA9746952A84A265834E52C290E7E4376A238_il2cpp_TypeInfo_var))->get_Instance_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_7 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_t08F5BA999B41FC91E9459C9DDE808D68F21D7B48 *)L_6);
		bool L_8;
		L_8 = BaseItemSerializer_1_Deserialize_mE656780E6F2DD44BB9FBABD437580C79438D208C((BaseItemSerializer_1_t08F5BA999B41FC91E9459C9DDE808D68F21D7B48 *)L_6, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_7, /*hidden argument*/BaseItemSerializer_1_Deserialize_mE656780E6F2DD44BB9FBABD437580C79438D208C_RuntimeMethod_var);
		V_2 = (bool)L_8;
		// var viewMatrix = Matrix4x4Serializer.Instance.Deserialize(deserializer);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4Serializer_t04609B7C66BAAA9BE14D3F444764BAB71386F24A_il2cpp_TypeInfo_var);
		Matrix4x4Serializer_t04609B7C66BAAA9BE14D3F444764BAB71386F24A * L_9 = ((Matrix4x4Serializer_t04609B7C66BAAA9BE14D3F444764BAB71386F24A_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4Serializer_t04609B7C66BAAA9BE14D3F444764BAB71386F24A_il2cpp_TypeInfo_var))->get_Instance_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_10 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_t33D3C64D9D4A48058D6E7EA3E851ACA5EEFC0A66 *)L_9);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_11;
		L_11 = BaseItemSerializer_1_Deserialize_m25A18552A7D3081D6B21365982F3B2B13323391C((BaseItemSerializer_1_t33D3C64D9D4A48058D6E7EA3E851ACA5EEFC0A66 *)L_9, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_10, /*hidden argument*/BaseItemSerializer_1_Deserialize_m25A18552A7D3081D6B21365982F3B2B13323391C_RuntimeMethod_var);
		V_3 = (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_11;
		// var intrinsics = CameraIntrinsicsSerializer.Instance.Deserialize(deserializer);
		IL2CPP_RUNTIME_CLASS_INIT(CameraIntrinsicsSerializer_tDD3051847FC06942FB682D1952440E4BB77F0BBD_il2cpp_TypeInfo_var);
		CameraIntrinsicsSerializer_tDD3051847FC06942FB682D1952440E4BB77F0BBD * L_12 = ((CameraIntrinsicsSerializer_tDD3051847FC06942FB682D1952440E4BB77F0BBD_StaticFields*)il2cpp_codegen_static_fields_for(CameraIntrinsicsSerializer_tDD3051847FC06942FB682D1952440E4BB77F0BBD_il2cpp_TypeInfo_var))->get_Instance_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_13 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_t4437CB081DD98887077F39A721F361BBEA872847 *)L_12);
		CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  L_14;
		L_14 = BaseItemSerializer_1_Deserialize_mFCE6E3CF2B8CCCBB024614091FF77E49AE84837F((BaseItemSerializer_1_t4437CB081DD98887077F39A721F361BBEA872847 *)L_12, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_13, /*hidden argument*/BaseItemSerializer_1_Deserialize_mFCE6E3CF2B8CCCBB024614091FF77E49AE84837F_RuntimeMethod_var);
		V_4 = (CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A )L_14;
		// return
		//   _InternalDeserialize
		//   (
		//     deserializer,
		//     width,
		//     height,
		//     isKeyFrame,
		//     viewMatrix,
		//     intrinsics
		//   );
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_15 = ___deserializer0;
		uint32_t L_16 = V_0;
		uint32_t L_17 = V_1;
		bool L_18 = V_2;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_19 = V_3;
		CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  L_20 = V_4;
		NullCheck((_SerializableAwarenessBufferSerializer_2_t1B3417ACE4FAE760A66B1389C0610A4D993B2A60 *)__this);
		RuntimeObject * L_21;
		L_21 = VirtFuncInvoker6< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *, uint32_t, uint32_t, bool, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 , CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  >::Invoke(11 /* TBuffer Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.Single>::_InternalDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer,System.UInt32,System.UInt32,System.Boolean,UnityEngine.Matrix4x4,Niantic.ARDK.AR.Camera.CameraIntrinsics) */, (_SerializableAwarenessBufferSerializer_2_t1B3417ACE4FAE760A66B1389C0610A4D993B2A60 *)__this, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_15, (uint32_t)L_16, (uint32_t)L_17, (bool)L_18, (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_19, (CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A )L_20);
		return (RuntimeObject *)L_21;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferSerializer_2__ctor_m130DD10B162313A72A05FF62C6CA5AFF342B6289_gshared (_SerializableAwarenessBufferSerializer_2_t1B3417ACE4FAE760A66B1389C0610A4D993B2A60 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((BaseItemSerializer_1_t3B73A93FC2B7755AFBFFE6322E84D24DB7F37F8F *)__this);
		((  void (*) (BaseItemSerializer_1_t3B73A93FC2B7755AFBFFE6322E84D24DB7F37F8F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((BaseItemSerializer_1_t3B73A93FC2B7755AFBFFE6322E84D24DB7F37F8F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
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
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.UInt32>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,TBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferSerializer_2_DoSerialize_mABCAE7D45A60E90BFF92AB7B87B06FDF394AEE98_gshared (_SerializableAwarenessBufferSerializer_2_t06F74E2000A4C28116FC25FE3F660214F9283216 * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, RuntimeObject * ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_m2D34BA57E4BCE8DD2120CA7B6B75930326B24D58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_m5814756252CB5C8E8B72A0EFAA24C89B9B3375E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_m8692958F30558F98C89D9A318F998029FB59A1EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_mF4E9F9FAA0AB963C2233A3121F3E4274EA8FFAAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanSerializer_t334DA9746952A84A265834E52C290E7E4376A238_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraIntrinsicsSerializer_tDD3051847FC06942FB682D1952440E4BB77F0BBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4Serializer_t04609B7C66BAAA9BE14D3F444764BAB71386F24A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var uint32Serializer = CompressedUInt32Serializer.Instance;
		IL2CPP_RUNTIME_CLASS_INIT(CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174_il2cpp_TypeInfo_var);
		CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174 * L_0 = ((CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174_StaticFields*)il2cpp_codegen_static_fields_for(CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174_il2cpp_TypeInfo_var))->get_Instance_1();
		// uint32Serializer.Serialize(serializer, item.Width);
		CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174 * L_1 = (CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174 *)L_0;
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_2 = ___serializer0;
		RuntimeObject * L_3 = ___item1;
		NullCheck((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)L_3);
		uint32_t L_4;
		L_4 = _AwarenessBufferBase_get_Width_mA8E870CE200ECBF18C4FEDFAF0F052302BF42E63_inline((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)L_3, /*hidden argument*/NULL);
		NullCheck((BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D *)L_1);
		BaseItemSerializer_1_Serialize_mF4E9F9FAA0AB963C2233A3121F3E4274EA8FFAAB((BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D *)L_1, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_2, (uint32_t)L_4, /*hidden argument*/BaseItemSerializer_1_Serialize_mF4E9F9FAA0AB963C2233A3121F3E4274EA8FFAAB_RuntimeMethod_var);
		// uint32Serializer.Serialize(serializer, item.Height);
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_5 = ___serializer0;
		RuntimeObject * L_6 = ___item1;
		NullCheck((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)L_6);
		uint32_t L_7;
		L_7 = _AwarenessBufferBase_get_Height_mDAE1E876EE5B79EA91BAE047CCA75EBBD2BA17BC_inline((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)L_6, /*hidden argument*/NULL);
		NullCheck((BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D *)L_1);
		BaseItemSerializer_1_Serialize_mF4E9F9FAA0AB963C2233A3121F3E4274EA8FFAAB((BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D *)L_1, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_5, (uint32_t)L_7, /*hidden argument*/BaseItemSerializer_1_Serialize_mF4E9F9FAA0AB963C2233A3121F3E4274EA8FFAAB_RuntimeMethod_var);
		// BooleanSerializer.Instance.Serialize(serializer, item.IsKeyframe);
		IL2CPP_RUNTIME_CLASS_INIT(BooleanSerializer_t334DA9746952A84A265834E52C290E7E4376A238_il2cpp_TypeInfo_var);
		BooleanSerializer_t334DA9746952A84A265834E52C290E7E4376A238 * L_8 = ((BooleanSerializer_t334DA9746952A84A265834E52C290E7E4376A238_StaticFields*)il2cpp_codegen_static_fields_for(BooleanSerializer_t334DA9746952A84A265834E52C290E7E4376A238_il2cpp_TypeInfo_var))->get_Instance_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_9 = ___serializer0;
		RuntimeObject * L_10 = ___item1;
		NullCheck((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)L_10);
		bool L_11;
		L_11 = _AwarenessBufferBase_get_IsKeyframe_m4DB74F27C7A36F9556117A93CC6E0E876ABC9AB1_inline((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)L_10, /*hidden argument*/NULL);
		NullCheck((BaseItemSerializer_1_t08F5BA999B41FC91E9459C9DDE808D68F21D7B48 *)L_8);
		BaseItemSerializer_1_Serialize_m8692958F30558F98C89D9A318F998029FB59A1EC((BaseItemSerializer_1_t08F5BA999B41FC91E9459C9DDE808D68F21D7B48 *)L_8, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_9, (bool)L_11, /*hidden argument*/BaseItemSerializer_1_Serialize_m8692958F30558F98C89D9A318F998029FB59A1EC_RuntimeMethod_var);
		// Matrix4x4Serializer.Instance.Serialize(serializer, item.ViewMatrix);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4Serializer_t04609B7C66BAAA9BE14D3F444764BAB71386F24A_il2cpp_TypeInfo_var);
		Matrix4x4Serializer_t04609B7C66BAAA9BE14D3F444764BAB71386F24A * L_12 = ((Matrix4x4Serializer_t04609B7C66BAAA9BE14D3F444764BAB71386F24A_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4Serializer_t04609B7C66BAAA9BE14D3F444764BAB71386F24A_il2cpp_TypeInfo_var))->get_Instance_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_13 = ___serializer0;
		RuntimeObject * L_14 = ___item1;
		NullCheck((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)L_14);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_15;
		L_15 = VirtFuncInvoker0< Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  >::Invoke(11 /* UnityEngine.Matrix4x4 Niantic.ARDK.AR.Awareness._AwarenessBufferBase::get_ViewMatrix() */, (_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)L_14);
		NullCheck((BaseItemSerializer_1_t33D3C64D9D4A48058D6E7EA3E851ACA5EEFC0A66 *)L_12);
		BaseItemSerializer_1_Serialize_m2D34BA57E4BCE8DD2120CA7B6B75930326B24D58((BaseItemSerializer_1_t33D3C64D9D4A48058D6E7EA3E851ACA5EEFC0A66 *)L_12, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_13, (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_15, /*hidden argument*/BaseItemSerializer_1_Serialize_m2D34BA57E4BCE8DD2120CA7B6B75930326B24D58_RuntimeMethod_var);
		// CameraIntrinsicsSerializer.Instance.Serialize(serializer, item.Intrinsics);
		IL2CPP_RUNTIME_CLASS_INIT(CameraIntrinsicsSerializer_tDD3051847FC06942FB682D1952440E4BB77F0BBD_il2cpp_TypeInfo_var);
		CameraIntrinsicsSerializer_tDD3051847FC06942FB682D1952440E4BB77F0BBD * L_16 = ((CameraIntrinsicsSerializer_tDD3051847FC06942FB682D1952440E4BB77F0BBD_StaticFields*)il2cpp_codegen_static_fields_for(CameraIntrinsicsSerializer_tDD3051847FC06942FB682D1952440E4BB77F0BBD_il2cpp_TypeInfo_var))->get_Instance_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_17 = ___serializer0;
		RuntimeObject * L_18 = ___item1;
		NullCheck((_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)L_18);
		CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  L_19;
		L_19 = VirtFuncInvoker0< CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  >::Invoke(12 /* Niantic.ARDK.AR.Camera.CameraIntrinsics Niantic.ARDK.AR.Awareness._AwarenessBufferBase::get_Intrinsics() */, (_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF *)L_18);
		NullCheck((BaseItemSerializer_1_t4437CB081DD98887077F39A721F361BBEA872847 *)L_16);
		BaseItemSerializer_1_Serialize_m5814756252CB5C8E8B72A0EFAA24C89B9B3375E0((BaseItemSerializer_1_t4437CB081DD98887077F39A721F361BBEA872847 *)L_16, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_17, (CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A )L_19, /*hidden argument*/BaseItemSerializer_1_Serialize_m5814756252CB5C8E8B72A0EFAA24C89B9B3375E0_RuntimeMethod_var);
		// }
		return;
	}
}
// TBuffer Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.UInt32>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _SerializableAwarenessBufferSerializer_2_DoDeserialize_m64B80B2166B1CA73DA916465769404683624AB77_gshared (_SerializableAwarenessBufferSerializer_2_t06F74E2000A4C28116FC25FE3F660214F9283216 * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_m25A18552A7D3081D6B21365982F3B2B13323391C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_mE656780E6F2DD44BB9FBABD437580C79438D208C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_mED86D8AB49810AA3BE145A9B875DAC6D166370F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_mFCE6E3CF2B8CCCBB024614091FF77E49AE84837F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanSerializer_t334DA9746952A84A265834E52C290E7E4376A238_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraIntrinsicsSerializer_tDD3051847FC06942FB682D1952440E4BB77F0BBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4Serializer_t04609B7C66BAAA9BE14D3F444764BAB71386F24A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	bool V_2 = false;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_3;
	memset((&V_3), 0, sizeof(V_3));
	CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var uint32Serializer = CompressedUInt32Serializer.Instance;
		IL2CPP_RUNTIME_CLASS_INIT(CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174_il2cpp_TypeInfo_var);
		CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174 * L_0 = ((CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174_StaticFields*)il2cpp_codegen_static_fields_for(CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174_il2cpp_TypeInfo_var))->get_Instance_1();
		// uint width = uint32Serializer.Deserialize(deserializer);
		CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174 * L_1 = (CompressedUInt32Serializer_t1005788CB6D022C6CE30CA12B5EEF83D60591174 *)L_0;
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_2 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D *)L_1);
		uint32_t L_3;
		L_3 = BaseItemSerializer_1_Deserialize_mED86D8AB49810AA3BE145A9B875DAC6D166370F1((BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D *)L_1, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_2, /*hidden argument*/BaseItemSerializer_1_Deserialize_mED86D8AB49810AA3BE145A9B875DAC6D166370F1_RuntimeMethod_var);
		V_0 = (uint32_t)L_3;
		// uint height = uint32Serializer.Deserialize(deserializer);
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_4 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D *)L_1);
		uint32_t L_5;
		L_5 = BaseItemSerializer_1_Deserialize_mED86D8AB49810AA3BE145A9B875DAC6D166370F1((BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D *)L_1, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_4, /*hidden argument*/BaseItemSerializer_1_Deserialize_mED86D8AB49810AA3BE145A9B875DAC6D166370F1_RuntimeMethod_var);
		V_1 = (uint32_t)L_5;
		// var isKeyFrame = BooleanSerializer.Instance.Deserialize(deserializer);
		IL2CPP_RUNTIME_CLASS_INIT(BooleanSerializer_t334DA9746952A84A265834E52C290E7E4376A238_il2cpp_TypeInfo_var);
		BooleanSerializer_t334DA9746952A84A265834E52C290E7E4376A238 * L_6 = ((BooleanSerializer_t334DA9746952A84A265834E52C290E7E4376A238_StaticFields*)il2cpp_codegen_static_fields_for(BooleanSerializer_t334DA9746952A84A265834E52C290E7E4376A238_il2cpp_TypeInfo_var))->get_Instance_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_7 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_t08F5BA999B41FC91E9459C9DDE808D68F21D7B48 *)L_6);
		bool L_8;
		L_8 = BaseItemSerializer_1_Deserialize_mE656780E6F2DD44BB9FBABD437580C79438D208C((BaseItemSerializer_1_t08F5BA999B41FC91E9459C9DDE808D68F21D7B48 *)L_6, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_7, /*hidden argument*/BaseItemSerializer_1_Deserialize_mE656780E6F2DD44BB9FBABD437580C79438D208C_RuntimeMethod_var);
		V_2 = (bool)L_8;
		// var viewMatrix = Matrix4x4Serializer.Instance.Deserialize(deserializer);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4Serializer_t04609B7C66BAAA9BE14D3F444764BAB71386F24A_il2cpp_TypeInfo_var);
		Matrix4x4Serializer_t04609B7C66BAAA9BE14D3F444764BAB71386F24A * L_9 = ((Matrix4x4Serializer_t04609B7C66BAAA9BE14D3F444764BAB71386F24A_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4Serializer_t04609B7C66BAAA9BE14D3F444764BAB71386F24A_il2cpp_TypeInfo_var))->get_Instance_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_10 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_t33D3C64D9D4A48058D6E7EA3E851ACA5EEFC0A66 *)L_9);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_11;
		L_11 = BaseItemSerializer_1_Deserialize_m25A18552A7D3081D6B21365982F3B2B13323391C((BaseItemSerializer_1_t33D3C64D9D4A48058D6E7EA3E851ACA5EEFC0A66 *)L_9, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_10, /*hidden argument*/BaseItemSerializer_1_Deserialize_m25A18552A7D3081D6B21365982F3B2B13323391C_RuntimeMethod_var);
		V_3 = (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_11;
		// var intrinsics = CameraIntrinsicsSerializer.Instance.Deserialize(deserializer);
		IL2CPP_RUNTIME_CLASS_INIT(CameraIntrinsicsSerializer_tDD3051847FC06942FB682D1952440E4BB77F0BBD_il2cpp_TypeInfo_var);
		CameraIntrinsicsSerializer_tDD3051847FC06942FB682D1952440E4BB77F0BBD * L_12 = ((CameraIntrinsicsSerializer_tDD3051847FC06942FB682D1952440E4BB77F0BBD_StaticFields*)il2cpp_codegen_static_fields_for(CameraIntrinsicsSerializer_tDD3051847FC06942FB682D1952440E4BB77F0BBD_il2cpp_TypeInfo_var))->get_Instance_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_13 = ___deserializer0;
		NullCheck((BaseItemSerializer_1_t4437CB081DD98887077F39A721F361BBEA872847 *)L_12);
		CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  L_14;
		L_14 = BaseItemSerializer_1_Deserialize_mFCE6E3CF2B8CCCBB024614091FF77E49AE84837F((BaseItemSerializer_1_t4437CB081DD98887077F39A721F361BBEA872847 *)L_12, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_13, /*hidden argument*/BaseItemSerializer_1_Deserialize_mFCE6E3CF2B8CCCBB024614091FF77E49AE84837F_RuntimeMethod_var);
		V_4 = (CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A )L_14;
		// return
		//   _InternalDeserialize
		//   (
		//     deserializer,
		//     width,
		//     height,
		//     isKeyFrame,
		//     viewMatrix,
		//     intrinsics
		//   );
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_15 = ___deserializer0;
		uint32_t L_16 = V_0;
		uint32_t L_17 = V_1;
		bool L_18 = V_2;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_19 = V_3;
		CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  L_20 = V_4;
		NullCheck((_SerializableAwarenessBufferSerializer_2_t06F74E2000A4C28116FC25FE3F660214F9283216 *)__this);
		RuntimeObject * L_21;
		L_21 = VirtFuncInvoker6< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *, uint32_t, uint32_t, bool, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 , CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  >::Invoke(11 /* TBuffer Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.UInt32>::_InternalDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer,System.UInt32,System.UInt32,System.Boolean,UnityEngine.Matrix4x4,Niantic.ARDK.AR.Camera.CameraIntrinsics) */, (_SerializableAwarenessBufferSerializer_2_t06F74E2000A4C28116FC25FE3F660214F9283216 *)__this, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_15, (uint32_t)L_16, (uint32_t)L_17, (bool)L_18, (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_19, (CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A )L_20);
		return (RuntimeObject *)L_21;
	}
}
// System.Void Niantic.ARDK.AR.Awareness._SerializableAwarenessBufferSerializer`2<System.Object,System.UInt32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferSerializer_2__ctor_m987E63E36823428CA3D4C6D18D0A62040077F1BE_gshared (_SerializableAwarenessBufferSerializer_2_t06F74E2000A4C28116FC25FE3F660214F9283216 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((BaseItemSerializer_1_t3B73A93FC2B7755AFBFFE6322E84D24DB7F37F8F *)__this);
		((  void (*) (BaseItemSerializer_1_t3B73A93FC2B7755AFBFFE6322E84D24DB7F37F8F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((BaseItemSerializer_1_t3B73A93FC2B7755AFBFFE6322E84D24DB7F37F8F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Int16>>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m327A86754272B8F6D2AD1771D2F1CF2EC647BB1C_gshared (_UntypedToTypedSerializerAdapter_1_tB07C9C41E1D95B9F2E283515002C228F1D2F4DF8 * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_t45E4F833222B640FAE87D5EFE9A60412E3144E5F *)__this);
		((  void (*) (BaseItemSerializer_1_t45E4F833222B640FAE87D5EFE9A60412E3144E5F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_t45E4F833222B640FAE87D5EFE9A60412E3144E5F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Int16>>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m739D6C8C6C48F2BC925E3A1DD241063A4688A940_gshared (_UntypedToTypedSerializerAdapter_1_tB07C9C41E1D95B9F2E283515002C228F1D2F4DF8 * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, NativeArray_1_tBE0DA2AC61A9759A24D02AF71F14B6A057146CB5  ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		NativeArray_1_tBE0DA2AC61A9759A24D02AF71F14B6A057146CB5  L_2 = ___item1;
		NativeArray_1_tBE0DA2AC61A9759A24D02AF71F14B6A057146CB5  L_3 = (NativeArray_1_tBE0DA2AC61A9759A24D02AF71F14B6A057146CB5 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Int16>>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBE0DA2AC61A9759A24D02AF71F14B6A057146CB5  _UntypedToTypedSerializerAdapter_1_DoDeserialize_m8A531697955BA3CB78BB010BD22865FFF2C011D9_gshared (_UntypedToTypedSerializerAdapter_1_tB07C9C41E1D95B9F2E283515002C228F1D2F4DF8 * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (NativeArray_1_tBE0DA2AC61A9759A24D02AF71F14B6A057146CB5 )((*(NativeArray_1_tBE0DA2AC61A9759A24D02AF71F14B6A057146CB5 *)((NativeArray_1_tBE0DA2AC61A9759A24D02AF71F14B6A057146CB5 *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Single>>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m70CA8DDDE02F0E9CD4DF20231389C0FD484E6AA0_gshared (_UntypedToTypedSerializerAdapter_1_t2CCF6C6EC9AE3D4AF136EDF677123BDF340B02FA * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_t55A18EA76878C9DDC5AAD6CC9C63DB6206195640 *)__this);
		((  void (*) (BaseItemSerializer_1_t55A18EA76878C9DDC5AAD6CC9C63DB6206195640 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_t55A18EA76878C9DDC5AAD6CC9C63DB6206195640 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Single>>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m28B8A00F3FA77DDFB4B5D2C319F7CA028D61EE14_gshared (_UntypedToTypedSerializerAdapter_1_t2CCF6C6EC9AE3D4AF136EDF677123BDF340B02FA * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  L_2 = ___item1;
		NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  L_3 = (NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Unity.Collections.NativeArray`1<System.Single>>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  _UntypedToTypedSerializerAdapter_1_DoDeserialize_mA0F037A5B7C1FAAEFA3AAFDA01D44C05B1AF33FB_gshared (_UntypedToTypedSerializerAdapter_1_t2CCF6C6EC9AE3D4AF136EDF677123BDF340B02FA * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 )((*(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 *)((NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Boolean>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m2A5F0563FE09E0CED523CD4A5C5644CCB627B75E_gshared (_UntypedToTypedSerializerAdapter_1_t331BE62EEC4C8A6F3E19269ADB558F29A891B736 * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_t08F5BA999B41FC91E9459C9DDE808D68F21D7B48 *)__this);
		((  void (*) (BaseItemSerializer_1_t08F5BA999B41FC91E9459C9DDE808D68F21D7B48 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_t08F5BA999B41FC91E9459C9DDE808D68F21D7B48 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Boolean>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mEB82A4000D280A738BF07D82984F9BE58655C71D_gshared (_UntypedToTypedSerializerAdapter_1_t331BE62EEC4C8A6F3E19269ADB558F29A891B736 * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, bool ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		bool L_2 = ___item1;
		bool L_3 = L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Boolean>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _UntypedToTypedSerializerAdapter_1_DoDeserialize_m3A48A06E6FEF633EB6890F332D44989647A55BB2_gshared (_UntypedToTypedSerializerAdapter_1_t331BE62EEC4C8A6F3E19269ADB558F29A891B736 * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (bool)((*(bool*)((bool*)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Byte>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m45B287E6B4D27051CB5A55DBC2306F7CF63E373B_gshared (_UntypedToTypedSerializerAdapter_1_t4505FCEE266F5381A00CF635EE719E581C6596BA * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_tAC96E077A096599814432F1A9A1E5FF3F65A36A4 *)__this);
		((  void (*) (BaseItemSerializer_1_tAC96E077A096599814432F1A9A1E5FF3F65A36A4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_tAC96E077A096599814432F1A9A1E5FF3F65A36A4 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Byte>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mC97FA2C96108A5596D2D5C27A71561930B8D7EDC_gshared (_UntypedToTypedSerializerAdapter_1_t4505FCEE266F5381A00CF635EE719E581C6596BA * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, uint8_t ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		uint8_t L_2 = ___item1;
		uint8_t L_3 = L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Byte>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_m912E7BF42A12419F26C98412C3AF11539A23BE59_gshared (_UntypedToTypedSerializerAdapter_1_t4505FCEE266F5381A00CF635EE719E581C6596BA * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mDF9BEA37231071D590B447FCA75696DFF949AF9B_gshared (_UntypedToTypedSerializerAdapter_1_t1D3F3617406E7FF9F64A3714AA7865A032C106D1 * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_t4437CB081DD98887077F39A721F361BBEA872847 *)__this);
		((  void (*) (BaseItemSerializer_1_t4437CB081DD98887077F39A721F361BBEA872847 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_t4437CB081DD98887077F39A721F361BBEA872847 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mCBB3DDBEB7B76A1908714F0BBCF39B4A957A1D16_gshared (_UntypedToTypedSerializerAdapter_1_t1D3F3617406E7FF9F64A3714AA7865A032C106D1 * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  L_2 = ___item1;
		CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  L_3 = (CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.AR.Camera.CameraIntrinsics>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A  _UntypedToTypedSerializerAdapter_1_DoDeserialize_mBBC4D187656FB058D14D3598BFA8702C8461E51E_gshared (_UntypedToTypedSerializerAdapter_1_t1D3F3617406E7FF9F64A3714AA7865A032C106D1 * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A )((*(CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A *)((CameraIntrinsics_tFECDF44ACC570B92A11A963FF05FF241E372695A *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Color>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mDEE5D715C7EFC23D556691482AE8F19A5E852E0C_gshared (_UntypedToTypedSerializerAdapter_1_t64526C077763043882F30F8A1E2DB6F6AD50AD8E * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_t2ED020174AA8AD7ADCD4C5B80F1EFF29F44267DF *)__this);
		((  void (*) (BaseItemSerializer_1_t2ED020174AA8AD7ADCD4C5B80F1EFF29F44267DF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_t2ED020174AA8AD7ADCD4C5B80F1EFF29F44267DF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Color>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mFDE7282B1E5A325F4BE7A0A98E6E62D728B0A5BD_gshared (_UntypedToTypedSerializerAdapter_1_t64526C077763043882F30F8A1E2DB6F6AD50AD8E * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___item1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Color>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  _UntypedToTypedSerializerAdapter_1_DoDeserialize_m0C9FB5B6DE84BD32FA8810D5E3832BB156C9E3CC_gshared (_UntypedToTypedSerializerAdapter_1_t64526C077763043882F30F8A1E2DB6F6AD50AD8E * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )((*(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Double>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m2CA68C62320F28C803C47FBF7CF4705C2357AA35_gshared (_UntypedToTypedSerializerAdapter_1_t1177CA338B712A842484AFC6BC0E79F8FEBDBE4E * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_t136AADD0BE63185FA914DE341804377A69B5E1D6 *)__this);
		((  void (*) (BaseItemSerializer_1_t136AADD0BE63185FA914DE341804377A69B5E1D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_t136AADD0BE63185FA914DE341804377A69B5E1D6 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Double>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mFCB79F7D11B7D5D10BD94B2FA3C986A12224C998_gshared (_UntypedToTypedSerializerAdapter_1_t1177CA338B712A842484AFC6BC0E79F8FEBDBE4E * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, double ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		double L_2 = ___item1;
		double L_3 = L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Double>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double _UntypedToTypedSerializerAdapter_1_DoDeserialize_m0C3CAE451DC0B5046CD0F9D0214D8ADA938B4A39_gshared (_UntypedToTypedSerializerAdapter_1_t1177CA338B712A842484AFC6BC0E79F8FEBDBE4E * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (double)((*(double*)((double*)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Guid>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m462D042C95E35EBAA01606743838D0E147BD6463_gshared (_UntypedToTypedSerializerAdapter_1_t8F2359C483BE45BE43693415D13AB994BE4443BE * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_t61824B7087DD01950789F7DA9292858840DC7386 *)__this);
		((  void (*) (BaseItemSerializer_1_t61824B7087DD01950789F7DA9292858840DC7386 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_t61824B7087DD01950789F7DA9292858840DC7386 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Guid>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m12D5A6EBFDD199415B39DB04B691AE50C8F7AB2B_gshared (_UntypedToTypedSerializerAdapter_1_t8F2359C483BE45BE43693415D13AB994BE4443BE * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, Guid_t  ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		Guid_t  L_2 = ___item1;
		Guid_t  L_3 = (Guid_t )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Guid>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  _UntypedToTypedSerializerAdapter_1_DoDeserialize_mA65E4C615E53E5F7CF1437C09FE780E547DC79AE_gshared (_UntypedToTypedSerializerAdapter_1_t8F2359C483BE45BE43693415D13AB994BE4443BE * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (Guid_t )((*(Guid_t *)((Guid_t *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int16>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m8C9BF88638C943D48DAAAFFA9129A56D9F5F9EDB_gshared (_UntypedToTypedSerializerAdapter_1_t7D4110DAAF18469117036E5195BCF4B93613665C * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_tCC0889E4D0CDCD8C3AAD4D8E73F2E259BD92B259 *)__this);
		((  void (*) (BaseItemSerializer_1_tCC0889E4D0CDCD8C3AAD4D8E73F2E259BD92B259 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_tCC0889E4D0CDCD8C3AAD4D8E73F2E259BD92B259 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int16>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m520ABB7B121A5BF122D9872B8DA09B20C1A653F0_gshared (_UntypedToTypedSerializerAdapter_1_t7D4110DAAF18469117036E5195BCF4B93613665C * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, int16_t ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		int16_t L_2 = ___item1;
		int16_t L_3 = L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int16>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_m83D6CC92CEFDB7E9338250C685702C29F623B5BA_gshared (_UntypedToTypedSerializerAdapter_1_t7D4110DAAF18469117036E5195BCF4B93613665C * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (int16_t)((*(int16_t*)((int16_t*)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mE4D00E78876F177E1BDF85BEC2CDB4AB7CA7CC0C_gshared (_UntypedToTypedSerializerAdapter_1_tA61B62B868E1B45691E2FE12485D687413CDBDC7 * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_tCA056274B61BB1B788325B2D8E04676895AAA7B0 *)__this);
		((  void (*) (BaseItemSerializer_1_tCA056274B61BB1B788325B2D8E04676895AAA7B0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_tCA056274B61BB1B788325B2D8E04676895AAA7B0 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m1099A76B849997F6618CFE1407CEDCE13AB46C51_gshared (_UntypedToTypedSerializerAdapter_1_tA61B62B868E1B45691E2FE12485D687413CDBDC7 * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, int32_t ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		int32_t L_2 = ___item1;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_mFF76B45E06F6501D0B86B0BC916A3FE368441FD7_gshared (_UntypedToTypedSerializerAdapter_1_tA61B62B868E1B45691E2FE12485D687413CDBDC7 * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (int32_t)((*(int32_t*)((int32_t*)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32Enum>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mA5E1F048AA973B12B2D657FCED71BC05FE02A8CF_gshared (_UntypedToTypedSerializerAdapter_1_tBB9F7ABA47F8A021499E2C41EB5C4851F3A8344B * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_t8E1224D2AE4A502C8B4C2DED2D66750B8AF2948C *)__this);
		((  void (*) (BaseItemSerializer_1_t8E1224D2AE4A502C8B4C2DED2D66750B8AF2948C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_t8E1224D2AE4A502C8B4C2DED2D66750B8AF2948C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32Enum>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m35DEDFEFF185D28CFBF1853F27035CB6B4F80243_gshared (_UntypedToTypedSerializerAdapter_1_tBB9F7ABA47F8A021499E2C41EB5C4851F3A8344B * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, int32_t ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		int32_t L_2 = ___item1;
		int32_t L_3 = (int32_t)L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int32Enum>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_mC7838C734C575F6BAFB4B654F9911DFF1BD5F628_gshared (_UntypedToTypedSerializerAdapter_1_tBB9F7ABA47F8A021499E2C41EB5C4851F3A8344B * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (int32_t)((*(int32_t*)((int32_t*)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int64>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mBC766E06C0D5CC205528BB8920920CC6BE1CB727_gshared (_UntypedToTypedSerializerAdapter_1_t6CF744DFD85E32F98E7CBF053AC89BE26CCBF93E * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_tF68BA62EF82BFEFAE6C060567998792DB31C3283 *)__this);
		((  void (*) (BaseItemSerializer_1_tF68BA62EF82BFEFAE6C060567998792DB31C3283 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_tF68BA62EF82BFEFAE6C060567998792DB31C3283 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int64>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m5E95C2ACD6548440657E2DC880E8A4BB02FC9610_gshared (_UntypedToTypedSerializerAdapter_1_t6CF744DFD85E32F98E7CBF053AC89BE26CCBF93E * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, int64_t ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		int64_t L_2 = ___item1;
		int64_t L_3 = L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Int64>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_m43B585D59FC40E54811AD95960081A39483564FB_gshared (_UntypedToTypedSerializerAdapter_1_t6CF744DFD85E32F98E7CBF053AC89BE26CCBF93E * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (int64_t)((*(int64_t*)((int64_t*)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.IntPtr>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mB7A5CC0CA156E86338C6FEB274EA89BEC372584F_gshared (_UntypedToTypedSerializerAdapter_1_t70F378A3E73381BF2EB092BCA626283C22325578 * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_t8A1CB7628E484FFAB67B5577264FA02749D3E093 *)__this);
		((  void (*) (BaseItemSerializer_1_t8A1CB7628E484FFAB67B5577264FA02749D3E093 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_t8A1CB7628E484FFAB67B5577264FA02749D3E093 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.IntPtr>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m04D39E6CC9314F2B583797C51C43F31A1F548C7D_gshared (_UntypedToTypedSerializerAdapter_1_t70F378A3E73381BF2EB092BCA626283C22325578 * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, intptr_t ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		intptr_t L_2 = ___item1;
		intptr_t L_3 = L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.IntPtr>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_m3BC426CD52B3D371F488CDE2DEFC96E54D543C29_gshared (_UntypedToTypedSerializerAdapter_1_t70F378A3E73381BF2EB092BCA626283C22325578 * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (intptr_t)((*(intptr_t*)((intptr_t*)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Matrix4x4>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m2D4D9EBDFDDBE00C361A8445BEC263A638FC0BE6_gshared (_UntypedToTypedSerializerAdapter_1_tF3CED3BC46C2E7A9F210C76CECF2072860BB15F1 * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_t33D3C64D9D4A48058D6E7EA3E851ACA5EEFC0A66 *)__this);
		((  void (*) (BaseItemSerializer_1_t33D3C64D9D4A48058D6E7EA3E851ACA5EEFC0A66 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_t33D3C64D9D4A48058D6E7EA3E851ACA5EEFC0A66 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Matrix4x4>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mBAF9E1CF7F65929E8063458C5FFC8CEDE460C909_gshared (_UntypedToTypedSerializerAdapter_1_tF3CED3BC46C2E7A9F210C76CECF2072860BB15F1 * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_2 = ___item1;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_3 = (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Matrix4x4>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  _UntypedToTypedSerializerAdapter_1_DoDeserialize_m9E6BB69EC25DAFC5F238DE428E90FC9DC258F422_gshared (_UntypedToTypedSerializerAdapter_1_tF3CED3BC46C2E7A9F210C76CECF2072860BB15F1 * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )((*(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Routing.NetworkId>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m239B5037028548168244E0A6A580E9146F03F738_gshared (_UntypedToTypedSerializerAdapter_1_t200B0634F40D93B812AE92E6CC200052B4928377 * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_t9E424146F6FBEE0ADF2A3F6BE204D000F0586927 *)__this);
		((  void (*) (BaseItemSerializer_1_t9E424146F6FBEE0ADF2A3F6BE204D000F0586927 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_t9E424146F6FBEE0ADF2A3F6BE204D000F0586927 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Routing.NetworkId>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mA4F8D8794E719540355851771950083920F56CFD_gshared (_UntypedToTypedSerializerAdapter_1_t200B0634F40D93B812AE92E6CC200052B4928377 * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, NetworkId_tE14700FB48791B12889DB4A00A00AF8E9135FA61  ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		NetworkId_tE14700FB48791B12889DB4A00A00AF8E9135FA61  L_2 = ___item1;
		NetworkId_tE14700FB48791B12889DB4A00A00AF8E9135FA61  L_3 = (NetworkId_tE14700FB48791B12889DB4A00A00AF8E9135FA61 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Routing.NetworkId>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkId_tE14700FB48791B12889DB4A00A00AF8E9135FA61  _UntypedToTypedSerializerAdapter_1_DoDeserialize_m23BC3E20030B1FE9CA92F6578CFE8A472C78F4E9_gshared (_UntypedToTypedSerializerAdapter_1_t200B0634F40D93B812AE92E6CC200052B4928377 * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (NetworkId_tE14700FB48791B12889DB4A00A00AF8E9135FA61 )((*(NetworkId_tE14700FB48791B12889DB4A00A00AF8E9135FA61 *)((NetworkId_tE14700FB48791B12889DB4A00A00AF8E9135FA61 *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Object>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mCB39C64609606C4F71848266955C396C7793A46A_gshared (_UntypedToTypedSerializerAdapter_1_t236074F42658D122250E635E4DAB768F977242AD * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_t3B73A93FC2B7755AFBFFE6322E84D24DB7F37F8F *)__this);
		((  void (*) (BaseItemSerializer_1_t3B73A93FC2B7755AFBFFE6322E84D24DB7F37F8F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_t3B73A93FC2B7755AFBFFE6322E84D24DB7F37F8F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Object>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mA09F6F78F48FEA14BAC3E218914F6117C35D4B1C_gshared (_UntypedToTypedSerializerAdapter_1_t236074F42658D122250E635E4DAB768F977242AD * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, RuntimeObject * ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		RuntimeObject * L_2 = ___item1;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_2);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Object>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _UntypedToTypedSerializerAdapter_1_DoDeserialize_m8FAF19EBF625E14DA3B5D7F9B55ADE0575971B83_gshared (_UntypedToTypedSerializerAdapter_1_t236074F42658D122250E635E4DAB768F977242AD * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Quaternion>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m3D0D7BD5FF1E632C1F3C33B8A13AAAC46C515B2E_gshared (_UntypedToTypedSerializerAdapter_1_t2A673367601D3F3F3253BFF2285B77C2B89177F0 * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_t259B1F7172D40593E987E00D3CAE05E36076FE14 *)__this);
		((  void (*) (BaseItemSerializer_1_t259B1F7172D40593E987E00D3CAE05E36076FE14 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_t259B1F7172D40593E987E00D3CAE05E36076FE14 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Quaternion>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m7B38D58711174518E3F04DA0810DAB9D89A2FCE3_gshared (_UntypedToTypedSerializerAdapter_1_t2A673367601D3F3F3253BFF2285B77C2B89177F0 * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2 = ___item1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Quaternion>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  _UntypedToTypedSerializerAdapter_1_DoDeserialize_m373C7416EF87391EFA8F7C23A889ACD4DEE02D55_gshared (_UntypedToTypedSerializerAdapter_1_t2A673367601D3F3F3253BFF2285B77C2B89177F0 * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )((*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Resolution>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mABC3C420C7B939636B88A333FD5B42A3DC428935_gshared (_UntypedToTypedSerializerAdapter_1_t8BCA1089B80C69AC6A81BCA6235F47F5F18BBAAF * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_t25950CBD2D435A56C7706C95DF7C90AED81EDA27 *)__this);
		((  void (*) (BaseItemSerializer_1_t25950CBD2D435A56C7706C95DF7C90AED81EDA27 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_t25950CBD2D435A56C7706C95DF7C90AED81EDA27 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Resolution>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m5C1566B3EEF93BA28C52D0E2F7D4DCC2D6F12C35_gshared (_UntypedToTypedSerializerAdapter_1_t8BCA1089B80C69AC6A81BCA6235F47F5F18BBAAF * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767  ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767  L_2 = ___item1;
		Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767  L_3 = (Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Resolution>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767  _UntypedToTypedSerializerAdapter_1_DoDeserialize_mEC2ABA89AF417D87040CFC27E66113BD5126C944_gshared (_UntypedToTypedSerializerAdapter_1_t8BCA1089B80C69AC6A81BCA6235F47F5F18BBAAF * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 )((*(Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 *)((Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.SByte>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m940EDC7C0992AA436E2D12599EFBDDE61DBFA751_gshared (_UntypedToTypedSerializerAdapter_1_t295A3C32ADF22B30795C6C3E079E805F1B8C78D0 * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_t5D31C9022FE55E465433293FF7A15960E2383F44 *)__this);
		((  void (*) (BaseItemSerializer_1_t5D31C9022FE55E465433293FF7A15960E2383F44 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_t5D31C9022FE55E465433293FF7A15960E2383F44 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.SByte>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m4C820F00C607901C436541CBAC29387750136910_gshared (_UntypedToTypedSerializerAdapter_1_t295A3C32ADF22B30795C6C3E079E805F1B8C78D0 * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, int8_t ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		int8_t L_2 = ___item1;
		int8_t L_3 = L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.SByte>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_m267D534AD5D66C35399DBA3AFAC48C72F366CF5F_gshared (_UntypedToTypedSerializerAdapter_1_t295A3C32ADF22B30795C6C3E079E805F1B8C78D0 * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (int8_t)((*(int8_t*)((int8_t*)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Single>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m1E920E4089D836A62ACCDD78136E7EB4A4681A42_gshared (_UntypedToTypedSerializerAdapter_1_t8EA0C276E7368DDC6F39A263C6AD73A14BA7B1D2 * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_tBE2E41D5B73D31F45F68BE01F8B14A8741360498 *)__this);
		((  void (*) (BaseItemSerializer_1_tBE2E41D5B73D31F45F68BE01F8B14A8741360498 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_tBE2E41D5B73D31F45F68BE01F8B14A8741360498 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Single>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mB946CF51CE94587EE2E154D7AB3420FFA5E3F33A_gshared (_UntypedToTypedSerializerAdapter_1_t8EA0C276E7368DDC6F39A263C6AD73A14BA7B1D2 * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, float ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		float L_2 = ___item1;
		float L_3 = L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.Single>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _UntypedToTypedSerializerAdapter_1_DoDeserialize_m86EBD9DF8D1D2D0ECA4C768BDB61A1928C845E55_gshared (_UntypedToTypedSerializerAdapter_1_t8EA0C276E7368DDC6F39A263C6AD73A14BA7B1D2 * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (float)((*(float*)((float*)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt16>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m040DF4B77AC1BC5683CD3791B4D95D1BABBEB753_gshared (_UntypedToTypedSerializerAdapter_1_t4C1C9369653009559A0B1E338AB4E0DA6F45CFC0 * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_tBE5F2F8D26B5BD07111849CBAAE56F80A1B2EDF6 *)__this);
		((  void (*) (BaseItemSerializer_1_tBE5F2F8D26B5BD07111849CBAAE56F80A1B2EDF6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_tBE5F2F8D26B5BD07111849CBAAE56F80A1B2EDF6 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt16>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mB1AA4ED6014B1C33718081D1BC01370B2D26B401_gshared (_UntypedToTypedSerializerAdapter_1_t4C1C9369653009559A0B1E338AB4E0DA6F45CFC0 * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, uint16_t ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		uint16_t L_2 = ___item1;
		uint16_t L_3 = L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt16>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_m767DC529E7F49E425EAC7F94FB13FDBF47EC0DEC_gshared (_UntypedToTypedSerializerAdapter_1_t4C1C9369653009559A0B1E338AB4E0DA6F45CFC0 * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (uint16_t)((*(uint16_t*)((uint16_t*)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt32>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mD586111A7751B4944C8CFF4509E012E2C8ACC2DF_gshared (_UntypedToTypedSerializerAdapter_1_tD7DB551655CE22E92F277512A343628E87BAFB19 * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D *)__this);
		((  void (*) (BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_tED2BD4A07C5B12BDFAF8AFD2979B4685F556239D *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt32>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m0920EE2A7C6DC3757E45687A5A1E8695996478A5_gshared (_UntypedToTypedSerializerAdapter_1_tD7DB551655CE22E92F277512A343628E87BAFB19 * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, uint32_t ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		uint32_t L_2 = ___item1;
		uint32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt32>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_mFCAB7958D6CCE8A23A504BDBFE63C2FA7F4ED44B_gshared (_UntypedToTypedSerializerAdapter_1_tD7DB551655CE22E92F277512A343628E87BAFB19 * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (uint32_t)((*(uint32_t*)((uint32_t*)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt64>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m8F40D1845C30D867DDBB5C694D088ACC18B73773_gshared (_UntypedToTypedSerializerAdapter_1_t282610B9A6AF4F105F366140071114ED305B0854 * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_t872E3A292C0D48C2ABE12EC886C3AFBDDF077463 *)__this);
		((  void (*) (BaseItemSerializer_1_t872E3A292C0D48C2ABE12EC886C3AFBDDF077463 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_t872E3A292C0D48C2ABE12EC886C3AFBDDF077463 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt64>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m3A2DD38F8BEB6563D19899EFBC6A13598DCFD76D_gshared (_UntypedToTypedSerializerAdapter_1_t282610B9A6AF4F105F366140071114ED305B0854 * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, uint64_t ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		uint64_t L_2 = ___item1;
		uint64_t L_3 = L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<System.UInt64>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_mE83EC4D361295F59F0972FB78B3ADCC537C12F3A_gshared (_UntypedToTypedSerializerAdapter_1_t282610B9A6AF4F105F366140071114ED305B0854 * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (uint64_t)((*(uint64_t*)((uint64_t*)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector2>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mA920834ADB247195B5717B6F3477262F1A3E3BB5_gshared (_UntypedToTypedSerializerAdapter_1_t17167D6794DF0164C8BF891A27AF49D5CBF414F0 * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_t3876C9EE4FD05BBCF445498460670F429C5B7B26 *)__this);
		((  void (*) (BaseItemSerializer_1_t3876C9EE4FD05BBCF445498460670F429C5B7B26 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_t3876C9EE4FD05BBCF445498460670F429C5B7B26 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector2>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mBD47DF40473BE739115238FC462CBCEC330E2BE5_gshared (_UntypedToTypedSerializerAdapter_1_t17167D6794DF0164C8BF891A27AF49D5CBF414F0 * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___item1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector2>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  _UntypedToTypedSerializerAdapter_1_DoDeserialize_mAC12BA23E7ECACC2F4959E68843055043D4D09A8_gshared (_UntypedToTypedSerializerAdapter_1_t17167D6794DF0164C8BF891A27AF49D5CBF414F0 * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )((*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector3>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m28A3E3858B2636FA5A71C6C857BF9509E70ACDB3_gshared (_UntypedToTypedSerializerAdapter_1_t7C022E20832A3506C44B7FB257D7E25433752360 * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_tE74345F47D9357E29966B2A32C87452A84C34449 *)__this);
		((  void (*) (BaseItemSerializer_1_tE74345F47D9357E29966B2A32C87452A84C34449 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_tE74345F47D9357E29966B2A32C87452A84C34449 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector3>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m8EEE6E03FFBB38780B3CA008893E744537EB5DD0_gshared (_UntypedToTypedSerializerAdapter_1_t7C022E20832A3506C44B7FB257D7E25433752360 * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___item1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector3>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _UntypedToTypedSerializerAdapter_1_DoDeserialize_mCFA426DE50AE4330BAE2B9407F5B7D6F155B4B81_gshared (_UntypedToTypedSerializerAdapter_1_t7C022E20832A3506C44B7FB257D7E25433752360 * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )((*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector4>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m29AD3FDFC6D0881DB3512637BE0E525B626D5F79_gshared (_UntypedToTypedSerializerAdapter_1_t1EF5B49397051B5C8359B970B548EF24F2FEDBA0 * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_tA2638A1CB0CD1FC466D6D66B209D2BDD09D2123D *)__this);
		((  void (*) (BaseItemSerializer_1_tA2638A1CB0CD1FC466D6D66B209D2BDD09D2123D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_tA2638A1CB0CD1FC466D6D66B209D2BDD09D2123D *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector4>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m4F037062FB71909442DE43F33A034A048C05D37E_gshared (_UntypedToTypedSerializerAdapter_1_t1EF5B49397051B5C8359B970B548EF24F2FEDBA0 * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2 = ___item1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<UnityEngine.Vector4>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  _UntypedToTypedSerializerAdapter_1_DoDeserialize_m802723AAA2C795BDD7300EF3D3EE755169BEF88C_gshared (_UntypedToTypedSerializerAdapter_1_t1EF5B49397051B5C8359B970B548EF24F2FEDBA0 * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )((*(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m90F677F732DB7D6C751C6C766F1A6A5422C00D66_gshared (_UntypedToTypedSerializerAdapter_1_tE110E7B7524D1A3107C32AB080C89C0E2404330E * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_t8263500965A6A9165036809F43FF16B708B494BD *)__this);
		((  void (*) (BaseItemSerializer_1_t8263500965A6A9165036809F43FF16B708B494BD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_t8263500965A6A9165036809F43FF16B708B494BD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m335B4A55ECE032162BF8ABAC0088732337BEB015_gshared (_UntypedToTypedSerializerAdapter_1_tE110E7B7524D1A3107C32AB080C89C0E2404330E * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, _NetworkIdAndData_tCA053EC05E7A3E1155C4A0C0A257EA3F036D5E27  ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		_NetworkIdAndData_tCA053EC05E7A3E1155C4A0C0A257EA3F036D5E27  L_2 = ___item1;
		_NetworkIdAndData_tCA053EC05E7A3E1155C4A0C0A257EA3F036D5E27  L_3 = (_NetworkIdAndData_tCA053EC05E7A3E1155C4A0C0A257EA3F036D5E27 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.HlapiSession/_NetworkIdAndData>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR _NetworkIdAndData_tCA053EC05E7A3E1155C4A0C0A257EA3F036D5E27  _UntypedToTypedSerializerAdapter_1_DoDeserialize_mA1F5E56CB5B9C5AAD6CDFD2B60307E1BB2F9D22C_gshared (_UntypedToTypedSerializerAdapter_1_tE110E7B7524D1A3107C32AB080C89C0E2404330E * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (_NetworkIdAndData_tCA053EC05E7A3E1155C4A0C0A257EA3F036D5E27 )((*(_NetworkIdAndData_tCA053EC05E7A3E1155C4A0C0A257EA3F036D5E27 *)((_NetworkIdAndData_tCA053EC05E7A3E1155C4A0C0A257EA3F036D5E27 *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m3B59F01956A6854CB90CD54EC355621C2F52F649_gshared (_UntypedToTypedSerializerAdapter_1_tACABDF5D8489EB817A4E54F2799856FA1C3E78FC * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_t10751672E010A3255A897F5EE859FFDC8B9DB643 *)__this);
		((  void (*) (BaseItemSerializer_1_t10751672E010A3255A897F5EE859FFDC8B9DB643 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_t10751672E010A3255A897F5EE859FFDC8B9DB643 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m8AF0CAB66F8797DEE0EB2A5DD6DE85DF93CFBEE7_gshared (_UntypedToTypedSerializerAdapter_1_tACABDF5D8489EB817A4E54F2799856FA1C3E78FC * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, _NetworkGroupData_tFD440FE32343F1FEC0FF7780582D1CFA8CCFD264  ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		_NetworkGroupData_tFD440FE32343F1FEC0FF7780582D1CFA8CCFD264  L_2 = ___item1;
		_NetworkGroupData_tFD440FE32343F1FEC0FF7780582D1CFA8CCFD264  L_3 = (_NetworkGroupData_tFD440FE32343F1FEC0FF7780582D1CFA8CCFD264 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.NetworkGroup/_NetworkGroupData>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR _NetworkGroupData_tFD440FE32343F1FEC0FF7780582D1CFA8CCFD264  _UntypedToTypedSerializerAdapter_1_DoDeserialize_mE3A919E364AE59A21242CF517A7DF3547F2B9C4E_gshared (_UntypedToTypedSerializerAdapter_1_tACABDF5D8489EB817A4E54F2799856FA1C3E78FC * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (_NetworkGroupData_tFD440FE32343F1FEC0FF7780582D1CFA8CCFD264 )((*(_NetworkGroupData_tFD440FE32343F1FEC0FF7780582D1CFA8CCFD264 *)((_NetworkGroupData_tFD440FE32343F1FEC0FF7780582D1CFA8CCFD264 *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mD9E14F1D920D9122EFC59E5CEA9EB0E16880B696_gshared (_UntypedToTypedSerializerAdapter_1_tA1EEB9D2298471814FC8130462B0B0CD429EA37A * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_t2CC1EE42BB59FC91F0290F706BC1C0B136DE6169 *)__this);
		((  void (*) (BaseItemSerializer_1_t2CC1EE42BB59FC91F0290F706BC1C0B136DE6169 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_t2CC1EE42BB59FC91F0290F706BC1C0B136DE6169 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m57083D105D8669B780ECB4EB9B5923FB561AE96E_gshared (_UntypedToTypedSerializerAdapter_1_tA1EEB9D2298471814FC8130462B0B0CD429EA37A * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, SpawnMessage_tAD71A12CFC6A3B559B88F18C10D3CD8CCFE2D094  ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		SpawnMessage_tAD71A12CFC6A3B559B88F18C10D3CD8CCFE2D094  L_2 = ___item1;
		SpawnMessage_tAD71A12CFC6A3B559B88F18C10D3CD8CCFE2D094  L_3 = (SpawnMessage_tAD71A12CFC6A3B559B88F18C10D3CD8CCFE2D094 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.NetworkSpawner/SpawnMessage>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpawnMessage_tAD71A12CFC6A3B559B88F18C10D3CD8CCFE2D094  _UntypedToTypedSerializerAdapter_1_DoDeserialize_m58476E1FC05237D74FD49E2F840ECB9FEFE98704_gshared (_UntypedToTypedSerializerAdapter_1_tA1EEB9D2298471814FC8130462B0B0CD429EA37A * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (SpawnMessage_tAD71A12CFC6A3B559B88F18C10D3CD8CCFE2D094 )((*(SpawnMessage_tAD71A12CFC6A3B559B88F18C10D3CD8CCFE2D094 *)((SpawnMessage_tAD71A12CFC6A3B559B88F18C10D3CD8CCFE2D094 *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform>::.ctor(Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mC1CE5E5523C84D0644194877B03897D1234CA814_gshared (_UntypedToTypedSerializerAdapter_1_t5EB04269E4140B64C14434ADE88955698D639A78 * __this, RuntimeObject* ___untypedSerializer0, const RuntimeMethod* method)
{
	{
		// internal _UntypedToTypedSerializerAdapter(IItemSerializer untypedSerializer)
		NullCheck((BaseItemSerializer_1_t5487BE579A8D8D71FAA95C9A6BF7F75CF9435337 *)__this);
		((  void (*) (BaseItemSerializer_1_t5487BE579A8D8D71FAA95C9A6BF7F75CF9435337 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((BaseItemSerializer_1_t5487BE579A8D8D71FAA95C9A6BF7F75CF9435337 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// _untypedSerializer = untypedSerializer;
		RuntimeObject* L_0 = ___untypedSerializer0;
		__this->set__untypedSerializer_1(L_0);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform>::DoSerialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m28E8C4647F0DA331216EC1371E88D08A5C3FFBBF_gshared (_UntypedToTypedSerializerAdapter_1_t5EB04269E4140B64C14434ADE88955698D639A78 * __this, BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * ___serializer0, PackedTransform_t3F7E9D55B33D3C2540892C4436BEEFDB43472353  ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _untypedSerializer.Serialize(serializer, item);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA * L_1 = ___serializer0;
		PackedTransform_t3F7E9D55B33D3C2540892C4436BEEFDB43472353  L_2 = ___item1;
		PackedTransform_t3F7E9D55B33D3C2540892C4436BEEFDB43472353  L_3 = (PackedTransform_t3F7E9D55B33D3C2540892C4436BEEFDB43472353 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_3);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *, RuntimeObject * >::Invoke(1 /* System.Void Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,System.Object) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinarySerializer_tEB44E42980ED067A6DFBFEEA2F81454B2FF7FECA *)L_1, (RuntimeObject *)L_4);
		// }
		return;
	}
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers._UntypedToTypedSerializerAdapter`1<Niantic.ARDK.Networking.HLAPI.Object.Unity.UnreliableBroadcastTransformPacker/PackedTransform>::DoDeserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PackedTransform_t3F7E9D55B33D3C2540892C4436BEEFDB43472353  _UntypedToTypedSerializerAdapter_1_DoDeserialize_mD9844E98110A7198521C7A8E982C2087C42E36BD_gshared (_UntypedToTypedSerializerAdapter_1_t5EB04269E4140B64C14434ADE88955698D639A78 * __this, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * ___deserializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object result = _untypedSerializer.Deserialize(deserializer);
		RuntimeObject* L_0 = (RuntimeObject*)__this->get__untypedSerializer_1();
		BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * L_1 = ___deserializer0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B * >::Invoke(2 /* System.Object Niantic.ARDK.Utilities.BinarySerialization.IItemSerializer::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer) */, IItemSerializer_t2CA19D5FCF6605754365F16945A4A4EEDF4A12F8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (BinaryDeserializer_tEA64EB9C217B0753D83A7878E09E4F404237514B *)L_1);
		// return (T)result;
		return (PackedTransform_t3F7E9D55B33D3C2540892C4436BEEFDB43472353 )((*(PackedTransform_t3F7E9D55B33D3C2540892C4436BEEFDB43472353 *)((PackedTransform_t3F7E9D55B33D3C2540892C4436BEEFDB43472353 *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)))));
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
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ctor_mBE349F4252CDEEF4586CED766C66BFB11CF8C7D2_gshared (_WeakValueDictionary_2_t911B1421F837504D8163F073210FC14DDCB92359 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t7023D6B65025CC628DA6EC7962BAE3B2B8E2FED2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal ConcurrentDictionary<TKey, WeakReference> _innerDictionary =
		//   new ConcurrentDictionary<TKey, WeakReference>();
		ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 * L_0 = (ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set__innerDictionary_1(L_0);
		// internal _WeakValueDictionary()
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// _GcObserver._GcHappened += _ClearCollectedValues;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_1, (RuntimeObject *)__this, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(_GcObserver_t7023D6B65025CC628DA6EC7962BAE3B2B8E2FED2_il2cpp_TypeInfo_var);
		_GcObserver_add__GcHappened_mC21FB543C49ED63EB07119B5D90427250041A075((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2_Dispose_m09EAA0228DDD70D9963013E40DEF12289CF1B7D8_gshared (_WeakValueDictionary_2_t911B1421F837504D8163F073210FC14DDCB92359 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t7023D6B65025CC628DA6EC7962BAE3B2B8E2FED2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _GcObserver._GcHappened -= _ClearCollectedValues;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, (RuntimeObject *)__this, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(_GcObserver_t7023D6B65025CC628DA6EC7962BAE3B2B8E2FED2_il2cpp_TypeInfo_var);
		_GcObserver_remove__GcHappened_mDD67EE02D88F0FE7571EFC359B0B880E012CAC0D((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_0, /*hidden argument*/NULL);
		// _innerDictionary = null;
		__this->set__innerDictionary_1((ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetEnumerator_m31478CA90B2B69803B747FB547241F8662287B8C_gshared (_WeakValueDictionary_2_t911B1421F837504D8163F073210FC14DDCB92359 * __this, const RuntimeMethod* method)
{
	{
		// return _innerDictionary.GetEnumerator();
		ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 * L_0 = (ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)__this->get__innerDictionary_1();
		NullCheck((ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_1;
	}
}
// System.Int32 Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _WeakValueDictionary_2_get_Count_m645408AF47B433DE2108D64BE16136C2FF4B7947_gshared (_WeakValueDictionary_2_t911B1421F837504D8163F073210FC14DDCB92359 * __this, const RuntimeMethod* method)
{
	{
		// get { return _innerDictionary.Count; }
		ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 * L_0 = (ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)__this->get__innerDictionary_1();
		NullCheck((ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return (int32_t)L_1;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::_ClearCollectedValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ClearCollectedValues_mEDB0745C25B0D8F005AE83EE4F3D7942D97BA448_gshared (_WeakValueDictionary_2_t911B1421F837504D8163F073210FC14DDCB92359 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t2DD2ADB8375EB792B15593D6EC22586CBA0E52D6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_2 = NULL;
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_3 = NULL;
	bool V_4 = false;
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (var pair in _innerDictionary)
		ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 * L_0 = (ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)__this->get__innerDictionary_1();
		NullCheck((ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (RuntimeObject*)L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005c;
		}

IL_000e:
		{
			// foreach (var pair in _innerDictionary)
			RuntimeObject* L_2 = V_0;
			NullCheck((RuntimeObject*)L_2);
			KeyValuePair_2_t2DD2ADB8375EB792B15593D6EC22586CBA0E52D6  L_3;
			L_3 = InterfaceFuncInvoker0< KeyValuePair_2_t2DD2ADB8375EB792B15593D6EC22586CBA0E52D6  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.WeakReference>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_2);
			V_1 = (KeyValuePair_2_t2DD2ADB8375EB792B15593D6EC22586CBA0E52D6 )L_3;
			// var weakReference = pair.Value;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_4;
			L_4 = KeyValuePair_2_get_Value_m53B133E79E8E3F1AF0D659A5C9D3CFCE3B5443A7_inline((KeyValuePair_2_t2DD2ADB8375EB792B15593D6EC22586CBA0E52D6 *)(KeyValuePair_2_t2DD2ADB8375EB792B15593D6EC22586CBA0E52D6 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
			V_2 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_4;
			// if (!weakReference.IsAlive)
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_5 = V_2;
			NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_5);
			bool L_6;
			L_6 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_5);
			if (L_6)
			{
				goto IL_005c;
			}
		}

IL_0025:
		{
			// lock (weakReference)
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_7 = V_2;
			V_3 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_7;
			V_4 = (bool)0;
		}

IL_002a:
		try
		{ // begin try (depth: 2)
			{
				WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_8 = V_3;
				Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_8, (bool*)(bool*)(&V_4), /*hidden argument*/NULL);
				// if (!weakReference.IsAlive)
				WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_9 = V_2;
				NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_9);
				bool L_10;
				L_10 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_9);
				if (L_10)
				{
					goto IL_004f;
				}
			}

IL_003a:
			{
				// _innerDictionary.TryRemove(pair.Key, out _);
				ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 * L_11 = (ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)__this->get__innerDictionary_1();
				Guid_t  L_12;
				L_12 = KeyValuePair_2_get_Key_m0D034BC07982B9E2CCF633962770CFE8B6E998AD_inline((KeyValuePair_2_t2DD2ADB8375EB792B15593D6EC22586CBA0E52D6 *)(KeyValuePair_2_t2DD2ADB8375EB792B15593D6EC22586CBA0E52D6 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
				NullCheck((ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)L_11);
				bool L_13;
				L_13 = ((  bool (*) (ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *, Guid_t , WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)L_11, (Guid_t )L_12, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(&V_5), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
			}

IL_004f:
			{
				IL2CPP_LEAVE(0x5C, FINALLY_0051);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0051;
		}

FINALLY_0051:
		{ // begin finally (depth: 2)
			{
				bool L_14 = V_4;
				if (!L_14)
				{
					goto IL_005b;
				}
			}

IL_0055:
			{
				WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_15 = V_3;
				Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_15, /*hidden argument*/NULL);
			}

IL_005b:
			{
				IL2CPP_END_FINALLY(81)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(81)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x5C, IL_005c)
		}

IL_005c:
		{
			// foreach (var pair in _innerDictionary)
			RuntimeObject* L_16 = V_0;
			NullCheck((RuntimeObject*)L_16);
			bool L_17;
			L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
			if (L_17)
			{
				goto IL_000e;
			}
		}

IL_0064:
		{
			IL2CPP_LEAVE(0x70, FINALLY_0066);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0066;
	}

FINALLY_0066:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_18 = V_0;
			if (!L_18)
			{
				goto IL_006f;
			}
		}

IL_0069:
		{
			RuntimeObject* L_19 = V_0;
			NullCheck((RuntimeObject*)L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
		}

IL_006f:
		{
			IL2CPP_END_FINALLY(102)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(102)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x70, IL_0070)
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_TryAdd_mC039CDC4D093DED1EE41E8392FB6553B900391E5_gshared (_WeakValueDictionary_2_t911B1421F837504D8163F073210FC14DDCB92359 * __this, Guid_t  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_0 = NULL;
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_1 = NULL;
	bool V_2 = false;
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_3 = NULL;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryAdd_mC039CDC4D093DED1EE41E8392FB6553B900391E5_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 * L_2 = (ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)__this->get__innerDictionary_1();
		Guid_t  L_3 = ___key0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		Func_2_t131CF46BB444770C3596452E27104AEA3E5E1315 * L_4 = ((_WeakValueDictionary_2_t911B1421F837504D8163F073210FC14DDCB92359_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10)))->get__createWeakReference_0();
		NullCheck((ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)L_2);
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_5;
		L_5 = ((  WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * (*) (ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *, Guid_t , Func_2_t131CF46BB444770C3596452E27104AEA3E5E1315 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)L_2, (Guid_t )L_3, (Func_2_t131CF46BB444770C3596452E27104AEA3E5E1315 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		V_0 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_5;
		// if (weakReference.IsAlive)
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_6 = V_0;
		NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_6);
		bool L_7;
		L_7 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_6);
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002f:
	{
		// lock (weakReference)
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_8 = V_0;
		V_1 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_8;
		V_2 = (bool)0;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		{
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_9 = V_1;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_9, (bool*)(bool*)(&V_2), /*hidden argument*/NULL);
			// if (weakReference.IsAlive)
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_10 = V_0;
			NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_10);
			bool L_11;
			L_11 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_10);
			if (!L_11)
			{
				goto IL_0048;
			}
		}

IL_0043:
		{
			// return false;
			V_4 = (bool)0;
			IL2CPP_LEAVE(0x87, FINALLY_007d);
		}

IL_0048:
		{
			// weakReference.Target = value;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_12 = V_0;
			RuntimeObject * L_13 = ___value1;
			NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_12);
			VirtActionInvoker1< RuntimeObject * >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_12, (RuntimeObject *)L_13);
			// if (_innerDictionary.TryGetValue(key, out oldWeakReference))
			ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 * L_14 = (ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)__this->get__innerDictionary_1();
			Guid_t  L_15 = ___key0;
			NullCheck((ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)L_14);
			bool L_16;
			L_16 = ((  bool (*) (ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *, Guid_t , WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)L_14, (Guid_t )L_15, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(&V_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
			if (!L_16)
			{
				goto IL_006c;
			}
		}

IL_0064:
		{
			// return oldWeakReference == weakReference;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_17 = V_3;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_18 = V_0;
			V_4 = (bool)((((RuntimeObject*)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_17) == ((RuntimeObject*)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_18))? 1 : 0);
			IL2CPP_LEAVE(0x87, FINALLY_007d);
		}

IL_006c:
		{
			// return _innerDictionary.TryAdd(key, weakReference);
			ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 * L_19 = (ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)__this->get__innerDictionary_1();
			Guid_t  L_20 = ___key0;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_21 = V_0;
			NullCheck((ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)L_19);
			bool L_22;
			L_22 = ((  bool (*) (ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *, Guid_t , WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)L_19, (Guid_t )L_20, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
			V_4 = (bool)L_22;
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
			bool L_23 = V_2;
			if (!L_23)
			{
				goto IL_0086;
			}
		}

IL_0080:
		{
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_24 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_24, /*hidden argument*/NULL);
		}

IL_0086:
		{
			IL2CPP_END_FINALLY(125)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x87, IL_0087)
	}

IL_0087:
	{
		// }
		bool L_25 = V_4;
		return (bool)L_25;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::GetOrAdd(TKey,System.Func`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _WeakValueDictionary_2_GetOrAdd_mE6AD411558BAD4EA24B23262E36EB4F7F5BA35B4_gshared (_WeakValueDictionary_2_t911B1421F837504D8163F073210FC14DDCB92359 * __this, Guid_t  ___key0, Func_2_t6A121736FE14BF0AFCB3D3410B5EDD713E93F766 * ___createValue1, const RuntimeMethod* method)
{
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_2 = NULL;
	bool V_3 = false;
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_GetOrAdd_mE6AD411558BAD4EA24B23262E36EB4F7F5BA35B4_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 * L_2 = (ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)__this->get__innerDictionary_1();
		Guid_t  L_3 = ___key0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		Func_2_t131CF46BB444770C3596452E27104AEA3E5E1315 * L_4 = ((_WeakValueDictionary_2_t911B1421F837504D8163F073210FC14DDCB92359_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10)))->get__createWeakReference_0();
		NullCheck((ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)L_2);
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_5;
		L_5 = ((  WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * (*) (ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *, Guid_t , Func_2_t131CF46BB444770C3596452E27104AEA3E5E1315 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)L_2, (Guid_t )L_3, (Func_2_t131CF46BB444770C3596452E27104AEA3E5E1315 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		V_0 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_5;
	}

IL_0025:
	{
		// var untypedResult = weakReference.Target;
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_6 = V_0;
		NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_6);
		RuntimeObject * L_7;
		L_7 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_6);
		V_1 = (RuntimeObject *)L_7;
		// if (untypedResult != null)
		RuntimeObject * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		// return (TValue)untypedResult;
		RuntimeObject * L_9 = V_1;
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 12)));
	}

IL_0036:
	{
		// lock (weakReference)
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_10 = V_0;
		V_2 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_10;
		V_3 = (bool)0;
	}

IL_003a:
	try
	{ // begin try (depth: 1)
		{
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_11 = V_2;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_11, (bool*)(bool*)(&V_3), /*hidden argument*/NULL);
			// untypedResult = weakReference.Target;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_12 = V_0;
			NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_12);
			RuntimeObject * L_13;
			L_13 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_12);
			V_1 = (RuntimeObject *)L_13;
			// if (untypedResult != null)
			RuntimeObject * L_14 = V_1;
			if (!L_14)
			{
				goto IL_0056;
			}
		}

IL_004c:
		{
			// return (TValue)untypedResult;
			RuntimeObject * L_15 = V_1;
			V_6 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_15, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 12)));
			IL2CPP_LEAVE(0xAA, FINALLY_00a0);
		}

IL_0056:
		{
			// _innerDictionary.TryGetValue(key, out existingWeakReference);
			ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 * L_16 = (ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)__this->get__innerDictionary_1();
			Guid_t  L_17 = ___key0;
			NullCheck((ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)L_16);
			bool L_18;
			L_18 = ((  bool (*) (ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *, Guid_t , WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)L_16, (Guid_t )L_17, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(&V_4), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
			// if (existingWeakReference != weakReference)
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_19 = V_4;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_20 = V_0;
			if ((((RuntimeObject*)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_19) == ((RuntimeObject*)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_20)))
			{
				goto IL_0084;
			}
		}

IL_006a:
		{
			// if (existingWeakReference != null)
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_21 = V_4;
			if (!L_21)
			{
				goto IL_0073;
			}
		}

IL_006e:
		{
			// weakReference = existingWeakReference;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_22 = V_4;
			V_0 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_22;
			// continue;
			IL2CPP_LEAVE(0x25, FINALLY_00a0);
		}

IL_0073:
		{
			// if (!_innerDictionary.TryAdd(key, weakReference))
			ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 * L_23 = (ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)__this->get__innerDictionary_1();
			Guid_t  L_24 = ___key0;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_25 = V_0;
			NullCheck((ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)L_23);
			bool L_26;
			L_26 = ((  bool (*) (ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *, Guid_t , WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)L_23, (Guid_t )L_24, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_25, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
			if (L_26)
			{
				goto IL_0084;
			}
		}

IL_0082:
		{
			// break; // Means we will evaluate weakReference again. Go to NO-WEAK-REFERENCE-YET.
			IL2CPP_LEAVE(0x13, FINALLY_00a0);
		}

IL_0084:
		{
			// var result = createValue(key);
			Func_2_t6A121736FE14BF0AFCB3D3410B5EDD713E93F766 * L_27 = ___createValue1;
			Guid_t  L_28 = ___key0;
			NullCheck((Func_2_t6A121736FE14BF0AFCB3D3410B5EDD713E93F766 *)L_27);
			RuntimeObject * L_29;
			L_29 = ((  RuntimeObject * (*) (Func_2_t6A121736FE14BF0AFCB3D3410B5EDD713E93F766 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((Func_2_t6A121736FE14BF0AFCB3D3410B5EDD713E93F766 *)L_27, (Guid_t )L_28, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
			V_5 = (RuntimeObject *)L_29;
			// weakReference.Target = result;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_30 = V_0;
			RuntimeObject * L_31 = V_5;
			NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_30);
			VirtActionInvoker1< RuntimeObject * >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_30, (RuntimeObject *)L_31);
			// return result;
			RuntimeObject * L_32 = V_5;
			V_6 = (RuntimeObject *)L_32;
			IL2CPP_LEAVE(0xAA, FINALLY_00a0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a0;
	}

FINALLY_00a0:
	{ // begin finally (depth: 1)
		{
			bool L_33 = V_3;
			if (!L_33)
			{
				goto IL_00a9;
			}
		}

IL_00a3:
		{
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_34 = V_2;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_34, /*hidden argument*/NULL);
		}

IL_00a9:
		{
			IL2CPP_END_FINALLY(160)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(160)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAA, IL_00aa)
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_JUMP_TBL(0x13, IL_0013)
	}

IL_00aa:
	{
		// }
		RuntimeObject * L_35 = V_6;
		return (RuntimeObject *)L_35;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::TryGetValue(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _WeakValueDictionary_2_TryGetValue_m162CCAFD6B1FFA41F70371A4CC76663D1CF1D2E8_gshared (_WeakValueDictionary_2_t911B1421F837504D8163F073210FC14DDCB92359 * __this, Guid_t  ___key0, const RuntimeMethod* method)
{
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryGetValue_m162CCAFD6B1FFA41F70371A4CC76663D1CF1D2E8_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if (!_innerDictionary.TryGetValue(key, out weakReference))
		ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 * L_2 = (ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)__this->get__innerDictionary_1();
		Guid_t  L_3 = ___key0;
		NullCheck((ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *, Guid_t , WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)L_2, (Guid_t )L_3, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_5 = V_1;
		return (RuntimeObject *)L_5;
	}

IL_002d:
	{
		// return (TValue)weakReference.Target;
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_6 = V_0;
		NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_6);
		RuntimeObject * L_7;
		L_7 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_6);
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_7, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 12)));
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_Remove_m793BAE658F02D957A60F285B7FB53A9EE1C68B54_gshared (_WeakValueDictionary_2_t911B1421F837504D8163F073210FC14DDCB92359 * __this, Guid_t  ___key0, const RuntimeMethod* method)
{
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_0 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_Remove_m793BAE658F02D957A60F285B7FB53A9EE1C68B54_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _innerDictionary.TryRemove(key, out _);
		ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 * L_2 = (ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)__this->get__innerDictionary_1();
		Guid_t  L_3 = ___key0;
		NullCheck((ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *, Guid_t , WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((ConcurrentDictionary_2_t7B88B4727B451ABFAFB09EF832F0692E29696FF1 *)L_2, (Guid_t )L_3, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (bool)L_4;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Guid,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__cctor_m03EAD6B368F6A7D0A5AE52915A461D9BCE641829_gshared (const RuntimeMethod* method)
{
	{
		// private static readonly Func<TKey, WeakReference> _createWeakReference =
		//   (_) => new WeakReference(null);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		U3CU3Ec_t8CFD634201EF99D6851A554930DCE37CFD5785A4 * L_0 = ((U3CU3Ec_t8CFD634201EF99D6851A554930DCE37CFD5785A4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 16)))->get_U3CU3E9_0();
		Func_2_t131CF46BB444770C3596452E27104AEA3E5E1315 * L_1 = (Func_2_t131CF46BB444770C3596452E27104AEA3E5E1315 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		((  void (*) (Func_2_t131CF46BB444770C3596452E27104AEA3E5E1315 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19)->methodPointer)(L_1, (RuntimeObject *)L_0, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		((_WeakValueDictionary_2_t911B1421F837504D8163F073210FC14DDCB92359_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->set__createWeakReference_0(L_1);
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
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ctor_m7137B324FA7B4E133596CEFF13F02E9570437037_gshared (_WeakValueDictionary_2_t5FFE121F705DAFBFA3C08EC6AFD5CF4D0F922E5F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t7023D6B65025CC628DA6EC7962BAE3B2B8E2FED2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal ConcurrentDictionary<TKey, WeakReference> _innerDictionary =
		//   new ConcurrentDictionary<TKey, WeakReference>();
		ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 * L_0 = (ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set__innerDictionary_1(L_0);
		// internal _WeakValueDictionary()
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// _GcObserver._GcHappened += _ClearCollectedValues;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_1, (RuntimeObject *)__this, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(_GcObserver_t7023D6B65025CC628DA6EC7962BAE3B2B8E2FED2_il2cpp_TypeInfo_var);
		_GcObserver_add__GcHappened_mC21FB543C49ED63EB07119B5D90427250041A075((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2_Dispose_m484E99920E8E169E5442CBA0E9FE3D5EC5BE94F8_gshared (_WeakValueDictionary_2_t5FFE121F705DAFBFA3C08EC6AFD5CF4D0F922E5F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t7023D6B65025CC628DA6EC7962BAE3B2B8E2FED2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _GcObserver._GcHappened -= _ClearCollectedValues;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, (RuntimeObject *)__this, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(_GcObserver_t7023D6B65025CC628DA6EC7962BAE3B2B8E2FED2_il2cpp_TypeInfo_var);
		_GcObserver_remove__GcHappened_mDD67EE02D88F0FE7571EFC359B0B880E012CAC0D((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_0, /*hidden argument*/NULL);
		// _innerDictionary = null;
		__this->set__innerDictionary_1((ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetEnumerator_m6D867899A591EE868E17B581255DBF22C1FE17B4_gshared (_WeakValueDictionary_2_t5FFE121F705DAFBFA3C08EC6AFD5CF4D0F922E5F * __this, const RuntimeMethod* method)
{
	{
		// return _innerDictionary.GetEnumerator();
		ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 * L_0 = (ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)__this->get__innerDictionary_1();
		NullCheck((ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_1;
	}
}
// System.Int32 Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _WeakValueDictionary_2_get_Count_m3F7393BC18BAE1C615AD4F08024FD52DE63E54DE_gshared (_WeakValueDictionary_2_t5FFE121F705DAFBFA3C08EC6AFD5CF4D0F922E5F * __this, const RuntimeMethod* method)
{
	{
		// get { return _innerDictionary.Count; }
		ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 * L_0 = (ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)__this->get__innerDictionary_1();
		NullCheck((ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return (int32_t)L_1;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::_ClearCollectedValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ClearCollectedValues_m49263893CE366350A9496C4F99221745B26D77CD_gshared (_WeakValueDictionary_2_t5FFE121F705DAFBFA3C08EC6AFD5CF4D0F922E5F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tEADE5527AB5FCAE71705D641CCEC5B598079D344  V_1;
	memset((&V_1), 0, sizeof(V_1));
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_2 = NULL;
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_3 = NULL;
	bool V_4 = false;
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (var pair in _innerDictionary)
		ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 * L_0 = (ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)__this->get__innerDictionary_1();
		NullCheck((ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (RuntimeObject*)L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005c;
		}

IL_000e:
		{
			// foreach (var pair in _innerDictionary)
			RuntimeObject* L_2 = V_0;
			NullCheck((RuntimeObject*)L_2);
			KeyValuePair_2_tEADE5527AB5FCAE71705D641CCEC5B598079D344  L_3;
			L_3 = InterfaceFuncInvoker0< KeyValuePair_2_tEADE5527AB5FCAE71705D641CCEC5B598079D344  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.WeakReference>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_2);
			V_1 = (KeyValuePair_2_tEADE5527AB5FCAE71705D641CCEC5B598079D344 )L_3;
			// var weakReference = pair.Value;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_4;
			L_4 = KeyValuePair_2_get_Value_mBA0CCF1B31C92068C8F82E4BE95105D85641BCCD_inline((KeyValuePair_2_tEADE5527AB5FCAE71705D641CCEC5B598079D344 *)(KeyValuePair_2_tEADE5527AB5FCAE71705D641CCEC5B598079D344 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
			V_2 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_4;
			// if (!weakReference.IsAlive)
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_5 = V_2;
			NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_5);
			bool L_6;
			L_6 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_5);
			if (L_6)
			{
				goto IL_005c;
			}
		}

IL_0025:
		{
			// lock (weakReference)
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_7 = V_2;
			V_3 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_7;
			V_4 = (bool)0;
		}

IL_002a:
		try
		{ // begin try (depth: 2)
			{
				WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_8 = V_3;
				Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_8, (bool*)(bool*)(&V_4), /*hidden argument*/NULL);
				// if (!weakReference.IsAlive)
				WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_9 = V_2;
				NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_9);
				bool L_10;
				L_10 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_9);
				if (L_10)
				{
					goto IL_004f;
				}
			}

IL_003a:
			{
				// _innerDictionary.TryRemove(pair.Key, out _);
				ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 * L_11 = (ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)__this->get__innerDictionary_1();
				intptr_t L_12;
				L_12 = KeyValuePair_2_get_Key_mAC3D255E0FAEFDD8084F1D9DCE05A6FE7CD996E4_inline((KeyValuePair_2_tEADE5527AB5FCAE71705D641CCEC5B598079D344 *)(KeyValuePair_2_tEADE5527AB5FCAE71705D641CCEC5B598079D344 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
				NullCheck((ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)L_11);
				bool L_13;
				L_13 = ((  bool (*) (ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *, intptr_t, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)L_11, (intptr_t)L_12, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(&V_5), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
			}

IL_004f:
			{
				IL2CPP_LEAVE(0x5C, FINALLY_0051);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0051;
		}

FINALLY_0051:
		{ // begin finally (depth: 2)
			{
				bool L_14 = V_4;
				if (!L_14)
				{
					goto IL_005b;
				}
			}

IL_0055:
			{
				WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_15 = V_3;
				Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_15, /*hidden argument*/NULL);
			}

IL_005b:
			{
				IL2CPP_END_FINALLY(81)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(81)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x5C, IL_005c)
		}

IL_005c:
		{
			// foreach (var pair in _innerDictionary)
			RuntimeObject* L_16 = V_0;
			NullCheck((RuntimeObject*)L_16);
			bool L_17;
			L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
			if (L_17)
			{
				goto IL_000e;
			}
		}

IL_0064:
		{
			IL2CPP_LEAVE(0x70, FINALLY_0066);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0066;
	}

FINALLY_0066:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_18 = V_0;
			if (!L_18)
			{
				goto IL_006f;
			}
		}

IL_0069:
		{
			RuntimeObject* L_19 = V_0;
			NullCheck((RuntimeObject*)L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
		}

IL_006f:
		{
			IL2CPP_END_FINALLY(102)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(102)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x70, IL_0070)
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_TryAdd_mD4445991E0B99DF65A00DA158C2D21A603BF18D3_gshared (_WeakValueDictionary_2_t5FFE121F705DAFBFA3C08EC6AFD5CF4D0F922E5F * __this, intptr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_0 = NULL;
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_1 = NULL;
	bool V_2 = false;
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_3 = NULL;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryAdd_mD4445991E0B99DF65A00DA158C2D21A603BF18D3_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 * L_2 = (ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)__this->get__innerDictionary_1();
		intptr_t L_3 = ___key0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		Func_2_t8A32AFA946F2C87D6E65587D692EE290673AD33F * L_4 = ((_WeakValueDictionary_2_t5FFE121F705DAFBFA3C08EC6AFD5CF4D0F922E5F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10)))->get__createWeakReference_0();
		NullCheck((ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)L_2);
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_5;
		L_5 = ((  WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * (*) (ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *, intptr_t, Func_2_t8A32AFA946F2C87D6E65587D692EE290673AD33F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)L_2, (intptr_t)L_3, (Func_2_t8A32AFA946F2C87D6E65587D692EE290673AD33F *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		V_0 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_5;
		// if (weakReference.IsAlive)
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_6 = V_0;
		NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_6);
		bool L_7;
		L_7 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_6);
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002f:
	{
		// lock (weakReference)
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_8 = V_0;
		V_1 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_8;
		V_2 = (bool)0;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		{
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_9 = V_1;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_9, (bool*)(bool*)(&V_2), /*hidden argument*/NULL);
			// if (weakReference.IsAlive)
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_10 = V_0;
			NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_10);
			bool L_11;
			L_11 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_10);
			if (!L_11)
			{
				goto IL_0048;
			}
		}

IL_0043:
		{
			// return false;
			V_4 = (bool)0;
			IL2CPP_LEAVE(0x87, FINALLY_007d);
		}

IL_0048:
		{
			// weakReference.Target = value;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_12 = V_0;
			RuntimeObject * L_13 = ___value1;
			NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_12);
			VirtActionInvoker1< RuntimeObject * >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_12, (RuntimeObject *)L_13);
			// if (_innerDictionary.TryGetValue(key, out oldWeakReference))
			ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 * L_14 = (ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)__this->get__innerDictionary_1();
			intptr_t L_15 = ___key0;
			NullCheck((ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)L_14);
			bool L_16;
			L_16 = ((  bool (*) (ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *, intptr_t, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)L_14, (intptr_t)L_15, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(&V_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
			if (!L_16)
			{
				goto IL_006c;
			}
		}

IL_0064:
		{
			// return oldWeakReference == weakReference;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_17 = V_3;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_18 = V_0;
			V_4 = (bool)((((RuntimeObject*)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_17) == ((RuntimeObject*)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_18))? 1 : 0);
			IL2CPP_LEAVE(0x87, FINALLY_007d);
		}

IL_006c:
		{
			// return _innerDictionary.TryAdd(key, weakReference);
			ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 * L_19 = (ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)__this->get__innerDictionary_1();
			intptr_t L_20 = ___key0;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_21 = V_0;
			NullCheck((ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)L_19);
			bool L_22;
			L_22 = ((  bool (*) (ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *, intptr_t, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)L_19, (intptr_t)L_20, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
			V_4 = (bool)L_22;
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
			bool L_23 = V_2;
			if (!L_23)
			{
				goto IL_0086;
			}
		}

IL_0080:
		{
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_24 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_24, /*hidden argument*/NULL);
		}

IL_0086:
		{
			IL2CPP_END_FINALLY(125)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x87, IL_0087)
	}

IL_0087:
	{
		// }
		bool L_25 = V_4;
		return (bool)L_25;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::GetOrAdd(TKey,System.Func`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _WeakValueDictionary_2_GetOrAdd_m59D0D99214A566191AD2C2839966313F633139F1_gshared (_WeakValueDictionary_2_t5FFE121F705DAFBFA3C08EC6AFD5CF4D0F922E5F * __this, intptr_t ___key0, Func_2_tBAE19E72D7DA6A7039B9076A73522B08CCF10BAC * ___createValue1, const RuntimeMethod* method)
{
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_2 = NULL;
	bool V_3 = false;
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_GetOrAdd_m59D0D99214A566191AD2C2839966313F633139F1_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 * L_2 = (ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)__this->get__innerDictionary_1();
		intptr_t L_3 = ___key0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		Func_2_t8A32AFA946F2C87D6E65587D692EE290673AD33F * L_4 = ((_WeakValueDictionary_2_t5FFE121F705DAFBFA3C08EC6AFD5CF4D0F922E5F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10)))->get__createWeakReference_0();
		NullCheck((ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)L_2);
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_5;
		L_5 = ((  WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * (*) (ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *, intptr_t, Func_2_t8A32AFA946F2C87D6E65587D692EE290673AD33F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)L_2, (intptr_t)L_3, (Func_2_t8A32AFA946F2C87D6E65587D692EE290673AD33F *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		V_0 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_5;
	}

IL_0025:
	{
		// var untypedResult = weakReference.Target;
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_6 = V_0;
		NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_6);
		RuntimeObject * L_7;
		L_7 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_6);
		V_1 = (RuntimeObject *)L_7;
		// if (untypedResult != null)
		RuntimeObject * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		// return (TValue)untypedResult;
		RuntimeObject * L_9 = V_1;
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 12)));
	}

IL_0036:
	{
		// lock (weakReference)
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_10 = V_0;
		V_2 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_10;
		V_3 = (bool)0;
	}

IL_003a:
	try
	{ // begin try (depth: 1)
		{
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_11 = V_2;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_11, (bool*)(bool*)(&V_3), /*hidden argument*/NULL);
			// untypedResult = weakReference.Target;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_12 = V_0;
			NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_12);
			RuntimeObject * L_13;
			L_13 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_12);
			V_1 = (RuntimeObject *)L_13;
			// if (untypedResult != null)
			RuntimeObject * L_14 = V_1;
			if (!L_14)
			{
				goto IL_0056;
			}
		}

IL_004c:
		{
			// return (TValue)untypedResult;
			RuntimeObject * L_15 = V_1;
			V_6 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_15, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 12)));
			IL2CPP_LEAVE(0xAA, FINALLY_00a0);
		}

IL_0056:
		{
			// _innerDictionary.TryGetValue(key, out existingWeakReference);
			ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 * L_16 = (ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)__this->get__innerDictionary_1();
			intptr_t L_17 = ___key0;
			NullCheck((ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)L_16);
			bool L_18;
			L_18 = ((  bool (*) (ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *, intptr_t, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)L_16, (intptr_t)L_17, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(&V_4), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
			// if (existingWeakReference != weakReference)
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_19 = V_4;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_20 = V_0;
			if ((((RuntimeObject*)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_19) == ((RuntimeObject*)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_20)))
			{
				goto IL_0084;
			}
		}

IL_006a:
		{
			// if (existingWeakReference != null)
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_21 = V_4;
			if (!L_21)
			{
				goto IL_0073;
			}
		}

IL_006e:
		{
			// weakReference = existingWeakReference;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_22 = V_4;
			V_0 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_22;
			// continue;
			IL2CPP_LEAVE(0x25, FINALLY_00a0);
		}

IL_0073:
		{
			// if (!_innerDictionary.TryAdd(key, weakReference))
			ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 * L_23 = (ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)__this->get__innerDictionary_1();
			intptr_t L_24 = ___key0;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_25 = V_0;
			NullCheck((ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)L_23);
			bool L_26;
			L_26 = ((  bool (*) (ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *, intptr_t, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)L_23, (intptr_t)L_24, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_25, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
			if (L_26)
			{
				goto IL_0084;
			}
		}

IL_0082:
		{
			// break; // Means we will evaluate weakReference again. Go to NO-WEAK-REFERENCE-YET.
			IL2CPP_LEAVE(0x13, FINALLY_00a0);
		}

IL_0084:
		{
			// var result = createValue(key);
			Func_2_tBAE19E72D7DA6A7039B9076A73522B08CCF10BAC * L_27 = ___createValue1;
			intptr_t L_28 = ___key0;
			NullCheck((Func_2_tBAE19E72D7DA6A7039B9076A73522B08CCF10BAC *)L_27);
			RuntimeObject * L_29;
			L_29 = ((  RuntimeObject * (*) (Func_2_tBAE19E72D7DA6A7039B9076A73522B08CCF10BAC *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((Func_2_tBAE19E72D7DA6A7039B9076A73522B08CCF10BAC *)L_27, (intptr_t)L_28, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
			V_5 = (RuntimeObject *)L_29;
			// weakReference.Target = result;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_30 = V_0;
			RuntimeObject * L_31 = V_5;
			NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_30);
			VirtActionInvoker1< RuntimeObject * >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_30, (RuntimeObject *)L_31);
			// return result;
			RuntimeObject * L_32 = V_5;
			V_6 = (RuntimeObject *)L_32;
			IL2CPP_LEAVE(0xAA, FINALLY_00a0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a0;
	}

FINALLY_00a0:
	{ // begin finally (depth: 1)
		{
			bool L_33 = V_3;
			if (!L_33)
			{
				goto IL_00a9;
			}
		}

IL_00a3:
		{
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_34 = V_2;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_34, /*hidden argument*/NULL);
		}

IL_00a9:
		{
			IL2CPP_END_FINALLY(160)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(160)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAA, IL_00aa)
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_JUMP_TBL(0x13, IL_0013)
	}

IL_00aa:
	{
		// }
		RuntimeObject * L_35 = V_6;
		return (RuntimeObject *)L_35;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::TryGetValue(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _WeakValueDictionary_2_TryGetValue_mE4A2DDD510D94F344B7B9DC3DF044FDFA9DA1101_gshared (_WeakValueDictionary_2_t5FFE121F705DAFBFA3C08EC6AFD5CF4D0F922E5F * __this, intptr_t ___key0, const RuntimeMethod* method)
{
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryGetValue_mE4A2DDD510D94F344B7B9DC3DF044FDFA9DA1101_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if (!_innerDictionary.TryGetValue(key, out weakReference))
		ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 * L_2 = (ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)__this->get__innerDictionary_1();
		intptr_t L_3 = ___key0;
		NullCheck((ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *, intptr_t, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)L_2, (intptr_t)L_3, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_5 = V_1;
		return (RuntimeObject *)L_5;
	}

IL_002d:
	{
		// return (TValue)weakReference.Target;
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_6 = V_0;
		NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_6);
		RuntimeObject * L_7;
		L_7 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_6);
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_7, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 12)));
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_Remove_m737F7581CBAEAD51C7BADE571C0BBE9E41CB0B7F_gshared (_WeakValueDictionary_2_t5FFE121F705DAFBFA3C08EC6AFD5CF4D0F922E5F * __this, intptr_t ___key0, const RuntimeMethod* method)
{
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_0 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_Remove_m737F7581CBAEAD51C7BADE571C0BBE9E41CB0B7F_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _innerDictionary.TryRemove(key, out _);
		ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 * L_2 = (ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)__this->get__innerDictionary_1();
		intptr_t L_3 = ___key0;
		NullCheck((ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *, intptr_t, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((ConcurrentDictionary_2_tEBA89FDBD48DD93D5C945C6C6C509AEB34D9CA81 *)L_2, (intptr_t)L_3, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (bool)L_4;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.IntPtr,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__cctor_m07E5E481A99C006413BBA1BE67AB93B9ED10BB1D_gshared (const RuntimeMethod* method)
{
	{
		// private static readonly Func<TKey, WeakReference> _createWeakReference =
		//   (_) => new WeakReference(null);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		U3CU3Ec_t528652B518E0AE22F58D23BFE364E944DC9C2640 * L_0 = ((U3CU3Ec_t528652B518E0AE22F58D23BFE364E944DC9C2640_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 16)))->get_U3CU3E9_0();
		Func_2_t8A32AFA946F2C87D6E65587D692EE290673AD33F * L_1 = (Func_2_t8A32AFA946F2C87D6E65587D692EE290673AD33F *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		((  void (*) (Func_2_t8A32AFA946F2C87D6E65587D692EE290673AD33F *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19)->methodPointer)(L_1, (RuntimeObject *)L_0, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		((_WeakValueDictionary_2_t5FFE121F705DAFBFA3C08EC6AFD5CF4D0F922E5F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->set__createWeakReference_0(L_1);
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
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ctor_m3F4DBFEC29045B466CE09EC812AC22A8C99D8E43_gshared (_WeakValueDictionary_2_tD06DE5465D7E4C3663B49E82C0B93BEAC4C2C493 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t7023D6B65025CC628DA6EC7962BAE3B2B8E2FED2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal ConcurrentDictionary<TKey, WeakReference> _innerDictionary =
		//   new ConcurrentDictionary<TKey, WeakReference>();
		ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 * L_0 = (ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set__innerDictionary_1(L_0);
		// internal _WeakValueDictionary()
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// _GcObserver._GcHappened += _ClearCollectedValues;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_1, (RuntimeObject *)__this, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(_GcObserver_t7023D6B65025CC628DA6EC7962BAE3B2B8E2FED2_il2cpp_TypeInfo_var);
		_GcObserver_add__GcHappened_mC21FB543C49ED63EB07119B5D90427250041A075((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2_Dispose_mC90DACEA8D0D8BB4C9404663B80E2CE48B423AB6_gshared (_WeakValueDictionary_2_tD06DE5465D7E4C3663B49E82C0B93BEAC4C2C493 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t7023D6B65025CC628DA6EC7962BAE3B2B8E2FED2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _GcObserver._GcHappened -= _ClearCollectedValues;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, (RuntimeObject *)__this, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(_GcObserver_t7023D6B65025CC628DA6EC7962BAE3B2B8E2FED2_il2cpp_TypeInfo_var);
		_GcObserver_remove__GcHappened_mDD67EE02D88F0FE7571EFC359B0B880E012CAC0D((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_0, /*hidden argument*/NULL);
		// _innerDictionary = null;
		__this->set__innerDictionary_1((ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetEnumerator_mBB62E2CB2C71F2A25F4E2A95E1669621E8FCAE07_gshared (_WeakValueDictionary_2_tD06DE5465D7E4C3663B49E82C0B93BEAC4C2C493 * __this, const RuntimeMethod* method)
{
	{
		// return _innerDictionary.GetEnumerator();
		ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 * L_0 = (ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)__this->get__innerDictionary_1();
		NullCheck((ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_1;
	}
}
// System.Int32 Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _WeakValueDictionary_2_get_Count_mFD53AD2884517695381EC8E78A692D2E32A58EB3_gshared (_WeakValueDictionary_2_tD06DE5465D7E4C3663B49E82C0B93BEAC4C2C493 * __this, const RuntimeMethod* method)
{
	{
		// get { return _innerDictionary.Count; }
		ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 * L_0 = (ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)__this->get__innerDictionary_1();
		NullCheck((ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return (int32_t)L_1;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::_ClearCollectedValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ClearCollectedValues_mC04F401B988448DDC69FFB88CD7FE717EF267FEB_gshared (_WeakValueDictionary_2_tD06DE5465D7E4C3663B49E82C0B93BEAC4C2C493 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tDB70CB08EDD9AC368147F64B26A736278DC2A0C0  V_1;
	memset((&V_1), 0, sizeof(V_1));
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_2 = NULL;
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_3 = NULL;
	bool V_4 = false;
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (var pair in _innerDictionary)
		ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 * L_0 = (ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)__this->get__innerDictionary_1();
		NullCheck((ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (RuntimeObject*)L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005c;
		}

IL_000e:
		{
			// foreach (var pair in _innerDictionary)
			RuntimeObject* L_2 = V_0;
			NullCheck((RuntimeObject*)L_2);
			KeyValuePair_2_tDB70CB08EDD9AC368147F64B26A736278DC2A0C0  L_3;
			L_3 = InterfaceFuncInvoker0< KeyValuePair_2_tDB70CB08EDD9AC368147F64B26A736278DC2A0C0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.WeakReference>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_2);
			V_1 = (KeyValuePair_2_tDB70CB08EDD9AC368147F64B26A736278DC2A0C0 )L_3;
			// var weakReference = pair.Value;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_4;
			L_4 = KeyValuePair_2_get_Value_m8A7340E13D07A5820B807E97A4BA53086558CCCF_inline((KeyValuePair_2_tDB70CB08EDD9AC368147F64B26A736278DC2A0C0 *)(KeyValuePair_2_tDB70CB08EDD9AC368147F64B26A736278DC2A0C0 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
			V_2 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_4;
			// if (!weakReference.IsAlive)
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_5 = V_2;
			NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_5);
			bool L_6;
			L_6 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_5);
			if (L_6)
			{
				goto IL_005c;
			}
		}

IL_0025:
		{
			// lock (weakReference)
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_7 = V_2;
			V_3 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_7;
			V_4 = (bool)0;
		}

IL_002a:
		try
		{ // begin try (depth: 2)
			{
				WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_8 = V_3;
				Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_8, (bool*)(bool*)(&V_4), /*hidden argument*/NULL);
				// if (!weakReference.IsAlive)
				WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_9 = V_2;
				NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_9);
				bool L_10;
				L_10 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_9);
				if (L_10)
				{
					goto IL_004f;
				}
			}

IL_003a:
			{
				// _innerDictionary.TryRemove(pair.Key, out _);
				ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 * L_11 = (ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)__this->get__innerDictionary_1();
				RuntimeObject * L_12;
				L_12 = KeyValuePair_2_get_Key_m3184FADC65C07CE46034A6445725401C30EFA6FD_inline((KeyValuePair_2_tDB70CB08EDD9AC368147F64B26A736278DC2A0C0 *)(KeyValuePair_2_tDB70CB08EDD9AC368147F64B26A736278DC2A0C0 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
				NullCheck((ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)L_11);
				bool L_13;
				L_13 = ((  bool (*) (ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *, RuntimeObject *, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)L_11, (RuntimeObject *)L_12, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(&V_5), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
			}

IL_004f:
			{
				IL2CPP_LEAVE(0x5C, FINALLY_0051);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0051;
		}

FINALLY_0051:
		{ // begin finally (depth: 2)
			{
				bool L_14 = V_4;
				if (!L_14)
				{
					goto IL_005b;
				}
			}

IL_0055:
			{
				WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_15 = V_3;
				Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_15, /*hidden argument*/NULL);
			}

IL_005b:
			{
				IL2CPP_END_FINALLY(81)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(81)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x5C, IL_005c)
		}

IL_005c:
		{
			// foreach (var pair in _innerDictionary)
			RuntimeObject* L_16 = V_0;
			NullCheck((RuntimeObject*)L_16);
			bool L_17;
			L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
			if (L_17)
			{
				goto IL_000e;
			}
		}

IL_0064:
		{
			IL2CPP_LEAVE(0x70, FINALLY_0066);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0066;
	}

FINALLY_0066:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_18 = V_0;
			if (!L_18)
			{
				goto IL_006f;
			}
		}

IL_0069:
		{
			RuntimeObject* L_19 = V_0;
			NullCheck((RuntimeObject*)L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
		}

IL_006f:
		{
			IL2CPP_END_FINALLY(102)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(102)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x70, IL_0070)
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_TryAdd_m22039B8A7E452816335950E3D57BC35D761B9636_gshared (_WeakValueDictionary_2_tD06DE5465D7E4C3663B49E82C0B93BEAC4C2C493 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_0 = NULL;
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_1 = NULL;
	bool V_2 = false;
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_3 = NULL;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// if (key == null)
		RuntimeObject * L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryAdd_m22039B8A7E452816335950E3D57BC35D761B9636_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 * L_2 = (ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)__this->get__innerDictionary_1();
		RuntimeObject * L_3 = ___key0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		Func_2_tF05B6390930504E1770237C3D8CD743603F0426F * L_4 = ((_WeakValueDictionary_2_tD06DE5465D7E4C3663B49E82C0B93BEAC4C2C493_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10)))->get__createWeakReference_0();
		NullCheck((ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)L_2);
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_5;
		L_5 = ((  WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * (*) (ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *, RuntimeObject *, Func_2_tF05B6390930504E1770237C3D8CD743603F0426F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)L_2, (RuntimeObject *)L_3, (Func_2_tF05B6390930504E1770237C3D8CD743603F0426F *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		V_0 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_5;
		// if (weakReference.IsAlive)
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_6 = V_0;
		NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_6);
		bool L_7;
		L_7 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_6);
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002f:
	{
		// lock (weakReference)
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_8 = V_0;
		V_1 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_8;
		V_2 = (bool)0;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		{
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_9 = V_1;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_9, (bool*)(bool*)(&V_2), /*hidden argument*/NULL);
			// if (weakReference.IsAlive)
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_10 = V_0;
			NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_10);
			bool L_11;
			L_11 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_10);
			if (!L_11)
			{
				goto IL_0048;
			}
		}

IL_0043:
		{
			// return false;
			V_4 = (bool)0;
			IL2CPP_LEAVE(0x87, FINALLY_007d);
		}

IL_0048:
		{
			// weakReference.Target = value;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_12 = V_0;
			RuntimeObject * L_13 = ___value1;
			NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_12);
			VirtActionInvoker1< RuntimeObject * >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_12, (RuntimeObject *)L_13);
			// if (_innerDictionary.TryGetValue(key, out oldWeakReference))
			ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 * L_14 = (ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)__this->get__innerDictionary_1();
			RuntimeObject * L_15 = ___key0;
			NullCheck((ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)L_14);
			bool L_16;
			L_16 = ((  bool (*) (ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *, RuntimeObject *, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)L_14, (RuntimeObject *)L_15, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(&V_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
			if (!L_16)
			{
				goto IL_006c;
			}
		}

IL_0064:
		{
			// return oldWeakReference == weakReference;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_17 = V_3;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_18 = V_0;
			V_4 = (bool)((((RuntimeObject*)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_17) == ((RuntimeObject*)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_18))? 1 : 0);
			IL2CPP_LEAVE(0x87, FINALLY_007d);
		}

IL_006c:
		{
			// return _innerDictionary.TryAdd(key, weakReference);
			ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 * L_19 = (ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)__this->get__innerDictionary_1();
			RuntimeObject * L_20 = ___key0;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_21 = V_0;
			NullCheck((ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)L_19);
			bool L_22;
			L_22 = ((  bool (*) (ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *, RuntimeObject *, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)L_19, (RuntimeObject *)L_20, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
			V_4 = (bool)L_22;
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
			bool L_23 = V_2;
			if (!L_23)
			{
				goto IL_0086;
			}
		}

IL_0080:
		{
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_24 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_24, /*hidden argument*/NULL);
		}

IL_0086:
		{
			IL2CPP_END_FINALLY(125)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x87, IL_0087)
	}

IL_0087:
	{
		// }
		bool L_25 = V_4;
		return (bool)L_25;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::GetOrAdd(TKey,System.Func`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _WeakValueDictionary_2_GetOrAdd_m53E42488395339C898F9BD9EF21C79A973AC4F49_gshared (_WeakValueDictionary_2_tD06DE5465D7E4C3663B49E82C0B93BEAC4C2C493 * __this, RuntimeObject * ___key0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___createValue1, const RuntimeMethod* method)
{
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_2 = NULL;
	bool V_3 = false;
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		// if (key == null)
		RuntimeObject * L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_GetOrAdd_m53E42488395339C898F9BD9EF21C79A973AC4F49_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 * L_2 = (ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)__this->get__innerDictionary_1();
		RuntimeObject * L_3 = ___key0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		Func_2_tF05B6390930504E1770237C3D8CD743603F0426F * L_4 = ((_WeakValueDictionary_2_tD06DE5465D7E4C3663B49E82C0B93BEAC4C2C493_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10)))->get__createWeakReference_0();
		NullCheck((ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)L_2);
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_5;
		L_5 = ((  WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * (*) (ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *, RuntimeObject *, Func_2_tF05B6390930504E1770237C3D8CD743603F0426F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)L_2, (RuntimeObject *)L_3, (Func_2_tF05B6390930504E1770237C3D8CD743603F0426F *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		V_0 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_5;
	}

IL_0025:
	{
		// var untypedResult = weakReference.Target;
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_6 = V_0;
		NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_6);
		RuntimeObject * L_7;
		L_7 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_6);
		V_1 = (RuntimeObject *)L_7;
		// if (untypedResult != null)
		RuntimeObject * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		// return (TValue)untypedResult;
		RuntimeObject * L_9 = V_1;
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 12)));
	}

IL_0036:
	{
		// lock (weakReference)
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_10 = V_0;
		V_2 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_10;
		V_3 = (bool)0;
	}

IL_003a:
	try
	{ // begin try (depth: 1)
		{
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_11 = V_2;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_11, (bool*)(bool*)(&V_3), /*hidden argument*/NULL);
			// untypedResult = weakReference.Target;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_12 = V_0;
			NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_12);
			RuntimeObject * L_13;
			L_13 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_12);
			V_1 = (RuntimeObject *)L_13;
			// if (untypedResult != null)
			RuntimeObject * L_14 = V_1;
			if (!L_14)
			{
				goto IL_0056;
			}
		}

IL_004c:
		{
			// return (TValue)untypedResult;
			RuntimeObject * L_15 = V_1;
			V_6 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_15, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 12)));
			IL2CPP_LEAVE(0xAA, FINALLY_00a0);
		}

IL_0056:
		{
			// _innerDictionary.TryGetValue(key, out existingWeakReference);
			ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 * L_16 = (ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)__this->get__innerDictionary_1();
			RuntimeObject * L_17 = ___key0;
			NullCheck((ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)L_16);
			bool L_18;
			L_18 = ((  bool (*) (ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *, RuntimeObject *, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)L_16, (RuntimeObject *)L_17, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(&V_4), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
			// if (existingWeakReference != weakReference)
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_19 = V_4;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_20 = V_0;
			if ((((RuntimeObject*)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_19) == ((RuntimeObject*)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_20)))
			{
				goto IL_0084;
			}
		}

IL_006a:
		{
			// if (existingWeakReference != null)
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_21 = V_4;
			if (!L_21)
			{
				goto IL_0073;
			}
		}

IL_006e:
		{
			// weakReference = existingWeakReference;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_22 = V_4;
			V_0 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_22;
			// continue;
			IL2CPP_LEAVE(0x25, FINALLY_00a0);
		}

IL_0073:
		{
			// if (!_innerDictionary.TryAdd(key, weakReference))
			ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 * L_23 = (ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)__this->get__innerDictionary_1();
			RuntimeObject * L_24 = ___key0;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_25 = V_0;
			NullCheck((ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)L_23);
			bool L_26;
			L_26 = ((  bool (*) (ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *, RuntimeObject *, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)L_23, (RuntimeObject *)L_24, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_25, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
			if (L_26)
			{
				goto IL_0084;
			}
		}

IL_0082:
		{
			// break; // Means we will evaluate weakReference again. Go to NO-WEAK-REFERENCE-YET.
			IL2CPP_LEAVE(0x13, FINALLY_00a0);
		}

IL_0084:
		{
			// var result = createValue(key);
			Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_27 = ___createValue1;
			RuntimeObject * L_28 = ___key0;
			NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_27);
			RuntimeObject * L_29;
			L_29 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_27, (RuntimeObject *)L_28, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
			V_5 = (RuntimeObject *)L_29;
			// weakReference.Target = result;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_30 = V_0;
			RuntimeObject * L_31 = V_5;
			NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_30);
			VirtActionInvoker1< RuntimeObject * >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_30, (RuntimeObject *)L_31);
			// return result;
			RuntimeObject * L_32 = V_5;
			V_6 = (RuntimeObject *)L_32;
			IL2CPP_LEAVE(0xAA, FINALLY_00a0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a0;
	}

FINALLY_00a0:
	{ // begin finally (depth: 1)
		{
			bool L_33 = V_3;
			if (!L_33)
			{
				goto IL_00a9;
			}
		}

IL_00a3:
		{
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_34 = V_2;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_34, /*hidden argument*/NULL);
		}

IL_00a9:
		{
			IL2CPP_END_FINALLY(160)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(160)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAA, IL_00aa)
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_JUMP_TBL(0x13, IL_0013)
	}

IL_00aa:
	{
		// }
		RuntimeObject * L_35 = V_6;
		return (RuntimeObject *)L_35;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::TryGetValue(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _WeakValueDictionary_2_TryGetValue_m3141FB4DB7E48CF44F013356B64AE94C6187B350_gshared (_WeakValueDictionary_2_tD06DE5465D7E4C3663B49E82C0B93BEAC4C2C493 * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		// if (key == null)
		RuntimeObject * L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryGetValue_m3141FB4DB7E48CF44F013356B64AE94C6187B350_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if (!_innerDictionary.TryGetValue(key, out weakReference))
		ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 * L_2 = (ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)__this->get__innerDictionary_1();
		RuntimeObject * L_3 = ___key0;
		NullCheck((ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *, RuntimeObject *, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)L_2, (RuntimeObject *)L_3, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_5 = V_1;
		return (RuntimeObject *)L_5;
	}

IL_002d:
	{
		// return (TValue)weakReference.Target;
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_6 = V_0;
		NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_6);
		RuntimeObject * L_7;
		L_7 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_6);
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_7, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 12)));
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_Remove_m7A36371384F5970C23AD10D3AC850B759C1474CA_gshared (_WeakValueDictionary_2_tD06DE5465D7E4C3663B49E82C0B93BEAC4C2C493 * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_0 = NULL;
	{
		// if (key == null)
		RuntimeObject * L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_Remove_m7A36371384F5970C23AD10D3AC850B759C1474CA_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _innerDictionary.TryRemove(key, out _);
		ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 * L_2 = (ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)__this->get__innerDictionary_1();
		RuntimeObject * L_3 = ___key0;
		NullCheck((ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *, RuntimeObject *, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((ConcurrentDictionary_2_t3A5357002B122FEB28DB788D8A394036EA91DC14 *)L_2, (RuntimeObject *)L_3, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (bool)L_4;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<System.Object,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__cctor_mD5C8C5424D971059873755115A59F23EDF92B7E6_gshared (const RuntimeMethod* method)
{
	{
		// private static readonly Func<TKey, WeakReference> _createWeakReference =
		//   (_) => new WeakReference(null);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		U3CU3Ec_tF341995CCB814C6031FFF75D706EB8150506538D * L_0 = ((U3CU3Ec_tF341995CCB814C6031FFF75D706EB8150506538D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 16)))->get_U3CU3E9_0();
		Func_2_tF05B6390930504E1770237C3D8CD743603F0426F * L_1 = (Func_2_tF05B6390930504E1770237C3D8CD743603F0426F *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		((  void (*) (Func_2_tF05B6390930504E1770237C3D8CD743603F0426F *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19)->methodPointer)(L_1, (RuntimeObject *)L_0, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		((_WeakValueDictionary_2_tD06DE5465D7E4C3663B49E82C0B93BEAC4C2C493_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->set__createWeakReference_0(L_1);
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
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ctor_mA1DBB1649CC30997350CD58CFBAF2D4B80B21551_gshared (_WeakValueDictionary_2_t5950A3E71EDD0D8F21F113FA011FDF6920F4D1BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t7023D6B65025CC628DA6EC7962BAE3B2B8E2FED2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal ConcurrentDictionary<TKey, WeakReference> _innerDictionary =
		//   new ConcurrentDictionary<TKey, WeakReference>();
		ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 * L_0 = (ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set__innerDictionary_1(L_0);
		// internal _WeakValueDictionary()
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// _GcObserver._GcHappened += _ClearCollectedValues;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_1, (RuntimeObject *)__this, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(_GcObserver_t7023D6B65025CC628DA6EC7962BAE3B2B8E2FED2_il2cpp_TypeInfo_var);
		_GcObserver_add__GcHappened_mC21FB543C49ED63EB07119B5D90427250041A075((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2_Dispose_m8EF2E0932159E08E5307ED1C40AEB0F8107ABFA8_gshared (_WeakValueDictionary_2_t5950A3E71EDD0D8F21F113FA011FDF6920F4D1BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t7023D6B65025CC628DA6EC7962BAE3B2B8E2FED2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _GcObserver._GcHappened -= _ClearCollectedValues;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, (RuntimeObject *)__this, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(_GcObserver_t7023D6B65025CC628DA6EC7962BAE3B2B8E2FED2_il2cpp_TypeInfo_var);
		_GcObserver_remove__GcHappened_mDD67EE02D88F0FE7571EFC359B0B880E012CAC0D((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_0, /*hidden argument*/NULL);
		// _innerDictionary = null;
		__this->set__innerDictionary_1((ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetEnumerator_m4AE32EFAB6D84E9E5110C5296E8B28D601317306_gshared (_WeakValueDictionary_2_t5950A3E71EDD0D8F21F113FA011FDF6920F4D1BD * __this, const RuntimeMethod* method)
{
	{
		// return _innerDictionary.GetEnumerator();
		ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 * L_0 = (ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)__this->get__innerDictionary_1();
		NullCheck((ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_1;
	}
}
// System.Int32 Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _WeakValueDictionary_2_get_Count_mDB9F4D4D35B94112C7FB189EAD6343FA09834ACC_gshared (_WeakValueDictionary_2_t5950A3E71EDD0D8F21F113FA011FDF6920F4D1BD * __this, const RuntimeMethod* method)
{
	{
		// get { return _innerDictionary.Count; }
		ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 * L_0 = (ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)__this->get__innerDictionary_1();
		NullCheck((ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return (int32_t)L_1;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::_ClearCollectedValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ClearCollectedValues_mD2B536A58CD4DA5B967E9A1F3DF4517891E5C4AC_gshared (_WeakValueDictionary_2_t5950A3E71EDD0D8F21F113FA011FDF6920F4D1BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t7A56726DC229B6A4B142DF678829232995D82105  V_1;
	memset((&V_1), 0, sizeof(V_1));
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_2 = NULL;
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_3 = NULL;
	bool V_4 = false;
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (var pair in _innerDictionary)
		ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 * L_0 = (ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)__this->get__innerDictionary_1();
		NullCheck((ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (RuntimeObject*)L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005c;
		}

IL_000e:
		{
			// foreach (var pair in _innerDictionary)
			RuntimeObject* L_2 = V_0;
			NullCheck((RuntimeObject*)L_2);
			KeyValuePair_2_t7A56726DC229B6A4B142DF678829232995D82105  L_3;
			L_3 = InterfaceFuncInvoker0< KeyValuePair_2_t7A56726DC229B6A4B142DF678829232995D82105  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Niantic.ARDK.AR._CppAddressAndScale,System.WeakReference>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_2);
			V_1 = (KeyValuePair_2_t7A56726DC229B6A4B142DF678829232995D82105 )L_3;
			// var weakReference = pair.Value;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_4;
			L_4 = KeyValuePair_2_get_Value_mAE16A75CCA7D325827F86C95F9FD1F8081FE1416_inline((KeyValuePair_2_t7A56726DC229B6A4B142DF678829232995D82105 *)(KeyValuePair_2_t7A56726DC229B6A4B142DF678829232995D82105 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
			V_2 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_4;
			// if (!weakReference.IsAlive)
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_5 = V_2;
			NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_5);
			bool L_6;
			L_6 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_5);
			if (L_6)
			{
				goto IL_005c;
			}
		}

IL_0025:
		{
			// lock (weakReference)
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_7 = V_2;
			V_3 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_7;
			V_4 = (bool)0;
		}

IL_002a:
		try
		{ // begin try (depth: 2)
			{
				WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_8 = V_3;
				Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_8, (bool*)(bool*)(&V_4), /*hidden argument*/NULL);
				// if (!weakReference.IsAlive)
				WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_9 = V_2;
				NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_9);
				bool L_10;
				L_10 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_9);
				if (L_10)
				{
					goto IL_004f;
				}
			}

IL_003a:
			{
				// _innerDictionary.TryRemove(pair.Key, out _);
				ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 * L_11 = (ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)__this->get__innerDictionary_1();
				_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731  L_12;
				L_12 = KeyValuePair_2_get_Key_mD2BFA7CB31CF17A9C74B497776820C29240F0C22_inline((KeyValuePair_2_t7A56726DC229B6A4B142DF678829232995D82105 *)(KeyValuePair_2_t7A56726DC229B6A4B142DF678829232995D82105 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
				NullCheck((ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)L_11);
				bool L_13;
				L_13 = ((  bool (*) (ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *, _CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731 , WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)L_11, (_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731 )L_12, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(&V_5), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
			}

IL_004f:
			{
				IL2CPP_LEAVE(0x5C, FINALLY_0051);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0051;
		}

FINALLY_0051:
		{ // begin finally (depth: 2)
			{
				bool L_14 = V_4;
				if (!L_14)
				{
					goto IL_005b;
				}
			}

IL_0055:
			{
				WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_15 = V_3;
				Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_15, /*hidden argument*/NULL);
			}

IL_005b:
			{
				IL2CPP_END_FINALLY(81)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(81)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x5C, IL_005c)
		}

IL_005c:
		{
			// foreach (var pair in _innerDictionary)
			RuntimeObject* L_16 = V_0;
			NullCheck((RuntimeObject*)L_16);
			bool L_17;
			L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
			if (L_17)
			{
				goto IL_000e;
			}
		}

IL_0064:
		{
			IL2CPP_LEAVE(0x70, FINALLY_0066);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0066;
	}

FINALLY_0066:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_18 = V_0;
			if (!L_18)
			{
				goto IL_006f;
			}
		}

IL_0069:
		{
			RuntimeObject* L_19 = V_0;
			NullCheck((RuntimeObject*)L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
		}

IL_006f:
		{
			IL2CPP_END_FINALLY(102)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(102)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x70, IL_0070)
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_TryAdd_mE0E8685A6CD5FF46AA029F01D43FF0036B9123B6_gshared (_WeakValueDictionary_2_t5950A3E71EDD0D8F21F113FA011FDF6920F4D1BD * __this, _CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_0 = NULL;
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_1 = NULL;
	bool V_2 = false;
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_3 = NULL;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryAdd_mE0E8685A6CD5FF46AA029F01D43FF0036B9123B6_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 * L_2 = (ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)__this->get__innerDictionary_1();
		_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731  L_3 = ___key0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		Func_2_t5C635761AE2CC537D55A62F7CF9A2C11E60B7835 * L_4 = ((_WeakValueDictionary_2_t5950A3E71EDD0D8F21F113FA011FDF6920F4D1BD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10)))->get__createWeakReference_0();
		NullCheck((ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)L_2);
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_5;
		L_5 = ((  WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * (*) (ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *, _CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731 , Func_2_t5C635761AE2CC537D55A62F7CF9A2C11E60B7835 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)L_2, (_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731 )L_3, (Func_2_t5C635761AE2CC537D55A62F7CF9A2C11E60B7835 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		V_0 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_5;
		// if (weakReference.IsAlive)
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_6 = V_0;
		NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_6);
		bool L_7;
		L_7 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_6);
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002f:
	{
		// lock (weakReference)
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_8 = V_0;
		V_1 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_8;
		V_2 = (bool)0;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		{
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_9 = V_1;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_9, (bool*)(bool*)(&V_2), /*hidden argument*/NULL);
			// if (weakReference.IsAlive)
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_10 = V_0;
			NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_10);
			bool L_11;
			L_11 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_10);
			if (!L_11)
			{
				goto IL_0048;
			}
		}

IL_0043:
		{
			// return false;
			V_4 = (bool)0;
			IL2CPP_LEAVE(0x87, FINALLY_007d);
		}

IL_0048:
		{
			// weakReference.Target = value;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_12 = V_0;
			RuntimeObject * L_13 = ___value1;
			NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_12);
			VirtActionInvoker1< RuntimeObject * >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_12, (RuntimeObject *)L_13);
			// if (_innerDictionary.TryGetValue(key, out oldWeakReference))
			ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 * L_14 = (ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)__this->get__innerDictionary_1();
			_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731  L_15 = ___key0;
			NullCheck((ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)L_14);
			bool L_16;
			L_16 = ((  bool (*) (ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *, _CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731 , WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)L_14, (_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731 )L_15, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(&V_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
			if (!L_16)
			{
				goto IL_006c;
			}
		}

IL_0064:
		{
			// return oldWeakReference == weakReference;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_17 = V_3;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_18 = V_0;
			V_4 = (bool)((((RuntimeObject*)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_17) == ((RuntimeObject*)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_18))? 1 : 0);
			IL2CPP_LEAVE(0x87, FINALLY_007d);
		}

IL_006c:
		{
			// return _innerDictionary.TryAdd(key, weakReference);
			ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 * L_19 = (ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)__this->get__innerDictionary_1();
			_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731  L_20 = ___key0;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_21 = V_0;
			NullCheck((ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)L_19);
			bool L_22;
			L_22 = ((  bool (*) (ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *, _CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731 , WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)L_19, (_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731 )L_20, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
			V_4 = (bool)L_22;
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
			bool L_23 = V_2;
			if (!L_23)
			{
				goto IL_0086;
			}
		}

IL_0080:
		{
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_24 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_24, /*hidden argument*/NULL);
		}

IL_0086:
		{
			IL2CPP_END_FINALLY(125)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x87, IL_0087)
	}

IL_0087:
	{
		// }
		bool L_25 = V_4;
		return (bool)L_25;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::GetOrAdd(TKey,System.Func`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _WeakValueDictionary_2_GetOrAdd_mD1AC9A5BE2379A9309620CB0070485025529BA5F_gshared (_WeakValueDictionary_2_t5950A3E71EDD0D8F21F113FA011FDF6920F4D1BD * __this, _CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731  ___key0, Func_2_tA79C68D320B4C4833D5F5D391CD053D095BBA2E9 * ___createValue1, const RuntimeMethod* method)
{
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_2 = NULL;
	bool V_3 = false;
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_GetOrAdd_mD1AC9A5BE2379A9309620CB0070485025529BA5F_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var weakReference = _innerDictionary.GetOrAdd(key, _createWeakReference);
		ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 * L_2 = (ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)__this->get__innerDictionary_1();
		_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731  L_3 = ___key0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		Func_2_t5C635761AE2CC537D55A62F7CF9A2C11E60B7835 * L_4 = ((_WeakValueDictionary_2_t5950A3E71EDD0D8F21F113FA011FDF6920F4D1BD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10)))->get__createWeakReference_0();
		NullCheck((ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)L_2);
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_5;
		L_5 = ((  WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * (*) (ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *, _CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731 , Func_2_t5C635761AE2CC537D55A62F7CF9A2C11E60B7835 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)L_2, (_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731 )L_3, (Func_2_t5C635761AE2CC537D55A62F7CF9A2C11E60B7835 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		V_0 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_5;
	}

IL_0025:
	{
		// var untypedResult = weakReference.Target;
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_6 = V_0;
		NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_6);
		RuntimeObject * L_7;
		L_7 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_6);
		V_1 = (RuntimeObject *)L_7;
		// if (untypedResult != null)
		RuntimeObject * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		// return (TValue)untypedResult;
		RuntimeObject * L_9 = V_1;
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 12)));
	}

IL_0036:
	{
		// lock (weakReference)
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_10 = V_0;
		V_2 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_10;
		V_3 = (bool)0;
	}

IL_003a:
	try
	{ // begin try (depth: 1)
		{
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_11 = V_2;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_11, (bool*)(bool*)(&V_3), /*hidden argument*/NULL);
			// untypedResult = weakReference.Target;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_12 = V_0;
			NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_12);
			RuntimeObject * L_13;
			L_13 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_12);
			V_1 = (RuntimeObject *)L_13;
			// if (untypedResult != null)
			RuntimeObject * L_14 = V_1;
			if (!L_14)
			{
				goto IL_0056;
			}
		}

IL_004c:
		{
			// return (TValue)untypedResult;
			RuntimeObject * L_15 = V_1;
			V_6 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_15, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 12)));
			IL2CPP_LEAVE(0xAA, FINALLY_00a0);
		}

IL_0056:
		{
			// _innerDictionary.TryGetValue(key, out existingWeakReference);
			ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 * L_16 = (ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)__this->get__innerDictionary_1();
			_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731  L_17 = ___key0;
			NullCheck((ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)L_16);
			bool L_18;
			L_18 = ((  bool (*) (ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *, _CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731 , WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)L_16, (_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731 )L_17, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(&V_4), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
			// if (existingWeakReference != weakReference)
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_19 = V_4;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_20 = V_0;
			if ((((RuntimeObject*)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_19) == ((RuntimeObject*)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_20)))
			{
				goto IL_0084;
			}
		}

IL_006a:
		{
			// if (existingWeakReference != null)
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_21 = V_4;
			if (!L_21)
			{
				goto IL_0073;
			}
		}

IL_006e:
		{
			// weakReference = existingWeakReference;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_22 = V_4;
			V_0 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_22;
			// continue;
			IL2CPP_LEAVE(0x25, FINALLY_00a0);
		}

IL_0073:
		{
			// if (!_innerDictionary.TryAdd(key, weakReference))
			ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 * L_23 = (ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)__this->get__innerDictionary_1();
			_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731  L_24 = ___key0;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_25 = V_0;
			NullCheck((ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)L_23);
			bool L_26;
			L_26 = ((  bool (*) (ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *, _CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731 , WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)L_23, (_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731 )L_24, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_25, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
			if (L_26)
			{
				goto IL_0084;
			}
		}

IL_0082:
		{
			// break; // Means we will evaluate weakReference again. Go to NO-WEAK-REFERENCE-YET.
			IL2CPP_LEAVE(0x13, FINALLY_00a0);
		}

IL_0084:
		{
			// var result = createValue(key);
			Func_2_tA79C68D320B4C4833D5F5D391CD053D095BBA2E9 * L_27 = ___createValue1;
			_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731  L_28 = ___key0;
			NullCheck((Func_2_tA79C68D320B4C4833D5F5D391CD053D095BBA2E9 *)L_27);
			RuntimeObject * L_29;
			L_29 = ((  RuntimeObject * (*) (Func_2_tA79C68D320B4C4833D5F5D391CD053D095BBA2E9 *, _CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((Func_2_tA79C68D320B4C4833D5F5D391CD053D095BBA2E9 *)L_27, (_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731 )L_28, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
			V_5 = (RuntimeObject *)L_29;
			// weakReference.Target = result;
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_30 = V_0;
			RuntimeObject * L_31 = V_5;
			NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_30);
			VirtActionInvoker1< RuntimeObject * >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_30, (RuntimeObject *)L_31);
			// return result;
			RuntimeObject * L_32 = V_5;
			V_6 = (RuntimeObject *)L_32;
			IL2CPP_LEAVE(0xAA, FINALLY_00a0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a0;
	}

FINALLY_00a0:
	{ // begin finally (depth: 1)
		{
			bool L_33 = V_3;
			if (!L_33)
			{
				goto IL_00a9;
			}
		}

IL_00a3:
		{
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_34 = V_2;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_34, /*hidden argument*/NULL);
		}

IL_00a9:
		{
			IL2CPP_END_FINALLY(160)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(160)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAA, IL_00aa)
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_JUMP_TBL(0x13, IL_0013)
	}

IL_00aa:
	{
		// }
		RuntimeObject * L_35 = V_6;
		return (RuntimeObject *)L_35;
	}
}
// TValue Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::TryGetValue(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _WeakValueDictionary_2_TryGetValue_m8A4C872775F5C4496C88964A48B130870187342C_gshared (_WeakValueDictionary_2_t5950A3E71EDD0D8F21F113FA011FDF6920F4D1BD * __this, _CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731  ___key0, const RuntimeMethod* method)
{
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_TryGetValue_m8A4C872775F5C4496C88964A48B130870187342C_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if (!_innerDictionary.TryGetValue(key, out weakReference))
		ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 * L_2 = (ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)__this->get__innerDictionary_1();
		_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731  L_3 = ___key0;
		NullCheck((ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *, _CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731 , WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)L_2, (_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731 )L_3, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_5 = V_1;
		return (RuntimeObject *)L_5;
	}

IL_002d:
	{
		// return (TValue)weakReference.Target;
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_6 = V_0;
		NullCheck((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_6);
		RuntimeObject * L_7;
		L_7 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)L_6);
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_7, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 12)));
	}
}
// System.Boolean Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_Remove_m1813A1608677A67D09549A66012D922F394EB57A_gshared (_WeakValueDictionary_2_t5950A3E71EDD0D8F21F113FA011FDF6920F4D1BD * __this, _CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731  ___key0, const RuntimeMethod* method)
{
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_0 = NULL;
	{
		// if (key == null)
		goto IL_0013;
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_WeakValueDictionary_2_Remove_m1813A1608677A67D09549A66012D922F394EB57A_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _innerDictionary.TryRemove(key, out _);
		ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 * L_2 = (ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)__this->get__innerDictionary_1();
		_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731  L_3 = ___key0;
		NullCheck((ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)L_2);
		bool L_4;
		L_4 = ((  bool (*) (ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *, _CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731 , WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((ConcurrentDictionary_2_tF168DA2580EF5A8233C7A020C827FA108B9289D1 *)L_2, (_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731 )L_3, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (bool)L_4;
	}
}
// System.Void Niantic.ARDK.Utilities._WeakValueDictionary`2<Niantic.ARDK.AR._CppAddressAndScale,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__cctor_mD53046B8886A777B21B7E22D253A6752212FCA1C_gshared (const RuntimeMethod* method)
{
	{
		// private static readonly Func<TKey, WeakReference> _createWeakReference =
		//   (_) => new WeakReference(null);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		U3CU3Ec_t08D7CEDB0D53B80A4394C1A220E59DE31C49057D * L_0 = ((U3CU3Ec_t08D7CEDB0D53B80A4394C1A220E59DE31C49057D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 16)))->get_U3CU3E9_0();
		Func_2_t5C635761AE2CC537D55A62F7CF9A2C11E60B7835 * L_1 = (Func_2_t5C635761AE2CC537D55A62F7CF9A2C11E60B7835 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		((  void (*) (Func_2_t5C635761AE2CC537D55A62F7CF9A2C11E60B7835 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19)->methodPointer)(L_1, (RuntimeObject *)L_0, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		((_WeakValueDictionary_2_t5950A3E71EDD0D8F21F113FA011FDF6920F4D1BD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->set__createWeakReference_0(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t _AwarenessBufferBase_get_Width_mA8E870CE200ECBF18C4FEDFAF0F052302BF42E63_inline (_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF * __this, const RuntimeMethod* method)
{
	{
		// public uint Width { get; private set; }
		uint32_t L_0 = __this->get_U3CWidthU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t _AwarenessBufferBase_get_Height_mDAE1E876EE5B79EA91BAE047CCA75EBBD2BA17BC_inline (_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF * __this, const RuntimeMethod* method)
{
	{
		// public uint Height { get; private set; }
		uint32_t L_0 = __this->get_U3CHeightU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline (intptr_t* __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool _AwarenessBufferBase_get_IsKeyframe_m4DB74F27C7A36F9556117A93CC6E0E876ABC9AB1_inline (_AwarenessBufferBase_t4D50631A0411342E7482687230C6F6F91E1DDFCF * __this, const RuntimeMethod* method)
{
	{
		// public bool IsKeyframe { get; private set; }
		bool L_0 = __this->get_U3CIsKeyframeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m1B18301A178CB08EBBDF6BD338E5D43C076DD809_gshared_inline (Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Nullable_1_GetValueOrDefault_m27466FD512E235FE817B24F8E6BB5F14A5E4FB2D_gshared_inline (Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E * __this, const RuntimeMethod* method)
{
	{
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0 = (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )__this->get_value_0();
		return (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mE04DEC4948A6ECCC16F70EDA9B8DE8DBC4C05B17_gshared_inline (Nullable_1_t1F781B575681470232DE337FC88836BA039BE18B * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mE47F3F438F816C36EF8D857CD4313EDE8E9BA71E_gshared_inline (KeyValuePair_2_t74D5C76BCA7D14D18A99E0FA9EC3584DBFB65F7F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t  KeyValuePair_2_get_Key_mE03F9398C8279E092A6E54CA730BEB18E2CBBF53_gshared_inline (KeyValuePair_2_t74D5C76BCA7D14D18A99E0FA9EC3584DBFB65F7F * __this, const RuntimeMethod* method)
{
	{
		Guid_t  L_0 = (Guid_t )__this->get_key_0();
		return (Guid_t )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m78A6E4C98E5CAA84620AF3E153D4838E81797F74_gshared_inline (KeyValuePair_2_t9929596D6B05353257A804D74C9405F53868F45F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t KeyValuePair_2_get_Key_mC28669104EE444D50EEB65D2F80D07D0A90434B9_gshared_inline (KeyValuePair_2_t9929596D6B05353257A804D74C9405F53868F45F * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = (intptr_t)__this->get_key_0();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m118B63F6DB931EF71499AB539E0D3F4DBE79BC7A_gshared_inline (KeyValuePair_2_t91051A57A082B61DB720888E2DC65EB60EE7882A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR _CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731  KeyValuePair_2_get_Key_m9C4B4457AB42865611A80F05385CC962E7F20528_gshared_inline (KeyValuePair_2_t91051A57A082B61DB720888E2DC65EB60EE7882A * __this, const RuntimeMethod* method)
{
	{
		_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731  L_0 = (_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731 )__this->get_key_0();
		return (_CppAddressAndScale_t19CB759B64C053D1821FC84CDB3BE777DA6D8731 )L_0;
	}
}
