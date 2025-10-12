class SEP_B_GER_LwFD_WIN_Rflmn_STG : SEP_B_GER_WIN_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (StG 44)";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory="SEP_B_GER_Units_Infantry_LwFD";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_LwFD_WIN_Rflmn_STG.jpg";
	icon = "iconManSMG";
	role = "Assault";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "SEP_B_GER_U_LwFD_Parka_grau";

	linkedItems[] = {"H_SPE_GER_Helmet_M40_lw_net_camo","V_SPE_GER_FSJ_STG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M40_lw_net_camo","V_SPE_GER_FSJ_STG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_STG44","Put","Throw"};
	respawnWeapons[] = {"SPE_STG44","Put","Throw"};

	magazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_FSJ_Belt_bag";
};

class SEP_B_GER_LwFD_WIN_Rflmn_MP40 : SEP_B_GER_WIN_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (MP 40)";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory="SEP_B_GER_Units_Infantry_LwFD";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_LwFD_WIN_Rflmn_MP40.jpg";
	icon = "iconManSMG";
	role = "Assault";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "SEP_B_GER_U_LwFD_Parka_grau_mix";

	linkedItems[] = {"H_SPE_GER_Helmet_M40_lw_camo","V_SPE_GER_FSJ_SMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M40_lw_camo","V_SPE_GER_FSJ_SMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_FSJ_Belt_bag_zelt";
};

class SEP_B_GER_LwFD_WIN_Rflmn_G43 : SEP_B_GER_WIN_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (G43)";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory="SEP_B_GER_Units_Infantry_LwFD";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_LwFD_WIN_Rflmn_G43.jpg";
	icon = "iconManSemiauto";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "SEP_B_GER_U_LwFD_Parka_grau_mix";

	linkedItems[] = {"H_SPE_GER_Helmet_M40_lw_net_camo","V_SPE_GER_FSJ_G43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M40_lw_net_camo","V_SPE_GER_FSJ_G43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_G43","Put","Throw"};
	respawnWeapons[] = {"SPE_G43","Put","Throw"};

	magazines[] = {MAG_15(SPE_10Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_15(SPE_10Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_FSJ_Belt_bag";
};

class SEP_B_GER_LwFD_WIN_Rflmn_K98 : SEP_B_GER_WIN_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (K98k)";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory="SEP_B_GER_Units_Infantry_LwFD";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_LwFD_WIN_Rflmn_K98.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "SEP_B_GER_U_LwFD_Parka_wht";

	linkedItems[] = {"H_SPE_GER_Helmet_M40_lw_camo","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M40_lw_camo","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98_Late","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_FSJ_Belt_bag";
};

class SEP_B_GER_LwFD_WIN_Rflmn_Lite : SEP_B_GER_WIN_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (Light)";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory="SEP_B_GER_Units_Infantry_LwFD";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_LwFD_WIN_Rflmn_K98.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "SEP_B_GER_U_LwFD_Parka_wht";

	linkedItems[] = {"H_SPE_GER_LW_Cap","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_LW_Cap","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98_Late","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_FSJ_Belt_bag";
};	

class SEP_B_GER_LwFD_WIN_Rflmn_Unr : SEP_B_GER_WIN_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (Unarmed)";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory="SEP_B_GER_Units_Infantry_LwFD";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_LwFD_WIN_Rflmn_Unr.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "SEP_B_GER_U_LwFD_Parka_wht";

	linkedItems[] = {"H_SPE_GER_Helmet_M40_lw_camo","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M40_lw_camo","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};
	
	backpack = "B_SPE_GER_FSJ_Belt_bag";
};

class SEP_B_GER_LwFD_WIN_Gren : SEP_B_GER_WIN_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Grenadier";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory="SEP_B_GER_Units_Infantry_LwFD";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_LwFD_WIN_Gren.jpg";
	icon = "iconManGrenadier";
	role = "Grenadier";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "SEP_B_GER_U_LwFD_Parka_grau";

	linkedItems[] = {"H_SPE_GER_Helmet_M40_lw_camo","V_SPE_GER_FSJ_VestGrenadier","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M40_lw_camo","V_SPE_GER_FSJ_VestGrenadier","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98_GW","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_GW","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_M2_ANM8),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_M2_ANM8),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_Ger_FSJ_Belt_bag_Grenadier";
};

class SEP_B_GER_LwFD_WIN_MG_MG34 : SEP_B_GER_WIN_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Machine Gunner (MG 34)";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory="SEP_B_GER_Units_Infantry_LwFD";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_LwFD_WIN_MG_MG34.jpg";
	icon = "iconManMG";
	role = "MachineGunner";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "SEP_B_GER_U_LwFD_Parka_grau_mix";

	linkedItems[] = {"H_SPE_GER_Helmet_M40_lw_camo","V_SPE_GER_FSJ_MG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M40_lw_camo","V_SPE_GER_FSJ_MG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_MG_VolkGren_MG34";
};

class SEP_B_GER_LwFD_WIN_AMG : SEP_B_GER_WIN_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Asst. Machine Gunner";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory="SEP_B_GER_Units_Infantry_LwFD";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_LwFD_WIN_AMG.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "SEP_B_GER_U_LwFD_Parka_wht";

	linkedItems[] = {"H_SPE_GER_Helmet_M40_lw_camo","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M40_lw_camo","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};
	
	weapons[] = {"SPE_K98_Late","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};

	backpack = "B_SPE_GER_Backpack_MGAmmo";
};

class SEP_B_GER_LwFD_WIN_MG_MG42 : SEP_B_GER_WIN_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Machine Gunner (MG 42)";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory="SEP_B_GER_Units_Infantry_LwFD";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_LwFD_WIN_MG_MG42.jpg";
	icon = "iconManMG";
	role = "MachineGunner";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "SEP_B_GER_U_LwFD_Parka_grau";

	linkedItems[] = {"H_SPE_GER_Helmet_M40_lw_camo","V_SPE_GER_FSJ_MG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M40_lw_camo","V_SPE_GER_FSJ_MG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_MG_VolkGren_MG34";
};
	
class SEP_B_GER_LwFD_WIN_SL : SEP_B_GER_WIN_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Squad Leader";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory="SEP_B_GER_Units_Infantry_LwFD";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_LwFD_WIN_SL.jpg";
	icon = "iconManOfficer";
	role = "SquadLeader";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "SEP_B_GER_U_LwFD_Parka_grau_mix_uffz";

	linkedItems[] = {"H_SPE_GER_Helmet_M40_lw_camo","V_SPE_GER_FSJ_NCO","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M40_lw_camo","V_SPE_GER_FSJ_NCO","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_FSJ_Belt_bag";
};

class SEP_B_GER_LwFD_WIN_ASL : SEP_B_GER_WIN_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Asst. Squad Leader";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory="SEP_B_GER_Units_Infantry_LwFD";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_LwFD_WIN_SL.jpg";
	icon = "iconManLeader";
	role = "SquadLeader";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "SEP_B_GER_U_LwFD_Parka_wht";

	linkedItems[] = {"H_SPE_GER_Helmet_M40_lw_camo","V_SPE_GER_FSJ_SMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M40_lw_camo","V_SPE_GER_FSJ_SMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_FSJ_Belt_bag";
};

class SEP_B_GER_LwFD_WIN_Sniper : SEP_B_GER_WIN_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sniper";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory="SEP_B_GER_Units_Infantry_LwFD";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_LwFD_WIN_Sniper.jpg";
	icon = "iconManRecon";
	role = "Marksman";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "SEP_B_GER_U_LwFD_Parka_wht";

	linkedItems[] = {"H_SPE_GER_Helmet_M40_lw_camo","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M40_lw_camo","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98ZF39","Put","Throw"};
	respawnWeapons[] = {"SPE_K98ZF39","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_FSJ_Belt_bag";
};

class SEP_B_GER_LwFD_WIN_AT_Grenadier : SEP_B_GER_WIN_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "AT soldier (AT Grenade)";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory="SEP_B_GER_Units_Infantry_LwFD";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_LwFD_WIN_Rflmn_K98.jpg";
	icon = "iconManAT";
	role = "MissileSpecialist";	
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "SEP_B_GER_U_LwFD_Parka_grau_mix";

	linkedItems[] = {"H_SPE_GER_Helmet_M40_lw_camo","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M40_lw_camo","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98_Late","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_A_frame_AT";
};

class SEP_B_GER_LwFD_WIN_AT_PZ30 : SEP_B_GER_WIN_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "AT Soldier (Panzerfaust 30)";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory="SEP_B_GER_Units_Infantry_LwFD";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_LwFD_WIN_AT_PZ30.jpg";   
	icon = "iconManAT";
	role = "MissileSpecialist";	

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "SEP_B_GER_U_LwFD_Parka_grau_mix";

	linkedItems[] = {"H_SPE_GER_Helmet_M40_lw_camo","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M40_lw_camo","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98_Late","SPE_PzFaust_30m","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_Late","SPE_PzFaust_30m","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_30m),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_30m),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_FSJ_Belt_bag";
};

class SEP_B_GER_LwFD_WIN_AT_PZ60 : SEP_B_GER_WIN_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "AT Soldier (Panzerfaust 60)";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory="SEP_B_GER_Units_Infantry_LwFD";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_LwFD_WIN_AT_PZ60.jpg";   
	icon = "iconManAT";
	role = "MissileSpecialist";	

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "SEP_B_GER_U_LwFD_Parka_grau_mix";

	linkedItems[] = {"H_SPE_GER_Helmet_M40_lw_camo","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M40_lw_camo","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98_Late","SPE_PzFaust_60m","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_Late","SPE_PzFaust_60m","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_FSJ_Belt_bag";
};
		
class SEP_B_GER_LwFD_WIN_Medic : SEP_B_GER_WIN_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Medic";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory="SEP_B_GER_Units_Infantry_LwFD";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_LwFD_WIN_Medic.jpg";
	icon = "iconManMedic";
	role = "CombatLifeSaver";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "SEP_B_GER_U_LwFD_Parka_grau";

	linkedItems[] = {"H_SPE_GER_Helmet_M40_lw_camo","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M40_lw_camo","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98_Late","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Handrauchzeichen_Violet)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Handrauchzeichen_Violet)};
	
	backpack = "B_SPE_GER_MedicBackpack";
};

class SEP_B_GER_LwFD_WIN_Radioman : SEP_B_GER_WIN_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Radioman";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory="SEP_B_GER_Units_Infantry_LwFD";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_LwFD_WIN_Radioman.jpg";
	icon = "iconManRTO";
	role = "RadioOperator";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "SEP_B_GER_U_LwFD_Parka_grau_mix";

	linkedItems[] = {"H_SPE_GER_LW_Cap","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_LW_Cap","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_K98_Late","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Radio";
};