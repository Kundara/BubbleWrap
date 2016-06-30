struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityAds();
	RegisterModule_UnityAds();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 75 classes
	//0. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//1. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//4. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//5. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//6. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//7. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//8. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//9. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//10. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//11. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//12. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//13. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//14. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//15. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//16. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//17. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//18. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//19. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//20. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//21. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//22. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//23. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//24. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//25. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//26. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//27. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//28. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//29. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//30. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//31. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//32. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//33. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//34. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//35. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//36. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//37. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//38. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//39. UnityAnalyticsManager
	void RegisterClass_UnityAnalyticsManager();
	RegisterClass_UnityAnalyticsManager();

	//40. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//41. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//42. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//43. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//44. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//45. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//46. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//47. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//48. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//49. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//50. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//51. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//52. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//53. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//54. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//55. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//56. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//57. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//58. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//59. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//60. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//61. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//62. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//63. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//64. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//65. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//66. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//67. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//68. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//69. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//70. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//71. UnityAdsSettings
	void RegisterClass_UnityAdsSettings();
	RegisterClass_UnityAdsSettings();

	//72. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//73. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//74. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
