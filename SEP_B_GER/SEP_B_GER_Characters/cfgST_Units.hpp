//===================================
//Custom Classes (INFANTRY (STURMTROOPERS) - FRENCH VOLUNTEERS)
//SEP Germany
//===================================

class SEP_B_GER_Sturm_French_Rflmn_STG : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (StG 44)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_Rflmn_STG.jpg";
	icon = "iconManSMG";
	role = "Assault";
	
	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";
  
	uniformClass = "SEP_B_GER_U_FieldUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_STG44","Put","Throw"};
	respawnWeapons[] = {"SPE_STG44","Put","Throw"};

	magazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_A_frame_sturm_licht";
};

class SEP_B_GER_Sturm_French_Rflmn_MP40 : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (MP 40)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_Rflmn_MP40.jpg";
	icon = "iconManSMG";
	role = "Rifleman";
	
	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";
  
	uniformClass = "SEP_B_GER_U_MixedUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_Sturm_French_Rflmn_G43 : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (Private 1 cl.)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_Rflmn_G43.jpg";
	icon = "iconManSemiauto";
	role = "Rifleman";
	
	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";
  
	uniformClass = "SEP_B_GER_U_MixedUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestG43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestG43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_G43","Put","Throw"};
	respawnWeapons[] = {"SPE_G43","Put","Throw"};

	magazines[] = {MAG_15(SPE_10Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_15(SPE_10Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_Sturm_French_Rflmn_K98 : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (K98k)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_Rflmn_K98.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";
  
	uniformClass = "SEP_B_GER_U_FieldUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98_Late","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_Sturm_French_Rflmn_Flame : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Flame Rifleman";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_Rflmn_Flame.jpg";
	icon = "iconMan";
	role = "Flamethrower";
	
	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";
  
	uniformClass = "SEP_B_GER_U_FieldUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","G_SPE_Dust_Goggles_2","V_SPE_GER_FWOVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","G_SPE_Dust_Goggles_2","V_SPE_GER_FWOVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};

	magazines[] = {MAG_4(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_4(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Flammenwerfer_41";
};

class SEP_B_GER_Sturm_French_Rflmn_Lite : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman, Light";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_Rflmn_Lite.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";
  
	uniformClass = "SEP_B_GER_U_FieldUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Cap","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Cap","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_STG44","Put","Throw"};
	respawnWeapons[] = {"SPE_STG44","Put","Throw"};

	magazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_A_frame_sturm_licht";
};	

class SEP_B_GER_Sturm_French_Rflmn_Unr : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (Unarmed)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_Rflmn_Unr.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_Sturm_French_Gren : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Grenadier";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_Gren.jpg";
	icon = "iconManGrenadier";
	role = "Grenadier";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_MixedUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestGrenadier","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestGrenadier","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98_GW","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_GW","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_A_frame_ST_Grenadier";
};

class SEP_B_GER_Sturm_French_MG_MG34 : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Machine-Gunner (MG 34)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_MG_MG34.jpg";
	icon = "iconManMG";
	role = "MachineGunner";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_MG_VolkGren_MG34";
};

class SEP_B_GER_Sturm_French_AMG : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Machine-Gunner (Assist.)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_AMG.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_MixedUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	
	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};

	backpack = "_xx_SEP_B_GER_B_MG_VolkGren_MG34";	
};

class SEP_B_GER_Sturm_French_MG_MG42 : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Machine-Gunner (MG 42)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_MG_MG42.jpg";
	icon = "iconManMG";
	role = "MachineGunner";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_MG_VolkGren_MG34";
};
	
class SEP_B_GER_Sturm_French_SL : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Squad Leader";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_SL.jpg";
	icon = "iconManOfficer";
	role = "SquadLeader";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_MixedUniform_ST_Sgt_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_Sturm_French_AT_Soldier_SL : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Squad Leader (Panzerfaust 60)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_AT_Soldier_SL.jpg";
	icon = "iconManOfficer";
	role = "SquadLeader";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_MixedUniform_ST_Sgt_French";

	linkedItems[] = {"H_SPE_GER_Helmet_M40_net","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M40_net","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw","SPE_PzFaust_60m"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw","SPE_PzFaust_60m"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24),MAG_1(SPE_1Rnd_PzFaust_60m)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24),MAG_1(SPE_1Rnd_PzFaust_60m)};
	
	backpack = "B_SPE_GER_Belt_bag_Gef";
};

class SEP_B_GER_Sturm_French_ASL : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Assist. Squad Leader";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_ASL.jpg";
	icon = "iconManLeader";
	role = "SquadLeader";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_MixedUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_STG44","Put","Throw"};
	respawnWeapons[] = {"SPE_STG44","Put","Throw"};

	magazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_Sturm_French_Sniper : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sniper";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_Sniper.jpg";
	icon = "iconManRecon";
	role = "Marksman";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_MixedUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98ZF39","Put","Throw"};
	respawnWeapons[] = {"SPE_K98ZF39","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_Sturm_French_AT_Grenadier : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "AT soldier (AT Grenade)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_AT_Grenadier.jpg";
	icon = "iconManAT";
	role = "MissileSpecialist";	
	
	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";
  
	uniformClass = "SEP_B_GER_U_MixedUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24x7)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24x7)};
	
	backpack = "B_SPE_GER_A_frame_AT";
};

class SEP_B_GER_Sturm_French_AT_PZ30 : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "AT Soldier (Panzerfaust 30)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_AT_PZ30.jpg";   
	icon = "iconManAT";
	role = "MissileSpecialist";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98_Late","Put","Throw","SPE_PzFaust_30m"};
	respawnWeapons[] = {"SPE_K98_Late","Put","Throw","SPE_PzFaust_30m"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_30m),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_30m),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Pzf_Belt_bag_zelt_Pzf30Loaded";
};

class SEP_B_GER_Sturm_French_AT_PZ60 : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "AT Soldier (Panzerfaust 60)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_AT_PZ60.jpg";   
	icon = "iconManAT";
	role = "MissileSpecialist";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_MixedUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98_Late","Put","Throw","SPE_PzFaust_60m"};
	respawnWeapons[] = {"SPE_K98_Late","Put","Throw","SPE_PzFaust_60m"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Pzf_Belt_bag_zelt_Loaded";
};

class SEP_B_GER_Sturm_French_LAT_Klein_Rifleman : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "AT Soldier (Faustpatrone)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_LAT_Klein_Rifleman.jpg";   
	icon = "iconManAT";
	role = "MissileSpecialist";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_MixedUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98_Late","Put","Throw","SPE_Faustpatrone"};
	respawnWeapons[] = {"SPE_K98_Late","Put","Throw","SPE_Faustpatrone"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_Faustpatrone),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_Faustpatrone),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Pzf_Belt_bag_zelt_KleinLoaded";
};

class SEP_B_GER_Sturm_French_AT_Soldier : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "AT Soldier (Panzerschreck)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_AT_Soldier.jpg";   
	icon = "iconManAT";
	role = "MissileSpecialist";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_MixedUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet_M40_net","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M40_net","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98_Late","Put","Throw","SPE_RPzB_54"};
	respawnWeapons[] = {"SPE_K98_Late","Put","Throw","SPE_RPzB_54"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_RPzBGr_4322),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_RPzBGr_4322),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_RPzB_Belt_bag_zelt_Loaded";
};

class SEP_B_GER_Sturm_French_AT_Soldier_Assistant : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Ammo Bearer (Panzerschreck)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_AT_Soldier_Assistant.jpg";   
	icon = "iconManRifleman";
	role = "Rifleman";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_MixedUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet_M40_net","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M40_net","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Blendkorper_2H),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Blendkorper_2H),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_RPzB_Belt_bag_Loaded";
};
		
class SEP_B_GER_Sturm_French_Medic : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Medic";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_Medic.jpg";
	icon = "iconManMedic";
	role = "CombatLifeSaver";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "U_SPE_ST_Medic_E44";

	linkedItems[] = {"H_SPE_GER_Helmet_Medic","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_Medic","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98_Late","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_US_M18_Violet)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_US_M18_Violet)};
	
	backpack = "_xx_SEP_B_GER_B_VolkGren_Medic";
};

class SEP_B_GER_Sturm_French_Sapper_Gefr : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sapper (Corporal)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_Sapper_Gefr.jpg";
	icon = "iconManExplosive";
	role = "Sapper";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestG43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestG43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_G43","Put","Throw"};
	respawnWeapons[] = {"SPE_G43","Put","Throw"};

	magazines[] = {MAG_15(SPE_10Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_15(SPE_10Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Engineer";
};
	
class SEP_B_GER_Sturm_French_Sapper : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sapper";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_Sapper.jpg";
	icon = "iconManExplosive";
	role = "Sapper";

	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Explosives";
};
		
class SEP_B_GER_Sturm_French_Ofcr : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Captain";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_Ofcr.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";

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

class SEP_B_GER_Sturm_French_Radioman : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Radioman";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_French";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_French_Radioman.jpg";
	icon = "iconManRTO";
	role = "RadioOperator";
	
	identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";
  
	uniformClass = "SEP_B_GER_U_FieldUniform_ST_French";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

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

class SEP_B_GER_Sturm_Early_Rflmn_K98 : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (K98k)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Rflmn_K98.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Gascape";
};

class SEP_B_GER_Sturm_Early_Rflmn_Lite : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (Light)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Rflmn_Lite.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_ST_M40_cap","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_ST_M40_cap","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "";
};

class SEP_B_GER_Sturm_Early_Rflmn_G98 : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (Gewehr 98)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Rflmn_G98.jpg";
	icon = "iconManSemiauto";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots_open";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SEP_WP_ACC_Gewehr98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SEP_WP_ACC_Gewehr98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SEP_WP_Gewehr98","Put","Throw"};
	respawnWeapons[] = {"SEP_WP_Gewehr98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Gascape";
};

class SEP_B_GER_Sturm_Early_Rflmn_Unr : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (Unarmed)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Rflmn_Unr.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};
	
	backpack = "_xx_SEP_B_GER_B_Early_Gascape";
};

class SEP_B_GER_Sturm_Early_AmmoBearer : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Ammo Bearer (GrW 278/1)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_AmmoBearer.jpg";
	icon = "iconManRifleman";
	role = "Assistant";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar_ST";
};

class SEP_B_GER_Sturm_Early_AmmoBearer_HMG : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Ammo Bearer (HMG)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_AmmoBearer_HMG.jpg";
	icon = "iconManRifleman";
	role = "Assistant";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Sturm_Early_HMGAmmo";
};

class SEP_B_GER_Sturm_Early_ASL : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Assist. Squad Leader";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_ASL.jpg";
	icon = "iconManLeader";
	role = "SquadLeader";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP35","Put","Throw"};
	respawnWeapons[] = {"SPE_MP35","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_MP35_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_MP35_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Gascape";
};

class SEP_B_GER_Sturm_Early_Mortar_AGunner : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Asst. Gunner (GrW 278/1)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Mortar_AGunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw","SPE_GrW278_1_Stand"};
	respawnWeapons[] = {"SPE_K98","Put","Throw","SPE_GrW278_1_Stand"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar_ST";
};

class SEP_B_GER_Sturm_Early_AHMGunner : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Asst. Gunner (HMG)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_AHMGunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw","SPE_Lafette_Tripod"};
	respawnWeapons[] = {"SPE_K98","Put","Throw","SPE_Lafette_Tripod"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Sturm_Early_HMGAmmo";
};

class SEP_B_GER_Sturm_Early_AT_Grenadier : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "AT Soldier (AT Grenade)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_AT_Grenadier.jpg";
	icon = "iconManAT";
	role = "MissileSpecialist";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24x7)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24x7)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Beltbag_AT";
};

class SEP_B_GER_Sturm_Early_Hauptsturmfuhrer : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Captain";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Hauptsturmfuhrer.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Hauptsturmfuhrer";

	linkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
	
	backpack = "";
};

class SEP_B_GER_Sturm_Early_Standartenfuhrer : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Colonel";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Standartenfuhrer.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Standartenfuhrer";

	linkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
	
	backpack = "";
};

class SEP_B_GER_Sturm_Early_Driver : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Driver";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Driver.jpg";
	icon = "iconManRifleman";
	role = "Crewman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "";
};

class SEP_B_GER_Sturm_Early_Driver_Lite : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Driver (Light)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Driver_Lite.jpg";
	icon = "iconManRifleman";
	role = "Crewman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_ST_M40_cap","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_ST_M40_cap","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "";
};

class SEP_B_GER_Sturm_Early_Obersturmfuhrer : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "First Lieutenant";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Obersturmfuhrer.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Obersturmfuhrer";

	linkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
	
	backpack = "";
};

class SEP_B_GER_Sturm_Early_Flamethrower_Operator : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Flame Rifleman";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Flamethrower_Operator.jpg";
	icon = "iconMan";
	role = "Flamethrower";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","G_SPE_Dust_Goggles_2","V_SPE_GER_FWOVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","G_SPE_Dust_Goggles_2","V_SPE_GER_FWOVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};

	magazines[] = {MAG_4(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_4(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Flammenwerfer_41";
};

class SEP_B_GER_Sturm_Early_Ober_Grenadier : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Grenadier";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Ober_Grenadier.jpg";
	icon = "iconManGrenadier";
	role = "Grenadier";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestGrenadier","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestGrenadier","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98_GW","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_GW","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Beltbag_Grenadier";
};

class SEP_B_GER_Sturm_Early_Mortar_Gunner : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Gunner (GrW 278/1)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Mortar_Gunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw","SPE_GrW278_1_Barrel"};
	respawnWeapons[] = {"SPE_K98","Put","Throw","SPE_GrW278_1_Barrel"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar_ST";
};

class SEP_B_GER_Sturm_Early_HMGunner : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Gunner (HMG / MG 34)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_HMGunner.jpg";
	icon = "iconManMG";
	role = "MachineGunner";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Sturm_Early_MGCan";
};

class SEP_B_GER_Sturm_Early_Halftrack_Driver : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Half-Track Driver";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Halftrack_Driver.jpg";
	icon = "iconManSMG";
	role = "Crewman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP35","Put","Throw"};
	respawnWeapons[] = {"SPE_MP35","Put","Throw"};

	magazines[] = {MAG_10(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "";
};

class SEP_B_GER_Sturm_Early_AMGunner : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Machine-Gunner (Assist.)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_AMGunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Sturm_Early_MGCan";
};

class SEP_B_GER_Sturm_Early_MGunner : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Machine-Gunner (MG 34)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_MGunner.jpg";
	icon = "iconManMG";
	role = "MachineGunner";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_A_frame_ST_MG";
};

class SEP_B_GER_Sturm_Early_Medic : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Medic";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Medic.jpg";
	icon = "iconManMedic";
	role = "CombatLifeSaver";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_SaniVest2","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_SaniVest2","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Medic";
};

class SEP_B_GER_Sturm_Early_Radioman : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Radioman";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Radioman.jpg";
	icon = "iconManRTO";
	role = "RadioOperator";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Radio";
};

class SEP_B_GER_Sturm_Early_Sapper : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sapper";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Sapper.jpg";
	icon = "iconManExplosive";
	role = "Sapper";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_SapperBackpack2";
};

class SEP_B_GER_Sturm_Early_Sapper_Gefr : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sapper (Corporal)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Sapper_Gefr.jpg";
	icon = "iconManExplosive";
	role = "Sapper";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_m36_uscharf";

	linkedItems[] = {"H_SPE_GER_ST_M40_cap","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_ST_M40_cap","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP35","Put","Throw","SPE_P08"};
	respawnWeapons[] = {"SPE_MP35","Put","Throw","SPE_P08"};

	magazines[] = {MAG_10(SPE_32Rnd_MP35_9x19),MAG_2(SPE_Shg24),MAG_3(SPE_8Rnd_9x19_P08)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_MP35_9x19),MAG_2(SPE_Shg24),MAG_3(SPE_8Rnd_9x19_P08)};
	
	backpack = "B_SPE_GER_SapperBackpack2";
};

class SEP_B_GER_Sturm_Early_Untersturmfuhrer : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Second Lieutenant";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Untersturmfuhrer.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Untersturmfuhrer";

	linkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP35","Put","Throw","SPE_P08"};
	respawnWeapons[] = {"SPE_MP35","Put","Throw","SPE_P08"};

	magazines[] = {MAG_10(SPE_32Rnd_MP35_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_MP35_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
	
	backpack = "";
};

class SEP_B_GER_Sturm_Early_Sentry_K98k : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sentry (K98k)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Sentry_K98k.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_ST_M40_cap","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_ST_M40_cap","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_A_frame_sturm";
};

class SEP_B_GER_Sturm_Early_Sentry_MP35 : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sentry (MP 35)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Sentry_MP35.jpg";
	icon = "iconManSMG";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_ST_M40_cap","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_ST_M40_cap","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP35","Put","Throw"};
	respawnWeapons[] = {"SPE_MP35","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_MP35_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_MP35_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_A_frame_sturm";
};

class SEP_B_GER_Sturm_Early_Sentry_MP40 : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sentry (MP 40)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Sentry_MP40.jpg";
	icon = "iconManSMG";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_ST_M40_cap","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_ST_M40_cap","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_A_frame_sturm";
};

class SEP_B_GER_Sturm_Early_Sniper : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sniper";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Sniper.jpg";
	icon = "iconManRecon";
	role = "Marksman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98ZF39","Put","Throw","SPE_P08"};
	respawnWeapons[] = {"SPE_K98ZF39","Put","Throw","SPE_P08"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24),MAG_3(SPE_8Rnd_9x19_P08)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24),MAG_3(SPE_8Rnd_9x19_P08)};
	
	backpack = "";
};

class SEP_B_GER_Sturm_Early_SL : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Squad Leader";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Sturm_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_SL.jpg";
	icon = "iconManOfficer";
	role = "SquadLeader";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_m36_uscharf";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Gascape";
};

/* Hidden */
class SEP_B_GER_Sturm_Early_Rflmn_MP35 : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 1;
	scopeCurator = 1;
	displayName = "Rifleman (MP 35/l)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_Early";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Rflmn_K98.jpg";
	icon = "iconManSMG";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_gry","V_SPE_erla_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_gry","V_SPE_erla_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP35","Put","Throw"};
	respawnWeapons[] = {"SPE_MP35","Put","Throw"};

	magazines[] = {MAG_15(SPE_32Rnd_MP35_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_15(SPE_32Rnd_MP35_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Gascape";
};

class SEP_B_GER_Sturm_Early_Rflmn_Flame : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 1;
	scopeCurator = 1;
	displayName = "Flame Rifleman";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_Early";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Rflmn_Flame.jpg";
	icon = "iconMan";
	role = "Flamethrower";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","G_SPE_Dust_Goggles_2","V_SPE_GER_FWOVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","G_SPE_Dust_Goggles_2","V_SPE_GER_FWOVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};

	magazines[] = {MAG_4(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_4(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};

	backpack = "B_SPE_GER_Flammenwerfer_41";
};

class SEP_B_GER_Sturm_Early_Gren : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 1;
	scopeCurator = 1;
	displayName = "Grenadier";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_Early";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Gren.jpg";
	icon = "iconManGrenadier";
	role = "Grenadier";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_gry","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_gry","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98_GW","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_GW","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Beltbag";
};

class SEP_B_GER_Sturm_Early_MG_MG34 : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 1;
	scopeCurator = 1;
	displayName = "Machine-Gunner (MG 34)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_Early";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_MG_MG34.jpg";
	icon = "iconManMG";
	role = "MachineGunner";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_gry","V_SPE_erla_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_gry","V_SPE_erla_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Beltbag";
};

class SEP_B_GER_Sturm_Early_AMG : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 1;
	scopeCurator = 1;
	displayName = "Machine-Gunner (Assist.)";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_Early";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_AMG.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_ST_Soldier_M36_Boots";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	
	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};

	backpack = "_xx_SEP_B_GER_B_Early_Ammoalt";
};
		
class SEP_B_GER_Sturm_Early_Ofcr : SEP_B_GER_Sturm_Soldier_Base
{
	author = "Joe";
	scope = 1;
	scopeCurator = 1;
	displayName = "Captain";
	side = 1;
	faction = "SPE_STURM";
	editorSubcategory="SEP_B_GER_Units_Infantry_Sturm_Early";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_Early_Ofcr.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";

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