﻿#include "pch-cpp.hpp"

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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>
struct Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>
struct Dictionary_2_t3F631552EE10022FD5F4AE6E71CA4F6987BF6FE0;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RenderTextureFormat>
struct Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F;
// System.Collections.Generic.Dictionary`2<UnityEngine.Shader,UnityEngine.Rendering.PostProcessing.PropertySheet>
struct Dictionary_2_t6E12218122C04777CA56C86B876A63F91B409767;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Rendering.PostProcessing.PostProcessBundle>,UnityEngine.Rendering.PostProcessing.PostProcessBundle>
struct Func_2_tFBF0790C1CB9999EDB442A545293E9BABEBC7AB5;
// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>>
struct Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412;
// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
struct Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE;
// System.Func`2<System.Reflection.FieldInfo,System.Int32>
struct Func_2_tA71E659021C95E54328A443283A7154D558E9411;
// System.Func`2<System.Type,System.Boolean>
struct Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5;
// System.Func`3<UnityEngine.Camera,UnityEngine.Vector2,UnityEngine.Matrix4x4>
struct Func_3_tC8B822BF6F66E9A74EBD84D1208814C2EDBFDC96;
// System.Func`3<System.Object,UnityEngine.Vector2,UnityEngine.Matrix4x4>
struct Func_3_t82C0F72AA9FB99BB3F76E59A925410E989E22B34;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Boolean>
struct KeyCollection_t1A4234C2733AA679CBD9BA87755956535D81647E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.RenderTextureFormat>
struct KeyCollection_t60BFB76E8C3E21FCB548C80F4FD411521939A00B;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessBundle>
struct List_1_t38482F65BCF1BEF03685350BBB5B7E3D3CDF69A2;
// System.Collections.Generic.List`1<UnityEngine.RenderTexture>
struct List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32Enum>
struct ParameterOverride_1_t9743BB143BE9B03345E5365124680D2B48699974;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>
struct ParameterOverride_1_t4C9D3949FFB2BBF1449903DEE28A975867B49BFD;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.Spline>
struct ParameterOverride_1_t59B7B43BE6BA4482219D94175E4F900B7AD9BF9E;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Texture>
struct ParameterOverride_1_t728745CADEFE1DB4C2C14F6DD6EA53A447A763E4;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.Tonemapper>
struct ParameterOverride_1_t8588121E60167FEBD76D8CB9E60F62ED765B1CA2;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>
struct ParameterOverride_1_tA1EC3D90C3A54AC1167AD63F5340CDECED8BDC9F;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>
struct ParameterOverride_1_t2A72895E2C56AB0AFB2436C4C8523C5553ED32F3;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>
struct ParameterOverride_1_tDC434805B157596FAACBAB390CC666791BAC0B01;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.VignetteMode>
struct ParameterOverride_1_tBB825297D5F1093447C082888FB4560FBA8044E8;
// UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<System.Object>
struct PostProcessEffectRenderer_1_t6C11DDDFC60F401B58CDCCD46359E86BB3487DDF;
// UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<UnityEngine.Rendering.PostProcessing.Vignette>
struct PostProcessEffectRenderer_1_t9E77F2B389318EDAB4E13470F1D361199095A582;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<UnityEngine.Rendering.PostProcessing.PostProcessBundle>
struct Predicate_1_tBC55AA0C1F69FD07A5F71AE40FD34D7821C89C28;
// System.Predicate`1<UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings>
struct Predicate_1_t6B6288F545549FDFF05F1CC35BC9A11D0CD30034;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.PostProcessing.ParameterOverride>
struct ReadOnlyCollection_1_tB4110F279A79A84C732E919515BBB6EEC1128F83;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Boolean>
struct ValueCollection_tAC9371FC72C759652E224BBBE13669CD7F4FC7EC;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.RenderTextureFormat>
struct ValueCollection_t226473EEF7C4AFF429F882926A88F56C444EA83B;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Boolean>[]
struct EntryU5BU5D_t7732497AB9D637A1BADCC6C2B28E6F66569559D5;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.RenderTextureFormat>[]
struct EntryU5BU5D_t6F17F8994D0DDCD5742C654891BA6E4B3FE6873C;
// UnityEngine.RenderTexture[][]
struct RenderTextureU5BU5DU5BU5D_t3A4F4CB09299411BE3D4D6BD41F85F6E13838EAD;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Rendering.PostProcessing.PostProcessBundle[]
struct PostProcessBundleU5BU5D_t8E8FC87BD197A65C29247E5307A9FA03AC4ED46E;
// UnityEngine.Rendering.RenderTargetIdentifier[]
struct RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17;
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Rendering.PostProcessing.HableCurve/Segment[]
struct SegmentU5BU5D_t236C9C40EE0ECF87CD86C78C8F44914ED51A135B;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// System.Reflection.Assembly
struct Assembly_t;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// UnityEngine.Rendering.PostProcessing.AutoExposure
struct AutoExposure_t50F3CF93E72B3D056E624DA24AB91D1200BE1106;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Rendering.PostProcessing.BoolParameter
struct BoolParameter_t4EDC330A9E3F5830FCE384CE1FF707D3276EBF80;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Rendering.PostProcessing.ColorParameter
struct ColorParameter_t2C43807B2FABC978D5B12345759389816D9CA7C5;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427;
// UnityEngine.ComputeShader
struct ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.Rendering.PostProcessing.FloatParameter
struct FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0;
// UnityEngine.Rendering.PostProcessing.HableCurve
struct HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.Rendering.PostProcessing.LogHistogram
struct LogHistogram_t0334F220F776E617B16FFE83BB8B82BE37C65A4C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Rendering.PostProcessing.Monitor
struct Monitor_tEB1AC1F82D87F6BEE4839CF882097D5889302372;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671;
// UnityEngine.Rendering.PostProcessing.ParameterOverride
struct ParameterOverride_tED887E59B87A5DD3BFDAAAF745F82D9080FA4784;
// UnityEngine.Rendering.PostProcessing.PostProcessAttribute
struct PostProcessAttribute_tB0E64790042AFD9FC695619EA4186DF608E1EDF4;
// UnityEngine.Rendering.PostProcessing.PostProcessBundle
struct PostProcessBundle_tB61A95212353716F4AE3896A6DF3B19AE53FB791;
// UnityEngine.Rendering.PostProcessing.PostProcessDebugLayer
struct PostProcessDebugLayer_tE99A5534EB5127AE0E492B4EFA4C0B9438B45399;
// UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer
struct PostProcessEffectRenderer_tBF3AA4C1C071A7EF17FF7BFC5467DDAF991617DB;
// UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings
struct PostProcessEffectSettings_t2F43C0693DFF9BD09B921BB6278EC086A6F817F0;
// UnityEngine.Rendering.PostProcessing.PostProcessRenderContext
struct PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5;
// UnityEngine.Rendering.PostProcessing.PostProcessResources
struct PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC;
// UnityEngine.Rendering.PostProcessing.PropertySheet
struct PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7;
// UnityEngine.Rendering.PostProcessing.PropertySheetFactory
struct PropertySheetFactory_t2D2278105A154ED6036D5BE72D09359A5FB94835;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// UnityEngine.Rendering.PostProcessing.Spline
struct Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2;
// UnityEngine.Rendering.PostProcessing.SplineParameter
struct SplineParameter_t34BEB0723CDE19AAB7E784B20834CABC7B490339;
// System.String
struct String_t;
// UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing
struct SubpixelMorphologicalAntialiasing_t0CD7FE868E6C921A1B3D211694DE1C7CF4441330;
// UnityEngine.Rendering.PostProcessing.TargetPool
struct TargetPool_t903089FCEE606214C490876AB928DA25294034CC;
// UnityEngine.Rendering.PostProcessing.TemporalAntialiasing
struct TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Texture3D
struct Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8;
// UnityEngine.Rendering.PostProcessing.TextureLerper
struct TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616;
// UnityEngine.Rendering.PostProcessing.TextureParameter
struct TextureParameter_tC6A936F3D3C6DD5834DC7866D62E1BE3073BD8C2;
// UnityEngine.Rendering.PostProcessing.TonemapperParameter
struct TonemapperParameter_t135C78E99EB670872D17A05A7CBF0F4E3F8A222B;
// UnityEngine.Rendering.PostProcessing.TrackballAttribute
struct TrackballAttribute_t2195214A7FB5A05453A0C2661C29DE88B05333F0;
// System.Type
struct Type_t;
// UnityEngine.Rendering.PostProcessing.Vector2Parameter
struct Vector2Parameter_t0E1CE8C27130B36A75688B706DE0EACCE9DE41A3;
// UnityEngine.Rendering.PostProcessing.Vector3Parameter
struct Vector3Parameter_tCFF4B1C12CA0BED0A82E087C2AA66A175C987EFD;
// UnityEngine.Rendering.PostProcessing.Vector4Parameter
struct Vector4Parameter_t1AFAD06AB301389B859FAFA51D2C3C7E066E1627;
// UnityEngine.Rendering.PostProcessing.VectorscopeMonitor
struct VectorscopeMonitor_t5E5341810F7316F73442ADBEE0C5EBC1E282DE05;
// UnityEngine.Rendering.PostProcessing.Vignette
struct Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139;
// UnityEngine.Rendering.PostProcessing.VignetteModeParameter
struct VignetteModeParameter_tA57BF7F5798A90AE3DFE38CF80A85E931F3DD613;
// UnityEngine.Rendering.PostProcessing.VignetteRenderer
struct VignetteRenderer_t4EE592DF8A04229EB766765AA02964EFF4DD25EE;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Rendering.PostProcessing.WaveformMonitor
struct WaveformMonitor_tE009C975236895DCB24F45048BF99F2443B66FF5;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.Rendering.PostProcessing.HableCurve/Segment
struct Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0;
// UnityEngine.Rendering.PostProcessing.HableCurve/Uniforms
struct Uniforms_t7AF10CB01FA96FCB7FCF701200A7D087DEC63843;
// UnityEngine.Rendering.PostProcessing.PostProcessDebugLayer/OverlaySettings
struct OverlaySettings_t7071522FB1A8AF4C8F333D3F64057B4E773C3675;
// UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings/<>c
struct U3CU3Ec_t582D59DA00DB9923A86F7788D2FDFB1DBECDC721;
// UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c
struct U3CU3Ec_tDC45B2C4212767583DEE0B7E8F97CF301BD1703B;
// UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c__DisplayClass54_0
struct U3CU3Ec__DisplayClass54_0_tD5894FBEDBB478439A77C2222DE09C17DB1EF0E2;
// UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c__DisplayClass54_1
struct U3CU3Ec__DisplayClass54_1_t0503A8A3B84EDDC793BDAD1BB06397139580EE25;
// UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c__DisplayClass54_2
struct U3CU3Ec__DisplayClass54_2_t4FA51C9B0FB32D60372B20C7B4057723C9DA37AC;
// UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c__DisplayClass54_3
struct U3CU3Ec__DisplayClass54_3_t66E86CF03FBBE19459888FDF4BA21FD17DF0D10C;
// UnityEngine.Rendering.PostProcessing.PostProcessLayer/SerializedBundleRef
struct SerializedBundleRef_tAC358B9BEA3A4944F31770C12A3096C1EE07EADF;
// UnityEngine.Rendering.PostProcessing.PostProcessManager/<>c
struct U3CU3Ec_t681FA47134D0C4294D8B7D1E0A10BE22028B460E;
// UnityEngine.Rendering.PostProcessing.PostProcessProfile/<>c
struct U3CU3Ec_t9177938DD17D2938706D5EE5D16C0A887C4A5481;
// UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders
struct ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B;
// UnityEngine.Rendering.PostProcessing.PostProcessResources/SMAALuts
struct SMAALuts_t7B662D41B4C6B2CF97D9C5363B61AA14808C2932;
// UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders
struct Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2;
// UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<>c
struct U3CU3Ec_tE39BDF7A48F8422A0FF101B5F67BD03D1237B2F8;
// UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer/QualityPreset
struct QualityPreset_t17870FCA533EFE2A04B49C5B46F84ACFF139B971;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoolParameter_t4EDC330A9E3F5830FCE384CE1FF707D3276EBF80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorParameter_t2C43807B2FABC978D5B12345759389816D9CA7C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObsoleteAttributeU5BU5D_tAC73C504F00AEC879F622AFE547DD3A1ECCAEE38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tBC55AA0C1F69FD07A5F71AE40FD34D7821C89C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTextureU5BU5DU5BU5D_t3A4F4CB09299411BE3D4D6BD41F85F6E13838EAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureFormat_tBED5388A0445FE978F97B41D247275B036407932_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureParameter_tC6A936F3D3C6DD5834DC7866D62E1BE3073BD8C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass54_1_t0503A8A3B84EDDC793BDAD1BB06397139580EE25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t582D59DA00DB9923A86F7788D2FDFB1DBECDC721_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t681FA47134D0C4294D8B7D1E0A10BE22028B460E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9177938DD17D2938706D5EE5D16C0A887C4A5481_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tDC45B2C4212767583DEE0B7E8F97CF301BD1703B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE39BDF7A48F8422A0FF101B5F67BD03D1237B2F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Parameter_t0E1CE8C27130B36A75688B706DE0EACCE9DE41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VignetteModeParameter_tA57BF7F5798A90AE3DFE38CF80A85E931F3DD613_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0EE529A23CEA5E091FCABE6AF77280E1397DD04F;
IL2CPP_EXTERN_C String_t* _stringLiteral1CFF6C896ECBCE58E3E3C5BA9EDC69955D8F4E24;
IL2CPP_EXTERN_C String_t* _stringLiteral1E6383000E99B9F3488045B11084D1E4AD8A7A4C;
IL2CPP_EXTERN_C String_t* _stringLiteral3B388FFFC4B05A96EF5FD1B6F88AEEDDF119B105;
IL2CPP_EXTERN_C String_t* _stringLiteral3E63EA4D6F8144DD6406580EE9A7B6F874A529E4;
IL2CPP_EXTERN_C String_t* _stringLiteral4F889A7069FB348E59778EC4C275B6A09FE34752;
IL2CPP_EXTERN_C String_t* _stringLiteral53061051CFE4CD1AED5D34B00C2D795C27B3DA26;
IL2CPP_EXTERN_C String_t* _stringLiteral5C7EBE7FA922EC3E10AA3F6954A60AE63E3D97FD;
IL2CPP_EXTERN_C String_t* _stringLiteral5ED45B85ADA1AFA9C8962A3063BC0DB7FA04521E;
IL2CPP_EXTERN_C String_t* _stringLiteral6067E93B7ED6BC9634C2207045961FBB1126B92A;
IL2CPP_EXTERN_C String_t* _stringLiteral617218EA8015175B48682B062B85B2CD9DEFB5CF;
IL2CPP_EXTERN_C String_t* _stringLiteral65DA0CA6246AE2288BFBD3224C0B6589F82798AC;
IL2CPP_EXTERN_C String_t* _stringLiteral6EB7B88F545A38D1C86B524BB58BBA3994233C05;
IL2CPP_EXTERN_C String_t* _stringLiteral7445F99B8F21114A1A2E9E341A81E61AAD98112B;
IL2CPP_EXTERN_C String_t* _stringLiteral96AFB5CB3B476CE64056EF8716AEA14B385714ED;
IL2CPP_EXTERN_C String_t* _stringLiteral9AFCBA3793C5894F32DC3C08EB9F61BA28CE0C01;
IL2CPP_EXTERN_C String_t* _stringLiteral9C7F6CFACBA60E7454344DA7A7EB629EB0C4A8F2;
IL2CPP_EXTERN_C String_t* _stringLiteralAB0D9F5B9917E33FFA8D3428D1CEC5DA1F0F0C62;
IL2CPP_EXTERN_C String_t* _stringLiteralADD218EEEC60165FC319ED66CAD59FFB5160614D;
IL2CPP_EXTERN_C String_t* _stringLiteralD60FF819399DE4C3066A4707930AFF1DFC100903;
IL2CPP_EXTERN_C String_t* _stringLiteralD754031EB09A4061A82F00A1E77A9972C831A1FB;
IL2CPP_EXTERN_C String_t* _stringLiteralD8C7A356B73AA14E51E3C23F430521F42A4E8831;
IL2CPP_EXTERN_C String_t* _stringLiteralD982DD4496EE1EAEEDD5B4DA7B2EB057EEC66E1D;
IL2CPP_EXTERN_C String_t* _stringLiteralE3FB52A6A499BD50CACB93900D84D32D55B8CD1D;
IL2CPP_EXTERN_C String_t* _stringLiteralE75B2F2DCB45F8587B72E7BD107D9281449E36FA;
IL2CPP_EXTERN_C String_t* _stringLiteralF51190EEE90545F9CD168B86B0A73EF3C85E3A2C;
IL2CPP_EXTERN_C String_t* _stringLiteralF873D6748545B7516CD56A7A617453AEC82E7C8D;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_IsNotNull_TisAnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_m15CDE7D893B87D8F517EF98368DA7F56E8F5CE19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_IsNotNull_TisTexture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_mF786614AA0B9B1F07F1522C795443925B2ACDC5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mDA84BC4EB1A9B38BEFC73A8718A628B870CA9345_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mEC8BB5FB46FE71167C303BB248F7239832FC7B3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD0C4DB6C8EC7B1AB66783B91679A225842F9032B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mF0AE3867D21201B50EE816E55A8BAAADA8471324_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mDFB096115D9E26E5B5E5A4183F9E098CE8A14F74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m34DAD6AC8E8B11E77125890D86CF0D9AF99CAEE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m75D2D40791CA5307F5E15771C106A81BF029364A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m92E98DA7340C7A6A1EF4FFAC2A59FE3ADF9DC58D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3_Invoke_m961C5C528A5608E542F51F72E30EDBDB9165FC9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mD1876C0E1E116C36906D24EED25799C991F0187B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCB66852EF108F7810C149B035C969D0956FC0205_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m4B8C3E5C469683DF4A94C4054743B220F13BB4F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Exists_m833FA69BD3395CE6CF44C4776345752387488098_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7328294DBE16FF49F6D96893E2EAEA6C9F96E441_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m551A84AB57B24D7963D50A1EE3CD8BB9338CF539_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB38E72AF05051F5403306E56E602C5284D335714_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1137DAC9D2025FFC7D853298B59113ACAB858B24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2048DC2B083950A76C19CB8FCB54BC7BD13A8B6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParameterOverride_1_Interp_m214BFB261A31899C890C2ABC74213D6D67A8F1DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParameterOverride_1_Interp_m9789CCC726BAAF33FD8ABAFC88C97E8B7F1B5B70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParameterOverride_1_SetValue_mC3B1246E035741D4C531CD1945500D0922F90ED2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParameterOverride_1__ctor_m5806011A48A7796E82CA46EDF9236CB237F3FE04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParameterOverride_1__ctor_m7EC3EFB55B1303375DA1384F1D445061E08953FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParameterOverride_1__ctor_m8589096CBAE30DB288B207FE7A753E5443138437_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParameterOverride_1__ctor_m8677DD09A9CA61F329E1B257381A7C128B30EC8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParameterOverride_1__ctor_mA0A58A2C544574167825FA95B25FFDD290BD85D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParameterOverride_1__ctor_mC99912A74AB3FB44D567417D783F5E8EE7FAEC64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParameterOverride_1__ctor_mDF15F5A4C43E00F41BAD785C725A1DED7D76097A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParameterOverride_1_op_Implicit_m3421453A2FC1E622746189430AFEB71CA7F399AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PostProcessEffectRenderer_1__ctor_m669139999BE6229BB3B6937B2305D6CDD214281B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PostProcessEffectRenderer_1_get_settings_mC6D18F55EDC49EA96938682C01562885A7012771_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_m0CBDEC79CDAD9A63F4A5FD0424F11C665BA3E84A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureFormatUtilities_GetUncompressedRenderTextureFormat_mA9DD8DE489A31097C86EAB22E736EF837C243473_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass54_1_U3CUpdateBundleSortListU3Eb__3_m5079F5352A08BCFD0798E251F89B2E969B954B0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ParameterOverride_tED887E59B87A5DD3BFDAAAF745F82D9080FA4784_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PostProcessAttribute_tB0E64790042AFD9FC695619EA4186DF608E1EDF4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TextureFormat_tBED5388A0445FE978F97B41D247275B036407932_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct RenderTextureU5BU5DU5BU5D_t3A4F4CB09299411BE3D4D6BD41F85F6E13838EAD;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ObsoleteAttributeU5BU5D_tAC73C504F00AEC879F622AFE547DD3A1ECCAEE38;
struct RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17;
struct RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
struct SegmentU5BU5D_t236C9C40EE0ECF87CD86C78C8F44914ED51A135B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>
struct  Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t7732497AB9D637A1BADCC6C2B28E6F66569559D5* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t1A4234C2733AA679CBD9BA87755956535D81647E * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tAC9371FC72C759652E224BBBE13669CD7F4FC7EC * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1, ___entries_1)); }
	inline EntryU5BU5D_t7732497AB9D637A1BADCC6C2B28E6F66569559D5* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t7732497AB9D637A1BADCC6C2B28E6F66569559D5** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t7732497AB9D637A1BADCC6C2B28E6F66569559D5* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1, ___keys_7)); }
	inline KeyCollection_t1A4234C2733AA679CBD9BA87755956535D81647E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1A4234C2733AA679CBD9BA87755956535D81647E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1A4234C2733AA679CBD9BA87755956535D81647E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1, ___values_8)); }
	inline ValueCollection_tAC9371FC72C759652E224BBBE13669CD7F4FC7EC * get_values_8() const { return ___values_8; }
	inline ValueCollection_tAC9371FC72C759652E224BBBE13669CD7F4FC7EC ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tAC9371FC72C759652E224BBBE13669CD7F4FC7EC * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RenderTextureFormat>
struct  Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t6F17F8994D0DDCD5742C654891BA6E4B3FE6873C* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t60BFB76E8C3E21FCB548C80F4FD411521939A00B * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t226473EEF7C4AFF429F882926A88F56C444EA83B * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F, ___entries_1)); }
	inline EntryU5BU5D_t6F17F8994D0DDCD5742C654891BA6E4B3FE6873C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t6F17F8994D0DDCD5742C654891BA6E4B3FE6873C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t6F17F8994D0DDCD5742C654891BA6E4B3FE6873C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F, ___keys_7)); }
	inline KeyCollection_t60BFB76E8C3E21FCB548C80F4FD411521939A00B * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t60BFB76E8C3E21FCB548C80F4FD411521939A00B ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t60BFB76E8C3E21FCB548C80F4FD411521939A00B * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F, ___values_8)); }
	inline ValueCollection_t226473EEF7C4AFF429F882926A88F56C444EA83B * get_values_8() const { return ___values_8; }
	inline ValueCollection_t226473EEF7C4AFF429F882926A88F56C444EA83B ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t226473EEF7C4AFF429F882926A88F56C444EA83B * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
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


// System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessBundle>
struct  List_1_t38482F65BCF1BEF03685350BBB5B7E3D3CDF69A2  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PostProcessBundleU5BU5D_t8E8FC87BD197A65C29247E5307A9FA03AC4ED46E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t38482F65BCF1BEF03685350BBB5B7E3D3CDF69A2, ____items_1)); }
	inline PostProcessBundleU5BU5D_t8E8FC87BD197A65C29247E5307A9FA03AC4ED46E* get__items_1() const { return ____items_1; }
	inline PostProcessBundleU5BU5D_t8E8FC87BD197A65C29247E5307A9FA03AC4ED46E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PostProcessBundleU5BU5D_t8E8FC87BD197A65C29247E5307A9FA03AC4ED46E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t38482F65BCF1BEF03685350BBB5B7E3D3CDF69A2, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t38482F65BCF1BEF03685350BBB5B7E3D3CDF69A2, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t38482F65BCF1BEF03685350BBB5B7E3D3CDF69A2, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t38482F65BCF1BEF03685350BBB5B7E3D3CDF69A2_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PostProcessBundleU5BU5D_t8E8FC87BD197A65C29247E5307A9FA03AC4ED46E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t38482F65BCF1BEF03685350BBB5B7E3D3CDF69A2_StaticFields, ____emptyArray_5)); }
	inline PostProcessBundleU5BU5D_t8E8FC87BD197A65C29247E5307A9FA03AC4ED46E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PostProcessBundleU5BU5D_t8E8FC87BD197A65C29247E5307A9FA03AC4ED46E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PostProcessBundleU5BU5D_t8E8FC87BD197A65C29247E5307A9FA03AC4ED46E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.RenderTexture>
struct  List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE, ____items_1)); }
	inline RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* get__items_1() const { return ____items_1; }
	inline RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE_StaticFields, ____emptyArray_5)); }
	inline RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Rendering.PostProcessing.HableCurve
struct  HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9  : public RuntimeObject
{
public:
	// System.Single UnityEngine.Rendering.PostProcessing.HableCurve::<whitePoint>k__BackingField
	float ___U3CwhitePointU3Ek__BackingField_0;
	// System.Single UnityEngine.Rendering.PostProcessing.HableCurve::<inverseWhitePoint>k__BackingField
	float ___U3CinverseWhitePointU3Ek__BackingField_1;
	// System.Single UnityEngine.Rendering.PostProcessing.HableCurve::<x0>k__BackingField
	float ___U3Cx0U3Ek__BackingField_2;
	// System.Single UnityEngine.Rendering.PostProcessing.HableCurve::<x1>k__BackingField
	float ___U3Cx1U3Ek__BackingField_3;
	// UnityEngine.Rendering.PostProcessing.HableCurve/Segment[] UnityEngine.Rendering.PostProcessing.HableCurve::m_Segments
	SegmentU5BU5D_t236C9C40EE0ECF87CD86C78C8F44914ED51A135B* ___m_Segments_4;
	// UnityEngine.Rendering.PostProcessing.HableCurve/Uniforms UnityEngine.Rendering.PostProcessing.HableCurve::uniforms
	Uniforms_t7AF10CB01FA96FCB7FCF701200A7D087DEC63843 * ___uniforms_5;

public:
	inline static int32_t get_offset_of_U3CwhitePointU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9, ___U3CwhitePointU3Ek__BackingField_0)); }
	inline float get_U3CwhitePointU3Ek__BackingField_0() const { return ___U3CwhitePointU3Ek__BackingField_0; }
	inline float* get_address_of_U3CwhitePointU3Ek__BackingField_0() { return &___U3CwhitePointU3Ek__BackingField_0; }
	inline void set_U3CwhitePointU3Ek__BackingField_0(float value)
	{
		___U3CwhitePointU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CinverseWhitePointU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9, ___U3CinverseWhitePointU3Ek__BackingField_1)); }
	inline float get_U3CinverseWhitePointU3Ek__BackingField_1() const { return ___U3CinverseWhitePointU3Ek__BackingField_1; }
	inline float* get_address_of_U3CinverseWhitePointU3Ek__BackingField_1() { return &___U3CinverseWhitePointU3Ek__BackingField_1; }
	inline void set_U3CinverseWhitePointU3Ek__BackingField_1(float value)
	{
		___U3CinverseWhitePointU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3Cx0U3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9, ___U3Cx0U3Ek__BackingField_2)); }
	inline float get_U3Cx0U3Ek__BackingField_2() const { return ___U3Cx0U3Ek__BackingField_2; }
	inline float* get_address_of_U3Cx0U3Ek__BackingField_2() { return &___U3Cx0U3Ek__BackingField_2; }
	inline void set_U3Cx0U3Ek__BackingField_2(float value)
	{
		___U3Cx0U3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3Cx1U3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9, ___U3Cx1U3Ek__BackingField_3)); }
	inline float get_U3Cx1U3Ek__BackingField_3() const { return ___U3Cx1U3Ek__BackingField_3; }
	inline float* get_address_of_U3Cx1U3Ek__BackingField_3() { return &___U3Cx1U3Ek__BackingField_3; }
	inline void set_U3Cx1U3Ek__BackingField_3(float value)
	{
		___U3Cx1U3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_m_Segments_4() { return static_cast<int32_t>(offsetof(HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9, ___m_Segments_4)); }
	inline SegmentU5BU5D_t236C9C40EE0ECF87CD86C78C8F44914ED51A135B* get_m_Segments_4() const { return ___m_Segments_4; }
	inline SegmentU5BU5D_t236C9C40EE0ECF87CD86C78C8F44914ED51A135B** get_address_of_m_Segments_4() { return &___m_Segments_4; }
	inline void set_m_Segments_4(SegmentU5BU5D_t236C9C40EE0ECF87CD86C78C8F44914ED51A135B* value)
	{
		___m_Segments_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Segments_4), (void*)value);
	}

	inline static int32_t get_offset_of_uniforms_5() { return static_cast<int32_t>(offsetof(HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9, ___uniforms_5)); }
	inline Uniforms_t7AF10CB01FA96FCB7FCF701200A7D087DEC63843 * get_uniforms_5() const { return ___uniforms_5; }
	inline Uniforms_t7AF10CB01FA96FCB7FCF701200A7D087DEC63843 ** get_address_of_uniforms_5() { return &___uniforms_5; }
	inline void set_uniforms_5(Uniforms_t7AF10CB01FA96FCB7FCF701200A7D087DEC63843 * value)
	{
		___uniforms_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uniforms_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Rendering.PostProcessing.Monitor
struct  Monitor_tEB1AC1F82D87F6BEE4839CF882097D5889302372  : public RuntimeObject
{
public:
	// UnityEngine.RenderTexture UnityEngine.Rendering.PostProcessing.Monitor::<output>k__BackingField
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___U3CoutputU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Rendering.PostProcessing.Monitor::requested
	bool ___requested_1;

public:
	inline static int32_t get_offset_of_U3CoutputU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Monitor_tEB1AC1F82D87F6BEE4839CF882097D5889302372, ___U3CoutputU3Ek__BackingField_0)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_U3CoutputU3Ek__BackingField_0() const { return ___U3CoutputU3Ek__BackingField_0; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_U3CoutputU3Ek__BackingField_0() { return &___U3CoutputU3Ek__BackingField_0; }
	inline void set_U3CoutputU3Ek__BackingField_0(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___U3CoutputU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoutputU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_requested_1() { return static_cast<int32_t>(offsetof(Monitor_tEB1AC1F82D87F6BEE4839CF882097D5889302372, ___requested_1)); }
	inline bool get_requested_1() const { return ___requested_1; }
	inline bool* get_address_of_requested_1() { return &___requested_1; }
	inline void set_requested_1(bool value)
	{
		___requested_1 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.ParameterOverride
struct  ParameterOverride_tED887E59B87A5DD3BFDAAAF745F82D9080FA4784  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Rendering.PostProcessing.ParameterOverride::overrideState
	bool ___overrideState_0;

public:
	inline static int32_t get_offset_of_overrideState_0() { return static_cast<int32_t>(offsetof(ParameterOverride_tED887E59B87A5DD3BFDAAAF745F82D9080FA4784, ___overrideState_0)); }
	inline bool get_overrideState_0() const { return ___overrideState_0; }
	inline bool* get_address_of_overrideState_0() { return &___overrideState_0; }
	inline void set_overrideState_0(bool value)
	{
		___overrideState_0 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.PostProcessBundle
struct  PostProcessBundle_tB61A95212353716F4AE3896A6DF3B19AE53FB791  : public RuntimeObject
{
public:
	// UnityEngine.Rendering.PostProcessing.PostProcessAttribute UnityEngine.Rendering.PostProcessing.PostProcessBundle::<attribute>k__BackingField
	PostProcessAttribute_tB0E64790042AFD9FC695619EA4186DF608E1EDF4 * ___U3CattributeU3Ek__BackingField_0;
	// UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings UnityEngine.Rendering.PostProcessing.PostProcessBundle::<settings>k__BackingField
	PostProcessEffectSettings_t2F43C0693DFF9BD09B921BB6278EC086A6F817F0 * ___U3CsettingsU3Ek__BackingField_1;
	// UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer UnityEngine.Rendering.PostProcessing.PostProcessBundle::m_Renderer
	PostProcessEffectRenderer_tBF3AA4C1C071A7EF17FF7BFC5467DDAF991617DB * ___m_Renderer_2;

public:
	inline static int32_t get_offset_of_U3CattributeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PostProcessBundle_tB61A95212353716F4AE3896A6DF3B19AE53FB791, ___U3CattributeU3Ek__BackingField_0)); }
	inline PostProcessAttribute_tB0E64790042AFD9FC695619EA4186DF608E1EDF4 * get_U3CattributeU3Ek__BackingField_0() const { return ___U3CattributeU3Ek__BackingField_0; }
	inline PostProcessAttribute_tB0E64790042AFD9FC695619EA4186DF608E1EDF4 ** get_address_of_U3CattributeU3Ek__BackingField_0() { return &___U3CattributeU3Ek__BackingField_0; }
	inline void set_U3CattributeU3Ek__BackingField_0(PostProcessAttribute_tB0E64790042AFD9FC695619EA4186DF608E1EDF4 * value)
	{
		___U3CattributeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CattributeU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsettingsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessBundle_tB61A95212353716F4AE3896A6DF3B19AE53FB791, ___U3CsettingsU3Ek__BackingField_1)); }
	inline PostProcessEffectSettings_t2F43C0693DFF9BD09B921BB6278EC086A6F817F0 * get_U3CsettingsU3Ek__BackingField_1() const { return ___U3CsettingsU3Ek__BackingField_1; }
	inline PostProcessEffectSettings_t2F43C0693DFF9BD09B921BB6278EC086A6F817F0 ** get_address_of_U3CsettingsU3Ek__BackingField_1() { return &___U3CsettingsU3Ek__BackingField_1; }
	inline void set_U3CsettingsU3Ek__BackingField_1(PostProcessEffectSettings_t2F43C0693DFF9BD09B921BB6278EC086A6F817F0 * value)
	{
		___U3CsettingsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsettingsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Renderer_2() { return static_cast<int32_t>(offsetof(PostProcessBundle_tB61A95212353716F4AE3896A6DF3B19AE53FB791, ___m_Renderer_2)); }
	inline PostProcessEffectRenderer_tBF3AA4C1C071A7EF17FF7BFC5467DDAF991617DB * get_m_Renderer_2() const { return ___m_Renderer_2; }
	inline PostProcessEffectRenderer_tBF3AA4C1C071A7EF17FF7BFC5467DDAF991617DB ** get_address_of_m_Renderer_2() { return &___m_Renderer_2; }
	inline void set_m_Renderer_2(PostProcessEffectRenderer_tBF3AA4C1C071A7EF17FF7BFC5467DDAF991617DB * value)
	{
		___m_Renderer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Renderer_2), (void*)value);
	}
};


// UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer
struct  PostProcessEffectRenderer_tBF3AA4C1C071A7EF17FF7BFC5467DDAF991617DB  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer::m_ResetHistory
	bool ___m_ResetHistory_0;

public:
	inline static int32_t get_offset_of_m_ResetHistory_0() { return static_cast<int32_t>(offsetof(PostProcessEffectRenderer_tBF3AA4C1C071A7EF17FF7BFC5467DDAF991617DB, ___m_ResetHistory_0)); }
	inline bool get_m_ResetHistory_0() const { return ___m_ResetHistory_0; }
	inline bool* get_address_of_m_ResetHistory_0() { return &___m_ResetHistory_0; }
	inline void set_m_ResetHistory_0(bool value)
	{
		___m_ResetHistory_0 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.PropertySheet
struct  PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7  : public RuntimeObject
{
public:
	// UnityEngine.MaterialPropertyBlock UnityEngine.Rendering.PostProcessing.PropertySheet::<properties>k__BackingField
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___U3CpropertiesU3Ek__BackingField_0;
	// UnityEngine.Material UnityEngine.Rendering.PostProcessing.PropertySheet::<material>k__BackingField
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3CmaterialU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CpropertiesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7, ___U3CpropertiesU3Ek__BackingField_0)); }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * get_U3CpropertiesU3Ek__BackingField_0() const { return ___U3CpropertiesU3Ek__BackingField_0; }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 ** get_address_of_U3CpropertiesU3Ek__BackingField_0() { return &___U3CpropertiesU3Ek__BackingField_0; }
	inline void set_U3CpropertiesU3Ek__BackingField_0(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * value)
	{
		___U3CpropertiesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpropertiesU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmaterialU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7, ___U3CmaterialU3Ek__BackingField_1)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3CmaterialU3Ek__BackingField_1() const { return ___U3CmaterialU3Ek__BackingField_1; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3CmaterialU3Ek__BackingField_1() { return &___U3CmaterialU3Ek__BackingField_1; }
	inline void set_U3CmaterialU3Ek__BackingField_1(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3CmaterialU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmaterialU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.Rendering.PostProcessing.PropertySheetFactory
struct  PropertySheetFactory_t2D2278105A154ED6036D5BE72D09359A5FB94835  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.Shader,UnityEngine.Rendering.PostProcessing.PropertySheet> UnityEngine.Rendering.PostProcessing.PropertySheetFactory::m_Sheets
	Dictionary_2_t6E12218122C04777CA56C86B876A63F91B409767 * ___m_Sheets_0;

public:
	inline static int32_t get_offset_of_m_Sheets_0() { return static_cast<int32_t>(offsetof(PropertySheetFactory_t2D2278105A154ED6036D5BE72D09359A5FB94835, ___m_Sheets_0)); }
	inline Dictionary_2_t6E12218122C04777CA56C86B876A63F91B409767 * get_m_Sheets_0() const { return ___m_Sheets_0; }
	inline Dictionary_2_t6E12218122C04777CA56C86B876A63F91B409767 ** get_address_of_m_Sheets_0() { return &___m_Sheets_0; }
	inline void set_m_Sheets_0(Dictionary_2_t6E12218122C04777CA56C86B876A63F91B409767 * value)
	{
		___m_Sheets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sheets_0), (void*)value);
	}
};


// UnityEngine.Rendering.PostProcessing.ShaderIDs
struct  ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155  : public RuntimeObject
{
public:

public:
};

struct ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::MainTex
	int32_t ___MainTex_0;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Jitter
	int32_t ___Jitter_1;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Sharpness
	int32_t ___Sharpness_2;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::FinalBlendParameters
	int32_t ___FinalBlendParameters_3;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::HistoryTex
	int32_t ___HistoryTex_4;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::SMAA_Flip
	int32_t ___SMAA_Flip_5;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::SMAA_Flop
	int32_t ___SMAA_Flop_6;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::AOParams
	int32_t ___AOParams_7;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::AOColor
	int32_t ___AOColor_8;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::OcclusionTexture1
	int32_t ___OcclusionTexture1_9;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::OcclusionTexture2
	int32_t ___OcclusionTexture2_10;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::SAOcclusionTexture
	int32_t ___SAOcclusionTexture_11;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::MSVOcclusionTexture
	int32_t ___MSVOcclusionTexture_12;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::DepthCopy
	int32_t ___DepthCopy_13;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::LinearDepth
	int32_t ___LinearDepth_14;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::LowDepth1
	int32_t ___LowDepth1_15;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::LowDepth2
	int32_t ___LowDepth2_16;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::LowDepth3
	int32_t ___LowDepth3_17;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::LowDepth4
	int32_t ___LowDepth4_18;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::TiledDepth1
	int32_t ___TiledDepth1_19;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::TiledDepth2
	int32_t ___TiledDepth2_20;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::TiledDepth3
	int32_t ___TiledDepth3_21;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::TiledDepth4
	int32_t ___TiledDepth4_22;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Occlusion1
	int32_t ___Occlusion1_23;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Occlusion2
	int32_t ___Occlusion2_24;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Occlusion3
	int32_t ___Occlusion3_25;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Occlusion4
	int32_t ___Occlusion4_26;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Combined1
	int32_t ___Combined1_27;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Combined2
	int32_t ___Combined2_28;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Combined3
	int32_t ___Combined3_29;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::SSRResolveTemp
	int32_t ___SSRResolveTemp_30;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Noise
	int32_t ___Noise_31;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Test
	int32_t ___Test_32;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Resolve
	int32_t ___Resolve_33;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::History
	int32_t ___History_34;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ViewMatrix
	int32_t ___ViewMatrix_35;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::InverseViewMatrix
	int32_t ___InverseViewMatrix_36;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::InverseProjectionMatrix
	int32_t ___InverseProjectionMatrix_37;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ScreenSpaceProjectionMatrix
	int32_t ___ScreenSpaceProjectionMatrix_38;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Params2
	int32_t ___Params2_39;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::FogColor
	int32_t ___FogColor_40;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::FogParams
	int32_t ___FogParams_41;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::VelocityScale
	int32_t ___VelocityScale_42;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::MaxBlurRadius
	int32_t ___MaxBlurRadius_43;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::RcpMaxBlurRadius
	int32_t ___RcpMaxBlurRadius_44;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::VelocityTex
	int32_t ___VelocityTex_45;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Tile2RT
	int32_t ___Tile2RT_46;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Tile4RT
	int32_t ___Tile4RT_47;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Tile8RT
	int32_t ___Tile8RT_48;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::TileMaxOffs
	int32_t ___TileMaxOffs_49;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::TileMaxLoop
	int32_t ___TileMaxLoop_50;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::TileVRT
	int32_t ___TileVRT_51;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::NeighborMaxTex
	int32_t ___NeighborMaxTex_52;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::LoopCount
	int32_t ___LoopCount_53;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::DepthOfFieldTemp
	int32_t ___DepthOfFieldTemp_54;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::DepthOfFieldTex
	int32_t ___DepthOfFieldTex_55;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Distance
	int32_t ___Distance_56;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::LensCoeff
	int32_t ___LensCoeff_57;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::MaxCoC
	int32_t ___MaxCoC_58;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::RcpMaxCoC
	int32_t ___RcpMaxCoC_59;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::RcpAspect
	int32_t ___RcpAspect_60;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::CoCTex
	int32_t ___CoCTex_61;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::TaaParams
	int32_t ___TaaParams_62;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::AutoExposureTex
	int32_t ___AutoExposureTex_63;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::HistogramBuffer
	int32_t ___HistogramBuffer_64;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Params
	int32_t ___Params_65;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ScaleOffsetRes
	int32_t ___ScaleOffsetRes_66;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::BloomTex
	int32_t ___BloomTex_67;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::SampleScale
	int32_t ___SampleScale_68;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Threshold
	int32_t ___Threshold_69;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ColorIntensity
	int32_t ___ColorIntensity_70;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Bloom_DirtTex
	int32_t ___Bloom_DirtTex_71;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Bloom_Settings
	int32_t ___Bloom_Settings_72;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Bloom_Color
	int32_t ___Bloom_Color_73;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Bloom_DirtTileOffset
	int32_t ___Bloom_DirtTileOffset_74;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ChromaticAberration_Amount
	int32_t ___ChromaticAberration_Amount_75;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ChromaticAberration_SpectralLut
	int32_t ___ChromaticAberration_SpectralLut_76;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Distortion_CenterScale
	int32_t ___Distortion_CenterScale_77;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Distortion_Amount
	int32_t ___Distortion_Amount_78;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Lut2D
	int32_t ___Lut2D_79;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Lut3D
	int32_t ___Lut3D_80;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Lut3D_Params
	int32_t ___Lut3D_Params_81;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Lut2D_Params
	int32_t ___Lut2D_Params_82;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::UserLut2D_Params
	int32_t ___UserLut2D_Params_83;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::PostExposure
	int32_t ___PostExposure_84;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ColorBalance
	int32_t ___ColorBalance_85;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ColorFilter
	int32_t ___ColorFilter_86;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::HueSatCon
	int32_t ___HueSatCon_87;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Brightness
	int32_t ___Brightness_88;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ChannelMixerRed
	int32_t ___ChannelMixerRed_89;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ChannelMixerGreen
	int32_t ___ChannelMixerGreen_90;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ChannelMixerBlue
	int32_t ___ChannelMixerBlue_91;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Lift
	int32_t ___Lift_92;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::InvGamma
	int32_t ___InvGamma_93;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Gain
	int32_t ___Gain_94;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Curves
	int32_t ___Curves_95;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::CustomToneCurve
	int32_t ___CustomToneCurve_96;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ToeSegmentA
	int32_t ___ToeSegmentA_97;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ToeSegmentB
	int32_t ___ToeSegmentB_98;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::MidSegmentA
	int32_t ___MidSegmentA_99;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::MidSegmentB
	int32_t ___MidSegmentB_100;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ShoSegmentA
	int32_t ___ShoSegmentA_101;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ShoSegmentB
	int32_t ___ShoSegmentB_102;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Vignette_Color
	int32_t ___Vignette_Color_103;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Vignette_Center
	int32_t ___Vignette_Center_104;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Vignette_Settings
	int32_t ___Vignette_Settings_105;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Vignette_Mask
	int32_t ___Vignette_Mask_106;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Vignette_Opacity
	int32_t ___Vignette_Opacity_107;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Vignette_Mode
	int32_t ___Vignette_Mode_108;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Grain_Params1
	int32_t ___Grain_Params1_109;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Grain_Params2
	int32_t ___Grain_Params2_110;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::GrainTex
	int32_t ___GrainTex_111;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Phase
	int32_t ___Phase_112;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::GrainNoiseParameters
	int32_t ___GrainNoiseParameters_113;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::LumaInAlpha
	int32_t ___LumaInAlpha_114;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::DitheringTex
	int32_t ___DitheringTex_115;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Dithering_Coords
	int32_t ___Dithering_Coords_116;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::From
	int32_t ___From_117;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::To
	int32_t ___To_118;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Interp
	int32_t ___Interp_119;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::TargetColor
	int32_t ___TargetColor_120;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::HalfResFinalCopy
	int32_t ___HalfResFinalCopy_121;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::WaveformSource
	int32_t ___WaveformSource_122;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::WaveformBuffer
	int32_t ___WaveformBuffer_123;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::VectorscopeBuffer
	int32_t ___VectorscopeBuffer_124;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::RenderViewportScaleFactor
	int32_t ___RenderViewportScaleFactor_125;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::UVTransform
	int32_t ___UVTransform_126;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::DepthSlice
	int32_t ___DepthSlice_127;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::UVScaleOffset
	int32_t ___UVScaleOffset_128;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::PosScaleOffset
	int32_t ___PosScaleOffset_129;

public:
	inline static int32_t get_offset_of_MainTex_0() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___MainTex_0)); }
	inline int32_t get_MainTex_0() const { return ___MainTex_0; }
	inline int32_t* get_address_of_MainTex_0() { return &___MainTex_0; }
	inline void set_MainTex_0(int32_t value)
	{
		___MainTex_0 = value;
	}

	inline static int32_t get_offset_of_Jitter_1() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Jitter_1)); }
	inline int32_t get_Jitter_1() const { return ___Jitter_1; }
	inline int32_t* get_address_of_Jitter_1() { return &___Jitter_1; }
	inline void set_Jitter_1(int32_t value)
	{
		___Jitter_1 = value;
	}

	inline static int32_t get_offset_of_Sharpness_2() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Sharpness_2)); }
	inline int32_t get_Sharpness_2() const { return ___Sharpness_2; }
	inline int32_t* get_address_of_Sharpness_2() { return &___Sharpness_2; }
	inline void set_Sharpness_2(int32_t value)
	{
		___Sharpness_2 = value;
	}

	inline static int32_t get_offset_of_FinalBlendParameters_3() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___FinalBlendParameters_3)); }
	inline int32_t get_FinalBlendParameters_3() const { return ___FinalBlendParameters_3; }
	inline int32_t* get_address_of_FinalBlendParameters_3() { return &___FinalBlendParameters_3; }
	inline void set_FinalBlendParameters_3(int32_t value)
	{
		___FinalBlendParameters_3 = value;
	}

	inline static int32_t get_offset_of_HistoryTex_4() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___HistoryTex_4)); }
	inline int32_t get_HistoryTex_4() const { return ___HistoryTex_4; }
	inline int32_t* get_address_of_HistoryTex_4() { return &___HistoryTex_4; }
	inline void set_HistoryTex_4(int32_t value)
	{
		___HistoryTex_4 = value;
	}

	inline static int32_t get_offset_of_SMAA_Flip_5() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___SMAA_Flip_5)); }
	inline int32_t get_SMAA_Flip_5() const { return ___SMAA_Flip_5; }
	inline int32_t* get_address_of_SMAA_Flip_5() { return &___SMAA_Flip_5; }
	inline void set_SMAA_Flip_5(int32_t value)
	{
		___SMAA_Flip_5 = value;
	}

	inline static int32_t get_offset_of_SMAA_Flop_6() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___SMAA_Flop_6)); }
	inline int32_t get_SMAA_Flop_6() const { return ___SMAA_Flop_6; }
	inline int32_t* get_address_of_SMAA_Flop_6() { return &___SMAA_Flop_6; }
	inline void set_SMAA_Flop_6(int32_t value)
	{
		___SMAA_Flop_6 = value;
	}

	inline static int32_t get_offset_of_AOParams_7() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___AOParams_7)); }
	inline int32_t get_AOParams_7() const { return ___AOParams_7; }
	inline int32_t* get_address_of_AOParams_7() { return &___AOParams_7; }
	inline void set_AOParams_7(int32_t value)
	{
		___AOParams_7 = value;
	}

	inline static int32_t get_offset_of_AOColor_8() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___AOColor_8)); }
	inline int32_t get_AOColor_8() const { return ___AOColor_8; }
	inline int32_t* get_address_of_AOColor_8() { return &___AOColor_8; }
	inline void set_AOColor_8(int32_t value)
	{
		___AOColor_8 = value;
	}

	inline static int32_t get_offset_of_OcclusionTexture1_9() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___OcclusionTexture1_9)); }
	inline int32_t get_OcclusionTexture1_9() const { return ___OcclusionTexture1_9; }
	inline int32_t* get_address_of_OcclusionTexture1_9() { return &___OcclusionTexture1_9; }
	inline void set_OcclusionTexture1_9(int32_t value)
	{
		___OcclusionTexture1_9 = value;
	}

	inline static int32_t get_offset_of_OcclusionTexture2_10() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___OcclusionTexture2_10)); }
	inline int32_t get_OcclusionTexture2_10() const { return ___OcclusionTexture2_10; }
	inline int32_t* get_address_of_OcclusionTexture2_10() { return &___OcclusionTexture2_10; }
	inline void set_OcclusionTexture2_10(int32_t value)
	{
		___OcclusionTexture2_10 = value;
	}

	inline static int32_t get_offset_of_SAOcclusionTexture_11() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___SAOcclusionTexture_11)); }
	inline int32_t get_SAOcclusionTexture_11() const { return ___SAOcclusionTexture_11; }
	inline int32_t* get_address_of_SAOcclusionTexture_11() { return &___SAOcclusionTexture_11; }
	inline void set_SAOcclusionTexture_11(int32_t value)
	{
		___SAOcclusionTexture_11 = value;
	}

	inline static int32_t get_offset_of_MSVOcclusionTexture_12() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___MSVOcclusionTexture_12)); }
	inline int32_t get_MSVOcclusionTexture_12() const { return ___MSVOcclusionTexture_12; }
	inline int32_t* get_address_of_MSVOcclusionTexture_12() { return &___MSVOcclusionTexture_12; }
	inline void set_MSVOcclusionTexture_12(int32_t value)
	{
		___MSVOcclusionTexture_12 = value;
	}

	inline static int32_t get_offset_of_DepthCopy_13() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___DepthCopy_13)); }
	inline int32_t get_DepthCopy_13() const { return ___DepthCopy_13; }
	inline int32_t* get_address_of_DepthCopy_13() { return &___DepthCopy_13; }
	inline void set_DepthCopy_13(int32_t value)
	{
		___DepthCopy_13 = value;
	}

	inline static int32_t get_offset_of_LinearDepth_14() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___LinearDepth_14)); }
	inline int32_t get_LinearDepth_14() const { return ___LinearDepth_14; }
	inline int32_t* get_address_of_LinearDepth_14() { return &___LinearDepth_14; }
	inline void set_LinearDepth_14(int32_t value)
	{
		___LinearDepth_14 = value;
	}

	inline static int32_t get_offset_of_LowDepth1_15() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___LowDepth1_15)); }
	inline int32_t get_LowDepth1_15() const { return ___LowDepth1_15; }
	inline int32_t* get_address_of_LowDepth1_15() { return &___LowDepth1_15; }
	inline void set_LowDepth1_15(int32_t value)
	{
		___LowDepth1_15 = value;
	}

	inline static int32_t get_offset_of_LowDepth2_16() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___LowDepth2_16)); }
	inline int32_t get_LowDepth2_16() const { return ___LowDepth2_16; }
	inline int32_t* get_address_of_LowDepth2_16() { return &___LowDepth2_16; }
	inline void set_LowDepth2_16(int32_t value)
	{
		___LowDepth2_16 = value;
	}

	inline static int32_t get_offset_of_LowDepth3_17() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___LowDepth3_17)); }
	inline int32_t get_LowDepth3_17() const { return ___LowDepth3_17; }
	inline int32_t* get_address_of_LowDepth3_17() { return &___LowDepth3_17; }
	inline void set_LowDepth3_17(int32_t value)
	{
		___LowDepth3_17 = value;
	}

	inline static int32_t get_offset_of_LowDepth4_18() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___LowDepth4_18)); }
	inline int32_t get_LowDepth4_18() const { return ___LowDepth4_18; }
	inline int32_t* get_address_of_LowDepth4_18() { return &___LowDepth4_18; }
	inline void set_LowDepth4_18(int32_t value)
	{
		___LowDepth4_18 = value;
	}

	inline static int32_t get_offset_of_TiledDepth1_19() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___TiledDepth1_19)); }
	inline int32_t get_TiledDepth1_19() const { return ___TiledDepth1_19; }
	inline int32_t* get_address_of_TiledDepth1_19() { return &___TiledDepth1_19; }
	inline void set_TiledDepth1_19(int32_t value)
	{
		___TiledDepth1_19 = value;
	}

	inline static int32_t get_offset_of_TiledDepth2_20() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___TiledDepth2_20)); }
	inline int32_t get_TiledDepth2_20() const { return ___TiledDepth2_20; }
	inline int32_t* get_address_of_TiledDepth2_20() { return &___TiledDepth2_20; }
	inline void set_TiledDepth2_20(int32_t value)
	{
		___TiledDepth2_20 = value;
	}

	inline static int32_t get_offset_of_TiledDepth3_21() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___TiledDepth3_21)); }
	inline int32_t get_TiledDepth3_21() const { return ___TiledDepth3_21; }
	inline int32_t* get_address_of_TiledDepth3_21() { return &___TiledDepth3_21; }
	inline void set_TiledDepth3_21(int32_t value)
	{
		___TiledDepth3_21 = value;
	}

	inline static int32_t get_offset_of_TiledDepth4_22() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___TiledDepth4_22)); }
	inline int32_t get_TiledDepth4_22() const { return ___TiledDepth4_22; }
	inline int32_t* get_address_of_TiledDepth4_22() { return &___TiledDepth4_22; }
	inline void set_TiledDepth4_22(int32_t value)
	{
		___TiledDepth4_22 = value;
	}

	inline static int32_t get_offset_of_Occlusion1_23() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Occlusion1_23)); }
	inline int32_t get_Occlusion1_23() const { return ___Occlusion1_23; }
	inline int32_t* get_address_of_Occlusion1_23() { return &___Occlusion1_23; }
	inline void set_Occlusion1_23(int32_t value)
	{
		___Occlusion1_23 = value;
	}

	inline static int32_t get_offset_of_Occlusion2_24() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Occlusion2_24)); }
	inline int32_t get_Occlusion2_24() const { return ___Occlusion2_24; }
	inline int32_t* get_address_of_Occlusion2_24() { return &___Occlusion2_24; }
	inline void set_Occlusion2_24(int32_t value)
	{
		___Occlusion2_24 = value;
	}

	inline static int32_t get_offset_of_Occlusion3_25() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Occlusion3_25)); }
	inline int32_t get_Occlusion3_25() const { return ___Occlusion3_25; }
	inline int32_t* get_address_of_Occlusion3_25() { return &___Occlusion3_25; }
	inline void set_Occlusion3_25(int32_t value)
	{
		___Occlusion3_25 = value;
	}

	inline static int32_t get_offset_of_Occlusion4_26() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Occlusion4_26)); }
	inline int32_t get_Occlusion4_26() const { return ___Occlusion4_26; }
	inline int32_t* get_address_of_Occlusion4_26() { return &___Occlusion4_26; }
	inline void set_Occlusion4_26(int32_t value)
	{
		___Occlusion4_26 = value;
	}

	inline static int32_t get_offset_of_Combined1_27() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Combined1_27)); }
	inline int32_t get_Combined1_27() const { return ___Combined1_27; }
	inline int32_t* get_address_of_Combined1_27() { return &___Combined1_27; }
	inline void set_Combined1_27(int32_t value)
	{
		___Combined1_27 = value;
	}

	inline static int32_t get_offset_of_Combined2_28() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Combined2_28)); }
	inline int32_t get_Combined2_28() const { return ___Combined2_28; }
	inline int32_t* get_address_of_Combined2_28() { return &___Combined2_28; }
	inline void set_Combined2_28(int32_t value)
	{
		___Combined2_28 = value;
	}

	inline static int32_t get_offset_of_Combined3_29() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Combined3_29)); }
	inline int32_t get_Combined3_29() const { return ___Combined3_29; }
	inline int32_t* get_address_of_Combined3_29() { return &___Combined3_29; }
	inline void set_Combined3_29(int32_t value)
	{
		___Combined3_29 = value;
	}

	inline static int32_t get_offset_of_SSRResolveTemp_30() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___SSRResolveTemp_30)); }
	inline int32_t get_SSRResolveTemp_30() const { return ___SSRResolveTemp_30; }
	inline int32_t* get_address_of_SSRResolveTemp_30() { return &___SSRResolveTemp_30; }
	inline void set_SSRResolveTemp_30(int32_t value)
	{
		___SSRResolveTemp_30 = value;
	}

	inline static int32_t get_offset_of_Noise_31() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Noise_31)); }
	inline int32_t get_Noise_31() const { return ___Noise_31; }
	inline int32_t* get_address_of_Noise_31() { return &___Noise_31; }
	inline void set_Noise_31(int32_t value)
	{
		___Noise_31 = value;
	}

	inline static int32_t get_offset_of_Test_32() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Test_32)); }
	inline int32_t get_Test_32() const { return ___Test_32; }
	inline int32_t* get_address_of_Test_32() { return &___Test_32; }
	inline void set_Test_32(int32_t value)
	{
		___Test_32 = value;
	}

	inline static int32_t get_offset_of_Resolve_33() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Resolve_33)); }
	inline int32_t get_Resolve_33() const { return ___Resolve_33; }
	inline int32_t* get_address_of_Resolve_33() { return &___Resolve_33; }
	inline void set_Resolve_33(int32_t value)
	{
		___Resolve_33 = value;
	}

	inline static int32_t get_offset_of_History_34() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___History_34)); }
	inline int32_t get_History_34() const { return ___History_34; }
	inline int32_t* get_address_of_History_34() { return &___History_34; }
	inline void set_History_34(int32_t value)
	{
		___History_34 = value;
	}

	inline static int32_t get_offset_of_ViewMatrix_35() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___ViewMatrix_35)); }
	inline int32_t get_ViewMatrix_35() const { return ___ViewMatrix_35; }
	inline int32_t* get_address_of_ViewMatrix_35() { return &___ViewMatrix_35; }
	inline void set_ViewMatrix_35(int32_t value)
	{
		___ViewMatrix_35 = value;
	}

	inline static int32_t get_offset_of_InverseViewMatrix_36() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___InverseViewMatrix_36)); }
	inline int32_t get_InverseViewMatrix_36() const { return ___InverseViewMatrix_36; }
	inline int32_t* get_address_of_InverseViewMatrix_36() { return &___InverseViewMatrix_36; }
	inline void set_InverseViewMatrix_36(int32_t value)
	{
		___InverseViewMatrix_36 = value;
	}

	inline static int32_t get_offset_of_InverseProjectionMatrix_37() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___InverseProjectionMatrix_37)); }
	inline int32_t get_InverseProjectionMatrix_37() const { return ___InverseProjectionMatrix_37; }
	inline int32_t* get_address_of_InverseProjectionMatrix_37() { return &___InverseProjectionMatrix_37; }
	inline void set_InverseProjectionMatrix_37(int32_t value)
	{
		___InverseProjectionMatrix_37 = value;
	}

	inline static int32_t get_offset_of_ScreenSpaceProjectionMatrix_38() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___ScreenSpaceProjectionMatrix_38)); }
	inline int32_t get_ScreenSpaceProjectionMatrix_38() const { return ___ScreenSpaceProjectionMatrix_38; }
	inline int32_t* get_address_of_ScreenSpaceProjectionMatrix_38() { return &___ScreenSpaceProjectionMatrix_38; }
	inline void set_ScreenSpaceProjectionMatrix_38(int32_t value)
	{
		___ScreenSpaceProjectionMatrix_38 = value;
	}

	inline static int32_t get_offset_of_Params2_39() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Params2_39)); }
	inline int32_t get_Params2_39() const { return ___Params2_39; }
	inline int32_t* get_address_of_Params2_39() { return &___Params2_39; }
	inline void set_Params2_39(int32_t value)
	{
		___Params2_39 = value;
	}

	inline static int32_t get_offset_of_FogColor_40() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___FogColor_40)); }
	inline int32_t get_FogColor_40() const { return ___FogColor_40; }
	inline int32_t* get_address_of_FogColor_40() { return &___FogColor_40; }
	inline void set_FogColor_40(int32_t value)
	{
		___FogColor_40 = value;
	}

	inline static int32_t get_offset_of_FogParams_41() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___FogParams_41)); }
	inline int32_t get_FogParams_41() const { return ___FogParams_41; }
	inline int32_t* get_address_of_FogParams_41() { return &___FogParams_41; }
	inline void set_FogParams_41(int32_t value)
	{
		___FogParams_41 = value;
	}

	inline static int32_t get_offset_of_VelocityScale_42() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___VelocityScale_42)); }
	inline int32_t get_VelocityScale_42() const { return ___VelocityScale_42; }
	inline int32_t* get_address_of_VelocityScale_42() { return &___VelocityScale_42; }
	inline void set_VelocityScale_42(int32_t value)
	{
		___VelocityScale_42 = value;
	}

	inline static int32_t get_offset_of_MaxBlurRadius_43() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___MaxBlurRadius_43)); }
	inline int32_t get_MaxBlurRadius_43() const { return ___MaxBlurRadius_43; }
	inline int32_t* get_address_of_MaxBlurRadius_43() { return &___MaxBlurRadius_43; }
	inline void set_MaxBlurRadius_43(int32_t value)
	{
		___MaxBlurRadius_43 = value;
	}

	inline static int32_t get_offset_of_RcpMaxBlurRadius_44() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___RcpMaxBlurRadius_44)); }
	inline int32_t get_RcpMaxBlurRadius_44() const { return ___RcpMaxBlurRadius_44; }
	inline int32_t* get_address_of_RcpMaxBlurRadius_44() { return &___RcpMaxBlurRadius_44; }
	inline void set_RcpMaxBlurRadius_44(int32_t value)
	{
		___RcpMaxBlurRadius_44 = value;
	}

	inline static int32_t get_offset_of_VelocityTex_45() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___VelocityTex_45)); }
	inline int32_t get_VelocityTex_45() const { return ___VelocityTex_45; }
	inline int32_t* get_address_of_VelocityTex_45() { return &___VelocityTex_45; }
	inline void set_VelocityTex_45(int32_t value)
	{
		___VelocityTex_45 = value;
	}

	inline static int32_t get_offset_of_Tile2RT_46() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Tile2RT_46)); }
	inline int32_t get_Tile2RT_46() const { return ___Tile2RT_46; }
	inline int32_t* get_address_of_Tile2RT_46() { return &___Tile2RT_46; }
	inline void set_Tile2RT_46(int32_t value)
	{
		___Tile2RT_46 = value;
	}

	inline static int32_t get_offset_of_Tile4RT_47() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Tile4RT_47)); }
	inline int32_t get_Tile4RT_47() const { return ___Tile4RT_47; }
	inline int32_t* get_address_of_Tile4RT_47() { return &___Tile4RT_47; }
	inline void set_Tile4RT_47(int32_t value)
	{
		___Tile4RT_47 = value;
	}

	inline static int32_t get_offset_of_Tile8RT_48() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Tile8RT_48)); }
	inline int32_t get_Tile8RT_48() const { return ___Tile8RT_48; }
	inline int32_t* get_address_of_Tile8RT_48() { return &___Tile8RT_48; }
	inline void set_Tile8RT_48(int32_t value)
	{
		___Tile8RT_48 = value;
	}

	inline static int32_t get_offset_of_TileMaxOffs_49() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___TileMaxOffs_49)); }
	inline int32_t get_TileMaxOffs_49() const { return ___TileMaxOffs_49; }
	inline int32_t* get_address_of_TileMaxOffs_49() { return &___TileMaxOffs_49; }
	inline void set_TileMaxOffs_49(int32_t value)
	{
		___TileMaxOffs_49 = value;
	}

	inline static int32_t get_offset_of_TileMaxLoop_50() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___TileMaxLoop_50)); }
	inline int32_t get_TileMaxLoop_50() const { return ___TileMaxLoop_50; }
	inline int32_t* get_address_of_TileMaxLoop_50() { return &___TileMaxLoop_50; }
	inline void set_TileMaxLoop_50(int32_t value)
	{
		___TileMaxLoop_50 = value;
	}

	inline static int32_t get_offset_of_TileVRT_51() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___TileVRT_51)); }
	inline int32_t get_TileVRT_51() const { return ___TileVRT_51; }
	inline int32_t* get_address_of_TileVRT_51() { return &___TileVRT_51; }
	inline void set_TileVRT_51(int32_t value)
	{
		___TileVRT_51 = value;
	}

	inline static int32_t get_offset_of_NeighborMaxTex_52() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___NeighborMaxTex_52)); }
	inline int32_t get_NeighborMaxTex_52() const { return ___NeighborMaxTex_52; }
	inline int32_t* get_address_of_NeighborMaxTex_52() { return &___NeighborMaxTex_52; }
	inline void set_NeighborMaxTex_52(int32_t value)
	{
		___NeighborMaxTex_52 = value;
	}

	inline static int32_t get_offset_of_LoopCount_53() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___LoopCount_53)); }
	inline int32_t get_LoopCount_53() const { return ___LoopCount_53; }
	inline int32_t* get_address_of_LoopCount_53() { return &___LoopCount_53; }
	inline void set_LoopCount_53(int32_t value)
	{
		___LoopCount_53 = value;
	}

	inline static int32_t get_offset_of_DepthOfFieldTemp_54() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___DepthOfFieldTemp_54)); }
	inline int32_t get_DepthOfFieldTemp_54() const { return ___DepthOfFieldTemp_54; }
	inline int32_t* get_address_of_DepthOfFieldTemp_54() { return &___DepthOfFieldTemp_54; }
	inline void set_DepthOfFieldTemp_54(int32_t value)
	{
		___DepthOfFieldTemp_54 = value;
	}

	inline static int32_t get_offset_of_DepthOfFieldTex_55() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___DepthOfFieldTex_55)); }
	inline int32_t get_DepthOfFieldTex_55() const { return ___DepthOfFieldTex_55; }
	inline int32_t* get_address_of_DepthOfFieldTex_55() { return &___DepthOfFieldTex_55; }
	inline void set_DepthOfFieldTex_55(int32_t value)
	{
		___DepthOfFieldTex_55 = value;
	}

	inline static int32_t get_offset_of_Distance_56() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Distance_56)); }
	inline int32_t get_Distance_56() const { return ___Distance_56; }
	inline int32_t* get_address_of_Distance_56() { return &___Distance_56; }
	inline void set_Distance_56(int32_t value)
	{
		___Distance_56 = value;
	}

	inline static int32_t get_offset_of_LensCoeff_57() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___LensCoeff_57)); }
	inline int32_t get_LensCoeff_57() const { return ___LensCoeff_57; }
	inline int32_t* get_address_of_LensCoeff_57() { return &___LensCoeff_57; }
	inline void set_LensCoeff_57(int32_t value)
	{
		___LensCoeff_57 = value;
	}

	inline static int32_t get_offset_of_MaxCoC_58() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___MaxCoC_58)); }
	inline int32_t get_MaxCoC_58() const { return ___MaxCoC_58; }
	inline int32_t* get_address_of_MaxCoC_58() { return &___MaxCoC_58; }
	inline void set_MaxCoC_58(int32_t value)
	{
		___MaxCoC_58 = value;
	}

	inline static int32_t get_offset_of_RcpMaxCoC_59() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___RcpMaxCoC_59)); }
	inline int32_t get_RcpMaxCoC_59() const { return ___RcpMaxCoC_59; }
	inline int32_t* get_address_of_RcpMaxCoC_59() { return &___RcpMaxCoC_59; }
	inline void set_RcpMaxCoC_59(int32_t value)
	{
		___RcpMaxCoC_59 = value;
	}

	inline static int32_t get_offset_of_RcpAspect_60() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___RcpAspect_60)); }
	inline int32_t get_RcpAspect_60() const { return ___RcpAspect_60; }
	inline int32_t* get_address_of_RcpAspect_60() { return &___RcpAspect_60; }
	inline void set_RcpAspect_60(int32_t value)
	{
		___RcpAspect_60 = value;
	}

	inline static int32_t get_offset_of_CoCTex_61() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___CoCTex_61)); }
	inline int32_t get_CoCTex_61() const { return ___CoCTex_61; }
	inline int32_t* get_address_of_CoCTex_61() { return &___CoCTex_61; }
	inline void set_CoCTex_61(int32_t value)
	{
		___CoCTex_61 = value;
	}

	inline static int32_t get_offset_of_TaaParams_62() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___TaaParams_62)); }
	inline int32_t get_TaaParams_62() const { return ___TaaParams_62; }
	inline int32_t* get_address_of_TaaParams_62() { return &___TaaParams_62; }
	inline void set_TaaParams_62(int32_t value)
	{
		___TaaParams_62 = value;
	}

	inline static int32_t get_offset_of_AutoExposureTex_63() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___AutoExposureTex_63)); }
	inline int32_t get_AutoExposureTex_63() const { return ___AutoExposureTex_63; }
	inline int32_t* get_address_of_AutoExposureTex_63() { return &___AutoExposureTex_63; }
	inline void set_AutoExposureTex_63(int32_t value)
	{
		___AutoExposureTex_63 = value;
	}

	inline static int32_t get_offset_of_HistogramBuffer_64() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___HistogramBuffer_64)); }
	inline int32_t get_HistogramBuffer_64() const { return ___HistogramBuffer_64; }
	inline int32_t* get_address_of_HistogramBuffer_64() { return &___HistogramBuffer_64; }
	inline void set_HistogramBuffer_64(int32_t value)
	{
		___HistogramBuffer_64 = value;
	}

	inline static int32_t get_offset_of_Params_65() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Params_65)); }
	inline int32_t get_Params_65() const { return ___Params_65; }
	inline int32_t* get_address_of_Params_65() { return &___Params_65; }
	inline void set_Params_65(int32_t value)
	{
		___Params_65 = value;
	}

	inline static int32_t get_offset_of_ScaleOffsetRes_66() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___ScaleOffsetRes_66)); }
	inline int32_t get_ScaleOffsetRes_66() const { return ___ScaleOffsetRes_66; }
	inline int32_t* get_address_of_ScaleOffsetRes_66() { return &___ScaleOffsetRes_66; }
	inline void set_ScaleOffsetRes_66(int32_t value)
	{
		___ScaleOffsetRes_66 = value;
	}

	inline static int32_t get_offset_of_BloomTex_67() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___BloomTex_67)); }
	inline int32_t get_BloomTex_67() const { return ___BloomTex_67; }
	inline int32_t* get_address_of_BloomTex_67() { return &___BloomTex_67; }
	inline void set_BloomTex_67(int32_t value)
	{
		___BloomTex_67 = value;
	}

	inline static int32_t get_offset_of_SampleScale_68() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___SampleScale_68)); }
	inline int32_t get_SampleScale_68() const { return ___SampleScale_68; }
	inline int32_t* get_address_of_SampleScale_68() { return &___SampleScale_68; }
	inline void set_SampleScale_68(int32_t value)
	{
		___SampleScale_68 = value;
	}

	inline static int32_t get_offset_of_Threshold_69() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Threshold_69)); }
	inline int32_t get_Threshold_69() const { return ___Threshold_69; }
	inline int32_t* get_address_of_Threshold_69() { return &___Threshold_69; }
	inline void set_Threshold_69(int32_t value)
	{
		___Threshold_69 = value;
	}

	inline static int32_t get_offset_of_ColorIntensity_70() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___ColorIntensity_70)); }
	inline int32_t get_ColorIntensity_70() const { return ___ColorIntensity_70; }
	inline int32_t* get_address_of_ColorIntensity_70() { return &___ColorIntensity_70; }
	inline void set_ColorIntensity_70(int32_t value)
	{
		___ColorIntensity_70 = value;
	}

	inline static int32_t get_offset_of_Bloom_DirtTex_71() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Bloom_DirtTex_71)); }
	inline int32_t get_Bloom_DirtTex_71() const { return ___Bloom_DirtTex_71; }
	inline int32_t* get_address_of_Bloom_DirtTex_71() { return &___Bloom_DirtTex_71; }
	inline void set_Bloom_DirtTex_71(int32_t value)
	{
		___Bloom_DirtTex_71 = value;
	}

	inline static int32_t get_offset_of_Bloom_Settings_72() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Bloom_Settings_72)); }
	inline int32_t get_Bloom_Settings_72() const { return ___Bloom_Settings_72; }
	inline int32_t* get_address_of_Bloom_Settings_72() { return &___Bloom_Settings_72; }
	inline void set_Bloom_Settings_72(int32_t value)
	{
		___Bloom_Settings_72 = value;
	}

	inline static int32_t get_offset_of_Bloom_Color_73() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Bloom_Color_73)); }
	inline int32_t get_Bloom_Color_73() const { return ___Bloom_Color_73; }
	inline int32_t* get_address_of_Bloom_Color_73() { return &___Bloom_Color_73; }
	inline void set_Bloom_Color_73(int32_t value)
	{
		___Bloom_Color_73 = value;
	}

	inline static int32_t get_offset_of_Bloom_DirtTileOffset_74() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Bloom_DirtTileOffset_74)); }
	inline int32_t get_Bloom_DirtTileOffset_74() const { return ___Bloom_DirtTileOffset_74; }
	inline int32_t* get_address_of_Bloom_DirtTileOffset_74() { return &___Bloom_DirtTileOffset_74; }
	inline void set_Bloom_DirtTileOffset_74(int32_t value)
	{
		___Bloom_DirtTileOffset_74 = value;
	}

	inline static int32_t get_offset_of_ChromaticAberration_Amount_75() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___ChromaticAberration_Amount_75)); }
	inline int32_t get_ChromaticAberration_Amount_75() const { return ___ChromaticAberration_Amount_75; }
	inline int32_t* get_address_of_ChromaticAberration_Amount_75() { return &___ChromaticAberration_Amount_75; }
	inline void set_ChromaticAberration_Amount_75(int32_t value)
	{
		___ChromaticAberration_Amount_75 = value;
	}

	inline static int32_t get_offset_of_ChromaticAberration_SpectralLut_76() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___ChromaticAberration_SpectralLut_76)); }
	inline int32_t get_ChromaticAberration_SpectralLut_76() const { return ___ChromaticAberration_SpectralLut_76; }
	inline int32_t* get_address_of_ChromaticAberration_SpectralLut_76() { return &___ChromaticAberration_SpectralLut_76; }
	inline void set_ChromaticAberration_SpectralLut_76(int32_t value)
	{
		___ChromaticAberration_SpectralLut_76 = value;
	}

	inline static int32_t get_offset_of_Distortion_CenterScale_77() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Distortion_CenterScale_77)); }
	inline int32_t get_Distortion_CenterScale_77() const { return ___Distortion_CenterScale_77; }
	inline int32_t* get_address_of_Distortion_CenterScale_77() { return &___Distortion_CenterScale_77; }
	inline void set_Distortion_CenterScale_77(int32_t value)
	{
		___Distortion_CenterScale_77 = value;
	}

	inline static int32_t get_offset_of_Distortion_Amount_78() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Distortion_Amount_78)); }
	inline int32_t get_Distortion_Amount_78() const { return ___Distortion_Amount_78; }
	inline int32_t* get_address_of_Distortion_Amount_78() { return &___Distortion_Amount_78; }
	inline void set_Distortion_Amount_78(int32_t value)
	{
		___Distortion_Amount_78 = value;
	}

	inline static int32_t get_offset_of_Lut2D_79() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Lut2D_79)); }
	inline int32_t get_Lut2D_79() const { return ___Lut2D_79; }
	inline int32_t* get_address_of_Lut2D_79() { return &___Lut2D_79; }
	inline void set_Lut2D_79(int32_t value)
	{
		___Lut2D_79 = value;
	}

	inline static int32_t get_offset_of_Lut3D_80() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Lut3D_80)); }
	inline int32_t get_Lut3D_80() const { return ___Lut3D_80; }
	inline int32_t* get_address_of_Lut3D_80() { return &___Lut3D_80; }
	inline void set_Lut3D_80(int32_t value)
	{
		___Lut3D_80 = value;
	}

	inline static int32_t get_offset_of_Lut3D_Params_81() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Lut3D_Params_81)); }
	inline int32_t get_Lut3D_Params_81() const { return ___Lut3D_Params_81; }
	inline int32_t* get_address_of_Lut3D_Params_81() { return &___Lut3D_Params_81; }
	inline void set_Lut3D_Params_81(int32_t value)
	{
		___Lut3D_Params_81 = value;
	}

	inline static int32_t get_offset_of_Lut2D_Params_82() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Lut2D_Params_82)); }
	inline int32_t get_Lut2D_Params_82() const { return ___Lut2D_Params_82; }
	inline int32_t* get_address_of_Lut2D_Params_82() { return &___Lut2D_Params_82; }
	inline void set_Lut2D_Params_82(int32_t value)
	{
		___Lut2D_Params_82 = value;
	}

	inline static int32_t get_offset_of_UserLut2D_Params_83() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___UserLut2D_Params_83)); }
	inline int32_t get_UserLut2D_Params_83() const { return ___UserLut2D_Params_83; }
	inline int32_t* get_address_of_UserLut2D_Params_83() { return &___UserLut2D_Params_83; }
	inline void set_UserLut2D_Params_83(int32_t value)
	{
		___UserLut2D_Params_83 = value;
	}

	inline static int32_t get_offset_of_PostExposure_84() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___PostExposure_84)); }
	inline int32_t get_PostExposure_84() const { return ___PostExposure_84; }
	inline int32_t* get_address_of_PostExposure_84() { return &___PostExposure_84; }
	inline void set_PostExposure_84(int32_t value)
	{
		___PostExposure_84 = value;
	}

	inline static int32_t get_offset_of_ColorBalance_85() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___ColorBalance_85)); }
	inline int32_t get_ColorBalance_85() const { return ___ColorBalance_85; }
	inline int32_t* get_address_of_ColorBalance_85() { return &___ColorBalance_85; }
	inline void set_ColorBalance_85(int32_t value)
	{
		___ColorBalance_85 = value;
	}

	inline static int32_t get_offset_of_ColorFilter_86() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___ColorFilter_86)); }
	inline int32_t get_ColorFilter_86() const { return ___ColorFilter_86; }
	inline int32_t* get_address_of_ColorFilter_86() { return &___ColorFilter_86; }
	inline void set_ColorFilter_86(int32_t value)
	{
		___ColorFilter_86 = value;
	}

	inline static int32_t get_offset_of_HueSatCon_87() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___HueSatCon_87)); }
	inline int32_t get_HueSatCon_87() const { return ___HueSatCon_87; }
	inline int32_t* get_address_of_HueSatCon_87() { return &___HueSatCon_87; }
	inline void set_HueSatCon_87(int32_t value)
	{
		___HueSatCon_87 = value;
	}

	inline static int32_t get_offset_of_Brightness_88() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Brightness_88)); }
	inline int32_t get_Brightness_88() const { return ___Brightness_88; }
	inline int32_t* get_address_of_Brightness_88() { return &___Brightness_88; }
	inline void set_Brightness_88(int32_t value)
	{
		___Brightness_88 = value;
	}

	inline static int32_t get_offset_of_ChannelMixerRed_89() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___ChannelMixerRed_89)); }
	inline int32_t get_ChannelMixerRed_89() const { return ___ChannelMixerRed_89; }
	inline int32_t* get_address_of_ChannelMixerRed_89() { return &___ChannelMixerRed_89; }
	inline void set_ChannelMixerRed_89(int32_t value)
	{
		___ChannelMixerRed_89 = value;
	}

	inline static int32_t get_offset_of_ChannelMixerGreen_90() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___ChannelMixerGreen_90)); }
	inline int32_t get_ChannelMixerGreen_90() const { return ___ChannelMixerGreen_90; }
	inline int32_t* get_address_of_ChannelMixerGreen_90() { return &___ChannelMixerGreen_90; }
	inline void set_ChannelMixerGreen_90(int32_t value)
	{
		___ChannelMixerGreen_90 = value;
	}

	inline static int32_t get_offset_of_ChannelMixerBlue_91() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___ChannelMixerBlue_91)); }
	inline int32_t get_ChannelMixerBlue_91() const { return ___ChannelMixerBlue_91; }
	inline int32_t* get_address_of_ChannelMixerBlue_91() { return &___ChannelMixerBlue_91; }
	inline void set_ChannelMixerBlue_91(int32_t value)
	{
		___ChannelMixerBlue_91 = value;
	}

	inline static int32_t get_offset_of_Lift_92() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Lift_92)); }
	inline int32_t get_Lift_92() const { return ___Lift_92; }
	inline int32_t* get_address_of_Lift_92() { return &___Lift_92; }
	inline void set_Lift_92(int32_t value)
	{
		___Lift_92 = value;
	}

	inline static int32_t get_offset_of_InvGamma_93() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___InvGamma_93)); }
	inline int32_t get_InvGamma_93() const { return ___InvGamma_93; }
	inline int32_t* get_address_of_InvGamma_93() { return &___InvGamma_93; }
	inline void set_InvGamma_93(int32_t value)
	{
		___InvGamma_93 = value;
	}

	inline static int32_t get_offset_of_Gain_94() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Gain_94)); }
	inline int32_t get_Gain_94() const { return ___Gain_94; }
	inline int32_t* get_address_of_Gain_94() { return &___Gain_94; }
	inline void set_Gain_94(int32_t value)
	{
		___Gain_94 = value;
	}

	inline static int32_t get_offset_of_Curves_95() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Curves_95)); }
	inline int32_t get_Curves_95() const { return ___Curves_95; }
	inline int32_t* get_address_of_Curves_95() { return &___Curves_95; }
	inline void set_Curves_95(int32_t value)
	{
		___Curves_95 = value;
	}

	inline static int32_t get_offset_of_CustomToneCurve_96() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___CustomToneCurve_96)); }
	inline int32_t get_CustomToneCurve_96() const { return ___CustomToneCurve_96; }
	inline int32_t* get_address_of_CustomToneCurve_96() { return &___CustomToneCurve_96; }
	inline void set_CustomToneCurve_96(int32_t value)
	{
		___CustomToneCurve_96 = value;
	}

	inline static int32_t get_offset_of_ToeSegmentA_97() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___ToeSegmentA_97)); }
	inline int32_t get_ToeSegmentA_97() const { return ___ToeSegmentA_97; }
	inline int32_t* get_address_of_ToeSegmentA_97() { return &___ToeSegmentA_97; }
	inline void set_ToeSegmentA_97(int32_t value)
	{
		___ToeSegmentA_97 = value;
	}

	inline static int32_t get_offset_of_ToeSegmentB_98() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___ToeSegmentB_98)); }
	inline int32_t get_ToeSegmentB_98() const { return ___ToeSegmentB_98; }
	inline int32_t* get_address_of_ToeSegmentB_98() { return &___ToeSegmentB_98; }
	inline void set_ToeSegmentB_98(int32_t value)
	{
		___ToeSegmentB_98 = value;
	}

	inline static int32_t get_offset_of_MidSegmentA_99() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___MidSegmentA_99)); }
	inline int32_t get_MidSegmentA_99() const { return ___MidSegmentA_99; }
	inline int32_t* get_address_of_MidSegmentA_99() { return &___MidSegmentA_99; }
	inline void set_MidSegmentA_99(int32_t value)
	{
		___MidSegmentA_99 = value;
	}

	inline static int32_t get_offset_of_MidSegmentB_100() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___MidSegmentB_100)); }
	inline int32_t get_MidSegmentB_100() const { return ___MidSegmentB_100; }
	inline int32_t* get_address_of_MidSegmentB_100() { return &___MidSegmentB_100; }
	inline void set_MidSegmentB_100(int32_t value)
	{
		___MidSegmentB_100 = value;
	}

	inline static int32_t get_offset_of_ShoSegmentA_101() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___ShoSegmentA_101)); }
	inline int32_t get_ShoSegmentA_101() const { return ___ShoSegmentA_101; }
	inline int32_t* get_address_of_ShoSegmentA_101() { return &___ShoSegmentA_101; }
	inline void set_ShoSegmentA_101(int32_t value)
	{
		___ShoSegmentA_101 = value;
	}

	inline static int32_t get_offset_of_ShoSegmentB_102() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___ShoSegmentB_102)); }
	inline int32_t get_ShoSegmentB_102() const { return ___ShoSegmentB_102; }
	inline int32_t* get_address_of_ShoSegmentB_102() { return &___ShoSegmentB_102; }
	inline void set_ShoSegmentB_102(int32_t value)
	{
		___ShoSegmentB_102 = value;
	}

	inline static int32_t get_offset_of_Vignette_Color_103() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Vignette_Color_103)); }
	inline int32_t get_Vignette_Color_103() const { return ___Vignette_Color_103; }
	inline int32_t* get_address_of_Vignette_Color_103() { return &___Vignette_Color_103; }
	inline void set_Vignette_Color_103(int32_t value)
	{
		___Vignette_Color_103 = value;
	}

	inline static int32_t get_offset_of_Vignette_Center_104() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Vignette_Center_104)); }
	inline int32_t get_Vignette_Center_104() const { return ___Vignette_Center_104; }
	inline int32_t* get_address_of_Vignette_Center_104() { return &___Vignette_Center_104; }
	inline void set_Vignette_Center_104(int32_t value)
	{
		___Vignette_Center_104 = value;
	}

	inline static int32_t get_offset_of_Vignette_Settings_105() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Vignette_Settings_105)); }
	inline int32_t get_Vignette_Settings_105() const { return ___Vignette_Settings_105; }
	inline int32_t* get_address_of_Vignette_Settings_105() { return &___Vignette_Settings_105; }
	inline void set_Vignette_Settings_105(int32_t value)
	{
		___Vignette_Settings_105 = value;
	}

	inline static int32_t get_offset_of_Vignette_Mask_106() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Vignette_Mask_106)); }
	inline int32_t get_Vignette_Mask_106() const { return ___Vignette_Mask_106; }
	inline int32_t* get_address_of_Vignette_Mask_106() { return &___Vignette_Mask_106; }
	inline void set_Vignette_Mask_106(int32_t value)
	{
		___Vignette_Mask_106 = value;
	}

	inline static int32_t get_offset_of_Vignette_Opacity_107() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Vignette_Opacity_107)); }
	inline int32_t get_Vignette_Opacity_107() const { return ___Vignette_Opacity_107; }
	inline int32_t* get_address_of_Vignette_Opacity_107() { return &___Vignette_Opacity_107; }
	inline void set_Vignette_Opacity_107(int32_t value)
	{
		___Vignette_Opacity_107 = value;
	}

	inline static int32_t get_offset_of_Vignette_Mode_108() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Vignette_Mode_108)); }
	inline int32_t get_Vignette_Mode_108() const { return ___Vignette_Mode_108; }
	inline int32_t* get_address_of_Vignette_Mode_108() { return &___Vignette_Mode_108; }
	inline void set_Vignette_Mode_108(int32_t value)
	{
		___Vignette_Mode_108 = value;
	}

	inline static int32_t get_offset_of_Grain_Params1_109() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Grain_Params1_109)); }
	inline int32_t get_Grain_Params1_109() const { return ___Grain_Params1_109; }
	inline int32_t* get_address_of_Grain_Params1_109() { return &___Grain_Params1_109; }
	inline void set_Grain_Params1_109(int32_t value)
	{
		___Grain_Params1_109 = value;
	}

	inline static int32_t get_offset_of_Grain_Params2_110() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Grain_Params2_110)); }
	inline int32_t get_Grain_Params2_110() const { return ___Grain_Params2_110; }
	inline int32_t* get_address_of_Grain_Params2_110() { return &___Grain_Params2_110; }
	inline void set_Grain_Params2_110(int32_t value)
	{
		___Grain_Params2_110 = value;
	}

	inline static int32_t get_offset_of_GrainTex_111() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___GrainTex_111)); }
	inline int32_t get_GrainTex_111() const { return ___GrainTex_111; }
	inline int32_t* get_address_of_GrainTex_111() { return &___GrainTex_111; }
	inline void set_GrainTex_111(int32_t value)
	{
		___GrainTex_111 = value;
	}

	inline static int32_t get_offset_of_Phase_112() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Phase_112)); }
	inline int32_t get_Phase_112() const { return ___Phase_112; }
	inline int32_t* get_address_of_Phase_112() { return &___Phase_112; }
	inline void set_Phase_112(int32_t value)
	{
		___Phase_112 = value;
	}

	inline static int32_t get_offset_of_GrainNoiseParameters_113() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___GrainNoiseParameters_113)); }
	inline int32_t get_GrainNoiseParameters_113() const { return ___GrainNoiseParameters_113; }
	inline int32_t* get_address_of_GrainNoiseParameters_113() { return &___GrainNoiseParameters_113; }
	inline void set_GrainNoiseParameters_113(int32_t value)
	{
		___GrainNoiseParameters_113 = value;
	}

	inline static int32_t get_offset_of_LumaInAlpha_114() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___LumaInAlpha_114)); }
	inline int32_t get_LumaInAlpha_114() const { return ___LumaInAlpha_114; }
	inline int32_t* get_address_of_LumaInAlpha_114() { return &___LumaInAlpha_114; }
	inline void set_LumaInAlpha_114(int32_t value)
	{
		___LumaInAlpha_114 = value;
	}

	inline static int32_t get_offset_of_DitheringTex_115() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___DitheringTex_115)); }
	inline int32_t get_DitheringTex_115() const { return ___DitheringTex_115; }
	inline int32_t* get_address_of_DitheringTex_115() { return &___DitheringTex_115; }
	inline void set_DitheringTex_115(int32_t value)
	{
		___DitheringTex_115 = value;
	}

	inline static int32_t get_offset_of_Dithering_Coords_116() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Dithering_Coords_116)); }
	inline int32_t get_Dithering_Coords_116() const { return ___Dithering_Coords_116; }
	inline int32_t* get_address_of_Dithering_Coords_116() { return &___Dithering_Coords_116; }
	inline void set_Dithering_Coords_116(int32_t value)
	{
		___Dithering_Coords_116 = value;
	}

	inline static int32_t get_offset_of_From_117() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___From_117)); }
	inline int32_t get_From_117() const { return ___From_117; }
	inline int32_t* get_address_of_From_117() { return &___From_117; }
	inline void set_From_117(int32_t value)
	{
		___From_117 = value;
	}

	inline static int32_t get_offset_of_To_118() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___To_118)); }
	inline int32_t get_To_118() const { return ___To_118; }
	inline int32_t* get_address_of_To_118() { return &___To_118; }
	inline void set_To_118(int32_t value)
	{
		___To_118 = value;
	}

	inline static int32_t get_offset_of_Interp_119() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___Interp_119)); }
	inline int32_t get_Interp_119() const { return ___Interp_119; }
	inline int32_t* get_address_of_Interp_119() { return &___Interp_119; }
	inline void set_Interp_119(int32_t value)
	{
		___Interp_119 = value;
	}

	inline static int32_t get_offset_of_TargetColor_120() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___TargetColor_120)); }
	inline int32_t get_TargetColor_120() const { return ___TargetColor_120; }
	inline int32_t* get_address_of_TargetColor_120() { return &___TargetColor_120; }
	inline void set_TargetColor_120(int32_t value)
	{
		___TargetColor_120 = value;
	}

	inline static int32_t get_offset_of_HalfResFinalCopy_121() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___HalfResFinalCopy_121)); }
	inline int32_t get_HalfResFinalCopy_121() const { return ___HalfResFinalCopy_121; }
	inline int32_t* get_address_of_HalfResFinalCopy_121() { return &___HalfResFinalCopy_121; }
	inline void set_HalfResFinalCopy_121(int32_t value)
	{
		___HalfResFinalCopy_121 = value;
	}

	inline static int32_t get_offset_of_WaveformSource_122() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___WaveformSource_122)); }
	inline int32_t get_WaveformSource_122() const { return ___WaveformSource_122; }
	inline int32_t* get_address_of_WaveformSource_122() { return &___WaveformSource_122; }
	inline void set_WaveformSource_122(int32_t value)
	{
		___WaveformSource_122 = value;
	}

	inline static int32_t get_offset_of_WaveformBuffer_123() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___WaveformBuffer_123)); }
	inline int32_t get_WaveformBuffer_123() const { return ___WaveformBuffer_123; }
	inline int32_t* get_address_of_WaveformBuffer_123() { return &___WaveformBuffer_123; }
	inline void set_WaveformBuffer_123(int32_t value)
	{
		___WaveformBuffer_123 = value;
	}

	inline static int32_t get_offset_of_VectorscopeBuffer_124() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___VectorscopeBuffer_124)); }
	inline int32_t get_VectorscopeBuffer_124() const { return ___VectorscopeBuffer_124; }
	inline int32_t* get_address_of_VectorscopeBuffer_124() { return &___VectorscopeBuffer_124; }
	inline void set_VectorscopeBuffer_124(int32_t value)
	{
		___VectorscopeBuffer_124 = value;
	}

	inline static int32_t get_offset_of_RenderViewportScaleFactor_125() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___RenderViewportScaleFactor_125)); }
	inline int32_t get_RenderViewportScaleFactor_125() const { return ___RenderViewportScaleFactor_125; }
	inline int32_t* get_address_of_RenderViewportScaleFactor_125() { return &___RenderViewportScaleFactor_125; }
	inline void set_RenderViewportScaleFactor_125(int32_t value)
	{
		___RenderViewportScaleFactor_125 = value;
	}

	inline static int32_t get_offset_of_UVTransform_126() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___UVTransform_126)); }
	inline int32_t get_UVTransform_126() const { return ___UVTransform_126; }
	inline int32_t* get_address_of_UVTransform_126() { return &___UVTransform_126; }
	inline void set_UVTransform_126(int32_t value)
	{
		___UVTransform_126 = value;
	}

	inline static int32_t get_offset_of_DepthSlice_127() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___DepthSlice_127)); }
	inline int32_t get_DepthSlice_127() const { return ___DepthSlice_127; }
	inline int32_t* get_address_of_DepthSlice_127() { return &___DepthSlice_127; }
	inline void set_DepthSlice_127(int32_t value)
	{
		___DepthSlice_127 = value;
	}

	inline static int32_t get_offset_of_UVScaleOffset_128() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___UVScaleOffset_128)); }
	inline int32_t get_UVScaleOffset_128() const { return ___UVScaleOffset_128; }
	inline int32_t* get_address_of_UVScaleOffset_128() { return &___UVScaleOffset_128; }
	inline void set_UVScaleOffset_128(int32_t value)
	{
		___UVScaleOffset_128 = value;
	}

	inline static int32_t get_offset_of_PosScaleOffset_129() { return static_cast<int32_t>(offsetof(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields, ___PosScaleOffset_129)); }
	inline int32_t get_PosScaleOffset_129() const { return ___PosScaleOffset_129; }
	inline int32_t* get_address_of_PosScaleOffset_129() { return &___PosScaleOffset_129; }
	inline void set_PosScaleOffset_129(int32_t value)
	{
		___PosScaleOffset_129 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.Spline
struct  Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2  : public RuntimeObject
{
public:
	// UnityEngine.AnimationCurve UnityEngine.Rendering.PostProcessing.Spline::curve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve_2;
	// System.Boolean UnityEngine.Rendering.PostProcessing.Spline::m_Loop
	bool ___m_Loop_3;
	// System.Single UnityEngine.Rendering.PostProcessing.Spline::m_ZeroValue
	float ___m_ZeroValue_4;
	// System.Single UnityEngine.Rendering.PostProcessing.Spline::m_Range
	float ___m_Range_5;
	// UnityEngine.AnimationCurve UnityEngine.Rendering.PostProcessing.Spline::m_InternalLoopingCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_InternalLoopingCurve_6;
	// System.Int32 UnityEngine.Rendering.PostProcessing.Spline::frameCount
	int32_t ___frameCount_7;
	// System.Single[] UnityEngine.Rendering.PostProcessing.Spline::cachedData
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___cachedData_8;

public:
	inline static int32_t get_offset_of_curve_2() { return static_cast<int32_t>(offsetof(Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2, ___curve_2)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_curve_2() const { return ___curve_2; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_curve_2() { return &___curve_2; }
	inline void set_curve_2(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___curve_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___curve_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Loop_3() { return static_cast<int32_t>(offsetof(Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2, ___m_Loop_3)); }
	inline bool get_m_Loop_3() const { return ___m_Loop_3; }
	inline bool* get_address_of_m_Loop_3() { return &___m_Loop_3; }
	inline void set_m_Loop_3(bool value)
	{
		___m_Loop_3 = value;
	}

	inline static int32_t get_offset_of_m_ZeroValue_4() { return static_cast<int32_t>(offsetof(Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2, ___m_ZeroValue_4)); }
	inline float get_m_ZeroValue_4() const { return ___m_ZeroValue_4; }
	inline float* get_address_of_m_ZeroValue_4() { return &___m_ZeroValue_4; }
	inline void set_m_ZeroValue_4(float value)
	{
		___m_ZeroValue_4 = value;
	}

	inline static int32_t get_offset_of_m_Range_5() { return static_cast<int32_t>(offsetof(Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2, ___m_Range_5)); }
	inline float get_m_Range_5() const { return ___m_Range_5; }
	inline float* get_address_of_m_Range_5() { return &___m_Range_5; }
	inline void set_m_Range_5(float value)
	{
		___m_Range_5 = value;
	}

	inline static int32_t get_offset_of_m_InternalLoopingCurve_6() { return static_cast<int32_t>(offsetof(Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2, ___m_InternalLoopingCurve_6)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_InternalLoopingCurve_6() const { return ___m_InternalLoopingCurve_6; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_InternalLoopingCurve_6() { return &___m_InternalLoopingCurve_6; }
	inline void set_m_InternalLoopingCurve_6(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_InternalLoopingCurve_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalLoopingCurve_6), (void*)value);
	}

	inline static int32_t get_offset_of_frameCount_7() { return static_cast<int32_t>(offsetof(Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2, ___frameCount_7)); }
	inline int32_t get_frameCount_7() const { return ___frameCount_7; }
	inline int32_t* get_address_of_frameCount_7() { return &___frameCount_7; }
	inline void set_frameCount_7(int32_t value)
	{
		___frameCount_7 = value;
	}

	inline static int32_t get_offset_of_cachedData_8() { return static_cast<int32_t>(offsetof(Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2, ___cachedData_8)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_cachedData_8() const { return ___cachedData_8; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_cachedData_8() { return &___cachedData_8; }
	inline void set_cachedData_8(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___cachedData_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedData_8), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
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


// UnityEngine.Rendering.PostProcessing.TargetPool
struct  TargetPool_t903089FCEE606214C490876AB928DA25294034CC  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.Rendering.PostProcessing.TargetPool::m_Pool
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___m_Pool_0;
	// System.Int32 UnityEngine.Rendering.PostProcessing.TargetPool::m_Current
	int32_t ___m_Current_1;

public:
	inline static int32_t get_offset_of_m_Pool_0() { return static_cast<int32_t>(offsetof(TargetPool_t903089FCEE606214C490876AB928DA25294034CC, ___m_Pool_0)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_m_Pool_0() const { return ___m_Pool_0; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_m_Pool_0() { return &___m_Pool_0; }
	inline void set_m_Pool_0(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___m_Pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Pool_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Current_1() { return static_cast<int32_t>(offsetof(TargetPool_t903089FCEE606214C490876AB928DA25294034CC, ___m_Current_1)); }
	inline int32_t get_m_Current_1() const { return ___m_Current_1; }
	inline int32_t* get_address_of_m_Current_1() { return &___m_Current_1; }
	inline void set_m_Current_1(int32_t value)
	{
		___m_Current_1 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.TextureFormatUtilities
struct  TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0  : public RuntimeObject
{
public:

public:
};

struct TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RenderTextureFormat> UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::s_FormatAliasMap
	Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * ___s_FormatAliasMap_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean> UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::s_SupportedRenderTextureFormats
	Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * ___s_SupportedRenderTextureFormats_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean> UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::s_SupportedTextureFormats
	Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * ___s_SupportedTextureFormats_2;

public:
	inline static int32_t get_offset_of_s_FormatAliasMap_0() { return static_cast<int32_t>(offsetof(TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_StaticFields, ___s_FormatAliasMap_0)); }
	inline Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * get_s_FormatAliasMap_0() const { return ___s_FormatAliasMap_0; }
	inline Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F ** get_address_of_s_FormatAliasMap_0() { return &___s_FormatAliasMap_0; }
	inline void set_s_FormatAliasMap_0(Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * value)
	{
		___s_FormatAliasMap_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_FormatAliasMap_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_SupportedRenderTextureFormats_1() { return static_cast<int32_t>(offsetof(TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_StaticFields, ___s_SupportedRenderTextureFormats_1)); }
	inline Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * get_s_SupportedRenderTextureFormats_1() const { return ___s_SupportedRenderTextureFormats_1; }
	inline Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 ** get_address_of_s_SupportedRenderTextureFormats_1() { return &___s_SupportedRenderTextureFormats_1; }
	inline void set_s_SupportedRenderTextureFormats_1(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * value)
	{
		___s_SupportedRenderTextureFormats_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SupportedRenderTextureFormats_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_SupportedTextureFormats_2() { return static_cast<int32_t>(offsetof(TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_StaticFields, ___s_SupportedTextureFormats_2)); }
	inline Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * get_s_SupportedTextureFormats_2() const { return ___s_SupportedTextureFormats_2; }
	inline Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 ** get_address_of_s_SupportedTextureFormats_2() { return &___s_SupportedTextureFormats_2; }
	inline void set_s_SupportedTextureFormats_2(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * value)
	{
		___s_SupportedTextureFormats_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SupportedTextureFormats_2), (void*)value);
	}
};


// UnityEngine.Rendering.PostProcessing.TextureLerper
struct  TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616  : public RuntimeObject
{
public:
	// UnityEngine.Rendering.CommandBuffer UnityEngine.Rendering.PostProcessing.TextureLerper::m_Command
	CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___m_Command_1;
	// UnityEngine.Rendering.PostProcessing.PropertySheetFactory UnityEngine.Rendering.PostProcessing.TextureLerper::m_PropertySheets
	PropertySheetFactory_t2D2278105A154ED6036D5BE72D09359A5FB94835 * ___m_PropertySheets_2;
	// UnityEngine.Rendering.PostProcessing.PostProcessResources UnityEngine.Rendering.PostProcessing.TextureLerper::m_Resources
	PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC * ___m_Resources_3;
	// System.Collections.Generic.List`1<UnityEngine.RenderTexture> UnityEngine.Rendering.PostProcessing.TextureLerper::m_Recycled
	List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * ___m_Recycled_4;
	// System.Collections.Generic.List`1<UnityEngine.RenderTexture> UnityEngine.Rendering.PostProcessing.TextureLerper::m_Actives
	List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * ___m_Actives_5;

public:
	inline static int32_t get_offset_of_m_Command_1() { return static_cast<int32_t>(offsetof(TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616, ___m_Command_1)); }
	inline CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * get_m_Command_1() const { return ___m_Command_1; }
	inline CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 ** get_address_of_m_Command_1() { return &___m_Command_1; }
	inline void set_m_Command_1(CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * value)
	{
		___m_Command_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Command_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_PropertySheets_2() { return static_cast<int32_t>(offsetof(TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616, ___m_PropertySheets_2)); }
	inline PropertySheetFactory_t2D2278105A154ED6036D5BE72D09359A5FB94835 * get_m_PropertySheets_2() const { return ___m_PropertySheets_2; }
	inline PropertySheetFactory_t2D2278105A154ED6036D5BE72D09359A5FB94835 ** get_address_of_m_PropertySheets_2() { return &___m_PropertySheets_2; }
	inline void set_m_PropertySheets_2(PropertySheetFactory_t2D2278105A154ED6036D5BE72D09359A5FB94835 * value)
	{
		___m_PropertySheets_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PropertySheets_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Resources_3() { return static_cast<int32_t>(offsetof(TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616, ___m_Resources_3)); }
	inline PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC * get_m_Resources_3() const { return ___m_Resources_3; }
	inline PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC ** get_address_of_m_Resources_3() { return &___m_Resources_3; }
	inline void set_m_Resources_3(PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC * value)
	{
		___m_Resources_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Resources_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Recycled_4() { return static_cast<int32_t>(offsetof(TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616, ___m_Recycled_4)); }
	inline List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * get_m_Recycled_4() const { return ___m_Recycled_4; }
	inline List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE ** get_address_of_m_Recycled_4() { return &___m_Recycled_4; }
	inline void set_m_Recycled_4(List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * value)
	{
		___m_Recycled_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Recycled_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Actives_5() { return static_cast<int32_t>(offsetof(TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616, ___m_Actives_5)); }
	inline List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * get_m_Actives_5() const { return ___m_Actives_5; }
	inline List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE ** get_address_of_m_Actives_5() { return &___m_Actives_5; }
	inline void set_m_Actives_5(List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * value)
	{
		___m_Actives_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Actives_5), (void*)value);
	}
};

struct TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616_StaticFields
{
public:
	// UnityEngine.Rendering.PostProcessing.TextureLerper UnityEngine.Rendering.PostProcessing.TextureLerper::m_Instance
	TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616 * ___m_Instance_0;

public:
	inline static int32_t get_offset_of_m_Instance_0() { return static_cast<int32_t>(offsetof(TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616_StaticFields, ___m_Instance_0)); }
	inline TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616 * get_m_Instance_0() const { return ___m_Instance_0; }
	inline TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616 ** get_address_of_m_Instance_0() { return &___m_Instance_0; }
	inline void set_m_Instance_0(TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616 * value)
	{
		___m_Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Instance_0), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// UnityEngine.Rendering.PostProcessing.HableCurve/Segment
struct  Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0  : public RuntimeObject
{
public:
	// System.Single UnityEngine.Rendering.PostProcessing.HableCurve/Segment::offsetX
	float ___offsetX_0;
	// System.Single UnityEngine.Rendering.PostProcessing.HableCurve/Segment::offsetY
	float ___offsetY_1;
	// System.Single UnityEngine.Rendering.PostProcessing.HableCurve/Segment::scaleX
	float ___scaleX_2;
	// System.Single UnityEngine.Rendering.PostProcessing.HableCurve/Segment::scaleY
	float ___scaleY_3;
	// System.Single UnityEngine.Rendering.PostProcessing.HableCurve/Segment::lnA
	float ___lnA_4;
	// System.Single UnityEngine.Rendering.PostProcessing.HableCurve/Segment::B
	float ___B_5;

public:
	inline static int32_t get_offset_of_offsetX_0() { return static_cast<int32_t>(offsetof(Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0, ___offsetX_0)); }
	inline float get_offsetX_0() const { return ___offsetX_0; }
	inline float* get_address_of_offsetX_0() { return &___offsetX_0; }
	inline void set_offsetX_0(float value)
	{
		___offsetX_0 = value;
	}

	inline static int32_t get_offset_of_offsetY_1() { return static_cast<int32_t>(offsetof(Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0, ___offsetY_1)); }
	inline float get_offsetY_1() const { return ___offsetY_1; }
	inline float* get_address_of_offsetY_1() { return &___offsetY_1; }
	inline void set_offsetY_1(float value)
	{
		___offsetY_1 = value;
	}

	inline static int32_t get_offset_of_scaleX_2() { return static_cast<int32_t>(offsetof(Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0, ___scaleX_2)); }
	inline float get_scaleX_2() const { return ___scaleX_2; }
	inline float* get_address_of_scaleX_2() { return &___scaleX_2; }
	inline void set_scaleX_2(float value)
	{
		___scaleX_2 = value;
	}

	inline static int32_t get_offset_of_scaleY_3() { return static_cast<int32_t>(offsetof(Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0, ___scaleY_3)); }
	inline float get_scaleY_3() const { return ___scaleY_3; }
	inline float* get_address_of_scaleY_3() { return &___scaleY_3; }
	inline void set_scaleY_3(float value)
	{
		___scaleY_3 = value;
	}

	inline static int32_t get_offset_of_lnA_4() { return static_cast<int32_t>(offsetof(Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0, ___lnA_4)); }
	inline float get_lnA_4() const { return ___lnA_4; }
	inline float* get_address_of_lnA_4() { return &___lnA_4; }
	inline void set_lnA_4(float value)
	{
		___lnA_4 = value;
	}

	inline static int32_t get_offset_of_B_5() { return static_cast<int32_t>(offsetof(Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0, ___B_5)); }
	inline float get_B_5() const { return ___B_5; }
	inline float* get_address_of_B_5() { return &___B_5; }
	inline void set_B_5(float value)
	{
		___B_5 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.HableCurve/Uniforms
struct  Uniforms_t7AF10CB01FA96FCB7FCF701200A7D087DEC63843  : public RuntimeObject
{
public:
	// UnityEngine.Rendering.PostProcessing.HableCurve UnityEngine.Rendering.PostProcessing.HableCurve/Uniforms::parent
	HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9 * ___parent_0;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(Uniforms_t7AF10CB01FA96FCB7FCF701200A7D087DEC63843, ___parent_0)); }
	inline HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9 * get_parent_0() const { return ___parent_0; }
	inline HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}
};


// UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings/<>c
struct  U3CU3Ec_t582D59DA00DB9923A86F7788D2FDFB1DBECDC721  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t582D59DA00DB9923A86F7788D2FDFB1DBECDC721_StaticFields
{
public:
	// UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings/<>c UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings/<>c::<>9
	U3CU3Ec_t582D59DA00DB9923A86F7788D2FDFB1DBECDC721 * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.FieldInfo,System.Boolean> UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings/<>c::<>9__3_0
	Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * ___U3CU3E9__3_0_1;
	// System.Func`2<System.Reflection.FieldInfo,System.Int32> UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings/<>c::<>9__3_1
	Func_2_tA71E659021C95E54328A443283A7154D558E9411 * ___U3CU3E9__3_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t582D59DA00DB9923A86F7788D2FDFB1DBECDC721_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t582D59DA00DB9923A86F7788D2FDFB1DBECDC721 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t582D59DA00DB9923A86F7788D2FDFB1DBECDC721 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t582D59DA00DB9923A86F7788D2FDFB1DBECDC721 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t582D59DA00DB9923A86F7788D2FDFB1DBECDC721_StaticFields, ___U3CU3E9__3_0_1)); }
	inline Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t582D59DA00DB9923A86F7788D2FDFB1DBECDC721_StaticFields, ___U3CU3E9__3_1_2)); }
	inline Func_2_tA71E659021C95E54328A443283A7154D558E9411 * get_U3CU3E9__3_1_2() const { return ___U3CU3E9__3_1_2; }
	inline Func_2_tA71E659021C95E54328A443283A7154D558E9411 ** get_address_of_U3CU3E9__3_1_2() { return &___U3CU3E9__3_1_2; }
	inline void set_U3CU3E9__3_1_2(Func_2_tA71E659021C95E54328A443283A7154D558E9411 * value)
	{
		___U3CU3E9__3_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_1_2), (void*)value);
	}
};


// UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c
struct  U3CU3Ec_tDC45B2C4212767583DEE0B7E8F97CF301BD1703B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tDC45B2C4212767583DEE0B7E8F97CF301BD1703B_StaticFields
{
public:
	// UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c::<>9
	U3CU3Ec_tDC45B2C4212767583DEE0B7E8F97CF301BD1703B * ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Rendering.PostProcessing.PostProcessBundle>,UnityEngine.Rendering.PostProcessing.PostProcessBundle> UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c::<>9__54_1
	Func_2_tFBF0790C1CB9999EDB442A545293E9BABEBC7AB5 * ___U3CU3E9__54_1_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDC45B2C4212767583DEE0B7E8F97CF301BD1703B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tDC45B2C4212767583DEE0B7E8F97CF301BD1703B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tDC45B2C4212767583DEE0B7E8F97CF301BD1703B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tDC45B2C4212767583DEE0B7E8F97CF301BD1703B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__54_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDC45B2C4212767583DEE0B7E8F97CF301BD1703B_StaticFields, ___U3CU3E9__54_1_1)); }
	inline Func_2_tFBF0790C1CB9999EDB442A545293E9BABEBC7AB5 * get_U3CU3E9__54_1_1() const { return ___U3CU3E9__54_1_1; }
	inline Func_2_tFBF0790C1CB9999EDB442A545293E9BABEBC7AB5 ** get_address_of_U3CU3E9__54_1_1() { return &___U3CU3E9__54_1_1; }
	inline void set_U3CU3E9__54_1_1(Func_2_tFBF0790C1CB9999EDB442A545293E9BABEBC7AB5 * value)
	{
		___U3CU3E9__54_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__54_1_1), (void*)value);
	}
};


// UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c__DisplayClass54_1
struct  U3CU3Ec__DisplayClass54_1_t0503A8A3B84EDDC793BDAD1BB06397139580EE25  : public RuntimeObject
{
public:
	// System.String UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c__DisplayClass54_1::searchStr
	String_t* ___searchStr_0;

public:
	inline static int32_t get_offset_of_searchStr_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass54_1_t0503A8A3B84EDDC793BDAD1BB06397139580EE25, ___searchStr_0)); }
	inline String_t* get_searchStr_0() const { return ___searchStr_0; }
	inline String_t** get_address_of_searchStr_0() { return &___searchStr_0; }
	inline void set_searchStr_0(String_t* value)
	{
		___searchStr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___searchStr_0), (void*)value);
	}
};


// UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c__DisplayClass54_2
struct  U3CU3Ec__DisplayClass54_2_t4FA51C9B0FB32D60372B20C7B4057723C9DA37AC  : public RuntimeObject
{
public:
	// System.String UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c__DisplayClass54_2::typeName
	String_t* ___typeName_0;

public:
	inline static int32_t get_offset_of_typeName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass54_2_t4FA51C9B0FB32D60372B20C7B4057723C9DA37AC, ___typeName_0)); }
	inline String_t* get_typeName_0() const { return ___typeName_0; }
	inline String_t** get_address_of_typeName_0() { return &___typeName_0; }
	inline void set_typeName_0(String_t* value)
	{
		___typeName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeName_0), (void*)value);
	}
};


// UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c__DisplayClass54_3
struct  U3CU3Ec__DisplayClass54_3_t66E86CF03FBBE19459888FDF4BA21FD17DF0D10C  : public RuntimeObject
{
public:
	// System.String UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c__DisplayClass54_3::typeName
	String_t* ___typeName_0;

public:
	inline static int32_t get_offset_of_typeName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass54_3_t66E86CF03FBBE19459888FDF4BA21FD17DF0D10C, ___typeName_0)); }
	inline String_t* get_typeName_0() const { return ___typeName_0; }
	inline String_t** get_address_of_typeName_0() { return &___typeName_0; }
	inline void set_typeName_0(String_t* value)
	{
		___typeName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeName_0), (void*)value);
	}
};


// UnityEngine.Rendering.PostProcessing.PostProcessLayer/SerializedBundleRef
struct  SerializedBundleRef_tAC358B9BEA3A4944F31770C12A3096C1EE07EADF  : public RuntimeObject
{
public:
	// System.String UnityEngine.Rendering.PostProcessing.PostProcessLayer/SerializedBundleRef::assemblyQualifiedName
	String_t* ___assemblyQualifiedName_0;
	// UnityEngine.Rendering.PostProcessing.PostProcessBundle UnityEngine.Rendering.PostProcessing.PostProcessLayer/SerializedBundleRef::bundle
	PostProcessBundle_tB61A95212353716F4AE3896A6DF3B19AE53FB791 * ___bundle_1;

public:
	inline static int32_t get_offset_of_assemblyQualifiedName_0() { return static_cast<int32_t>(offsetof(SerializedBundleRef_tAC358B9BEA3A4944F31770C12A3096C1EE07EADF, ___assemblyQualifiedName_0)); }
	inline String_t* get_assemblyQualifiedName_0() const { return ___assemblyQualifiedName_0; }
	inline String_t** get_address_of_assemblyQualifiedName_0() { return &___assemblyQualifiedName_0; }
	inline void set_assemblyQualifiedName_0(String_t* value)
	{
		___assemblyQualifiedName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyQualifiedName_0), (void*)value);
	}

	inline static int32_t get_offset_of_bundle_1() { return static_cast<int32_t>(offsetof(SerializedBundleRef_tAC358B9BEA3A4944F31770C12A3096C1EE07EADF, ___bundle_1)); }
	inline PostProcessBundle_tB61A95212353716F4AE3896A6DF3B19AE53FB791 * get_bundle_1() const { return ___bundle_1; }
	inline PostProcessBundle_tB61A95212353716F4AE3896A6DF3B19AE53FB791 ** get_address_of_bundle_1() { return &___bundle_1; }
	inline void set_bundle_1(PostProcessBundle_tB61A95212353716F4AE3896A6DF3B19AE53FB791 * value)
	{
		___bundle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bundle_1), (void*)value);
	}
};


// UnityEngine.Rendering.PostProcessing.PostProcessManager/<>c
struct  U3CU3Ec_t681FA47134D0C4294D8B7D1E0A10BE22028B460E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t681FA47134D0C4294D8B7D1E0A10BE22028B460E_StaticFields
{
public:
	// UnityEngine.Rendering.PostProcessing.PostProcessManager/<>c UnityEngine.Rendering.PostProcessing.PostProcessManager/<>c::<>9
	U3CU3Ec_t681FA47134D0C4294D8B7D1E0A10BE22028B460E * ___U3CU3E9_0;
	// System.Func`2<System.Type,System.Boolean> UnityEngine.Rendering.PostProcessing.PostProcessManager/<>c::<>9__12_0
	Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * ___U3CU3E9__12_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t681FA47134D0C4294D8B7D1E0A10BE22028B460E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t681FA47134D0C4294D8B7D1E0A10BE22028B460E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t681FA47134D0C4294D8B7D1E0A10BE22028B460E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t681FA47134D0C4294D8B7D1E0A10BE22028B460E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t681FA47134D0C4294D8B7D1E0A10BE22028B460E_StaticFields, ___U3CU3E9__12_0_1)); }
	inline Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * get_U3CU3E9__12_0_1() const { return ___U3CU3E9__12_0_1; }
	inline Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 ** get_address_of_U3CU3E9__12_0_1() { return &___U3CU3E9__12_0_1; }
	inline void set_U3CU3E9__12_0_1(Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * value)
	{
		___U3CU3E9__12_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_1), (void*)value);
	}
};


// UnityEngine.Rendering.PostProcessing.PostProcessProfile/<>c
struct  U3CU3Ec_t9177938DD17D2938706D5EE5D16C0A887C4A5481  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t9177938DD17D2938706D5EE5D16C0A887C4A5481_StaticFields
{
public:
	// UnityEngine.Rendering.PostProcessing.PostProcessProfile/<>c UnityEngine.Rendering.PostProcessing.PostProcessProfile/<>c::<>9
	U3CU3Ec_t9177938DD17D2938706D5EE5D16C0A887C4A5481 * ___U3CU3E9_0;
	// System.Predicate`1<UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings> UnityEngine.Rendering.PostProcessing.PostProcessProfile/<>c::<>9__2_0
	Predicate_1_t6B6288F545549FDFF05F1CC35BC9A11D0CD30034 * ___U3CU3E9__2_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9177938DD17D2938706D5EE5D16C0A887C4A5481_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t9177938DD17D2938706D5EE5D16C0A887C4A5481 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t9177938DD17D2938706D5EE5D16C0A887C4A5481 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t9177938DD17D2938706D5EE5D16C0A887C4A5481 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9177938DD17D2938706D5EE5D16C0A887C4A5481_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Predicate_1_t6B6288F545549FDFF05F1CC35BC9A11D0CD30034 * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Predicate_1_t6B6288F545549FDFF05F1CC35BC9A11D0CD30034 ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Predicate_1_t6B6288F545549FDFF05F1CC35BC9A11D0CD30034 * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_1), (void*)value);
	}
};


// UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders
struct  ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B  : public RuntimeObject
{
public:
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::autoExposure
	ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * ___autoExposure_0;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::exposureHistogram
	ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * ___exposureHistogram_1;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::lut3DBaker
	ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * ___lut3DBaker_2;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::texture3dLerp
	ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * ___texture3dLerp_3;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::gammaHistogram
	ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * ___gammaHistogram_4;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::waveform
	ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * ___waveform_5;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::vectorscope
	ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * ___vectorscope_6;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::multiScaleAODownsample1
	ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * ___multiScaleAODownsample1_7;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::multiScaleAODownsample2
	ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * ___multiScaleAODownsample2_8;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::multiScaleAORender
	ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * ___multiScaleAORender_9;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::multiScaleAOUpsample
	ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * ___multiScaleAOUpsample_10;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::gaussianDownsample
	ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * ___gaussianDownsample_11;

public:
	inline static int32_t get_offset_of_autoExposure_0() { return static_cast<int32_t>(offsetof(ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B, ___autoExposure_0)); }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * get_autoExposure_0() const { return ___autoExposure_0; }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 ** get_address_of_autoExposure_0() { return &___autoExposure_0; }
	inline void set_autoExposure_0(ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * value)
	{
		___autoExposure_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___autoExposure_0), (void*)value);
	}

	inline static int32_t get_offset_of_exposureHistogram_1() { return static_cast<int32_t>(offsetof(ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B, ___exposureHistogram_1)); }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * get_exposureHistogram_1() const { return ___exposureHistogram_1; }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 ** get_address_of_exposureHistogram_1() { return &___exposureHistogram_1; }
	inline void set_exposureHistogram_1(ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * value)
	{
		___exposureHistogram_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exposureHistogram_1), (void*)value);
	}

	inline static int32_t get_offset_of_lut3DBaker_2() { return static_cast<int32_t>(offsetof(ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B, ___lut3DBaker_2)); }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * get_lut3DBaker_2() const { return ___lut3DBaker_2; }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 ** get_address_of_lut3DBaker_2() { return &___lut3DBaker_2; }
	inline void set_lut3DBaker_2(ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * value)
	{
		___lut3DBaker_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lut3DBaker_2), (void*)value);
	}

	inline static int32_t get_offset_of_texture3dLerp_3() { return static_cast<int32_t>(offsetof(ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B, ___texture3dLerp_3)); }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * get_texture3dLerp_3() const { return ___texture3dLerp_3; }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 ** get_address_of_texture3dLerp_3() { return &___texture3dLerp_3; }
	inline void set_texture3dLerp_3(ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * value)
	{
		___texture3dLerp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___texture3dLerp_3), (void*)value);
	}

	inline static int32_t get_offset_of_gammaHistogram_4() { return static_cast<int32_t>(offsetof(ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B, ___gammaHistogram_4)); }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * get_gammaHistogram_4() const { return ___gammaHistogram_4; }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 ** get_address_of_gammaHistogram_4() { return &___gammaHistogram_4; }
	inline void set_gammaHistogram_4(ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * value)
	{
		___gammaHistogram_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gammaHistogram_4), (void*)value);
	}

	inline static int32_t get_offset_of_waveform_5() { return static_cast<int32_t>(offsetof(ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B, ___waveform_5)); }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * get_waveform_5() const { return ___waveform_5; }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 ** get_address_of_waveform_5() { return &___waveform_5; }
	inline void set_waveform_5(ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * value)
	{
		___waveform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waveform_5), (void*)value);
	}

	inline static int32_t get_offset_of_vectorscope_6() { return static_cast<int32_t>(offsetof(ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B, ___vectorscope_6)); }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * get_vectorscope_6() const { return ___vectorscope_6; }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 ** get_address_of_vectorscope_6() { return &___vectorscope_6; }
	inline void set_vectorscope_6(ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * value)
	{
		___vectorscope_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vectorscope_6), (void*)value);
	}

	inline static int32_t get_offset_of_multiScaleAODownsample1_7() { return static_cast<int32_t>(offsetof(ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B, ___multiScaleAODownsample1_7)); }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * get_multiScaleAODownsample1_7() const { return ___multiScaleAODownsample1_7; }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 ** get_address_of_multiScaleAODownsample1_7() { return &___multiScaleAODownsample1_7; }
	inline void set_multiScaleAODownsample1_7(ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * value)
	{
		___multiScaleAODownsample1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___multiScaleAODownsample1_7), (void*)value);
	}

	inline static int32_t get_offset_of_multiScaleAODownsample2_8() { return static_cast<int32_t>(offsetof(ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B, ___multiScaleAODownsample2_8)); }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * get_multiScaleAODownsample2_8() const { return ___multiScaleAODownsample2_8; }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 ** get_address_of_multiScaleAODownsample2_8() { return &___multiScaleAODownsample2_8; }
	inline void set_multiScaleAODownsample2_8(ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * value)
	{
		___multiScaleAODownsample2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___multiScaleAODownsample2_8), (void*)value);
	}

	inline static int32_t get_offset_of_multiScaleAORender_9() { return static_cast<int32_t>(offsetof(ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B, ___multiScaleAORender_9)); }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * get_multiScaleAORender_9() const { return ___multiScaleAORender_9; }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 ** get_address_of_multiScaleAORender_9() { return &___multiScaleAORender_9; }
	inline void set_multiScaleAORender_9(ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * value)
	{
		___multiScaleAORender_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___multiScaleAORender_9), (void*)value);
	}

	inline static int32_t get_offset_of_multiScaleAOUpsample_10() { return static_cast<int32_t>(offsetof(ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B, ___multiScaleAOUpsample_10)); }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * get_multiScaleAOUpsample_10() const { return ___multiScaleAOUpsample_10; }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 ** get_address_of_multiScaleAOUpsample_10() { return &___multiScaleAOUpsample_10; }
	inline void set_multiScaleAOUpsample_10(ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * value)
	{
		___multiScaleAOUpsample_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___multiScaleAOUpsample_10), (void*)value);
	}

	inline static int32_t get_offset_of_gaussianDownsample_11() { return static_cast<int32_t>(offsetof(ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B, ___gaussianDownsample_11)); }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * get_gaussianDownsample_11() const { return ___gaussianDownsample_11; }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 ** get_address_of_gaussianDownsample_11() { return &___gaussianDownsample_11; }
	inline void set_gaussianDownsample_11(ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * value)
	{
		___gaussianDownsample_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gaussianDownsample_11), (void*)value);
	}
};


// UnityEngine.Rendering.PostProcessing.PostProcessResources/SMAALuts
struct  SMAALuts_t7B662D41B4C6B2CF97D9C5363B61AA14808C2932  : public RuntimeObject
{
public:
	// UnityEngine.Texture2D UnityEngine.Rendering.PostProcessing.PostProcessResources/SMAALuts::area
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___area_0;
	// UnityEngine.Texture2D UnityEngine.Rendering.PostProcessing.PostProcessResources/SMAALuts::search
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___search_1;

public:
	inline static int32_t get_offset_of_area_0() { return static_cast<int32_t>(offsetof(SMAALuts_t7B662D41B4C6B2CF97D9C5363B61AA14808C2932, ___area_0)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_area_0() const { return ___area_0; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_area_0() { return &___area_0; }
	inline void set_area_0(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___area_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___area_0), (void*)value);
	}

	inline static int32_t get_offset_of_search_1() { return static_cast<int32_t>(offsetof(SMAALuts_t7B662D41B4C6B2CF97D9C5363B61AA14808C2932, ___search_1)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_search_1() const { return ___search_1; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_search_1() { return &___search_1; }
	inline void set_search_1(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___search_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___search_1), (void*)value);
	}
};


// UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders
struct  Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2  : public RuntimeObject
{
public:
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::bloom
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___bloom_0;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::copy
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___copy_1;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::copyStd
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___copyStd_2;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::copyStdFromTexArray
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___copyStdFromTexArray_3;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::copyStdFromDoubleWide
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___copyStdFromDoubleWide_4;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::discardAlpha
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___discardAlpha_5;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::depthOfField
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___depthOfField_6;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::finalPass
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___finalPass_7;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::grainBaker
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___grainBaker_8;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::motionBlur
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___motionBlur_9;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::temporalAntialiasing
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___temporalAntialiasing_10;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::subpixelMorphologicalAntialiasing
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___subpixelMorphologicalAntialiasing_11;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::texture2dLerp
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___texture2dLerp_12;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::uber
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___uber_13;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::lut2DBaker
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___lut2DBaker_14;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::lightMeter
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___lightMeter_15;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::gammaHistogram
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___gammaHistogram_16;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::waveform
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___waveform_17;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::vectorscope
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___vectorscope_18;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::debugOverlays
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___debugOverlays_19;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::deferredFog
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___deferredFog_20;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::scalableAO
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___scalableAO_21;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::multiScaleAO
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___multiScaleAO_22;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::screenSpaceReflections
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___screenSpaceReflections_23;

public:
	inline static int32_t get_offset_of_bloom_0() { return static_cast<int32_t>(offsetof(Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2, ___bloom_0)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_bloom_0() const { return ___bloom_0; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_bloom_0() { return &___bloom_0; }
	inline void set_bloom_0(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___bloom_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bloom_0), (void*)value);
	}

	inline static int32_t get_offset_of_copy_1() { return static_cast<int32_t>(offsetof(Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2, ___copy_1)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_copy_1() const { return ___copy_1; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_copy_1() { return &___copy_1; }
	inline void set_copy_1(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___copy_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___copy_1), (void*)value);
	}

	inline static int32_t get_offset_of_copyStd_2() { return static_cast<int32_t>(offsetof(Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2, ___copyStd_2)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_copyStd_2() const { return ___copyStd_2; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_copyStd_2() { return &___copyStd_2; }
	inline void set_copyStd_2(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___copyStd_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___copyStd_2), (void*)value);
	}

	inline static int32_t get_offset_of_copyStdFromTexArray_3() { return static_cast<int32_t>(offsetof(Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2, ___copyStdFromTexArray_3)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_copyStdFromTexArray_3() const { return ___copyStdFromTexArray_3; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_copyStdFromTexArray_3() { return &___copyStdFromTexArray_3; }
	inline void set_copyStdFromTexArray_3(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___copyStdFromTexArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___copyStdFromTexArray_3), (void*)value);
	}

	inline static int32_t get_offset_of_copyStdFromDoubleWide_4() { return static_cast<int32_t>(offsetof(Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2, ___copyStdFromDoubleWide_4)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_copyStdFromDoubleWide_4() const { return ___copyStdFromDoubleWide_4; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_copyStdFromDoubleWide_4() { return &___copyStdFromDoubleWide_4; }
	inline void set_copyStdFromDoubleWide_4(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___copyStdFromDoubleWide_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___copyStdFromDoubleWide_4), (void*)value);
	}

	inline static int32_t get_offset_of_discardAlpha_5() { return static_cast<int32_t>(offsetof(Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2, ___discardAlpha_5)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_discardAlpha_5() const { return ___discardAlpha_5; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_discardAlpha_5() { return &___discardAlpha_5; }
	inline void set_discardAlpha_5(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___discardAlpha_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___discardAlpha_5), (void*)value);
	}

	inline static int32_t get_offset_of_depthOfField_6() { return static_cast<int32_t>(offsetof(Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2, ___depthOfField_6)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_depthOfField_6() const { return ___depthOfField_6; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_depthOfField_6() { return &___depthOfField_6; }
	inline void set_depthOfField_6(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___depthOfField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___depthOfField_6), (void*)value);
	}

	inline static int32_t get_offset_of_finalPass_7() { return static_cast<int32_t>(offsetof(Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2, ___finalPass_7)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_finalPass_7() const { return ___finalPass_7; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_finalPass_7() { return &___finalPass_7; }
	inline void set_finalPass_7(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___finalPass_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___finalPass_7), (void*)value);
	}

	inline static int32_t get_offset_of_grainBaker_8() { return static_cast<int32_t>(offsetof(Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2, ___grainBaker_8)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_grainBaker_8() const { return ___grainBaker_8; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_grainBaker_8() { return &___grainBaker_8; }
	inline void set_grainBaker_8(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___grainBaker_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grainBaker_8), (void*)value);
	}

	inline static int32_t get_offset_of_motionBlur_9() { return static_cast<int32_t>(offsetof(Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2, ___motionBlur_9)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_motionBlur_9() const { return ___motionBlur_9; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_motionBlur_9() { return &___motionBlur_9; }
	inline void set_motionBlur_9(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___motionBlur_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___motionBlur_9), (void*)value);
	}

	inline static int32_t get_offset_of_temporalAntialiasing_10() { return static_cast<int32_t>(offsetof(Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2, ___temporalAntialiasing_10)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_temporalAntialiasing_10() const { return ___temporalAntialiasing_10; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_temporalAntialiasing_10() { return &___temporalAntialiasing_10; }
	inline void set_temporalAntialiasing_10(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___temporalAntialiasing_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temporalAntialiasing_10), (void*)value);
	}

	inline static int32_t get_offset_of_subpixelMorphologicalAntialiasing_11() { return static_cast<int32_t>(offsetof(Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2, ___subpixelMorphologicalAntialiasing_11)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_subpixelMorphologicalAntialiasing_11() const { return ___subpixelMorphologicalAntialiasing_11; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_subpixelMorphologicalAntialiasing_11() { return &___subpixelMorphologicalAntialiasing_11; }
	inline void set_subpixelMorphologicalAntialiasing_11(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___subpixelMorphologicalAntialiasing_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subpixelMorphologicalAntialiasing_11), (void*)value);
	}

	inline static int32_t get_offset_of_texture2dLerp_12() { return static_cast<int32_t>(offsetof(Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2, ___texture2dLerp_12)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_texture2dLerp_12() const { return ___texture2dLerp_12; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_texture2dLerp_12() { return &___texture2dLerp_12; }
	inline void set_texture2dLerp_12(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___texture2dLerp_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___texture2dLerp_12), (void*)value);
	}

	inline static int32_t get_offset_of_uber_13() { return static_cast<int32_t>(offsetof(Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2, ___uber_13)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_uber_13() const { return ___uber_13; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_uber_13() { return &___uber_13; }
	inline void set_uber_13(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___uber_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uber_13), (void*)value);
	}

	inline static int32_t get_offset_of_lut2DBaker_14() { return static_cast<int32_t>(offsetof(Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2, ___lut2DBaker_14)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_lut2DBaker_14() const { return ___lut2DBaker_14; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_lut2DBaker_14() { return &___lut2DBaker_14; }
	inline void set_lut2DBaker_14(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___lut2DBaker_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lut2DBaker_14), (void*)value);
	}

	inline static int32_t get_offset_of_lightMeter_15() { return static_cast<int32_t>(offsetof(Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2, ___lightMeter_15)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_lightMeter_15() const { return ___lightMeter_15; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_lightMeter_15() { return &___lightMeter_15; }
	inline void set_lightMeter_15(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___lightMeter_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lightMeter_15), (void*)value);
	}

	inline static int32_t get_offset_of_gammaHistogram_16() { return static_cast<int32_t>(offsetof(Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2, ___gammaHistogram_16)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_gammaHistogram_16() const { return ___gammaHistogram_16; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_gammaHistogram_16() { return &___gammaHistogram_16; }
	inline void set_gammaHistogram_16(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___gammaHistogram_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gammaHistogram_16), (void*)value);
	}

	inline static int32_t get_offset_of_waveform_17() { return static_cast<int32_t>(offsetof(Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2, ___waveform_17)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_waveform_17() const { return ___waveform_17; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_waveform_17() { return &___waveform_17; }
	inline void set_waveform_17(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___waveform_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waveform_17), (void*)value);
	}

	inline static int32_t get_offset_of_vectorscope_18() { return static_cast<int32_t>(offsetof(Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2, ___vectorscope_18)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_vectorscope_18() const { return ___vectorscope_18; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_vectorscope_18() { return &___vectorscope_18; }
	inline void set_vectorscope_18(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___vectorscope_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vectorscope_18), (void*)value);
	}

	inline static int32_t get_offset_of_debugOverlays_19() { return static_cast<int32_t>(offsetof(Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2, ___debugOverlays_19)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_debugOverlays_19() const { return ___debugOverlays_19; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_debugOverlays_19() { return &___debugOverlays_19; }
	inline void set_debugOverlays_19(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___debugOverlays_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugOverlays_19), (void*)value);
	}

	inline static int32_t get_offset_of_deferredFog_20() { return static_cast<int32_t>(offsetof(Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2, ___deferredFog_20)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_deferredFog_20() const { return ___deferredFog_20; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_deferredFog_20() { return &___deferredFog_20; }
	inline void set_deferredFog_20(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___deferredFog_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deferredFog_20), (void*)value);
	}

	inline static int32_t get_offset_of_scalableAO_21() { return static_cast<int32_t>(offsetof(Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2, ___scalableAO_21)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_scalableAO_21() const { return ___scalableAO_21; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_scalableAO_21() { return &___scalableAO_21; }
	inline void set_scalableAO_21(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___scalableAO_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scalableAO_21), (void*)value);
	}

	inline static int32_t get_offset_of_multiScaleAO_22() { return static_cast<int32_t>(offsetof(Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2, ___multiScaleAO_22)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_multiScaleAO_22() const { return ___multiScaleAO_22; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_multiScaleAO_22() { return &___multiScaleAO_22; }
	inline void set_multiScaleAO_22(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___multiScaleAO_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___multiScaleAO_22), (void*)value);
	}

	inline static int32_t get_offset_of_screenSpaceReflections_23() { return static_cast<int32_t>(offsetof(Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2, ___screenSpaceReflections_23)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_screenSpaceReflections_23() const { return ___screenSpaceReflections_23; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_screenSpaceReflections_23() { return &___screenSpaceReflections_23; }
	inline void set_screenSpaceReflections_23(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___screenSpaceReflections_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___screenSpaceReflections_23), (void*)value);
	}
};


// UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<>c
struct  U3CU3Ec_tE39BDF7A48F8422A0FF101B5F67BD03D1237B2F8  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE39BDF7A48F8422A0FF101B5F67BD03D1237B2F8_StaticFields
{
public:
	// UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<>c UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<>c::<>9
	U3CU3Ec_tE39BDF7A48F8422A0FF101B5F67BD03D1237B2F8 * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>> UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<>c::<>9__87_0
	Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 * ___U3CU3E9__87_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE39BDF7A48F8422A0FF101B5F67BD03D1237B2F8_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE39BDF7A48F8422A0FF101B5F67BD03D1237B2F8 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE39BDF7A48F8422A0FF101B5F67BD03D1237B2F8 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE39BDF7A48F8422A0FF101B5F67BD03D1237B2F8 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__87_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE39BDF7A48F8422A0FF101B5F67BD03D1237B2F8_StaticFields, ___U3CU3E9__87_0_1)); }
	inline Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 * get_U3CU3E9__87_0_1() const { return ___U3CU3E9__87_0_1; }
	inline Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 ** get_address_of_U3CU3E9__87_0_1() { return &___U3CU3E9__87_0_1; }
	inline void set_U3CU3E9__87_0_1(Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 * value)
	{
		___U3CU3E9__87_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__87_0_1), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.RenderTexture>
struct  Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D, ___list_0)); }
	inline List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * get_list_0() const { return ___list_0; }
	inline List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D, ___current_3)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_current_3() const { return ___current_3; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
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


// System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Rendering.PostProcessing.PostProcessBundle>
struct  KeyValuePair_2_t1AD67FE677906939CF01F9FFF580AD52E81866D4 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Type_t * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	PostProcessBundle_tB61A95212353716F4AE3896A6DF3B19AE53FB791 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1AD67FE677906939CF01F9FFF580AD52E81866D4, ___key_0)); }
	inline Type_t * get_key_0() const { return ___key_0; }
	inline Type_t ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Type_t * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1AD67FE677906939CF01F9FFF580AD52E81866D4, ___value_1)); }
	inline PostProcessBundle_tB61A95212353716F4AE3896A6DF3B19AE53FB791 * get_value_1() const { return ___value_1; }
	inline PostProcessBundle_tB61A95212353716F4AE3896A6DF3B19AE53FB791 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(PostProcessBundle_tB61A95212353716F4AE3896A6DF3B19AE53FB791 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>
struct  ParameterOverride_1_t44F5A562A85AD213D94BE9A0DF3DC87C847C3EDC  : public ParameterOverride_tED887E59B87A5DD3BFDAAAF745F82D9080FA4784
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t44F5A562A85AD213D94BE9A0DF3DC87C847C3EDC, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>
struct  ParameterOverride_1_tE564C5FA9AEBC9DB9DEB9AA8668AB1C53698D7C1  : public ParameterOverride_tED887E59B87A5DD3BFDAAAF745F82D9080FA4784
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	float ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_tE564C5FA9AEBC9DB9DEB9AA8668AB1C53698D7C1, ___value_1)); }
	inline float get_value_1() const { return ___value_1; }
	inline float* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(float value)
	{
		___value_1 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.Spline>
struct  ParameterOverride_1_t59B7B43BE6BA4482219D94175E4F900B7AD9BF9E  : public ParameterOverride_tED887E59B87A5DD3BFDAAAF745F82D9080FA4784
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 * ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t59B7B43BE6BA4482219D94175E4F900B7AD9BF9E, ___value_1)); }
	inline Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 * get_value_1() const { return ___value_1; }
	inline Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Texture>
struct  ParameterOverride_1_t728745CADEFE1DB4C2C14F6DD6EA53A447A763E4  : public ParameterOverride_tED887E59B87A5DD3BFDAAAF745F82D9080FA4784
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t728745CADEFE1DB4C2C14F6DD6EA53A447A763E4, ___value_1)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_value_1() const { return ___value_1; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<System.Object>
struct  PostProcessEffectRenderer_1_t6C11DDDFC60F401B58CDCCD46359E86BB3487DDF  : public PostProcessEffectRenderer_tBF3AA4C1C071A7EF17FF7BFC5467DDAF991617DB
{
public:
	// T UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1::<settings>k__BackingField
	RuntimeObject * ___U3CsettingsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CsettingsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessEffectRenderer_1_t6C11DDDFC60F401B58CDCCD46359E86BB3487DDF, ___U3CsettingsU3Ek__BackingField_1)); }
	inline RuntimeObject * get_U3CsettingsU3Ek__BackingField_1() const { return ___U3CsettingsU3Ek__BackingField_1; }
	inline RuntimeObject ** get_address_of_U3CsettingsU3Ek__BackingField_1() { return &___U3CsettingsU3Ek__BackingField_1; }
	inline void set_U3CsettingsU3Ek__BackingField_1(RuntimeObject * value)
	{
		___U3CsettingsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsettingsU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<UnityEngine.Rendering.PostProcessing.Vignette>
struct  PostProcessEffectRenderer_1_t9E77F2B389318EDAB4E13470F1D361199095A582  : public PostProcessEffectRenderer_tBF3AA4C1C071A7EF17FF7BFC5467DDAF991617DB
{
public:
	// T UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1::<settings>k__BackingField
	Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139 * ___U3CsettingsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CsettingsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessEffectRenderer_1_t9E77F2B389318EDAB4E13470F1D361199095A582, ___U3CsettingsU3Ek__BackingField_1)); }
	inline Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139 * get_U3CsettingsU3Ek__BackingField_1() const { return ___U3CsettingsU3Ek__BackingField_1; }
	inline Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139 ** get_address_of_U3CsettingsU3Ek__BackingField_1() { return &___U3CsettingsU3Ek__BackingField_1; }
	inline void set_U3CsettingsU3Ek__BackingField_1(Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139 * value)
	{
		___U3CsettingsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsettingsU3Ek__BackingField_1), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct  IntPtr_t 
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


// UnityEngine.Keyframe
struct  Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
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


// System.ObsoleteAttribute
struct  ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;

public:
	inline static int32_t get_offset_of__message_0() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____message_0)); }
	inline String_t* get__message_0() const { return ____message_0; }
	inline String_t** get_address_of__message_0() { return &____message_0; }
	inline void set__message_0(String_t* value)
	{
		____message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_0), (void*)value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____error_1)); }
	inline bool get__error_1() const { return ____error_1; }
	inline bool* get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(bool value)
	{
		____error_1 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
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


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
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
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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


// UnityEngine.Rendering.PostProcessing.VectorscopeMonitor
struct  VectorscopeMonitor_t5E5341810F7316F73442ADBEE0C5EBC1E282DE05  : public Monitor_tEB1AC1F82D87F6BEE4839CF882097D5889302372
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.VectorscopeMonitor::size
	int32_t ___size_2;
	// System.Single UnityEngine.Rendering.PostProcessing.VectorscopeMonitor::exposure
	float ___exposure_3;
	// UnityEngine.ComputeBuffer UnityEngine.Rendering.PostProcessing.VectorscopeMonitor::m_Data
	ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * ___m_Data_4;

public:
	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(VectorscopeMonitor_t5E5341810F7316F73442ADBEE0C5EBC1E282DE05, ___size_2)); }
	inline int32_t get_size_2() const { return ___size_2; }
	inline int32_t* get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(int32_t value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_exposure_3() { return static_cast<int32_t>(offsetof(VectorscopeMonitor_t5E5341810F7316F73442ADBEE0C5EBC1E282DE05, ___exposure_3)); }
	inline float get_exposure_3() const { return ___exposure_3; }
	inline float* get_address_of_exposure_3() { return &___exposure_3; }
	inline void set_exposure_3(float value)
	{
		___exposure_3 = value;
	}

	inline static int32_t get_offset_of_m_Data_4() { return static_cast<int32_t>(offsetof(VectorscopeMonitor_t5E5341810F7316F73442ADBEE0C5EBC1E282DE05, ___m_Data_4)); }
	inline ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * get_m_Data_4() const { return ___m_Data_4; }
	inline ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 ** get_address_of_m_Data_4() { return &___m_Data_4; }
	inline void set_m_Data_4(ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * value)
	{
		___m_Data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Data_4), (void*)value);
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// UnityEngine.Rendering.PostProcessing.WaveformMonitor
struct  WaveformMonitor_tE009C975236895DCB24F45048BF99F2443B66FF5  : public Monitor_tEB1AC1F82D87F6BEE4839CF882097D5889302372
{
public:
	// System.Single UnityEngine.Rendering.PostProcessing.WaveformMonitor::exposure
	float ___exposure_2;
	// System.Int32 UnityEngine.Rendering.PostProcessing.WaveformMonitor::height
	int32_t ___height_3;
	// UnityEngine.ComputeBuffer UnityEngine.Rendering.PostProcessing.WaveformMonitor::m_Data
	ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * ___m_Data_4;

public:
	inline static int32_t get_offset_of_exposure_2() { return static_cast<int32_t>(offsetof(WaveformMonitor_tE009C975236895DCB24F45048BF99F2443B66FF5, ___exposure_2)); }
	inline float get_exposure_2() const { return ___exposure_2; }
	inline float* get_address_of_exposure_2() { return &___exposure_2; }
	inline void set_exposure_2(float value)
	{
		___exposure_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(WaveformMonitor_tE009C975236895DCB24F45048BF99F2443B66FF5, ___height_3)); }
	inline int32_t get_height_3() const { return ___height_3; }
	inline int32_t* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(int32_t value)
	{
		___height_3 = value;
	}

	inline static int32_t get_offset_of_m_Data_4() { return static_cast<int32_t>(offsetof(WaveformMonitor_tE009C975236895DCB24F45048BF99F2443B66FF5, ___m_Data_4)); }
	inline ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * get_m_Data_4() const { return ___m_Data_4; }
	inline ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 ** get_address_of_m_Data_4() { return &___m_Data_4; }
	inline void set_m_Data_4(ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * value)
	{
		___m_Data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Data_4), (void*)value);
	}
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D20
struct  __StaticArrayInitTypeSizeU3D20_tD909A6F2769690F3D9DA25C5DA4EA2496F5F73E7 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tD909A6F2769690F3D9DA25C5DA4EA2496F5F73E7__padding[20];
	};

public:
};


// UnityEngine.Rendering.PostProcessing.BloomRenderer/Level
struct  Level_tB2EEF9B6FC526D3C04DD806B6D89D9208DF2CFB8 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.BloomRenderer/Level::down
	int32_t ___down_0;
	// System.Int32 UnityEngine.Rendering.PostProcessing.BloomRenderer/Level::up
	int32_t ___up_1;

public:
	inline static int32_t get_offset_of_down_0() { return static_cast<int32_t>(offsetof(Level_tB2EEF9B6FC526D3C04DD806B6D89D9208DF2CFB8, ___down_0)); }
	inline int32_t get_down_0() const { return ___down_0; }
	inline int32_t* get_address_of_down_0() { return &___down_0; }
	inline void set_down_0(int32_t value)
	{
		___down_0 = value;
	}

	inline static int32_t get_offset_of_up_1() { return static_cast<int32_t>(offsetof(Level_tB2EEF9B6FC526D3C04DD806B6D89D9208DF2CFB8, ___up_1)); }
	inline int32_t get_up_1() const { return ___up_1; }
	inline int32_t* get_address_of_up_1() { return &___up_1; }
	inline void set_up_1(int32_t value)
	{
		___up_1 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.HableCurve/DirectParams
struct  DirectParams_tF6FBF7F2008CFAF50B95942A9BD517AB444905EE 
{
public:
	// System.Single UnityEngine.Rendering.PostProcessing.HableCurve/DirectParams::x0
	float ___x0_0;
	// System.Single UnityEngine.Rendering.PostProcessing.HableCurve/DirectParams::y0
	float ___y0_1;
	// System.Single UnityEngine.Rendering.PostProcessing.HableCurve/DirectParams::x1
	float ___x1_2;
	// System.Single UnityEngine.Rendering.PostProcessing.HableCurve/DirectParams::y1
	float ___y1_3;
	// System.Single UnityEngine.Rendering.PostProcessing.HableCurve/DirectParams::W
	float ___W_4;
	// System.Single UnityEngine.Rendering.PostProcessing.HableCurve/DirectParams::overshootX
	float ___overshootX_5;
	// System.Single UnityEngine.Rendering.PostProcessing.HableCurve/DirectParams::overshootY
	float ___overshootY_6;
	// System.Single UnityEngine.Rendering.PostProcessing.HableCurve/DirectParams::gamma
	float ___gamma_7;

public:
	inline static int32_t get_offset_of_x0_0() { return static_cast<int32_t>(offsetof(DirectParams_tF6FBF7F2008CFAF50B95942A9BD517AB444905EE, ___x0_0)); }
	inline float get_x0_0() const { return ___x0_0; }
	inline float* get_address_of_x0_0() { return &___x0_0; }
	inline void set_x0_0(float value)
	{
		___x0_0 = value;
	}

	inline static int32_t get_offset_of_y0_1() { return static_cast<int32_t>(offsetof(DirectParams_tF6FBF7F2008CFAF50B95942A9BD517AB444905EE, ___y0_1)); }
	inline float get_y0_1() const { return ___y0_1; }
	inline float* get_address_of_y0_1() { return &___y0_1; }
	inline void set_y0_1(float value)
	{
		___y0_1 = value;
	}

	inline static int32_t get_offset_of_x1_2() { return static_cast<int32_t>(offsetof(DirectParams_tF6FBF7F2008CFAF50B95942A9BD517AB444905EE, ___x1_2)); }
	inline float get_x1_2() const { return ___x1_2; }
	inline float* get_address_of_x1_2() { return &___x1_2; }
	inline void set_x1_2(float value)
	{
		___x1_2 = value;
	}

	inline static int32_t get_offset_of_y1_3() { return static_cast<int32_t>(offsetof(DirectParams_tF6FBF7F2008CFAF50B95942A9BD517AB444905EE, ___y1_3)); }
	inline float get_y1_3() const { return ___y1_3; }
	inline float* get_address_of_y1_3() { return &___y1_3; }
	inline void set_y1_3(float value)
	{
		___y1_3 = value;
	}

	inline static int32_t get_offset_of_W_4() { return static_cast<int32_t>(offsetof(DirectParams_tF6FBF7F2008CFAF50B95942A9BD517AB444905EE, ___W_4)); }
	inline float get_W_4() const { return ___W_4; }
	inline float* get_address_of_W_4() { return &___W_4; }
	inline void set_W_4(float value)
	{
		___W_4 = value;
	}

	inline static int32_t get_offset_of_overshootX_5() { return static_cast<int32_t>(offsetof(DirectParams_tF6FBF7F2008CFAF50B95942A9BD517AB444905EE, ___overshootX_5)); }
	inline float get_overshootX_5() const { return ___overshootX_5; }
	inline float* get_address_of_overshootX_5() { return &___overshootX_5; }
	inline void set_overshootX_5(float value)
	{
		___overshootX_5 = value;
	}

	inline static int32_t get_offset_of_overshootY_6() { return static_cast<int32_t>(offsetof(DirectParams_tF6FBF7F2008CFAF50B95942A9BD517AB444905EE, ___overshootY_6)); }
	inline float get_overshootY_6() const { return ___overshootY_6; }
	inline float* get_address_of_overshootY_6() { return &___overshootY_6; }
	inline void set_overshootY_6(float value)
	{
		___overshootY_6 = value;
	}

	inline static int32_t get_offset_of_gamma_7() { return static_cast<int32_t>(offsetof(DirectParams_tF6FBF7F2008CFAF50B95942A9BD517AB444905EE, ___gamma_7)); }
	inline float get_gamma_7() const { return ___gamma_7; }
	inline float* get_address_of_gamma_7() { return &___gamma_7; }
	inline void set_gamma_7(float value)
	{
		___gamma_7 = value;
	}
};


// System.Nullable`1<UnityEngine.Rect>
struct  Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE 
{
public:
	// T System.Nullable`1::value
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE, ___value_0)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_value_0() const { return ___value_0; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>
struct  ParameterOverride_1_t694D598380408B6C9B381BE752E69EEBE4FE4EED  : public ParameterOverride_tED887E59B87A5DD3BFDAAAF745F82D9080FA4784
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t694D598380408B6C9B381BE752E69EEBE4FE4EED, ___value_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_value_1() const { return ___value_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___value_1 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>
struct  ParameterOverride_1_tA1EC3D90C3A54AC1167AD63F5340CDECED8BDC9F  : public ParameterOverride_tED887E59B87A5DD3BFDAAAF745F82D9080FA4784
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_tA1EC3D90C3A54AC1167AD63F5340CDECED8BDC9F, ___value_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_value_1() const { return ___value_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___value_1 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>
struct  ParameterOverride_1_t2A72895E2C56AB0AFB2436C4C8523C5553ED32F3  : public ParameterOverride_tED887E59B87A5DD3BFDAAAF745F82D9080FA4784
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t2A72895E2C56AB0AFB2436C4C8523C5553ED32F3, ___value_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_value_1() const { return ___value_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___value_1 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>
struct  ParameterOverride_1_tDC434805B157596FAACBAB390CC666791BAC0B01  : public ParameterOverride_tED887E59B87A5DD3BFDAAAF745F82D9080FA4784
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_tDC434805B157596FAACBAB390CC666791BAC0B01, ___value_1)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_value_1() const { return ___value_1; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___value_1 = value;
	}
};


// UnityEngine.AnimationCurve
struct  AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
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


// UnityEngine.Rendering.PostProcessing.BoolParameter
struct  BoolParameter_t4EDC330A9E3F5830FCE384CE1FF707D3276EBF80  : public ParameterOverride_1_t44F5A562A85AD213D94BE9A0DF3DC87C847C3EDC
{
public:

public:
};


// UnityEngine.Rendering.BuiltinRenderTextureType
struct  BuiltinRenderTextureType_t89FFB8A7C9095150BCA40E573A73664CC37F023A 
{
public:
	// System.Int32 UnityEngine.Rendering.BuiltinRenderTextureType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BuiltinRenderTextureType_t89FFB8A7C9095150BCA40E573A73664CC37F023A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.ColorBlindnessType
struct  ColorBlindnessType_tBC3BD816BF81227B80A2FB4D44CA06BF105D1ED4 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.ColorBlindnessType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorBlindnessType_tBC3BD816BF81227B80A2FB4D44CA06BF105D1ED4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.CommandBuffer
struct  CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Rendering.CommandBuffer::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.ComputeBuffer
struct  ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.ComputeBuffer::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.CubemapFace
struct  CubemapFace_t74FBCA71A21252C2E10E256E61FE0B1E09D7B9E5 
{
public:
	// System.Int32 UnityEngine.CubemapFace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CubemapFace_t74FBCA71A21252C2E10E256E61FE0B1E09D7B9E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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

// UnityEngine.DepthTextureMode
struct  DepthTextureMode_t4A8E08C41731918FB0D7CA5C6848E3864A0DC09A 
{
public:
	// System.Int32 UnityEngine.DepthTextureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DepthTextureMode_t4A8E08C41731918FB0D7CA5C6848E3864A0DC09A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
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

// UnityEngine.FilterMode
struct  FilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19 
{
public:
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.FloatParameter
struct  FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0  : public ParameterOverride_1_tE564C5FA9AEBC9DB9DEB9AA8668AB1C53698D7C1
{
public:

public:
};


// UnityEngine.Rendering.GraphicsDeviceType
struct  GraphicsDeviceType_t531071CD9311C868D1279D2550F83670D18FB779 
{
public:
	// System.Int32 UnityEngine.Rendering.GraphicsDeviceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GraphicsDeviceType_t531071CD9311C868D1279D2550F83670D18FB779, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.Rendering.GraphicsFormat
struct  GraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.GraphicsFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
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


// UnityEngine.MaterialPropertyBlock
struct  MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Rendering.PostProcessing.PostProcessEvent
struct  PostProcessEvent_t49A3195949B4137B69EA2B9974FDFF1B4D88A43D 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessEvent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PostProcessEvent_t49A3195949B4137B69EA2B9974FDFF1B4D88A43D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureCreationFlags
struct  RenderTextureCreationFlags_t24A9C99A84202C1F13828D9F5693BE46CFBD61F3 
{
public:
	// System.Int32 UnityEngine.RenderTextureCreationFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureCreationFlags_t24A9C99A84202C1F13828D9F5693BE46CFBD61F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureFormat
struct  RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureMemoryless
struct  RenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67 
{
public:
	// System.Int32 UnityEngine.RenderTextureMemoryless::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureReadWrite
struct  RenderTextureReadWrite_t4F64C0CC7097707282602ADD52760C1A86552580 
{
public:
	// System.Int32 UnityEngine.RenderTextureReadWrite::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureReadWrite_t4F64C0CC7097707282602ADD52760C1A86552580, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
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


// UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionResolution
struct  ScreenSpaceReflectionResolution_t2A42FD7015E6CDDA4FA3B6E7BD0C506E8E737345 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionResolution::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionResolution_t2A42FD7015E6CDDA4FA3B6E7BD0C506E8E737345, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.ShadowSamplingMode
struct  ShadowSamplingMode_t864AB52A05C1F54A738E06F76F47CDF4C26CF7F9 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowSamplingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShadowSamplingMode_t864AB52A05C1F54A738E06F76F47CDF4C26CF7F9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.SplineParameter
struct  SplineParameter_t34BEB0723CDE19AAB7E784B20834CABC7B490339  : public ParameterOverride_1_t59B7B43BE6BA4482219D94175E4F900B7AD9BF9E
{
public:

public:
};


// UnityEngine.Rendering.PostProcessing.TemporalAntialiasing
struct  TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6  : public RuntimeObject
{
public:
	// System.Single UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::jitterSpread
	float ___jitterSpread_0;
	// System.Single UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::sharpness
	float ___sharpness_1;
	// System.Single UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::stationaryBlending
	float ___stationaryBlending_2;
	// System.Single UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::motionBlending
	float ___motionBlending_3;
	// System.Func`3<UnityEngine.Camera,UnityEngine.Vector2,UnityEngine.Matrix4x4> UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::jitteredMatrixFunc
	Func_3_tC8B822BF6F66E9A74EBD84D1208814C2EDBFDC96 * ___jitteredMatrixFunc_4;
	// UnityEngine.Vector2 UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::<jitter>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CjitterU3Ek__BackingField_5;
	// UnityEngine.Rendering.RenderTargetIdentifier[] UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::m_Mrt
	RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* ___m_Mrt_6;
	// System.Boolean UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::m_ResetHistory
	bool ___m_ResetHistory_7;
	// System.Int32 UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::<sampleIndex>k__BackingField
	int32_t ___U3CsampleIndexU3Ek__BackingField_9;
	// UnityEngine.RenderTexture[][] UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::m_HistoryTextures
	RenderTextureU5BU5DU5BU5D_t3A4F4CB09299411BE3D4D6BD41F85F6E13838EAD* ___m_HistoryTextures_12;
	// System.Int32[] UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::m_HistoryPingPong
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___m_HistoryPingPong_13;

public:
	inline static int32_t get_offset_of_jitterSpread_0() { return static_cast<int32_t>(offsetof(TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6, ___jitterSpread_0)); }
	inline float get_jitterSpread_0() const { return ___jitterSpread_0; }
	inline float* get_address_of_jitterSpread_0() { return &___jitterSpread_0; }
	inline void set_jitterSpread_0(float value)
	{
		___jitterSpread_0 = value;
	}

	inline static int32_t get_offset_of_sharpness_1() { return static_cast<int32_t>(offsetof(TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6, ___sharpness_1)); }
	inline float get_sharpness_1() const { return ___sharpness_1; }
	inline float* get_address_of_sharpness_1() { return &___sharpness_1; }
	inline void set_sharpness_1(float value)
	{
		___sharpness_1 = value;
	}

	inline static int32_t get_offset_of_stationaryBlending_2() { return static_cast<int32_t>(offsetof(TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6, ___stationaryBlending_2)); }
	inline float get_stationaryBlending_2() const { return ___stationaryBlending_2; }
	inline float* get_address_of_stationaryBlending_2() { return &___stationaryBlending_2; }
	inline void set_stationaryBlending_2(float value)
	{
		___stationaryBlending_2 = value;
	}

	inline static int32_t get_offset_of_motionBlending_3() { return static_cast<int32_t>(offsetof(TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6, ___motionBlending_3)); }
	inline float get_motionBlending_3() const { return ___motionBlending_3; }
	inline float* get_address_of_motionBlending_3() { return &___motionBlending_3; }
	inline void set_motionBlending_3(float value)
	{
		___motionBlending_3 = value;
	}

	inline static int32_t get_offset_of_jitteredMatrixFunc_4() { return static_cast<int32_t>(offsetof(TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6, ___jitteredMatrixFunc_4)); }
	inline Func_3_tC8B822BF6F66E9A74EBD84D1208814C2EDBFDC96 * get_jitteredMatrixFunc_4() const { return ___jitteredMatrixFunc_4; }
	inline Func_3_tC8B822BF6F66E9A74EBD84D1208814C2EDBFDC96 ** get_address_of_jitteredMatrixFunc_4() { return &___jitteredMatrixFunc_4; }
	inline void set_jitteredMatrixFunc_4(Func_3_tC8B822BF6F66E9A74EBD84D1208814C2EDBFDC96 * value)
	{
		___jitteredMatrixFunc_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jitteredMatrixFunc_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CjitterU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6, ___U3CjitterU3Ek__BackingField_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CjitterU3Ek__BackingField_5() const { return ___U3CjitterU3Ek__BackingField_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CjitterU3Ek__BackingField_5() { return &___U3CjitterU3Ek__BackingField_5; }
	inline void set_U3CjitterU3Ek__BackingField_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CjitterU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_m_Mrt_6() { return static_cast<int32_t>(offsetof(TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6, ___m_Mrt_6)); }
	inline RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* get_m_Mrt_6() const { return ___m_Mrt_6; }
	inline RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17** get_address_of_m_Mrt_6() { return &___m_Mrt_6; }
	inline void set_m_Mrt_6(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* value)
	{
		___m_Mrt_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mrt_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ResetHistory_7() { return static_cast<int32_t>(offsetof(TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6, ___m_ResetHistory_7)); }
	inline bool get_m_ResetHistory_7() const { return ___m_ResetHistory_7; }
	inline bool* get_address_of_m_ResetHistory_7() { return &___m_ResetHistory_7; }
	inline void set_m_ResetHistory_7(bool value)
	{
		___m_ResetHistory_7 = value;
	}

	inline static int32_t get_offset_of_U3CsampleIndexU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6, ___U3CsampleIndexU3Ek__BackingField_9)); }
	inline int32_t get_U3CsampleIndexU3Ek__BackingField_9() const { return ___U3CsampleIndexU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CsampleIndexU3Ek__BackingField_9() { return &___U3CsampleIndexU3Ek__BackingField_9; }
	inline void set_U3CsampleIndexU3Ek__BackingField_9(int32_t value)
	{
		___U3CsampleIndexU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_m_HistoryTextures_12() { return static_cast<int32_t>(offsetof(TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6, ___m_HistoryTextures_12)); }
	inline RenderTextureU5BU5DU5BU5D_t3A4F4CB09299411BE3D4D6BD41F85F6E13838EAD* get_m_HistoryTextures_12() const { return ___m_HistoryTextures_12; }
	inline RenderTextureU5BU5DU5BU5D_t3A4F4CB09299411BE3D4D6BD41F85F6E13838EAD** get_address_of_m_HistoryTextures_12() { return &___m_HistoryTextures_12; }
	inline void set_m_HistoryTextures_12(RenderTextureU5BU5DU5BU5D_t3A4F4CB09299411BE3D4D6BD41F85F6E13838EAD* value)
	{
		___m_HistoryTextures_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HistoryTextures_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_HistoryPingPong_13() { return static_cast<int32_t>(offsetof(TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6, ___m_HistoryPingPong_13)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_m_HistoryPingPong_13() const { return ___m_HistoryPingPong_13; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_m_HistoryPingPong_13() { return &___m_HistoryPingPong_13; }
	inline void set_m_HistoryPingPong_13(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___m_HistoryPingPong_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HistoryPingPong_13), (void*)value);
	}
};


// UnityEngine.Rendering.TextureDimension
struct  TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct  TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.TextureParameterDefault
struct  TextureParameterDefault_t158DA3D56AB3A9561F23F1344CC71FBF77C96BBE 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.TextureParameterDefault::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureParameterDefault_t158DA3D56AB3A9561F23F1344CC71FBF77C96BBE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureWrapMode
struct  TextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.Tonemapper
struct  Tonemapper_t7645BC3DE7344FE0EEC06C87FE47E2DDAD5FA730 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.Tonemapper::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Tonemapper_t7645BC3DE7344FE0EEC06C87FE47E2DDAD5FA730, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.VRTextureUsage
struct  VRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645 
{
public:
	// System.Int32 UnityEngine.VRTextureUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.VignetteMode
struct  VignetteMode_t1206F42A8F35672068BBD2E71A98D46772529F52 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.VignetteMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VignetteMode_t1206F42A8F35672068BBD2E71A98D46772529F52, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.VignetteRenderer
struct  VignetteRenderer_t4EE592DF8A04229EB766765AA02964EFF4DD25EE  : public PostProcessEffectRenderer_1_t9E77F2B389318EDAB4E13470F1D361199095A582
{
public:

public:
};


// UnityEngine.Rendering.PostProcessing.BloomRenderer/Pass
struct  Pass_t115A2E455063A6BEFB6FE0E0944563CA4AC8DBD0 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.BloomRenderer/Pass::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Pass_t115A2E455063A6BEFB6FE0E0944563CA4AC8DBD0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Camera/StereoscopicEye
struct  StereoscopicEye_t0193B972018E94F768D3B2E44CCE0E88EE2FFFD3 
{
public:
	// System.Int32 UnityEngine.Camera/StereoscopicEye::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StereoscopicEye_t0193B972018E94F768D3B2E44CCE0E88EE2FFFD3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.ColorGradingRenderer/Pass
struct  Pass_t4E1137AEE0F161A9EE09352C11FD7ED229628462 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.ColorGradingRenderer/Pass::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Pass_t4E1137AEE0F161A9EE09352C11FD7ED229628462, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.DepthOfFieldRenderer/Pass
struct  Pass_tE6525946275E8F1016F132C8D6B316E352307047 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.DepthOfFieldRenderer/Pass::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Pass_tE6525946275E8F1016F132C8D6B316E352307047, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.HistogramMonitor/Channel
struct  Channel_t177BBCDD09E90C093C45A45CEEF4D1C1813248D7 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.HistogramMonitor/Channel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Channel_t177BBCDD09E90C093C45A45CEEF4D1C1813248D7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.MotionBlurRenderer/Pass
struct  Pass_t9DD40D5645EB47E24E7F4E8A5836B54E17ED53B3 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.MotionBlurRenderer/Pass::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Pass_t9DD40D5645EB47E24E7F4E8A5836B54E17ED53B3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.MultiScaleVO/MipLevel
struct  MipLevel_tA6ACE6D97C71BFA594579C7A4534A8863B592EEC 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.MultiScaleVO/MipLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MipLevel_tA6ACE6D97C71BFA594579C7A4534A8863B592EEC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.MultiScaleVO/Pass
struct  Pass_t91E0D14FD6E2781971DD539FB064F4C3AD735FD4 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.MultiScaleVO/Pass::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Pass_t91E0D14FD6E2781971DD539FB064F4C3AD735FD4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.PostProcessLayer/Antialiasing
struct  Antialiasing_tA1E75D6E9E990A641437BF072B99FCA1A8EA2B13 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessLayer/Antialiasing::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Antialiasing_tA1E75D6E9E990A641437BF072B99FCA1A8EA2B13, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.PostProcessRenderContext/StereoRenderingMode
struct  StereoRenderingMode_t73DBD26FF83ADB60B8D33ECF0A93F1341983CBFB 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext/StereoRenderingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StereoRenderingMode_t73DBD26FF83ADB60B8D33ECF0A93F1341983CBFB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.ScalableAO/Pass
struct  Pass_tDC8880890F79569247F986ADB2554C04AB847FE7 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.ScalableAO/Pass::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Pass_tDC8880890F79569247F986ADB2554C04AB847FE7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer/Pass
struct  Pass_tAC61CAD36EDB35AA9AE63F8461453EFCF6542F5B 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer/Pass::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Pass_tAC61CAD36EDB35AA9AE63F8461453EFCF6542F5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing/Pass
struct  Pass_t99A2314874912AA50E87A0740A48A7CCD08A6ADF 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing/Pass::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Pass_t99A2314874912AA50E87A0740A48A7CCD08A6ADF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing/Quality
struct  Quality_tAC9B20A4866DBB4CF592D2D2C3D4401DF44B09BF 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing/Quality::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Quality_tAC9B20A4866DBB4CF592D2D2C3D4401DF44B09BF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.TemporalAntialiasing/Pass
struct  Pass_tC192B38EEF294F969B0EE76EB5F2965263240E0A 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.TemporalAntialiasing/Pass::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Pass_tC192B38EEF294F969B0EE76EB5F2965263240E0A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.TrackballAttribute/Mode
struct  Mode_t6B5E6AB6E3D2D4F020DED701BACC129DEC3598BD 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.TrackballAttribute/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t6B5E6AB6E3D2D4F020DED701BACC129DEC3598BD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.Tonemapper>
struct  ParameterOverride_1_t8588121E60167FEBD76D8CB9E60F62ED765B1CA2  : public ParameterOverride_tED887E59B87A5DD3BFDAAAF745F82D9080FA4784
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t8588121E60167FEBD76D8CB9E60F62ED765B1CA2, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.VignetteMode>
struct  ParameterOverride_1_tBB825297D5F1093447C082888FB4560FBA8044E8  : public ParameterOverride_tED887E59B87A5DD3BFDAAAF745F82D9080FA4784
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_tBB825297D5F1093447C082888FB4560FBA8044E8, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.ColorParameter
struct  ColorParameter_t2C43807B2FABC978D5B12345759389816D9CA7C5  : public ParameterOverride_1_t694D598380408B6C9B381BE752E69EEBE4FE4EED
{
public:

public:
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.ComputeShader
struct  ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
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

// UnityEngine.Rendering.PostProcessing.PostProcessAttribute
struct  PostProcessAttribute_tB0E64790042AFD9FC695619EA4186DF608E1EDF4  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Type UnityEngine.Rendering.PostProcessing.PostProcessAttribute::renderer
	Type_t * ___renderer_0;
	// UnityEngine.Rendering.PostProcessing.PostProcessEvent UnityEngine.Rendering.PostProcessing.PostProcessAttribute::eventType
	int32_t ___eventType_1;
	// System.String UnityEngine.Rendering.PostProcessing.PostProcessAttribute::menuItem
	String_t* ___menuItem_2;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessAttribute::allowInSceneView
	bool ___allowInSceneView_3;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessAttribute::builtinEffect
	bool ___builtinEffect_4;

public:
	inline static int32_t get_offset_of_renderer_0() { return static_cast<int32_t>(offsetof(PostProcessAttribute_tB0E64790042AFD9FC695619EA4186DF608E1EDF4, ___renderer_0)); }
	inline Type_t * get_renderer_0() const { return ___renderer_0; }
	inline Type_t ** get_address_of_renderer_0() { return &___renderer_0; }
	inline void set_renderer_0(Type_t * value)
	{
		___renderer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderer_0), (void*)value);
	}

	inline static int32_t get_offset_of_eventType_1() { return static_cast<int32_t>(offsetof(PostProcessAttribute_tB0E64790042AFD9FC695619EA4186DF608E1EDF4, ___eventType_1)); }
	inline int32_t get_eventType_1() const { return ___eventType_1; }
	inline int32_t* get_address_of_eventType_1() { return &___eventType_1; }
	inline void set_eventType_1(int32_t value)
	{
		___eventType_1 = value;
	}

	inline static int32_t get_offset_of_menuItem_2() { return static_cast<int32_t>(offsetof(PostProcessAttribute_tB0E64790042AFD9FC695619EA4186DF608E1EDF4, ___menuItem_2)); }
	inline String_t* get_menuItem_2() const { return ___menuItem_2; }
	inline String_t** get_address_of_menuItem_2() { return &___menuItem_2; }
	inline void set_menuItem_2(String_t* value)
	{
		___menuItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___menuItem_2), (void*)value);
	}

	inline static int32_t get_offset_of_allowInSceneView_3() { return static_cast<int32_t>(offsetof(PostProcessAttribute_tB0E64790042AFD9FC695619EA4186DF608E1EDF4, ___allowInSceneView_3)); }
	inline bool get_allowInSceneView_3() const { return ___allowInSceneView_3; }
	inline bool* get_address_of_allowInSceneView_3() { return &___allowInSceneView_3; }
	inline void set_allowInSceneView_3(bool value)
	{
		___allowInSceneView_3 = value;
	}

	inline static int32_t get_offset_of_builtinEffect_4() { return static_cast<int32_t>(offsetof(PostProcessAttribute_tB0E64790042AFD9FC695619EA4186DF608E1EDF4, ___builtinEffect_4)); }
	inline bool get_builtinEffect_4() const { return ___builtinEffect_4; }
	inline bool* get_address_of_builtinEffect_4() { return &___builtinEffect_4; }
	inline void set_builtinEffect_4(bool value)
	{
		___builtinEffect_4 = value;
	}
};


// UnityEngine.Rendering.RenderTargetIdentifier
struct  RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 
{
public:
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_2;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_3;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_4;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_5;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_6;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_7;

public:
	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_NameID_2() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_NameID_2)); }
	inline int32_t get_m_NameID_2() const { return ___m_NameID_2; }
	inline int32_t* get_address_of_m_NameID_2() { return &___m_NameID_2; }
	inline void set_m_NameID_2(int32_t value)
	{
		___m_NameID_2 = value;
	}

	inline static int32_t get_offset_of_m_InstanceID_3() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_InstanceID_3)); }
	inline int32_t get_m_InstanceID_3() const { return ___m_InstanceID_3; }
	inline int32_t* get_address_of_m_InstanceID_3() { return &___m_InstanceID_3; }
	inline void set_m_InstanceID_3(int32_t value)
	{
		___m_InstanceID_3 = value;
	}

	inline static int32_t get_offset_of_m_BufferPointer_4() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_BufferPointer_4)); }
	inline intptr_t get_m_BufferPointer_4() const { return ___m_BufferPointer_4; }
	inline intptr_t* get_address_of_m_BufferPointer_4() { return &___m_BufferPointer_4; }
	inline void set_m_BufferPointer_4(intptr_t value)
	{
		___m_BufferPointer_4 = value;
	}

	inline static int32_t get_offset_of_m_MipLevel_5() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_MipLevel_5)); }
	inline int32_t get_m_MipLevel_5() const { return ___m_MipLevel_5; }
	inline int32_t* get_address_of_m_MipLevel_5() { return &___m_MipLevel_5; }
	inline void set_m_MipLevel_5(int32_t value)
	{
		___m_MipLevel_5 = value;
	}

	inline static int32_t get_offset_of_m_CubeFace_6() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_CubeFace_6)); }
	inline int32_t get_m_CubeFace_6() const { return ___m_CubeFace_6; }
	inline int32_t* get_address_of_m_CubeFace_6() { return &___m_CubeFace_6; }
	inline void set_m_CubeFace_6(int32_t value)
	{
		___m_CubeFace_6 = value;
	}

	inline static int32_t get_offset_of_m_DepthSlice_7() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_DepthSlice_7)); }
	inline int32_t get_m_DepthSlice_7() const { return ___m_DepthSlice_7; }
	inline int32_t* get_address_of_m_DepthSlice_7() { return &___m_DepthSlice_7; }
	inline void set_m_DepthSlice_7(int32_t value)
	{
		___m_DepthSlice_7 = value;
	}
};


// UnityEngine.RenderTextureDescriptor
struct  RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 
{
public:
	// System.Int32 UnityEngine.RenderTextureDescriptor::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_0;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_1;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<msaaSamples>k__BackingField
	int32_t ___U3CmsaaSamplesU3Ek__BackingField_2;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<volumeDepth>k__BackingField
	int32_t ___U3CvolumeDepthU3Ek__BackingField_3;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<mipCount>k__BackingField
	int32_t ___U3CmipCountU3Ek__BackingField_4;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::_graphicsFormat
	int32_t ____graphicsFormat_5;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<stencilFormat>k__BackingField
	int32_t ___U3CstencilFormatU3Ek__BackingField_6;
	// System.Int32 UnityEngine.RenderTextureDescriptor::_depthBufferBits
	int32_t ____depthBufferBits_7;
	// UnityEngine.Rendering.TextureDimension UnityEngine.RenderTextureDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_9;
	// UnityEngine.Rendering.ShadowSamplingMode UnityEngine.RenderTextureDescriptor::<shadowSamplingMode>k__BackingField
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField_10;
	// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::<vrUsage>k__BackingField
	int32_t ___U3CvrUsageU3Ek__BackingField_11;
	// UnityEngine.RenderTextureCreationFlags UnityEngine.RenderTextureDescriptor::_flags
	int32_t ____flags_12;
	// UnityEngine.RenderTextureMemoryless UnityEngine.RenderTextureDescriptor::<memoryless>k__BackingField
	int32_t ___U3CmemorylessU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CwidthU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CwidthU3Ek__BackingField_0)); }
	inline int32_t get_U3CwidthU3Ek__BackingField_0() const { return ___U3CwidthU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CwidthU3Ek__BackingField_0() { return &___U3CwidthU3Ek__BackingField_0; }
	inline void set_U3CwidthU3Ek__BackingField_0(int32_t value)
	{
		___U3CwidthU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CheightU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CheightU3Ek__BackingField_1)); }
	inline int32_t get_U3CheightU3Ek__BackingField_1() const { return ___U3CheightU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CheightU3Ek__BackingField_1() { return &___U3CheightU3Ek__BackingField_1; }
	inline void set_U3CheightU3Ek__BackingField_1(int32_t value)
	{
		___U3CheightU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmsaaSamplesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CmsaaSamplesU3Ek__BackingField_2)); }
	inline int32_t get_U3CmsaaSamplesU3Ek__BackingField_2() const { return ___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CmsaaSamplesU3Ek__BackingField_2() { return &___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline void set_U3CmsaaSamplesU3Ek__BackingField_2(int32_t value)
	{
		___U3CmsaaSamplesU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CvolumeDepthU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CvolumeDepthU3Ek__BackingField_3)); }
	inline int32_t get_U3CvolumeDepthU3Ek__BackingField_3() const { return ___U3CvolumeDepthU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CvolumeDepthU3Ek__BackingField_3() { return &___U3CvolumeDepthU3Ek__BackingField_3; }
	inline void set_U3CvolumeDepthU3Ek__BackingField_3(int32_t value)
	{
		___U3CvolumeDepthU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CmipCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CmipCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CmipCountU3Ek__BackingField_4() const { return ___U3CmipCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CmipCountU3Ek__BackingField_4() { return &___U3CmipCountU3Ek__BackingField_4; }
	inline void set_U3CmipCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CmipCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of__graphicsFormat_5() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ____graphicsFormat_5)); }
	inline int32_t get__graphicsFormat_5() const { return ____graphicsFormat_5; }
	inline int32_t* get_address_of__graphicsFormat_5() { return &____graphicsFormat_5; }
	inline void set__graphicsFormat_5(int32_t value)
	{
		____graphicsFormat_5 = value;
	}

	inline static int32_t get_offset_of_U3CstencilFormatU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CstencilFormatU3Ek__BackingField_6)); }
	inline int32_t get_U3CstencilFormatU3Ek__BackingField_6() const { return ___U3CstencilFormatU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CstencilFormatU3Ek__BackingField_6() { return &___U3CstencilFormatU3Ek__BackingField_6; }
	inline void set_U3CstencilFormatU3Ek__BackingField_6(int32_t value)
	{
		___U3CstencilFormatU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of__depthBufferBits_7() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ____depthBufferBits_7)); }
	inline int32_t get__depthBufferBits_7() const { return ____depthBufferBits_7; }
	inline int32_t* get_address_of__depthBufferBits_7() { return &____depthBufferBits_7; }
	inline void set__depthBufferBits_7(int32_t value)
	{
		____depthBufferBits_7 = value;
	}

	inline static int32_t get_offset_of_U3CdimensionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CdimensionU3Ek__BackingField_9)); }
	inline int32_t get_U3CdimensionU3Ek__BackingField_9() const { return ___U3CdimensionU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CdimensionU3Ek__BackingField_9() { return &___U3CdimensionU3Ek__BackingField_9; }
	inline void set_U3CdimensionU3Ek__BackingField_9(int32_t value)
	{
		___U3CdimensionU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CshadowSamplingModeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CshadowSamplingModeU3Ek__BackingField_10)); }
	inline int32_t get_U3CshadowSamplingModeU3Ek__BackingField_10() const { return ___U3CshadowSamplingModeU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CshadowSamplingModeU3Ek__BackingField_10() { return &___U3CshadowSamplingModeU3Ek__BackingField_10; }
	inline void set_U3CshadowSamplingModeU3Ek__BackingField_10(int32_t value)
	{
		___U3CshadowSamplingModeU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CvrUsageU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CvrUsageU3Ek__BackingField_11)); }
	inline int32_t get_U3CvrUsageU3Ek__BackingField_11() const { return ___U3CvrUsageU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CvrUsageU3Ek__BackingField_11() { return &___U3CvrUsageU3Ek__BackingField_11; }
	inline void set_U3CvrUsageU3Ek__BackingField_11(int32_t value)
	{
		___U3CvrUsageU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of__flags_12() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ____flags_12)); }
	inline int32_t get__flags_12() const { return ____flags_12; }
	inline int32_t* get_address_of__flags_12() { return &____flags_12; }
	inline void set__flags_12(int32_t value)
	{
		____flags_12 = value;
	}

	inline static int32_t get_offset_of_U3CmemorylessU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CmemorylessU3Ek__BackingField_13)); }
	inline int32_t get_U3CmemorylessU3Ek__BackingField_13() const { return ___U3CmemorylessU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CmemorylessU3Ek__BackingField_13() { return &___U3CmemorylessU3Ek__BackingField_13; }
	inline void set_U3CmemorylessU3Ek__BackingField_13(int32_t value)
	{
		___U3CmemorylessU3Ek__BackingField_13 = value;
	}
};

struct RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_StaticFields
{
public:
	// System.Int32[] UnityEngine.RenderTextureDescriptor::depthFormatBits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___depthFormatBits_8;

public:
	inline static int32_t get_offset_of_depthFormatBits_8() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_StaticFields, ___depthFormatBits_8)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_depthFormatBits_8() const { return ___depthFormatBits_8; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_depthFormatBits_8() { return &___depthFormatBits_8; }
	inline void set_depthFormatBits_8(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___depthFormatBits_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___depthFormatBits_8), (void*)value);
	}
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.Shader
struct  Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing
struct  SubpixelMorphologicalAntialiasing_t0CD7FE868E6C921A1B3D211694DE1C7CF4441330  : public RuntimeObject
{
public:
	// UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing/Quality UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing::quality
	int32_t ___quality_0;

public:
	inline static int32_t get_offset_of_quality_0() { return static_cast<int32_t>(offsetof(SubpixelMorphologicalAntialiasing_t0CD7FE868E6C921A1B3D211694DE1C7CF4441330, ___quality_0)); }
	inline int32_t get_quality_0() const { return ___quality_0; }
	inline int32_t* get_address_of_quality_0() { return &___quality_0; }
	inline void set_quality_0(int32_t value)
	{
		___quality_0 = value;
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.TextureParameter
struct  TextureParameter_tC6A936F3D3C6DD5834DC7866D62E1BE3073BD8C2  : public ParameterOverride_1_t728745CADEFE1DB4C2C14F6DD6EA53A447A763E4
{
public:
	// UnityEngine.Rendering.PostProcessing.TextureParameterDefault UnityEngine.Rendering.PostProcessing.TextureParameter::defaultState
	int32_t ___defaultState_2;

public:
	inline static int32_t get_offset_of_defaultState_2() { return static_cast<int32_t>(offsetof(TextureParameter_tC6A936F3D3C6DD5834DC7866D62E1BE3073BD8C2, ___defaultState_2)); }
	inline int32_t get_defaultState_2() const { return ___defaultState_2; }
	inline int32_t* get_address_of_defaultState_2() { return &___defaultState_2; }
	inline void set_defaultState_2(int32_t value)
	{
		___defaultState_2 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.TrackballAttribute
struct  TrackballAttribute_t2195214A7FB5A05453A0C2661C29DE88B05333F0  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// UnityEngine.Rendering.PostProcessing.TrackballAttribute/Mode UnityEngine.Rendering.PostProcessing.TrackballAttribute::mode
	int32_t ___mode_0;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(TrackballAttribute_t2195214A7FB5A05453A0C2661C29DE88B05333F0, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}
};


// System.Type
struct  Type_t  : public MemberInfo_t
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


// UnityEngine.Rendering.PostProcessing.Vector2Parameter
struct  Vector2Parameter_t0E1CE8C27130B36A75688B706DE0EACCE9DE41A3  : public ParameterOverride_1_tA1EC3D90C3A54AC1167AD63F5340CDECED8BDC9F
{
public:

public:
};


// UnityEngine.Rendering.PostProcessing.Vector3Parameter
struct  Vector3Parameter_tCFF4B1C12CA0BED0A82E087C2AA66A175C987EFD  : public ParameterOverride_1_t2A72895E2C56AB0AFB2436C4C8523C5553ED32F3
{
public:

public:
};


// UnityEngine.Rendering.PostProcessing.Vector4Parameter
struct  Vector4Parameter_t1AFAD06AB301389B859FAFA51D2C3C7E066E1627  : public ParameterOverride_1_tDC434805B157596FAACBAB390CC666791BAC0B01
{
public:

public:
};


// UnityEngine.Rendering.PostProcessing.PostProcessDebugLayer/OverlaySettings
struct  OverlaySettings_t7071522FB1A8AF4C8F333D3F64057B4E773C3675  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessDebugLayer/OverlaySettings::linearDepth
	bool ___linearDepth_0;
	// System.Single UnityEngine.Rendering.PostProcessing.PostProcessDebugLayer/OverlaySettings::motionColorIntensity
	float ___motionColorIntensity_1;
	// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessDebugLayer/OverlaySettings::motionGridSize
	int32_t ___motionGridSize_2;
	// UnityEngine.Rendering.PostProcessing.ColorBlindnessType UnityEngine.Rendering.PostProcessing.PostProcessDebugLayer/OverlaySettings::colorBlindnessType
	int32_t ___colorBlindnessType_3;
	// System.Single UnityEngine.Rendering.PostProcessing.PostProcessDebugLayer/OverlaySettings::colorBlindnessStrength
	float ___colorBlindnessStrength_4;

public:
	inline static int32_t get_offset_of_linearDepth_0() { return static_cast<int32_t>(offsetof(OverlaySettings_t7071522FB1A8AF4C8F333D3F64057B4E773C3675, ___linearDepth_0)); }
	inline bool get_linearDepth_0() const { return ___linearDepth_0; }
	inline bool* get_address_of_linearDepth_0() { return &___linearDepth_0; }
	inline void set_linearDepth_0(bool value)
	{
		___linearDepth_0 = value;
	}

	inline static int32_t get_offset_of_motionColorIntensity_1() { return static_cast<int32_t>(offsetof(OverlaySettings_t7071522FB1A8AF4C8F333D3F64057B4E773C3675, ___motionColorIntensity_1)); }
	inline float get_motionColorIntensity_1() const { return ___motionColorIntensity_1; }
	inline float* get_address_of_motionColorIntensity_1() { return &___motionColorIntensity_1; }
	inline void set_motionColorIntensity_1(float value)
	{
		___motionColorIntensity_1 = value;
	}

	inline static int32_t get_offset_of_motionGridSize_2() { return static_cast<int32_t>(offsetof(OverlaySettings_t7071522FB1A8AF4C8F333D3F64057B4E773C3675, ___motionGridSize_2)); }
	inline int32_t get_motionGridSize_2() const { return ___motionGridSize_2; }
	inline int32_t* get_address_of_motionGridSize_2() { return &___motionGridSize_2; }
	inline void set_motionGridSize_2(int32_t value)
	{
		___motionGridSize_2 = value;
	}

	inline static int32_t get_offset_of_colorBlindnessType_3() { return static_cast<int32_t>(offsetof(OverlaySettings_t7071522FB1A8AF4C8F333D3F64057B4E773C3675, ___colorBlindnessType_3)); }
	inline int32_t get_colorBlindnessType_3() const { return ___colorBlindnessType_3; }
	inline int32_t* get_address_of_colorBlindnessType_3() { return &___colorBlindnessType_3; }
	inline void set_colorBlindnessType_3(int32_t value)
	{
		___colorBlindnessType_3 = value;
	}

	inline static int32_t get_offset_of_colorBlindnessStrength_4() { return static_cast<int32_t>(offsetof(OverlaySettings_t7071522FB1A8AF4C8F333D3F64057B4E773C3675, ___colorBlindnessStrength_4)); }
	inline float get_colorBlindnessStrength_4() const { return ___colorBlindnessStrength_4; }
	inline float* get_address_of_colorBlindnessStrength_4() { return &___colorBlindnessStrength_4; }
	inline void set_colorBlindnessStrength_4(float value)
	{
		___colorBlindnessStrength_4 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c__DisplayClass54_0
struct  U3CU3Ec__DisplayClass54_0_tD5894FBEDBB478439A77C2222DE09C17DB1EF0E2  : public RuntimeObject
{
public:
	// UnityEngine.Rendering.PostProcessing.PostProcessEvent UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c__DisplayClass54_0::evt
	int32_t ___evt_0;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessBundle> UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c__DisplayClass54_0::effects
	List_1_t38482F65BCF1BEF03685350BBB5B7E3D3CDF69A2 * ___effects_1;

public:
	inline static int32_t get_offset_of_evt_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass54_0_tD5894FBEDBB478439A77C2222DE09C17DB1EF0E2, ___evt_0)); }
	inline int32_t get_evt_0() const { return ___evt_0; }
	inline int32_t* get_address_of_evt_0() { return &___evt_0; }
	inline void set_evt_0(int32_t value)
	{
		___evt_0 = value;
	}

	inline static int32_t get_offset_of_effects_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass54_0_tD5894FBEDBB478439A77C2222DE09C17DB1EF0E2, ___effects_1)); }
	inline List_1_t38482F65BCF1BEF03685350BBB5B7E3D3CDF69A2 * get_effects_1() const { return ___effects_1; }
	inline List_1_t38482F65BCF1BEF03685350BBB5B7E3D3CDF69A2 ** get_address_of_effects_1() { return &___effects_1; }
	inline void set_effects_1(List_1_t38482F65BCF1BEF03685350BBB5B7E3D3CDF69A2 * value)
	{
		___effects_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___effects_1), (void*)value);
	}
};


// UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer/QualityPreset
struct  QualityPreset_t17870FCA533EFE2A04B49C5B46F84ACFF139B971  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer/QualityPreset::maximumIterationCount
	int32_t ___maximumIterationCount_0;
	// System.Single UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer/QualityPreset::thickness
	float ___thickness_1;
	// UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionResolution UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer/QualityPreset::downsampling
	int32_t ___downsampling_2;

public:
	inline static int32_t get_offset_of_maximumIterationCount_0() { return static_cast<int32_t>(offsetof(QualityPreset_t17870FCA533EFE2A04B49C5B46F84ACFF139B971, ___maximumIterationCount_0)); }
	inline int32_t get_maximumIterationCount_0() const { return ___maximumIterationCount_0; }
	inline int32_t* get_address_of_maximumIterationCount_0() { return &___maximumIterationCount_0; }
	inline void set_maximumIterationCount_0(int32_t value)
	{
		___maximumIterationCount_0 = value;
	}

	inline static int32_t get_offset_of_thickness_1() { return static_cast<int32_t>(offsetof(QualityPreset_t17870FCA533EFE2A04B49C5B46F84ACFF139B971, ___thickness_1)); }
	inline float get_thickness_1() const { return ___thickness_1; }
	inline float* get_address_of_thickness_1() { return &___thickness_1; }
	inline void set_thickness_1(float value)
	{
		___thickness_1 = value;
	}

	inline static int32_t get_offset_of_downsampling_2() { return static_cast<int32_t>(offsetof(QualityPreset_t17870FCA533EFE2A04B49C5B46F84ACFF139B971, ___downsampling_2)); }
	inline int32_t get_downsampling_2() const { return ___downsampling_2; }
	inline int32_t* get_address_of_downsampling_2() { return &___downsampling_2; }
	inline void set_downsampling_2(int32_t value)
	{
		___downsampling_2 = value;
	}
};


// System.Func`3<UnityEngine.Camera,UnityEngine.Vector2,UnityEngine.Matrix4x4>
struct  Func_3_tC8B822BF6F66E9A74EBD84D1208814C2EDBFDC96  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<UnityEngine.Rendering.PostProcessing.PostProcessBundle>
struct  Predicate_1_tBC55AA0C1F69FD07A5F71AE40FD34D7821C89C28  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings
struct  PostProcessEffectSettings_t2F43C0693DFF9BD09B921BB6278EC086A6F817F0  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings::active
	bool ___active_4;
	// UnityEngine.Rendering.PostProcessing.BoolParameter UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings::enabled
	BoolParameter_t4EDC330A9E3F5830FCE384CE1FF707D3276EBF80 * ___enabled_5;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.PostProcessing.ParameterOverride> UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings::parameters
	ReadOnlyCollection_1_tB4110F279A79A84C732E919515BBB6EEC1128F83 * ___parameters_6;

public:
	inline static int32_t get_offset_of_active_4() { return static_cast<int32_t>(offsetof(PostProcessEffectSettings_t2F43C0693DFF9BD09B921BB6278EC086A6F817F0, ___active_4)); }
	inline bool get_active_4() const { return ___active_4; }
	inline bool* get_address_of_active_4() { return &___active_4; }
	inline void set_active_4(bool value)
	{
		___active_4 = value;
	}

	inline static int32_t get_offset_of_enabled_5() { return static_cast<int32_t>(offsetof(PostProcessEffectSettings_t2F43C0693DFF9BD09B921BB6278EC086A6F817F0, ___enabled_5)); }
	inline BoolParameter_t4EDC330A9E3F5830FCE384CE1FF707D3276EBF80 * get_enabled_5() const { return ___enabled_5; }
	inline BoolParameter_t4EDC330A9E3F5830FCE384CE1FF707D3276EBF80 ** get_address_of_enabled_5() { return &___enabled_5; }
	inline void set_enabled_5(BoolParameter_t4EDC330A9E3F5830FCE384CE1FF707D3276EBF80 * value)
	{
		___enabled_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enabled_5), (void*)value);
	}

	inline static int32_t get_offset_of_parameters_6() { return static_cast<int32_t>(offsetof(PostProcessEffectSettings_t2F43C0693DFF9BD09B921BB6278EC086A6F817F0, ___parameters_6)); }
	inline ReadOnlyCollection_1_tB4110F279A79A84C732E919515BBB6EEC1128F83 * get_parameters_6() const { return ___parameters_6; }
	inline ReadOnlyCollection_1_tB4110F279A79A84C732E919515BBB6EEC1128F83 ** get_address_of_parameters_6() { return &___parameters_6; }
	inline void set_parameters_6(ReadOnlyCollection_1_tB4110F279A79A84C732E919515BBB6EEC1128F83 * value)
	{
		___parameters_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parameters_6), (void*)value);
	}
};


// UnityEngine.Rendering.PostProcessing.PostProcessRenderContext
struct  PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5  : public RuntimeObject
{
public:
	// UnityEngine.Camera UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::m_Camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_Camera_0;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<command>k__BackingField
	CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___U3CcommandU3Ek__BackingField_1;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<source>k__BackingField
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___U3CsourceU3Ek__BackingField_2;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<destination>k__BackingField
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___U3CdestinationU3Ek__BackingField_3;
	// UnityEngine.RenderTextureFormat UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<sourceFormat>k__BackingField
	int32_t ___U3CsourceFormatU3Ek__BackingField_4;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<flip>k__BackingField
	bool ___U3CflipU3Ek__BackingField_5;
	// UnityEngine.Rendering.PostProcessing.PostProcessResources UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<resources>k__BackingField
	PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC * ___U3CresourcesU3Ek__BackingField_6;
	// UnityEngine.Rendering.PostProcessing.PropertySheetFactory UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<propertySheets>k__BackingField
	PropertySheetFactory_t2D2278105A154ED6036D5BE72D09359A5FB94835 * ___U3CpropertySheetsU3Ek__BackingField_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<userData>k__BackingField
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___U3CuserDataU3Ek__BackingField_8;
	// UnityEngine.Rendering.PostProcessing.PostProcessDebugLayer UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<debugLayer>k__BackingField
	PostProcessDebugLayer_tE99A5534EB5127AE0E492B4EFA4C0B9438B45399 * ___U3CdebugLayerU3Ek__BackingField_9;
	// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_10;
	// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_11;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<stereoActive>k__BackingField
	bool ___U3CstereoActiveU3Ek__BackingField_12;
	// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<xrActiveEye>k__BackingField
	int32_t ___U3CxrActiveEyeU3Ek__BackingField_13;
	// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<numberOfEyes>k__BackingField
	int32_t ___U3CnumberOfEyesU3Ek__BackingField_14;
	// UnityEngine.Rendering.PostProcessing.PostProcessRenderContext/StereoRenderingMode UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<stereoRenderingMode>k__BackingField
	int32_t ___U3CstereoRenderingModeU3Ek__BackingField_15;
	// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<screenWidth>k__BackingField
	int32_t ___U3CscreenWidthU3Ek__BackingField_16;
	// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<screenHeight>k__BackingField
	int32_t ___U3CscreenHeightU3Ek__BackingField_17;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<isSceneView>k__BackingField
	bool ___U3CisSceneViewU3Ek__BackingField_18;
	// UnityEngine.Rendering.PostProcessing.PostProcessLayer/Antialiasing UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<antialiasing>k__BackingField
	int32_t ___U3CantialiasingU3Ek__BackingField_19;
	// UnityEngine.Rendering.PostProcessing.TemporalAntialiasing UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<temporalAntialiasing>k__BackingField
	TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * ___U3CtemporalAntialiasingU3Ek__BackingField_20;
	// UnityEngine.Rendering.PostProcessing.PropertySheet UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::uberSheet
	PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * ___uberSheet_21;
	// UnityEngine.Texture UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::autoExposureTexture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___autoExposureTexture_22;
	// UnityEngine.Rendering.PostProcessing.LogHistogram UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::logHistogram
	LogHistogram_t0334F220F776E617B16FFE83BB8B82BE37C65A4C * ___logHistogram_23;
	// UnityEngine.Texture UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::logLut
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___logLut_24;
	// UnityEngine.Rendering.PostProcessing.AutoExposure UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::autoExposure
	AutoExposure_t50F3CF93E72B3D056E624DA24AB91D1200BE1106 * ___autoExposure_25;
	// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::bloomBufferNameID
	int32_t ___bloomBufferNameID_26;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::physicalCamera
	bool ___physicalCamera_27;
	// UnityEngine.RenderTextureDescriptor UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::m_sourceDescriptor
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___m_sourceDescriptor_28;

public:
	inline static int32_t get_offset_of_m_Camera_0() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___m_Camera_0)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_Camera_0() const { return ___m_Camera_0; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_Camera_0() { return &___m_Camera_0; }
	inline void set_m_Camera_0(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_Camera_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcommandU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___U3CcommandU3Ek__BackingField_1)); }
	inline CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * get_U3CcommandU3Ek__BackingField_1() const { return ___U3CcommandU3Ek__BackingField_1; }
	inline CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 ** get_address_of_U3CcommandU3Ek__BackingField_1() { return &___U3CcommandU3Ek__BackingField_1; }
	inline void set_U3CcommandU3Ek__BackingField_1(CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * value)
	{
		___U3CcommandU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcommandU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsourceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___U3CsourceU3Ek__BackingField_2)); }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  get_U3CsourceU3Ek__BackingField_2() const { return ___U3CsourceU3Ek__BackingField_2; }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * get_address_of_U3CsourceU3Ek__BackingField_2() { return &___U3CsourceU3Ek__BackingField_2; }
	inline void set_U3CsourceU3Ek__BackingField_2(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		___U3CsourceU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CdestinationU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___U3CdestinationU3Ek__BackingField_3)); }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  get_U3CdestinationU3Ek__BackingField_3() const { return ___U3CdestinationU3Ek__BackingField_3; }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * get_address_of_U3CdestinationU3Ek__BackingField_3() { return &___U3CdestinationU3Ek__BackingField_3; }
	inline void set_U3CdestinationU3Ek__BackingField_3(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		___U3CdestinationU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsourceFormatU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___U3CsourceFormatU3Ek__BackingField_4)); }
	inline int32_t get_U3CsourceFormatU3Ek__BackingField_4() const { return ___U3CsourceFormatU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CsourceFormatU3Ek__BackingField_4() { return &___U3CsourceFormatU3Ek__BackingField_4; }
	inline void set_U3CsourceFormatU3Ek__BackingField_4(int32_t value)
	{
		___U3CsourceFormatU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CflipU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___U3CflipU3Ek__BackingField_5)); }
	inline bool get_U3CflipU3Ek__BackingField_5() const { return ___U3CflipU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CflipU3Ek__BackingField_5() { return &___U3CflipU3Ek__BackingField_5; }
	inline void set_U3CflipU3Ek__BackingField_5(bool value)
	{
		___U3CflipU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CresourcesU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___U3CresourcesU3Ek__BackingField_6)); }
	inline PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC * get_U3CresourcesU3Ek__BackingField_6() const { return ___U3CresourcesU3Ek__BackingField_6; }
	inline PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC ** get_address_of_U3CresourcesU3Ek__BackingField_6() { return &___U3CresourcesU3Ek__BackingField_6; }
	inline void set_U3CresourcesU3Ek__BackingField_6(PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC * value)
	{
		___U3CresourcesU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresourcesU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpropertySheetsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___U3CpropertySheetsU3Ek__BackingField_7)); }
	inline PropertySheetFactory_t2D2278105A154ED6036D5BE72D09359A5FB94835 * get_U3CpropertySheetsU3Ek__BackingField_7() const { return ___U3CpropertySheetsU3Ek__BackingField_7; }
	inline PropertySheetFactory_t2D2278105A154ED6036D5BE72D09359A5FB94835 ** get_address_of_U3CpropertySheetsU3Ek__BackingField_7() { return &___U3CpropertySheetsU3Ek__BackingField_7; }
	inline void set_U3CpropertySheetsU3Ek__BackingField_7(PropertySheetFactory_t2D2278105A154ED6036D5BE72D09359A5FB94835 * value)
	{
		___U3CpropertySheetsU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpropertySheetsU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuserDataU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___U3CuserDataU3Ek__BackingField_8)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_U3CuserDataU3Ek__BackingField_8() const { return ___U3CuserDataU3Ek__BackingField_8; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_U3CuserDataU3Ek__BackingField_8() { return &___U3CuserDataU3Ek__BackingField_8; }
	inline void set_U3CuserDataU3Ek__BackingField_8(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___U3CuserDataU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CuserDataU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdebugLayerU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___U3CdebugLayerU3Ek__BackingField_9)); }
	inline PostProcessDebugLayer_tE99A5534EB5127AE0E492B4EFA4C0B9438B45399 * get_U3CdebugLayerU3Ek__BackingField_9() const { return ___U3CdebugLayerU3Ek__BackingField_9; }
	inline PostProcessDebugLayer_tE99A5534EB5127AE0E492B4EFA4C0B9438B45399 ** get_address_of_U3CdebugLayerU3Ek__BackingField_9() { return &___U3CdebugLayerU3Ek__BackingField_9; }
	inline void set_U3CdebugLayerU3Ek__BackingField_9(PostProcessDebugLayer_tE99A5534EB5127AE0E492B4EFA4C0B9438B45399 * value)
	{
		___U3CdebugLayerU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdebugLayerU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwidthU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___U3CwidthU3Ek__BackingField_10)); }
	inline int32_t get_U3CwidthU3Ek__BackingField_10() const { return ___U3CwidthU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CwidthU3Ek__BackingField_10() { return &___U3CwidthU3Ek__BackingField_10; }
	inline void set_U3CwidthU3Ek__BackingField_10(int32_t value)
	{
		___U3CwidthU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CheightU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___U3CheightU3Ek__BackingField_11)); }
	inline int32_t get_U3CheightU3Ek__BackingField_11() const { return ___U3CheightU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CheightU3Ek__BackingField_11() { return &___U3CheightU3Ek__BackingField_11; }
	inline void set_U3CheightU3Ek__BackingField_11(int32_t value)
	{
		___U3CheightU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CstereoActiveU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___U3CstereoActiveU3Ek__BackingField_12)); }
	inline bool get_U3CstereoActiveU3Ek__BackingField_12() const { return ___U3CstereoActiveU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CstereoActiveU3Ek__BackingField_12() { return &___U3CstereoActiveU3Ek__BackingField_12; }
	inline void set_U3CstereoActiveU3Ek__BackingField_12(bool value)
	{
		___U3CstereoActiveU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CxrActiveEyeU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___U3CxrActiveEyeU3Ek__BackingField_13)); }
	inline int32_t get_U3CxrActiveEyeU3Ek__BackingField_13() const { return ___U3CxrActiveEyeU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CxrActiveEyeU3Ek__BackingField_13() { return &___U3CxrActiveEyeU3Ek__BackingField_13; }
	inline void set_U3CxrActiveEyeU3Ek__BackingField_13(int32_t value)
	{
		___U3CxrActiveEyeU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CnumberOfEyesU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___U3CnumberOfEyesU3Ek__BackingField_14)); }
	inline int32_t get_U3CnumberOfEyesU3Ek__BackingField_14() const { return ___U3CnumberOfEyesU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CnumberOfEyesU3Ek__BackingField_14() { return &___U3CnumberOfEyesU3Ek__BackingField_14; }
	inline void set_U3CnumberOfEyesU3Ek__BackingField_14(int32_t value)
	{
		___U3CnumberOfEyesU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CstereoRenderingModeU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___U3CstereoRenderingModeU3Ek__BackingField_15)); }
	inline int32_t get_U3CstereoRenderingModeU3Ek__BackingField_15() const { return ___U3CstereoRenderingModeU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CstereoRenderingModeU3Ek__BackingField_15() { return &___U3CstereoRenderingModeU3Ek__BackingField_15; }
	inline void set_U3CstereoRenderingModeU3Ek__BackingField_15(int32_t value)
	{
		___U3CstereoRenderingModeU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CscreenWidthU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___U3CscreenWidthU3Ek__BackingField_16)); }
	inline int32_t get_U3CscreenWidthU3Ek__BackingField_16() const { return ___U3CscreenWidthU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CscreenWidthU3Ek__BackingField_16() { return &___U3CscreenWidthU3Ek__BackingField_16; }
	inline void set_U3CscreenWidthU3Ek__BackingField_16(int32_t value)
	{
		___U3CscreenWidthU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CscreenHeightU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___U3CscreenHeightU3Ek__BackingField_17)); }
	inline int32_t get_U3CscreenHeightU3Ek__BackingField_17() const { return ___U3CscreenHeightU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CscreenHeightU3Ek__BackingField_17() { return &___U3CscreenHeightU3Ek__BackingField_17; }
	inline void set_U3CscreenHeightU3Ek__BackingField_17(int32_t value)
	{
		___U3CscreenHeightU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CisSceneViewU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___U3CisSceneViewU3Ek__BackingField_18)); }
	inline bool get_U3CisSceneViewU3Ek__BackingField_18() const { return ___U3CisSceneViewU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CisSceneViewU3Ek__BackingField_18() { return &___U3CisSceneViewU3Ek__BackingField_18; }
	inline void set_U3CisSceneViewU3Ek__BackingField_18(bool value)
	{
		___U3CisSceneViewU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CantialiasingU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___U3CantialiasingU3Ek__BackingField_19)); }
	inline int32_t get_U3CantialiasingU3Ek__BackingField_19() const { return ___U3CantialiasingU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CantialiasingU3Ek__BackingField_19() { return &___U3CantialiasingU3Ek__BackingField_19; }
	inline void set_U3CantialiasingU3Ek__BackingField_19(int32_t value)
	{
		___U3CantialiasingU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CtemporalAntialiasingU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___U3CtemporalAntialiasingU3Ek__BackingField_20)); }
	inline TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * get_U3CtemporalAntialiasingU3Ek__BackingField_20() const { return ___U3CtemporalAntialiasingU3Ek__BackingField_20; }
	inline TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 ** get_address_of_U3CtemporalAntialiasingU3Ek__BackingField_20() { return &___U3CtemporalAntialiasingU3Ek__BackingField_20; }
	inline void set_U3CtemporalAntialiasingU3Ek__BackingField_20(TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * value)
	{
		___U3CtemporalAntialiasingU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtemporalAntialiasingU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_uberSheet_21() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___uberSheet_21)); }
	inline PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * get_uberSheet_21() const { return ___uberSheet_21; }
	inline PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 ** get_address_of_uberSheet_21() { return &___uberSheet_21; }
	inline void set_uberSheet_21(PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * value)
	{
		___uberSheet_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uberSheet_21), (void*)value);
	}

	inline static int32_t get_offset_of_autoExposureTexture_22() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___autoExposureTexture_22)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_autoExposureTexture_22() const { return ___autoExposureTexture_22; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_autoExposureTexture_22() { return &___autoExposureTexture_22; }
	inline void set_autoExposureTexture_22(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___autoExposureTexture_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___autoExposureTexture_22), (void*)value);
	}

	inline static int32_t get_offset_of_logHistogram_23() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___logHistogram_23)); }
	inline LogHistogram_t0334F220F776E617B16FFE83BB8B82BE37C65A4C * get_logHistogram_23() const { return ___logHistogram_23; }
	inline LogHistogram_t0334F220F776E617B16FFE83BB8B82BE37C65A4C ** get_address_of_logHistogram_23() { return &___logHistogram_23; }
	inline void set_logHistogram_23(LogHistogram_t0334F220F776E617B16FFE83BB8B82BE37C65A4C * value)
	{
		___logHistogram_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logHistogram_23), (void*)value);
	}

	inline static int32_t get_offset_of_logLut_24() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___logLut_24)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_logLut_24() const { return ___logLut_24; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_logLut_24() { return &___logLut_24; }
	inline void set_logLut_24(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___logLut_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logLut_24), (void*)value);
	}

	inline static int32_t get_offset_of_autoExposure_25() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___autoExposure_25)); }
	inline AutoExposure_t50F3CF93E72B3D056E624DA24AB91D1200BE1106 * get_autoExposure_25() const { return ___autoExposure_25; }
	inline AutoExposure_t50F3CF93E72B3D056E624DA24AB91D1200BE1106 ** get_address_of_autoExposure_25() { return &___autoExposure_25; }
	inline void set_autoExposure_25(AutoExposure_t50F3CF93E72B3D056E624DA24AB91D1200BE1106 * value)
	{
		___autoExposure_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___autoExposure_25), (void*)value);
	}

	inline static int32_t get_offset_of_bloomBufferNameID_26() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___bloomBufferNameID_26)); }
	inline int32_t get_bloomBufferNameID_26() const { return ___bloomBufferNameID_26; }
	inline int32_t* get_address_of_bloomBufferNameID_26() { return &___bloomBufferNameID_26; }
	inline void set_bloomBufferNameID_26(int32_t value)
	{
		___bloomBufferNameID_26 = value;
	}

	inline static int32_t get_offset_of_physicalCamera_27() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___physicalCamera_27)); }
	inline bool get_physicalCamera_27() const { return ___physicalCamera_27; }
	inline bool* get_address_of_physicalCamera_27() { return &___physicalCamera_27; }
	inline void set_physicalCamera_27(bool value)
	{
		___physicalCamera_27 = value;
	}

	inline static int32_t get_offset_of_m_sourceDescriptor_28() { return static_cast<int32_t>(offsetof(PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5, ___m_sourceDescriptor_28)); }
	inline RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  get_m_sourceDescriptor_28() const { return ___m_sourceDescriptor_28; }
	inline RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * get_address_of_m_sourceDescriptor_28() { return &___m_sourceDescriptor_28; }
	inline void set_m_sourceDescriptor_28(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  value)
	{
		___m_sourceDescriptor_28 = value;
	}
};


// UnityEngine.Rendering.PostProcessing.PostProcessResources
struct  PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.Texture2D[] UnityEngine.Rendering.PostProcessing.PostProcessResources::blueNoise64
	Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* ___blueNoise64_4;
	// UnityEngine.Texture2D[] UnityEngine.Rendering.PostProcessing.PostProcessResources::blueNoise256
	Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* ___blueNoise256_5;
	// UnityEngine.Rendering.PostProcessing.PostProcessResources/SMAALuts UnityEngine.Rendering.PostProcessing.PostProcessResources::smaaLuts
	SMAALuts_t7B662D41B4C6B2CF97D9C5363B61AA14808C2932 * ___smaaLuts_6;
	// UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders UnityEngine.Rendering.PostProcessing.PostProcessResources::shaders
	Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2 * ___shaders_7;
	// UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders UnityEngine.Rendering.PostProcessing.PostProcessResources::computeShaders
	ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B * ___computeShaders_8;

public:
	inline static int32_t get_offset_of_blueNoise64_4() { return static_cast<int32_t>(offsetof(PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC, ___blueNoise64_4)); }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* get_blueNoise64_4() const { return ___blueNoise64_4; }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316** get_address_of_blueNoise64_4() { return &___blueNoise64_4; }
	inline void set_blueNoise64_4(Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* value)
	{
		___blueNoise64_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blueNoise64_4), (void*)value);
	}

	inline static int32_t get_offset_of_blueNoise256_5() { return static_cast<int32_t>(offsetof(PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC, ___blueNoise256_5)); }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* get_blueNoise256_5() const { return ___blueNoise256_5; }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316** get_address_of_blueNoise256_5() { return &___blueNoise256_5; }
	inline void set_blueNoise256_5(Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* value)
	{
		___blueNoise256_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blueNoise256_5), (void*)value);
	}

	inline static int32_t get_offset_of_smaaLuts_6() { return static_cast<int32_t>(offsetof(PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC, ___smaaLuts_6)); }
	inline SMAALuts_t7B662D41B4C6B2CF97D9C5363B61AA14808C2932 * get_smaaLuts_6() const { return ___smaaLuts_6; }
	inline SMAALuts_t7B662D41B4C6B2CF97D9C5363B61AA14808C2932 ** get_address_of_smaaLuts_6() { return &___smaaLuts_6; }
	inline void set_smaaLuts_6(SMAALuts_t7B662D41B4C6B2CF97D9C5363B61AA14808C2932 * value)
	{
		___smaaLuts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___smaaLuts_6), (void*)value);
	}

	inline static int32_t get_offset_of_shaders_7() { return static_cast<int32_t>(offsetof(PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC, ___shaders_7)); }
	inline Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2 * get_shaders_7() const { return ___shaders_7; }
	inline Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2 ** get_address_of_shaders_7() { return &___shaders_7; }
	inline void set_shaders_7(Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2 * value)
	{
		___shaders_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shaders_7), (void*)value);
	}

	inline static int32_t get_offset_of_computeShaders_8() { return static_cast<int32_t>(offsetof(PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC, ___computeShaders_8)); }
	inline ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B * get_computeShaders_8() const { return ___computeShaders_8; }
	inline ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B ** get_address_of_computeShaders_8() { return &___computeShaders_8; }
	inline void set_computeShaders_8(ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B * value)
	{
		___computeShaders_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___computeShaders_8), (void*)value);
	}
};


// UnityEngine.RenderTexture
struct  RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Texture3D
struct  Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Rendering.PostProcessing.TonemapperParameter
struct  TonemapperParameter_t135C78E99EB670872D17A05A7CBF0F4E3F8A222B  : public ParameterOverride_1_t8588121E60167FEBD76D8CB9E60F62ED765B1CA2
{
public:

public:
};


// UnityEngine.Rendering.PostProcessing.VignetteModeParameter
struct  VignetteModeParameter_tA57BF7F5798A90AE3DFE38CF80A85E931F3DD613  : public ParameterOverride_1_tBB825297D5F1093447C082888FB4560FBA8044E8
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Rendering.PostProcessing.Vignette
struct  Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139  : public PostProcessEffectSettings_t2F43C0693DFF9BD09B921BB6278EC086A6F817F0
{
public:
	// UnityEngine.Rendering.PostProcessing.VignetteModeParameter UnityEngine.Rendering.PostProcessing.Vignette::mode
	VignetteModeParameter_tA57BF7F5798A90AE3DFE38CF80A85E931F3DD613 * ___mode_7;
	// UnityEngine.Rendering.PostProcessing.ColorParameter UnityEngine.Rendering.PostProcessing.Vignette::color
	ColorParameter_t2C43807B2FABC978D5B12345759389816D9CA7C5 * ___color_8;
	// UnityEngine.Rendering.PostProcessing.Vector2Parameter UnityEngine.Rendering.PostProcessing.Vignette::center
	Vector2Parameter_t0E1CE8C27130B36A75688B706DE0EACCE9DE41A3 * ___center_9;
	// UnityEngine.Rendering.PostProcessing.FloatParameter UnityEngine.Rendering.PostProcessing.Vignette::intensity
	FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 * ___intensity_10;
	// UnityEngine.Rendering.PostProcessing.FloatParameter UnityEngine.Rendering.PostProcessing.Vignette::smoothness
	FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 * ___smoothness_11;
	// UnityEngine.Rendering.PostProcessing.FloatParameter UnityEngine.Rendering.PostProcessing.Vignette::roundness
	FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 * ___roundness_12;
	// UnityEngine.Rendering.PostProcessing.BoolParameter UnityEngine.Rendering.PostProcessing.Vignette::rounded
	BoolParameter_t4EDC330A9E3F5830FCE384CE1FF707D3276EBF80 * ___rounded_13;
	// UnityEngine.Rendering.PostProcessing.TextureParameter UnityEngine.Rendering.PostProcessing.Vignette::mask
	TextureParameter_tC6A936F3D3C6DD5834DC7866D62E1BE3073BD8C2 * ___mask_14;
	// UnityEngine.Rendering.PostProcessing.FloatParameter UnityEngine.Rendering.PostProcessing.Vignette::opacity
	FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 * ___opacity_15;

public:
	inline static int32_t get_offset_of_mode_7() { return static_cast<int32_t>(offsetof(Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139, ___mode_7)); }
	inline VignetteModeParameter_tA57BF7F5798A90AE3DFE38CF80A85E931F3DD613 * get_mode_7() const { return ___mode_7; }
	inline VignetteModeParameter_tA57BF7F5798A90AE3DFE38CF80A85E931F3DD613 ** get_address_of_mode_7() { return &___mode_7; }
	inline void set_mode_7(VignetteModeParameter_tA57BF7F5798A90AE3DFE38CF80A85E931F3DD613 * value)
	{
		___mode_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mode_7), (void*)value);
	}

	inline static int32_t get_offset_of_color_8() { return static_cast<int32_t>(offsetof(Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139, ___color_8)); }
	inline ColorParameter_t2C43807B2FABC978D5B12345759389816D9CA7C5 * get_color_8() const { return ___color_8; }
	inline ColorParameter_t2C43807B2FABC978D5B12345759389816D9CA7C5 ** get_address_of_color_8() { return &___color_8; }
	inline void set_color_8(ColorParameter_t2C43807B2FABC978D5B12345759389816D9CA7C5 * value)
	{
		___color_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___color_8), (void*)value);
	}

	inline static int32_t get_offset_of_center_9() { return static_cast<int32_t>(offsetof(Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139, ___center_9)); }
	inline Vector2Parameter_t0E1CE8C27130B36A75688B706DE0EACCE9DE41A3 * get_center_9() const { return ___center_9; }
	inline Vector2Parameter_t0E1CE8C27130B36A75688B706DE0EACCE9DE41A3 ** get_address_of_center_9() { return &___center_9; }
	inline void set_center_9(Vector2Parameter_t0E1CE8C27130B36A75688B706DE0EACCE9DE41A3 * value)
	{
		___center_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___center_9), (void*)value);
	}

	inline static int32_t get_offset_of_intensity_10() { return static_cast<int32_t>(offsetof(Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139, ___intensity_10)); }
	inline FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 * get_intensity_10() const { return ___intensity_10; }
	inline FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 ** get_address_of_intensity_10() { return &___intensity_10; }
	inline void set_intensity_10(FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 * value)
	{
		___intensity_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___intensity_10), (void*)value);
	}

	inline static int32_t get_offset_of_smoothness_11() { return static_cast<int32_t>(offsetof(Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139, ___smoothness_11)); }
	inline FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 * get_smoothness_11() const { return ___smoothness_11; }
	inline FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 ** get_address_of_smoothness_11() { return &___smoothness_11; }
	inline void set_smoothness_11(FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 * value)
	{
		___smoothness_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___smoothness_11), (void*)value);
	}

	inline static int32_t get_offset_of_roundness_12() { return static_cast<int32_t>(offsetof(Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139, ___roundness_12)); }
	inline FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 * get_roundness_12() const { return ___roundness_12; }
	inline FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 ** get_address_of_roundness_12() { return &___roundness_12; }
	inline void set_roundness_12(FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 * value)
	{
		___roundness_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___roundness_12), (void*)value);
	}

	inline static int32_t get_offset_of_rounded_13() { return static_cast<int32_t>(offsetof(Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139, ___rounded_13)); }
	inline BoolParameter_t4EDC330A9E3F5830FCE384CE1FF707D3276EBF80 * get_rounded_13() const { return ___rounded_13; }
	inline BoolParameter_t4EDC330A9E3F5830FCE384CE1FF707D3276EBF80 ** get_address_of_rounded_13() { return &___rounded_13; }
	inline void set_rounded_13(BoolParameter_t4EDC330A9E3F5830FCE384CE1FF707D3276EBF80 * value)
	{
		___rounded_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rounded_13), (void*)value);
	}

	inline static int32_t get_offset_of_mask_14() { return static_cast<int32_t>(offsetof(Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139, ___mask_14)); }
	inline TextureParameter_tC6A936F3D3C6DD5834DC7866D62E1BE3073BD8C2 * get_mask_14() const { return ___mask_14; }
	inline TextureParameter_tC6A936F3D3C6DD5834DC7866D62E1BE3073BD8C2 ** get_address_of_mask_14() { return &___mask_14; }
	inline void set_mask_14(TextureParameter_tC6A936F3D3C6DD5834DC7866D62E1BE3073BD8C2 * value)
	{
		___mask_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mask_14), (void*)value);
	}

	inline static int32_t get_offset_of_opacity_15() { return static_cast<int32_t>(offsetof(Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139, ___opacity_15)); }
	inline FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 * get_opacity_15() const { return ___opacity_15; }
	inline FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 ** get_address_of_opacity_15() { return &___opacity_15; }
	inline void set_opacity_15(FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 * value)
	{
		___opacity_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___opacity_15), (void*)value);
	}
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
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  m_Items[1];

public:
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * m_Items[1];

public:
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.RenderTexture[][]
struct RenderTextureU5BU5DU5BU5D_t3A4F4CB09299411BE3D4D6BD41F85F6E13838EAD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* m_Items[1];

public:
	inline RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// UnityEngine.Rendering.RenderTargetIdentifier[]
struct RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  m_Items[1];

public:
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		m_Items[index] = value;
	}
};
// System.ObsoleteAttribute[]
struct ObsoleteAttributeU5BU5D_tAC73C504F00AEC879F622AFE547DD3A1ECCAEE38  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * m_Items[1];

public:
	inline ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// UnityEngine.Rendering.PostProcessing.HableCurve/Segment[]
struct SegmentU5BU5D_t236C9C40EE0ECF87CD86C78C8F44914ED51A135B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * m_Items[1];

public:
	inline Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void UnityEngine.Assertions.Assert::IsNotNull<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNotNull_TisRuntimeObject_m55EFDAA397D9E255C8A38AEB4AC3E0C49D0FB3E8_gshared (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m6EAD465A18C6809C1A5365EEB3238F86E6895F11_gshared (ParameterOverride_1_t4C9D3949FFB2BBF1449903DEE28A975867B49BFD * __this, ParameterOverride_tED887E59B87A5DD3BFDAAAF745F82D9080FA4784 * ___parameter0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::Interp(T,T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_mB59FC295B5BB5DD47B5D25830C08D33216D65513_gshared (ParameterOverride_1_t4C9D3949FFB2BBF1449903DEE28A975867B49BFD * __this, RuntimeObject * ___from0, RuntimeObject * ___to1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m556377B217BBEA620976DB5DA0CDE623313AF271_gshared (ParameterOverride_1_t4C9D3949FFB2BBF1449903DEE28A975867B49BFD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// !2 System.Func`3<System.Object,UnityEngine.Vector2,UnityEngine.Matrix4x4>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Func_3_Invoke_m4B57FAB99DC2F31FF7663F9B53039ADFB1F0B105_gshared (Func_3_t82C0F72AA9FB99BB3F76E59A925410E989E22B34 * __this, RuntimeObject * ___arg10, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___arg21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9632D47D6F69D63FAF18C510B426AA89FBFD8FD4_gshared (Dictionary_2_t3F631552EE10022FD5F4AE6E71CA4F6987BF6FE0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mA7CC0142AA8420766D7C6040E6AB820EAECF85D5_gshared (Dictionary_2_t3F631552EE10022FD5F4AE6E71CA4F6987BF6FE0 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF0AE3867D21201B50EE816E55A8BAAADA8471324_gshared (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mDFB096115D9E26E5B5E5A4183F9E098CE8A14F74_gshared (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * __this, int32_t ___key0, bool ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mC4BC2CF356468F9CE48C69C89BF5616E99D66F60_gshared (Dictionary_2_t3F631552EE10022FD5F4AE6E71CA4F6987BF6FE0 * __this, int32_t ___key0, int32_t* ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mDA84BC4EB1A9B38BEFC73A8718A628B870CA9345_gshared (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * __this, int32_t ___key0, bool* ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_mBD19143A8A4B73C1A4AB95C5AFCC22588E90EF74_gshared (ParameterOverride_1_t9743BB143BE9B03345E5365124680D2B48699974 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_mA0A58A2C544574167825FA95B25FFDD290BD85D3_gshared (ParameterOverride_1_tA1EC3D90C3A54AC1167AD63F5340CDECED8BDC9F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_mDF15F5A4C43E00F41BAD785C725A1DED7D76097A_gshared (ParameterOverride_1_t2A72895E2C56AB0AFB2436C4C8523C5553ED32F3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m8677DD09A9CA61F329E1B257381A7C128B30EC8B_gshared (ParameterOverride_1_tDC434805B157596FAACBAB390CC666791BAC0B01 * __this, const RuntimeMethod* method);
// T UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<System.Object>::get_settings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * PostProcessEffectRenderer_1_get_settings_m709F0A9EA59359EA57C0D2FC86E98C54627B96DC_gshared_inline (PostProcessEffectRenderer_1_t6C11DDDFC60F401B58CDCCD46359E86BB3487DDF * __this, const RuntimeMethod* method);
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32Enum>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_op_Implicit_mD2AC8F8324E0A6F9960D1A6120D7F4D8B9C19B2C_gshared (ParameterOverride_1_t9743BB143BE9B03345E5365124680D2B48699974 * ___prop0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessEffectRenderer_1__ctor_m3881798424AD6120FD220E54B65D5996D27B6202_gshared (PostProcessEffectRenderer_1_t6C11DDDFC60F401B58CDCCD46359E86BB3487DDF * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Exists(System.Predicate`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_mCD79CCDB5FF533F73A031B475BA7C5D2278B0AAA_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___match0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Assertions.Assert::IsNotNull<UnityEngine.AnimationCurve>(!!0)
inline void Assert_IsNotNull_TisAnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_m15CDE7D893B87D8F517EF98368DA7F56E8F5CE19 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___value0, const RuntimeMethod* method)
{
	((  void (*) (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *, const RuntimeMethod*))Assert_IsNotNull_TisRuntimeObject_m55EFDAA397D9E255C8A38AEB4AC3E0C49D0FB3E8_gshared)(___value0, method);
}
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimationCurve::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, const RuntimeMethod* method);
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Single UnityEngine.Keyframe::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_time_m75EBFDECA329315F6D41A60C0B1291F5BA4039E8 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::set_time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_time_mB48C8B14B2346F46A0A4FE27CDD01D163F945CC4 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::set_keys(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_keys_m146468F0FF5228D829489E845C1193B1D83543BF (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimationCurve::AddKey(UnityEngine.Keyframe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  ___key0, const RuntimeMethod* method);
// System.Single UnityEngine.Rendering.PostProcessing.Spline::Evaluate(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Spline_Evaluate_m1460BA797E9037E0E124E23228F3740E554EDCAB (Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 * __this, float ___t0, int32_t ___length1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Time::get_renderedFrameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_renderedFrameCount_m97524F45A5996675DB60401A0211F700286D2B9A (const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.Spline::Cache(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_Cache_mC30B8B6D444CFFFD1677515BC60323612E5F799A (Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 * __this, int32_t ___frame0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.Spline>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
inline void ParameterOverride_1_SetValue_mC3B1246E035741D4C531CD1945500D0922F90ED2 (ParameterOverride_1_t59B7B43BE6BA4482219D94175E4F900B7AD9BF9E * __this, ParameterOverride_tED887E59B87A5DD3BFDAAAF745F82D9080FA4784 * ___parameter0, const RuntimeMethod* method)
{
	((  void (*) (ParameterOverride_1_t59B7B43BE6BA4482219D94175E4F900B7AD9BF9E *, ParameterOverride_tED887E59B87A5DD3BFDAAAF745F82D9080FA4784 *, const RuntimeMethod*))ParameterOverride_1_SetValue_m6EAD465A18C6809C1A5365EEB3238F86E6895F11_gshared)(__this, ___parameter0, method);
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.Spline>::Interp(T,T,System.Single)
inline void ParameterOverride_1_Interp_m9789CCC726BAAF33FD8ABAFC88C97E8B7F1B5B70 (ParameterOverride_1_t59B7B43BE6BA4482219D94175E4F900B7AD9BF9E * __this, Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 * ___from0, Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 * ___to1, float ___t2, const RuntimeMethod* method)
{
	((  void (*) (ParameterOverride_1_t59B7B43BE6BA4482219D94175E4F900B7AD9BF9E *, Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 *, Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 *, float, const RuntimeMethod*))ParameterOverride_1_Interp_mB59FC295B5BB5DD47B5D25830C08D33216D65513_gshared)(__this, ___from0, ___to1, ___t2, method);
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.Spline>::.ctor()
inline void ParameterOverride_1__ctor_m7EC3EFB55B1303375DA1384F1D445061E08953FC (ParameterOverride_1_t59B7B43BE6BA4482219D94175E4F900B7AD9BF9E * __this, const RuntimeMethod* method)
{
	((  void (*) (ParameterOverride_1_t59B7B43BE6BA4482219D94175E4F900B7AD9BF9E *, const RuntimeMethod*))ParameterOverride_1__ctor_m556377B217BBEA620976DB5DA0CDE623313AF271_gshared)(__this, method);
}
// System.Boolean UnityEngine.Rendering.PostProcessing.RuntimeUtilities::get_isSinglePassStereoEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeUtilities_get_isSinglePassStereoEnabled_m32CAA62D88CC87AC5C737817D7E92580CF57E40C (const RuntimeMethod* method);
// UnityEngine.Rendering.PostProcessing.PropertySheetFactory UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_propertySheets()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertySheetFactory_t2D2278105A154ED6036D5BE72D09359A5FB94835 * PostProcessRenderContext_get_propertySheets_mE1135E07BE4F59354198DF05198E64CAF2E41D5C_inline (PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * __this, const RuntimeMethod* method);
// UnityEngine.Rendering.PostProcessing.PostProcessResources UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_resources()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC * PostProcessRenderContext_get_resources_mEC353AFE49A4A72D561FCB8758E364578AB2B9D7_inline (PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * __this, const RuntimeMethod* method);
// UnityEngine.Rendering.PostProcessing.PropertySheet UnityEngine.Rendering.PostProcessing.PropertySheetFactory::Get(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * PropertySheetFactory_Get_mE4CC267B0EB28F0892A426B67015A309F2540CBF (PropertySheetFactory_t2D2278105A154ED6036D5BE72D09359A5FB94835 * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader0, const RuntimeMethod* method);
// UnityEngine.MaterialPropertyBlock UnityEngine.Rendering.PostProcessing.PropertySheet::get_properties()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * PropertySheet_get_properties_m3AB962E1C6A0C44D98E16AFBB73B40BA5E21B504_inline (PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetTexture_mE81B2B7E3CF624544CD7D91177797053AFC0CD93 (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, String_t* ___name0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value1, const RuntimeMethod* method);
// UnityEngine.Rendering.CommandBuffer UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_command()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * PostProcessRenderContext_get_command_mE54DFA2523219208C87BA95ECD2D766889DACA71_inline (PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::BeginSample(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_BeginSample_mA6CADFE0049E601CE0E5FE8CFF23820AE98514EA (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_width()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PostProcessRenderContext_get_width_m4965F17411CA0E2AEC993B02D9CEEB0E258E8A74_inline (PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_height()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PostProcessRenderContext_get_height_m3F500068E9E598DA75850D864AEC83708B1D9BD4_inline (PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * __this, const RuntimeMethod* method);
// UnityEngine.RenderTextureFormat UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_sourceFormat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PostProcessRenderContext_get_sourceFormat_mD846BE618AD913E5A3EFF8AE3BDFD1B2DF53896E_inline (PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_camera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * PostProcessRenderContext_get_camera_m56CA965425F5C59D32D7CF2E11E589FBD8A16C3D (PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Camera::get_allowDynamicResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_allowDynamicResolution_mA41F9F7ABD2EE6F496482BB9200A76048BF72414 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::GetTemporaryRT(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.FilterMode,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite,System.Int32,System.Boolean,UnityEngine.RenderTextureMemoryless,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_GetTemporaryRT_m416F3104D78E2FBFFAB769F692C5A4DED3A334E9 (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, int32_t ___nameID0, int32_t ___width1, int32_t ___height2, int32_t ___depthBuffer3, int32_t ___filter4, int32_t ___format5, int32_t ___readWrite6, int32_t ___antiAliasing7, bool ___enableRandomWrite8, int32_t ___memorylessMode9, bool ___useDynamicScale10, const RuntimeMethod* method);
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_source()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  PostProcessRenderContext_get_source_m7AB20613A7F91FDB5B7872995E6DD205A9D52135_inline (PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * __this, const RuntimeMethod* method);
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RenderTargetIdentifier::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B (int32_t ___nameID0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.RuntimeUtilities::BlitFullscreenTriangle(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.PostProcessing.PropertySheet,System.Int32,System.Boolean,System.Nullable`1<UnityEngine.Rect>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeUtilities_BlitFullscreenTriangle_mABC8DFC7F13C86175696C407ABA469F66B98128E (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___cmd0, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___source1, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___destination2, PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * ___propertySheet3, int32_t ___pass4, bool ___clear5, Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE  ___viewport6, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalTexture(System.String,UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetGlobalTexture_mB259AEE78963224D752B6002215566F6C7A62CE7 (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, String_t* ___name0, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___value1, const RuntimeMethod* method);
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_destination()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  PostProcessRenderContext_get_destination_mD5A4C6656F4FC57B0FF57FA7F7CC597F62BD2C88_inline (PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::ReleaseTemporaryRT(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_ReleaseTemporaryRT_mE4A4A8DE6B315956BEAB66915FF720F1C61BCDC5 (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, int32_t ___nameID0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::EndSample(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_EndSample_mB852BF4B83918656E93C9C327A20E163EC910A66 (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared)(__this, method);
}
// System.Int32 UnityEngine.Rendering.PostProcessing.TargetPool::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TargetPool_Get_mFD7A784E2BDD7B37E3F25B3C61CEF986665CC59C (TargetPool_t903089FCEE606214C490876AB928DA25294034CC * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Rendering.PostProcessing.TargetPool::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TargetPool_Get_m15FB87703C592304BBC6D92F2EFF5A192458F75A (TargetPool_t903089FCEE606214C490876AB928DA25294034CC * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline)(__this, ___index0, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F (String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared)(__this, ___item0, method);
}
// System.Int32 UnityEngine.SystemInfo::get_supportedRenderTargetCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_supportedRenderTargetCount_mF1878047AAED7BE6839958B61C0CC7E2FB204B44 (const RuntimeMethod* method);
// System.Boolean UnityEngine.SystemInfo::get_supportsMotionVectors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsMotionVectors_mC53D082851F990A59130D6C1B462D709B85E98DC (const RuntimeMethod* method);
// UnityEngine.Rendering.GraphicsDeviceType UnityEngine.SystemInfo::get_graphicsDeviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsDeviceType_mC207E6B2221AD5AB39831C2412FF7FBD2F43CC02 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::get_sampleIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TemporalAntialiasing_get_sampleIndex_m91D33ECE0C6D0DC89B585FF7DEB824239655C94F_inline (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rendering.PostProcessing.HaltonSeq::Get(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HaltonSeq_Get_m506F719276E54819A350ECA521DC14CAAF93DCDE (int32_t ___index0, int32_t ___radix1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::set_sampleIndex(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TemporalAntialiasing_set_sampleIndex_m7DBCBC1B1A1423533E4CDFDB5224F49BE48405AE_inline (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::GenerateRandomOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  TemporalAntialiasing_GenerateRandomOffset_mA022EBD160240B67B11EEF31DFF79C275532D4B1 (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::set_jitter(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TemporalAntialiasing_set_jitter_m9450BBE1B75081EE0E5084A2A83B06DD89748C1B_inline (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::get_jitter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  TemporalAntialiasing_get_jitter_mD89AFB2AFDEE63822CF1C632364408FDF76FB418_inline (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// !2 System.Func`3<UnityEngine.Camera,UnityEngine.Vector2,UnityEngine.Matrix4x4>::Invoke(!0,!1)
inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Func_3_Invoke_m961C5C528A5608E542F51F72E30EDBDB9165FC9C (Func_3_tC8B822BF6F66E9A74EBD84D1208814C2EDBFDC96 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___arg10, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___arg21, const RuntimeMethod* method)
{
	return ((  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  (*) (Func_3_tC8B822BF6F66E9A74EBD84D1208814C2EDBFDC96 *, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , const RuntimeMethod*))Func_3_Invoke_m4B57FAB99DC2F31FF7663F9B53039ADFB1F0B105_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Boolean UnityEngine.Camera::get_orthographic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_orthographic_m3DE9A7705E2B4926BBFD2D6798D97B931B5B5550 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Rendering.PostProcessing.RuntimeUtilities::GetJitteredPerspectiveProjectionMatrix(UnityEngine.Camera,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  RuntimeUtilities_GetJitteredPerspectiveProjectionMatrix_m0D997EC76CAA5CE3D381F17C798D0575847C1D3A (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___offset1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Rendering.PostProcessing.RuntimeUtilities::GetJitteredOrthographicProjectionMatrix(UnityEngine.Camera,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  RuntimeUtilities_GetJitteredOrthographicProjectionMatrix_mB97B8CD7C2D251DF19C5BB5C3394E8A31F885B13 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___offset1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_pixelWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelWidth_m7DC2EF816FA7AB52EEE991E054FC7B1F31982802 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_pixelHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelHeight_m7A18CEE2D95835EB95156E88D4D27EA018404201 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Camera_get_projectionMatrix_mDB77E3A7F71CEF085797BCE58FAC78058C5D6756 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_nonJitteredProjectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_nonJitteredProjectionMatrix_mBD4086F0CE187C0E68619606FA3F06AB9113A7D0 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::GetJitteredProjectionMatrix(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  TemporalAntialiasing_GetJitteredProjectionMatrix_m0795E81DB41C2D8E4399A289A28648EDB1DF554A (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_projectionMatrix_m3645AC49FC94726BDA07191C80299D8361D5C328 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_useJitteredProjectionMatrixForTransparentRendering(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_useJitteredProjectionMatrixForTransparentRendering_mC534E01407398A73886F2E5796824120B50461EA (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::CopyStereoDeviceProjectionMatrixToNonJittered(UnityEngine.Camera/StereoscopicEye)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_CopyStereoDeviceProjectionMatrixToNonJittered_m96565F7CE1BEB2A14B226B72A9288EDF2F128F61 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___eye0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Camera::GetStereoNonJitteredProjectionMatrix(UnityEngine.Camera/StereoscopicEye)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Camera_GetStereoNonJitteredProjectionMatrix_m1EABA8DF00E3C256504DCAC2C6DB7E2BAFE53243 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___eye0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Rendering.PostProcessing.RuntimeUtilities::GenerateJitteredProjectionMatrixFromOriginal(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext,UnityEngine.Matrix4x4,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  RuntimeUtilities_GenerateJitteredProjectionMatrixFromOriginal_mA84280675C3CBE08CD98DFCFD7EF70C155EF52C5 (PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * ___context0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___origProj1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___jitter2, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::SetStereoProjectionMatrix(UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_SetStereoProjectionMatrix_mADBD0709A2C5CC89E96DAAE97D145BCF76E12D3A (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___eye0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_screenWidth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PostProcessRenderContext_get_screenWidth_m9F3ECB9E1D36F430FADA9EC9C19A8EAD0C714D04_inline (PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_screenHeight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PostProcessRenderContext_get_screenHeight_m6E8CD22AEA7C1A754C1652DF457FA7D6E11C84B9_inline (PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_stereoActive()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PostProcessRenderContext_get_stereoActive_mFF6F57ABA3F8A044D7EE09143A5F8C47B5EF6AE3_inline (PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_xrActiveEye()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PostProcessRenderContext_get_xrActiveEye_mF542BBCE2BE780B1018E8640BF92BF44A1B25586_inline (PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.RenderTexture::IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTexture_IsCreated_m78F28FE94FDA5346E2E8B3AEC0863B8DCF116958 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___temp0, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::GetScreenSpaceTemporaryRT(System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * PostProcessRenderContext_GetScreenSpaceTemporaryRT_m2E603ACA026F7EFBD88C774950E07FBCD1E10CF5 (PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * __this, int32_t ___depthBufferBits0, int32_t ___colorFormat1, int32_t ___readWrite2, int32_t ___widthOverride3, int32_t ___heightOverride4, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::GenerateHistoryName(UnityEngine.RenderTexture,System.Int32,UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TemporalAntialiasing_GenerateHistoryName_m20B5ABFEF42DE2A387BFDD207E7805FA9B715674 (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___rt0, int32_t ___id1, PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * ___context2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RenderTargetIdentifier::op_Implicit(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___tex0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.RuntimeUtilities::BlitFullscreenTriangle(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier,System.Boolean,System.Nullable`1<UnityEngine.Rect>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeUtilities_BlitFullscreenTriangle_mF733D5B783D8EC34392246C72F90114F4CD143F5 (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___cmd0, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___source1, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___destination2, bool ___clear3, Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE  ___viewport4, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::CheckHistory(System.Int32,UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * TemporalAntialiasing_CheckHistory_m01C9B2DD2A27A0898EE0E3604D91BA0334627D13 (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, int32_t ___id0, PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * ___context1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetVector(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetVector_m39DE61298C4C95829529B498130844A591621E2F (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, int32_t ___nameID0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetFloat_mD2F1653CEDB22B1A3EE844E353CF125A607AEDEC (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, int32_t ___nameID0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetTexture(System.Int32,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetTexture_m8F81CA94E5261618BEDD93EC02DAA2412E732C04 (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, int32_t ___nameID0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.RuntimeUtilities::BlitFullscreenTriangle(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier[],UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.PostProcessing.PropertySheet,System.Int32,System.Boolean,System.Nullable`1<UnityEngine.Rect>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeUtilities_BlitFullscreenTriangle_mB52EBC17810E59AAE9D3D4CB04D29CB09E953916 (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___cmd0, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___source1, RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* ___destinations2, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___depth3, PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * ___propertySheet4, int32_t ___pass5, bool ___clear6, Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE  ___viewport7, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::ResetHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TemporalAntialiasing_ResetHistory_m02880AF6BF6467418C89DC15AFEE07CA2DCDD693 (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RenderTextureFormat>::.ctor()
inline void Dictionary_2__ctor_mD0C4DB6C8EC7B1AB66783B91679A225842F9032B (Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F *, const RuntimeMethod*))Dictionary_2__ctor_m9632D47D6F69D63FAF18C510B426AA89FBFD8FD4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RenderTextureFormat>::Add(!0,!1)
inline void Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0 (Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F *, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_mA7CC0142AA8420766D7C6040E6AB820EAECF85D5_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::.ctor()
inline void Dictionary_2__ctor_mF0AE3867D21201B50EE816E55A8BAAADA8471324 (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *, const RuntimeMethod*))Dictionary_2__ctor_mF0AE3867D21201B50EE816E55A8BAAADA8471324_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Collections.IEnumerator System.Array::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_GetEnumerator_m7BC171F2F69907FD4585E7B4A3A224473BE32964 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::IsObsolete(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureFormatUtilities_IsObsolete_m0D83C3AEA2A6B680C34266EAC453678EECB87EDC (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.SystemInfo::SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_SupportsRenderTextureFormat_m243F66021A643C711FEDEA6B6D002B49ECEEFE1B (int32_t ___format0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mDFB096115D9E26E5B5E5A4183F9E098CE8A14F74 (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * __this, int32_t ___key0, bool ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *, int32_t, bool, const RuntimeMethod*))Dictionary_2_set_Item_mDFB096115D9E26E5B5E5A4183F9E098CE8A14F74_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean UnityEngine.SystemInfo::SupportsTextureFormat(UnityEngine.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_SupportsTextureFormat_mE7DA9DC2B167CB7E9A864924C8772307F1A2F0B9 (int32_t ___format0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Reflection.FieldInfo System.Type::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t * Type_GetField_m7E0197C80896690B5F5DBCCE44E3354FFDA13D2C (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Assertions.Assert::IsNotNull<UnityEngine.Texture>(!!0)
inline void Assert_IsNotNull_TisTexture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_mF786614AA0B9B1F07F1522C795443925B2ACDC5C (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value0, const RuntimeMethod* method)
{
	((  void (*) (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *, const RuntimeMethod*))Assert_IsNotNull_TisRuntimeObject_m55EFDAA397D9E255C8A38AEB4AC3E0C49D0FB3E8_gshared)(___value0, method);
}
// UnityEngine.RenderTextureFormat UnityEngine.RenderTexture::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderTexture_get_format_mB9BBCACA0A809206FA73109ACF2A6976E19DB822 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, const RuntimeMethod* method);
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture2D_get_format_mCBCE13524A94042693822BDDE112990B25F4F8E4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RenderTextureFormat>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mEC8BB5FB46FE71167C303BB248F7239832FC7B3D (Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * __this, int32_t ___key0, int32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F *, int32_t, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_mC4BC2CF356468F9CE48C69C89BF5616E99D66F60_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mDA84BC4EB1A9B38BEFC73A8718A628B870CA9345 (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * __this, int32_t ___key0, bool* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *, int32_t, bool*, const RuntimeMethod*))Dictionary_2_TryGetValue_mDA84BC4EB1A9B38BEFC73A8718A628B870CA9345_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.Rendering.PostProcessing.TextureLerper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureLerper__ctor_m74C29B82F5BDDEE941798B3451F5CAC949786403 (TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.RenderTexture>::.ctor()
inline void List_1__ctor_mB38E72AF05051F5403306E56E602C5284D335714 (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RenderTexture>::get_Count()
inline int32_t List_1_get_Count_m1137DAC9D2025FFC7D853298B59113ACAB858B24_inline (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.RenderTexture>::GetEnumerator()
inline Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D  List_1_GetEnumerator_m7328294DBE16FF49F6D96893E2EAEA6C9F96E441 (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D  (*) (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.RenderTexture>::get_Current()
inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * Enumerator_get_Current_m92E98DA7340C7A6A1EF4FFAC2A59FE3ADF9DC58D_inline (Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D * __this, const RuntimeMethod* method)
{
	return ((  RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * (*) (Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Rendering.PostProcessing.RuntimeUtilities::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeUtilities_Destroy_mFACBF0A88388BF2481DCF65832A811B0BA873FFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.RenderTexture>::MoveNext()
inline bool Enumerator_MoveNext_m75D2D40791CA5307F5E15771C106A81BF029364A (Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.RenderTexture>::Dispose()
inline void Enumerator_Dispose_m34DAD6AC8E8B11E77125890D86CF0D9AF99CAEE4 (Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.RenderTexture>::Clear()
inline void List_1_Clear_m4B8C3E5C469683DF4A94C4054743B220F13BB4F5 (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.RenderTexture>::Add(!0)
inline void List_1_Add_mCB66852EF108F7810C149B035C969D0956FC0205 (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.RenderTexture>::get_Item(System.Int32)
inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * List_1_get_Item_m2048DC2B083950A76C19CB8FCB54BC7BD13A8B6C_inline (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * (*) (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 UnityEngine.RenderTexture::get_volumeDepth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderTexture_get_volumeDepth_mD0B567DC91B5633CB8C1F6A716914B07B12BBF65 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.RenderTexture::get_enableRandomWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTexture_get_enableRandomWrite_mEB1D75D2BC5A4F0C136D7BF4C2E2977CDECE8E96 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m8E4220FDA652BA3CACE60FBA59D868B921C0F533 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_anisoLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_anisoLevel_mE51360F6CD0562FD6355F8C0509B70A454CB33BE (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_volumeDepth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_volumeDepth_m01D7BD50386DDAE777CE3CB9B60FDD7DE798AC93 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_enableRandomWrite(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_enableRandomWrite_m024F49DB3CA3B02FA0EEBB3EACB37E6228CAA183 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.RenderTexture::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTexture_Create_m723CBB7B7543E9FAFEBC04E8FDCDF629DA31F411 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.RenderTexture>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m551A84AB57B24D7963D50A1EE3CD8BB9338CF539 (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Assertions.Assert::AreEqual(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreEqual_m0BBA9909EB4BC7763AACFC6CC51D886EDF62BCD2 (int32_t ___expected0, int32_t ___actual1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Texture3D::get_depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture3D_get_depth_m2926D5A2C6EFBAE35749E4B9E8637A8CF08DC10B (Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.Rendering.PostProcessing.TextureLerper::Get(UnityEngine.RenderTextureFormat,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * TextureLerper_Get_m7BD996F475523844239018F193F65A66ED0DC2C8 (TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616 * __this, int32_t ___format0, int32_t ___w1, int32_t ___h2, int32_t ___d3, bool ___enableRandomWrite4, bool ___force3D5, const RuntimeMethod* method);
// System.Int32 UnityEngine.ComputeShader::FindKernel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComputeShader_FindKernel_mCA2683905A5DAB573D50389E2B24B48B18CD53D0 (ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::SetComputeVectorParam(UnityEngine.ComputeShader,System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetComputeVectorParam_m6FD77F6D465976FBCBB64D8EEC1CC2903A254319 (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * ___computeShader0, String_t* ___name1, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___val2, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::SetComputeTextureParam(UnityEngine.ComputeShader,System.Int32,System.String,UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetComputeTextureParam_m478EC6F4970EF8C3C0645FEB5B17A59C9299829B (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * ___computeShader0, int32_t ___kernelIndex1, String_t* ___name2, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___rt3, const RuntimeMethod* method);
// System.Void UnityEngine.ComputeShader::GetKernelThreadGroupSizes(System.Int32,System.UInt32&,System.UInt32&,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeShader_GetKernelThreadGroupSizes_m44AD93684763240FE15578CF0AEF38EFFAE2EE5F (ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * __this, int32_t ___kernelIndex0, uint32_t* ___x1, uint32_t* ___y2, uint32_t* ___z3, const RuntimeMethod* method);
// System.Void UnityEngine.Assertions.Assert::AreEqual(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreEqual_m5FC43623F34AFE0CA20A36D52935BECFAC8EC0AC (uint32_t ___expected0, uint32_t ___actual1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F (float ___f0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::DispatchCompute(UnityEngine.ComputeShader,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_DispatchCompute_m2EB0711D3F10F874D487D081F169FA0D8996DC64 (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * ___computeShader0, int32_t ___kernelIndex1, int32_t ___threadGroupsX2, int32_t ___threadGroupsY3, int32_t ___threadGroupsZ4, const RuntimeMethod* method);
// UnityEngine.RenderTextureFormat UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::GetUncompressedRenderTextureFormat(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureFormatUtilities_GetUncompressedRenderTextureFormat_mA9DD8DE489A31097C86EAB22E736EF837C243473 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Rendering.PostProcessing.TextureLerper UnityEngine.Rendering.PostProcessing.TextureLerper::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616 * TextureLerper_get_instance_m0AB68B6199F15DE585DA84890EFFBEA18C0C9135 (const RuntimeMethod* method);
// UnityEngine.Texture UnityEngine.Rendering.PostProcessing.TextureLerper::Lerp(UnityEngine.Texture,UnityEngine.Texture,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * TextureLerper_Lerp_mCA914BD184BAC500B67975AB1259C3CB53AFF517 (TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616 * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___from0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___to1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Rendering.PostProcessing.RuntimeUtilities::GetLutStrip(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * RuntimeUtilities_GetLutStrip_m036B3B4D4A254F44036A937D2720F80C40A7A5A3 (int32_t ___size0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_clear_m9F8076CEFE7B8119A9903212DCBF2BFED114E97F (const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Texture>::Interp(T,T,System.Single)
inline void ParameterOverride_1_Interp_m214BFB261A31899C890C2ABC74213D6D67A8F1DD (ParameterOverride_1_t728745CADEFE1DB4C2C14F6DD6EA53A447A763E4 * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___from0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___to1, float ___t2, const RuntimeMethod* method)
{
	((  void (*) (ParameterOverride_1_t728745CADEFE1DB4C2C14F6DD6EA53A447A763E4 *, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *, float, const RuntimeMethod*))ParameterOverride_1_Interp_mB59FC295B5BB5DD47B5D25830C08D33216D65513_gshared)(__this, ___from0, ___to1, ___t2, method);
}
// UnityEngine.Texture UnityEngine.Rendering.PostProcessing.TextureLerper::Lerp(UnityEngine.Texture,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * TextureLerper_Lerp_mE50D3C8F764C051E06B7D02A7AA434BA89E948B6 (TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616 * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___from0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___to1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Texture>::.ctor()
inline void ParameterOverride_1__ctor_m8589096CBAE30DB288B207FE7A753E5443138437 (ParameterOverride_1_t728745CADEFE1DB4C2C14F6DD6EA53A447A763E4 * __this, const RuntimeMethod* method)
{
	((  void (*) (ParameterOverride_1_t728745CADEFE1DB4C2C14F6DD6EA53A447A763E4 *, const RuntimeMethod*))ParameterOverride_1__ctor_m556377B217BBEA620976DB5DA0CDE623313AF271_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.Tonemapper>::.ctor()
inline void ParameterOverride_1__ctor_mC99912A74AB3FB44D567417D783F5E8EE7FAEC64 (ParameterOverride_1_t8588121E60167FEBD76D8CB9E60F62ED765B1CA2 * __this, const RuntimeMethod* method)
{
	((  void (*) (ParameterOverride_1_t8588121E60167FEBD76D8CB9E60F62ED765B1CA2 *, const RuntimeMethod*))ParameterOverride_1__ctor_mBD19143A8A4B73C1A4AB95C5AFCC22588E90EF74_gshared)(__this, method);
}
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::.ctor()
inline void ParameterOverride_1__ctor_mA0A58A2C544574167825FA95B25FFDD290BD85D3 (ParameterOverride_1_tA1EC3D90C3A54AC1167AD63F5340CDECED8BDC9F * __this, const RuntimeMethod* method)
{
	((  void (*) (ParameterOverride_1_tA1EC3D90C3A54AC1167AD63F5340CDECED8BDC9F *, const RuntimeMethod*))ParameterOverride_1__ctor_mA0A58A2C544574167825FA95B25FFDD290BD85D3_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::.ctor()
inline void ParameterOverride_1__ctor_mDF15F5A4C43E00F41BAD785C725A1DED7D76097A (ParameterOverride_1_t2A72895E2C56AB0AFB2436C4C8523C5553ED32F3 * __this, const RuntimeMethod* method)
{
	((  void (*) (ParameterOverride_1_t2A72895E2C56AB0AFB2436C4C8523C5553ED32F3 *, const RuntimeMethod*))ParameterOverride_1__ctor_mDF15F5A4C43E00F41BAD785C725A1DED7D76097A_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector4_op_Implicit_m3A59F157B9B8A3C2DD495B6F9B76F3C0D40BDFCC (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::.ctor()
inline void ParameterOverride_1__ctor_m8677DD09A9CA61F329E1B257381A7C128B30EC8B (ParameterOverride_1_tDC434805B157596FAACBAB390CC666791BAC0B01 * __this, const RuntimeMethod* method)
{
	((  void (*) (ParameterOverride_1_tDC434805B157596FAACBAB390CC666791BAC0B01 *, const RuntimeMethod*))ParameterOverride_1__ctor_m8677DD09A9CA61F329E1B257381A7C128B30EC8B_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.PostProcessing.Monitor::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_OnDisable_m14F2DEE3F862B0B00809D578BA7FE816BE712E64 (Monitor_tEB1AC1F82D87F6BEE4839CF882097D5889302372 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ComputeBuffer::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_Release_m7F1D518D1542CD4B961B17E3A44376FA78E977EB (ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.Monitor::CheckOutput(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_CheckOutput_m3BB128BD30F3AB15E6DB71D68B4EBB7F656DCE71 (Monitor_tEB1AC1F82D87F6BEE4839CF882097D5889302372 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.ComputeBuffer::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer__ctor_m66E68E9066197B06CF35FDDAFAFDC8C1DECC5436 (ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * __this, int32_t ___count0, int32_t ___stride1, const RuntimeMethod* method);
// System.Int32 UnityEngine.ComputeBuffer::get_count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComputeBuffer_get_count_m93FD58E4F51DDBC9B520A4A9E28B1A04F63C4827 (ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rendering.PostProcessing.RuntimeUtilities::get_isLinearColorSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeUtilities_get_isLinearColorSpace_m1D106C8BE629AEB323D34C96816B2518699F2578 (const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::SetComputeBufferParam(UnityEngine.ComputeShader,System.Int32,System.String,UnityEngine.ComputeBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetComputeBufferParam_mF62034747B7C0EDDAA810F917969A5CA308705F5 (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * ___computeShader0, int32_t ___kernelIndex1, String_t* ___name2, ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * ___buffer3, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetBuffer(System.Int32,UnityEngine.ComputeBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetBuffer_mA0802C6F378E9565224ECC00120180DF18691271 (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, int32_t ___nameID0, ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * ___value1, const RuntimeMethod* method);
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RenderTargetIdentifier::op_Implicit(UnityEngine.Rendering.BuiltinRenderTextureType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  RenderTargetIdentifier_op_Implicit_mB7B58C1D295E2DAE3C76874D030D4878A825E359 (int32_t ___type0, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.Rendering.PostProcessing.Monitor::get_output()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * Monitor_get_output_m7CEEB7508AD1B405744EA32D5FB767644FD2776D_inline (Monitor_tEB1AC1F82D87F6BEE4839CF882097D5889302372 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.Monitor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor__ctor_mE42FA0D19C9F80DE341A10BC7A383C667D2103C2 (Monitor_tEB1AC1F82D87F6BEE4839CF882097D5889302372 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.VignetteModeParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VignetteModeParameter__ctor_mC6796A35EABF529ECE1B9EA6691490DB2EA20DDF (VignetteModeParameter_tA57BF7F5798A90AE3DFE38CF80A85E931F3DD613 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ColorParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorParameter__ctor_m0EFA9DD0C4820F5834ACD00E9FDCBFB953624834 (ColorParameter_t2C43807B2FABC978D5B12345759389816D9CA7C5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.Vector2Parameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Parameter__ctor_m3FA2F5CBEAF9F462CE5AEFED865F4B87679ACDDE (Vector2Parameter_t0E1CE8C27130B36A75688B706DE0EACCE9DE41A3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.FloatParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatParameter__ctor_m9D086D769C6C1B3596C4A38B5ED8C7B401628650 (FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.BoolParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolParameter__ctor_m04A36F46605F50DC4BB82080139D88760BC19284 (BoolParameter_t4EDC330A9E3F5830FCE384CE1FF707D3276EBF80 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.TextureParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureParameter__ctor_m126D706CA8F854F68EE6BC93B11862051D2DBAFC (TextureParameter_tC6A936F3D3C6DD5834DC7866D62E1BE3073BD8C2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessEffectSettings__ctor_m60531067359283C000461ED8A1FCF58FC1C4D0EB (PostProcessEffectSettings_t2F43C0693DFF9BD09B921BB6278EC086A6F817F0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.VignetteMode>::.ctor()
inline void ParameterOverride_1__ctor_m5806011A48A7796E82CA46EDF9236CB237F3FE04 (ParameterOverride_1_tBB825297D5F1093447C082888FB4560FBA8044E8 * __this, const RuntimeMethod* method)
{
	((  void (*) (ParameterOverride_1_tBB825297D5F1093447C082888FB4560FBA8044E8 *, const RuntimeMethod*))ParameterOverride_1__ctor_mBD19143A8A4B73C1A4AB95C5AFCC22588E90EF74_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.PostProcessing.PropertySheet::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertySheet_EnableKeyword_m8689E0BDBEF8AF049C3764DBE9CDDF1EF6A8E753 (PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * __this, String_t* ___keyword0, const RuntimeMethod* method);
// T UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<UnityEngine.Rendering.PostProcessing.Vignette>::get_settings()
inline Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139 * PostProcessEffectRenderer_1_get_settings_mC6D18F55EDC49EA96938682C01562885A7012771_inline (PostProcessEffectRenderer_1_t9E77F2B389318EDAB4E13470F1D361199095A582 * __this, const RuntimeMethod* method)
{
	return ((  Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139 * (*) (PostProcessEffectRenderer_1_t9E77F2B389318EDAB4E13470F1D361199095A582 *, const RuntimeMethod*))PostProcessEffectRenderer_1_get_settings_m709F0A9EA59359EA57C0D2FC86E98C54627B96DC_gshared_inline)(__this, method);
}
// System.Void UnityEngine.MaterialPropertyBlock::SetColor(System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetColor_mF3C09C80572DB6D21B813EAEB04AA3A49A0DC496 (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, int32_t ___nameID0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method);
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Rendering.PostProcessing.VignetteMode>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
inline int32_t ParameterOverride_1_op_Implicit_m3421453A2FC1E622746189430AFEB71CA7F399AB (ParameterOverride_1_tBB825297D5F1093447C082888FB4560FBA8044E8 * ___prop0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ParameterOverride_1_tBB825297D5F1093447C082888FB4560FBA8044E8 *, const RuntimeMethod*))ParameterOverride_1_op_Implicit_mD2AC8F8324E0A6F9960D1A6120D7F4D8B9C19B2C_gshared)(___prop0, method);
}
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<UnityEngine.Rendering.PostProcessing.Vignette>::.ctor()
inline void PostProcessEffectRenderer_1__ctor_m669139999BE6229BB3B6937B2305D6CDD214281B (PostProcessEffectRenderer_1_t9E77F2B389318EDAB4E13470F1D361199095A582 * __this, const RuntimeMethod* method)
{
	((  void (*) (PostProcessEffectRenderer_1_t9E77F2B389318EDAB4E13470F1D361199095A582 *, const RuntimeMethod*))PostProcessEffectRenderer_1__ctor_m3881798424AD6120FD220E54B65D5996D27B6202_gshared)(__this, method);
}
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E (float ___f0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::GetTemporaryRT(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.FilterMode,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_GetTemporaryRT_mD8089EAEA2133AA0D545CB525BC56C5762BD3BBF (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, int32_t ___nameID0, int32_t ___width1, int32_t ___height2, int32_t ___depthBuffer3, int32_t ___filter4, int32_t ___format5, const RuntimeMethod* method);
// System.Single UnityEngine.Rendering.PostProcessing.HableCurve::get_inverseWhitePoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HableCurve_get_inverseWhitePoint_mD9A48EF5A7542BEF6DECEC1F7F6354D210B7C90D_inline (HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rendering.PostProcessing.HableCurve::get_x0()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HableCurve_get_x0_m611124271E4A894A9FB9D350C2F4215AE20A10E7_inline (HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rendering.PostProcessing.HableCurve::get_x1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HableCurve_get_x1_mA8B86FCBC557774456D8B63D57FFDFB913BA42B9_inline (HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEEFF6CF7892F8783B9AB8EDAF11A367344B0A2C3 (U3CU3Ec_t582D59DA00DB9923A86F7788D2FDFB1DBECDC721 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m612827A29AEDBBCC3CC4BB9C7E0E26A82CCF52B3 (U3CU3Ec_tDC45B2C4212767583DEE0B7E8F97CF301BD1703B * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Rendering.PostProcessing.PostProcessBundle>::get_Value()
inline PostProcessBundle_tB61A95212353716F4AE3896A6DF3B19AE53FB791 * KeyValuePair_2_get_Value_mD1876C0E1E116C36906D24EED25799C991F0187B_inline (KeyValuePair_2_t1AD67FE677906939CF01F9FFF580AD52E81866D4 * __this, const RuntimeMethod* method)
{
	return ((  PostProcessBundle_tB61A95212353716F4AE3896A6DF3B19AE53FB791 * (*) (KeyValuePair_2_t1AD67FE677906939CF01F9FFF580AD52E81866D4 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// UnityEngine.Rendering.PostProcessing.PostProcessAttribute UnityEngine.Rendering.PostProcessing.PostProcessBundle::get_attribute()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PostProcessAttribute_tB0E64790042AFD9FC695619EA4186DF608E1EDF4 * PostProcessBundle_get_attribute_mBF4459B0E62B71CD348781716456E69DC676D03F_inline (PostProcessBundle_tB61A95212353716F4AE3896A6DF3B19AE53FB791 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c__DisplayClass54_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass54_1__ctor_m6FED926DF3698E86D9ED7733D7E10EE1A3FD70DD (U3CU3Ec__DisplayClass54_1_t0503A8A3B84EDDC793BDAD1BB06397139580EE25 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<UnityEngine.Rendering.PostProcessing.PostProcessBundle>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m0CBDEC79CDAD9A63F4A5FD0424F11C665BA3E84A (Predicate_1_tBC55AA0C1F69FD07A5F71AE40FD34D7821C89C28 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tBC55AA0C1F69FD07A5F71AE40FD34D7821C89C28 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessBundle>::Exists(System.Predicate`1<!0>)
inline bool List_1_Exists_m833FA69BD3395CE6CF44C4776345752387488098 (List_1_t38482F65BCF1BEF03685350BBB5B7E3D3CDF69A2 * __this, Predicate_1_tBC55AA0C1F69FD07A5F71AE40FD34D7821C89C28 * ___match0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t38482F65BCF1BEF03685350BBB5B7E3D3CDF69A2 *, Predicate_1_tBC55AA0C1F69FD07A5F71AE40FD34D7821C89C28 *, const RuntimeMethod*))List_1_Exists_mCD79CCDB5FF533F73A031B475BA7C5D2278B0AAA_gshared)(__this, ___match0, method);
}
// UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings UnityEngine.Rendering.PostProcessing.PostProcessBundle::get_settings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PostProcessEffectSettings_t2F43C0693DFF9BD09B921BB6278EC086A6F817F0 * PostProcessBundle_get_settings_m2636D9B1938880F353CBC47627D3F713D65009BD_inline (PostProcessBundle_tB61A95212353716F4AE3896A6DF3B19AE53FB791 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m425E24478A6F17E4ED7213D83B81FD8E999C46FB (U3CU3Ec_t681FA47134D0C4294D8B7D1E0A10BE22028B460E * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsAbstract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F (Type_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessProfile/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m007B39B322384120C3311450483FEDF4C671420D (U3CU3Ec_t9177938DD17D2938706D5EE5D16C0A887C4A5481 * __this, const RuntimeMethod* method);
// System.Object System.Object::MemberwiseClone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_MemberwiseClone_m0AEE84C38E9A87C372139B4C342454553F0F6392 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2BC17DAAA4D21C741B7E25F193024C940AB1F8F3 (U3CU3Ec_tE39BDF7A48F8422A0FF101B5F67BD03D1237B2F8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.Spline::.ctor(UnityEngine.AnimationCurve,System.Single,System.Boolean,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline__ctor_mD644879C46B45FF62C7B6D65F536BC66A00890B3 (Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 * __this, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve0, float ___zeroValue1, bool ___loop2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___bounds3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisAnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_m15CDE7D893B87D8F517EF98368DA7F56E8F5CE19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int frameCount = -1;
		__this->set_frameCount_7((-1));
		// public Spline(AnimationCurve curve, float zeroValue, bool loop, Vector2 bounds)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Assert.IsNotNull(curve);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = ___curve0;
		IL2CPP_RUNTIME_CLASS_INIT(Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		Assert_IsNotNull_TisAnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_m15CDE7D893B87D8F517EF98368DA7F56E8F5CE19(L_0, /*hidden argument*/Assert_IsNotNull_TisAnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_m15CDE7D893B87D8F517EF98368DA7F56E8F5CE19_RuntimeMethod_var);
		// this.curve = curve;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1 = ___curve0;
		__this->set_curve_2(L_1);
		// m_ZeroValue = zeroValue;
		float L_2 = ___zeroValue1;
		__this->set_m_ZeroValue_4(L_2);
		// m_Loop = loop;
		bool L_3 = ___loop2;
		__this->set_m_Loop_3(L_3);
		// m_Range = bounds.magnitude;
		float L_4;
		L_4 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&___bounds3), /*hidden argument*/NULL);
		__this->set_m_Range_5(L_4);
		// cachedData = new float[k_Precision];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		__this->set_cachedData_8(L_5);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.Spline::Cache(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_Cache_mC30B8B6D444CFFFD1677515BC60323612E5F799A (Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 * __this, int32_t ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	{
		// if (frame == frameCount)
		int32_t L_0 = ___frame0;
		int32_t L_1 = __this->get_frameCount_7();
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		goto IL_0108;
	}

IL_0013:
	{
		// var length = curve.length;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = __this->get_curve_2();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// if (m_Loop && length > 1)
		bool L_5 = __this->get_m_Loop_3();
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)L_6) > ((int32_t)1))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B5_0 = 0;
	}

IL_002e:
	{
		V_2 = (bool)G_B5_0;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_00ca;
		}
	}
	{
		// if (m_InternalLoopingCurve == null)
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_8 = __this->get_m_InternalLoopingCurve_6();
		V_5 = (bool)((((RuntimeObject*)(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)L_8) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		// m_InternalLoopingCurve = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_10 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_10, /*hidden argument*/NULL);
		__this->set_m_InternalLoopingCurve_6(L_10);
	}

IL_0050:
	{
		// var prev = curve[length - 1];
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_11 = __this->get_curve_2();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_13;
		L_13 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_11, ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_13;
		// prev.time -= m_Range;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * L_14 = (&V_3);
		float L_15;
		L_15 = Keyframe_get_time_m75EBFDECA329315F6D41A60C0B1291F5BA4039E8((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)L_14, /*hidden argument*/NULL);
		float L_16 = __this->get_m_Range_5();
		Keyframe_set_time_mB48C8B14B2346F46A0A4FE27CDD01D163F945CC4((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)L_14, ((float)il2cpp_codegen_subtract((float)L_15, (float)L_16)), /*hidden argument*/NULL);
		// var next = curve[0];
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_17 = __this->get_curve_2();
		NullCheck(L_17);
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_18;
		L_18 = AnimationCurve_get_Item_mD5F6B4C79C432C9CEADB6D116C07969802D5611A(L_17, 0, /*hidden argument*/NULL);
		V_4 = L_18;
		// next.time += m_Range;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * L_19 = (&V_4);
		float L_20;
		L_20 = Keyframe_get_time_m75EBFDECA329315F6D41A60C0B1291F5BA4039E8((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)L_19, /*hidden argument*/NULL);
		float L_21 = __this->get_m_Range_5();
		Keyframe_set_time_mB48C8B14B2346F46A0A4FE27CDD01D163F945CC4((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)L_19, ((float)il2cpp_codegen_add((float)L_20, (float)L_21)), /*hidden argument*/NULL);
		// m_InternalLoopingCurve.keys = curve.keys;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_22 = __this->get_m_InternalLoopingCurve_6();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_23 = __this->get_curve_2();
		NullCheck(L_23);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_24;
		L_24 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		AnimationCurve_set_keys_m146468F0FF5228D829489E845C1193B1D83543BF(L_22, L_24, /*hidden argument*/NULL);
		// m_InternalLoopingCurve.AddKey(prev);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_25 = __this->get_m_InternalLoopingCurve_6();
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27;
		L_27 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_25, L_26, /*hidden argument*/NULL);
		// m_InternalLoopingCurve.AddKey(next);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_28 = __this->get_m_InternalLoopingCurve_6();
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_29 = V_4;
		NullCheck(L_28);
		int32_t L_30;
		L_30 = AnimationCurve_AddKey_m3AEE7259785540EF6A157BA99B3737AC60E30D9A(L_28, L_29, /*hidden argument*/NULL);
	}

IL_00ca:
	{
		// for (int i = 0; i < k_Precision; i++)
		V_6 = 0;
		goto IL_00ee;
	}

IL_00cf:
	{
		// cachedData[i] = Evaluate((float)i * k_Step, length);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_31 = __this->get_cachedData_8();
		int32_t L_32 = V_6;
		int32_t L_33 = V_6;
		int32_t L_34 = V_0;
		float L_35;
		L_35 = Spline_Evaluate_m1460BA797E9037E0E124E23228F3740E554EDCAB(__this, ((float)il2cpp_codegen_multiply((float)((float)((float)L_33)), (float)(0.0078125f))), L_34, /*hidden argument*/NULL);
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (float)L_35);
		// for (int i = 0; i < k_Precision; i++)
		int32_t L_36 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00ee:
	{
		// for (int i = 0; i < k_Precision; i++)
		int32_t L_37 = V_6;
		V_7 = (bool)((((int32_t)L_37) < ((int32_t)((int32_t)128)))? 1 : 0);
		bool L_38 = V_7;
		if (L_38)
		{
			goto IL_00cf;
		}
	}
	{
		// frameCount = Time.renderedFrameCount;
		int32_t L_39;
		L_39 = Time_get_renderedFrameCount_m97524F45A5996675DB60401A0211F700286D2B9A(/*hidden argument*/NULL);
		__this->set_frameCount_7(L_39);
	}

IL_0108:
	{
		// }
		return;
	}
}
// System.Single UnityEngine.Rendering.PostProcessing.Spline::Evaluate(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Spline_Evaluate_m1460BA797E9037E0E124E23228F3740E554EDCAB (Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 * __this, float ___t0, int32_t ___length1, const RuntimeMethod* method)
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		// if (length == 0)
		int32_t L_0 = ___length1;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return m_ZeroValue;
		float L_2 = __this->get_m_ZeroValue_4();
		V_1 = L_2;
		goto IL_0043;
	}

IL_0012:
	{
		// if (!m_Loop || length == 1)
		bool L_3 = __this->get_m_Loop_3();
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = ___length1;
		G_B5_0 = ((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B5_0 = 1;
	}

IL_0021:
	{
		V_2 = (bool)G_B5_0;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// return curve.Evaluate(t);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_6 = __this->get_curve_2();
		float L_7 = ___t0;
		NullCheck(L_6);
		float L_8;
		L_8 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_0043;
	}

IL_0034:
	{
		// return m_InternalLoopingCurve.Evaluate(t);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_9 = __this->get_m_InternalLoopingCurve_6();
		float L_10 = ___t0;
		NullCheck(L_9);
		float L_11;
		L_11 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_9, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		goto IL_0043;
	}

IL_0043:
	{
		// }
		float L_12 = V_1;
		return L_12;
	}
}
// System.Single UnityEngine.Rendering.PostProcessing.Spline::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Spline_Evaluate_m03A5DA5ED5DB3EF65549D7A34EA9BEF93002DB39 (Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 * __this, float ___t0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// return Evaluate(t, curve.length);
		float L_0 = ___t0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1 = __this->get_curve_2();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_1, /*hidden argument*/NULL);
		float L_3;
		L_3 = Spline_Evaluate_m1460BA797E9037E0E124E23228F3740E554EDCAB(__this, L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		float L_4 = V_0;
		return L_4;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.Spline::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Spline_GetHashCode_m0FBD6BFA0E4AEEC84B5CD48133F76658A687B59E (Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int hash = 17;
		V_0 = ((int32_t)17);
		// hash = hash * 23 + curve.GetHashCode(); // Not implemented in Unity, so it'll always return the same value :(
		int32_t L_0 = V_0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1 = __this->get_curve_2();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		// return hash;
		int32_t L_3 = V_0;
		V_1 = L_3;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		int32_t L_4 = V_1;
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
// System.Void UnityEngine.Rendering.PostProcessing.SplineParameter::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineParameter_OnEnable_m9D99A04E17F6FE5953609600C28AEAEDCE989CBF (SplineParameter_t34BEB0723CDE19AAB7E784B20834CABC7B490339 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (value != null)
		Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 * L_0 = ((ParameterOverride_1_t59B7B43BE6BA4482219D94175E4F900B7AD9BF9E *)__this)->get_value_1();
		V_0 = (bool)((!(((RuntimeObject*)(Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// value.Cache(int.MinValue);
		Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 * L_2 = ((ParameterOverride_1_t59B7B43BE6BA4482219D94175E4F900B7AD9BF9E *)__this)->get_value_1();
		NullCheck(L_2);
		Spline_Cache_mC30B8B6D444CFFFD1677515BC60323612E5F799A(L_2, ((int32_t)-2147483648LL), /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.SplineParameter::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineParameter_SetValue_m69C0F27B7E38731878EFFD3A4E0CDB5AF84FDF4B (SplineParameter_t34BEB0723CDE19AAB7E784B20834CABC7B490339 * __this, ParameterOverride_tED887E59B87A5DD3BFDAAAF745F82D9080FA4784 * ___parameter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterOverride_1_SetValue_mC3B1246E035741D4C531CD1945500D0922F90ED2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// base.SetValue(parameter);
		ParameterOverride_tED887E59B87A5DD3BFDAAAF745F82D9080FA4784 * L_0 = ___parameter0;
		ParameterOverride_1_SetValue_mC3B1246E035741D4C531CD1945500D0922F90ED2(__this, L_0, /*hidden argument*/ParameterOverride_1_SetValue_mC3B1246E035741D4C531CD1945500D0922F90ED2_RuntimeMethod_var);
		// if (value != null)
		Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 * L_1 = ((ParameterOverride_1_t59B7B43BE6BA4482219D94175E4F900B7AD9BF9E *)__this)->get_value_1();
		V_0 = (bool)((!(((RuntimeObject*)(Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// value.Cache(Time.renderedFrameCount);
		Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 * L_3 = ((ParameterOverride_1_t59B7B43BE6BA4482219D94175E4F900B7AD9BF9E *)__this)->get_value_1();
		int32_t L_4;
		L_4 = Time_get_renderedFrameCount_m97524F45A5996675DB60401A0211F700286D2B9A(/*hidden argument*/NULL);
		NullCheck(L_3);
		Spline_Cache_mC30B8B6D444CFFFD1677515BC60323612E5F799A(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.SplineParameter::Interp(UnityEngine.Rendering.PostProcessing.Spline,UnityEngine.Rendering.PostProcessing.Spline,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineParameter_Interp_m6176D958775A7A8B72A1C506EAB7D7AF01EAF79D (SplineParameter_t34BEB0723CDE19AAB7E784B20834CABC7B490339 * __this, Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 * ___from0, Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 * ___to1, float ___t2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterOverride_1_Interp_m9789CCC726BAAF33FD8ABAFC88C97E8B7F1B5B70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	{
		// if (from == null || to == null)
		Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 * L_0 = ___from0;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 * L_1 = ___to1;
		G_B3_0 = ((((RuntimeObject*)(Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_000b;
	}

IL_000a:
	{
		G_B3_0 = 1;
	}

IL_000b:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// base.Interp(from, to, t);
		Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 * L_3 = ___from0;
		Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 * L_4 = ___to1;
		float L_5 = ___t2;
		ParameterOverride_1_Interp_m9789CCC726BAAF33FD8ABAFC88C97E8B7F1B5B70(__this, L_3, L_4, L_5, /*hidden argument*/ParameterOverride_1_Interp_m9789CCC726BAAF33FD8ABAFC88C97E8B7F1B5B70_RuntimeMethod_var);
		// return;
		goto IL_0072;
	}

IL_001c:
	{
		// int frameCount = Time.renderedFrameCount;
		int32_t L_6;
		L_6 = Time_get_renderedFrameCount_m97524F45A5996675DB60401A0211F700286D2B9A(/*hidden argument*/NULL);
		V_0 = L_6;
		// from.Cache(frameCount);
		Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 * L_7 = ___from0;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		Spline_Cache_mC30B8B6D444CFFFD1677515BC60323612E5F799A(L_7, L_8, /*hidden argument*/NULL);
		// to.Cache(frameCount);
		Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 * L_9 = ___to1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		Spline_Cache_mC30B8B6D444CFFFD1677515BC60323612E5F799A(L_9, L_10, /*hidden argument*/NULL);
		// for (int i = 0; i < Spline.k_Precision; i++)
		V_2 = 0;
		goto IL_0064;
	}

IL_0036:
	{
		// float a = from.cachedData[i];
		Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 * L_11 = ___from0;
		NullCheck(L_11);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_12 = L_11->get_cachedData_8();
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		float L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_3 = L_15;
		// float b = to.cachedData[i];
		Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 * L_16 = ___to1;
		NullCheck(L_16);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_17 = L_16->get_cachedData_8();
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		float L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_4 = L_20;
		// value.cachedData[i] = a + (b - a) * t;
		Spline_t3DFE953930BD7AD3344CF76823B31373FE7561F2 * L_21 = ((ParameterOverride_1_t59B7B43BE6BA4482219D94175E4F900B7AD9BF9E *)__this)->get_value_1();
		NullCheck(L_21);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_22 = L_21->get_cachedData_8();
		int32_t L_23 = V_2;
		float L_24 = V_3;
		float L_25 = V_4;
		float L_26 = V_3;
		float L_27 = ___t2;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (float)((float)il2cpp_codegen_add((float)L_24, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_25, (float)L_26)), (float)L_27)))));
		// for (int i = 0; i < Spline.k_Precision; i++)
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0064:
	{
		// for (int i = 0; i < Spline.k_Precision; i++)
		int32_t L_29 = V_2;
		V_5 = (bool)((((int32_t)L_29) < ((int32_t)((int32_t)128)))? 1 : 0);
		bool L_30 = V_5;
		if (L_30)
		{
			goto IL_0036;
		}
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.SplineParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineParameter__ctor_mEC00ACA5793BDCC57C9B7AF36C910807FB874D30 (SplineParameter_t34BEB0723CDE19AAB7E784B20834CABC7B490339 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterOverride_1__ctor_m7EC3EFB55B1303375DA1384F1D445061E08953FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParameterOverride_1__ctor_m7EC3EFB55B1303375DA1384F1D445061E08953FC(__this, /*hidden argument*/ParameterOverride_1__ctor_m7EC3EFB55B1303375DA1384F1D445061E08953FC_RuntimeMethod_var);
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
// System.Boolean UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing::IsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubpixelMorphologicalAntialiasing_IsSupported_m36BF5ED85CCE881F282294770640F2CF3919089B (SubpixelMorphologicalAntialiasing_t0CD7FE868E6C921A1B3D211694DE1C7CF4441330 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return !RuntimeUtilities.isSinglePassStereoEnabled;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = RuntimeUtilities_get_isSinglePassStereoEnabled_m32CAA62D88CC87AC5C737817D7E92580CF57E40C(/*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing::Render(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubpixelMorphologicalAntialiasing_Render_m3FA7E7FDF3AB6EFC8128FFC01E64CB77322589B8 (SubpixelMorphologicalAntialiasing_t0CD7FE868E6C921A1B3D211694DE1C7CF4441330 * __this, PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C7EBE7FA922EC3E10AA3F6954A60AE63E3D97FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7445F99B8F21114A1A2E9E341A81E61AAD98112B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB0D9F5B9917E33FFA8D3428D1CEC5DA1F0F0C62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8C7A356B73AA14E51E3C23F430521F42A4E8831);
		s_Il2CppMethodInitialized = true;
	}
	PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * V_0 = NULL;
	CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * V_1 = NULL;
	Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var sheet = context.propertySheets.Get(context.resources.shaders.subpixelMorphologicalAntialiasing);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_0 = ___context0;
		NullCheck(L_0);
		PropertySheetFactory_t2D2278105A154ED6036D5BE72D09359A5FB94835 * L_1;
		L_1 = PostProcessRenderContext_get_propertySheets_mE1135E07BE4F59354198DF05198E64CAF2E41D5C_inline(L_0, /*hidden argument*/NULL);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_2 = ___context0;
		NullCheck(L_2);
		PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC * L_3;
		L_3 = PostProcessRenderContext_get_resources_mEC353AFE49A4A72D561FCB8758E364578AB2B9D7_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2 * L_4 = L_3->get_shaders_7();
		NullCheck(L_4);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_5 = L_4->get_subpixelMorphologicalAntialiasing_11();
		NullCheck(L_1);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_6;
		L_6 = PropertySheetFactory_Get_mE4CC267B0EB28F0892A426B67015A309F2540CBF(L_1, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// sheet.properties.SetTexture("_AreaTex", context.resources.smaaLuts.area);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_7 = V_0;
		NullCheck(L_7);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_8;
		L_8 = PropertySheet_get_properties_m3AB962E1C6A0C44D98E16AFBB73B40BA5E21B504_inline(L_7, /*hidden argument*/NULL);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_9 = ___context0;
		NullCheck(L_9);
		PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC * L_10;
		L_10 = PostProcessRenderContext_get_resources_mEC353AFE49A4A72D561FCB8758E364578AB2B9D7_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		SMAALuts_t7B662D41B4C6B2CF97D9C5363B61AA14808C2932 * L_11 = L_10->get_smaaLuts_6();
		NullCheck(L_11);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_12 = L_11->get_area_0();
		NullCheck(L_8);
		MaterialPropertyBlock_SetTexture_mE81B2B7E3CF624544CD7D91177797053AFC0CD93(L_8, _stringLiteralD8C7A356B73AA14E51E3C23F430521F42A4E8831, L_12, /*hidden argument*/NULL);
		// sheet.properties.SetTexture("_SearchTex", context.resources.smaaLuts.search);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_13 = V_0;
		NullCheck(L_13);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_14;
		L_14 = PropertySheet_get_properties_m3AB962E1C6A0C44D98E16AFBB73B40BA5E21B504_inline(L_13, /*hidden argument*/NULL);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_15 = ___context0;
		NullCheck(L_15);
		PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC * L_16;
		L_16 = PostProcessRenderContext_get_resources_mEC353AFE49A4A72D561FCB8758E364578AB2B9D7_inline(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		SMAALuts_t7B662D41B4C6B2CF97D9C5363B61AA14808C2932 * L_17 = L_16->get_smaaLuts_6();
		NullCheck(L_17);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18 = L_17->get_search_1();
		NullCheck(L_14);
		MaterialPropertyBlock_SetTexture_mE81B2B7E3CF624544CD7D91177797053AFC0CD93(L_14, _stringLiteral5C7EBE7FA922EC3E10AA3F6954A60AE63E3D97FD, L_18, /*hidden argument*/NULL);
		// var cmd = context.command;
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_19 = ___context0;
		NullCheck(L_19);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_20;
		L_20 = PostProcessRenderContext_get_command_mE54DFA2523219208C87BA95ECD2D766889DACA71_inline(L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		// cmd.BeginSample("SubpixelMorphologicalAntialiasing");
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_21 = V_1;
		NullCheck(L_21);
		CommandBuffer_BeginSample_mA6CADFE0049E601CE0E5FE8CFF23820AE98514EA(L_21, _stringLiteral7445F99B8F21114A1A2E9E341A81E61AAD98112B, /*hidden argument*/NULL);
		// cmd.GetTemporaryRT(ShaderIDs.SMAA_Flip, context.width, context.height, 0, FilterMode.Bilinear, context.sourceFormat, RenderTextureReadWrite.Linear, 1, false, RenderTextureMemoryless.None, context.camera.allowDynamicResolution);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_22 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var);
		int32_t L_23 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_SMAA_Flip_5();
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_24 = ___context0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = PostProcessRenderContext_get_width_m4965F17411CA0E2AEC993B02D9CEEB0E258E8A74_inline(L_24, /*hidden argument*/NULL);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_26 = ___context0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = PostProcessRenderContext_get_height_m3F500068E9E598DA75850D864AEC83708B1D9BD4_inline(L_26, /*hidden argument*/NULL);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_28 = ___context0;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = PostProcessRenderContext_get_sourceFormat_mD846BE618AD913E5A3EFF8AE3BDFD1B2DF53896E_inline(L_28, /*hidden argument*/NULL);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_30 = ___context0;
		NullCheck(L_30);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_31;
		L_31 = PostProcessRenderContext_get_camera_m56CA965425F5C59D32D7CF2E11E589FBD8A16C3D(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		bool L_32;
		L_32 = Camera_get_allowDynamicResolution_mA41F9F7ABD2EE6F496482BB9200A76048BF72414(L_31, /*hidden argument*/NULL);
		NullCheck(L_22);
		CommandBuffer_GetTemporaryRT_m416F3104D78E2FBFFAB769F692C5A4DED3A334E9(L_22, L_23, L_25, L_27, 0, 1, L_29, 1, 1, (bool)0, 0, L_32, /*hidden argument*/NULL);
		// cmd.GetTemporaryRT(ShaderIDs.SMAA_Flop, context.width, context.height, 0, FilterMode.Bilinear, context.sourceFormat, RenderTextureReadWrite.Linear, 1, false, RenderTextureMemoryless.None, context.camera.allowDynamicResolution);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_33 = V_1;
		int32_t L_34 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_SMAA_Flop_6();
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_35 = ___context0;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = PostProcessRenderContext_get_width_m4965F17411CA0E2AEC993B02D9CEEB0E258E8A74_inline(L_35, /*hidden argument*/NULL);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_37 = ___context0;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = PostProcessRenderContext_get_height_m3F500068E9E598DA75850D864AEC83708B1D9BD4_inline(L_37, /*hidden argument*/NULL);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_39 = ___context0;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = PostProcessRenderContext_get_sourceFormat_mD846BE618AD913E5A3EFF8AE3BDFD1B2DF53896E_inline(L_39, /*hidden argument*/NULL);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_41 = ___context0;
		NullCheck(L_41);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_42;
		L_42 = PostProcessRenderContext_get_camera_m56CA965425F5C59D32D7CF2E11E589FBD8A16C3D(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		bool L_43;
		L_43 = Camera_get_allowDynamicResolution_mA41F9F7ABD2EE6F496482BB9200A76048BF72414(L_42, /*hidden argument*/NULL);
		NullCheck(L_33);
		CommandBuffer_GetTemporaryRT_m416F3104D78E2FBFFAB769F692C5A4DED3A334E9(L_33, L_34, L_36, L_38, 0, 1, L_40, 1, 1, (bool)0, 0, L_43, /*hidden argument*/NULL);
		// cmd.BlitFullscreenTriangle(context.source, ShaderIDs.SMAA_Flip, sheet, (int)Pass.EdgeDetection + (int)quality, true);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_44 = V_1;
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_45 = ___context0;
		NullCheck(L_45);
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_46;
		L_46 = PostProcessRenderContext_get_source_m7AB20613A7F91FDB5B7872995E6DD205A9D52135_inline(L_45, /*hidden argument*/NULL);
		int32_t L_47 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_SMAA_Flip_5();
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_48;
		L_48 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(L_47, /*hidden argument*/NULL);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_49 = V_0;
		int32_t L_50 = __this->get_quality_0();
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE ));
		Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE  L_51 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		RuntimeUtilities_BlitFullscreenTriangle_mABC8DFC7F13C86175696C407ABA469F66B98128E(L_44, L_46, L_48, L_49, L_50, (bool)1, L_51, /*hidden argument*/NULL);
		// cmd.BlitFullscreenTriangle(ShaderIDs.SMAA_Flip, ShaderIDs.SMAA_Flop, sheet, (int)Pass.BlendWeights + (int)quality);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_52 = V_1;
		int32_t L_53 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_SMAA_Flip_5();
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_54;
		L_54 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(L_53, /*hidden argument*/NULL);
		int32_t L_55 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_SMAA_Flop_6();
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_56;
		L_56 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(L_55, /*hidden argument*/NULL);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_57 = V_0;
		int32_t L_58 = __this->get_quality_0();
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE ));
		Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE  L_59 = V_2;
		RuntimeUtilities_BlitFullscreenTriangle_mABC8DFC7F13C86175696C407ABA469F66B98128E(L_52, L_54, L_56, L_57, ((int32_t)il2cpp_codegen_add((int32_t)3, (int32_t)L_58)), (bool)0, L_59, /*hidden argument*/NULL);
		// cmd.SetGlobalTexture("_BlendTex", ShaderIDs.SMAA_Flop);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_60 = V_1;
		int32_t L_61 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_SMAA_Flop_6();
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_62;
		L_62 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(L_61, /*hidden argument*/NULL);
		NullCheck(L_60);
		CommandBuffer_SetGlobalTexture_mB259AEE78963224D752B6002215566F6C7A62CE7(L_60, _stringLiteralAB0D9F5B9917E33FFA8D3428D1CEC5DA1F0F0C62, L_62, /*hidden argument*/NULL);
		// cmd.BlitFullscreenTriangle(context.source, context.destination, sheet, (int)Pass.NeighborhoodBlending);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_63 = V_1;
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_64 = ___context0;
		NullCheck(L_64);
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_65;
		L_65 = PostProcessRenderContext_get_source_m7AB20613A7F91FDB5B7872995E6DD205A9D52135_inline(L_64, /*hidden argument*/NULL);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_66 = ___context0;
		NullCheck(L_66);
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_67;
		L_67 = PostProcessRenderContext_get_destination_mD5A4C6656F4FC57B0FF57FA7F7CC597F62BD2C88_inline(L_66, /*hidden argument*/NULL);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_68 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE ));
		Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE  L_69 = V_2;
		RuntimeUtilities_BlitFullscreenTriangle_mABC8DFC7F13C86175696C407ABA469F66B98128E(L_63, L_65, L_67, L_68, 6, (bool)0, L_69, /*hidden argument*/NULL);
		// cmd.ReleaseTemporaryRT(ShaderIDs.SMAA_Flip);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_70 = V_1;
		int32_t L_71 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_SMAA_Flip_5();
		NullCheck(L_70);
		CommandBuffer_ReleaseTemporaryRT_mE4A4A8DE6B315956BEAB66915FF720F1C61BCDC5(L_70, L_71, /*hidden argument*/NULL);
		// cmd.ReleaseTemporaryRT(ShaderIDs.SMAA_Flop);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_72 = V_1;
		int32_t L_73 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_SMAA_Flop_6();
		NullCheck(L_72);
		CommandBuffer_ReleaseTemporaryRT_mE4A4A8DE6B315956BEAB66915FF720F1C61BCDC5(L_72, L_73, /*hidden argument*/NULL);
		// cmd.EndSample("SubpixelMorphologicalAntialiasing");
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_74 = V_1;
		NullCheck(L_74);
		CommandBuffer_EndSample_mB852BF4B83918656E93C9C327A20E163EC910A66(L_74, _stringLiteral7445F99B8F21114A1A2E9E341A81E61AAD98112B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubpixelMorphologicalAntialiasing__ctor_m7B9AE5611F4A33D29FC40BA3375B14C5C63CDFBC (SubpixelMorphologicalAntialiasing_t0CD7FE868E6C921A1B3D211694DE1C7CF4441330 * __this, const RuntimeMethod* method)
{
	{
		// public Quality quality = Quality.High;
		__this->set_quality_0(2);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Rendering.PostProcessing.TargetPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetPool__ctor_m53BBB5D1522A6404B1F418DA26C491B0889222A3 (TargetPool_t903089FCEE606214C490876AB928DA25294034CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal TargetPool()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_Pool = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_0, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		__this->set_m_Pool_0(L_0);
		// Get(); // Pre-warm with a default target to avoid black frame on first frame
		int32_t L_1;
		L_1 = TargetPool_Get_mFD7A784E2BDD7B37E3F25B3C61CEF986665CC59C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.TargetPool::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TargetPool_Get_mFD7A784E2BDD7B37E3F25B3C61CEF986665CC59C (TargetPool_t903089FCEE606214C490876AB928DA25294034CC * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int ret = Get(m_Current);
		int32_t L_0 = __this->get_m_Current_1();
		int32_t L_1;
		L_1 = TargetPool_Get_m15FB87703C592304BBC6D92F2EFF5A192458F75A(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// m_Current++;
		int32_t L_2 = __this->get_m_Current_1();
		__this->set_m_Current_1(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		// return ret;
		int32_t L_3 = V_0;
		V_1 = L_3;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.TargetPool::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TargetPool_Get_m15FB87703C592304BBC6D92F2EFF5A192458F75A (TargetPool_t903089FCEE606214C490876AB928DA25294034CC * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADD218EEEC60165FC319ED66CAD59FFB5160614D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// if (m_Pool.Count > i)
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = __this->get_m_Pool_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_0, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		int32_t L_2 = ___i0;
		V_1 = (bool)((((int32_t)L_1) > ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// ret = m_Pool[i];
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_4 = __this->get_m_Pool_0();
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		V_0 = L_6;
		goto IL_006c;
	}

IL_0024:
	{
		goto IL_0049;
	}

IL_0027:
	{
		// m_Pool.Add(Shader.PropertyToID("_TargetPool" + i));
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_7 = __this->get_m_Pool_0();
		String_t* L_8;
		L_8 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___i0), /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralADD218EEEC60165FC319ED66CAD59FFB5160614D, L_8, /*hidden argument*/NULL);
		int32_t L_10;
		L_10 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_7, L_10, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
	}

IL_0049:
	{
		// while (m_Pool.Count <= i)
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_11 = __this->get_m_Pool_0();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_11, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		int32_t L_13 = ___i0;
		V_2 = (bool)((((int32_t)((((int32_t)L_12) > ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_2;
		if (L_14)
		{
			goto IL_0027;
		}
	}
	{
		// ret = m_Pool[i];
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_15 = __this->get_m_Pool_0();
		int32_t L_16 = ___i0;
		NullCheck(L_15);
		int32_t L_17;
		L_17 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_15, L_16, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		V_0 = L_17;
	}

IL_006c:
	{
		// return ret;
		int32_t L_18 = V_0;
		V_3 = L_18;
		goto IL_0070;
	}

IL_0070:
	{
		// }
		int32_t L_19 = V_3;
		return L_19;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TargetPool::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetPool_Reset_m446CF3DF6B8C18795EE04F60EC7091DCF5C2DC11 (TargetPool_t903089FCEE606214C490876AB928DA25294034CC * __this, const RuntimeMethod* method)
{
	{
		// m_Current = 0;
		__this->set_m_Current_1(0);
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
// UnityEngine.Vector2 UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::get_jitter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  TemporalAntialiasing_get_jitter_mD89AFB2AFDEE63822CF1C632364408FDF76FB418 (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 jitter { get; private set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CjitterU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::set_jitter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TemporalAntialiasing_set_jitter_m9450BBE1B75081EE0E5084A2A83B06DD89748C1B (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 jitter { get; private set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_U3CjitterU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::get_sampleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TemporalAntialiasing_get_sampleIndex_m91D33ECE0C6D0DC89B585FF7DEB824239655C94F (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, const RuntimeMethod* method)
{
	{
		// public int sampleIndex { get; private set; }
		int32_t L_0 = __this->get_U3CsampleIndexU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::set_sampleIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TemporalAntialiasing_set_sampleIndex_m7DBCBC1B1A1423533E4CDFDB5224F49BE48405AE (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int sampleIndex { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CsampleIndexU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::IsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TemporalAntialiasing_IsSupported_m8FBD9000C346E38D503D9D0570DB89006EEDBC5E (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		//             return SystemInfo.supportedRenderTargetCount >= 2
		//                 && SystemInfo.supportsMotionVectors
		// #if !UNITY_2017_3_OR_NEWER
		//                 && !RuntimeUtilities.isVREnabled
		// #endif
		//                 && SystemInfo.graphicsDeviceType != GraphicsDeviceType.OpenGLES2;
		int32_t L_0;
		L_0 = SystemInfo_get_supportedRenderTargetCount_mF1878047AAED7BE6839958B61C0CC7E2FB204B44(/*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)2)))
		{
			goto IL_001d;
		}
	}
	{
		bool L_1;
		L_1 = SystemInfo_get_supportsMotionVectors_mC53D082851F990A59130D6C1B462D709B85E98DC(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2;
		L_2 = SystemInfo_get_graphicsDeviceType_mC207E6B2221AD5AB39831C2412FF7FBD2F43CC02(/*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)((((int32_t)L_2) == ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B4_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.DepthTextureMode UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::GetCameraFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TemporalAntialiasing_GetCameraFlags_mFDDC41042F5315ED2B8FBF5363807EC312B49E99 (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return DepthTextureMode.Depth | DepthTextureMode.MotionVectors;
		V_0 = 5;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::ResetHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TemporalAntialiasing_ResetHistory_m02880AF6BF6467418C89DC15AFEE07CA2DCDD693 (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, const RuntimeMethod* method)
{
	{
		// m_ResetHistory = true;
		__this->set_m_ResetHistory_7((bool)1);
		// }
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::GenerateRandomOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  TemporalAntialiasing_GenerateRandomOffset_mA022EBD160240B67B11EEF31DFF79C275532D4B1 (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var offset = new Vector2(
		//         HaltonSeq.Get((sampleIndex & 1023) + 1, 2) - 0.5f,
		//         HaltonSeq.Get((sampleIndex & 1023) + 1, 3) - 0.5f
		//     );
		int32_t L_0;
		L_0 = TemporalAntialiasing_get_sampleIndex_m91D33ECE0C6D0DC89B585FF7DEB824239655C94F_inline(__this, /*hidden argument*/NULL);
		float L_1;
		L_1 = HaltonSeq_Get_m506F719276E54819A350ECA521DC14CAAF93DCDE(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)1023))), (int32_t)1)), 2, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = TemporalAntialiasing_get_sampleIndex_m91D33ECE0C6D0DC89B585FF7DEB824239655C94F_inline(__this, /*hidden argument*/NULL);
		float L_3;
		L_3 = HaltonSeq_Get_m506F719276E54819A350ECA521DC14CAAF93DCDE(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)1023))), (int32_t)1)), 3, /*hidden argument*/NULL);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), ((float)il2cpp_codegen_subtract((float)L_1, (float)(0.5f))), ((float)il2cpp_codegen_subtract((float)L_3, (float)(0.5f))), /*hidden argument*/NULL);
		// if (++sampleIndex >= k_SampleCount)
		int32_t L_4;
		L_4 = TemporalAntialiasing_get_sampleIndex_m91D33ECE0C6D0DC89B585FF7DEB824239655C94F_inline(__this, /*hidden argument*/NULL);
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		int32_t L_5 = V_2;
		TemporalAntialiasing_set_sampleIndex_m7DBCBC1B1A1423533E4CDFDB5224F49BE48405AE_inline(__this, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_2;
		V_1 = (bool)((((int32_t)((((int32_t)L_6) < ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0060;
		}
	}
	{
		// sampleIndex = 0;
		TemporalAntialiasing_set_sampleIndex_m7DBCBC1B1A1423533E4CDFDB5224F49BE48405AE_inline(__this, 0, /*hidden argument*/NULL);
	}

IL_0060:
	{
		// return offset;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = V_0;
		V_3 = L_8;
		goto IL_0064;
	}

IL_0064:
	{
		// }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_3;
		return L_9;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::GetJitteredProjectionMatrix(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  TemporalAntialiasing_GetJitteredProjectionMatrix_m0795E81DB41C2D8E4399A289A28648EDB1DF554A (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_Invoke_m961C5C528A5608E542F51F72E30EDBDB9165FC9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	{
		// jitter = GenerateRandomOffset();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = TemporalAntialiasing_GenerateRandomOffset_mA022EBD160240B67B11EEF31DFF79C275532D4B1(__this, /*hidden argument*/NULL);
		TemporalAntialiasing_set_jitter_m9450BBE1B75081EE0E5084A2A83B06DD89748C1B_inline(__this, L_0, /*hidden argument*/NULL);
		// jitter *= jitterSpread;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = TemporalAntialiasing_get_jitter_mD89AFB2AFDEE63822CF1C632364408FDF76FB418_inline(__this, /*hidden argument*/NULL);
		float L_2 = __this->get_jitterSpread_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_1, L_2, /*hidden argument*/NULL);
		TemporalAntialiasing_set_jitter_m9450BBE1B75081EE0E5084A2A83B06DD89748C1B_inline(__this, L_3, /*hidden argument*/NULL);
		// if (jitteredMatrixFunc != null)
		Func_3_tC8B822BF6F66E9A74EBD84D1208814C2EDBFDC96 * L_4 = __this->get_jitteredMatrixFunc_4();
		V_1 = (bool)((!(((RuntimeObject*)(Func_3_tC8B822BF6F66E9A74EBD84D1208814C2EDBFDC96 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_004a;
		}
	}
	{
		// cameraProj = jitteredMatrixFunc(camera, jitter);
		Func_3_tC8B822BF6F66E9A74EBD84D1208814C2EDBFDC96 * L_6 = __this->get_jitteredMatrixFunc_4();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7 = ___camera0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = TemporalAntialiasing_get_jitter_mD89AFB2AFDEE63822CF1C632364408FDF76FB418_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_9;
		L_9 = Func_3_Invoke_m961C5C528A5608E542F51F72E30EDBDB9165FC9C(L_6, L_7, L_8, /*hidden argument*/Func_3_Invoke_m961C5C528A5608E542F51F72E30EDBDB9165FC9C_RuntimeMethod_var);
		V_0 = L_9;
		goto IL_006f;
	}

IL_004a:
	{
		// cameraProj = camera.orthographic
		//     ? RuntimeUtilities.GetJitteredOrthographicProjectionMatrix(camera, jitter)
		//     : RuntimeUtilities.GetJitteredPerspectiveProjectionMatrix(camera, jitter);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_10 = ___camera0;
		NullCheck(L_10);
		bool L_11;
		L_11 = Camera_get_orthographic_m3DE9A7705E2B4926BBFD2D6798D97B931B5B5550(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0061;
		}
	}
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_12 = ___camera0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		L_13 = TemporalAntialiasing_get_jitter_mD89AFB2AFDEE63822CF1C632364408FDF76FB418_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_14;
		L_14 = RuntimeUtilities_GetJitteredPerspectiveProjectionMatrix_m0D997EC76CAA5CE3D381F17C798D0575847C1D3A(L_12, L_13, /*hidden argument*/NULL);
		G_B5_0 = L_14;
		goto IL_006d;
	}

IL_0061:
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_15 = ___camera0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = TemporalAntialiasing_get_jitter_mD89AFB2AFDEE63822CF1C632364408FDF76FB418_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_17;
		L_17 = RuntimeUtilities_GetJitteredOrthographicProjectionMatrix_mB97B8CD7C2D251DF19C5BB5C3394E8A31F885B13(L_15, L_16, /*hidden argument*/NULL);
		G_B5_0 = L_17;
	}

IL_006d:
	{
		V_0 = G_B5_0;
	}

IL_006f:
	{
		// jitter = new Vector2(jitter.x / camera.pixelWidth, jitter.y / camera.pixelHeight);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		L_18 = TemporalAntialiasing_get_jitter_mD89AFB2AFDEE63822CF1C632364408FDF76FB418_inline(__this, /*hidden argument*/NULL);
		float L_19 = L_18.get_x_0();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_20 = ___camera0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = Camera_get_pixelWidth_m7DC2EF816FA7AB52EEE991E054FC7B1F31982802(L_20, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22;
		L_22 = TemporalAntialiasing_get_jitter_mD89AFB2AFDEE63822CF1C632364408FDF76FB418_inline(__this, /*hidden argument*/NULL);
		float L_23 = L_22.get_y_1();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_24 = ___camera0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = Camera_get_pixelHeight_m7A18CEE2D95835EB95156E88D4D27EA018404201(L_24, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_26), ((float)((float)L_19/(float)((float)((float)L_21)))), ((float)((float)L_23/(float)((float)((float)L_25)))), /*hidden argument*/NULL);
		TemporalAntialiasing_set_jitter_m9450BBE1B75081EE0E5084A2A83B06DD89748C1B_inline(__this, L_26, /*hidden argument*/NULL);
		// return cameraProj;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_27 = V_0;
		V_2 = L_27;
		goto IL_00a5;
	}

IL_00a5:
	{
		// }
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_28 = V_2;
		return L_28;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::ConfigureJitteredProjectionMatrix(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TemporalAntialiasing_ConfigureJitteredProjectionMatrix_mAF68323051A8891986F77097CBBF64DBBAFB369F (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * ___context0, const RuntimeMethod* method)
{
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * V_0 = NULL;
	{
		// var camera = context.camera;
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_0 = ___context0;
		NullCheck(L_0);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = PostProcessRenderContext_get_camera_m56CA965425F5C59D32D7CF2E11E589FBD8A16C3D(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// camera.nonJitteredProjectionMatrix = camera.projectionMatrix;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = V_0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = V_0;
		NullCheck(L_3);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_4;
		L_4 = Camera_get_projectionMatrix_mDB77E3A7F71CEF085797BCE58FAC78058C5D6756(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Camera_set_nonJitteredProjectionMatrix_mBD4086F0CE187C0E68619606FA3F06AB9113A7D0(L_2, L_4, /*hidden argument*/NULL);
		// camera.projectionMatrix = GetJitteredProjectionMatrix(camera);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = V_0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_7;
		L_7 = TemporalAntialiasing_GetJitteredProjectionMatrix_m0795E81DB41C2D8E4399A289A28648EDB1DF554A(__this, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Camera_set_projectionMatrix_m3645AC49FC94726BDA07191C80299D8361D5C328(L_5, L_7, /*hidden argument*/NULL);
		// camera.useJitteredProjectionMatrixForTransparentRendering = false;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8 = V_0;
		NullCheck(L_8);
		Camera_set_useJitteredProjectionMatrixForTransparentRendering_mC534E01407398A73886F2E5796824120B50461EA(L_8, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::ConfigureStereoJitteredProjectionMatrices(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TemporalAntialiasing_ConfigureStereoJitteredProjectionMatrices_mA0AB57E1C881BEEFE2E22EAA97CBFCF463AB7ACD (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * V_0 = NULL;
	int32_t V_1 = 0;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	{
		// var camera = context.camera;
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_0 = ___context0;
		NullCheck(L_0);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = PostProcessRenderContext_get_camera_m56CA965425F5C59D32D7CF2E11E589FBD8A16C3D(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// jitter = GenerateRandomOffset();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = TemporalAntialiasing_GenerateRandomOffset_mA022EBD160240B67B11EEF31DFF79C275532D4B1(__this, /*hidden argument*/NULL);
		TemporalAntialiasing_set_jitter_m9450BBE1B75081EE0E5084A2A83B06DD89748C1B_inline(__this, L_2, /*hidden argument*/NULL);
		// jitter *= jitterSpread;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = TemporalAntialiasing_get_jitter_mD89AFB2AFDEE63822CF1C632364408FDF76FB418_inline(__this, /*hidden argument*/NULL);
		float L_4 = __this->get_jitterSpread_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_3, L_4, /*hidden argument*/NULL);
		TemporalAntialiasing_set_jitter_m9450BBE1B75081EE0E5084A2A83B06DD89748C1B_inline(__this, L_5, /*hidden argument*/NULL);
		// for (var eye = Camera.StereoscopicEye.Left; eye <= Camera.StereoscopicEye.Right; eye++)
		V_1 = 0;
		goto IL_006d;
	}

IL_0031:
	{
		// context.camera.CopyStereoDeviceProjectionMatrixToNonJittered(eye);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_6 = ___context0;
		NullCheck(L_6);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7;
		L_7 = PostProcessRenderContext_get_camera_m56CA965425F5C59D32D7CF2E11E589FBD8A16C3D(L_6, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		Camera_CopyStereoDeviceProjectionMatrixToNonJittered_m96565F7CE1BEB2A14B226B72A9288EDF2F128F61(L_7, L_8, /*hidden argument*/NULL);
		// var originalProj = context.camera.GetStereoNonJitteredProjectionMatrix(eye);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_9 = ___context0;
		NullCheck(L_9);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_10;
		L_10 = PostProcessRenderContext_get_camera_m56CA965425F5C59D32D7CF2E11E589FBD8A16C3D(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_12;
		L_12 = Camera_GetStereoNonJitteredProjectionMatrix_m1EABA8DF00E3C256504DCAC2C6DB7E2BAFE53243(L_10, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		// var jitteredMatrix = RuntimeUtilities.GenerateJitteredProjectionMatrixFromOriginal(context, originalProj, jitter);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_13 = ___context0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_14 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = TemporalAntialiasing_get_jitter_mD89AFB2AFDEE63822CF1C632364408FDF76FB418_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_16;
		L_16 = RuntimeUtilities_GenerateJitteredProjectionMatrixFromOriginal_mA84280675C3CBE08CD98DFCFD7EF70C155EF52C5(L_13, L_14, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		// context.camera.SetStereoProjectionMatrix(eye, jitteredMatrix);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_17 = ___context0;
		NullCheck(L_17);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_18;
		L_18 = PostProcessRenderContext_get_camera_m56CA965425F5C59D32D7CF2E11E589FBD8A16C3D(L_17, /*hidden argument*/NULL);
		int32_t L_19 = V_1;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_20 = V_3;
		NullCheck(L_18);
		Camera_SetStereoProjectionMatrix_mADBD0709A2C5CC89E96DAAE97D145BCF76E12D3A(L_18, L_19, L_20, /*hidden argument*/NULL);
		// for (var eye = Camera.StereoscopicEye.Left; eye <= Camera.StereoscopicEye.Right; eye++)
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_006d:
	{
		// for (var eye = Camera.StereoscopicEye.Left; eye <= Camera.StereoscopicEye.Right; eye++)
		int32_t L_22 = V_1;
		V_4 = (bool)((((int32_t)((((int32_t)L_22) > ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_4;
		if (L_23)
		{
			goto IL_0031;
		}
	}
	{
		// jitter = new Vector2(jitter.x / context.screenWidth, jitter.y / context.screenHeight);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
		L_24 = TemporalAntialiasing_get_jitter_mD89AFB2AFDEE63822CF1C632364408FDF76FB418_inline(__this, /*hidden argument*/NULL);
		float L_25 = L_24.get_x_0();
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_26 = ___context0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = PostProcessRenderContext_get_screenWidth_m9F3ECB9E1D36F430FADA9EC9C19A8EAD0C714D04_inline(L_26, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28;
		L_28 = TemporalAntialiasing_get_jitter_mD89AFB2AFDEE63822CF1C632364408FDF76FB418_inline(__this, /*hidden argument*/NULL);
		float L_29 = L_28.get_y_1();
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_30 = ___context0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = PostProcessRenderContext_get_screenHeight_m6E8CD22AEA7C1A754C1652DF457FA7D6E11C84B9_inline(L_30, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_32), ((float)((float)L_25/(float)((float)((float)L_27)))), ((float)((float)L_29/(float)((float)((float)L_31)))), /*hidden argument*/NULL);
		TemporalAntialiasing_set_jitter_m9450BBE1B75081EE0E5084A2A83B06DD89748C1B_inline(__this, L_32, /*hidden argument*/NULL);
		// camera.useJitteredProjectionMatrixForTransparentRendering = false;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_33 = V_0;
		NullCheck(L_33);
		Camera_set_useJitteredProjectionMatrixForTransparentRendering_mC534E01407398A73886F2E5796824120B50461EA(L_33, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::GenerateHistoryName(UnityEngine.RenderTexture,System.Int32,UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TemporalAntialiasing_GenerateHistoryName_m20B5ABFEF42DE2A387BFDD207E7805FA9B715674 (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___rt0, int32_t ___id1, PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * ___context2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CFF6C896ECBCE58E3E3C5BA9EDC69955D8F4E24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53061051CFE4CD1AED5D34B00C2D795C27B3DA26);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// rt.name = "Temporal Anti-aliasing History id #" + id;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = ___rt0;
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___id1), /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1CFF6C896ECBCE58E3E3C5BA9EDC69955D8F4E24, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_0, L_2, /*hidden argument*/NULL);
		// if (context.stereoActive)
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_3 = ___context2;
		NullCheck(L_3);
		bool L_4;
		L_4 = PostProcessRenderContext_get_stereoActive_mFF6F57ABA3F8A044D7EE09143A5F8C47B5EF6AE3_inline(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		// rt.name += " for eye " + context.xrActiveEye;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_6 = ___rt0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_7 = L_6;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_7, /*hidden argument*/NULL);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_9 = ___context2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = PostProcessRenderContext_get_xrActiveEye_mF542BBCE2BE780B1018E8640BF92BF44A1B25586_inline(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_8, _stringLiteral53061051CFE4CD1AED5D34B00C2D795C27B3DA26, L_11, /*hidden argument*/NULL);
		NullCheck(L_7);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_7, L_12, /*hidden argument*/NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// UnityEngine.RenderTexture UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::CheckHistory(System.Int32,UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * TemporalAntialiasing_CheckHistory_m01C9B2DD2A27A0898EE0E3604D91BA0334627D13 (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, int32_t ___id0, PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_6 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_7 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// int activeEye = context.xrActiveEye;
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_0 = ___context1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PostProcessRenderContext_get_xrActiveEye_mF542BBCE2BE780B1018E8640BF92BF44A1B25586_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (m_HistoryTextures[activeEye] == null)
		RenderTextureU5BU5DU5BU5D_t3A4F4CB09299411BE3D4D6BD41F85F6E13838EAD* L_2 = __this->get_m_HistoryTextures_12();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* L_5 = (RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E*)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = (bool)((((RuntimeObject*)(RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E*)L_5) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0025;
		}
	}
	{
		// m_HistoryTextures[activeEye] = new RenderTexture[k_NumHistoryTextures];
		RenderTextureU5BU5DU5BU5D_t3A4F4CB09299411BE3D4D6BD41F85F6E13838EAD* L_7 = __this->get_m_HistoryTextures_12();
		int32_t L_8 = V_0;
		RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* L_9 = (RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E*)(RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E*)SZArrayNew(RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E_il2cpp_TypeInfo_var, (uint32_t)2);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E*)L_9);
	}

IL_0025:
	{
		// var rt = m_HistoryTextures[activeEye][id];
		RenderTextureU5BU5DU5BU5D_t3A4F4CB09299411BE3D4D6BD41F85F6E13838EAD* L_10 = __this->get_m_HistoryTextures_12();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* L_13 = (RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E*)(L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14 = ___id0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_1 = L_16;
		// if (m_ResetHistory || rt == null || !rt.IsCreated())
		bool L_17 = __this->get_m_ResetHistory_7();
		if (L_17)
		{
			goto IL_004c;
		}
	}
	{
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_004c;
		}
	}
	{
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_20 = V_1;
		NullCheck(L_20);
		bool L_21;
		L_21 = RenderTexture_IsCreated_m78F28FE94FDA5346E2E8B3AEC0863B8DCF116958(L_20, /*hidden argument*/NULL);
		G_B6_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_004d;
	}

IL_004c:
	{
		G_B6_0 = 1;
	}

IL_004d:
	{
		V_3 = (bool)G_B6_0;
		bool L_22 = V_3;
		if (!L_22)
		{
			goto IL_00b0;
		}
	}
	{
		// RenderTexture.ReleaseTemporary(rt);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_23 = V_1;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_23, /*hidden argument*/NULL);
		// rt = context.GetScreenSpaceTemporaryRT(0, context.sourceFormat);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_24 = ___context1;
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_25 = ___context1;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = PostProcessRenderContext_get_sourceFormat_mD846BE618AD913E5A3EFF8AE3BDFD1B2DF53896E_inline(L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_27;
		L_27 = PostProcessRenderContext_GetScreenSpaceTemporaryRT_m2E603ACA026F7EFBD88C774950E07FBCD1E10CF5(L_24, 0, L_26, 0, 0, 0, /*hidden argument*/NULL);
		V_1 = L_27;
		// GenerateHistoryName(rt, id, context);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_28 = V_1;
		int32_t L_29 = ___id0;
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_30 = ___context1;
		TemporalAntialiasing_GenerateHistoryName_m20B5ABFEF42DE2A387BFDD207E7805FA9B715674(__this, L_28, L_29, L_30, /*hidden argument*/NULL);
		// rt.filterMode = FilterMode.Bilinear;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_31 = V_1;
		NullCheck(L_31);
		Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0(L_31, 1, /*hidden argument*/NULL);
		// m_HistoryTextures[activeEye][id] = rt;
		RenderTextureU5BU5DU5BU5D_t3A4F4CB09299411BE3D4D6BD41F85F6E13838EAD* L_32 = __this->get_m_HistoryTextures_12();
		int32_t L_33 = V_0;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* L_35 = (RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E*)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		int32_t L_36 = ___id0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_37 = V_1;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_37);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_37);
		// context.command.BlitFullscreenTriangle(context.source, rt);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_38 = ___context1;
		NullCheck(L_38);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_39;
		L_39 = PostProcessRenderContext_get_command_mE54DFA2523219208C87BA95ECD2D766889DACA71_inline(L_38, /*hidden argument*/NULL);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_40 = ___context1;
		NullCheck(L_40);
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_41;
		L_41 = PostProcessRenderContext_get_source_m7AB20613A7F91FDB5B7872995E6DD205A9D52135_inline(L_40, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_42 = V_1;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_43;
		L_43 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_42, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE ));
		Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE  L_44 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		RuntimeUtilities_BlitFullscreenTriangle_mF733D5B783D8EC34392246C72F90114F4CD143F5(L_39, L_41, L_43, (bool)0, L_44, /*hidden argument*/NULL);
		goto IL_0137;
	}

IL_00b0:
	{
		// else if (rt.width != context.width || rt.height != context.height)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_45 = V_1;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_45);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_47 = ___context1;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = PostProcessRenderContext_get_width_m4965F17411CA0E2AEC993B02D9CEEB0E258E8A74_inline(L_47, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_46) == ((uint32_t)L_48))))
		{
			goto IL_00d1;
		}
	}
	{
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_49 = V_1;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_49);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_51 = ___context1;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = PostProcessRenderContext_get_height_m3F500068E9E598DA75850D864AEC83708B1D9BD4_inline(L_51, /*hidden argument*/NULL);
		G_B11_0 = ((((int32_t)((((int32_t)L_50) == ((int32_t)L_52))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00d2;
	}

IL_00d1:
	{
		G_B11_0 = 1;
	}

IL_00d2:
	{
		V_5 = (bool)G_B11_0;
		bool L_53 = V_5;
		if (!L_53)
		{
			goto IL_0137;
		}
	}
	{
		// var rt2 = context.GetScreenSpaceTemporaryRT(0, context.sourceFormat);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_54 = ___context1;
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_55 = ___context1;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = PostProcessRenderContext_get_sourceFormat_mD846BE618AD913E5A3EFF8AE3BDFD1B2DF53896E_inline(L_55, /*hidden argument*/NULL);
		NullCheck(L_54);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_57;
		L_57 = PostProcessRenderContext_GetScreenSpaceTemporaryRT_m2E603ACA026F7EFBD88C774950E07FBCD1E10CF5(L_54, 0, L_56, 0, 0, 0, /*hidden argument*/NULL);
		V_6 = L_57;
		// GenerateHistoryName(rt2, id, context);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_58 = V_6;
		int32_t L_59 = ___id0;
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_60 = ___context1;
		TemporalAntialiasing_GenerateHistoryName_m20B5ABFEF42DE2A387BFDD207E7805FA9B715674(__this, L_58, L_59, L_60, /*hidden argument*/NULL);
		// rt2.filterMode = FilterMode.Bilinear;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_61 = V_6;
		NullCheck(L_61);
		Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0(L_61, 1, /*hidden argument*/NULL);
		// m_HistoryTextures[activeEye][id] = rt2;
		RenderTextureU5BU5DU5BU5D_t3A4F4CB09299411BE3D4D6BD41F85F6E13838EAD* L_62 = __this->get_m_HistoryTextures_12();
		int32_t L_63 = V_0;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* L_65 = (RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E*)(L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		int32_t L_66 = ___id0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_67 = V_6;
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_67);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_66), (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_67);
		// context.command.BlitFullscreenTriangle(rt, rt2);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_68 = ___context1;
		NullCheck(L_68);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_69;
		L_69 = PostProcessRenderContext_get_command_mE54DFA2523219208C87BA95ECD2D766889DACA71_inline(L_68, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_70 = V_1;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_71;
		L_71 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_70, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_72 = V_6;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_73;
		L_73 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_72, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE ));
		Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE  L_74 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		RuntimeUtilities_BlitFullscreenTriangle_mF733D5B783D8EC34392246C72F90114F4CD143F5(L_69, L_71, L_73, (bool)0, L_74, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary(rt);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_75 = V_1;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_75, /*hidden argument*/NULL);
	}

IL_0137:
	{
		// return m_HistoryTextures[activeEye][id];
		RenderTextureU5BU5DU5BU5D_t3A4F4CB09299411BE3D4D6BD41F85F6E13838EAD* L_76 = __this->get_m_HistoryTextures_12();
		int32_t L_77 = V_0;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* L_79 = (RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E*)(L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		int32_t L_80 = ___id0;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		V_7 = L_82;
		goto IL_0145;
	}

IL_0145:
	{
		// }
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_83 = V_7;
		return L_83;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::Render(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TemporalAntialiasing_Render_m9BC1E4F4D6EDD4678E9D3B4C6B22B0EC36E546AC (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E6383000E99B9F3488045B11084D1E4AD8A7A4C);
		s_Il2CppMethodInitialized = true;
	}
	PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * V_0 = NULL;
	CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * V_1 = NULL;
	int32_t V_2 = 0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_3 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_4 = NULL;
	int32_t V_5 = 0;
	Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B3_0 = 0;
	{
		// var sheet = context.propertySheets.Get(context.resources.shaders.temporalAntialiasing);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_0 = ___context0;
		NullCheck(L_0);
		PropertySheetFactory_t2D2278105A154ED6036D5BE72D09359A5FB94835 * L_1;
		L_1 = PostProcessRenderContext_get_propertySheets_mE1135E07BE4F59354198DF05198E64CAF2E41D5C_inline(L_0, /*hidden argument*/NULL);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_2 = ___context0;
		NullCheck(L_2);
		PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC * L_3;
		L_3 = PostProcessRenderContext_get_resources_mEC353AFE49A4A72D561FCB8758E364578AB2B9D7_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2 * L_4 = L_3->get_shaders_7();
		NullCheck(L_4);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_5 = L_4->get_temporalAntialiasing_10();
		NullCheck(L_1);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_6;
		L_6 = PropertySheetFactory_Get_mE4CC267B0EB28F0892A426B67015A309F2540CBF(L_1, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// var cmd = context.command;
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_7 = ___context0;
		NullCheck(L_7);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_8;
		L_8 = PostProcessRenderContext_get_command_mE54DFA2523219208C87BA95ECD2D766889DACA71_inline(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// cmd.BeginSample("TemporalAntialiasing");
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_9 = V_1;
		NullCheck(L_9);
		CommandBuffer_BeginSample_mA6CADFE0049E601CE0E5FE8CFF23820AE98514EA(L_9, _stringLiteral1E6383000E99B9F3488045B11084D1E4AD8A7A4C, /*hidden argument*/NULL);
		// int pp = m_HistoryPingPong[context.xrActiveEye];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = __this->get_m_HistoryPingPong_13();
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_11 = ___context0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = PostProcessRenderContext_get_xrActiveEye_mF542BBCE2BE780B1018E8640BF92BF44A1B25586_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = L_14;
		// var historyRead = CheckHistory(++pp % 2, context);
		int32_t L_15 = V_2;
		int32_t L_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		V_2 = L_16;
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_17 = ___context0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_18;
		L_18 = TemporalAntialiasing_CheckHistory_m01C9B2DD2A27A0898EE0E3604D91BA0334627D13(__this, ((int32_t)((int32_t)L_16%(int32_t)2)), L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		// var historyWrite = CheckHistory(++pp % 2, context);
		int32_t L_19 = V_2;
		int32_t L_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		V_2 = L_20;
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_21 = ___context0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_22;
		L_22 = TemporalAntialiasing_CheckHistory_m01C9B2DD2A27A0898EE0E3604D91BA0334627D13(__this, ((int32_t)((int32_t)L_20%(int32_t)2)), L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		// m_HistoryPingPong[context.xrActiveEye] = ++pp % 2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_23 = __this->get_m_HistoryPingPong_13();
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_24 = ___context0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = PostProcessRenderContext_get_xrActiveEye_mF542BBCE2BE780B1018E8640BF92BF44A1B25586_inline(L_24, /*hidden argument*/NULL);
		int32_t L_26 = V_2;
		int32_t L_27 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		V_2 = L_27;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (int32_t)((int32_t)((int32_t)L_27%(int32_t)2)));
		// sheet.properties.SetVector(ShaderIDs.Jitter, jitter);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_28 = V_0;
		NullCheck(L_28);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_29;
		L_29 = PropertySheet_get_properties_m3AB962E1C6A0C44D98E16AFBB73B40BA5E21B504_inline(L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var);
		int32_t L_30 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_Jitter_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31;
		L_31 = TemporalAntialiasing_get_jitter_mD89AFB2AFDEE63822CF1C632364408FDF76FB418_inline(__this, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_32;
		L_32 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504(L_31, /*hidden argument*/NULL);
		NullCheck(L_29);
		MaterialPropertyBlock_SetVector_m39DE61298C4C95829529B498130844A591621E2F(L_29, L_30, L_32, /*hidden argument*/NULL);
		// sheet.properties.SetFloat(ShaderIDs.Sharpness, sharpness);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_33 = V_0;
		NullCheck(L_33);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_34;
		L_34 = PropertySheet_get_properties_m3AB962E1C6A0C44D98E16AFBB73B40BA5E21B504_inline(L_33, /*hidden argument*/NULL);
		int32_t L_35 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_Sharpness_2();
		float L_36 = __this->get_sharpness_1();
		NullCheck(L_34);
		MaterialPropertyBlock_SetFloat_mD2F1653CEDB22B1A3EE844E353CF125A607AEDEC(L_34, L_35, L_36, /*hidden argument*/NULL);
		// sheet.properties.SetVector(ShaderIDs.FinalBlendParameters, new Vector4(stationaryBlending, motionBlending, kMotionAmplification, 0f));
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_37 = V_0;
		NullCheck(L_37);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_38;
		L_38 = PropertySheet_get_properties_m3AB962E1C6A0C44D98E16AFBB73B40BA5E21B504_inline(L_37, /*hidden argument*/NULL);
		int32_t L_39 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_FinalBlendParameters_3();
		float L_40 = __this->get_stationaryBlending_2();
		float L_41 = __this->get_motionBlending_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_42), L_40, L_41, (6000.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_38);
		MaterialPropertyBlock_SetVector_m39DE61298C4C95829529B498130844A591621E2F(L_38, L_39, L_42, /*hidden argument*/NULL);
		// sheet.properties.SetTexture(ShaderIDs.HistoryTex, historyRead);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_43 = V_0;
		NullCheck(L_43);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_44;
		L_44 = PropertySheet_get_properties_m3AB962E1C6A0C44D98E16AFBB73B40BA5E21B504_inline(L_43, /*hidden argument*/NULL);
		int32_t L_45 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_HistoryTex_4();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_46 = V_3;
		NullCheck(L_44);
		MaterialPropertyBlock_SetTexture_m8F81CA94E5261618BEDD93EC02DAA2412E732C04(L_44, L_45, L_46, /*hidden argument*/NULL);
		// int pass = context.camera.orthographic ? (int)Pass.SolverNoDilate : (int)Pass.SolverDilate;
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_47 = ___context0;
		NullCheck(L_47);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_48;
		L_48 = PostProcessRenderContext_get_camera_m56CA965425F5C59D32D7CF2E11E589FBD8A16C3D(L_47, /*hidden argument*/NULL);
		NullCheck(L_48);
		bool L_49;
		L_49 = Camera_get_orthographic_m3DE9A7705E2B4926BBFD2D6798D97B931B5B5550(L_48, /*hidden argument*/NULL);
		if (L_49)
		{
			goto IL_00f2;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_00f3;
	}

IL_00f2:
	{
		G_B3_0 = 1;
	}

IL_00f3:
	{
		V_5 = G_B3_0;
		// m_Mrt[0] = context.destination;
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_50 = __this->get_m_Mrt_6();
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_51 = ___context0;
		NullCheck(L_51);
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_52;
		L_52 = PostProcessRenderContext_get_destination_mD5A4C6656F4FC57B0FF57FA7F7CC597F62BD2C88_inline(L_51, /*hidden argument*/NULL);
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_52);
		// m_Mrt[1] = historyWrite;
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_53 = __this->get_m_Mrt_6();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_54 = V_4;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_55;
		L_55 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_54, /*hidden argument*/NULL);
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(1), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_55);
		// cmd.BlitFullscreenTriangle(context.source, m_Mrt, context.source, sheet, pass);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_56 = V_1;
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_57 = ___context0;
		NullCheck(L_57);
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_58;
		L_58 = PostProcessRenderContext_get_source_m7AB20613A7F91FDB5B7872995E6DD205A9D52135_inline(L_57, /*hidden argument*/NULL);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_59 = __this->get_m_Mrt_6();
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_60 = ___context0;
		NullCheck(L_60);
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_61;
		L_61 = PostProcessRenderContext_get_source_m7AB20613A7F91FDB5B7872995E6DD205A9D52135_inline(L_60, /*hidden argument*/NULL);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_62 = V_0;
		int32_t L_63 = V_5;
		il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE ));
		Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE  L_64 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		RuntimeUtilities_BlitFullscreenTriangle_mB52EBC17810E59AAE9D3D4CB04D29CB09E953916(L_56, L_58, L_59, L_61, L_62, L_63, (bool)0, L_64, /*hidden argument*/NULL);
		// cmd.EndSample("TemporalAntialiasing");
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_65 = V_1;
		NullCheck(L_65);
		CommandBuffer_EndSample_mB852BF4B83918656E93C9C327A20E163EC910A66(L_65, _stringLiteral1E6383000E99B9F3488045B11084D1E4AD8A7A4C, /*hidden argument*/NULL);
		// m_ResetHistory = false;
		__this->set_m_ResetHistory_7((bool)0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TemporalAntialiasing_Release_mE12D10DE8B832C1AB7B2714415567ECEDB455458 (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if (m_HistoryTextures != null)
		RenderTextureU5BU5DU5BU5D_t3A4F4CB09299411BE3D4D6BD41F85F6E13838EAD* L_0 = __this->get_m_HistoryTextures_12();
		V_0 = (bool)((!(((RuntimeObject*)(RenderTextureU5BU5DU5BU5D_t3A4F4CB09299411BE3D4D6BD41F85F6E13838EAD*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_007d;
		}
	}
	{
		// for (int i = 0; i < m_HistoryTextures.Length; i++)
		V_1 = 0;
		goto IL_006b;
	}

IL_0013:
	{
		// if (m_HistoryTextures[i] == null)
		RenderTextureU5BU5DU5BU5D_t3A4F4CB09299411BE3D4D6BD41F85F6E13838EAD* L_2 = __this->get_m_HistoryTextures_12();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* L_5 = (RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E*)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = (bool)((((RuntimeObject*)(RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E*)L_5) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0025;
		}
	}
	{
		// continue;
		goto IL_0067;
	}

IL_0025:
	{
		// for (int j = 0; j < m_HistoryTextures[i].Length; j++)
		V_3 = 0;
		goto IL_004a;
	}

IL_0029:
	{
		// RenderTexture.ReleaseTemporary(m_HistoryTextures[i][j]);
		RenderTextureU5BU5DU5BU5D_t3A4F4CB09299411BE3D4D6BD41F85F6E13838EAD* L_7 = __this->get_m_HistoryTextures_12();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* L_10 = (RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E*)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_13, /*hidden argument*/NULL);
		// m_HistoryTextures[i][j] = null;
		RenderTextureU5BU5DU5BU5D_t3A4F4CB09299411BE3D4D6BD41F85F6E13838EAD* L_14 = __this->get_m_HistoryTextures_12();
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* L_17 = (RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E*)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18 = V_3;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, NULL);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)NULL);
		// for (int j = 0; j < m_HistoryTextures[i].Length; j++)
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_004a:
	{
		// for (int j = 0; j < m_HistoryTextures[i].Length; j++)
		int32_t L_20 = V_3;
		RenderTextureU5BU5DU5BU5D_t3A4F4CB09299411BE3D4D6BD41F85F6E13838EAD* L_21 = __this->get_m_HistoryTextures_12();
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* L_24 = (RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E*)(L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		V_4 = (bool)((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))? 1 : 0);
		bool L_25 = V_4;
		if (L_25)
		{
			goto IL_0029;
		}
	}
	{
		// m_HistoryTextures[i] = null;
		RenderTextureU5BU5DU5BU5D_t3A4F4CB09299411BE3D4D6BD41F85F6E13838EAD* L_26 = __this->get_m_HistoryTextures_12();
		int32_t L_27 = V_1;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, NULL);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E*)NULL);
	}

IL_0067:
	{
		// for (int i = 0; i < m_HistoryTextures.Length; i++)
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_006b:
	{
		// for (int i = 0; i < m_HistoryTextures.Length; i++)
		int32_t L_29 = V_1;
		RenderTextureU5BU5DU5BU5D_t3A4F4CB09299411BE3D4D6BD41F85F6E13838EAD* L_30 = __this->get_m_HistoryTextures_12();
		NullCheck(L_30);
		V_5 = (bool)((((int32_t)L_29) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))? 1 : 0);
		bool L_31 = V_5;
		if (L_31)
		{
			goto IL_0013;
		}
	}
	{
	}

IL_007d:
	{
		// sampleIndex = 0;
		TemporalAntialiasing_set_sampleIndex_m7DBCBC1B1A1423533E4CDFDB5224F49BE48405AE_inline(__this, 0, /*hidden argument*/NULL);
		// m_HistoryPingPong[0] = 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_32 = __this->get_m_HistoryPingPong_13();
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		// m_HistoryPingPong[1] = 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_33 = __this->get_m_HistoryPingPong_13();
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)0);
		// ResetHistory();
		TemporalAntialiasing_ResetHistory_m02880AF6BF6467418C89DC15AFEE07CA2DCDD693(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TemporalAntialiasing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TemporalAntialiasing__ctor_mFA837D71FA4C40ED15FA225C89CB7480FB4A8CE8 (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTextureU5BU5DU5BU5D_t3A4F4CB09299411BE3D4D6BD41F85F6E13838EAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float jitterSpread = 0.75f;
		__this->set_jitterSpread_0((0.75f));
		// public float sharpness = 0.25f;
		__this->set_sharpness_1((0.25f));
		// public float stationaryBlending = 0.95f;
		__this->set_stationaryBlending_2((0.949999988f));
		// public float motionBlending = 0.85f;
		__this->set_motionBlending_3((0.850000024f));
		// readonly RenderTargetIdentifier[] m_Mrt = new RenderTargetIdentifier[2];
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_0 = (RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)SZArrayNew(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_m_Mrt_6(L_0);
		// bool m_ResetHistory = true;
		__this->set_m_ResetHistory_7((bool)1);
		// readonly RenderTexture[][] m_HistoryTextures = new RenderTexture[k_NumEyes][];
		RenderTextureU5BU5DU5BU5D_t3A4F4CB09299411BE3D4D6BD41F85F6E13838EAD* L_1 = (RenderTextureU5BU5DU5BU5D_t3A4F4CB09299411BE3D4D6BD41F85F6E13838EAD*)(RenderTextureU5BU5DU5BU5D_t3A4F4CB09299411BE3D4D6BD41F85F6E13838EAD*)SZArrayNew(RenderTextureU5BU5DU5BU5D_t3A4F4CB09299411BE3D4D6BD41F85F6E13838EAD_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_m_HistoryTextures_12(L_1);
		// readonly int[] m_HistoryPingPong = new int [k_NumEyes];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_m_HistoryPingPong_13(L_2);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureFormatUtilities__cctor_m62691A726B8793932D87E5E0049A3220D9D2AD2E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD0C4DB6C8EC7B1AB66783B91679A225842F9032B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mF0AE3867D21201B50EE816E55A8BAAADA8471324_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mDFB096115D9E26E5B5E5A4183F9E098CE8A14F74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFormat_tBED5388A0445FE978F97B41D247275B036407932_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFormat_tBED5388A0445FE978F97B41D247275B036407932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeArray * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	RuntimeArray * V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	RuntimeObject * V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// s_FormatAliasMap = new Dictionary<int, RenderTextureFormat>
		// {
		//     { (int)TextureFormat.Alpha8, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ARGB4444, RenderTextureFormat.ARGB4444 },
		//     { (int)TextureFormat.RGB24, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.RGBA32, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ARGB32, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.RGB565, RenderTextureFormat.RGB565 },
		//     { (int)TextureFormat.R16, RenderTextureFormat.RHalf },
		//     { (int)TextureFormat.DXT1, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.DXT5, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.RGBA4444, RenderTextureFormat.ARGB4444 },
		//     { (int)TextureFormat.BGRA32, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.RHalf, RenderTextureFormat.RHalf },
		//     { (int)TextureFormat.RGHalf, RenderTextureFormat.RGHalf },
		//     { (int)TextureFormat.RGBAHalf, RenderTextureFormat.ARGBHalf },
		//     { (int)TextureFormat.RFloat, RenderTextureFormat.RFloat },
		//     { (int)TextureFormat.RGFloat, RenderTextureFormat.RGFloat },
		//     { (int)TextureFormat.RGBAFloat, RenderTextureFormat.ARGBFloat },
		//     { (int)TextureFormat.RGB9e5Float, RenderTextureFormat.ARGBHalf },
		//     { (int)TextureFormat.BC4, RenderTextureFormat.R8 },
		//     { (int)TextureFormat.BC5, RenderTextureFormat.RGHalf },
		//     { (int)TextureFormat.BC6H, RenderTextureFormat.ARGBHalf },
		//     { (int)TextureFormat.BC7, RenderTextureFormat.ARGB32 },
		// #if !UNITY_IOS && !UNITY_TVOS
		//     { (int)TextureFormat.DXT1Crunched, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.DXT5Crunched, RenderTextureFormat.ARGB32 },
		// #endif
		//     { (int)TextureFormat.PVRTC_RGB2, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.PVRTC_RGBA2, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.PVRTC_RGB4, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.PVRTC_RGBA4, RenderTextureFormat.ARGB32 },
		// #if !UNITY_2018_1_OR_NEWER
		//     { (int)TextureFormat.ATC_RGB4, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ATC_RGBA8, RenderTextureFormat.ARGB32 },
		// #endif
		//     { (int)TextureFormat.ETC_RGB4, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ETC2_RGB, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ETC2_RGBA1, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ETC2_RGBA8, RenderTextureFormat.ARGB32 },
		// #if UNITY_2019_1_OR_NEWER
		//     { (int)TextureFormat.ASTC_4x4, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_5x5, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_6x6, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_8x8, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_10x10, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_12x12, RenderTextureFormat.ARGB32 },
		// #else
		//     { (int)TextureFormat.ASTC_RGB_4x4, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_RGB_5x5, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_RGB_6x6, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_RGB_8x8, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_RGB_10x10, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_RGB_12x12, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_RGBA_4x4, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_RGBA_5x5, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_RGBA_6x6, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_RGBA_8x8, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_RGBA_10x10, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_RGBA_12x12, RenderTextureFormat.ARGB32 },
		// #endif
		// #if !UNITY_2018_3_OR_NEWER
		//     { (int)TextureFormat.ETC_RGB4_3DS, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ETC_RGBA8_3DS, RenderTextureFormat.ARGB32 }
		// #endif
		// };
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_0 = (Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F *)il2cpp_codegen_object_new(Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD0C4DB6C8EC7B1AB66783B91679A225842F9032B(L_0, /*hidden argument*/Dictionary_2__ctor_mD0C4DB6C8EC7B1AB66783B91679A225842F9032B_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_1, 1, 0, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_2, 2, 5, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_3, 3, 0, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_4 = L_3;
		NullCheck(L_4);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_4, 4, 0, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_5 = L_4;
		NullCheck(L_5);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_5, 5, 0, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_6 = L_5;
		NullCheck(L_6);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_6, 7, 4, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_7 = L_6;
		NullCheck(L_7);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_7, ((int32_t)9), ((int32_t)15), /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_8 = L_7;
		NullCheck(L_8);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_8, ((int32_t)10), 0, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_9 = L_8;
		NullCheck(L_9);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_9, ((int32_t)12), 0, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_10 = L_9;
		NullCheck(L_10);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_10, ((int32_t)13), 5, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_11 = L_10;
		NullCheck(L_11);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_11, ((int32_t)14), 0, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_12 = L_11;
		NullCheck(L_12);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_12, ((int32_t)15), ((int32_t)15), /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_13 = L_12;
		NullCheck(L_13);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_13, ((int32_t)16), ((int32_t)13), /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_14 = L_13;
		NullCheck(L_14);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_14, ((int32_t)17), 2, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_15 = L_14;
		NullCheck(L_15);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_15, ((int32_t)18), ((int32_t)14), /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_16 = L_15;
		NullCheck(L_16);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_16, ((int32_t)19), ((int32_t)12), /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_17 = L_16;
		NullCheck(L_17);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_17, ((int32_t)20), ((int32_t)11), /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_18 = L_17;
		NullCheck(L_18);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_18, ((int32_t)22), 2, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_19 = L_18;
		NullCheck(L_19);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_19, ((int32_t)26), ((int32_t)16), /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_20 = L_19;
		NullCheck(L_20);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_20, ((int32_t)27), ((int32_t)13), /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_21 = L_20;
		NullCheck(L_21);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_21, ((int32_t)24), 2, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_22 = L_21;
		NullCheck(L_22);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_22, ((int32_t)25), 0, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_23 = L_22;
		NullCheck(L_23);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_23, ((int32_t)28), 0, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_24 = L_23;
		NullCheck(L_24);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_24, ((int32_t)29), 0, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_25 = L_24;
		NullCheck(L_25);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_25, ((int32_t)30), 0, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_26 = L_25;
		NullCheck(L_26);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_26, ((int32_t)31), 0, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_27 = L_26;
		NullCheck(L_27);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_27, ((int32_t)32), 0, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_28 = L_27;
		NullCheck(L_28);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_28, ((int32_t)33), 0, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_29 = L_28;
		NullCheck(L_29);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_29, ((int32_t)34), 0, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_30 = L_29;
		NullCheck(L_30);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_30, ((int32_t)45), 0, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_31 = L_30;
		NullCheck(L_31);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_31, ((int32_t)46), 0, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_32 = L_31;
		NullCheck(L_32);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_32, ((int32_t)47), 0, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_33 = L_32;
		NullCheck(L_33);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_33, ((int32_t)48), 0, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_34 = L_33;
		NullCheck(L_34);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_34, ((int32_t)49), 0, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_35 = L_34;
		NullCheck(L_35);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_35, ((int32_t)50), 0, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_36 = L_35;
		NullCheck(L_36);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_36, ((int32_t)51), 0, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_37 = L_36;
		NullCheck(L_37);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_37, ((int32_t)52), 0, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_38 = L_37;
		NullCheck(L_38);
		Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0(L_38, ((int32_t)53), 0, /*hidden argument*/Dictionary_2_Add_m46906D39ED9E0B2729FB9FCA296A22EDDEA1ABF0_RuntimeMethod_var);
		((TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_StaticFields*)il2cpp_codegen_static_fields_for(TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_il2cpp_TypeInfo_var))->set_s_FormatAliasMap_0(L_38);
		// s_SupportedRenderTextureFormats = new Dictionary<int, bool>();
		Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * L_39 = (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *)il2cpp_codegen_object_new(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mF0AE3867D21201B50EE816E55A8BAAADA8471324(L_39, /*hidden argument*/Dictionary_2__ctor_mF0AE3867D21201B50EE816E55A8BAAADA8471324_RuntimeMethod_var);
		((TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_StaticFields*)il2cpp_codegen_static_fields_for(TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_il2cpp_TypeInfo_var))->set_s_SupportedRenderTextureFormats_1(L_39);
		// var values = Enum.GetValues(typeof(RenderTextureFormat));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_40 = { reinterpret_cast<intptr_t> (RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_41;
		L_41 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeArray * L_42;
		L_42 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_41, /*hidden argument*/NULL);
		V_0 = L_42;
		// foreach (var format in values)
		RuntimeArray * L_43 = V_0;
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = Array_GetEnumerator_m7BC171F2F69907FD4585E7B4A3A224473BE32964(L_43, /*hidden argument*/NULL);
		V_1 = L_44;
	}

IL_01ac:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01f4;
		}

IL_01ae:
		{
			// foreach (var format in values)
			RuntimeObject* L_45 = V_1;
			NullCheck(L_45);
			RuntimeObject * L_46;
			L_46 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_45);
			V_2 = L_46;
			// if ((int)format < 0) // Safe guard, negative values are deprecated stuff
			RuntimeObject * L_47 = V_2;
			V_4 = (bool)((((int32_t)((*(int32_t*)((int32_t*)UnBox(L_47, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))) < ((int32_t)0))? 1 : 0);
			bool L_48 = V_4;
			if (!L_48)
			{
				goto IL_01c7;
			}
		}

IL_01c5:
		{
			// continue;
			goto IL_01f4;
		}

IL_01c7:
		{
			// if (IsObsolete(format))
			RuntimeObject * L_49 = V_2;
			bool L_50;
			L_50 = TextureFormatUtilities_IsObsolete_m0D83C3AEA2A6B680C34266EAC453678EECB87EDC(L_49, /*hidden argument*/NULL);
			V_5 = L_50;
			bool L_51 = V_5;
			if (!L_51)
			{
				goto IL_01d5;
			}
		}

IL_01d3:
		{
			// continue;
			goto IL_01f4;
		}

IL_01d5:
		{
			// bool supported = SystemInfo.SupportsRenderTextureFormat((RenderTextureFormat)format);
			RuntimeObject * L_52 = V_2;
			bool L_53;
			L_53 = SystemInfo_SupportsRenderTextureFormat_m243F66021A643C711FEDEA6B6D002B49ECEEFE1B(((*(int32_t*)((int32_t*)UnBox(L_52, RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			V_3 = L_53;
			// s_SupportedRenderTextureFormats[(int)format] = supported;
			Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * L_54 = ((TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_StaticFields*)il2cpp_codegen_static_fields_for(TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_il2cpp_TypeInfo_var))->get_s_SupportedRenderTextureFormats_1();
			RuntimeObject * L_55 = V_2;
			bool L_56 = V_3;
			NullCheck(L_54);
			Dictionary_2_set_Item_mDFB096115D9E26E5B5E5A4183F9E098CE8A14F74(L_54, ((*(int32_t*)((int32_t*)UnBox(L_55, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), L_56, /*hidden argument*/Dictionary_2_set_Item_mDFB096115D9E26E5B5E5A4183F9E098CE8A14F74_RuntimeMethod_var);
		}

IL_01f4:
		{
			// foreach (var format in values)
			RuntimeObject* L_57 = V_1;
			NullCheck(L_57);
			bool L_58;
			L_58 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_57);
			if (L_58)
			{
				goto IL_01ae;
			}
		}

IL_01fc:
		{
			IL2CPP_LEAVE(0x213, FINALLY_01fe);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01fe;
	}

FINALLY_01fe:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_59 = V_1;
			V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_59, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_60 = V_6;
			if (!L_60)
			{
				goto IL_0212;
			}
		}

IL_020a:
		{
			RuntimeObject* L_61 = V_6;
			NullCheck(L_61);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_61);
		}

IL_0212:
		{
			IL2CPP_END_FINALLY(510)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(510)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x213, IL_0213)
	}

IL_0213:
	{
		// s_SupportedTextureFormats = new Dictionary<int, bool>();
		Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * L_62 = (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *)il2cpp_codegen_object_new(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mF0AE3867D21201B50EE816E55A8BAAADA8471324(L_62, /*hidden argument*/Dictionary_2__ctor_mF0AE3867D21201B50EE816E55A8BAAADA8471324_RuntimeMethod_var);
		((TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_StaticFields*)il2cpp_codegen_static_fields_for(TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_il2cpp_TypeInfo_var))->set_s_SupportedTextureFormats_2(L_62);
		// var values = Enum.GetValues(typeof(TextureFormat));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_63 = { reinterpret_cast<intptr_t> (TextureFormat_tBED5388A0445FE978F97B41D247275B036407932_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_64;
		L_64 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_63, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeArray * L_65;
		L_65 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_64, /*hidden argument*/NULL);
		V_7 = L_65;
		// foreach (var format in values)
		RuntimeArray * L_66 = V_7;
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = Array_GetEnumerator_m7BC171F2F69907FD4585E7B4A3A224473BE32964(L_66, /*hidden argument*/NULL);
		V_8 = L_67;
	}

IL_023a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_028a;
		}

IL_023c:
		{
			// foreach (var format in values)
			RuntimeObject* L_68 = V_8;
			NullCheck(L_68);
			RuntimeObject * L_69;
			L_69 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_68);
			V_9 = L_69;
			// if ((int)format < 0) // Crashes the runtime otherwise (!)
			RuntimeObject * L_70 = V_9;
			V_11 = (bool)((((int32_t)((*(int32_t*)((int32_t*)UnBox(L_70, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))) < ((int32_t)0))? 1 : 0);
			bool L_71 = V_11;
			if (!L_71)
			{
				goto IL_0258;
			}
		}

IL_0256:
		{
			// continue;
			goto IL_028a;
		}

IL_0258:
		{
			// if (IsObsolete(format))
			RuntimeObject * L_72 = V_9;
			bool L_73;
			L_73 = TextureFormatUtilities_IsObsolete_m0D83C3AEA2A6B680C34266EAC453678EECB87EDC(L_72, /*hidden argument*/NULL);
			V_12 = L_73;
			bool L_74 = V_12;
			if (!L_74)
			{
				goto IL_0267;
			}
		}

IL_0265:
		{
			// continue;
			goto IL_028a;
		}

IL_0267:
		{
			// bool supported = SystemInfo.SupportsTextureFormat((TextureFormat)format);
			RuntimeObject * L_75 = V_9;
			bool L_76;
			L_76 = SystemInfo_SupportsTextureFormat_mE7DA9DC2B167CB7E9A864924C8772307F1A2F0B9(((*(int32_t*)((int32_t*)UnBox(L_75, TextureFormat_tBED5388A0445FE978F97B41D247275B036407932_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			V_10 = L_76;
			// s_SupportedTextureFormats[(int)format] = supported;
			Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * L_77 = ((TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_StaticFields*)il2cpp_codegen_static_fields_for(TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_il2cpp_TypeInfo_var))->get_s_SupportedTextureFormats_2();
			RuntimeObject * L_78 = V_9;
			bool L_79 = V_10;
			NullCheck(L_77);
			Dictionary_2_set_Item_mDFB096115D9E26E5B5E5A4183F9E098CE8A14F74(L_77, ((*(int32_t*)((int32_t*)UnBox(L_78, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), L_79, /*hidden argument*/Dictionary_2_set_Item_mDFB096115D9E26E5B5E5A4183F9E098CE8A14F74_RuntimeMethod_var);
		}

IL_028a:
		{
			// foreach (var format in values)
			RuntimeObject* L_80 = V_8;
			NullCheck(L_80);
			bool L_81;
			L_81 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_80);
			if (L_81)
			{
				goto IL_023c;
			}
		}

IL_0293:
		{
			IL2CPP_LEAVE(0x2AB, FINALLY_0295);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0295;
	}

FINALLY_0295:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_82 = V_8;
			V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_82, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_83 = V_6;
			if (!L_83)
			{
				goto IL_02aa;
			}
		}

IL_02a2:
		{
			RuntimeObject* L_84 = V_6;
			NullCheck(L_84);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_84);
		}

IL_02aa:
		{
			IL2CPP_END_FINALLY(661)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(661)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2AB, IL_02ab)
	}

IL_02ab:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::IsObsolete(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureFormatUtilities_IsObsolete_m0D83C3AEA2A6B680C34266EAC453678EECB87EDC (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObsoleteAttributeU5BU5D_tAC73C504F00AEC879F622AFE547DD3A1ECCAEE38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfo_t * V_0 = NULL;
	ObsoleteAttributeU5BU5D_tAC73C504F00AEC879F622AFE547DD3A1ECCAEE38* V_1 = NULL;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// var fieldInfo = value.GetType().GetField(value.ToString());
		RuntimeObject * L_0 = ___value0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___value0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		NullCheck(L_1);
		FieldInfo_t * L_4;
		L_4 = Type_GetField_m7E0197C80896690B5F5DBCCE44E3354FFDA13D2C(L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// var attributes = (ObsoleteAttribute[])fieldInfo.GetCustomAttributes(typeof(ObsoleteAttribute), false);
		FieldInfo_t * L_5 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8;
		L_8 = VirtFuncInvoker2< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Type_t *, bool >::Invoke(11 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_5, L_7, (bool)0);
		V_1 = ((ObsoleteAttributeU5BU5D_tAC73C504F00AEC879F622AFE547DD3A1ECCAEE38*)Castclass((RuntimeObject*)L_8, ObsoleteAttributeU5BU5D_tAC73C504F00AEC879F622AFE547DD3A1ECCAEE38_il2cpp_TypeInfo_var));
		// return attributes != null && attributes.Length > 0;
		ObsoleteAttributeU5BU5D_tAC73C504F00AEC879F622AFE547DD3A1ECCAEE38* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0034;
		}
	}
	{
		ObsoleteAttributeU5BU5D_tAC73C504F00AEC879F622AFE547DD3A1ECCAEE38* L_10 = V_1;
		NullCheck(L_10);
		G_B3_0 = ((!(((uint32_t)(((RuntimeArray*)L_10)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B3_0 = 0;
	}

IL_0035:
	{
		V_2 = (bool)G_B3_0;
		goto IL_0038;
	}

IL_0038:
	{
		// }
		bool L_11 = V_2;
		return L_11;
	}
}
// UnityEngine.RenderTextureFormat UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::GetUncompressedRenderTextureFormat(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureFormatUtilities_GetUncompressedRenderTextureFormat_mA9DD8DE489A31097C86EAB22E736EF837C243473 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisTexture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_mF786614AA0B9B1F07F1522C795443925B2ACDC5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mEC8BB5FB46FE71167C303BB248F7239832FC7B3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	{
		// Assert.IsNotNull(texture);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_0 = ___texture0;
		IL2CPP_RUNTIME_CLASS_INIT(Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		Assert_IsNotNull_TisTexture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_mF786614AA0B9B1F07F1522C795443925B2ACDC5C(L_0, /*hidden argument*/Assert_IsNotNull_TisTexture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_mF786614AA0B9B1F07F1522C795443925B2ACDC5C_RuntimeMethod_var);
		// if (texture is RenderTexture)
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_1 = ___texture0;
		V_0 = (bool)((!(((RuntimeObject*)(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)IsInstClass((RuntimeObject*)L_1, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// return (texture as RenderTexture).format;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_3 = ___texture0;
		NullCheck(((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)IsInstClass((RuntimeObject*)L_3, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var)));
		int32_t L_4;
		L_4 = RenderTexture_get_format_mB9BBCACA0A809206FA73109ACF2A6976E19DB822(((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)IsInstClass((RuntimeObject*)L_3, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0067;
	}

IL_0023:
	{
		// if (texture is Texture2D)
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_5 = ___texture0;
		V_2 = (bool)((!(((RuntimeObject*)(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)IsInstSealed((RuntimeObject*)L_5, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0063;
		}
	}
	{
		// var inFormat = ((Texture2D)texture).format;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_7 = ___texture0;
		NullCheck(((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)CastclassSealed((RuntimeObject*)L_7, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var)));
		int32_t L_8;
		L_8 = Texture2D_get_format_mCBCE13524A94042693822BDDE112990B25F4F8E4(((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)CastclassSealed((RuntimeObject*)L_7, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_3 = L_8;
		// if (!s_FormatAliasMap.TryGetValue((int)inFormat, out outFormat))
		IL2CPP_RUNTIME_CLASS_INIT(TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_il2cpp_TypeInfo_var);
		Dictionary_2_t152CB9EF9047A93FF3A31F2EDC4351F89CDA7E7F * L_9 = ((TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_StaticFields*)il2cpp_codegen_static_fields_for(TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_il2cpp_TypeInfo_var))->get_s_FormatAliasMap_0();
		int32_t L_10 = V_3;
		NullCheck(L_9);
		bool L_11;
		L_11 = Dictionary_2_TryGetValue_mEC8BB5FB46FE71167C303BB248F7239832FC7B3D(L_9, L_10, (int32_t*)(&V_4), /*hidden argument*/Dictionary_2_TryGetValue_mEC8BB5FB46FE71167C303BB248F7239832FC7B3D_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_005e;
		}
	}
	{
		// throw new NotSupportedException("Texture format not supported");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_13 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral96AFB5CB3B476CE64056EF8716AEA14B385714ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextureFormatUtilities_GetUncompressedRenderTextureFormat_mA9DD8DE489A31097C86EAB22E736EF837C243473_RuntimeMethod_var)));
	}

IL_005e:
	{
		// return outFormat;
		int32_t L_14 = V_4;
		V_1 = L_14;
		goto IL_0067;
	}

IL_0063:
	{
		// return RenderTextureFormat.Default;
		V_1 = 7;
		goto IL_0067;
	}

IL_0067:
	{
		// }
		int32_t L_15 = V_1;
		return L_15;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::IsSupported(UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureFormatUtilities_IsSupported_mBEAA34D83680E03E11B2951EE0276C0DD8F28EE1 (int32_t ___format0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mDA84BC4EB1A9B38BEFC73A8718A628B870CA9345_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// s_SupportedRenderTextureFormats.TryGetValue((int)format, out supported);
		IL2CPP_RUNTIME_CLASS_INIT(TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_il2cpp_TypeInfo_var);
		Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * L_0 = ((TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_StaticFields*)il2cpp_codegen_static_fields_for(TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_il2cpp_TypeInfo_var))->get_s_SupportedRenderTextureFormats_1();
		int32_t L_1 = ___format0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mDA84BC4EB1A9B38BEFC73A8718A628B870CA9345(L_0, L_1, (bool*)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mDA84BC4EB1A9B38BEFC73A8718A628B870CA9345_RuntimeMethod_var);
		// return supported;
		bool L_3 = V_0;
		V_1 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::IsSupported(UnityEngine.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureFormatUtilities_IsSupported_m7E56F1F567F73A9147B94EBCF846FF9DA9A7931D (int32_t ___format0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mDA84BC4EB1A9B38BEFC73A8718A628B870CA9345_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// s_SupportedTextureFormats.TryGetValue((int)format, out supported);
		IL2CPP_RUNTIME_CLASS_INIT(TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_il2cpp_TypeInfo_var);
		Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * L_0 = ((TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_StaticFields*)il2cpp_codegen_static_fields_for(TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_il2cpp_TypeInfo_var))->get_s_SupportedTextureFormats_2();
		int32_t L_1 = ___format0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mDA84BC4EB1A9B38BEFC73A8718A628B870CA9345(L_0, L_1, (bool*)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mDA84BC4EB1A9B38BEFC73A8718A628B870CA9345_RuntimeMethod_var);
		// return supported;
		bool L_3 = V_0;
		V_1 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		bool L_4 = V_1;
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
// UnityEngine.Rendering.PostProcessing.TextureLerper UnityEngine.Rendering.PostProcessing.TextureLerper::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616 * TextureLerper_get_instance_m0AB68B6199F15DE585DA84890EFFBEA18C0C9135 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616 * V_1 = NULL;
	{
		// if (m_Instance == null)
		TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616 * L_0 = ((TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616_StaticFields*)il2cpp_codegen_static_fields_for(TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616_il2cpp_TypeInfo_var))->get_m_Instance_0();
		V_0 = (bool)((((RuntimeObject*)(TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// m_Instance = new TextureLerper();
		TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616 * L_2 = (TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616 *)il2cpp_codegen_object_new(TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616_il2cpp_TypeInfo_var);
		TextureLerper__ctor_m74C29B82F5BDDEE941798B3451F5CAC949786403(L_2, /*hidden argument*/NULL);
		((TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616_StaticFields*)il2cpp_codegen_static_fields_for(TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616_il2cpp_TypeInfo_var))->set_m_Instance_0(L_2);
	}

IL_0017:
	{
		// return m_Instance;
		TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616 * L_3 = ((TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616_StaticFields*)il2cpp_codegen_static_fields_for(TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616_il2cpp_TypeInfo_var))->get_m_Instance_0();
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616 * L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TextureLerper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureLerper__ctor_m74C29B82F5BDDEE941798B3451F5CAC949786403 (TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB38E72AF05051F5403306E56E602C5284D335714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TextureLerper()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_Recycled = new List<RenderTexture>();
		List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * L_0 = (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE *)il2cpp_codegen_object_new(List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE_il2cpp_TypeInfo_var);
		List_1__ctor_mB38E72AF05051F5403306E56E602C5284D335714(L_0, /*hidden argument*/List_1__ctor_mB38E72AF05051F5403306E56E602C5284D335714_RuntimeMethod_var);
		__this->set_m_Recycled_4(L_0);
		// m_Actives = new List<RenderTexture>();
		List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * L_1 = (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE *)il2cpp_codegen_object_new(List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE_il2cpp_TypeInfo_var);
		List_1__ctor_mB38E72AF05051F5403306E56E602C5284D335714(L_1, /*hidden argument*/List_1__ctor_mB38E72AF05051F5403306E56E602C5284D335714_RuntimeMethod_var);
		__this->set_m_Actives_5(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TextureLerper::BeginFrame(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureLerper_BeginFrame_mCF5241E01ADD975AE44EEB2BAF8F8392DE25D2D4 (TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616 * __this, PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * ___context0, const RuntimeMethod* method)
{
	{
		// m_Command = context.command;
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_0 = ___context0;
		NullCheck(L_0);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_1;
		L_1 = PostProcessRenderContext_get_command_mE54DFA2523219208C87BA95ECD2D766889DACA71_inline(L_0, /*hidden argument*/NULL);
		__this->set_m_Command_1(L_1);
		// m_PropertySheets = context.propertySheets;
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_2 = ___context0;
		NullCheck(L_2);
		PropertySheetFactory_t2D2278105A154ED6036D5BE72D09359A5FB94835 * L_3;
		L_3 = PostProcessRenderContext_get_propertySheets_mE1135E07BE4F59354198DF05198E64CAF2E41D5C_inline(L_2, /*hidden argument*/NULL);
		__this->set_m_PropertySheets_2(L_3);
		// m_Resources = context.resources;
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_4 = ___context0;
		NullCheck(L_4);
		PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC * L_5;
		L_5 = PostProcessRenderContext_get_resources_mEC353AFE49A4A72D561FCB8758E364578AB2B9D7_inline(L_4, /*hidden argument*/NULL);
		__this->set_m_Resources_3(L_5);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TextureLerper::EndFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureLerper_EndFrame_mE08975C8094A7C272C77F81234C060A5B7D04CDE (TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m34DAD6AC8E8B11E77125890D86CF0D9AF99CAEE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m75D2D40791CA5307F5E15771C106A81BF029364A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m92E98DA7340C7A6A1EF4FFAC2A59FE3ADF9DC58D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCB66852EF108F7810C149B035C969D0956FC0205_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m4B8C3E5C469683DF4A94C4054743B220F13BB4F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7328294DBE16FF49F6D96893E2EAEA6C9F96E441_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1137DAC9D2025FFC7D853298B59113ACAB858B24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_2 = NULL;
	bool V_3 = false;
	Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D  V_4;
	memset((&V_4), 0, sizeof(V_4));
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (m_Recycled.Count > 0)
		List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * L_0 = __this->get_m_Recycled_4();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m1137DAC9D2025FFC7D853298B59113ACAB858B24_inline(L_0, /*hidden argument*/List_1_get_Count_m1137DAC9D2025FFC7D853298B59113ACAB858B24_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0059;
		}
	}
	{
		// foreach (var rt in m_Recycled)
		List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * L_3 = __this->get_m_Recycled_4();
		NullCheck(L_3);
		Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D  L_4;
		L_4 = List_1_GetEnumerator_m7328294DBE16FF49F6D96893E2EAEA6C9F96E441(L_3, /*hidden argument*/List_1_GetEnumerator_m7328294DBE16FF49F6D96893E2EAEA6C9F96E441_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0032;
		}

IL_0023:
		{
			// foreach (var rt in m_Recycled)
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5;
			L_5 = Enumerator_get_Current_m92E98DA7340C7A6A1EF4FFAC2A59FE3ADF9DC58D_inline((Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D *)(&V_1), /*hidden argument*/Enumerator_get_Current_m92E98DA7340C7A6A1EF4FFAC2A59FE3ADF9DC58D_RuntimeMethod_var);
			V_2 = L_5;
			// RuntimeUtilities.Destroy(rt);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_6 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
			RuntimeUtilities_Destroy_mFACBF0A88388BF2481DCF65832A811B0BA873FFB(L_6, /*hidden argument*/NULL);
		}

IL_0032:
		{
			// foreach (var rt in m_Recycled)
			bool L_7;
			L_7 = Enumerator_MoveNext_m75D2D40791CA5307F5E15771C106A81BF029364A((Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m75D2D40791CA5307F5E15771C106A81BF029364A_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0023;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m34DAD6AC8E8B11E77125890D86CF0D9AF99CAEE4((Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D *)(&V_1), /*hidden argument*/Enumerator_Dispose_m34DAD6AC8E8B11E77125890D86CF0D9AF99CAEE4_RuntimeMethod_var);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
	}

IL_004c:
	{
		// m_Recycled.Clear();
		List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * L_8 = __this->get_m_Recycled_4();
		NullCheck(L_8);
		List_1_Clear_m4B8C3E5C469683DF4A94C4054743B220F13BB4F5(L_8, /*hidden argument*/List_1_Clear_m4B8C3E5C469683DF4A94C4054743B220F13BB4F5_RuntimeMethod_var);
	}

IL_0059:
	{
		// if (m_Actives.Count > 0)
		List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * L_9 = __this->get_m_Actives_5();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m1137DAC9D2025FFC7D853298B59113ACAB858B24_inline(L_9, /*hidden argument*/List_1_get_Count_m1137DAC9D2025FFC7D853298B59113ACAB858B24_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_10) > ((int32_t)0))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_00ba;
		}
	}
	{
		// foreach (var rt in m_Actives)
		List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * L_12 = __this->get_m_Actives_5();
		NullCheck(L_12);
		Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D  L_13;
		L_13 = List_1_GetEnumerator_m7328294DBE16FF49F6D96893E2EAEA6C9F96E441(L_12, /*hidden argument*/List_1_GetEnumerator_m7328294DBE16FF49F6D96893E2EAEA6C9F96E441_RuntimeMethod_var);
		V_4 = L_13;
	}

IL_007a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_007c:
		{
			// foreach (var rt in m_Actives)
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_14;
			L_14 = Enumerator_get_Current_m92E98DA7340C7A6A1EF4FFAC2A59FE3ADF9DC58D_inline((Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D *)(&V_4), /*hidden argument*/Enumerator_get_Current_m92E98DA7340C7A6A1EF4FFAC2A59FE3ADF9DC58D_RuntimeMethod_var);
			V_5 = L_14;
			// m_Recycled.Add(rt);
			List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * L_15 = __this->get_m_Recycled_4();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_16 = V_5;
			NullCheck(L_15);
			List_1_Add_mCB66852EF108F7810C149B035C969D0956FC0205(L_15, L_16, /*hidden argument*/List_1_Add_mCB66852EF108F7810C149B035C969D0956FC0205_RuntimeMethod_var);
		}

IL_0093:
		{
			// foreach (var rt in m_Actives)
			bool L_17;
			L_17 = Enumerator_MoveNext_m75D2D40791CA5307F5E15771C106A81BF029364A((Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m75D2D40791CA5307F5E15771C106A81BF029364A_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_007c;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xAD, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m34DAD6AC8E8B11E77125890D86CF0D9AF99CAEE4((Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D *)(&V_4), /*hidden argument*/Enumerator_Dispose_m34DAD6AC8E8B11E77125890D86CF0D9AF99CAEE4_RuntimeMethod_var);
		IL2CPP_END_FINALLY(158)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAD, IL_00ad)
	}

IL_00ad:
	{
		// m_Actives.Clear();
		List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * L_18 = __this->get_m_Actives_5();
		NullCheck(L_18);
		List_1_Clear_m4B8C3E5C469683DF4A94C4054743B220F13BB4F5(L_18, /*hidden argument*/List_1_Clear_m4B8C3E5C469683DF4A94C4054743B220F13BB4F5_RuntimeMethod_var);
	}

IL_00ba:
	{
		// }
		return;
	}
}
// UnityEngine.RenderTexture UnityEngine.Rendering.PostProcessing.TextureLerper::Get(UnityEngine.RenderTextureFormat,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * TextureLerper_Get_m7BD996F475523844239018F193F65A66ED0DC2C8 (TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616 * __this, int32_t ___format0, int32_t ___w1, int32_t ___h2, int32_t ___d3, bool ___enableRandomWrite4, bool ___force3D5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCB66852EF108F7810C149B035C969D0956FC0205_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m551A84AB57B24D7963D50A1EE3CD8BB9338CF539_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1137DAC9D2025FFC7D853298B59113ACAB858B24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2048DC2B083950A76C19CB8FCB54BC7BD13A8B6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B19_0 = 0;
	{
		// RenderTexture rt = null;
		V_0 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)NULL;
		// int i, len = m_Recycled.Count;
		List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * L_0 = __this->get_m_Recycled_4();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m1137DAC9D2025FFC7D853298B59113ACAB858B24_inline(L_0, /*hidden argument*/List_1_get_Count_m1137DAC9D2025FFC7D853298B59113ACAB858B24_RuntimeMethod_var);
		V_2 = L_1;
		// for (i = 0; i < len; i++)
		V_1 = 0;
		goto IL_0073;
	}

IL_0013:
	{
		// var r = m_Recycled[i];
		List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * L_2 = __this->get_m_Recycled_4();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_4;
		L_4 = List_1_get_Item_m2048DC2B083950A76C19CB8FCB54BC7BD13A8B6C_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m2048DC2B083950A76C19CB8FCB54BC7BD13A8B6C_RuntimeMethod_var);
		V_3 = L_4;
		// if (r.width == w && r.height == h && r.volumeDepth == d && r.format == format && r.enableRandomWrite == enableRandomWrite && (!force3D || (r.dimension == TextureDimension.Tex3D)))
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5 = V_3;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		int32_t L_7 = ___w1;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0062;
		}
	}
	{
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_8 = V_3;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_8);
		int32_t L_10 = ___h2;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0062;
		}
	}
	{
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = RenderTexture_get_volumeDepth_mD0B567DC91B5633CB8C1F6A716914B07B12BBF65(L_11, /*hidden argument*/NULL);
		int32_t L_13 = ___d3;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0062;
		}
	}
	{
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_14 = V_3;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = RenderTexture_get_format_mB9BBCACA0A809206FA73109ACF2A6976E19DB822(L_14, /*hidden argument*/NULL);
		int32_t L_16 = ___format0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0062;
		}
	}
	{
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_17 = V_3;
		NullCheck(L_17);
		bool L_18;
		L_18 = RenderTexture_get_enableRandomWrite_mEB1D75D2BC5A4F0C136D7BF4C2E2977CDECE8E96(L_17, /*hidden argument*/NULL);
		bool L_19 = ___enableRandomWrite4;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_0062;
		}
	}
	{
		bool L_20 = ___force3D5;
		if (!L_20)
		{
			goto IL_005f;
		}
	}
	{
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_21 = V_3;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = VirtFuncInvoker0< int32_t >::Invoke(8 /* UnityEngine.Rendering.TextureDimension UnityEngine.Texture::get_dimension() */, L_21);
		G_B9_0 = ((((int32_t)L_22) == ((int32_t)3))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B9_0 = 1;
	}

IL_0060:
	{
		G_B11_0 = G_B9_0;
		goto IL_0063;
	}

IL_0062:
	{
		G_B11_0 = 0;
	}

IL_0063:
	{
		V_4 = (bool)G_B11_0;
		bool L_23 = V_4;
		if (!L_23)
		{
			goto IL_006e;
		}
	}
	{
		// rt = r;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_24 = V_3;
		V_0 = L_24;
		// break;
		goto IL_007d;
	}

IL_006e:
	{
		// for (i = 0; i < len; i++)
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0073:
	{
		// for (i = 0; i < len; i++)
		int32_t L_26 = V_1;
		int32_t L_27 = V_2;
		V_5 = (bool)((((int32_t)L_26) < ((int32_t)L_27))? 1 : 0);
		bool L_28 = V_5;
		if (L_28)
		{
			goto IL_0013;
		}
	}

IL_007d:
	{
		// if (rt == null)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_29, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_30;
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_00e2;
		}
	}
	{
		// var dimension = (d > 1) || force3D
		//     ? TextureDimension.Tex3D
		//     : TextureDimension.Tex2D;
		int32_t L_32 = ___d3;
		bool L_33 = ___force3D5;
		if (((int32_t)((int32_t)((((int32_t)L_32) > ((int32_t)1))? 1 : 0)|(int32_t)L_33)))
		{
			goto IL_0098;
		}
	}
	{
		G_B19_0 = 2;
		goto IL_0099;
	}

IL_0098:
	{
		G_B19_0 = 3;
	}

IL_0099:
	{
		V_7 = G_B19_0;
		// rt = new RenderTexture(w, h, 0, format)
		// {
		//     dimension = dimension,
		//     filterMode = FilterMode.Bilinear,
		//     wrapMode = TextureWrapMode.Clamp,
		//     anisoLevel = 0,
		//     volumeDepth = d,
		//     enableRandomWrite = enableRandomWrite
		// };
		int32_t L_34 = ___w1;
		int32_t L_35 = ___h2;
		int32_t L_36 = ___format0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_37 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)il2cpp_codegen_object_new(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		RenderTexture__ctor_m8E4220FDA652BA3CACE60FBA59D868B921C0F533(L_37, L_34, L_35, 0, L_36, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_38 = L_37;
		int32_t L_39 = V_7;
		NullCheck(L_38);
		VirtActionInvoker1< int32_t >::Invoke(9 /* System.Void UnityEngine.Texture::set_dimension(UnityEngine.Rendering.TextureDimension) */, L_38, L_39);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_40 = L_38;
		NullCheck(L_40);
		Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0(L_40, 1, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_41 = L_40;
		NullCheck(L_41);
		Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D(L_41, 1, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_42 = L_41;
		NullCheck(L_42);
		Texture_set_anisoLevel_mE51360F6CD0562FD6355F8C0509B70A454CB33BE(L_42, 0, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_43 = L_42;
		int32_t L_44 = ___d3;
		NullCheck(L_43);
		RenderTexture_set_volumeDepth_m01D7BD50386DDAE777CE3CB9B60FDD7DE798AC93(L_43, L_44, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_45 = L_43;
		bool L_46 = ___enableRandomWrite4;
		NullCheck(L_45);
		RenderTexture_set_enableRandomWrite_m024F49DB3CA3B02FA0EEBB3EACB37E6228CAA183(L_45, L_46, /*hidden argument*/NULL);
		V_0 = L_45;
		// rt.Create();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_47 = V_0;
		NullCheck(L_47);
		bool L_48;
		L_48 = RenderTexture_Create_m723CBB7B7543E9FAFEBC04E8FDCDF629DA31F411(L_47, /*hidden argument*/NULL);
		goto IL_00ef;
	}

IL_00e2:
	{
		// else m_Recycled.RemoveAt(i);
		List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * L_49 = __this->get_m_Recycled_4();
		int32_t L_50 = V_1;
		NullCheck(L_49);
		List_1_RemoveAt_m551A84AB57B24D7963D50A1EE3CD8BB9338CF539(L_49, L_50, /*hidden argument*/List_1_RemoveAt_m551A84AB57B24D7963D50A1EE3CD8BB9338CF539_RuntimeMethod_var);
	}

IL_00ef:
	{
		// m_Actives.Add(rt);
		List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * L_51 = __this->get_m_Actives_5();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_52 = V_0;
		NullCheck(L_51);
		List_1_Add_mCB66852EF108F7810C149B035C969D0956FC0205(L_51, L_52, /*hidden argument*/List_1_Add_mCB66852EF108F7810C149B035C969D0956FC0205_RuntimeMethod_var);
		// return rt;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_53 = V_0;
		V_8 = L_53;
		goto IL_0101;
	}

IL_0101:
	{
		// }
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_54 = V_8;
		return L_54;
	}
}
// UnityEngine.Texture UnityEngine.Rendering.PostProcessing.TextureLerper::Lerp(UnityEngine.Texture,UnityEngine.Texture,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * TextureLerper_Lerp_mCA914BD184BAC500B67975AB1259C3CB53AFF517 (TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616 * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___from0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___to1, float ___t2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisTexture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_mF786614AA0B9B1F07F1522C795443925B2ACDC5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F889A7069FB348E59778EC4C275B6A09FE34752);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5ED45B85ADA1AFA9C8962A3063BC0DB7FA04521E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6067E93B7ED6BC9634C2207045961FBB1126B92A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD754031EB09A4061A82F00A1E77A9972C831A1FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF51190EEE90545F9CD168B86B0A73EF3C85E3A2C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_1 = NULL;
	int32_t V_2 = 0;
	PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * V_3 = NULL;
	bool V_4 = false;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * V_11 = NULL;
	int32_t V_12 = 0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE  V_18;
	memset((&V_18), 0, sizeof(V_18));
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		// Assert.IsNotNull(from);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_0 = ___from0;
		IL2CPP_RUNTIME_CLASS_INIT(Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		Assert_IsNotNull_TisTexture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_mF786614AA0B9B1F07F1522C795443925B2ACDC5C(L_0, /*hidden argument*/Assert_IsNotNull_TisTexture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_mF786614AA0B9B1F07F1522C795443925B2ACDC5C_RuntimeMethod_var);
		// Assert.IsNotNull(to);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_1 = ___to1;
		Assert_IsNotNull_TisTexture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_mF786614AA0B9B1F07F1522C795443925B2ACDC5C(L_1, /*hidden argument*/Assert_IsNotNull_TisTexture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_mF786614AA0B9B1F07F1522C795443925B2ACDC5C_RuntimeMethod_var);
		// Assert.AreEqual(from.width, to.width);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_2 = ___from0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_4 = ___to1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_4);
		Assert_AreEqual_m0BBA9909EB4BC7763AACFC6CC51D886EDF62BCD2(L_3, L_5, /*hidden argument*/NULL);
		// Assert.AreEqual(from.height, to.height);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_6 = ___from0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_6);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_8 = ___to1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_8);
		Assert_AreEqual_m0BBA9909EB4BC7763AACFC6CC51D886EDF62BCD2(L_7, L_9, /*hidden argument*/NULL);
		// if (from == to)
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_10 = ___from0;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_11 = ___to1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_10, L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0048;
		}
	}
	{
		// return from;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_14 = ___from0;
		V_5 = L_14;
		goto IL_027b;
	}

IL_0048:
	{
		// if (t <= 0f) return from;
		float L_15 = ___t2;
		V_6 = (bool)((((int32_t)((!(((float)L_15) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_0061;
		}
	}
	{
		// if (t <= 0f) return from;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_17 = ___from0;
		V_5 = L_17;
		goto IL_027b;
	}

IL_0061:
	{
		// if (t >= 1f) return to;
		float L_18 = ___t2;
		V_7 = (bool)((((int32_t)((!(((float)L_18) >= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_007a;
		}
	}
	{
		// if (t >= 1f) return to;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_20 = ___to1;
		V_5 = L_20;
		goto IL_027b;
	}

IL_007a:
	{
		// bool is3D = from is Texture3D
		//         || (from is RenderTexture && ((RenderTexture)from).volumeDepth > 1);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_21 = ___from0;
		if (((Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 *)IsInstSealed((RuntimeObject*)L_21, Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8_il2cpp_TypeInfo_var)))
		{
			goto IL_009d;
		}
	}
	{
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_22 = ___from0;
		if (!((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)IsInstClass((RuntimeObject*)L_22, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var)))
		{
			goto IL_009a;
		}
	}
	{
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_23 = ___from0;
		NullCheck(((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)CastclassClass((RuntimeObject*)L_23, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var)));
		int32_t L_24;
		L_24 = RenderTexture_get_volumeDepth_mD0B567DC91B5633CB8C1F6A716914B07B12BBF65(((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)CastclassClass((RuntimeObject*)L_23, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B10_0 = ((((int32_t)L_24) > ((int32_t)1))? 1 : 0);
		goto IL_009b;
	}

IL_009a:
	{
		G_B10_0 = 0;
	}

IL_009b:
	{
		G_B12_0 = G_B10_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B12_0 = 1;
	}

IL_009e:
	{
		V_0 = (bool)G_B12_0;
		// if (is3D)
		bool L_25 = V_0;
		V_8 = L_25;
		bool L_26 = V_8;
		if (!L_26)
		{
			goto IL_01f3;
		}
	}
	{
		// int dpth = @from is Texture3D ? ((Texture3D) @from).depth : ((RenderTexture) @from).volumeDepth;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_27 = ___from0;
		if (((Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 *)IsInstSealed((RuntimeObject*)L_27, Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8_il2cpp_TypeInfo_var)))
		{
			goto IL_00bf;
		}
	}
	{
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_28 = ___from0;
		NullCheck(((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)CastclassClass((RuntimeObject*)L_28, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var)));
		int32_t L_29;
		L_29 = RenderTexture_get_volumeDepth_mD0B567DC91B5633CB8C1F6A716914B07B12BBF65(((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)CastclassClass((RuntimeObject*)L_28, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B16_0 = L_29;
		goto IL_00ca;
	}

IL_00bf:
	{
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_30 = ___from0;
		NullCheck(((Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 *)CastclassSealed((RuntimeObject*)L_30, Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8_il2cpp_TypeInfo_var)));
		int32_t L_31;
		L_31 = Texture3D_get_depth_m2926D5A2C6EFBAE35749E4B9E8637A8CF08DC10B(((Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 *)CastclassSealed((RuntimeObject*)L_30, Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B16_0 = L_31;
	}

IL_00ca:
	{
		V_9 = G_B16_0;
		// int size = Mathf.Max(from.width, from.height);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_32 = ___from0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_32);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_34 = ___from0;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_34);
		int32_t L_36;
		L_36 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(L_33, L_35, /*hidden argument*/NULL);
		V_10 = L_36;
		// size = Mathf.Max(size, dpth);
		int32_t L_37 = V_10;
		int32_t L_38 = V_9;
		int32_t L_39;
		L_39 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(L_37, L_38, /*hidden argument*/NULL);
		V_10 = L_39;
		// rt = Get(RenderTextureFormat.ARGBHalf, from.width, from.height, dpth, true, true);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_40 = ___from0;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_40);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_42 = ___from0;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_42);
		int32_t L_44 = V_9;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_45;
		L_45 = TextureLerper_Get_m7BD996F475523844239018F193F65A66ED0DC2C8(__this, 2, L_41, L_43, L_44, (bool)1, (bool)1, /*hidden argument*/NULL);
		V_1 = L_45;
		// var compute = m_Resources.computeShaders.texture3dLerp;
		PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC * L_46 = __this->get_m_Resources_3();
		NullCheck(L_46);
		ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B * L_47 = L_46->get_computeShaders_8();
		NullCheck(L_47);
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_48 = L_47->get_texture3dLerp_3();
		V_11 = L_48;
		// int kernel = compute.FindKernel("KTexture3DLerp");
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_49 = V_11;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = ComputeShader_FindKernel_mCA2683905A5DAB573D50389E2B24B48B18CD53D0(L_49, _stringLiteral4F889A7069FB348E59778EC4C275B6A09FE34752, /*hidden argument*/NULL);
		V_12 = L_50;
		// m_Command.SetComputeVectorParam(compute, "_DimensionsAndLerp", new Vector4(from.width, from.height, dpth, t));
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_51 = __this->get_m_Command_1();
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_52 = V_11;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_53 = ___from0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_53);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_55 = ___from0;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_55);
		int32_t L_57 = V_9;
		float L_58 = ___t2;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_59), ((float)((float)L_54)), ((float)((float)L_56)), ((float)((float)L_57)), L_58, /*hidden argument*/NULL);
		NullCheck(L_51);
		CommandBuffer_SetComputeVectorParam_m6FD77F6D465976FBCBB64D8EEC1CC2903A254319(L_51, L_52, _stringLiteralD754031EB09A4061A82F00A1E77A9972C831A1FB, L_59, /*hidden argument*/NULL);
		// m_Command.SetComputeTextureParam(compute, kernel, "_Output", rt);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_60 = __this->get_m_Command_1();
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_61 = V_11;
		int32_t L_62 = V_12;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_63 = V_1;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_64;
		L_64 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_63, /*hidden argument*/NULL);
		NullCheck(L_60);
		CommandBuffer_SetComputeTextureParam_m478EC6F4970EF8C3C0645FEB5B17A59C9299829B(L_60, L_61, L_62, _stringLiteral6067E93B7ED6BC9634C2207045961FBB1126B92A, L_64, /*hidden argument*/NULL);
		// m_Command.SetComputeTextureParam(compute, kernel, "_From", from);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_65 = __this->get_m_Command_1();
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_66 = V_11;
		int32_t L_67 = V_12;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_68 = ___from0;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_69;
		L_69 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_68, /*hidden argument*/NULL);
		NullCheck(L_65);
		CommandBuffer_SetComputeTextureParam_m478EC6F4970EF8C3C0645FEB5B17A59C9299829B(L_65, L_66, L_67, _stringLiteralF51190EEE90545F9CD168B86B0A73EF3C85E3A2C, L_69, /*hidden argument*/NULL);
		// m_Command.SetComputeTextureParam(compute, kernel, "_To", to);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_70 = __this->get_m_Command_1();
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_71 = V_11;
		int32_t L_72 = V_12;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_73 = ___to1;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_74;
		L_74 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_73, /*hidden argument*/NULL);
		NullCheck(L_70);
		CommandBuffer_SetComputeTextureParam_m478EC6F4970EF8C3C0645FEB5B17A59C9299829B(L_70, L_71, L_72, _stringLiteral5ED45B85ADA1AFA9C8962A3063BC0DB7FA04521E, L_74, /*hidden argument*/NULL);
		// compute.GetKernelThreadGroupSizes(kernel, out tgsX, out tgsY, out tgsZ);
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_75 = V_11;
		int32_t L_76 = V_12;
		NullCheck(L_75);
		ComputeShader_GetKernelThreadGroupSizes_m44AD93684763240FE15578CF0AEF38EFFAE2EE5F(L_75, L_76, (uint32_t*)(&V_13), (uint32_t*)(&V_14), (uint32_t*)(&V_15), /*hidden argument*/NULL);
		// Assert.AreEqual(tgsX, tgsY);
		uint32_t L_77 = V_13;
		uint32_t L_78 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		Assert_AreEqual_m5FC43623F34AFE0CA20A36D52935BECFAC8EC0AC(L_77, L_78, /*hidden argument*/NULL);
		// int groupSizeXY = Mathf.CeilToInt(size / (float)tgsX);
		int32_t L_79 = V_10;
		uint32_t L_80 = V_13;
		int32_t L_81;
		L_81 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)((float)((float)((float)L_79))/(float)((float)((float)((double)((uint32_t)L_80)))))), /*hidden argument*/NULL);
		V_16 = L_81;
		// int groupSizeZ = Mathf.CeilToInt(size / (float)tgsZ);
		int32_t L_82 = V_10;
		uint32_t L_83 = V_15;
		int32_t L_84;
		L_84 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)((float)((float)((float)L_82))/(float)((float)((float)((double)((uint32_t)L_83)))))), /*hidden argument*/NULL);
		V_17 = L_84;
		// m_Command.DispatchCompute(compute, kernel, groupSizeXY, groupSizeXY, groupSizeZ);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_85 = __this->get_m_Command_1();
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_86 = V_11;
		int32_t L_87 = V_12;
		int32_t L_88 = V_16;
		int32_t L_89 = V_16;
		int32_t L_90 = V_17;
		NullCheck(L_85);
		CommandBuffer_DispatchCompute_m2EB0711D3F10F874D487D081F169FA0D8996DC64(L_85, L_86, L_87, L_88, L_89, L_90, /*hidden argument*/NULL);
		// return rt;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_91 = V_1;
		V_5 = L_91;
		goto IL_027b;
	}

IL_01f3:
	{
		// var format = TextureFormatUtilities.GetUncompressedRenderTextureFormat(to);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_92 = ___to1;
		IL2CPP_RUNTIME_CLASS_INIT(TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_il2cpp_TypeInfo_var);
		int32_t L_93;
		L_93 = TextureFormatUtilities_GetUncompressedRenderTextureFormat_mA9DD8DE489A31097C86EAB22E736EF837C243473(L_92, /*hidden argument*/NULL);
		V_2 = L_93;
		// rt = Get(format, to.width, to.height);
		int32_t L_94 = V_2;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_95 = ___to1;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_95);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_97 = ___to1;
		NullCheck(L_97);
		int32_t L_98;
		L_98 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_97);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_99;
		L_99 = TextureLerper_Get_m7BD996F475523844239018F193F65A66ED0DC2C8(__this, L_94, L_96, L_98, 1, (bool)0, (bool)0, /*hidden argument*/NULL);
		V_1 = L_99;
		// var sheet = m_PropertySheets.Get(m_Resources.shaders.texture2dLerp);
		PropertySheetFactory_t2D2278105A154ED6036D5BE72D09359A5FB94835 * L_100 = __this->get_m_PropertySheets_2();
		PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC * L_101 = __this->get_m_Resources_3();
		NullCheck(L_101);
		Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2 * L_102 = L_101->get_shaders_7();
		NullCheck(L_102);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_103 = L_102->get_texture2dLerp_12();
		NullCheck(L_100);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_104;
		L_104 = PropertySheetFactory_Get_mE4CC267B0EB28F0892A426B67015A309F2540CBF(L_100, L_103, /*hidden argument*/NULL);
		V_3 = L_104;
		// sheet.properties.SetTexture(ShaderIDs.To, to);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_105 = V_3;
		NullCheck(L_105);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_106;
		L_106 = PropertySheet_get_properties_m3AB962E1C6A0C44D98E16AFBB73B40BA5E21B504_inline(L_105, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var);
		int32_t L_107 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_To_118();
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_108 = ___to1;
		NullCheck(L_106);
		MaterialPropertyBlock_SetTexture_m8F81CA94E5261618BEDD93EC02DAA2412E732C04(L_106, L_107, L_108, /*hidden argument*/NULL);
		// sheet.properties.SetFloat(ShaderIDs.Interp, t);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_109 = V_3;
		NullCheck(L_109);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_110;
		L_110 = PropertySheet_get_properties_m3AB962E1C6A0C44D98E16AFBB73B40BA5E21B504_inline(L_109, /*hidden argument*/NULL);
		int32_t L_111 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_Interp_119();
		float L_112 = ___t2;
		NullCheck(L_110);
		MaterialPropertyBlock_SetFloat_mD2F1653CEDB22B1A3EE844E353CF125A607AEDEC(L_110, L_111, L_112, /*hidden argument*/NULL);
		// m_Command.BlitFullscreenTriangle(from, rt, sheet, 0);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_113 = __this->get_m_Command_1();
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_114 = ___from0;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_115;
		L_115 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_114, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_116 = V_1;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_117;
		L_117 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_116, /*hidden argument*/NULL);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_118 = V_3;
		il2cpp_codegen_initobj((&V_18), sizeof(Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE ));
		Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE  L_119 = V_18;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		RuntimeUtilities_BlitFullscreenTriangle_mABC8DFC7F13C86175696C407ABA469F66B98128E(L_113, L_115, L_117, L_118, 0, (bool)0, L_119, /*hidden argument*/NULL);
		// return rt;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_120 = V_1;
		V_5 = L_120;
		goto IL_027b;
	}

IL_027b:
	{
		// }
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_121 = V_5;
		return L_121;
	}
}
// UnityEngine.Texture UnityEngine.Rendering.PostProcessing.TextureLerper::Lerp(UnityEngine.Texture,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * TextureLerper_Lerp_mE50D3C8F764C051E06B7D02A7AA434BA89E948B6 (TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616 * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___from0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___to1, float ___t2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisTexture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_mF786614AA0B9B1F07F1522C795443925B2ACDC5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E63EA4D6F8144DD6406580EE9A7B6F874A529E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6067E93B7ED6BC9634C2207045961FBB1126B92A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C7F6CFACBA60E7454344DA7A7EB629EB0C4A8F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD754031EB09A4061A82F00A1E77A9972C831A1FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF51190EEE90545F9CD168B86B0A73EF3C85E3A2C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_1 = NULL;
	int32_t V_2 = 0;
	PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * V_3 = NULL;
	bool V_4 = false;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * V_5 = NULL;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE  V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// Assert.IsNotNull(from);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_0 = ___from0;
		IL2CPP_RUNTIME_CLASS_INIT(Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		Assert_IsNotNull_TisTexture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_mF786614AA0B9B1F07F1522C795443925B2ACDC5C(L_0, /*hidden argument*/Assert_IsNotNull_TisTexture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_mF786614AA0B9B1F07F1522C795443925B2ACDC5C_RuntimeMethod_var);
		// if (t < 0.00001)
		float L_1 = ___t2;
		V_4 = (bool)((((double)((double)((double)L_1))) < ((double)(1.0000000000000001E-05)))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// return from;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_3 = ___from0;
		V_5 = L_3;
		goto IL_022d;
	}

IL_0023:
	{
		// bool is3D = from is Texture3D
		//         || (from is RenderTexture && ((RenderTexture)from).volumeDepth > 1);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_4 = ___from0;
		if (((Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 *)IsInstSealed((RuntimeObject*)L_4, Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8_il2cpp_TypeInfo_var)))
		{
			goto IL_0046;
		}
	}
	{
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_5 = ___from0;
		if (!((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)IsInstClass((RuntimeObject*)L_5, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var)))
		{
			goto IL_0043;
		}
	}
	{
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_6 = ___from0;
		NullCheck(((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)CastclassClass((RuntimeObject*)L_6, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var)));
		int32_t L_7;
		L_7 = RenderTexture_get_volumeDepth_mD0B567DC91B5633CB8C1F6A716914B07B12BBF65(((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)CastclassClass((RuntimeObject*)L_6, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B6_0 = ((((int32_t)L_7) > ((int32_t)1))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B6_0 = 0;
	}

IL_0044:
	{
		G_B8_0 = G_B6_0;
		goto IL_0047;
	}

IL_0046:
	{
		G_B8_0 = 1;
	}

IL_0047:
	{
		V_0 = (bool)G_B8_0;
		// if (is3D)
		bool L_8 = V_0;
		V_6 = L_8;
		bool L_9 = V_6;
		if (!L_9)
		{
			goto IL_0189;
		}
	}
	{
		// int dpth = @from is Texture3D ? ((Texture3D) @from).depth : ((RenderTexture) @from).volumeDepth;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_10 = ___from0;
		if (((Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 *)IsInstSealed((RuntimeObject*)L_10, Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_11 = ___from0;
		NullCheck(((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)CastclassClass((RuntimeObject*)L_11, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var)));
		int32_t L_12;
		L_12 = RenderTexture_get_volumeDepth_mD0B567DC91B5633CB8C1F6A716914B07B12BBF65(((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)CastclassClass((RuntimeObject*)L_11, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B12_0 = L_12;
		goto IL_0073;
	}

IL_0068:
	{
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_13 = ___from0;
		NullCheck(((Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 *)CastclassSealed((RuntimeObject*)L_13, Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8_il2cpp_TypeInfo_var)));
		int32_t L_14;
		L_14 = Texture3D_get_depth_m2926D5A2C6EFBAE35749E4B9E8637A8CF08DC10B(((Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 *)CastclassSealed((RuntimeObject*)L_13, Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B12_0 = L_14;
	}

IL_0073:
	{
		V_7 = G_B12_0;
		// int size = Mathf.Max(from.width, from.height);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_15 = ___from0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_15);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_17 = ___from0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_17);
		int32_t L_19;
		L_19 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(L_16, L_18, /*hidden argument*/NULL);
		V_8 = L_19;
		// size = Mathf.Max(size, dpth);
		int32_t L_20 = V_8;
		int32_t L_21 = V_7;
		int32_t L_22;
		L_22 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(L_20, L_21, /*hidden argument*/NULL);
		V_8 = L_22;
		// rt = Get(RenderTextureFormat.ARGBHalf, from.width, from.height, dpth, true, true);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_23 = ___from0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_23);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_25 = ___from0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_25);
		int32_t L_27 = V_7;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_28;
		L_28 = TextureLerper_Get_m7BD996F475523844239018F193F65A66ED0DC2C8(__this, 2, L_24, L_26, L_27, (bool)1, (bool)1, /*hidden argument*/NULL);
		V_1 = L_28;
		// var compute = m_Resources.computeShaders.texture3dLerp;
		PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC * L_29 = __this->get_m_Resources_3();
		NullCheck(L_29);
		ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B * L_30 = L_29->get_computeShaders_8();
		NullCheck(L_30);
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_31 = L_30->get_texture3dLerp_3();
		V_9 = L_31;
		// int kernel = compute.FindKernel("KTexture3DLerpToColor");
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_32 = V_9;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = ComputeShader_FindKernel_mCA2683905A5DAB573D50389E2B24B48B18CD53D0(L_32, _stringLiteral9C7F6CFACBA60E7454344DA7A7EB629EB0C4A8F2, /*hidden argument*/NULL);
		V_10 = L_33;
		// m_Command.SetComputeVectorParam(compute, "_DimensionsAndLerp", new Vector4(from.width, from.height, dpth, t));
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_34 = __this->get_m_Command_1();
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_35 = V_9;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_36 = ___from0;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_36);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_38 = ___from0;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_38);
		int32_t L_40 = V_7;
		float L_41 = ___t2;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_42), ((float)((float)L_37)), ((float)((float)L_39)), ((float)((float)L_40)), L_41, /*hidden argument*/NULL);
		NullCheck(L_34);
		CommandBuffer_SetComputeVectorParam_m6FD77F6D465976FBCBB64D8EEC1CC2903A254319(L_34, L_35, _stringLiteralD754031EB09A4061A82F00A1E77A9972C831A1FB, L_42, /*hidden argument*/NULL);
		// m_Command.SetComputeVectorParam(compute, "_TargetColor", new Vector4(to.r, to.g, to.b, to.a));
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_43 = __this->get_m_Command_1();
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_44 = V_9;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_45 = ___to1;
		float L_46 = L_45.get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_47 = ___to1;
		float L_48 = L_47.get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_49 = ___to1;
		float L_50 = L_49.get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_51 = ___to1;
		float L_52 = L_51.get_a_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_53;
		memset((&L_53), 0, sizeof(L_53));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_53), L_46, L_48, L_50, L_52, /*hidden argument*/NULL);
		NullCheck(L_43);
		CommandBuffer_SetComputeVectorParam_m6FD77F6D465976FBCBB64D8EEC1CC2903A254319(L_43, L_44, _stringLiteral3E63EA4D6F8144DD6406580EE9A7B6F874A529E4, L_53, /*hidden argument*/NULL);
		// m_Command.SetComputeTextureParam(compute, kernel, "_Output", rt);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_54 = __this->get_m_Command_1();
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_55 = V_9;
		int32_t L_56 = V_10;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_57 = V_1;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_58;
		L_58 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_57, /*hidden argument*/NULL);
		NullCheck(L_54);
		CommandBuffer_SetComputeTextureParam_m478EC6F4970EF8C3C0645FEB5B17A59C9299829B(L_54, L_55, L_56, _stringLiteral6067E93B7ED6BC9634C2207045961FBB1126B92A, L_58, /*hidden argument*/NULL);
		// m_Command.SetComputeTextureParam(compute, kernel, "_From", from);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_59 = __this->get_m_Command_1();
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_60 = V_9;
		int32_t L_61 = V_10;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_62 = ___from0;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_63;
		L_63 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_62, /*hidden argument*/NULL);
		NullCheck(L_59);
		CommandBuffer_SetComputeTextureParam_m478EC6F4970EF8C3C0645FEB5B17A59C9299829B(L_59, L_60, L_61, _stringLiteralF51190EEE90545F9CD168B86B0A73EF3C85E3A2C, L_63, /*hidden argument*/NULL);
		// int groupSize = Mathf.CeilToInt(size / 4f);
		int32_t L_64 = V_8;
		int32_t L_65;
		L_65 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)((float)((float)((float)L_64))/(float)(4.0f))), /*hidden argument*/NULL);
		V_11 = L_65;
		// m_Command.DispatchCompute(compute, kernel, groupSize, groupSize, groupSize);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_66 = __this->get_m_Command_1();
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_67 = V_9;
		int32_t L_68 = V_10;
		int32_t L_69 = V_11;
		int32_t L_70 = V_11;
		int32_t L_71 = V_11;
		NullCheck(L_66);
		CommandBuffer_DispatchCompute_m2EB0711D3F10F874D487D081F169FA0D8996DC64(L_66, L_67, L_68, L_69, L_70, L_71, /*hidden argument*/NULL);
		// return rt;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_72 = V_1;
		V_5 = L_72;
		goto IL_022d;
	}

IL_0189:
	{
		// var format = TextureFormatUtilities.GetUncompressedRenderTextureFormat(from);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_73 = ___from0;
		IL2CPP_RUNTIME_CLASS_INIT(TextureFormatUtilities_t1954B3FF2918CB96F58DF76B762C9DB84A46E9D0_il2cpp_TypeInfo_var);
		int32_t L_74;
		L_74 = TextureFormatUtilities_GetUncompressedRenderTextureFormat_mA9DD8DE489A31097C86EAB22E736EF837C243473(L_73, /*hidden argument*/NULL);
		V_2 = L_74;
		// rt = Get(format, from.width, from.height);
		int32_t L_75 = V_2;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_76 = ___from0;
		NullCheck(L_76);
		int32_t L_77;
		L_77 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_76);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_78 = ___from0;
		NullCheck(L_78);
		int32_t L_79;
		L_79 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_78);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_80;
		L_80 = TextureLerper_Get_m7BD996F475523844239018F193F65A66ED0DC2C8(__this, L_75, L_77, L_79, 1, (bool)0, (bool)0, /*hidden argument*/NULL);
		V_1 = L_80;
		// var sheet = m_PropertySheets.Get(m_Resources.shaders.texture2dLerp);
		PropertySheetFactory_t2D2278105A154ED6036D5BE72D09359A5FB94835 * L_81 = __this->get_m_PropertySheets_2();
		PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC * L_82 = __this->get_m_Resources_3();
		NullCheck(L_82);
		Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2 * L_83 = L_82->get_shaders_7();
		NullCheck(L_83);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_84 = L_83->get_texture2dLerp_12();
		NullCheck(L_81);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_85;
		L_85 = PropertySheetFactory_Get_mE4CC267B0EB28F0892A426B67015A309F2540CBF(L_81, L_84, /*hidden argument*/NULL);
		V_3 = L_85;
		// sheet.properties.SetVector(ShaderIDs.TargetColor, new Vector4(to.r, to.g, to.b, to.a));
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_86 = V_3;
		NullCheck(L_86);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_87;
		L_87 = PropertySheet_get_properties_m3AB962E1C6A0C44D98E16AFBB73B40BA5E21B504_inline(L_86, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var);
		int32_t L_88 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_TargetColor_120();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_89 = ___to1;
		float L_90 = L_89.get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_91 = ___to1;
		float L_92 = L_91.get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_93 = ___to1;
		float L_94 = L_93.get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_95 = ___to1;
		float L_96 = L_95.get_a_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_97;
		memset((&L_97), 0, sizeof(L_97));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_97), L_90, L_92, L_94, L_96, /*hidden argument*/NULL);
		NullCheck(L_87);
		MaterialPropertyBlock_SetVector_m39DE61298C4C95829529B498130844A591621E2F(L_87, L_88, L_97, /*hidden argument*/NULL);
		// sheet.properties.SetFloat(ShaderIDs.Interp, t);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_98 = V_3;
		NullCheck(L_98);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_99;
		L_99 = PropertySheet_get_properties_m3AB962E1C6A0C44D98E16AFBB73B40BA5E21B504_inline(L_98, /*hidden argument*/NULL);
		int32_t L_100 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_Interp_119();
		float L_101 = ___t2;
		NullCheck(L_99);
		MaterialPropertyBlock_SetFloat_mD2F1653CEDB22B1A3EE844E353CF125A607AEDEC(L_99, L_100, L_101, /*hidden argument*/NULL);
		// m_Command.BlitFullscreenTriangle(from, rt, sheet, 1);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_102 = __this->get_m_Command_1();
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_103 = ___from0;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_104;
		L_104 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_103, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_105 = V_1;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_106;
		L_106 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_105, /*hidden argument*/NULL);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_107 = V_3;
		il2cpp_codegen_initobj((&V_12), sizeof(Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE ));
		Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE  L_108 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		RuntimeUtilities_BlitFullscreenTriangle_mABC8DFC7F13C86175696C407ABA469F66B98128E(L_102, L_104, L_106, L_107, 1, (bool)0, L_108, /*hidden argument*/NULL);
		// return rt;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_109 = V_1;
		V_5 = L_109;
		goto IL_022d;
	}

IL_022d:
	{
		// }
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_110 = V_5;
		return L_110;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TextureLerper::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureLerper_Clear_m623E91726AE717C516B15A778FB79906A268F205 (TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m34DAD6AC8E8B11E77125890D86CF0D9AF99CAEE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m75D2D40791CA5307F5E15771C106A81BF029364A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m92E98DA7340C7A6A1EF4FFAC2A59FE3ADF9DC58D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m4B8C3E5C469683DF4A94C4054743B220F13BB4F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7328294DBE16FF49F6D96893E2EAEA6C9F96E441_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_1 = NULL;
	Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (var rt in m_Actives)
		List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * L_0 = __this->get_m_Actives_5();
		NullCheck(L_0);
		Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D  L_1;
		L_1 = List_1_GetEnumerator_m7328294DBE16FF49F6D96893E2EAEA6C9F96E441(L_0, /*hidden argument*/List_1_GetEnumerator_m7328294DBE16FF49F6D96893E2EAEA6C9F96E441_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001f;
		}

IL_0010:
		{
			// foreach (var rt in m_Actives)
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2;
			L_2 = Enumerator_get_Current_m92E98DA7340C7A6A1EF4FFAC2A59FE3ADF9DC58D_inline((Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D *)(&V_0), /*hidden argument*/Enumerator_get_Current_m92E98DA7340C7A6A1EF4FFAC2A59FE3ADF9DC58D_RuntimeMethod_var);
			V_1 = L_2;
			// RuntimeUtilities.Destroy(rt);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_3 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
			RuntimeUtilities_Destroy_mFACBF0A88388BF2481DCF65832A811B0BA873FFB(L_3, /*hidden argument*/NULL);
		}

IL_001f:
		{
			// foreach (var rt in m_Actives)
			bool L_4;
			L_4 = Enumerator_MoveNext_m75D2D40791CA5307F5E15771C106A81BF029364A((Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m75D2D40791CA5307F5E15771C106A81BF029364A_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_0010;
			}
		}

IL_0028:
		{
			IL2CPP_LEAVE(0x39, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m34DAD6AC8E8B11E77125890D86CF0D9AF99CAEE4((Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D *)(&V_0), /*hidden argument*/Enumerator_Dispose_m34DAD6AC8E8B11E77125890D86CF0D9AF99CAEE4_RuntimeMethod_var);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39, IL_0039)
	}

IL_0039:
	{
		// foreach (var rt in m_Recycled)
		List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * L_5 = __this->get_m_Recycled_4();
		NullCheck(L_5);
		Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D  L_6;
		L_6 = List_1_GetEnumerator_m7328294DBE16FF49F6D96893E2EAEA6C9F96E441(L_5, /*hidden argument*/List_1_GetEnumerator_m7328294DBE16FF49F6D96893E2EAEA6C9F96E441_RuntimeMethod_var);
		V_2 = L_6;
	}

IL_0046:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0057;
		}

IL_0048:
		{
			// foreach (var rt in m_Recycled)
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_7;
			L_7 = Enumerator_get_Current_m92E98DA7340C7A6A1EF4FFAC2A59FE3ADF9DC58D_inline((Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D *)(&V_2), /*hidden argument*/Enumerator_get_Current_m92E98DA7340C7A6A1EF4FFAC2A59FE3ADF9DC58D_RuntimeMethod_var);
			V_3 = L_7;
			// RuntimeUtilities.Destroy(rt);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_8 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
			RuntimeUtilities_Destroy_mFACBF0A88388BF2481DCF65832A811B0BA873FFB(L_8, /*hidden argument*/NULL);
		}

IL_0057:
		{
			// foreach (var rt in m_Recycled)
			bool L_9;
			L_9 = Enumerator_MoveNext_m75D2D40791CA5307F5E15771C106A81BF029364A((Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m75D2D40791CA5307F5E15771C106A81BF029364A_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0048;
			}
		}

IL_0060:
		{
			IL2CPP_LEAVE(0x71, FINALLY_0062);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m34DAD6AC8E8B11E77125890D86CF0D9AF99CAEE4((Enumerator_t8BA1DE68391D02B7600B0FC422B5DCA1FDBC773D *)(&V_2), /*hidden argument*/Enumerator_Dispose_m34DAD6AC8E8B11E77125890D86CF0D9AF99CAEE4_RuntimeMethod_var);
		IL2CPP_END_FINALLY(98)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x71, IL_0071)
	}

IL_0071:
	{
		// m_Actives.Clear();
		List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * L_10 = __this->get_m_Actives_5();
		NullCheck(L_10);
		List_1_Clear_m4B8C3E5C469683DF4A94C4054743B220F13BB4F5(L_10, /*hidden argument*/List_1_Clear_m4B8C3E5C469683DF4A94C4054743B220F13BB4F5_RuntimeMethod_var);
		// m_Recycled.Clear();
		List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * L_11 = __this->get_m_Recycled_4();
		NullCheck(L_11);
		List_1_Clear_m4B8C3E5C469683DF4A94C4054743B220F13BB4F5(L_11, /*hidden argument*/List_1_Clear_m4B8C3E5C469683DF4A94C4054743B220F13BB4F5_RuntimeMethod_var);
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
// System.Void UnityEngine.Rendering.PostProcessing.TextureParameter::Interp(UnityEngine.Texture,UnityEngine.Texture,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureParameter_Interp_m1E0F073609A17091BF589BA178C17A46CD1FF81F (TextureParameter_tC6A936F3D3C6DD5834DC7866D62E1BE3073BD8C2 * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___from0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___to1, float ___t2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterOverride_1_Interp_m214BFB261A31899C890C2ABC74213D6D67A8F1DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t V_4 = 0;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * V_11 = NULL;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B34_0 = 0;
	{
		// if (from == null && to == null)
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_0 = ___from0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_2 = ___to1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// value = null;
		((ParameterOverride_1_t728745CADEFE1DB4C2C14F6DD6EA53A447A763E4 *)__this)->set_value_1((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)NULL);
		// return;
		goto IL_01cc;
	}

IL_0025:
	{
		// if (from != null && to != null)
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_5 = ___from0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_7 = ___to1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_8));
		goto IL_0038;
	}

IL_0037:
	{
		G_B8_0 = 0;
	}

IL_0038:
	{
		V_1 = (bool)G_B8_0;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		// value = TextureLerper.instance.Lerp(from, to, t);
		TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616 * L_10;
		L_10 = TextureLerper_get_instance_m0AB68B6199F15DE585DA84890EFFBEA18C0C9135(/*hidden argument*/NULL);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_11 = ___from0;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_12 = ___to1;
		float L_13 = ___t2;
		NullCheck(L_10);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_14;
		L_14 = TextureLerper_Lerp_mCA914BD184BAC500B67975AB1259C3CB53AFF517(L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
		((ParameterOverride_1_t728745CADEFE1DB4C2C14F6DD6EA53A447A763E4 *)__this)->set_value_1(L_14);
		// return;
		goto IL_01cc;
	}

IL_0055:
	{
		// if (defaultState == TextureParameterDefault.Lut2D)
		int32_t L_15 = __this->get_defaultState_2();
		V_3 = (bool)((((int32_t)L_15) == ((int32_t)4))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		// int size = from != null ? from.height : to.height;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_17 = ___from0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0075;
		}
	}
	{
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_19 = ___to1;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_19);
		G_B14_0 = L_20;
		goto IL_007b;
	}

IL_0075:
	{
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_21 = ___from0;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_21);
		G_B14_0 = L_22;
	}

IL_007b:
	{
		V_4 = G_B14_0;
		// Texture defaultTexture = RuntimeUtilities.GetLutStrip(size);
		int32_t L_23 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_24;
		L_24 = RuntimeUtilities_GetLutStrip_m036B3B4D4A254F44036A937D2720F80C40A7A5A3(L_23, /*hidden argument*/NULL);
		V_5 = L_24;
		// if (from == null) from = defaultTexture;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_25 = ___from0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_25, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_26;
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_0097;
		}
	}
	{
		// if (from == null) from = defaultTexture;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_28 = V_5;
		___from0 = L_28;
	}

IL_0097:
	{
		// if (to == null) to = defaultTexture;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_29 = ___to1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_29, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_30;
		bool L_31 = V_7;
		if (!L_31)
		{
			goto IL_00a8;
		}
	}
	{
		// if (to == null) to = defaultTexture;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_32 = V_5;
		___to1 = L_32;
	}

IL_00a8:
	{
	}

IL_00a9:
	{
		// switch (defaultState)
		int32_t L_33 = __this->get_defaultState_2();
		V_9 = L_33;
		int32_t L_34 = V_9;
		V_8 = L_34;
		int32_t L_35 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)1)))
		{
			case 0:
			{
				goto IL_00d3;
			}
			case 1:
			{
				goto IL_00de;
			}
			case 2:
			{
				goto IL_00e9;
			}
			case 3:
			{
				goto IL_00f4;
			}
		}
	}
	{
		goto IL_0180;
	}

IL_00d3:
	{
		// tgtColor = Color.black;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_36;
		L_36 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		V_2 = L_36;
		// break;
		goto IL_018c;
	}

IL_00de:
	{
		// tgtColor = Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_37;
		L_37 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		V_2 = L_37;
		// break;
		goto IL_018c;
	}

IL_00e9:
	{
		// tgtColor = Color.clear;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_38;
		L_38 = Color_get_clear_m9F8076CEFE7B8119A9903212DCBF2BFED114E97F(/*hidden argument*/NULL);
		V_2 = L_38;
		// break;
		goto IL_018c;
	}

IL_00f4:
	{
		// int size = from != null ? from.height : to.height;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_39 = ___from0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_39, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0106;
		}
	}
	{
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_41 = ___to1;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_41);
		G_B27_0 = L_42;
		goto IL_010c;
	}

IL_0106:
	{
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_43 = ___from0;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_43);
		G_B27_0 = L_44;
	}

IL_010c:
	{
		V_10 = G_B27_0;
		// Texture defaultTexture = RuntimeUtilities.GetLutStrip(size);
		int32_t L_45 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_46;
		L_46 = RuntimeUtilities_GetLutStrip_m036B3B4D4A254F44036A937D2720F80C40A7A5A3(L_45, /*hidden argument*/NULL);
		V_11 = L_46;
		// if (from == null) from = defaultTexture;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_47 = ___from0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_47, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_12 = L_48;
		bool L_49 = V_12;
		if (!L_49)
		{
			goto IL_0128;
		}
	}
	{
		// if (from == null) from = defaultTexture;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_50 = V_11;
		___from0 = L_50;
	}

IL_0128:
	{
		// if (to == null) to = defaultTexture;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_51 = ___to1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_51, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_13 = L_52;
		bool L_53 = V_13;
		if (!L_53)
		{
			goto IL_0139;
		}
	}
	{
		// if (to == null) to = defaultTexture;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_54 = V_11;
		___to1 = L_54;
	}

IL_0139:
	{
		// if (from.width != to.width || from.height != to.height)
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_55 = ___from0;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_55);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_57 = ___to1;
		NullCheck(L_57);
		int32_t L_58;
		L_58 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_57);
		if ((!(((uint32_t)L_56) == ((uint32_t)L_58))))
		{
			goto IL_015a;
		}
	}
	{
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_59 = ___from0;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_59);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_61 = ___to1;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_61);
		G_B34_0 = ((((int32_t)((((int32_t)L_60) == ((int32_t)L_62))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_015b;
	}

IL_015a:
	{
		G_B34_0 = 1;
	}

IL_015b:
	{
		V_14 = (bool)G_B34_0;
		bool L_63 = V_14;
		if (!L_63)
		{
			goto IL_016b;
		}
	}
	{
		// value = null;
		((ParameterOverride_1_t728745CADEFE1DB4C2C14F6DD6EA53A447A763E4 *)__this)->set_value_1((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)NULL);
		// return;
		goto IL_01cc;
	}

IL_016b:
	{
		// value = TextureLerper.instance.Lerp(from, to, t);
		TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616 * L_64;
		L_64 = TextureLerper_get_instance_m0AB68B6199F15DE585DA84890EFFBEA18C0C9135(/*hidden argument*/NULL);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_65 = ___from0;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_66 = ___to1;
		float L_67 = ___t2;
		NullCheck(L_64);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_68;
		L_68 = TextureLerper_Lerp_mCA914BD184BAC500B67975AB1259C3CB53AFF517(L_64, L_65, L_66, L_67, /*hidden argument*/NULL);
		((ParameterOverride_1_t728745CADEFE1DB4C2C14F6DD6EA53A447A763E4 *)__this)->set_value_1(L_68);
		// return;
		goto IL_01cc;
	}

IL_0180:
	{
		// base.Interp(from, to, t);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_69 = ___from0;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_70 = ___to1;
		float L_71 = ___t2;
		ParameterOverride_1_Interp_m214BFB261A31899C890C2ABC74213D6D67A8F1DD(__this, L_69, L_70, L_71, /*hidden argument*/ParameterOverride_1_Interp_m214BFB261A31899C890C2ABC74213D6D67A8F1DD_RuntimeMethod_var);
		// return;
		goto IL_01cc;
	}

IL_018c:
	{
		// if (from == null)
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_72 = ___from0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_73;
		L_73 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_72, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_15 = L_73;
		bool L_74 = V_15;
		if (!L_74)
		{
			goto IL_01b6;
		}
	}
	{
		// value = TextureLerper.instance.Lerp(to, tgtColor, 1f - t);
		TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616 * L_75;
		L_75 = TextureLerper_get_instance_m0AB68B6199F15DE585DA84890EFFBEA18C0C9135(/*hidden argument*/NULL);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_76 = ___to1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_77 = V_2;
		float L_78 = ___t2;
		NullCheck(L_75);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_79;
		L_79 = TextureLerper_Lerp_mE50D3C8F764C051E06B7D02A7AA434BA89E948B6(L_75, L_76, L_77, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_78)), /*hidden argument*/NULL);
		((ParameterOverride_1_t728745CADEFE1DB4C2C14F6DD6EA53A447A763E4 *)__this)->set_value_1(L_79);
		goto IL_01cb;
	}

IL_01b6:
	{
		// value = TextureLerper.instance.Lerp(from, tgtColor, t);
		TextureLerper_tD5682726BB0EBB0A77820C182B35A6E04181A616 * L_80;
		L_80 = TextureLerper_get_instance_m0AB68B6199F15DE585DA84890EFFBEA18C0C9135(/*hidden argument*/NULL);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_81 = ___from0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_82 = V_2;
		float L_83 = ___t2;
		NullCheck(L_80);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_84;
		L_84 = TextureLerper_Lerp_mE50D3C8F764C051E06B7D02A7AA434BA89E948B6(L_80, L_81, L_82, L_83, /*hidden argument*/NULL);
		((ParameterOverride_1_t728745CADEFE1DB4C2C14F6DD6EA53A447A763E4 *)__this)->set_value_1(L_84);
	}

IL_01cb:
	{
	}

IL_01cc:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TextureParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureParameter__ctor_m126D706CA8F854F68EE6BC93B11862051D2DBAFC (TextureParameter_tC6A936F3D3C6DD5834DC7866D62E1BE3073BD8C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterOverride_1__ctor_m8589096CBAE30DB288B207FE7A753E5443138437_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TextureParameterDefault defaultState = TextureParameterDefault.Black;
		__this->set_defaultState_2(1);
		ParameterOverride_1__ctor_m8589096CBAE30DB288B207FE7A753E5443138437(__this, /*hidden argument*/ParameterOverride_1__ctor_m8589096CBAE30DB288B207FE7A753E5443138437_RuntimeMethod_var);
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
// System.Void UnityEngine.Rendering.PostProcessing.TonemapperParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TonemapperParameter__ctor_m757E9DE14ED2A9817B7D88D20C3BE84AE75BF11C (TonemapperParameter_t135C78E99EB670872D17A05A7CBF0F4E3F8A222B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterOverride_1__ctor_mC99912A74AB3FB44D567417D783F5E8EE7FAEC64_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParameterOverride_1__ctor_mC99912A74AB3FB44D567417D783F5E8EE7FAEC64(__this, /*hidden argument*/ParameterOverride_1__ctor_mC99912A74AB3FB44D567417D783F5E8EE7FAEC64_RuntimeMethod_var);
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
// System.Void UnityEngine.Rendering.PostProcessing.TrackballAttribute::.ctor(UnityEngine.Rendering.PostProcessing.TrackballAttribute/Mode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackballAttribute__ctor_mE412487172AF6AC6D86FEA377A46C31BD25CF043 (TrackballAttribute_t2195214A7FB5A05453A0C2661C29DE88B05333F0 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	{
		// public TrackballAttribute(Mode mode)
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// this.mode = mode;
		int32_t L_0 = ___mode0;
		__this->set_mode_0(L_0);
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
// System.Void UnityEngine.Rendering.PostProcessing.Vector2Parameter::Interp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Parameter_Interp_m7927995FFE395D14C63049AA319143C0F947A590 (Vector2Parameter_t0E1CE8C27130B36A75688B706DE0EACCE9DE41A3 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___from0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		// value.x = from.x + (to.x - from.x) * t;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_0 = ((ParameterOverride_1_tA1EC3D90C3A54AC1167AD63F5340CDECED8BDC9F *)__this)->get_address_of_value_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___from0;
		float L_2 = L_1.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___to1;
		float L_4 = L_3.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ___from0;
		float L_6 = L_5.get_x_0();
		float L_7 = ___t2;
		L_0->set_x_0(((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_4, (float)L_6)), (float)L_7)))));
		// value.y = from.y + (to.y - from.y) * t;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_8 = ((ParameterOverride_1_tA1EC3D90C3A54AC1167AD63F5340CDECED8BDC9F *)__this)->get_address_of_value_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = ___from0;
		float L_10 = L_9.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = ___to1;
		float L_12 = L_11.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = ___from0;
		float L_14 = L_13.get_y_1();
		float L_15 = ___t2;
		L_8->set_y_1(((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))));
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Rendering.PostProcessing.Vector2Parameter::op_Implicit(UnityEngine.Rendering.PostProcessing.Vector2Parameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2Parameter_op_Implicit_m76A0D44A92CA9662912652E9A5B9E74FD9FFFC11 (Vector2Parameter_t0E1CE8C27130B36A75688B706DE0EACCE9DE41A3 * ___prop0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return prop.value;
		Vector2Parameter_t0E1CE8C27130B36A75688B706DE0EACCE9DE41A3 * L_0 = ___prop0;
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ((ParameterOverride_1_tA1EC3D90C3A54AC1167AD63F5340CDECED8BDC9F *)L_0)->get_value_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Vector4 UnityEngine.Rendering.PostProcessing.Vector2Parameter::op_Implicit(UnityEngine.Rendering.PostProcessing.Vector2Parameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector2Parameter_op_Implicit_m416F6B3A8B23E7B1E5183EA9E6AB64AE4B70A377 (Vector2Parameter_t0E1CE8C27130B36A75688B706DE0EACCE9DE41A3 * ___prop0, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return prop.value;
		Vector2Parameter_t0E1CE8C27130B36A75688B706DE0EACCE9DE41A3 * L_0 = ___prop0;
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ((ParameterOverride_1_tA1EC3D90C3A54AC1167AD63F5340CDECED8BDC9F *)L_0)->get_value_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2;
		L_2 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.Vector2Parameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Parameter__ctor_m3FA2F5CBEAF9F462CE5AEFED865F4B87679ACDDE (Vector2Parameter_t0E1CE8C27130B36A75688B706DE0EACCE9DE41A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterOverride_1__ctor_mA0A58A2C544574167825FA95B25FFDD290BD85D3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParameterOverride_1__ctor_mA0A58A2C544574167825FA95B25FFDD290BD85D3(__this, /*hidden argument*/ParameterOverride_1__ctor_mA0A58A2C544574167825FA95B25FFDD290BD85D3_RuntimeMethod_var);
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
// System.Void UnityEngine.Rendering.PostProcessing.Vector3Parameter::Interp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Parameter_Interp_m9E4B92F63D7C69520B58D673C88B8FD961E317DD (Vector3Parameter_tCFF4B1C12CA0BED0A82E087C2AA66A175C987EFD * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		// value.x = from.x + (to.x - from.x) * t;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = ((ParameterOverride_1_t2A72895E2C56AB0AFB2436C4C8523C5553ED32F3 *)__this)->get_address_of_value_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___from0;
		float L_2 = L_1.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___to1;
		float L_4 = L_3.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___from0;
		float L_6 = L_5.get_x_2();
		float L_7 = ___t2;
		L_0->set_x_2(((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_4, (float)L_6)), (float)L_7)))));
		// value.y = from.y + (to.y - from.y) * t;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = ((ParameterOverride_1_t2A72895E2C56AB0AFB2436C4C8523C5553ED32F3 *)__this)->get_address_of_value_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___from0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___to1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___from0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		L_8->set_y_3(((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))));
		// value.z = from.z + (to.z - from.z) * t;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_16 = ((ParameterOverride_1_t2A72895E2C56AB0AFB2436C4C8523C5553ED32F3 *)__this)->get_address_of_value_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = ___from0;
		float L_18 = L_17.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = ___to1;
		float L_20 = L_19.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = ___from0;
		float L_22 = L_21.get_z_4();
		float L_23 = ___t2;
		L_16->set_z_4(((float)il2cpp_codegen_add((float)L_18, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_20, (float)L_22)), (float)L_23)))));
		// }
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Rendering.PostProcessing.Vector3Parameter::op_Implicit(UnityEngine.Rendering.PostProcessing.Vector3Parameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector3Parameter_op_Implicit_m7F266DC7AED71744FFA1053A75DDFE5429F70063 (Vector3Parameter_tCFF4B1C12CA0BED0A82E087C2AA66A175C987EFD * ___prop0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return prop.value;
		Vector3Parameter_tCFF4B1C12CA0BED0A82E087C2AA66A175C987EFD * L_0 = ___prop0;
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ((ParameterOverride_1_t2A72895E2C56AB0AFB2436C4C8523C5553ED32F3 *)L_0)->get_value_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Vector4 UnityEngine.Rendering.PostProcessing.Vector3Parameter::op_Implicit(UnityEngine.Rendering.PostProcessing.Vector3Parameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector3Parameter_op_Implicit_m747A41EC59166330DA13EB15CBCD5CEEE2D780F6 (Vector3Parameter_tCFF4B1C12CA0BED0A82E087C2AA66A175C987EFD * ___prop0, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return prop.value;
		Vector3Parameter_tCFF4B1C12CA0BED0A82E087C2AA66A175C987EFD * L_0 = ___prop0;
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ((ParameterOverride_1_t2A72895E2C56AB0AFB2436C4C8523C5553ED32F3 *)L_0)->get_value_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2;
		L_2 = Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.Vector3Parameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Parameter__ctor_m67636F3D860D14546BC29384143E2F84F3572B33 (Vector3Parameter_tCFF4B1C12CA0BED0A82E087C2AA66A175C987EFD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterOverride_1__ctor_mDF15F5A4C43E00F41BAD785C725A1DED7D76097A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParameterOverride_1__ctor_mDF15F5A4C43E00F41BAD785C725A1DED7D76097A(__this, /*hidden argument*/ParameterOverride_1__ctor_mDF15F5A4C43E00F41BAD785C725A1DED7D76097A_RuntimeMethod_var);
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
// System.Void UnityEngine.Rendering.PostProcessing.Vector4Parameter::Interp(UnityEngine.Vector4,UnityEngine.Vector4,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4Parameter_Interp_m1648D6BC6029B5B8147DF0BD4AA234EBA25A4D8E (Vector4Parameter_t1AFAD06AB301389B859FAFA51D2C3C7E066E1627 * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___from0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		// value.x = from.x + (to.x - from.x) * t;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * L_0 = ((ParameterOverride_1_tDC434805B157596FAACBAB390CC666791BAC0B01 *)__this)->get_address_of_value_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = ___from0;
		float L_2 = L_1.get_x_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3 = ___to1;
		float L_4 = L_3.get_x_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_5 = ___from0;
		float L_6 = L_5.get_x_1();
		float L_7 = ___t2;
		L_0->set_x_1(((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_4, (float)L_6)), (float)L_7)))));
		// value.y = from.y + (to.y - from.y) * t;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * L_8 = ((ParameterOverride_1_tDC434805B157596FAACBAB390CC666791BAC0B01 *)__this)->get_address_of_value_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_9 = ___from0;
		float L_10 = L_9.get_y_2();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_11 = ___to1;
		float L_12 = L_11.get_y_2();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_13 = ___from0;
		float L_14 = L_13.get_y_2();
		float L_15 = ___t2;
		L_8->set_y_2(((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))));
		// value.z = from.z + (to.z - from.z) * t;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * L_16 = ((ParameterOverride_1_tDC434805B157596FAACBAB390CC666791BAC0B01 *)__this)->get_address_of_value_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_17 = ___from0;
		float L_18 = L_17.get_z_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_19 = ___to1;
		float L_20 = L_19.get_z_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_21 = ___from0;
		float L_22 = L_21.get_z_3();
		float L_23 = ___t2;
		L_16->set_z_3(((float)il2cpp_codegen_add((float)L_18, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_20, (float)L_22)), (float)L_23)))));
		// value.w = from.w + (to.w - from.w) * t;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * L_24 = ((ParameterOverride_1_tDC434805B157596FAACBAB390CC666791BAC0B01 *)__this)->get_address_of_value_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_25 = ___from0;
		float L_26 = L_25.get_w_4();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_27 = ___to1;
		float L_28 = L_27.get_w_4();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_29 = ___from0;
		float L_30 = L_29.get_w_4();
		float L_31 = ___t2;
		L_24->set_w_4(((float)il2cpp_codegen_add((float)L_26, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_28, (float)L_30)), (float)L_31)))));
		// }
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Rendering.PostProcessing.Vector4Parameter::op_Implicit(UnityEngine.Rendering.PostProcessing.Vector4Parameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector4Parameter_op_Implicit_mA186885FA1D9F9377546C35DD5C695AB08F20F23 (Vector4Parameter_t1AFAD06AB301389B859FAFA51D2C3C7E066E1627 * ___prop0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return prop.value;
		Vector4Parameter_t1AFAD06AB301389B859FAFA51D2C3C7E066E1627 * L_0 = ___prop0;
		NullCheck(L_0);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = ((ParameterOverride_1_tDC434805B157596FAACBAB390CC666791BAC0B01 *)L_0)->get_value_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector4_op_Implicit_m3A59F157B9B8A3C2DD495B6F9B76F3C0D40BDFCC(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Vector3 UnityEngine.Rendering.PostProcessing.Vector4Parameter::op_Implicit(UnityEngine.Rendering.PostProcessing.Vector4Parameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector4Parameter_op_Implicit_mCEDA69AFFE136DBC59FED8EAF4ABAB4969A0C850 (Vector4Parameter_t1AFAD06AB301389B859FAFA51D2C3C7E066E1627 * ___prop0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return prop.value;
		Vector4Parameter_t1AFAD06AB301389B859FAFA51D2C3C7E066E1627 * L_0 = ___prop0;
		NullCheck(L_0);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = ((ParameterOverride_1_tDC434805B157596FAACBAB390CC666791BAC0B01 *)L_0)->get_value_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.Vector4Parameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4Parameter__ctor_m7DC5D037D038B31556F05CA7B809716041F09A95 (Vector4Parameter_t1AFAD06AB301389B859FAFA51D2C3C7E066E1627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterOverride_1__ctor_m8677DD09A9CA61F329E1B257381A7C128B30EC8B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParameterOverride_1__ctor_m8677DD09A9CA61F329E1B257381A7C128B30EC8B(__this, /*hidden argument*/ParameterOverride_1__ctor_m8677DD09A9CA61F329E1B257381A7C128B30EC8B_RuntimeMethod_var);
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
// System.Void UnityEngine.Rendering.PostProcessing.VectorscopeMonitor::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorscopeMonitor_OnDisable_mF2F1FBC4F10592E41DABB18E6F94065C4DDFE1FB (VectorscopeMonitor_t5E5341810F7316F73442ADBEE0C5EBC1E282DE05 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// base.OnDisable();
		Monitor_OnDisable_m14F2DEE3F862B0B00809D578BA7FE816BE712E64(__this, /*hidden argument*/NULL);
		// if (m_Data != null)
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_0 = __this->get_m_Data_4();
		V_0 = (bool)((!(((RuntimeObject*)(ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// m_Data.Release();
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_2 = __this->get_m_Data_4();
		NullCheck(L_2);
		ComputeBuffer_Release_m7F1D518D1542CD4B961B17E3A44376FA78E977EB(L_2, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// m_Data = null;
		__this->set_m_Data_4((ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 *)NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.VectorscopeMonitor::NeedsHalfRes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VectorscopeMonitor_NeedsHalfRes_mEDAA987D057135D2700AA5F339DCCA66E5E403E3 (VectorscopeMonitor_t5E5341810F7316F73442ADBEE0C5EBC1E282DE05 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return true;
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.VectorscopeMonitor::ShaderResourcesAvailable(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VectorscopeMonitor_ShaderResourcesAvailable_mC6C2F43688127875D767E9121F1ACAACBF2F416A (VectorscopeMonitor_t5E5341810F7316F73442ADBEE0C5EBC1E282DE05 * __this, PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return context.resources.computeShaders.vectorscope;
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_0 = ___context0;
		NullCheck(L_0);
		PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC * L_1;
		L_1 = PostProcessRenderContext_get_resources_mEC353AFE49A4A72D561FCB8758E364578AB2B9D7_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B * L_2 = L_1->get_computeShaders_8();
		NullCheck(L_2);
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_3 = L_2->get_vectorscope_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.VectorscopeMonitor::Render(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorscopeMonitor_Render_m56F2F09E2EEFA0E8717AAA24AB66C36FCEBD7124 (VectorscopeMonitor_t5E5341810F7316F73442ADBEE0C5EBC1E282DE05 * __this, PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EE529A23CEA5E091FCABE6AF77280E1397DD04F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B388FFFC4B05A96EF5FD1B6F88AEEDDF119B105);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65DA0CA6246AE2288BFBD3224C0B6589F82798AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EB7B88F545A38D1C86B524BB58BBA3994233C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD982DD4496EE1EAEEDD5B4DA7B2EB057EEC66E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF873D6748545B7516CD56A7A617453AEC82E7C8D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * V_1 = NULL;
	CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * V_2 = NULL;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE  V_8;
	memset((&V_8), 0, sizeof(V_8));
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	float G_B6_2 = 0.0f;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * G_B6_3 = NULL;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	float G_B5_2 = 0.0f;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * G_B5_3 = NULL;
	int32_t G_B7_0 = 0;
	float G_B7_1 = 0.0f;
	float G_B7_2 = 0.0f;
	float G_B7_3 = 0.0f;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * G_B7_4 = NULL;
	{
		// CheckOutput(size, size);
		int32_t L_0 = __this->get_size_2();
		int32_t L_1 = __this->get_size_2();
		Monitor_CheckOutput_m3BB128BD30F3AB15E6DB71D68B4EBB7F656DCE71(__this, L_0, L_1, /*hidden argument*/NULL);
		// exposure = Mathf.Max(0f, exposure);
		float L_2 = __this->get_exposure_3();
		float L_3;
		L_3 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((0.0f), L_2, /*hidden argument*/NULL);
		__this->set_exposure_3(L_3);
		// int count = size * size;
		int32_t L_4 = __this->get_size_2();
		int32_t L_5 = __this->get_size_2();
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)L_5));
		// if (m_Data == null)
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_6 = __this->get_m_Data_4();
		V_6 = (bool)((((RuntimeObject*)(ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 *)L_6) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_7 = V_6;
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		// m_Data = new ComputeBuffer(count, sizeof(uint));
		int32_t L_8 = V_0;
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_9 = (ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 *)il2cpp_codegen_object_new(ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_m66E68E9066197B06CF35FDDAFAFDC8C1DECC5436(L_9, L_8, 4, /*hidden argument*/NULL);
		__this->set_m_Data_4(L_9);
		goto IL_0088;
	}

IL_0056:
	{
		// else if (m_Data.count != count)
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_10 = __this->get_m_Data_4();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = ComputeBuffer_get_count_m93FD58E4F51DDBC9B520A4A9E28B1A04F63C4827(L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_0;
		V_7 = (bool)((((int32_t)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_7;
		if (!L_13)
		{
			goto IL_0088;
		}
	}
	{
		// m_Data.Release();
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_14 = __this->get_m_Data_4();
		NullCheck(L_14);
		ComputeBuffer_Release_m7F1D518D1542CD4B961B17E3A44376FA78E977EB(L_14, /*hidden argument*/NULL);
		// m_Data = new ComputeBuffer(count, sizeof(uint));
		int32_t L_15 = V_0;
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_16 = (ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 *)il2cpp_codegen_object_new(ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_m66E68E9066197B06CF35FDDAFAFDC8C1DECC5436(L_16, L_15, 4, /*hidden argument*/NULL);
		__this->set_m_Data_4(L_16);
	}

IL_0088:
	{
		// var compute = context.resources.computeShaders.vectorscope;
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_17 = ___context0;
		NullCheck(L_17);
		PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC * L_18;
		L_18 = PostProcessRenderContext_get_resources_mEC353AFE49A4A72D561FCB8758E364578AB2B9D7_inline(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B * L_19 = L_18->get_computeShaders_8();
		NullCheck(L_19);
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_20 = L_19->get_vectorscope_6();
		V_1 = L_20;
		// var cmd = context.command;
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_21 = ___context0;
		NullCheck(L_21);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_22;
		L_22 = PostProcessRenderContext_get_command_mE54DFA2523219208C87BA95ECD2D766889DACA71_inline(L_21, /*hidden argument*/NULL);
		V_2 = L_22;
		// cmd.BeginSample("Vectorscope");
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_23 = V_2;
		NullCheck(L_23);
		CommandBuffer_BeginSample_mA6CADFE0049E601CE0E5FE8CFF23820AE98514EA(L_23, _stringLiteral6EB7B88F545A38D1C86B524BB58BBA3994233C05, /*hidden argument*/NULL);
		// var parameters = new Vector4(
		//     context.width / 2,
		//     context.height / 2,
		//     size,
		//     RuntimeUtilities.isLinearColorSpace ? 1 : 0
		// );
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_24 = ___context0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = PostProcessRenderContext_get_width_m4965F17411CA0E2AEC993B02D9CEEB0E258E8A74_inline(L_24, /*hidden argument*/NULL);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_26 = ___context0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = PostProcessRenderContext_get_height_m3F500068E9E598DA75850D864AEC83708B1D9BD4_inline(L_26, /*hidden argument*/NULL);
		int32_t L_28 = __this->get_size_2();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = RuntimeUtilities_get_isLinearColorSpace_m1D106C8BE629AEB323D34C96816B2518699F2578(/*hidden argument*/NULL);
		G_B5_0 = ((float)((float)L_28));
		G_B5_1 = ((float)((float)((int32_t)((int32_t)L_27/(int32_t)2))));
		G_B5_2 = ((float)((float)((int32_t)((int32_t)L_25/(int32_t)2))));
		G_B5_3 = (&V_3);
		if (L_29)
		{
			G_B6_0 = ((float)((float)L_28));
			G_B6_1 = ((float)((float)((int32_t)((int32_t)L_27/(int32_t)2))));
			G_B6_2 = ((float)((float)((int32_t)((int32_t)L_25/(int32_t)2))));
			G_B6_3 = (&V_3);
			goto IL_00d1;
		}
	}
	{
		G_B7_0 = 0;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		G_B7_4 = G_B5_3;
		goto IL_00d2;
	}

IL_00d1:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		G_B7_4 = G_B6_3;
	}

IL_00d2:
	{
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)G_B7_4, G_B7_3, G_B7_2, G_B7_1, ((float)((float)G_B7_0)), /*hidden argument*/NULL);
		// int kernel = compute.FindKernel("KVectorscopeClear");
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_30 = V_1;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = ComputeShader_FindKernel_mCA2683905A5DAB573D50389E2B24B48B18CD53D0(L_30, _stringLiteral3B388FFFC4B05A96EF5FD1B6F88AEEDDF119B105, /*hidden argument*/NULL);
		V_4 = L_31;
		// cmd.SetComputeBufferParam(compute, kernel, "_VectorscopeBuffer", m_Data);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_32 = V_2;
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_33 = V_1;
		int32_t L_34 = V_4;
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_35 = __this->get_m_Data_4();
		NullCheck(L_32);
		CommandBuffer_SetComputeBufferParam_mF62034747B7C0EDDAA810F917969A5CA308705F5(L_32, L_33, L_34, _stringLiteral65DA0CA6246AE2288BFBD3224C0B6589F82798AC, L_35, /*hidden argument*/NULL);
		// cmd.SetComputeVectorParam(compute, "_Params", parameters);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_36 = V_2;
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_37 = V_1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_38 = V_3;
		NullCheck(L_36);
		CommandBuffer_SetComputeVectorParam_m6FD77F6D465976FBCBB64D8EEC1CC2903A254319(L_36, L_37, _stringLiteralF873D6748545B7516CD56A7A617453AEC82E7C8D, L_38, /*hidden argument*/NULL);
		// cmd.DispatchCompute(compute, kernel,
		//     Mathf.CeilToInt(size / (float)k_ThreadGroupSizeX),
		//     Mathf.CeilToInt(size / (float)k_ThreadGroupSizeY),
		//     1
		// );
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_39 = V_2;
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_40 = V_1;
		int32_t L_41 = V_4;
		int32_t L_42 = __this->get_size_2();
		int32_t L_43;
		L_43 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)((float)((float)((float)L_42))/(float)(16.0f))), /*hidden argument*/NULL);
		int32_t L_44 = __this->get_size_2();
		int32_t L_45;
		L_45 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)((float)((float)((float)L_44))/(float)(16.0f))), /*hidden argument*/NULL);
		NullCheck(L_39);
		CommandBuffer_DispatchCompute_m2EB0711D3F10F874D487D081F169FA0D8996DC64(L_39, L_40, L_41, L_43, L_45, 1, /*hidden argument*/NULL);
		// kernel = compute.FindKernel("KVectorscopeGather");
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_46 = V_1;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = ComputeShader_FindKernel_mCA2683905A5DAB573D50389E2B24B48B18CD53D0(L_46, _stringLiteral0EE529A23CEA5E091FCABE6AF77280E1397DD04F, /*hidden argument*/NULL);
		V_4 = L_47;
		// cmd.SetComputeBufferParam(compute, kernel, "_VectorscopeBuffer", m_Data);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_48 = V_2;
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_49 = V_1;
		int32_t L_50 = V_4;
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_51 = __this->get_m_Data_4();
		NullCheck(L_48);
		CommandBuffer_SetComputeBufferParam_mF62034747B7C0EDDAA810F917969A5CA308705F5(L_48, L_49, L_50, _stringLiteral65DA0CA6246AE2288BFBD3224C0B6589F82798AC, L_51, /*hidden argument*/NULL);
		// cmd.SetComputeTextureParam(compute, kernel, "_Source", ShaderIDs.HalfResFinalCopy);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_52 = V_2;
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_53 = V_1;
		int32_t L_54 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var);
		int32_t L_55 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_HalfResFinalCopy_121();
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_56;
		L_56 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(L_55, /*hidden argument*/NULL);
		NullCheck(L_52);
		CommandBuffer_SetComputeTextureParam_m478EC6F4970EF8C3C0645FEB5B17A59C9299829B(L_52, L_53, L_54, _stringLiteralD982DD4496EE1EAEEDD5B4DA7B2EB057EEC66E1D, L_56, /*hidden argument*/NULL);
		// cmd.DispatchCompute(compute, kernel,
		//     Mathf.CeilToInt(parameters.x / k_ThreadGroupSizeX),
		//     Mathf.CeilToInt(parameters.y / k_ThreadGroupSizeY),
		//     1
		// );
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_57 = V_2;
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_58 = V_1;
		int32_t L_59 = V_4;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_60 = V_3;
		float L_61 = L_60.get_x_1();
		int32_t L_62;
		L_62 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)((float)L_61/(float)(16.0f))), /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_63 = V_3;
		float L_64 = L_63.get_y_2();
		int32_t L_65;
		L_65 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)((float)L_64/(float)(16.0f))), /*hidden argument*/NULL);
		NullCheck(L_57);
		CommandBuffer_DispatchCompute_m2EB0711D3F10F874D487D081F169FA0D8996DC64(L_57, L_58, L_59, L_62, L_65, 1, /*hidden argument*/NULL);
		// var sheet = context.propertySheets.Get(context.resources.shaders.vectorscope);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_66 = ___context0;
		NullCheck(L_66);
		PropertySheetFactory_t2D2278105A154ED6036D5BE72D09359A5FB94835 * L_67;
		L_67 = PostProcessRenderContext_get_propertySheets_mE1135E07BE4F59354198DF05198E64CAF2E41D5C_inline(L_66, /*hidden argument*/NULL);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_68 = ___context0;
		NullCheck(L_68);
		PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC * L_69;
		L_69 = PostProcessRenderContext_get_resources_mEC353AFE49A4A72D561FCB8758E364578AB2B9D7_inline(L_68, /*hidden argument*/NULL);
		NullCheck(L_69);
		Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2 * L_70 = L_69->get_shaders_7();
		NullCheck(L_70);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_71 = L_70->get_vectorscope_18();
		NullCheck(L_67);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_72;
		L_72 = PropertySheetFactory_Get_mE4CC267B0EB28F0892A426B67015A309F2540CBF(L_67, L_71, /*hidden argument*/NULL);
		V_5 = L_72;
		// sheet.properties.SetVector(ShaderIDs.Params, new Vector4(size, size, exposure, 0f));
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_73 = V_5;
		NullCheck(L_73);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_74;
		L_74 = PropertySheet_get_properties_m3AB962E1C6A0C44D98E16AFBB73B40BA5E21B504_inline(L_73, /*hidden argument*/NULL);
		int32_t L_75 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_Params_65();
		int32_t L_76 = __this->get_size_2();
		int32_t L_77 = __this->get_size_2();
		float L_78 = __this->get_exposure_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_79;
		memset((&L_79), 0, sizeof(L_79));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_79), ((float)((float)L_76)), ((float)((float)L_77)), L_78, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_74);
		MaterialPropertyBlock_SetVector_m39DE61298C4C95829529B498130844A591621E2F(L_74, L_75, L_79, /*hidden argument*/NULL);
		// sheet.properties.SetBuffer(ShaderIDs.VectorscopeBuffer, m_Data);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_80 = V_5;
		NullCheck(L_80);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_81;
		L_81 = PropertySheet_get_properties_m3AB962E1C6A0C44D98E16AFBB73B40BA5E21B504_inline(L_80, /*hidden argument*/NULL);
		int32_t L_82 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_VectorscopeBuffer_124();
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_83 = __this->get_m_Data_4();
		NullCheck(L_81);
		MaterialPropertyBlock_SetBuffer_mA0802C6F378E9565224ECC00120180DF18691271(L_81, L_82, L_83, /*hidden argument*/NULL);
		// cmd.BlitFullscreenTriangle(BuiltinRenderTextureType.None, output, sheet, 0);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_84 = V_2;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_85;
		L_85 = RenderTargetIdentifier_op_Implicit_mB7B58C1D295E2DAE3C76874D030D4878A825E359(0, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_86;
		L_86 = Monitor_get_output_m7CEEB7508AD1B405744EA32D5FB767644FD2776D_inline(__this, /*hidden argument*/NULL);
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_87;
		L_87 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_86, /*hidden argument*/NULL);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_88 = V_5;
		il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE ));
		Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE  L_89 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		RuntimeUtilities_BlitFullscreenTriangle_mABC8DFC7F13C86175696C407ABA469F66B98128E(L_84, L_85, L_87, L_88, 0, (bool)0, L_89, /*hidden argument*/NULL);
		// cmd.EndSample("Vectorscope");
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_90 = V_2;
		NullCheck(L_90);
		CommandBuffer_EndSample_mB852BF4B83918656E93C9C327A20E163EC910A66(L_90, _stringLiteral6EB7B88F545A38D1C86B524BB58BBA3994233C05, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.VectorscopeMonitor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorscopeMonitor__ctor_m3FF3FEE834FF5E9C836C047075CF9CE7A4644669 (VectorscopeMonitor_t5E5341810F7316F73442ADBEE0C5EBC1E282DE05 * __this, const RuntimeMethod* method)
{
	{
		// public int size = 256;
		__this->set_size_2(((int32_t)256));
		// public float exposure = 0.12f;
		__this->set_exposure_3((0.119999997f));
		Monitor__ctor_mE42FA0D19C9F80DE341A10BC7A383C667D2103C2(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.Rendering.PostProcessing.Vignette::IsEnabledAndSupported(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vignette_IsEnabledAndSupported_m7A340C82967FA38016983E5F3239E93DE9C2F0F9 (Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139 * __this, PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// return enabled.value
		//     && ((mode.value == VignetteMode.Classic && intensity.value > 0f)
		//     ||  (mode.value == VignetteMode.Masked && opacity.value > 0f && mask.value != null));
		BoolParameter_t4EDC330A9E3F5830FCE384CE1FF707D3276EBF80 * L_0 = ((PostProcessEffectSettings_t2F43C0693DFF9BD09B921BB6278EC086A6F817F0 *)__this)->get_enabled_5();
		NullCheck(L_0);
		bool L_1 = ((ParameterOverride_1_t44F5A562A85AD213D94BE9A0DF3DC87C847C3EDC *)L_0)->get_value_1();
		if (!L_1)
		{
			goto IL_0066;
		}
	}
	{
		VignetteModeParameter_tA57BF7F5798A90AE3DFE38CF80A85E931F3DD613 * L_2 = __this->get_mode_7();
		NullCheck(L_2);
		int32_t L_3 = ((ParameterOverride_1_tBB825297D5F1093447C082888FB4560FBA8044E8 *)L_2)->get_value_1();
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 * L_4 = __this->get_intensity_10();
		NullCheck(L_4);
		float L_5 = ((ParameterOverride_1_tE564C5FA9AEBC9DB9DEB9AA8668AB1C53698D7C1 *)L_4)->get_value_1();
		if ((((float)L_5) > ((float)(0.0f))))
		{
			goto IL_0063;
		}
	}

IL_002d:
	{
		VignetteModeParameter_tA57BF7F5798A90AE3DFE38CF80A85E931F3DD613 * L_6 = __this->get_mode_7();
		NullCheck(L_6);
		int32_t L_7 = ((ParameterOverride_1_tBB825297D5F1093447C082888FB4560FBA8044E8 *)L_6)->get_value_1();
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0060;
		}
	}
	{
		FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 * L_8 = __this->get_opacity_15();
		NullCheck(L_8);
		float L_9 = ((ParameterOverride_1_tE564C5FA9AEBC9DB9DEB9AA8668AB1C53698D7C1 *)L_8)->get_value_1();
		if ((!(((float)L_9) > ((float)(0.0f)))))
		{
			goto IL_0060;
		}
	}
	{
		TextureParameter_tC6A936F3D3C6DD5834DC7866D62E1BE3073BD8C2 * L_10 = __this->get_mask_14();
		NullCheck(L_10);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_11 = ((ParameterOverride_1_t728745CADEFE1DB4C2C14F6DD6EA53A447A763E4 *)L_10)->get_value_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0061;
	}

IL_0060:
	{
		G_B7_0 = 0;
	}

IL_0061:
	{
		G_B9_0 = G_B7_0;
		goto IL_0064;
	}

IL_0063:
	{
		G_B9_0 = 1;
	}

IL_0064:
	{
		G_B11_0 = G_B9_0;
		goto IL_0067;
	}

IL_0066:
	{
		G_B11_0 = 0;
	}

IL_0067:
	{
		V_0 = (bool)G_B11_0;
		goto IL_006a;
	}

IL_006a:
	{
		// }
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.Vignette::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vignette__ctor_m9242C87DA8620C4BACE46BA166A9C48ACF1B22E2 (Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoolParameter_t4EDC330A9E3F5830FCE384CE1FF707D3276EBF80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorParameter_t2C43807B2FABC978D5B12345759389816D9CA7C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureParameter_tC6A936F3D3C6DD5834DC7866D62E1BE3073BD8C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Parameter_t0E1CE8C27130B36A75688B706DE0EACCE9DE41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VignetteModeParameter_tA57BF7F5798A90AE3DFE38CF80A85E931F3DD613_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VignetteModeParameter mode = new VignetteModeParameter { value = VignetteMode.Classic };
		VignetteModeParameter_tA57BF7F5798A90AE3DFE38CF80A85E931F3DD613 * L_0 = (VignetteModeParameter_tA57BF7F5798A90AE3DFE38CF80A85E931F3DD613 *)il2cpp_codegen_object_new(VignetteModeParameter_tA57BF7F5798A90AE3DFE38CF80A85E931F3DD613_il2cpp_TypeInfo_var);
		VignetteModeParameter__ctor_mC6796A35EABF529ECE1B9EA6691490DB2EA20DDF(L_0, /*hidden argument*/NULL);
		VignetteModeParameter_tA57BF7F5798A90AE3DFE38CF80A85E931F3DD613 * L_1 = L_0;
		NullCheck(L_1);
		((ParameterOverride_1_tBB825297D5F1093447C082888FB4560FBA8044E8 *)L_1)->set_value_1(0);
		__this->set_mode_7(L_1);
		// public ColorParameter color = new ColorParameter { value = new Color(0f, 0f, 0f, 1f) };
		ColorParameter_t2C43807B2FABC978D5B12345759389816D9CA7C5 * L_2 = (ColorParameter_t2C43807B2FABC978D5B12345759389816D9CA7C5 *)il2cpp_codegen_object_new(ColorParameter_t2C43807B2FABC978D5B12345759389816D9CA7C5_il2cpp_TypeInfo_var);
		ColorParameter__ctor_m0EFA9DD0C4820F5834ACD00E9FDCBFB953624834(L_2, /*hidden argument*/NULL);
		ColorParameter_t2C43807B2FABC978D5B12345759389816D9CA7C5 * L_3 = L_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_4), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		((ParameterOverride_1_t694D598380408B6C9B381BE752E69EEBE4FE4EED *)L_3)->set_value_1(L_4);
		__this->set_color_8(L_3);
		// public Vector2Parameter center = new Vector2Parameter { value = new Vector2(0.5f, 0.5f) };
		Vector2Parameter_t0E1CE8C27130B36A75688B706DE0EACCE9DE41A3 * L_5 = (Vector2Parameter_t0E1CE8C27130B36A75688B706DE0EACCE9DE41A3 *)il2cpp_codegen_object_new(Vector2Parameter_t0E1CE8C27130B36A75688B706DE0EACCE9DE41A3_il2cpp_TypeInfo_var);
		Vector2Parameter__ctor_m3FA2F5CBEAF9F462CE5AEFED865F4B87679ACDDE(L_5, /*hidden argument*/NULL);
		Vector2Parameter_t0E1CE8C27130B36A75688B706DE0EACCE9DE41A3 * L_6 = L_5;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_7), (0.5f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_6);
		((ParameterOverride_1_tA1EC3D90C3A54AC1167AD63F5340CDECED8BDC9F *)L_6)->set_value_1(L_7);
		__this->set_center_9(L_6);
		// public FloatParameter intensity = new FloatParameter { value = 0f };
		FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 * L_8 = (FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 *)il2cpp_codegen_object_new(FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0_il2cpp_TypeInfo_var);
		FloatParameter__ctor_m9D086D769C6C1B3596C4A38B5ED8C7B401628650(L_8, /*hidden argument*/NULL);
		FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 * L_9 = L_8;
		NullCheck(L_9);
		((ParameterOverride_1_tE564C5FA9AEBC9DB9DEB9AA8668AB1C53698D7C1 *)L_9)->set_value_1((0.0f));
		__this->set_intensity_10(L_9);
		// public FloatParameter smoothness = new FloatParameter { value = 0.2f };
		FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 * L_10 = (FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 *)il2cpp_codegen_object_new(FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0_il2cpp_TypeInfo_var);
		FloatParameter__ctor_m9D086D769C6C1B3596C4A38B5ED8C7B401628650(L_10, /*hidden argument*/NULL);
		FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 * L_11 = L_10;
		NullCheck(L_11);
		((ParameterOverride_1_tE564C5FA9AEBC9DB9DEB9AA8668AB1C53698D7C1 *)L_11)->set_value_1((0.200000003f));
		__this->set_smoothness_11(L_11);
		// public FloatParameter roundness = new FloatParameter { value = 1f };
		FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 * L_12 = (FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 *)il2cpp_codegen_object_new(FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0_il2cpp_TypeInfo_var);
		FloatParameter__ctor_m9D086D769C6C1B3596C4A38B5ED8C7B401628650(L_12, /*hidden argument*/NULL);
		FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 * L_13 = L_12;
		NullCheck(L_13);
		((ParameterOverride_1_tE564C5FA9AEBC9DB9DEB9AA8668AB1C53698D7C1 *)L_13)->set_value_1((1.0f));
		__this->set_roundness_12(L_13);
		// public BoolParameter rounded = new BoolParameter { value = false };
		BoolParameter_t4EDC330A9E3F5830FCE384CE1FF707D3276EBF80 * L_14 = (BoolParameter_t4EDC330A9E3F5830FCE384CE1FF707D3276EBF80 *)il2cpp_codegen_object_new(BoolParameter_t4EDC330A9E3F5830FCE384CE1FF707D3276EBF80_il2cpp_TypeInfo_var);
		BoolParameter__ctor_m04A36F46605F50DC4BB82080139D88760BC19284(L_14, /*hidden argument*/NULL);
		BoolParameter_t4EDC330A9E3F5830FCE384CE1FF707D3276EBF80 * L_15 = L_14;
		NullCheck(L_15);
		((ParameterOverride_1_t44F5A562A85AD213D94BE9A0DF3DC87C847C3EDC *)L_15)->set_value_1((bool)0);
		__this->set_rounded_13(L_15);
		// public TextureParameter mask = new TextureParameter { value = null };
		TextureParameter_tC6A936F3D3C6DD5834DC7866D62E1BE3073BD8C2 * L_16 = (TextureParameter_tC6A936F3D3C6DD5834DC7866D62E1BE3073BD8C2 *)il2cpp_codegen_object_new(TextureParameter_tC6A936F3D3C6DD5834DC7866D62E1BE3073BD8C2_il2cpp_TypeInfo_var);
		TextureParameter__ctor_m126D706CA8F854F68EE6BC93B11862051D2DBAFC(L_16, /*hidden argument*/NULL);
		TextureParameter_tC6A936F3D3C6DD5834DC7866D62E1BE3073BD8C2 * L_17 = L_16;
		NullCheck(L_17);
		((ParameterOverride_1_t728745CADEFE1DB4C2C14F6DD6EA53A447A763E4 *)L_17)->set_value_1((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)NULL);
		__this->set_mask_14(L_17);
		// public FloatParameter opacity = new FloatParameter { value = 1f };
		FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 * L_18 = (FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 *)il2cpp_codegen_object_new(FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0_il2cpp_TypeInfo_var);
		FloatParameter__ctor_m9D086D769C6C1B3596C4A38B5ED8C7B401628650(L_18, /*hidden argument*/NULL);
		FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 * L_19 = L_18;
		NullCheck(L_19);
		((ParameterOverride_1_tE564C5FA9AEBC9DB9DEB9AA8668AB1C53698D7C1 *)L_19)->set_value_1((1.0f));
		__this->set_opacity_15(L_19);
		PostProcessEffectSettings__ctor_m60531067359283C000461ED8A1FCF58FC1C4D0EB(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Rendering.PostProcessing.VignetteModeParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VignetteModeParameter__ctor_mC6796A35EABF529ECE1B9EA6691490DB2EA20DDF (VignetteModeParameter_tA57BF7F5798A90AE3DFE38CF80A85E931F3DD613 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterOverride_1__ctor_m5806011A48A7796E82CA46EDF9236CB237F3FE04_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParameterOverride_1__ctor_m5806011A48A7796E82CA46EDF9236CB237F3FE04(__this, /*hidden argument*/ParameterOverride_1__ctor_m5806011A48A7796E82CA46EDF9236CB237F3FE04_RuntimeMethod_var);
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
// System.Void UnityEngine.Rendering.PostProcessing.VignetteRenderer::Render(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VignetteRenderer_Render_mB651EE8183D17273A8A72093B2A12107A2B3B578 (VignetteRenderer_t4EE592DF8A04229EB766765AA02964EFF4DD25EE * __this, PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterOverride_1_op_Implicit_m3421453A2FC1E622746189430AFEB71CA7F399AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PostProcessEffectRenderer_1_get_settings_mC6D18F55EDC49EA96938682C01562885A7012771_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral617218EA8015175B48682B062B85B2CD9DEFB5CF);
		s_Il2CppMethodInitialized = true;
	}
	PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * V_0 = NULL;
	bool V_1 = false;
	float V_2 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	float G_B3_2 = 0.0f;
	int32_t G_B3_3 = 0;
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * G_B3_4 = NULL;
	float G_B2_0 = 0.0f;
	float G_B2_1 = 0.0f;
	float G_B2_2 = 0.0f;
	int32_t G_B2_3 = 0;
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * G_B2_4 = NULL;
	float G_B4_0 = 0.0f;
	float G_B4_1 = 0.0f;
	float G_B4_2 = 0.0f;
	float G_B4_3 = 0.0f;
	int32_t G_B4_4 = 0;
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * G_B4_5 = NULL;
	{
		// var sheet = context.uberSheet;
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_0 = ___context0;
		NullCheck(L_0);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_1 = L_0->get_uberSheet_21();
		V_0 = L_1;
		// sheet.EnableKeyword("VIGNETTE");
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_2 = V_0;
		NullCheck(L_2);
		PropertySheet_EnableKeyword_m8689E0BDBEF8AF049C3764DBE9CDDF1EF6A8E753(L_2, _stringLiteral617218EA8015175B48682B062B85B2CD9DEFB5CF, /*hidden argument*/NULL);
		// sheet.properties.SetColor(ShaderIDs.Vignette_Color, settings.color.value);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_3 = V_0;
		NullCheck(L_3);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_4;
		L_4 = PropertySheet_get_properties_m3AB962E1C6A0C44D98E16AFBB73B40BA5E21B504_inline(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var);
		int32_t L_5 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_Vignette_Color_103();
		Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139 * L_6;
		L_6 = PostProcessEffectRenderer_1_get_settings_mC6D18F55EDC49EA96938682C01562885A7012771_inline(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_mC6D18F55EDC49EA96938682C01562885A7012771_RuntimeMethod_var);
		NullCheck(L_6);
		ColorParameter_t2C43807B2FABC978D5B12345759389816D9CA7C5 * L_7 = L_6->get_color_8();
		NullCheck(L_7);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8 = ((ParameterOverride_1_t694D598380408B6C9B381BE752E69EEBE4FE4EED *)L_7)->get_value_1();
		NullCheck(L_4);
		MaterialPropertyBlock_SetColor_mF3C09C80572DB6D21B813EAEB04AA3A49A0DC496(L_4, L_5, L_8, /*hidden argument*/NULL);
		// if (settings.mode == VignetteMode.Classic)
		Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139 * L_9;
		L_9 = PostProcessEffectRenderer_1_get_settings_mC6D18F55EDC49EA96938682C01562885A7012771_inline(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_mC6D18F55EDC49EA96938682C01562885A7012771_RuntimeMethod_var);
		NullCheck(L_9);
		VignetteModeParameter_tA57BF7F5798A90AE3DFE38CF80A85E931F3DD613 * L_10 = L_9->get_mode_7();
		int32_t L_11;
		L_11 = ParameterOverride_1_op_Implicit_m3421453A2FC1E622746189430AFEB71CA7F399AB(L_10, /*hidden argument*/ParameterOverride_1_op_Implicit_m3421453A2FC1E622746189430AFEB71CA7F399AB_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_011e;
		}
	}
	{
		// sheet.properties.SetFloat(ShaderIDs.Vignette_Mode, 0f);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_13 = V_0;
		NullCheck(L_13);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_14;
		L_14 = PropertySheet_get_properties_m3AB962E1C6A0C44D98E16AFBB73B40BA5E21B504_inline(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var);
		int32_t L_15 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_Vignette_Mode_108();
		NullCheck(L_14);
		MaterialPropertyBlock_SetFloat_mD2F1653CEDB22B1A3EE844E353CF125A607AEDEC(L_14, L_15, (0.0f), /*hidden argument*/NULL);
		// sheet.properties.SetVector(ShaderIDs.Vignette_Center, settings.center.value);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_16 = V_0;
		NullCheck(L_16);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_17;
		L_17 = PropertySheet_get_properties_m3AB962E1C6A0C44D98E16AFBB73B40BA5E21B504_inline(L_16, /*hidden argument*/NULL);
		int32_t L_18 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_Vignette_Center_104();
		Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139 * L_19;
		L_19 = PostProcessEffectRenderer_1_get_settings_mC6D18F55EDC49EA96938682C01562885A7012771_inline(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_mC6D18F55EDC49EA96938682C01562885A7012771_RuntimeMethod_var);
		NullCheck(L_19);
		Vector2Parameter_t0E1CE8C27130B36A75688B706DE0EACCE9DE41A3 * L_20 = L_19->get_center_9();
		NullCheck(L_20);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21 = ((ParameterOverride_1_tA1EC3D90C3A54AC1167AD63F5340CDECED8BDC9F *)L_20)->get_value_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_22;
		L_22 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504(L_21, /*hidden argument*/NULL);
		NullCheck(L_17);
		MaterialPropertyBlock_SetVector_m39DE61298C4C95829529B498130844A591621E2F(L_17, L_18, L_22, /*hidden argument*/NULL);
		// float roundness = (1f - settings.roundness.value) * 6f + settings.roundness.value;
		Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139 * L_23;
		L_23 = PostProcessEffectRenderer_1_get_settings_mC6D18F55EDC49EA96938682C01562885A7012771_inline(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_mC6D18F55EDC49EA96938682C01562885A7012771_RuntimeMethod_var);
		NullCheck(L_23);
		FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 * L_24 = L_23->get_roundness_12();
		NullCheck(L_24);
		float L_25 = ((ParameterOverride_1_tE564C5FA9AEBC9DB9DEB9AA8668AB1C53698D7C1 *)L_24)->get_value_1();
		Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139 * L_26;
		L_26 = PostProcessEffectRenderer_1_get_settings_mC6D18F55EDC49EA96938682C01562885A7012771_inline(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_mC6D18F55EDC49EA96938682C01562885A7012771_RuntimeMethod_var);
		NullCheck(L_26);
		FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 * L_27 = L_26->get_roundness_12();
		NullCheck(L_27);
		float L_28 = ((ParameterOverride_1_tE564C5FA9AEBC9DB9DEB9AA8668AB1C53698D7C1 *)L_27)->get_value_1();
		V_2 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_25)), (float)(6.0f))), (float)L_28));
		// sheet.properties.SetVector(ShaderIDs.Vignette_Settings, new Vector4(settings.intensity.value * 3f, settings.smoothness.value * 5f, roundness, settings.rounded.value ? 1f : 0f));
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_29 = V_0;
		NullCheck(L_29);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_30;
		L_30 = PropertySheet_get_properties_m3AB962E1C6A0C44D98E16AFBB73B40BA5E21B504_inline(L_29, /*hidden argument*/NULL);
		int32_t L_31 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_Vignette_Settings_105();
		Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139 * L_32;
		L_32 = PostProcessEffectRenderer_1_get_settings_mC6D18F55EDC49EA96938682C01562885A7012771_inline(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_mC6D18F55EDC49EA96938682C01562885A7012771_RuntimeMethod_var);
		NullCheck(L_32);
		FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 * L_33 = L_32->get_intensity_10();
		NullCheck(L_33);
		float L_34 = ((ParameterOverride_1_tE564C5FA9AEBC9DB9DEB9AA8668AB1C53698D7C1 *)L_33)->get_value_1();
		Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139 * L_35;
		L_35 = PostProcessEffectRenderer_1_get_settings_mC6D18F55EDC49EA96938682C01562885A7012771_inline(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_mC6D18F55EDC49EA96938682C01562885A7012771_RuntimeMethod_var);
		NullCheck(L_35);
		FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 * L_36 = L_35->get_smoothness_11();
		NullCheck(L_36);
		float L_37 = ((ParameterOverride_1_tE564C5FA9AEBC9DB9DEB9AA8668AB1C53698D7C1 *)L_36)->get_value_1();
		float L_38 = V_2;
		Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139 * L_39;
		L_39 = PostProcessEffectRenderer_1_get_settings_mC6D18F55EDC49EA96938682C01562885A7012771_inline(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_mC6D18F55EDC49EA96938682C01562885A7012771_RuntimeMethod_var);
		NullCheck(L_39);
		BoolParameter_t4EDC330A9E3F5830FCE384CE1FF707D3276EBF80 * L_40 = L_39->get_rounded_13();
		NullCheck(L_40);
		bool L_41 = ((ParameterOverride_1_t44F5A562A85AD213D94BE9A0DF3DC87C847C3EDC *)L_40)->get_value_1();
		G_B2_0 = L_38;
		G_B2_1 = ((float)il2cpp_codegen_multiply((float)L_37, (float)(5.0f)));
		G_B2_2 = ((float)il2cpp_codegen_multiply((float)L_34, (float)(3.0f)));
		G_B2_3 = L_31;
		G_B2_4 = L_30;
		if (L_41)
		{
			G_B3_0 = L_38;
			G_B3_1 = ((float)il2cpp_codegen_multiply((float)L_37, (float)(5.0f)));
			G_B3_2 = ((float)il2cpp_codegen_multiply((float)L_34, (float)(3.0f)));
			G_B3_3 = L_31;
			G_B3_4 = L_30;
			goto IL_010b;
		}
	}
	{
		G_B4_0 = (0.0f);
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		G_B4_3 = G_B2_2;
		G_B4_4 = G_B2_3;
		G_B4_5 = G_B2_4;
		goto IL_0110;
	}

IL_010b:
	{
		G_B4_0 = (1.0f);
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
		G_B4_3 = G_B3_2;
		G_B4_4 = G_B3_3;
		G_B4_5 = G_B3_4;
	}

IL_0110:
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_42), G_B4_3, G_B4_2, G_B4_1, G_B4_0, /*hidden argument*/NULL);
		NullCheck(G_B4_5);
		MaterialPropertyBlock_SetVector_m39DE61298C4C95829529B498130844A591621E2F(G_B4_5, G_B4_4, L_42, /*hidden argument*/NULL);
		goto IL_017d;
	}

IL_011e:
	{
		// sheet.properties.SetFloat(ShaderIDs.Vignette_Mode, 1f);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_43 = V_0;
		NullCheck(L_43);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_44;
		L_44 = PropertySheet_get_properties_m3AB962E1C6A0C44D98E16AFBB73B40BA5E21B504_inline(L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var);
		int32_t L_45 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_Vignette_Mode_108();
		NullCheck(L_44);
		MaterialPropertyBlock_SetFloat_mD2F1653CEDB22B1A3EE844E353CF125A607AEDEC(L_44, L_45, (1.0f), /*hidden argument*/NULL);
		// sheet.properties.SetTexture(ShaderIDs.Vignette_Mask, settings.mask.value);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_46 = V_0;
		NullCheck(L_46);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_47;
		L_47 = PropertySheet_get_properties_m3AB962E1C6A0C44D98E16AFBB73B40BA5E21B504_inline(L_46, /*hidden argument*/NULL);
		int32_t L_48 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_Vignette_Mask_106();
		Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139 * L_49;
		L_49 = PostProcessEffectRenderer_1_get_settings_mC6D18F55EDC49EA96938682C01562885A7012771_inline(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_mC6D18F55EDC49EA96938682C01562885A7012771_RuntimeMethod_var);
		NullCheck(L_49);
		TextureParameter_tC6A936F3D3C6DD5834DC7866D62E1BE3073BD8C2 * L_50 = L_49->get_mask_14();
		NullCheck(L_50);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_51 = ((ParameterOverride_1_t728745CADEFE1DB4C2C14F6DD6EA53A447A763E4 *)L_50)->get_value_1();
		NullCheck(L_47);
		MaterialPropertyBlock_SetTexture_m8F81CA94E5261618BEDD93EC02DAA2412E732C04(L_47, L_48, L_51, /*hidden argument*/NULL);
		// sheet.properties.SetFloat(ShaderIDs.Vignette_Opacity, Mathf.Clamp01(settings.opacity.value));
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_52 = V_0;
		NullCheck(L_52);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_53;
		L_53 = PropertySheet_get_properties_m3AB962E1C6A0C44D98E16AFBB73B40BA5E21B504_inline(L_52, /*hidden argument*/NULL);
		int32_t L_54 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_Vignette_Opacity_107();
		Vignette_tFBCC5617358CAABF8B6D55C40CEA6406FB852139 * L_55;
		L_55 = PostProcessEffectRenderer_1_get_settings_mC6D18F55EDC49EA96938682C01562885A7012771_inline(__this, /*hidden argument*/PostProcessEffectRenderer_1_get_settings_mC6D18F55EDC49EA96938682C01562885A7012771_RuntimeMethod_var);
		NullCheck(L_55);
		FloatParameter_t4C8D8D2C3227E9CAAC57869A84F0AE22F63E1AD0 * L_56 = L_55->get_opacity_15();
		NullCheck(L_56);
		float L_57 = ((ParameterOverride_1_tE564C5FA9AEBC9DB9DEB9AA8668AB1C53698D7C1 *)L_56)->get_value_1();
		float L_58;
		L_58 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_57, /*hidden argument*/NULL);
		NullCheck(L_53);
		MaterialPropertyBlock_SetFloat_mD2F1653CEDB22B1A3EE844E353CF125A607AEDEC(L_53, L_54, L_58, /*hidden argument*/NULL);
	}

IL_017d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.VignetteRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VignetteRenderer__ctor_m23883AA78F043BA298E07EA5F4708B1849502912 (VignetteRenderer_t4EE592DF8A04229EB766765AA02964EFF4DD25EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PostProcessEffectRenderer_1__ctor_m669139999BE6229BB3B6937B2305D6CDD214281B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PostProcessEffectRenderer_1__ctor_m669139999BE6229BB3B6937B2305D6CDD214281B(__this, /*hidden argument*/PostProcessEffectRenderer_1__ctor_m669139999BE6229BB3B6937B2305D6CDD214281B_RuntimeMethod_var);
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
// System.Void UnityEngine.Rendering.PostProcessing.WaveformMonitor::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveformMonitor_OnDisable_m96AF46B13D58488C8AF1C4C8C55F3929EDC43D8A (WaveformMonitor_tE009C975236895DCB24F45048BF99F2443B66FF5 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// base.OnDisable();
		Monitor_OnDisable_m14F2DEE3F862B0B00809D578BA7FE816BE712E64(__this, /*hidden argument*/NULL);
		// if (m_Data != null)
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_0 = __this->get_m_Data_4();
		V_0 = (bool)((!(((RuntimeObject*)(ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// m_Data.Release();
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_2 = __this->get_m_Data_4();
		NullCheck(L_2);
		ComputeBuffer_Release_m7F1D518D1542CD4B961B17E3A44376FA78E977EB(L_2, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// m_Data = null;
		__this->set_m_Data_4((ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 *)NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.WaveformMonitor::NeedsHalfRes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaveformMonitor_NeedsHalfRes_m22881EA8A18A6827CF948F94C0FA1BDCF7F183FA (WaveformMonitor_tE009C975236895DCB24F45048BF99F2443B66FF5 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return true;
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.WaveformMonitor::ShaderResourcesAvailable(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaveformMonitor_ShaderResourcesAvailable_m9DAD32A0C8ADAD01A16313B34AC3CE3D59511378 (WaveformMonitor_tE009C975236895DCB24F45048BF99F2443B66FF5 * __this, PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return context.resources.computeShaders.waveform;
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_0 = ___context0;
		NullCheck(L_0);
		PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC * L_1;
		L_1 = PostProcessRenderContext_get_resources_mEC353AFE49A4A72D561FCB8758E364578AB2B9D7_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B * L_2 = L_1->get_computeShaders_8();
		NullCheck(L_2);
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_3 = L_2->get_waveform_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.WaveformMonitor::Render(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveformMonitor_Render_mE343E98903B15A4E77731364274F84EA4086B78F (WaveformMonitor_tE009C975236895DCB24F45048BF99F2443B66FF5 * __this, PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AFCBA3793C5894F32DC3C08EB9F61BA28CE0C01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD60FF819399DE4C3066A4707930AFF1DFC100903);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD982DD4496EE1EAEEDD5B4DA7B2EB057EEC66E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3FB52A6A499BD50CACB93900D84D32D55B8CD1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE75B2F2DCB45F8587B72E7BD107D9281449E36FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF873D6748545B7516CD56A7A617453AEC82E7C8D);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * V_3 = NULL;
	CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * V_4 = NULL;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE  V_10;
	memset((&V_10), 0, sizeof(V_10));
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * G_B6_2 = NULL;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * G_B5_2 = NULL;
	int32_t G_B7_0 = 0;
	float G_B7_1 = 0.0f;
	float G_B7_2 = 0.0f;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * G_B7_3 = NULL;
	{
		// float ratio = (context.width / 2f) / (context.height / 2f);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_0 = ___context0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PostProcessRenderContext_get_width_m4965F17411CA0E2AEC993B02D9CEEB0E258E8A74_inline(L_0, /*hidden argument*/NULL);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_2 = ___context0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = PostProcessRenderContext_get_height_m3F500068E9E598DA75850D864AEC83708B1D9BD4_inline(L_2, /*hidden argument*/NULL);
		V_0 = ((float)((float)((float)((float)((float)((float)L_1))/(float)(2.0f)))/(float)((float)((float)((float)((float)L_3))/(float)(2.0f)))));
		// int width = Mathf.FloorToInt(height * ratio);
		int32_t L_4 = __this->get_height_3();
		float L_5 = V_0;
		int32_t L_6;
		L_6 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(((float)il2cpp_codegen_multiply((float)((float)((float)L_4)), (float)L_5)), /*hidden argument*/NULL);
		V_1 = L_6;
		// CheckOutput(width, height);
		int32_t L_7 = V_1;
		int32_t L_8 = __this->get_height_3();
		Monitor_CheckOutput_m3BB128BD30F3AB15E6DB71D68B4EBB7F656DCE71(__this, L_7, L_8, /*hidden argument*/NULL);
		// exposure = Mathf.Max(0f, exposure);
		float L_9 = __this->get_exposure_2();
		float L_10;
		L_10 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((0.0f), L_9, /*hidden argument*/NULL);
		__this->set_exposure_2(L_10);
		// int count = width * height;
		int32_t L_11 = V_1;
		int32_t L_12 = __this->get_height_3();
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)L_12));
		// if (m_Data == null)
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_13 = __this->get_m_Data_4();
		V_8 = (bool)((((RuntimeObject*)(ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 *)L_13) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		// m_Data = new ComputeBuffer(count, sizeof(uint) << 2);
		int32_t L_15 = V_2;
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_16 = (ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 *)il2cpp_codegen_object_new(ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_m66E68E9066197B06CF35FDDAFAFDC8C1DECC5436(L_16, L_15, ((int32_t)16), /*hidden argument*/NULL);
		__this->set_m_Data_4(L_16);
		goto IL_00aa;
	}

IL_007a:
	{
		// else if (m_Data.count < count)
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_17 = __this->get_m_Data_4();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = ComputeBuffer_get_count_m93FD58E4F51DDBC9B520A4A9E28B1A04F63C4827(L_17, /*hidden argument*/NULL);
		int32_t L_19 = V_2;
		V_9 = (bool)((((int32_t)L_18) < ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_9;
		if (!L_20)
		{
			goto IL_00aa;
		}
	}
	{
		// m_Data.Release();
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_21 = __this->get_m_Data_4();
		NullCheck(L_21);
		ComputeBuffer_Release_m7F1D518D1542CD4B961B17E3A44376FA78E977EB(L_21, /*hidden argument*/NULL);
		// m_Data = new ComputeBuffer(count, sizeof(uint) << 2);
		int32_t L_22 = V_2;
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_23 = (ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 *)il2cpp_codegen_object_new(ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_m66E68E9066197B06CF35FDDAFAFDC8C1DECC5436(L_23, L_22, ((int32_t)16), /*hidden argument*/NULL);
		__this->set_m_Data_4(L_23);
	}

IL_00aa:
	{
		// var compute = context.resources.computeShaders.waveform;
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_24 = ___context0;
		NullCheck(L_24);
		PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC * L_25;
		L_25 = PostProcessRenderContext_get_resources_mEC353AFE49A4A72D561FCB8758E364578AB2B9D7_inline(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B * L_26 = L_25->get_computeShaders_8();
		NullCheck(L_26);
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_27 = L_26->get_waveform_5();
		V_3 = L_27;
		// var cmd = context.command;
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_28 = ___context0;
		NullCheck(L_28);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_29;
		L_29 = PostProcessRenderContext_get_command_mE54DFA2523219208C87BA95ECD2D766889DACA71_inline(L_28, /*hidden argument*/NULL);
		V_4 = L_29;
		// cmd.BeginSample("Waveform");
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_30 = V_4;
		NullCheck(L_30);
		CommandBuffer_BeginSample_mA6CADFE0049E601CE0E5FE8CFF23820AE98514EA(L_30, _stringLiteralE3FB52A6A499BD50CACB93900D84D32D55B8CD1D, /*hidden argument*/NULL);
		// var parameters = new Vector4(
		//     width,
		//     height,
		//     RuntimeUtilities.isLinearColorSpace ? 1 : 0,
		//     0f
		// );
		int32_t L_31 = V_1;
		int32_t L_32 = __this->get_height_3();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = RuntimeUtilities_get_isLinearColorSpace_m1D106C8BE629AEB323D34C96816B2518699F2578(/*hidden argument*/NULL);
		G_B5_0 = ((float)((float)L_32));
		G_B5_1 = ((float)((float)L_31));
		G_B5_2 = (&V_5);
		if (L_33)
		{
			G_B6_0 = ((float)((float)L_32));
			G_B6_1 = ((float)((float)L_31));
			G_B6_2 = (&V_5);
			goto IL_00e5;
		}
	}
	{
		G_B7_0 = 0;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		goto IL_00e6;
	}

IL_00e5:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
	}

IL_00e6:
	{
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)G_B7_3, G_B7_2, G_B7_1, ((float)((float)G_B7_0)), (0.0f), /*hidden argument*/NULL);
		// int kernel = compute.FindKernel("KWaveformClear");
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_34 = V_3;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = ComputeShader_FindKernel_mCA2683905A5DAB573D50389E2B24B48B18CD53D0(L_34, _stringLiteral9AFCBA3793C5894F32DC3C08EB9F61BA28CE0C01, /*hidden argument*/NULL);
		V_6 = L_35;
		// cmd.SetComputeBufferParam(compute, kernel, "_WaveformBuffer", m_Data);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_36 = V_4;
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_37 = V_3;
		int32_t L_38 = V_6;
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_39 = __this->get_m_Data_4();
		NullCheck(L_36);
		CommandBuffer_SetComputeBufferParam_mF62034747B7C0EDDAA810F917969A5CA308705F5(L_36, L_37, L_38, _stringLiteralE75B2F2DCB45F8587B72E7BD107D9281449E36FA, L_39, /*hidden argument*/NULL);
		// cmd.SetComputeVectorParam(compute, "_Params", parameters);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_40 = V_4;
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_41 = V_3;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_42 = V_5;
		NullCheck(L_40);
		CommandBuffer_SetComputeVectorParam_m6FD77F6D465976FBCBB64D8EEC1CC2903A254319(L_40, L_41, _stringLiteralF873D6748545B7516CD56A7A617453AEC82E7C8D, L_42, /*hidden argument*/NULL);
		// cmd.DispatchCompute(compute, kernel, Mathf.CeilToInt(width / (float)k_ThreadGroupSizeX), Mathf.CeilToInt(height / (float)k_ThreadGroupSizeY), 1);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_43 = V_4;
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_44 = V_3;
		int32_t L_45 = V_6;
		int32_t L_46 = V_1;
		int32_t L_47;
		L_47 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)((float)((float)((float)L_46))/(float)(16.0f))), /*hidden argument*/NULL);
		int32_t L_48 = __this->get_height_3();
		int32_t L_49;
		L_49 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)((float)((float)((float)L_48))/(float)(16.0f))), /*hidden argument*/NULL);
		NullCheck(L_43);
		CommandBuffer_DispatchCompute_m2EB0711D3F10F874D487D081F169FA0D8996DC64(L_43, L_44, L_45, L_47, L_49, 1, /*hidden argument*/NULL);
		// cmd.GetTemporaryRT(ShaderIDs.WaveformSource, width, height, 0, FilterMode.Bilinear, context.sourceFormat);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_50 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var);
		int32_t L_51 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_WaveformSource_122();
		int32_t L_52 = V_1;
		int32_t L_53 = __this->get_height_3();
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_54 = ___context0;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = PostProcessRenderContext_get_sourceFormat_mD846BE618AD913E5A3EFF8AE3BDFD1B2DF53896E_inline(L_54, /*hidden argument*/NULL);
		NullCheck(L_50);
		CommandBuffer_GetTemporaryRT_mD8089EAEA2133AA0D545CB525BC56C5762BD3BBF(L_50, L_51, L_52, L_53, 0, 1, L_55, /*hidden argument*/NULL);
		// cmd.BlitFullscreenTriangle(ShaderIDs.HalfResFinalCopy, ShaderIDs.WaveformSource);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_56 = V_4;
		int32_t L_57 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_HalfResFinalCopy_121();
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_58;
		L_58 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(L_57, /*hidden argument*/NULL);
		int32_t L_59 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_WaveformSource_122();
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_60;
		L_60 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(L_59, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_10), sizeof(Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE ));
		Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE  L_61 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeUtilities_tD2142C8A0B140223508706805FA9231125B6A338_il2cpp_TypeInfo_var);
		RuntimeUtilities_BlitFullscreenTriangle_mF733D5B783D8EC34392246C72F90114F4CD143F5(L_56, L_58, L_60, (bool)0, L_61, /*hidden argument*/NULL);
		// kernel = compute.FindKernel("KWaveformGather");
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_62 = V_3;
		NullCheck(L_62);
		int32_t L_63;
		L_63 = ComputeShader_FindKernel_mCA2683905A5DAB573D50389E2B24B48B18CD53D0(L_62, _stringLiteralD60FF819399DE4C3066A4707930AFF1DFC100903, /*hidden argument*/NULL);
		V_6 = L_63;
		// cmd.SetComputeBufferParam(compute, kernel, "_WaveformBuffer", m_Data);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_64 = V_4;
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_65 = V_3;
		int32_t L_66 = V_6;
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_67 = __this->get_m_Data_4();
		NullCheck(L_64);
		CommandBuffer_SetComputeBufferParam_mF62034747B7C0EDDAA810F917969A5CA308705F5(L_64, L_65, L_66, _stringLiteralE75B2F2DCB45F8587B72E7BD107D9281449E36FA, L_67, /*hidden argument*/NULL);
		// cmd.SetComputeTextureParam(compute, kernel, "_Source", ShaderIDs.WaveformSource);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_68 = V_4;
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_69 = V_3;
		int32_t L_70 = V_6;
		int32_t L_71 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_WaveformSource_122();
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_72;
		L_72 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(L_71, /*hidden argument*/NULL);
		NullCheck(L_68);
		CommandBuffer_SetComputeTextureParam_m478EC6F4970EF8C3C0645FEB5B17A59C9299829B(L_68, L_69, L_70, _stringLiteralD982DD4496EE1EAEEDD5B4DA7B2EB057EEC66E1D, L_72, /*hidden argument*/NULL);
		// cmd.SetComputeVectorParam(compute, "_Params", parameters);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_73 = V_4;
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_74 = V_3;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_75 = V_5;
		NullCheck(L_73);
		CommandBuffer_SetComputeVectorParam_m6FD77F6D465976FBCBB64D8EEC1CC2903A254319(L_73, L_74, _stringLiteralF873D6748545B7516CD56A7A617453AEC82E7C8D, L_75, /*hidden argument*/NULL);
		// cmd.DispatchCompute(compute, kernel, width, Mathf.CeilToInt(height / (float)k_ThreadGroupSize), 1);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_76 = V_4;
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_77 = V_3;
		int32_t L_78 = V_6;
		int32_t L_79 = V_1;
		int32_t L_80 = __this->get_height_3();
		int32_t L_81;
		L_81 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)((float)((float)((float)L_80))/(float)(256.0f))), /*hidden argument*/NULL);
		NullCheck(L_76);
		CommandBuffer_DispatchCompute_m2EB0711D3F10F874D487D081F169FA0D8996DC64(L_76, L_77, L_78, L_79, L_81, 1, /*hidden argument*/NULL);
		// cmd.ReleaseTemporaryRT(ShaderIDs.WaveformSource);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_82 = V_4;
		int32_t L_83 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_WaveformSource_122();
		NullCheck(L_82);
		CommandBuffer_ReleaseTemporaryRT_mE4A4A8DE6B315956BEAB66915FF720F1C61BCDC5(L_82, L_83, /*hidden argument*/NULL);
		// var sheet = context.propertySheets.Get(context.resources.shaders.waveform);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_84 = ___context0;
		NullCheck(L_84);
		PropertySheetFactory_t2D2278105A154ED6036D5BE72D09359A5FB94835 * L_85;
		L_85 = PostProcessRenderContext_get_propertySheets_mE1135E07BE4F59354198DF05198E64CAF2E41D5C_inline(L_84, /*hidden argument*/NULL);
		PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * L_86 = ___context0;
		NullCheck(L_86);
		PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC * L_87;
		L_87 = PostProcessRenderContext_get_resources_mEC353AFE49A4A72D561FCB8758E364578AB2B9D7_inline(L_86, /*hidden argument*/NULL);
		NullCheck(L_87);
		Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2 * L_88 = L_87->get_shaders_7();
		NullCheck(L_88);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_89 = L_88->get_waveform_17();
		NullCheck(L_85);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_90;
		L_90 = PropertySheetFactory_Get_mE4CC267B0EB28F0892A426B67015A309F2540CBF(L_85, L_89, /*hidden argument*/NULL);
		V_7 = L_90;
		// sheet.properties.SetVector(ShaderIDs.Params, new Vector4(width, height, exposure, 0f));
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_91 = V_7;
		NullCheck(L_91);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_92;
		L_92 = PropertySheet_get_properties_m3AB962E1C6A0C44D98E16AFBB73B40BA5E21B504_inline(L_91, /*hidden argument*/NULL);
		int32_t L_93 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_Params_65();
		int32_t L_94 = V_1;
		int32_t L_95 = __this->get_height_3();
		float L_96 = __this->get_exposure_2();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_97;
		memset((&L_97), 0, sizeof(L_97));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_97), ((float)((float)L_94)), ((float)((float)L_95)), L_96, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_92);
		MaterialPropertyBlock_SetVector_m39DE61298C4C95829529B498130844A591621E2F(L_92, L_93, L_97, /*hidden argument*/NULL);
		// sheet.properties.SetBuffer(ShaderIDs.WaveformBuffer, m_Data);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_98 = V_7;
		NullCheck(L_98);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_99;
		L_99 = PropertySheet_get_properties_m3AB962E1C6A0C44D98E16AFBB73B40BA5E21B504_inline(L_98, /*hidden argument*/NULL);
		int32_t L_100 = ((ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_tC30C65E5DD104F59804ED5CEF8870D49D8C56155_il2cpp_TypeInfo_var))->get_WaveformBuffer_123();
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_101 = __this->get_m_Data_4();
		NullCheck(L_99);
		MaterialPropertyBlock_SetBuffer_mA0802C6F378E9565224ECC00120180DF18691271(L_99, L_100, L_101, /*hidden argument*/NULL);
		// cmd.BlitFullscreenTriangle(BuiltinRenderTextureType.None, output, sheet, 0);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_102 = V_4;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_103;
		L_103 = RenderTargetIdentifier_op_Implicit_mB7B58C1D295E2DAE3C76874D030D4878A825E359(0, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_104;
		L_104 = Monitor_get_output_m7CEEB7508AD1B405744EA32D5FB767644FD2776D_inline(__this, /*hidden argument*/NULL);
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_105;
		L_105 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_104, /*hidden argument*/NULL);
		PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * L_106 = V_7;
		il2cpp_codegen_initobj((&V_10), sizeof(Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE ));
		Nullable_1_t8F1ADA2A4DB40B3A813577642EB25CAF98D7A6CE  L_107 = V_10;
		RuntimeUtilities_BlitFullscreenTriangle_mABC8DFC7F13C86175696C407ABA469F66B98128E(L_102, L_103, L_105, L_106, 0, (bool)0, L_107, /*hidden argument*/NULL);
		// cmd.EndSample("Waveform");
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_108 = V_4;
		NullCheck(L_108);
		CommandBuffer_EndSample_mB852BF4B83918656E93C9C327A20E163EC910A66(L_108, _stringLiteralE3FB52A6A499BD50CACB93900D84D32D55B8CD1D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.WaveformMonitor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveformMonitor__ctor_mB6E1D88F47EBA174808D114DD162FFBA077E5B5F (WaveformMonitor_tE009C975236895DCB24F45048BF99F2443B66FF5 * __this, const RuntimeMethod* method)
{
	{
		// public float exposure = 0.12f;
		__this->set_exposure_2((0.119999997f));
		// public int height = 256;
		__this->set_height_3(((int32_t)256));
		Monitor__ctor_mE42FA0D19C9F80DE341A10BC7A383C667D2103C2(__this, /*hidden argument*/NULL);
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
// System.Single UnityEngine.Rendering.PostProcessing.HableCurve/Segment::Eval(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Segment_Eval_mC4DF32486D62BCE96992E05A8E38C8950A6DB9D9 (Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * __this, float ___x0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		// float x0 = (x - offsetX) * scaleX;
		float L_0 = ___x0;
		float L_1 = __this->get_offsetX_0();
		float L_2 = __this->get_scaleX_2();
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)), (float)L_2));
		// float y0 = 0f;
		V_1 = (0.0f);
		// if (x0 > 0)
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) > ((float)(0.0f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		// y0 = Mathf.Exp(lnA + B * Mathf.Log(x0));
		float L_5 = __this->get_lnA_4();
		float L_6 = __this->get_B_5();
		float L_7 = V_0;
		float L_8;
		L_8 = logf(L_7);
		float L_9;
		L_9 = expf(((float)il2cpp_codegen_add((float)L_5, (float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_8)))));
		V_1 = L_9;
	}

IL_003d:
	{
		// return y0 * scaleY + offsetY;
		float L_10 = V_1;
		float L_11 = __this->get_scaleY_3();
		float L_12 = __this->get_offsetY_1();
		V_3 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)), (float)L_12));
		goto IL_004f;
	}

IL_004f:
	{
		// }
		float L_13 = V_3;
		return L_13;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.HableCurve/Segment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment__ctor_m8297F8231D9F5D57A6F13F9137832D6F73A04B63 (Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Rendering.PostProcessing.HableCurve/Uniforms::.ctor(UnityEngine.Rendering.PostProcessing.HableCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uniforms__ctor_m3C3B6EE6EFF78D57E84C54D123D7258FFC3C3142 (Uniforms_t7AF10CB01FA96FCB7FCF701200A7D087DEC63843 * __this, HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9 * ___parent0, const RuntimeMethod* method)
{
	{
		// internal Uniforms(HableCurve parent)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.parent = parent;
		HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9 * L_0 = ___parent0;
		__this->set_parent_0(L_0);
		// }
		return;
	}
}
// UnityEngine.Vector4 UnityEngine.Rendering.PostProcessing.HableCurve/Uniforms::get_curve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Uniforms_get_curve_mE7638E38D4063126F49C74A01AC768F0BD33F811 (Uniforms_t7AF10CB01FA96FCB7FCF701200A7D087DEC63843 * __this, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return new Vector4(parent.inverseWhitePoint, parent.x0, parent.x1, 0f); }
		HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9 * L_0 = __this->get_parent_0();
		NullCheck(L_0);
		float L_1;
		L_1 = HableCurve_get_inverseWhitePoint_mD9A48EF5A7542BEF6DECEC1F7F6354D210B7C90D_inline(L_0, /*hidden argument*/NULL);
		HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9 * L_2 = __this->get_parent_0();
		NullCheck(L_2);
		float L_3;
		L_3 = HableCurve_get_x0_m611124271E4A894A9FB9D350C2F4215AE20A10E7_inline(L_2, /*hidden argument*/NULL);
		HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9 * L_4 = __this->get_parent_0();
		NullCheck(L_4);
		float L_5;
		L_5 = HableCurve_get_x1_mA8B86FCBC557774456D8B63D57FFDFB913BA42B9_inline(L_4, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_6), L_1, L_3, L_5, (0.0f), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_002f;
	}

IL_002f:
	{
		// get { return new Vector4(parent.inverseWhitePoint, parent.x0, parent.x1, 0f); }
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Vector4 UnityEngine.Rendering.PostProcessing.HableCurve/Uniforms::get_toeSegmentA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Uniforms_get_toeSegmentA_mEBB2FF2937CBF4EAE75AFADB90944177F8A4792B (Uniforms_t7AF10CB01FA96FCB7FCF701200A7D087DEC63843 * __this, const RuntimeMethod* method)
{
	Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * V_0 = NULL;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var toe = parent.m_Segments[0];
		HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9 * L_0 = __this->get_parent_0();
		NullCheck(L_0);
		SegmentU5BU5D_t236C9C40EE0ECF87CD86C78C8F44914ED51A135B* L_1 = L_0->get_m_Segments_4();
		NullCheck(L_1);
		int32_t L_2 = 0;
		Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// return new Vector4(toe.offsetX, toe.offsetY, toe.scaleX, toe.scaleY);
		Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * L_4 = V_0;
		NullCheck(L_4);
		float L_5 = L_4->get_offsetX_0();
		Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * L_6 = V_0;
		NullCheck(L_6);
		float L_7 = L_6->get_offsetY_1();
		Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * L_8 = V_0;
		NullCheck(L_8);
		float L_9 = L_8->get_scaleX_2();
		Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * L_10 = V_0;
		NullCheck(L_10);
		float L_11 = L_10->get_scaleY_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_12), L_5, L_7, L_9, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		goto IL_002f;
	}

IL_002f:
	{
		// }
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_13 = V_1;
		return L_13;
	}
}
// UnityEngine.Vector4 UnityEngine.Rendering.PostProcessing.HableCurve/Uniforms::get_toeSegmentB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Uniforms_get_toeSegmentB_m4EE19F443F65899DC40CF56BADF489C62E035A6B (Uniforms_t7AF10CB01FA96FCB7FCF701200A7D087DEC63843 * __this, const RuntimeMethod* method)
{
	Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * V_0 = NULL;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var toe = parent.m_Segments[0];
		HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9 * L_0 = __this->get_parent_0();
		NullCheck(L_0);
		SegmentU5BU5D_t236C9C40EE0ECF87CD86C78C8F44914ED51A135B* L_1 = L_0->get_m_Segments_4();
		NullCheck(L_1);
		int32_t L_2 = 0;
		Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// return new Vector4(toe.lnA, toe.B, 0f, 0f);
		Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * L_4 = V_0;
		NullCheck(L_4);
		float L_5 = L_4->get_lnA_4();
		Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * L_6 = V_0;
		NullCheck(L_6);
		float L_7 = L_6->get_B_5();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_8), L_5, L_7, (0.0f), (0.0f), /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_9 = V_1;
		return L_9;
	}
}
// UnityEngine.Vector4 UnityEngine.Rendering.PostProcessing.HableCurve/Uniforms::get_midSegmentA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Uniforms_get_midSegmentA_m22A551965BFAB754EEDAE7AE6CEF466B0206B0DC (Uniforms_t7AF10CB01FA96FCB7FCF701200A7D087DEC63843 * __this, const RuntimeMethod* method)
{
	Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * V_0 = NULL;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var mid = parent.m_Segments[1];
		HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9 * L_0 = __this->get_parent_0();
		NullCheck(L_0);
		SegmentU5BU5D_t236C9C40EE0ECF87CD86C78C8F44914ED51A135B* L_1 = L_0->get_m_Segments_4();
		NullCheck(L_1);
		int32_t L_2 = 1;
		Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// return new Vector4(mid.offsetX, mid.offsetY, mid.scaleX, mid.scaleY);
		Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * L_4 = V_0;
		NullCheck(L_4);
		float L_5 = L_4->get_offsetX_0();
		Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * L_6 = V_0;
		NullCheck(L_6);
		float L_7 = L_6->get_offsetY_1();
		Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * L_8 = V_0;
		NullCheck(L_8);
		float L_9 = L_8->get_scaleX_2();
		Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * L_10 = V_0;
		NullCheck(L_10);
		float L_11 = L_10->get_scaleY_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_12), L_5, L_7, L_9, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		goto IL_002f;
	}

IL_002f:
	{
		// }
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_13 = V_1;
		return L_13;
	}
}
// UnityEngine.Vector4 UnityEngine.Rendering.PostProcessing.HableCurve/Uniforms::get_midSegmentB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Uniforms_get_midSegmentB_m63DC3ED45ABDF1B406A7A0433115668EA33A6FA0 (Uniforms_t7AF10CB01FA96FCB7FCF701200A7D087DEC63843 * __this, const RuntimeMethod* method)
{
	Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * V_0 = NULL;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var mid = parent.m_Segments[1];
		HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9 * L_0 = __this->get_parent_0();
		NullCheck(L_0);
		SegmentU5BU5D_t236C9C40EE0ECF87CD86C78C8F44914ED51A135B* L_1 = L_0->get_m_Segments_4();
		NullCheck(L_1);
		int32_t L_2 = 1;
		Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// return new Vector4(mid.lnA, mid.B, 0f, 0f);
		Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * L_4 = V_0;
		NullCheck(L_4);
		float L_5 = L_4->get_lnA_4();
		Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * L_6 = V_0;
		NullCheck(L_6);
		float L_7 = L_6->get_B_5();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_8), L_5, L_7, (0.0f), (0.0f), /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_9 = V_1;
		return L_9;
	}
}
// UnityEngine.Vector4 UnityEngine.Rendering.PostProcessing.HableCurve/Uniforms::get_shoSegmentA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Uniforms_get_shoSegmentA_mF90FE052FC65FA7565F0ACFC08426791DC95A6DB (Uniforms_t7AF10CB01FA96FCB7FCF701200A7D087DEC63843 * __this, const RuntimeMethod* method)
{
	Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * V_0 = NULL;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var sho = parent.m_Segments[2];
		HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9 * L_0 = __this->get_parent_0();
		NullCheck(L_0);
		SegmentU5BU5D_t236C9C40EE0ECF87CD86C78C8F44914ED51A135B* L_1 = L_0->get_m_Segments_4();
		NullCheck(L_1);
		int32_t L_2 = 2;
		Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// return new Vector4(sho.offsetX, sho.offsetY, sho.scaleX, sho.scaleY);
		Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * L_4 = V_0;
		NullCheck(L_4);
		float L_5 = L_4->get_offsetX_0();
		Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * L_6 = V_0;
		NullCheck(L_6);
		float L_7 = L_6->get_offsetY_1();
		Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * L_8 = V_0;
		NullCheck(L_8);
		float L_9 = L_8->get_scaleX_2();
		Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * L_10 = V_0;
		NullCheck(L_10);
		float L_11 = L_10->get_scaleY_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_12), L_5, L_7, L_9, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		goto IL_002f;
	}

IL_002f:
	{
		// }
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_13 = V_1;
		return L_13;
	}
}
// UnityEngine.Vector4 UnityEngine.Rendering.PostProcessing.HableCurve/Uniforms::get_shoSegmentB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Uniforms_get_shoSegmentB_m81DFB20837E05225D64F6BBF7B4A3181CF270EB4 (Uniforms_t7AF10CB01FA96FCB7FCF701200A7D087DEC63843 * __this, const RuntimeMethod* method)
{
	Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * V_0 = NULL;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var sho = parent.m_Segments[2];
		HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9 * L_0 = __this->get_parent_0();
		NullCheck(L_0);
		SegmentU5BU5D_t236C9C40EE0ECF87CD86C78C8F44914ED51A135B* L_1 = L_0->get_m_Segments_4();
		NullCheck(L_1);
		int32_t L_2 = 2;
		Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// return new Vector4(sho.lnA, sho.B, 0f, 0f);
		Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * L_4 = V_0;
		NullCheck(L_4);
		float L_5 = L_4->get_lnA_4();
		Segment_tC9C1FFF68E57AF8F1B40648CF73485BA1AA654D0 * L_6 = V_0;
		NullCheck(L_6);
		float L_7 = L_6->get_B_5();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_8), L_5, L_7, (0.0f), (0.0f), /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_9 = V_1;
		return L_9;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessDebugLayer/OverlaySettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverlaySettings__ctor_m093BD985FF4AF650D08DCE7791B2A4D45E9FED7B (OverlaySettings_t7071522FB1A8AF4C8F333D3F64057B4E773C3675 * __this, const RuntimeMethod* method)
{
	{
		// public bool linearDepth = false;
		__this->set_linearDepth_0((bool)0);
		// public float motionColorIntensity = 4f;
		__this->set_motionColorIntensity_1((4.0f));
		// public int motionGridSize = 64;
		__this->set_motionGridSize_2(((int32_t)64));
		// public ColorBlindnessType colorBlindnessType = ColorBlindnessType.Deuteranopia;
		__this->set_colorBlindnessType_3(0);
		// public float colorBlindnessStrength = 1f;
		__this->set_colorBlindnessStrength_4((1.0f));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD089AB18230B99D147F44E2EA3F6223C17564D14 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t582D59DA00DB9923A86F7788D2FDFB1DBECDC721_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t582D59DA00DB9923A86F7788D2FDFB1DBECDC721 * L_0 = (U3CU3Ec_t582D59DA00DB9923A86F7788D2FDFB1DBECDC721 *)il2cpp_codegen_object_new(U3CU3Ec_t582D59DA00DB9923A86F7788D2FDFB1DBECDC721_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mEEFF6CF7892F8783B9AB8EDAF11A367344B0A2C3(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t582D59DA00DB9923A86F7788D2FDFB1DBECDC721_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t582D59DA00DB9923A86F7788D2FDFB1DBECDC721_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEEFF6CF7892F8783B9AB8EDAF11A367344B0A2C3 (U3CU3Ec_t582D59DA00DB9923A86F7788D2FDFB1DBECDC721 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings/<>c::<OnEnable>b__3_0(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3COnEnableU3Eb__3_0_mFB0450A2EA91C54C174F251C8F4B5B520F5314CE (U3CU3Ec_t582D59DA00DB9923A86F7788D2FDFB1DBECDC721 * __this, FieldInfo_t * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterOverride_tED887E59B87A5DD3BFDAAAF745F82D9080FA4784_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Where(t => t.FieldType.IsSubclassOf(typeof(ParameterOverride)))
		FieldInfo_t * L_0 = ___t0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_0);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (ParameterOverride_tED887E59B87A5DD3BFDAAAF745F82D9080FA4784_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtFuncInvoker1< bool, Type_t * >::Invoke(108 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_1, L_3);
		return L_4;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings/<>c::<OnEnable>b__3_1(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3COnEnableU3Eb__3_1_m842306E3DBC19895D5D0AE7036743BA0E68F4370 (U3CU3Ec_t582D59DA00DB9923A86F7788D2FDFB1DBECDC721 * __this, FieldInfo_t * ___t0, const RuntimeMethod* method)
{
	{
		// .OrderBy(t => t.MetadataToken) // Guaranteed order
		FieldInfo_t * L_0 = ___t0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Reflection.MemberInfo::get_MetadataToken() */, L_0);
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
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC58AF5101E2ABD2CCED0D14A832AB73EDEBB5407 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDC45B2C4212767583DEE0B7E8F97CF301BD1703B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tDC45B2C4212767583DEE0B7E8F97CF301BD1703B * L_0 = (U3CU3Ec_tDC45B2C4212767583DEE0B7E8F97CF301BD1703B *)il2cpp_codegen_object_new(U3CU3Ec_tDC45B2C4212767583DEE0B7E8F97CF301BD1703B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m612827A29AEDBBCC3CC4BB9C7E0E26A82CCF52B3(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tDC45B2C4212767583DEE0B7E8F97CF301BD1703B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDC45B2C4212767583DEE0B7E8F97CF301BD1703B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m612827A29AEDBBCC3CC4BB9C7E0E26A82CCF52B3 (U3CU3Ec_tDC45B2C4212767583DEE0B7E8F97CF301BD1703B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Rendering.PostProcessing.PostProcessBundle UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c::<UpdateBundleSortList>b__54_1(System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Rendering.PostProcessing.PostProcessBundle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PostProcessBundle_tB61A95212353716F4AE3896A6DF3B19AE53FB791 * U3CU3Ec_U3CUpdateBundleSortListU3Eb__54_1_m3A74A6B00FFBFB1E96DB0F5287825C7A258F5866 (U3CU3Ec_tDC45B2C4212767583DEE0B7E8F97CF301BD1703B * __this, KeyValuePair_2_t1AD67FE677906939CF01F9FFF580AD52E81866D4  ___kvp0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mD1876C0E1E116C36906D24EED25799C991F0187B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Select(kvp => kvp.Value)
		PostProcessBundle_tB61A95212353716F4AE3896A6DF3B19AE53FB791 * L_0;
		L_0 = KeyValuePair_2_get_Value_mD1876C0E1E116C36906D24EED25799C991F0187B_inline((KeyValuePair_2_t1AD67FE677906939CF01F9FFF580AD52E81866D4 *)(&___kvp0), /*hidden argument*/KeyValuePair_2_get_Value_mD1876C0E1E116C36906D24EED25799C991F0187B_RuntimeMethod_var);
		return L_0;
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
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c__DisplayClass54_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass54_0__ctor_mD1620D37E1580A84A09C8F5A942C2164441C6145 (U3CU3Ec__DisplayClass54_0_tD5894FBEDBB478439A77C2222DE09C17DB1EF0E2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c__DisplayClass54_0::<UpdateBundleSortList>b__0(System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Rendering.PostProcessing.PostProcessBundle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass54_0_U3CUpdateBundleSortListU3Eb__0_mD5BFE7EE8C78489DE37C5540F13B448ED71370F8 (U3CU3Ec__DisplayClass54_0_tD5894FBEDBB478439A77C2222DE09C17DB1EF0E2 * __this, KeyValuePair_2_t1AD67FE677906939CF01F9FFF580AD52E81866D4  ___kvp0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mD1876C0E1E116C36906D24EED25799C991F0187B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// var effects = m_Bundles.Where(kvp => kvp.Value.attribute.eventType == evt && !kvp.Value.attribute.builtinEffect)
		PostProcessBundle_tB61A95212353716F4AE3896A6DF3B19AE53FB791 * L_0;
		L_0 = KeyValuePair_2_get_Value_mD1876C0E1E116C36906D24EED25799C991F0187B_inline((KeyValuePair_2_t1AD67FE677906939CF01F9FFF580AD52E81866D4 *)(&___kvp0), /*hidden argument*/KeyValuePair_2_get_Value_mD1876C0E1E116C36906D24EED25799C991F0187B_RuntimeMethod_var);
		NullCheck(L_0);
		PostProcessAttribute_tB0E64790042AFD9FC695619EA4186DF608E1EDF4 * L_1;
		L_1 = PostProcessBundle_get_attribute_mBF4459B0E62B71CD348781716456E69DC676D03F_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = L_1->get_eventType_1();
		int32_t L_3 = __this->get_evt_0();
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_002f;
		}
	}
	{
		PostProcessBundle_tB61A95212353716F4AE3896A6DF3B19AE53FB791 * L_4;
		L_4 = KeyValuePair_2_get_Value_mD1876C0E1E116C36906D24EED25799C991F0187B_inline((KeyValuePair_2_t1AD67FE677906939CF01F9FFF580AD52E81866D4 *)(&___kvp0), /*hidden argument*/KeyValuePair_2_get_Value_mD1876C0E1E116C36906D24EED25799C991F0187B_RuntimeMethod_var);
		NullCheck(L_4);
		PostProcessAttribute_tB0E64790042AFD9FC695619EA4186DF608E1EDF4 * L_5;
		L_5 = PostProcessBundle_get_attribute_mBF4459B0E62B71CD348781716456E69DC676D03F_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_6 = L_5->get_builtinEffect_4();
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 0;
	}

IL_0030:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c__DisplayClass54_0::<UpdateBundleSortList>b__2(UnityEngine.Rendering.PostProcessing.PostProcessLayer/SerializedBundleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass54_0_U3CUpdateBundleSortListU3Eb__2_mCBF7E5A0DACDA7A8E0964D1730BE64A965F2C086 (U3CU3Ec__DisplayClass54_0_tD5894FBEDBB478439A77C2222DE09C17DB1EF0E2 * __this, SerializedBundleRef_tAC358B9BEA3A4944F31770C12A3096C1EE07EADF * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Exists_m833FA69BD3395CE6CF44C4776345752387488098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1__ctor_m0CBDEC79CDAD9A63F4A5FD0424F11C665BA3E84A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tBC55AA0C1F69FD07A5F71AE40FD34D7821C89C28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass54_1_U3CUpdateBundleSortListU3Eb__3_m5079F5352A08BCFD0798E251F89B2E969B954B0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass54_1_t0503A8A3B84EDDC793BDAD1BB06397139580EE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass54_1_t0503A8A3B84EDDC793BDAD1BB06397139580EE25 * V_0 = NULL;
	bool V_1 = false;
	{
		U3CU3Ec__DisplayClass54_1_t0503A8A3B84EDDC793BDAD1BB06397139580EE25 * L_0 = (U3CU3Ec__DisplayClass54_1_t0503A8A3B84EDDC793BDAD1BB06397139580EE25 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass54_1_t0503A8A3B84EDDC793BDAD1BB06397139580EE25_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass54_1__ctor_m6FED926DF3698E86D9ED7733D7E10EE1A3FD70DD(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// string searchStr = x.assemblyQualifiedName;
		U3CU3Ec__DisplayClass54_1_t0503A8A3B84EDDC793BDAD1BB06397139580EE25 * L_1 = V_0;
		SerializedBundleRef_tAC358B9BEA3A4944F31770C12A3096C1EE07EADF * L_2 = ___x0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_assemblyQualifiedName_0();
		NullCheck(L_1);
		L_1->set_searchStr_0(L_3);
		// return !effects.Exists(b => b.settings.GetType().AssemblyQualifiedName == searchStr);
		List_1_t38482F65BCF1BEF03685350BBB5B7E3D3CDF69A2 * L_4 = __this->get_effects_1();
		U3CU3Ec__DisplayClass54_1_t0503A8A3B84EDDC793BDAD1BB06397139580EE25 * L_5 = V_0;
		Predicate_1_tBC55AA0C1F69FD07A5F71AE40FD34D7821C89C28 * L_6 = (Predicate_1_tBC55AA0C1F69FD07A5F71AE40FD34D7821C89C28 *)il2cpp_codegen_object_new(Predicate_1_tBC55AA0C1F69FD07A5F71AE40FD34D7821C89C28_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m0CBDEC79CDAD9A63F4A5FD0424F11C665BA3E84A(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass54_1_U3CUpdateBundleSortListU3Eb__3_m5079F5352A08BCFD0798E251F89B2E969B954B0A_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m0CBDEC79CDAD9A63F4A5FD0424F11C665BA3E84A_RuntimeMethod_var);
		NullCheck(L_4);
		bool L_7;
		L_7 = List_1_Exists_m833FA69BD3395CE6CF44C4776345752387488098(L_4, L_6, /*hidden argument*/List_1_Exists_m833FA69BD3395CE6CF44C4776345752387488098_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_0030:
	{
		// });
		bool L_8 = V_1;
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
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c__DisplayClass54_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass54_1__ctor_m6FED926DF3698E86D9ED7733D7E10EE1A3FD70DD (U3CU3Ec__DisplayClass54_1_t0503A8A3B84EDDC793BDAD1BB06397139580EE25 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c__DisplayClass54_1::<UpdateBundleSortList>b__3(UnityEngine.Rendering.PostProcessing.PostProcessBundle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass54_1_U3CUpdateBundleSortListU3Eb__3_m5079F5352A08BCFD0798E251F89B2E969B954B0A (U3CU3Ec__DisplayClass54_1_t0503A8A3B84EDDC793BDAD1BB06397139580EE25 * __this, PostProcessBundle_tB61A95212353716F4AE3896A6DF3B19AE53FB791 * ___b0, const RuntimeMethod* method)
{
	{
		// return !effects.Exists(b => b.settings.GetType().AssemblyQualifiedName == searchStr);
		PostProcessBundle_tB61A95212353716F4AE3896A6DF3B19AE53FB791 * L_0 = ___b0;
		NullCheck(L_0);
		PostProcessEffectSettings_t2F43C0693DFF9BD09B921BB6278EC086A6F817F0 * L_1;
		L_1 = PostProcessBundle_get_settings_m2636D9B1938880F353CBC47627D3F713D65009BD_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Type_t * L_2;
		L_2 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_AssemblyQualifiedName() */, L_2);
		String_t* L_4 = __this->get_searchStr_0();
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, L_4, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c__DisplayClass54_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass54_2__ctor_m8AFCE8901A93CE6261DDF071562470B1A2D7BAEF (U3CU3Ec__DisplayClass54_2_t4FA51C9B0FB32D60372B20C7B4057723C9DA37AC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c__DisplayClass54_2::<UpdateBundleSortList>b__4(UnityEngine.Rendering.PostProcessing.PostProcessLayer/SerializedBundleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass54_2_U3CUpdateBundleSortListU3Eb__4_m2AD2BE8A99A17C2F0AB45C2F9CA94511E3B6C20E (U3CU3Ec__DisplayClass54_2_t4FA51C9B0FB32D60372B20C7B4057723C9DA37AC * __this, SerializedBundleRef_tAC358B9BEA3A4944F31770C12A3096C1EE07EADF * ___b0, const RuntimeMethod* method)
{
	{
		// if (!sortedList.Exists(b => b.assemblyQualifiedName == typeName))
		SerializedBundleRef_tAC358B9BEA3A4944F31770C12A3096C1EE07EADF * L_0 = ___b0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_assemblyQualifiedName_0();
		String_t* L_2 = __this->get_typeName_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c__DisplayClass54_3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass54_3__ctor_mB20B9DF760C344A8C3DD74BCE5DE6E18E0CF76C1 (U3CU3Ec__DisplayClass54_3_t66E86CF03FBBE19459888FDF4BA21FD17DF0D10C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessLayer/<>c__DisplayClass54_3::<UpdateBundleSortList>b__5(UnityEngine.Rendering.PostProcessing.PostProcessBundle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass54_3_U3CUpdateBundleSortListU3Eb__5_m2C3256279151D818C94CE366DBF927C277EF9960 (U3CU3Ec__DisplayClass54_3_t66E86CF03FBBE19459888FDF4BA21FD17DF0D10C * __this, PostProcessBundle_tB61A95212353716F4AE3896A6DF3B19AE53FB791 * ___b0, const RuntimeMethod* method)
{
	{
		// var bundle = effects.Find(b => b.settings.GetType().AssemblyQualifiedName == typeName);
		PostProcessBundle_tB61A95212353716F4AE3896A6DF3B19AE53FB791 * L_0 = ___b0;
		NullCheck(L_0);
		PostProcessEffectSettings_t2F43C0693DFF9BD09B921BB6278EC086A6F817F0 * L_1;
		L_1 = PostProcessBundle_get_settings_m2636D9B1938880F353CBC47627D3F713D65009BD_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Type_t * L_2;
		L_2 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_AssemblyQualifiedName() */, L_2);
		String_t* L_4 = __this->get_typeName_0();
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, L_4, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessLayer/SerializedBundleRef::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedBundleRef__ctor_m8BCF65DB003655135E182A9BCD19ED4AC775B0E3 (SerializedBundleRef_tAC358B9BEA3A4944F31770C12A3096C1EE07EADF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m804752D66A0DA7EC353907540D281DF948CD8C5F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t681FA47134D0C4294D8B7D1E0A10BE22028B460E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t681FA47134D0C4294D8B7D1E0A10BE22028B460E * L_0 = (U3CU3Ec_t681FA47134D0C4294D8B7D1E0A10BE22028B460E *)il2cpp_codegen_object_new(U3CU3Ec_t681FA47134D0C4294D8B7D1E0A10BE22028B460E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m425E24478A6F17E4ED7213D83B81FD8E999C46FB(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t681FA47134D0C4294D8B7D1E0A10BE22028B460E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t681FA47134D0C4294D8B7D1E0A10BE22028B460E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m425E24478A6F17E4ED7213D83B81FD8E999C46FB (U3CU3Ec_t681FA47134D0C4294D8B7D1E0A10BE22028B460E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessManager/<>c::<ReloadBaseTypes>b__12_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CReloadBaseTypesU3Eb__12_0_mF55DE1849B2343C42C736A9685CDA2AABD975E62 (U3CU3Ec_t681FA47134D0C4294D8B7D1E0A10BE22028B460E * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PostProcessAttribute_tB0E64790042AFD9FC695619EA4186DF608E1EDF4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// t => t.IsDefined(typeof(PostProcessAttribute), false)
		//   && !t.IsAbstract
		Type_t * L_0 = ___t0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (PostProcessAttribute_tB0E64790042AFD9FC695619EA4186DF608E1EDF4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(12 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_0, L_2, (bool)0);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Type_t * L_4 = ___t0;
		NullCheck(L_4);
		bool L_5;
		L_5 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F(L_4, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		return (bool)G_B3_0;
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
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessProfile/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7B98D4CD437C5CBE7D38D80F53000EC8DE6536AF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9177938DD17D2938706D5EE5D16C0A887C4A5481_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9177938DD17D2938706D5EE5D16C0A887C4A5481 * L_0 = (U3CU3Ec_t9177938DD17D2938706D5EE5D16C0A887C4A5481 *)il2cpp_codegen_object_new(U3CU3Ec_t9177938DD17D2938706D5EE5D16C0A887C4A5481_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m007B39B322384120C3311450483FEDF4C671420D(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t9177938DD17D2938706D5EE5D16C0A887C4A5481_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9177938DD17D2938706D5EE5D16C0A887C4A5481_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessProfile/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m007B39B322384120C3311450483FEDF4C671420D (U3CU3Ec_t9177938DD17D2938706D5EE5D16C0A887C4A5481 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessProfile/<>c::<OnEnable>b__2_0(UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3COnEnableU3Eb__2_0_m4E9BE45F5C322F3C227039CB72B5CE5FD569F4A6 (U3CU3Ec_t9177938DD17D2938706D5EE5D16C0A887C4A5481 * __this, PostProcessEffectSettings_t2F43C0693DFF9BD09B921BB6278EC086A6F817F0 * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settings.RemoveAll(x => x == null);
		PostProcessEffectSettings_t2F43C0693DFF9BD09B921BB6278EC086A6F817F0 * L_0 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B * ComputeShaders_Clone_m4C1F80D224F4997657B5CB621E6912167850FAAF (ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B * V_0 = NULL;
	{
		// return (ComputeShaders)MemberwiseClone();
		RuntimeObject * L_0;
		L_0 = Object_MemberwiseClone_m0AEE84C38E9A87C372139B4C342454553F0F6392(__this, /*hidden argument*/NULL);
		V_0 = ((ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B *)CastclassSealed((RuntimeObject*)L_0, ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		// }
		ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeShaders__ctor_mB4F115D586184617C09790914E78FA6F4FF1CDD5 (ComputeShaders_tF7438C885E5B4FA9CF3E25E5F3983A349971768B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessResources/SMAALuts::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMAALuts__ctor_mB89E9BBA28FD1F388D17F3AC4FAEFE466A5A9408 (SMAALuts_t7B662D41B4C6B2CF97D9C5363B61AA14808C2932 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2 * Shaders_Clone_mB5A22F5783F424816A1F720B7067B83165D18EE0 (Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2 * V_0 = NULL;
	{
		// return (Shaders)MemberwiseClone();
		RuntimeObject * L_0;
		L_0 = Object_MemberwiseClone_m0AEE84C38E9A87C372139B4C342454553F0F6392(__this, /*hidden argument*/NULL);
		V_0 = ((Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2 *)CastclassSealed((RuntimeObject*)L_0, Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shaders__ctor_mDB6F202FB553B707FE57621ABD7DE9CD03F6D5BA (Shaders_t9D6295F32096E05FACAA19A418B4642CB87A2BC2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mBECE476BF31EC12809FDABDAE7B3AB117FB5A0BF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE39BDF7A48F8422A0FF101B5F67BD03D1237B2F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE39BDF7A48F8422A0FF101B5F67BD03D1237B2F8 * L_0 = (U3CU3Ec_tE39BDF7A48F8422A0FF101B5F67BD03D1237B2F8 *)il2cpp_codegen_object_new(U3CU3Ec_tE39BDF7A48F8422A0FF101B5F67BD03D1237B2F8_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2BC17DAAA4D21C741B7E25F193024C940AB1F8F3(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE39BDF7A48F8422A0FF101B5F67BD03D1237B2F8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE39BDF7A48F8422A0FF101B5F67BD03D1237B2F8_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2BC17DAAA4D21C741B7E25F193024C940AB1F8F3 (U3CU3Ec_tE39BDF7A48F8422A0FF101B5F67BD03D1237B2F8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Type> UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<>c::<GetAllAssemblyTypes>b__87_0(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CGetAllAssemblyTypesU3Eb__87_0_mEC16CBD76F4B67B66784693CA638E845E8B02BE9 (U3CU3Ec_tE39BDF7A48F8422A0FF101B5F67BD03D1237B2F8 * __this, Assembly_t * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var innerTypes = new Type[0];
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_0 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)0);
		V_0 = L_0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		// innerTypes = t.GetTypes();
		Assembly_t * L_1 = ___t0;
		NullCheck(L_1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2;
		L_2 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(16 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_1);
		V_0 = L_2;
		goto IL_0018;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0013;
		throw e;
	}

CATCH_0013:
	{ // begin catch(System.Object)
		// catch { }
		goto IL_0018;
	} // end catch (depth: 1)

IL_0018:
	{
		// return innerTypes;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = V_0;
		V_1 = (RuntimeObject*)L_3;
		goto IL_001c;
	}

IL_001c:
	{
		// });
		RuntimeObject* L_4 = V_1;
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
// System.Void UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer/QualityPreset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualityPreset__ctor_m53DF5C886DB82C2C535810DA644183104AA1FAFF (QualityPreset_t17870FCA533EFE2A04B49C5B46F84ACFF139B971 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertySheetFactory_t2D2278105A154ED6036D5BE72D09359A5FB94835 * PostProcessRenderContext_get_propertySheets_mE1135E07BE4F59354198DF05198E64CAF2E41D5C_inline (PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * __this, const RuntimeMethod* method)
{
	{
		// public PropertySheetFactory propertySheets { get; internal set; }
		PropertySheetFactory_t2D2278105A154ED6036D5BE72D09359A5FB94835 * L_0 = __this->get_U3CpropertySheetsU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC * PostProcessRenderContext_get_resources_mEC353AFE49A4A72D561FCB8758E364578AB2B9D7_inline (PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * __this, const RuntimeMethod* method)
{
	{
		// public PostProcessResources resources { get; internal set; }
		PostProcessResources_tD090C30443E3F3DD5DF8D87494BEE3691EF5C2CC * L_0 = __this->get_U3CresourcesU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * PropertySheet_get_properties_m3AB962E1C6A0C44D98E16AFBB73B40BA5E21B504_inline (PropertySheet_t30AED85D66CC3C9161B764430CC8FA6FF3B6B7A7 * __this, const RuntimeMethod* method)
{
	{
		// public MaterialPropertyBlock properties { get; private set; }
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_0 = __this->get_U3CpropertiesU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * PostProcessRenderContext_get_command_mE54DFA2523219208C87BA95ECD2D766889DACA71_inline (PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * __this, const RuntimeMethod* method)
{
	{
		// public CommandBuffer command { get; set; }
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_0 = __this->get_U3CcommandU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PostProcessRenderContext_get_width_m4965F17411CA0E2AEC993B02D9CEEB0E258E8A74_inline (PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * __this, const RuntimeMethod* method)
{
	{
		// public int width { get; private set; }
		int32_t L_0 = __this->get_U3CwidthU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PostProcessRenderContext_get_height_m3F500068E9E598DA75850D864AEC83708B1D9BD4_inline (PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * __this, const RuntimeMethod* method)
{
	{
		// public int height { get; private set; }
		int32_t L_0 = __this->get_U3CheightU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PostProcessRenderContext_get_sourceFormat_mD846BE618AD913E5A3EFF8AE3BDFD1B2DF53896E_inline (PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * __this, const RuntimeMethod* method)
{
	{
		// public RenderTextureFormat sourceFormat { get; set; }
		int32_t L_0 = __this->get_U3CsourceFormatU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  PostProcessRenderContext_get_source_m7AB20613A7F91FDB5B7872995E6DD205A9D52135_inline (PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * __this, const RuntimeMethod* method)
{
	{
		// public RenderTargetIdentifier source { get; set; }
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_0 = __this->get_U3CsourceU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  PostProcessRenderContext_get_destination_mD5A4C6656F4FC57B0FF57FA7F7CC597F62BD2C88_inline (PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * __this, const RuntimeMethod* method)
{
	{
		// public RenderTargetIdentifier destination { get; set; }
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_0 = __this->get_U3CdestinationU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TemporalAntialiasing_get_sampleIndex_m91D33ECE0C6D0DC89B585FF7DEB824239655C94F_inline (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, const RuntimeMethod* method)
{
	{
		// public int sampleIndex { get; private set; }
		int32_t L_0 = __this->get_U3CsampleIndexU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TemporalAntialiasing_set_sampleIndex_m7DBCBC1B1A1423533E4CDFDB5224F49BE48405AE_inline (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int sampleIndex { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CsampleIndexU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TemporalAntialiasing_set_jitter_m9450BBE1B75081EE0E5084A2A83B06DD89748C1B_inline (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 jitter { get; private set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_U3CjitterU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  TemporalAntialiasing_get_jitter_mD89AFB2AFDEE63822CF1C632364408FDF76FB418_inline (TemporalAntialiasing_tEE12586F0D74638CF363617DAF329F5BD72E67B6 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 jitter { get; private set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CjitterU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PostProcessRenderContext_get_screenWidth_m9F3ECB9E1D36F430FADA9EC9C19A8EAD0C714D04_inline (PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * __this, const RuntimeMethod* method)
{
	{
		// public int screenWidth { get; private set; }
		int32_t L_0 = __this->get_U3CscreenWidthU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PostProcessRenderContext_get_screenHeight_m6E8CD22AEA7C1A754C1652DF457FA7D6E11C84B9_inline (PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * __this, const RuntimeMethod* method)
{
	{
		// public int screenHeight { get; private set; }
		int32_t L_0 = __this->get_U3CscreenHeightU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PostProcessRenderContext_get_stereoActive_mFF6F57ABA3F8A044D7EE09143A5F8C47B5EF6AE3_inline (PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * __this, const RuntimeMethod* method)
{
	{
		// public bool stereoActive { get; private set; }
		bool L_0 = __this->get_U3CstereoActiveU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PostProcessRenderContext_get_xrActiveEye_mF542BBCE2BE780B1018E8640BF92BF44A1B25586_inline (PostProcessRenderContext_t4001B4D308D662025D2A74FB357B9324C6751EF5 * __this, const RuntimeMethod* method)
{
	{
		// public int xrActiveEye { get; private set; }
		int32_t L_0 = __this->get_U3CxrActiveEyeU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * Monitor_get_output_m7CEEB7508AD1B405744EA32D5FB767644FD2776D_inline (Monitor_tEB1AC1F82D87F6BEE4839CF882097D5889302372 * __this, const RuntimeMethod* method)
{
	{
		// public RenderTexture output { get; protected set; }
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = __this->get_U3CoutputU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HableCurve_get_inverseWhitePoint_mD9A48EF5A7542BEF6DECEC1F7F6354D210B7C90D_inline (HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9 * __this, const RuntimeMethod* method)
{
	{
		// public float inverseWhitePoint { get; private set; }
		float L_0 = __this->get_U3CinverseWhitePointU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HableCurve_get_x0_m611124271E4A894A9FB9D350C2F4215AE20A10E7_inline (HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9 * __this, const RuntimeMethod* method)
{
	{
		// internal float x0 { get; private set; }
		float L_0 = __this->get_U3Cx0U3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HableCurve_get_x1_mA8B86FCBC557774456D8B63D57FFDFB913BA42B9_inline (HableCurve_t7D3F5A8ADF49F1BFC5F8BE98341C12F143668CD9 * __this, const RuntimeMethod* method)
{
	{
		// internal float x1 { get; private set; }
		float L_0 = __this->get_U3Cx1U3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PostProcessAttribute_tB0E64790042AFD9FC695619EA4186DF608E1EDF4 * PostProcessBundle_get_attribute_mBF4459B0E62B71CD348781716456E69DC676D03F_inline (PostProcessBundle_tB61A95212353716F4AE3896A6DF3B19AE53FB791 * __this, const RuntimeMethod* method)
{
	{
		// public PostProcessAttribute attribute { get; private set; }
		PostProcessAttribute_tB0E64790042AFD9FC695619EA4186DF608E1EDF4 * L_0 = __this->get_U3CattributeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PostProcessEffectSettings_t2F43C0693DFF9BD09B921BB6278EC086A6F817F0 * PostProcessBundle_get_settings_m2636D9B1938880F353CBC47627D3F713D65009BD_inline (PostProcessBundle_tB61A95212353716F4AE3896A6DF3B19AE53FB791 * __this, const RuntimeMethod* method)
{
	{
		// public PostProcessEffectSettings settings { get; private set; }
		PostProcessEffectSettings_t2F43C0693DFF9BD09B921BB6278EC086A6F817F0 * L_0 = __this->get_U3CsettingsU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get__items_1();
		int32_t L_3 = ___index0;
		int32_t L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * PostProcessEffectRenderer_1_get_settings_m709F0A9EA59359EA57C0D2FC86E98C54627B96DC_gshared_inline (PostProcessEffectRenderer_1_t6C11DDDFC60F401B58CDCCD46359E86BB3487DDF * __this, const RuntimeMethod* method)
{
	{
		// public T settings { get; internal set; }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CsettingsU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
