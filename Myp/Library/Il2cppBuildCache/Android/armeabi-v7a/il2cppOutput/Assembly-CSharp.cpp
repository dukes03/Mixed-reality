#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6;
// System.Collections.Generic.IEnumerable`1<UnityEngine.AudioClip>
struct IEnumerable_1_t30B7E7617D336030ACCCC95DAAA21DFB2E3B3D5A;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Material>
struct IEnumerable_1_tC56A812DB62E3B254ED968BE9E6EE9AD8151B7BB;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<UnityEngine.PhysicMaterial>
struct IEnumerable_1_tBA354311F2DAD030E3E118FCC5F1531505BD38DD;
// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.PhysicMaterial>
struct List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_t6331523A19E51FB87CA899920C03B10A48A562B0;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.PhysicMaterial[]
struct PhysicMaterialU5BU5D_tBD775EA2B6C77E856BFA64B5A03E8B22D143E721;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// CameraPointer
struct CameraPointer_tAAACBC47739EFC0CF4B3FF795EF2F73EF52197DE;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635;
// CardboardStartup
struct CardboardStartup_tF85C3681559D03FD1B61614D63E506423D797D40;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// Doors
struct Doors_tF7396FB953CFABFE1C79EE753538345C378BD8C6;
// FirstPersonAIO
struct FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// ObjectController
struct ObjectController_tEE8AA18007DEB85D79F9AC0438AC2FB36BFAF5CD;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// VrModeController
struct VrModeController_tB06B91255F46A0456E69DDF20B0915136321030A;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// FirstPersonAIO/<CameraShake>d__94
struct U3CCameraShakeU3Ed__94_tA78701DAD782FD2C2768FC3C7F638BA8B9DE9D5A;
// FirstPersonAIO/AdvancedSettings
struct AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE;
// FirstPersonAIO/CrouchModifiers
struct CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96;
// FirstPersonAIO/DynamicFootStep
struct DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// VrModeController/<StartXR>d__10
struct U3CStartXRU3Ed__10_t058BBCB88A982308C334FFCC556D1E5495FCE500;

IL2CPP_EXTERN_C RuntimeClass* AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Api_t3945CE98308AD5031CC7F76B68A978B131AF9BE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCameraShakeU3Ed__94_tA78701DAD782FD2C2768FC3C7F638BA8B9DE9D5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartXRU3Ed__10_t058BBCB88A982308C334FFCC556D1E5495FCE500_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1690F87675D46404DB6EEBA8A4B18F2A7FD4611D;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2A7B630B7137FE0D9A770BC44B619CE324CB5173;
IL2CPP_EXTERN_C String_t* _stringLiteral2C94361C3CF0648D05679FC64B7AD666F8D704CA;
IL2CPP_EXTERN_C String_t* _stringLiteral38396B3F6667C28970D73F84E06D0DCE797FDEB8;
IL2CPP_EXTERN_C String_t* _stringLiteral61CFB84C83B441479C0A89B64CDD931B45CCA6ED;
IL2CPP_EXTERN_C String_t* _stringLiteral6623B7518CE915C9C8E80B3065D7B8EBE9183233;
IL2CPP_EXTERN_C String_t* _stringLiteral6BF21D1AFA791809AE91DC624664271989958A14;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral747530FAD2C7DF5B08668539364CCC2CD2B5AFC2;
IL2CPP_EXTERN_C String_t* _stringLiteral7892A84274C1DC4A2351A49903EB298DEA99C240;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral86BE4B474B5F0F12482FF72DB129DC2A876BC965;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674;
IL2CPP_EXTERN_C String_t* _stringLiteral9573E0F11BD7081DAAEACC92F301DBBC3F5D12BF;
IL2CPP_EXTERN_C String_t* _stringLiteral9B1958E6AE4057A73CD052F6EFFCC70AD0F447B4;
IL2CPP_EXTERN_C String_t* _stringLiteralAF171607C5CF88EC109EFE87AEB48F82DFCE3449;
IL2CPP_EXTERN_C String_t* _stringLiteralB3BEFB30EE14C86D4F83AFF1710933367EBF96DE;
IL2CPP_EXTERN_C String_t* _stringLiteralB81A1EDFC9FCE7D754F9199BAED4FF1E125B0C7E;
IL2CPP_EXTERN_C String_t* _stringLiteralC2D4DC830155E81233556A1B0F05DF4FF642507B;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCEB0BDA7F3C408039249BABFF9F12BA77EB7CFE3;
IL2CPP_EXTERN_C String_t* _stringLiteralE4D1D91E707649742B086EDB3E0F4EFA9754545A;
IL2CPP_EXTERN_C String_t* _stringLiteralF7B1A88D0BF4B03C241DD6AA01873B38C6414206;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m2B9A09217489CB456933DEA112CA70C10AD3B9F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m05B3E50A24E2F28E1C59600F57CA6665D0C601FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisPhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2_m641CE0F6AA61E1866047EDC77FB8C79C51595F95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1_m3C72FB2112A8AE0CE0CF529406A7D2D0F1B78DC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD7BF125583B13806BB804A2EF0A69334F12C7660_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m0FC030794383A6796E69E556941837417DA8ADC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m32E837C20616E9C51DCBF029753220B3BE712C6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1C98EA9359999773111E0918F7CE4783B66413F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE58237A66DC244F0D9956EF071E36DF135972BC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mC47650E4AF39DD6B43071C391231486FB338728E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCameraShakeU3Ed__94_System_Collections_IEnumerator_Reset_mF2390502361D9467DE673CEF8AE36DD6BBB475ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartXRU3Ed__10_System_Collections_IEnumerator_Reset_mB9FC26327447A2E4DA95BCADE6C7C48B25994317_RuntimeMethod_var;
struct ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 ;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8, ____items_1)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get__items_1() const { return ____items_1; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8_StaticFields, ____emptyArray_5)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4, ____items_1)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get__items_1() const { return ____items_1; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_StaticFields, ____emptyArray_5)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


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


// System.Collections.Generic.List`1<UnityEngine.PhysicMaterial>
struct List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PhysicMaterialU5BU5D_tBD775EA2B6C77E856BFA64B5A03E8B22D143E721* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF, ____items_1)); }
	inline PhysicMaterialU5BU5D_tBD775EA2B6C77E856BFA64B5A03E8B22D143E721* get__items_1() const { return ____items_1; }
	inline PhysicMaterialU5BU5D_tBD775EA2B6C77E856BFA64B5A03E8B22D143E721** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PhysicMaterialU5BU5D_tBD775EA2B6C77E856BFA64B5A03E8B22D143E721* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PhysicMaterialU5BU5D_tBD775EA2B6C77E856BFA64B5A03E8B22D143E721* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF_StaticFields, ____emptyArray_5)); }
	inline PhysicMaterialU5BU5D_tBD775EA2B6C77E856BFA64B5A03E8B22D143E721* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PhysicMaterialU5BU5D_tBD775EA2B6C77E856BFA64B5A03E8B22D143E721** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PhysicMaterialU5BU5D_tBD775EA2B6C77E856BFA64B5A03E8B22D143E721* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// FirstPersonAIO/<CameraShake>d__94
struct U3CCameraShakeU3Ed__94_tA78701DAD782FD2C2768FC3C7F638BA8B9DE9D5A  : public RuntimeObject
{
public:
	// System.Int32 FirstPersonAIO/<CameraShake>d__94::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FirstPersonAIO/<CameraShake>d__94::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// FirstPersonAIO FirstPersonAIO/<CameraShake>d__94::<>4__this
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * ___U3CU3E4__this_2;
	// System.Single FirstPersonAIO/<CameraShake>d__94::Magnitude
	float ___Magnitude_3;
	// System.Single FirstPersonAIO/<CameraShake>d__94::Duration
	float ___Duration_4;
	// System.Single FirstPersonAIO/<CameraShake>d__94::<elapsed>5__2
	float ___U3CelapsedU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCameraShakeU3Ed__94_tA78701DAD782FD2C2768FC3C7F638BA8B9DE9D5A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCameraShakeU3Ed__94_tA78701DAD782FD2C2768FC3C7F638BA8B9DE9D5A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCameraShakeU3Ed__94_tA78701DAD782FD2C2768FC3C7F638BA8B9DE9D5A, ___U3CU3E4__this_2)); }
	inline FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_Magnitude_3() { return static_cast<int32_t>(offsetof(U3CCameraShakeU3Ed__94_tA78701DAD782FD2C2768FC3C7F638BA8B9DE9D5A, ___Magnitude_3)); }
	inline float get_Magnitude_3() const { return ___Magnitude_3; }
	inline float* get_address_of_Magnitude_3() { return &___Magnitude_3; }
	inline void set_Magnitude_3(float value)
	{
		___Magnitude_3 = value;
	}

	inline static int32_t get_offset_of_Duration_4() { return static_cast<int32_t>(offsetof(U3CCameraShakeU3Ed__94_tA78701DAD782FD2C2768FC3C7F638BA8B9DE9D5A, ___Duration_4)); }
	inline float get_Duration_4() const { return ___Duration_4; }
	inline float* get_address_of_Duration_4() { return &___Duration_4; }
	inline void set_Duration_4(float value)
	{
		___Duration_4 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CCameraShakeU3Ed__94_tA78701DAD782FD2C2768FC3C7F638BA8B9DE9D5A, ___U3CelapsedU3E5__2_5)); }
	inline float get_U3CelapsedU3E5__2_5() const { return ___U3CelapsedU3E5__2_5; }
	inline float* get_address_of_U3CelapsedU3E5__2_5() { return &___U3CelapsedU3E5__2_5; }
	inline void set_U3CelapsedU3E5__2_5(float value)
	{
		___U3CelapsedU3E5__2_5 = value;
	}
};


// VrModeController/<StartXR>d__10
struct U3CStartXRU3Ed__10_t058BBCB88A982308C334FFCC556D1E5495FCE500  : public RuntimeObject
{
public:
	// System.Int32 VrModeController/<StartXR>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VrModeController/<StartXR>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartXRU3Ed__10_t058BBCB88A982308C334FFCC556D1E5495FCE500, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartXRU3Ed__10_t058BBCB88A982308C334FFCC556D1E5495FCE500, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
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


// UnityEngine.Keyframe
struct Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F 
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


// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;

public:
	inline static int32_t get_offset_of_U3CwaitTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___U3CwaitTimeU3Ek__BackingField_0)); }
	inline float get_U3CwaitTimeU3Ek__BackingField_0() const { return ___U3CwaitTimeU3Ek__BackingField_0; }
	inline float* get_address_of_U3CwaitTimeU3Ek__BackingField_0() { return &___U3CwaitTimeU3Ek__BackingField_0; }
	inline void set_U3CwaitTimeU3Ek__BackingField_0(float value)
	{
		___U3CwaitTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_WaitUntilTime_1() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___m_WaitUntilTime_1)); }
	inline float get_m_WaitUntilTime_1() const { return ___m_WaitUntilTime_1; }
	inline float* get_address_of_m_WaitUntilTime_1() { return &___m_WaitUntilTime_1; }
	inline void set_m_WaitUntilTime_1(float value)
	{
		___m_WaitUntilTime_1 = value;
	}
};


// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
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

// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Impulse_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_RelativeVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Body_2() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Body_2)); }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * get_m_Body_2() const { return ___m_Body_2; }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 ** get_address_of_m_Body_2() { return &___m_Body_2; }
	inline void set_m_Body_2(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * value)
	{
		___m_Body_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Body_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Collider_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};

// UnityEngine.CollisionDetectionMode
struct CollisionDetectionMode_t27C32CDA300AD4F1A49B788078FA7765C54D8165 
{
public:
	// System.Int32 UnityEngine.CollisionDetectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CollisionDetectionMode_t27C32CDA300AD4F1A49B788078FA7765C54D8165, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ContactPoint
struct ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 
{
public:
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_2;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_3;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_4;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisColliderInstanceID_2() { return static_cast<int32_t>(offsetof(ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017, ___m_ThisColliderInstanceID_2)); }
	inline int32_t get_m_ThisColliderInstanceID_2() const { return ___m_ThisColliderInstanceID_2; }
	inline int32_t* get_address_of_m_ThisColliderInstanceID_2() { return &___m_ThisColliderInstanceID_2; }
	inline void set_m_ThisColliderInstanceID_2(int32_t value)
	{
		___m_ThisColliderInstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherColliderInstanceID_3() { return static_cast<int32_t>(offsetof(ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017, ___m_OtherColliderInstanceID_3)); }
	inline int32_t get_m_OtherColliderInstanceID_3() const { return ___m_OtherColliderInstanceID_3; }
	inline int32_t* get_address_of_m_OtherColliderInstanceID_3() { return &___m_OtherColliderInstanceID_3; }
	inline void set_m_OtherColliderInstanceID_3(int32_t value)
	{
		___m_OtherColliderInstanceID_3 = value;
	}

	inline static int32_t get_offset_of_m_Separation_4() { return static_cast<int32_t>(offsetof(ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017, ___m_Separation_4)); }
	inline float get_m_Separation_4() const { return ___m_Separation_4; }
	inline float* get_address_of_m_Separation_4() { return &___m_Separation_4; }
	inline void set_m_Separation_4(float value)
	{
		___m_Separation_4 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.CursorLockMode
struct CursorLockMode_t247B41EE9632E4AD759EDADDB351AE0075162D04 
{
public:
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CursorLockMode_t247B41EE9632E4AD759EDADDB351AE0075162D04, ___value___2)); }
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

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UnityEngine.PhysicMaterialCombine
struct PhysicMaterialCombine_tFE36CA51E5FDF7DB30B07E42BC4D17A3EBE4BBBE 
{
public:
	// System.Int32 UnityEngine.PhysicMaterialCombine::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PhysicMaterialCombine_tFE36CA51E5FDF7DB30B07E42BC4D17A3EBE4BBBE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.QueryTriggerInteraction
struct QueryTriggerInteraction_t9B82FB8CCAF559F47B6B8C0ECE197515ABFA96B0 
{
public:
	// System.Int32 UnityEngine.QueryTriggerInteraction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QueryTriggerInteraction_t9B82FB8CCAF559F47B6B8C0ECE197515ABFA96B0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.RenderMode
struct RenderMode_tFF8E9ABC771ACEBD5ACC2D9DFB02264E0EA6CDBF 
{
public:
	// System.Int32 UnityEngine.RenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderMode_tFF8E9ABC771ACEBD5ACC2D9DFB02264E0EA6CDBF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RigidbodyConstraints
struct RigidbodyConstraints_tB1AC534C460083518E5C8664CE62334E3B5A0F97 
{
public:
	// System.Int32 UnityEngine.RigidbodyConstraints::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RigidbodyConstraints_tB1AC534C460083518E5C8664CE62334E3B5A0F97, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RigidbodyInterpolation
struct RigidbodyInterpolation_tB7232E79E6FFF55DE2A57816D19DADE2550710D2 
{
public:
	// System.Int32 UnityEngine.RigidbodyInterpolation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RigidbodyInterpolation_tB7232E79E6FFF55DE2A57816D19DADE2550710D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchPhase
struct TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.WrapMode
struct WrapMode_t0DF566E32B136795606714DB9A11A3DC170F5468 
{
public:
	// System.Int32 UnityEngine.WrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WrapMode_t0DF566E32B136795606714DB9A11A3DC170F5468, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.CanvasScaler/ScaleMode
struct ScaleMode_t0CBCB9FD5EB6F84B682D0F5E4203D0925BCDB069 
{
public:
	// System.Int32 UnityEngine.UI.CanvasScaler/ScaleMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScaleMode_t0CBCB9FD5EB6F84B682D0F5E4203D0925BCDB069, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.CanvasScaler/ScreenMatchMode
struct ScreenMatchMode_t64D475564756A5C040CC9B7C62D321C7133970DB 
{
public:
	// System.Int32 UnityEngine.UI.CanvasScaler/ScreenMatchMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenMatchMode_t64D475564756A5C040CC9B7C62D321C7133970DB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.CanvasScaler/Unit
struct Unit_t48D9126E954FB214B48FD2E199CB041FF97CFF80 
{
public:
	// System.Int32 UnityEngine.UI.CanvasScaler/Unit::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Unit_t48D9126E954FB214B48FD2E199CB041FF97CFF80, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FirstPersonAIO/CameraInputMethod
struct CameraInputMethod_tE7A44F5C419CE17412CE4367839E82717E394E2D 
{
public:
	// System.Int32 FirstPersonAIO/CameraInputMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraInputMethod_tE7A44F5C419CE17412CE4367839E82717E394E2D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FirstPersonAIO/FSMode
struct FSMode_t0BC8BE4DB523936E70128DCC2247FBA1593EE2E7 
{
public:
	// System.Int32 FirstPersonAIO/FSMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FSMode_t0BC8BE4DB523936E70128DCC2247FBA1593EE2E7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FirstPersonAIO/InvertMouseInput
struct InvertMouseInput_t8DD9223AFCE17EB9149B7B174F189DCC192ACFC7 
{
public:
	// System.Int32 FirstPersonAIO/InvertMouseInput::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InvertMouseInput_t8DD9223AFCE17EB9149B7B174F189DCC192ACFC7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FirstPersonAIO/DynamicFootStep/matMode
struct matMode_tAD805DC0990B3745499A999112C795D2A32E3E5B 
{
public:
	// System.Int32 FirstPersonAIO/DynamicFootStep/matMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(matMode_tAD805DC0990B3745499A999112C795D2A32E3E5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.PhysicMaterial
struct PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Touch
struct Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// FirstPersonAIO/AdvancedSettings
struct AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE  : public RuntimeObject
{
public:
	// System.Single FirstPersonAIO/AdvancedSettings::gravityMultiplier
	float ___gravityMultiplier_0;
	// UnityEngine.PhysicMaterial FirstPersonAIO/AdvancedSettings::zeroFrictionMaterial
	PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * ___zeroFrictionMaterial_1;
	// UnityEngine.PhysicMaterial FirstPersonAIO/AdvancedSettings::highFrictionMaterial
	PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * ___highFrictionMaterial_2;
	// System.Single FirstPersonAIO/AdvancedSettings::maxSlopeAngle
	float ___maxSlopeAngle_3;
	// System.Boolean FirstPersonAIO/AdvancedSettings::isTouchingWalkable
	bool ___isTouchingWalkable_4;
	// System.Boolean FirstPersonAIO/AdvancedSettings::isTouchingUpright
	bool ___isTouchingUpright_5;
	// System.Boolean FirstPersonAIO/AdvancedSettings::isTouchingFlat
	bool ___isTouchingFlat_6;
	// System.Single FirstPersonAIO/AdvancedSettings::maxWallShear
	float ___maxWallShear_7;
	// System.Single FirstPersonAIO/AdvancedSettings::maxStepHeight
	float ___maxStepHeight_8;
	// System.Boolean FirstPersonAIO/AdvancedSettings::stairMiniHop
	bool ___stairMiniHop_9;
	// UnityEngine.RaycastHit FirstPersonAIO/AdvancedSettings::surfaceAngleCheck
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___surfaceAngleCheck_10;
	// UnityEngine.Vector3 FirstPersonAIO/AdvancedSettings::curntGroundNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___curntGroundNormal_11;
	// UnityEngine.Vector2 FirstPersonAIO/AdvancedSettings::moveDirRef
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___moveDirRef_12;
	// System.Single FirstPersonAIO/AdvancedSettings::lastKnownSlopeAngle
	float ___lastKnownSlopeAngle_13;
	// System.Single FirstPersonAIO/AdvancedSettings::FOVKickAmount
	float ___FOVKickAmount_14;
	// System.Single FirstPersonAIO/AdvancedSettings::changeTime
	float ___changeTime_15;
	// System.Single FirstPersonAIO/AdvancedSettings::fovRef
	float ___fovRef_16;

public:
	inline static int32_t get_offset_of_gravityMultiplier_0() { return static_cast<int32_t>(offsetof(AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE, ___gravityMultiplier_0)); }
	inline float get_gravityMultiplier_0() const { return ___gravityMultiplier_0; }
	inline float* get_address_of_gravityMultiplier_0() { return &___gravityMultiplier_0; }
	inline void set_gravityMultiplier_0(float value)
	{
		___gravityMultiplier_0 = value;
	}

	inline static int32_t get_offset_of_zeroFrictionMaterial_1() { return static_cast<int32_t>(offsetof(AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE, ___zeroFrictionMaterial_1)); }
	inline PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * get_zeroFrictionMaterial_1() const { return ___zeroFrictionMaterial_1; }
	inline PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 ** get_address_of_zeroFrictionMaterial_1() { return &___zeroFrictionMaterial_1; }
	inline void set_zeroFrictionMaterial_1(PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * value)
	{
		___zeroFrictionMaterial_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___zeroFrictionMaterial_1), (void*)value);
	}

	inline static int32_t get_offset_of_highFrictionMaterial_2() { return static_cast<int32_t>(offsetof(AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE, ___highFrictionMaterial_2)); }
	inline PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * get_highFrictionMaterial_2() const { return ___highFrictionMaterial_2; }
	inline PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 ** get_address_of_highFrictionMaterial_2() { return &___highFrictionMaterial_2; }
	inline void set_highFrictionMaterial_2(PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * value)
	{
		___highFrictionMaterial_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___highFrictionMaterial_2), (void*)value);
	}

	inline static int32_t get_offset_of_maxSlopeAngle_3() { return static_cast<int32_t>(offsetof(AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE, ___maxSlopeAngle_3)); }
	inline float get_maxSlopeAngle_3() const { return ___maxSlopeAngle_3; }
	inline float* get_address_of_maxSlopeAngle_3() { return &___maxSlopeAngle_3; }
	inline void set_maxSlopeAngle_3(float value)
	{
		___maxSlopeAngle_3 = value;
	}

	inline static int32_t get_offset_of_isTouchingWalkable_4() { return static_cast<int32_t>(offsetof(AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE, ___isTouchingWalkable_4)); }
	inline bool get_isTouchingWalkable_4() const { return ___isTouchingWalkable_4; }
	inline bool* get_address_of_isTouchingWalkable_4() { return &___isTouchingWalkable_4; }
	inline void set_isTouchingWalkable_4(bool value)
	{
		___isTouchingWalkable_4 = value;
	}

	inline static int32_t get_offset_of_isTouchingUpright_5() { return static_cast<int32_t>(offsetof(AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE, ___isTouchingUpright_5)); }
	inline bool get_isTouchingUpright_5() const { return ___isTouchingUpright_5; }
	inline bool* get_address_of_isTouchingUpright_5() { return &___isTouchingUpright_5; }
	inline void set_isTouchingUpright_5(bool value)
	{
		___isTouchingUpright_5 = value;
	}

	inline static int32_t get_offset_of_isTouchingFlat_6() { return static_cast<int32_t>(offsetof(AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE, ___isTouchingFlat_6)); }
	inline bool get_isTouchingFlat_6() const { return ___isTouchingFlat_6; }
	inline bool* get_address_of_isTouchingFlat_6() { return &___isTouchingFlat_6; }
	inline void set_isTouchingFlat_6(bool value)
	{
		___isTouchingFlat_6 = value;
	}

	inline static int32_t get_offset_of_maxWallShear_7() { return static_cast<int32_t>(offsetof(AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE, ___maxWallShear_7)); }
	inline float get_maxWallShear_7() const { return ___maxWallShear_7; }
	inline float* get_address_of_maxWallShear_7() { return &___maxWallShear_7; }
	inline void set_maxWallShear_7(float value)
	{
		___maxWallShear_7 = value;
	}

	inline static int32_t get_offset_of_maxStepHeight_8() { return static_cast<int32_t>(offsetof(AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE, ___maxStepHeight_8)); }
	inline float get_maxStepHeight_8() const { return ___maxStepHeight_8; }
	inline float* get_address_of_maxStepHeight_8() { return &___maxStepHeight_8; }
	inline void set_maxStepHeight_8(float value)
	{
		___maxStepHeight_8 = value;
	}

	inline static int32_t get_offset_of_stairMiniHop_9() { return static_cast<int32_t>(offsetof(AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE, ___stairMiniHop_9)); }
	inline bool get_stairMiniHop_9() const { return ___stairMiniHop_9; }
	inline bool* get_address_of_stairMiniHop_9() { return &___stairMiniHop_9; }
	inline void set_stairMiniHop_9(bool value)
	{
		___stairMiniHop_9 = value;
	}

	inline static int32_t get_offset_of_surfaceAngleCheck_10() { return static_cast<int32_t>(offsetof(AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE, ___surfaceAngleCheck_10)); }
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  get_surfaceAngleCheck_10() const { return ___surfaceAngleCheck_10; }
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * get_address_of_surfaceAngleCheck_10() { return &___surfaceAngleCheck_10; }
	inline void set_surfaceAngleCheck_10(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
	{
		___surfaceAngleCheck_10 = value;
	}

	inline static int32_t get_offset_of_curntGroundNormal_11() { return static_cast<int32_t>(offsetof(AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE, ___curntGroundNormal_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_curntGroundNormal_11() const { return ___curntGroundNormal_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_curntGroundNormal_11() { return &___curntGroundNormal_11; }
	inline void set_curntGroundNormal_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___curntGroundNormal_11 = value;
	}

	inline static int32_t get_offset_of_moveDirRef_12() { return static_cast<int32_t>(offsetof(AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE, ___moveDirRef_12)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_moveDirRef_12() const { return ___moveDirRef_12; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_moveDirRef_12() { return &___moveDirRef_12; }
	inline void set_moveDirRef_12(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___moveDirRef_12 = value;
	}

	inline static int32_t get_offset_of_lastKnownSlopeAngle_13() { return static_cast<int32_t>(offsetof(AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE, ___lastKnownSlopeAngle_13)); }
	inline float get_lastKnownSlopeAngle_13() const { return ___lastKnownSlopeAngle_13; }
	inline float* get_address_of_lastKnownSlopeAngle_13() { return &___lastKnownSlopeAngle_13; }
	inline void set_lastKnownSlopeAngle_13(float value)
	{
		___lastKnownSlopeAngle_13 = value;
	}

	inline static int32_t get_offset_of_FOVKickAmount_14() { return static_cast<int32_t>(offsetof(AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE, ___FOVKickAmount_14)); }
	inline float get_FOVKickAmount_14() const { return ___FOVKickAmount_14; }
	inline float* get_address_of_FOVKickAmount_14() { return &___FOVKickAmount_14; }
	inline void set_FOVKickAmount_14(float value)
	{
		___FOVKickAmount_14 = value;
	}

	inline static int32_t get_offset_of_changeTime_15() { return static_cast<int32_t>(offsetof(AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE, ___changeTime_15)); }
	inline float get_changeTime_15() const { return ___changeTime_15; }
	inline float* get_address_of_changeTime_15() { return &___changeTime_15; }
	inline void set_changeTime_15(float value)
	{
		___changeTime_15 = value;
	}

	inline static int32_t get_offset_of_fovRef_16() { return static_cast<int32_t>(offsetof(AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE, ___fovRef_16)); }
	inline float get_fovRef_16() const { return ___fovRef_16; }
	inline float* get_address_of_fovRef_16() { return &___fovRef_16; }
	inline void set_fovRef_16(float value)
	{
		___fovRef_16 = value;
	}
};


// FirstPersonAIO/CrouchModifiers
struct CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96  : public RuntimeObject
{
public:
	// System.Boolean FirstPersonAIO/CrouchModifiers::useCrouch
	bool ___useCrouch_0;
	// System.Boolean FirstPersonAIO/CrouchModifiers::toggleCrouch
	bool ___toggleCrouch_1;
	// UnityEngine.KeyCode FirstPersonAIO/CrouchModifiers::crouchKey
	int32_t ___crouchKey_2;
	// System.Single FirstPersonAIO/CrouchModifiers::crouchWalkSpeedMultiplier
	float ___crouchWalkSpeedMultiplier_3;
	// System.Single FirstPersonAIO/CrouchModifiers::crouchJumpPowerMultiplier
	float ___crouchJumpPowerMultiplier_4;
	// System.Boolean FirstPersonAIO/CrouchModifiers::crouchOverride
	bool ___crouchOverride_5;
	// System.Single FirstPersonAIO/CrouchModifiers::colliderHeight
	float ___colliderHeight_6;

public:
	inline static int32_t get_offset_of_useCrouch_0() { return static_cast<int32_t>(offsetof(CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96, ___useCrouch_0)); }
	inline bool get_useCrouch_0() const { return ___useCrouch_0; }
	inline bool* get_address_of_useCrouch_0() { return &___useCrouch_0; }
	inline void set_useCrouch_0(bool value)
	{
		___useCrouch_0 = value;
	}

	inline static int32_t get_offset_of_toggleCrouch_1() { return static_cast<int32_t>(offsetof(CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96, ___toggleCrouch_1)); }
	inline bool get_toggleCrouch_1() const { return ___toggleCrouch_1; }
	inline bool* get_address_of_toggleCrouch_1() { return &___toggleCrouch_1; }
	inline void set_toggleCrouch_1(bool value)
	{
		___toggleCrouch_1 = value;
	}

	inline static int32_t get_offset_of_crouchKey_2() { return static_cast<int32_t>(offsetof(CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96, ___crouchKey_2)); }
	inline int32_t get_crouchKey_2() const { return ___crouchKey_2; }
	inline int32_t* get_address_of_crouchKey_2() { return &___crouchKey_2; }
	inline void set_crouchKey_2(int32_t value)
	{
		___crouchKey_2 = value;
	}

	inline static int32_t get_offset_of_crouchWalkSpeedMultiplier_3() { return static_cast<int32_t>(offsetof(CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96, ___crouchWalkSpeedMultiplier_3)); }
	inline float get_crouchWalkSpeedMultiplier_3() const { return ___crouchWalkSpeedMultiplier_3; }
	inline float* get_address_of_crouchWalkSpeedMultiplier_3() { return &___crouchWalkSpeedMultiplier_3; }
	inline void set_crouchWalkSpeedMultiplier_3(float value)
	{
		___crouchWalkSpeedMultiplier_3 = value;
	}

	inline static int32_t get_offset_of_crouchJumpPowerMultiplier_4() { return static_cast<int32_t>(offsetof(CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96, ___crouchJumpPowerMultiplier_4)); }
	inline float get_crouchJumpPowerMultiplier_4() const { return ___crouchJumpPowerMultiplier_4; }
	inline float* get_address_of_crouchJumpPowerMultiplier_4() { return &___crouchJumpPowerMultiplier_4; }
	inline void set_crouchJumpPowerMultiplier_4(float value)
	{
		___crouchJumpPowerMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_crouchOverride_5() { return static_cast<int32_t>(offsetof(CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96, ___crouchOverride_5)); }
	inline bool get_crouchOverride_5() const { return ___crouchOverride_5; }
	inline bool* get_address_of_crouchOverride_5() { return &___crouchOverride_5; }
	inline void set_crouchOverride_5(bool value)
	{
		___crouchOverride_5 = value;
	}

	inline static int32_t get_offset_of_colliderHeight_6() { return static_cast<int32_t>(offsetof(CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96, ___colliderHeight_6)); }
	inline float get_colliderHeight_6() const { return ___colliderHeight_6; }
	inline float* get_address_of_colliderHeight_6() { return &___colliderHeight_6; }
	inline void set_colliderHeight_6(float value)
	{
		___colliderHeight_6 = value;
	}
};


// FirstPersonAIO/DynamicFootStep
struct DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125  : public RuntimeObject
{
public:
	// FirstPersonAIO/DynamicFootStep/matMode FirstPersonAIO/DynamicFootStep::materialMode
	int32_t ___materialMode_0;
	// System.Collections.Generic.List`1<UnityEngine.PhysicMaterial> FirstPersonAIO/DynamicFootStep::woodPhysMat
	List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * ___woodPhysMat_1;
	// System.Collections.Generic.List`1<UnityEngine.PhysicMaterial> FirstPersonAIO/DynamicFootStep::metalAndGlassPhysMat
	List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * ___metalAndGlassPhysMat_2;
	// System.Collections.Generic.List`1<UnityEngine.PhysicMaterial> FirstPersonAIO/DynamicFootStep::grassPhysMat
	List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * ___grassPhysMat_3;
	// System.Collections.Generic.List`1<UnityEngine.PhysicMaterial> FirstPersonAIO/DynamicFootStep::dirtAndGravelPhysMat
	List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * ___dirtAndGravelPhysMat_4;
	// System.Collections.Generic.List`1<UnityEngine.PhysicMaterial> FirstPersonAIO/DynamicFootStep::rockAndConcretePhysMat
	List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * ___rockAndConcretePhysMat_5;
	// System.Collections.Generic.List`1<UnityEngine.PhysicMaterial> FirstPersonAIO/DynamicFootStep::mudPhysMat
	List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * ___mudPhysMat_6;
	// System.Collections.Generic.List`1<UnityEngine.PhysicMaterial> FirstPersonAIO/DynamicFootStep::customPhysMat
	List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * ___customPhysMat_7;
	// System.Collections.Generic.List`1<UnityEngine.Material> FirstPersonAIO/DynamicFootStep::woodMat
	List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * ___woodMat_8;
	// System.Collections.Generic.List`1<UnityEngine.Material> FirstPersonAIO/DynamicFootStep::metalAndGlassMat
	List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * ___metalAndGlassMat_9;
	// System.Collections.Generic.List`1<UnityEngine.Material> FirstPersonAIO/DynamicFootStep::grassMat
	List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * ___grassMat_10;
	// System.Collections.Generic.List`1<UnityEngine.Material> FirstPersonAIO/DynamicFootStep::dirtAndGravelMat
	List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * ___dirtAndGravelMat_11;
	// System.Collections.Generic.List`1<UnityEngine.Material> FirstPersonAIO/DynamicFootStep::rockAndConcreteMat
	List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * ___rockAndConcreteMat_12;
	// System.Collections.Generic.List`1<UnityEngine.Material> FirstPersonAIO/DynamicFootStep::mudMat
	List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * ___mudMat_13;
	// System.Collections.Generic.List`1<UnityEngine.Material> FirstPersonAIO/DynamicFootStep::customMat
	List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * ___customMat_14;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> FirstPersonAIO/DynamicFootStep::currentClipSet
	List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * ___currentClipSet_15;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> FirstPersonAIO/DynamicFootStep::woodClipSet
	List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * ___woodClipSet_16;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> FirstPersonAIO/DynamicFootStep::metalAndGlassClipSet
	List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * ___metalAndGlassClipSet_17;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> FirstPersonAIO/DynamicFootStep::grassClipSet
	List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * ___grassClipSet_18;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> FirstPersonAIO/DynamicFootStep::dirtAndGravelClipSet
	List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * ___dirtAndGravelClipSet_19;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> FirstPersonAIO/DynamicFootStep::rockAndConcreteClipSet
	List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * ___rockAndConcreteClipSet_20;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> FirstPersonAIO/DynamicFootStep::mudClipSet
	List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * ___mudClipSet_21;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> FirstPersonAIO/DynamicFootStep::customClipSet
	List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * ___customClipSet_22;

public:
	inline static int32_t get_offset_of_materialMode_0() { return static_cast<int32_t>(offsetof(DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125, ___materialMode_0)); }
	inline int32_t get_materialMode_0() const { return ___materialMode_0; }
	inline int32_t* get_address_of_materialMode_0() { return &___materialMode_0; }
	inline void set_materialMode_0(int32_t value)
	{
		___materialMode_0 = value;
	}

	inline static int32_t get_offset_of_woodPhysMat_1() { return static_cast<int32_t>(offsetof(DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125, ___woodPhysMat_1)); }
	inline List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * get_woodPhysMat_1() const { return ___woodPhysMat_1; }
	inline List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF ** get_address_of_woodPhysMat_1() { return &___woodPhysMat_1; }
	inline void set_woodPhysMat_1(List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * value)
	{
		___woodPhysMat_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___woodPhysMat_1), (void*)value);
	}

	inline static int32_t get_offset_of_metalAndGlassPhysMat_2() { return static_cast<int32_t>(offsetof(DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125, ___metalAndGlassPhysMat_2)); }
	inline List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * get_metalAndGlassPhysMat_2() const { return ___metalAndGlassPhysMat_2; }
	inline List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF ** get_address_of_metalAndGlassPhysMat_2() { return &___metalAndGlassPhysMat_2; }
	inline void set_metalAndGlassPhysMat_2(List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * value)
	{
		___metalAndGlassPhysMat_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___metalAndGlassPhysMat_2), (void*)value);
	}

	inline static int32_t get_offset_of_grassPhysMat_3() { return static_cast<int32_t>(offsetof(DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125, ___grassPhysMat_3)); }
	inline List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * get_grassPhysMat_3() const { return ___grassPhysMat_3; }
	inline List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF ** get_address_of_grassPhysMat_3() { return &___grassPhysMat_3; }
	inline void set_grassPhysMat_3(List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * value)
	{
		___grassPhysMat_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grassPhysMat_3), (void*)value);
	}

	inline static int32_t get_offset_of_dirtAndGravelPhysMat_4() { return static_cast<int32_t>(offsetof(DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125, ___dirtAndGravelPhysMat_4)); }
	inline List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * get_dirtAndGravelPhysMat_4() const { return ___dirtAndGravelPhysMat_4; }
	inline List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF ** get_address_of_dirtAndGravelPhysMat_4() { return &___dirtAndGravelPhysMat_4; }
	inline void set_dirtAndGravelPhysMat_4(List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * value)
	{
		___dirtAndGravelPhysMat_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dirtAndGravelPhysMat_4), (void*)value);
	}

	inline static int32_t get_offset_of_rockAndConcretePhysMat_5() { return static_cast<int32_t>(offsetof(DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125, ___rockAndConcretePhysMat_5)); }
	inline List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * get_rockAndConcretePhysMat_5() const { return ___rockAndConcretePhysMat_5; }
	inline List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF ** get_address_of_rockAndConcretePhysMat_5() { return &___rockAndConcretePhysMat_5; }
	inline void set_rockAndConcretePhysMat_5(List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * value)
	{
		___rockAndConcretePhysMat_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rockAndConcretePhysMat_5), (void*)value);
	}

	inline static int32_t get_offset_of_mudPhysMat_6() { return static_cast<int32_t>(offsetof(DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125, ___mudPhysMat_6)); }
	inline List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * get_mudPhysMat_6() const { return ___mudPhysMat_6; }
	inline List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF ** get_address_of_mudPhysMat_6() { return &___mudPhysMat_6; }
	inline void set_mudPhysMat_6(List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * value)
	{
		___mudPhysMat_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mudPhysMat_6), (void*)value);
	}

	inline static int32_t get_offset_of_customPhysMat_7() { return static_cast<int32_t>(offsetof(DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125, ___customPhysMat_7)); }
	inline List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * get_customPhysMat_7() const { return ___customPhysMat_7; }
	inline List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF ** get_address_of_customPhysMat_7() { return &___customPhysMat_7; }
	inline void set_customPhysMat_7(List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * value)
	{
		___customPhysMat_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customPhysMat_7), (void*)value);
	}

	inline static int32_t get_offset_of_woodMat_8() { return static_cast<int32_t>(offsetof(DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125, ___woodMat_8)); }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * get_woodMat_8() const { return ___woodMat_8; }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 ** get_address_of_woodMat_8() { return &___woodMat_8; }
	inline void set_woodMat_8(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * value)
	{
		___woodMat_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___woodMat_8), (void*)value);
	}

	inline static int32_t get_offset_of_metalAndGlassMat_9() { return static_cast<int32_t>(offsetof(DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125, ___metalAndGlassMat_9)); }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * get_metalAndGlassMat_9() const { return ___metalAndGlassMat_9; }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 ** get_address_of_metalAndGlassMat_9() { return &___metalAndGlassMat_9; }
	inline void set_metalAndGlassMat_9(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * value)
	{
		___metalAndGlassMat_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___metalAndGlassMat_9), (void*)value);
	}

	inline static int32_t get_offset_of_grassMat_10() { return static_cast<int32_t>(offsetof(DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125, ___grassMat_10)); }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * get_grassMat_10() const { return ___grassMat_10; }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 ** get_address_of_grassMat_10() { return &___grassMat_10; }
	inline void set_grassMat_10(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * value)
	{
		___grassMat_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grassMat_10), (void*)value);
	}

	inline static int32_t get_offset_of_dirtAndGravelMat_11() { return static_cast<int32_t>(offsetof(DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125, ___dirtAndGravelMat_11)); }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * get_dirtAndGravelMat_11() const { return ___dirtAndGravelMat_11; }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 ** get_address_of_dirtAndGravelMat_11() { return &___dirtAndGravelMat_11; }
	inline void set_dirtAndGravelMat_11(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * value)
	{
		___dirtAndGravelMat_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dirtAndGravelMat_11), (void*)value);
	}

	inline static int32_t get_offset_of_rockAndConcreteMat_12() { return static_cast<int32_t>(offsetof(DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125, ___rockAndConcreteMat_12)); }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * get_rockAndConcreteMat_12() const { return ___rockAndConcreteMat_12; }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 ** get_address_of_rockAndConcreteMat_12() { return &___rockAndConcreteMat_12; }
	inline void set_rockAndConcreteMat_12(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * value)
	{
		___rockAndConcreteMat_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rockAndConcreteMat_12), (void*)value);
	}

	inline static int32_t get_offset_of_mudMat_13() { return static_cast<int32_t>(offsetof(DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125, ___mudMat_13)); }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * get_mudMat_13() const { return ___mudMat_13; }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 ** get_address_of_mudMat_13() { return &___mudMat_13; }
	inline void set_mudMat_13(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * value)
	{
		___mudMat_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mudMat_13), (void*)value);
	}

	inline static int32_t get_offset_of_customMat_14() { return static_cast<int32_t>(offsetof(DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125, ___customMat_14)); }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * get_customMat_14() const { return ___customMat_14; }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 ** get_address_of_customMat_14() { return &___customMat_14; }
	inline void set_customMat_14(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * value)
	{
		___customMat_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customMat_14), (void*)value);
	}

	inline static int32_t get_offset_of_currentClipSet_15() { return static_cast<int32_t>(offsetof(DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125, ___currentClipSet_15)); }
	inline List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * get_currentClipSet_15() const { return ___currentClipSet_15; }
	inline List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 ** get_address_of_currentClipSet_15() { return &___currentClipSet_15; }
	inline void set_currentClipSet_15(List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * value)
	{
		___currentClipSet_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentClipSet_15), (void*)value);
	}

	inline static int32_t get_offset_of_woodClipSet_16() { return static_cast<int32_t>(offsetof(DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125, ___woodClipSet_16)); }
	inline List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * get_woodClipSet_16() const { return ___woodClipSet_16; }
	inline List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 ** get_address_of_woodClipSet_16() { return &___woodClipSet_16; }
	inline void set_woodClipSet_16(List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * value)
	{
		___woodClipSet_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___woodClipSet_16), (void*)value);
	}

	inline static int32_t get_offset_of_metalAndGlassClipSet_17() { return static_cast<int32_t>(offsetof(DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125, ___metalAndGlassClipSet_17)); }
	inline List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * get_metalAndGlassClipSet_17() const { return ___metalAndGlassClipSet_17; }
	inline List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 ** get_address_of_metalAndGlassClipSet_17() { return &___metalAndGlassClipSet_17; }
	inline void set_metalAndGlassClipSet_17(List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * value)
	{
		___metalAndGlassClipSet_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___metalAndGlassClipSet_17), (void*)value);
	}

	inline static int32_t get_offset_of_grassClipSet_18() { return static_cast<int32_t>(offsetof(DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125, ___grassClipSet_18)); }
	inline List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * get_grassClipSet_18() const { return ___grassClipSet_18; }
	inline List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 ** get_address_of_grassClipSet_18() { return &___grassClipSet_18; }
	inline void set_grassClipSet_18(List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * value)
	{
		___grassClipSet_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grassClipSet_18), (void*)value);
	}

	inline static int32_t get_offset_of_dirtAndGravelClipSet_19() { return static_cast<int32_t>(offsetof(DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125, ___dirtAndGravelClipSet_19)); }
	inline List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * get_dirtAndGravelClipSet_19() const { return ___dirtAndGravelClipSet_19; }
	inline List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 ** get_address_of_dirtAndGravelClipSet_19() { return &___dirtAndGravelClipSet_19; }
	inline void set_dirtAndGravelClipSet_19(List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * value)
	{
		___dirtAndGravelClipSet_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dirtAndGravelClipSet_19), (void*)value);
	}

	inline static int32_t get_offset_of_rockAndConcreteClipSet_20() { return static_cast<int32_t>(offsetof(DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125, ___rockAndConcreteClipSet_20)); }
	inline List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * get_rockAndConcreteClipSet_20() const { return ___rockAndConcreteClipSet_20; }
	inline List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 ** get_address_of_rockAndConcreteClipSet_20() { return &___rockAndConcreteClipSet_20; }
	inline void set_rockAndConcreteClipSet_20(List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * value)
	{
		___rockAndConcreteClipSet_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rockAndConcreteClipSet_20), (void*)value);
	}

	inline static int32_t get_offset_of_mudClipSet_21() { return static_cast<int32_t>(offsetof(DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125, ___mudClipSet_21)); }
	inline List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * get_mudClipSet_21() const { return ___mudClipSet_21; }
	inline List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 ** get_address_of_mudClipSet_21() { return &___mudClipSet_21; }
	inline void set_mudClipSet_21(List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * value)
	{
		___mudClipSet_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mudClipSet_21), (void*)value);
	}

	inline static int32_t get_offset_of_customClipSet_22() { return static_cast<int32_t>(offsetof(DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125, ___customClipSet_22)); }
	inline List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * get_customClipSet_22() const { return ___customClipSet_22; }
	inline List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 ** get_address_of_customClipSet_22() { return &___customClipSet_22; }
	inline void set_customClipSet_22(List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * value)
	{
		___customClipSet_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customClipSet_22), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;

public:
	inline static int32_t get_offset_of_m_LoaderManagerInstance_6() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_LoaderManagerInstance_6)); }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * get_m_LoaderManagerInstance_6() const { return ___m_LoaderManagerInstance_6; }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F ** get_address_of_m_LoaderManagerInstance_6() { return &___m_LoaderManagerInstance_6; }
	inline void set_m_LoaderManagerInstance_6(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * value)
	{
		___m_LoaderManagerInstance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LoaderManagerInstance_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_InitManagerOnStart_7() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_InitManagerOnStart_7)); }
	inline bool get_m_InitManagerOnStart_7() const { return ___m_InitManagerOnStart_7; }
	inline bool* get_address_of_m_InitManagerOnStart_7() { return &___m_InitManagerOnStart_7; }
	inline void set_m_InitManagerOnStart_7(bool value)
	{
		___m_InitManagerOnStart_7 = value;
	}

	inline static int32_t get_offset_of_m_XRManager_8() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_XRManager_8)); }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * get_m_XRManager_8() const { return ___m_XRManager_8; }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F ** get_address_of_m_XRManager_8() { return &___m_XRManager_8; }
	inline void set_m_XRManager_8(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * value)
	{
		___m_XRManager_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_XRManager_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_ProviderIntialized_9() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_ProviderIntialized_9)); }
	inline bool get_m_ProviderIntialized_9() const { return ___m_ProviderIntialized_9; }
	inline bool* get_address_of_m_ProviderIntialized_9() { return &___m_ProviderIntialized_9; }
	inline void set_m_ProviderIntialized_9(bool value)
	{
		___m_ProviderIntialized_9 = value;
	}

	inline static int32_t get_offset_of_m_ProviderStarted_10() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_ProviderStarted_10)); }
	inline bool get_m_ProviderStarted_10() const { return ___m_ProviderStarted_10; }
	inline bool* get_address_of_m_ProviderStarted_10() { return &___m_ProviderStarted_10; }
	inline void set_m_ProviderStarted_10(bool value)
	{
		___m_ProviderStarted_10 = value;
	}
};

struct XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields
{
public:
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * ___s_RuntimeSettingsInstance_5;

public:
	inline static int32_t get_offset_of_k_SettingsKey_4() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields, ___k_SettingsKey_4)); }
	inline String_t* get_k_SettingsKey_4() const { return ___k_SettingsKey_4; }
	inline String_t** get_address_of_k_SettingsKey_4() { return &___k_SettingsKey_4; }
	inline void set_k_SettingsKey_4(String_t* value)
	{
		___k_SettingsKey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_SettingsKey_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_RuntimeSettingsInstance_5() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields, ___s_RuntimeSettingsInstance_5)); }
	inline XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * get_s_RuntimeSettingsInstance_5() const { return ___s_RuntimeSettingsInstance_5; }
	inline XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 ** get_address_of_s_RuntimeSettingsInstance_5() { return &___s_RuntimeSettingsInstance_5; }
	inline void set_s_RuntimeSettingsInstance_5(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * value)
	{
		___s_RuntimeSettingsInstance_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RuntimeSettingsInstance_5), (void*)value);
	}
};


// UnityEngine.XR.Management.XRLoader
struct XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * ___U3CactiveLoaderU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_m_InitializationComplete_4() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_InitializationComplete_4)); }
	inline bool get_m_InitializationComplete_4() const { return ___m_InitializationComplete_4; }
	inline bool* get_address_of_m_InitializationComplete_4() { return &___m_InitializationComplete_4; }
	inline void set_m_InitializationComplete_4(bool value)
	{
		___m_InitializationComplete_4 = value;
	}

	inline static int32_t get_offset_of_m_RequiresSettingsUpdate_5() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_RequiresSettingsUpdate_5)); }
	inline bool get_m_RequiresSettingsUpdate_5() const { return ___m_RequiresSettingsUpdate_5; }
	inline bool* get_address_of_m_RequiresSettingsUpdate_5() { return &___m_RequiresSettingsUpdate_5; }
	inline void set_m_RequiresSettingsUpdate_5(bool value)
	{
		___m_RequiresSettingsUpdate_5 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticLoading_6() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_AutomaticLoading_6)); }
	inline bool get_m_AutomaticLoading_6() const { return ___m_AutomaticLoading_6; }
	inline bool* get_address_of_m_AutomaticLoading_6() { return &___m_AutomaticLoading_6; }
	inline void set_m_AutomaticLoading_6(bool value)
	{
		___m_AutomaticLoading_6 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticRunning_7() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_AutomaticRunning_7)); }
	inline bool get_m_AutomaticRunning_7() const { return ___m_AutomaticRunning_7; }
	inline bool* get_address_of_m_AutomaticRunning_7() { return &___m_AutomaticRunning_7; }
	inline void set_m_AutomaticRunning_7(bool value)
	{
		___m_AutomaticRunning_7 = value;
	}

	inline static int32_t get_offset_of_m_Loaders_8() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_Loaders_8)); }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * get_m_Loaders_8() const { return ___m_Loaders_8; }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 ** get_address_of_m_Loaders_8() { return &___m_Loaders_8; }
	inline void set_m_Loaders_8(List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * value)
	{
		___m_Loaders_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Loaders_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_RegisteredLoaders_9() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_RegisteredLoaders_9)); }
	inline HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * get_m_RegisteredLoaders_9() const { return ___m_RegisteredLoaders_9; }
	inline HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 ** get_address_of_m_RegisteredLoaders_9() { return &___m_RegisteredLoaders_9; }
	inline void set_m_RegisteredLoaders_9(HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * value)
	{
		___m_RegisteredLoaders_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RegisteredLoaders_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CactiveLoaderU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___U3CactiveLoaderU3Ek__BackingField_10)); }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * get_U3CactiveLoaderU3Ek__BackingField_10() const { return ___U3CactiveLoaderU3Ek__BackingField_10; }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B ** get_address_of_U3CactiveLoaderU3Ek__BackingField_10() { return &___U3CactiveLoaderU3Ek__BackingField_10; }
	inline void set_U3CactiveLoaderU3Ek__BackingField_10(XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * value)
	{
		___U3CactiveLoaderU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CactiveLoaderU3Ek__BackingField_10), (void*)value);
	}
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___willRenderCanvases_5;

public:
	inline static int32_t get_offset_of_preWillRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___preWillRenderCanvases_4)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_preWillRenderCanvases_4() const { return ___preWillRenderCanvases_4; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_preWillRenderCanvases_4() { return &___preWillRenderCanvases_4; }
	inline void set_preWillRenderCanvases_4(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___preWillRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preWillRenderCanvases_4), (void*)value);
	}

	inline static int32_t get_offset_of_willRenderCanvases_5() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___willRenderCanvases_5)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_willRenderCanvases_5() const { return ___willRenderCanvases_5; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_willRenderCanvases_5() { return &___willRenderCanvases_5; }
	inline void set_willRenderCanvases_5(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___willRenderCanvases_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_5), (void*)value);
	}
};


// UnityEngine.CapsuleCollider
struct CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// CameraPointer
struct CameraPointer_tAAACBC47739EFC0CF4B3FF795EF2F73EF52197DE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject CameraPointer::_gazedAtObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____gazedAtObject_5;

public:
	inline static int32_t get_offset_of__gazedAtObject_5() { return static_cast<int32_t>(offsetof(CameraPointer_tAAACBC47739EFC0CF4B3FF795EF2F73EF52197DE, ____gazedAtObject_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__gazedAtObject_5() const { return ____gazedAtObject_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__gazedAtObject_5() { return &____gazedAtObject_5; }
	inline void set__gazedAtObject_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____gazedAtObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____gazedAtObject_5), (void*)value);
	}
};


// CardboardStartup
struct CardboardStartup_tF85C3681559D03FD1B61614D63E506423D797D40  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Doors
struct Doors_tF7396FB953CFABFE1C79EE753538345C378BD8C6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// FirstPersonAIO
struct FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean FirstPersonAIO::controllerPauseState
	bool ___controllerPauseState_4;
	// System.Boolean FirstPersonAIO::enableCameraMovement
	bool ___enableCameraMovement_5;
	// FirstPersonAIO/InvertMouseInput FirstPersonAIO::mouseInputInversion
	int32_t ___mouseInputInversion_6;
	// FirstPersonAIO/CameraInputMethod FirstPersonAIO::cameraInputMethod
	int32_t ___cameraInputMethod_7;
	// System.Single FirstPersonAIO::verticalRotationRange
	float ___verticalRotationRange_8;
	// System.Single FirstPersonAIO::mouseSensitivity
	float ___mouseSensitivity_9;
	// System.Single FirstPersonAIO::fOVToMouseSensitivity
	float ___fOVToMouseSensitivity_10;
	// System.Single FirstPersonAIO::cameraSmoothing
	float ___cameraSmoothing_11;
	// System.Boolean FirstPersonAIO::lockAndHideCursor
	bool ___lockAndHideCursor_12;
	// UnityEngine.Camera FirstPersonAIO::playerCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___playerCamera_13;
	// System.Boolean FirstPersonAIO::enableCameraShake
	bool ___enableCameraShake_14;
	// UnityEngine.Vector3 FirstPersonAIO::cameraStartingPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cameraStartingPosition_15;
	// System.Single FirstPersonAIO::baseCamFOV
	float ___baseCamFOV_16;
	// System.Boolean FirstPersonAIO::autoCrosshair
	bool ___autoCrosshair_17;
	// System.Boolean FirstPersonAIO::drawStaminaMeter
	bool ___drawStaminaMeter_18;
	// System.Single FirstPersonAIO::smoothRef
	float ___smoothRef_19;
	// UnityEngine.UI.Image FirstPersonAIO::StaminaMeter
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___StaminaMeter_20;
	// UnityEngine.UI.Image FirstPersonAIO::StaminaMeterBG
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___StaminaMeterBG_21;
	// UnityEngine.Sprite FirstPersonAIO::Crosshair
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___Crosshair_22;
	// UnityEngine.Vector3 FirstPersonAIO::targetAngles
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetAngles_23;
	// UnityEngine.Vector3 FirstPersonAIO::followAngles
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___followAngles_24;
	// UnityEngine.Vector3 FirstPersonAIO::followVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___followVelocity_25;
	// UnityEngine.Vector3 FirstPersonAIO::originalRotation
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___originalRotation_26;
	// System.Boolean FirstPersonAIO::playerCanMove
	bool ___playerCanMove_27;
	// System.Boolean FirstPersonAIO::walkByDefault
	bool ___walkByDefault_28;
	// System.Single FirstPersonAIO::walkSpeed
	float ___walkSpeed_29;
	// UnityEngine.KeyCode FirstPersonAIO::sprintKey
	int32_t ___sprintKey_30;
	// System.Single FirstPersonAIO::sprintSpeed
	float ___sprintSpeed_31;
	// System.Single FirstPersonAIO::jumpPower
	float ___jumpPower_32;
	// System.Boolean FirstPersonAIO::canJump
	bool ___canJump_33;
	// System.Boolean FirstPersonAIO::canHoldJump
	bool ___canHoldJump_34;
	// System.Boolean FirstPersonAIO::jumpInput
	bool ___jumpInput_35;
	// System.Boolean FirstPersonAIO::didJump
	bool ___didJump_36;
	// System.Boolean FirstPersonAIO::useStamina
	bool ___useStamina_37;
	// System.Single FirstPersonAIO::staminaDepletionSpeed
	float ___staminaDepletionSpeed_38;
	// System.Single FirstPersonAIO::staminaLevel
	float ___staminaLevel_39;
	// System.Single FirstPersonAIO::speed
	float ___speed_40;
	// System.Single FirstPersonAIO::staminaInternal
	float ___staminaInternal_41;
	// System.Single FirstPersonAIO::walkSpeedInternal
	float ___walkSpeedInternal_42;
	// System.Single FirstPersonAIO::sprintSpeedInternal
	float ___sprintSpeedInternal_43;
	// System.Single FirstPersonAIO::jumpPowerInternal
	float ___jumpPowerInternal_44;
	// FirstPersonAIO/CrouchModifiers FirstPersonAIO::_crouchModifiers
	CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96 * ____crouchModifiers_45;
	// FirstPersonAIO/AdvancedSettings FirstPersonAIO::advanced
	AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * ___advanced_46;
	// UnityEngine.CapsuleCollider FirstPersonAIO::capsule
	CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * ___capsule_47;
	// System.Boolean FirstPersonAIO::<IsGrounded>k__BackingField
	bool ___U3CIsGroundedU3Ek__BackingField_48;
	// UnityEngine.Vector2 FirstPersonAIO::inputXY
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___inputXY_49;
	// System.Boolean FirstPersonAIO::isCrouching
	bool ___isCrouching_50;
	// System.Single FirstPersonAIO::yVelocity
	float ___yVelocity_51;
	// System.Single FirstPersonAIO::checkedSlope
	float ___checkedSlope_52;
	// System.Boolean FirstPersonAIO::isSprinting
	bool ___isSprinting_53;
	// UnityEngine.Rigidbody FirstPersonAIO::fps_Rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___fps_Rigidbody_54;
	// System.Boolean FirstPersonAIO::useHeadbob
	bool ___useHeadbob_55;
	// UnityEngine.Transform FirstPersonAIO::head
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___head_56;
	// System.Boolean FirstPersonAIO::snapHeadjointToCapsul
	bool ___snapHeadjointToCapsul_57;
	// System.Single FirstPersonAIO::headbobFrequency
	float ___headbobFrequency_58;
	// System.Single FirstPersonAIO::headbobSwayAngle
	float ___headbobSwayAngle_59;
	// System.Single FirstPersonAIO::headbobHeight
	float ___headbobHeight_60;
	// System.Single FirstPersonAIO::headbobSideMovement
	float ___headbobSideMovement_61;
	// System.Single FirstPersonAIO::jumpLandIntensity
	float ___jumpLandIntensity_62;
	// UnityEngine.Vector3 FirstPersonAIO::originalLocalPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___originalLocalPosition_63;
	// System.Single FirstPersonAIO::nextStepTime
	float ___nextStepTime_64;
	// System.Single FirstPersonAIO::headbobCycle
	float ___headbobCycle_65;
	// System.Single FirstPersonAIO::headbobFade
	float ___headbobFade_66;
	// System.Single FirstPersonAIO::springPosition
	float ___springPosition_67;
	// System.Single FirstPersonAIO::springVelocity
	float ___springVelocity_68;
	// System.Single FirstPersonAIO::springElastic
	float ___springElastic_69;
	// System.Single FirstPersonAIO::springDampen
	float ___springDampen_70;
	// System.Single FirstPersonAIO::springVelocityThreshold
	float ___springVelocityThreshold_71;
	// System.Single FirstPersonAIO::springPositionThreshold
	float ___springPositionThreshold_72;
	// UnityEngine.Vector3 FirstPersonAIO::previousPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___previousPosition_73;
	// UnityEngine.Vector3 FirstPersonAIO::previousVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___previousVelocity_74;
	// UnityEngine.Vector3 FirstPersonAIO::miscRefVel
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___miscRefVel_75;
	// System.Boolean FirstPersonAIO::previousGrounded
	bool ___previousGrounded_76;
	// UnityEngine.AudioSource FirstPersonAIO::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_77;
	// System.Boolean FirstPersonAIO::enableAudioSFX
	bool ___enableAudioSFX_78;
	// System.Single FirstPersonAIO::Volume
	float ___Volume_79;
	// UnityEngine.AudioClip FirstPersonAIO::jumpSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___jumpSound_80;
	// UnityEngine.AudioClip FirstPersonAIO::landSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___landSound_81;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> FirstPersonAIO::footStepSounds
	List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * ___footStepSounds_82;
	// FirstPersonAIO/FSMode FirstPersonAIO::fsmode
	int32_t ___fsmode_83;
	// FirstPersonAIO/DynamicFootStep FirstPersonAIO::dynamicFootstep
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * ___dynamicFootstep_84;

public:
	inline static int32_t get_offset_of_controllerPauseState_4() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___controllerPauseState_4)); }
	inline bool get_controllerPauseState_4() const { return ___controllerPauseState_4; }
	inline bool* get_address_of_controllerPauseState_4() { return &___controllerPauseState_4; }
	inline void set_controllerPauseState_4(bool value)
	{
		___controllerPauseState_4 = value;
	}

	inline static int32_t get_offset_of_enableCameraMovement_5() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___enableCameraMovement_5)); }
	inline bool get_enableCameraMovement_5() const { return ___enableCameraMovement_5; }
	inline bool* get_address_of_enableCameraMovement_5() { return &___enableCameraMovement_5; }
	inline void set_enableCameraMovement_5(bool value)
	{
		___enableCameraMovement_5 = value;
	}

	inline static int32_t get_offset_of_mouseInputInversion_6() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___mouseInputInversion_6)); }
	inline int32_t get_mouseInputInversion_6() const { return ___mouseInputInversion_6; }
	inline int32_t* get_address_of_mouseInputInversion_6() { return &___mouseInputInversion_6; }
	inline void set_mouseInputInversion_6(int32_t value)
	{
		___mouseInputInversion_6 = value;
	}

	inline static int32_t get_offset_of_cameraInputMethod_7() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___cameraInputMethod_7)); }
	inline int32_t get_cameraInputMethod_7() const { return ___cameraInputMethod_7; }
	inline int32_t* get_address_of_cameraInputMethod_7() { return &___cameraInputMethod_7; }
	inline void set_cameraInputMethod_7(int32_t value)
	{
		___cameraInputMethod_7 = value;
	}

	inline static int32_t get_offset_of_verticalRotationRange_8() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___verticalRotationRange_8)); }
	inline float get_verticalRotationRange_8() const { return ___verticalRotationRange_8; }
	inline float* get_address_of_verticalRotationRange_8() { return &___verticalRotationRange_8; }
	inline void set_verticalRotationRange_8(float value)
	{
		___verticalRotationRange_8 = value;
	}

	inline static int32_t get_offset_of_mouseSensitivity_9() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___mouseSensitivity_9)); }
	inline float get_mouseSensitivity_9() const { return ___mouseSensitivity_9; }
	inline float* get_address_of_mouseSensitivity_9() { return &___mouseSensitivity_9; }
	inline void set_mouseSensitivity_9(float value)
	{
		___mouseSensitivity_9 = value;
	}

	inline static int32_t get_offset_of_fOVToMouseSensitivity_10() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___fOVToMouseSensitivity_10)); }
	inline float get_fOVToMouseSensitivity_10() const { return ___fOVToMouseSensitivity_10; }
	inline float* get_address_of_fOVToMouseSensitivity_10() { return &___fOVToMouseSensitivity_10; }
	inline void set_fOVToMouseSensitivity_10(float value)
	{
		___fOVToMouseSensitivity_10 = value;
	}

	inline static int32_t get_offset_of_cameraSmoothing_11() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___cameraSmoothing_11)); }
	inline float get_cameraSmoothing_11() const { return ___cameraSmoothing_11; }
	inline float* get_address_of_cameraSmoothing_11() { return &___cameraSmoothing_11; }
	inline void set_cameraSmoothing_11(float value)
	{
		___cameraSmoothing_11 = value;
	}

	inline static int32_t get_offset_of_lockAndHideCursor_12() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___lockAndHideCursor_12)); }
	inline bool get_lockAndHideCursor_12() const { return ___lockAndHideCursor_12; }
	inline bool* get_address_of_lockAndHideCursor_12() { return &___lockAndHideCursor_12; }
	inline void set_lockAndHideCursor_12(bool value)
	{
		___lockAndHideCursor_12 = value;
	}

	inline static int32_t get_offset_of_playerCamera_13() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___playerCamera_13)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_playerCamera_13() const { return ___playerCamera_13; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_playerCamera_13() { return &___playerCamera_13; }
	inline void set_playerCamera_13(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___playerCamera_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerCamera_13), (void*)value);
	}

	inline static int32_t get_offset_of_enableCameraShake_14() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___enableCameraShake_14)); }
	inline bool get_enableCameraShake_14() const { return ___enableCameraShake_14; }
	inline bool* get_address_of_enableCameraShake_14() { return &___enableCameraShake_14; }
	inline void set_enableCameraShake_14(bool value)
	{
		___enableCameraShake_14 = value;
	}

	inline static int32_t get_offset_of_cameraStartingPosition_15() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___cameraStartingPosition_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_cameraStartingPosition_15() const { return ___cameraStartingPosition_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_cameraStartingPosition_15() { return &___cameraStartingPosition_15; }
	inline void set_cameraStartingPosition_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___cameraStartingPosition_15 = value;
	}

	inline static int32_t get_offset_of_baseCamFOV_16() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___baseCamFOV_16)); }
	inline float get_baseCamFOV_16() const { return ___baseCamFOV_16; }
	inline float* get_address_of_baseCamFOV_16() { return &___baseCamFOV_16; }
	inline void set_baseCamFOV_16(float value)
	{
		___baseCamFOV_16 = value;
	}

	inline static int32_t get_offset_of_autoCrosshair_17() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___autoCrosshair_17)); }
	inline bool get_autoCrosshair_17() const { return ___autoCrosshair_17; }
	inline bool* get_address_of_autoCrosshair_17() { return &___autoCrosshair_17; }
	inline void set_autoCrosshair_17(bool value)
	{
		___autoCrosshair_17 = value;
	}

	inline static int32_t get_offset_of_drawStaminaMeter_18() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___drawStaminaMeter_18)); }
	inline bool get_drawStaminaMeter_18() const { return ___drawStaminaMeter_18; }
	inline bool* get_address_of_drawStaminaMeter_18() { return &___drawStaminaMeter_18; }
	inline void set_drawStaminaMeter_18(bool value)
	{
		___drawStaminaMeter_18 = value;
	}

	inline static int32_t get_offset_of_smoothRef_19() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___smoothRef_19)); }
	inline float get_smoothRef_19() const { return ___smoothRef_19; }
	inline float* get_address_of_smoothRef_19() { return &___smoothRef_19; }
	inline void set_smoothRef_19(float value)
	{
		___smoothRef_19 = value;
	}

	inline static int32_t get_offset_of_StaminaMeter_20() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___StaminaMeter_20)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_StaminaMeter_20() const { return ___StaminaMeter_20; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_StaminaMeter_20() { return &___StaminaMeter_20; }
	inline void set_StaminaMeter_20(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___StaminaMeter_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StaminaMeter_20), (void*)value);
	}

	inline static int32_t get_offset_of_StaminaMeterBG_21() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___StaminaMeterBG_21)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_StaminaMeterBG_21() const { return ___StaminaMeterBG_21; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_StaminaMeterBG_21() { return &___StaminaMeterBG_21; }
	inline void set_StaminaMeterBG_21(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___StaminaMeterBG_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StaminaMeterBG_21), (void*)value);
	}

	inline static int32_t get_offset_of_Crosshair_22() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___Crosshair_22)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_Crosshair_22() const { return ___Crosshair_22; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_Crosshair_22() { return &___Crosshair_22; }
	inline void set_Crosshair_22(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___Crosshair_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Crosshair_22), (void*)value);
	}

	inline static int32_t get_offset_of_targetAngles_23() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___targetAngles_23)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_targetAngles_23() const { return ___targetAngles_23; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_targetAngles_23() { return &___targetAngles_23; }
	inline void set_targetAngles_23(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___targetAngles_23 = value;
	}

	inline static int32_t get_offset_of_followAngles_24() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___followAngles_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_followAngles_24() const { return ___followAngles_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_followAngles_24() { return &___followAngles_24; }
	inline void set_followAngles_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___followAngles_24 = value;
	}

	inline static int32_t get_offset_of_followVelocity_25() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___followVelocity_25)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_followVelocity_25() const { return ___followVelocity_25; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_followVelocity_25() { return &___followVelocity_25; }
	inline void set_followVelocity_25(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___followVelocity_25 = value;
	}

	inline static int32_t get_offset_of_originalRotation_26() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___originalRotation_26)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_originalRotation_26() const { return ___originalRotation_26; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_originalRotation_26() { return &___originalRotation_26; }
	inline void set_originalRotation_26(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___originalRotation_26 = value;
	}

	inline static int32_t get_offset_of_playerCanMove_27() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___playerCanMove_27)); }
	inline bool get_playerCanMove_27() const { return ___playerCanMove_27; }
	inline bool* get_address_of_playerCanMove_27() { return &___playerCanMove_27; }
	inline void set_playerCanMove_27(bool value)
	{
		___playerCanMove_27 = value;
	}

	inline static int32_t get_offset_of_walkByDefault_28() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___walkByDefault_28)); }
	inline bool get_walkByDefault_28() const { return ___walkByDefault_28; }
	inline bool* get_address_of_walkByDefault_28() { return &___walkByDefault_28; }
	inline void set_walkByDefault_28(bool value)
	{
		___walkByDefault_28 = value;
	}

	inline static int32_t get_offset_of_walkSpeed_29() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___walkSpeed_29)); }
	inline float get_walkSpeed_29() const { return ___walkSpeed_29; }
	inline float* get_address_of_walkSpeed_29() { return &___walkSpeed_29; }
	inline void set_walkSpeed_29(float value)
	{
		___walkSpeed_29 = value;
	}

	inline static int32_t get_offset_of_sprintKey_30() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___sprintKey_30)); }
	inline int32_t get_sprintKey_30() const { return ___sprintKey_30; }
	inline int32_t* get_address_of_sprintKey_30() { return &___sprintKey_30; }
	inline void set_sprintKey_30(int32_t value)
	{
		___sprintKey_30 = value;
	}

	inline static int32_t get_offset_of_sprintSpeed_31() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___sprintSpeed_31)); }
	inline float get_sprintSpeed_31() const { return ___sprintSpeed_31; }
	inline float* get_address_of_sprintSpeed_31() { return &___sprintSpeed_31; }
	inline void set_sprintSpeed_31(float value)
	{
		___sprintSpeed_31 = value;
	}

	inline static int32_t get_offset_of_jumpPower_32() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___jumpPower_32)); }
	inline float get_jumpPower_32() const { return ___jumpPower_32; }
	inline float* get_address_of_jumpPower_32() { return &___jumpPower_32; }
	inline void set_jumpPower_32(float value)
	{
		___jumpPower_32 = value;
	}

	inline static int32_t get_offset_of_canJump_33() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___canJump_33)); }
	inline bool get_canJump_33() const { return ___canJump_33; }
	inline bool* get_address_of_canJump_33() { return &___canJump_33; }
	inline void set_canJump_33(bool value)
	{
		___canJump_33 = value;
	}

	inline static int32_t get_offset_of_canHoldJump_34() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___canHoldJump_34)); }
	inline bool get_canHoldJump_34() const { return ___canHoldJump_34; }
	inline bool* get_address_of_canHoldJump_34() { return &___canHoldJump_34; }
	inline void set_canHoldJump_34(bool value)
	{
		___canHoldJump_34 = value;
	}

	inline static int32_t get_offset_of_jumpInput_35() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___jumpInput_35)); }
	inline bool get_jumpInput_35() const { return ___jumpInput_35; }
	inline bool* get_address_of_jumpInput_35() { return &___jumpInput_35; }
	inline void set_jumpInput_35(bool value)
	{
		___jumpInput_35 = value;
	}

	inline static int32_t get_offset_of_didJump_36() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___didJump_36)); }
	inline bool get_didJump_36() const { return ___didJump_36; }
	inline bool* get_address_of_didJump_36() { return &___didJump_36; }
	inline void set_didJump_36(bool value)
	{
		___didJump_36 = value;
	}

	inline static int32_t get_offset_of_useStamina_37() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___useStamina_37)); }
	inline bool get_useStamina_37() const { return ___useStamina_37; }
	inline bool* get_address_of_useStamina_37() { return &___useStamina_37; }
	inline void set_useStamina_37(bool value)
	{
		___useStamina_37 = value;
	}

	inline static int32_t get_offset_of_staminaDepletionSpeed_38() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___staminaDepletionSpeed_38)); }
	inline float get_staminaDepletionSpeed_38() const { return ___staminaDepletionSpeed_38; }
	inline float* get_address_of_staminaDepletionSpeed_38() { return &___staminaDepletionSpeed_38; }
	inline void set_staminaDepletionSpeed_38(float value)
	{
		___staminaDepletionSpeed_38 = value;
	}

	inline static int32_t get_offset_of_staminaLevel_39() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___staminaLevel_39)); }
	inline float get_staminaLevel_39() const { return ___staminaLevel_39; }
	inline float* get_address_of_staminaLevel_39() { return &___staminaLevel_39; }
	inline void set_staminaLevel_39(float value)
	{
		___staminaLevel_39 = value;
	}

	inline static int32_t get_offset_of_speed_40() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___speed_40)); }
	inline float get_speed_40() const { return ___speed_40; }
	inline float* get_address_of_speed_40() { return &___speed_40; }
	inline void set_speed_40(float value)
	{
		___speed_40 = value;
	}

	inline static int32_t get_offset_of_staminaInternal_41() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___staminaInternal_41)); }
	inline float get_staminaInternal_41() const { return ___staminaInternal_41; }
	inline float* get_address_of_staminaInternal_41() { return &___staminaInternal_41; }
	inline void set_staminaInternal_41(float value)
	{
		___staminaInternal_41 = value;
	}

	inline static int32_t get_offset_of_walkSpeedInternal_42() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___walkSpeedInternal_42)); }
	inline float get_walkSpeedInternal_42() const { return ___walkSpeedInternal_42; }
	inline float* get_address_of_walkSpeedInternal_42() { return &___walkSpeedInternal_42; }
	inline void set_walkSpeedInternal_42(float value)
	{
		___walkSpeedInternal_42 = value;
	}

	inline static int32_t get_offset_of_sprintSpeedInternal_43() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___sprintSpeedInternal_43)); }
	inline float get_sprintSpeedInternal_43() const { return ___sprintSpeedInternal_43; }
	inline float* get_address_of_sprintSpeedInternal_43() { return &___sprintSpeedInternal_43; }
	inline void set_sprintSpeedInternal_43(float value)
	{
		___sprintSpeedInternal_43 = value;
	}

	inline static int32_t get_offset_of_jumpPowerInternal_44() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___jumpPowerInternal_44)); }
	inline float get_jumpPowerInternal_44() const { return ___jumpPowerInternal_44; }
	inline float* get_address_of_jumpPowerInternal_44() { return &___jumpPowerInternal_44; }
	inline void set_jumpPowerInternal_44(float value)
	{
		___jumpPowerInternal_44 = value;
	}

	inline static int32_t get_offset_of__crouchModifiers_45() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ____crouchModifiers_45)); }
	inline CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96 * get__crouchModifiers_45() const { return ____crouchModifiers_45; }
	inline CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96 ** get_address_of__crouchModifiers_45() { return &____crouchModifiers_45; }
	inline void set__crouchModifiers_45(CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96 * value)
	{
		____crouchModifiers_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____crouchModifiers_45), (void*)value);
	}

	inline static int32_t get_offset_of_advanced_46() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___advanced_46)); }
	inline AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * get_advanced_46() const { return ___advanced_46; }
	inline AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE ** get_address_of_advanced_46() { return &___advanced_46; }
	inline void set_advanced_46(AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * value)
	{
		___advanced_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___advanced_46), (void*)value);
	}

	inline static int32_t get_offset_of_capsule_47() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___capsule_47)); }
	inline CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * get_capsule_47() const { return ___capsule_47; }
	inline CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 ** get_address_of_capsule_47() { return &___capsule_47; }
	inline void set_capsule_47(CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * value)
	{
		___capsule_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capsule_47), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsGroundedU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___U3CIsGroundedU3Ek__BackingField_48)); }
	inline bool get_U3CIsGroundedU3Ek__BackingField_48() const { return ___U3CIsGroundedU3Ek__BackingField_48; }
	inline bool* get_address_of_U3CIsGroundedU3Ek__BackingField_48() { return &___U3CIsGroundedU3Ek__BackingField_48; }
	inline void set_U3CIsGroundedU3Ek__BackingField_48(bool value)
	{
		___U3CIsGroundedU3Ek__BackingField_48 = value;
	}

	inline static int32_t get_offset_of_inputXY_49() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___inputXY_49)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_inputXY_49() const { return ___inputXY_49; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_inputXY_49() { return &___inputXY_49; }
	inline void set_inputXY_49(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___inputXY_49 = value;
	}

	inline static int32_t get_offset_of_isCrouching_50() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___isCrouching_50)); }
	inline bool get_isCrouching_50() const { return ___isCrouching_50; }
	inline bool* get_address_of_isCrouching_50() { return &___isCrouching_50; }
	inline void set_isCrouching_50(bool value)
	{
		___isCrouching_50 = value;
	}

	inline static int32_t get_offset_of_yVelocity_51() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___yVelocity_51)); }
	inline float get_yVelocity_51() const { return ___yVelocity_51; }
	inline float* get_address_of_yVelocity_51() { return &___yVelocity_51; }
	inline void set_yVelocity_51(float value)
	{
		___yVelocity_51 = value;
	}

	inline static int32_t get_offset_of_checkedSlope_52() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___checkedSlope_52)); }
	inline float get_checkedSlope_52() const { return ___checkedSlope_52; }
	inline float* get_address_of_checkedSlope_52() { return &___checkedSlope_52; }
	inline void set_checkedSlope_52(float value)
	{
		___checkedSlope_52 = value;
	}

	inline static int32_t get_offset_of_isSprinting_53() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___isSprinting_53)); }
	inline bool get_isSprinting_53() const { return ___isSprinting_53; }
	inline bool* get_address_of_isSprinting_53() { return &___isSprinting_53; }
	inline void set_isSprinting_53(bool value)
	{
		___isSprinting_53 = value;
	}

	inline static int32_t get_offset_of_fps_Rigidbody_54() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___fps_Rigidbody_54)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_fps_Rigidbody_54() const { return ___fps_Rigidbody_54; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_fps_Rigidbody_54() { return &___fps_Rigidbody_54; }
	inline void set_fps_Rigidbody_54(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___fps_Rigidbody_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fps_Rigidbody_54), (void*)value);
	}

	inline static int32_t get_offset_of_useHeadbob_55() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___useHeadbob_55)); }
	inline bool get_useHeadbob_55() const { return ___useHeadbob_55; }
	inline bool* get_address_of_useHeadbob_55() { return &___useHeadbob_55; }
	inline void set_useHeadbob_55(bool value)
	{
		___useHeadbob_55 = value;
	}

	inline static int32_t get_offset_of_head_56() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___head_56)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_head_56() const { return ___head_56; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_head_56() { return &___head_56; }
	inline void set_head_56(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___head_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___head_56), (void*)value);
	}

	inline static int32_t get_offset_of_snapHeadjointToCapsul_57() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___snapHeadjointToCapsul_57)); }
	inline bool get_snapHeadjointToCapsul_57() const { return ___snapHeadjointToCapsul_57; }
	inline bool* get_address_of_snapHeadjointToCapsul_57() { return &___snapHeadjointToCapsul_57; }
	inline void set_snapHeadjointToCapsul_57(bool value)
	{
		___snapHeadjointToCapsul_57 = value;
	}

	inline static int32_t get_offset_of_headbobFrequency_58() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___headbobFrequency_58)); }
	inline float get_headbobFrequency_58() const { return ___headbobFrequency_58; }
	inline float* get_address_of_headbobFrequency_58() { return &___headbobFrequency_58; }
	inline void set_headbobFrequency_58(float value)
	{
		___headbobFrequency_58 = value;
	}

	inline static int32_t get_offset_of_headbobSwayAngle_59() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___headbobSwayAngle_59)); }
	inline float get_headbobSwayAngle_59() const { return ___headbobSwayAngle_59; }
	inline float* get_address_of_headbobSwayAngle_59() { return &___headbobSwayAngle_59; }
	inline void set_headbobSwayAngle_59(float value)
	{
		___headbobSwayAngle_59 = value;
	}

	inline static int32_t get_offset_of_headbobHeight_60() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___headbobHeight_60)); }
	inline float get_headbobHeight_60() const { return ___headbobHeight_60; }
	inline float* get_address_of_headbobHeight_60() { return &___headbobHeight_60; }
	inline void set_headbobHeight_60(float value)
	{
		___headbobHeight_60 = value;
	}

	inline static int32_t get_offset_of_headbobSideMovement_61() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___headbobSideMovement_61)); }
	inline float get_headbobSideMovement_61() const { return ___headbobSideMovement_61; }
	inline float* get_address_of_headbobSideMovement_61() { return &___headbobSideMovement_61; }
	inline void set_headbobSideMovement_61(float value)
	{
		___headbobSideMovement_61 = value;
	}

	inline static int32_t get_offset_of_jumpLandIntensity_62() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___jumpLandIntensity_62)); }
	inline float get_jumpLandIntensity_62() const { return ___jumpLandIntensity_62; }
	inline float* get_address_of_jumpLandIntensity_62() { return &___jumpLandIntensity_62; }
	inline void set_jumpLandIntensity_62(float value)
	{
		___jumpLandIntensity_62 = value;
	}

	inline static int32_t get_offset_of_originalLocalPosition_63() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___originalLocalPosition_63)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_originalLocalPosition_63() const { return ___originalLocalPosition_63; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_originalLocalPosition_63() { return &___originalLocalPosition_63; }
	inline void set_originalLocalPosition_63(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___originalLocalPosition_63 = value;
	}

	inline static int32_t get_offset_of_nextStepTime_64() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___nextStepTime_64)); }
	inline float get_nextStepTime_64() const { return ___nextStepTime_64; }
	inline float* get_address_of_nextStepTime_64() { return &___nextStepTime_64; }
	inline void set_nextStepTime_64(float value)
	{
		___nextStepTime_64 = value;
	}

	inline static int32_t get_offset_of_headbobCycle_65() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___headbobCycle_65)); }
	inline float get_headbobCycle_65() const { return ___headbobCycle_65; }
	inline float* get_address_of_headbobCycle_65() { return &___headbobCycle_65; }
	inline void set_headbobCycle_65(float value)
	{
		___headbobCycle_65 = value;
	}

	inline static int32_t get_offset_of_headbobFade_66() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___headbobFade_66)); }
	inline float get_headbobFade_66() const { return ___headbobFade_66; }
	inline float* get_address_of_headbobFade_66() { return &___headbobFade_66; }
	inline void set_headbobFade_66(float value)
	{
		___headbobFade_66 = value;
	}

	inline static int32_t get_offset_of_springPosition_67() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___springPosition_67)); }
	inline float get_springPosition_67() const { return ___springPosition_67; }
	inline float* get_address_of_springPosition_67() { return &___springPosition_67; }
	inline void set_springPosition_67(float value)
	{
		___springPosition_67 = value;
	}

	inline static int32_t get_offset_of_springVelocity_68() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___springVelocity_68)); }
	inline float get_springVelocity_68() const { return ___springVelocity_68; }
	inline float* get_address_of_springVelocity_68() { return &___springVelocity_68; }
	inline void set_springVelocity_68(float value)
	{
		___springVelocity_68 = value;
	}

	inline static int32_t get_offset_of_springElastic_69() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___springElastic_69)); }
	inline float get_springElastic_69() const { return ___springElastic_69; }
	inline float* get_address_of_springElastic_69() { return &___springElastic_69; }
	inline void set_springElastic_69(float value)
	{
		___springElastic_69 = value;
	}

	inline static int32_t get_offset_of_springDampen_70() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___springDampen_70)); }
	inline float get_springDampen_70() const { return ___springDampen_70; }
	inline float* get_address_of_springDampen_70() { return &___springDampen_70; }
	inline void set_springDampen_70(float value)
	{
		___springDampen_70 = value;
	}

	inline static int32_t get_offset_of_springVelocityThreshold_71() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___springVelocityThreshold_71)); }
	inline float get_springVelocityThreshold_71() const { return ___springVelocityThreshold_71; }
	inline float* get_address_of_springVelocityThreshold_71() { return &___springVelocityThreshold_71; }
	inline void set_springVelocityThreshold_71(float value)
	{
		___springVelocityThreshold_71 = value;
	}

	inline static int32_t get_offset_of_springPositionThreshold_72() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___springPositionThreshold_72)); }
	inline float get_springPositionThreshold_72() const { return ___springPositionThreshold_72; }
	inline float* get_address_of_springPositionThreshold_72() { return &___springPositionThreshold_72; }
	inline void set_springPositionThreshold_72(float value)
	{
		___springPositionThreshold_72 = value;
	}

	inline static int32_t get_offset_of_previousPosition_73() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___previousPosition_73)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_previousPosition_73() const { return ___previousPosition_73; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_previousPosition_73() { return &___previousPosition_73; }
	inline void set_previousPosition_73(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___previousPosition_73 = value;
	}

	inline static int32_t get_offset_of_previousVelocity_74() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___previousVelocity_74)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_previousVelocity_74() const { return ___previousVelocity_74; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_previousVelocity_74() { return &___previousVelocity_74; }
	inline void set_previousVelocity_74(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___previousVelocity_74 = value;
	}

	inline static int32_t get_offset_of_miscRefVel_75() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___miscRefVel_75)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_miscRefVel_75() const { return ___miscRefVel_75; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_miscRefVel_75() { return &___miscRefVel_75; }
	inline void set_miscRefVel_75(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___miscRefVel_75 = value;
	}

	inline static int32_t get_offset_of_previousGrounded_76() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___previousGrounded_76)); }
	inline bool get_previousGrounded_76() const { return ___previousGrounded_76; }
	inline bool* get_address_of_previousGrounded_76() { return &___previousGrounded_76; }
	inline void set_previousGrounded_76(bool value)
	{
		___previousGrounded_76 = value;
	}

	inline static int32_t get_offset_of_audioSource_77() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___audioSource_77)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_77() const { return ___audioSource_77; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_77() { return &___audioSource_77; }
	inline void set_audioSource_77(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_77 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_77), (void*)value);
	}

	inline static int32_t get_offset_of_enableAudioSFX_78() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___enableAudioSFX_78)); }
	inline bool get_enableAudioSFX_78() const { return ___enableAudioSFX_78; }
	inline bool* get_address_of_enableAudioSFX_78() { return &___enableAudioSFX_78; }
	inline void set_enableAudioSFX_78(bool value)
	{
		___enableAudioSFX_78 = value;
	}

	inline static int32_t get_offset_of_Volume_79() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___Volume_79)); }
	inline float get_Volume_79() const { return ___Volume_79; }
	inline float* get_address_of_Volume_79() { return &___Volume_79; }
	inline void set_Volume_79(float value)
	{
		___Volume_79 = value;
	}

	inline static int32_t get_offset_of_jumpSound_80() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___jumpSound_80)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_jumpSound_80() const { return ___jumpSound_80; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_jumpSound_80() { return &___jumpSound_80; }
	inline void set_jumpSound_80(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___jumpSound_80 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jumpSound_80), (void*)value);
	}

	inline static int32_t get_offset_of_landSound_81() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___landSound_81)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_landSound_81() const { return ___landSound_81; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_landSound_81() { return &___landSound_81; }
	inline void set_landSound_81(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___landSound_81 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___landSound_81), (void*)value);
	}

	inline static int32_t get_offset_of_footStepSounds_82() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___footStepSounds_82)); }
	inline List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * get_footStepSounds_82() const { return ___footStepSounds_82; }
	inline List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 ** get_address_of_footStepSounds_82() { return &___footStepSounds_82; }
	inline void set_footStepSounds_82(List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * value)
	{
		___footStepSounds_82 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___footStepSounds_82), (void*)value);
	}

	inline static int32_t get_offset_of_fsmode_83() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___fsmode_83)); }
	inline int32_t get_fsmode_83() const { return ___fsmode_83; }
	inline int32_t* get_address_of_fsmode_83() { return &___fsmode_83; }
	inline void set_fsmode_83(int32_t value)
	{
		___fsmode_83 = value;
	}

	inline static int32_t get_offset_of_dynamicFootstep_84() { return static_cast<int32_t>(offsetof(FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92, ___dynamicFootstep_84)); }
	inline DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * get_dynamicFootstep_84() const { return ___dynamicFootstep_84; }
	inline DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 ** get_address_of_dynamicFootstep_84() { return &___dynamicFootstep_84; }
	inline void set_dynamicFootstep_84(DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * value)
	{
		___dynamicFootstep_84 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dynamicFootstep_84), (void*)value);
	}
};


// ObjectController
struct ObjectController_tEE8AA18007DEB85D79F9AC0438AC2FB36BFAF5CD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material ObjectController::InactiveMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___InactiveMaterial_4;
	// UnityEngine.Material ObjectController::GazedAtMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___GazedAtMaterial_5;
	// UnityEngine.Renderer ObjectController::_myRenderer
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ____myRenderer_10;
	// UnityEngine.Vector3 ObjectController::_startingPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____startingPosition_11;

public:
	inline static int32_t get_offset_of_InactiveMaterial_4() { return static_cast<int32_t>(offsetof(ObjectController_tEE8AA18007DEB85D79F9AC0438AC2FB36BFAF5CD, ___InactiveMaterial_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_InactiveMaterial_4() const { return ___InactiveMaterial_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_InactiveMaterial_4() { return &___InactiveMaterial_4; }
	inline void set_InactiveMaterial_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___InactiveMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InactiveMaterial_4), (void*)value);
	}

	inline static int32_t get_offset_of_GazedAtMaterial_5() { return static_cast<int32_t>(offsetof(ObjectController_tEE8AA18007DEB85D79F9AC0438AC2FB36BFAF5CD, ___GazedAtMaterial_5)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_GazedAtMaterial_5() const { return ___GazedAtMaterial_5; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_GazedAtMaterial_5() { return &___GazedAtMaterial_5; }
	inline void set_GazedAtMaterial_5(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___GazedAtMaterial_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GazedAtMaterial_5), (void*)value);
	}

	inline static int32_t get_offset_of__myRenderer_10() { return static_cast<int32_t>(offsetof(ObjectController_tEE8AA18007DEB85D79F9AC0438AC2FB36BFAF5CD, ____myRenderer_10)); }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * get__myRenderer_10() const { return ____myRenderer_10; }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** get_address_of__myRenderer_10() { return &____myRenderer_10; }
	inline void set__myRenderer_10(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		____myRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____myRenderer_10), (void*)value);
	}

	inline static int32_t get_offset_of__startingPosition_11() { return static_cast<int32_t>(offsetof(ObjectController_tEE8AA18007DEB85D79F9AC0438AC2FB36BFAF5CD, ____startingPosition_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__startingPosition_11() const { return ____startingPosition_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__startingPosition_11() { return &____startingPosition_11; }
	inline void set__startingPosition_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____startingPosition_11 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// VrModeController
struct VrModeController_tB06B91255F46A0456E69DDF20B0915136321030A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Camera VrModeController::_mainCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ____mainCamera_5;

public:
	inline static int32_t get_offset_of__mainCamera_5() { return static_cast<int32_t>(offsetof(VrModeController_tB06B91255F46A0456E69DDF20B0915136321030A, ____mainCamera_5)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get__mainCamera_5() const { return ____mainCamera_5; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of__mainCamera_5() { return &____mainCamera_5; }
	inline void set__mainCamera_5(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		____mainCamera_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mainCamera_5), (void*)value);
	}
};


// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.UI.CanvasScaler/ScaleMode UnityEngine.UI.CanvasScaler::m_UiScaleMode
	int32_t ___m_UiScaleMode_4;
	// System.Single UnityEngine.UI.CanvasScaler::m_ReferencePixelsPerUnit
	float ___m_ReferencePixelsPerUnit_5;
	// System.Single UnityEngine.UI.CanvasScaler::m_ScaleFactor
	float ___m_ScaleFactor_6;
	// UnityEngine.Vector2 UnityEngine.UI.CanvasScaler::m_ReferenceResolution
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_ReferenceResolution_7;
	// UnityEngine.UI.CanvasScaler/ScreenMatchMode UnityEngine.UI.CanvasScaler::m_ScreenMatchMode
	int32_t ___m_ScreenMatchMode_8;
	// System.Single UnityEngine.UI.CanvasScaler::m_MatchWidthOrHeight
	float ___m_MatchWidthOrHeight_9;
	// UnityEngine.UI.CanvasScaler/Unit UnityEngine.UI.CanvasScaler::m_PhysicalUnit
	int32_t ___m_PhysicalUnit_11;
	// System.Single UnityEngine.UI.CanvasScaler::m_FallbackScreenDPI
	float ___m_FallbackScreenDPI_12;
	// System.Single UnityEngine.UI.CanvasScaler::m_DefaultSpriteDPI
	float ___m_DefaultSpriteDPI_13;
	// System.Single UnityEngine.UI.CanvasScaler::m_DynamicPixelsPerUnit
	float ___m_DynamicPixelsPerUnit_14;
	// UnityEngine.Canvas UnityEngine.UI.CanvasScaler::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_15;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevScaleFactor
	float ___m_PrevScaleFactor_16;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevReferencePixelsPerUnit
	float ___m_PrevReferencePixelsPerUnit_17;
	// System.Boolean UnityEngine.UI.CanvasScaler::m_PresetInfoIsWorld
	bool ___m_PresetInfoIsWorld_18;

public:
	inline static int32_t get_offset_of_m_UiScaleMode_4() { return static_cast<int32_t>(offsetof(CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1, ___m_UiScaleMode_4)); }
	inline int32_t get_m_UiScaleMode_4() const { return ___m_UiScaleMode_4; }
	inline int32_t* get_address_of_m_UiScaleMode_4() { return &___m_UiScaleMode_4; }
	inline void set_m_UiScaleMode_4(int32_t value)
	{
		___m_UiScaleMode_4 = value;
	}

	inline static int32_t get_offset_of_m_ReferencePixelsPerUnit_5() { return static_cast<int32_t>(offsetof(CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1, ___m_ReferencePixelsPerUnit_5)); }
	inline float get_m_ReferencePixelsPerUnit_5() const { return ___m_ReferencePixelsPerUnit_5; }
	inline float* get_address_of_m_ReferencePixelsPerUnit_5() { return &___m_ReferencePixelsPerUnit_5; }
	inline void set_m_ReferencePixelsPerUnit_5(float value)
	{
		___m_ReferencePixelsPerUnit_5 = value;
	}

	inline static int32_t get_offset_of_m_ScaleFactor_6() { return static_cast<int32_t>(offsetof(CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1, ___m_ScaleFactor_6)); }
	inline float get_m_ScaleFactor_6() const { return ___m_ScaleFactor_6; }
	inline float* get_address_of_m_ScaleFactor_6() { return &___m_ScaleFactor_6; }
	inline void set_m_ScaleFactor_6(float value)
	{
		___m_ScaleFactor_6 = value;
	}

	inline static int32_t get_offset_of_m_ReferenceResolution_7() { return static_cast<int32_t>(offsetof(CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1, ___m_ReferenceResolution_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_ReferenceResolution_7() const { return ___m_ReferenceResolution_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_ReferenceResolution_7() { return &___m_ReferenceResolution_7; }
	inline void set_m_ReferenceResolution_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_ReferenceResolution_7 = value;
	}

	inline static int32_t get_offset_of_m_ScreenMatchMode_8() { return static_cast<int32_t>(offsetof(CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1, ___m_ScreenMatchMode_8)); }
	inline int32_t get_m_ScreenMatchMode_8() const { return ___m_ScreenMatchMode_8; }
	inline int32_t* get_address_of_m_ScreenMatchMode_8() { return &___m_ScreenMatchMode_8; }
	inline void set_m_ScreenMatchMode_8(int32_t value)
	{
		___m_ScreenMatchMode_8 = value;
	}

	inline static int32_t get_offset_of_m_MatchWidthOrHeight_9() { return static_cast<int32_t>(offsetof(CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1, ___m_MatchWidthOrHeight_9)); }
	inline float get_m_MatchWidthOrHeight_9() const { return ___m_MatchWidthOrHeight_9; }
	inline float* get_address_of_m_MatchWidthOrHeight_9() { return &___m_MatchWidthOrHeight_9; }
	inline void set_m_MatchWidthOrHeight_9(float value)
	{
		___m_MatchWidthOrHeight_9 = value;
	}

	inline static int32_t get_offset_of_m_PhysicalUnit_11() { return static_cast<int32_t>(offsetof(CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1, ___m_PhysicalUnit_11)); }
	inline int32_t get_m_PhysicalUnit_11() const { return ___m_PhysicalUnit_11; }
	inline int32_t* get_address_of_m_PhysicalUnit_11() { return &___m_PhysicalUnit_11; }
	inline void set_m_PhysicalUnit_11(int32_t value)
	{
		___m_PhysicalUnit_11 = value;
	}

	inline static int32_t get_offset_of_m_FallbackScreenDPI_12() { return static_cast<int32_t>(offsetof(CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1, ___m_FallbackScreenDPI_12)); }
	inline float get_m_FallbackScreenDPI_12() const { return ___m_FallbackScreenDPI_12; }
	inline float* get_address_of_m_FallbackScreenDPI_12() { return &___m_FallbackScreenDPI_12; }
	inline void set_m_FallbackScreenDPI_12(float value)
	{
		___m_FallbackScreenDPI_12 = value;
	}

	inline static int32_t get_offset_of_m_DefaultSpriteDPI_13() { return static_cast<int32_t>(offsetof(CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1, ___m_DefaultSpriteDPI_13)); }
	inline float get_m_DefaultSpriteDPI_13() const { return ___m_DefaultSpriteDPI_13; }
	inline float* get_address_of_m_DefaultSpriteDPI_13() { return &___m_DefaultSpriteDPI_13; }
	inline void set_m_DefaultSpriteDPI_13(float value)
	{
		___m_DefaultSpriteDPI_13 = value;
	}

	inline static int32_t get_offset_of_m_DynamicPixelsPerUnit_14() { return static_cast<int32_t>(offsetof(CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1, ___m_DynamicPixelsPerUnit_14)); }
	inline float get_m_DynamicPixelsPerUnit_14() const { return ___m_DynamicPixelsPerUnit_14; }
	inline float* get_address_of_m_DynamicPixelsPerUnit_14() { return &___m_DynamicPixelsPerUnit_14; }
	inline void set_m_DynamicPixelsPerUnit_14(float value)
	{
		___m_DynamicPixelsPerUnit_14 = value;
	}

	inline static int32_t get_offset_of_m_Canvas_15() { return static_cast<int32_t>(offsetof(CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1, ___m_Canvas_15)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_15() const { return ___m_Canvas_15; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_15() { return &___m_Canvas_15; }
	inline void set_m_Canvas_15(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_PrevScaleFactor_16() { return static_cast<int32_t>(offsetof(CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1, ___m_PrevScaleFactor_16)); }
	inline float get_m_PrevScaleFactor_16() const { return ___m_PrevScaleFactor_16; }
	inline float* get_address_of_m_PrevScaleFactor_16() { return &___m_PrevScaleFactor_16; }
	inline void set_m_PrevScaleFactor_16(float value)
	{
		___m_PrevScaleFactor_16 = value;
	}

	inline static int32_t get_offset_of_m_PrevReferencePixelsPerUnit_17() { return static_cast<int32_t>(offsetof(CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1, ___m_PrevReferencePixelsPerUnit_17)); }
	inline float get_m_PrevReferencePixelsPerUnit_17() const { return ___m_PrevReferencePixelsPerUnit_17; }
	inline float* get_address_of_m_PrevReferencePixelsPerUnit_17() { return &___m_PrevReferencePixelsPerUnit_17; }
	inline void set_m_PrevReferencePixelsPerUnit_17(float value)
	{
		___m_PrevReferencePixelsPerUnit_17 = value;
	}

	inline static int32_t get_offset_of_m_PresetInfoIsWorld_18() { return static_cast<int32_t>(offsetof(CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1, ___m_PresetInfoIsWorld_18)); }
	inline bool get_m_PresetInfoIsWorld_18() const { return ___m_PresetInfoIsWorld_18; }
	inline bool* get_address_of_m_PresetInfoIsWorld_18() { return &___m_PresetInfoIsWorld_18; }
	inline void set_m_PresetInfoIsWorld_18(bool value)
	{
		___m_PresetInfoIsWorld_18 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m4EC05D3E15710E112A6399BED7BC82A128B5DED4_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method);

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m18E12C65F127D1AA50D196623F04F81CB138FD12 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_m592E9A21D51BE9E1D9E23A85750548E8CC8DB00D (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.Boolean Google.XR.Cardboard.Api::get_IsTriggerPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_IsTriggerPressed_m837615B2053302668CD50111172AEED05AB9C241 (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_sleepTimeout_mE9A766E696E76AC77EAADB4CA6412454577FCBB3 (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Screen::set_brightness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_brightness_mE6A1F1F8814A359B96179EEEEEA36537ECD40C58 (float ___value0, const RuntimeMethod* method);
// System.Boolean Google.XR.Cardboard.Api::HasDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_HasDeviceParams_mC256C45963FAC47F71868A2D72C55161BB3165A3 (const RuntimeMethod* method);
// System.Void Google.XR.Cardboard.Api::ScanDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_ScanDeviceParams_mD4E0E493D754C1ACF73EECA7B44129DC82655F08 (const RuntimeMethod* method);
// System.Boolean Google.XR.Cardboard.Api::get_IsGearButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_IsGearButtonPressed_m71B3DC77C8053D0716A209115A3B85C2D6E16F57 (const RuntimeMethod* method);
// System.Boolean Google.XR.Cardboard.Api::get_IsCloseButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_IsCloseButtonPressed_mE1CF98528B97794A6C6F7AC22DD5035DE25EFC2F (const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Boolean Google.XR.Cardboard.Api::get_IsTriggerHeldPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_IsTriggerHeldPressed_mF036AB16C9BD67B816466A6820384A5E0572761B (const RuntimeMethod* method);
// System.Void Google.XR.Cardboard.Api::Recenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_Recenter_mDE03A770A4354082D646BBE2CA1BAE21E8A41A28 (const RuntimeMethod* method);
// System.Boolean Google.XR.Cardboard.Api::HasNewDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_HasNewDeviceParams_mD2F906E4FC4A9F70FA619D43C2A91ABFC99D5098 (const RuntimeMethod* method);
// System.Void Google.XR.Cardboard.Api::ReloadDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_ReloadDeviceParams_mB19615620DA55141449769ADF90976A75C16013C (const RuntimeMethod* method);
// System.Void Google.XR.Cardboard.Api::UpdateScreenParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_UpdateScreenParams_m8D14F520A37843F4EE772033A7504E4723C379A2 (const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___stateName0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CapsuleCollider>()
inline CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * Component_GetComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m2B9A09217489CB456933DEA112CA70C10AD3B9F9 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void FirstPersonAIO::set_IsGrounded(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirstPersonAIO_set_IsGrounded_m69D781D93A43E9FCB9FDFA8108DE2CA82E1C66AE_inline (FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_interpolation(UnityEngine.RigidbodyInterpolation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_interpolation_mEBAF9DF8DE317E2D58848735D26ED9E69CC425CE (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_collisionDetectionMode(UnityEngine.CollisionDetectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_collisionDetectionMode_m4BC31A84B26540ACD15273774C47F31CDF5381C2 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.CapsuleCollider::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_height_mD6CF93CB2C222F8E5B77D65B0356F8FD8005B526 (CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Canvas>()
inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * GameObject_AddComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD7BF125583B13806BB804A2EF0A69334F12C7660 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.CanvasScaler>()
inline CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1 * GameObject_AddComponent_TisCanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1_m3C72FB2112A8AE0CE0CF529406A7D2D0F1B78DC7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.UI.CanvasScaler::set_uiScaleMode(UnityEngine.UI.CanvasScaler/ScaleMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasScaler_set_uiScaleMode_m75D0DFC352DB3934976F081732AB03CFB7565568_inline (CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Canvas::set_renderMode(UnityEngine.RenderMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_set_renderMode_mE19EA5E3E4758704CCA6A6A2E4EB84DB75096088 (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Canvas::set_pixelPerfect(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_set_pixelPerfect_mD477DD1867E742FF7EB7689C6DBAE243E533ED69 (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GameObject_AddComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m0FC030794383A6796E69E556941837417DA8ADC0 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217 (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_m4747F0DC20D06D1932EC740C5CCC738C1664903D (bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.CapsuleCollider::set_radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_radius_mD4502A8676AAC093F1E9958FB7D5D765EA206432 (CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.PhysicMaterial::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicMaterial__ctor_mCB9177C619CC13C3905A8CFF75D73B8B4498F330 (PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.PhysicMaterial::set_dynamicFriction(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicMaterial_set_dynamicFriction_mEE2B55B29EECABA0C7A39B102F2BD259CE0D4566 (PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.PhysicMaterial::set_staticFriction(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicMaterial_set_staticFriction_mF2914B1027C9EB422643AD4A9056D04727637EC1 (PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.PhysicMaterial::set_frictionCombine(UnityEngine.PhysicMaterialCombine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicMaterial_set_frictionCombine_mDDFA5B298AC911112AF8B7C2849BCD3C7E6632CD (PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.PhysicMaterial::set_bounceCombine(UnityEngine.PhysicMaterialCombine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicMaterial_set_bounceCombine_mB749543F95A2BDA4822FBC06A38776038875365F (PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m95EE8314087068F3AA9CEF3C3F6A246D55C4734C (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUp_m15AA6B42BD0DDCC7802346E49F30653D750260DD (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void FirstPersonAIO::ControllerPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAIO_ControllerPause_m6C4EBED61137C53778F2AFC4992554C0D08DDCFD (FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Color_op_Implicit_mECB4D0C812888ADAEE478E633B2ECF8F8FDB96C5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::MoveTowards(UnityEngine.Vector4,UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_MoveTowards_mB3246CB07E59ED7D960C5C245DB7CCEB1F17B7E2_inline (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___current0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_op_Implicit_m9B1A4B721726FCDA1844A0DC505C2FF8F8C50FC0 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___v0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_m91A8CD80613CB276708A25D965B67884400B146C (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_constraints_mA76F562D16D3BE8889E095D0309C8FE38DA914F1 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single FirstPersonAIO::SlopeCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FirstPersonAIO_SlopeCheck_m88515C1547C37ABCFD4D153C507DC8BFFB6DE3E0 (FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.CapsuleCollider::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_radius_m5746DDE5E6A099269FC9DAD253887C58E8A064D0 (CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m2EA572B4613E1BD7DBAA299511CFD2DBA179A163 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674 (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m9F3CB318085029EFD8FEBB224C84F78D84543A0E (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, float ___duration3, bool ___depthTest4, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2_Normalize_m0F1341493AD5F0B7DA4D504A44F52A1E2FFCCEC3 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Boolean FirstPersonAIO::get_IsGrounded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FirstPersonAIO_get_IsGrounded_m88E20AEA65897F31566FE87E03C32DF808A55EAD_inline (FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Physics_get_gravity_m58D5D94276B1E7A04E9F7108EEAAB7AB786BA532 (const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_sharedMaterial(UnityEngine.PhysicMaterial)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_sharedMaterial_mAAB481A26A050DC39F7C160909D33971E50F3952 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_m0B29D964FCB8460976BBE6BF56CBFDDC98EB5652 (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m138FE103CAC4B803F39E4CF579609A5C3FEB5E49 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::MoveTowards(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_MoveTowards_mE0689B09DD10CD59A01EE9E24880A5BA495FD321 (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method);
// System.Void UnityEngine.CapsuleCollider::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_height_m728C9AF3772EEC1DA9845E19F3C2899CDD2D9496 (CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mE84D30EEFE59DA28DA172342068F092A35B2BE4A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo2, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<UnityEngine.PhysicMaterial>(System.Collections.Generic.IEnumerable`1<!!0>)
inline bool Enumerable_Any_TisPhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2_m641CE0F6AA61E1866047EDC77FB8C79C51595F95 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m4EC05D3E15710E112A6399BED7BC82A128B5DED4_gshared)(___source0, method);
}
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.PhysicMaterial UnityEngine.Collider::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * Collider_get_sharedMaterial_mF09CE26DD4F93A42DEA914489D8201B625EB61F5 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.PhysicMaterial>::Contains(!0)
inline bool List_1_Contains_m32E837C20616E9C51DCBF029753220B3BE712C6D (List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * __this, PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF *, PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Linq.Enumerable::Any<UnityEngine.AudioClip>(System.Collections.Generic.IEnumerable`1<!!0>)
inline bool Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m4EC05D3E15710E112A6399BED7BC82A128B5DED4_gshared)(___source0, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<UnityEngine.Material>(System.Collections.Generic.IEnumerable`1<!!0>)
inline bool Enumerable_Any_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m05B3E50A24E2F28E1C59600F57CA6665D0C601FA (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m4EC05D3E15710E112A6399BED7BC82A128B5DED4_gshared)(___source0, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::Contains(!0)
inline bool List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, Material_t8927C00353A72755313F046D0CE85178AE8218EE *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.AudioClip>::get_Count()
inline int32_t List_1_get_Count_m1C98EA9359999773111E0918F7CE4783B66413F1_inline (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.AudioClip>::get_Item(System.Int32)
inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * List_1_get_Item_mE58237A66DC244F0D9956EF071E36DF135972BC2_inline (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * (*) (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, float ___volumeScale1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioClip>::set_Item(System.Int32,!0)
inline void List_1_set_Item_mC47650E4AF39DD6B43071C391231486FB338728E (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * __this, int32_t ___index0, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 *, int32_t, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *, const RuntimeMethod*))List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared)(__this, ___index0, ___value1, method);
}
// System.Void FirstPersonAIO/<CameraShake>d__94::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCameraShakeU3Ed__94__ctor_m24BBD535434B893830277068C29CE573E6A3D893 (U3CCameraShakeU3Ed__94_tA78701DAD782FD2C2768FC3C7F638BA8B9DE9D5A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, float ___time0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* ___keys0, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::set_preWrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_preWrapMode_m39008E29D7419438020138A0DE50999BB89266AF (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::set_postWrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_postWrapMode_mC7079F70E85156F73D8BA2E06840F7E2BEDF8568 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// UnityEngine.ContactPoint UnityEngine.Collision::GetContact(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  Collision_GetContact_mC002FC304B37450FC203319578C90AB56EA910F7 (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.ContactPoint::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ContactPoint_get_normal_m0561937E45F5356C7BB90D861422BD76B36D037A (ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.ContactPoint::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ContactPoint_get_point_mEA976D5E3BC57FAB78F68BE0AA17A97293AEA5BC (ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Collision::get_contactCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Collision_get_contactCount_mE6A54C4202C2F652D05CA105000655D28B19C8CE (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, const RuntimeMethod* method);
// System.Void FirstPersonAIO/CrouchModifiers::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrouchModifiers__ctor_mE9A98F01D73F9A783A3099FEA0F918F588A8C09B (CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96 * __this, const RuntimeMethod* method);
// System.Void FirstPersonAIO/AdvancedSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancedSettings__ctor_m481CC6D900BF5201E05EEEB15F130F1ECD3D9D37 (AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * __this, const RuntimeMethod* method);
// System.Void FirstPersonAIO/DynamicFootStep::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicFootStep__ctor_m21CF656C7F4FFFDBC62FFEB0ACAB3F1C553D83BA (DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void ObjectController::SetMaterial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_SetMaterial_mF4DF2222B39EC502F91056938CFFAA13AD4DE4C1 (ObjectController_tEE8AA18007DEB85D79F9AC0438AC2FB36BFAF5CD * __this, bool ___gazedAt0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::GetSiblingIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void ObjectController::TeleportRandomly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_TeleportRandomly_m0609E15B3460753A6538D1D7A0371DDA30E1B305 (ObjectController_tEE8AA18007DEB85D79F9AC0438AC2FB36BFAF5CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F (int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68D_inline (const RuntimeMethod* method);
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Management.XRManagerSettings::get_isInitializationComplete()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRManagerSettings_get_isInitializationComplete_m1559C8B12004C52CBAC825FFE823C2C4DF7C719D_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Boolean VrModeController::get__isVrModeEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VrModeController_get__isVrModeEnabled_mF66A05F1018FEDB94A7010E2E3F714B4C91F5F96 (VrModeController_tB06B91255F46A0456E69DDF20B0915136321030A * __this, const RuntimeMethod* method);
// System.Void VrModeController::ExitVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_ExitVR_m3559F6F2FBAE5D19998A9B51D0B22A765D451BFA (VrModeController_tB06B91255F46A0456E69DDF20B0915136321030A * __this, const RuntimeMethod* method);
// System.Boolean VrModeController::get__isScreenTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VrModeController_get__isScreenTouched_m72936928FB8C5DF4268F76BF164F02D2B10F5646 (VrModeController_tB06B91255F46A0456E69DDF20B0915136321030A * __this, const RuntimeMethod* method);
// System.Void VrModeController::EnterVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_EnterVR_m6F15FBEF8EC065C24764BA6CD70573822018013F (VrModeController_tB06B91255F46A0456E69DDF20B0915136321030A * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator VrModeController::StartXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VrModeController_StartXR_m3E9FF326A5B4CB0E1EB19F1321EE5C4B3F90C9BC (VrModeController_tB06B91255F46A0456E69DDF20B0915136321030A * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void VrModeController::StopXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_StopXR_m9464911C38618B50214F493450600A39E7EFA11F (VrModeController_tB06B91255F46A0456E69DDF20B0915136321030A * __this, const RuntimeMethod* method);
// System.Void VrModeController/<StartXR>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRU3Ed__10__ctor_mF343AAB11ACC5EB4DC599EE2CB804CE31A56B9D9 (U3CStartXRU3Ed__10_t058BBCB88A982308C334FFCC556D1E5495FCE500 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRManagerSettings::StopSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StopSubsystems_m7FF3553EEF8C7AB1D58A3D9034A25D8C31D30FFC (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRManagerSettings::DeinitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_DeinitializeLoader_m6AD4F079818DF78946C99AD8D49E3D343DAAF290 (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::ResetAspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_ResetAspect_mC80AD4BC18EA0E1E05F9295B58B6E7A8DB9072C0 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225 (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * __this, float ___time0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.XR.Management.XRManagerSettings::InitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_InitializeLoader_m92B987C89AF6F7E7D05718296243E0ED021FD6B3 (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRManagerSettings::StartSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StartSubsystems_mB9F502956C1FC6AD6D421CD36C3980B095B4282E (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void CameraPointer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPointer_Update_m03EFDAC6980037B33C39C2070279E57FDFA0E982 (CameraPointer_tAAACBC47739EFC0CF4B3FF795EF2F73EF52197DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t3945CE98308AD5031CC7F76B68A978B131AF9BE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7892A84274C1DC4A2351A49903EB298DEA99C240);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB81A1EDFC9FCE7D754F9199BAED4FF1E125B0C7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4D1D91E707649742B086EDB3E0F4EFA9754545A);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B4_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B3_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B8_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B7_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B13_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B12_0 = NULL;
	{
		// if (Physics.Raycast(transform.position, transform.forward, out hit, _maxDistance))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = Physics_Raycast_m18E12C65F127D1AA50D196623F04F81CB138FD12(L_1, L_3, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), (10.0f), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0077;
		}
	}
	{
		// if (_gazedAtObject != hit.transform.gameObject)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get__gazedAtObject_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0094;
		}
	}
	{
		// _gazedAtObject?.SendMessage("OnPointerExit");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get__gazedAtObject_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = L_9;
		G_B3_0 = L_10;
		if (L_10)
		{
			G_B4_0 = L_10;
			goto IL_0049;
		}
	}
	{
		goto IL_0053;
	}

IL_0049:
	{
		NullCheck(G_B4_0);
		GameObject_SendMessage_m592E9A21D51BE9E1D9E23A85750548E8CC8DB00D(G_B4_0, _stringLiteralB81A1EDFC9FCE7D754F9199BAED4FF1E125B0C7E, /*hidden argument*/NULL);
	}

IL_0053:
	{
		// _gazedAtObject = hit.transform.gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
		__this->set__gazedAtObject_5(L_12);
		// _gazedAtObject.SendMessage("OnPointerEnter");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get__gazedAtObject_5();
		NullCheck(L_13);
		GameObject_SendMessage_m592E9A21D51BE9E1D9E23A85750548E8CC8DB00D(L_13, _stringLiteral7892A84274C1DC4A2351A49903EB298DEA99C240, /*hidden argument*/NULL);
		// }
		goto IL_0094;
	}

IL_0077:
	{
		// _gazedAtObject?.SendMessage("OnPointerExit");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get__gazedAtObject_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = L_14;
		G_B7_0 = L_15;
		if (L_15)
		{
			G_B8_0 = L_15;
			goto IL_0083;
		}
	}
	{
		goto IL_008d;
	}

IL_0083:
	{
		NullCheck(G_B8_0);
		GameObject_SendMessage_m592E9A21D51BE9E1D9E23A85750548E8CC8DB00D(G_B8_0, _stringLiteralB81A1EDFC9FCE7D754F9199BAED4FF1E125B0C7E, /*hidden argument*/NULL);
	}

IL_008d:
	{
		// _gazedAtObject = null;
		__this->set__gazedAtObject_5((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
	}

IL_0094:
	{
		// if (Google.XR.Cardboard.Api.IsTriggerPressed)
		IL2CPP_RUNTIME_CLASS_INIT(Api_t3945CE98308AD5031CC7F76B68A978B131AF9BE5_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Api_get_IsTriggerPressed_m837615B2053302668CD50111172AEED05AB9C241(/*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00b0;
		}
	}
	{
		// _gazedAtObject?.SendMessage("OnPointerClick");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get__gazedAtObject_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = L_17;
		G_B12_0 = L_18;
		if (L_18)
		{
			G_B13_0 = L_18;
			goto IL_00a6;
		}
	}
	{
		return;
	}

IL_00a6:
	{
		NullCheck(G_B13_0);
		GameObject_SendMessage_m592E9A21D51BE9E1D9E23A85750548E8CC8DB00D(G_B13_0, _stringLiteralE4D1D91E707649742B086EDB3E0F4EFA9754545A, /*hidden argument*/NULL);
	}

IL_00b0:
	{
		// }
		return;
	}
}
// System.Void CameraPointer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPointer__ctor_mB1A747A1AEACE6E16A9D805F4F6EB409804E451E (CameraPointer_tAAACBC47739EFC0CF4B3FF795EF2F73EF52197DE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CardboardStartup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup_Start_m3FCB9C6659C076D1D1142C9BDAE65996D09AB1B9 (CardboardStartup_tF85C3681559D03FD1B61614D63E506423D797D40 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t3945CE98308AD5031CC7F76B68A978B131AF9BE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Screen.sleepTimeout = SleepTimeout.NeverSleep;
		Screen_set_sleepTimeout_mE9A766E696E76AC77EAADB4CA6412454577FCBB3((-1), /*hidden argument*/NULL);
		// Screen.brightness = 1.0f;
		Screen_set_brightness_mE6A1F1F8814A359B96179EEEEEA36537ECD40C58((1.0f), /*hidden argument*/NULL);
		// if (!Api.HasDeviceParams())
		IL2CPP_RUNTIME_CLASS_INIT(Api_t3945CE98308AD5031CC7F76B68A978B131AF9BE5_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Api_HasDeviceParams_mC256C45963FAC47F71868A2D72C55161BB3165A3(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		// Api.ScanDeviceParams();
		IL2CPP_RUNTIME_CLASS_INIT(Api_t3945CE98308AD5031CC7F76B68A978B131AF9BE5_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_mD4E0E493D754C1ACF73EECA7B44129DC82655F08(/*hidden argument*/NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void CardboardStartup::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup_Update_m9F3B419AD13A1BB0B8AAC2C46CC1415438B00186 (CardboardStartup_tF85C3681559D03FD1B61614D63E506423D797D40 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t3945CE98308AD5031CC7F76B68A978B131AF9BE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Api.IsGearButtonPressed)
		IL2CPP_RUNTIME_CLASS_INIT(Api_t3945CE98308AD5031CC7F76B68A978B131AF9BE5_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Api_get_IsGearButtonPressed_m71B3DC77C8053D0716A209115A3B85C2D6E16F57(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		// Api.ScanDeviceParams();
		IL2CPP_RUNTIME_CLASS_INIT(Api_t3945CE98308AD5031CC7F76B68A978B131AF9BE5_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_mD4E0E493D754C1ACF73EECA7B44129DC82655F08(/*hidden argument*/NULL);
	}

IL_000c:
	{
		// if (Api.IsCloseButtonPressed)
		IL2CPP_RUNTIME_CLASS_INIT(Api_t3945CE98308AD5031CC7F76B68A978B131AF9BE5_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Api_get_IsCloseButtonPressed_mE1CF98528B97794A6C6F7AC22DD5035DE25EFC2F(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
	}

IL_0018:
	{
		// if (Api.IsTriggerHeldPressed)
		IL2CPP_RUNTIME_CLASS_INIT(Api_t3945CE98308AD5031CC7F76B68A978B131AF9BE5_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Api_get_IsTriggerHeldPressed_mF036AB16C9BD67B816466A6820384A5E0572761B(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// Api.Recenter();
		IL2CPP_RUNTIME_CLASS_INIT(Api_t3945CE98308AD5031CC7F76B68A978B131AF9BE5_il2cpp_TypeInfo_var);
		Api_Recenter_mDE03A770A4354082D646BBE2CA1BAE21E8A41A28(/*hidden argument*/NULL);
	}

IL_0024:
	{
		// if (Api.HasNewDeviceParams())
		IL2CPP_RUNTIME_CLASS_INIT(Api_t3945CE98308AD5031CC7F76B68A978B131AF9BE5_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Api_HasNewDeviceParams_mD2F906E4FC4A9F70FA619D43C2A91ABFC99D5098(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// Api.ReloadDeviceParams();
		IL2CPP_RUNTIME_CLASS_INIT(Api_t3945CE98308AD5031CC7F76B68A978B131AF9BE5_il2cpp_TypeInfo_var);
		Api_ReloadDeviceParams_mB19615620DA55141449769ADF90976A75C16013C(/*hidden argument*/NULL);
	}

IL_0030:
	{
		// Api.UpdateScreenParams();
		IL2CPP_RUNTIME_CLASS_INIT(Api_t3945CE98308AD5031CC7F76B68A978B131AF9BE5_il2cpp_TypeInfo_var);
		Api_UpdateScreenParams_m8D14F520A37843F4EE772033A7504E4723C379A2(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CardboardStartup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup__ctor_mF4E4BB92450A8F689ADF75C738D86EDD87F39202 (CardboardStartup_tF85C3681559D03FD1B61614D63E506423D797D40 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Doors::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Doors_OnTriggerEnter_m54EBFFC6F9F8724F33C30BAADFF4C177DD0D953C (Doors_tF7396FB953CFABFE1C79EE753538345C378BD8C6 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___coll0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2D4DC830155E81233556A1B0F05DF4FF642507B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(coll.tag=="Player"){
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___coll0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// GetComponent<Animator>().Play("Door_open");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3;
		L_3 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		NullCheck(L_3);
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_3, _stringLiteralC2D4DC830155E81233556A1B0F05DF4FF642507B, /*hidden argument*/NULL);
		// this.enabled=false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void Doors::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Doors__ctor_m2F85E160C6D89BD63441FFD3AEEC67F6FFA8A484 (Doors_tF7396FB953CFABFE1C79EE753538345C378BD8C6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Boolean FirstPersonAIO::get_IsGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirstPersonAIO_get_IsGrounded_m88E20AEA65897F31566FE87E03C32DF808A55EAD (FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsGrounded { get; private set; }
		bool L_0 = __this->get_U3CIsGroundedU3Ek__BackingField_48();
		return L_0;
	}
}
// System.Void FirstPersonAIO::set_IsGrounded(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAIO_set_IsGrounded_m69D781D93A43E9FCB9FDFA8108DE2CA82E1C66AE (FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsGrounded { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsGroundedU3Ek__BackingField_48(L_0);
		return;
	}
}
// System.Void FirstPersonAIO::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAIO_Awake_m8C5881467F2DC73782CC3D1D9E117117FBBFDD7E (FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m2B9A09217489CB456933DEA112CA70C10AD3B9F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// originalRotation = transform.localRotation.eulerAngles;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_0), /*hidden argument*/NULL);
		__this->set_originalRotation_26(L_2);
		// walkSpeedInternal = walkSpeed;
		float L_3 = __this->get_walkSpeed_29();
		__this->set_walkSpeedInternal_42(L_3);
		// sprintSpeedInternal = sprintSpeed;
		float L_4 = __this->get_sprintSpeed_31();
		__this->set_sprintSpeedInternal_43(L_4);
		// jumpPowerInternal = jumpPower;
		float L_5 = __this->get_jumpPower_32();
		__this->set_jumpPowerInternal_44(L_5);
		// capsule = GetComponent<CapsuleCollider>();
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_6;
		L_6 = Component_GetComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m2B9A09217489CB456933DEA112CA70C10AD3B9F9(__this, /*hidden argument*/Component_GetComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m2B9A09217489CB456933DEA112CA70C10AD3B9F9_RuntimeMethod_var);
		__this->set_capsule_47(L_6);
		// IsGrounded = true;
		FirstPersonAIO_set_IsGrounded_m69D781D93A43E9FCB9FDFA8108DE2CA82E1C66AE_inline(__this, (bool)1, /*hidden argument*/NULL);
		// isCrouching = false;
		__this->set_isCrouching_50((bool)0);
		// fps_Rigidbody = GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_7;
		L_7 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		__this->set_fps_Rigidbody_54(L_7);
		// fps_Rigidbody.interpolation = RigidbodyInterpolation.Extrapolate;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_8 = __this->get_fps_Rigidbody_54();
		NullCheck(L_8);
		Rigidbody_set_interpolation_mEBAF9DF8DE317E2D58848735D26ED9E69CC425CE(L_8, 2, /*hidden argument*/NULL);
		// fps_Rigidbody.collisionDetectionMode = CollisionDetectionMode.Continuous;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_9 = __this->get_fps_Rigidbody_54();
		NullCheck(L_9);
		Rigidbody_set_collisionDetectionMode_m4BC31A84B26540ACD15273774C47F31CDF5381C2(L_9, 1, /*hidden argument*/NULL);
		// _crouchModifiers.colliderHeight = capsule.height;
		CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96 * L_10 = __this->get__crouchModifiers_45();
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_11 = __this->get_capsule_47();
		NullCheck(L_11);
		float L_12;
		L_12 = CapsuleCollider_get_height_mD6CF93CB2C222F8E5B77D65B0356F8FD8005B526(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		L_10->set_colliderHeight_6(L_12);
		// }
		return;
	}
}
// System.Void FirstPersonAIO::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAIO_Start_m8941409B0C805A3E4CAE0B1CBFC0465D058D0FF0 (FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1_m3C72FB2112A8AE0CE0CF529406A7D2D0F1B78DC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD7BF125583B13806BB804A2EF0A69334F12C7660_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m0FC030794383A6796E69E556941837417DA8ADC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6623B7518CE915C9C8E80B3065D7B8EBE9183233);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BF21D1AFA791809AE91DC624664271989958A14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BE4B474B5F0F12482FF72DB129DC2A876BC965);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3BEFB30EE14C86D4F83AFF1710933367EBF96DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEB0BDA7F3C408039249BABFF9F12BA77EB7CFE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7B1A88D0BF4B03C241DD6AA01873B38C6414206);
		s_Il2CppMethodInitialized = true;
	}
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * V_0 = NULL;
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * G_B10_0 = NULL;
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * G_B9_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * G_B11_1 = NULL;
	{
		// if(autoCrosshair || drawStaminaMeter){
		bool L_0 = __this->get_autoCrosshair_17();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		bool L_1 = __this->get_drawStaminaMeter_18();
		if (!L_1)
		{
			goto IL_0223;
		}
	}

IL_0013:
	{
		// Canvas canvas = new GameObject("AutoCrosshair").AddComponent<Canvas>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_2, _stringLiteral6BF21D1AFA791809AE91DC624664271989958A14, /*hidden argument*/NULL);
		NullCheck(L_2);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_3;
		L_3 = GameObject_AddComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD7BF125583B13806BB804A2EF0A69334F12C7660(L_2, /*hidden argument*/GameObject_AddComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD7BF125583B13806BB804A2EF0A69334F12C7660_RuntimeMethod_var);
		V_0 = L_3;
		// canvas.gameObject.AddComponent<CanvasScaler>().uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_4 = V_0;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1 * L_6;
		L_6 = GameObject_AddComponent_TisCanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1_m3C72FB2112A8AE0CE0CF529406A7D2D0F1B78DC7(L_5, /*hidden argument*/GameObject_AddComponent_TisCanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1_m3C72FB2112A8AE0CE0CF529406A7D2D0F1B78DC7_RuntimeMethod_var);
		NullCheck(L_6);
		CanvasScaler_set_uiScaleMode_m75D0DFC352DB3934976F081732AB03CFB7565568_inline(L_6, 1, /*hidden argument*/NULL);
		// canvas.renderMode = RenderMode.ScreenSpaceOverlay;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_7 = V_0;
		NullCheck(L_7);
		Canvas_set_renderMode_mE19EA5E3E4758704CCA6A6A2E4EB84DB75096088(L_7, 0, /*hidden argument*/NULL);
		// canvas.pixelPerfect = true;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_8 = V_0;
		NullCheck(L_8);
		Canvas_set_pixelPerfect_mD477DD1867E742FF7EB7689C6DBAE243E533ED69(L_8, (bool)1, /*hidden argument*/NULL);
		// canvas.transform.SetParent(playerCamera.transform);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_9 = V_0;
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_11 = __this->get_playerCamera_13();
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_10, L_12, /*hidden argument*/NULL);
		// canvas.transform.position = Vector3.zero;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_13 = V_0;
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_14, L_15, /*hidden argument*/NULL);
		// if(autoCrosshair){
		bool L_16 = __this->get_autoCrosshair_17();
		if (!L_16)
		{
			goto IL_00c5;
		}
	}
	{
		// Image crossHair = new GameObject("Crosshair").AddComponent<Image>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_17, _stringLiteral6623B7518CE915C9C8E80B3065D7B8EBE9183233, /*hidden argument*/NULL);
		NullCheck(L_17);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_18;
		L_18 = GameObject_AddComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m0FC030794383A6796E69E556941837417DA8ADC0(L_17, /*hidden argument*/GameObject_AddComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m0FC030794383A6796E69E556941837417DA8ADC0_RuntimeMethod_var);
		// crossHair.sprite = Crosshair;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_19 = L_18;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_20 = __this->get_Crosshair_22();
		NullCheck(L_19);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_19, L_20, /*hidden argument*/NULL);
		// crossHair.rectTransform.sizeDelta = new Vector2(25,25);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_21 = L_19;
		NullCheck(L_21);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_22;
		L_22 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_21, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_23), (25.0f), (25.0f), /*hidden argument*/NULL);
		NullCheck(L_22);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_22, L_23, /*hidden argument*/NULL);
		// crossHair.transform.SetParent(canvas.transform);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_24 = L_21;
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_24, /*hidden argument*/NULL);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_26 = V_0;
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_25, L_27, /*hidden argument*/NULL);
		// crossHair.transform.position = Vector3.zero;
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_28, L_29, /*hidden argument*/NULL);
	}

IL_00c5:
	{
		// if(drawStaminaMeter){
		bool L_30 = __this->get_drawStaminaMeter_18();
		if (!L_30)
		{
			goto IL_0223;
		}
	}
	{
		// StaminaMeterBG = new GameObject("StaminaMeter").AddComponent<Image>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_31, _stringLiteralB3BEFB30EE14C86D4F83AFF1710933367EBF96DE, /*hidden argument*/NULL);
		NullCheck(L_31);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_32;
		L_32 = GameObject_AddComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m0FC030794383A6796E69E556941837417DA8ADC0(L_31, /*hidden argument*/GameObject_AddComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m0FC030794383A6796E69E556941837417DA8ADC0_RuntimeMethod_var);
		__this->set_StaminaMeterBG_21(L_32);
		// StaminaMeter = new GameObject("Meter").AddComponent<Image>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_33, _stringLiteralCEB0BDA7F3C408039249BABFF9F12BA77EB7CFE3, /*hidden argument*/NULL);
		NullCheck(L_33);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_34;
		L_34 = GameObject_AddComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m0FC030794383A6796E69E556941837417DA8ADC0(L_33, /*hidden argument*/GameObject_AddComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m0FC030794383A6796E69E556941837417DA8ADC0_RuntimeMethod_var);
		__this->set_StaminaMeter_20(L_34);
		// StaminaMeter.transform.SetParent(StaminaMeterBG.transform);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_35 = __this->get_StaminaMeter_20();
		NullCheck(L_35);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_35, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_37 = __this->get_StaminaMeterBG_21();
		NullCheck(L_37);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_37, /*hidden argument*/NULL);
		NullCheck(L_36);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_36, L_38, /*hidden argument*/NULL);
		// StaminaMeterBG.transform.SetParent(canvas.transform);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_39 = __this->get_StaminaMeterBG_21();
		NullCheck(L_39);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_39, /*hidden argument*/NULL);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_41 = V_0;
		NullCheck(L_41);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_40, L_42, /*hidden argument*/NULL);
		// StaminaMeterBG.transform.position = Vector3.zero;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_43 = __this->get_StaminaMeterBG_21();
		NullCheck(L_43);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_43, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_44);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_44, L_45, /*hidden argument*/NULL);
		// StaminaMeterBG.rectTransform.anchorMax = new Vector2(0.5f,0);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_46 = __this->get_StaminaMeterBG_21();
		NullCheck(L_46);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_47;
		L_47 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_46, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_48), (0.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_47);
		RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D(L_47, L_48, /*hidden argument*/NULL);
		// StaminaMeterBG.rectTransform.anchorMin = new Vector2(0.5f,0);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_49 = __this->get_StaminaMeterBG_21();
		NullCheck(L_49);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_50;
		L_50 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_49, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_51), (0.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_50);
		RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798(L_50, L_51, /*hidden argument*/NULL);
		// StaminaMeterBG.rectTransform.anchoredPosition = new Vector2(0,15);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_52 = __this->get_StaminaMeterBG_21();
		NullCheck(L_52);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_53;
		L_53 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_52, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_54), (0.0f), (15.0f), /*hidden argument*/NULL);
		NullCheck(L_53);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_53, L_54, /*hidden argument*/NULL);
		// StaminaMeterBG.rectTransform.sizeDelta = new Vector2(250,6);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_55 = __this->get_StaminaMeterBG_21();
		NullCheck(L_55);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_56;
		L_56 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_55, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_57), (250.0f), (6.0f), /*hidden argument*/NULL);
		NullCheck(L_56);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_56, L_57, /*hidden argument*/NULL);
		// StaminaMeterBG.color = new Color(0,0,0,0);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_58 = __this->get_StaminaMeterBG_21();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_59;
		memset((&L_59), 0, sizeof(L_59));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_59), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_58);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_58, L_59);
		// StaminaMeter.rectTransform.sizeDelta = new Vector2(250,6);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_60 = __this->get_StaminaMeter_20();
		NullCheck(L_60);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_61;
		L_61 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_60, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_62;
		memset((&L_62), 0, sizeof(L_62));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_62), (250.0f), (6.0f), /*hidden argument*/NULL);
		NullCheck(L_61);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_61, L_62, /*hidden argument*/NULL);
		// StaminaMeter.color = new Color(0,0,0,0);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_63 = __this->get_StaminaMeter_20();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_64;
		memset((&L_64), 0, sizeof(L_64));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_64), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_63);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_63, L_64);
	}

IL_0223:
	{
		// cameraStartingPosition = playerCamera.transform.localPosition;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_65 = __this->get_playerCamera_13();
		NullCheck(L_65);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_66;
		L_66 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_65, /*hidden argument*/NULL);
		NullCheck(L_66);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67;
		L_67 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_66, /*hidden argument*/NULL);
		__this->set_cameraStartingPosition_15(L_67);
		// if(lockAndHideCursor) { Cursor.lockState = CursorLockMode.Locked; Cursor.visible = false; }
		bool L_68 = __this->get_lockAndHideCursor_12();
		if (!L_68)
		{
			goto IL_024d;
		}
	}
	{
		// if(lockAndHideCursor) { Cursor.lockState = CursorLockMode.Locked; Cursor.visible = false; }
		Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217(1, /*hidden argument*/NULL);
		// if(lockAndHideCursor) { Cursor.lockState = CursorLockMode.Locked; Cursor.visible = false; }
		Cursor_set_visible_m4747F0DC20D06D1932EC740C5CCC738C1664903D((bool)0, /*hidden argument*/NULL);
	}

IL_024d:
	{
		// baseCamFOV = playerCamera.fieldOfView;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_69 = __this->get_playerCamera_13();
		NullCheck(L_69);
		float L_70;
		L_70 = Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920(L_69, /*hidden argument*/NULL);
		__this->set_baseCamFOV_16(L_70);
		// capsule.radius = capsule.height/4;
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_71 = __this->get_capsule_47();
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_72 = __this->get_capsule_47();
		NullCheck(L_72);
		float L_73;
		L_73 = CapsuleCollider_get_height_mD6CF93CB2C222F8E5B77D65B0356F8FD8005B526(L_72, /*hidden argument*/NULL);
		NullCheck(L_71);
		CapsuleCollider_set_radius_mD4502A8676AAC093F1E9958FB7D5D765EA206432(L_71, ((float)((float)L_73/(float)(4.0f))), /*hidden argument*/NULL);
		// staminaInternal = staminaLevel;
		float L_74 = __this->get_staminaLevel_39();
		__this->set_staminaInternal_41(L_74);
		// advanced.zeroFrictionMaterial = new PhysicMaterial("Zero_Friction");
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_75 = __this->get_advanced_46();
		PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * L_76 = (PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 *)il2cpp_codegen_object_new(PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2_il2cpp_TypeInfo_var);
		PhysicMaterial__ctor_mCB9177C619CC13C3905A8CFF75D73B8B4498F330(L_76, _stringLiteralF7B1A88D0BF4B03C241DD6AA01873B38C6414206, /*hidden argument*/NULL);
		NullCheck(L_75);
		L_75->set_zeroFrictionMaterial_1(L_76);
		// advanced.zeroFrictionMaterial.dynamicFriction =0;
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_77 = __this->get_advanced_46();
		NullCheck(L_77);
		PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * L_78 = L_77->get_zeroFrictionMaterial_1();
		NullCheck(L_78);
		PhysicMaterial_set_dynamicFriction_mEE2B55B29EECABA0C7A39B102F2BD259CE0D4566(L_78, (0.0f), /*hidden argument*/NULL);
		// advanced.zeroFrictionMaterial.staticFriction =0;
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_79 = __this->get_advanced_46();
		NullCheck(L_79);
		PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * L_80 = L_79->get_zeroFrictionMaterial_1();
		NullCheck(L_80);
		PhysicMaterial_set_staticFriction_mF2914B1027C9EB422643AD4A9056D04727637EC1(L_80, (0.0f), /*hidden argument*/NULL);
		// advanced.zeroFrictionMaterial.frictionCombine = PhysicMaterialCombine.Minimum;
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_81 = __this->get_advanced_46();
		NullCheck(L_81);
		PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * L_82 = L_81->get_zeroFrictionMaterial_1();
		NullCheck(L_82);
		PhysicMaterial_set_frictionCombine_mDDFA5B298AC911112AF8B7C2849BCD3C7E6632CD(L_82, 2, /*hidden argument*/NULL);
		// advanced.zeroFrictionMaterial.bounceCombine = PhysicMaterialCombine.Minimum;
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_83 = __this->get_advanced_46();
		NullCheck(L_83);
		PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * L_84 = L_83->get_zeroFrictionMaterial_1();
		NullCheck(L_84);
		PhysicMaterial_set_bounceCombine_mB749543F95A2BDA4822FBC06A38776038875365F(L_84, 2, /*hidden argument*/NULL);
		// advanced.highFrictionMaterial = new PhysicMaterial("Max_Friction");
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_85 = __this->get_advanced_46();
		PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * L_86 = (PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 *)il2cpp_codegen_object_new(PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2_il2cpp_TypeInfo_var);
		PhysicMaterial__ctor_mCB9177C619CC13C3905A8CFF75D73B8B4498F330(L_86, _stringLiteral86BE4B474B5F0F12482FF72DB129DC2A876BC965, /*hidden argument*/NULL);
		NullCheck(L_85);
		L_85->set_highFrictionMaterial_2(L_86);
		// advanced.highFrictionMaterial.dynamicFriction =1;
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_87 = __this->get_advanced_46();
		NullCheck(L_87);
		PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * L_88 = L_87->get_highFrictionMaterial_2();
		NullCheck(L_88);
		PhysicMaterial_set_dynamicFriction_mEE2B55B29EECABA0C7A39B102F2BD259CE0D4566(L_88, (1.0f), /*hidden argument*/NULL);
		// advanced.highFrictionMaterial.staticFriction =1;
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_89 = __this->get_advanced_46();
		NullCheck(L_89);
		PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * L_90 = L_89->get_highFrictionMaterial_2();
		NullCheck(L_90);
		PhysicMaterial_set_staticFriction_mF2914B1027C9EB422643AD4A9056D04727637EC1(L_90, (1.0f), /*hidden argument*/NULL);
		// advanced.highFrictionMaterial.frictionCombine = PhysicMaterialCombine.Maximum;
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_91 = __this->get_advanced_46();
		NullCheck(L_91);
		PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * L_92 = L_91->get_highFrictionMaterial_2();
		NullCheck(L_92);
		PhysicMaterial_set_frictionCombine_mDDFA5B298AC911112AF8B7C2849BCD3C7E6632CD(L_92, 3, /*hidden argument*/NULL);
		// advanced.highFrictionMaterial.bounceCombine = PhysicMaterialCombine.Average;
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_93 = __this->get_advanced_46();
		NullCheck(L_93);
		PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * L_94 = L_93->get_highFrictionMaterial_2();
		NullCheck(L_94);
		PhysicMaterial_set_bounceCombine_mB749543F95A2BDA4822FBC06A38776038875365F(L_94, 0, /*hidden argument*/NULL);
		// originalLocalPosition = snapHeadjointToCapsul ? new Vector3(head.localPosition.x, (capsule.height/2)*head.localScale.y ,head.localPosition.z) : head.localPosition;
		bool L_95 = __this->get_snapHeadjointToCapsul_57();
		G_B9_0 = __this;
		if (L_95)
		{
			G_B10_0 = __this;
			goto IL_035e;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_96 = __this->get_head_56();
		NullCheck(L_96);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_97;
		L_97 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_96, /*hidden argument*/NULL);
		G_B11_0 = L_97;
		G_B11_1 = G_B9_0;
		goto IL_03a5;
	}

IL_035e:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_98 = __this->get_head_56();
		NullCheck(L_98);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_99;
		L_99 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_98, /*hidden argument*/NULL);
		float L_100 = L_99.get_x_2();
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_101 = __this->get_capsule_47();
		NullCheck(L_101);
		float L_102;
		L_102 = CapsuleCollider_get_height_mD6CF93CB2C222F8E5B77D65B0356F8FD8005B526(L_101, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_103 = __this->get_head_56();
		NullCheck(L_103);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_104;
		L_104 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_103, /*hidden argument*/NULL);
		float L_105 = L_104.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_106 = __this->get_head_56();
		NullCheck(L_106);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_107;
		L_107 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_106, /*hidden argument*/NULL);
		float L_108 = L_107.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_109;
		memset((&L_109), 0, sizeof(L_109));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_109), L_100, ((float)il2cpp_codegen_multiply((float)((float)((float)L_102/(float)(2.0f))), (float)L_105)), L_108, /*hidden argument*/NULL);
		G_B11_0 = L_109;
		G_B11_1 = G_B10_0;
	}

IL_03a5:
	{
		NullCheck(G_B11_1);
		G_B11_1->set_originalLocalPosition_63(G_B11_0);
		// if(GetComponent<AudioSource>() == null) { gameObject.AddComponent<AudioSource>(); }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_110;
		L_110 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_111;
		L_111 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_110, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_111)
		{
			goto IL_03c4;
		}
	}
	{
		// if(GetComponent<AudioSource>() == null) { gameObject.AddComponent<AudioSource>(); }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_112;
		L_112 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_112);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_113;
		L_113 = GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76(L_112, /*hidden argument*/GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
	}

IL_03c4:
	{
		// previousPosition = fps_Rigidbody.position;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_114 = __this->get_fps_Rigidbody_54();
		NullCheck(L_114);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_115;
		L_115 = Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8(L_114, /*hidden argument*/NULL);
		__this->set_previousPosition_73(L_115);
		// audioSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_116;
		L_116 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_audioSource_77(L_116);
		// }
		return;
	}
}
// System.Void FirstPersonAIO::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAIO_Update_m316460A5BED2B183CF4ECA7A438B80089F6C3E03 (FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B12_0 = 0.0f;
	float G_B16_0 = 0.0f;
	float G_B14_0 = 0.0f;
	float G_B15_0 = 0.0f;
	int32_t G_B17_0 = 0;
	float G_B17_1 = 0.0f;
	int32_t G_B37_0 = 0;
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * G_B45_0 = NULL;
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * G_B44_0 = NULL;
	int32_t G_B46_0 = 0;
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * G_B46_1 = NULL;
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * G_B50_0 = NULL;
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * G_B49_0 = NULL;
	int32_t G_B51_0 = 0;
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * G_B51_1 = NULL;
	{
		// if(enableCameraMovement && !controllerPauseState){
		bool L_0 = __this->get_enableCameraMovement_5();
		if (!L_0)
		{
			goto IL_02d9;
		}
	}
	{
		bool L_1 = __this->get_controllerPauseState_4();
		if (L_1)
		{
			goto IL_02d9;
		}
	}
	{
		// float mouseYInput = 0;
		V_0 = (0.0f);
		// float mouseXInput = 0;
		V_1 = (0.0f);
		// float camFOV = playerCamera.fieldOfView;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = __this->get_playerCamera_13();
		NullCheck(L_2);
		float L_3;
		L_3 = Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		// if (cameraInputMethod == CameraInputMethod.Traditional || cameraInputMethod == CameraInputMethod.TraditionalWithConstraints){
		int32_t L_4 = __this->get_cameraInputMethod_7();
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_5 = __this->get_cameraInputMethod_7();
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0093;
		}
	}

IL_003f:
	{
		// mouseYInput = mouseInputInversion == InvertMouseInput.None || mouseInputInversion == InvertMouseInput.X ? Input.GetAxis("Mouse Y") : -Input.GetAxis("Mouse Y");
		int32_t L_6 = __this->get_mouseInputInversion_6();
		if (!L_6)
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_7 = __this->get_mouseInputInversion_6();
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_005d;
		}
	}
	{
		float L_8;
		L_8 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, /*hidden argument*/NULL);
		G_B8_0 = ((-L_8));
		goto IL_0067;
	}

IL_005d:
	{
		float L_9;
		L_9 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, /*hidden argument*/NULL);
		G_B8_0 = L_9;
	}

IL_0067:
	{
		V_0 = G_B8_0;
		// mouseXInput = mouseInputInversion == InvertMouseInput.None || mouseInputInversion == InvertMouseInput.Y ? Input.GetAxis("Mouse X") : -Input.GetAxis("Mouse X");
		int32_t L_10 = __this->get_mouseInputInversion_6();
		if (!L_10)
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_11 = __this->get_mouseInputInversion_6();
		if ((((int32_t)L_11) == ((int32_t)2)))
		{
			goto IL_0086;
		}
	}
	{
		float L_12;
		L_12 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, /*hidden argument*/NULL);
		G_B12_0 = ((-L_12));
		goto IL_0090;
	}

IL_0086:
	{
		float L_13;
		L_13 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, /*hidden argument*/NULL);
		G_B12_0 = L_13;
	}

IL_0090:
	{
		V_1 = G_B12_0;
		// }
		goto IL_00b5;
	}

IL_0093:
	{
		// mouseXInput= Input.GetAxis("Horizontal") * (mouseInputInversion == InvertMouseInput.None || mouseInputInversion == InvertMouseInput.Y ? 1 : -1);
		float L_14;
		L_14 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		int32_t L_15 = __this->get_mouseInputInversion_6();
		G_B14_0 = L_14;
		if (!L_15)
		{
			G_B16_0 = L_14;
			goto IL_00b1;
		}
	}
	{
		int32_t L_16 = __this->get_mouseInputInversion_6();
		G_B15_0 = G_B14_0;
		if ((((int32_t)L_16) == ((int32_t)2)))
		{
			G_B16_0 = G_B14_0;
			goto IL_00b1;
		}
	}
	{
		G_B17_0 = (-1);
		G_B17_1 = G_B15_0;
		goto IL_00b2;
	}

IL_00b1:
	{
		G_B17_0 = 1;
		G_B17_1 = G_B16_0;
	}

IL_00b2:
	{
		V_1 = ((float)il2cpp_codegen_multiply((float)G_B17_1, (float)((float)((float)G_B17_0))));
	}

IL_00b5:
	{
		// }            if(targetAngles.y > 180) { targetAngles.y -= 360; followAngles.y -= 360; } else if(targetAngles.y < -180) { targetAngles.y += 360; followAngles.y += 360; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_17 = __this->get_address_of_targetAngles_23();
		float L_18 = L_17->get_y_3();
		if ((!(((float)L_18) > ((float)(180.0f)))))
		{
			goto IL_00f1;
		}
	}
	{
		// }            if(targetAngles.y > 180) { targetAngles.y -= 360; followAngles.y -= 360; } else if(targetAngles.y < -180) { targetAngles.y += 360; followAngles.y += 360; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_19 = __this->get_address_of_targetAngles_23();
		float* L_20 = L_19->get_address_of_y_3();
		float* L_21 = L_20;
		float L_22 = *((float*)L_21);
		*((float*)L_21) = (float)((float)il2cpp_codegen_subtract((float)L_22, (float)(360.0f)));
		// }            if(targetAngles.y > 180) { targetAngles.y -= 360; followAngles.y -= 360; } else if(targetAngles.y < -180) { targetAngles.y += 360; followAngles.y += 360; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_23 = __this->get_address_of_followAngles_24();
		float* L_24 = L_23->get_address_of_y_3();
		float* L_25 = L_24;
		float L_26 = *((float*)L_25);
		*((float*)L_25) = (float)((float)il2cpp_codegen_subtract((float)L_26, (float)(360.0f)));
		// }            if(targetAngles.y > 180) { targetAngles.y -= 360; followAngles.y -= 360; } else if(targetAngles.y < -180) { targetAngles.y += 360; followAngles.y += 360; }
		goto IL_012b;
	}

IL_00f1:
	{
		// }            if(targetAngles.y > 180) { targetAngles.y -= 360; followAngles.y -= 360; } else if(targetAngles.y < -180) { targetAngles.y += 360; followAngles.y += 360; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_27 = __this->get_address_of_targetAngles_23();
		float L_28 = L_27->get_y_3();
		if ((!(((float)L_28) < ((float)(-180.0f)))))
		{
			goto IL_012b;
		}
	}
	{
		// }            if(targetAngles.y > 180) { targetAngles.y -= 360; followAngles.y -= 360; } else if(targetAngles.y < -180) { targetAngles.y += 360; followAngles.y += 360; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_29 = __this->get_address_of_targetAngles_23();
		float* L_30 = L_29->get_address_of_y_3();
		float* L_31 = L_30;
		float L_32 = *((float*)L_31);
		*((float*)L_31) = (float)((float)il2cpp_codegen_add((float)L_32, (float)(360.0f)));
		// }            if(targetAngles.y > 180) { targetAngles.y -= 360; followAngles.y -= 360; } else if(targetAngles.y < -180) { targetAngles.y += 360; followAngles.y += 360; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_33 = __this->get_address_of_followAngles_24();
		float* L_34 = L_33->get_address_of_y_3();
		float* L_35 = L_34;
		float L_36 = *((float*)L_35);
		*((float*)L_35) = (float)((float)il2cpp_codegen_add((float)L_36, (float)(360.0f)));
	}

IL_012b:
	{
		// if(targetAngles.x > 180) { targetAngles.x -= 360; followAngles.x -= 360; } else if(targetAngles.x < -180) { targetAngles.x += 360; followAngles.x += 360; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_37 = __this->get_address_of_targetAngles_23();
		float L_38 = L_37->get_x_2();
		if ((!(((float)L_38) > ((float)(180.0f)))))
		{
			goto IL_0167;
		}
	}
	{
		// if(targetAngles.x > 180) { targetAngles.x -= 360; followAngles.x -= 360; } else if(targetAngles.x < -180) { targetAngles.x += 360; followAngles.x += 360; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_39 = __this->get_address_of_targetAngles_23();
		float* L_40 = L_39->get_address_of_x_2();
		float* L_41 = L_40;
		float L_42 = *((float*)L_41);
		*((float*)L_41) = (float)((float)il2cpp_codegen_subtract((float)L_42, (float)(360.0f)));
		// if(targetAngles.x > 180) { targetAngles.x -= 360; followAngles.x -= 360; } else if(targetAngles.x < -180) { targetAngles.x += 360; followAngles.x += 360; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_43 = __this->get_address_of_followAngles_24();
		float* L_44 = L_43->get_address_of_x_2();
		float* L_45 = L_44;
		float L_46 = *((float*)L_45);
		*((float*)L_45) = (float)((float)il2cpp_codegen_subtract((float)L_46, (float)(360.0f)));
		// if(targetAngles.x > 180) { targetAngles.x -= 360; followAngles.x -= 360; } else if(targetAngles.x < -180) { targetAngles.x += 360; followAngles.x += 360; }
		goto IL_01a1;
	}

IL_0167:
	{
		// if(targetAngles.x > 180) { targetAngles.x -= 360; followAngles.x -= 360; } else if(targetAngles.x < -180) { targetAngles.x += 360; followAngles.x += 360; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_47 = __this->get_address_of_targetAngles_23();
		float L_48 = L_47->get_x_2();
		if ((!(((float)L_48) < ((float)(-180.0f)))))
		{
			goto IL_01a1;
		}
	}
	{
		// if(targetAngles.x > 180) { targetAngles.x -= 360; followAngles.x -= 360; } else if(targetAngles.x < -180) { targetAngles.x += 360; followAngles.x += 360; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_49 = __this->get_address_of_targetAngles_23();
		float* L_50 = L_49->get_address_of_x_2();
		float* L_51 = L_50;
		float L_52 = *((float*)L_51);
		*((float*)L_51) = (float)((float)il2cpp_codegen_add((float)L_52, (float)(360.0f)));
		// if(targetAngles.x > 180) { targetAngles.x -= 360; followAngles.x -= 360; } else if(targetAngles.x < -180) { targetAngles.x += 360; followAngles.x += 360; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_53 = __this->get_address_of_followAngles_24();
		float* L_54 = L_53->get_address_of_x_2();
		float* L_55 = L_54;
		float L_56 = *((float*)L_55);
		*((float*)L_55) = (float)((float)il2cpp_codegen_add((float)L_56, (float)(360.0f)));
	}

IL_01a1:
	{
		// targetAngles.y += mouseXInput * (mouseSensitivity - ((baseCamFOV-camFOV)*fOVToMouseSensitivity)/6f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_57 = __this->get_address_of_targetAngles_23();
		float* L_58 = L_57->get_address_of_y_3();
		float* L_59 = L_58;
		float L_60 = *((float*)L_59);
		float L_61 = V_1;
		float L_62 = __this->get_mouseSensitivity_9();
		float L_63 = __this->get_baseCamFOV_16();
		float L_64 = V_2;
		float L_65 = __this->get_fOVToMouseSensitivity_10();
		*((float*)L_59) = (float)((float)il2cpp_codegen_add((float)L_60, (float)((float)il2cpp_codegen_multiply((float)L_61, (float)((float)il2cpp_codegen_subtract((float)L_62, (float)((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_63, (float)L_64)), (float)L_65))/(float)(6.0f)))))))));
		// if (cameraInputMethod == CameraInputMethod.Traditional){ targetAngles.x += mouseYInput * (mouseSensitivity - ((baseCamFOV - camFOV) * fOVToMouseSensitivity) / 6f);}
		int32_t L_66 = __this->get_cameraInputMethod_7();
		if (L_66)
		{
			goto IL_0205;
		}
	}
	{
		// if (cameraInputMethod == CameraInputMethod.Traditional){ targetAngles.x += mouseYInput * (mouseSensitivity - ((baseCamFOV - camFOV) * fOVToMouseSensitivity) / 6f);}
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_67 = __this->get_address_of_targetAngles_23();
		float* L_68 = L_67->get_address_of_x_2();
		float* L_69 = L_68;
		float L_70 = *((float*)L_69);
		float L_71 = V_0;
		float L_72 = __this->get_mouseSensitivity_9();
		float L_73 = __this->get_baseCamFOV_16();
		float L_74 = V_2;
		float L_75 = __this->get_fOVToMouseSensitivity_10();
		*((float*)L_69) = (float)((float)il2cpp_codegen_add((float)L_70, (float)((float)il2cpp_codegen_multiply((float)L_71, (float)((float)il2cpp_codegen_subtract((float)L_72, (float)((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_73, (float)L_74)), (float)L_75))/(float)(6.0f)))))))));
		// if (cameraInputMethod == CameraInputMethod.Traditional){ targetAngles.x += mouseYInput * (mouseSensitivity - ((baseCamFOV - camFOV) * fOVToMouseSensitivity) / 6f);}
		goto IL_0215;
	}

IL_0205:
	{
		// else {targetAngles.x = 0f;}
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_76 = __this->get_address_of_targetAngles_23();
		L_76->set_x_2((0.0f));
	}

IL_0215:
	{
		// targetAngles.x = Mathf.Clamp(targetAngles.x, -0.5f * verticalRotationRange, 0.5f * verticalRotationRange);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_77 = __this->get_address_of_targetAngles_23();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_78 = __this->get_address_of_targetAngles_23();
		float L_79 = L_78->get_x_2();
		float L_80 = __this->get_verticalRotationRange_8();
		float L_81 = __this->get_verticalRotationRange_8();
		float L_82;
		L_82 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_79, ((float)il2cpp_codegen_multiply((float)(-0.5f), (float)L_80)), ((float)il2cpp_codegen_multiply((float)(0.5f), (float)L_81)), /*hidden argument*/NULL);
		L_77->set_x_2(L_82);
		// followAngles = Vector3.SmoothDamp(followAngles, targetAngles, ref followVelocity, (cameraSmoothing)/100);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83 = __this->get_followAngles_24();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_84 = __this->get_targetAngles_23();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_85 = __this->get_address_of_followVelocity_25();
		float L_86 = __this->get_cameraSmoothing_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_87;
		L_87 = Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627(L_83, L_84, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_85, ((float)((float)L_86/(float)(100.0f))), /*hidden argument*/NULL);
		__this->set_followAngles_24(L_87);
		// playerCamera.transform.localRotation = Quaternion.Euler(-followAngles.x + originalRotation.x,0,0);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_88 = __this->get_playerCamera_13();
		NullCheck(L_88);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_89;
		L_89 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_88, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_90 = __this->get_address_of_followAngles_24();
		float L_91 = L_90->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_92 = __this->get_address_of_originalRotation_26();
		float L_93 = L_92->get_x_2();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_94;
		L_94 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(((float)il2cpp_codegen_add((float)((-L_91)), (float)L_93)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_89);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_89, L_94, /*hidden argument*/NULL);
		// transform.localRotation =  Quaternion.Euler(0, followAngles.y+originalRotation.y, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_95;
		L_95 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_96 = __this->get_address_of_followAngles_24();
		float L_97 = L_96->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_98 = __this->get_address_of_originalRotation_26();
		float L_99 = L_98->get_y_3();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_100;
		L_100 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), ((float)il2cpp_codegen_add((float)L_97, (float)L_99)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_95);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_95, L_100, /*hidden argument*/NULL);
	}

IL_02d9:
	{
		// if(canHoldJump ? (canJump && Input.GetButton("Jump")) : (Input.GetButtonDown("Jump") && canJump) ){
		bool L_101 = __this->get_canHoldJump_34();
		if (L_101)
		{
			goto IL_02f8;
		}
	}
	{
		bool L_102;
		L_102 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, /*hidden argument*/NULL);
		if (!L_102)
		{
			goto IL_02f5;
		}
	}
	{
		bool L_103 = __this->get_canJump_33();
		G_B37_0 = ((int32_t)(L_103));
		goto IL_030d;
	}

IL_02f5:
	{
		G_B37_0 = 0;
		goto IL_030d;
	}

IL_02f8:
	{
		bool L_104 = __this->get_canJump_33();
		if (!L_104)
		{
			goto IL_030c;
		}
	}
	{
		bool L_105;
		L_105 = Input_GetButton_m95EE8314087068F3AA9CEF3C3F6A246D55C4734C(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, /*hidden argument*/NULL);
		G_B37_0 = ((int32_t)(L_105));
		goto IL_030d;
	}

IL_030c:
	{
		G_B37_0 = 0;
	}

IL_030d:
	{
		if (!G_B37_0)
		{
			goto IL_0318;
		}
	}
	{
		// jumpInput = true;
		__this->set_jumpInput_35((bool)1);
		// }else if(Input.GetButtonUp("Jump")){jumpInput = false;}
		goto IL_032b;
	}

IL_0318:
	{
		// }else if(Input.GetButtonUp("Jump")){jumpInput = false;}
		bool L_106;
		L_106 = Input_GetButtonUp_m15AA6B42BD0DDCC7802346E49F30653D750260DD(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, /*hidden argument*/NULL);
		if (!L_106)
		{
			goto IL_032b;
		}
	}
	{
		// }else if(Input.GetButtonUp("Jump")){jumpInput = false;}
		__this->set_jumpInput_35((bool)0);
	}

IL_032b:
	{
		// if(_crouchModifiers.useCrouch){
		CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96 * L_107 = __this->get__crouchModifiers_45();
		NullCheck(L_107);
		bool L_108 = L_107->get_useCrouch_0();
		if (!L_108)
		{
			goto IL_039b;
		}
	}
	{
		// if(!_crouchModifiers.toggleCrouch){ isCrouching = _crouchModifiers.crouchOverride || Input.GetKey(_crouchModifiers.crouchKey);}
		CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96 * L_109 = __this->get__crouchModifiers_45();
		NullCheck(L_109);
		bool L_110 = L_109->get_toggleCrouch_1();
		if (L_110)
		{
			goto IL_036d;
		}
	}
	{
		// if(!_crouchModifiers.toggleCrouch){ isCrouching = _crouchModifiers.crouchOverride || Input.GetKey(_crouchModifiers.crouchKey);}
		CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96 * L_111 = __this->get__crouchModifiers_45();
		NullCheck(L_111);
		bool L_112 = L_111->get_crouchOverride_5();
		G_B44_0 = __this;
		if (L_112)
		{
			G_B45_0 = __this;
			goto IL_0365;
		}
	}
	{
		CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96 * L_113 = __this->get__crouchModifiers_45();
		NullCheck(L_113);
		int32_t L_114 = L_113->get_crouchKey_2();
		bool L_115;
		L_115 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_114, /*hidden argument*/NULL);
		G_B46_0 = ((int32_t)(L_115));
		G_B46_1 = G_B44_0;
		goto IL_0366;
	}

IL_0365:
	{
		G_B46_0 = 1;
		G_B46_1 = G_B45_0;
	}

IL_0366:
	{
		NullCheck(G_B46_1);
		G_B46_1->set_isCrouching_50((bool)G_B46_0);
		// if(!_crouchModifiers.toggleCrouch){ isCrouching = _crouchModifiers.crouchOverride || Input.GetKey(_crouchModifiers.crouchKey);}
		goto IL_039b;
	}

IL_036d:
	{
		// else if(Input.GetKeyDown(_crouchModifiers.crouchKey)){isCrouching = !isCrouching || _crouchModifiers.crouchOverride;}
		CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96 * L_116 = __this->get__crouchModifiers_45();
		NullCheck(L_116);
		int32_t L_117 = L_116->get_crouchKey_2();
		bool L_118;
		L_118 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(L_117, /*hidden argument*/NULL);
		if (!L_118)
		{
			goto IL_039b;
		}
	}
	{
		// else if(Input.GetKeyDown(_crouchModifiers.crouchKey)){isCrouching = !isCrouching || _crouchModifiers.crouchOverride;}
		bool L_119 = __this->get_isCrouching_50();
		G_B49_0 = __this;
		if (!L_119)
		{
			G_B50_0 = __this;
			goto IL_0395;
		}
	}
	{
		CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96 * L_120 = __this->get__crouchModifiers_45();
		NullCheck(L_120);
		bool L_121 = L_120->get_crouchOverride_5();
		G_B51_0 = ((int32_t)(L_121));
		G_B51_1 = G_B49_0;
		goto IL_0396;
	}

IL_0395:
	{
		G_B51_0 = 1;
		G_B51_1 = G_B50_0;
	}

IL_0396:
	{
		NullCheck(G_B51_1);
		G_B51_1->set_isCrouching_50((bool)G_B51_0);
	}

IL_039b:
	{
		// if(Input.GetButtonDown("Cancel")){ControllerPause();}
		bool L_122;
		L_122 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(_stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674, /*hidden argument*/NULL);
		if (!L_122)
		{
			goto IL_03ad;
		}
	}
	{
		// if(Input.GetButtonDown("Cancel")){ControllerPause();}
		FirstPersonAIO_ControllerPause_m6C4EBED61137C53778F2AFC4992554C0D08DDCFD(__this, /*hidden argument*/NULL);
	}

IL_03ad:
	{
		// }
		return;
	}
}
// System.Void FirstPersonAIO::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAIO_FixedUpdate_m9F0580F27C1C7C5EAB08DB823772E90BD887D172 (FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m05B3E50A24E2F28E1C59600F57CA6665D0C601FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisPhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2_m641CE0F6AA61E1866047EDC77FB8C79C51595F95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m32E837C20616E9C51DCBF029753220B3BE712C6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1C98EA9359999773111E0918F7CE4783B66413F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE58237A66DC244F0D9956EF071E36DF135972BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mC47650E4AF39DD6B43071C391231486FB338728E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_13;
	memset((&V_13), 0, sizeof(V_13));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_15;
	memset((&V_15), 0, sizeof(V_15));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_16;
	memset((&V_16), 0, sizeof(V_16));
	float V_17 = 0.0f;
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_18;
	memset((&V_18), 0, sizeof(V_18));
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * G_B7_0 = NULL;
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * G_B2_0 = NULL;
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * G_B3_0 = NULL;
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * G_B4_0 = NULL;
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * G_B6_0 = NULL;
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * G_B5_0 = NULL;
	int32_t G_B8_0 = 0;
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * G_B8_1 = NULL;
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * G_B27_0 = NULL;
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * G_B24_0 = NULL;
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * G_B26_0 = NULL;
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * G_B25_0 = NULL;
	float G_B32_0 = 0.0f;
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * G_B32_1 = NULL;
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * G_B31_0 = NULL;
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * G_B28_0 = NULL;
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * G_B30_0 = NULL;
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * G_B29_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B42_0;
	memset((&G_B42_0), 0, sizeof(G_B42_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B41_0;
	memset((&G_B41_0), 0, sizeof(G_B41_0));
	float G_B43_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B43_1;
	memset((&G_B43_1), 0, sizeof(G_B43_1));
	float G_B61_0 = 0.0f;
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * G_B61_1 = NULL;
	float G_B60_0 = 0.0f;
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * G_B60_1 = NULL;
	float G_B62_0 = 0.0f;
	float G_B62_1 = 0.0f;
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * G_B62_2 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B113_0;
	memset((&G_B113_0), 0, sizeof(G_B113_0));
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B113_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B112_0;
	memset((&G_B112_0), 0, sizeof(G_B112_0));
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B112_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B114_0;
	memset((&G_B114_0), 0, sizeof(G_B114_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B114_1;
	memset((&G_B114_1), 0, sizeof(G_B114_1));
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B114_2 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B117_0;
	memset((&G_B117_0), 0, sizeof(G_B117_0));
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B117_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B116_0;
	memset((&G_B116_0), 0, sizeof(G_B116_0));
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B116_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B118_0;
	memset((&G_B118_0), 0, sizeof(G_B118_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B118_1;
	memset((&G_B118_1), 0, sizeof(G_B118_1));
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B118_2 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B127_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B125_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B126_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B152_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B130_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B128_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B129_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B151_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B133_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B131_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B132_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B150_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B136_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B134_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B135_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B149_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B139_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B137_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B138_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B148_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B142_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B140_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B141_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B147_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B145_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B143_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B144_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B146_0 = NULL;
	List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * G_B153_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B153_1 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B158_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B156_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B157_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B185_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B161_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B159_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B160_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B184_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B164_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B162_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B163_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B183_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B167_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B165_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B166_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B182_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B170_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B168_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B169_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B181_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B173_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B171_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B172_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B180_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B176_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B174_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B175_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B179_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B178_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B177_0 = NULL;
	List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * G_B186_0 = NULL;
	DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * G_B186_1 = NULL;
	{
		// if(useStamina){
		bool L_0 = __this->get_useStamina_37();
		if (!L_0)
		{
			goto IL_02f7;
		}
	}
	{
		// isSprinting = Input.GetKey(sprintKey) && !isCrouching && staminaInternal > 0 && (Mathf.Abs(fps_Rigidbody.velocity.x) > 0.01f || Mathf.Abs(fps_Rigidbody.velocity.z) > 0.01f);
		int32_t L_1 = __this->get_sprintKey_30();
		bool L_2;
		L_2 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_1, /*hidden argument*/NULL);
		G_B2_0 = __this;
		if (!L_2)
		{
			G_B7_0 = __this;
			goto IL_006b;
		}
	}
	{
		bool L_3 = __this->get_isCrouching_50();
		G_B3_0 = G_B2_0;
		if (L_3)
		{
			G_B7_0 = G_B2_0;
			goto IL_006b;
		}
	}
	{
		float L_4 = __this->get_staminaInternal_41();
		G_B4_0 = G_B3_0;
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			G_B7_0 = G_B3_0;
			goto IL_006b;
		}
	}
	{
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_5 = __this->get_fps_Rigidbody_54();
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_x_2();
		float L_8;
		L_8 = fabsf(L_7);
		G_B5_0 = G_B4_0;
		if ((((float)L_8) > ((float)(0.00999999978f))))
		{
			G_B6_0 = G_B4_0;
			goto IL_0068;
		}
	}
	{
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_9 = __this->get_fps_Rigidbody_54();
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_z_4();
		float L_12;
		L_12 = fabsf(L_11);
		G_B8_0 = ((((float)L_12) > ((float)(0.00999999978f)))? 1 : 0);
		G_B8_1 = G_B5_0;
		goto IL_006c;
	}

IL_0068:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B6_0;
		goto IL_006c;
	}

IL_006b:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
	}

IL_006c:
	{
		NullCheck(G_B8_1);
		G_B8_1->set_isSprinting_53((bool)G_B8_0);
		// if(isSprinting){
		bool L_13 = __this->get_isSprinting_53();
		if (!L_13)
		{
			goto IL_012e;
		}
	}
	{
		// staminaInternal -= (staminaDepletionSpeed*2)*Time.deltaTime;
		float L_14 = __this->get_staminaInternal_41();
		float L_15 = __this->get_staminaDepletionSpeed_38();
		float L_16;
		L_16 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_staminaInternal_41(((float)il2cpp_codegen_subtract((float)L_14, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_15, (float)(2.0f))), (float)L_16)))));
		// if(drawStaminaMeter){
		bool L_17 = __this->get_drawStaminaMeter_18();
		if (!L_17)
		{
			goto IL_01a2;
		}
	}
	{
		// StaminaMeterBG.color = Vector4.MoveTowards(StaminaMeterBG.color, new Vector4(0,0,0,0.5f),0.15f);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_18 = __this->get_StaminaMeterBG_21();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_19 = __this->get_StaminaMeterBG_21();
		NullCheck(L_19);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20;
		L_20 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_19);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_21;
		L_21 = Color_op_Implicit_mECB4D0C812888ADAEE478E633B2ECF8F8FDB96C5(L_20, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_22), (0.0f), (0.0f), (0.0f), (0.5f), /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_23;
		L_23 = Vector4_MoveTowards_mB3246CB07E59ED7D960C5C245DB7CCEB1F17B7E2_inline(L_21, L_22, (0.150000006f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_24;
		L_24 = Color_op_Implicit_m9B1A4B721726FCDA1844A0DC505C2FF8F8C50FC0(L_23, /*hidden argument*/NULL);
		NullCheck(L_18);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_18, L_24);
		// StaminaMeter.color = Vector4.MoveTowards(StaminaMeter.color, new Vector4(1,1,1,1),0.15f);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_25 = __this->get_StaminaMeter_20();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_26 = __this->get_StaminaMeter_20();
		NullCheck(L_26);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_27;
		L_27 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_26);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_28;
		L_28 = Color_op_Implicit_mECB4D0C812888ADAEE478E633B2ECF8F8FDB96C5(L_27, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_29), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_30;
		L_30 = Vector4_MoveTowards_mB3246CB07E59ED7D960C5C245DB7CCEB1F17B7E2_inline(L_28, L_29, (0.150000006f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_31;
		L_31 = Color_op_Implicit_m9B1A4B721726FCDA1844A0DC505C2FF8F8C50FC0(L_30, /*hidden argument*/NULL);
		NullCheck(L_25);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_25, L_31);
		// }else if((!Input.GetKey(sprintKey)||Mathf.Abs(fps_Rigidbody.velocity.x)< 0.01f || Mathf.Abs(fps_Rigidbody.velocity.z)< 0.01f || isCrouching)&&staminaInternal<staminaLevel){
		goto IL_01a2;
	}

IL_012e:
	{
		// }else if((!Input.GetKey(sprintKey)||Mathf.Abs(fps_Rigidbody.velocity.x)< 0.01f || Mathf.Abs(fps_Rigidbody.velocity.z)< 0.01f || isCrouching)&&staminaInternal<staminaLevel){
		int32_t L_32 = __this->get_sprintKey_30();
		bool L_33;
		L_33 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_017b;
		}
	}
	{
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_34 = __this->get_fps_Rigidbody_54();
		NullCheck(L_34);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_x_2();
		float L_37;
		L_37 = fabsf(L_36);
		if ((((float)L_37) < ((float)(0.00999999978f))))
		{
			goto IL_017b;
		}
	}
	{
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_38 = __this->get_fps_Rigidbody_54();
		NullCheck(L_38);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_38, /*hidden argument*/NULL);
		float L_40 = L_39.get_z_4();
		float L_41;
		L_41 = fabsf(L_40);
		if ((((float)L_41) < ((float)(0.00999999978f))))
		{
			goto IL_017b;
		}
	}
	{
		bool L_42 = __this->get_isCrouching_50();
		if (!L_42)
		{
			goto IL_01a2;
		}
	}

IL_017b:
	{
		float L_43 = __this->get_staminaInternal_41();
		float L_44 = __this->get_staminaLevel_39();
		if ((!(((float)L_43) < ((float)L_44))))
		{
			goto IL_01a2;
		}
	}
	{
		// staminaInternal += staminaDepletionSpeed*Time.deltaTime;
		float L_45 = __this->get_staminaInternal_41();
		float L_46 = __this->get_staminaDepletionSpeed_38();
		float L_47;
		L_47 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_staminaInternal_41(((float)il2cpp_codegen_add((float)L_45, (float)((float)il2cpp_codegen_multiply((float)L_46, (float)L_47)))));
	}

IL_01a2:
	{
		// if(drawStaminaMeter){
		bool L_48 = __this->get_drawStaminaMeter_18();
		if (!L_48)
		{
			goto IL_02d9;
		}
	}
	{
		// if(staminaInternal==staminaLevel){ StaminaMeterBG.color = Vector4.MoveTowards(StaminaMeterBG.color, new Vector4(0,0,0,0),0.15f);
		float L_49 = __this->get_staminaInternal_41();
		float L_50 = __this->get_staminaLevel_39();
		if ((!(((float)L_49) == ((float)L_50))))
		{
			goto IL_0244;
		}
	}
	{
		// if(staminaInternal==staminaLevel){ StaminaMeterBG.color = Vector4.MoveTowards(StaminaMeterBG.color, new Vector4(0,0,0,0),0.15f);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_51 = __this->get_StaminaMeterBG_21();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_52 = __this->get_StaminaMeterBG_21();
		NullCheck(L_52);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_53;
		L_53 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_52);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_54;
		L_54 = Color_op_Implicit_mECB4D0C812888ADAEE478E633B2ECF8F8FDB96C5(L_53, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_55;
		memset((&L_55), 0, sizeof(L_55));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_55), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_56;
		L_56 = Vector4_MoveTowards_mB3246CB07E59ED7D960C5C245DB7CCEB1F17B7E2_inline(L_54, L_55, (0.150000006f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_57;
		L_57 = Color_op_Implicit_m9B1A4B721726FCDA1844A0DC505C2FF8F8C50FC0(L_56, /*hidden argument*/NULL);
		NullCheck(L_51);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_51, L_57);
		// StaminaMeter.color = Vector4.MoveTowards(StaminaMeter.color, new Vector4(1,1,1,0),0.15f);}
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_58 = __this->get_StaminaMeter_20();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_59 = __this->get_StaminaMeter_20();
		NullCheck(L_59);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_60;
		L_60 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_59);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_61;
		L_61 = Color_op_Implicit_mECB4D0C812888ADAEE478E633B2ECF8F8FDB96C5(L_60, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_62;
		memset((&L_62), 0, sizeof(L_62));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_62), (1.0f), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_63;
		L_63 = Vector4_MoveTowards_mB3246CB07E59ED7D960C5C245DB7CCEB1F17B7E2_inline(L_61, L_62, (0.150000006f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_64;
		L_64 = Color_op_Implicit_m9B1A4B721726FCDA1844A0DC505C2FF8F8C50FC0(L_63, /*hidden argument*/NULL);
		NullCheck(L_58);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_58, L_64);
	}

IL_0244:
	{
		// float x = Mathf.Clamp(Mathf.SmoothDamp(StaminaMeter.transform.localScale.x,(staminaInternal/staminaLevel)*StaminaMeterBG.transform.localScale.x,ref smoothRef,(1)*Time.deltaTime,1),0.001f, StaminaMeterBG.transform.localScale.x);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_65 = __this->get_StaminaMeter_20();
		NullCheck(L_65);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_66;
		L_66 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_65, /*hidden argument*/NULL);
		NullCheck(L_66);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67;
		L_67 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_66, /*hidden argument*/NULL);
		float L_68 = L_67.get_x_2();
		float L_69 = __this->get_staminaInternal_41();
		float L_70 = __this->get_staminaLevel_39();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_71 = __this->get_StaminaMeterBG_21();
		NullCheck(L_71);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_72;
		L_72 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_71, /*hidden argument*/NULL);
		NullCheck(L_72);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_73;
		L_73 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_72, /*hidden argument*/NULL);
		float L_74 = L_73.get_x_2();
		float* L_75 = __this->get_address_of_smoothRef_19();
		float L_76;
		L_76 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_77;
		L_77 = Mathf_SmoothDamp_m91A8CD80613CB276708A25D965B67884400B146C(L_68, ((float)il2cpp_codegen_multiply((float)((float)((float)L_69/(float)L_70)), (float)L_74)), (float*)L_75, ((float)il2cpp_codegen_multiply((float)(1.0f), (float)L_76)), (1.0f), /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_78 = __this->get_StaminaMeterBG_21();
		NullCheck(L_78);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_79;
		L_79 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_78, /*hidden argument*/NULL);
		NullCheck(L_79);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80;
		L_80 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_79, /*hidden argument*/NULL);
		float L_81 = L_80.get_x_2();
		float L_82;
		L_82 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_77, (0.00100000005f), L_81, /*hidden argument*/NULL);
		V_12 = L_82;
		// StaminaMeter.transform.localScale = new Vector3(x,1,1);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_83 = __this->get_StaminaMeter_20();
		NullCheck(L_83);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_84;
		L_84 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_83, /*hidden argument*/NULL);
		float L_85 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_86;
		memset((&L_86), 0, sizeof(L_86));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_86), L_85, (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_84);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_84, L_86, /*hidden argument*/NULL);
	}

IL_02d9:
	{
		// staminaInternal = Mathf.Clamp(staminaInternal,0,staminaLevel);
		float L_87 = __this->get_staminaInternal_41();
		float L_88 = __this->get_staminaLevel_39();
		float L_89;
		L_89 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_87, (0.0f), L_88, /*hidden argument*/NULL);
		__this->set_staminaInternal_41(L_89);
		// } else{isSprinting = Input.GetKey(sprintKey);}
		goto IL_0308;
	}

IL_02f7:
	{
		// } else{isSprinting = Input.GetKey(sprintKey);}
		int32_t L_90 = __this->get_sprintKey_30();
		bool L_91;
		L_91 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_90, /*hidden argument*/NULL);
		__this->set_isSprinting_53(L_91);
	}

IL_0308:
	{
		// Vector3 MoveDirection = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_92;
		L_92 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_0 = L_92;
		// speed = walkByDefault ? isCrouching ? walkSpeedInternal : (isSprinting ? sprintSpeedInternal : walkSpeedInternal) : (isSprinting ? walkSpeedInternal : sprintSpeedInternal);
		bool L_93 = __this->get_walkByDefault_28();
		G_B24_0 = __this;
		if (L_93)
		{
			G_B27_0 = __this;
			goto IL_032f;
		}
	}
	{
		bool L_94 = __this->get_isSprinting_53();
		G_B25_0 = G_B24_0;
		if (L_94)
		{
			G_B26_0 = G_B24_0;
			goto IL_0327;
		}
	}
	{
		float L_95 = __this->get_sprintSpeedInternal_43();
		G_B32_0 = L_95;
		G_B32_1 = G_B25_0;
		goto IL_0355;
	}

IL_0327:
	{
		float L_96 = __this->get_walkSpeedInternal_42();
		G_B32_0 = L_96;
		G_B32_1 = G_B26_0;
		goto IL_0355;
	}

IL_032f:
	{
		bool L_97 = __this->get_isCrouching_50();
		G_B28_0 = G_B27_0;
		if (L_97)
		{
			G_B31_0 = G_B27_0;
			goto IL_034f;
		}
	}
	{
		bool L_98 = __this->get_isSprinting_53();
		G_B29_0 = G_B28_0;
		if (L_98)
		{
			G_B30_0 = G_B28_0;
			goto IL_0347;
		}
	}
	{
		float L_99 = __this->get_walkSpeedInternal_42();
		G_B32_0 = L_99;
		G_B32_1 = G_B29_0;
		goto IL_0355;
	}

IL_0347:
	{
		float L_100 = __this->get_sprintSpeedInternal_43();
		G_B32_0 = L_100;
		G_B32_1 = G_B30_0;
		goto IL_0355;
	}

IL_034f:
	{
		float L_101 = __this->get_walkSpeedInternal_42();
		G_B32_0 = L_101;
		G_B32_1 = G_B31_0;
	}

IL_0355:
	{
		NullCheck(G_B32_1);
		G_B32_1->set_speed_40(G_B32_0);
		// if(advanced.maxSlopeAngle>0){
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_102 = __this->get_advanced_46();
		NullCheck(L_102);
		float L_103 = L_102->get_maxSlopeAngle_3();
		if ((!(((float)L_103) > ((float)(0.0f)))))
		{
			goto IL_04ae;
		}
	}
	{
		// if(advanced.isTouchingUpright && advanced.isTouchingWalkable){
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_104 = __this->get_advanced_46();
		NullCheck(L_104);
		bool L_105 = L_104->get_isTouchingUpright_5();
		if (!L_105)
		{
			goto IL_03f8;
		}
	}
	{
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_106 = __this->get_advanced_46();
		NullCheck(L_106);
		bool L_107 = L_106->get_isTouchingWalkable_4();
		if (!L_107)
		{
			goto IL_03f8;
		}
	}
	{
		// MoveDirection = (transform.forward * inputXY.y * speed + transform.right * inputXY.x * walkSpeedInternal);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_108;
		L_108 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_108);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_109;
		L_109 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_108, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_110 = __this->get_address_of_inputXY_49();
		float L_111 = L_110->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_112;
		L_112 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_109, L_111, /*hidden argument*/NULL);
		float L_113 = __this->get_speed_40();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_114;
		L_114 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_112, L_113, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_115;
		L_115 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_115);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_116;
		L_116 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_115, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_117 = __this->get_address_of_inputXY_49();
		float L_118 = L_117->get_x_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_119;
		L_119 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_116, L_118, /*hidden argument*/NULL);
		float L_120 = __this->get_walkSpeedInternal_42();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_121;
		L_121 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_119, L_120, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_122;
		L_122 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_114, L_121, /*hidden argument*/NULL);
		V_0 = L_122;
		// if(!didJump){fps_Rigidbody.constraints = RigidbodyConstraints.FreezePositionY | RigidbodyConstraints.FreezeRotation;}
		bool L_123 = __this->get_didJump_36();
		if (L_123)
		{
			goto IL_0500;
		}
	}
	{
		// if(!didJump){fps_Rigidbody.constraints = RigidbodyConstraints.FreezePositionY | RigidbodyConstraints.FreezeRotation;}
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_124 = __this->get_fps_Rigidbody_54();
		NullCheck(L_124);
		Rigidbody_set_constraints_mA76F562D16D3BE8889E095D0309C8FE38DA914F1(L_124, ((int32_t)116), /*hidden argument*/NULL);
		// }
		goto IL_0500;
	}

IL_03f8:
	{
		// else if(advanced.isTouchingUpright && !advanced.isTouchingWalkable){
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_125 = __this->get_advanced_46();
		NullCheck(L_125);
		bool L_126 = L_125->get_isTouchingUpright_5();
		if (!L_126)
		{
			goto IL_0424;
		}
	}
	{
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_127 = __this->get_advanced_46();
		NullCheck(L_127);
		bool L_128 = L_127->get_isTouchingWalkable_4();
		if (L_128)
		{
			goto IL_0424;
		}
	}
	{
		// fps_Rigidbody.constraints = RigidbodyConstraints.None | RigidbodyConstraints.FreezeRotation;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_129 = __this->get_fps_Rigidbody_54();
		NullCheck(L_129);
		Rigidbody_set_constraints_mA76F562D16D3BE8889E095D0309C8FE38DA914F1(L_129, ((int32_t)112), /*hidden argument*/NULL);
		// }
		goto IL_0500;
	}

IL_0424:
	{
		// fps_Rigidbody.constraints = RigidbodyConstraints.None | RigidbodyConstraints.FreezeRotation;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_130 = __this->get_fps_Rigidbody_54();
		NullCheck(L_130);
		Rigidbody_set_constraints_mA76F562D16D3BE8889E095D0309C8FE38DA914F1(L_130, ((int32_t)112), /*hidden argument*/NULL);
		// MoveDirection = ((transform.forward * inputXY.y * speed + transform.right * inputXY.x * walkSpeedInternal) * (fps_Rigidbody.velocity.y>0.01f ? SlopeCheck() : 0.8f));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_131;
		L_131 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_131);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_132;
		L_132 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_131, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_133 = __this->get_address_of_inputXY_49();
		float L_134 = L_133->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_135;
		L_135 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_132, L_134, /*hidden argument*/NULL);
		float L_136 = __this->get_speed_40();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_137;
		L_137 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_135, L_136, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_138;
		L_138 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_138);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_139;
		L_139 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_138, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_140 = __this->get_address_of_inputXY_49();
		float L_141 = L_140->get_x_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_142;
		L_142 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_139, L_141, /*hidden argument*/NULL);
		float L_143 = __this->get_walkSpeedInternal_42();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_144;
		L_144 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_142, L_143, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_145;
		L_145 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_137, L_144, /*hidden argument*/NULL);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_146 = __this->get_fps_Rigidbody_54();
		NullCheck(L_146);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_147;
		L_147 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_146, /*hidden argument*/NULL);
		float L_148 = L_147.get_y_3();
		G_B41_0 = L_145;
		if ((((float)L_148) > ((float)(0.00999999978f))))
		{
			G_B42_0 = L_145;
			goto IL_04a0;
		}
	}
	{
		G_B43_0 = (0.800000012f);
		G_B43_1 = G_B41_0;
		goto IL_04a6;
	}

IL_04a0:
	{
		float L_149;
		L_149 = FirstPersonAIO_SlopeCheck_m88515C1547C37ABCFD4D153C507DC8BFFB6DE3E0(__this, /*hidden argument*/NULL);
		G_B43_0 = L_149;
		G_B43_1 = G_B42_0;
	}

IL_04a6:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_150;
		L_150 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(G_B43_1, G_B43_0, /*hidden argument*/NULL);
		V_0 = L_150;
		// }
		goto IL_0500;
	}

IL_04ae:
	{
		// MoveDirection = (transform.forward * inputXY.y * speed + transform.right * inputXY.x * walkSpeedInternal);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_151;
		L_151 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_151);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_152;
		L_152 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_151, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_153 = __this->get_address_of_inputXY_49();
		float L_154 = L_153->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_155;
		L_155 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_152, L_154, /*hidden argument*/NULL);
		float L_156 = __this->get_speed_40();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_157;
		L_157 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_155, L_156, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_158;
		L_158 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_158);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_159;
		L_159 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_158, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_160 = __this->get_address_of_inputXY_49();
		float L_161 = L_160->get_x_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_162;
		L_162 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_159, L_161, /*hidden argument*/NULL);
		float L_163 = __this->get_walkSpeedInternal_42();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_164;
		L_164 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_162, L_163, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_165;
		L_165 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_157, L_164, /*hidden argument*/NULL);
		V_0 = L_165;
	}

IL_0500:
	{
		// if(advanced.maxStepHeight > 0 && Physics.Raycast(transform.position - new Vector3(0,((capsule.height/2)*transform.localScale.y)-0.01f,0),MoveDirection,out WT,capsule.radius+0.15f,Physics.AllLayers,QueryTriggerInteraction.Ignore) && Vector3.Angle(WT.normal, Vector3.up)>88){
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_166 = __this->get_advanced_46();
		NullCheck(L_166);
		float L_167 = L_166->get_maxStepHeight_8();
		if ((!(((float)L_167) > ((float)(0.0f)))))
		{
			goto IL_0643;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_168;
		L_168 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_168);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_169;
		L_169 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_168, /*hidden argument*/NULL);
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_170 = __this->get_capsule_47();
		NullCheck(L_170);
		float L_171;
		L_171 = CapsuleCollider_get_height_mD6CF93CB2C222F8E5B77D65B0356F8FD8005B526(L_170, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_172;
		L_172 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_172);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_173;
		L_173 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_172, /*hidden argument*/NULL);
		float L_174 = L_173.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_175;
		memset((&L_175), 0, sizeof(L_175));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_175), (0.0f), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_171/(float)(2.0f))), (float)L_174)), (float)(0.00999999978f))), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_176;
		L_176 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_169, L_175, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_177 = V_0;
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_178 = __this->get_capsule_47();
		NullCheck(L_178);
		float L_179;
		L_179 = CapsuleCollider_get_radius_m5746DDE5E6A099269FC9DAD253887C58E8A064D0(L_178, /*hidden argument*/NULL);
		bool L_180;
		L_180 = Physics_Raycast_m2EA572B4613E1BD7DBAA299511CFD2DBA179A163(L_176, L_177, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), ((float)il2cpp_codegen_add((float)L_179, (float)(0.150000006f))), (-1), 1, /*hidden argument*/NULL);
		if (!L_180)
		{
			goto IL_0643;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_181;
		L_181 = RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_182;
		L_182 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_183;
		L_183 = Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1(L_181, L_182, /*hidden argument*/NULL);
		if ((!(((float)L_183) > ((float)(88.0f)))))
		{
			goto IL_0643;
		}
	}
	{
		// if(!Physics.Raycast(transform.position - new Vector3(0,((capsule.height/2)*transform.localScale.y)-(advanced.maxStepHeight),0),MoveDirection,out ST,capsule.radius+0.25f,Physics.AllLayers,QueryTriggerInteraction.Ignore)){
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_184;
		L_184 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_184);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_185;
		L_185 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_184, /*hidden argument*/NULL);
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_186 = __this->get_capsule_47();
		NullCheck(L_186);
		float L_187;
		L_187 = CapsuleCollider_get_height_mD6CF93CB2C222F8E5B77D65B0356F8FD8005B526(L_186, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_188;
		L_188 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_188);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_189;
		L_189 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_188, /*hidden argument*/NULL);
		float L_190 = L_189.get_y_3();
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_191 = __this->get_advanced_46();
		NullCheck(L_191);
		float L_192 = L_191->get_maxStepHeight_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_193;
		memset((&L_193), 0, sizeof(L_193));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_193), (0.0f), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_187/(float)(2.0f))), (float)L_190)), (float)L_192)), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_194;
		L_194 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_185, L_193, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_195 = V_0;
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_196 = __this->get_capsule_47();
		NullCheck(L_196);
		float L_197;
		L_197 = CapsuleCollider_get_radius_m5746DDE5E6A099269FC9DAD253887C58E8A064D0(L_196, /*hidden argument*/NULL);
		bool L_198;
		L_198 = Physics_Raycast_m2EA572B4613E1BD7DBAA299511CFD2DBA179A163(L_194, L_195, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_13), ((float)il2cpp_codegen_add((float)L_197, (float)(0.25f))), (-1), 1, /*hidden argument*/NULL);
		if (L_198)
		{
			goto IL_0643;
		}
	}
	{
		// advanced.stairMiniHop = true;
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_199 = __this->get_advanced_46();
		NullCheck(L_199);
		L_199->set_stairMiniHop_9((bool)1);
		// transform.position += new Vector3(0,advanced.maxStepHeight*1.2f,0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_200;
		L_200 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_201 = L_200;
		NullCheck(L_201);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_202;
		L_202 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_201, /*hidden argument*/NULL);
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_203 = __this->get_advanced_46();
		NullCheck(L_203);
		float L_204 = L_203->get_maxStepHeight_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_205;
		memset((&L_205), 0, sizeof(L_205));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_205), (0.0f), ((float)il2cpp_codegen_multiply((float)L_204, (float)(1.20000005f))), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_206;
		L_206 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_202, L_205, /*hidden argument*/NULL);
		NullCheck(L_201);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_201, L_206, /*hidden argument*/NULL);
	}

IL_0643:
	{
		// Debug.DrawRay(transform.position, MoveDirection,Color.red,0,false);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_207;
		L_207 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_207);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_208;
		L_208 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_207, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_209 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_210;
		L_210 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_DrawRay_m9F3CB318085029EFD8FEBB224C84F78D84543A0E(L_208, L_209, L_210, (0.0f), (bool)0, /*hidden argument*/NULL);
		// float horizontalInput = Input.GetAxis("Horizontal");
		float L_211;
		L_211 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		V_2 = L_211;
		// float verticalInput = Input.GetAxis("Vertical");
		float L_212;
		L_212 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		V_3 = L_212;
		// inputXY = new Vector2(horizontalInput, verticalInput);
		float L_213 = V_2;
		float L_214 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_215;
		memset((&L_215), 0, sizeof(L_215));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_215), L_213, L_214, /*hidden argument*/NULL);
		__this->set_inputXY_49(L_215);
		// if(inputXY.magnitude > 1) { inputXY.Normalize(); }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_216 = __this->get_address_of_inputXY_49();
		float L_217;
		L_217 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_216, /*hidden argument*/NULL);
		if ((!(((float)L_217) > ((float)(1.0f)))))
		{
			goto IL_069f;
		}
	}
	{
		// if(inputXY.magnitude > 1) { inputXY.Normalize(); }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_218 = __this->get_address_of_inputXY_49();
		Vector2_Normalize_m0F1341493AD5F0B7DA4D504A44F52A1E2FFCCEC3((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_218, /*hidden argument*/NULL);
	}

IL_069f:
	{
		// yVelocity = fps_Rigidbody.velocity.y;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_219 = __this->get_fps_Rigidbody_54();
		NullCheck(L_219);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_220;
		L_220 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_219, /*hidden argument*/NULL);
		float L_221 = L_220.get_y_3();
		__this->set_yVelocity_51(L_221);
		// if(IsGrounded && jumpInput && jumpPowerInternal > 0 && !didJump){
		bool L_222;
		L_222 = FirstPersonAIO_get_IsGrounded_m88E20AEA65897F31566FE87E03C32DF808A55EAD_inline(__this, /*hidden argument*/NULL);
		if (!L_222)
		{
			goto IL_07b2;
		}
	}
	{
		bool L_223 = __this->get_jumpInput_35();
		if (!L_223)
		{
			goto IL_07b2;
		}
	}
	{
		float L_224 = __this->get_jumpPowerInternal_44();
		if ((!(((float)L_224) > ((float)(0.0f)))))
		{
			goto IL_07b2;
		}
	}
	{
		bool L_225 = __this->get_didJump_36();
		if (L_225)
		{
			goto IL_07b2;
		}
	}
	{
		// if(advanced.maxSlopeAngle>0){
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_226 = __this->get_advanced_46();
		NullCheck(L_226);
		float L_227 = L_226->get_maxSlopeAngle_3();
		if ((!(((float)L_227) > ((float)(0.0f)))))
		{
			goto IL_0791;
		}
	}
	{
		// if(advanced.isTouchingFlat || advanced.isTouchingWalkable){
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_228 = __this->get_advanced_46();
		NullCheck(L_228);
		bool L_229 = L_228->get_isTouchingFlat_6();
		if (L_229)
		{
			goto IL_0718;
		}
	}
	{
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_230 = __this->get_advanced_46();
		NullCheck(L_230);
		bool L_231 = L_230->get_isTouchingWalkable_4();
		if (!L_231)
		{
			goto IL_07b2;
		}
	}

IL_0718:
	{
		// didJump=true;
		__this->set_didJump_36((bool)1);
		// jumpInput=false;
		__this->set_jumpInput_35((bool)0);
		// yVelocity += fps_Rigidbody.velocity.y<0.01f? jumpPowerInternal : jumpPowerInternal/3;
		float L_232 = __this->get_yVelocity_51();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_233 = __this->get_fps_Rigidbody_54();
		NullCheck(L_233);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_234;
		L_234 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_233, /*hidden argument*/NULL);
		float L_235 = L_234.get_y_3();
		G_B60_0 = L_232;
		G_B60_1 = __this;
		if ((((float)L_235) < ((float)(0.00999999978f))))
		{
			G_B61_0 = L_232;
			G_B61_1 = __this;
			goto IL_0752;
		}
	}
	{
		float L_236 = __this->get_jumpPowerInternal_44();
		G_B62_0 = ((float)((float)L_236/(float)(3.0f)));
		G_B62_1 = G_B60_0;
		G_B62_2 = G_B60_1;
		goto IL_0758;
	}

IL_0752:
	{
		float L_237 = __this->get_jumpPowerInternal_44();
		G_B62_0 = L_237;
		G_B62_1 = G_B61_0;
		G_B62_2 = G_B61_1;
	}

IL_0758:
	{
		NullCheck(G_B62_2);
		G_B62_2->set_yVelocity_51(((float)il2cpp_codegen_add((float)G_B62_1, (float)G_B62_0)));
		// advanced.isTouchingWalkable = false;
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_238 = __this->get_advanced_46();
		NullCheck(L_238);
		L_238->set_isTouchingWalkable_4((bool)0);
		// advanced.isTouchingFlat = false;
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_239 = __this->get_advanced_46();
		NullCheck(L_239);
		L_239->set_isTouchingFlat_6((bool)0);
		// advanced.isTouchingUpright = false;
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_240 = __this->get_advanced_46();
		NullCheck(L_240);
		L_240->set_isTouchingUpright_5((bool)0);
		// fps_Rigidbody.constraints = RigidbodyConstraints.None | RigidbodyConstraints.FreezeRotation;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_241 = __this->get_fps_Rigidbody_54();
		NullCheck(L_241);
		Rigidbody_set_constraints_mA76F562D16D3BE8889E095D0309C8FE38DA914F1(L_241, ((int32_t)112), /*hidden argument*/NULL);
		// }else{
		goto IL_07b2;
	}

IL_0791:
	{
		// didJump=true;
		__this->set_didJump_36((bool)1);
		// jumpInput=false;
		__this->set_jumpInput_35((bool)0);
		// yVelocity += jumpPowerInternal;
		float L_242 = __this->get_yVelocity_51();
		float L_243 = __this->get_jumpPowerInternal_44();
		__this->set_yVelocity_51(((float)il2cpp_codegen_add((float)L_242, (float)L_243)));
	}

IL_07b2:
	{
		// if(advanced.maxSlopeAngle>0){
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_244 = __this->get_advanced_46();
		NullCheck(L_244);
		float L_245 = L_244->get_maxSlopeAngle_3();
		if ((!(((float)L_245) > ((float)(0.0f)))))
		{
			goto IL_083d;
		}
	}
	{
		// if(!didJump && advanced.lastKnownSlopeAngle>5 && advanced.isTouchingWalkable){
		bool L_246 = __this->get_didJump_36();
		if (L_246)
		{
			goto IL_0804;
		}
	}
	{
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_247 = __this->get_advanced_46();
		NullCheck(L_247);
		float L_248 = L_247->get_lastKnownSlopeAngle_13();
		if ((!(((float)L_248) > ((float)(5.0f)))))
		{
			goto IL_0804;
		}
	}
	{
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_249 = __this->get_advanced_46();
		NullCheck(L_249);
		bool L_250 = L_249->get_isTouchingWalkable_4();
		if (!L_250)
		{
			goto IL_0804;
		}
	}
	{
		// yVelocity *= SlopeCheck()/4;
		float L_251 = __this->get_yVelocity_51();
		float L_252;
		L_252 = FirstPersonAIO_SlopeCheck_m88515C1547C37ABCFD4D153C507DC8BFFB6DE3E0(__this, /*hidden argument*/NULL);
		__this->set_yVelocity_51(((float)il2cpp_codegen_multiply((float)L_251, (float)((float)((float)L_252/(float)(4.0f))))));
	}

IL_0804:
	{
		// if(advanced.isTouchingUpright && !advanced.isTouchingWalkable && !didJump){
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_253 = __this->get_advanced_46();
		NullCheck(L_253);
		bool L_254 = L_253->get_isTouchingUpright_5();
		if (!L_254)
		{
			goto IL_083d;
		}
	}
	{
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_255 = __this->get_advanced_46();
		NullCheck(L_255);
		bool L_256 = L_255->get_isTouchingWalkable_4();
		if (L_256)
		{
			goto IL_083d;
		}
	}
	{
		bool L_257 = __this->get_didJump_36();
		if (L_257)
		{
			goto IL_083d;
		}
	}
	{
		// yVelocity +=  Physics.gravity.y;
		float L_258 = __this->get_yVelocity_51();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_259;
		L_259 = Physics_get_gravity_m58D5D94276B1E7A04E9F7108EEAAB7AB786BA532(/*hidden argument*/NULL);
		float L_260 = L_259.get_y_3();
		__this->set_yVelocity_51(((float)il2cpp_codegen_add((float)L_258, (float)L_260)));
	}

IL_083d:
	{
		// if(playerCanMove && !controllerPauseState){
		bool L_261 = __this->get_playerCanMove_27();
		if (!L_261)
		{
			goto IL_0870;
		}
	}
	{
		bool L_262 = __this->get_controllerPauseState_4();
		if (L_262)
		{
			goto IL_0870;
		}
	}
	{
		// fps_Rigidbody.velocity = MoveDirection+(Vector3.up * yVelocity);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_263 = __this->get_fps_Rigidbody_54();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_264 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_265;
		L_265 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_266 = __this->get_yVelocity_51();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_267;
		L_267 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_265, L_266, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_268;
		L_268 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_264, L_267, /*hidden argument*/NULL);
		NullCheck(L_263);
		Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_263, L_268, /*hidden argument*/NULL);
		// } else{fps_Rigidbody.velocity = Vector3.zero;}
		goto IL_0880;
	}

IL_0870:
	{
		// } else{fps_Rigidbody.velocity = Vector3.zero;}
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_269 = __this->get_fps_Rigidbody_54();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_270;
		L_270 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_269);
		Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_269, L_270, /*hidden argument*/NULL);
	}

IL_0880:
	{
		// if(inputXY.magnitude > 0 || !IsGrounded) {
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_271 = __this->get_address_of_inputXY_49();
		float L_272;
		L_272 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_271, /*hidden argument*/NULL);
		if ((((float)L_272) > ((float)(0.0f))))
		{
			goto IL_089a;
		}
	}
	{
		bool L_273;
		L_273 = FirstPersonAIO_get_IsGrounded_m88E20AEA65897F31566FE87E03C32DF808A55EAD_inline(__this, /*hidden argument*/NULL);
		if (L_273)
		{
			goto IL_08b2;
		}
	}

IL_089a:
	{
		// capsule.sharedMaterial = advanced.zeroFrictionMaterial;
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_274 = __this->get_capsule_47();
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_275 = __this->get_advanced_46();
		NullCheck(L_275);
		PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * L_276 = L_275->get_zeroFrictionMaterial_1();
		NullCheck(L_274);
		Collider_set_sharedMaterial_mAAB481A26A050DC39F7C160909D33971E50F3952(L_274, L_276, /*hidden argument*/NULL);
		// } else { capsule.sharedMaterial = advanced.highFrictionMaterial; }
		goto IL_08c8;
	}

IL_08b2:
	{
		// } else { capsule.sharedMaterial = advanced.highFrictionMaterial; }
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_277 = __this->get_capsule_47();
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_278 = __this->get_advanced_46();
		NullCheck(L_278);
		PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * L_279 = L_278->get_highFrictionMaterial_2();
		NullCheck(L_277);
		Collider_set_sharedMaterial_mAAB481A26A050DC39F7C160909D33971E50F3952(L_277, L_279, /*hidden argument*/NULL);
	}

IL_08c8:
	{
		// fps_Rigidbody.AddForce(Physics.gravity * (advanced.gravityMultiplier - 1));
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_280 = __this->get_fps_Rigidbody_54();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_281;
		L_281 = Physics_get_gravity_m58D5D94276B1E7A04E9F7108EEAAB7AB786BA532(/*hidden argument*/NULL);
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_282 = __this->get_advanced_46();
		NullCheck(L_282);
		float L_283 = L_282->get_gravityMultiplier_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_284;
		L_284 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_281, ((float)il2cpp_codegen_subtract((float)L_283, (float)(1.0f))), /*hidden argument*/NULL);
		NullCheck(L_280);
		Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D(L_280, L_284, /*hidden argument*/NULL);
		// if(advanced.FOVKickAmount>0){
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_285 = __this->get_advanced_46();
		NullCheck(L_285);
		float L_286 = L_285->get_FOVKickAmount_14();
		if ((!(((float)L_286) > ((float)(0.0f)))))
		{
			goto IL_0a1d;
		}
	}
	{
		// if(isSprinting && !isCrouching && playerCamera.fieldOfView != (baseCamFOV+(advanced.FOVKickAmount*2)-0.01f)){
		bool L_287 = __this->get_isSprinting_53();
		if (!L_287)
		{
			goto IL_09cd;
		}
	}
	{
		bool L_288 = __this->get_isCrouching_50();
		if (L_288)
		{
			goto IL_09cd;
		}
	}
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_289 = __this->get_playerCamera_13();
		NullCheck(L_289);
		float L_290;
		L_290 = Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920(L_289, /*hidden argument*/NULL);
		float L_291 = __this->get_baseCamFOV_16();
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_292 = __this->get_advanced_46();
		NullCheck(L_292);
		float L_293 = L_292->get_FOVKickAmount_14();
		if ((((float)L_290) == ((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_291, (float)((float)il2cpp_codegen_multiply((float)L_293, (float)(2.0f))))), (float)(0.00999999978f))))))
		{
			goto IL_09cd;
		}
	}
	{
		// if(Mathf.Abs(fps_Rigidbody.velocity.x)> 0.5f || Mathf.Abs(fps_Rigidbody.velocity.z)> 0.5f){
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_294 = __this->get_fps_Rigidbody_54();
		NullCheck(L_294);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_295;
		L_295 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_294, /*hidden argument*/NULL);
		float L_296 = L_295.get_x_2();
		float L_297;
		L_297 = fabsf(L_296);
		if ((((float)L_297) > ((float)(0.5f))))
		{
			goto IL_0982;
		}
	}
	{
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_298 = __this->get_fps_Rigidbody_54();
		NullCheck(L_298);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_299;
		L_299 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_298, /*hidden argument*/NULL);
		float L_300 = L_299.get_z_4();
		float L_301;
		L_301 = fabsf(L_300);
		if ((!(((float)L_301) > ((float)(0.5f)))))
		{
			goto IL_0a1d;
		}
	}

IL_0982:
	{
		// playerCamera.fieldOfView = Mathf.SmoothDamp(playerCamera.fieldOfView,baseCamFOV+(advanced.FOVKickAmount*2),ref advanced.fovRef,advanced.changeTime);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_302 = __this->get_playerCamera_13();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_303 = __this->get_playerCamera_13();
		NullCheck(L_303);
		float L_304;
		L_304 = Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920(L_303, /*hidden argument*/NULL);
		float L_305 = __this->get_baseCamFOV_16();
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_306 = __this->get_advanced_46();
		NullCheck(L_306);
		float L_307 = L_306->get_FOVKickAmount_14();
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_308 = __this->get_advanced_46();
		NullCheck(L_308);
		float* L_309 = L_308->get_address_of_fovRef_16();
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_310 = __this->get_advanced_46();
		NullCheck(L_310);
		float L_311 = L_310->get_changeTime_15();
		float L_312;
		L_312 = Mathf_SmoothDamp_m0B29D964FCB8460976BBE6BF56CBFDDC98EB5652(L_304, ((float)il2cpp_codegen_add((float)L_305, (float)((float)il2cpp_codegen_multiply((float)L_307, (float)(2.0f))))), (float*)L_309, L_311, /*hidden argument*/NULL);
		NullCheck(L_302);
		Camera_set_fieldOfView_m138FE103CAC4B803F39E4CF579609A5C3FEB5E49(L_302, L_312, /*hidden argument*/NULL);
		// }
		goto IL_0a1d;
	}

IL_09cd:
	{
		// else if(playerCamera.fieldOfView != baseCamFOV){ playerCamera.fieldOfView = Mathf.SmoothDamp(playerCamera.fieldOfView,baseCamFOV,ref advanced.fovRef,advanced.changeTime*0.5f);}
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_313 = __this->get_playerCamera_13();
		NullCheck(L_313);
		float L_314;
		L_314 = Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920(L_313, /*hidden argument*/NULL);
		float L_315 = __this->get_baseCamFOV_16();
		if ((((float)L_314) == ((float)L_315)))
		{
			goto IL_0a1d;
		}
	}
	{
		// else if(playerCamera.fieldOfView != baseCamFOV){ playerCamera.fieldOfView = Mathf.SmoothDamp(playerCamera.fieldOfView,baseCamFOV,ref advanced.fovRef,advanced.changeTime*0.5f);}
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_316 = __this->get_playerCamera_13();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_317 = __this->get_playerCamera_13();
		NullCheck(L_317);
		float L_318;
		L_318 = Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920(L_317, /*hidden argument*/NULL);
		float L_319 = __this->get_baseCamFOV_16();
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_320 = __this->get_advanced_46();
		NullCheck(L_320);
		float* L_321 = L_320->get_address_of_fovRef_16();
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_322 = __this->get_advanced_46();
		NullCheck(L_322);
		float L_323 = L_322->get_changeTime_15();
		float L_324;
		L_324 = Mathf_SmoothDamp_m0B29D964FCB8460976BBE6BF56CBFDDC98EB5652(L_318, L_319, (float*)L_321, ((float)il2cpp_codegen_multiply((float)L_323, (float)(0.5f))), /*hidden argument*/NULL);
		NullCheck(L_316);
		Camera_set_fieldOfView_m138FE103CAC4B803F39E4CF579609A5C3FEB5E49(L_316, L_324, /*hidden argument*/NULL);
	}

IL_0a1d:
	{
		// if(_crouchModifiers.useCrouch) {
		CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96 * L_325 = __this->get__crouchModifiers_45();
		NullCheck(L_325);
		bool L_326 = L_325->get_useCrouch_0();
		if (!L_326)
		{
			goto IL_0af3;
		}
	}
	{
		// if(isCrouching) {
		bool L_327 = __this->get_isCrouching_50();
		if (!L_327)
		{
			goto IL_0a9e;
		}
	}
	{
		// capsule.height = Mathf.MoveTowards(capsule.height, _crouchModifiers.colliderHeight/1.5f, 5*Time.deltaTime);
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_328 = __this->get_capsule_47();
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_329 = __this->get_capsule_47();
		NullCheck(L_329);
		float L_330;
		L_330 = CapsuleCollider_get_height_mD6CF93CB2C222F8E5B77D65B0356F8FD8005B526(L_329, /*hidden argument*/NULL);
		CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96 * L_331 = __this->get__crouchModifiers_45();
		NullCheck(L_331);
		float L_332 = L_331->get_colliderHeight_6();
		float L_333;
		L_333 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_334;
		L_334 = Mathf_MoveTowards_mE0689B09DD10CD59A01EE9E24880A5BA495FD321(L_330, ((float)((float)L_332/(float)(1.5f))), ((float)il2cpp_codegen_multiply((float)(5.0f), (float)L_333)), /*hidden argument*/NULL);
		NullCheck(L_328);
		CapsuleCollider_set_height_m728C9AF3772EEC1DA9845E19F3C2899CDD2D9496(L_328, L_334, /*hidden argument*/NULL);
		// walkSpeedInternal = walkSpeed*_crouchModifiers.crouchWalkSpeedMultiplier;
		float L_335 = __this->get_walkSpeed_29();
		CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96 * L_336 = __this->get__crouchModifiers_45();
		NullCheck(L_336);
		float L_337 = L_336->get_crouchWalkSpeedMultiplier_3();
		__this->set_walkSpeedInternal_42(((float)il2cpp_codegen_multiply((float)L_335, (float)L_337)));
		// jumpPowerInternal = jumpPower* _crouchModifiers.crouchJumpPowerMultiplier;
		float L_338 = __this->get_jumpPower_32();
		CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96 * L_339 = __this->get__crouchModifiers_45();
		NullCheck(L_339);
		float L_340 = L_339->get_crouchJumpPowerMultiplier_4();
		__this->set_jumpPowerInternal_44(((float)il2cpp_codegen_multiply((float)L_338, (float)L_340)));
		// } else {
		goto IL_0af3;
	}

IL_0a9e:
	{
		// capsule.height = Mathf.MoveTowards(capsule.height, _crouchModifiers.colliderHeight, 5*Time.deltaTime);
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_341 = __this->get_capsule_47();
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_342 = __this->get_capsule_47();
		NullCheck(L_342);
		float L_343;
		L_343 = CapsuleCollider_get_height_mD6CF93CB2C222F8E5B77D65B0356F8FD8005B526(L_342, /*hidden argument*/NULL);
		CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96 * L_344 = __this->get__crouchModifiers_45();
		NullCheck(L_344);
		float L_345 = L_344->get_colliderHeight_6();
		float L_346;
		L_346 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_347;
		L_347 = Mathf_MoveTowards_mE0689B09DD10CD59A01EE9E24880A5BA495FD321(L_343, L_345, ((float)il2cpp_codegen_multiply((float)(5.0f), (float)L_346)), /*hidden argument*/NULL);
		NullCheck(L_341);
		CapsuleCollider_set_height_m728C9AF3772EEC1DA9845E19F3C2899CDD2D9496(L_341, L_347, /*hidden argument*/NULL);
		// walkSpeedInternal = walkSpeed;
		float L_348 = __this->get_walkSpeed_29();
		__this->set_walkSpeedInternal_42(L_348);
		// sprintSpeedInternal = sprintSpeed;
		float L_349 = __this->get_sprintSpeed_31();
		__this->set_sprintSpeedInternal_43(L_349);
		// jumpPowerInternal = jumpPower;
		float L_350 = __this->get_jumpPower_32();
		__this->set_jumpPowerInternal_44(L_350);
	}

IL_0af3:
	{
		// float yPos = 0;
		V_4 = (0.0f);
		// float xPos = 0;
		V_5 = (0.0f);
		// float zTilt = 0;
		V_6 = (0.0f);
		// float xTilt = 0;
		V_7 = (0.0f);
		// float bobSwayFactor = 0;
		V_8 = (0.0f);
		// float bobFactor = 0;
		V_9 = (0.0f);
		// float strideLangthen = 0;
		V_10 = (0.0f);
		// float flatVel = 0;
		V_11 = (0.0f);
		// if(useHeadbob == true || enableAudioSFX){
		bool L_351 = __this->get_useHeadbob_55();
		if (L_351)
		{
			goto IL_0b3e;
		}
	}
	{
		bool L_352 = __this->get_enableAudioSFX_78();
		if (!L_352)
		{
			goto IL_0e25;
		}
	}

IL_0b3e:
	{
		// Vector3 vel = (fps_Rigidbody.position - previousPosition) / Time.deltaTime;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_353 = __this->get_fps_Rigidbody_54();
		NullCheck(L_353);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_354;
		L_354 = Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8(L_353, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_355 = __this->get_previousPosition_73();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_356;
		L_356 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_354, L_355, /*hidden argument*/NULL);
		float L_357;
		L_357 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_358;
		L_358 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_356, L_357, /*hidden argument*/NULL);
		V_14 = L_358;
		// Vector3 velChange = vel - previousVelocity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_359 = V_14;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_360 = __this->get_previousVelocity_74();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_361;
		L_361 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_359, L_360, /*hidden argument*/NULL);
		V_15 = L_361;
		// previousPosition = fps_Rigidbody.position;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_362 = __this->get_fps_Rigidbody_54();
		NullCheck(L_362);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_363;
		L_363 = Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8(L_362, /*hidden argument*/NULL);
		__this->set_previousPosition_73(L_363);
		// previousVelocity = vel;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_364 = V_14;
		__this->set_previousVelocity_74(L_364);
		// springVelocity -= velChange.y;
		float L_365 = __this->get_springVelocity_68();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_366 = V_15;
		float L_367 = L_366.get_y_3();
		__this->set_springVelocity_68(((float)il2cpp_codegen_subtract((float)L_365, (float)L_367)));
		// springVelocity -= springPosition * springElastic;
		float L_368 = __this->get_springVelocity_68();
		float L_369 = __this->get_springPosition_67();
		float L_370 = __this->get_springElastic_69();
		__this->set_springVelocity_68(((float)il2cpp_codegen_subtract((float)L_368, (float)((float)il2cpp_codegen_multiply((float)L_369, (float)L_370)))));
		// springVelocity *= springDampen;
		float L_371 = __this->get_springVelocity_68();
		float L_372 = __this->get_springDampen_70();
		__this->set_springVelocity_68(((float)il2cpp_codegen_multiply((float)L_371, (float)L_372)));
		// springPosition += springVelocity * Time.deltaTime;
		float L_373 = __this->get_springPosition_67();
		float L_374 = __this->get_springVelocity_68();
		float L_375;
		L_375 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_springPosition_67(((float)il2cpp_codegen_add((float)L_373, (float)((float)il2cpp_codegen_multiply((float)L_374, (float)L_375)))));
		// springPosition = Mathf.Clamp(springPosition, -0.3f, 0.3f);
		float L_376 = __this->get_springPosition_67();
		float L_377;
		L_377 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_376, (-0.300000012f), (0.300000012f), /*hidden argument*/NULL);
		__this->set_springPosition_67(L_377);
		// if(Mathf.Abs(springVelocity) < springVelocityThreshold && Mathf.Abs(springPosition) < springPositionThreshold) { springPosition = 0; springVelocity = 0; }
		float L_378 = __this->get_springVelocity_68();
		float L_379;
		L_379 = fabsf(L_378);
		float L_380 = __this->get_springVelocityThreshold_71();
		if ((!(((float)L_379) < ((float)L_380))))
		{
			goto IL_0c39;
		}
	}
	{
		float L_381 = __this->get_springPosition_67();
		float L_382;
		L_382 = fabsf(L_381);
		float L_383 = __this->get_springPositionThreshold_72();
		if ((!(((float)L_382) < ((float)L_383))))
		{
			goto IL_0c39;
		}
	}
	{
		// if(Mathf.Abs(springVelocity) < springVelocityThreshold && Mathf.Abs(springPosition) < springPositionThreshold) { springPosition = 0; springVelocity = 0; }
		__this->set_springPosition_67((0.0f));
		// if(Mathf.Abs(springVelocity) < springVelocityThreshold && Mathf.Abs(springPosition) < springPositionThreshold) { springPosition = 0; springVelocity = 0; }
		__this->set_springVelocity_68((0.0f));
	}

IL_0c39:
	{
		// flatVel = new Vector3(vel.x, 0.0f, vel.z).magnitude;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_384 = V_14;
		float L_385 = L_384.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_386 = V_14;
		float L_387 = L_386.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_388;
		memset((&L_388), 0, sizeof(L_388));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_388), L_385, (0.0f), L_387, /*hidden argument*/NULL);
		V_16 = L_388;
		float L_389;
		L_389 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_16), /*hidden argument*/NULL);
		V_11 = L_389;
		// strideLangthen = 1 + (flatVel * ((headbobFrequency*2)/10));
		float L_390 = V_11;
		float L_391 = __this->get_headbobFrequency_58();
		V_10 = ((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)L_390, (float)((float)((float)((float)il2cpp_codegen_multiply((float)L_391, (float)(2.0f)))/(float)(10.0f)))))));
		// headbobCycle += (flatVel / strideLangthen) * (Time.deltaTime / headbobFrequency);
		float L_392 = __this->get_headbobCycle_65();
		float L_393 = V_11;
		float L_394 = V_10;
		float L_395;
		L_395 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_396 = __this->get_headbobFrequency_58();
		__this->set_headbobCycle_65(((float)il2cpp_codegen_add((float)L_392, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_393/(float)L_394)), (float)((float)((float)L_395/(float)L_396)))))));
		// bobFactor = Mathf.Sin(headbobCycle * Mathf.PI * 2);
		float L_397 = __this->get_headbobCycle_65();
		float L_398;
		L_398 = sinf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_397, (float)(3.14159274f))), (float)(2.0f))));
		V_9 = L_398;
		// bobSwayFactor = Mathf.Sin(Mathf.PI * (2 * headbobCycle + 0.5f));
		float L_399 = __this->get_headbobCycle_65();
		float L_400;
		L_400 = sinf(((float)il2cpp_codegen_multiply((float)(3.14159274f), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_399)), (float)(0.5f))))));
		V_8 = L_400;
		// bobFactor = 1 - (bobFactor * 0.5f + 1);
		float L_401 = V_9;
		V_9 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_401, (float)(0.5f))), (float)(1.0f)))));
		// bobFactor *= bobFactor;
		float L_402 = V_9;
		float L_403 = V_9;
		V_9 = ((float)il2cpp_codegen_multiply((float)L_402, (float)L_403));
		// yPos = 0;
		V_4 = (0.0f);
		// xPos = 0;
		V_5 = (0.0f);
		// zTilt = 0;
		V_6 = (0.0f);
		// if(jumpLandIntensity>0 && !advanced.stairMiniHop){xTilt = -springPosition * (jumpLandIntensity*5.5f);}
		float L_404 = __this->get_jumpLandIntensity_62();
		if ((!(((float)L_404) > ((float)(0.0f)))))
		{
			goto IL_0d34;
		}
	}
	{
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_405 = __this->get_advanced_46();
		NullCheck(L_405);
		bool L_406 = L_405->get_stairMiniHop_9();
		if (L_406)
		{
			goto IL_0d34;
		}
	}
	{
		// if(jumpLandIntensity>0 && !advanced.stairMiniHop){xTilt = -springPosition * (jumpLandIntensity*5.5f);}
		float L_407 = __this->get_springPosition_67();
		float L_408 = __this->get_jumpLandIntensity_62();
		V_7 = ((float)il2cpp_codegen_multiply((float)((-L_407)), (float)((float)il2cpp_codegen_multiply((float)L_408, (float)(5.5f)))));
		// if(jumpLandIntensity>0 && !advanced.stairMiniHop){xTilt = -springPosition * (jumpLandIntensity*5.5f);}
		goto IL_0d4a;
	}

IL_0d34:
	{
		// else if(!advanced.stairMiniHop){xTilt = -springPosition;}
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_409 = __this->get_advanced_46();
		NullCheck(L_409);
		bool L_410 = L_409->get_stairMiniHop_9();
		if (L_410)
		{
			goto IL_0d4a;
		}
	}
	{
		// else if(!advanced.stairMiniHop){xTilt = -springPosition;}
		float L_411 = __this->get_springPosition_67();
		V_7 = ((-L_411));
	}

IL_0d4a:
	{
		// if(IsGrounded){
		bool L_412;
		L_412 = FirstPersonAIO_get_IsGrounded_m88E20AEA65897F31566FE87E03C32DF808A55EAD_inline(__this, /*hidden argument*/NULL);
		if (!L_412)
		{
			goto IL_0e25;
		}
	}
	{
		// if(new Vector3(vel.x, 0.0f, vel.z).magnitude < 0.1f) { headbobFade = Mathf.MoveTowards(headbobFade, 0.0f,0.5f); } else { headbobFade = Mathf.MoveTowards(headbobFade, 1.0f, Time.deltaTime); }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_413 = V_14;
		float L_414 = L_413.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_415 = V_14;
		float L_416 = L_415.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_417;
		memset((&L_417), 0, sizeof(L_417));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_417), L_414, (0.0f), L_416, /*hidden argument*/NULL);
		V_16 = L_417;
		float L_418;
		L_418 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_16), /*hidden argument*/NULL);
		if ((!(((float)L_418) < ((float)(0.100000001f)))))
		{
			goto IL_0d9a;
		}
	}
	{
		// if(new Vector3(vel.x, 0.0f, vel.z).magnitude < 0.1f) { headbobFade = Mathf.MoveTowards(headbobFade, 0.0f,0.5f); } else { headbobFade = Mathf.MoveTowards(headbobFade, 1.0f, Time.deltaTime); }
		float L_419 = __this->get_headbobFade_66();
		float L_420;
		L_420 = Mathf_MoveTowards_mE0689B09DD10CD59A01EE9E24880A5BA495FD321(L_419, (0.0f), (0.5f), /*hidden argument*/NULL);
		__this->set_headbobFade_66(L_420);
		// if(new Vector3(vel.x, 0.0f, vel.z).magnitude < 0.1f) { headbobFade = Mathf.MoveTowards(headbobFade, 0.0f,0.5f); } else { headbobFade = Mathf.MoveTowards(headbobFade, 1.0f, Time.deltaTime); }
		goto IL_0db5;
	}

IL_0d9a:
	{
		// if(new Vector3(vel.x, 0.0f, vel.z).magnitude < 0.1f) { headbobFade = Mathf.MoveTowards(headbobFade, 0.0f,0.5f); } else { headbobFade = Mathf.MoveTowards(headbobFade, 1.0f, Time.deltaTime); }
		float L_421 = __this->get_headbobFade_66();
		float L_422;
		L_422 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_423;
		L_423 = Mathf_MoveTowards_mE0689B09DD10CD59A01EE9E24880A5BA495FD321(L_421, (1.0f), L_422, /*hidden argument*/NULL);
		__this->set_headbobFade_66(L_423);
	}

IL_0db5:
	{
		// float speedHeightFactor = 1 + (flatVel * 0.3f);
		float L_424 = V_11;
		V_17 = ((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)L_424, (float)(0.300000012f)))));
		// xPos = -(headbobSideMovement/10) * headbobFade *bobSwayFactor;
		float L_425 = __this->get_headbobSideMovement_61();
		float L_426 = __this->get_headbobFade_66();
		float L_427 = V_8;
		V_5 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((-((float)((float)L_425/(float)(10.0f))))), (float)L_426)), (float)L_427));
		// yPos = springPosition * (jumpLandIntensity/10) + bobFactor * (headbobHeight/10) * headbobFade * speedHeightFactor;
		float L_428 = __this->get_springPosition_67();
		float L_429 = __this->get_jumpLandIntensity_62();
		float L_430 = V_9;
		float L_431 = __this->get_headbobHeight_60();
		float L_432 = __this->get_headbobFade_66();
		float L_433 = V_17;
		V_4 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_428, (float)((float)((float)L_429/(float)(10.0f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_430, (float)((float)((float)L_431/(float)(10.0f))))), (float)L_432)), (float)L_433))));
		// zTilt = bobSwayFactor * (headbobSwayAngle/10) * headbobFade;
		float L_434 = V_8;
		float L_435 = __this->get_headbobSwayAngle_59();
		float L_436 = __this->get_headbobFade_66();
		V_6 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_434, (float)((float)((float)L_435/(float)(10.0f))))), (float)L_436));
	}

IL_0e25:
	{
		// if(useHeadbob == true){
		bool L_437 = __this->get_useHeadbob_55();
		if (!L_437)
		{
			goto IL_0f98;
		}
	}
	{
		// if(fps_Rigidbody.velocity.magnitude >0.1f){
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_438 = __this->get_fps_Rigidbody_54();
		NullCheck(L_438);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_439;
		L_439 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_438, /*hidden argument*/NULL);
		V_16 = L_439;
		float L_440;
		L_440 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_16), /*hidden argument*/NULL);
		if ((!(((float)L_440) > ((float)(0.100000001f)))))
		{
			goto IL_0ee6;
		}
	}
	{
		// head.localPosition = Vector3.MoveTowards(head.localPosition, snapHeadjointToCapsul ? (new Vector3(originalLocalPosition.x,(capsule.height/2)*head.localScale.y,originalLocalPosition.z)  + new Vector3(xPos, yPos, 0)) : originalLocalPosition + new Vector3(xPos, yPos, 0),0.5f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_441 = __this->get_head_56();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_442 = __this->get_head_56();
		NullCheck(L_442);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_443;
		L_443 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_442, /*hidden argument*/NULL);
		bool L_444 = __this->get_snapHeadjointToCapsul_57();
		G_B112_0 = L_443;
		G_B112_1 = L_441;
		if (L_444)
		{
			G_B113_0 = L_443;
			G_B113_1 = L_441;
			goto IL_0e82;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_445 = __this->get_originalLocalPosition_63();
		float L_446 = V_5;
		float L_447 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_448;
		memset((&L_448), 0, sizeof(L_448));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_448), L_446, L_447, (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_449;
		L_449 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_445, L_448, /*hidden argument*/NULL);
		G_B114_0 = L_449;
		G_B114_1 = G_B112_0;
		G_B114_2 = G_B112_1;
		goto IL_0ed2;
	}

IL_0e82:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_450 = __this->get_address_of_originalLocalPosition_63();
		float L_451 = L_450->get_x_2();
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_452 = __this->get_capsule_47();
		NullCheck(L_452);
		float L_453;
		L_453 = CapsuleCollider_get_height_mD6CF93CB2C222F8E5B77D65B0356F8FD8005B526(L_452, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_454 = __this->get_head_56();
		NullCheck(L_454);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_455;
		L_455 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_454, /*hidden argument*/NULL);
		float L_456 = L_455.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_457 = __this->get_address_of_originalLocalPosition_63();
		float L_458 = L_457->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_459;
		memset((&L_459), 0, sizeof(L_459));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_459), L_451, ((float)il2cpp_codegen_multiply((float)((float)((float)L_453/(float)(2.0f))), (float)L_456)), L_458, /*hidden argument*/NULL);
		float L_460 = V_5;
		float L_461 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_462;
		memset((&L_462), 0, sizeof(L_462));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_462), L_460, L_461, (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_463;
		L_463 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_459, L_462, /*hidden argument*/NULL);
		G_B114_0 = L_463;
		G_B114_1 = G_B113_0;
		G_B114_2 = G_B113_1;
	}

IL_0ed2:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_464;
		L_464 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(G_B114_1, G_B114_0, (0.5f), /*hidden argument*/NULL);
		NullCheck(G_B114_2);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(G_B114_2, L_464, /*hidden argument*/NULL);
		// }else{
		goto IL_0f7f;
	}

IL_0ee6:
	{
		// head.localPosition = Vector3.SmoothDamp(head.localPosition, snapHeadjointToCapsul ? (new Vector3(originalLocalPosition.x,(capsule.height/2)*head.localScale.y,originalLocalPosition.z)  + new Vector3(xPos, yPos, 0)) : originalLocalPosition + new Vector3(xPos, yPos, 0),ref miscRefVel, 0.15f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_465 = __this->get_head_56();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_466 = __this->get_head_56();
		NullCheck(L_466);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_467;
		L_467 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_466, /*hidden argument*/NULL);
		bool L_468 = __this->get_snapHeadjointToCapsul_57();
		G_B116_0 = L_467;
		G_B116_1 = L_465;
		if (L_468)
		{
			G_B117_0 = L_467;
			G_B117_1 = L_465;
			goto IL_0f1a;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_469 = __this->get_originalLocalPosition_63();
		float L_470 = V_5;
		float L_471 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_472;
		memset((&L_472), 0, sizeof(L_472));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_472), L_470, L_471, (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_473;
		L_473 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_469, L_472, /*hidden argument*/NULL);
		G_B118_0 = L_473;
		G_B118_1 = G_B116_0;
		G_B118_2 = G_B116_1;
		goto IL_0f6a;
	}

IL_0f1a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_474 = __this->get_address_of_originalLocalPosition_63();
		float L_475 = L_474->get_x_2();
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_476 = __this->get_capsule_47();
		NullCheck(L_476);
		float L_477;
		L_477 = CapsuleCollider_get_height_mD6CF93CB2C222F8E5B77D65B0356F8FD8005B526(L_476, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_478 = __this->get_head_56();
		NullCheck(L_478);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_479;
		L_479 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_478, /*hidden argument*/NULL);
		float L_480 = L_479.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_481 = __this->get_address_of_originalLocalPosition_63();
		float L_482 = L_481->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_483;
		memset((&L_483), 0, sizeof(L_483));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_483), L_475, ((float)il2cpp_codegen_multiply((float)((float)((float)L_477/(float)(2.0f))), (float)L_480)), L_482, /*hidden argument*/NULL);
		float L_484 = V_5;
		float L_485 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_486;
		memset((&L_486), 0, sizeof(L_486));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_486), L_484, L_485, (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_487;
		L_487 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_483, L_486, /*hidden argument*/NULL);
		G_B118_0 = L_487;
		G_B118_1 = G_B117_0;
		G_B118_2 = G_B117_1;
	}

IL_0f6a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_488 = __this->get_address_of_miscRefVel_75();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_489;
		L_489 = Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627(G_B118_1, G_B118_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_488, (0.150000006f), /*hidden argument*/NULL);
		NullCheck(G_B118_2);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(G_B118_2, L_489, /*hidden argument*/NULL);
	}

IL_0f7f:
	{
		// head.localRotation = Quaternion.Euler(xTilt, 0, zTilt);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_490 = __this->get_head_56();
		float L_491 = V_7;
		float L_492 = V_6;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_493;
		L_493 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_491, (0.0f), L_492, /*hidden argument*/NULL);
		NullCheck(L_490);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_490, L_493, /*hidden argument*/NULL);
	}

IL_0f98:
	{
		// if(enableAudioSFX){
		bool L_494 = __this->get_enableAudioSFX_78();
		if (!L_494)
		{
			goto IL_184c;
		}
	}
	{
		// if(fsmode == FSMode.Dynamic)
		int32_t L_495 = __this->get_fsmode_83();
		if ((!(((uint32_t)L_495) == ((uint32_t)1))))
		{
			goto IL_1740;
		}
	}
	{
		// RaycastHit hit = new RaycastHit();
		il2cpp_codegen_initobj((&V_18), sizeof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 ));
		// if(Physics.Raycast(transform.position, Vector3.down, out hit)){
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_496;
		L_496 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_496);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_497;
		L_497 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_496, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_498;
		L_498 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		bool L_499;
		L_499 = Physics_Raycast_mE84D30EEFE59DA28DA172342068F092A35B2BE4A(L_497, L_498, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_18), /*hidden argument*/NULL);
		if (!L_499)
		{
			goto IL_1617;
		}
	}
	{
		// if(dynamicFootstep.materialMode == DynamicFootStep.matMode.physicMaterial){
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_500 = __this->get_dynamicFootstep_84();
		NullCheck(L_500);
		int32_t L_501 = L_500->get_materialMode_0();
		if (L_501)
		{
			goto IL_1231;
		}
	}
	{
		// dynamicFootstep.currentClipSet = (dynamicFootstep.woodPhysMat.Any() && dynamicFootstep.woodPhysMat.Contains(hit.collider.sharedMaterial) && dynamicFootstep.woodClipSet.Any()) ? // If standing on Wood
		// dynamicFootstep.woodClipSet : ((dynamicFootstep.grassPhysMat.Any() && dynamicFootstep.grassPhysMat.Contains(hit.collider.sharedMaterial) && dynamicFootstep.grassClipSet.Any()) ? // If standing on Grass
		// dynamicFootstep.grassClipSet : ((dynamicFootstep.metalAndGlassPhysMat.Any() && dynamicFootstep.metalAndGlassPhysMat.Contains(hit.collider.sharedMaterial) && dynamicFootstep.metalAndGlassClipSet.Any()) ? // If standing on Metal/Glass
		// dynamicFootstep.metalAndGlassClipSet : ((dynamicFootstep.rockAndConcretePhysMat.Any() && dynamicFootstep.rockAndConcretePhysMat.Contains(hit.collider.sharedMaterial) && dynamicFootstep.rockAndConcreteClipSet.Any()) ? // If standing on Rock/Concrete
		// dynamicFootstep.rockAndConcreteClipSet : ((dynamicFootstep.dirtAndGravelPhysMat.Any() && dynamicFootstep.dirtAndGravelPhysMat.Contains(hit.collider.sharedMaterial) && dynamicFootstep.dirtAndGravelClipSet.Any()) ? // If standing on Dirt/Gravle
		// dynamicFootstep.dirtAndGravelClipSet : ((dynamicFootstep.mudPhysMat.Any() && dynamicFootstep.mudPhysMat.Contains(hit.collider.sharedMaterial) && dynamicFootstep.mudClipSet.Any())? // If standing on Mud
		// dynamicFootstep.mudClipSet : ((dynamicFootstep.customPhysMat.Any() && dynamicFootstep.customPhysMat.Contains(hit.collider.sharedMaterial) && dynamicFootstep.customClipSet.Any())? // If standing on the custom material
		// dynamicFootstep.customClipSet : footStepSounds)))))); // If material is unknown, fall back
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_502 = __this->get_dynamicFootstep_84();
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_503 = __this->get_dynamicFootstep_84();
		NullCheck(L_503);
		List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * L_504 = L_503->get_woodPhysMat_1();
		bool L_505;
		L_505 = Enumerable_Any_TisPhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2_m641CE0F6AA61E1866047EDC77FB8C79C51595F95(L_504, /*hidden argument*/Enumerable_Any_TisPhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2_m641CE0F6AA61E1866047EDC77FB8C79C51595F95_RuntimeMethod_var);
		G_B125_0 = L_502;
		if (!L_505)
		{
			G_B127_0 = L_502;
			goto IL_102e;
		}
	}
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_506 = __this->get_dynamicFootstep_84();
		NullCheck(L_506);
		List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * L_507 = L_506->get_woodPhysMat_1();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_508;
		L_508 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_18), /*hidden argument*/NULL);
		NullCheck(L_508);
		PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * L_509;
		L_509 = Collider_get_sharedMaterial_mF09CE26DD4F93A42DEA914489D8201B625EB61F5(L_508, /*hidden argument*/NULL);
		NullCheck(L_507);
		bool L_510;
		L_510 = List_1_Contains_m32E837C20616E9C51DCBF029753220B3BE712C6D(L_507, L_509, /*hidden argument*/List_1_Contains_m32E837C20616E9C51DCBF029753220B3BE712C6D_RuntimeMethod_var);
		G_B126_0 = G_B125_0;
		if (!L_510)
		{
			G_B127_0 = G_B125_0;
			goto IL_102e;
		}
	}
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_511 = __this->get_dynamicFootstep_84();
		NullCheck(L_511);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_512 = L_511->get_woodClipSet_16();
		bool L_513;
		L_513 = Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C(L_512, /*hidden argument*/Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C_RuntimeMethod_var);
		G_B127_0 = G_B126_0;
		if (L_513)
		{
			G_B152_0 = G_B126_0;
			goto IL_121c;
		}
	}

IL_102e:
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_514 = __this->get_dynamicFootstep_84();
		NullCheck(L_514);
		List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * L_515 = L_514->get_grassPhysMat_3();
		bool L_516;
		L_516 = Enumerable_Any_TisPhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2_m641CE0F6AA61E1866047EDC77FB8C79C51595F95(L_515, /*hidden argument*/Enumerable_Any_TisPhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2_m641CE0F6AA61E1866047EDC77FB8C79C51595F95_RuntimeMethod_var);
		G_B128_0 = G_B127_0;
		if (!L_516)
		{
			G_B130_0 = G_B127_0;
			goto IL_1073;
		}
	}
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_517 = __this->get_dynamicFootstep_84();
		NullCheck(L_517);
		List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * L_518 = L_517->get_grassPhysMat_3();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_519;
		L_519 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_18), /*hidden argument*/NULL);
		NullCheck(L_519);
		PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * L_520;
		L_520 = Collider_get_sharedMaterial_mF09CE26DD4F93A42DEA914489D8201B625EB61F5(L_519, /*hidden argument*/NULL);
		NullCheck(L_518);
		bool L_521;
		L_521 = List_1_Contains_m32E837C20616E9C51DCBF029753220B3BE712C6D(L_518, L_520, /*hidden argument*/List_1_Contains_m32E837C20616E9C51DCBF029753220B3BE712C6D_RuntimeMethod_var);
		G_B129_0 = G_B128_0;
		if (!L_521)
		{
			G_B130_0 = G_B128_0;
			goto IL_1073;
		}
	}
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_522 = __this->get_dynamicFootstep_84();
		NullCheck(L_522);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_523 = L_522->get_grassClipSet_18();
		bool L_524;
		L_524 = Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C(L_523, /*hidden argument*/Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C_RuntimeMethod_var);
		G_B130_0 = G_B129_0;
		if (L_524)
		{
			G_B151_0 = G_B129_0;
			goto IL_120f;
		}
	}

IL_1073:
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_525 = __this->get_dynamicFootstep_84();
		NullCheck(L_525);
		List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * L_526 = L_525->get_metalAndGlassPhysMat_2();
		bool L_527;
		L_527 = Enumerable_Any_TisPhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2_m641CE0F6AA61E1866047EDC77FB8C79C51595F95(L_526, /*hidden argument*/Enumerable_Any_TisPhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2_m641CE0F6AA61E1866047EDC77FB8C79C51595F95_RuntimeMethod_var);
		G_B131_0 = G_B130_0;
		if (!L_527)
		{
			G_B133_0 = G_B130_0;
			goto IL_10b8;
		}
	}
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_528 = __this->get_dynamicFootstep_84();
		NullCheck(L_528);
		List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * L_529 = L_528->get_metalAndGlassPhysMat_2();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_530;
		L_530 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_18), /*hidden argument*/NULL);
		NullCheck(L_530);
		PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * L_531;
		L_531 = Collider_get_sharedMaterial_mF09CE26DD4F93A42DEA914489D8201B625EB61F5(L_530, /*hidden argument*/NULL);
		NullCheck(L_529);
		bool L_532;
		L_532 = List_1_Contains_m32E837C20616E9C51DCBF029753220B3BE712C6D(L_529, L_531, /*hidden argument*/List_1_Contains_m32E837C20616E9C51DCBF029753220B3BE712C6D_RuntimeMethod_var);
		G_B132_0 = G_B131_0;
		if (!L_532)
		{
			G_B133_0 = G_B131_0;
			goto IL_10b8;
		}
	}
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_533 = __this->get_dynamicFootstep_84();
		NullCheck(L_533);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_534 = L_533->get_metalAndGlassClipSet_17();
		bool L_535;
		L_535 = Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C(L_534, /*hidden argument*/Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C_RuntimeMethod_var);
		G_B133_0 = G_B132_0;
		if (L_535)
		{
			G_B150_0 = G_B132_0;
			goto IL_1202;
		}
	}

IL_10b8:
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_536 = __this->get_dynamicFootstep_84();
		NullCheck(L_536);
		List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * L_537 = L_536->get_rockAndConcretePhysMat_5();
		bool L_538;
		L_538 = Enumerable_Any_TisPhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2_m641CE0F6AA61E1866047EDC77FB8C79C51595F95(L_537, /*hidden argument*/Enumerable_Any_TisPhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2_m641CE0F6AA61E1866047EDC77FB8C79C51595F95_RuntimeMethod_var);
		G_B134_0 = G_B133_0;
		if (!L_538)
		{
			G_B136_0 = G_B133_0;
			goto IL_10fd;
		}
	}
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_539 = __this->get_dynamicFootstep_84();
		NullCheck(L_539);
		List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * L_540 = L_539->get_rockAndConcretePhysMat_5();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_541;
		L_541 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_18), /*hidden argument*/NULL);
		NullCheck(L_541);
		PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * L_542;
		L_542 = Collider_get_sharedMaterial_mF09CE26DD4F93A42DEA914489D8201B625EB61F5(L_541, /*hidden argument*/NULL);
		NullCheck(L_540);
		bool L_543;
		L_543 = List_1_Contains_m32E837C20616E9C51DCBF029753220B3BE712C6D(L_540, L_542, /*hidden argument*/List_1_Contains_m32E837C20616E9C51DCBF029753220B3BE712C6D_RuntimeMethod_var);
		G_B135_0 = G_B134_0;
		if (!L_543)
		{
			G_B136_0 = G_B134_0;
			goto IL_10fd;
		}
	}
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_544 = __this->get_dynamicFootstep_84();
		NullCheck(L_544);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_545 = L_544->get_rockAndConcreteClipSet_20();
		bool L_546;
		L_546 = Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C(L_545, /*hidden argument*/Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C_RuntimeMethod_var);
		G_B136_0 = G_B135_0;
		if (L_546)
		{
			G_B149_0 = G_B135_0;
			goto IL_11f5;
		}
	}

IL_10fd:
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_547 = __this->get_dynamicFootstep_84();
		NullCheck(L_547);
		List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * L_548 = L_547->get_dirtAndGravelPhysMat_4();
		bool L_549;
		L_549 = Enumerable_Any_TisPhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2_m641CE0F6AA61E1866047EDC77FB8C79C51595F95(L_548, /*hidden argument*/Enumerable_Any_TisPhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2_m641CE0F6AA61E1866047EDC77FB8C79C51595F95_RuntimeMethod_var);
		G_B137_0 = G_B136_0;
		if (!L_549)
		{
			G_B139_0 = G_B136_0;
			goto IL_1142;
		}
	}
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_550 = __this->get_dynamicFootstep_84();
		NullCheck(L_550);
		List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * L_551 = L_550->get_dirtAndGravelPhysMat_4();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_552;
		L_552 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_18), /*hidden argument*/NULL);
		NullCheck(L_552);
		PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * L_553;
		L_553 = Collider_get_sharedMaterial_mF09CE26DD4F93A42DEA914489D8201B625EB61F5(L_552, /*hidden argument*/NULL);
		NullCheck(L_551);
		bool L_554;
		L_554 = List_1_Contains_m32E837C20616E9C51DCBF029753220B3BE712C6D(L_551, L_553, /*hidden argument*/List_1_Contains_m32E837C20616E9C51DCBF029753220B3BE712C6D_RuntimeMethod_var);
		G_B138_0 = G_B137_0;
		if (!L_554)
		{
			G_B139_0 = G_B137_0;
			goto IL_1142;
		}
	}
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_555 = __this->get_dynamicFootstep_84();
		NullCheck(L_555);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_556 = L_555->get_dirtAndGravelClipSet_19();
		bool L_557;
		L_557 = Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C(L_556, /*hidden argument*/Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C_RuntimeMethod_var);
		G_B139_0 = G_B138_0;
		if (L_557)
		{
			G_B148_0 = G_B138_0;
			goto IL_11e8;
		}
	}

IL_1142:
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_558 = __this->get_dynamicFootstep_84();
		NullCheck(L_558);
		List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * L_559 = L_558->get_mudPhysMat_6();
		bool L_560;
		L_560 = Enumerable_Any_TisPhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2_m641CE0F6AA61E1866047EDC77FB8C79C51595F95(L_559, /*hidden argument*/Enumerable_Any_TisPhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2_m641CE0F6AA61E1866047EDC77FB8C79C51595F95_RuntimeMethod_var);
		G_B140_0 = G_B139_0;
		if (!L_560)
		{
			G_B142_0 = G_B139_0;
			goto IL_1184;
		}
	}
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_561 = __this->get_dynamicFootstep_84();
		NullCheck(L_561);
		List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * L_562 = L_561->get_mudPhysMat_6();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_563;
		L_563 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_18), /*hidden argument*/NULL);
		NullCheck(L_563);
		PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * L_564;
		L_564 = Collider_get_sharedMaterial_mF09CE26DD4F93A42DEA914489D8201B625EB61F5(L_563, /*hidden argument*/NULL);
		NullCheck(L_562);
		bool L_565;
		L_565 = List_1_Contains_m32E837C20616E9C51DCBF029753220B3BE712C6D(L_562, L_564, /*hidden argument*/List_1_Contains_m32E837C20616E9C51DCBF029753220B3BE712C6D_RuntimeMethod_var);
		G_B141_0 = G_B140_0;
		if (!L_565)
		{
			G_B142_0 = G_B140_0;
			goto IL_1184;
		}
	}
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_566 = __this->get_dynamicFootstep_84();
		NullCheck(L_566);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_567 = L_566->get_mudClipSet_21();
		bool L_568;
		L_568 = Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C(L_567, /*hidden argument*/Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C_RuntimeMethod_var);
		G_B142_0 = G_B141_0;
		if (L_568)
		{
			G_B147_0 = G_B141_0;
			goto IL_11db;
		}
	}

IL_1184:
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_569 = __this->get_dynamicFootstep_84();
		NullCheck(L_569);
		List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * L_570 = L_569->get_customPhysMat_7();
		bool L_571;
		L_571 = Enumerable_Any_TisPhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2_m641CE0F6AA61E1866047EDC77FB8C79C51595F95(L_570, /*hidden argument*/Enumerable_Any_TisPhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2_m641CE0F6AA61E1866047EDC77FB8C79C51595F95_RuntimeMethod_var);
		G_B143_0 = G_B142_0;
		if (!L_571)
		{
			G_B145_0 = G_B142_0;
			goto IL_11c6;
		}
	}
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_572 = __this->get_dynamicFootstep_84();
		NullCheck(L_572);
		List_1_t8E600AF08C0D509CF7F3B82B5AF74E7E2DBD9AEF * L_573 = L_572->get_customPhysMat_7();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_574;
		L_574 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_18), /*hidden argument*/NULL);
		NullCheck(L_574);
		PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * L_575;
		L_575 = Collider_get_sharedMaterial_mF09CE26DD4F93A42DEA914489D8201B625EB61F5(L_574, /*hidden argument*/NULL);
		NullCheck(L_573);
		bool L_576;
		L_576 = List_1_Contains_m32E837C20616E9C51DCBF029753220B3BE712C6D(L_573, L_575, /*hidden argument*/List_1_Contains_m32E837C20616E9C51DCBF029753220B3BE712C6D_RuntimeMethod_var);
		G_B144_0 = G_B143_0;
		if (!L_576)
		{
			G_B145_0 = G_B143_0;
			goto IL_11c6;
		}
	}
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_577 = __this->get_dynamicFootstep_84();
		NullCheck(L_577);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_578 = L_577->get_customClipSet_22();
		bool L_579;
		L_579 = Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C(L_578, /*hidden argument*/Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C_RuntimeMethod_var);
		G_B145_0 = G_B144_0;
		if (L_579)
		{
			G_B146_0 = G_B144_0;
			goto IL_11ce;
		}
	}

IL_11c6:
	{
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_580 = __this->get_footStepSounds_82();
		G_B153_0 = L_580;
		G_B153_1 = G_B145_0;
		goto IL_1227;
	}

IL_11ce:
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_581 = __this->get_dynamicFootstep_84();
		NullCheck(L_581);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_582 = L_581->get_customClipSet_22();
		G_B153_0 = L_582;
		G_B153_1 = G_B146_0;
		goto IL_1227;
	}

IL_11db:
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_583 = __this->get_dynamicFootstep_84();
		NullCheck(L_583);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_584 = L_583->get_mudClipSet_21();
		G_B153_0 = L_584;
		G_B153_1 = G_B147_0;
		goto IL_1227;
	}

IL_11e8:
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_585 = __this->get_dynamicFootstep_84();
		NullCheck(L_585);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_586 = L_585->get_dirtAndGravelClipSet_19();
		G_B153_0 = L_586;
		G_B153_1 = G_B148_0;
		goto IL_1227;
	}

IL_11f5:
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_587 = __this->get_dynamicFootstep_84();
		NullCheck(L_587);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_588 = L_587->get_rockAndConcreteClipSet_20();
		G_B153_0 = L_588;
		G_B153_1 = G_B149_0;
		goto IL_1227;
	}

IL_1202:
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_589 = __this->get_dynamicFootstep_84();
		NullCheck(L_589);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_590 = L_589->get_metalAndGlassClipSet_17();
		G_B153_0 = L_590;
		G_B153_1 = G_B150_0;
		goto IL_1227;
	}

IL_120f:
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_591 = __this->get_dynamicFootstep_84();
		NullCheck(L_591);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_592 = L_591->get_grassClipSet_18();
		G_B153_0 = L_592;
		G_B153_1 = G_B151_0;
		goto IL_1227;
	}

IL_121c:
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_593 = __this->get_dynamicFootstep_84();
		NullCheck(L_593);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_594 = L_593->get_woodClipSet_16();
		G_B153_0 = L_594;
		G_B153_1 = G_B152_0;
	}

IL_1227:
	{
		NullCheck(G_B153_1);
		G_B153_1->set_currentClipSet_15(G_B153_0);
		// }else if (hit.collider.GetComponent<MeshRenderer>()){
		goto IL_14c3;
	}

IL_1231:
	{
		// }else if (hit.collider.GetComponent<MeshRenderer>()){
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_595;
		L_595 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_18), /*hidden argument*/NULL);
		NullCheck(L_595);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_596;
		L_596 = Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537(L_595, /*hidden argument*/Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_597;
		L_597 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_596, /*hidden argument*/NULL);
		if (!L_597)
		{
			goto IL_14c3;
		}
	}
	{
		// dynamicFootstep.currentClipSet = (dynamicFootstep.woodMat.Any() && dynamicFootstep.woodMat.Contains(hit.collider.GetComponent<MeshRenderer>().sharedMaterial) && dynamicFootstep.woodClipSet.Any()) ? // If standing on Wood
		// dynamicFootstep.woodClipSet : ((dynamicFootstep.grassMat.Any() && dynamicFootstep.grassMat.Contains(hit.collider.GetComponent<MeshRenderer>().sharedMaterial) && dynamicFootstep.grassClipSet.Any()) ? // If standing on Grass
		// dynamicFootstep.grassClipSet : ((dynamicFootstep.metalAndGlassMat.Any() && dynamicFootstep.metalAndGlassMat.Contains(hit.collider.GetComponent<MeshRenderer>().sharedMaterial) && dynamicFootstep.metalAndGlassClipSet.Any()) ? // If standing on Metal/Glass
		// dynamicFootstep.metalAndGlassClipSet : ((dynamicFootstep.rockAndConcreteMat.Any() && dynamicFootstep.rockAndConcreteMat.Contains(hit.collider.GetComponent<MeshRenderer>().sharedMaterial) && dynamicFootstep.rockAndConcreteClipSet.Any()) ? // If standing on Rock/Concrete
		// dynamicFootstep.rockAndConcreteClipSet : ((dynamicFootstep.dirtAndGravelMat.Any() && dynamicFootstep.dirtAndGravelMat.Contains(hit.collider.GetComponent<MeshRenderer>().sharedMaterial) && dynamicFootstep.dirtAndGravelClipSet.Any()) ? // If standing on Dirt/Gravle
		// dynamicFootstep.dirtAndGravelClipSet : ((dynamicFootstep.mudMat.Any() && dynamicFootstep.mudMat.Contains(hit.collider.GetComponent<MeshRenderer>().sharedMaterial) && dynamicFootstep.mudClipSet.Any())? // If standing on Mud
		// dynamicFootstep.mudClipSet : ((dynamicFootstep.customMat.Any() && dynamicFootstep.customMat.Contains(hit.collider.GetComponent<MeshRenderer>().sharedMaterial) && dynamicFootstep.customClipSet.Any())? // If standing on the custom material
		// dynamicFootstep.customClipSet : footStepSounds.Any() ? footStepSounds : null)))))); // If material is unknown, fall back
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_598 = __this->get_dynamicFootstep_84();
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_599 = __this->get_dynamicFootstep_84();
		NullCheck(L_599);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_600 = L_599->get_woodMat_8();
		bool L_601;
		L_601 = Enumerable_Any_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m05B3E50A24E2F28E1C59600F57CA6665D0C601FA(L_600, /*hidden argument*/Enumerable_Any_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m05B3E50A24E2F28E1C59600F57CA6665D0C601FA_RuntimeMethod_var);
		G_B156_0 = L_598;
		if (!L_601)
		{
			G_B158_0 = L_598;
			goto IL_1297;
		}
	}
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_602 = __this->get_dynamicFootstep_84();
		NullCheck(L_602);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_603 = L_602->get_woodMat_8();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_604;
		L_604 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_18), /*hidden argument*/NULL);
		NullCheck(L_604);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_605;
		L_605 = Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537(L_604, /*hidden argument*/Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var);
		NullCheck(L_605);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_606;
		L_606 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_605, /*hidden argument*/NULL);
		NullCheck(L_603);
		bool L_607;
		L_607 = List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC(L_603, L_606, /*hidden argument*/List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC_RuntimeMethod_var);
		G_B157_0 = G_B156_0;
		if (!L_607)
		{
			G_B158_0 = G_B156_0;
			goto IL_1297;
		}
	}
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_608 = __this->get_dynamicFootstep_84();
		NullCheck(L_608);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_609 = L_608->get_woodClipSet_16();
		bool L_610;
		L_610 = Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C(L_609, /*hidden argument*/Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C_RuntimeMethod_var);
		G_B158_0 = G_B157_0;
		if (L_610)
		{
			G_B185_0 = G_B157_0;
			goto IL_14b3;
		}
	}

IL_1297:
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_611 = __this->get_dynamicFootstep_84();
		NullCheck(L_611);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_612 = L_611->get_grassMat_10();
		bool L_613;
		L_613 = Enumerable_Any_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m05B3E50A24E2F28E1C59600F57CA6665D0C601FA(L_612, /*hidden argument*/Enumerable_Any_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m05B3E50A24E2F28E1C59600F57CA6665D0C601FA_RuntimeMethod_var);
		G_B159_0 = G_B158_0;
		if (!L_613)
		{
			G_B161_0 = G_B158_0;
			goto IL_12e1;
		}
	}
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_614 = __this->get_dynamicFootstep_84();
		NullCheck(L_614);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_615 = L_614->get_grassMat_10();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_616;
		L_616 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_18), /*hidden argument*/NULL);
		NullCheck(L_616);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_617;
		L_617 = Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537(L_616, /*hidden argument*/Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var);
		NullCheck(L_617);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_618;
		L_618 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_617, /*hidden argument*/NULL);
		NullCheck(L_615);
		bool L_619;
		L_619 = List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC(L_615, L_618, /*hidden argument*/List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC_RuntimeMethod_var);
		G_B160_0 = G_B159_0;
		if (!L_619)
		{
			G_B161_0 = G_B159_0;
			goto IL_12e1;
		}
	}
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_620 = __this->get_dynamicFootstep_84();
		NullCheck(L_620);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_621 = L_620->get_grassClipSet_18();
		bool L_622;
		L_622 = Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C(L_621, /*hidden argument*/Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C_RuntimeMethod_var);
		G_B161_0 = G_B160_0;
		if (L_622)
		{
			G_B184_0 = G_B160_0;
			goto IL_14a6;
		}
	}

IL_12e1:
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_623 = __this->get_dynamicFootstep_84();
		NullCheck(L_623);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_624 = L_623->get_metalAndGlassMat_9();
		bool L_625;
		L_625 = Enumerable_Any_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m05B3E50A24E2F28E1C59600F57CA6665D0C601FA(L_624, /*hidden argument*/Enumerable_Any_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m05B3E50A24E2F28E1C59600F57CA6665D0C601FA_RuntimeMethod_var);
		G_B162_0 = G_B161_0;
		if (!L_625)
		{
			G_B164_0 = G_B161_0;
			goto IL_132b;
		}
	}
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_626 = __this->get_dynamicFootstep_84();
		NullCheck(L_626);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_627 = L_626->get_metalAndGlassMat_9();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_628;
		L_628 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_18), /*hidden argument*/NULL);
		NullCheck(L_628);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_629;
		L_629 = Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537(L_628, /*hidden argument*/Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var);
		NullCheck(L_629);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_630;
		L_630 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_629, /*hidden argument*/NULL);
		NullCheck(L_627);
		bool L_631;
		L_631 = List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC(L_627, L_630, /*hidden argument*/List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC_RuntimeMethod_var);
		G_B163_0 = G_B162_0;
		if (!L_631)
		{
			G_B164_0 = G_B162_0;
			goto IL_132b;
		}
	}
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_632 = __this->get_dynamicFootstep_84();
		NullCheck(L_632);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_633 = L_632->get_metalAndGlassClipSet_17();
		bool L_634;
		L_634 = Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C(L_633, /*hidden argument*/Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C_RuntimeMethod_var);
		G_B164_0 = G_B163_0;
		if (L_634)
		{
			G_B183_0 = G_B163_0;
			goto IL_1499;
		}
	}

IL_132b:
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_635 = __this->get_dynamicFootstep_84();
		NullCheck(L_635);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_636 = L_635->get_rockAndConcreteMat_12();
		bool L_637;
		L_637 = Enumerable_Any_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m05B3E50A24E2F28E1C59600F57CA6665D0C601FA(L_636, /*hidden argument*/Enumerable_Any_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m05B3E50A24E2F28E1C59600F57CA6665D0C601FA_RuntimeMethod_var);
		G_B165_0 = G_B164_0;
		if (!L_637)
		{
			G_B167_0 = G_B164_0;
			goto IL_1375;
		}
	}
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_638 = __this->get_dynamicFootstep_84();
		NullCheck(L_638);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_639 = L_638->get_rockAndConcreteMat_12();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_640;
		L_640 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_18), /*hidden argument*/NULL);
		NullCheck(L_640);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_641;
		L_641 = Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537(L_640, /*hidden argument*/Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var);
		NullCheck(L_641);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_642;
		L_642 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_641, /*hidden argument*/NULL);
		NullCheck(L_639);
		bool L_643;
		L_643 = List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC(L_639, L_642, /*hidden argument*/List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC_RuntimeMethod_var);
		G_B166_0 = G_B165_0;
		if (!L_643)
		{
			G_B167_0 = G_B165_0;
			goto IL_1375;
		}
	}
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_644 = __this->get_dynamicFootstep_84();
		NullCheck(L_644);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_645 = L_644->get_rockAndConcreteClipSet_20();
		bool L_646;
		L_646 = Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C(L_645, /*hidden argument*/Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C_RuntimeMethod_var);
		G_B167_0 = G_B166_0;
		if (L_646)
		{
			G_B182_0 = G_B166_0;
			goto IL_148c;
		}
	}

IL_1375:
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_647 = __this->get_dynamicFootstep_84();
		NullCheck(L_647);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_648 = L_647->get_dirtAndGravelMat_11();
		bool L_649;
		L_649 = Enumerable_Any_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m05B3E50A24E2F28E1C59600F57CA6665D0C601FA(L_648, /*hidden argument*/Enumerable_Any_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m05B3E50A24E2F28E1C59600F57CA6665D0C601FA_RuntimeMethod_var);
		G_B168_0 = G_B167_0;
		if (!L_649)
		{
			G_B170_0 = G_B167_0;
			goto IL_13bf;
		}
	}
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_650 = __this->get_dynamicFootstep_84();
		NullCheck(L_650);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_651 = L_650->get_dirtAndGravelMat_11();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_652;
		L_652 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_18), /*hidden argument*/NULL);
		NullCheck(L_652);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_653;
		L_653 = Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537(L_652, /*hidden argument*/Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var);
		NullCheck(L_653);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_654;
		L_654 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_653, /*hidden argument*/NULL);
		NullCheck(L_651);
		bool L_655;
		L_655 = List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC(L_651, L_654, /*hidden argument*/List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC_RuntimeMethod_var);
		G_B169_0 = G_B168_0;
		if (!L_655)
		{
			G_B170_0 = G_B168_0;
			goto IL_13bf;
		}
	}
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_656 = __this->get_dynamicFootstep_84();
		NullCheck(L_656);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_657 = L_656->get_dirtAndGravelClipSet_19();
		bool L_658;
		L_658 = Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C(L_657, /*hidden argument*/Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C_RuntimeMethod_var);
		G_B170_0 = G_B169_0;
		if (L_658)
		{
			G_B181_0 = G_B169_0;
			goto IL_147f;
		}
	}

IL_13bf:
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_659 = __this->get_dynamicFootstep_84();
		NullCheck(L_659);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_660 = L_659->get_mudMat_13();
		bool L_661;
		L_661 = Enumerable_Any_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m05B3E50A24E2F28E1C59600F57CA6665D0C601FA(L_660, /*hidden argument*/Enumerable_Any_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m05B3E50A24E2F28E1C59600F57CA6665D0C601FA_RuntimeMethod_var);
		G_B171_0 = G_B170_0;
		if (!L_661)
		{
			G_B173_0 = G_B170_0;
			goto IL_1406;
		}
	}
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_662 = __this->get_dynamicFootstep_84();
		NullCheck(L_662);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_663 = L_662->get_mudMat_13();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_664;
		L_664 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_18), /*hidden argument*/NULL);
		NullCheck(L_664);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_665;
		L_665 = Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537(L_664, /*hidden argument*/Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var);
		NullCheck(L_665);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_666;
		L_666 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_665, /*hidden argument*/NULL);
		NullCheck(L_663);
		bool L_667;
		L_667 = List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC(L_663, L_666, /*hidden argument*/List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC_RuntimeMethod_var);
		G_B172_0 = G_B171_0;
		if (!L_667)
		{
			G_B173_0 = G_B171_0;
			goto IL_1406;
		}
	}
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_668 = __this->get_dynamicFootstep_84();
		NullCheck(L_668);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_669 = L_668->get_mudClipSet_21();
		bool L_670;
		L_670 = Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C(L_669, /*hidden argument*/Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C_RuntimeMethod_var);
		G_B173_0 = G_B172_0;
		if (L_670)
		{
			G_B180_0 = G_B172_0;
			goto IL_1472;
		}
	}

IL_1406:
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_671 = __this->get_dynamicFootstep_84();
		NullCheck(L_671);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_672 = L_671->get_customMat_14();
		bool L_673;
		L_673 = Enumerable_Any_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m05B3E50A24E2F28E1C59600F57CA6665D0C601FA(L_672, /*hidden argument*/Enumerable_Any_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m05B3E50A24E2F28E1C59600F57CA6665D0C601FA_RuntimeMethod_var);
		G_B174_0 = G_B173_0;
		if (!L_673)
		{
			G_B176_0 = G_B173_0;
			goto IL_144d;
		}
	}
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_674 = __this->get_dynamicFootstep_84();
		NullCheck(L_674);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_675 = L_674->get_customMat_14();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_676;
		L_676 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_18), /*hidden argument*/NULL);
		NullCheck(L_676);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_677;
		L_677 = Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537(L_676, /*hidden argument*/Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var);
		NullCheck(L_677);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_678;
		L_678 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_677, /*hidden argument*/NULL);
		NullCheck(L_675);
		bool L_679;
		L_679 = List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC(L_675, L_678, /*hidden argument*/List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC_RuntimeMethod_var);
		G_B175_0 = G_B174_0;
		if (!L_679)
		{
			G_B176_0 = G_B174_0;
			goto IL_144d;
		}
	}
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_680 = __this->get_dynamicFootstep_84();
		NullCheck(L_680);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_681 = L_680->get_customClipSet_22();
		bool L_682;
		L_682 = Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C(L_681, /*hidden argument*/Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C_RuntimeMethod_var);
		G_B176_0 = G_B175_0;
		if (L_682)
		{
			G_B179_0 = G_B175_0;
			goto IL_1465;
		}
	}

IL_144d:
	{
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_683 = __this->get_footStepSounds_82();
		bool L_684;
		L_684 = Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C(L_683, /*hidden argument*/Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C_RuntimeMethod_var);
		G_B177_0 = G_B176_0;
		if (L_684)
		{
			G_B178_0 = G_B176_0;
			goto IL_145d;
		}
	}
	{
		G_B186_0 = ((List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 *)(NULL));
		G_B186_1 = G_B177_0;
		goto IL_14be;
	}

IL_145d:
	{
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_685 = __this->get_footStepSounds_82();
		G_B186_0 = L_685;
		G_B186_1 = G_B178_0;
		goto IL_14be;
	}

IL_1465:
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_686 = __this->get_dynamicFootstep_84();
		NullCheck(L_686);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_687 = L_686->get_customClipSet_22();
		G_B186_0 = L_687;
		G_B186_1 = G_B179_0;
		goto IL_14be;
	}

IL_1472:
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_688 = __this->get_dynamicFootstep_84();
		NullCheck(L_688);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_689 = L_688->get_mudClipSet_21();
		G_B186_0 = L_689;
		G_B186_1 = G_B180_0;
		goto IL_14be;
	}

IL_147f:
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_690 = __this->get_dynamicFootstep_84();
		NullCheck(L_690);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_691 = L_690->get_dirtAndGravelClipSet_19();
		G_B186_0 = L_691;
		G_B186_1 = G_B181_0;
		goto IL_14be;
	}

IL_148c:
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_692 = __this->get_dynamicFootstep_84();
		NullCheck(L_692);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_693 = L_692->get_rockAndConcreteClipSet_20();
		G_B186_0 = L_693;
		G_B186_1 = G_B182_0;
		goto IL_14be;
	}

IL_1499:
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_694 = __this->get_dynamicFootstep_84();
		NullCheck(L_694);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_695 = L_694->get_metalAndGlassClipSet_17();
		G_B186_0 = L_695;
		G_B186_1 = G_B183_0;
		goto IL_14be;
	}

IL_14a6:
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_696 = __this->get_dynamicFootstep_84();
		NullCheck(L_696);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_697 = L_696->get_grassClipSet_18();
		G_B186_0 = L_697;
		G_B186_1 = G_B184_0;
		goto IL_14be;
	}

IL_14b3:
	{
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_698 = __this->get_dynamicFootstep_84();
		NullCheck(L_698);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_699 = L_698->get_woodClipSet_16();
		G_B186_0 = L_699;
		G_B186_1 = G_B185_0;
	}

IL_14be:
	{
		NullCheck(G_B186_1);
		G_B186_1->set_currentClipSet_15(G_B186_0);
	}

IL_14c3:
	{
		// if(IsGrounded)
		bool L_700;
		L_700 = FirstPersonAIO_get_IsGrounded_m88E20AEA65897F31566FE87E03C32DF808A55EAD_inline(__this, /*hidden argument*/NULL);
		if (!L_700)
		{
			goto IL_15b4;
		}
	}
	{
		// if(!previousGrounded)
		bool L_701 = __this->get_previousGrounded_76();
		if (L_701)
		{
			goto IL_1539;
		}
	}
	{
		// if(dynamicFootstep.currentClipSet.Any()) { audioSource.PlayOneShot(dynamicFootstep.currentClipSet[Random.Range(0, dynamicFootstep.currentClipSet.Count)],Volume/10); }
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_702 = __this->get_dynamicFootstep_84();
		NullCheck(L_702);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_703 = L_702->get_currentClipSet_15();
		bool L_704;
		L_704 = Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C(L_703, /*hidden argument*/Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C_RuntimeMethod_var);
		if (!L_704)
		{
			goto IL_1525;
		}
	}
	{
		// if(dynamicFootstep.currentClipSet.Any()) { audioSource.PlayOneShot(dynamicFootstep.currentClipSet[Random.Range(0, dynamicFootstep.currentClipSet.Count)],Volume/10); }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_705 = __this->get_audioSource_77();
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_706 = __this->get_dynamicFootstep_84();
		NullCheck(L_706);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_707 = L_706->get_currentClipSet_15();
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_708 = __this->get_dynamicFootstep_84();
		NullCheck(L_708);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_709 = L_708->get_currentClipSet_15();
		NullCheck(L_709);
		int32_t L_710;
		L_710 = List_1_get_Count_m1C98EA9359999773111E0918F7CE4783B66413F1_inline(L_709, /*hidden argument*/List_1_get_Count_m1C98EA9359999773111E0918F7CE4783B66413F1_RuntimeMethod_var);
		int32_t L_711;
		L_711 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_710, /*hidden argument*/NULL);
		NullCheck(L_707);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_712;
		L_712 = List_1_get_Item_mE58237A66DC244F0D9956EF071E36DF135972BC2_inline(L_707, L_711, /*hidden argument*/List_1_get_Item_mE58237A66DC244F0D9956EF071E36DF135972BC2_RuntimeMethod_var);
		float L_713 = __this->get_Volume_79();
		NullCheck(L_705);
		AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024(L_705, L_712, ((float)((float)L_713/(float)(10.0f))), /*hidden argument*/NULL);
	}

IL_1525:
	{
		// nextStepTime = headbobCycle + 0.5f;
		float L_714 = __this->get_headbobCycle_65();
		__this->set_nextStepTime_64(((float)il2cpp_codegen_add((float)L_714, (float)(0.5f))));
		// } else
		goto IL_15a8;
	}

IL_1539:
	{
		// if(headbobCycle > nextStepTime)
		float L_715 = __this->get_headbobCycle_65();
		float L_716 = __this->get_nextStepTime_64();
		if ((!(((float)L_715) > ((float)L_716))))
		{
			goto IL_15a8;
		}
	}
	{
		// nextStepTime = headbobCycle + 0.5f;
		float L_717 = __this->get_headbobCycle_65();
		__this->set_nextStepTime_64(((float)il2cpp_codegen_add((float)L_717, (float)(0.5f))));
		// if(dynamicFootstep.currentClipSet.Any()){ audioSource.PlayOneShot(dynamicFootstep.currentClipSet[Random.Range(0, dynamicFootstep.currentClipSet.Count)],Volume/10); }
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_718 = __this->get_dynamicFootstep_84();
		NullCheck(L_718);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_719 = L_718->get_currentClipSet_15();
		bool L_720;
		L_720 = Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C(L_719, /*hidden argument*/Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C_RuntimeMethod_var);
		if (!L_720)
		{
			goto IL_15a8;
		}
	}
	{
		// if(dynamicFootstep.currentClipSet.Any()){ audioSource.PlayOneShot(dynamicFootstep.currentClipSet[Random.Range(0, dynamicFootstep.currentClipSet.Count)],Volume/10); }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_721 = __this->get_audioSource_77();
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_722 = __this->get_dynamicFootstep_84();
		NullCheck(L_722);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_723 = L_722->get_currentClipSet_15();
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_724 = __this->get_dynamicFootstep_84();
		NullCheck(L_724);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_725 = L_724->get_currentClipSet_15();
		NullCheck(L_725);
		int32_t L_726;
		L_726 = List_1_get_Count_m1C98EA9359999773111E0918F7CE4783B66413F1_inline(L_725, /*hidden argument*/List_1_get_Count_m1C98EA9359999773111E0918F7CE4783B66413F1_RuntimeMethod_var);
		int32_t L_727;
		L_727 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_726, /*hidden argument*/NULL);
		NullCheck(L_723);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_728;
		L_728 = List_1_get_Item_mE58237A66DC244F0D9956EF071E36DF135972BC2_inline(L_723, L_727, /*hidden argument*/List_1_get_Item_mE58237A66DC244F0D9956EF071E36DF135972BC2_RuntimeMethod_var);
		float L_729 = __this->get_Volume_79();
		NullCheck(L_721);
		AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024(L_721, L_728, ((float)((float)L_729/(float)(10.0f))), /*hidden argument*/NULL);
	}

IL_15a8:
	{
		// previousGrounded = true;
		__this->set_previousGrounded_76((bool)1);
		// } else
		goto IL_184c;
	}

IL_15b4:
	{
		// if(previousGrounded)
		bool L_730 = __this->get_previousGrounded_76();
		if (!L_730)
		{
			goto IL_160b;
		}
	}
	{
		// if(dynamicFootstep.currentClipSet.Any()){ audioSource.PlayOneShot(dynamicFootstep.currentClipSet[Random.Range(0, dynamicFootstep.currentClipSet.Count)],Volume/10); }
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_731 = __this->get_dynamicFootstep_84();
		NullCheck(L_731);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_732 = L_731->get_currentClipSet_15();
		bool L_733;
		L_733 = Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C(L_732, /*hidden argument*/Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C_RuntimeMethod_var);
		if (!L_733)
		{
			goto IL_160b;
		}
	}
	{
		// if(dynamicFootstep.currentClipSet.Any()){ audioSource.PlayOneShot(dynamicFootstep.currentClipSet[Random.Range(0, dynamicFootstep.currentClipSet.Count)],Volume/10); }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_734 = __this->get_audioSource_77();
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_735 = __this->get_dynamicFootstep_84();
		NullCheck(L_735);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_736 = L_735->get_currentClipSet_15();
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_737 = __this->get_dynamicFootstep_84();
		NullCheck(L_737);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_738 = L_737->get_currentClipSet_15();
		NullCheck(L_738);
		int32_t L_739;
		L_739 = List_1_get_Count_m1C98EA9359999773111E0918F7CE4783B66413F1_inline(L_738, /*hidden argument*/List_1_get_Count_m1C98EA9359999773111E0918F7CE4783B66413F1_RuntimeMethod_var);
		int32_t L_740;
		L_740 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_739, /*hidden argument*/NULL);
		NullCheck(L_736);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_741;
		L_741 = List_1_get_Item_mE58237A66DC244F0D9956EF071E36DF135972BC2_inline(L_736, L_740, /*hidden argument*/List_1_get_Item_mE58237A66DC244F0D9956EF071E36DF135972BC2_RuntimeMethod_var);
		float L_742 = __this->get_Volume_79();
		NullCheck(L_734);
		AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024(L_734, L_741, ((float)((float)L_742/(float)(10.0f))), /*hidden argument*/NULL);
	}

IL_160b:
	{
		// previousGrounded = false;
		__this->set_previousGrounded_76((bool)0);
		// } else {
		goto IL_184c;
	}

IL_1617:
	{
		// dynamicFootstep.currentClipSet = footStepSounds;
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_743 = __this->get_dynamicFootstep_84();
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_744 = __this->get_footStepSounds_82();
		NullCheck(L_743);
		L_743->set_currentClipSet_15(L_744);
		// if(IsGrounded)
		bool L_745;
		L_745 = FirstPersonAIO_get_IsGrounded_m88E20AEA65897F31566FE87E03C32DF808A55EAD_inline(__this, /*hidden argument*/NULL);
		if (!L_745)
		{
			goto IL_1702;
		}
	}
	{
		// if(!previousGrounded)
		bool L_746 = __this->get_previousGrounded_76();
		if (L_746)
		{
			goto IL_1679;
		}
	}
	{
		// if(landSound){ audioSource.PlayOneShot(landSound,Volume/10); }
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_747 = __this->get_landSound_81();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_748;
		L_748 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_747, /*hidden argument*/NULL);
		if (!L_748)
		{
			goto IL_1665;
		}
	}
	{
		// if(landSound){ audioSource.PlayOneShot(landSound,Volume/10); }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_749 = __this->get_audioSource_77();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_750 = __this->get_landSound_81();
		float L_751 = __this->get_Volume_79();
		NullCheck(L_749);
		AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024(L_749, L_750, ((float)((float)L_751/(float)(10.0f))), /*hidden argument*/NULL);
	}

IL_1665:
	{
		// nextStepTime = headbobCycle + 0.5f;
		float L_752 = __this->get_headbobCycle_65();
		__this->set_nextStepTime_64(((float)il2cpp_codegen_add((float)L_752, (float)(0.5f))));
		// } else
		goto IL_16f6;
	}

IL_1679:
	{
		// if(headbobCycle > nextStepTime)
		float L_753 = __this->get_headbobCycle_65();
		float L_754 = __this->get_nextStepTime_64();
		if ((!(((float)L_753) > ((float)L_754))))
		{
			goto IL_16f6;
		}
	}
	{
		// nextStepTime = headbobCycle + 0.5f;
		float L_755 = __this->get_headbobCycle_65();
		__this->set_nextStepTime_64(((float)il2cpp_codegen_add((float)L_755, (float)(0.5f))));
		// int n = Random.Range(0, footStepSounds.Count);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_756 = __this->get_footStepSounds_82();
		NullCheck(L_756);
		int32_t L_757;
		L_757 = List_1_get_Count_m1C98EA9359999773111E0918F7CE4783B66413F1_inline(L_756, /*hidden argument*/List_1_get_Count_m1C98EA9359999773111E0918F7CE4783B66413F1_RuntimeMethod_var);
		int32_t L_758;
		L_758 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_757, /*hidden argument*/NULL);
		V_19 = L_758;
		// if(footStepSounds.Any()){ audioSource.PlayOneShot(footStepSounds[n],Volume/10); }
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_759 = __this->get_footStepSounds_82();
		bool L_760;
		L_760 = Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C(L_759, /*hidden argument*/Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C_RuntimeMethod_var);
		if (!L_760)
		{
			goto IL_16dd;
		}
	}
	{
		// if(footStepSounds.Any()){ audioSource.PlayOneShot(footStepSounds[n],Volume/10); }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_761 = __this->get_audioSource_77();
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_762 = __this->get_footStepSounds_82();
		int32_t L_763 = V_19;
		NullCheck(L_762);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_764;
		L_764 = List_1_get_Item_mE58237A66DC244F0D9956EF071E36DF135972BC2_inline(L_762, L_763, /*hidden argument*/List_1_get_Item_mE58237A66DC244F0D9956EF071E36DF135972BC2_RuntimeMethod_var);
		float L_765 = __this->get_Volume_79();
		NullCheck(L_761);
		AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024(L_761, L_764, ((float)((float)L_765/(float)(10.0f))), /*hidden argument*/NULL);
	}

IL_16dd:
	{
		// footStepSounds[n] = footStepSounds[0];
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_766 = __this->get_footStepSounds_82();
		int32_t L_767 = V_19;
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_768 = __this->get_footStepSounds_82();
		NullCheck(L_768);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_769;
		L_769 = List_1_get_Item_mE58237A66DC244F0D9956EF071E36DF135972BC2_inline(L_768, 0, /*hidden argument*/List_1_get_Item_mE58237A66DC244F0D9956EF071E36DF135972BC2_RuntimeMethod_var);
		NullCheck(L_766);
		List_1_set_Item_mC47650E4AF39DD6B43071C391231486FB338728E(L_766, L_767, L_769, /*hidden argument*/List_1_set_Item_mC47650E4AF39DD6B43071C391231486FB338728E_RuntimeMethod_var);
	}

IL_16f6:
	{
		// previousGrounded = true;
		__this->set_previousGrounded_76((bool)1);
		// } else
		goto IL_184c;
	}

IL_1702:
	{
		// if(previousGrounded)
		bool L_770 = __this->get_previousGrounded_76();
		if (!L_770)
		{
			goto IL_1734;
		}
	}
	{
		// if(jumpSound){ audioSource.PlayOneShot(jumpSound,Volume/10); }
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_771 = __this->get_jumpSound_80();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_772;
		L_772 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_771, /*hidden argument*/NULL);
		if (!L_772)
		{
			goto IL_1734;
		}
	}
	{
		// if(jumpSound){ audioSource.PlayOneShot(jumpSound,Volume/10); }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_773 = __this->get_audioSource_77();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_774 = __this->get_jumpSound_80();
		float L_775 = __this->get_Volume_79();
		NullCheck(L_773);
		AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024(L_773, L_774, ((float)((float)L_775/(float)(10.0f))), /*hidden argument*/NULL);
	}

IL_1734:
	{
		// previousGrounded = false;
		__this->set_previousGrounded_76((bool)0);
		// } else
		goto IL_184c;
	}

IL_1740:
	{
		// if(IsGrounded)
		bool L_776;
		L_776 = FirstPersonAIO_get_IsGrounded_m88E20AEA65897F31566FE87E03C32DF808A55EAD_inline(__this, /*hidden argument*/NULL);
		if (!L_776)
		{
			goto IL_1813;
		}
	}
	{
		// if(!previousGrounded)
		bool L_777 = __this->get_previousGrounded_76();
		if (L_777)
		{
			goto IL_1791;
		}
	}
	{
		// if(landSound) { audioSource.PlayOneShot(landSound,Volume/10); }
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_778 = __this->get_landSound_81();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_779;
		L_779 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_778, /*hidden argument*/NULL);
		if (!L_779)
		{
			goto IL_177d;
		}
	}
	{
		// if(landSound) { audioSource.PlayOneShot(landSound,Volume/10); }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_780 = __this->get_audioSource_77();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_781 = __this->get_landSound_81();
		float L_782 = __this->get_Volume_79();
		NullCheck(L_780);
		AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024(L_780, L_781, ((float)((float)L_782/(float)(10.0f))), /*hidden argument*/NULL);
	}

IL_177d:
	{
		// nextStepTime = headbobCycle + 0.5f;
		float L_783 = __this->get_headbobCycle_65();
		__this->set_nextStepTime_64(((float)il2cpp_codegen_add((float)L_783, (float)(0.5f))));
		// } else
		goto IL_180a;
	}

IL_1791:
	{
		// if(headbobCycle > nextStepTime)
		float L_784 = __this->get_headbobCycle_65();
		float L_785 = __this->get_nextStepTime_64();
		if ((!(((float)L_784) > ((float)L_785))))
		{
			goto IL_180a;
		}
	}
	{
		// nextStepTime = headbobCycle + 0.5f;
		float L_786 = __this->get_headbobCycle_65();
		__this->set_nextStepTime_64(((float)il2cpp_codegen_add((float)L_786, (float)(0.5f))));
		// int n = Random.Range(0, footStepSounds.Count);
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_787 = __this->get_footStepSounds_82();
		NullCheck(L_787);
		int32_t L_788;
		L_788 = List_1_get_Count_m1C98EA9359999773111E0918F7CE4783B66413F1_inline(L_787, /*hidden argument*/List_1_get_Count_m1C98EA9359999773111E0918F7CE4783B66413F1_RuntimeMethod_var);
		int32_t L_789;
		L_789 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_788, /*hidden argument*/NULL);
		V_20 = L_789;
		// if(footStepSounds.Any() && footStepSounds[n] != null){ audioSource.PlayOneShot(footStepSounds[n],Volume/10);}
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_790 = __this->get_footStepSounds_82();
		bool L_791;
		L_791 = Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C(L_790, /*hidden argument*/Enumerable_Any_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m38D195B854934B5CA0F56B529CCD68F64E76B32C_RuntimeMethod_var);
		if (!L_791)
		{
			goto IL_180a;
		}
	}
	{
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_792 = __this->get_footStepSounds_82();
		int32_t L_793 = V_20;
		NullCheck(L_792);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_794;
		L_794 = List_1_get_Item_mE58237A66DC244F0D9956EF071E36DF135972BC2_inline(L_792, L_793, /*hidden argument*/List_1_get_Item_mE58237A66DC244F0D9956EF071E36DF135972BC2_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_795;
		L_795 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_794, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_795)
		{
			goto IL_180a;
		}
	}
	{
		// if(footStepSounds.Any() && footStepSounds[n] != null){ audioSource.PlayOneShot(footStepSounds[n],Volume/10);}
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_796 = __this->get_audioSource_77();
		List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 * L_797 = __this->get_footStepSounds_82();
		int32_t L_798 = V_20;
		NullCheck(L_797);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_799;
		L_799 = List_1_get_Item_mE58237A66DC244F0D9956EF071E36DF135972BC2_inline(L_797, L_798, /*hidden argument*/List_1_get_Item_mE58237A66DC244F0D9956EF071E36DF135972BC2_RuntimeMethod_var);
		float L_800 = __this->get_Volume_79();
		NullCheck(L_796);
		AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024(L_796, L_799, ((float)((float)L_800/(float)(10.0f))), /*hidden argument*/NULL);
	}

IL_180a:
	{
		// previousGrounded = true;
		__this->set_previousGrounded_76((bool)1);
		// } else
		goto IL_184c;
	}

IL_1813:
	{
		// if(previousGrounded)
		bool L_801 = __this->get_previousGrounded_76();
		if (!L_801)
		{
			goto IL_1845;
		}
	}
	{
		// if(jumpSound) { audioSource.PlayOneShot(jumpSound,Volume/10); }
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_802 = __this->get_jumpSound_80();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_803;
		L_803 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_802, /*hidden argument*/NULL);
		if (!L_803)
		{
			goto IL_1845;
		}
	}
	{
		// if(jumpSound) { audioSource.PlayOneShot(jumpSound,Volume/10); }
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_804 = __this->get_audioSource_77();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_805 = __this->get_jumpSound_80();
		float L_806 = __this->get_Volume_79();
		NullCheck(L_804);
		AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024(L_804, L_805, ((float)((float)L_806/(float)(10.0f))), /*hidden argument*/NULL);
	}

IL_1845:
	{
		// previousGrounded = false;
		__this->set_previousGrounded_76((bool)0);
	}

IL_184c:
	{
		// IsGrounded = false;
		FirstPersonAIO_set_IsGrounded_m69D781D93A43E9FCB9FDFA8108DE2CA82E1C66AE_inline(__this, (bool)0, /*hidden argument*/NULL);
		// if(advanced.maxSlopeAngle>0){
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_807 = __this->get_advanced_46();
		NullCheck(L_807);
		float L_808 = L_807->get_maxSlopeAngle_3();
		if ((!(((float)L_808) > ((float)(0.0f)))))
		{
			goto IL_18b7;
		}
	}
	{
		// if(advanced.isTouchingFlat || advanced.isTouchingWalkable || advanced.isTouchingUpright){didJump = false;}
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_809 = __this->get_advanced_46();
		NullCheck(L_809);
		bool L_810 = L_809->get_isTouchingFlat_6();
		if (L_810)
		{
			goto IL_188c;
		}
	}
	{
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_811 = __this->get_advanced_46();
		NullCheck(L_811);
		bool L_812 = L_811->get_isTouchingWalkable_4();
		if (L_812)
		{
			goto IL_188c;
		}
	}
	{
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_813 = __this->get_advanced_46();
		NullCheck(L_813);
		bool L_814 = L_813->get_isTouchingUpright_5();
		if (!L_814)
		{
			goto IL_1893;
		}
	}

IL_188c:
	{
		// if(advanced.isTouchingFlat || advanced.isTouchingWalkable || advanced.isTouchingUpright){didJump = false;}
		__this->set_didJump_36((bool)0);
	}

IL_1893:
	{
		// advanced.isTouchingWalkable = false;
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_815 = __this->get_advanced_46();
		NullCheck(L_815);
		L_815->set_isTouchingWalkable_4((bool)0);
		// advanced.isTouchingUpright = false;
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_816 = __this->get_advanced_46();
		NullCheck(L_816);
		L_816->set_isTouchingUpright_5((bool)0);
		// advanced.isTouchingFlat = false;
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_817 = __this->get_advanced_46();
		NullCheck(L_817);
		L_817->set_isTouchingFlat_6((bool)0);
	}

IL_18b7:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator FirstPersonAIO::CameraShake(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirstPersonAIO_CameraShake_m18F1DDF48017F87BDED4199A901C500ABBE0C0B6 (FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * __this, float ___Duration0, float ___Magnitude1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCameraShakeU3Ed__94_tA78701DAD782FD2C2768FC3C7F638BA8B9DE9D5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCameraShakeU3Ed__94_tA78701DAD782FD2C2768FC3C7F638BA8B9DE9D5A * L_0 = (U3CCameraShakeU3Ed__94_tA78701DAD782FD2C2768FC3C7F638BA8B9DE9D5A *)il2cpp_codegen_object_new(U3CCameraShakeU3Ed__94_tA78701DAD782FD2C2768FC3C7F638BA8B9DE9D5A_il2cpp_TypeInfo_var);
		U3CCameraShakeU3Ed__94__ctor_m24BBD535434B893830277068C29CE573E6A3D893(L_0, 0, /*hidden argument*/NULL);
		U3CCameraShakeU3Ed__94_tA78701DAD782FD2C2768FC3C7F638BA8B9DE9D5A * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CCameraShakeU3Ed__94_tA78701DAD782FD2C2768FC3C7F638BA8B9DE9D5A * L_2 = L_1;
		float L_3 = ___Duration0;
		NullCheck(L_2);
		L_2->set_Duration_4(L_3);
		U3CCameraShakeU3Ed__94_tA78701DAD782FD2C2768FC3C7F638BA8B9DE9D5A * L_4 = L_2;
		float L_5 = ___Magnitude1;
		NullCheck(L_4);
		L_4->set_Magnitude_3(L_5);
		return L_4;
	}
}
// System.Void FirstPersonAIO::RotateCamera(UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAIO_RotateCamera_mA97023F915A002594F8C5CB6F6AB303C6401893A (FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___Rotation0, bool ___Snap1, const RuntimeMethod* method)
{
	{
		// enableCameraMovement = !enableCameraMovement;
		bool L_0 = __this->get_enableCameraMovement_5();
		__this->set_enableCameraMovement_5((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// if(Snap){followAngles = Rotation;targetAngles = Rotation;}else{targetAngles = Rotation;}
		bool L_1 = ___Snap1;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// if(Snap){followAngles = Rotation;targetAngles = Rotation;}else{targetAngles = Rotation;}
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___Rotation0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_2, /*hidden argument*/NULL);
		__this->set_followAngles_24(L_3);
		// if(Snap){followAngles = Rotation;targetAngles = Rotation;}else{targetAngles = Rotation;}
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___Rotation0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_4, /*hidden argument*/NULL);
		__this->set_targetAngles_23(L_5);
		// if(Snap){followAngles = Rotation;targetAngles = Rotation;}else{targetAngles = Rotation;}
		goto IL_0038;
	}

IL_002c:
	{
		// if(Snap){followAngles = Rotation;targetAngles = Rotation;}else{targetAngles = Rotation;}
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___Rotation0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_6, /*hidden argument*/NULL);
		__this->set_targetAngles_23(L_7);
	}

IL_0038:
	{
		// enableCameraMovement = !enableCameraMovement;
		bool L_8 = __this->get_enableCameraMovement_5();
		__this->set_enableCameraMovement_5((bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0));
		// }
		return;
	}
}
// System.Void FirstPersonAIO::ControllerPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAIO_ControllerPause_m6C4EBED61137C53778F2AFC4992554C0D08DDCFD (FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * __this, const RuntimeMethod* method)
{
	int32_t G_B4_0 = 0;
	{
		// controllerPauseState = !controllerPauseState;
		bool L_0 = __this->get_controllerPauseState_4();
		__this->set_controllerPauseState_4((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// if(lockAndHideCursor){
		bool L_1 = __this->get_lockAndHideCursor_12();
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		// Cursor.lockState = controllerPauseState? CursorLockMode.None : CursorLockMode.Locked;
		bool L_2 = __this->get_controllerPauseState_4();
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		G_B4_0 = 1;
		goto IL_0023;
	}

IL_0022:
	{
		G_B4_0 = 0;
	}

IL_0023:
	{
		Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217(G_B4_0, /*hidden argument*/NULL);
		// Cursor.visible = controllerPauseState;
		bool L_3 = __this->get_controllerPauseState_4();
		Cursor_set_visible_m4747F0DC20D06D1932EC740C5CCC738C1664903D(L_3, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Single FirstPersonAIO::SlopeCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FirstPersonAIO_SlopeCheck_m88515C1547C37ABCFD4D153C507DC8BFFB6DE3E0 (FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// advanced.lastKnownSlopeAngle = Mathf.MoveTowards(advanced.lastKnownSlopeAngle, Vector3.Angle(advanced.curntGroundNormal, Vector3.up),5f);
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_0 = __this->get_advanced_46();
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_1 = __this->get_advanced_46();
		NullCheck(L_1);
		float L_2 = L_1->get_lastKnownSlopeAngle_13();
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_3 = __this->get_advanced_46();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = L_3->get_curntGroundNormal_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_6;
		L_6 = Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1(L_4, L_5, /*hidden argument*/NULL);
		float L_7;
		L_7 = Mathf_MoveTowards_mE0689B09DD10CD59A01EE9E24880A5BA495FD321(L_2, L_6, (5.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_lastKnownSlopeAngle_13(L_7);
		// return new AnimationCurve(new Keyframe(-90.0f, 1.0f), new Keyframe(0.0f, 1.0f), new Keyframe(advanced.maxSlopeAngle+15, 0f),new Keyframe(advanced.maxWallShear, 0.0f),new Keyframe(advanced.maxWallShear+0.1f, 1.0f),new Keyframe(90, 1.0f)){preWrapMode = WrapMode.Clamp, postWrapMode = WrapMode.ClampForever}.Evaluate(advanced.lastKnownSlopeAngle);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_8 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)6);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_9 = L_8;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_10), (-90.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_10);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_11 = L_9;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_12), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_12);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_13 = L_11;
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_14 = __this->get_advanced_46();
		NullCheck(L_14);
		float L_15 = L_14->get_maxSlopeAngle_3();
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_16), ((float)il2cpp_codegen_add((float)L_15, (float)(15.0f))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_16);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_17 = L_13;
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_18 = __this->get_advanced_46();
		NullCheck(L_18);
		float L_19 = L_18->get_maxWallShear_7();
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_20), L_19, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_20);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_21 = L_17;
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_22 = __this->get_advanced_46();
		NullCheck(L_22);
		float L_23 = L_22->get_maxWallShear_7();
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_24), ((float)il2cpp_codegen_add((float)L_23, (float)(0.100000001f))), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_24);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_25 = L_21;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_26), (90.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(5), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_26);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_27 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0(L_27, L_25, /*hidden argument*/NULL);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_28 = L_27;
		NullCheck(L_28);
		AnimationCurve_set_preWrapMode_m39008E29D7419438020138A0DE50999BB89266AF(L_28, 1, /*hidden argument*/NULL);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_29 = L_28;
		NullCheck(L_29);
		AnimationCurve_set_postWrapMode_mC7079F70E85156F73D8BA2E06840F7E2BEDF8568(L_29, 8, /*hidden argument*/NULL);
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_30 = __this->get_advanced_46();
		NullCheck(L_30);
		float L_31 = L_30->get_lastKnownSlopeAngle_13();
		NullCheck(L_29);
		float L_32;
		L_32 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_29, L_31, /*hidden argument*/NULL);
		return L_32;
	}
}
// System.Void FirstPersonAIO::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAIO_OnCollisionEnter_m5EF4C0763590E4854EC08001340890B2259CE638 (FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___CollisionData0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// for(int i = 0; i<CollisionData.contactCount; i++){
		V_0 = 0;
		goto IL_0128;
	}

IL_0007:
	{
		// float a = Vector3.Angle(CollisionData.GetContact(i).normal, Vector3.up);
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_0 = ___CollisionData0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  L_2;
		L_2 = Collision_GetContact_mC002FC304B37450FC203319578C90AB56EA910F7(L_0, L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = ContactPoint_get_normal_m0561937E45F5356C7BB90D861422BD76B36D037A((ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 *)(&V_2), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_5;
		L_5 = Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// if(CollisionData.GetContact(i).point.y <  transform.position.y - ((capsule.height/2) - capsule.radius*0.95f)){
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_6 = ___CollisionData0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  L_8;
		L_8 = Collision_GetContact_mC002FC304B37450FC203319578C90AB56EA910F7(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = ContactPoint_get_point_mEA976D5E3BC57FAB78F68BE0AA17A97293AEA5BC((ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 *)(&V_2), /*hidden argument*/NULL);
		float L_10 = L_9.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_y_3();
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_14 = __this->get_capsule_47();
		NullCheck(L_14);
		float L_15;
		L_15 = CapsuleCollider_get_height_mD6CF93CB2C222F8E5B77D65B0356F8FD8005B526(L_14, /*hidden argument*/NULL);
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_16 = __this->get_capsule_47();
		NullCheck(L_16);
		float L_17;
		L_17 = CapsuleCollider_get_radius_m5746DDE5E6A099269FC9DAD253887C58E8A064D0(L_16, /*hidden argument*/NULL);
		if ((!(((float)L_10) < ((float)((float)il2cpp_codegen_subtract((float)L_13, (float)((float)il2cpp_codegen_subtract((float)((float)((float)L_15/(float)(2.0f))), (float)((float)il2cpp_codegen_multiply((float)L_17, (float)(0.949999988f)))))))))))
		{
			goto IL_0124;
		}
	}
	{
		// if(!IsGrounded){
		bool L_18;
		L_18 = FirstPersonAIO_get_IsGrounded_m88E20AEA65897F31566FE87E03C32DF808A55EAD_inline(__this, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_00a0;
		}
	}
	{
		// IsGrounded = true;
		FirstPersonAIO_set_IsGrounded_m69D781D93A43E9FCB9FDFA8108DE2CA82E1C66AE_inline(__this, (bool)1, /*hidden argument*/NULL);
		// advanced.stairMiniHop = false;
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_19 = __this->get_advanced_46();
		NullCheck(L_19);
		L_19->set_stairMiniHop_9((bool)0);
		// if(didJump && a <= 70){didJump = false;}
		bool L_20 = __this->get_didJump_36();
		if (!L_20)
		{
			goto IL_00a0;
		}
	}
	{
		float L_21 = V_1;
		if ((!(((float)L_21) <= ((float)(70.0f)))))
		{
			goto IL_00a0;
		}
	}
	{
		// if(didJump && a <= 70){didJump = false;}
		__this->set_didJump_36((bool)0);
	}

IL_00a0:
	{
		// if(advanced.maxSlopeAngle>0){
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_22 = __this->get_advanced_46();
		NullCheck(L_22);
		float L_23 = L_22->get_maxSlopeAngle_3();
		if ((!(((float)L_23) > ((float)(0.0f)))))
		{
			goto IL_0124;
		}
	}
	{
		// if(a<5.1f){advanced.isTouchingFlat = true; advanced.isTouchingWalkable = true;}
		float L_24 = V_1;
		if ((!(((float)L_24) < ((float)(5.0999999f)))))
		{
			goto IL_00d4;
		}
	}
	{
		// if(a<5.1f){advanced.isTouchingFlat = true; advanced.isTouchingWalkable = true;}
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_25 = __this->get_advanced_46();
		NullCheck(L_25);
		L_25->set_isTouchingFlat_6((bool)1);
		// if(a<5.1f){advanced.isTouchingFlat = true; advanced.isTouchingWalkable = true;}
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_26 = __this->get_advanced_46();
		NullCheck(L_26);
		L_26->set_isTouchingWalkable_4((bool)1);
		// if(a<5.1f){advanced.isTouchingFlat = true; advanced.isTouchingWalkable = true;}
		goto IL_010a;
	}

IL_00d4:
	{
		// else if(a<advanced.maxSlopeAngle+0.1f){advanced.isTouchingWalkable = true; /* IsGrounded = true; */}
		float L_27 = V_1;
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_28 = __this->get_advanced_46();
		NullCheck(L_28);
		float L_29 = L_28->get_maxSlopeAngle_3();
		if ((!(((float)L_27) < ((float)((float)il2cpp_codegen_add((float)L_29, (float)(0.100000001f)))))))
		{
			goto IL_00f6;
		}
	}
	{
		// else if(a<advanced.maxSlopeAngle+0.1f){advanced.isTouchingWalkable = true; /* IsGrounded = true; */}
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_30 = __this->get_advanced_46();
		NullCheck(L_30);
		L_30->set_isTouchingWalkable_4((bool)1);
		// else if(a<advanced.maxSlopeAngle+0.1f){advanced.isTouchingWalkable = true; /* IsGrounded = true; */}
		goto IL_010a;
	}

IL_00f6:
	{
		// else if(a<90){advanced.isTouchingUpright = true;}
		float L_31 = V_1;
		if ((!(((float)L_31) < ((float)(90.0f)))))
		{
			goto IL_010a;
		}
	}
	{
		// else if(a<90){advanced.isTouchingUpright = true;}
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_32 = __this->get_advanced_46();
		NullCheck(L_32);
		L_32->set_isTouchingUpright_5((bool)1);
	}

IL_010a:
	{
		// advanced.curntGroundNormal = CollisionData.GetContact(i).normal;
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_33 = __this->get_advanced_46();
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_34 = ___CollisionData0;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  L_36;
		L_36 = Collision_GetContact_mC002FC304B37450FC203319578C90AB56EA910F7(L_34, L_35, /*hidden argument*/NULL);
		V_2 = L_36;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = ContactPoint_get_normal_m0561937E45F5356C7BB90D861422BD76B36D037A((ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_33);
		L_33->set_curntGroundNormal_11(L_37);
	}

IL_0124:
	{
		// for(int i = 0; i<CollisionData.contactCount; i++){
		int32_t L_38 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_0128:
	{
		// for(int i = 0; i<CollisionData.contactCount; i++){
		int32_t L_39 = V_0;
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_40 = ___CollisionData0;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = Collision_get_contactCount_mE6A54C4202C2F652D05CA105000655D28B19C8CE(L_40, /*hidden argument*/NULL);
		if ((((int32_t)L_39) < ((int32_t)L_41)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FirstPersonAIO::OnCollisionStay(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAIO_OnCollisionStay_m5E8F8489AEAF55E8A93C4A946975DD31DD05BC37 (FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___CollisionData0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// for(int i = 0; i<CollisionData.contactCount; i++){
		V_0 = 0;
		goto IL_0111;
	}

IL_0007:
	{
		// float a = Vector3.Angle(CollisionData.GetContact(i).normal, Vector3.up);
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_0 = ___CollisionData0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  L_2;
		L_2 = Collision_GetContact_mC002FC304B37450FC203319578C90AB56EA910F7(L_0, L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = ContactPoint_get_normal_m0561937E45F5356C7BB90D861422BD76B36D037A((ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 *)(&V_2), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_5;
		L_5 = Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// if(CollisionData.GetContact(i).point.y <  transform.position.y - ((capsule.height/2) - capsule.radius*0.95f)){
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_6 = ___CollisionData0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  L_8;
		L_8 = Collision_GetContact_mC002FC304B37450FC203319578C90AB56EA910F7(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = ContactPoint_get_point_mEA976D5E3BC57FAB78F68BE0AA17A97293AEA5BC((ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 *)(&V_2), /*hidden argument*/NULL);
		float L_10 = L_9.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_y_3();
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_14 = __this->get_capsule_47();
		NullCheck(L_14);
		float L_15;
		L_15 = CapsuleCollider_get_height_mD6CF93CB2C222F8E5B77D65B0356F8FD8005B526(L_14, /*hidden argument*/NULL);
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_16 = __this->get_capsule_47();
		NullCheck(L_16);
		float L_17;
		L_17 = CapsuleCollider_get_radius_m5746DDE5E6A099269FC9DAD253887C58E8A064D0(L_16, /*hidden argument*/NULL);
		if ((!(((float)L_10) < ((float)((float)il2cpp_codegen_subtract((float)L_13, (float)((float)il2cpp_codegen_subtract((float)((float)((float)L_15/(float)(2.0f))), (float)((float)il2cpp_codegen_multiply((float)L_17, (float)(0.949999988f)))))))))))
		{
			goto IL_010d;
		}
	}
	{
		// if(!IsGrounded){
		bool L_18;
		L_18 = FirstPersonAIO_get_IsGrounded_m88E20AEA65897F31566FE87E03C32DF808A55EAD_inline(__this, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0089;
		}
	}
	{
		// IsGrounded = true;
		FirstPersonAIO_set_IsGrounded_m69D781D93A43E9FCB9FDFA8108DE2CA82E1C66AE_inline(__this, (bool)1, /*hidden argument*/NULL);
		// advanced.stairMiniHop = false;
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_19 = __this->get_advanced_46();
		NullCheck(L_19);
		L_19->set_stairMiniHop_9((bool)0);
	}

IL_0089:
	{
		// if(advanced.maxSlopeAngle>0){
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_20 = __this->get_advanced_46();
		NullCheck(L_20);
		float L_21 = L_20->get_maxSlopeAngle_3();
		if ((!(((float)L_21) > ((float)(0.0f)))))
		{
			goto IL_010d;
		}
	}
	{
		// if(a<5.1f){advanced.isTouchingFlat = true; advanced.isTouchingWalkable = true;}
		float L_22 = V_1;
		if ((!(((float)L_22) < ((float)(5.0999999f)))))
		{
			goto IL_00bd;
		}
	}
	{
		// if(a<5.1f){advanced.isTouchingFlat = true; advanced.isTouchingWalkable = true;}
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_23 = __this->get_advanced_46();
		NullCheck(L_23);
		L_23->set_isTouchingFlat_6((bool)1);
		// if(a<5.1f){advanced.isTouchingFlat = true; advanced.isTouchingWalkable = true;}
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_24 = __this->get_advanced_46();
		NullCheck(L_24);
		L_24->set_isTouchingWalkable_4((bool)1);
		// if(a<5.1f){advanced.isTouchingFlat = true; advanced.isTouchingWalkable = true;}
		goto IL_00f3;
	}

IL_00bd:
	{
		// else if(a<advanced.maxSlopeAngle+0.1f){advanced.isTouchingWalkable = true; /* IsGrounded = true; */}
		float L_25 = V_1;
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_26 = __this->get_advanced_46();
		NullCheck(L_26);
		float L_27 = L_26->get_maxSlopeAngle_3();
		if ((!(((float)L_25) < ((float)((float)il2cpp_codegen_add((float)L_27, (float)(0.100000001f)))))))
		{
			goto IL_00df;
		}
	}
	{
		// else if(a<advanced.maxSlopeAngle+0.1f){advanced.isTouchingWalkable = true; /* IsGrounded = true; */}
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_28 = __this->get_advanced_46();
		NullCheck(L_28);
		L_28->set_isTouchingWalkable_4((bool)1);
		// else if(a<advanced.maxSlopeAngle+0.1f){advanced.isTouchingWalkable = true; /* IsGrounded = true; */}
		goto IL_00f3;
	}

IL_00df:
	{
		// else if(a<90){advanced.isTouchingUpright = true;}
		float L_29 = V_1;
		if ((!(((float)L_29) < ((float)(90.0f)))))
		{
			goto IL_00f3;
		}
	}
	{
		// else if(a<90){advanced.isTouchingUpright = true;}
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_30 = __this->get_advanced_46();
		NullCheck(L_30);
		L_30->set_isTouchingUpright_5((bool)1);
	}

IL_00f3:
	{
		// advanced.curntGroundNormal = CollisionData.GetContact(i).normal;
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_31 = __this->get_advanced_46();
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_32 = ___CollisionData0;
		int32_t L_33 = V_0;
		NullCheck(L_32);
		ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  L_34;
		L_34 = Collision_GetContact_mC002FC304B37450FC203319578C90AB56EA910F7(L_32, L_33, /*hidden argument*/NULL);
		V_2 = L_34;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = ContactPoint_get_normal_m0561937E45F5356C7BB90D861422BD76B36D037A((ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_31);
		L_31->set_curntGroundNormal_11(L_35);
	}

IL_010d:
	{
		// for(int i = 0; i<CollisionData.contactCount; i++){
		int32_t L_36 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_0111:
	{
		// for(int i = 0; i<CollisionData.contactCount; i++){
		int32_t L_37 = V_0;
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_38 = ___CollisionData0;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = Collision_get_contactCount_mE6A54C4202C2F652D05CA105000655D28B19C8CE(L_38, /*hidden argument*/NULL);
		if ((((int32_t)L_37) < ((int32_t)L_39)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FirstPersonAIO::OnCollisionExit(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAIO_OnCollisionExit_m41CB05120125D838A210BA7881A1B3EA3C6669EC (FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___CollisionData0, const RuntimeMethod* method)
{
	{
		// IsGrounded = false;
		FirstPersonAIO_set_IsGrounded_m69D781D93A43E9FCB9FDFA8108DE2CA82E1C66AE_inline(__this, (bool)0, /*hidden argument*/NULL);
		// if(advanced.maxSlopeAngle>0){advanced.curntGroundNormal = Vector3.up; advanced.lastKnownSlopeAngle = 0; advanced.isTouchingWalkable = false; advanced.isTouchingUpright = false;}
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_0 = __this->get_advanced_46();
		NullCheck(L_0);
		float L_1 = L_0->get_maxSlopeAngle_3();
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		// if(advanced.maxSlopeAngle>0){advanced.curntGroundNormal = Vector3.up; advanced.lastKnownSlopeAngle = 0; advanced.isTouchingWalkable = false; advanced.isTouchingUpright = false;}
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_2 = __this->get_advanced_46();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_curntGroundNormal_11(L_3);
		// if(advanced.maxSlopeAngle>0){advanced.curntGroundNormal = Vector3.up; advanced.lastKnownSlopeAngle = 0; advanced.isTouchingWalkable = false; advanced.isTouchingUpright = false;}
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_4 = __this->get_advanced_46();
		NullCheck(L_4);
		L_4->set_lastKnownSlopeAngle_13((0.0f));
		// if(advanced.maxSlopeAngle>0){advanced.curntGroundNormal = Vector3.up; advanced.lastKnownSlopeAngle = 0; advanced.isTouchingWalkable = false; advanced.isTouchingUpright = false;}
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_5 = __this->get_advanced_46();
		NullCheck(L_5);
		L_5->set_isTouchingWalkable_4((bool)0);
		// if(advanced.maxSlopeAngle>0){advanced.curntGroundNormal = Vector3.up; advanced.lastKnownSlopeAngle = 0; advanced.isTouchingWalkable = false; advanced.isTouchingUpright = false;}
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_6 = __this->get_advanced_46();
		NullCheck(L_6);
		L_6->set_isTouchingUpright_5((bool)0);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void FirstPersonAIO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAIO__ctor_m9EB9E3B18BA1CC1D9D565BEDD21A95DCA6408701 (FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool enableCameraMovement = true;
		__this->set_enableCameraMovement_5((bool)1);
		// public float verticalRotationRange = 170;
		__this->set_verticalRotationRange_8((170.0f));
		// public float mouseSensitivity = 10;
		__this->set_mouseSensitivity_9((10.0f));
		// public  float   fOVToMouseSensitivity = 1;
		__this->set_fOVToMouseSensitivity_10((1.0f));
		// public float cameraSmoothing = 5f;
		__this->set_cameraSmoothing_11((5.0f));
		// public bool drawStaminaMeter = true;
		__this->set_drawStaminaMeter_18((bool)1);
		// public bool playerCanMove = true;
		__this->set_playerCanMove_27((bool)1);
		// public bool walkByDefault = true;
		__this->set_walkByDefault_28((bool)1);
		// public float walkSpeed = 4f;
		__this->set_walkSpeed_29((4.0f));
		// public KeyCode sprintKey = KeyCode.LeftShift;
		__this->set_sprintKey_30(((int32_t)304));
		// public float sprintSpeed = 8f;
		__this->set_sprintSpeed_31((8.0f));
		// public float jumpPower = 5f;
		__this->set_jumpPower_32((5.0f));
		// public bool canJump = true;
		__this->set_canJump_33((bool)1);
		// public bool useStamina = true;
		__this->set_useStamina_37((bool)1);
		// public float staminaDepletionSpeed = 5f;
		__this->set_staminaDepletionSpeed_38((5.0f));
		// public float staminaLevel = 50;
		__this->set_staminaLevel_39((50.0f));
		// public CrouchModifiers _crouchModifiers = new CrouchModifiers();
		CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96 * L_0 = (CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96 *)il2cpp_codegen_object_new(CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96_il2cpp_TypeInfo_var);
		CrouchModifiers__ctor_mE9A98F01D73F9A783A3099FEA0F918F588A8C09B(L_0, /*hidden argument*/NULL);
		__this->set__crouchModifiers_45(L_0);
		// public AdvancedSettings advanced = new AdvancedSettings();
		AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * L_1 = (AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE *)il2cpp_codegen_object_new(AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE_il2cpp_TypeInfo_var);
		AdvancedSettings__ctor_m481CC6D900BF5201E05EEEB15F130F1ECD3D9D37(L_1, /*hidden argument*/NULL);
		__this->set_advanced_46(L_1);
		// public bool useHeadbob = true;
		__this->set_useHeadbob_55((bool)1);
		// public bool snapHeadjointToCapsul = true;
		__this->set_snapHeadjointToCapsul_57((bool)1);
		// public float headbobFrequency = 1.5f;
		__this->set_headbobFrequency_58((1.5f));
		// public float headbobSwayAngle = 5f;
		__this->set_headbobSwayAngle_59((5.0f));
		// public float headbobHeight = 3f;
		__this->set_headbobHeight_60((3.0f));
		// public float headbobSideMovement =5f;
		__this->set_headbobSideMovement_61((5.0f));
		// public float jumpLandIntensity =3f;
		__this->set_jumpLandIntensity_62((3.0f));
		// private float nextStepTime = 0.5f;
		__this->set_nextStepTime_64((0.5f));
		// private float springElastic = 1.1f;
		__this->set_springElastic_69((1.10000002f));
		// private float springDampen = 0.8f;
		__this->set_springDampen_70((0.800000012f));
		// private float springVelocityThreshold = 0.05f;
		__this->set_springVelocityThreshold_71((0.0500000007f));
		// private float springPositionThreshold = 0.05f;
		__this->set_springPositionThreshold_72((0.0500000007f));
		// Vector3 previousVelocity = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_previousVelocity_74(L_2);
		// public bool enableAudioSFX = true;
		__this->set_enableAudioSFX_78((bool)1);
		// public float Volume = 5f;
		__this->set_Volume_79((5.0f));
		// public DynamicFootStep dynamicFootstep = new DynamicFootStep();
		DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * L_3 = (DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 *)il2cpp_codegen_object_new(DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125_il2cpp_TypeInfo_var);
		DynamicFootStep__ctor_m21CF656C7F4FFFDBC62FFEB0ACAB3F1C553D83BA(L_3, /*hidden argument*/NULL);
		__this->set_dynamicFootstep_84(L_3);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ObjectController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_Start_mA8D89923C9057F3A7BC95D874FA47D34F2C4213B (ObjectController_tEE8AA18007DEB85D79F9AC0438AC2FB36BFAF5CD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _startingPosition = transform.parent.localPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_1, /*hidden argument*/NULL);
		__this->set__startingPosition_11(L_2);
		// _myRenderer = GetComponent<Renderer>();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_3;
		L_3 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		__this->set__myRenderer_10(L_3);
		// SetMaterial(false);
		ObjectController_SetMaterial_mF4DF2222B39EC502F91056938CFFAA13AD4DE4C1(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ObjectController::TeleportRandomly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_TeleportRandomly_m0609E15B3460753A6538D1D7A0371DDA30E1B305 (ObjectController_tEE8AA18007DEB85D79F9AC0438AC2FB36BFAF5CD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// int sibIdx = transform.GetSiblingIndex();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// int numSibs = transform.parent.childCount;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// sibIdx = (sibIdx + Random.Range(1, numSibs)) % numSibs;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, L_6, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		V_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_7))%(int32_t)L_8));
		// GameObject randomSib = transform.parent.GetChild(sibIdx).gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_12, /*hidden argument*/NULL);
		// float angle = Random.Range(-Mathf.PI, Mathf.PI);
		float L_14;
		L_14 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-3.14159274f), (3.14159274f), /*hidden argument*/NULL);
		V_2 = L_14;
		// float distance = Random.Range(_minObjectDistance, _maxObjectDistance);
		float L_15;
		L_15 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((2.5f), (3.5f), /*hidden argument*/NULL);
		V_3 = L_15;
		// float height = Random.Range(_minObjectHeight, _maxObjectHeight);
		float L_16;
		L_16 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.5f), (3.5f), /*hidden argument*/NULL);
		V_4 = L_16;
		// Vector3 newPos = new Vector3(Mathf.Cos(angle) * distance, height,
		//                              Mathf.Sin(angle) * distance);
		float L_17 = V_2;
		float L_18;
		L_18 = cosf(L_17);
		float L_19 = V_3;
		float L_20 = V_4;
		float L_21 = V_2;
		float L_22;
		L_22 = sinf(L_21);
		float L_23 = V_3;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_5), ((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)), L_20, ((float)il2cpp_codegen_multiply((float)L_22, (float)L_23)), /*hidden argument*/NULL);
		// transform.parent.localPosition = newPos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = V_5;
		NullCheck(L_25);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_25, L_26, /*hidden argument*/NULL);
		// randomSib.SetActive(true);
		NullCheck(L_13);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)1, /*hidden argument*/NULL);
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_27, (bool)0, /*hidden argument*/NULL);
		// SetMaterial(false);
		ObjectController_SetMaterial_mF4DF2222B39EC502F91056938CFFAA13AD4DE4C1(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ObjectController::OnPointerEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_OnPointerEnter_mFA06A1FFFA451B1321791A1AB6A52615AD531773 (ObjectController_tEE8AA18007DEB85D79F9AC0438AC2FB36BFAF5CD * __this, const RuntimeMethod* method)
{
	{
		// SetMaterial(true);
		ObjectController_SetMaterial_mF4DF2222B39EC502F91056938CFFAA13AD4DE4C1(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ObjectController::OnPointerExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_OnPointerExit_mAFAE51E71479EA14AE801E61082A3010BE90BC6C (ObjectController_tEE8AA18007DEB85D79F9AC0438AC2FB36BFAF5CD * __this, const RuntimeMethod* method)
{
	{
		// SetMaterial(false);
		ObjectController_SetMaterial_mF4DF2222B39EC502F91056938CFFAA13AD4DE4C1(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ObjectController::OnPointerClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_OnPointerClick_mFD2C131A2887535B624F8203A4F05B7DA6267369 (ObjectController_tEE8AA18007DEB85D79F9AC0438AC2FB36BFAF5CD * __this, const RuntimeMethod* method)
{
	{
		// TeleportRandomly();
		ObjectController_TeleportRandomly_m0609E15B3460753A6538D1D7A0371DDA30E1B305(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ObjectController::SetMaterial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_SetMaterial_mF4DF2222B39EC502F91056938CFFAA13AD4DE4C1 (ObjectController_tEE8AA18007DEB85D79F9AC0438AC2FB36BFAF5CD * __this, bool ___gazedAt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * G_B4_0 = NULL;
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * G_B3_0 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B5_0 = NULL;
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * G_B5_1 = NULL;
	{
		// if (InactiveMaterial != null && GazedAtMaterial != null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_InactiveMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_GazedAtMaterial_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// _myRenderer.material = gazedAt ? GazedAtMaterial : InactiveMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_4 = __this->get__myRenderer_10();
		bool L_5 = ___gazedAt0;
		G_B3_0 = L_4;
		if (L_5)
		{
			G_B4_0 = L_4;
			goto IL_002d;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6 = __this->get_InactiveMaterial_4();
		G_B5_0 = L_6;
		G_B5_1 = G_B3_0;
		goto IL_0033;
	}

IL_002d:
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = __this->get_GazedAtMaterial_5();
		G_B5_0 = L_7;
		G_B5_1 = G_B4_0;
	}

IL_0033:
	{
		NullCheck(G_B5_1);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(G_B5_1, G_B5_0, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void ObjectController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController__ctor_m7F22B01157517689B2328035A4B87C2DAD3478F8 (ObjectController_tEE8AA18007DEB85D79F9AC0438AC2FB36BFAF5CD * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Boolean VrModeController::get__isScreenTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VrModeController_get__isScreenTouched_m72936928FB8C5DF4268F76BF164F02D2B10F5646 (VrModeController_tB06B91255F46A0456E69DDF20B0915136321030A * __this, const RuntimeMethod* method)
{
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began;
		int32_t L_0;
		L_0 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_1;
		L_1 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_001a:
	{
		return (bool)0;
	}
}
// System.Boolean VrModeController::get__isVrModeEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VrModeController_get__isVrModeEnabled_mF66A05F1018FEDB94A7010E2E3F714B4C91F5F96 (VrModeController_tB06B91255F46A0456E69DDF20B0915136321030A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return XRGeneralSettings.Instance.Manager.isInitializationComplete;
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_0;
		L_0 = XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68D_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_1;
		L_1 = XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = XRManagerSettings_get_isInitializationComplete_m1559C8B12004C52CBAC825FFE823C2C4DF7C719D_inline(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void VrModeController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_Start_mE853D09E112F95B6725D81945FBF80BAC5E80F59 (VrModeController_tB06B91255F46A0456E69DDF20B0915136321030A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t3945CE98308AD5031CC7F76B68A978B131AF9BE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _mainCamera = Camera.main;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		__this->set__mainCamera_5(L_0);
		// Screen.sleepTimeout = SleepTimeout.NeverSleep;
		Screen_set_sleepTimeout_mE9A766E696E76AC77EAADB4CA6412454577FCBB3((-1), /*hidden argument*/NULL);
		// Screen.brightness = 1.0f;
		Screen_set_brightness_mE6A1F1F8814A359B96179EEEEEA36537ECD40C58((1.0f), /*hidden argument*/NULL);
		// if (!Api.HasDeviceParams())
		IL2CPP_RUNTIME_CLASS_INIT(Api_t3945CE98308AD5031CC7F76B68A978B131AF9BE5_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Api_HasDeviceParams_mC256C45963FAC47F71868A2D72C55161BB3165A3(/*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		// Api.ScanDeviceParams();
		IL2CPP_RUNTIME_CLASS_INIT(Api_t3945CE98308AD5031CC7F76B68A978B131AF9BE5_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_mD4E0E493D754C1ACF73EECA7B44129DC82655F08(/*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void VrModeController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_Update_mEECA330B7CB845AFD609A6367AF8FB6A150FD210 (VrModeController_tB06B91255F46A0456E69DDF20B0915136321030A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t3945CE98308AD5031CC7F76B68A978B131AF9BE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_isVrModeEnabled)
		bool L_0;
		L_0 = VrModeController_get__isVrModeEnabled_mF66A05F1018FEDB94A7010E2E3F714B4C91F5F96(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		// if (Api.IsCloseButtonPressed)
		IL2CPP_RUNTIME_CLASS_INIT(Api_t3945CE98308AD5031CC7F76B68A978B131AF9BE5_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Api_get_IsCloseButtonPressed_mE1CF98528B97794A6C6F7AC22DD5035DE25EFC2F(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// ExitVR();
		VrModeController_ExitVR_m3559F6F2FBAE5D19998A9B51D0B22A765D451BFA(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// if (Api.IsGearButtonPressed)
		IL2CPP_RUNTIME_CLASS_INIT(Api_t3945CE98308AD5031CC7F76B68A978B131AF9BE5_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Api_get_IsGearButtonPressed_m71B3DC77C8053D0716A209115A3B85C2D6E16F57(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// Api.ScanDeviceParams();
		IL2CPP_RUNTIME_CLASS_INIT(Api_t3945CE98308AD5031CC7F76B68A978B131AF9BE5_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_mD4E0E493D754C1ACF73EECA7B44129DC82655F08(/*hidden argument*/NULL);
	}

IL_0021:
	{
		// Api.UpdateScreenParams();
		IL2CPP_RUNTIME_CLASS_INIT(Api_t3945CE98308AD5031CC7F76B68A978B131AF9BE5_il2cpp_TypeInfo_var);
		Api_UpdateScreenParams_m8D14F520A37843F4EE772033A7504E4723C379A2(/*hidden argument*/NULL);
		// }
		return;
	}

IL_0027:
	{
		// if (_isScreenTouched)
		bool L_3;
		L_3 = VrModeController_get__isScreenTouched_m72936928FB8C5DF4268F76BF164F02D2B10F5646(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// EnterVR();
		VrModeController_EnterVR_m6F15FBEF8EC065C24764BA6CD70573822018013F(__this, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void VrModeController::EnterVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_EnterVR_m6F15FBEF8EC065C24764BA6CD70573822018013F (VrModeController_tB06B91255F46A0456E69DDF20B0915136321030A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t3945CE98308AD5031CC7F76B68A978B131AF9BE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(StartXR());
		RuntimeObject* L_0;
		L_0 = VrModeController_StartXR_m3E9FF326A5B4CB0E1EB19F1321EE5C4B3F90C9BC(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// if (Api.HasNewDeviceParams())
		IL2CPP_RUNTIME_CLASS_INIT(Api_t3945CE98308AD5031CC7F76B68A978B131AF9BE5_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Api_HasNewDeviceParams_mD2F906E4FC4A9F70FA619D43C2A91ABFC99D5098(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// Api.ReloadDeviceParams();
		IL2CPP_RUNTIME_CLASS_INIT(Api_t3945CE98308AD5031CC7F76B68A978B131AF9BE5_il2cpp_TypeInfo_var);
		Api_ReloadDeviceParams_mB19615620DA55141449769ADF90976A75C16013C(/*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void VrModeController::ExitVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_ExitVR_m3559F6F2FBAE5D19998A9B51D0B22A765D451BFA (VrModeController_tB06B91255F46A0456E69DDF20B0915136321030A * __this, const RuntimeMethod* method)
{
	{
		// StopXR();
		VrModeController_StopXR_m9464911C38618B50214F493450600A39E7EFA11F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator VrModeController::StartXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VrModeController_StartXR_m3E9FF326A5B4CB0E1EB19F1321EE5C4B3F90C9BC (VrModeController_tB06B91255F46A0456E69DDF20B0915136321030A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartXRU3Ed__10_t058BBCB88A982308C334FFCC556D1E5495FCE500_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartXRU3Ed__10_t058BBCB88A982308C334FFCC556D1E5495FCE500 * L_0 = (U3CStartXRU3Ed__10_t058BBCB88A982308C334FFCC556D1E5495FCE500 *)il2cpp_codegen_object_new(U3CStartXRU3Ed__10_t058BBCB88A982308C334FFCC556D1E5495FCE500_il2cpp_TypeInfo_var);
		U3CStartXRU3Ed__10__ctor_mF343AAB11ACC5EB4DC599EE2CB804CE31A56B9D9(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void VrModeController::StopXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_StopXR_m9464911C38618B50214F493450600A39E7EFA11F (VrModeController_tB06B91255F46A0456E69DDF20B0915136321030A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A7B630B7137FE0D9A770BC44B619CE324CB5173);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C94361C3CF0648D05679FC64B7AD666F8D704CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9573E0F11BD7081DAAEACC92F301DBBC3F5D12BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B1958E6AE4057A73CD052F6EFFCC70AD0F447B4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Stopping XR...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9573E0F11BD7081DAAEACC92F301DBBC3F5D12BF, /*hidden argument*/NULL);
		// XRGeneralSettings.Instance.Manager.StopSubsystems();
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_0;
		L_0 = XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68D_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_1;
		L_1 = XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		XRManagerSettings_StopSubsystems_m7FF3553EEF8C7AB1D58A3D9034A25D8C31D30FFC(L_1, /*hidden argument*/NULL);
		// Debug.Log("XR stopped.");
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral2A7B630B7137FE0D9A770BC44B619CE324CB5173, /*hidden argument*/NULL);
		// Debug.Log("Deinitializing XR...");
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9B1958E6AE4057A73CD052F6EFFCC70AD0F447B4, /*hidden argument*/NULL);
		// XRGeneralSettings.Instance.Manager.DeinitializeLoader();
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_2;
		L_2 = XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68D_inline(/*hidden argument*/NULL);
		NullCheck(L_2);
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_3;
		L_3 = XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		XRManagerSettings_DeinitializeLoader_m6AD4F079818DF78946C99AD8D49E3D343DAAF290(L_3, /*hidden argument*/NULL);
		// Debug.Log("XR deinitialized.");
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral2C94361C3CF0648D05679FC64B7AD666F8D704CA, /*hidden argument*/NULL);
		// _mainCamera.ResetAspect();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4 = __this->get__mainCamera_5();
		NullCheck(L_4);
		Camera_ResetAspect_mC80AD4BC18EA0E1E05F9295B58B6E7A8DB9072C0(L_4, /*hidden argument*/NULL);
		// _mainCamera.fieldOfView = _defaultFieldOfView;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = __this->get__mainCamera_5();
		NullCheck(L_5);
		Camera_set_fieldOfView_m138FE103CAC4B803F39E4CF579609A5C3FEB5E49(L_5, (60.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VrModeController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController__ctor_mA3E66288FFE87992A48CB7FA23AE0531311DFEA8 (VrModeController_tB06B91255F46A0456E69DDF20B0915136321030A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void FirstPersonAIO/<CameraShake>d__94::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCameraShakeU3Ed__94__ctor_m24BBD535434B893830277068C29CE573E6A3D893 (U3CCameraShakeU3Ed__94_tA78701DAD782FD2C2768FC3C7F638BA8B9DE9D5A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void FirstPersonAIO/<CameraShake>d__94::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCameraShakeU3Ed__94_System_IDisposable_Dispose_m8AD4226BBDEFFE7B0F1E4CF0C174DC7E6690A41B (U3CCameraShakeU3Ed__94_tA78701DAD782FD2C2768FC3C7F638BA8B9DE9D5A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean FirstPersonAIO/<CameraShake>d__94::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCameraShakeU3Ed__94_MoveNext_mDFF351EA2A2256A73AD5402DA171DA04C9DA9125 (U3CCameraShakeU3Ed__94_tA78701DAD782FD2C2768FC3C7F638BA8B9DE9D5A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_00f2;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float elapsed =0;
		__this->set_U3CelapsedU3E5__2_5((0.0f));
		goto IL_00f9;
	}

IL_0039:
	{
		// playerCamera.transform.localPosition =Vector3.MoveTowards(playerCamera.transform.localPosition, new Vector3(cameraStartingPosition.x+ Random.Range(-1,1)*Magnitude,cameraStartingPosition.y+Random.Range(-1,1)*Magnitude,cameraStartingPosition.z), Magnitude*2);
		FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * L_3 = V_1;
		NullCheck(L_3);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4 = L_3->get_playerCamera_13();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * L_6 = V_1;
		NullCheck(L_6);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7 = L_6->get_playerCamera_13();
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_8, /*hidden argument*/NULL);
		FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * L_10 = V_1;
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = L_10->get_address_of_cameraStartingPosition_15();
		float L_12 = L_11->get_x_2();
		int32_t L_13;
		L_13 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A((-1), 1, /*hidden argument*/NULL);
		float L_14 = __this->get_Magnitude_3();
		FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * L_15 = V_1;
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_16 = L_15->get_address_of_cameraStartingPosition_15();
		float L_17 = L_16->get_y_3();
		int32_t L_18;
		L_18 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A((-1), 1, /*hidden argument*/NULL);
		float L_19 = __this->get_Magnitude_3();
		FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * L_20 = V_1;
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_21 = L_20->get_address_of_cameraStartingPosition_15();
		float L_22 = L_21->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_12, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_13)), (float)L_14)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_18)), (float)L_19)))), L_22, /*hidden argument*/NULL);
		float L_24 = __this->get_Magnitude_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_9, L_23, ((float)il2cpp_codegen_multiply((float)L_24, (float)(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_5, L_25, /*hidden argument*/NULL);
		// yield return new WaitForSecondsRealtime(0.001f);
		WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * L_26 = (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 *)il2cpp_codegen_object_new(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225(L_26, (0.00100000005f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_26);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00c9:
	{
		__this->set_U3CU3E1__state_0((-1));
		// elapsed += Time.deltaTime;
		float L_27 = __this->get_U3CelapsedU3E5__2_5();
		float L_28;
		L_28 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CelapsedU3E5__2_5(((float)il2cpp_codegen_add((float)L_27, (float)L_28)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00f2:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00f9:
	{
		// while(elapsed<Duration && enableCameraShake){
		float L_29 = __this->get_U3CelapsedU3E5__2_5();
		float L_30 = __this->get_Duration_4();
		if ((!(((float)L_29) < ((float)L_30))))
		{
			goto IL_0112;
		}
	}
	{
		FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * L_31 = V_1;
		NullCheck(L_31);
		bool L_32 = L_31->get_enableCameraShake_14();
		if (L_32)
		{
			goto IL_0039;
		}
	}

IL_0112:
	{
		// playerCamera.transform.localPosition = cameraStartingPosition;
		FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * L_33 = V_1;
		NullCheck(L_33);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_34 = L_33->get_playerCamera_13();
		NullCheck(L_34);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_34, /*hidden argument*/NULL);
		FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * L_36 = V_1;
		NullCheck(L_36);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = L_36->get_cameraStartingPosition_15();
		NullCheck(L_35);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_35, L_37, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object FirstPersonAIO/<CameraShake>d__94::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCameraShakeU3Ed__94_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD0E4864E7A2C8C9DC31DFBF8A9C6C29199341DAB (U3CCameraShakeU3Ed__94_tA78701DAD782FD2C2768FC3C7F638BA8B9DE9D5A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void FirstPersonAIO/<CameraShake>d__94::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCameraShakeU3Ed__94_System_Collections_IEnumerator_Reset_mF2390502361D9467DE673CEF8AE36DD6BBB475ED (U3CCameraShakeU3Ed__94_tA78701DAD782FD2C2768FC3C7F638BA8B9DE9D5A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCameraShakeU3Ed__94_System_Collections_IEnumerator_Reset_mF2390502361D9467DE673CEF8AE36DD6BBB475ED_RuntimeMethod_var)));
	}
}
// System.Object FirstPersonAIO/<CameraShake>d__94::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCameraShakeU3Ed__94_System_Collections_IEnumerator_get_Current_m7BF233FD1481D1D1ED94718F77DAC11C2561EEA7 (U3CCameraShakeU3Ed__94_tA78701DAD782FD2C2768FC3C7F638BA8B9DE9D5A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void FirstPersonAIO/AdvancedSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancedSettings__ctor_m481CC6D900BF5201E05EEEB15F130F1ECD3D9D37 (AdvancedSettings_tC4B52B7E4743F7F96CBFAC43DC2941378670F7AE * __this, const RuntimeMethod* method)
{
	{
		// public float gravityMultiplier = 1.0f;
		__this->set_gravityMultiplier_0((1.0f));
		// public float maxSlopeAngle = 55;
		__this->set_maxSlopeAngle_3((55.0f));
		// public float maxWallShear = 89;
		__this->set_maxWallShear_7((89.0f));
		// public float maxStepHeight = 0.2f;
		__this->set_maxStepHeight_8((0.200000003f));
		// public float FOVKickAmount = 2.5f;
		__this->set_FOVKickAmount_14((2.5f));
		// public float changeTime = 0.75f;
		__this->set_changeTime_15((0.75f));
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
// System.Void FirstPersonAIO/CrouchModifiers::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrouchModifiers__ctor_mE9A98F01D73F9A783A3099FEA0F918F588A8C09B (CrouchModifiers_t97488025773653CFD08D2589DDD069AF5B07AF96 * __this, const RuntimeMethod* method)
{
	{
		// public bool useCrouch = true;
		__this->set_useCrouch_0((bool)1);
		// public KeyCode crouchKey = KeyCode.LeftControl;
		__this->set_crouchKey_2(((int32_t)306));
		// public float crouchWalkSpeedMultiplier = 0.5f;
		__this->set_crouchWalkSpeedMultiplier_3((0.5f));
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
// System.Void FirstPersonAIO/DynamicFootStep::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicFootStep__ctor_m21CF656C7F4FFFDBC62FFEB0ACAB3F1C553D83BA (DynamicFootStep_t491EC4ECC24BECB0C78AE4B860892D7240821125 * __this, const RuntimeMethod* method)
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
// System.Void VrModeController/<StartXR>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRU3Ed__10__ctor_mF343AAB11ACC5EB4DC599EE2CB804CE31A56B9D9 (U3CStartXRU3Ed__10_t058BBCB88A982308C334FFCC556D1E5495FCE500 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void VrModeController/<StartXR>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRU3Ed__10_System_IDisposable_Dispose_m3564EBC2B3A1FFF341D8064161C5E0609BD6A06F (U3CStartXRU3Ed__10_t058BBCB88A982308C334FFCC556D1E5495FCE500 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean VrModeController/<StartXR>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartXRU3Ed__10_MoveNext_m83FA5ABF40268E8BBFAC61A360F97F648EC841D0 (U3CStartXRU3Ed__10_t058BBCB88A982308C334FFCC556D1E5495FCE500 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1690F87675D46404DB6EEBA8A4B18F2A7FD4611D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38396B3F6667C28970D73F84E06D0DCE797FDEB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61CFB84C83B441479C0A89B64CDD931B45CCA6ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral747530FAD2C7DF5B08668539364CCC2CD2B5AFC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF171607C5CF88EC109EFE87AEB48F82DFCE3449);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Debug.Log("Initializing XR...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral1690F87675D46404DB6EEBA8A4B18F2A7FD4611D, /*hidden argument*/NULL);
		// yield return XRGeneralSettings.Instance.Manager.InitializeLoader();
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_3;
		L_3 = XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68D_inline(/*hidden argument*/NULL);
		NullCheck(L_3);
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_4;
		L_4 = XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = XRManagerSettings_InitializeLoader_m92B987C89AF6F7E7D05718296243E0ED021FD6B3(L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (XRGeneralSettings.Instance.Manager.activeLoader == null)
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_6;
		L_6 = XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68D_inline(/*hidden argument*/NULL);
		NullCheck(L_6);
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_7;
		L_7 = XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_8;
		L_8 = XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0069;
		}
	}
	{
		// Debug.LogError("Initializing XR Failed.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral747530FAD2C7DF5B08668539364CCC2CD2B5AFC2, /*hidden argument*/NULL);
		// }
		goto IL_0096;
	}

IL_0069:
	{
		// Debug.Log("XR initialized.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral38396B3F6667C28970D73F84E06D0DCE797FDEB8, /*hidden argument*/NULL);
		// Debug.Log("Starting XR...");
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralAF171607C5CF88EC109EFE87AEB48F82DFCE3449, /*hidden argument*/NULL);
		// XRGeneralSettings.Instance.Manager.StartSubsystems();
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_10;
		L_10 = XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68D_inline(/*hidden argument*/NULL);
		NullCheck(L_10);
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_11;
		L_11 = XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		XRManagerSettings_StartSubsystems_mB9F502956C1FC6AD6D421CD36C3980B095B4282E(L_11, /*hidden argument*/NULL);
		// Debug.Log("XR started.");
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral61CFB84C83B441479C0A89B64CDD931B45CCA6ED, /*hidden argument*/NULL);
	}

IL_0096:
	{
		// }
		return (bool)0;
	}
}
// System.Object VrModeController/<StartXR>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartXRU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m42D60279BF2FBE6A7B98DB1CAC2055C01BD24B58 (U3CStartXRU3Ed__10_t058BBCB88A982308C334FFCC556D1E5495FCE500 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void VrModeController/<StartXR>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRU3Ed__10_System_Collections_IEnumerator_Reset_mB9FC26327447A2E4DA95BCADE6C7C48B25994317 (U3CStartXRU3Ed__10_t058BBCB88A982308C334FFCC556D1E5495FCE500 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartXRU3Ed__10_System_Collections_IEnumerator_Reset_mB9FC26327447A2E4DA95BCADE6C7C48B25994317_RuntimeMethod_var)));
	}
}
// System.Object VrModeController/<StartXR>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartXRU3Ed__10_System_Collections_IEnumerator_get_Current_mF8108A377FD1D678FB408319943C30A6AECBE607 (U3CStartXRU3Ed__10_t058BBCB88A982308C334FFCC556D1E5495FCE500 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirstPersonAIO_set_IsGrounded_m69D781D93A43E9FCB9FDFA8108DE2CA82E1C66AE_inline (FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsGrounded { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsGroundedU3Ek__BackingField_48(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasScaler_set_uiScaleMode_m75D0DFC352DB3934976F081732AB03CFB7565568_inline (CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ScaleMode uiScaleMode { get { return m_UiScaleMode; } set { m_UiScaleMode = value; } }
		int32_t L_0 = ___value0;
		__this->set_m_UiScaleMode_4(L_0);
		// public ScaleMode uiScaleMode { get { return m_UiScaleMode; } set { m_UiScaleMode = value; } }
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_MoveTowards_mB3246CB07E59ED7D960C5C245DB7CCEB1F17B7E2_inline (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___current0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	bool V_6 = false;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___target1;
		float L_1 = L_0.get_x_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2 = ___current0;
		float L_3 = L_2.get_x_1();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4 = ___target1;
		float L_5 = L_4.get_y_2();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6 = ___current0;
		float L_7 = L_6.get_y_2();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_8 = ___target1;
		float L_9 = L_8.get_z_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_10 = ___current0;
		float L_11 = L_10.get_z_3();
		V_2 = ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12 = ___target1;
		float L_13 = L_12.get_w_4();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_14 = ___current0;
		float L_15 = L_14.get_w_4();
		V_3 = ((float)il2cpp_codegen_subtract((float)L_13, (float)L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_16, (float)L_17)), (float)((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)))), (float)((float)il2cpp_codegen_multiply((float)L_20, (float)L_21)))), (float)((float)il2cpp_codegen_multiply((float)L_22, (float)L_23))));
		float L_24 = V_4;
		if ((((float)L_24) == ((float)(0.0f))))
		{
			goto IL_006a;
		}
	}
	{
		float L_25 = ___maxDistanceDelta2;
		if ((!(((float)L_25) >= ((float)(0.0f)))))
		{
			goto IL_0067;
		}
	}
	{
		float L_26 = V_4;
		float L_27 = ___maxDistanceDelta2;
		float L_28 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_26) <= ((float)((float)il2cpp_codegen_multiply((float)L_27, (float)L_28)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0068;
	}

IL_0067:
	{
		G_B4_0 = 0;
	}

IL_0068:
	{
		G_B6_0 = G_B4_0;
		goto IL_006b;
	}

IL_006a:
	{
		G_B6_0 = 1;
	}

IL_006b:
	{
		V_6 = (bool)G_B6_0;
		bool L_29 = V_6;
		if (!L_29)
		{
			goto IL_0076;
		}
	}
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_30 = ___target1;
		V_7 = L_30;
		goto IL_00be;
	}

IL_0076:
	{
		float L_31 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_32;
		L_32 = sqrt(((double)((double)L_31)));
		V_5 = ((float)((float)L_32));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_33 = ___current0;
		float L_34 = L_33.get_x_1();
		float L_35 = V_0;
		float L_36 = V_5;
		float L_37 = ___maxDistanceDelta2;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_38 = ___current0;
		float L_39 = L_38.get_y_2();
		float L_40 = V_1;
		float L_41 = V_5;
		float L_42 = ___maxDistanceDelta2;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_43 = ___current0;
		float L_44 = L_43.get_z_3();
		float L_45 = V_2;
		float L_46 = V_5;
		float L_47 = ___maxDistanceDelta2;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_48 = ___current0;
		float L_49 = L_48.get_w_4();
		float L_50 = V_3;
		float L_51 = V_5;
		float L_52 = ___maxDistanceDelta2;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_53;
		memset((&L_53), 0, sizeof(L_53));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_53), ((float)il2cpp_codegen_add((float)L_34, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_35/(float)L_36)), (float)L_37)))), ((float)il2cpp_codegen_add((float)L_39, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_40/(float)L_41)), (float)L_42)))), ((float)il2cpp_codegen_add((float)L_44, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_45/(float)L_46)), (float)L_47)))), ((float)il2cpp_codegen_add((float)L_49, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_50/(float)L_51)), (float)L_52)))), /*hidden argument*/NULL);
		V_7 = L_53;
		goto IL_00be;
	}

IL_00be:
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_54 = V_7;
		return L_54;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FirstPersonAIO_get_IsGrounded_m88E20AEA65897F31566FE87E03C32DF808A55EAD_inline (FirstPersonAIO_tAE82BB16461E6DF14EFCB5E9F85AE271BAA71D92 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsGrounded { get; private set; }
		bool L_0 = __this->get_U3CIsGroundedU3Ek__BackingField_48();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68D_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_RuntimeSettingsInstance;
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_0 = ((XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var))->get_s_RuntimeSettingsInstance_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_LoaderManagerInstance; }
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_0 = __this->get_m_LoaderManagerInstance_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRManagerSettings_get_isInitializationComplete_m1559C8B12004C52CBAC825FFE823C2C4DF7C719D_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	{
		// get { return m_InitializationComplete; }
		bool L_0 = __this->get_m_InitializationComplete_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	{
		// public XRLoader activeLoader { get; private set; }
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_0 = __this->get_U3CactiveLoaderU3Ek__BackingField_10();
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
		return (RuntimeObject *)L_4;
	}
}
