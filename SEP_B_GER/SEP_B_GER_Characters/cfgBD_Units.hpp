class SEP_B_GER_BD_Rflmn_K98 : B_Soldier_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (K98)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_Rflmn_K98.jpg";
	
	identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
	genericNames = "HispanicMen";
  
	uniformClass = "SEP_B_GER_U_FieldUniform_BD_Unblsd";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_BD_Rflmn_Lite : B_Soldier_lite_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman, Light";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_Rflmn_Lite.jpg";
	
	identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
	genericNames = "HispanicMen";
  
	uniformClass = "SEP_B_GER_U_FieldUniform_BD_Unblsd";

	linkedItems[] = {"H_SPE_GER_Cap","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Cap","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};	

class SEP_B_GER_BD_Rflmn_Flame : B_Soldier_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (Flammenwerfer 41)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_Rflmn_Flame.jpg";
	
	identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
	genericNames = "HispanicMen";
  
	uniformClass = "SEP_B_GER_U_FieldUniform_BD_Unblsd";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","G_SPE_Dust_Goggles_2","V_SPE_GER_FWOVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","G_SPE_Dust_Goggles_2","V_SPE_GER_FWOVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};

	magazines[] = {MAG_4(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_4(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Flammenwerfer_41";
};
	
class SEP_B_GER_BD_Rflmn_Unr : B_Soldier_unarmed_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman, Unarmed";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_Rflmn_Unr.jpg";

	identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
	genericNames = "HispanicMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_BD_Unblsd";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_BD_Gren : B_Soldier_GL_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Grenadier";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_Gren.jpg";

	identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
	genericNames = "HispanicMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_BD_Unblsd";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98_GW","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_GW","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_BD_MG_MG34 : B_support_MG_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Machine Gunner (MG 34)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_MG_MG34.jpg";

	identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
	genericNames = "HispanicMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_BD_Unblsd";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Backpack_MGAmmo";
};

class SEP_B_GER_BD_AMG : B_support_AMG_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Asst. Machine Gunner";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_AMG.jpg";

	identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
	genericNames = "HispanicMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_BD_Unblsd";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
	
	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};

	backpack = "B_SPE_GER_Backpack_MGAmmo";
};

class SEP_B_GER_BD_MG_MG42 : B_support_MG_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Machine Gunner (MG 42)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_MG_MG42.jpg";

	identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
	genericNames = "HispanicMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_BD_Unblsd";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Backpack_MGAmmo";
};
	
class SEP_B_GER_BD_SL : B_Soldier_SL_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Squad Leader";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_SL.jpg";

	identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
	genericNames = "HispanicMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_BD_Unblsd_Unter";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_A_frame";
};

class SEP_B_GER_BD_ASL : B_Soldier_TL_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Asst. Squad Leader";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_SL.jpg";

	identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
	genericNames = "HispanicMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_BD_Unblsd_Gefr";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag";
};

class SEP_B_GER_BD_Sniper : B_sniper_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sniper";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_Sniper.jpg";

	identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
	genericNames = "HispanicMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_BD_Unblsd";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98ZF39","Put","Throw"};
	respawnWeapons[] = {"SPE_K98ZF39","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_BD_AT_Faust : B_soldier_AT_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "AT Soldier (Faustpatrone)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_Rflmn_K98.jpg";   

	identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
	genericNames = "HispanicMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_BD_Unblsd";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw","SPE_Faustpatrone"};
	respawnWeapons[] = {"SPE_K98","Put","Throw","SPE_Faustpatrone"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_Faustpatrone),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_Faustpatrone),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Pzf_Belt_bag_zelt_KleinLoaded";
};

class SEP_B_GER_BD_AT_Grenadier : B_Soldier_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "AT soldier (AT Grenade)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_Rflmn_K98.jpg";
	
	identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
	genericNames = "HispanicMen";
  
	uniformClass = "SEP_B_GER_U_FieldUniform_BD_Unblsd";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24x7)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24x7)};
	
	backpack = "B_SPE_GER_A_frame_AT";
};

class SEP_B_GER_BD_AT_PZ30 : B_soldier_AT_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "AT Soldier (Panzerfaust 30)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_AT_PZ30.jpg";   

	identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
	genericNames = "HispanicMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_BD_Unblsd";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw","SPE_PzFaust_30m"};
	respawnWeapons[] = {"SPE_K98","Put","Throw","SPE_PzFaust_30m"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_30m),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_30m),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_BD_AT_PZ60 : B_soldier_AT_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "AT Soldier (Panzerfaust 60)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_AT_PZ60.jpg";   

	identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
	genericNames = "HispanicMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_BD_Unblsd";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw","SPE_PzFaust_60m"};
	respawnWeapons[] = {"SPE_K98","Put","Throw","SPE_PzFaust_60m"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_BD_AT_PZShreck : B_soldier_AT_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "AT Soldier (Panzerschreck)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_Rflmn_K98.jpg";   

	identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
	genericNames = "HispanicMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_BD_Unblsd";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw","SPE_RPzB_54"};
	respawnWeapons[] = {"SPE_K98","Put","Throw","SPE_RPzB_54"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_RPzBGr_4322),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_RPzBGr_4322),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_RPzB_Belt_bag_zelt_Loaded";
};
		
class SEP_B_GER_BD_Medic : B_medic_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Medic";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_Medic.jpg";

	identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
	genericNames = "HispanicMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_BD_Unblsd";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_SaniVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_SaniVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_US_M18_Violet)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_US_M18_Violet)};
	
	backpack = "B_SPE_GER_MedicBackpack";
};

class SEP_B_GER_BD_Sapper_Gefr : B_engineer_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sapper (Corporal)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_Sapper_Gefr.jpg";

	identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
	genericNames = "HispanicMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_BD_Unblsd_Gefr";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Explosives";
};

class SEP_B_GER_BD_Sapper : B_engineer_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sapper";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_Sapper.jpg";

	identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
	genericNames = "HispanicMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_BD_Unblsd";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_BD","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Explosives";
};
		
class SEP_B_GER_BD_Ofcr : B_officer_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Captain";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_Ofcr.jpg";

	identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
	genericNames = "HispanicMen";

	uniformClass = "SEP_B_GER_U_Officer_BD";

	linkedItems[] = {"H_SPE_GER_OfficerCap","G_SPE_Binoculars","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_OfficerCap","G_SPE_Binoculars","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	weapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_32Rnd_9x19),MAG_2(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_32Rnd_9x19),MAG_2(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
};

class SEP_B_GER_BD_Radioman : B_Soldier_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Radioman";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_Radioman.jpg";
	
	identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
	genericNames = "HispanicMen";
  
	uniformClass = "SEP_B_GER_U_FieldUniform_BD_Unblsd";

	linkedItems[] = {"H_SPE_GER_Cap","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Cap","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Radio";
};