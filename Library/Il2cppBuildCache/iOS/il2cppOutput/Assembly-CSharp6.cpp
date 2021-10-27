#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Comparison`1<OpenCvSharp.Point>
struct Comparison_1_t3F42CFEFD2FC9BE71CED6C5FF56BAA6607BEA7CA;
// System.Converter`2<OpenCvSharp.Point,OpenCvSharp.Point2f>
struct Converter_2_t4DC372D63214BF0A924E7F5EA2768A8ADD776C79;
// System.Converter`2<OpenCvSharp.Point2f,OpenCvSharp.Point>
struct Converter_2_t41220A3A71AF1F0BAA5B08051FB3B41681155A79;
// System.Func`3<OpenCvSharp.Point,OpenCvSharp.Point,System.Double>
struct Func_3_t74D6841DDA3E88B87A03C31FEB92C6DB6CD02E46;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// OpenCvSharp.MatIndexer`1<System.UInt16>
struct MatIndexer_1_tF90B229CEB187AD8DDD19111449C4036F4649A0E;
// OpenCvSharp.Ptr`1<System.Object>
struct Ptr_1_t6CC78209383629CC7ABB9FFAFE725D724604AE97;
// OpenCvSharp.Ptr`1<OpenCvSharp.Tracking.Tracker>
struct Ptr_1_t3D3103972872013C7C70F55C58CCD09E7B71E829;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// OpenCvSharp.Win32Api/RGBQUAD[]
struct RGBQUADU5BU5D_t2342606E28EC9EA354F507217F8C24D796B29DE5;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// OpenCvSharp.DisposableCvObject
struct DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775;
// OpenCvSharp.DisposableObject
struct DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// OpenCvSharp.InputArray
struct InputArray_t878A9EA878AAC15464A7DEFD30CBB6AA08311C25;
// OpenCvSharp.Mat
struct Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D;
// OpenCvSharp.MatOfUShort
struct MatOfUShort_t21F85688DF91E44422B3C189B9F5BABD4DD54FFD;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// OpenCvSharp.OpenCVException
struct OpenCVException_tB5296EF5299605BB326C6A6C56D9BE5CEE2D3561;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// OpenCvSharp.VectorOfDouble
struct VectorOfDouble_tAB9D857E0A58C713494B449A70FC4D140F780041;
// OpenCvSharp.VectorOfInt32
struct VectorOfInt32_t823792B51EF6D88E4C4BCB5AC6A4D38918CCC863;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// OpenCvSharp.Mat/ColExprIndexer
struct ColExprIndexer_t7BE98B3E69BC45B27EF78858459AA2A47A7F632F;
// OpenCvSharp.Mat/ColIndexer
struct ColIndexer_t31825B233FA28DD352A86C1AEF2302E34B7ADD3F;
// OpenCvSharp.Mat/MatExprIndexer
struct MatExprIndexer_t974E175CB4E3337A66B0BA3E7A0BDFBB2428840E;
// OpenCvSharp.Mat/RowExprIndexer
struct RowExprIndexer_t9F0095829DDB9D709C2B312482BBA5B7B2DA2C6F;
// OpenCvSharp.Mat/RowIndexer
struct RowIndexer_tAC3682A4FD16D8EAD29F8B0C5C1589C3CEE58456;
// OpenCvSharp.MatOfUShort/<GetEnumerator>d__28
struct U3CGetEnumeratorU3Ed__28_tAE471AE15C94E7B1438A1605B38861DA7E49F1A1;
// OpenCvSharp.MatOfUShort/Indexer
struct Indexer_tB7B156EE395CCC5B4D38DF0396133C527912BEED;
// OpenCvSharp.NativeMethods/<>c
struct U3CU3Ec_t18FAC9EB403BFD140B96C187D88F0DA2127479ED;
// OpenCvSharp.OCRBeamSearchDecoder/ClassifierCallback
struct ClassifierCallback_tFE5D7215E8044398FFDC9ACE08F4CB2DA4840EEF;
// OpenCvSharp.OCRHMMDecoder/ClassifierCallback
struct ClassifierCallback_t5DE4B98B7E526F050279D9E6F10139D1CDDB2398;
// OpenCvSharp.Demo.PaperScanner/<>c
struct U3CU3Ec_tFAA7FB765027DE17B8385EADF9A671F5C5BDDBD3;
// OpenCvSharp.Demo.PaperScanner/ScannerSettings
struct ScannerSettings_tBDC7F9F16AAC8FC6C20888406790AC52CBBDECCD;
// OpenCvSharp.PtrNativeFunctions/ObjFunc
struct ObjFunc_t0CF3FD007A2692EA2706B3CB1F4368231821CECD;
// OpenCvSharp.PtrNativeFunctions/ReleaseFunc
struct ReleaseFunc_t0E13E77E98708665F36C3F0DFC508F27EFDBF824;
// OpenCvSharp.ML.SVM/Kernel
struct Kernel_t248BA1EDB2982C89B431ACBBA11F3B1F3BE65FC9;
// OpenCvSharp.SimpleBlobDetector/Params
struct Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3;
// OpenCvSharp.Tracking.Tracker/Ptr
struct Ptr_tBE8E25CEC2D965C7CD1464E833D251666EB9070D;
// OpenCvSharp.Unity/TextureConversionParams
struct TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9;
// OpenCvSharp.Util.WindowsLibraryLoader/ProcessArchitectureInfo
struct ProcessArchitectureInfo_t24E91B008BFA261064862083259BBDC43F974071;
// OpenCvSharp.Demo.PaperScanner/ScannerSettings/NotifyDirty
struct NotifyDirty_t4E970B1EC52EBC768E4D83050E6F548B1D97FB69;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Indexer_tB7B156EE395CCC5B4D38DF0396133C527912BEED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeMethods_tC29394FCE82B57B876F726366D9390EA0396E7C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpenCVException_tB5296EF5299605BB326C6A6C56D9BE5CEE2D3561_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RGBQUADU5BU5D_t2342606E28EC9EA354F507217F8C24D796B29DE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t18FAC9EB403BFD140B96C187D88F0DA2127479ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tFAA7FB765027DE17B8385EADF9A671F5C5BDDBD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VectorOfDouble_tAB9D857E0A58C713494B449A70FC4D140F780041_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VectorOfInt32_t823792B51EF6D88E4C4BCB5AC6A4D38918CCC863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral301A1E8B4C33A44C7B22C2E21B66506B1CF83AF4;
IL2CPP_EXTERN_C String_t* _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
IL2CPP_EXTERN_C String_t* _stringLiteral9FC52B13A509BA32020DF9B147EC43D059CDA096;
IL2CPP_EXTERN_C String_t* _stringLiteralF4613B602085CE97484A430B4EBE570197F871B3;
IL2CPP_EXTERN_C const RuntimeMethod* ClassifierCallback_Eval_m8A74019979CF574DD4E4BF0609010F5C67A844EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ClassifierCallback_Eval_mE382D52D32BA87237E2E237A883F312BEAB79153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ClassifierCallback__ctor_mC3770C01260C662D0371FD4013FB1152ADD9B01E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kernel__ctor_mB5690311E7F5D0840D2177C122874C7D0F8147DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MatIndexer_1__ctor_m3F983A4EFAA8F40DBE30DD3F74CB2C135D49AC65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ptr_1__ctor_mB342A6248A482E017D8F994222D05BA27EB5F586_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__28_MoveNext_m35FF78C07363DC75D509BBDD9831533A53BB611B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__28_System_Collections_IEnumerator_Reset_m987DB4AF6645F84323E8DD2A102485CDF840E7F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__13_0_mC78798BF2368BB605D2969F657958246D1B1D77D_RuntimeMethod_var;
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct RGBQUAD_t13428C6F4F848C96705245CB94F0A9A8245C8BFB ;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct RGBQUADU5BU5D_t2342606E28EC9EA354F507217F8C24D796B29DE5;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// OpenCvSharp.MatIndexer`1<System.UInt16>
struct MatIndexer_1_tF90B229CEB187AD8DDD19111449C4036F4649A0E  : public RuntimeObject
{
public:
	// OpenCvSharp.Mat OpenCvSharp.MatIndexer`1::parent
	Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___parent_0;
	// System.Int64[] OpenCvSharp.MatIndexer`1::steps
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ___steps_1;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MatIndexer_1_tF90B229CEB187AD8DDD19111449C4036F4649A0E, ___parent_0)); }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * get_parent_0() const { return ___parent_0; }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}

	inline static int32_t get_offset_of_steps_1() { return static_cast<int32_t>(offsetof(MatIndexer_1_tF90B229CEB187AD8DDD19111449C4036F4649A0E, ___steps_1)); }
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* get_steps_1() const { return ___steps_1; }
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6** get_address_of_steps_1() { return &___steps_1; }
	inline void set_steps_1(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* value)
	{
		___steps_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___steps_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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

// OpenCvSharp.MatOfUShort/<GetEnumerator>d__28
struct U3CGetEnumeratorU3Ed__28_tAE471AE15C94E7B1438A1605B38861DA7E49F1A1  : public RuntimeObject
{
public:
	// System.Int32 OpenCvSharp.MatOfUShort/<GetEnumerator>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.UInt16 OpenCvSharp.MatOfUShort/<GetEnumerator>d__28::<>2__current
	uint16_t ___U3CU3E2__current_1;
	// OpenCvSharp.MatOfUShort OpenCvSharp.MatOfUShort/<GetEnumerator>d__28::<>4__this
	MatOfUShort_t21F85688DF91E44422B3C189B9F5BABD4DD54FFD * ___U3CU3E4__this_2;
	// OpenCvSharp.MatOfUShort/Indexer OpenCvSharp.MatOfUShort/<GetEnumerator>d__28::<indexer>5__2
	Indexer_tB7B156EE395CCC5B4D38DF0396133C527912BEED * ___U3CindexerU3E5__2_3;
	// System.Int32 OpenCvSharp.MatOfUShort/<GetEnumerator>d__28::<rows>5__3
	int32_t ___U3CrowsU3E5__3_4;
	// System.Int32 OpenCvSharp.MatOfUShort/<GetEnumerator>d__28::<cols>5__4
	int32_t ___U3CcolsU3E5__4_5;
	// System.Int32 OpenCvSharp.MatOfUShort/<GetEnumerator>d__28::<r>5__5
	int32_t ___U3CrU3E5__5_6;
	// System.Int32 OpenCvSharp.MatOfUShort/<GetEnumerator>d__28::<c>5__6
	int32_t ___U3CcU3E5__6_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__28_tAE471AE15C94E7B1438A1605B38861DA7E49F1A1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__28_tAE471AE15C94E7B1438A1605B38861DA7E49F1A1, ___U3CU3E2__current_1)); }
	inline uint16_t get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline uint16_t* get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(uint16_t value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__28_tAE471AE15C94E7B1438A1605B38861DA7E49F1A1, ___U3CU3E4__this_2)); }
	inline MatOfUShort_t21F85688DF91E44422B3C189B9F5BABD4DD54FFD * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MatOfUShort_t21F85688DF91E44422B3C189B9F5BABD4DD54FFD ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MatOfUShort_t21F85688DF91E44422B3C189B9F5BABD4DD54FFD * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CindexerU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__28_tAE471AE15C94E7B1438A1605B38861DA7E49F1A1, ___U3CindexerU3E5__2_3)); }
	inline Indexer_tB7B156EE395CCC5B4D38DF0396133C527912BEED * get_U3CindexerU3E5__2_3() const { return ___U3CindexerU3E5__2_3; }
	inline Indexer_tB7B156EE395CCC5B4D38DF0396133C527912BEED ** get_address_of_U3CindexerU3E5__2_3() { return &___U3CindexerU3E5__2_3; }
	inline void set_U3CindexerU3E5__2_3(Indexer_tB7B156EE395CCC5B4D38DF0396133C527912BEED * value)
	{
		___U3CindexerU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CindexerU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrowsU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__28_tAE471AE15C94E7B1438A1605B38861DA7E49F1A1, ___U3CrowsU3E5__3_4)); }
	inline int32_t get_U3CrowsU3E5__3_4() const { return ___U3CrowsU3E5__3_4; }
	inline int32_t* get_address_of_U3CrowsU3E5__3_4() { return &___U3CrowsU3E5__3_4; }
	inline void set_U3CrowsU3E5__3_4(int32_t value)
	{
		___U3CrowsU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CcolsU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__28_tAE471AE15C94E7B1438A1605B38861DA7E49F1A1, ___U3CcolsU3E5__4_5)); }
	inline int32_t get_U3CcolsU3E5__4_5() const { return ___U3CcolsU3E5__4_5; }
	inline int32_t* get_address_of_U3CcolsU3E5__4_5() { return &___U3CcolsU3E5__4_5; }
	inline void set_U3CcolsU3E5__4_5(int32_t value)
	{
		___U3CcolsU3E5__4_5 = value;
	}

	inline static int32_t get_offset_of_U3CrU3E5__5_6() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__28_tAE471AE15C94E7B1438A1605B38861DA7E49F1A1, ___U3CrU3E5__5_6)); }
	inline int32_t get_U3CrU3E5__5_6() const { return ___U3CrU3E5__5_6; }
	inline int32_t* get_address_of_U3CrU3E5__5_6() { return &___U3CrU3E5__5_6; }
	inline void set_U3CrU3E5__5_6(int32_t value)
	{
		___U3CrU3E5__5_6 = value;
	}

	inline static int32_t get_offset_of_U3CcU3E5__6_7() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__28_tAE471AE15C94E7B1438A1605B38861DA7E49F1A1, ___U3CcU3E5__6_7)); }
	inline int32_t get_U3CcU3E5__6_7() const { return ___U3CcU3E5__6_7; }
	inline int32_t* get_address_of_U3CcU3E5__6_7() { return &___U3CcU3E5__6_7; }
	inline void set_U3CcU3E5__6_7(int32_t value)
	{
		___U3CcU3E5__6_7 = value;
	}
};


// OpenCvSharp.NativeMethods/<>c
struct U3CU3Ec_t18FAC9EB403BFD140B96C187D88F0DA2127479ED  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t18FAC9EB403BFD140B96C187D88F0DA2127479ED_StaticFields
{
public:
	// OpenCvSharp.NativeMethods/<>c OpenCvSharp.NativeMethods/<>c::<>9
	U3CU3Ec_t18FAC9EB403BFD140B96C187D88F0DA2127479ED * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t18FAC9EB403BFD140B96C187D88F0DA2127479ED_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t18FAC9EB403BFD140B96C187D88F0DA2127479ED * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t18FAC9EB403BFD140B96C187D88F0DA2127479ED ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t18FAC9EB403BFD140B96C187D88F0DA2127479ED * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// OpenCvSharp.Demo.PaperScanner/<>c
struct U3CU3Ec_tFAA7FB765027DE17B8385EADF9A671F5C5BDDBD3  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tFAA7FB765027DE17B8385EADF9A671F5C5BDDBD3_StaticFields
{
public:
	// OpenCvSharp.Demo.PaperScanner/<>c OpenCvSharp.Demo.PaperScanner/<>c::<>9
	U3CU3Ec_tFAA7FB765027DE17B8385EADF9A671F5C5BDDBD3 * ___U3CU3E9_0;
	// System.Comparison`1<OpenCvSharp.Point> OpenCvSharp.Demo.PaperScanner/<>c::<>9__19_0
	Comparison_1_t3F42CFEFD2FC9BE71CED6C5FF56BAA6607BEA7CA * ___U3CU3E9__19_0_1;
	// System.Comparison`1<OpenCvSharp.Point> OpenCvSharp.Demo.PaperScanner/<>c::<>9__19_1
	Comparison_1_t3F42CFEFD2FC9BE71CED6C5FF56BAA6607BEA7CA * ___U3CU3E9__19_1_2;
	// System.Converter`2<OpenCvSharp.Point2f,OpenCvSharp.Point> OpenCvSharp.Demo.PaperScanner/<>c::<>9__22_0
	Converter_2_t41220A3A71AF1F0BAA5B08051FB3B41681155A79 * ___U3CU3E9__22_0_3;
	// System.Func`3<OpenCvSharp.Point,OpenCvSharp.Point,System.Double> OpenCvSharp.Demo.PaperScanner/<>c::<>9__22_1
	Func_3_t74D6841DDA3E88B87A03C31FEB92C6DB6CD02E46 * ___U3CU3E9__22_1_4;
	// System.Converter`2<OpenCvSharp.Point,OpenCvSharp.Point2f> OpenCvSharp.Demo.PaperScanner/<>c::<>9__22_2
	Converter_2_t4DC372D63214BF0A924E7F5EA2768A8ADD776C79 * ___U3CU3E9__22_2_5;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFAA7FB765027DE17B8385EADF9A671F5C5BDDBD3_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tFAA7FB765027DE17B8385EADF9A671F5C5BDDBD3 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tFAA7FB765027DE17B8385EADF9A671F5C5BDDBD3 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tFAA7FB765027DE17B8385EADF9A671F5C5BDDBD3 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__19_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFAA7FB765027DE17B8385EADF9A671F5C5BDDBD3_StaticFields, ___U3CU3E9__19_0_1)); }
	inline Comparison_1_t3F42CFEFD2FC9BE71CED6C5FF56BAA6607BEA7CA * get_U3CU3E9__19_0_1() const { return ___U3CU3E9__19_0_1; }
	inline Comparison_1_t3F42CFEFD2FC9BE71CED6C5FF56BAA6607BEA7CA ** get_address_of_U3CU3E9__19_0_1() { return &___U3CU3E9__19_0_1; }
	inline void set_U3CU3E9__19_0_1(Comparison_1_t3F42CFEFD2FC9BE71CED6C5FF56BAA6607BEA7CA * value)
	{
		___U3CU3E9__19_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__19_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__19_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFAA7FB765027DE17B8385EADF9A671F5C5BDDBD3_StaticFields, ___U3CU3E9__19_1_2)); }
	inline Comparison_1_t3F42CFEFD2FC9BE71CED6C5FF56BAA6607BEA7CA * get_U3CU3E9__19_1_2() const { return ___U3CU3E9__19_1_2; }
	inline Comparison_1_t3F42CFEFD2FC9BE71CED6C5FF56BAA6607BEA7CA ** get_address_of_U3CU3E9__19_1_2() { return &___U3CU3E9__19_1_2; }
	inline void set_U3CU3E9__19_1_2(Comparison_1_t3F42CFEFD2FC9BE71CED6C5FF56BAA6607BEA7CA * value)
	{
		___U3CU3E9__19_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__19_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__22_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFAA7FB765027DE17B8385EADF9A671F5C5BDDBD3_StaticFields, ___U3CU3E9__22_0_3)); }
	inline Converter_2_t41220A3A71AF1F0BAA5B08051FB3B41681155A79 * get_U3CU3E9__22_0_3() const { return ___U3CU3E9__22_0_3; }
	inline Converter_2_t41220A3A71AF1F0BAA5B08051FB3B41681155A79 ** get_address_of_U3CU3E9__22_0_3() { return &___U3CU3E9__22_0_3; }
	inline void set_U3CU3E9__22_0_3(Converter_2_t41220A3A71AF1F0BAA5B08051FB3B41681155A79 * value)
	{
		___U3CU3E9__22_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__22_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__22_1_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFAA7FB765027DE17B8385EADF9A671F5C5BDDBD3_StaticFields, ___U3CU3E9__22_1_4)); }
	inline Func_3_t74D6841DDA3E88B87A03C31FEB92C6DB6CD02E46 * get_U3CU3E9__22_1_4() const { return ___U3CU3E9__22_1_4; }
	inline Func_3_t74D6841DDA3E88B87A03C31FEB92C6DB6CD02E46 ** get_address_of_U3CU3E9__22_1_4() { return &___U3CU3E9__22_1_4; }
	inline void set_U3CU3E9__22_1_4(Func_3_t74D6841DDA3E88B87A03C31FEB92C6DB6CD02E46 * value)
	{
		___U3CU3E9__22_1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__22_1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__22_2_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFAA7FB765027DE17B8385EADF9A671F5C5BDDBD3_StaticFields, ___U3CU3E9__22_2_5)); }
	inline Converter_2_t4DC372D63214BF0A924E7F5EA2768A8ADD776C79 * get_U3CU3E9__22_2_5() const { return ___U3CU3E9__22_2_5; }
	inline Converter_2_t4DC372D63214BF0A924E7F5EA2768A8ADD776C79 ** get_address_of_U3CU3E9__22_2_5() { return &___U3CU3E9__22_2_5; }
	inline void set_U3CU3E9__22_2_5(Converter_2_t4DC372D63214BF0A924E7F5EA2768A8ADD776C79 * value)
	{
		___U3CU3E9__22_2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__22_2_5), (void*)value);
	}
};


// OpenCvSharp.RNG_MT19937/PeriodParameters
struct PeriodParameters_t73386AC864F87B2DF004158C21E29EEE6F1DB3C1  : public RuntimeObject
{
public:

public:
};


// OpenCvSharp.ML.SVM/Kernel
struct Kernel_t248BA1EDB2982C89B431ACBBA11F3B1F3BE65FC9  : public RuntimeObject
{
public:

public:
};


// OpenCvSharp.Unity/TextureConversionParams
struct TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9  : public RuntimeObject
{
public:
	// System.Boolean OpenCvSharp.Unity/TextureConversionParams::<FlipVertically>k__BackingField
	bool ___U3CFlipVerticallyU3Ek__BackingField_0;
	// System.Boolean OpenCvSharp.Unity/TextureConversionParams::<FlipHorizontally>k__BackingField
	bool ___U3CFlipHorizontallyU3Ek__BackingField_1;
	// System.Int32 OpenCvSharp.Unity/TextureConversionParams::<RotationAngle>k__BackingField
	int32_t ___U3CRotationAngleU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CFlipVerticallyU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9, ___U3CFlipVerticallyU3Ek__BackingField_0)); }
	inline bool get_U3CFlipVerticallyU3Ek__BackingField_0() const { return ___U3CFlipVerticallyU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CFlipVerticallyU3Ek__BackingField_0() { return &___U3CFlipVerticallyU3Ek__BackingField_0; }
	inline void set_U3CFlipVerticallyU3Ek__BackingField_0(bool value)
	{
		___U3CFlipVerticallyU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CFlipHorizontallyU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9, ___U3CFlipHorizontallyU3Ek__BackingField_1)); }
	inline bool get_U3CFlipHorizontallyU3Ek__BackingField_1() const { return ___U3CFlipHorizontallyU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CFlipHorizontallyU3Ek__BackingField_1() { return &___U3CFlipHorizontallyU3Ek__BackingField_1; }
	inline void set_U3CFlipHorizontallyU3Ek__BackingField_1(bool value)
	{
		___U3CFlipHorizontallyU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CRotationAngleU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9, ___U3CRotationAngleU3Ek__BackingField_2)); }
	inline int32_t get_U3CRotationAngleU3Ek__BackingField_2() const { return ___U3CRotationAngleU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CRotationAngleU3Ek__BackingField_2() { return &___U3CRotationAngleU3Ek__BackingField_2; }
	inline void set_U3CRotationAngleU3Ek__BackingField_2(int32_t value)
	{
		___U3CRotationAngleU3Ek__BackingField_2 = value;
	}
};

struct TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9_StaticFields
{
public:
	// OpenCvSharp.Unity/TextureConversionParams OpenCvSharp.Unity/TextureConversionParams::Default
	TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9 * ___Default_3;

public:
	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9_StaticFields, ___Default_3)); }
	inline TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9 * get_Default_3() const { return ___Default_3; }
	inline TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_3), (void*)value);
	}
};


// OpenCvSharp.Util.WindowsLibraryLoader/ProcessArchitectureInfo
struct ProcessArchitectureInfo_t24E91B008BFA261064862083259BBDC43F974071  : public RuntimeObject
{
public:
	// System.String OpenCvSharp.Util.WindowsLibraryLoader/ProcessArchitectureInfo::<Architecture>k__BackingField
	String_t* ___U3CArchitectureU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<System.String> OpenCvSharp.Util.WindowsLibraryLoader/ProcessArchitectureInfo::<Warnings>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CWarningsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CArchitectureU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProcessArchitectureInfo_t24E91B008BFA261064862083259BBDC43F974071, ___U3CArchitectureU3Ek__BackingField_0)); }
	inline String_t* get_U3CArchitectureU3Ek__BackingField_0() const { return ___U3CArchitectureU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CArchitectureU3Ek__BackingField_0() { return &___U3CArchitectureU3Ek__BackingField_0; }
	inline void set_U3CArchitectureU3Ek__BackingField_0(String_t* value)
	{
		___U3CArchitectureU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CArchitectureU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CWarningsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProcessArchitectureInfo_t24E91B008BFA261064862083259BBDC43F974071, ___U3CWarningsU3Ek__BackingField_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CWarningsU3Ek__BackingField_1() const { return ___U3CWarningsU3Ek__BackingField_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CWarningsU3Ek__BackingField_1() { return &___U3CWarningsU3Ek__BackingField_1; }
	inline void set_U3CWarningsU3Ek__BackingField_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CWarningsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CWarningsU3Ek__BackingField_1), (void*)value);
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


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
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


// OpenCvSharp.MatType
struct MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 
{
public:
	// System.Int32 OpenCvSharp.MatType::Value
	int32_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523, ___Value_0)); }
	inline int32_t get_Value_0() const { return ___Value_0; }
	inline int32_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(int32_t value)
	{
		___Value_0 = value;
	}
};

struct MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8UC1
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_8UC1_12;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8UC2
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_8UC2_13;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8UC3
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_8UC3_14;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8UC4
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_8UC4_15;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8SC1
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_8SC1_16;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8SC2
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_8SC2_17;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8SC3
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_8SC3_18;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8SC4
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_8SC4_19;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16UC1
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_16UC1_20;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16UC2
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_16UC2_21;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16UC3
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_16UC3_22;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16UC4
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_16UC4_23;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16SC1
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_16SC1_24;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16SC2
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_16SC2_25;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16SC3
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_16SC3_26;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16SC4
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_16SC4_27;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32SC1
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_32SC1_28;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32SC2
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_32SC2_29;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32SC3
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_32SC3_30;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32SC4
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_32SC4_31;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32FC1
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_32FC1_32;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32FC2
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_32FC2_33;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32FC3
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_32FC3_34;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32FC4
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_32FC4_35;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_64FC1
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_64FC1_36;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_64FC2
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_64FC2_37;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_64FC3
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_64FC3_38;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_64FC4
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_64FC4_39;

public:
	inline static int32_t get_offset_of_CV_8UC1_12() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_8UC1_12)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_8UC1_12() const { return ___CV_8UC1_12; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_8UC1_12() { return &___CV_8UC1_12; }
	inline void set_CV_8UC1_12(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_8UC1_12 = value;
	}

	inline static int32_t get_offset_of_CV_8UC2_13() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_8UC2_13)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_8UC2_13() const { return ___CV_8UC2_13; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_8UC2_13() { return &___CV_8UC2_13; }
	inline void set_CV_8UC2_13(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_8UC2_13 = value;
	}

	inline static int32_t get_offset_of_CV_8UC3_14() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_8UC3_14)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_8UC3_14() const { return ___CV_8UC3_14; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_8UC3_14() { return &___CV_8UC3_14; }
	inline void set_CV_8UC3_14(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_8UC3_14 = value;
	}

	inline static int32_t get_offset_of_CV_8UC4_15() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_8UC4_15)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_8UC4_15() const { return ___CV_8UC4_15; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_8UC4_15() { return &___CV_8UC4_15; }
	inline void set_CV_8UC4_15(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_8UC4_15 = value;
	}

	inline static int32_t get_offset_of_CV_8SC1_16() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_8SC1_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_8SC1_16() const { return ___CV_8SC1_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_8SC1_16() { return &___CV_8SC1_16; }
	inline void set_CV_8SC1_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_8SC1_16 = value;
	}

	inline static int32_t get_offset_of_CV_8SC2_17() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_8SC2_17)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_8SC2_17() const { return ___CV_8SC2_17; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_8SC2_17() { return &___CV_8SC2_17; }
	inline void set_CV_8SC2_17(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_8SC2_17 = value;
	}

	inline static int32_t get_offset_of_CV_8SC3_18() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_8SC3_18)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_8SC3_18() const { return ___CV_8SC3_18; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_8SC3_18() { return &___CV_8SC3_18; }
	inline void set_CV_8SC3_18(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_8SC3_18 = value;
	}

	inline static int32_t get_offset_of_CV_8SC4_19() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_8SC4_19)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_8SC4_19() const { return ___CV_8SC4_19; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_8SC4_19() { return &___CV_8SC4_19; }
	inline void set_CV_8SC4_19(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_8SC4_19 = value;
	}

	inline static int32_t get_offset_of_CV_16UC1_20() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_16UC1_20)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_16UC1_20() const { return ___CV_16UC1_20; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_16UC1_20() { return &___CV_16UC1_20; }
	inline void set_CV_16UC1_20(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_16UC1_20 = value;
	}

	inline static int32_t get_offset_of_CV_16UC2_21() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_16UC2_21)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_16UC2_21() const { return ___CV_16UC2_21; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_16UC2_21() { return &___CV_16UC2_21; }
	inline void set_CV_16UC2_21(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_16UC2_21 = value;
	}

	inline static int32_t get_offset_of_CV_16UC3_22() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_16UC3_22)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_16UC3_22() const { return ___CV_16UC3_22; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_16UC3_22() { return &___CV_16UC3_22; }
	inline void set_CV_16UC3_22(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_16UC3_22 = value;
	}

	inline static int32_t get_offset_of_CV_16UC4_23() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_16UC4_23)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_16UC4_23() const { return ___CV_16UC4_23; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_16UC4_23() { return &___CV_16UC4_23; }
	inline void set_CV_16UC4_23(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_16UC4_23 = value;
	}

	inline static int32_t get_offset_of_CV_16SC1_24() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_16SC1_24)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_16SC1_24() const { return ___CV_16SC1_24; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_16SC1_24() { return &___CV_16SC1_24; }
	inline void set_CV_16SC1_24(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_16SC1_24 = value;
	}

	inline static int32_t get_offset_of_CV_16SC2_25() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_16SC2_25)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_16SC2_25() const { return ___CV_16SC2_25; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_16SC2_25() { return &___CV_16SC2_25; }
	inline void set_CV_16SC2_25(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_16SC2_25 = value;
	}

	inline static int32_t get_offset_of_CV_16SC3_26() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_16SC3_26)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_16SC3_26() const { return ___CV_16SC3_26; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_16SC3_26() { return &___CV_16SC3_26; }
	inline void set_CV_16SC3_26(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_16SC3_26 = value;
	}

	inline static int32_t get_offset_of_CV_16SC4_27() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_16SC4_27)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_16SC4_27() const { return ___CV_16SC4_27; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_16SC4_27() { return &___CV_16SC4_27; }
	inline void set_CV_16SC4_27(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_16SC4_27 = value;
	}

	inline static int32_t get_offset_of_CV_32SC1_28() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_32SC1_28)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_32SC1_28() const { return ___CV_32SC1_28; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_32SC1_28() { return &___CV_32SC1_28; }
	inline void set_CV_32SC1_28(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_32SC1_28 = value;
	}

	inline static int32_t get_offset_of_CV_32SC2_29() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_32SC2_29)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_32SC2_29() const { return ___CV_32SC2_29; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_32SC2_29() { return &___CV_32SC2_29; }
	inline void set_CV_32SC2_29(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_32SC2_29 = value;
	}

	inline static int32_t get_offset_of_CV_32SC3_30() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_32SC3_30)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_32SC3_30() const { return ___CV_32SC3_30; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_32SC3_30() { return &___CV_32SC3_30; }
	inline void set_CV_32SC3_30(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_32SC3_30 = value;
	}

	inline static int32_t get_offset_of_CV_32SC4_31() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_32SC4_31)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_32SC4_31() const { return ___CV_32SC4_31; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_32SC4_31() { return &___CV_32SC4_31; }
	inline void set_CV_32SC4_31(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_32SC4_31 = value;
	}

	inline static int32_t get_offset_of_CV_32FC1_32() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_32FC1_32)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_32FC1_32() const { return ___CV_32FC1_32; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_32FC1_32() { return &___CV_32FC1_32; }
	inline void set_CV_32FC1_32(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_32FC1_32 = value;
	}

	inline static int32_t get_offset_of_CV_32FC2_33() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_32FC2_33)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_32FC2_33() const { return ___CV_32FC2_33; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_32FC2_33() { return &___CV_32FC2_33; }
	inline void set_CV_32FC2_33(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_32FC2_33 = value;
	}

	inline static int32_t get_offset_of_CV_32FC3_34() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_32FC3_34)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_32FC3_34() const { return ___CV_32FC3_34; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_32FC3_34() { return &___CV_32FC3_34; }
	inline void set_CV_32FC3_34(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_32FC3_34 = value;
	}

	inline static int32_t get_offset_of_CV_32FC4_35() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_32FC4_35)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_32FC4_35() const { return ___CV_32FC4_35; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_32FC4_35() { return &___CV_32FC4_35; }
	inline void set_CV_32FC4_35(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_32FC4_35 = value;
	}

	inline static int32_t get_offset_of_CV_64FC1_36() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_64FC1_36)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_64FC1_36() const { return ___CV_64FC1_36; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_64FC1_36() { return &___CV_64FC1_36; }
	inline void set_CV_64FC1_36(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_64FC1_36 = value;
	}

	inline static int32_t get_offset_of_CV_64FC2_37() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_64FC2_37)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_64FC2_37() const { return ___CV_64FC2_37; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_64FC2_37() { return &___CV_64FC2_37; }
	inline void set_CV_64FC2_37(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_64FC2_37 = value;
	}

	inline static int32_t get_offset_of_CV_64FC3_38() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_64FC3_38)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_64FC3_38() const { return ___CV_64FC3_38; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_64FC3_38() { return &___CV_64FC3_38; }
	inline void set_CV_64FC3_38(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_64FC3_38 = value;
	}

	inline static int32_t get_offset_of_CV_64FC4_39() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_64FC4_39)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_64FC4_39() const { return ___CV_64FC4_39; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_64FC4_39() { return &___CV_64FC4_39; }
	inline void set_CV_64FC4_39(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_64FC4_39 = value;
	}
};


// OpenCvSharp.Point
struct Point_t01E6005639EC24B31B70D05F7FF25DC232A23396 
{
public:
	// System.Int32 OpenCvSharp.Point::X
	int32_t ___X_0;
	// System.Int32 OpenCvSharp.Point::Y
	int32_t ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Point_t01E6005639EC24B31B70D05F7FF25DC232A23396, ___X_0)); }
	inline int32_t get_X_0() const { return ___X_0; }
	inline int32_t* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(int32_t value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Point_t01E6005639EC24B31B70D05F7FF25DC232A23396, ___Y_1)); }
	inline int32_t get_Y_1() const { return ___Y_1; }
	inline int32_t* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(int32_t value)
	{
		___Y_1 = value;
	}
};


// OpenCvSharp.Point2f
struct Point2f_tB9B558F67A690FD8B415469F1C8840EC3E163D5E 
{
public:
	// System.Single OpenCvSharp.Point2f::X
	float ___X_0;
	// System.Single OpenCvSharp.Point2f::Y
	float ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Point2f_tB9B558F67A690FD8B415469F1C8840EC3E163D5E, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Point2f_tB9B558F67A690FD8B415469F1C8840EC3E163D5E, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
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


// OpenCvSharp.MatOfUShort/Indexer
struct Indexer_tB7B156EE395CCC5B4D38DF0396133C527912BEED  : public MatIndexer_1_tF90B229CEB187AD8DDD19111449C4036F4649A0E
{
public:
	// System.Byte* OpenCvSharp.MatOfUShort/Indexer::ptr
	uint8_t* ___ptr_2;

public:
	inline static int32_t get_offset_of_ptr_2() { return static_cast<int32_t>(offsetof(Indexer_tB7B156EE395CCC5B4D38DF0396133C527912BEED, ___ptr_2)); }
	inline uint8_t* get_ptr_2() const { return ___ptr_2; }
	inline uint8_t** get_address_of_ptr_2() { return &___ptr_2; }
	inline void set_ptr_2(uint8_t* value)
	{
		___ptr_2 = value;
	}
};


// OpenCvSharp.Moments/NativeStruct
struct NativeStruct_tAD32BDC8A5FE101A66640FC628D48F2E687873AC 
{
public:
	// System.Double OpenCvSharp.Moments/NativeStruct::m00
	double ___m00_0;
	// System.Double OpenCvSharp.Moments/NativeStruct::m10
	double ___m10_1;
	// System.Double OpenCvSharp.Moments/NativeStruct::m01
	double ___m01_2;
	// System.Double OpenCvSharp.Moments/NativeStruct::m20
	double ___m20_3;
	// System.Double OpenCvSharp.Moments/NativeStruct::m11
	double ___m11_4;
	// System.Double OpenCvSharp.Moments/NativeStruct::m02
	double ___m02_5;
	// System.Double OpenCvSharp.Moments/NativeStruct::m30
	double ___m30_6;
	// System.Double OpenCvSharp.Moments/NativeStruct::m21
	double ___m21_7;
	// System.Double OpenCvSharp.Moments/NativeStruct::m12
	double ___m12_8;
	// System.Double OpenCvSharp.Moments/NativeStruct::m03
	double ___m03_9;
	// System.Double OpenCvSharp.Moments/NativeStruct::mu20
	double ___mu20_10;
	// System.Double OpenCvSharp.Moments/NativeStruct::mu11
	double ___mu11_11;
	// System.Double OpenCvSharp.Moments/NativeStruct::mu02
	double ___mu02_12;
	// System.Double OpenCvSharp.Moments/NativeStruct::mu30
	double ___mu30_13;
	// System.Double OpenCvSharp.Moments/NativeStruct::mu21
	double ___mu21_14;
	// System.Double OpenCvSharp.Moments/NativeStruct::mu12
	double ___mu12_15;
	// System.Double OpenCvSharp.Moments/NativeStruct::mu03
	double ___mu03_16;
	// System.Double OpenCvSharp.Moments/NativeStruct::inv_sqrt_m00
	double ___inv_sqrt_m00_17;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(NativeStruct_tAD32BDC8A5FE101A66640FC628D48F2E687873AC, ___m00_0)); }
	inline double get_m00_0() const { return ___m00_0; }
	inline double* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(double value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(NativeStruct_tAD32BDC8A5FE101A66640FC628D48F2E687873AC, ___m10_1)); }
	inline double get_m10_1() const { return ___m10_1; }
	inline double* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(double value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m01_2() { return static_cast<int32_t>(offsetof(NativeStruct_tAD32BDC8A5FE101A66640FC628D48F2E687873AC, ___m01_2)); }
	inline double get_m01_2() const { return ___m01_2; }
	inline double* get_address_of_m01_2() { return &___m01_2; }
	inline void set_m01_2(double value)
	{
		___m01_2 = value;
	}

	inline static int32_t get_offset_of_m20_3() { return static_cast<int32_t>(offsetof(NativeStruct_tAD32BDC8A5FE101A66640FC628D48F2E687873AC, ___m20_3)); }
	inline double get_m20_3() const { return ___m20_3; }
	inline double* get_address_of_m20_3() { return &___m20_3; }
	inline void set_m20_3(double value)
	{
		___m20_3 = value;
	}

	inline static int32_t get_offset_of_m11_4() { return static_cast<int32_t>(offsetof(NativeStruct_tAD32BDC8A5FE101A66640FC628D48F2E687873AC, ___m11_4)); }
	inline double get_m11_4() const { return ___m11_4; }
	inline double* get_address_of_m11_4() { return &___m11_4; }
	inline void set_m11_4(double value)
	{
		___m11_4 = value;
	}

	inline static int32_t get_offset_of_m02_5() { return static_cast<int32_t>(offsetof(NativeStruct_tAD32BDC8A5FE101A66640FC628D48F2E687873AC, ___m02_5)); }
	inline double get_m02_5() const { return ___m02_5; }
	inline double* get_address_of_m02_5() { return &___m02_5; }
	inline void set_m02_5(double value)
	{
		___m02_5 = value;
	}

	inline static int32_t get_offset_of_m30_6() { return static_cast<int32_t>(offsetof(NativeStruct_tAD32BDC8A5FE101A66640FC628D48F2E687873AC, ___m30_6)); }
	inline double get_m30_6() const { return ___m30_6; }
	inline double* get_address_of_m30_6() { return &___m30_6; }
	inline void set_m30_6(double value)
	{
		___m30_6 = value;
	}

	inline static int32_t get_offset_of_m21_7() { return static_cast<int32_t>(offsetof(NativeStruct_tAD32BDC8A5FE101A66640FC628D48F2E687873AC, ___m21_7)); }
	inline double get_m21_7() const { return ___m21_7; }
	inline double* get_address_of_m21_7() { return &___m21_7; }
	inline void set_m21_7(double value)
	{
		___m21_7 = value;
	}

	inline static int32_t get_offset_of_m12_8() { return static_cast<int32_t>(offsetof(NativeStruct_tAD32BDC8A5FE101A66640FC628D48F2E687873AC, ___m12_8)); }
	inline double get_m12_8() const { return ___m12_8; }
	inline double* get_address_of_m12_8() { return &___m12_8; }
	inline void set_m12_8(double value)
	{
		___m12_8 = value;
	}

	inline static int32_t get_offset_of_m03_9() { return static_cast<int32_t>(offsetof(NativeStruct_tAD32BDC8A5FE101A66640FC628D48F2E687873AC, ___m03_9)); }
	inline double get_m03_9() const { return ___m03_9; }
	inline double* get_address_of_m03_9() { return &___m03_9; }
	inline void set_m03_9(double value)
	{
		___m03_9 = value;
	}

	inline static int32_t get_offset_of_mu20_10() { return static_cast<int32_t>(offsetof(NativeStruct_tAD32BDC8A5FE101A66640FC628D48F2E687873AC, ___mu20_10)); }
	inline double get_mu20_10() const { return ___mu20_10; }
	inline double* get_address_of_mu20_10() { return &___mu20_10; }
	inline void set_mu20_10(double value)
	{
		___mu20_10 = value;
	}

	inline static int32_t get_offset_of_mu11_11() { return static_cast<int32_t>(offsetof(NativeStruct_tAD32BDC8A5FE101A66640FC628D48F2E687873AC, ___mu11_11)); }
	inline double get_mu11_11() const { return ___mu11_11; }
	inline double* get_address_of_mu11_11() { return &___mu11_11; }
	inline void set_mu11_11(double value)
	{
		___mu11_11 = value;
	}

	inline static int32_t get_offset_of_mu02_12() { return static_cast<int32_t>(offsetof(NativeStruct_tAD32BDC8A5FE101A66640FC628D48F2E687873AC, ___mu02_12)); }
	inline double get_mu02_12() const { return ___mu02_12; }
	inline double* get_address_of_mu02_12() { return &___mu02_12; }
	inline void set_mu02_12(double value)
	{
		___mu02_12 = value;
	}

	inline static int32_t get_offset_of_mu30_13() { return static_cast<int32_t>(offsetof(NativeStruct_tAD32BDC8A5FE101A66640FC628D48F2E687873AC, ___mu30_13)); }
	inline double get_mu30_13() const { return ___mu30_13; }
	inline double* get_address_of_mu30_13() { return &___mu30_13; }
	inline void set_mu30_13(double value)
	{
		___mu30_13 = value;
	}

	inline static int32_t get_offset_of_mu21_14() { return static_cast<int32_t>(offsetof(NativeStruct_tAD32BDC8A5FE101A66640FC628D48F2E687873AC, ___mu21_14)); }
	inline double get_mu21_14() const { return ___mu21_14; }
	inline double* get_address_of_mu21_14() { return &___mu21_14; }
	inline void set_mu21_14(double value)
	{
		___mu21_14 = value;
	}

	inline static int32_t get_offset_of_mu12_15() { return static_cast<int32_t>(offsetof(NativeStruct_tAD32BDC8A5FE101A66640FC628D48F2E687873AC, ___mu12_15)); }
	inline double get_mu12_15() const { return ___mu12_15; }
	inline double* get_address_of_mu12_15() { return &___mu12_15; }
	inline void set_mu12_15(double value)
	{
		___mu12_15 = value;
	}

	inline static int32_t get_offset_of_mu03_16() { return static_cast<int32_t>(offsetof(NativeStruct_tAD32BDC8A5FE101A66640FC628D48F2E687873AC, ___mu03_16)); }
	inline double get_mu03_16() const { return ___mu03_16; }
	inline double* get_address_of_mu03_16() { return &___mu03_16; }
	inline void set_mu03_16(double value)
	{
		___mu03_16 = value;
	}

	inline static int32_t get_offset_of_inv_sqrt_m00_17() { return static_cast<int32_t>(offsetof(NativeStruct_tAD32BDC8A5FE101A66640FC628D48F2E687873AC, ___inv_sqrt_m00_17)); }
	inline double get_inv_sqrt_m00_17() const { return ___inv_sqrt_m00_17; }
	inline double* get_address_of_inv_sqrt_m00_17() { return &___inv_sqrt_m00_17; }
	inline void set_inv_sqrt_m00_17(double value)
	{
		___inv_sqrt_m00_17 = value;
	}
};


// OpenCvSharp.SimpleBlobDetector/WParams
struct WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC 
{
public:
	// System.Single OpenCvSharp.SimpleBlobDetector/WParams::thresholdStep
	float ___thresholdStep_0;
	// System.Single OpenCvSharp.SimpleBlobDetector/WParams::minThreshold
	float ___minThreshold_1;
	// System.Single OpenCvSharp.SimpleBlobDetector/WParams::maxThreshold
	float ___maxThreshold_2;
	// System.UInt32 OpenCvSharp.SimpleBlobDetector/WParams::minRepeatability
	uint32_t ___minRepeatability_3;
	// System.Single OpenCvSharp.SimpleBlobDetector/WParams::minDistBetweenBlobs
	float ___minDistBetweenBlobs_4;
	// System.Int32 OpenCvSharp.SimpleBlobDetector/WParams::filterByColor
	int32_t ___filterByColor_5;
	// System.Byte OpenCvSharp.SimpleBlobDetector/WParams::blobColor
	uint8_t ___blobColor_6;
	// System.Int32 OpenCvSharp.SimpleBlobDetector/WParams::filterByArea
	int32_t ___filterByArea_7;
	// System.Single OpenCvSharp.SimpleBlobDetector/WParams::minArea
	float ___minArea_8;
	// System.Single OpenCvSharp.SimpleBlobDetector/WParams::maxArea
	float ___maxArea_9;
	// System.Int32 OpenCvSharp.SimpleBlobDetector/WParams::filterByCircularity
	int32_t ___filterByCircularity_10;
	// System.Single OpenCvSharp.SimpleBlobDetector/WParams::minCircularity
	float ___minCircularity_11;
	// System.Single OpenCvSharp.SimpleBlobDetector/WParams::maxCircularity
	float ___maxCircularity_12;
	// System.Int32 OpenCvSharp.SimpleBlobDetector/WParams::filterByInertia
	int32_t ___filterByInertia_13;
	// System.Single OpenCvSharp.SimpleBlobDetector/WParams::minInertiaRatio
	float ___minInertiaRatio_14;
	// System.Single OpenCvSharp.SimpleBlobDetector/WParams::maxInertiaRatio
	float ___maxInertiaRatio_15;
	// System.Int32 OpenCvSharp.SimpleBlobDetector/WParams::filterByConvexity
	int32_t ___filterByConvexity_16;
	// System.Single OpenCvSharp.SimpleBlobDetector/WParams::minConvexity
	float ___minConvexity_17;
	// System.Single OpenCvSharp.SimpleBlobDetector/WParams::maxConvexity
	float ___maxConvexity_18;

public:
	inline static int32_t get_offset_of_thresholdStep_0() { return static_cast<int32_t>(offsetof(WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC, ___thresholdStep_0)); }
	inline float get_thresholdStep_0() const { return ___thresholdStep_0; }
	inline float* get_address_of_thresholdStep_0() { return &___thresholdStep_0; }
	inline void set_thresholdStep_0(float value)
	{
		___thresholdStep_0 = value;
	}

	inline static int32_t get_offset_of_minThreshold_1() { return static_cast<int32_t>(offsetof(WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC, ___minThreshold_1)); }
	inline float get_minThreshold_1() const { return ___minThreshold_1; }
	inline float* get_address_of_minThreshold_1() { return &___minThreshold_1; }
	inline void set_minThreshold_1(float value)
	{
		___minThreshold_1 = value;
	}

	inline static int32_t get_offset_of_maxThreshold_2() { return static_cast<int32_t>(offsetof(WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC, ___maxThreshold_2)); }
	inline float get_maxThreshold_2() const { return ___maxThreshold_2; }
	inline float* get_address_of_maxThreshold_2() { return &___maxThreshold_2; }
	inline void set_maxThreshold_2(float value)
	{
		___maxThreshold_2 = value;
	}

	inline static int32_t get_offset_of_minRepeatability_3() { return static_cast<int32_t>(offsetof(WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC, ___minRepeatability_3)); }
	inline uint32_t get_minRepeatability_3() const { return ___minRepeatability_3; }
	inline uint32_t* get_address_of_minRepeatability_3() { return &___minRepeatability_3; }
	inline void set_minRepeatability_3(uint32_t value)
	{
		___minRepeatability_3 = value;
	}

	inline static int32_t get_offset_of_minDistBetweenBlobs_4() { return static_cast<int32_t>(offsetof(WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC, ___minDistBetweenBlobs_4)); }
	inline float get_minDistBetweenBlobs_4() const { return ___minDistBetweenBlobs_4; }
	inline float* get_address_of_minDistBetweenBlobs_4() { return &___minDistBetweenBlobs_4; }
	inline void set_minDistBetweenBlobs_4(float value)
	{
		___minDistBetweenBlobs_4 = value;
	}

	inline static int32_t get_offset_of_filterByColor_5() { return static_cast<int32_t>(offsetof(WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC, ___filterByColor_5)); }
	inline int32_t get_filterByColor_5() const { return ___filterByColor_5; }
	inline int32_t* get_address_of_filterByColor_5() { return &___filterByColor_5; }
	inline void set_filterByColor_5(int32_t value)
	{
		___filterByColor_5 = value;
	}

	inline static int32_t get_offset_of_blobColor_6() { return static_cast<int32_t>(offsetof(WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC, ___blobColor_6)); }
	inline uint8_t get_blobColor_6() const { return ___blobColor_6; }
	inline uint8_t* get_address_of_blobColor_6() { return &___blobColor_6; }
	inline void set_blobColor_6(uint8_t value)
	{
		___blobColor_6 = value;
	}

	inline static int32_t get_offset_of_filterByArea_7() { return static_cast<int32_t>(offsetof(WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC, ___filterByArea_7)); }
	inline int32_t get_filterByArea_7() const { return ___filterByArea_7; }
	inline int32_t* get_address_of_filterByArea_7() { return &___filterByArea_7; }
	inline void set_filterByArea_7(int32_t value)
	{
		___filterByArea_7 = value;
	}

	inline static int32_t get_offset_of_minArea_8() { return static_cast<int32_t>(offsetof(WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC, ___minArea_8)); }
	inline float get_minArea_8() const { return ___minArea_8; }
	inline float* get_address_of_minArea_8() { return &___minArea_8; }
	inline void set_minArea_8(float value)
	{
		___minArea_8 = value;
	}

	inline static int32_t get_offset_of_maxArea_9() { return static_cast<int32_t>(offsetof(WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC, ___maxArea_9)); }
	inline float get_maxArea_9() const { return ___maxArea_9; }
	inline float* get_address_of_maxArea_9() { return &___maxArea_9; }
	inline void set_maxArea_9(float value)
	{
		___maxArea_9 = value;
	}

	inline static int32_t get_offset_of_filterByCircularity_10() { return static_cast<int32_t>(offsetof(WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC, ___filterByCircularity_10)); }
	inline int32_t get_filterByCircularity_10() const { return ___filterByCircularity_10; }
	inline int32_t* get_address_of_filterByCircularity_10() { return &___filterByCircularity_10; }
	inline void set_filterByCircularity_10(int32_t value)
	{
		___filterByCircularity_10 = value;
	}

	inline static int32_t get_offset_of_minCircularity_11() { return static_cast<int32_t>(offsetof(WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC, ___minCircularity_11)); }
	inline float get_minCircularity_11() const { return ___minCircularity_11; }
	inline float* get_address_of_minCircularity_11() { return &___minCircularity_11; }
	inline void set_minCircularity_11(float value)
	{
		___minCircularity_11 = value;
	}

	inline static int32_t get_offset_of_maxCircularity_12() { return static_cast<int32_t>(offsetof(WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC, ___maxCircularity_12)); }
	inline float get_maxCircularity_12() const { return ___maxCircularity_12; }
	inline float* get_address_of_maxCircularity_12() { return &___maxCircularity_12; }
	inline void set_maxCircularity_12(float value)
	{
		___maxCircularity_12 = value;
	}

	inline static int32_t get_offset_of_filterByInertia_13() { return static_cast<int32_t>(offsetof(WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC, ___filterByInertia_13)); }
	inline int32_t get_filterByInertia_13() const { return ___filterByInertia_13; }
	inline int32_t* get_address_of_filterByInertia_13() { return &___filterByInertia_13; }
	inline void set_filterByInertia_13(int32_t value)
	{
		___filterByInertia_13 = value;
	}

	inline static int32_t get_offset_of_minInertiaRatio_14() { return static_cast<int32_t>(offsetof(WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC, ___minInertiaRatio_14)); }
	inline float get_minInertiaRatio_14() const { return ___minInertiaRatio_14; }
	inline float* get_address_of_minInertiaRatio_14() { return &___minInertiaRatio_14; }
	inline void set_minInertiaRatio_14(float value)
	{
		___minInertiaRatio_14 = value;
	}

	inline static int32_t get_offset_of_maxInertiaRatio_15() { return static_cast<int32_t>(offsetof(WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC, ___maxInertiaRatio_15)); }
	inline float get_maxInertiaRatio_15() const { return ___maxInertiaRatio_15; }
	inline float* get_address_of_maxInertiaRatio_15() { return &___maxInertiaRatio_15; }
	inline void set_maxInertiaRatio_15(float value)
	{
		___maxInertiaRatio_15 = value;
	}

	inline static int32_t get_offset_of_filterByConvexity_16() { return static_cast<int32_t>(offsetof(WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC, ___filterByConvexity_16)); }
	inline int32_t get_filterByConvexity_16() const { return ___filterByConvexity_16; }
	inline int32_t* get_address_of_filterByConvexity_16() { return &___filterByConvexity_16; }
	inline void set_filterByConvexity_16(int32_t value)
	{
		___filterByConvexity_16 = value;
	}

	inline static int32_t get_offset_of_minConvexity_17() { return static_cast<int32_t>(offsetof(WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC, ___minConvexity_17)); }
	inline float get_minConvexity_17() const { return ___minConvexity_17; }
	inline float* get_address_of_minConvexity_17() { return &___minConvexity_17; }
	inline void set_minConvexity_17(float value)
	{
		___minConvexity_17 = value;
	}

	inline static int32_t get_offset_of_maxConvexity_18() { return static_cast<int32_t>(offsetof(WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC, ___maxConvexity_18)); }
	inline float get_maxConvexity_18() const { return ___maxConvexity_18; }
	inline float* get_address_of_maxConvexity_18() { return &___maxConvexity_18; }
	inline void set_maxConvexity_18(float value)
	{
		___maxConvexity_18 = value;
	}
};


// OpenCvSharp.Unity/Color32Bytes
struct Color32Bytes_t4E117D295899BA79691FCEDA183B693131C94BCF 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte[] OpenCvSharp.Unity/Color32Bytes::byteArray
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteArray_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteArray_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// UnityEngine.Color32[] OpenCvSharp.Unity/Color32Bytes::colors
			Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___colors_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___colors_1_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_byteArray_0() { return static_cast<int32_t>(offsetof(Color32Bytes_t4E117D295899BA79691FCEDA183B693131C94BCF, ___byteArray_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteArray_0() const { return ___byteArray_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteArray_0() { return &___byteArray_0; }
	inline void set_byteArray_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteArray_0), (void*)value);
	}

	inline static int32_t get_offset_of_colors_1() { return static_cast<int32_t>(offsetof(Color32Bytes_t4E117D295899BA79691FCEDA183B693131C94BCF, ___colors_1)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get_colors_1() const { return ___colors_1; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of_colors_1() { return &___colors_1; }
	inline void set_colors_1(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		___colors_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colors_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of OpenCvSharp.Unity/Color32Bytes
struct Color32Bytes_t4E117D295899BA79691FCEDA183B693131C94BCF_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			Il2CppSafeArray/*NONE*/* ___byteArray_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppSafeArray/*NONE*/* ___byteArray_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * ___colors_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * ___colors_1_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of OpenCvSharp.Unity/Color32Bytes
struct Color32Bytes_t4E117D295899BA79691FCEDA183B693131C94BCF_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			Il2CppSafeArray/*NONE*/* ___byteArray_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppSafeArray/*NONE*/* ___byteArray_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * ___colors_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * ___colors_1_forAlignmentOnly;
		};
	};
};

// OpenCvSharp.Win32Api/BITMAPINFOHEADER
struct BITMAPINFOHEADER_t6798D461C5D32B8B58597BD646D74DAF84754698 
{
public:
	// System.UInt32 OpenCvSharp.Win32Api/BITMAPINFOHEADER::Size
	uint32_t ___Size_0;
	// System.Int32 OpenCvSharp.Win32Api/BITMAPINFOHEADER::Width
	int32_t ___Width_1;
	// System.Int32 OpenCvSharp.Win32Api/BITMAPINFOHEADER::Height
	int32_t ___Height_2;
	// System.UInt16 OpenCvSharp.Win32Api/BITMAPINFOHEADER::Planes
	uint16_t ___Planes_3;
	// System.UInt16 OpenCvSharp.Win32Api/BITMAPINFOHEADER::BitCount
	uint16_t ___BitCount_4;
	// System.UInt32 OpenCvSharp.Win32Api/BITMAPINFOHEADER::Compression
	uint32_t ___Compression_5;
	// System.UInt32 OpenCvSharp.Win32Api/BITMAPINFOHEADER::SizeImage
	uint32_t ___SizeImage_6;
	// System.Int32 OpenCvSharp.Win32Api/BITMAPINFOHEADER::XPelsPerMeter
	int32_t ___XPelsPerMeter_7;
	// System.Int32 OpenCvSharp.Win32Api/BITMAPINFOHEADER::YPelsPerMeter
	int32_t ___YPelsPerMeter_8;
	// System.UInt32 OpenCvSharp.Win32Api/BITMAPINFOHEADER::ClrUsed
	uint32_t ___ClrUsed_9;
	// System.UInt32 OpenCvSharp.Win32Api/BITMAPINFOHEADER::ClrImportant
	uint32_t ___ClrImportant_10;

public:
	inline static int32_t get_offset_of_Size_0() { return static_cast<int32_t>(offsetof(BITMAPINFOHEADER_t6798D461C5D32B8B58597BD646D74DAF84754698, ___Size_0)); }
	inline uint32_t get_Size_0() const { return ___Size_0; }
	inline uint32_t* get_address_of_Size_0() { return &___Size_0; }
	inline void set_Size_0(uint32_t value)
	{
		___Size_0 = value;
	}

	inline static int32_t get_offset_of_Width_1() { return static_cast<int32_t>(offsetof(BITMAPINFOHEADER_t6798D461C5D32B8B58597BD646D74DAF84754698, ___Width_1)); }
	inline int32_t get_Width_1() const { return ___Width_1; }
	inline int32_t* get_address_of_Width_1() { return &___Width_1; }
	inline void set_Width_1(int32_t value)
	{
		___Width_1 = value;
	}

	inline static int32_t get_offset_of_Height_2() { return static_cast<int32_t>(offsetof(BITMAPINFOHEADER_t6798D461C5D32B8B58597BD646D74DAF84754698, ___Height_2)); }
	inline int32_t get_Height_2() const { return ___Height_2; }
	inline int32_t* get_address_of_Height_2() { return &___Height_2; }
	inline void set_Height_2(int32_t value)
	{
		___Height_2 = value;
	}

	inline static int32_t get_offset_of_Planes_3() { return static_cast<int32_t>(offsetof(BITMAPINFOHEADER_t6798D461C5D32B8B58597BD646D74DAF84754698, ___Planes_3)); }
	inline uint16_t get_Planes_3() const { return ___Planes_3; }
	inline uint16_t* get_address_of_Planes_3() { return &___Planes_3; }
	inline void set_Planes_3(uint16_t value)
	{
		___Planes_3 = value;
	}

	inline static int32_t get_offset_of_BitCount_4() { return static_cast<int32_t>(offsetof(BITMAPINFOHEADER_t6798D461C5D32B8B58597BD646D74DAF84754698, ___BitCount_4)); }
	inline uint16_t get_BitCount_4() const { return ___BitCount_4; }
	inline uint16_t* get_address_of_BitCount_4() { return &___BitCount_4; }
	inline void set_BitCount_4(uint16_t value)
	{
		___BitCount_4 = value;
	}

	inline static int32_t get_offset_of_Compression_5() { return static_cast<int32_t>(offsetof(BITMAPINFOHEADER_t6798D461C5D32B8B58597BD646D74DAF84754698, ___Compression_5)); }
	inline uint32_t get_Compression_5() const { return ___Compression_5; }
	inline uint32_t* get_address_of_Compression_5() { return &___Compression_5; }
	inline void set_Compression_5(uint32_t value)
	{
		___Compression_5 = value;
	}

	inline static int32_t get_offset_of_SizeImage_6() { return static_cast<int32_t>(offsetof(BITMAPINFOHEADER_t6798D461C5D32B8B58597BD646D74DAF84754698, ___SizeImage_6)); }
	inline uint32_t get_SizeImage_6() const { return ___SizeImage_6; }
	inline uint32_t* get_address_of_SizeImage_6() { return &___SizeImage_6; }
	inline void set_SizeImage_6(uint32_t value)
	{
		___SizeImage_6 = value;
	}

	inline static int32_t get_offset_of_XPelsPerMeter_7() { return static_cast<int32_t>(offsetof(BITMAPINFOHEADER_t6798D461C5D32B8B58597BD646D74DAF84754698, ___XPelsPerMeter_7)); }
	inline int32_t get_XPelsPerMeter_7() const { return ___XPelsPerMeter_7; }
	inline int32_t* get_address_of_XPelsPerMeter_7() { return &___XPelsPerMeter_7; }
	inline void set_XPelsPerMeter_7(int32_t value)
	{
		___XPelsPerMeter_7 = value;
	}

	inline static int32_t get_offset_of_YPelsPerMeter_8() { return static_cast<int32_t>(offsetof(BITMAPINFOHEADER_t6798D461C5D32B8B58597BD646D74DAF84754698, ___YPelsPerMeter_8)); }
	inline int32_t get_YPelsPerMeter_8() const { return ___YPelsPerMeter_8; }
	inline int32_t* get_address_of_YPelsPerMeter_8() { return &___YPelsPerMeter_8; }
	inline void set_YPelsPerMeter_8(int32_t value)
	{
		___YPelsPerMeter_8 = value;
	}

	inline static int32_t get_offset_of_ClrUsed_9() { return static_cast<int32_t>(offsetof(BITMAPINFOHEADER_t6798D461C5D32B8B58597BD646D74DAF84754698, ___ClrUsed_9)); }
	inline uint32_t get_ClrUsed_9() const { return ___ClrUsed_9; }
	inline uint32_t* get_address_of_ClrUsed_9() { return &___ClrUsed_9; }
	inline void set_ClrUsed_9(uint32_t value)
	{
		___ClrUsed_9 = value;
	}

	inline static int32_t get_offset_of_ClrImportant_10() { return static_cast<int32_t>(offsetof(BITMAPINFOHEADER_t6798D461C5D32B8B58597BD646D74DAF84754698, ___ClrImportant_10)); }
	inline uint32_t get_ClrImportant_10() const { return ___ClrImportant_10; }
	inline uint32_t* get_address_of_ClrImportant_10() { return &___ClrImportant_10; }
	inline void set_ClrImportant_10(uint32_t value)
	{
		___ClrImportant_10 = value;
	}
};


// OpenCvSharp.Win32Api/RGBQUAD
struct RGBQUAD_t13428C6F4F848C96705245CB94F0A9A8245C8BFB 
{
public:
	// System.Byte OpenCvSharp.Win32Api/RGBQUAD::Blue
	uint8_t ___Blue_0;
	// System.Byte OpenCvSharp.Win32Api/RGBQUAD::Green
	uint8_t ___Green_1;
	// System.Byte OpenCvSharp.Win32Api/RGBQUAD::Red
	uint8_t ___Red_2;
	// System.Byte OpenCvSharp.Win32Api/RGBQUAD::Reserved
	uint8_t ___Reserved_3;

public:
	inline static int32_t get_offset_of_Blue_0() { return static_cast<int32_t>(offsetof(RGBQUAD_t13428C6F4F848C96705245CB94F0A9A8245C8BFB, ___Blue_0)); }
	inline uint8_t get_Blue_0() const { return ___Blue_0; }
	inline uint8_t* get_address_of_Blue_0() { return &___Blue_0; }
	inline void set_Blue_0(uint8_t value)
	{
		___Blue_0 = value;
	}

	inline static int32_t get_offset_of_Green_1() { return static_cast<int32_t>(offsetof(RGBQUAD_t13428C6F4F848C96705245CB94F0A9A8245C8BFB, ___Green_1)); }
	inline uint8_t get_Green_1() const { return ___Green_1; }
	inline uint8_t* get_address_of_Green_1() { return &___Green_1; }
	inline void set_Green_1(uint8_t value)
	{
		___Green_1 = value;
	}

	inline static int32_t get_offset_of_Red_2() { return static_cast<int32_t>(offsetof(RGBQUAD_t13428C6F4F848C96705245CB94F0A9A8245C8BFB, ___Red_2)); }
	inline uint8_t get_Red_2() const { return ___Red_2; }
	inline uint8_t* get_address_of_Red_2() { return &___Red_2; }
	inline void set_Red_2(uint8_t value)
	{
		___Red_2 = value;
	}

	inline static int32_t get_offset_of_Reserved_3() { return static_cast<int32_t>(offsetof(RGBQUAD_t13428C6F4F848C96705245CB94F0A9A8245C8BFB, ___Reserved_3)); }
	inline uint8_t get_Reserved_3() const { return ___Reserved_3; }
	inline uint8_t* get_address_of_Reserved_3() { return &___Reserved_3; }
	inline void set_Reserved_3(uint8_t value)
	{
		___Reserved_3 = value;
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

// OpenCvSharp.DisposableObject
struct DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115  : public RuntimeObject
{
public:
	// System.Boolean OpenCvSharp.DisposableObject::<IsDisposed>k__BackingField
	bool ___U3CIsDisposedU3Ek__BackingField_0;
	// System.Boolean OpenCvSharp.DisposableObject::<IsEnabledDispose>k__BackingField
	bool ___U3CIsEnabledDisposeU3Ek__BackingField_1;
	// System.Runtime.InteropServices.GCHandle OpenCvSharp.DisposableObject::dataHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___dataHandle_2;
	// System.IntPtr OpenCvSharp.DisposableObject::<AllocatedMemory>k__BackingField
	intptr_t ___U3CAllocatedMemoryU3Ek__BackingField_3;
	// System.Int64 OpenCvSharp.DisposableObject::<AllocatedMemorySize>k__BackingField
	int64_t ___U3CAllocatedMemorySizeU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CIsDisposedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115, ___U3CIsDisposedU3Ek__BackingField_0)); }
	inline bool get_U3CIsDisposedU3Ek__BackingField_0() const { return ___U3CIsDisposedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsDisposedU3Ek__BackingField_0() { return &___U3CIsDisposedU3Ek__BackingField_0; }
	inline void set_U3CIsDisposedU3Ek__BackingField_0(bool value)
	{
		___U3CIsDisposedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CIsEnabledDisposeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115, ___U3CIsEnabledDisposeU3Ek__BackingField_1)); }
	inline bool get_U3CIsEnabledDisposeU3Ek__BackingField_1() const { return ___U3CIsEnabledDisposeU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsEnabledDisposeU3Ek__BackingField_1() { return &___U3CIsEnabledDisposeU3Ek__BackingField_1; }
	inline void set_U3CIsEnabledDisposeU3Ek__BackingField_1(bool value)
	{
		___U3CIsEnabledDisposeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_dataHandle_2() { return static_cast<int32_t>(offsetof(DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115, ___dataHandle_2)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_dataHandle_2() const { return ___dataHandle_2; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_dataHandle_2() { return &___dataHandle_2; }
	inline void set_dataHandle_2(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___dataHandle_2 = value;
	}

	inline static int32_t get_offset_of_U3CAllocatedMemoryU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115, ___U3CAllocatedMemoryU3Ek__BackingField_3)); }
	inline intptr_t get_U3CAllocatedMemoryU3Ek__BackingField_3() const { return ___U3CAllocatedMemoryU3Ek__BackingField_3; }
	inline intptr_t* get_address_of_U3CAllocatedMemoryU3Ek__BackingField_3() { return &___U3CAllocatedMemoryU3Ek__BackingField_3; }
	inline void set_U3CAllocatedMemoryU3Ek__BackingField_3(intptr_t value)
	{
		___U3CAllocatedMemoryU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CAllocatedMemorySizeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115, ___U3CAllocatedMemorySizeU3Ek__BackingField_4)); }
	inline int64_t get_U3CAllocatedMemorySizeU3Ek__BackingField_4() const { return ___U3CAllocatedMemorySizeU3Ek__BackingField_4; }
	inline int64_t* get_address_of_U3CAllocatedMemorySizeU3Ek__BackingField_4() { return &___U3CAllocatedMemorySizeU3Ek__BackingField_4; }
	inline void set_U3CAllocatedMemorySizeU3Ek__BackingField_4(int64_t value)
	{
		___U3CAllocatedMemorySizeU3Ek__BackingField_4 = value;
	}
};


// OpenCvSharp.ErrorCode
struct ErrorCode_tBBE76DCC98CFCA27E21F1C7C4645ACE5F01F8C34 
{
public:
	// System.Int32 OpenCvSharp.ErrorCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ErrorCode_tBBE76DCC98CFCA27E21F1C7C4645ACE5F01F8C34, ___value___2)); }
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

// OpenCvSharp.CvText/OCRClassifierType
struct OCRClassifierType_t591D7FACB37951FB6BD65D0B85C4FFED6E66E8E8 
{
public:
	// System.Int32 OpenCvSharp.CvText/OCRClassifierType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OCRClassifierType_t591D7FACB37951FB6BD65D0B85C4FFED6E66E8E8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OpenCvSharp.PCA/Flags
struct Flags_tDFB30E880BC1DE15EA1439E0D25B7F9C86852E2B 
{
public:
	// System.Int32 OpenCvSharp.PCA/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tDFB30E880BC1DE15EA1439E0D25B7F9C86852E2B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OpenCvSharp.SVD/Flags
struct Flags_t5E03E83EDDB9807CF8C5F0DBB692406F8EE937B5 
{
public:
	// System.Int32 OpenCvSharp.SVD/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t5E03E83EDDB9807CF8C5F0DBB692406F8EE937B5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OpenCvSharp.ML.SVM/KernelTypes
struct KernelTypes_t48D6FF7E9C46C77FBC69F22EA5EF67C3DDE6D286 
{
public:
	// System.Int32 OpenCvSharp.ML.SVM/KernelTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KernelTypes_t48D6FF7E9C46C77FBC69F22EA5EF67C3DDE6D286, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OpenCvSharp.ML.SVM/ParamTypes
struct ParamTypes_t97248DEF4FE3DA5D4290ACFFC68DA41E5F566545 
{
public:
	// System.Int32 OpenCvSharp.ML.SVM/ParamTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParamTypes_t97248DEF4FE3DA5D4290ACFFC68DA41E5F566545, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OpenCvSharp.ML.SVM/Types
struct Types_t36DF9E9DC4191207697C631EE449DE16AF1326AF 
{
public:
	// System.Int32 OpenCvSharp.ML.SVM/Types::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Types_t36DF9E9DC4191207697C631EE449DE16AF1326AF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OpenCvSharp.SimpleBlobDetector/Params
struct Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3  : public RuntimeObject
{
public:
	// OpenCvSharp.SimpleBlobDetector/WParams OpenCvSharp.SimpleBlobDetector/Params::data
	WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC  ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3, ___data_0)); }
	inline WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC  get_data_0() const { return ___data_0; }
	inline WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC  value)
	{
		___data_0 = value;
	}
};


// OpenCvSharp.ML.StatModel/Flags
struct Flags_t01CB44988BFC37401EB6C11AEF35C552F8FAFE96 
{
public:
	// System.Int32 OpenCvSharp.ML.StatModel/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t01CB44988BFC37401EB6C11AEF35C552F8FAFE96, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OpenCvSharp.Stitcher/Status
struct Status_tF914BD07A8628337C5D86E8544FB2EDAF7E1B1DB 
{
public:
	// System.Int32 OpenCvSharp.Stitcher/Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_tF914BD07A8628337C5D86E8544FB2EDAF7E1B1DB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OpenCvSharp.Win32Api/BITMAPINFO
struct BITMAPINFO_t8F9957EDE342D483C740B4BC103F4E9C8404F570 
{
public:
	// OpenCvSharp.Win32Api/BITMAPINFOHEADER OpenCvSharp.Win32Api/BITMAPINFO::Header
	BITMAPINFOHEADER_t6798D461C5D32B8B58597BD646D74DAF84754698  ___Header_0;
	// OpenCvSharp.Win32Api/RGBQUAD[] OpenCvSharp.Win32Api/BITMAPINFO::Colors
	RGBQUADU5BU5D_t2342606E28EC9EA354F507217F8C24D796B29DE5* ___Colors_1;

public:
	inline static int32_t get_offset_of_Header_0() { return static_cast<int32_t>(offsetof(BITMAPINFO_t8F9957EDE342D483C740B4BC103F4E9C8404F570, ___Header_0)); }
	inline BITMAPINFOHEADER_t6798D461C5D32B8B58597BD646D74DAF84754698  get_Header_0() const { return ___Header_0; }
	inline BITMAPINFOHEADER_t6798D461C5D32B8B58597BD646D74DAF84754698 * get_address_of_Header_0() { return &___Header_0; }
	inline void set_Header_0(BITMAPINFOHEADER_t6798D461C5D32B8B58597BD646D74DAF84754698  value)
	{
		___Header_0 = value;
	}

	inline static int32_t get_offset_of_Colors_1() { return static_cast<int32_t>(offsetof(BITMAPINFO_t8F9957EDE342D483C740B4BC103F4E9C8404F570, ___Colors_1)); }
	inline RGBQUADU5BU5D_t2342606E28EC9EA354F507217F8C24D796B29DE5* get_Colors_1() const { return ___Colors_1; }
	inline RGBQUADU5BU5D_t2342606E28EC9EA354F507217F8C24D796B29DE5** get_address_of_Colors_1() { return &___Colors_1; }
	inline void set_Colors_1(RGBQUADU5BU5D_t2342606E28EC9EA354F507217F8C24D796B29DE5* value)
	{
		___Colors_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Colors_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of OpenCvSharp.Win32Api/BITMAPINFO
struct BITMAPINFO_t8F9957EDE342D483C740B4BC103F4E9C8404F570_marshaled_pinvoke
{
	BITMAPINFOHEADER_t6798D461C5D32B8B58597BD646D74DAF84754698  ___Header_0;
	RGBQUAD_t13428C6F4F848C96705245CB94F0A9A8245C8BFB  ___Colors_1[256];
};
// Native definition for COM marshalling of OpenCvSharp.Win32Api/BITMAPINFO
struct BITMAPINFO_t8F9957EDE342D483C740B4BC103F4E9C8404F570_marshaled_com
{
	BITMAPINFOHEADER_t6798D461C5D32B8B58597BD646D74DAF84754698  ___Header_0;
	RGBQUAD_t13428C6F4F848C96705245CB94F0A9A8245C8BFB  ___Colors_1[256];
};

// OpenCvSharp.Win32Api/ColorTableType
struct ColorTableType_tF517AAC8BF7039658B5F3A698B8F7224B5E9E594 
{
public:
	// System.Int32 OpenCvSharp.Win32Api/ColorTableType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorTableType_tF517AAC8BF7039658B5F3A698B8F7224B5E9E594, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OpenCvSharp.Win32Api/ICONINFO
struct ICONINFO_tEBC9D2BD323ADC2125134B918B5E20B22CE8D61B 
{
public:
	// System.Boolean OpenCvSharp.Win32Api/ICONINFO::IsIcon
	bool ___IsIcon_0;
	// System.Int32 OpenCvSharp.Win32Api/ICONINFO::HotSpotX
	int32_t ___HotSpotX_1;
	// System.Int32 OpenCvSharp.Win32Api/ICONINFO::HotSoptY
	int32_t ___HotSoptY_2;
	// System.IntPtr OpenCvSharp.Win32Api/ICONINFO::MaskHbitmap
	intptr_t ___MaskHbitmap_3;
	// System.IntPtr OpenCvSharp.Win32Api/ICONINFO::ColorHbitmap
	intptr_t ___ColorHbitmap_4;

public:
	inline static int32_t get_offset_of_IsIcon_0() { return static_cast<int32_t>(offsetof(ICONINFO_tEBC9D2BD323ADC2125134B918B5E20B22CE8D61B, ___IsIcon_0)); }
	inline bool get_IsIcon_0() const { return ___IsIcon_0; }
	inline bool* get_address_of_IsIcon_0() { return &___IsIcon_0; }
	inline void set_IsIcon_0(bool value)
	{
		___IsIcon_0 = value;
	}

	inline static int32_t get_offset_of_HotSpotX_1() { return static_cast<int32_t>(offsetof(ICONINFO_tEBC9D2BD323ADC2125134B918B5E20B22CE8D61B, ___HotSpotX_1)); }
	inline int32_t get_HotSpotX_1() const { return ___HotSpotX_1; }
	inline int32_t* get_address_of_HotSpotX_1() { return &___HotSpotX_1; }
	inline void set_HotSpotX_1(int32_t value)
	{
		___HotSpotX_1 = value;
	}

	inline static int32_t get_offset_of_HotSoptY_2() { return static_cast<int32_t>(offsetof(ICONINFO_tEBC9D2BD323ADC2125134B918B5E20B22CE8D61B, ___HotSoptY_2)); }
	inline int32_t get_HotSoptY_2() const { return ___HotSoptY_2; }
	inline int32_t* get_address_of_HotSoptY_2() { return &___HotSoptY_2; }
	inline void set_HotSoptY_2(int32_t value)
	{
		___HotSoptY_2 = value;
	}

	inline static int32_t get_offset_of_MaskHbitmap_3() { return static_cast<int32_t>(offsetof(ICONINFO_tEBC9D2BD323ADC2125134B918B5E20B22CE8D61B, ___MaskHbitmap_3)); }
	inline intptr_t get_MaskHbitmap_3() const { return ___MaskHbitmap_3; }
	inline intptr_t* get_address_of_MaskHbitmap_3() { return &___MaskHbitmap_3; }
	inline void set_MaskHbitmap_3(intptr_t value)
	{
		___MaskHbitmap_3 = value;
	}

	inline static int32_t get_offset_of_ColorHbitmap_4() { return static_cast<int32_t>(offsetof(ICONINFO_tEBC9D2BD323ADC2125134B918B5E20B22CE8D61B, ___ColorHbitmap_4)); }
	inline intptr_t get_ColorHbitmap_4() const { return ___ColorHbitmap_4; }
	inline intptr_t* get_address_of_ColorHbitmap_4() { return &___ColorHbitmap_4; }
	inline void set_ColorHbitmap_4(intptr_t value)
	{
		___ColorHbitmap_4 = value;
	}
};

// Native definition for P/Invoke marshalling of OpenCvSharp.Win32Api/ICONINFO
struct ICONINFO_tEBC9D2BD323ADC2125134B918B5E20B22CE8D61B_marshaled_pinvoke
{
	int32_t ___IsIcon_0;
	int32_t ___HotSpotX_1;
	int32_t ___HotSoptY_2;
	intptr_t ___MaskHbitmap_3;
	intptr_t ___ColorHbitmap_4;
};
// Native definition for COM marshalling of OpenCvSharp.Win32Api/ICONINFO
struct ICONINFO_tEBC9D2BD323ADC2125134B918B5E20B22CE8D61B_marshaled_com
{
	int32_t ___IsIcon_0;
	int32_t ___HotSpotX_1;
	int32_t ___HotSoptY_2;
	intptr_t ___MaskHbitmap_3;
	intptr_t ___ColorHbitmap_4;
};

// OpenCvSharp.Demo.PaperScanner/ScannerSettings/ColorMode
struct ColorMode_t44DCABE648C98AA72E6EFCD7794A1B99D990EAB8 
{
public:
	// System.Int32 OpenCvSharp.Demo.PaperScanner/ScannerSettings/ColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMode_t44DCABE648C98AA72E6EFCD7794A1B99D990EAB8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OpenCvSharp.Demo.PaperScanner/ScannerSettings/DecolorizationMode
struct DecolorizationMode_tFCD859E65BF0D64744DA14CE817EC17192360D11 
{
public:
	// System.Int32 OpenCvSharp.Demo.PaperScanner/ScannerSettings/DecolorizationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DecolorizationMode_tFCD859E65BF0D64744DA14CE817EC17192360D11, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OpenCvSharp.Demo.PaperScanner/ScannerSettings/ScanType
struct ScanType_t6A02DF199732C8697995C48B22A2D9BCC9E26B20 
{
public:
	// System.Int32 OpenCvSharp.Demo.PaperScanner/ScannerSettings/ScanType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScanType_t6A02DF199732C8697995C48B22A2D9BCC9E26B20, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407  : public Exception_t
{
public:

public:
};


// OpenCvSharp.DisposableCvObject
struct DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775  : public DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115
{
public:
	// System.IntPtr OpenCvSharp.DisposableCvObject::ptr
	intptr_t ___ptr_5;
	// System.Boolean OpenCvSharp.DisposableCvObject::disposed
	bool ___disposed_6;

public:
	inline static int32_t get_offset_of_ptr_5() { return static_cast<int32_t>(offsetof(DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775, ___ptr_5)); }
	inline intptr_t get_ptr_5() const { return ___ptr_5; }
	inline intptr_t* get_address_of_ptr_5() { return &___ptr_5; }
	inline void set_ptr_5(intptr_t value)
	{
		___ptr_5 = value;
	}

	inline static int32_t get_offset_of_disposed_6() { return static_cast<int32_t>(offsetof(DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775, ___disposed_6)); }
	inline bool get_disposed_6() const { return ___disposed_6; }
	inline bool* get_address_of_disposed_6() { return &___disposed_6; }
	inline void set_disposed_6(bool value)
	{
		___disposed_6 = value;
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


// OpenCvSharp.Demo.PaperScanner/ScannerSettings
struct ScannerSettings_tBDC7F9F16AAC8FC6C20888406790AC52CBBDECCD  : public RuntimeObject
{
public:
	// OpenCvSharp.Demo.PaperScanner/ScannerSettings/ColorMode OpenCvSharp.Demo.PaperScanner/ScannerSettings::colorMode_
	int32_t ___colorMode__0;
	// System.Double OpenCvSharp.Demo.PaperScanner/ScannerSettings::expectedArea_
	double ___expectedArea__1;
	// System.Int32 OpenCvSharp.Demo.PaperScanner/ScannerSettings::scale_
	int32_t ___scale__2;
	// OpenCvSharp.Demo.PaperScanner/ScannerSettings/DecolorizationMode OpenCvSharp.Demo.PaperScanner/ScannerSettings::decolorization_
	int32_t ___decolorization__3;
	// OpenCvSharp.Demo.PaperScanner/ScannerSettings/ScanType OpenCvSharp.Demo.PaperScanner/ScannerSettings::colorThreshold_
	int32_t ___colorThreshold__4;
	// System.Double OpenCvSharp.Demo.PaperScanner/ScannerSettings::noiseReduction_
	double ___noiseReduction__5;
	// System.Double OpenCvSharp.Demo.PaperScanner/ScannerSettings::edgesTight_
	double ___edgesTight__6;
	// System.Boolean OpenCvSharp.Demo.PaperScanner/ScannerSettings::dropBadGuess_
	bool ___dropBadGuess__7;
	// OpenCvSharp.Demo.PaperScanner/ScannerSettings/NotifyDirty OpenCvSharp.Demo.PaperScanner/ScannerSettings::notifyDirty_
	NotifyDirty_t4E970B1EC52EBC768E4D83050E6F548B1D97FB69 * ___notifyDirty__8;

public:
	inline static int32_t get_offset_of_colorMode__0() { return static_cast<int32_t>(offsetof(ScannerSettings_tBDC7F9F16AAC8FC6C20888406790AC52CBBDECCD, ___colorMode__0)); }
	inline int32_t get_colorMode__0() const { return ___colorMode__0; }
	inline int32_t* get_address_of_colorMode__0() { return &___colorMode__0; }
	inline void set_colorMode__0(int32_t value)
	{
		___colorMode__0 = value;
	}

	inline static int32_t get_offset_of_expectedArea__1() { return static_cast<int32_t>(offsetof(ScannerSettings_tBDC7F9F16AAC8FC6C20888406790AC52CBBDECCD, ___expectedArea__1)); }
	inline double get_expectedArea__1() const { return ___expectedArea__1; }
	inline double* get_address_of_expectedArea__1() { return &___expectedArea__1; }
	inline void set_expectedArea__1(double value)
	{
		___expectedArea__1 = value;
	}

	inline static int32_t get_offset_of_scale__2() { return static_cast<int32_t>(offsetof(ScannerSettings_tBDC7F9F16AAC8FC6C20888406790AC52CBBDECCD, ___scale__2)); }
	inline int32_t get_scale__2() const { return ___scale__2; }
	inline int32_t* get_address_of_scale__2() { return &___scale__2; }
	inline void set_scale__2(int32_t value)
	{
		___scale__2 = value;
	}

	inline static int32_t get_offset_of_decolorization__3() { return static_cast<int32_t>(offsetof(ScannerSettings_tBDC7F9F16AAC8FC6C20888406790AC52CBBDECCD, ___decolorization__3)); }
	inline int32_t get_decolorization__3() const { return ___decolorization__3; }
	inline int32_t* get_address_of_decolorization__3() { return &___decolorization__3; }
	inline void set_decolorization__3(int32_t value)
	{
		___decolorization__3 = value;
	}

	inline static int32_t get_offset_of_colorThreshold__4() { return static_cast<int32_t>(offsetof(ScannerSettings_tBDC7F9F16AAC8FC6C20888406790AC52CBBDECCD, ___colorThreshold__4)); }
	inline int32_t get_colorThreshold__4() const { return ___colorThreshold__4; }
	inline int32_t* get_address_of_colorThreshold__4() { return &___colorThreshold__4; }
	inline void set_colorThreshold__4(int32_t value)
	{
		___colorThreshold__4 = value;
	}

	inline static int32_t get_offset_of_noiseReduction__5() { return static_cast<int32_t>(offsetof(ScannerSettings_tBDC7F9F16AAC8FC6C20888406790AC52CBBDECCD, ___noiseReduction__5)); }
	inline double get_noiseReduction__5() const { return ___noiseReduction__5; }
	inline double* get_address_of_noiseReduction__5() { return &___noiseReduction__5; }
	inline void set_noiseReduction__5(double value)
	{
		___noiseReduction__5 = value;
	}

	inline static int32_t get_offset_of_edgesTight__6() { return static_cast<int32_t>(offsetof(ScannerSettings_tBDC7F9F16AAC8FC6C20888406790AC52CBBDECCD, ___edgesTight__6)); }
	inline double get_edgesTight__6() const { return ___edgesTight__6; }
	inline double* get_address_of_edgesTight__6() { return &___edgesTight__6; }
	inline void set_edgesTight__6(double value)
	{
		___edgesTight__6 = value;
	}

	inline static int32_t get_offset_of_dropBadGuess__7() { return static_cast<int32_t>(offsetof(ScannerSettings_tBDC7F9F16AAC8FC6C20888406790AC52CBBDECCD, ___dropBadGuess__7)); }
	inline bool get_dropBadGuess__7() const { return ___dropBadGuess__7; }
	inline bool* get_address_of_dropBadGuess__7() { return &___dropBadGuess__7; }
	inline void set_dropBadGuess__7(bool value)
	{
		___dropBadGuess__7 = value;
	}

	inline static int32_t get_offset_of_notifyDirty__8() { return static_cast<int32_t>(offsetof(ScannerSettings_tBDC7F9F16AAC8FC6C20888406790AC52CBBDECCD, ___notifyDirty__8)); }
	inline NotifyDirty_t4E970B1EC52EBC768E4D83050E6F548B1D97FB69 * get_notifyDirty__8() const { return ___notifyDirty__8; }
	inline NotifyDirty_t4E970B1EC52EBC768E4D83050E6F548B1D97FB69 ** get_address_of_notifyDirty__8() { return &___notifyDirty__8; }
	inline void set_notifyDirty__8(NotifyDirty_t4E970B1EC52EBC768E4D83050E6F548B1D97FB69 * value)
	{
		___notifyDirty__8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___notifyDirty__8), (void*)value);
	}
};


// OpenCvSharp.Ptr`1<OpenCvSharp.Tracking.Tracker>
struct Ptr_1_t3D3103972872013C7C70F55C58CCD09E7B71E829  : public DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775
{
public:
	// System.Boolean OpenCvSharp.Ptr`1::disposed
	bool ___disposed_7;
	// OpenCvSharp.PtrNativeFunctions/ReleaseFunc OpenCvSharp.Ptr`1::releaseFunc
	ReleaseFunc_t0E13E77E98708665F36C3F0DFC508F27EFDBF824 * ___releaseFunc_8;
	// OpenCvSharp.PtrNativeFunctions/ObjFunc OpenCvSharp.Ptr`1::getFunc
	ObjFunc_t0CF3FD007A2692EA2706B3CB1F4368231821CECD * ___getFunc_9;

public:
	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(Ptr_1_t3D3103972872013C7C70F55C58CCD09E7B71E829, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}

	inline static int32_t get_offset_of_releaseFunc_8() { return static_cast<int32_t>(offsetof(Ptr_1_t3D3103972872013C7C70F55C58CCD09E7B71E829, ___releaseFunc_8)); }
	inline ReleaseFunc_t0E13E77E98708665F36C3F0DFC508F27EFDBF824 * get_releaseFunc_8() const { return ___releaseFunc_8; }
	inline ReleaseFunc_t0E13E77E98708665F36C3F0DFC508F27EFDBF824 ** get_address_of_releaseFunc_8() { return &___releaseFunc_8; }
	inline void set_releaseFunc_8(ReleaseFunc_t0E13E77E98708665F36C3F0DFC508F27EFDBF824 * value)
	{
		___releaseFunc_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___releaseFunc_8), (void*)value);
	}

	inline static int32_t get_offset_of_getFunc_9() { return static_cast<int32_t>(offsetof(Ptr_1_t3D3103972872013C7C70F55C58CCD09E7B71E829, ___getFunc_9)); }
	inline ObjFunc_t0CF3FD007A2692EA2706B3CB1F4368231821CECD * get_getFunc_9() const { return ___getFunc_9; }
	inline ObjFunc_t0CF3FD007A2692EA2706B3CB1F4368231821CECD ** get_address_of_getFunc_9() { return &___getFunc_9; }
	inline void set_getFunc_9(ObjFunc_t0CF3FD007A2692EA2706B3CB1F4368231821CECD * value)
	{
		___getFunc_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getFunc_9), (void*)value);
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


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// OpenCvSharp.InputArray
struct InputArray_t878A9EA878AAC15464A7DEFD30CBB6AA08311C25  : public DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775
{
public:
	// System.Boolean OpenCvSharp.InputArray::disposed
	bool ___disposed_7;
	// System.Object OpenCvSharp.InputArray::obj
	RuntimeObject * ___obj_8;

public:
	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(InputArray_t878A9EA878AAC15464A7DEFD30CBB6AA08311C25, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}

	inline static int32_t get_offset_of_obj_8() { return static_cast<int32_t>(offsetof(InputArray_t878A9EA878AAC15464A7DEFD30CBB6AA08311C25, ___obj_8)); }
	inline RuntimeObject * get_obj_8() const { return ___obj_8; }
	inline RuntimeObject ** get_address_of_obj_8() { return &___obj_8; }
	inline void set_obj_8(RuntimeObject * value)
	{
		___obj_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___obj_8), (void*)value);
	}
};


// OpenCvSharp.Mat
struct Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D  : public DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775
{
public:
	// System.Boolean OpenCvSharp.Mat::disposed
	bool ___disposed_7;
	// OpenCvSharp.Mat/MatExprIndexer OpenCvSharp.Mat::matExprIndexer
	MatExprIndexer_t974E175CB4E3337A66B0BA3E7A0BDFBB2428840E * ___matExprIndexer_9;
	// OpenCvSharp.Mat/ColExprIndexer OpenCvSharp.Mat::colExprIndexer
	ColExprIndexer_t7BE98B3E69BC45B27EF78858459AA2A47A7F632F * ___colExprIndexer_10;
	// OpenCvSharp.Mat/RowExprIndexer OpenCvSharp.Mat::rowExprIndexer
	RowExprIndexer_t9F0095829DDB9D709C2B312482BBA5B7B2DA2C6F * ___rowExprIndexer_11;
	// OpenCvSharp.Mat/ColIndexer OpenCvSharp.Mat::colIndexer
	ColIndexer_t31825B233FA28DD352A86C1AEF2302E34B7ADD3F * ___colIndexer_12;
	// OpenCvSharp.Mat/RowIndexer OpenCvSharp.Mat::rowIndexer
	RowIndexer_tAC3682A4FD16D8EAD29F8B0C5C1589C3CEE58456 * ___rowIndexer_13;

public:
	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}

	inline static int32_t get_offset_of_matExprIndexer_9() { return static_cast<int32_t>(offsetof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D, ___matExprIndexer_9)); }
	inline MatExprIndexer_t974E175CB4E3337A66B0BA3E7A0BDFBB2428840E * get_matExprIndexer_9() const { return ___matExprIndexer_9; }
	inline MatExprIndexer_t974E175CB4E3337A66B0BA3E7A0BDFBB2428840E ** get_address_of_matExprIndexer_9() { return &___matExprIndexer_9; }
	inline void set_matExprIndexer_9(MatExprIndexer_t974E175CB4E3337A66B0BA3E7A0BDFBB2428840E * value)
	{
		___matExprIndexer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___matExprIndexer_9), (void*)value);
	}

	inline static int32_t get_offset_of_colExprIndexer_10() { return static_cast<int32_t>(offsetof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D, ___colExprIndexer_10)); }
	inline ColExprIndexer_t7BE98B3E69BC45B27EF78858459AA2A47A7F632F * get_colExprIndexer_10() const { return ___colExprIndexer_10; }
	inline ColExprIndexer_t7BE98B3E69BC45B27EF78858459AA2A47A7F632F ** get_address_of_colExprIndexer_10() { return &___colExprIndexer_10; }
	inline void set_colExprIndexer_10(ColExprIndexer_t7BE98B3E69BC45B27EF78858459AA2A47A7F632F * value)
	{
		___colExprIndexer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colExprIndexer_10), (void*)value);
	}

	inline static int32_t get_offset_of_rowExprIndexer_11() { return static_cast<int32_t>(offsetof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D, ___rowExprIndexer_11)); }
	inline RowExprIndexer_t9F0095829DDB9D709C2B312482BBA5B7B2DA2C6F * get_rowExprIndexer_11() const { return ___rowExprIndexer_11; }
	inline RowExprIndexer_t9F0095829DDB9D709C2B312482BBA5B7B2DA2C6F ** get_address_of_rowExprIndexer_11() { return &___rowExprIndexer_11; }
	inline void set_rowExprIndexer_11(RowExprIndexer_t9F0095829DDB9D709C2B312482BBA5B7B2DA2C6F * value)
	{
		___rowExprIndexer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rowExprIndexer_11), (void*)value);
	}

	inline static int32_t get_offset_of_colIndexer_12() { return static_cast<int32_t>(offsetof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D, ___colIndexer_12)); }
	inline ColIndexer_t31825B233FA28DD352A86C1AEF2302E34B7ADD3F * get_colIndexer_12() const { return ___colIndexer_12; }
	inline ColIndexer_t31825B233FA28DD352A86C1AEF2302E34B7ADD3F ** get_address_of_colIndexer_12() { return &___colIndexer_12; }
	inline void set_colIndexer_12(ColIndexer_t31825B233FA28DD352A86C1AEF2302E34B7ADD3F * value)
	{
		___colIndexer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colIndexer_12), (void*)value);
	}

	inline static int32_t get_offset_of_rowIndexer_13() { return static_cast<int32_t>(offsetof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D, ___rowIndexer_13)); }
	inline RowIndexer_tAC3682A4FD16D8EAD29F8B0C5C1589C3CEE58456 * get_rowIndexer_13() const { return ___rowIndexer_13; }
	inline RowIndexer_tAC3682A4FD16D8EAD29F8B0C5C1589C3CEE58456 ** get_address_of_rowIndexer_13() { return &___rowIndexer_13; }
	inline void set_rowIndexer_13(RowIndexer_tAC3682A4FD16D8EAD29F8B0C5C1589C3CEE58456 * value)
	{
		___rowIndexer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rowIndexer_13), (void*)value);
	}
};

struct Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D_StaticFields
{
public:
	// System.Int32 OpenCvSharp.Mat::SizeOf
	int32_t ___SizeOf_8;

public:
	inline static int32_t get_offset_of_SizeOf_8() { return static_cast<int32_t>(offsetof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D_StaticFields, ___SizeOf_8)); }
	inline int32_t get_SizeOf_8() const { return ___SizeOf_8; }
	inline int32_t* get_address_of_SizeOf_8() { return &___SizeOf_8; }
	inline void set_SizeOf_8(int32_t value)
	{
		___SizeOf_8 = value;
	}
};


// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// OpenCvSharp.OpenCVException
struct OpenCVException_tB5296EF5299605BB326C6A6C56D9BE5CEE2D3561  : public ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407
{
public:
	// OpenCvSharp.ErrorCode OpenCvSharp.OpenCVException::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_17;
	// System.String OpenCvSharp.OpenCVException::<FuncName>k__BackingField
	String_t* ___U3CFuncNameU3Ek__BackingField_18;
	// System.String OpenCvSharp.OpenCVException::<ErrMsg>k__BackingField
	String_t* ___U3CErrMsgU3Ek__BackingField_19;
	// System.String OpenCvSharp.OpenCVException::<FileName>k__BackingField
	String_t* ___U3CFileNameU3Ek__BackingField_20;
	// System.Int32 OpenCvSharp.OpenCVException::<Line>k__BackingField
	int32_t ___U3CLineU3Ek__BackingField_21;

public:
	inline static int32_t get_offset_of_U3CStatusU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(OpenCVException_tB5296EF5299605BB326C6A6C56D9BE5CEE2D3561, ___U3CStatusU3Ek__BackingField_17)); }
	inline int32_t get_U3CStatusU3Ek__BackingField_17() const { return ___U3CStatusU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CStatusU3Ek__BackingField_17() { return &___U3CStatusU3Ek__BackingField_17; }
	inline void set_U3CStatusU3Ek__BackingField_17(int32_t value)
	{
		___U3CStatusU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CFuncNameU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(OpenCVException_tB5296EF5299605BB326C6A6C56D9BE5CEE2D3561, ___U3CFuncNameU3Ek__BackingField_18)); }
	inline String_t* get_U3CFuncNameU3Ek__BackingField_18() const { return ___U3CFuncNameU3Ek__BackingField_18; }
	inline String_t** get_address_of_U3CFuncNameU3Ek__BackingField_18() { return &___U3CFuncNameU3Ek__BackingField_18; }
	inline void set_U3CFuncNameU3Ek__BackingField_18(String_t* value)
	{
		___U3CFuncNameU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFuncNameU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CErrMsgU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(OpenCVException_tB5296EF5299605BB326C6A6C56D9BE5CEE2D3561, ___U3CErrMsgU3Ek__BackingField_19)); }
	inline String_t* get_U3CErrMsgU3Ek__BackingField_19() const { return ___U3CErrMsgU3Ek__BackingField_19; }
	inline String_t** get_address_of_U3CErrMsgU3Ek__BackingField_19() { return &___U3CErrMsgU3Ek__BackingField_19; }
	inline void set_U3CErrMsgU3Ek__BackingField_19(String_t* value)
	{
		___U3CErrMsgU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrMsgU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFileNameU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(OpenCVException_tB5296EF5299605BB326C6A6C56D9BE5CEE2D3561, ___U3CFileNameU3Ek__BackingField_20)); }
	inline String_t* get_U3CFileNameU3Ek__BackingField_20() const { return ___U3CFileNameU3Ek__BackingField_20; }
	inline String_t** get_address_of_U3CFileNameU3Ek__BackingField_20() { return &___U3CFileNameU3Ek__BackingField_20; }
	inline void set_U3CFileNameU3Ek__BackingField_20(String_t* value)
	{
		___U3CFileNameU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFileNameU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLineU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(OpenCVException_tB5296EF5299605BB326C6A6C56D9BE5CEE2D3561, ___U3CLineU3Ek__BackingField_21)); }
	inline int32_t get_U3CLineU3Ek__BackingField_21() const { return ___U3CLineU3Ek__BackingField_21; }
	inline int32_t* get_address_of_U3CLineU3Ek__BackingField_21() { return &___U3CLineU3Ek__BackingField_21; }
	inline void set_U3CLineU3Ek__BackingField_21(int32_t value)
	{
		___U3CLineU3Ek__BackingField_21 = value;
	}
};


// OpenCvSharp.VectorOfDouble
struct VectorOfDouble_tAB9D857E0A58C713494B449A70FC4D140F780041  : public DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775
{
public:
	// System.Boolean OpenCvSharp.VectorOfDouble::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(VectorOfDouble_tAB9D857E0A58C713494B449A70FC4D140F780041, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
};


// OpenCvSharp.VectorOfInt32
struct VectorOfInt32_t823792B51EF6D88E4C4BCB5AC6A4D38918CCC863  : public DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775
{
public:
	// System.Boolean OpenCvSharp.VectorOfInt32::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(VectorOfInt32_t823792B51EF6D88E4C4BCB5AC6A4D38918CCC863, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
};


// OpenCvSharp.OCRBeamSearchDecoder/ClassifierCallback
struct ClassifierCallback_tFE5D7215E8044398FFDC9ACE08F4CB2DA4840EEF  : public DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775
{
public:

public:
};


// OpenCvSharp.OCRHMMDecoder/ClassifierCallback
struct ClassifierCallback_t5DE4B98B7E526F050279D9E6F10139D1CDDB2398  : public DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775
{
public:

public:
};


// OpenCvSharp.PtrNativeFunctions/ObjFunc
struct ObjFunc_t0CF3FD007A2692EA2706B3CB1F4368231821CECD  : public MulticastDelegate_t
{
public:

public:
};


// OpenCvSharp.PtrNativeFunctions/ReleaseFunc
struct ReleaseFunc_t0E13E77E98708665F36C3F0DFC508F27EFDBF824  : public MulticastDelegate_t
{
public:

public:
};


// OpenCvSharp.Demo.PaperScanner/ScannerSettings/NotifyDirty
struct NotifyDirty_t4E970B1EC52EBC768E4D83050E6F548B1D97FB69  : public MulticastDelegate_t
{
public:

public:
};


// OpenCvSharp.Mat`2<System.UInt16,OpenCvSharp.MatOfUShort>
struct Mat_2_tAA8BE7A642C61DC4CA959CFC74FA415632034F15  : public Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D
{
public:
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___sourceMat_15;

public:
	inline static int32_t get_offset_of_disposed_14() { return static_cast<int32_t>(offsetof(Mat_2_tAA8BE7A642C61DC4CA959CFC74FA415632034F15, ___disposed_14)); }
	inline bool get_disposed_14() const { return ___disposed_14; }
	inline bool* get_address_of_disposed_14() { return &___disposed_14; }
	inline void set_disposed_14(bool value)
	{
		___disposed_14 = value;
	}

	inline static int32_t get_offset_of_sourceMat_15() { return static_cast<int32_t>(offsetof(Mat_2_tAA8BE7A642C61DC4CA959CFC74FA415632034F15, ___sourceMat_15)); }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * get_sourceMat_15() const { return ___sourceMat_15; }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D ** get_address_of_sourceMat_15() { return &___sourceMat_15; }
	inline void set_sourceMat_15(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * value)
	{
		___sourceMat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMat_15), (void*)value);
	}
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// OpenCvSharp.Tracking.Tracker/Ptr
struct Ptr_tBE8E25CEC2D965C7CD1464E833D251666EB9070D  : public Ptr_1_t3D3103972872013C7C70F55C58CCD09E7B71E829
{
public:

public:
};


// OpenCvSharp.MatOfUShort
struct MatOfUShort_t21F85688DF91E44422B3C189B9F5BABD4DD54FFD  : public Mat_2_tAA8BE7A642C61DC4CA959CFC74FA415632034F15
{
public:

public:
};

struct MatOfUShort_t21F85688DF91E44422B3C189B9F5BABD4DD54FFD_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatOfUShort::ThisType
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___ThisType_16;

public:
	inline static int32_t get_offset_of_ThisType_16() { return static_cast<int32_t>(offsetof(MatOfUShort_t21F85688DF91E44422B3C189B9F5BABD4DD54FFD_StaticFields, ___ThisType_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_ThisType_16() const { return ___ThisType_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_ThisType_16() { return &___ThisType_16; }
	inline void set_ThisType_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___ThisType_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  m_Items[1];

public:
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		m_Items[index] = value;
	}
};
// OpenCvSharp.Win32Api/RGBQUAD[]
struct RGBQUADU5BU5D_t2342606E28EC9EA354F507217F8C24D796B29DE5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RGBQUAD_t13428C6F4F848C96705245CB94F0A9A8245C8BFB  m_Items[1];

public:
	inline RGBQUAD_t13428C6F4F848C96705245CB94F0A9A8245C8BFB  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RGBQUAD_t13428C6F4F848C96705245CB94F0A9A8245C8BFB * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RGBQUAD_t13428C6F4F848C96705245CB94F0A9A8245C8BFB  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RGBQUAD_t13428C6F4F848C96705245CB94F0A9A8245C8BFB  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RGBQUAD_t13428C6F4F848C96705245CB94F0A9A8245C8BFB * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RGBQUAD_t13428C6F4F848C96705245CB94F0A9A8245C8BFB  value)
	{
		m_Items[index] = value;
	}
};
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
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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


// System.Void OpenCvSharp.MatIndexer`1<System.UInt16>::.ctor(OpenCvSharp.Mat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatIndexer_1__ctor_m3F983A4EFAA8F40DBE30DD3F74CB2C135D49AC65_gshared (MatIndexer_1_tF90B229CEB187AD8DDD19111449C4036F4649A0E * __this, Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___parent0, const RuntimeMethod* method);
// System.Void OpenCvSharp.Ptr`1<System.Object>::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ptr_1__ctor_m952B36CBAAC221ECB9A731E2868151014CD9CFC4_gshared (Ptr_1_t6CC78209383629CC7ABB9FFAFE725D724604AE97 * __this, intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void OpenCvSharp.DisposableObject::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposableObject_ThrowIfDisposed_m3E51C2E26BD9AE6C9B33E936D468160B900A2AE6 (DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115 * __this, const RuntimeMethod* method);
// System.Void OpenCvSharp.MatOfUShort/Indexer::.ctor(OpenCvSharp.Mat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Indexer__ctor_m25238F03D83C95C99DB75F6FDBE3AEC8CD9B7478 (Indexer_tB7B156EE395CCC5B4D38DF0396133C527912BEED * __this, Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___parent0, const RuntimeMethod* method);
// System.Int32 OpenCvSharp.Mat::Dims()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mat_Dims_mC06520D09BA304350575375869573F3D16F0FA18 (Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * __this, const RuntimeMethod* method);
// System.Int32 OpenCvSharp.Mat::get_Rows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mat_get_Rows_m3C503F4701F267780F2F4478F74722F4060627BC (Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * __this, const RuntimeMethod* method);
// System.Int32 OpenCvSharp.Mat::get_Cols()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mat_get_Cols_mFABA739099F41BF6B3C2BE50CF967AA4765E8D64 (Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * __this, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void OpenCvSharp.MatIndexer`1<System.UInt16>::.ctor(OpenCvSharp.Mat)
inline void MatIndexer_1__ctor_m3F983A4EFAA8F40DBE30DD3F74CB2C135D49AC65 (MatIndexer_1_tF90B229CEB187AD8DDD19111449C4036F4649A0E * __this, Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___parent0, const RuntimeMethod* method)
{
	((  void (*) (MatIndexer_1_tF90B229CEB187AD8DDD19111449C4036F4649A0E *, Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D *, const RuntimeMethod*))MatIndexer_1__ctor_m3F983A4EFAA8F40DBE30DD3F74CB2C135D49AC65_gshared)(__this, ___parent0, method);
}
// System.IntPtr OpenCvSharp.Mat::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Mat_get_Data_mC56D74DEF28C5D9181ED682D80C342D3DC0CE458 (Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * __this, const RuntimeMethod* method);
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline (intptr_t* __this, const RuntimeMethod* method);
// System.Void OpenCvSharp.NativeMethods/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m755A9D0F92C06FFB73903E1F19506C60776ED49D (U3CU3Ec_t18FAC9EB403BFD140B96C187D88F0DA2127479ED * __this, const RuntimeMethod* method);
// System.Void OpenCvSharp.OpenCVException::.ctor(OpenCvSharp.ErrorCode,System.String,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVException__ctor_m4BDB1C6123912DC2F8A0909153B008C3EB924DA6 (OpenCVException_tB5296EF5299605BB326C6A6C56D9BE5CEE2D3561 * __this, int32_t ___status0, String_t* ___funcName1, String_t* ___errMsg2, String_t* ___fileName3, int32_t ___line4, const RuntimeMethod* method);
// System.Void OpenCvSharp.DisposableCvObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposableCvObject__ctor_m398D0DFAD35A3FC1DD4FC7F837A058984075783F (DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775 * __this, const RuntimeMethod* method);
// System.IntPtr OpenCvSharp.NativeMethods::text_loadOCRBeamSearchClassifierCNN(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_text_loadOCRBeamSearchClassifierCNN_m8A446D6C0C2D3EF311E19F78AD922F55BDA5D486 (String_t* ___fileName0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void OpenCvSharp.NativeMethods::text_OCRBeamSearchDecoder_ClassifierCallback_delete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_text_OCRBeamSearchDecoder_ClassifierCallback_delete_m4BACE6C6CECD7A0ABD3D23E24707EBD01B415048 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void OpenCvSharp.VectorOfInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorOfInt32__ctor_m532DD1C9C951583E1F6D64BA39AD1B60D0DACF0F (VectorOfInt32_t823792B51EF6D88E4C4BCB5AC6A4D38918CCC863 * __this, const RuntimeMethod* method);
// System.Void OpenCvSharp.VectorOfDouble::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorOfDouble__ctor_m69C4885F17117319F16083CC7A1068FDECEA2132 (VectorOfDouble_tAB9D857E0A58C713494B449A70FC4D140F780041 * __this, const RuntimeMethod* method);
// System.IntPtr OpenCvSharp.DisposableCvObject::get_CvPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DisposableCvObject_get_CvPtr_m15644348DE26CEA8517A4EF27B945F27F679A0F6 (DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775 * __this, const RuntimeMethod* method);
// System.Void OpenCvSharp.NativeMethods::text_OCRHMMDecoder_ClassifierCallback_eval(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_text_OCRHMMDecoder_ClassifierCallback_eval_m9C0FB7368239DE2DC117A32F9AF4F958E10DC7D9 (intptr_t ___obj0, intptr_t ___image1, intptr_t ___vecIntClass2, intptr_t ___vecDoubleConfidence3, const RuntimeMethod* method);
// System.Int32[] OpenCvSharp.VectorOfInt32::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* VectorOfInt32_ToArray_m9A200FF1B54A8EE5DCA1A3E78E07FC9EC26684D9 (VectorOfInt32_t823792B51EF6D88E4C4BCB5AC6A4D38918CCC863 * __this, const RuntimeMethod* method);
// System.Double[] OpenCvSharp.VectorOfDouble::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* VectorOfDouble_ToArray_m775E841DD8427905041B0E99ACC559D33F4D3388 (VectorOfDouble_tAB9D857E0A58C713494B449A70FC4D140F780041 * __this, const RuntimeMethod* method);
// System.Void System.GC::KeepAlive(System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void GC_KeepAlive_m16C41A64E08E35865A249CB5479A37BACBEDC75C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.IntPtr OpenCvSharp.NativeMethods::text_loadOCRHMMClassifierCNN(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_text_loadOCRHMMClassifierCNN_m238A2E0D7502915C310531C04897772C1795B05B (String_t* ___filename0, const RuntimeMethod* method);
// System.IntPtr OpenCvSharp.NativeMethods::text_loadOCRHMMClassifierNM(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_text_loadOCRHMMClassifierNM_m0193A4C59862771E5218CF60A1E899A50DAAF712 (String_t* ___filename0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void OpenCvSharp.NativeMethods::text_OCRHMMDecoder_ClassifierCallback_delete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_text_OCRHMMDecoder_ClassifierCallback_delete_mF010A4F11702CF56ACA44A5F6BB59D563530DBC0 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void OpenCvSharp.Demo.PaperScanner/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD4ABDC9364FEDB660E74BD319ED5F85C64687C2C (U3CU3Ec_tFAA7FB765027DE17B8385EADF9A671F5C5BDDBD3 * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::CompareTo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_m2DD1093B956B4D96C3AC3C27FDEE3CA447B044D3 (int32_t* __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void OpenCvSharp.Point::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_m750243710BE03EDA793F7DDDD31311302A86DD09 (Point_t01E6005639EC24B31B70D05F7FF25DC232A23396 * __this, double ___x0, double ___y1, const RuntimeMethod* method);
// System.Double OpenCvSharp.Point::Distance(OpenCvSharp.Point,OpenCvSharp.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_Distance_mB38930A38421EF36A8517D37632874723C21A731 (Point_t01E6005639EC24B31B70D05F7FF25DC232A23396  ___p10, Point_t01E6005639EC24B31B70D05F7FF25DC232A23396  ___p21, const RuntimeMethod* method);
// System.Void OpenCvSharp.Point2f::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point2f__ctor_mC2331E35273371223C00CD62B531C0FCD46A2CF0 (Point2f_tB9B558F67A690FD8B415469F1C8840EC3E163D5E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void OpenCvSharp.Demo.PaperScanner/ScannerSettings/NotifyDirty::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyDirty_Invoke_m5E6ECAB43A3303A4BC7488690E98414191C3312B (NotifyDirty_t4E970B1EC52EBC768E4D83050E6F548B1D97FB69 * __this, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83 (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, const RuntimeMethod* method);
// System.Void OpenCvSharp.Ptr`1<OpenCvSharp.Tracking.Tracker>::.ctor(System.IntPtr)
inline void Ptr_1__ctor_mB342A6248A482E017D8F994222D05BA27EB5F586 (Ptr_1_t3D3103972872013C7C70F55C58CCD09E7B71E829 * __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	((  void (*) (Ptr_1_t3D3103972872013C7C70F55C58CCD09E7B71E829 *, intptr_t, const RuntimeMethod*))Ptr_1__ctor_m952B36CBAAC221ECB9A731E2868151014CD9CFC4_gshared)(__this, ___ptr0, method);
}
// System.IntPtr OpenCvSharp.NativeMethods::tracking_Ptr_Tracker_get(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_tracking_Ptr_Tracker_get_m8E111EF7239B6FDAB5694F201515E8C4A936DDEE (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void OpenCvSharp.NativeMethods::tracking_Ptr_Tracker_delete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_tracking_Ptr_Tracker_delete_m8115632B38DC26BF31B4C280E487F417138B4BAD (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void OpenCvSharp.Unity/TextureConversionParams::set_FlipVertically(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TextureConversionParams_set_FlipVertically_m95E199EBD5751D49ECCC0DD6FEAC0B92B82F5FD8_inline (TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void OpenCvSharp.Unity/TextureConversionParams::set_FlipHorizontally(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TextureConversionParams_set_FlipHorizontally_mC060D84F4046C8E619DBB488E13541437533C50A_inline (TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void OpenCvSharp.Unity/TextureConversionParams::set_RotationAngle(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TextureConversionParams_set_RotationAngle_mD7F0EFFA986F5D5675F14242F60BCF911791F4F4_inline (TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void OpenCvSharp.Unity/TextureConversionParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureConversionParams__ctor_m842FE4AA094D9DD25CD2A432181122959CD250E9 (TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void OpenCvSharp.Util.WindowsLibraryLoader/ProcessArchitectureInfo::set_Warnings(System.Collections.Generic.List`1<System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessArchitectureInfo_set_Warnings_mCF3E5FB66C57E1B986F402D6AF7A8E818DAA628B_inline (ProcessArchitectureInfo_t24E91B008BFA261064862083259BBDC43F974071 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.String> OpenCvSharp.Util.WindowsLibraryLoader/ProcessArchitectureInfo::get_Warnings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ProcessArchitectureInfo_get_Warnings_m033DDE34D54764FA18DC32FF3412971937875297_inline (ProcessArchitectureInfo_t24E91B008BFA261064862083259BBDC43F974071 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8846EB11F0A221BDE237DE041D17764B36065404 (String_t* ___separator0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OpenCvSharp.MatOfUShort/<GetEnumerator>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__28__ctor_m380782CDCE12566DFA606359A41F99FB84FC1B2D (U3CGetEnumeratorU3Ed__28_tAE471AE15C94E7B1438A1605B38861DA7E49F1A1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void OpenCvSharp.MatOfUShort/<GetEnumerator>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__28_System_IDisposable_Dispose_m0F0FB192860525A5AF990B5BFAA84F5C378A2AD5 (U3CGetEnumeratorU3Ed__28_tAE471AE15C94E7B1438A1605B38861DA7E49F1A1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean OpenCvSharp.MatOfUShort/<GetEnumerator>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__28_MoveNext_m35FF78C07363DC75D509BBDD9831533A53BB611B (U3CGetEnumeratorU3Ed__28_tAE471AE15C94E7B1438A1605B38861DA7E49F1A1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Indexer_tB7B156EE395CCC5B4D38DF0396133C527912BEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MatOfUShort_t21F85688DF91E44422B3C189B9F5BABD4DD54FFD * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MatOfUShort_t21F85688DF91E44422B3C189B9F5BABD4DD54FFD * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_008c;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// ThrowIfDisposed();
		MatOfUShort_t21F85688DF91E44422B3C189B9F5BABD4DD54FFD * L_4 = V_1;
		NullCheck(L_4);
		DisposableObject_ThrowIfDisposed_m3E51C2E26BD9AE6C9B33E936D468160B900A2AE6(L_4, /*hidden argument*/NULL);
		// Indexer indexer = new Indexer(this);
		MatOfUShort_t21F85688DF91E44422B3C189B9F5BABD4DD54FFD * L_5 = V_1;
		Indexer_tB7B156EE395CCC5B4D38DF0396133C527912BEED * L_6 = (Indexer_tB7B156EE395CCC5B4D38DF0396133C527912BEED *)il2cpp_codegen_object_new(Indexer_tB7B156EE395CCC5B4D38DF0396133C527912BEED_il2cpp_TypeInfo_var);
		Indexer__ctor_m25238F03D83C95C99DB75F6FDBE3AEC8CD9B7478(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CindexerU3E5__2_3(L_6);
		// int dims = Dims();
		MatOfUShort_t21F85688DF91E44422B3C189B9F5BABD4DD54FFD * L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Mat_Dims_mC06520D09BA304350575375869573F3D16F0FA18(L_7, /*hidden argument*/NULL);
		// if (dims == 2)
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_00d1;
		}
	}
	{
		// int rows = Rows;
		MatOfUShort_t21F85688DF91E44422B3C189B9F5BABD4DD54FFD * L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Mat_get_Rows_m3C503F4701F267780F2F4478F74722F4060627BC(L_9, /*hidden argument*/NULL);
		__this->set_U3CrowsU3E5__3_4(L_10);
		// int cols = Cols;
		MatOfUShort_t21F85688DF91E44422B3C189B9F5BABD4DD54FFD * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Mat_get_Cols_mFABA739099F41BF6B3C2BE50CF967AA4765E8D64(L_11, /*hidden argument*/NULL);
		__this->set_U3CcolsU3E5__4_5(L_12);
		// for (int r = 0; r < rows; r++)
		__this->set_U3CrU3E5__5_6(0);
		goto IL_00c1;
	}

IL_005d:
	{
		// for (int c = 0; c < cols; c++)
		__this->set_U3CcU3E5__6_7(0);
		goto IL_00a3;
	}

IL_0066:
	{
		// yield return indexer[r, c];
		Indexer_tB7B156EE395CCC5B4D38DF0396133C527912BEED * L_13 = __this->get_U3CindexerU3E5__2_3();
		int32_t L_14 = __this->get_U3CrU3E5__5_6();
		int32_t L_15 = __this->get_U3CcU3E5__6_7();
		NullCheck(L_13);
		uint16_t L_16;
		L_16 = VirtFuncInvoker2< uint16_t, int32_t, int32_t >::Invoke(6 /* T OpenCvSharp.MatIndexer`1<System.UInt16>::get_Item(System.Int32,System.Int32) */, L_13, L_14, L_15);
		__this->set_U3CU3E2__current_1(L_16);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_008c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int c = 0; c < cols; c++)
		int32_t L_17 = __this->get_U3CcU3E5__6_7();
		V_2 = L_17;
		int32_t L_18 = V_2;
		__this->set_U3CcU3E5__6_7(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
	}

IL_00a3:
	{
		// for (int c = 0; c < cols; c++)
		int32_t L_19 = __this->get_U3CcU3E5__6_7();
		int32_t L_20 = __this->get_U3CcolsU3E5__4_5();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0066;
		}
	}
	{
		// for (int r = 0; r < rows; r++)
		int32_t L_21 = __this->get_U3CrU3E5__5_6();
		V_2 = L_21;
		int32_t L_22 = V_2;
		__this->set_U3CrU3E5__5_6(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)));
	}

IL_00c1:
	{
		// for (int r = 0; r < rows; r++)
		int32_t L_23 = __this->get_U3CrU3E5__5_6();
		int32_t L_24 = __this->get_U3CrowsU3E5__3_4();
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_005d;
		}
	}
	{
		// }
		goto IL_00dc;
	}

IL_00d1:
	{
		// throw new NotImplementedException("GetEnumerator supports only 2-dimensional Mat");
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_25 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9FC52B13A509BA32020DF9B147EC43D059CDA096)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__28_MoveNext_m35FF78C07363DC75D509BBDD9831533A53BB611B_RuntimeMethod_var)));
	}

IL_00dc:
	{
		// }
		return (bool)0;
	}
}
// System.UInt16 OpenCvSharp.MatOfUShort/<GetEnumerator>d__28::System.Collections.Generic.IEnumerator<System.UInt16>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t U3CGetEnumeratorU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_UInt16U3E_get_Current_mC09B05B611A8CD7944F71051F8AFB1E44B65F463 (U3CGetEnumeratorU3Ed__28_tAE471AE15C94E7B1438A1605B38861DA7E49F1A1 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void OpenCvSharp.MatOfUShort/<GetEnumerator>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__28_System_Collections_IEnumerator_Reset_m987DB4AF6645F84323E8DD2A102485CDF840E7F6 (U3CGetEnumeratorU3Ed__28_tAE471AE15C94E7B1438A1605B38861DA7E49F1A1 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__28_System_Collections_IEnumerator_Reset_m987DB4AF6645F84323E8DD2A102485CDF840E7F6_RuntimeMethod_var)));
	}
}
// System.Object OpenCvSharp.MatOfUShort/<GetEnumerator>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__28_System_Collections_IEnumerator_get_Current_m074BD2D3F950CFF82CF73A36DDB43445FD3E9199 (U3CGetEnumeratorU3Ed__28_tAE471AE15C94E7B1438A1605B38861DA7E49F1A1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0 = __this->get_U3CU3E2__current_1();
		uint16_t L_1 = L_0;
		RuntimeObject * L_2 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_1);
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
// System.Void OpenCvSharp.MatOfUShort/Indexer::.ctor(OpenCvSharp.Mat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Indexer__ctor_m25238F03D83C95C99DB75F6FDBE3AEC8CD9B7478 (Indexer_tB7B156EE395CCC5B4D38DF0396133C527912BEED * __this, Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___parent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatIndexer_1__ctor_m3F983A4EFAA8F40DBE30DD3F74CB2C135D49AC65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// : base(parent)
		Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * L_0 = ___parent0;
		MatIndexer_1__ctor_m3F983A4EFAA8F40DBE30DD3F74CB2C135D49AC65(__this, L_0, /*hidden argument*/MatIndexer_1__ctor_m3F983A4EFAA8F40DBE30DD3F74CB2C135D49AC65_RuntimeMethod_var);
		// ptr = (byte*)parent.Data.ToPointer();
		Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * L_1 = ___parent0;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = Mat_get_Data_mC56D74DEF28C5D9181ED682D80C342D3DC0CE458(L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		void* L_3;
		L_3 = IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline((intptr_t*)(&V_0), /*hidden argument*/NULL);
		__this->set_ptr_2((uint8_t*)L_3);
		// }
		return;
	}
}
// System.UInt16 OpenCvSharp.MatOfUShort/Indexer::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Indexer_get_Item_m978EC27622FD60D563487B939414D4EE87A352BA (Indexer_tB7B156EE395CCC5B4D38DF0396133C527912BEED * __this, int32_t ___i00, const RuntimeMethod* method)
{
	{
		// return *(ushort*)(ptr + (steps[0] * i0));
		uint8_t* L_0 = __this->get_ptr_2();
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_1 = ((MatIndexer_1_tF90B229CEB187AD8DDD19111449C4036F4649A0E *)__this)->get_steps_1();
		NullCheck(L_1);
		int32_t L_2 = 0;
		int64_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = ___i00;
		int32_t L_5 = *((uint16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_3, (int64_t)((int64_t)((int64_t)L_4))))))));
		return (uint16_t)L_5;
	}
}
// System.Void OpenCvSharp.MatOfUShort/Indexer::set_Item(System.Int32,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Indexer_set_Item_mA2E0D2645D3E328480FDF7F5C1FEF3562020F23B (Indexer_tB7B156EE395CCC5B4D38DF0396133C527912BEED * __this, int32_t ___i00, uint16_t ___value1, const RuntimeMethod* method)
{
	{
		// *(ushort*)(ptr + (steps[0] * i0)) = value;
		uint8_t* L_0 = __this->get_ptr_2();
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_1 = ((MatIndexer_1_tF90B229CEB187AD8DDD19111449C4036F4649A0E *)__this)->get_steps_1();
		NullCheck(L_1);
		int32_t L_2 = 0;
		int64_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = ___i00;
		uint16_t L_5 = ___value1;
		*((int16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_3, (int64_t)((int64_t)((int64_t)L_4)))))))) = (int16_t)L_5;
		// }
		return;
	}
}
// System.UInt16 OpenCvSharp.MatOfUShort/Indexer::get_Item(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Indexer_get_Item_m964CFC90F81C3D3CD57B75CE7E4C1DEBC12584BF (Indexer_tB7B156EE395CCC5B4D38DF0396133C527912BEED * __this, int32_t ___i00, int32_t ___i11, const RuntimeMethod* method)
{
	{
		// return *(ushort*)(ptr + (steps[0] * i0) + (steps[1] * i1));
		uint8_t* L_0 = __this->get_ptr_2();
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_1 = ((MatIndexer_1_tF90B229CEB187AD8DDD19111449C4036F4649A0E *)__this)->get_steps_1();
		NullCheck(L_1);
		int32_t L_2 = 0;
		int64_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = ___i00;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_5 = ((MatIndexer_1_tF90B229CEB187AD8DDD19111449C4036F4649A0E *)__this)->get_steps_1();
		NullCheck(L_5);
		int32_t L_6 = 1;
		int64_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = ___i11;
		int32_t L_9 = *((uint16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_3, (int64_t)((int64_t)((int64_t)L_4))))))), (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_7, (int64_t)((int64_t)((int64_t)L_8))))))));
		return (uint16_t)L_9;
	}
}
// System.Void OpenCvSharp.MatOfUShort/Indexer::set_Item(System.Int32,System.Int32,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Indexer_set_Item_m235E1501F23C8923F302A136E1471BCA3AB15861 (Indexer_tB7B156EE395CCC5B4D38DF0396133C527912BEED * __this, int32_t ___i00, int32_t ___i11, uint16_t ___value2, const RuntimeMethod* method)
{
	{
		// *(ushort*)(ptr + (steps[0] * i0) + (steps[1] * i1)) = value;
		uint8_t* L_0 = __this->get_ptr_2();
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_1 = ((MatIndexer_1_tF90B229CEB187AD8DDD19111449C4036F4649A0E *)__this)->get_steps_1();
		NullCheck(L_1);
		int32_t L_2 = 0;
		int64_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = ___i00;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_5 = ((MatIndexer_1_tF90B229CEB187AD8DDD19111449C4036F4649A0E *)__this)->get_steps_1();
		NullCheck(L_5);
		int32_t L_6 = 1;
		int64_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = ___i11;
		uint16_t L_9 = ___value2;
		*((int16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_3, (int64_t)((int64_t)((int64_t)L_4))))))), (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_7, (int64_t)((int64_t)((int64_t)L_8)))))))) = (int16_t)L_9;
		// }
		return;
	}
}
// System.UInt16 OpenCvSharp.MatOfUShort/Indexer::get_Item(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Indexer_get_Item_mD29CC60EA9A1C377059F6C83F411D539EC00C5DE (Indexer_tB7B156EE395CCC5B4D38DF0396133C527912BEED * __this, int32_t ___i00, int32_t ___i11, int32_t ___i22, const RuntimeMethod* method)
{
	{
		// return *(ushort*)(ptr + (steps[0] * i0) + (steps[1] * i1) + (steps[2] * i2));
		uint8_t* L_0 = __this->get_ptr_2();
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_1 = ((MatIndexer_1_tF90B229CEB187AD8DDD19111449C4036F4649A0E *)__this)->get_steps_1();
		NullCheck(L_1);
		int32_t L_2 = 0;
		int64_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = ___i00;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_5 = ((MatIndexer_1_tF90B229CEB187AD8DDD19111449C4036F4649A0E *)__this)->get_steps_1();
		NullCheck(L_5);
		int32_t L_6 = 1;
		int64_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = ___i11;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_9 = ((MatIndexer_1_tF90B229CEB187AD8DDD19111449C4036F4649A0E *)__this)->get_steps_1();
		NullCheck(L_9);
		int32_t L_10 = 2;
		int64_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = ___i22;
		int32_t L_13 = *((uint16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_3, (int64_t)((int64_t)((int64_t)L_4))))))), (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_7, (int64_t)((int64_t)((int64_t)L_8))))))), (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_11, (int64_t)((int64_t)((int64_t)L_12))))))));
		return (uint16_t)L_13;
	}
}
// System.Void OpenCvSharp.MatOfUShort/Indexer::set_Item(System.Int32,System.Int32,System.Int32,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Indexer_set_Item_m74EF476C67324E31F67EC6C14F64A23E41F2FBE9 (Indexer_tB7B156EE395CCC5B4D38DF0396133C527912BEED * __this, int32_t ___i00, int32_t ___i11, int32_t ___i22, uint16_t ___value3, const RuntimeMethod* method)
{
	{
		// *(ushort*)(ptr + (steps[0] * i0) + (steps[1] * i1) + (steps[2] * i2)) = value;
		uint8_t* L_0 = __this->get_ptr_2();
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_1 = ((MatIndexer_1_tF90B229CEB187AD8DDD19111449C4036F4649A0E *)__this)->get_steps_1();
		NullCheck(L_1);
		int32_t L_2 = 0;
		int64_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = ___i00;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_5 = ((MatIndexer_1_tF90B229CEB187AD8DDD19111449C4036F4649A0E *)__this)->get_steps_1();
		NullCheck(L_5);
		int32_t L_6 = 1;
		int64_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = ___i11;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_9 = ((MatIndexer_1_tF90B229CEB187AD8DDD19111449C4036F4649A0E *)__this)->get_steps_1();
		NullCheck(L_9);
		int32_t L_10 = 2;
		int64_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = ___i22;
		uint16_t L_13 = ___value3;
		*((int16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_3, (int64_t)((int64_t)((int64_t)L_4))))))), (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_7, (int64_t)((int64_t)((int64_t)L_8))))))), (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_11, (int64_t)((int64_t)((int64_t)L_12)))))))) = (int16_t)L_13;
		// }
		return;
	}
}
// System.UInt16 OpenCvSharp.MatOfUShort/Indexer::get_Item(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Indexer_get_Item_mA637A8E44C0136CDF5C675E083900097AE98FBBB (Indexer_tB7B156EE395CCC5B4D38DF0396133C527912BEED * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___idx0, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// long offset = 0;
		V_0 = ((int64_t)((int64_t)0));
		// for (int i = 0; i < idx.Length; i++)
		V_1 = 0;
		goto IL_001b;
	}

IL_0007:
	{
		// offset += steps[i] * idx[i];
		int64_t L_0 = V_0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_1 = ((MatIndexer_1_tF90B229CEB187AD8DDD19111449C4036F4649A0E *)__this)->get_steps_1();
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int64_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = ___idx0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_4, (int64_t)((int64_t)((int64_t)L_8))))));
		// for (int i = 0; i < idx.Length; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_001b:
	{
		// for (int i = 0; i < idx.Length; i++)
		int32_t L_10 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = ___idx0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		// return *(ushort*)(ptr + offset);
		uint8_t* L_12 = __this->get_ptr_2();
		int64_t L_13 = V_0;
		int32_t L_14 = *((uint16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_12, (intptr_t)((intptr_t)L_13))));
		return (uint16_t)L_14;
	}
}
// System.Void OpenCvSharp.MatOfUShort/Indexer::set_Item(System.Int32[],System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Indexer_set_Item_m9BFC6A42055D1352D05D0DDFCF6152C264B00CCC (Indexer_tB7B156EE395CCC5B4D38DF0396133C527912BEED * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___idx0, uint16_t ___value1, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// long offset = 0;
		V_0 = ((int64_t)((int64_t)0));
		// for (int i = 0; i < idx.Length; i++)
		V_1 = 0;
		goto IL_001b;
	}

IL_0007:
	{
		// offset += steps[i] * idx[i];
		int64_t L_0 = V_0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_1 = ((MatIndexer_1_tF90B229CEB187AD8DDD19111449C4036F4649A0E *)__this)->get_steps_1();
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int64_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = ___idx0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_4, (int64_t)((int64_t)((int64_t)L_8))))));
		// for (int i = 0; i < idx.Length; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_001b:
	{
		// for (int i = 0; i < idx.Length; i++)
		int32_t L_10 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = ___idx0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		// *(ushort*)(ptr + offset) = value;
		uint8_t* L_12 = __this->get_ptr_2();
		int64_t L_13 = V_0;
		uint16_t L_14 = ___value1;
		*((int16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_12, (intptr_t)((intptr_t)L_13)))) = (int16_t)L_14;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OpenCvSharp.NativeMethods/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD6E0D657263431A027B10B894B688780FBDD7677 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t18FAC9EB403BFD140B96C187D88F0DA2127479ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t18FAC9EB403BFD140B96C187D88F0DA2127479ED * L_0 = (U3CU3Ec_t18FAC9EB403BFD140B96C187D88F0DA2127479ED *)il2cpp_codegen_object_new(U3CU3Ec_t18FAC9EB403BFD140B96C187D88F0DA2127479ED_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m755A9D0F92C06FFB73903E1F19506C60776ED49D(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t18FAC9EB403BFD140B96C187D88F0DA2127479ED_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t18FAC9EB403BFD140B96C187D88F0DA2127479ED_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void OpenCvSharp.NativeMethods/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m755A9D0F92C06FFB73903E1F19506C60776ED49D (U3CU3Ec_t18FAC9EB403BFD140B96C187D88F0DA2127479ED * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 OpenCvSharp.NativeMethods/<>c::<.cctor>b__13_0(OpenCvSharp.ErrorCode,System.String,System.String,System.String,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__13_0_mC78798BF2368BB605D2969F657958246D1B1D77D (U3CU3Ec_t18FAC9EB403BFD140B96C187D88F0DA2127479ED * __this, int32_t ___status0, String_t* ___funcName1, String_t* ___errMsg2, String_t* ___fileName3, int32_t ___line4, intptr_t ___userdata5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// return 0;
		V_0 = 0;
		IL2CPP_LEAVE(0x11, FINALLY_0004);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0004;
	}

FINALLY_0004:
	{ // begin finally (depth: 1)
		// throw new OpenCVException(status, funcName, errMsg, fileName, line);
		int32_t L_0 = ___status0;
		String_t* L_1 = ___funcName1;
		String_t* L_2 = ___errMsg2;
		String_t* L_3 = ___fileName3;
		int32_t L_4 = ___line4;
		OpenCVException_tB5296EF5299605BB326C6A6C56D9BE5CEE2D3561 * L_5 = (OpenCVException_tB5296EF5299605BB326C6A6C56D9BE5CEE2D3561 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OpenCVException_tB5296EF5299605BB326C6A6C56D9BE5CEE2D3561_il2cpp_TypeInfo_var)));
		OpenCVException__ctor_m4BDB1C6123912DC2F8A0909153B008C3EB924DA6(L_5, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__13_0_mC78798BF2368BB605D2969F657958246D1B1D77D_RuntimeMethod_var)));
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(4)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x11, IL_0011)
	}

IL_0011:
	{
		goto IL_0011;
	}
}
// System.Int32 OpenCvSharp.NativeMethods/<>c::<.cctor>b__13_1(OpenCvSharp.ErrorCode,System.String,System.String,System.String,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__13_1_mD220347BD736A5FF60568C2CCB872995E3026869 (U3CU3Ec_t18FAC9EB403BFD140B96C187D88F0DA2127479ED * __this, int32_t ___status0, String_t* ___funcName1, String_t* ___errMsg2, String_t* ___fileName3, int32_t ___line4, intptr_t ___userdata5, const RuntimeMethod* method)
{
	{
		// return 0;
		return 0;
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
// System.Void OpenCvSharp.OCRBeamSearchDecoder/ClassifierCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClassifierCallback__ctor_mFB8E13BFA05AA1B4AA8ED8A2AB5C03A3F49B9B5A (ClassifierCallback_tFE5D7215E8044398FFDC9ACE08F4CB2DA4840EEF * __this, const RuntimeMethod* method)
{
	{
		// private ClassifierCallback()
		DisposableCvObject__ctor_m398D0DFAD35A3FC1DD4FC7F837A058984075783F(__this, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void OpenCvSharp.OCRBeamSearchDecoder/ClassifierCallback::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClassifierCallback__ctor_m665C05FD8EDC48103E1FD08E5BC22F3FF12B5729 (ClassifierCallback_tFE5D7215E8044398FFDC9ACE08F4CB2DA4840EEF * __this, String_t* ___fileName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMethods_tC29394FCE82B57B876F726366D9390EA0396E7C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ClassifierCallback(string fileName)
		DisposableCvObject__ctor_m398D0DFAD35A3FC1DD4FC7F837A058984075783F(__this, /*hidden argument*/NULL);
		// ptr = NativeMethods.text_loadOCRBeamSearchClassifierCNN(fileName);
		String_t* L_0 = ___fileName0;
		IL2CPP_RUNTIME_CLASS_INIT(NativeMethods_tC29394FCE82B57B876F726366D9390EA0396E7C9_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = NativeMethods_text_loadOCRBeamSearchClassifierCNN_m8A446D6C0C2D3EF311E19F78AD922F55BDA5D486(L_0, /*hidden argument*/NULL);
		((DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775 *)__this)->set_ptr_5((intptr_t)L_1);
		// }
		return;
	}
}
// System.Void OpenCvSharp.OCRBeamSearchDecoder/ClassifierCallback::DisposeUnmanaged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClassifierCallback_DisposeUnmanaged_mCFDC8F21148B5E352CB7DF9615981F8D6F028461 (ClassifierCallback_tFE5D7215E8044398FFDC9ACE08F4CB2DA4840EEF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMethods_tC29394FCE82B57B876F726366D9390EA0396E7C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ptr != IntPtr.Zero)
		intptr_t L_0 = ((DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775 *)__this)->get_ptr_5();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// NativeMethods.text_OCRBeamSearchDecoder_ClassifierCallback_delete(ptr);
		intptr_t L_2 = ((DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775 *)__this)->get_ptr_5();
		IL2CPP_RUNTIME_CLASS_INIT(NativeMethods_tC29394FCE82B57B876F726366D9390EA0396E7C9_il2cpp_TypeInfo_var);
		NativeMethods_text_OCRBeamSearchDecoder_ClassifierCallback_delete_m4BACE6C6CECD7A0ABD3D23E24707EBD01B415048((intptr_t)L_2, /*hidden argument*/NULL);
		// ptr = IntPtr.Zero;
		((DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775 *)__this)->set_ptr_5((intptr_t)(0));
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void OpenCvSharp.OCRBeamSearchDecoder/ClassifierCallback::Eval(OpenCvSharp.InputArray,System.Int32[]&,System.Double[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClassifierCallback_Eval_m8A74019979CF574DD4E4BF0609010F5C67A844EC (ClassifierCallback_tFE5D7215E8044398FFDC9ACE08F4CB2DA4840EEF * __this, InputArray_t878A9EA878AAC15464A7DEFD30CBB6AA08311C25 * ___image0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** ___classes1, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** ___confidences2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMethods_tC29394FCE82B57B876F726366D9390EA0396E7C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VectorOfDouble_tAB9D857E0A58C713494B449A70FC4D140F780041_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VectorOfInt32_t823792B51EF6D88E4C4BCB5AC6A4D38918CCC863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VectorOfInt32_t823792B51EF6D88E4C4BCB5AC6A4D38918CCC863 * V_0 = NULL;
	VectorOfDouble_tAB9D857E0A58C713494B449A70FC4D140F780041 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (image == null)
		InputArray_t878A9EA878AAC15464A7DEFD30CBB6AA08311C25 * L_0 = ___image0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("nameof(image)");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF4613B602085CE97484A430B4EBE570197F871B3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ClassifierCallback_Eval_m8A74019979CF574DD4E4BF0609010F5C67A844EC_RuntimeMethod_var)));
	}

IL_000e:
	{
		// image.ThrowIfDisposed();
		InputArray_t878A9EA878AAC15464A7DEFD30CBB6AA08311C25 * L_2 = ___image0;
		NullCheck(L_2);
		DisposableObject_ThrowIfDisposed_m3E51C2E26BD9AE6C9B33E936D468160B900A2AE6(L_2, /*hidden argument*/NULL);
		// using (var vecClass = new VectorOfInt32())
		VectorOfInt32_t823792B51EF6D88E4C4BCB5AC6A4D38918CCC863 * L_3 = (VectorOfInt32_t823792B51EF6D88E4C4BCB5AC6A4D38918CCC863 *)il2cpp_codegen_object_new(VectorOfInt32_t823792B51EF6D88E4C4BCB5AC6A4D38918CCC863_il2cpp_TypeInfo_var);
		VectorOfInt32__ctor_m532DD1C9C951583E1F6D64BA39AD1B60D0DACF0F(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			// using (var vecConfd = new VectorOfDouble())
			VectorOfDouble_tAB9D857E0A58C713494B449A70FC4D140F780041 * L_4 = (VectorOfDouble_tAB9D857E0A58C713494B449A70FC4D140F780041 *)il2cpp_codegen_object_new(VectorOfDouble_tAB9D857E0A58C713494B449A70FC4D140F780041_il2cpp_TypeInfo_var);
			VectorOfDouble__ctor_m69C4885F17117319F16083CC7A1068FDECEA2132(L_4, /*hidden argument*/NULL);
			V_1 = L_4;
		}

IL_0020:
		try
		{ // begin try (depth: 2)
			// NativeMethods.text_OCRHMMDecoder_ClassifierCallback_eval(ptr, image.CvPtr, vecClass.CvPtr, vecConfd.CvPtr);
			intptr_t L_5 = ((DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775 *)__this)->get_ptr_5();
			InputArray_t878A9EA878AAC15464A7DEFD30CBB6AA08311C25 * L_6 = ___image0;
			NullCheck(L_6);
			intptr_t L_7;
			L_7 = DisposableCvObject_get_CvPtr_m15644348DE26CEA8517A4EF27B945F27F679A0F6(L_6, /*hidden argument*/NULL);
			VectorOfInt32_t823792B51EF6D88E4C4BCB5AC6A4D38918CCC863 * L_8 = V_0;
			NullCheck(L_8);
			intptr_t L_9;
			L_9 = DisposableCvObject_get_CvPtr_m15644348DE26CEA8517A4EF27B945F27F679A0F6(L_8, /*hidden argument*/NULL);
			VectorOfDouble_tAB9D857E0A58C713494B449A70FC4D140F780041 * L_10 = V_1;
			NullCheck(L_10);
			intptr_t L_11;
			L_11 = DisposableCvObject_get_CvPtr_m15644348DE26CEA8517A4EF27B945F27F679A0F6(L_10, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(NativeMethods_tC29394FCE82B57B876F726366D9390EA0396E7C9_il2cpp_TypeInfo_var);
			NativeMethods_text_OCRHMMDecoder_ClassifierCallback_eval_m9C0FB7368239DE2DC117A32F9AF4F958E10DC7D9((intptr_t)L_5, (intptr_t)L_7, (intptr_t)L_9, (intptr_t)L_11, /*hidden argument*/NULL);
			// classes = vecClass.ToArray();
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_12 = ___classes1;
			VectorOfInt32_t823792B51EF6D88E4C4BCB5AC6A4D38918CCC863 * L_13 = V_0;
			NullCheck(L_13);
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14;
			L_14 = VectorOfInt32_ToArray_m9A200FF1B54A8EE5DCA1A3E78E07FC9EC26684D9(L_13, /*hidden argument*/NULL);
			*((RuntimeObject **)L_12) = (RuntimeObject *)L_14;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_12, (void*)(RuntimeObject *)L_14);
			// confidences = vecConfd.ToArray();
			DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** L_15 = ___confidences2;
			VectorOfDouble_tAB9D857E0A58C713494B449A70FC4D140F780041 * L_16 = V_1;
			NullCheck(L_16);
			DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_17;
			L_17 = VectorOfDouble_ToArray_m775E841DD8427905041B0E99ACC559D33F4D3388(L_16, /*hidden argument*/NULL);
			*((RuntimeObject **)L_15) = (RuntimeObject *)L_17;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_15, (void*)(RuntimeObject *)L_17);
			// }
			IL2CPP_LEAVE(0x63, FINALLY_004f);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_004f;
		}

FINALLY_004f:
		{ // begin finally (depth: 2)
			{
				VectorOfDouble_tAB9D857E0A58C713494B449A70FC4D140F780041 * L_18 = V_1;
				if (!L_18)
				{
					goto IL_0058;
				}
			}

IL_0052:
			{
				VectorOfDouble_tAB9D857E0A58C713494B449A70FC4D140F780041 * L_19 = V_1;
				NullCheck(L_19);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_19);
			}

IL_0058:
			{
				IL2CPP_END_FINALLY(79)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(79)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x63, FINALLY_0059);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		{
			VectorOfInt32_t823792B51EF6D88E4C4BCB5AC6A4D38918CCC863 * L_20 = V_0;
			if (!L_20)
			{
				goto IL_0062;
			}
		}

IL_005c:
		{
			VectorOfInt32_t823792B51EF6D88E4C4BCB5AC6A4D38918CCC863 * L_21 = V_0;
			NullCheck(L_21);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_21);
		}

IL_0062:
		{
			IL2CPP_END_FINALLY(89)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x63, IL_0063)
	}

IL_0063:
	{
		// GC.KeepAlive(image);
		InputArray_t878A9EA878AAC15464A7DEFD30CBB6AA08311C25 * L_22 = ___image0;
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_KeepAlive_m16C41A64E08E35865A249CB5479A37BACBEDC75C(L_22, /*hidden argument*/NULL);
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
// System.Void OpenCvSharp.OCRHMMDecoder/ClassifierCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClassifierCallback__ctor_mAAE7CB0FC9E0A6CDA90F2749EFEF94BDAD7888BE (ClassifierCallback_t5DE4B98B7E526F050279D9E6F10139D1CDDB2398 * __this, const RuntimeMethod* method)
{
	{
		// private ClassifierCallback()
		DisposableCvObject__ctor_m398D0DFAD35A3FC1DD4FC7F837A058984075783F(__this, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void OpenCvSharp.OCRHMMDecoder/ClassifierCallback::.ctor(System.String,OpenCvSharp.CvText/OCRClassifierType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClassifierCallback__ctor_mC3770C01260C662D0371FD4013FB1152ADD9B01E (ClassifierCallback_t5DE4B98B7E526F050279D9E6F10139D1CDDB2398 * __this, String_t* ___fileName0, int32_t ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMethods_tC29394FCE82B57B876F726366D9390EA0396E7C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ClassifierCallback(string fileName, CvText.OCRClassifierType type)
		DisposableCvObject__ctor_m398D0DFAD35A3FC1DD4FC7F837A058984075783F(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___type1;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = ___type1;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0027;
		}
	}
	{
		// ptr = NativeMethods.text_loadOCRHMMClassifierCNN(fileName);
		String_t* L_2 = ___fileName0;
		IL2CPP_RUNTIME_CLASS_INIT(NativeMethods_tC29394FCE82B57B876F726366D9390EA0396E7C9_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = NativeMethods_text_loadOCRHMMClassifierCNN_m238A2E0D7502915C310531C04897772C1795B05B(L_2, /*hidden argument*/NULL);
		((DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775 *)__this)->set_ptr_5((intptr_t)L_3);
		// break;
		return;
	}

IL_001a:
	{
		// ptr = NativeMethods.text_loadOCRHMMClassifierNM(fileName);
		String_t* L_4 = ___fileName0;
		IL2CPP_RUNTIME_CLASS_INIT(NativeMethods_tC29394FCE82B57B876F726366D9390EA0396E7C9_il2cpp_TypeInfo_var);
		intptr_t L_5;
		L_5 = NativeMethods_text_loadOCRHMMClassifierNM_m0193A4C59862771E5218CF60A1E899A50DAAF712(L_4, /*hidden argument*/NULL);
		((DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775 *)__this)->set_ptr_5((intptr_t)L_5);
		// break;
		return;
	}

IL_0027:
	{
		// throw new ArgumentException("Incorrect OCRHMMDecoder classifier type specified");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral301A1E8B4C33A44C7B22C2E21B66506B1CF83AF4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ClassifierCallback__ctor_mC3770C01260C662D0371FD4013FB1152ADD9B01E_RuntimeMethod_var)));
	}
}
// System.Void OpenCvSharp.OCRHMMDecoder/ClassifierCallback::DisposeUnmanaged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClassifierCallback_DisposeUnmanaged_m8B2EC9B7D001001B22B2841E5342D385F55EC949 (ClassifierCallback_t5DE4B98B7E526F050279D9E6F10139D1CDDB2398 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMethods_tC29394FCE82B57B876F726366D9390EA0396E7C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ptr != IntPtr.Zero)
		intptr_t L_0 = ((DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775 *)__this)->get_ptr_5();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// NativeMethods.text_OCRHMMDecoder_ClassifierCallback_delete(ptr);
		intptr_t L_2 = ((DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775 *)__this)->get_ptr_5();
		IL2CPP_RUNTIME_CLASS_INIT(NativeMethods_tC29394FCE82B57B876F726366D9390EA0396E7C9_il2cpp_TypeInfo_var);
		NativeMethods_text_OCRHMMDecoder_ClassifierCallback_delete_mF010A4F11702CF56ACA44A5F6BB59D563530DBC0((intptr_t)L_2, /*hidden argument*/NULL);
		// ptr = IntPtr.Zero;
		((DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775 *)__this)->set_ptr_5((intptr_t)(0));
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void OpenCvSharp.OCRHMMDecoder/ClassifierCallback::Eval(OpenCvSharp.InputArray,System.Int32[]&,System.Double[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClassifierCallback_Eval_mE382D52D32BA87237E2E237A883F312BEAB79153 (ClassifierCallback_t5DE4B98B7E526F050279D9E6F10139D1CDDB2398 * __this, InputArray_t878A9EA878AAC15464A7DEFD30CBB6AA08311C25 * ___image0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** ___classes1, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** ___confidences2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMethods_tC29394FCE82B57B876F726366D9390EA0396E7C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VectorOfDouble_tAB9D857E0A58C713494B449A70FC4D140F780041_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VectorOfInt32_t823792B51EF6D88E4C4BCB5AC6A4D38918CCC863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VectorOfInt32_t823792B51EF6D88E4C4BCB5AC6A4D38918CCC863 * V_0 = NULL;
	VectorOfDouble_tAB9D857E0A58C713494B449A70FC4D140F780041 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (image == null)
		InputArray_t878A9EA878AAC15464A7DEFD30CBB6AA08311C25 * L_0 = ___image0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("nameof(image)");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF4613B602085CE97484A430B4EBE570197F871B3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ClassifierCallback_Eval_mE382D52D32BA87237E2E237A883F312BEAB79153_RuntimeMethod_var)));
	}

IL_000e:
	{
		// image.ThrowIfDisposed();
		InputArray_t878A9EA878AAC15464A7DEFD30CBB6AA08311C25 * L_2 = ___image0;
		NullCheck(L_2);
		DisposableObject_ThrowIfDisposed_m3E51C2E26BD9AE6C9B33E936D468160B900A2AE6(L_2, /*hidden argument*/NULL);
		// using (var vecClass = new VectorOfInt32())
		VectorOfInt32_t823792B51EF6D88E4C4BCB5AC6A4D38918CCC863 * L_3 = (VectorOfInt32_t823792B51EF6D88E4C4BCB5AC6A4D38918CCC863 *)il2cpp_codegen_object_new(VectorOfInt32_t823792B51EF6D88E4C4BCB5AC6A4D38918CCC863_il2cpp_TypeInfo_var);
		VectorOfInt32__ctor_m532DD1C9C951583E1F6D64BA39AD1B60D0DACF0F(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			// using (var vecConfd = new VectorOfDouble())
			VectorOfDouble_tAB9D857E0A58C713494B449A70FC4D140F780041 * L_4 = (VectorOfDouble_tAB9D857E0A58C713494B449A70FC4D140F780041 *)il2cpp_codegen_object_new(VectorOfDouble_tAB9D857E0A58C713494B449A70FC4D140F780041_il2cpp_TypeInfo_var);
			VectorOfDouble__ctor_m69C4885F17117319F16083CC7A1068FDECEA2132(L_4, /*hidden argument*/NULL);
			V_1 = L_4;
		}

IL_0020:
		try
		{ // begin try (depth: 2)
			// NativeMethods.text_OCRHMMDecoder_ClassifierCallback_eval(ptr, image.CvPtr, vecClass.CvPtr, vecConfd.CvPtr);
			intptr_t L_5 = ((DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775 *)__this)->get_ptr_5();
			InputArray_t878A9EA878AAC15464A7DEFD30CBB6AA08311C25 * L_6 = ___image0;
			NullCheck(L_6);
			intptr_t L_7;
			L_7 = DisposableCvObject_get_CvPtr_m15644348DE26CEA8517A4EF27B945F27F679A0F6(L_6, /*hidden argument*/NULL);
			VectorOfInt32_t823792B51EF6D88E4C4BCB5AC6A4D38918CCC863 * L_8 = V_0;
			NullCheck(L_8);
			intptr_t L_9;
			L_9 = DisposableCvObject_get_CvPtr_m15644348DE26CEA8517A4EF27B945F27F679A0F6(L_8, /*hidden argument*/NULL);
			VectorOfDouble_tAB9D857E0A58C713494B449A70FC4D140F780041 * L_10 = V_1;
			NullCheck(L_10);
			intptr_t L_11;
			L_11 = DisposableCvObject_get_CvPtr_m15644348DE26CEA8517A4EF27B945F27F679A0F6(L_10, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(NativeMethods_tC29394FCE82B57B876F726366D9390EA0396E7C9_il2cpp_TypeInfo_var);
			NativeMethods_text_OCRHMMDecoder_ClassifierCallback_eval_m9C0FB7368239DE2DC117A32F9AF4F958E10DC7D9((intptr_t)L_5, (intptr_t)L_7, (intptr_t)L_9, (intptr_t)L_11, /*hidden argument*/NULL);
			// classes = vecClass.ToArray();
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_12 = ___classes1;
			VectorOfInt32_t823792B51EF6D88E4C4BCB5AC6A4D38918CCC863 * L_13 = V_0;
			NullCheck(L_13);
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14;
			L_14 = VectorOfInt32_ToArray_m9A200FF1B54A8EE5DCA1A3E78E07FC9EC26684D9(L_13, /*hidden argument*/NULL);
			*((RuntimeObject **)L_12) = (RuntimeObject *)L_14;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_12, (void*)(RuntimeObject *)L_14);
			// confidences = vecConfd.ToArray();
			DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** L_15 = ___confidences2;
			VectorOfDouble_tAB9D857E0A58C713494B449A70FC4D140F780041 * L_16 = V_1;
			NullCheck(L_16);
			DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_17;
			L_17 = VectorOfDouble_ToArray_m775E841DD8427905041B0E99ACC559D33F4D3388(L_16, /*hidden argument*/NULL);
			*((RuntimeObject **)L_15) = (RuntimeObject *)L_17;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_15, (void*)(RuntimeObject *)L_17);
			// }
			IL2CPP_LEAVE(0x63, FINALLY_004f);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_004f;
		}

FINALLY_004f:
		{ // begin finally (depth: 2)
			{
				VectorOfDouble_tAB9D857E0A58C713494B449A70FC4D140F780041 * L_18 = V_1;
				if (!L_18)
				{
					goto IL_0058;
				}
			}

IL_0052:
			{
				VectorOfDouble_tAB9D857E0A58C713494B449A70FC4D140F780041 * L_19 = V_1;
				NullCheck(L_19);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_19);
			}

IL_0058:
			{
				IL2CPP_END_FINALLY(79)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(79)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x63, FINALLY_0059);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		{
			VectorOfInt32_t823792B51EF6D88E4C4BCB5AC6A4D38918CCC863 * L_20 = V_0;
			if (!L_20)
			{
				goto IL_0062;
			}
		}

IL_005c:
		{
			VectorOfInt32_t823792B51EF6D88E4C4BCB5AC6A4D38918CCC863 * L_21 = V_0;
			NullCheck(L_21);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_21);
		}

IL_0062:
		{
			IL2CPP_END_FINALLY(89)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x63, IL_0063)
	}

IL_0063:
	{
		// GC.KeepAlive(image);
		InputArray_t878A9EA878AAC15464A7DEFD30CBB6AA08311C25 * L_22 = ___image0;
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_KeepAlive_m16C41A64E08E35865A249CB5479A37BACBEDC75C(L_22, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OpenCvSharp.Demo.PaperScanner/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m75882014D2C50D210024F41A507664808B1EFD65 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFAA7FB765027DE17B8385EADF9A671F5C5BDDBD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tFAA7FB765027DE17B8385EADF9A671F5C5BDDBD3 * L_0 = (U3CU3Ec_tFAA7FB765027DE17B8385EADF9A671F5C5BDDBD3 *)il2cpp_codegen_object_new(U3CU3Ec_tFAA7FB765027DE17B8385EADF9A671F5C5BDDBD3_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD4ABDC9364FEDB660E74BD319ED5F85C64687C2C(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tFAA7FB765027DE17B8385EADF9A671F5C5BDDBD3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFAA7FB765027DE17B8385EADF9A671F5C5BDDBD3_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void OpenCvSharp.Demo.PaperScanner/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD4ABDC9364FEDB660E74BD319ED5F85C64687C2C (U3CU3Ec_tFAA7FB765027DE17B8385EADF9A671F5C5BDDBD3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 OpenCvSharp.Demo.PaperScanner/<>c::<SortCorners>b__19_0(OpenCvSharp.Point,OpenCvSharp.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CSortCornersU3Eb__19_0_mC4F11EBF9F451C0383FC48E23069E5486BBCA1A6 (U3CU3Ec_tFAA7FB765027DE17B8385EADF9A671F5C5BDDBD3 * __this, Point_t01E6005639EC24B31B70D05F7FF25DC232A23396  ___a0, Point_t01E6005639EC24B31B70D05F7FF25DC232A23396  ___b1, const RuntimeMethod* method)
{
	{
		// System.Array.Sort<Point>(corners, (a, b) => a.Y.CompareTo(b.Y));
		int32_t* L_0 = (&___a0)->get_address_of_Y_1();
		Point_t01E6005639EC24B31B70D05F7FF25DC232A23396  L_1 = ___b1;
		int32_t L_2 = L_1.get_Y_1();
		int32_t L_3;
		L_3 = Int32_CompareTo_m2DD1093B956B4D96C3AC3C27FDEE3CA447B044D3((int32_t*)L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 OpenCvSharp.Demo.PaperScanner/<>c::<SortCorners>b__19_1(OpenCvSharp.Point,OpenCvSharp.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CSortCornersU3Eb__19_1_m98B13EEF34F886FB8F62EAC04CE43864E71427AC (U3CU3Ec_tFAA7FB765027DE17B8385EADF9A671F5C5BDDBD3 * __this, Point_t01E6005639EC24B31B70D05F7FF25DC232A23396  ___a0, Point_t01E6005639EC24B31B70D05F7FF25DC232A23396  ___b1, const RuntimeMethod* method)
{
	{
		// System.Array.Sort<Point>(corners, (a, b) => a.X.CompareTo(b.X));
		int32_t* L_0 = (&___a0)->get_address_of_X_0();
		Point_t01E6005639EC24B31B70D05F7FF25DC232A23396  L_1 = ___b1;
		int32_t L_2 = L_1.get_X_0();
		int32_t L_3;
		L_3 = Int32_CompareTo_m2DD1093B956B4D96C3AC3C27FDEE3CA447B044D3((int32_t*)L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// OpenCvSharp.Point OpenCvSharp.Demo.PaperScanner/<>c::<CalculateOutput>b__22_0(OpenCvSharp.Point2f)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t01E6005639EC24B31B70D05F7FF25DC232A23396  U3CU3Ec_U3CCalculateOutputU3Eb__22_0_mB6F192039E06CD7105F8B032283046F05A8B651E (U3CU3Ec_tFAA7FB765027DE17B8385EADF9A671F5C5BDDBD3 * __this, Point2f_tB9B558F67A690FD8B415469F1C8840EC3E163D5E  ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Point[] intPoints = Array.ConvertAll(points, p => new Point(Math.Round(p.X), Math.Round(p.Y)));
		Point2f_tB9B558F67A690FD8B415469F1C8840EC3E163D5E  L_0 = ___p0;
		float L_1 = L_0.get_X_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = bankers_round(((double)((double)L_1)));
		Point2f_tB9B558F67A690FD8B415469F1C8840EC3E163D5E  L_3 = ___p0;
		float L_4 = L_3.get_Y_1();
		double L_5;
		L_5 = bankers_round(((double)((double)L_4)));
		Point_t01E6005639EC24B31B70D05F7FF25DC232A23396  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Point__ctor_m750243710BE03EDA793F7DDDD31311302A86DD09((&L_6), L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Double OpenCvSharp.Demo.PaperScanner/<>c::<CalculateOutput>b__22_1(OpenCvSharp.Point,OpenCvSharp.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3CCalculateOutputU3Eb__22_1_m55C3CA0389AAD1B2FDA928EED076A18A403278BF (U3CU3Ec_tFAA7FB765027DE17B8385EADF9A671F5C5BDDBD3 * __this, Point_t01E6005639EC24B31B70D05F7FF25DC232A23396  ___x0, Point_t01E6005639EC24B31B70D05F7FF25DC232A23396  ___y1, const RuntimeMethod* method)
{
	{
		// System.Func<Point, Point, double> distance = (Point x, Point y) => Point.Distance(x, y);
		Point_t01E6005639EC24B31B70D05F7FF25DC232A23396  L_0 = ___x0;
		Point_t01E6005639EC24B31B70D05F7FF25DC232A23396  L_1 = ___y1;
		double L_2;
		L_2 = Point_Distance_mB38930A38421EF36A8517D37632874723C21A731(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// OpenCvSharp.Point2f OpenCvSharp.Demo.PaperScanner/<>c::<CalculateOutput>b__22_2(OpenCvSharp.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point2f_tB9B558F67A690FD8B415469F1C8840EC3E163D5E  U3CU3Ec_U3CCalculateOutputU3Eb__22_2_m8164EB500E4043EDA41C650889EB6DF18D21E377 (U3CU3Ec_tFAA7FB765027DE17B8385EADF9A671F5C5BDDBD3 * __this, Point_t01E6005639EC24B31B70D05F7FF25DC232A23396  ___p0, const RuntimeMethod* method)
{
	{
		// matUnwrapped = matInput_.UnwrapShape(Array.ConvertAll(paperContour, p => new Point2f(p.X, p.Y)));
		Point_t01E6005639EC24B31B70D05F7FF25DC232A23396  L_0 = ___p0;
		int32_t L_1 = L_0.get_X_0();
		Point_t01E6005639EC24B31B70D05F7FF25DC232A23396  L_2 = ___p0;
		int32_t L_3 = L_2.get_Y_1();
		Point2f_tB9B558F67A690FD8B415469F1C8840EC3E163D5E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Point2f__ctor_mC2331E35273371223C00CD62B531C0FCD46A2CF0((&L_4), ((float)((float)L_1)), ((float)((float)L_3)), /*hidden argument*/NULL);
		return L_4;
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
// System.Void OpenCvSharp.Demo.PaperScanner/ScannerSettings::.ctor(OpenCvSharp.Demo.PaperScanner/ScannerSettings/NotifyDirty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScannerSettings__ctor_m94B9644FFCC8010FADB11B1D440872B12D42EB14 (ScannerSettings_tBDC7F9F16AAC8FC6C20888406790AC52CBBDECCD * __this, NotifyDirty_t4E970B1EC52EBC768E4D83050E6F548B1D97FB69 * ___notify0, const RuntimeMethod* method)
{
	{
		// private double expectedArea_ = 0.33;
		__this->set_expectedArea__1((0.33000000000000002));
		// private int scale_ = 512;
		__this->set_scale__2(((int32_t)512));
		// private DecolorizationMode decolorization_ = DecolorizationMode.Automatic;
		__this->set_decolorization__3(2);
		// private double noiseReduction_ = 0.33;
		__this->set_noiseReduction__5((0.33000000000000002));
		// private double edgesTight_ = 0.75;
		__this->set_edgesTight__6((0.75));
		// private bool dropBadGuess_ = true;
		__this->set_dropBadGuess__7((bool)1);
		// public ScannerSettings(NotifyDirty notify)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// notifyDirty_ = notify;
		NotifyDirty_t4E970B1EC52EBC768E4D83050E6F548B1D97FB69 * L_0 = ___notify0;
		__this->set_notifyDirty__8(L_0);
		// }
		return;
	}
}
// OpenCvSharp.Demo.PaperScanner/ScannerSettings/ColorMode OpenCvSharp.Demo.PaperScanner/ScannerSettings::get_GrayMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScannerSettings_get_GrayMode_mC9B3108A158B3641A14DCB5577CD30B6C3658B7C (ScannerSettings_tBDC7F9F16AAC8FC6C20888406790AC52CBBDECCD * __this, const RuntimeMethod* method)
{
	{
		// get { return colorMode_; }
		int32_t L_0 = __this->get_colorMode__0();
		return L_0;
	}
}
// System.Void OpenCvSharp.Demo.PaperScanner/ScannerSettings::set_GrayMode(OpenCvSharp.Demo.PaperScanner/ScannerSettings/ColorMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScannerSettings_set_GrayMode_m4252ED1B264CDCF79752892D4B12488FBC902270 (ScannerSettings_tBDC7F9F16AAC8FC6C20888406790AC52CBBDECCD * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// if (value != colorMode_)
		int32_t L_0 = ___value0;
		int32_t L_1 = __this->get_colorMode__0();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001b;
		}
	}
	{
		// colorMode_ = value;
		int32_t L_2 = ___value0;
		__this->set_colorMode__0(L_2);
		// notifyDirty_();
		NotifyDirty_t4E970B1EC52EBC768E4D83050E6F548B1D97FB69 * L_3 = __this->get_notifyDirty__8();
		NullCheck(L_3);
		NotifyDirty_Invoke_m5E6ECAB43A3303A4BC7488690E98414191C3312B(L_3, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Double OpenCvSharp.Demo.PaperScanner/ScannerSettings::get_ExpectedArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ScannerSettings_get_ExpectedArea_m395AAFDB8767AC047A25C9FFF0C139AC56AD88C5 (ScannerSettings_tBDC7F9F16AAC8FC6C20888406790AC52CBBDECCD * __this, const RuntimeMethod* method)
{
	{
		// get { return expectedArea_; }
		double L_0 = __this->get_expectedArea__1();
		return L_0;
	}
}
// System.Void OpenCvSharp.Demo.PaperScanner/ScannerSettings::set_ExpectedArea(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScannerSettings_set_ExpectedArea_m8CA12913513FC3AB4C47B37D429B08964B71B0D0 (ScannerSettings_tBDC7F9F16AAC8FC6C20888406790AC52CBBDECCD * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// if (value != expectedArea_)
		double L_0 = ___value0;
		double L_1 = __this->get_expectedArea__1();
		if ((((double)L_0) == ((double)L_1)))
		{
			goto IL_001b;
		}
	}
	{
		// expectedArea_ = value;
		double L_2 = ___value0;
		__this->set_expectedArea__1(L_2);
		// notifyDirty_();
		NotifyDirty_t4E970B1EC52EBC768E4D83050E6F548B1D97FB69 * L_3 = __this->get_notifyDirty__8();
		NullCheck(L_3);
		NotifyDirty_Invoke_m5E6ECAB43A3303A4BC7488690E98414191C3312B(L_3, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Int32 OpenCvSharp.Demo.PaperScanner/ScannerSettings::get_Scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScannerSettings_get_Scale_mE2DB57AB1EE86F9098BD047755EAB3ACB33BC596 (ScannerSettings_tBDC7F9F16AAC8FC6C20888406790AC52CBBDECCD * __this, const RuntimeMethod* method)
{
	{
		// get { return scale_; }
		int32_t L_0 = __this->get_scale__2();
		return L_0;
	}
}
// System.Void OpenCvSharp.Demo.PaperScanner/ScannerSettings::set_Scale(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScannerSettings_set_Scale_m8CABFA41A4BFBD8B1095BAC3C5612CB12B29FC59 (ScannerSettings_tBDC7F9F16AAC8FC6C20888406790AC52CBBDECCD * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// if (value != scale_)
		int32_t L_0 = ___value0;
		int32_t L_1 = __this->get_scale__2();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001b;
		}
	}
	{
		// scale_ = value;
		int32_t L_2 = ___value0;
		__this->set_scale__2(L_2);
		// notifyDirty_();
		NotifyDirty_t4E970B1EC52EBC768E4D83050E6F548B1D97FB69 * L_3 = __this->get_notifyDirty__8();
		NullCheck(L_3);
		NotifyDirty_Invoke_m5E6ECAB43A3303A4BC7488690E98414191C3312B(L_3, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// OpenCvSharp.Demo.PaperScanner/ScannerSettings/DecolorizationMode OpenCvSharp.Demo.PaperScanner/ScannerSettings::get_Decolorization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScannerSettings_get_Decolorization_mA3E0D445388E3F6996DCDD75FDA681591A06D329 (ScannerSettings_tBDC7F9F16AAC8FC6C20888406790AC52CBBDECCD * __this, const RuntimeMethod* method)
{
	{
		// get { return decolorization_; }
		int32_t L_0 = __this->get_decolorization__3();
		return L_0;
	}
}
// System.Void OpenCvSharp.Demo.PaperScanner/ScannerSettings::set_Decolorization(OpenCvSharp.Demo.PaperScanner/ScannerSettings/DecolorizationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScannerSettings_set_Decolorization_m8B4A218E9BB4613D270D51E4DC848C50A652CD42 (ScannerSettings_tBDC7F9F16AAC8FC6C20888406790AC52CBBDECCD * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// if (value != decolorization_)
		int32_t L_0 = ___value0;
		int32_t L_1 = __this->get_decolorization__3();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001b;
		}
	}
	{
		// decolorization_ = value;
		int32_t L_2 = ___value0;
		__this->set_decolorization__3(L_2);
		// notifyDirty_();
		NotifyDirty_t4E970B1EC52EBC768E4D83050E6F548B1D97FB69 * L_3 = __this->get_notifyDirty__8();
		NullCheck(L_3);
		NotifyDirty_Invoke_m5E6ECAB43A3303A4BC7488690E98414191C3312B(L_3, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// OpenCvSharp.Demo.PaperScanner/ScannerSettings/ScanType OpenCvSharp.Demo.PaperScanner/ScannerSettings::get_ColorThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScannerSettings_get_ColorThreshold_m4A1FF018EFAECD04FCDF8D009FD74A4D3567D230 (ScannerSettings_tBDC7F9F16AAC8FC6C20888406790AC52CBBDECCD * __this, const RuntimeMethod* method)
{
	{
		// get { return colorThreshold_; }
		int32_t L_0 = __this->get_colorThreshold__4();
		return L_0;
	}
}
// System.Void OpenCvSharp.Demo.PaperScanner/ScannerSettings::set_ColorThreshold(OpenCvSharp.Demo.PaperScanner/ScannerSettings/ScanType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScannerSettings_set_ColorThreshold_m6C0B351CC25755C057AD15F087CAC1C7D25A59E2 (ScannerSettings_tBDC7F9F16AAC8FC6C20888406790AC52CBBDECCD * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// if (value != colorThreshold_)
		int32_t L_0 = ___value0;
		int32_t L_1 = __this->get_colorThreshold__4();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001b;
		}
	}
	{
		// colorThreshold_ = value;
		int32_t L_2 = ___value0;
		__this->set_colorThreshold__4(L_2);
		// notifyDirty_();
		NotifyDirty_t4E970B1EC52EBC768E4D83050E6F548B1D97FB69 * L_3 = __this->get_notifyDirty__8();
		NullCheck(L_3);
		NotifyDirty_Invoke_m5E6ECAB43A3303A4BC7488690E98414191C3312B(L_3, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Double OpenCvSharp.Demo.PaperScanner/ScannerSettings::get_NoiseReduction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ScannerSettings_get_NoiseReduction_m3C8ADBC51F0437827D41E33F949232657E1D4B18 (ScannerSettings_tBDC7F9F16AAC8FC6C20888406790AC52CBBDECCD * __this, const RuntimeMethod* method)
{
	{
		// get { return noiseReduction_; }
		double L_0 = __this->get_noiseReduction__5();
		return L_0;
	}
}
// System.Void OpenCvSharp.Demo.PaperScanner/ScannerSettings::set_NoiseReduction(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScannerSettings_set_NoiseReduction_m8E227C0A1E4E3F443D4759FD139A55DD46868510 (ScannerSettings_tBDC7F9F16AAC8FC6C20888406790AC52CBBDECCD * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// if (value != noiseReduction_)
		double L_0 = ___value0;
		double L_1 = __this->get_noiseReduction__5();
		if ((((double)L_0) == ((double)L_1)))
		{
			goto IL_001b;
		}
	}
	{
		// noiseReduction_ = value;
		double L_2 = ___value0;
		__this->set_noiseReduction__5(L_2);
		// notifyDirty_();
		NotifyDirty_t4E970B1EC52EBC768E4D83050E6F548B1D97FB69 * L_3 = __this->get_notifyDirty__8();
		NullCheck(L_3);
		NotifyDirty_Invoke_m5E6ECAB43A3303A4BC7488690E98414191C3312B(L_3, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Double OpenCvSharp.Demo.PaperScanner/ScannerSettings::get_EdgesTight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ScannerSettings_get_EdgesTight_mA56D7D2B9EDDF2F2E5961CD672A76BFC3599EA95 (ScannerSettings_tBDC7F9F16AAC8FC6C20888406790AC52CBBDECCD * __this, const RuntimeMethod* method)
{
	{
		// get { return edgesTight_; }
		double L_0 = __this->get_edgesTight__6();
		return L_0;
	}
}
// System.Void OpenCvSharp.Demo.PaperScanner/ScannerSettings::set_EdgesTight(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScannerSettings_set_EdgesTight_mD6C4F2A5C6D1DB1F84A7FB42F17B3007A6151FBE (ScannerSettings_tBDC7F9F16AAC8FC6C20888406790AC52CBBDECCD * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// if (value != edgesTight_)
		double L_0 = ___value0;
		double L_1 = __this->get_edgesTight__6();
		if ((((double)L_0) == ((double)L_1)))
		{
			goto IL_001b;
		}
	}
	{
		// edgesTight_ = value;
		double L_2 = ___value0;
		__this->set_edgesTight__6(L_2);
		// notifyDirty_();
		NotifyDirty_t4E970B1EC52EBC768E4D83050E6F548B1D97FB69 * L_3 = __this->get_notifyDirty__8();
		NullCheck(L_3);
		NotifyDirty_Invoke_m5E6ECAB43A3303A4BC7488690E98414191C3312B(L_3, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Boolean OpenCvSharp.Demo.PaperScanner/ScannerSettings::get_DropBadGuess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScannerSettings_get_DropBadGuess_mCADBDC5949D641824E37B81B6673C122815648F0 (ScannerSettings_tBDC7F9F16AAC8FC6C20888406790AC52CBBDECCD * __this, const RuntimeMethod* method)
{
	{
		// get { return dropBadGuess_; }
		bool L_0 = __this->get_dropBadGuess__7();
		return L_0;
	}
}
// System.Void OpenCvSharp.Demo.PaperScanner/ScannerSettings::set_DropBadGuess(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScannerSettings_set_DropBadGuess_m91C07D1DB365D8E4C566A4D257847546BEB990A0 (ScannerSettings_tBDC7F9F16AAC8FC6C20888406790AC52CBBDECCD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value != dropBadGuess_)
		bool L_0 = ___value0;
		bool L_1 = __this->get_dropBadGuess__7();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001b;
		}
	}
	{
		// dropBadGuess_ = true;
		__this->set_dropBadGuess__7((bool)1);
		// notifyDirty_();
		NotifyDirty_t4E970B1EC52EBC768E4D83050E6F548B1D97FB69 * L_2 = __this->get_notifyDirty__8();
		NullCheck(L_2);
		NotifyDirty_Invoke_m5E6ECAB43A3303A4BC7488690E98414191C3312B(L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
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
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_ObjFunc_t0CF3FD007A2692EA2706B3CB1F4368231821CECD (ObjFunc_t0CF3FD007A2692EA2706B3CB1F4368231821CECD * __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___ptr0);

	return returnValue;
}
// System.Void OpenCvSharp.PtrNativeFunctions/ObjFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjFunc__ctor_m45F3E4131709FB94EE4150BC2F67F57C59E1C5AE (ObjFunc_t0CF3FD007A2692EA2706B3CB1F4368231821CECD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr OpenCvSharp.PtrNativeFunctions/ObjFunc::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ObjFunc_Invoke_mE12D0927668E366996E7EFF9F8936107541FA563 (ObjFunc_t0CF3FD007A2692EA2706B3CB1F4368231821CECD * __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ptr0, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ptr0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___ptr0);
					else
						result = GenericVirtFuncInvoker1< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___ptr0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ptr0);
					else
						result = VirtFuncInvoker1< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ptr0);
				}
			}
			else
			{
				typedef intptr_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ptr0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult OpenCvSharp.PtrNativeFunctions/ObjFunc::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjFunc_BeginInvoke_m5BC5CF97501063542172090B7E4ED856CB6B6DE9 (ObjFunc_t0CF3FD007A2692EA2706B3CB1F4368231821CECD * __this, intptr_t ___ptr0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.IntPtr OpenCvSharp.PtrNativeFunctions/ObjFunc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ObjFunc_EndInvoke_m253B92975B1BD74B29FC8E9BDDC7C159B94F1B7E (ObjFunc_t0CF3FD007A2692EA2706B3CB1F4368231821CECD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ReleaseFunc_t0E13E77E98708665F36C3F0DFC508F27EFDBF824 (ReleaseFunc_t0E13E77E98708665F36C3F0DFC508F27EFDBF824 * __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___ptr0);

}
// System.Void OpenCvSharp.PtrNativeFunctions/ReleaseFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReleaseFunc__ctor_mF13B078714B9762A2F6F2CAD3B785E9D9D958E7B (ReleaseFunc_t0E13E77E98708665F36C3F0DFC508F27EFDBF824 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void OpenCvSharp.PtrNativeFunctions/ReleaseFunc::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReleaseFunc_Invoke_m3D7A2F426527DD5FDAB2A0C0BD0EA16E3EF7F230 (ReleaseFunc_t0E13E77E98708665F36C3F0DFC508F27EFDBF824 * __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ptr0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ptr0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___ptr0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___ptr0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ptr0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ptr0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ptr0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult OpenCvSharp.PtrNativeFunctions/ReleaseFunc::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReleaseFunc_BeginInvoke_mBB4A79FDC57BF75ED642264128981A55F054A8E0 (ReleaseFunc_t0E13E77E98708665F36C3F0DFC508F27EFDBF824 * __this, intptr_t ___ptr0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void OpenCvSharp.PtrNativeFunctions/ReleaseFunc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReleaseFunc_EndInvoke_m4327228E207803254070598C11FB1E1C557F4298 (ReleaseFunc_t0E13E77E98708665F36C3F0DFC508F27EFDBF824 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OpenCvSharp.ML.SVM/Kernel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel__ctor_mB5690311E7F5D0840D2177C122874C7D0F8147DE (Kernel_t248BA1EDB2982C89B431ACBBA11F3B1F3BE65FC9 * __this, const RuntimeMethod* method)
{
	{
		// public Kernel()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// throw new NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kernel__ctor_mB5690311E7F5D0840D2177C122874C7D0F8147DE_RuntimeMethod_var)));
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
// System.Void OpenCvSharp.SimpleBlobDetector/Params::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Params__ctor_mAB685C02737EF824DE310053DF4DBA4C5B7D98AC (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, const RuntimeMethod* method)
{
	WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public Params()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// data = new WParams
		//     {
		//         thresholdStep = 10,
		//         minThreshold = 50,
		//         maxThreshold = 220,
		//         minRepeatability = 2,
		//         minDistBetweenBlobs = 10,
		//         filterByColor = 1,
		//         blobColor = 0,
		//         filterByArea = 1,
		//         minArea = 25,
		//         maxArea = 5000,
		//         filterByCircularity = 0,
		//         minCircularity = 0.8f,
		//         maxCircularity = Single.MaxValue,
		//         filterByInertia = 1,
		//         minInertiaRatio = 0.1f,
		//         maxInertiaRatio = Single.MaxValue,
		//         filterByConvexity = 1,
		//         minConvexity = 0.95f,
		//         maxConvexity = Single.MaxValue
		//     };
		il2cpp_codegen_initobj((&V_0), sizeof(WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC ));
		(&V_0)->set_thresholdStep_0((10.0f));
		(&V_0)->set_minThreshold_1((50.0f));
		(&V_0)->set_maxThreshold_2((220.0f));
		(&V_0)->set_minRepeatability_3(2);
		(&V_0)->set_minDistBetweenBlobs_4((10.0f));
		(&V_0)->set_filterByColor_5(1);
		(&V_0)->set_blobColor_6((uint8_t)0);
		(&V_0)->set_filterByArea_7(1);
		(&V_0)->set_minArea_8((25.0f));
		(&V_0)->set_maxArea_9((5000.0f));
		(&V_0)->set_filterByCircularity_10(0);
		(&V_0)->set_minCircularity_11((0.800000012f));
		(&V_0)->set_maxCircularity_12(((std::numeric_limits<float>::max)()));
		(&V_0)->set_filterByInertia_13(1);
		(&V_0)->set_minInertiaRatio_14((0.100000001f));
		(&V_0)->set_maxInertiaRatio_15(((std::numeric_limits<float>::max)()));
		(&V_0)->set_filterByConvexity_16(1);
		(&V_0)->set_minConvexity_17((0.949999988f));
		(&V_0)->set_maxConvexity_18(((std::numeric_limits<float>::max)()));
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC  L_0 = V_0;
		__this->set_data_0(L_0);
		// }
		return;
	}
}
// System.Single OpenCvSharp.SimpleBlobDetector/Params::get_ThresholdStep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Params_get_ThresholdStep_mD39FDF2328A54ABDF9AE721253C3ACCF2FF4CB3D (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, const RuntimeMethod* method)
{
	{
		// get { return data.thresholdStep; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		float L_1 = L_0->get_thresholdStep_0();
		return L_1;
	}
}
// System.Void OpenCvSharp.SimpleBlobDetector/Params::set_ThresholdStep(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Params_set_ThresholdStep_m3F26880DCF65B71AB46AB8782412B0076589D713 (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { data.thresholdStep = value; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		float L_1 = ___value0;
		L_0->set_thresholdStep_0(L_1);
		// set { data.thresholdStep = value; }
		return;
	}
}
// System.Single OpenCvSharp.SimpleBlobDetector/Params::get_MinThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Params_get_MinThreshold_m920CBA443E93AE684B520F87AF7EA3345B6129BE (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, const RuntimeMethod* method)
{
	{
		// get { return data.minThreshold; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		float L_1 = L_0->get_minThreshold_1();
		return L_1;
	}
}
// System.Void OpenCvSharp.SimpleBlobDetector/Params::set_MinThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Params_set_MinThreshold_m10C3DAFA1076749455CE5763ABD559DE75FE7886 (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { data.minThreshold = value; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		float L_1 = ___value0;
		L_0->set_minThreshold_1(L_1);
		// set { data.minThreshold = value; }
		return;
	}
}
// System.Single OpenCvSharp.SimpleBlobDetector/Params::get_MaxThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Params_get_MaxThreshold_mB53EBA963448C47A6475A281B1D015C1E4808140 (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, const RuntimeMethod* method)
{
	{
		// get { return data.maxThreshold; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		float L_1 = L_0->get_maxThreshold_2();
		return L_1;
	}
}
// System.Void OpenCvSharp.SimpleBlobDetector/Params::set_MaxThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Params_set_MaxThreshold_m5ACD6EA1306E11C3F6FDBBE0086A1498B246AE88 (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { data.maxThreshold = value; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		float L_1 = ___value0;
		L_0->set_maxThreshold_2(L_1);
		// set { data.maxThreshold = value; }
		return;
	}
}
// System.UInt32 OpenCvSharp.SimpleBlobDetector/Params::get_MinRepeatability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Params_get_MinRepeatability_mE5BCD9AFDB04509101A16534DDD86DB66760299A (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, const RuntimeMethod* method)
{
	{
		// get { return data.minRepeatability; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		uint32_t L_1 = L_0->get_minRepeatability_3();
		return L_1;
	}
}
// System.Void OpenCvSharp.SimpleBlobDetector/Params::set_MinRepeatability(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Params_set_MinRepeatability_m19C82289295CB1A5624FC4060DE5E4C0B076D4B9 (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { data.minRepeatability = value; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		uint32_t L_1 = ___value0;
		L_0->set_minRepeatability_3(L_1);
		// set { data.minRepeatability = value; }
		return;
	}
}
// System.Single OpenCvSharp.SimpleBlobDetector/Params::get_MinDistBetweenBlobs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Params_get_MinDistBetweenBlobs_m6154FB60F8EB1B00F0E53B31E91BECF5B517199B (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, const RuntimeMethod* method)
{
	{
		// get { return data.minDistBetweenBlobs; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		float L_1 = L_0->get_minDistBetweenBlobs_4();
		return L_1;
	}
}
// System.Void OpenCvSharp.SimpleBlobDetector/Params::set_MinDistBetweenBlobs(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Params_set_MinDistBetweenBlobs_m45FC1DE09B1CB518E23661ECFEEF99F4DCBBCEED (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { data.minDistBetweenBlobs = value; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		float L_1 = ___value0;
		L_0->set_minDistBetweenBlobs_4(L_1);
		// set { data.minDistBetweenBlobs = value; }
		return;
	}
}
// System.Boolean OpenCvSharp.SimpleBlobDetector/Params::get_FilterByColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Params_get_FilterByColor_mA76E2EEFC305BD379D711864C8BD9B634E96D522 (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, const RuntimeMethod* method)
{
	{
		// get { return data.filterByColor != 0; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		int32_t L_1 = L_0->get_filterByColor_5();
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void OpenCvSharp.SimpleBlobDetector/Params::set_FilterByColor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Params_set_FilterByColor_m4A58EB676A0A9D234C84025BDF8C95C89F719BD7 (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, bool ___value0, const RuntimeMethod* method)
{
	WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * G_B2_0 = NULL;
	WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * G_B3_1 = NULL;
	{
		// set { data.filterByColor = (value ? 1 : 0); }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		bool L_1 = ___value0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		G_B3_1->set_filterByColor_5(G_B3_0);
		// set { data.filterByColor = (value ? 1 : 0); }
		return;
	}
}
// System.Byte OpenCvSharp.SimpleBlobDetector/Params::get_BlobColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Params_get_BlobColor_m4E9ECB7F5985DF5084DEB5787ABFAB7FBBEFCD44 (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, const RuntimeMethod* method)
{
	{
		// get { return data.blobColor; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		uint8_t L_1 = L_0->get_blobColor_6();
		return L_1;
	}
}
// System.Void OpenCvSharp.SimpleBlobDetector/Params::set_BlobColor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Params_set_BlobColor_mD9FB7DBB8341869E8504F9102D2DDAC35B7671F1 (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// set { data.blobColor = value; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		uint8_t L_1 = ___value0;
		L_0->set_blobColor_6(L_1);
		// set { data.blobColor = value; }
		return;
	}
}
// System.Boolean OpenCvSharp.SimpleBlobDetector/Params::get_FilterByArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Params_get_FilterByArea_m6AD2A0C44497C0F7E8A326DE83C418E721D0E5A0 (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, const RuntimeMethod* method)
{
	{
		// get { return data.filterByArea != 0; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		int32_t L_1 = L_0->get_filterByArea_7();
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void OpenCvSharp.SimpleBlobDetector/Params::set_FilterByArea(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Params_set_FilterByArea_m482EE69BE0CAD5FE1661872A533153A0C71F63EE (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, bool ___value0, const RuntimeMethod* method)
{
	WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * G_B2_0 = NULL;
	WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * G_B3_1 = NULL;
	{
		// set { data.filterByArea = (value ? 1 : 0); }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		bool L_1 = ___value0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		G_B3_1->set_filterByArea_7(G_B3_0);
		// set { data.filterByArea = (value ? 1 : 0); }
		return;
	}
}
// System.Single OpenCvSharp.SimpleBlobDetector/Params::get_MinArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Params_get_MinArea_m2DA26C0DCCF2D34700446FD6DC19E4A92AB2BD2F (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, const RuntimeMethod* method)
{
	{
		// get { return data.minArea; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		float L_1 = L_0->get_minArea_8();
		return L_1;
	}
}
// System.Void OpenCvSharp.SimpleBlobDetector/Params::set_MinArea(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Params_set_MinArea_m888B997B743FA76B2E41860C6EDEFCD8CC2683A1 (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { data.minArea = value; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		float L_1 = ___value0;
		L_0->set_minArea_8(L_1);
		// set { data.minArea = value; }
		return;
	}
}
// System.Single OpenCvSharp.SimpleBlobDetector/Params::get_MaxArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Params_get_MaxArea_mC303208111AD9AB0516AE2A8A393AFC3832EBD47 (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, const RuntimeMethod* method)
{
	{
		// get { return data.maxArea; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		float L_1 = L_0->get_maxArea_9();
		return L_1;
	}
}
// System.Void OpenCvSharp.SimpleBlobDetector/Params::set_MaxArea(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Params_set_MaxArea_m27B21F470166660750536D7A0EF2E066AE909351 (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { data.maxArea = value; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		float L_1 = ___value0;
		L_0->set_maxArea_9(L_1);
		// set { data.maxArea = value; }
		return;
	}
}
// System.Boolean OpenCvSharp.SimpleBlobDetector/Params::get_FilterByCircularity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Params_get_FilterByCircularity_mA258FAA7B3267514E5AD57C59A6A0B7F7959BCA3 (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, const RuntimeMethod* method)
{
	{
		// get { return data.filterByCircularity != 0; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		int32_t L_1 = L_0->get_filterByCircularity_10();
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void OpenCvSharp.SimpleBlobDetector/Params::set_FilterByCircularity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Params_set_FilterByCircularity_mCE015D5AFBA14A3FC3708507BBCA7AB9EEC577DA (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, bool ___value0, const RuntimeMethod* method)
{
	WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * G_B2_0 = NULL;
	WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * G_B3_1 = NULL;
	{
		// set { data.filterByCircularity = (value ? 1 : 0); }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		bool L_1 = ___value0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		G_B3_1->set_filterByCircularity_10(G_B3_0);
		// set { data.filterByCircularity = (value ? 1 : 0); }
		return;
	}
}
// System.Single OpenCvSharp.SimpleBlobDetector/Params::get_MinCircularity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Params_get_MinCircularity_mC764F04C34AAEA0F24C06FC21BE467086A62A55F (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, const RuntimeMethod* method)
{
	{
		// get { return data.minCircularity; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		float L_1 = L_0->get_minCircularity_11();
		return L_1;
	}
}
// System.Void OpenCvSharp.SimpleBlobDetector/Params::set_MinCircularity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Params_set_MinCircularity_mFD2BAA001F42705A46C7E7902778DB39D854E9C7 (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { data.minCircularity = value; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		float L_1 = ___value0;
		L_0->set_minCircularity_11(L_1);
		// set { data.minCircularity = value; }
		return;
	}
}
// System.Single OpenCvSharp.SimpleBlobDetector/Params::get_MaxCircularity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Params_get_MaxCircularity_m9267474B916ED5B51B5C801FA2E550F5FF0D0758 (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, const RuntimeMethod* method)
{
	{
		// get { return data.maxCircularity; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		float L_1 = L_0->get_maxCircularity_12();
		return L_1;
	}
}
// System.Void OpenCvSharp.SimpleBlobDetector/Params::set_MaxCircularity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Params_set_MaxCircularity_mB0AC86B9E0C60436940FAE89455142BF4F54653B (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { data.maxCircularity = value; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		float L_1 = ___value0;
		L_0->set_maxCircularity_12(L_1);
		// set { data.maxCircularity = value; }
		return;
	}
}
// System.Boolean OpenCvSharp.SimpleBlobDetector/Params::get_FilterByInertia()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Params_get_FilterByInertia_mC97B3D388F3A04383E0198031FDDF3DFFA5152FE (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, const RuntimeMethod* method)
{
	{
		// get { return data.filterByInertia != 0; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		int32_t L_1 = L_0->get_filterByInertia_13();
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void OpenCvSharp.SimpleBlobDetector/Params::set_FilterByInertia(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Params_set_FilterByInertia_m40ACB6E4B9D7FA6E2B62E3A1CE36D981F53455A5 (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, bool ___value0, const RuntimeMethod* method)
{
	WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * G_B2_0 = NULL;
	WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * G_B3_1 = NULL;
	{
		// set { data.filterByInertia = (value ? 1 : 0); }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		bool L_1 = ___value0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		G_B3_1->set_filterByInertia_13(G_B3_0);
		// set { data.filterByInertia = (value ? 1 : 0); }
		return;
	}
}
// System.Single OpenCvSharp.SimpleBlobDetector/Params::get_MinInertiaRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Params_get_MinInertiaRatio_mEF5F876630D64E6272AEFAC79E2296537D2D2665 (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, const RuntimeMethod* method)
{
	{
		// get { return data.minInertiaRatio; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		float L_1 = L_0->get_minInertiaRatio_14();
		return L_1;
	}
}
// System.Void OpenCvSharp.SimpleBlobDetector/Params::set_MinInertiaRatio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Params_set_MinInertiaRatio_mEA315F10FC576031BCD1192B3D8F0D5DF3BFDBE3 (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { data.minInertiaRatio = value; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		float L_1 = ___value0;
		L_0->set_minInertiaRatio_14(L_1);
		// set { data.minInertiaRatio = value; }
		return;
	}
}
// System.Single OpenCvSharp.SimpleBlobDetector/Params::get_MaxInertiaRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Params_get_MaxInertiaRatio_mA9AFCDA2A2F3D1E46E006E5F04A9BB80301F049A (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, const RuntimeMethod* method)
{
	{
		// get { return data.maxInertiaRatio; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		float L_1 = L_0->get_maxInertiaRatio_15();
		return L_1;
	}
}
// System.Void OpenCvSharp.SimpleBlobDetector/Params::set_MaxInertiaRatio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Params_set_MaxInertiaRatio_m05BEEC4A5A637C13803BC4AFF22D1C0813A67F53 (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { data.maxInertiaRatio = value; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		float L_1 = ___value0;
		L_0->set_maxInertiaRatio_15(L_1);
		// set { data.maxInertiaRatio = value; }
		return;
	}
}
// System.Boolean OpenCvSharp.SimpleBlobDetector/Params::get_FilterByConvexity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Params_get_FilterByConvexity_m1D05DC5B7FD30CE9D2AEB900B5BB69D01333C7A3 (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, const RuntimeMethod* method)
{
	{
		// get { return data.filterByConvexity != 0; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		int32_t L_1 = L_0->get_filterByConvexity_16();
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void OpenCvSharp.SimpleBlobDetector/Params::set_FilterByConvexity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Params_set_FilterByConvexity_m7C5F53DA8D45132A360FD005EA85B9A5E5861D5C (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, bool ___value0, const RuntimeMethod* method)
{
	WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * G_B2_0 = NULL;
	WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * G_B3_1 = NULL;
	{
		// set { data.filterByConvexity = (value ? 1 : 0); }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		bool L_1 = ___value0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		G_B3_1->set_filterByConvexity_16(G_B3_0);
		// set { data.filterByConvexity = (value ? 1 : 0); }
		return;
	}
}
// System.Single OpenCvSharp.SimpleBlobDetector/Params::get_MinConvexity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Params_get_MinConvexity_m90437D6ED183ADFD461E77A4FFDF687BBB12D75E (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, const RuntimeMethod* method)
{
	{
		// get { return data.minConvexity; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		float L_1 = L_0->get_minConvexity_17();
		return L_1;
	}
}
// System.Void OpenCvSharp.SimpleBlobDetector/Params::set_MinConvexity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Params_set_MinConvexity_mD6F5F4E38287DADA587C65AD347B82FE1A7036EE (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { data.minConvexity = value; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		float L_1 = ___value0;
		L_0->set_minConvexity_17(L_1);
		// set { data.minConvexity = value; }
		return;
	}
}
// System.Single OpenCvSharp.SimpleBlobDetector/Params::get_MaxConvexity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Params_get_MaxConvexity_mD36F3C7AE0FD79FC0D844A23D63FC796A7FBA9D4 (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, const RuntimeMethod* method)
{
	{
		// get { return data.maxConvexity; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		float L_1 = L_0->get_maxConvexity_18();
		return L_1;
	}
}
// System.Void OpenCvSharp.SimpleBlobDetector/Params::set_MaxConvexity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Params_set_MaxConvexity_m59D2B0227839A0649CCE9A22FEA9FFA9FD2FC268 (Params_t243E115C336E9AF87CC08AD441FC2DDFA84943A3 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { data.maxConvexity = value; }
		WParams_tA8F516FA2A6CF32DF4FB6858C870941AC363DDBC * L_0 = __this->get_address_of_data_0();
		float L_1 = ___value0;
		L_0->set_maxConvexity_18(L_1);
		// set { data.maxConvexity = value; }
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
// System.Void OpenCvSharp.Tracking.Tracker/Ptr::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ptr__ctor_m22AFFE50AFA715E2C9B97471DF00394107F57237 (Ptr_tBE8E25CEC2D965C7CD1464E833D251666EB9070D * __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ptr_1__ctor_mB342A6248A482E017D8F994222D05BA27EB5F586_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(ptr)
		intptr_t L_0 = ___ptr0;
		Ptr_1__ctor_mB342A6248A482E017D8F994222D05BA27EB5F586(__this, (intptr_t)L_0, /*hidden argument*/Ptr_1__ctor_mB342A6248A482E017D8F994222D05BA27EB5F586_RuntimeMethod_var);
		// {}
		return;
	}
}
// System.IntPtr OpenCvSharp.Tracking.Tracker/Ptr::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Ptr_Get_mC42662E201190A496D133730100E2CF663ED504B (Ptr_tBE8E25CEC2D965C7CD1464E833D251666EB9070D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMethods_tC29394FCE82B57B876F726366D9390EA0396E7C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NativeMethods.tracking_Ptr_Tracker_get(ptr);
		intptr_t L_0 = ((DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775 *)__this)->get_ptr_5();
		IL2CPP_RUNTIME_CLASS_INIT(NativeMethods_tC29394FCE82B57B876F726366D9390EA0396E7C9_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = NativeMethods_tracking_Ptr_Tracker_get_m8E111EF7239B6FDAB5694F201515E8C4A936DDEE((intptr_t)L_0, /*hidden argument*/NULL);
		return (intptr_t)L_1;
	}
}
// System.Void OpenCvSharp.Tracking.Tracker/Ptr::DisposeUnmanaged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ptr_DisposeUnmanaged_m80626BCD7255BA59783273A5039D0A223A5B8EF1 (Ptr_tBE8E25CEC2D965C7CD1464E833D251666EB9070D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMethods_tC29394FCE82B57B876F726366D9390EA0396E7C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NativeMethods.tracking_Ptr_Tracker_delete(ptr);
		intptr_t L_0 = ((DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775 *)__this)->get_ptr_5();
		IL2CPP_RUNTIME_CLASS_INIT(NativeMethods_tC29394FCE82B57B876F726366D9390EA0396E7C9_il2cpp_TypeInfo_var);
		NativeMethods_tracking_Ptr_Tracker_delete_m8115632B38DC26BF31B4C280E487F417138B4BAD((intptr_t)L_0, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: OpenCvSharp.Unity/Color32Bytes
IL2CPP_EXTERN_C void Color32Bytes_t4E117D295899BA79691FCEDA183B693131C94BCF_marshal_pinvoke(const Color32Bytes_t4E117D295899BA79691FCEDA183B693131C94BCF& unmarshaled, Color32Bytes_t4E117D295899BA79691FCEDA183B693131C94BCF_marshaled_pinvoke& marshaled)
{
	marshaled.___byteArray_0 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.get_byteArray_0());
	if (unmarshaled.get_colors_1() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_colors_Length = (unmarshaled.get_colors_1())->max_length;
		marshaled.___colors_1 = il2cpp_codegen_marshal_allocate_array<Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D >(_unmarshaled_colors_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_colors_Length); i++)
		{
			(marshaled.___colors_1)[i] = (unmarshaled.get_colors_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___colors_1 = NULL;
	}
}
IL2CPP_EXTERN_C void Color32Bytes_t4E117D295899BA79691FCEDA183B693131C94BCF_marshal_pinvoke_back(const Color32Bytes_t4E117D295899BA79691FCEDA183B693131C94BCF_marshaled_pinvoke& marshaled, Color32Bytes_t4E117D295899BA79691FCEDA183B693131C94BCF& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_byteArray_0((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, marshaled.___byteArray_0));
	if (marshaled.___colors_1 != NULL)
	{
		if (unmarshaled.get_colors_1() == NULL)
		{
			unmarshaled.set_colors_1(reinterpret_cast<Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*>((Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*)SZArrayNew(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_colors_1())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_colors_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___colors_1)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: OpenCvSharp.Unity/Color32Bytes
IL2CPP_EXTERN_C void Color32Bytes_t4E117D295899BA79691FCEDA183B693131C94BCF_marshal_pinvoke_cleanup(Color32Bytes_t4E117D295899BA79691FCEDA183B693131C94BCF_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___byteArray_0);
	marshaled.___byteArray_0 = NULL;
	if (marshaled.___colors_1 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___colors_1);
		marshaled.___colors_1 = NULL;
	}
}
// Conversion methods for marshalling of: OpenCvSharp.Unity/Color32Bytes
IL2CPP_EXTERN_C void Color32Bytes_t4E117D295899BA79691FCEDA183B693131C94BCF_marshal_com(const Color32Bytes_t4E117D295899BA79691FCEDA183B693131C94BCF& unmarshaled, Color32Bytes_t4E117D295899BA79691FCEDA183B693131C94BCF_marshaled_com& marshaled)
{
	marshaled.___byteArray_0 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.get_byteArray_0());
	if (unmarshaled.get_colors_1() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_colors_Length = (unmarshaled.get_colors_1())->max_length;
		marshaled.___colors_1 = il2cpp_codegen_marshal_allocate_array<Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D >(_unmarshaled_colors_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_colors_Length); i++)
		{
			(marshaled.___colors_1)[i] = (unmarshaled.get_colors_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___colors_1 = NULL;
	}
}
IL2CPP_EXTERN_C void Color32Bytes_t4E117D295899BA79691FCEDA183B693131C94BCF_marshal_com_back(const Color32Bytes_t4E117D295899BA79691FCEDA183B693131C94BCF_marshaled_com& marshaled, Color32Bytes_t4E117D295899BA79691FCEDA183B693131C94BCF& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_byteArray_0((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, marshaled.___byteArray_0));
	if (marshaled.___colors_1 != NULL)
	{
		if (unmarshaled.get_colors_1() == NULL)
		{
			unmarshaled.set_colors_1(reinterpret_cast<Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*>((Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*)SZArrayNew(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_colors_1())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_colors_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___colors_1)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: OpenCvSharp.Unity/Color32Bytes
IL2CPP_EXTERN_C void Color32Bytes_t4E117D295899BA79691FCEDA183B693131C94BCF_marshal_com_cleanup(Color32Bytes_t4E117D295899BA79691FCEDA183B693131C94BCF_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___byteArray_0);
	marshaled.___byteArray_0 = NULL;
	if (marshaled.___colors_1 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___colors_1);
		marshaled.___colors_1 = NULL;
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
// System.Boolean OpenCvSharp.Unity/TextureConversionParams::get_FlipVertically()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureConversionParams_get_FlipVertically_mB431BBC76CECF5CCDC5784913ED1F174F10FD523 (TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9 * __this, const RuntimeMethod* method)
{
	{
		// public bool FlipVertically { get; set; }
		bool L_0 = __this->get_U3CFlipVerticallyU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void OpenCvSharp.Unity/TextureConversionParams::set_FlipVertically(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureConversionParams_set_FlipVertically_m95E199EBD5751D49ECCC0DD6FEAC0B92B82F5FD8 (TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool FlipVertically { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CFlipVerticallyU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean OpenCvSharp.Unity/TextureConversionParams::get_FlipHorizontally()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureConversionParams_get_FlipHorizontally_m02E3C937584F7BBF024FD394393B18F9F6902929 (TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9 * __this, const RuntimeMethod* method)
{
	{
		// public bool FlipHorizontally { get; set; }
		bool L_0 = __this->get_U3CFlipHorizontallyU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void OpenCvSharp.Unity/TextureConversionParams::set_FlipHorizontally(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureConversionParams_set_FlipHorizontally_mC060D84F4046C8E619DBB488E13541437533C50A (TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool FlipHorizontally { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CFlipHorizontallyU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 OpenCvSharp.Unity/TextureConversionParams::get_RotationAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureConversionParams_get_RotationAngle_m8B8EA45FF8EEF70A52DA60D1B7296BE6DF25DA72 (TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9 * __this, const RuntimeMethod* method)
{
	{
		// public int RotationAngle { get; set; }
		int32_t L_0 = __this->get_U3CRotationAngleU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void OpenCvSharp.Unity/TextureConversionParams::set_RotationAngle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureConversionParams_set_RotationAngle_mD7F0EFFA986F5D5675F14242F60BCF911791F4F4 (TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int RotationAngle { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CRotationAngleU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void OpenCvSharp.Unity/TextureConversionParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureConversionParams__ctor_m842FE4AA094D9DD25CD2A432181122959CD250E9 (TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9 * __this, const RuntimeMethod* method)
{
	{
		// public TextureConversionParams()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// FlipVertically = false;
		TextureConversionParams_set_FlipVertically_m95E199EBD5751D49ECCC0DD6FEAC0B92B82F5FD8_inline(__this, (bool)0, /*hidden argument*/NULL);
		// FlipHorizontally = false;
		TextureConversionParams_set_FlipHorizontally_mC060D84F4046C8E619DBB488E13541437533C50A_inline(__this, (bool)0, /*hidden argument*/NULL);
		// RotationAngle = 0;
		TextureConversionParams_set_RotationAngle_mD7F0EFFA986F5D5675F14242F60BCF911791F4F4_inline(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OpenCvSharp.Unity/TextureConversionParams::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureConversionParams__cctor_m48018B1FA711C4BBB48BE2FDD251A55C9F195D6A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly TextureConversionParams Default = new TextureConversionParams() { FlipVertically = false, FlipHorizontally = false, RotationAngle = 0 };
		TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9 * L_0 = (TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9 *)il2cpp_codegen_object_new(TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9_il2cpp_TypeInfo_var);
		TextureConversionParams__ctor_m842FE4AA094D9DD25CD2A432181122959CD250E9(L_0, /*hidden argument*/NULL);
		TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9 * L_1 = L_0;
		NullCheck(L_1);
		TextureConversionParams_set_FlipVertically_m95E199EBD5751D49ECCC0DD6FEAC0B92B82F5FD8_inline(L_1, (bool)0, /*hidden argument*/NULL);
		TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9 * L_2 = L_1;
		NullCheck(L_2);
		TextureConversionParams_set_FlipHorizontally_mC060D84F4046C8E619DBB488E13541437533C50A_inline(L_2, (bool)0, /*hidden argument*/NULL);
		TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9 * L_3 = L_2;
		NullCheck(L_3);
		TextureConversionParams_set_RotationAngle_mD7F0EFFA986F5D5675F14242F60BCF911791F4F4_inline(L_3, 0, /*hidden argument*/NULL);
		((TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9_StaticFields*)il2cpp_codegen_static_fields_for(TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9_il2cpp_TypeInfo_var))->set_Default_3(L_3);
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
// Conversion methods for marshalling of: OpenCvSharp.Win32Api/BITMAPINFO
IL2CPP_EXTERN_C void BITMAPINFO_t8F9957EDE342D483C740B4BC103F4E9C8404F570_marshal_pinvoke(const BITMAPINFO_t8F9957EDE342D483C740B4BC103F4E9C8404F570& unmarshaled, BITMAPINFO_t8F9957EDE342D483C740B4BC103F4E9C8404F570_marshaled_pinvoke& marshaled)
{
	marshaled.___Header_0 = unmarshaled.get_Header_0();
	if (unmarshaled.get_Colors_1() != NULL)
	{
		if (256 > (unmarshaled.get_Colors_1())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(256); i++)
		{
			(marshaled.___Colors_1)[i] = (unmarshaled.get_Colors_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
IL2CPP_EXTERN_C void BITMAPINFO_t8F9957EDE342D483C740B4BC103F4E9C8404F570_marshal_pinvoke_back(const BITMAPINFO_t8F9957EDE342D483C740B4BC103F4E9C8404F570_marshaled_pinvoke& marshaled, BITMAPINFO_t8F9957EDE342D483C740B4BC103F4E9C8404F570& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RGBQUADU5BU5D_t2342606E28EC9EA354F507217F8C24D796B29DE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BITMAPINFOHEADER_t6798D461C5D32B8B58597BD646D74DAF84754698  unmarshaled_Header_temp_0;
	memset((&unmarshaled_Header_temp_0), 0, sizeof(unmarshaled_Header_temp_0));
	unmarshaled_Header_temp_0 = marshaled.___Header_0;
	unmarshaled.set_Header_0(unmarshaled_Header_temp_0);
	unmarshaled.set_Colors_1(reinterpret_cast<RGBQUADU5BU5D_t2342606E28EC9EA354F507217F8C24D796B29DE5*>((RGBQUADU5BU5D_t2342606E28EC9EA354F507217F8C24D796B29DE5*)SZArrayNew(RGBQUADU5BU5D_t2342606E28EC9EA354F507217F8C24D796B29DE5_il2cpp_TypeInfo_var, 256)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(256); i++)
	{
		(unmarshaled.get_Colors_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___Colors_1)[i]);
	}
}
// Conversion method for clean up from marshalling of: OpenCvSharp.Win32Api/BITMAPINFO
IL2CPP_EXTERN_C void BITMAPINFO_t8F9957EDE342D483C740B4BC103F4E9C8404F570_marshal_pinvoke_cleanup(BITMAPINFO_t8F9957EDE342D483C740B4BC103F4E9C8404F570_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: OpenCvSharp.Win32Api/BITMAPINFO
IL2CPP_EXTERN_C void BITMAPINFO_t8F9957EDE342D483C740B4BC103F4E9C8404F570_marshal_com(const BITMAPINFO_t8F9957EDE342D483C740B4BC103F4E9C8404F570& unmarshaled, BITMAPINFO_t8F9957EDE342D483C740B4BC103F4E9C8404F570_marshaled_com& marshaled)
{
	marshaled.___Header_0 = unmarshaled.get_Header_0();
	if (unmarshaled.get_Colors_1() != NULL)
	{
		if (256 > (unmarshaled.get_Colors_1())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(256); i++)
		{
			(marshaled.___Colors_1)[i] = (unmarshaled.get_Colors_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
IL2CPP_EXTERN_C void BITMAPINFO_t8F9957EDE342D483C740B4BC103F4E9C8404F570_marshal_com_back(const BITMAPINFO_t8F9957EDE342D483C740B4BC103F4E9C8404F570_marshaled_com& marshaled, BITMAPINFO_t8F9957EDE342D483C740B4BC103F4E9C8404F570& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RGBQUADU5BU5D_t2342606E28EC9EA354F507217F8C24D796B29DE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BITMAPINFOHEADER_t6798D461C5D32B8B58597BD646D74DAF84754698  unmarshaled_Header_temp_0;
	memset((&unmarshaled_Header_temp_0), 0, sizeof(unmarshaled_Header_temp_0));
	unmarshaled_Header_temp_0 = marshaled.___Header_0;
	unmarshaled.set_Header_0(unmarshaled_Header_temp_0);
	unmarshaled.set_Colors_1(reinterpret_cast<RGBQUADU5BU5D_t2342606E28EC9EA354F507217F8C24D796B29DE5*>((RGBQUADU5BU5D_t2342606E28EC9EA354F507217F8C24D796B29DE5*)SZArrayNew(RGBQUADU5BU5D_t2342606E28EC9EA354F507217F8C24D796B29DE5_il2cpp_TypeInfo_var, 256)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(256); i++)
	{
		(unmarshaled.get_Colors_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___Colors_1)[i]);
	}
}
// Conversion method for clean up from marshalling of: OpenCvSharp.Win32Api/BITMAPINFO
IL2CPP_EXTERN_C void BITMAPINFO_t8F9957EDE342D483C740B4BC103F4E9C8404F570_marshal_com_cleanup(BITMAPINFO_t8F9957EDE342D483C740B4BC103F4E9C8404F570_marshaled_com& marshaled)
{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: OpenCvSharp.Win32Api/ICONINFO
IL2CPP_EXTERN_C void ICONINFO_tEBC9D2BD323ADC2125134B918B5E20B22CE8D61B_marshal_pinvoke(const ICONINFO_tEBC9D2BD323ADC2125134B918B5E20B22CE8D61B& unmarshaled, ICONINFO_tEBC9D2BD323ADC2125134B918B5E20B22CE8D61B_marshaled_pinvoke& marshaled)
{
	marshaled.___IsIcon_0 = static_cast<int32_t>(unmarshaled.get_IsIcon_0());
	marshaled.___HotSpotX_1 = unmarshaled.get_HotSpotX_1();
	marshaled.___HotSoptY_2 = unmarshaled.get_HotSoptY_2();
	marshaled.___MaskHbitmap_3 = unmarshaled.get_MaskHbitmap_3();
	marshaled.___ColorHbitmap_4 = unmarshaled.get_ColorHbitmap_4();
}
IL2CPP_EXTERN_C void ICONINFO_tEBC9D2BD323ADC2125134B918B5E20B22CE8D61B_marshal_pinvoke_back(const ICONINFO_tEBC9D2BD323ADC2125134B918B5E20B22CE8D61B_marshaled_pinvoke& marshaled, ICONINFO_tEBC9D2BD323ADC2125134B918B5E20B22CE8D61B& unmarshaled)
{
	bool unmarshaled_IsIcon_temp_0 = false;
	unmarshaled_IsIcon_temp_0 = static_cast<bool>(marshaled.___IsIcon_0);
	unmarshaled.set_IsIcon_0(unmarshaled_IsIcon_temp_0);
	int32_t unmarshaled_HotSpotX_temp_1 = 0;
	unmarshaled_HotSpotX_temp_1 = marshaled.___HotSpotX_1;
	unmarshaled.set_HotSpotX_1(unmarshaled_HotSpotX_temp_1);
	int32_t unmarshaled_HotSoptY_temp_2 = 0;
	unmarshaled_HotSoptY_temp_2 = marshaled.___HotSoptY_2;
	unmarshaled.set_HotSoptY_2(unmarshaled_HotSoptY_temp_2);
	intptr_t unmarshaled_MaskHbitmap_temp_3;
	memset((&unmarshaled_MaskHbitmap_temp_3), 0, sizeof(unmarshaled_MaskHbitmap_temp_3));
	unmarshaled_MaskHbitmap_temp_3 = marshaled.___MaskHbitmap_3;
	unmarshaled.set_MaskHbitmap_3(unmarshaled_MaskHbitmap_temp_3);
	intptr_t unmarshaled_ColorHbitmap_temp_4;
	memset((&unmarshaled_ColorHbitmap_temp_4), 0, sizeof(unmarshaled_ColorHbitmap_temp_4));
	unmarshaled_ColorHbitmap_temp_4 = marshaled.___ColorHbitmap_4;
	unmarshaled.set_ColorHbitmap_4(unmarshaled_ColorHbitmap_temp_4);
}
// Conversion method for clean up from marshalling of: OpenCvSharp.Win32Api/ICONINFO
IL2CPP_EXTERN_C void ICONINFO_tEBC9D2BD323ADC2125134B918B5E20B22CE8D61B_marshal_pinvoke_cleanup(ICONINFO_tEBC9D2BD323ADC2125134B918B5E20B22CE8D61B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: OpenCvSharp.Win32Api/ICONINFO
IL2CPP_EXTERN_C void ICONINFO_tEBC9D2BD323ADC2125134B918B5E20B22CE8D61B_marshal_com(const ICONINFO_tEBC9D2BD323ADC2125134B918B5E20B22CE8D61B& unmarshaled, ICONINFO_tEBC9D2BD323ADC2125134B918B5E20B22CE8D61B_marshaled_com& marshaled)
{
	marshaled.___IsIcon_0 = static_cast<int32_t>(unmarshaled.get_IsIcon_0());
	marshaled.___HotSpotX_1 = unmarshaled.get_HotSpotX_1();
	marshaled.___HotSoptY_2 = unmarshaled.get_HotSoptY_2();
	marshaled.___MaskHbitmap_3 = unmarshaled.get_MaskHbitmap_3();
	marshaled.___ColorHbitmap_4 = unmarshaled.get_ColorHbitmap_4();
}
IL2CPP_EXTERN_C void ICONINFO_tEBC9D2BD323ADC2125134B918B5E20B22CE8D61B_marshal_com_back(const ICONINFO_tEBC9D2BD323ADC2125134B918B5E20B22CE8D61B_marshaled_com& marshaled, ICONINFO_tEBC9D2BD323ADC2125134B918B5E20B22CE8D61B& unmarshaled)
{
	bool unmarshaled_IsIcon_temp_0 = false;
	unmarshaled_IsIcon_temp_0 = static_cast<bool>(marshaled.___IsIcon_0);
	unmarshaled.set_IsIcon_0(unmarshaled_IsIcon_temp_0);
	int32_t unmarshaled_HotSpotX_temp_1 = 0;
	unmarshaled_HotSpotX_temp_1 = marshaled.___HotSpotX_1;
	unmarshaled.set_HotSpotX_1(unmarshaled_HotSpotX_temp_1);
	int32_t unmarshaled_HotSoptY_temp_2 = 0;
	unmarshaled_HotSoptY_temp_2 = marshaled.___HotSoptY_2;
	unmarshaled.set_HotSoptY_2(unmarshaled_HotSoptY_temp_2);
	intptr_t unmarshaled_MaskHbitmap_temp_3;
	memset((&unmarshaled_MaskHbitmap_temp_3), 0, sizeof(unmarshaled_MaskHbitmap_temp_3));
	unmarshaled_MaskHbitmap_temp_3 = marshaled.___MaskHbitmap_3;
	unmarshaled.set_MaskHbitmap_3(unmarshaled_MaskHbitmap_temp_3);
	intptr_t unmarshaled_ColorHbitmap_temp_4;
	memset((&unmarshaled_ColorHbitmap_temp_4), 0, sizeof(unmarshaled_ColorHbitmap_temp_4));
	unmarshaled_ColorHbitmap_temp_4 = marshaled.___ColorHbitmap_4;
	unmarshaled.set_ColorHbitmap_4(unmarshaled_ColorHbitmap_temp_4);
}
// Conversion method for clean up from marshalling of: OpenCvSharp.Win32Api/ICONINFO
IL2CPP_EXTERN_C void ICONINFO_tEBC9D2BD323ADC2125134B918B5E20B22CE8D61B_marshal_com_cleanup(ICONINFO_tEBC9D2BD323ADC2125134B918B5E20B22CE8D61B_marshaled_com& marshaled)
{
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
// System.Void OpenCvSharp.Util.WindowsLibraryLoader/ProcessArchitectureInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessArchitectureInfo__ctor_mB5917BF01B3B25C840E5A5B3566A99F30E6C1800 (ProcessArchitectureInfo_t24E91B008BFA261064862083259BBDC43F974071 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ProcessArchitectureInfo()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Warnings = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		ProcessArchitectureInfo_set_Warnings_mCF3E5FB66C57E1B986F402D6AF7A8E818DAA628B_inline(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String OpenCvSharp.Util.WindowsLibraryLoader/ProcessArchitectureInfo::get_Architecture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProcessArchitectureInfo_get_Architecture_m1766AFF5D63EC2E3D7ECD3C6862A87B7A2F6B579 (ProcessArchitectureInfo_t24E91B008BFA261064862083259BBDC43F974071 * __this, const RuntimeMethod* method)
{
	{
		// public string Architecture { get; set; }
		String_t* L_0 = __this->get_U3CArchitectureU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void OpenCvSharp.Util.WindowsLibraryLoader/ProcessArchitectureInfo::set_Architecture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessArchitectureInfo_set_Architecture_mADDF5CC4D6145CE7B9BE75A60B768622518ABE5E (ProcessArchitectureInfo_t24E91B008BFA261064862083259BBDC43F974071 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Architecture { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CArchitectureU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.String> OpenCvSharp.Util.WindowsLibraryLoader/ProcessArchitectureInfo::get_Warnings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ProcessArchitectureInfo_get_Warnings_m033DDE34D54764FA18DC32FF3412971937875297 (ProcessArchitectureInfo_t24E91B008BFA261064862083259BBDC43F974071 * __this, const RuntimeMethod* method)
{
	{
		// private List<string> Warnings { get; set; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_U3CWarningsU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void OpenCvSharp.Util.WindowsLibraryLoader/ProcessArchitectureInfo::set_Warnings(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessArchitectureInfo_set_Warnings_mCF3E5FB66C57E1B986F402D6AF7A8E818DAA628B (ProcessArchitectureInfo_t24E91B008BFA261064862083259BBDC43F974071 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value0, const RuntimeMethod* method)
{
	{
		// private List<string> Warnings { get; set; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = ___value0;
		__this->set_U3CWarningsU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Boolean OpenCvSharp.Util.WindowsLibraryLoader/ProcessArchitectureInfo::get_HasWarnings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProcessArchitectureInfo_get_HasWarnings_mA2EFBD9FE2DF7ED644C555427D611BE84890B2C2 (ProcessArchitectureInfo_t24E91B008BFA261064862083259BBDC43F974071 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return Warnings.Count > 0; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0;
		L_0 = ProcessArchitectureInfo_get_Warnings_m033DDE34D54764FA18DC32FF3412971937875297_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_0, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void OpenCvSharp.Util.WindowsLibraryLoader/ProcessArchitectureInfo::AddWarning(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessArchitectureInfo_AddWarning_m89DBEA68998C107612B29B13AAB9F63F7ED96E62 (ProcessArchitectureInfo_t24E91B008BFA261064862083259BBDC43F974071 * __this, String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Warnings.Add(String.Format(format, args));
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0;
		L_0 = ProcessArchitectureInfo_get_Warnings_m033DDE34D54764FA18DC32FF3412971937875297_inline(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___format0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args1;
		String_t* L_3;
		L_3 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_0, L_3, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.String OpenCvSharp.Util.WindowsLibraryLoader/ProcessArchitectureInfo::WarningText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProcessArchitectureInfo_WarningText_m6EF18D056E821EED78339C9E2D770BF0F6F8AB74 (ProcessArchitectureInfo_t24E91B008BFA261064862083259BBDC43F974071 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return String.Join("\r\n", Warnings.ToArray());
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0;
		L_0 = ProcessArchitectureInfo_get_Warnings_m033DDE34D54764FA18DC32FF3412971937875297_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1;
		L_1 = List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB(L_0, /*hidden argument*/List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
		String_t* L_2;
		L_2 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, L_1, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NotifyDirty_t4E970B1EC52EBC768E4D83050E6F548B1D97FB69 (NotifyDirty_t4E970B1EC52EBC768E4D83050E6F548B1D97FB69 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void OpenCvSharp.Demo.PaperScanner/ScannerSettings/NotifyDirty::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyDirty__ctor_m2D14D8B57E4AE7E71F5878F88A5EF69FCD6312F2 (NotifyDirty_t4E970B1EC52EBC768E4D83050E6F548B1D97FB69 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void OpenCvSharp.Demo.PaperScanner/ScannerSettings/NotifyDirty::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyDirty_Invoke_m5E6ECAB43A3303A4BC7488690E98414191C3312B (NotifyDirty_t4E970B1EC52EBC768E4D83050E6F548B1D97FB69 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult OpenCvSharp.Demo.PaperScanner/ScannerSettings/NotifyDirty::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotifyDirty_BeginInvoke_m14610ACE2709868B087CFE0D3663ACFE0518AE05 (NotifyDirty_t4E970B1EC52EBC768E4D83050E6F548B1D97FB69 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void OpenCvSharp.Demo.PaperScanner/ScannerSettings/NotifyDirty::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyDirty_EndInvoke_m40E7E56E509D6A2203FC8F678D2917C8DCFCFC5B (NotifyDirty_t4E970B1EC52EBC768E4D83050E6F548B1D97FB69 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline (intptr_t* __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TextureConversionParams_set_FlipVertically_m95E199EBD5751D49ECCC0DD6FEAC0B92B82F5FD8_inline (TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool FlipVertically { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CFlipVerticallyU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TextureConversionParams_set_FlipHorizontally_mC060D84F4046C8E619DBB488E13541437533C50A_inline (TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool FlipHorizontally { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CFlipHorizontallyU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TextureConversionParams_set_RotationAngle_mD7F0EFFA986F5D5675F14242F60BCF911791F4F4_inline (TextureConversionParams_t52F7C5FE032C7043717AB53F45BC6F2823849CD9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int RotationAngle { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CRotationAngleU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessArchitectureInfo_set_Warnings_mCF3E5FB66C57E1B986F402D6AF7A8E818DAA628B_inline (ProcessArchitectureInfo_t24E91B008BFA261064862083259BBDC43F974071 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value0, const RuntimeMethod* method)
{
	{
		// private List<string> Warnings { get; set; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = ___value0;
		__this->set_U3CWarningsU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ProcessArchitectureInfo_get_Warnings_m033DDE34D54764FA18DC32FF3412971937875297_inline (ProcessArchitectureInfo_t24E91B008BFA261064862083259BBDC43F974071 * __this, const RuntimeMethod* method)
{
	{
		// private List<string> Warnings { get; set; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_U3CWarningsU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
