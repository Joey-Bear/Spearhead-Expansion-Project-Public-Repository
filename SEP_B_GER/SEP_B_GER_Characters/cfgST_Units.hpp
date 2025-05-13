//===================================
//Custom Classes (INFANTRY (STURMTROOPERS) - FRENCH VOLUNTEERS)
//SEP Germany
//===================================

class SEP_B_GER_Sturm_French_Rflmn_STG : B_Soldier_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (StG 44)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_Rflmn_STG.jpg";
	
	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";
  
	uniformClass = "SEP_B_GER_U_FieldUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_STG44","Put","Throw"};
	respawnWeapons[] = {"SPE_STG44","Put","Throw"};

	magazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_A_frame_sturm_licht";
};

class SEP_B_GER_Sturm_French_Rflmn_MP40 : B_Soldier_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (MP 40)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_Rflmn_MP40.jpg";
	
	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";
  
	uniformClass = "SEP_B_GER_U_MixedUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_Sturm_French_Rflmn_G43 : B_Soldier_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (G43)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_Rflmn_G43.jpg";
	
	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";
  
	uniformClass = "SEP_B_GER_U_MixedUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestG43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestG43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_G43","Put","Throw"};
	respawnWeapons[] = {"SPE_G43","Put","Throw"};

	magazines[] = {MAG_15(SPE_10Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_15(SPE_10Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_Sturm_French_Rflmn_K98 : B_Soldier_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (K98)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_Rflmn_K98.jpg";
	
	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";
  
	uniformClass = "SEP_B_GER_U_FieldUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98_Late","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_Sturm_French_Rflmn_Flame : B_Soldier_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (Flammenwerfer 41)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_Rflmn_Flame.jpg";
	
	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";
  
	uniformClass = "SEP_B_GER_U_FieldUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","G_SPE_Dust_Goggles_2","V_SPE_GER_FWOVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","G_SPE_Dust_Goggles_2","V_SPE_GER_FWOVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};

	magazines[] = {MAG_4(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_4(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Flammenwerfer_41";
};

class SEP_B_GER_Sturm_French_Rflmn_Lite : B_Soldier_lite_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman, Light";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_Rflmn_Lite.jpg";
	
	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";
  
	uniformClass = "SEP_B_GER_U_FieldUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Cap","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Cap","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_STG44","Put","Throw"};
	respawnWeapons[] = {"SPE_STG44","Put","Throw"};

	magazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_A_frame_sturm_licht";
};	

class SEP_B_GER_Sturm_French_Rflmn_Unr : B_Soldier_unarmed_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman, Unarmed";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_Rflmn_Unr.jpg";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_Sturm_French_Gren : B_Soldier_GL_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Grenadier";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_Gren.jpg";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_MixedUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98_GW","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_GW","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_Sturm_French_MG_MG34 : B_support_MG_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Machine Gunner (MG 34)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_MG_MG34.jpg";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_MG_VolkGren_MG34";
};

class SEP_B_GER_Sturm_French_AMG : B_support_AMG_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Asst. Machine Gunner";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_AMG.jpg";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_MixedUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};
	
	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};

	backpack = "_xx_SEP_B_GER_B_MG_VolkGren_MG34";	
};

class SEP_B_GER_Sturm_French_MG_MG42 : B_support_MG_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Machine Gunner (MG 42)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_MG_MG42.jpg";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_MG_VolkGren_MG34";
};
	
class SEP_B_GER_Sturm_French_SL : B_Soldier_SL_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Squad Leader";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_SL.jpg";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_MixedUniform_ST_Sgt_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_Sturm_French_ASL : B_Soldier_TL_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Asst. Squad Leader";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_ASL.jpg";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_MixedUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_STG44","Put","Throw"};
	respawnWeapons[] = {"SPE_STG44","Put","Throw"};

	magazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_Sturm_French_Sniper : B_sniper_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sniper";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_Sniper.jpg";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_MixedUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98ZF39","Put","Throw"};
	respawnWeapons[] = {"SPE_K98ZF39","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_Sturm_French_AT_Grenadier : B_Soldier_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "AT soldier (AT Grenade)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_AT_Grenadier.jpg";
	
	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";
  
	uniformClass = "SEP_B_GER_U_MixedUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24x7)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24x7)};
	
	backpack = "B_SPE_GER_A_frame_AT";
};

class SEP_B_GER_Sturm_French_AT_PZ30 : B_soldier_AT_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "AT Soldier (Panzerfaust 30)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_AT_PZ30.jpg";   

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98_Late","Put","Throw","SPE_PzFaust_30m"};
	respawnWeapons[] = {"SPE_K98_Late","Put","Throw","SPE_PzFaust_30m"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_30m),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_30m),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_Sturm_French_AT_PZ60 : B_soldier_AT_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "AT Soldier (Panzerfaust 60)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_AT_PZ60.jpg";   

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_MixedUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98_Late","Put","Throw","SPE_PzFaust_60m"};
	respawnWeapons[] = {"SPE_K98_Late","Put","Throw","SPE_PzFaust_60m"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};
		
class SEP_B_GER_Sturm_French_Medic : B_medic_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Medic";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_Medic.jpg";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "U_SPE_ST_Medic_E44";

	linkedItems[] = {"H_SPE_GER_Helmet_Medic","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_Medic","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98_Late","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_US_M18_Violet)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_US_M18_Violet)};
	
	backpack = "_xx_SEP_B_GER_B_VolkGren_Medic";
};

class SEP_B_GER_Sturm_French_Sapper_Gefr : B_engineer_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sapper (Corporal)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_Sapper_Gefr.jpg";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestG43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestG43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_G43","Put","Throw"};
	respawnWeapons[] = {"SPE_G43","Put","Throw"};

	magazines[] = {MAG_15(SPE_10Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_15(SPE_10Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Engineer";
};
	
class SEP_B_GER_Sturm_French_Sapper : B_engineer_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sapper";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_Sapper.jpg";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Explosives";
};
		
class SEP_B_GER_Sturm_French_Ofcr : B_officer_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Captain";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_Ofcr.jpg";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_ST_French_Officer";

	linkedItems[] = {"H_SPE_GER_OfficerCap","G_SPE_Binoculars","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_OfficerCap","G_SPE_Binoculars","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	weapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_32Rnd_9x19),MAG_2(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_32Rnd_9x19),MAG_2(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
};

class SEP_B_GER_Sturm_French_Radioman : B_Soldier_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Radioman";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_Radioman.jpg";
	
	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";
  
	uniformClass = "SEP_B_GER_U_FieldUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98_Late","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Radio";
};

//===================================
//Custom Classes (INFANTRY (STURMTROOPERS) - EARLY)
//SEP Germany
//===================================

class SEP_B_GER_Sturm_Early_Rflmn_K98 : B_Soldier_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (K98)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_Early";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Rflmn_K98.jpg";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Gascape";
};

class SEP_B_GER_Sturm_Early_Rflmn_MP35 : B_Soldier_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (MP 35/l)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_Early";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Rflmn_K98.jpg";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_gry","V_SPE_erla_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_gry","V_SPE_erla_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_MP35","Put","Throw"};
	respawnWeapons[] = {"SPE_MP35","Put","Throw"};

	magazines[] = {MAG_15(SPE_32Rnd_MP35_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_15(SPE_32Rnd_MP35_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Gascape";
};

class SEP_B_GER_Sturm_Early_Rflmn_Flame : B_Soldier_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (Flammenwerfer 41)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_Early";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Rflmn_Flame.jpg";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","G_SPE_Dust_Goggles_2","V_SPE_GER_FWOVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","G_SPE_Dust_Goggles_2","V_SPE_GER_FWOVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};

	magazines[] = {MAG_4(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_4(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};

	backpack = "B_SPE_GER_Flammenwerfer_41";
};

class SEP_B_GER_Sturm_Early_Rflmn_Lite : B_Soldier_lite_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman, Light";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_Early";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Rflmn_Lite.jpg";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_ST_M40_cap","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_ST_M40_cap","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Beltbag";
};	

class SEP_B_GER_Sturm_Early_Rflmn_Unr : B_Soldier_unarmed_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman, Unarmed";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_Early";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Rflmn_Unr.jpg";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};
	
	backpack = "_xx_SEP_B_GER_B_Early_Gascape";
};

class SEP_B_GER_Sturm_Early_Gren : B_Soldier_GL_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Grenadier";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_Early";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Gren.jpg";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_gry","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_gry","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98_GW","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_GW","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Beltbag";
};

class SEP_B_GER_Sturm_Early_MG_MG34 : B_support_MG_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Machine Gunner (MG 34)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_Early";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_MG_MG34.jpg";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_gry","V_SPE_erla_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_gry","V_SPE_erla_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Beltbag";
};

class SEP_B_GER_Sturm_Early_AMG : B_support_AMG_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Asst. Machine Gunner";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_Early";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_AMG.jpg";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};
	
	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};

	backpack = "_xx_SEP_B_GER_B_Early_Ammoalt";
};
	
class SEP_B_GER_Sturm_Early_SL : B_Soldier_SL_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Squad Leader";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_Early";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_SL.jpg";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_ST_Soldier_m36_uscharf";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_gry","V_SPE_erla_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_gry","V_SPE_erla_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_MP35","Put","Throw"};
	respawnWeapons[] = {"SPE_MP35","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_MP35_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_MP35_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Gascape";
};

class SEP_B_GER_Sturm_Early_ASL : B_Soldier_TL_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Asst. Squad Leader";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_Early";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_ASL.jpg";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_ST_Soldier_m36_Sturmmann";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Beltbag";
};

class SEP_B_GER_Sturm_Early_Sniper : B_sniper_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sniper";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_Early";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Sniper.jpg";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_gry","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_gry","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SEP_WP_Gewehr98_Sniper","Put","Throw"};
	respawnWeapons[] = {"SEP_WP_Gewehr98_Sniper","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57_t),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57_t),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Beltbag";
};
		
class SEP_B_GER_Sturm_Early_Medic : B_medic_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Medic";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_Early";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Medic.jpg";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_gry","V_SPE_erla_SaniVest2","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_gry","V_SPE_erla_SaniVest2","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_ACC_K98_Bayo","SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_ACC_K98_Bayo","SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_US_M18_Violet)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_US_M18_Violet)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Medic";
};

class SEP_B_GER_Sturm_Early_Sapper_Gefr : B_engineer_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sapper (Corporal)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_Early";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Sapper_Gefr.jpg";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_ST_Soldier_m36_Sturmmann";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_gry","V_SPE_erla_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_gry","V_SPE_erla_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_MP35","Put","Throw"};
	respawnWeapons[] = {"SPE_MP35","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_MP35_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_MP35_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Explosives";
};
	
class SEP_B_GER_Sturm_Early_Sapper : B_engineer_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sapper";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_Early";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Sapper.jpg";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
	
	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Explosives";
};
		
class SEP_B_GER_Sturm_Early_Ofcr : B_officer_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Captain";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_Early";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Ofcr.jpg";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_ST_Hauptsturmfuhrer";

	linkedItems[] = {"H_SPE_GER_OfficerCap","G_SPE_Binoculars","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_OfficerCap","G_SPE_Binoculars","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	weapons[] = {"SPE_MP35","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MP35","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_32Rnd_MP35_9x19),MAG_2(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_32Rnd_MP35_9x19),MAG_2(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
};

class SEP_B_GER_Sturm_Early_Radioman : B_Soldier_F
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Radioman";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_Early";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Radioman.jpg";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
	
	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Radio";
};